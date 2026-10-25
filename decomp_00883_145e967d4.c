// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145e967d4 FUN_145e967d4 body=123 status=ok
// SIG undefined FUN_145e967d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e967d4(void)

{
  _DAT_14ca5fac0 = L"BASE";
  DAT_14ca5faea = 4;
  _DAT_14ca5fac8 = FUN_140b35ae4();
  _DAT_14ca5fad0 = DAT_14ca5d418;
  _DAT_14ca5fad8 = &LAB_14682652b;
  DAT_14ca5d418 = &DAT_14ca5fac0;
  DAT_14ca5d46d = DAT_14ca5d46d + '\x01';
  _DAT_14ca5fae0 = 0x100000000;
  if (*(char *)(_DAT_14ca5fac8 + 100) != '\0') {
    DAT_14ca5d46e = DAT_14ca5d46e + '\x01';
  }
  return;
}



// FUNCTION 145e96850 FUN_145e96850 body=261 status=ok
// SIG undefined FUN_145e96850(void)

void FUN_145e96850(void)

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
              0x110) < DAT_14ca5f048) {
    FUN_144b3d300(&DAT_14ca5f048);
    if (DAT_14ca5f048 == -1) {
      FUN_145e96956(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0x3ef;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5efc8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14309e84b);
      _Init_thread_footer(&DAT_14ca5f048);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e96956 FUN_145e96956 body=226 status=ok
// SIG undefined FUN_145e96956(void)

longlong * FUN_145e96956(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14630c5da;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e96a3e FUN_145e96a3e body=138 status=ok
// SIG undefined FUN_145e96a3e(void)

code * FUN_145e96a3e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000003f3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14630c6ea;
}



// FUNCTION 145e96ac8 FUN_145e96ac8 body=138 status=ok
// SIG undefined FUN_145e96ac8(void)

code * FUN_145e96ac8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TransmittanceLutTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x130000003f4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e96a3e;
}



// FUNCTION 145e96b52 FUN_145e96b52 body=292 status=ok
// SIG undefined FUN_145e96b52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e96b52(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5deb0) {
    FUN_144b3d300(&DAT_14ca5deb0);
    if (DAT_14ca5deb0 == -1) {
      FUN_145e96dc0();
      FUN_145e96c76();
      FUN_140db5666(&DAT_14ca5de08,0,&DAT_14ca5dda0,L"FSubstrateClosureTilePassCS",
                    L"/Engine/Private/Substrate/SubstrateMaterialClassification.usf",
                    L"ClosureTileMainCS",5,2,FUN_1473174b0,FUN_147317450,&LAB_145868362,
                    FUN_147317402,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca5f2f8);
      _DAT_14ca5de08 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14309a154);
      _Init_thread_footer(&DAT_14ca5deb0);
    }
  }
  return &DAT_14ca5de08;
}



// FUNCTION 145e96c76 FUN_145e96c76 body=205 status=ok
// SIG undefined FUN_145e96c76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e96c76(void)

{
  if ((DAT_14ca5de07 & 2) == 0) {
    DAT_14ca5de07 = DAT_14ca5de07 | 2;
    _DAT_14ca5dda8 = L"FSubstrateClosureTilePassCS";
    _DAT_14ca5ddc0 = FUN_146826540;
    _DAT_14ca5ddc8 = FUN_146825d77;
    _DAT_14ca5ddd0 = FUN_146825fd6;
    _DAT_14ca5ddd8 = FUN_1407e02ea;
    _DAT_14ca5dde0 = FUN_146826273;
    _DAT_14ca5ddb8 = FUN_1473173d4;
    _DAT_14ca5ddf8 = 0xffffffff000000e0;
    _DAT_14ca5de00 = 8;
    DAT_14ca5de04 = 0;
    _DAT_14ca5dde8 = &LAB_1473173fe;
    FUN_145e96d44();
    FUN_1407e00cc(&DAT_14ca5dda0);
    return;
  }
  return;
}



// FUNCTION 145e96d44 FUN_145e96d44 body=123 status=ok
// SIG undefined FUN_145e96d44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e96d44(void)

{
  _DAT_14ca5fc78 = L"BASE";
  DAT_14ca5fca2 = 4;
  _DAT_14ca5fc80 = FUN_140b35ae4();
  _DAT_14ca5fc88 = DAT_14ca5ddb0;
  _DAT_14ca5fc90 = &LAB_14682652b;
  DAT_14ca5ddb0 = &DAT_14ca5fc78;
  DAT_14ca5de05 = DAT_14ca5de05 + '\x01';
  _DAT_14ca5fc98 = 0x100000000;
  if (*(char *)(_DAT_14ca5fc80 + 100) != '\0') {
    DAT_14ca5de06 = DAT_14ca5de06 + '\x01';
  }
  return;
}



// FUNCTION 145e96dc0 FUN_145e96dc0 body=261 status=ok
// SIG undefined FUN_145e96dc0(void)

void FUN_145e96dc0(void)

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
              0x110) < DAT_14ca5f378) {
    FUN_144b3d300(&DAT_14ca5f378);
    if (DAT_14ca5f378 == -1) {
      FUN_145e96ec6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x80;
      local_58 = 0x2f9;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5f2f8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14309e893);
      _Init_thread_footer(&DAT_14ca5f378);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e96ec6 FUN_145e96ec6 body=226 status=ok
// SIG undefined FUN_145e96ec6(void)

longlong * FUN_145e96ec6(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14630ce76;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e96fae FUN_145e96fae body=138 status=ok
// SIG undefined FUN_145e96fae(void)

code * FUN_145e96fae(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000002fd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14731d3da;
}



// FUNCTION 145e97038 FUN_145e97038 body=138 status=ok
// SIG undefined FUN_145e97038(void)

code * FUN_145e97038(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxBytesPerPixel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000002ff;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14731d350;
}



// FUNCTION 145e970c2 FUN_145e970c2 body=292 status=ok
// SIG undefined FUN_145e970c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e970c2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5e5a0) {
    FUN_144b3d300(&DAT_14ca5e5a0);
    if (DAT_14ca5e5a0 == -1) {
      FUN_145e97330();
      FUN_145e971e6();
      FUN_140db5666(&DAT_14ca5e4f8,0,&DAT_14ca5e490,L"FSubstrateMaterialStencilTaggingPassPS",
                    L"/Engine/Private/Substrate/SubstrateTile.usf",L"StencilTaggingMainPS",3,1,
                    FUN_147317968,FUN_147317908,&LAB_14630a7d6,&LAB_147317904,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca5f5a0);
      _DAT_14ca5e4f8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14309a19c);
      _Init_thread_footer(&DAT_14ca5e5a0);
    }
  }
  return &DAT_14ca5e4f8;
}



// FUNCTION 145e971e6 FUN_145e971e6 body=205 status=ok
// SIG undefined FUN_145e971e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e971e6(void)

{
  if ((DAT_14ca5e4f7 & 2) == 0) {
    DAT_14ca5e4f7 = DAT_14ca5e4f7 | 2;
    _DAT_14ca5e498 = L"FSubstrateMaterialStencilTaggingPassPS";
    _DAT_14ca5e4b0 = FUN_146826540;
    _DAT_14ca5e4b8 = FUN_146825d77;
    _DAT_14ca5e4c0 = FUN_146825fd6;
    _DAT_14ca5e4c8 = FUN_1407e02ea;
    _DAT_14ca5e4d0 = FUN_146826273;
    _DAT_14ca5e4a8 = FUN_1473178d6;
    _DAT_14ca5e4e8 = 0xffffffff000000e0;
    _DAT_14ca5e4f0 = 8;
    DAT_14ca5e4f4 = 0;
    _DAT_14ca5e4d8 = &LAB_147317900;
    FUN_145e972b4();
    FUN_1407e00cc(&DAT_14ca5e490);
    return;
  }
  return;
}



// FUNCTION 145e972b4 FUN_145e972b4 body=123 status=ok
// SIG undefined FUN_145e972b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e972b4(void)

{
  _DAT_14ca5fd98 = L"BASE";
  DAT_14ca5fdc2 = 4;
  _DAT_14ca5fda0 = FUN_140b35ae4();
  _DAT_14ca5fda8 = DAT_14ca5e4a0;
  _DAT_14ca5fdb0 = &LAB_14682652b;
  DAT_14ca5e4a0 = &DAT_14ca5fd98;
  DAT_14ca5e4f5 = DAT_14ca5e4f5 + '\x01';
  _DAT_14ca5fdb8 = 0x100000000;
  if (*(char *)(_DAT_14ca5fda0 + 100) != '\0') {
    DAT_14ca5e4f6 = DAT_14ca5e4f6 + '\x01';
  }
  return;
}



// FUNCTION 145e97330 FUN_145e97330 body=261 status=ok
// SIG undefined FUN_145e97330(void)

void FUN_145e97330(void)

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
              0x110) < DAT_14ca5f620) {
    FUN_144b3d300(&DAT_14ca5f620);
    if (DAT_14ca5f620 == -1) {
      FUN_145e97436(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1a0;
      local_58 = 0x3f7;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5f5a0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14309e8cf);
      _Init_thread_footer(&DAT_14ca5f620);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e97436 FUN_145e97436 body=226 status=ok
// SIG undefined FUN_145e97436(void)

longlong * FUN_145e97436(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14630d3d2;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9751e FUN_145e9751e body=138 status=ok
// SIG undefined FUN_145e9751e(void)

code * FUN_145e9751e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DebugTileColor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x90000003f9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e975a8;
}



// FUNCTION 145e975a8 FUN_145e975a8 body=138 status=ok
// SIG undefined FUN_145e975a8(void)

undefined1 * FUN_145e975a8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145cf4068();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined **)(lVar2 + lVar4) = &DAT_14a1fbb18;
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"Substrate::FSubstrateTilePassVS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x3f8;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e9751a;
}



// FUNCTION 145e97632 FUN_145e97632 body=205 status=ok
// SIG undefined FUN_145e97632(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e97632(void)

{
  if ((DAT_14ca6139f & 2) == 0) {
    DAT_14ca6139f = DAT_14ca6139f | 2;
    _DAT_14ca61340 = L"FInjectAmbientCubemapPS";
    _DAT_14ca61358 = FUN_146826540;
    _DAT_14ca61360 = FUN_146825d77;
    _DAT_14ca61368 = FUN_146825fd6;
    _DAT_14ca61370 = FUN_1407e02ea;
    _DAT_14ca61378 = FUN_146826273;
    _DAT_14ca61350 = FUN_147322e2a;
    _DAT_14ca61390 = 0xffffffff000000e0;
    _DAT_14ca61398 = 8;
    DAT_14ca6139c = 0;
    _DAT_14ca61380 = &LAB_147322e54;
    FUN_145e97700();
    FUN_1407e00cc(&DAT_14ca61338);
    return;
  }
  return;
}



// FUNCTION 145e97700 FUN_145e97700 body=123 status=ok
// SIG undefined FUN_145e97700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e97700(void)

{
  _DAT_14ca63840 = L"BASE";
  DAT_14ca6386a = 4;
  _DAT_14ca63848 = FUN_140b35ae4();
  _DAT_14ca63850 = DAT_14ca61348;
  _DAT_14ca63858 = &LAB_14682652b;
  DAT_14ca61348 = &DAT_14ca63840;
  DAT_14ca6139d = DAT_14ca6139d + '\x01';
  _DAT_14ca63860 = 0x100000000;
  if (*(char *)(_DAT_14ca63848 + 100) != '\0') {
    DAT_14ca6139e = DAT_14ca6139e + '\x01';
  }
  return;
}



// FUNCTION 145e9777c FUN_145e9777c body=226 status=ok
// SIG undefined FUN_145e9777c(void)

longlong * FUN_145e9777c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14630f342;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e97864 FUN_145e97864 body=138 status=ok
// SIG undefined FUN_145e97864(void)

undefined1 * FUN_145e97864(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 999;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e97860;
}



// FUNCTION 145e978ee FUN_145e978ee body=144 status=ok
// SIG undefined FUN_145e978ee(void)

code * FUN_145e978ee(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145ddc35c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"AmbientCubemap";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FAmbientCubemapParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000003e8;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e97864;
}



// FUNCTION 145e9797e FUN_145e9797e body=292 status=ok
// SIG undefined FUN_145e9797e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e9797e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca61988) {
    FUN_144b3d300(&DAT_14ca61988);
    if (DAT_14ca61988 == -1) {
      FUN_145e97bec();
      FUN_145e97aa2();
      FUN_140db5666(&DAT_14ca618e0,0,&DAT_14ca61878,L"FCopyBackgroundVisibilityPS",
                    L"/Engine/Private/ComposeSeparateTranslucency.usf",L"CopyBackgroundVisibilityPS"
                    ,3,2,FUN_14732316a,FUN_14732310a,&LAB_1473230f2,&LAB_1473230ee,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca62dc8);
      _DAT_14ca618e0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430b1d05);
      _Init_thread_footer(&DAT_14ca61988);
    }
  }
  return &DAT_14ca618e0;
}



// FUNCTION 145e97aa2 FUN_145e97aa2 body=205 status=ok
// SIG undefined FUN_145e97aa2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e97aa2(void)

{
  if ((DAT_14ca618df & 2) == 0) {
    DAT_14ca618df = DAT_14ca618df | 2;
    _DAT_14ca61880 = L"FCopyBackgroundVisibilityPS";
    _DAT_14ca61898 = FUN_146826540;
    _DAT_14ca618a0 = FUN_146825d77;
    _DAT_14ca618a8 = FUN_146825fd6;
    _DAT_14ca618b0 = FUN_1407e02ea;
    _DAT_14ca618b8 = FUN_146826273;
    _DAT_14ca61890 = FUN_1473230c0;
    _DAT_14ca618d0 = 0xffffffff000000e0;
    _DAT_14ca618d8 = 8;
    DAT_14ca618dc = 0;
    _DAT_14ca618c0 = &LAB_1473230ea;
    FUN_145e97b70();
    FUN_1407e00cc(&DAT_14ca61878);
    return;
  }
  return;
}



// FUNCTION 145e97b70 FUN_145e97b70 body=123 status=ok
// SIG undefined FUN_145e97b70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e97b70(void)

{
  _DAT_14ca63960 = L"BASE";
  DAT_14ca6398a = 4;
  _DAT_14ca63968 = FUN_140b35ae4();
  _DAT_14ca63970 = DAT_14ca61888;
  _DAT_14ca63978 = &LAB_14682652b;
  DAT_14ca61888 = &DAT_14ca63960;
  DAT_14ca618dd = DAT_14ca618dd + '\x01';
  _DAT_14ca63980 = 0x100000000;
  if (*(char *)(_DAT_14ca63968 + 100) != '\0') {
    DAT_14ca618de = DAT_14ca618de + '\x01';
  }
  return;
}



// FUNCTION 145e97bec FUN_145e97bec body=261 status=ok
// SIG undefined FUN_145e97bec(void)

void FUN_145e97bec(void)

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
              0x110) < DAT_14ca62e48) {
    FUN_144b3d300(&DAT_14ca62e48);
    if (DAT_14ca62e48 == -1) {
      FUN_145e97cf2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x232;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca62dc8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430bde64);
      _Init_thread_footer(&DAT_14ca62e48);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e97cf2 FUN_145e97cf2 body=226 status=ok
// SIG undefined FUN_145e97cf2(void)

longlong * FUN_145e97cf2(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14630f4da;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e97dda FUN_145e97dda body=132 status=ok
// SIG undefined FUN_145e97dda(void)

undefined1 * FUN_145e97dda(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TranslucentHoldoutPointTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x233;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e97dd6;
}



// FUNCTION 145e97e5e FUN_145e97e5e body=144 status=ok
// SIG undefined FUN_145e97e5e(void)

code * FUN_145e97e5e(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000236;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14732653e;
}



// FUNCTION 145e97eee FUN_145e97eee body=292 status=ok
// SIG undefined FUN_145e97eee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e97eee(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca66118) {
    FUN_144b3d300(&DAT_14ca66118);
    if (DAT_14ca66118 == -1) {
      FUN_145e9815c();
      FUN_145e98012();
      FUN_140db5666(&DAT_14ca66070,0,&DAT_14ca66008,L"FVirtualSmPrintClipmapStatsCS",
                    L"/Engine/Private/VirtualShadowMaps/VirtualShadowMapPrintStats.usf",
                    L"PrintClipmapStats",5,1,FUN_14732c568,FUN_14732c508,&LAB_14732c4d0,
                    &LAB_14732c4cc,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca68178);
      _DAT_14ca66070 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430d8287);
      _Init_thread_footer(&DAT_14ca66118);
    }
  }
  return &DAT_14ca66070;
}



// FUNCTION 145e98012 FUN_145e98012 body=205 status=ok
// SIG undefined FUN_145e98012(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e98012(void)

{
  if ((DAT_14ca6606f & 2) == 0) {
    DAT_14ca6606f = DAT_14ca6606f | 2;
    _DAT_14ca66010 = L"FVirtualSmPrintClipmapStatsCS";
    _DAT_14ca66028 = FUN_146826540;
    _DAT_14ca66030 = FUN_146825d77;
    _DAT_14ca66038 = FUN_146825fd6;
    _DAT_14ca66040 = FUN_1407e02ea;
    _DAT_14ca66048 = FUN_146826273;
    _DAT_14ca66020 = FUN_14732c49e;
    _DAT_14ca66060 = 0xffffffff000000e0;
    _DAT_14ca66068 = 8;
    DAT_14ca6606c = 0;
    _DAT_14ca66050 = &LAB_14732c4c8;
    FUN_145e980e0();
    FUN_1407e00cc(&DAT_14ca66008);
    return;
  }
  return;
}



// FUNCTION 145e980e0 FUN_145e980e0 body=123 status=ok
// SIG undefined FUN_145e980e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e980e0(void)

{
  _DAT_14ca68f00 = L"BASE";
  DAT_14ca68f2a = 4;
  _DAT_14ca68f08 = FUN_140b35ae4();
  _DAT_14ca68f10 = DAT_14ca66018;
  _DAT_14ca68f18 = &LAB_14682652b;
  DAT_14ca66018 = &DAT_14ca68f00;
  DAT_14ca6606d = DAT_14ca6606d + '\x01';
  _DAT_14ca68f20 = 0x100000000;
  if (*(char *)(_DAT_14ca68f08 + 100) != '\0') {
    DAT_14ca6606e = DAT_14ca6606e + '\x01';
  }
  return;
}



// FUNCTION 145e9815c FUN_145e9815c body=261 status=ok
// SIG undefined FUN_145e9815c(void)

void FUN_145e9815c(void)

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
              0x110) < DAT_14ca681f8) {
    FUN_144b3d300(&DAT_14ca681f8);
    if (DAT_14ca681f8 == -1) {
      FUN_145e98262(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0xa79;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca68178,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e64ad);
      _Init_thread_footer(&DAT_14ca681f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e98262 FUN_145e98262 body=226 status=ok
// SIG undefined FUN_145e98262(void)

longlong * FUN_145e98262(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1463125c0;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9834a FUN_145e9834a body=138 status=ok
// SIG undefined FUN_145e9834a(void)

code * FUN_145e9834a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ShadowMapIdRangeStart";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000a7d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e983d4;
}



// FUNCTION 145e983d4 FUN_145e983d4 body=138 status=ok
// SIG undefined FUN_145e983d4(void)

code * FUN_145e983d4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AllocatedPageRectBounds";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< FIntVector4 >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000a7c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146312648;
}



// FUNCTION 145e9845e FUN_145e9845e body=292 status=ok
// SIG undefined FUN_145e9845e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e9845e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca72410) {
    FUN_144b3d300(&DAT_14ca72410);
    if (DAT_14ca72410 == -1) {
      FUN_145e986cc();
      FUN_145e98582();
      FUN_140db5666(&DAT_14ca72368,0,&DAT_14ca72300,L"FWaterInfoTextureMergePS",
                    L"/Engine/Private/WaterInfoTextureMerge.usf",L"Main",3,2,FUN_147347fe6,
                    FUN_147347f86,&LAB_147347f82,&LAB_147347f7e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca744c8);
      _DAT_14ca72368 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431386b7);
      _Init_thread_footer(&DAT_14ca72410);
    }
  }
  return &DAT_14ca72368;
}



// FUNCTION 145e98582 FUN_145e98582 body=205 status=ok
// SIG undefined FUN_145e98582(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e98582(void)

{
  if ((DAT_14ca72367 & 2) == 0) {
    DAT_14ca72367 = DAT_14ca72367 | 2;
    _DAT_14ca72308 = L"FWaterInfoTextureMergePS";
    _DAT_14ca72320 = FUN_146826540;
    _DAT_14ca72328 = FUN_146825d77;
    _DAT_14ca72330 = FUN_146825fd6;
    _DAT_14ca72338 = FUN_1407e02ea;
    _DAT_14ca72340 = FUN_146826273;
    _DAT_14ca72318 = FUN_147347f50;
    _DAT_14ca72358 = 0xffffffff000000e0;
    _DAT_14ca72360 = 8;
    DAT_14ca72364 = 0;
    _DAT_14ca72348 = &LAB_147347f7a;
    FUN_145e98650();
    FUN_1407e00cc(&DAT_14ca72300);
    return;
  }
  return;
}



// FUNCTION 145e98650 FUN_145e98650 body=123 status=ok
// SIG undefined FUN_145e98650(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e98650(void)

{
  _DAT_14ca745d8 = L"BASE";
  DAT_14ca74602 = 4;
  _DAT_14ca745e0 = FUN_140b35ae4();
  _DAT_14ca745e8 = DAT_14ca72310;
  _DAT_14ca745f0 = &LAB_14682652b;
  DAT_14ca72310 = &DAT_14ca745d8;
  DAT_14ca72365 = DAT_14ca72365 + '\x01';
  _DAT_14ca745f8 = 0x100000000;
  if (*(char *)(_DAT_14ca745e0 + 100) != '\0') {
    DAT_14ca72366 = DAT_14ca72366 + '\x01';
  }
  return;
}



// FUNCTION 145e986cc FUN_145e986cc body=261 status=ok
// SIG undefined FUN_145e986cc(void)

void FUN_145e986cc(void)

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
              0x110) < DAT_14ca74548) {
    FUN_144b3d300(&DAT_14ca74548);
    if (DAT_14ca74548 == -1) {
      FUN_14157dc72(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1a0;
      local_58 = 0x35;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca744c8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14313ee3b);
      _Init_thread_footer(&DAT_14ca74548);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e987d6 FUN_145e987d6 body=138 status=ok
// SIG undefined FUN_145e987d6(void)

code * FUN_145e987d6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WaterBodyDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x600000003c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147349e6e;
}



// FUNCTION 145e98860 FUN_145e98860 body=138 status=ok
// SIG undefined FUN_145e98860(void)

code * FUN_145e98860(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WaterBodyTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000003a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147349ef8;
}



// FUNCTION 145e988ea FUN_145e988ea body=292 status=ok
// SIG undefined FUN_145e988ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e988ea(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca72538) {
    FUN_144b3d300(&DAT_14ca72538);
    if (DAT_14ca72538 == -1) {
      FUN_145e98b58();
      FUN_145e98a0e();
      FUN_140db5666(&DAT_14ca72490,0,&DAT_14ca72428,L"FWaterInfoTextureBlurPS",
                    L"/Engine/Private/WaterInfoTextureBlur.usf",L"Main",3,2,FUN_1473480b0,
                    FUN_147348050,&LAB_14734804c,&LAB_147348048,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca74550);
      _DAT_14ca72490 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431386c3);
      _Init_thread_footer(&DAT_14ca72538);
    }
  }
  return &DAT_14ca72490;
}



// FUNCTION 145e98a0e FUN_145e98a0e body=205 status=ok
// SIG undefined FUN_145e98a0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e98a0e(void)

{
  if ((DAT_14ca7248f & 2) == 0) {
    DAT_14ca7248f = DAT_14ca7248f | 2;
    _DAT_14ca72430 = L"FWaterInfoTextureBlurPS";
    _DAT_14ca72448 = FUN_146826540;
    _DAT_14ca72450 = FUN_146825d77;
    _DAT_14ca72458 = FUN_146825fd6;
    _DAT_14ca72460 = FUN_1407e02ea;
    _DAT_14ca72468 = FUN_146826273;
    _DAT_14ca72440 = FUN_14734801a;
    _DAT_14ca72480 = 0xffffffff000000e0;
    _DAT_14ca72488 = 8;
    DAT_14ca7248c = 0;
    _DAT_14ca72470 = &LAB_147348044;
    FUN_145e98adc();
    FUN_1407e00cc(&DAT_14ca72428);
    return;
  }
  return;
}



// FUNCTION 145e98adc FUN_145e98adc body=123 status=ok
// SIG undefined FUN_145e98adc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e98adc(void)

{
  _DAT_14ca74608 = L"BASE";
  DAT_14ca74632 = 4;
  _DAT_14ca74610 = FUN_140b35ae4();
  _DAT_14ca74618 = DAT_14ca72438;
  _DAT_14ca74620 = &LAB_14682652b;
  DAT_14ca72438 = &DAT_14ca74608;
  DAT_14ca7248d = DAT_14ca7248d + '\x01';
  _DAT_14ca74628 = 0x100000000;
  if (*(char *)(_DAT_14ca74610 + 100) != '\0') {
    DAT_14ca7248e = DAT_14ca7248e + '\x01';
  }
  return;
}



// FUNCTION 145e98b58 FUN_145e98b58 body=261 status=ok
// SIG undefined FUN_145e98b58(void)

void FUN_145e98b58(void)

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
              0x110) < DAT_14ca745d0) {
    FUN_144b3d300(&DAT_14ca745d0);
    if (DAT_14ca745d0 == -1) {
      FUN_145e98c5e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0x5b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca74550,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14313ee47);
      _Init_thread_footer(&DAT_14ca745d0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e98c5e FUN_145e98c5e body=226 status=ok
// SIG undefined FUN_145e98c5e(void)

longlong * FUN_145e98c5e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146318d78;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e98d46 FUN_145e98d46 body=138 status=ok
// SIG undefined FUN_145e98d46(void)

code * FUN_145e98d46(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WaterInfoTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000005e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146318e88;
}



// FUNCTION 145e98dd0 FUN_145e98dd0 body=138 status=ok
// SIG undefined FUN_145e98dd0(void)

code * FUN_145e98dd0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BlurRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000063;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14734a00c;
}



// FUNCTION 145e98e5a FUN_145e98e5a body=292 status=ok
// SIG undefined FUN_145e98e5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e98e5a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa1f60) {
    FUN_144b3d300(&DAT_14caa1f60);
    if (DAT_14caa1f60 == -1) {
      FUN_145e990c8();
      FUN_145e98f7e();
      FUN_140db5666(&DAT_14caa1eb8,0,&DAT_14caa1e50,L"FLandscapeMergeTexturesPS",
                    L"/Engine/Private/Landscape/LandscapeMergeTexturesPS.usf",L"MergeTexture",3,2,
                    FUN_147453c60,FUN_147453c00,&LAB_147453bfc,&LAB_147453bf8,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14caa2338);
      _DAT_14caa1eb8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143243e9a);
      _Init_thread_footer(&DAT_14caa1f60);
    }
  }
  return &DAT_14caa1eb8;
}



// FUNCTION 145e98f7e FUN_145e98f7e body=205 status=ok
// SIG undefined FUN_145e98f7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e98f7e(void)

{
  if ((DAT_14caa1eb7 & 2) == 0) {
    DAT_14caa1eb7 = DAT_14caa1eb7 | 2;
    _DAT_14caa1e58 = L"FLandscapeMergeTexturesPS";
    _DAT_14caa1e70 = FUN_146826540;
    _DAT_14caa1e78 = FUN_146825d77;
    _DAT_14caa1e80 = FUN_146825fd6;
    _DAT_14caa1e88 = FUN_1407e02ea;
    _DAT_14caa1e90 = FUN_146826273;
    _DAT_14caa1e68 = FUN_147453bca;
    _DAT_14caa1ea8 = 0xffffffff000000e0;
    _DAT_14caa1eb0 = 8;
    DAT_14caa1eb4 = 0;
    _DAT_14caa1e98 = &LAB_147453bf4;
    FUN_145e9904c();
    FUN_1407e00cc(&DAT_14caa1e50);
    return;
  }
  return;
}



// FUNCTION 145e9904c FUN_145e9904c body=123 status=ok
// SIG undefined FUN_145e9904c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9904c(void)

{
  _DAT_14caa24d0 = L"BASE";
  DAT_14caa24fa = 4;
  _DAT_14caa24d8 = FUN_140b35ae4();
  _DAT_14caa24e0 = DAT_14caa1e60;
  _DAT_14caa24e8 = &LAB_14682652b;
  DAT_14caa1e60 = &DAT_14caa24d0;
  DAT_14caa1eb5 = DAT_14caa1eb5 + '\x01';
  _DAT_14caa24f0 = 0x100000000;
  if (*(char *)(_DAT_14caa24d8 + 100) != '\0') {
    DAT_14caa1eb6 = DAT_14caa1eb6 + '\x01';
  }
  return;
}



// FUNCTION 145e990c8 FUN_145e990c8 body=261 status=ok
// SIG undefined FUN_145e990c8(void)

void FUN_145e990c8(void)

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
              0x110) < DAT_14caa23b8) {
    FUN_144b3d300(&DAT_14caa23b8);
    if (DAT_14caa23b8 == -1) {
      FUN_145e991ce(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0xb82;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa2338,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143248ed2);
      _Init_thread_footer(&DAT_14caa23b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e991ce FUN_145e991ce body=226 status=ok
// SIG undefined FUN_145e991ce(void)

longlong * FUN_145e991ce(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1463245fe;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e992b6 FUN_145e992b6 body=138 status=ok
// SIG undefined FUN_145e992b6(void)

code * FUN_145e992b6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InSourceTextureSubregion";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000b84;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146324686;
}



// FUNCTION 145e99340 FUN_145e99340 body=138 status=ok
// SIG undefined FUN_145e99340(void)

code * FUN_145e99340(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InSourceTextureChannel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000b85;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e992b6;
}



// FUNCTION 145e993ca FUN_145e993ca body=292 status=ok
// SIG undefined FUN_145e993ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e993ca(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa3830) {
    FUN_144b3d300(&DAT_14caa3830);
    if (DAT_14caa3830 == -1) {
      FUN_145e99638();
      FUN_145e994ee();
      FUN_140db5666(&DAT_14caa3788,0,&DAT_14caa3720,L"FLandscapeLayersHeightmapsStitchHeightmapPS",
                    L"/Engine/Private/Landscape/LandscapeLayersHeightmapsPS.usf",L"StitchHeightmap",
                    3,1,FUN_14745ecd4,FUN_14745ec78,&LAB_14632494c,&LAB_14745ec74,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14caa5098);
      _DAT_14caa3788 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14324e0b8);
      _Init_thread_footer(&DAT_14caa3830);
    }
  }
  return &DAT_14caa3788;
}



// FUNCTION 145e994ee FUN_145e994ee body=205 status=ok
// SIG undefined FUN_145e994ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e994ee(void)

{
  if ((DAT_14caa3787 & 2) == 0) {
    DAT_14caa3787 = DAT_14caa3787 | 2;
    _DAT_14caa3728 = L"FLandscapeLayersHeightmapsStitchHeightmapPS";
    _DAT_14caa3740 = FUN_146826540;
    _DAT_14caa3748 = FUN_146825d77;
    _DAT_14caa3750 = FUN_146825fd6;
    _DAT_14caa3758 = FUN_1407e02ea;
    _DAT_14caa3760 = FUN_146826273;
    _DAT_14caa3738 = FUN_14745ec46;
    _DAT_14caa3778 = 0xffffffff000000e0;
    _DAT_14caa3780 = 8;
    DAT_14caa3784 = 0;
    _DAT_14caa3768 = &LAB_14745ec70;
    FUN_145e995bc();
    FUN_1407e00cc(&DAT_14caa3720);
    return;
  }
  return;
}



// FUNCTION 145e995bc FUN_145e995bc body=123 status=ok
// SIG undefined FUN_145e995bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e995bc(void)

{
  _DAT_14caa5a48 = L"BASE";
  DAT_14caa5a72 = 4;
  _DAT_14caa5a50 = FUN_140b35ae4();
  _DAT_14caa5a58 = DAT_14caa3730;
  _DAT_14caa5a60 = &LAB_14682652b;
  DAT_14caa3730 = &DAT_14caa5a48;
  DAT_14caa3785 = DAT_14caa3785 + '\x01';
  _DAT_14caa5a68 = 0x100000000;
  if (*(char *)(_DAT_14caa5a50 + 100) != '\0') {
    DAT_14caa3786 = DAT_14caa3786 + '\x01';
  }
  return;
}



// FUNCTION 145e99638 FUN_145e99638 body=261 status=ok
// SIG undefined FUN_145e99638(void)

void FUN_145e99638(void)

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
              0x110) < DAT_14caa5118) {
    FUN_144b3d300(&DAT_14caa5118);
    if (DAT_14caa5118 == -1) {
      FUN_145e9973e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0x585;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa5098,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14324e184);
      _Init_thread_footer(&DAT_14caa5118);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9973e FUN_145e9973e body=226 status=ok
// SIG undefined FUN_145e9973e(void)

longlong * FUN_145e9973e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146324acc;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e99826 FUN_145e99826 body=138 status=ok
// SIG undefined FUN_145e99826(void)

code * FUN_145e99826(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InNumSubsections";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000587;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146324b54;
}



// FUNCTION 145e998b0 FUN_145e998b0 body=138 status=ok
// SIG undefined FUN_145e998b0(void)

code * FUN_145e998b0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InSourceHeightmaps";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DArray<float2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000588;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e99826;
}



// FUNCTION 145e9993a FUN_145e9993a body=292 status=ok
// SIG undefined FUN_145e9993a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e9993a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa3ba8) {
    FUN_144b3d300(&DAT_14caa3ba8);
    if (DAT_14caa3ba8 == -1) {
      FUN_145e99ba8();
      FUN_145e99a5e();
      FUN_140db5666(&DAT_14caa3b00,0,&DAT_14caa3a98,L"FLandscapeLayersWeightmapsMergeEditLayersPS",
                    L"/Engine/Private/Landscape/LandscapeLayersWeightmapsPS.usf",L"MergeEditLayers",
                    3,1,FUN_14745ef0e,FUN_14745eeb2,&LAB_146324964,&LAB_14745eeae,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14caa5230);
      _DAT_14caa3b00 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14324e0dc);
      _Init_thread_footer(&DAT_14caa3ba8);
    }
  }
  return &DAT_14caa3b00;
}



// FUNCTION 145e99a5e FUN_145e99a5e body=205 status=ok
// SIG undefined FUN_145e99a5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e99a5e(void)

{
  if ((DAT_14caa3aff & 2) == 0) {
    DAT_14caa3aff = DAT_14caa3aff | 2;
    _DAT_14caa3aa0 = L"FLandscapeLayersWeightmapsMergeEditLayersPS";
    _DAT_14caa3ab8 = FUN_146826540;
    _DAT_14caa3ac0 = FUN_146825d77;
    _DAT_14caa3ac8 = FUN_146825fd6;
    _DAT_14caa3ad0 = FUN_1407e02ea;
    _DAT_14caa3ad8 = FUN_146826273;
    _DAT_14caa3ab0 = FUN_14745ee80;
    _DAT_14caa3af0 = 0xffffffff000000e0;
    _DAT_14caa3af8 = 8;
    DAT_14caa3afc = 0;
    _DAT_14caa3ae0 = &LAB_14745eeaa;
    FUN_145e99b2c();
    FUN_1407e00cc(&DAT_14caa3a98);
    return;
  }
  return;
}



// FUNCTION 145e99b2c FUN_145e99b2c body=123 status=ok
// SIG undefined FUN_145e99b2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e99b2c(void)

{
  _DAT_14caa5ad8 = L"BASE";
  DAT_14caa5b02 = 4;
  _DAT_14caa5ae0 = FUN_140b35ae4();
  _DAT_14caa5ae8 = DAT_14caa3aa8;
  _DAT_14caa5af0 = &LAB_14682652b;
  DAT_14caa3aa8 = &DAT_14caa5ad8;
  DAT_14caa3afd = DAT_14caa3afd + '\x01';
  _DAT_14caa5af8 = 0x100000000;
  if (*(char *)(_DAT_14caa5ae0 + 100) != '\0') {
    DAT_14caa3afe = DAT_14caa3afe + '\x01';
  }
  return;
}



// FUNCTION 145e99ba8 FUN_145e99ba8 body=261 status=ok
// SIG undefined FUN_145e99ba8(void)

void FUN_145e99ba8(void)

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
              0x110) < DAT_14caa52b0) {
    FUN_144b3d300(&DAT_14caa52b0);
    if (DAT_14caa52b0 == -1) {
      FUN_145e99cae(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x606;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa5230,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14324e1a8);
      _Init_thread_footer(&DAT_14caa52b0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e99cae FUN_145e99cae body=226 status=ok
// SIG undefined FUN_145e99cae(void)

longlong * FUN_145e99cae(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146324d6e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e99d96 FUN_145e99d96 body=138 status=ok
// SIG undefined FUN_145e99d96(void)

code * FUN_145e99d96(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InPackedWeightmaps";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DArray<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000609;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e99e20;
}



// FUNCTION 145e99e20 FUN_145e99e20 body=138 status=ok
// SIG undefined FUN_145e99e20(void)

code * FUN_145e99e20(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InStartIndexInEditLayersMergeInfos";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000608;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146324df6;
}



// FUNCTION 145e99eaa FUN_145e99eaa body=292 status=ok
// SIG undefined FUN_145e99eaa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e99eaa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa4738) {
    FUN_144b3d300(&DAT_14caa4738);
    if (DAT_14caa4738 == -1) {
      FUN_145e9a118();
      FUN_145e99fce();
      FUN_140db5666(&DAT_14caa4690,0,&DAT_14caa4628,L"FCopyQuadsMultiSourcePS",
                    L"/Engine/Private/Landscape/LandscapeEditLayersUtils.usf",
                    L"CopyQuadsMultiSourcePS",3,2,FUN_14745f67a,FUN_14745f61e,&LAB_1463249b4,
                    &LAB_14745f61a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14caa5780);
      _DAT_14caa4690 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14324e154);
      _Init_thread_footer(&DAT_14caa4738);
    }
  }
  return &DAT_14caa4690;
}



// FUNCTION 145e99fce FUN_145e99fce body=205 status=ok
// SIG undefined FUN_145e99fce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e99fce(void)

{
  if ((DAT_14caa468f & 2) == 0) {
    DAT_14caa468f = DAT_14caa468f | 2;
    _DAT_14caa4630 = L"FCopyQuadsMultiSourcePS";
    _DAT_14caa4648 = FUN_146826540;
    _DAT_14caa4650 = FUN_146825d77;
    _DAT_14caa4658 = FUN_146825fd6;
    _DAT_14caa4660 = FUN_1407e02ea;
    _DAT_14caa4668 = FUN_146826273;
    _DAT_14caa4640 = FUN_14745f5ec;
    _DAT_14caa4680 = 0xffffffff000000e0;
    _DAT_14caa4688 = 8;
    DAT_14caa468c = 0;
    _DAT_14caa4670 = &LAB_14745f616;
    FUN_145e9a09c();
    FUN_1407e00cc(&DAT_14caa4628);
    return;
  }
  return;
}



// FUNCTION 145e9a09c FUN_145e9a09c body=123 status=ok
// SIG undefined FUN_145e9a09c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9a09c(void)

{
  _DAT_14caa5cb8 = L"BASE";
  DAT_14caa5ce2 = 4;
  _DAT_14caa5cc0 = FUN_140b35ae4();
  _DAT_14caa5cc8 = DAT_14caa4638;
  _DAT_14caa5cd0 = &LAB_14682652b;
  DAT_14caa4638 = &DAT_14caa5cb8;
  DAT_14caa468d = DAT_14caa468d + '\x01';
  _DAT_14caa5cd8 = 0x100000000;
  if (*(char *)(_DAT_14caa5cc0 + 100) != '\0') {
    DAT_14caa468e = DAT_14caa468e + '\x01';
  }
  return;
}



// FUNCTION 145e9a118 FUN_145e9a118 body=261 status=ok
// SIG undefined FUN_145e9a118(void)

void FUN_145e9a118(void)

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
              0x110) < DAT_14caa5800) {
    FUN_144b3d300(&DAT_14caa5800);
    if (DAT_14caa5800 == -1) {
      FUN_145e9a21e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x210;
      local_58 = 0x7db;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa5780,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14324e220);
      _Init_thread_footer(&DAT_14caa5800);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9a21e FUN_145e9a21e body=226 status=ok
// SIG undefined FUN_145e9a21e(void)

longlong * FUN_145e9a21e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146325450;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9a306 FUN_145e9a306 body=138 status=ok
// SIG undefined FUN_145e9a306(void)

undefined1 * FUN_145e9a306(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x7dc;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e9a302;
}



// FUNCTION 145e9a390 FUN_145e9a390 body=138 status=ok
// SIG undefined FUN_145e9a390(void)

code * FUN_145e9a390(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InQuadInfos";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000007dd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e9a306;
}



// FUNCTION 145e9a41a FUN_145e9a41a body=292 status=ok
// SIG undefined FUN_145e9a41a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e9a41a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf4ea8) {
    FUN_144b3d300(&DAT_14caf4ea8);
    if (DAT_14caf4ea8 == -1) {
      FUN_145e9a688();
      FUN_145e9a53e();
      FUN_140db5666(&DAT_14caf4e00,0,&DAT_14caf4d98,L"FParticleSimVisualizePS",
                    L"/Engine/Private/ParticleSimVisualizeShader.usf",L"PixelMain",3,1,FUN_147c10086
                    ,FUN_147c10026,&LAB_147c10022,&LAB_147c1001e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14caf5488);
      _DAT_14caf4e00 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1435d2a58);
      _Init_thread_footer(&DAT_14caf4ea8);
    }
  }
  return &DAT_14caf4e00;
}



// FUNCTION 145e9a53e FUN_145e9a53e body=205 status=ok
// SIG undefined FUN_145e9a53e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9a53e(void)

{
  if ((DAT_14caf4dff & 2) == 0) {
    DAT_14caf4dff = DAT_14caf4dff | 2;
    _DAT_14caf4da0 = L"FParticleSimVisualizePS";
    _DAT_14caf4db8 = FUN_146826540;
    _DAT_14caf4dc0 = FUN_146825d77;
    _DAT_14caf4dc8 = FUN_146825fd6;
    _DAT_14caf4dd0 = FUN_1407e02ea;
    _DAT_14caf4dd8 = FUN_146826273;
    _DAT_14caf4db0 = FUN_147c0fff0;
    _DAT_14caf4df0 = 0xffffffff000000e0;
    _DAT_14caf4df8 = 8;
    DAT_14caf4dfc = 0;
    _DAT_14caf4de0 = &LAB_147c1001a;
    FUN_145e9a60c();
    FUN_1407e00cc(&DAT_14caf4d98);
    return;
  }
  return;
}



// FUNCTION 145e9a60c FUN_145e9a60c body=123 status=ok
// SIG undefined FUN_145e9a60c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9a60c(void)

{
  _DAT_14caf5938 = L"BASE";
  DAT_14caf5962 = 4;
  _DAT_14caf5940 = FUN_140b35ae4();
  _DAT_14caf5948 = DAT_14caf4da8;
  _DAT_14caf5950 = &LAB_14682652b;
  DAT_14caf4da8 = &DAT_14caf5938;
  DAT_14caf4dfd = DAT_14caf4dfd + '\x01';
  _DAT_14caf5958 = 0x100000000;
  if (*(char *)(_DAT_14caf5940 + 100) != '\0') {
    DAT_14caf4dfe = DAT_14caf4dfe + '\x01';
  }
  return;
}



// FUNCTION 145e9a688 FUN_145e9a688 body=261 status=ok
// SIG undefined FUN_145e9a688(void)

void FUN_145e9a688(void)

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
              0x110) < DAT_14caf5508) {
    FUN_144b3d300(&DAT_14caf5508);
    if (DAT_14caf5508 == -1) {
      FUN_145e9a78e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 2000;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caf5488,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1435df544);
      _Init_thread_footer(&DAT_14caf5508);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9a78e FUN_145e9a78e body=226 status=ok
// SIG undefined FUN_145e9a78e(void)

longlong * FUN_145e9a78e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1463f0244;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9a876 FUN_145e9a876 body=138 status=ok
// SIG undefined FUN_145e9a876(void)

code * FUN_145e9a876(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CurveTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000007d4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e9a900;
}



// FUNCTION 145e9a900 FUN_145e9a900 body=138 status=ok
// SIG undefined FUN_145e9a900(void)

code * FUN_145e9a900(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PositionTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000007d3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c231dc;
}



// FUNCTION 145e9a98a FUN_145e9a98a body=292 status=ok
// SIG undefined FUN_145e9a98a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e9a98a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cafad58) {
    FUN_144b3d300(&DAT_14cafad58);
    if (DAT_14cafad58 == -1) {
      FUN_145e9abf8();
      FUN_145e9aaae();
      FUN_140db5666(&DAT_14cafacb0,0,&DAT_14cafac48,L"FMoveWholeIndirectionTextureCS",
                    L"/Engine/Private/VolumetricLightmapStreaming.usf",
                    L"MoveWholeIndirectionTextureCS",5,1,FUN_147cafc36,FUN_147cafbd6,&LAB_147cafbb8,
                    &LAB_147cafbb4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cafde18);
      _DAT_14cafacb0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143657486);
      _Init_thread_footer(&DAT_14cafad58);
    }
  }
  return &DAT_14cafacb0;
}



// FUNCTION 145e9aaae FUN_145e9aaae body=205 status=ok
// SIG undefined FUN_145e9aaae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9aaae(void)

{
  if ((DAT_14cafacaf & 2) == 0) {
    DAT_14cafacaf = DAT_14cafacaf | 2;
    _DAT_14cafac50 = L"FMoveWholeIndirectionTextureCS";
    _DAT_14cafac68 = FUN_146826540;
    _DAT_14cafac70 = FUN_146825d77;
    _DAT_14cafac78 = FUN_146825fd6;
    _DAT_14cafac80 = FUN_1407e02ea;
    _DAT_14cafac88 = FUN_146826273;
    _DAT_14cafac60 = FUN_147cafb86;
    _DAT_14cafaca0 = 0xffffffff000000e0;
    _DAT_14cafaca8 = 8;
    DAT_14cafacac = 0;
    _DAT_14cafac90 = &LAB_147cafbb0;
    FUN_145e9ab7c();
    FUN_1407e00cc(&DAT_14cafac48);
    return;
  }
  return;
}



// FUNCTION 145e9ab7c FUN_145e9ab7c body=123 status=ok
// SIG undefined FUN_145e9ab7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9ab7c(void)

{
  _DAT_14cafe180 = L"BASE";
  DAT_14cafe1aa = 4;
  _DAT_14cafe188 = FUN_140b35ae4();
  _DAT_14cafe190 = DAT_14cafac58;
  _DAT_14cafe198 = &LAB_14682652b;
  DAT_14cafac58 = &DAT_14cafe180;
  DAT_14cafacad = DAT_14cafacad + '\x01';
  _DAT_14cafe1a0 = 0x100000000;
  if (*(char *)(_DAT_14cafe188 + 100) != '\0') {
    DAT_14cafacae = DAT_14cafacae + '\x01';
  }
  return;
}



// FUNCTION 145e9abf8 FUN_145e9abf8 body=261 status=ok
// SIG undefined FUN_145e9abf8(void)

void FUN_145e9abf8(void)

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
              0x110) < DAT_14cafde98) {
    FUN_144b3d300(&DAT_14cafde98);
    if (DAT_14cafde98 == -1) {
      FUN_145e9acfe(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x1e8;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cafde18,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14365f99e);
      _Init_thread_footer(&DAT_14cafde98);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9acfe FUN_145e9acfe body=226 status=ok
// SIG undefined FUN_145e9acfe(void)

longlong * FUN_145e9acfe(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1463fbe54;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9ade6 FUN_145e9ade6 body=138 status=ok
// SIG undefined FUN_145e9ade6(void)

code * FUN_145e9ade6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000001eb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cbf410;
}



// FUNCTION 145e9ae70 FUN_145e9ae70 body=138 status=ok
// SIG undefined FUN_145e9ae70(void)

code * FUN_145e9ae70(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OldIndirectionTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D<uint4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000001ec;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e9ade6;
}



// FUNCTION 145e9aefa FUN_145e9aefa body=292 status=ok
// SIG undefined FUN_145e9aefa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e9aefa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb01588) {
    FUN_144b3d300(&DAT_14cb01588);
    if (DAT_14cb01588 == -1) {
      FUN_145e9b168();
      FUN_145e9b01e();
      FUN_140db5666(&DAT_14cb014e0,0,&DAT_14cb01478,L"FSpecularProfileCopyCS",
                    L"/Engine/Private/SpecularProfile.usf",L"MainCS",5,2,FUN_147cdb110,FUN_147cdb0b0
                    ,&LAB_147cdb098,&LAB_147cdb094,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cb01e20
                   );
      _DAT_14cb014e0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143681034);
      _Init_thread_footer(&DAT_14cb01588);
    }
  }
  return &DAT_14cb014e0;
}



// FUNCTION 145e9b01e FUN_145e9b01e body=205 status=ok
// SIG undefined FUN_145e9b01e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9b01e(void)

{
  if ((DAT_14cb014df & 2) == 0) {
    DAT_14cb014df = DAT_14cb014df | 2;
    _DAT_14cb01480 = L"FSpecularProfileCopyCS";
    _DAT_14cb01498 = FUN_146826540;
    _DAT_14cb014a0 = FUN_146825d77;
    _DAT_14cb014a8 = FUN_146825fd6;
    _DAT_14cb014b0 = FUN_1407e02ea;
    _DAT_14cb014b8 = FUN_146826273;
    _DAT_14cb01490 = FUN_147cdb066;
    _DAT_14cb014d0 = 0xffffffff000000e0;
    _DAT_14cb014d8 = 8;
    DAT_14cb014dc = 0;
    _DAT_14cb014c0 = &LAB_147cdb090;
    FUN_145e9b0ec();
    FUN_1407e00cc(&DAT_14cb01478);
    return;
  }
  return;
}



// FUNCTION 145e9b0ec FUN_145e9b0ec body=123 status=ok
// SIG undefined FUN_145e9b0ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9b0ec(void)

{
  _DAT_14cb01fe0 = L"BASE";
  DAT_14cb0200a = 4;
  _DAT_14cb01fe8 = FUN_140b35ae4();
  _DAT_14cb01ff0 = DAT_14cb01488;
  _DAT_14cb01ff8 = &LAB_14682652b;
  DAT_14cb01488 = &DAT_14cb01fe0;
  DAT_14cb014dd = DAT_14cb014dd + '\x01';
  _DAT_14cb02000 = 0x100000000;
  if (*(char *)(_DAT_14cb01fe8 + 100) != '\0') {
    DAT_14cb014de = DAT_14cb014de + '\x01';
  }
  return;
}



// FUNCTION 145e9b168 FUN_145e9b168 body=261 status=ok
// SIG undefined FUN_145e9b168(void)

void FUN_145e9b168(void)

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
              0x110) < DAT_14cb01ea0) {
    FUN_144b3d300(&DAT_14cb01ea0);
    if (DAT_14cb01ea0 == -1) {
      FUN_145e9b26e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x41;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb01e20,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143697ab8);
      _Init_thread_footer(&DAT_14cb01ea0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9b26e FUN_145e9b26e body=226 status=ok
// SIG undefined FUN_145e9b26e(void)

longlong * FUN_145e9b26e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1463fd914;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9b356 FUN_145e9b356 body=138 status=ok
// SIG undefined FUN_145e9b356(void)

code * FUN_145e9b356(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TargetIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2400000047;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463fd99c;
}



// FUNCTION 145e9b3e0 FUN_145e9b3e0 body=138 status=ok
// SIG undefined FUN_145e9b3e0(void)

code * FUN_145e9b3e0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SourceResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000044;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147ce3882;
}



// FUNCTION 145e9b46a FUN_145e9b46a body=290 status=ok
// SIG undefined FUN_145e9b46a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e9b46a(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2c1f0) {
    FUN_144b3d300(&DAT_14cb2c1f0);
    if (DAT_14cb2c1f0 == -1) {
      uVar1 = FUN_145e9b6d6();
      FUN_145e9b58c();
      FUN_140db5666(&DAT_14cb2c148,0,&DAT_14cb2c0e0,L"FNiagaraDrawIndirectResetCountsCS",
                    L"/Plugin/FX/Niagara/Private/NiagaraDrawIndirectArgsGen.usf",L"ResetCountsCS",5,
                    1,FUN_148042c60,FUN_148042c06,&LAB_148042c02,&LAB_148042bfe,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,uVar1);
      _DAT_14cb2c148 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438f5ce9);
      _Init_thread_footer(&DAT_14cb2c1f0);
    }
  }
  return &DAT_14cb2c148;
}



// FUNCTION 145e9b58c FUN_145e9b58c body=206 status=ok
// SIG undefined FUN_145e9b58c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e9b58c(void)

{
  if ((DAT_14cb2c147 & 2) == 0) {
    DAT_14cb2c147 = DAT_14cb2c147 | 2;
    _DAT_14cb2c0e8 = L"FNiagaraDrawIndirectResetCountsCS";
    _DAT_14cb2c100 = FUN_146826540;
    _DAT_14cb2c108 = FUN_146825d77;
    _DAT_14cb2c110 = FUN_146825fd6;
    _DAT_14cb2c118 = FUN_1407e02ea;
    _DAT_14cb2c120 = FUN_146826273;
    _DAT_14cb2c0f8 = FUN_148042bd0;
    _DAT_14cb2c138 = 0xffffffff000000e0;
    _DAT_14cb2c140 = 8;
    DAT_14cb2c144 = 0;
    _DAT_14cb2c128 = &LAB_148042bfa;
    FUN_145e9b65a();
    FUN_1407e00cc(&DAT_14cb2c0e0);
  }
  return &DAT_14cb2c0e0;
}



// FUNCTION 145e9b65a FUN_145e9b65a body=123 status=ok
// SIG undefined FUN_145e9b65a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9b65a(void)

{
  _DAT_14cb2d290 = L"BASE";
  DAT_14cb2d2ba = 4;
  _DAT_14cb2d298 = FUN_140b35ae4();
  _DAT_14cb2d2a0 = DAT_14cb2c0f0;
  _DAT_14cb2d2a8 = &LAB_14682652b;
  DAT_14cb2c0f0 = &DAT_14cb2d290;
  DAT_14cb2c145 = DAT_14cb2c145 + '\x01';
  _DAT_14cb2d2b0 = 0x100000000;
  if (*(char *)(_DAT_14cb2d298 + 100) != '\0') {
    DAT_14cb2c146 = DAT_14cb2c146 + '\x01';
  }
  return;
}



// FUNCTION 145e9b6d6 FUN_145e9b6d6 body=268 status=ok
// SIG undefined FUN_145e9b6d6(void)

undefined * FUN_145e9b6d6(void)

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
              0x110) < DAT_14cb2cee8) {
    FUN_144b3d300(&DAT_14cb2cee8);
    if (DAT_14cb2cee8 == -1) {
      FUN_145e9b7e4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 100;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb2ce68,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438f6d2f);
      _Init_thread_footer(&DAT_14cb2cee8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb2ce68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9b7e4 FUN_145e9b7e4 body=226 status=ok
// SIG undefined FUN_145e9b7e4(void)

longlong * FUN_145e9b7e4(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14645f88c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9b8cc FUN_145e9b8cc body=132 status=ok
// SIG undefined FUN_145e9b8cc(void)

undefined1 * FUN_145e9b8cc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x65;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e9b8c8;
}



// FUNCTION 145e9b950 FUN_145e9b950 body=138 status=ok
// SIG undefined FUN_145e9b950(void)

code * FUN_145e9b950(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWInstanceCounts";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000066;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e9b8cc;
}



// FUNCTION 145e9b9da FUN_145e9b9da body=292 status=ok
// SIG undefined FUN_145e9b9da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e9b9da(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2de48) {
    FUN_144b3d300(&DAT_14cb2de48);
    if (DAT_14cb2de48 == -1) {
      FUN_145e9bc48();
      FUN_145e9bafe();
      FUN_140db5666(&DAT_14cb2dda0,0,&DAT_14cb2dd38,L"FNiagaraSimpleElement2DArrayAttribute",
                    L"/Plugin/FX/Niagara/Private/NiagaraBatchedElements.usf",L"MainPS",3,1,
                    FUN_14804c702,FUN_14804c6a2,&LAB_14804c69e,&LAB_14804c69a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cb333d0);
      _DAT_14cb2dda0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438f8670);
      _Init_thread_footer(&DAT_14cb2de48);
    }
  }
  return &DAT_14cb2dda0;
}



// FUNCTION 145e9bafe FUN_145e9bafe body=205 status=ok
// SIG undefined FUN_145e9bafe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9bafe(void)

{
  if ((DAT_14cb2dd9f & 2) == 0) {
    DAT_14cb2dd9f = DAT_14cb2dd9f | 2;
    _DAT_14cb2dd40 = L"FNiagaraSimpleElement2DArrayAttribute";
    _DAT_14cb2dd58 = FUN_146826540;
    _DAT_14cb2dd60 = FUN_146825d77;
    _DAT_14cb2dd68 = FUN_146825fd6;
    _DAT_14cb2dd70 = FUN_1407e02ea;
    _DAT_14cb2dd78 = FUN_146826273;
    _DAT_14cb2dd50 = FUN_14804c66c;
    _DAT_14cb2dd90 = 0xffffffff000000e0;
    _DAT_14cb2dd98 = 8;
    DAT_14cb2dd9c = 0;
    _DAT_14cb2dd80 = &LAB_14804c696;
    FUN_145e9bbcc();
    FUN_1407e00cc(&DAT_14cb2dd38);
    return;
  }
  return;
}



// FUNCTION 145e9bbcc FUN_145e9bbcc body=123 status=ok
// SIG undefined FUN_145e9bbcc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9bbcc(void)

{
  _DAT_14cb35360 = L"BASE";
  DAT_14cb3538a = 4;
  _DAT_14cb35368 = FUN_140b35ae4();
  _DAT_14cb35370 = DAT_14cb2dd48;
  _DAT_14cb35378 = &LAB_14682652b;
  DAT_14cb2dd48 = &DAT_14cb35360;
  DAT_14cb2dd9d = DAT_14cb2dd9d + '\x01';
  _DAT_14cb35380 = 0x100000000;
  if (*(char *)(_DAT_14cb35368 + 100) != '\0') {
    DAT_14cb2dd9e = DAT_14cb2dd9e + '\x01';
  }
  return;
}



// FUNCTION 145e9bc48 FUN_145e9bc48 body=261 status=ok
// SIG undefined FUN_145e9bc48(void)

void FUN_145e9bc48(void)

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
              0x110) < DAT_14cb33450) {
    FUN_144b3d300(&DAT_14cb33450);
    if (DAT_14cb33450 == -1) {
      FUN_145e9bd4e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0x1f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb333d0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb688);
      _Init_thread_footer(&DAT_14cb33450);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9bd4e FUN_145e9bd4e body=226 status=ok
// SIG undefined FUN_145e9bd4e(void)

longlong * FUN_145e9bd4e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146461122;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9be36 FUN_145e9be36 body=138 status=ok
// SIG undefined FUN_145e9be36(void)

code * FUN_145e9be36(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InColorWeights";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000021;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1464611aa;
}



// FUNCTION 145e9bec0 FUN_145e9bec0 body=138 status=ok
// SIG undefined FUN_145e9bec0(void)

code * FUN_145e9bec0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InGamma";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000022;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e9be36;
}



// FUNCTION 145e9bf4a FUN_145e9bf4a body=206 status=ok
// SIG undefined FUN_145e9bf4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e9bf4a(void)

{
  if ((DAT_14cb2f50f & 2) == 0) {
    DAT_14cb2f50f = DAT_14cb2f50f | 2;
    _DAT_14cb2f4b0 = L"FNiagaraRibbonCreateIndexBufferCS";
    _DAT_14cb2f4c8 = FUN_146826540;
    _DAT_14cb2f4d0 = FUN_146825d77;
    _DAT_14cb2f4d8 = FUN_146825fd6;
    _DAT_14cb2f4e0 = FUN_1407e02ea;
    _DAT_14cb2f4e8 = FUN_146826273;
    _DAT_14cb2f4c0 = FUN_14804d976;
    _DAT_14cb2f500 = 0xffffffff000000e0;
    _DAT_14cb2f508 = 8;
    DAT_14cb2f50c = 0;
    _DAT_14cb2f4f0 = &LAB_14804d9a0;
    FUN_145e9c018();
    FUN_1407e00cc(&DAT_14cb2f4a8);
  }
  return &DAT_14cb2f4a8;
}



// FUNCTION 145e9c018 FUN_145e9c018 body=123 status=ok
// SIG undefined FUN_145e9c018(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9c018(void)

{
  _DAT_14cb35720 = L"BASE";
  DAT_14cb3574a = 4;
  _DAT_14cb35728 = FUN_140b35ae4();
  _DAT_14cb35730 = DAT_14cb2f4b8;
  _DAT_14cb35738 = &LAB_14682652b;
  DAT_14cb2f4b8 = &DAT_14cb35720;
  DAT_14cb2f50d = DAT_14cb2f50d + '\x01';
  _DAT_14cb35740 = 0x100000000;
  if (*(char *)(_DAT_14cb35728 + 100) != '\0') {
    DAT_14cb2f50e = DAT_14cb2f50e + '\x01';
  }
  return;
}



// FUNCTION 145e9c098 FUN_145e9c098 body=138 status=ok
// SIG undefined FUN_145e9c098(void)

code * FUN_145e9c098(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"EmitterParticleCountsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint32>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000010f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148052bb4;
}



// FUNCTION 145e9c122 FUN_145e9c122 body=138 status=ok
// SIG undefined FUN_145e9c122(void)

code * FUN_145e9c122(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SegmentBitMask";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x640000011b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148052764;
}



// FUNCTION 145e9c1ac FUN_145e9c1ac body=292 status=ok
// SIG undefined FUN_145e9c1ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e9c1ac(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb48508) {
    FUN_144b3d300(&DAT_14cb48508);
    if (DAT_14cb48508 == -1) {
      FUN_145e9c41a();
      FUN_145e9c2d0();
      FUN_140db5666(&DAT_14cb48460,0,&DAT_14cb483f8,L"FWaterQuadTreeBucketCountsCS",
                    L"/Plugin/Water/Private/WaterQuadTreeDraws.usf",L"MainCS",5,2,FUN_1483fce5c,
                    FUN_1483fcdfc,&LAB_1483fcdf8,&LAB_1483fcdf4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cb48f40);
      _DAT_14cb48460 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143b3bd25);
      _Init_thread_footer(&DAT_14cb48508);
    }
  }
  return &DAT_14cb48460;
}



// FUNCTION 145e9c2d0 FUN_145e9c2d0 body=205 status=ok
// SIG undefined FUN_145e9c2d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9c2d0(void)

{
  if ((DAT_14cb4845f & 2) == 0) {
    DAT_14cb4845f = DAT_14cb4845f | 2;
    _DAT_14cb48400 = L"FWaterQuadTreeBucketCountsCS";
    _DAT_14cb48418 = FUN_146826540;
    _DAT_14cb48420 = FUN_146825d77;
    _DAT_14cb48428 = FUN_146825fd6;
    _DAT_14cb48430 = FUN_1407e02ea;
    _DAT_14cb48438 = FUN_146826273;
    _DAT_14cb48410 = FUN_1483fcdc6;
    _DAT_14cb48450 = 0xffffffff000000e0;
    _DAT_14cb48458 = 8;
    DAT_14cb4845c = 0;
    _DAT_14cb48440 = &LAB_1483fcdf0;
    FUN_145e9c39e();
    FUN_1407e00cc(&DAT_14cb483f8);
    return;
  }
  return;
}



// FUNCTION 145e9c39e FUN_145e9c39e body=123 status=ok
// SIG undefined FUN_145e9c39e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9c39e(void)

{
  _DAT_14cb49378 = L"BASE";
  DAT_14cb493a2 = 4;
  _DAT_14cb49380 = FUN_140b35ae4();
  _DAT_14cb49388 = DAT_14cb48408;
  _DAT_14cb49390 = &LAB_14682652b;
  DAT_14cb48408 = &DAT_14cb49378;
  DAT_14cb4845d = DAT_14cb4845d + '\x01';
  _DAT_14cb49398 = 0x100000000;
  if (*(char *)(_DAT_14cb49380 + 100) != '\0') {
    DAT_14cb4845e = DAT_14cb4845e + '\x01';
  }
  return;
}



// FUNCTION 145e9c41a FUN_145e9c41a body=261 status=ok
// SIG undefined FUN_145e9c41a(void)

void FUN_145e9c41a(void)

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
              0x110) < DAT_14cb48fc0) {
    FUN_144b3d300(&DAT_14cb48fc0);
    if (DAT_14cb48fc0 == -1) {
      FUN_145e9c520(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x124;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb48f40,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143b3d225);
      _Init_thread_footer(&DAT_14cb48fc0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9c520 FUN_145e9c520 body=226 status=ok
// SIG undefined FUN_145e9c520(void)

longlong * FUN_145e9c520(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146488cc8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9c608 FUN_145e9c608 body=138 status=ok
// SIG undefined FUN_145e9c608(void)

code * FUN_145e9c608(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"QuadTreeTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000126;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1484009ca;
}



// FUNCTION 145e9c692 FUN_145e9c692 body=138 status=ok
// SIG undefined FUN_145e9c692(void)

code * FUN_145e9c692(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumDispatchedThreads";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000012a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146488d50;
}



// FUNCTION 145e9c71c FUN_145e9c71c body=292 status=ok
// SIG undefined FUN_145e9c71c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e9c71c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb508a0) {
    FUN_144b3d300(&DAT_14cb508a0);
    if (DAT_14cb508a0 == -1) {
      FUN_145e9c98a();
      FUN_145e9c840();
      FUN_140db5666(&DAT_14cb507f8,0,&DAT_14cb50790,L"FJacobiPassCS",
                    L"/GbxWindShaders/JacobiSolve.usf",L"JacobiIteration",5,1,FUN_1485ec78e,
                    FUN_1485ec72e,&LAB_1485ec72a,&LAB_1485ec726,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cb50d38);
      _DAT_14cb507f8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143beebc5);
      _Init_thread_footer(&DAT_14cb508a0);
    }
  }
  return &DAT_14cb507f8;
}



// FUNCTION 145e9c840 FUN_145e9c840 body=205 status=ok
// SIG undefined FUN_145e9c840(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9c840(void)

{
  if ((DAT_14cb507f7 & 2) == 0) {
    DAT_14cb507f7 = DAT_14cb507f7 | 2;
    _DAT_14cb50798 = L"FJacobiPassCS";
    _DAT_14cb507b0 = FUN_146826540;
    _DAT_14cb507b8 = FUN_146825d77;
    _DAT_14cb507c0 = FUN_146825fd6;
    _DAT_14cb507c8 = FUN_1407e02ea;
    _DAT_14cb507d0 = FUN_146826273;
    _DAT_14cb507a8 = FUN_1485ec6f8;
    _DAT_14cb507e8 = 0xffffffff000000e0;
    _DAT_14cb507f0 = 8;
    DAT_14cb507f4 = 0;
    _DAT_14cb507d8 = &LAB_1485ec722;
    FUN_145e9c90e();
    FUN_1407e00cc(&DAT_14cb50790);
    return;
  }
  return;
}



// FUNCTION 145e9c90e FUN_145e9c90e body=123 status=ok
// SIG undefined FUN_145e9c90e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9c90e(void)

{
  _DAT_14cb50f68 = L"BASE";
  DAT_14cb50f92 = 4;
  _DAT_14cb50f70 = FUN_140b35ae4();
  _DAT_14cb50f78 = DAT_14cb507a0;
  _DAT_14cb50f80 = &LAB_14682652b;
  DAT_14cb507a0 = &DAT_14cb50f68;
  DAT_14cb507f5 = DAT_14cb507f5 + '\x01';
  _DAT_14cb50f88 = 0x100000000;
  if (*(char *)(_DAT_14cb50f70 + 100) != '\0') {
    DAT_14cb507f6 = DAT_14cb507f6 + '\x01';
  }
  return;
}



// FUNCTION 145e9c98a FUN_145e9c98a body=261 status=ok
// SIG undefined FUN_145e9c98a(void)

void FUN_145e9c98a(void)

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
              0x110) < DAT_14cb50db8) {
    FUN_144b3d300(&DAT_14cb50db8);
    if (DAT_14cb50db8 == -1) {
      FUN_145e9ca90(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x94;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb50d38,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143bf2e16);
      _Init_thread_footer(&DAT_14cb50db8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9ca90 FUN_145e9ca90 body=226 status=ok
// SIG undefined FUN_145e9ca90(void)

longlong * FUN_145e9ca90(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1464a4aa0;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9cb78 FUN_145e9cb78 body=138 status=ok
// SIG undefined FUN_145e9cb78(void)

undefined1 * FUN_145e9cb78(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_144a8d58a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GbxWindParams";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FGbxWindUniformBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x95;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cb50380;
  return &LAB_145e9cb74;
}



// FUNCTION 145e9cc02 FUN_145e9cc02 body=138 status=ok
// SIG undefined FUN_145e9cc02(void)

code * FUN_145e9cc02(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(undefined2 **)(lVar2 + lVar3) = &DAT_149e060e8;
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000097;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485ed844;
}



// FUNCTION 145e9cc8c FUN_145e9cc8c body=292 status=ok
// SIG undefined FUN_145e9cc8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e9cc8c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf86a8) {
    FUN_144b3d300(&DAT_14cbf86a8);
    if (DAT_14cbf86a8 == -1) {
      FUN_145e9cefa();
      FUN_145e9cdb0();
      FUN_140db5666(&DAT_14cbf8600,0,&DAT_14cbf8598,L"FDrawDebugClusterAABBCS",
                    L"/Engine/Private/HairStrands/HairStrandsDebug.usf",L"MainDrawDebugAABBCS",5,1,
                    FUN_149083936,FUN_1490838d6,FUN_14667ab58,&LAB_1490838d2,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cbf8da0);
      _DAT_14cbf8600 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144421533);
      _Init_thread_footer(&DAT_14cbf86a8);
    }
  }
  return &DAT_14cbf8600;
}



// FUNCTION 145e9cdb0 FUN_145e9cdb0 body=205 status=ok
// SIG undefined FUN_145e9cdb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9cdb0(void)

{
  if ((DAT_14cbf85ff & 2) == 0) {
    DAT_14cbf85ff = DAT_14cbf85ff | 2;
    _DAT_14cbf85a0 = L"FDrawDebugClusterAABBCS";
    _DAT_14cbf85b8 = FUN_146826540;
    _DAT_14cbf85c0 = FUN_146825d77;
    _DAT_14cbf85c8 = FUN_146825fd6;
    _DAT_14cbf85d0 = FUN_1407e02ea;
    _DAT_14cbf85d8 = FUN_146826273;
    _DAT_14cbf85b0 = FUN_1490838a4;
    _DAT_14cbf85f0 = 0xffffffff000000e0;
    _DAT_14cbf85f8 = 8;
    DAT_14cbf85fc = 0;
    _DAT_14cbf85e0 = &LAB_1490838ce;
    FUN_145e9ce7e();
    FUN_1407e00cc(&DAT_14cbf8598);
    return;
  }
  return;
}



// FUNCTION 145e9ce7e FUN_145e9ce7e body=123 status=ok
// SIG undefined FUN_145e9ce7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9ce7e(void)

{
  _DAT_14cbf9148 = L"BASE";
  DAT_14cbf9172 = 4;
  _DAT_14cbf9150 = FUN_140b35ae4();
  _DAT_14cbf9158 = DAT_14cbf85a8;
  _DAT_14cbf9160 = &LAB_14682652b;
  DAT_14cbf85a8 = &DAT_14cbf9148;
  DAT_14cbf85fd = DAT_14cbf85fd + '\x01';
  _DAT_14cbf9168 = 0x100000000;
  if (*(char *)(_DAT_14cbf9150 + 100) != '\0') {
    DAT_14cbf85fe = DAT_14cbf85fe + '\x01';
  }
  return;
}



// FUNCTION 145e9cefa FUN_145e9cefa body=261 status=ok
// SIG undefined FUN_145e9cefa(void)

void FUN_145e9cefa(void)

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
              0x110) < DAT_14cbf8e20) {
    FUN_144b3d300(&DAT_14cbf8e20);
    if (DAT_14cbf8e20 == -1) {
      FUN_145e9d000(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x10c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbf8da0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1444275a6);
      _Init_thread_footer(&DAT_14cbf8e20);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9d000 FUN_145e9d000 body=226 status=ok
// SIG undefined FUN_145e9d000(void)

longlong * FUN_145e9d000(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14667b032;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9d0e8 FUN_145e9d0e8 body=138 status=ok
// SIG undefined FUN_145e9d0e8(void)

code * FUN_145e9d0e8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ClusterCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000112;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490865c6;
}



// FUNCTION 145e9d172 FUN_145e9d172 body=138 status=ok
// SIG undefined FUN_145e9d172(void)

code * FUN_145e9d172(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GroupAABBBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000010f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490866da;
}



// FUNCTION 145e9d1fc FUN_145e9d1fc body=292 status=ok
// SIG undefined FUN_145e9d1fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e9d1fc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf99d8) {
    FUN_144b3d300(&DAT_14cbf99d8);
    if (DAT_14cbf99d8 == -1) {
      FUN_145e9d46a();
      FUN_145e9d320();
      FUN_140db5666(&DAT_14cbf9930,0,&DAT_14cbf98c8,L"FHairStrandTextureCopyCS",
                    L"/Engine/Private/HairStrands/HairStrandsTexturesGeneration.usf",L"MainCS",5,1,
                    FUN_149092614,FUN_1490925b4,&LAB_14667bcf2,&LAB_1490925b0,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cbfa128);
      _DAT_14cbf9930 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144436b7c);
      _Init_thread_footer(&DAT_14cbf99d8);
    }
  }
  return &DAT_14cbf9930;
}



// FUNCTION 145e9d320 FUN_145e9d320 body=205 status=ok
// SIG undefined FUN_145e9d320(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9d320(void)

{
  if ((DAT_14cbf992f & 2) == 0) {
    DAT_14cbf992f = DAT_14cbf992f | 2;
    _DAT_14cbf98d0 = L"FHairStrandTextureCopyCS";
    _DAT_14cbf98e8 = FUN_146826540;
    _DAT_14cbf98f0 = FUN_146825d77;
    _DAT_14cbf98f8 = FUN_146825fd6;
    _DAT_14cbf9900 = FUN_1407e02ea;
    _DAT_14cbf9908 = FUN_146826273;
    _DAT_14cbf98e0 = FUN_149092582;
    _DAT_14cbf9920 = 0xffffffff000000e0;
    _DAT_14cbf9928 = 8;
    DAT_14cbf992c = 0;
    _DAT_14cbf9910 = &LAB_1490925ac;
    FUN_145e9d3ee();
    FUN_1407e00cc(&DAT_14cbf98c8);
    return;
  }
  return;
}



// FUNCTION 145e9d3ee FUN_145e9d3ee body=123 status=ok
// SIG undefined FUN_145e9d3ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9d3ee(void)

{
  _DAT_14cbfa4e8 = L"BASE";
  DAT_14cbfa512 = 4;
  _DAT_14cbfa4f0 = FUN_140b35ae4();
  _DAT_14cbfa4f8 = DAT_14cbf98d8;
  _DAT_14cbfa500 = &LAB_14682652b;
  DAT_14cbf98d8 = &DAT_14cbfa4e8;
  DAT_14cbf992d = DAT_14cbf992d + '\x01';
  _DAT_14cbfa508 = 0x100000000;
  if (*(char *)(_DAT_14cbfa4f0 + 100) != '\0') {
    DAT_14cbf992e = DAT_14cbf992e + '\x01';
  }
  return;
}



// FUNCTION 145e9d46a FUN_145e9d46a body=261 status=ok
// SIG undefined FUN_145e9d46a(void)

void FUN_145e9d46a(void)

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
              0x110) < DAT_14cbfa1a8) {
    FUN_144b3d300(&DAT_14cbfa1a8);
    if (DAT_14cbfa1a8 == -1) {
      FUN_145e9d570(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x20a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfa128,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1444396b9);
      _Init_thread_footer(&DAT_14cbfa1a8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9d570 FUN_145e9d570 body=226 status=ok
// SIG undefined FUN_145e9d570(void)

longlong * FUN_145e9d570(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14667c148;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9d658 FUN_145e9d658 body=138 status=ok
// SIG undefined FUN_145e9d658(void)

code * FUN_145e9d658(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DArray";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000020e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e9d6e2;
}



// FUNCTION 145e9d6e2 FUN_145e9d6e2 body=138 status=ok
// SIG undefined FUN_145e9d6e2(void)

code * FUN_145e9d6e2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000020d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149095690;
}



// FUNCTION 145e9d76c FUN_145e9d76c body=292 status=ok
// SIG undefined FUN_145e9d76c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e9d76c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf9d50) {
    FUN_144b3d300(&DAT_14cbf9d50);
    if (DAT_14cbf9d50 == -1) {
      FUN_145e9d9da();
      FUN_145e9d890();
      FUN_140db5666(&DAT_14cbf9ca8,0,&DAT_14cbf9c40,L"FHairStrandsTexturePS",
                    L"/Engine/Private/HairStrands/HairStrandsTexturesGeneration.usf",L"MainPS",3,1,
                    FUN_149092866,FUN_149092806,&LAB_14667bd1c,&LAB_149092802,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cbfa2c0);
      _DAT_14cbf9ca8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144436ba0);
      _Init_thread_footer(&DAT_14cbf9d50);
    }
  }
  return &DAT_14cbf9ca8;
}



// FUNCTION 145e9d890 FUN_145e9d890 body=205 status=ok
// SIG undefined FUN_145e9d890(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9d890(void)

{
  if ((DAT_14cbf9ca7 & 2) == 0) {
    DAT_14cbf9ca7 = DAT_14cbf9ca7 | 2;
    _DAT_14cbf9c48 = L"FHairStrandsTexturePS";
    _DAT_14cbf9c60 = FUN_146826540;
    _DAT_14cbf9c68 = FUN_146825d77;
    _DAT_14cbf9c70 = FUN_146825fd6;
    _DAT_14cbf9c78 = FUN_1407e02ea;
    _DAT_14cbf9c80 = FUN_146826273;
    _DAT_14cbf9c58 = FUN_1490927d4;
    _DAT_14cbf9c98 = 0xffffffff000000e0;
    _DAT_14cbf9ca0 = 8;
    DAT_14cbf9ca4 = 0;
    _DAT_14cbf9c88 = &LAB_1490927fe;
    FUN_145e9d95e();
    FUN_1407e00cc(&DAT_14cbf9c40);
    return;
  }
  return;
}



// FUNCTION 145e9d95e FUN_145e9d95e body=123 status=ok
// SIG undefined FUN_145e9d95e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9d95e(void)

{
  _DAT_14cbfa578 = L"BASE";
  DAT_14cbfa5a2 = 4;
  _DAT_14cbfa580 = FUN_140b35ae4();
  _DAT_14cbfa588 = DAT_14cbf9c50;
  _DAT_14cbfa590 = &LAB_14682652b;
  DAT_14cbf9c50 = &DAT_14cbfa578;
  DAT_14cbf9ca5 = DAT_14cbf9ca5 + '\x01';
  _DAT_14cbfa598 = 0x100000000;
  if (*(char *)(_DAT_14cbfa580 + 100) != '\0') {
    DAT_14cbf9ca6 = DAT_14cbf9ca6 + '\x01';
  }
  return;
}



// FUNCTION 145e9d9da FUN_145e9d9da body=261 status=ok
// SIG undefined FUN_145e9d9da(void)

void FUN_145e9d9da(void)

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
              0x110) < DAT_14cbfa340) {
    FUN_144b3d300(&DAT_14cbfa340);
    if (DAT_14cbfa340 == -1) {
      FUN_145e9dae0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0x2c7;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfa2c0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1444396dd);
      _Init_thread_footer(&DAT_14cbfa340);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9dae0 FUN_145e9dae0 body=226 status=ok
// SIG undefined FUN_145e9dae0(void)

longlong * FUN_145e9dae0(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14667c362;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9dbc8 FUN_145e9dbc8 body=138 status=ok
// SIG undefined FUN_145e9dbc8(void)

code * FUN_145e9dbc8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UVsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000002cd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149095d00;
}



// FUNCTION 145e9dc52 FUN_145e9dc52 body=138 status=ok
// SIG undefined FUN_145e9dc52(void)

code * FUN_145e9dc52(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VertexCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000002c9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149095e14;
}



// FUNCTION 145e9dcdc FUN_145e9dcdc body=292 status=ok
// SIG undefined FUN_145e9dcdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e9dcdc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfae20) {
    FUN_144b3d300(&DAT_14cbfae20);
    if (DAT_14cbfae20 == -1) {
      FUN_145e9df4a();
      FUN_145e9de00();
      FUN_140db5666(&DAT_14cbfad78,0,&DAT_14cbfad10,L"FGroomCacheUpdatePassCS",
                    L"/Engine/Private/HairStrands/HairStrandsInterpolation.usf",L"MainCS",5,1,
                    FUN_149099f48,FUN_149099ee8,&LAB_14667c890,&LAB_149099ee4,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cbfc9f0);
      _DAT_14cbfad78 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14443e97d);
      _Init_thread_footer(&DAT_14cbfae20);
    }
  }
  return &DAT_14cbfad78;
}



// FUNCTION 145e9de00 FUN_145e9de00 body=205 status=ok
// SIG undefined FUN_145e9de00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9de00(void)

{
  if ((DAT_14cbfad77 & 2) == 0) {
    DAT_14cbfad77 = DAT_14cbfad77 | 2;
    _DAT_14cbfad18 = L"FGroomCacheUpdatePassCS";
    _DAT_14cbfad30 = FUN_146826540;
    _DAT_14cbfad38 = FUN_146825d77;
    _DAT_14cbfad40 = FUN_146825fd6;
    _DAT_14cbfad48 = FUN_1407e02ea;
    _DAT_14cbfad50 = FUN_146826273;
    _DAT_14cbfad28 = FUN_149099eb6;
    _DAT_14cbfad68 = 0xffffffff000000e0;
    _DAT_14cbfad70 = 8;
    DAT_14cbfad74 = 0;
    _DAT_14cbfad58 = &LAB_149099ee0;
    FUN_145e9dece();
    FUN_1407e00cc(&DAT_14cbfad10);
    return;
  }
  return;
}



// FUNCTION 145e9dece FUN_145e9dece body=123 status=ok
// SIG undefined FUN_145e9dece(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9dece(void)

{
  _DAT_14cbfd5e8 = L"BASE";
  DAT_14cbfd612 = 4;
  _DAT_14cbfd5f0 = FUN_140b35ae4();
  _DAT_14cbfd5f8 = DAT_14cbfad20;
  _DAT_14cbfd600 = &LAB_14682652b;
  DAT_14cbfad20 = &DAT_14cbfd5e8;
  DAT_14cbfad75 = DAT_14cbfad75 + '\x01';
  _DAT_14cbfd608 = 0x100000000;
  if (*(char *)(_DAT_14cbfd5f0 + 100) != '\0') {
    DAT_14cbfad76 = DAT_14cbfad76 + '\x01';
  }
  return;
}



// FUNCTION 145e9df4a FUN_145e9df4a body=261 status=ok
// SIG undefined FUN_145e9df4a(void)

void FUN_145e9df4a(void)

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
              0x110) < DAT_14cbfca70) {
    FUN_144b3d300(&DAT_14cbfca70);
    if (DAT_14cbfca70 == -1) {
      FUN_14157e064(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0xeb;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfc9f0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14444942a);
      _Init_thread_footer(&DAT_14cbfca70);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9e054 FUN_145e9e054 body=138 status=ok
// SIG undefined FUN_145e9e054(void)

code * FUN_145e9e054(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"bHasRadiusData";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000f0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a7f80;
}



// FUNCTION 145e9e0de FUN_145e9e0de body=138 status=ok
// SIG undefined FUN_145e9e0de(void)

code * FUN_145e9e0de(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InterpolationFactor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000f2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a7ef6;
}



// FUNCTION 145e9e168 FUN_145e9e168 body=292 status=ok
// SIG undefined FUN_145e9e168(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e9e168(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfb638) {
    FUN_144b3d300(&DAT_14cbfb638);
    if (DAT_14cbfb638 == -1) {
      FUN_145e9e3d6();
      FUN_145e9e28c();
      FUN_140db5666(&DAT_14cbfb590,0,&DAT_14cbfb528,L"FHairRaytracingGeometryCS",
                    L"/Engine/Private/HairStrands/HairStrandsRaytracingGeometry.usf",L"MainCS",5,4,
                    FUN_14909aa4e,FUN_14909a9ee,&LAB_14667c8d8,&LAB_14909a9ea,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cbfcda8);
      _DAT_14cbfb590 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1444413a7);
      _Init_thread_footer(&DAT_14cbfb638);
    }
  }
  return &DAT_14cbfb590;
}



// FUNCTION 145e9e28c FUN_145e9e28c body=205 status=ok
// SIG undefined FUN_145e9e28c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9e28c(void)

{
  if ((DAT_14cbfb58f & 2) == 0) {
    DAT_14cbfb58f = DAT_14cbfb58f | 2;
    _DAT_14cbfb530 = L"FHairRaytracingGeometryCS";
    _DAT_14cbfb548 = FUN_146826540;
    _DAT_14cbfb550 = FUN_146825d77;
    _DAT_14cbfb558 = FUN_146825fd6;
    _DAT_14cbfb560 = FUN_1407e02ea;
    _DAT_14cbfb568 = FUN_146826273;
    _DAT_14cbfb540 = FUN_14909a9bc;
    _DAT_14cbfb580 = 0xffffffff000000e0;
    _DAT_14cbfb588 = 8;
    DAT_14cbfb58c = 0;
    _DAT_14cbfb570 = &LAB_14909a9e6;
    FUN_145e9e35a();
    FUN_1407e00cc(&DAT_14cbfb528);
    return;
  }
  return;
}



// FUNCTION 145e9e35a FUN_145e9e35a body=123 status=ok
// SIG undefined FUN_145e9e35a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9e35a(void)

{
  _DAT_14cbfd738 = L"BASE";
  DAT_14cbfd762 = 4;
  _DAT_14cbfd740 = FUN_140b35ae4();
  _DAT_14cbfd748 = DAT_14cbfb538;
  _DAT_14cbfd750 = &LAB_14682652b;
  DAT_14cbfb538 = &DAT_14cbfd738;
  DAT_14cbfb58d = DAT_14cbfb58d + '\x01';
  _DAT_14cbfd758 = 0x100000000;
  if (*(char *)(_DAT_14cbfd740 + 100) != '\0') {
    DAT_14cbfb58e = DAT_14cbfb58e + '\x01';
  }
  return;
}



// FUNCTION 145e9e3d6 FUN_145e9e3d6 body=261 status=ok
// SIG undefined FUN_145e9e3d6(void)

void FUN_145e9e3d6(void)

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
              0x110) < DAT_14cbfce28) {
    FUN_144b3d300(&DAT_14cbfce28);
    if (DAT_14cbfce28 == -1) {
      FUN_14157e148(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x90;
      local_58 = 0x4ad;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfcda8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14444947e);
      _Init_thread_footer(&DAT_14cbfce28);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9e4e0 FUN_145e9e4e0 body=138 status=ok
// SIG undefined FUN_145e9e4e0(void)

code * FUN_145e9e4e0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputPositionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000004bc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14667dae6;
}



// FUNCTION 145e9e56a FUN_145e9e56a body=138 status=ok
// SIG undefined FUN_145e9e56a(void)

code * FUN_145e9e56a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PositionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000004ba;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490aa64c;
}



// FUNCTION 145e9e5f4 FUN_145e9e5f4 body=292 status=ok
// SIG undefined FUN_145e9e5f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e9e5f4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2a030) {
    FUN_144b3d300(&DAT_14cc2a030);
    if (DAT_14cc2a030 == -1) {
      FUN_145e9e862();
      FUN_145e9e718();
      FUN_140db5666(&DAT_14cc29f88,0,&DAT_14cc29f20,L"FFXRHIRCASCS",
                    L"/Plugin/FFX/Private/ffx_fsr3upscaler_rcas_pass.usf",&DAT_14a1f6a48,5,0x100,
                    FUN_14981ce68,FUN_14981ce40,&LAB_14190e220,&LAB_144655cdc,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cc2a7c0);
      _DAT_14cc29f88 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144655cdf);
      _Init_thread_footer(&DAT_14cc2a030);
    }
  }
  return &DAT_14cc29f88;
}



// FUNCTION 145e9e718 FUN_145e9e718 body=205 status=ok
// SIG undefined FUN_145e9e718(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9e718(void)

{
  if ((DAT_14cc29f87 & 2) == 0) {
    DAT_14cc29f87 = DAT_14cc29f87 | 2;
    _DAT_14cc29f28 = L"FFXRHIRCASCS";
    _DAT_14cc29f40 = FUN_146826540;
    _DAT_14cc29f48 = FUN_146825d77;
    _DAT_14cc29f50 = FUN_146825fd6;
    _DAT_14cc29f58 = FUN_1407e02ea;
    _DAT_14cc29f60 = FUN_146826273;
    _DAT_14cc29f38 = FUN_14981ce12;
    _DAT_14cc29f78 = 0xffffffff000000e0;
    _DAT_14cc29f80 = 8;
    DAT_14cc29f84 = 0;
    _DAT_14cc29f68 = &LAB_14981ce3c;
    FUN_145e9e7e6();
    FUN_1407e00cc(&DAT_14cc29f20);
    return;
  }
  return;
}



// FUNCTION 145e9e7e6 FUN_145e9e7e6 body=123 status=ok
// SIG undefined FUN_145e9e7e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9e7e6(void)

{
  _DAT_14cc2ab68 = L"BASE";
  DAT_14cc2ab92 = 4;
  _DAT_14cc2ab70 = FUN_140b35ae4();
  _DAT_14cc2ab78 = DAT_14cc29f30;
  _DAT_14cc2ab80 = &LAB_14682652b;
  DAT_14cc29f30 = &DAT_14cc2ab68;
  DAT_14cc29f85 = DAT_14cc29f85 + '\x01';
  _DAT_14cc2ab88 = 0x100000000;
  if (*(char *)(_DAT_14cc2ab70 + 100) != '\0') {
    DAT_14cc29f86 = DAT_14cc29f86 + '\x01';
  }
  return;
}



// FUNCTION 145e9e862 FUN_145e9e862 body=261 status=ok
// SIG undefined FUN_145e9e862(void)

void FUN_145e9e862(void)

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
              0x110) < DAT_14cc2a840) {
    FUN_144b3d300(&DAT_14cc2a840);
    if (DAT_14cc2a840 == -1) {
      FUN_145e9e968(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x24;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc2a7c0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144656159);
      _Init_thread_footer(&DAT_14cc2a840);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9e968 FUN_145e9e968 body=226 status=ok
// SIG undefined FUN_145e9e968(void)

longlong * FUN_145e9e968(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146762872;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9ea50 FUN_145e9ea50 body=138 status=ok
// SIG undefined FUN_145e9ea50(void)

undefined1 * FUN_145e9ea50(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145de5a5a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"cbFSR3Upscaler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FFXFSRPassParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x25;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14cc2a048;
  return &LAB_145e9ea4c;
}



// FUNCTION 145e9eada FUN_145e9eada body=138 status=ok
// SIG undefined FUN_145e9eada(void)

code * FUN_145e9eada(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"r_input_exposure";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1467628fa;
}



// FUNCTION 145e9eb64 FUN_145e9eb64 body=292 status=ok
// SIG undefined FUN_145e9eb64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e9eb64(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2ae40) {
    FUN_144b3d300(&DAT_14cc2ae40);
    if (DAT_14cc2ae40 == -1) {
      FUN_145e9edd2();
      FUN_145e9ec88();
      FUN_140db5666(&DAT_14cc2ad98,0,&DAT_14cc2ad30,L"FFXFIConvertDistortionCS",
                    L"/Plugin/FSR3/Private/PostProcessFFX_FIConvertDistortion.usf",L"MainCS",5,1,
                    FUN_149827940,FUN_1498278e0,&LAB_1498278c8,&LAB_1498278c4,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cc2c7a8);
      _DAT_14cc2ad98 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14465b8a4);
      _Init_thread_footer(&DAT_14cc2ae40);
    }
  }
  return &DAT_14cc2ad98;
}



// FUNCTION 145e9ec88 FUN_145e9ec88 body=205 status=ok
// SIG undefined FUN_145e9ec88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9ec88(void)

{
  if ((DAT_14cc2ad97 & 2) == 0) {
    DAT_14cc2ad97 = DAT_14cc2ad97 | 2;
    _DAT_14cc2ad38 = L"FFXFIConvertDistortionCS";
    _DAT_14cc2ad50 = FUN_146826540;
    _DAT_14cc2ad58 = FUN_146825d77;
    _DAT_14cc2ad60 = FUN_146825fd6;
    _DAT_14cc2ad68 = FUN_1407e02ea;
    _DAT_14cc2ad70 = FUN_146826273;
    _DAT_14cc2ad48 = FUN_149827896;
    _DAT_14cc2ad88 = 0xffffffff000000e0;
    _DAT_14cc2ad90 = 8;
    DAT_14cc2ad94 = 0;
    _DAT_14cc2ad78 = &LAB_1498278c0;
    FUN_145e9ed56();
    FUN_1407e00cc(&DAT_14cc2ad30);
    return;
  }
  return;
}



// FUNCTION 145e9ed56 FUN_145e9ed56 body=123 status=ok
// SIG undefined FUN_145e9ed56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9ed56(void)

{
  _DAT_14cc2ca90 = L"BASE";
  DAT_14cc2caba = 4;
  _DAT_14cc2ca98 = FUN_140b35ae4();
  _DAT_14cc2caa0 = DAT_14cc2ad40;
  _DAT_14cc2caa8 = &LAB_14682652b;
  DAT_14cc2ad40 = &DAT_14cc2ca90;
  DAT_14cc2ad95 = DAT_14cc2ad95 + '\x01';
  _DAT_14cc2cab0 = 0x100000000;
  if (*(char *)(_DAT_14cc2ca98 + 100) != '\0') {
    DAT_14cc2ad96 = DAT_14cc2ad96 + '\x01';
  }
  return;
}



// FUNCTION 145e9edd2 FUN_145e9edd2 body=261 status=ok
// SIG undefined FUN_145e9edd2(void)

void FUN_145e9edd2(void)

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
              0x110) < DAT_14cc2c828) {
    FUN_144b3d300(&DAT_14cc2c828);
    if (DAT_14cc2c828 == -1) {
      FUN_145e9eed8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x89;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc2c7a8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14465da79);
      _Init_thread_footer(&DAT_14cc2c828);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9eed8 FUN_145e9eed8 body=226 status=ok
// SIG undefined FUN_145e9eed8(void)

longlong * FUN_145e9eed8(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146762e5a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9efc0 FUN_145e9efc0 body=132 status=ok
// SIG undefined FUN_145e9efc0(void)

undefined1 * FUN_145e9efc0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UEDistortion";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e9efbc;
}



// FUNCTION 145e9f044 FUN_145e9f044 body=144 status=ok
// SIG undefined FUN_145e9f044(void)

code * FUN_145e9f044(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000008b;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e9efc0;
}



// FUNCTION 145e9f0d4 FUN_145e9f0d4 body=40 status=ok
// SIG undefined FUN_145e9f0d4(void)

undefined8 FUN_145e9f0d4(undefined8 param_1,int param_2)

{
  FUN_14157e22c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145e9f108 FUN_145e9f108 body=236 status=ok
// SIG undefined FUN_145e9f108(void)

undefined8 * FUN_145e9f108(undefined8 *param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1412292fa();
  *param_1 = &PTR_FUN_14a4ccaf0;
  param_1[8] = &PTR_FUN_14a4ccdd0;
  puVar2 = (undefined2 *)FUN_14038fb82();
  *(undefined2 *)(param_1 + 6) = *puVar2;
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(puVar2 + 4);
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_20 = param_1[2];
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_28 = FUN_1459ad570();
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_28);
    }
    FUN_140909372(&local_28,&local_20);
    puVar2 = (undefined2 *)FUN_14038fb82();
    uVar1 = *puVar2;
    local_30 = param_1[2];
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_30,uVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9f1f6 FUN_145e9f1f6 body=289 status=ok
// SIG undefined FUN_145e9f1f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e9f1f6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b7590) {
    FUN_144b3d300(&DAT_14c9b7590);
    if (DAT_14c9b7590 == -1) {
      FUN_145e9f462();
      FUN_145e9f318();
      FUN_140db5666(&DAT_14c9b74e8,0,&DAT_14c9b7480,L"FGTAOHorizonSearchCS",
                    L"/Engine/Private/PostProcessAmbientOcclusion.usf",L"HorizonSearchCS",5,5,
                    FUN_14713554e,FUN_1471354ee,&LAB_1471354d6,&LAB_1471354d2,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9b88b0);
      _DAT_14c9b74e8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142b8c371);
      _Init_thread_footer(&DAT_14c9b7590);
    }
  }
  return &DAT_14c9b74e8;
}



// FUNCTION 145e9f318 FUN_145e9f318 body=205 status=ok
// SIG undefined FUN_145e9f318(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9f318(void)

{
  if ((DAT_14c9b74e7 & 2) == 0) {
    DAT_14c9b74e7 = DAT_14c9b74e7 | 2;
    _DAT_14c9b7488 = L"FGTAOHorizonSearchCS";
    _DAT_14c9b74a0 = FUN_146826540;
    _DAT_14c9b74a8 = FUN_146825d77;
    _DAT_14c9b74b0 = FUN_146825fd6;
    _DAT_14c9b74b8 = FUN_1407e02ea;
    _DAT_14c9b74c0 = FUN_146826273;
    _DAT_14c9b7498 = FUN_1471354a4;
    _DAT_14c9b74d8 = 0xffffffff000000e0;
    _DAT_14c9b74e0 = 8;
    DAT_14c9b74e4 = 0;
    _DAT_14c9b74c8 = &LAB_1471354ce;
    FUN_145e9f3e6();
    FUN_1407e00cc(&DAT_14c9b7480);
    return;
  }
  return;
}



// FUNCTION 145e9f3e6 FUN_145e9f3e6 body=123 status=ok
// SIG undefined FUN_145e9f3e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9f3e6(void)

{
  _DAT_14c9c01a0 = L"BASE";
  DAT_14c9c01ca = 4;
  _DAT_14c9c01a8 = FUN_140b35ae4();
  _DAT_14c9c01b0 = DAT_14c9b7490;
  _DAT_14c9c01b8 = &LAB_14682652b;
  DAT_14c9b7490 = &DAT_14c9c01a0;
  DAT_14c9b74e5 = DAT_14c9b74e5 + '\x01';
  _DAT_14c9c01c0 = 0x100000000;
  if (*(char *)(_DAT_14c9c01a8 + 100) != '\0') {
    DAT_14c9b74e6 = DAT_14c9b74e6 + '\x01';
  }
  return;
}



// FUNCTION 145e9f462 FUN_145e9f462 body=261 status=ok
// SIG undefined FUN_145e9f462(void)

void FUN_145e9f462(void)

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
              0x110) < DAT_14c9b8930) {
    FUN_144b3d300(&DAT_14c9b8930);
    if (DAT_14c9b8930 == -1) {
      FUN_145e9f568(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1e0;
      local_58 = 0x513;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9b88b0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b90949);
      _Init_thread_footer(&DAT_14c9b8930);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9f568 FUN_145e9f568 body=226 status=ok
// SIG undefined FUN_145e9f568(void)

longlong * FUN_145e9f568(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462b95d4;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9f650 FUN_145e9f650 body=138 status=ok
// SIG undefined FUN_145e9f650(void)

code * FUN_145e9f650(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HorizonOutTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d00000051c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462b965c;
}



// FUNCTION 145e9f6da FUN_145e9f6da body=142 status=ok
// SIG undefined FUN_145e9f6da(void)

code * FUN_145e9f6da(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x4000000517;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462b9780;
}



// FUNCTION 145e9f768 FUN_145e9f768 body=289 status=ok
// SIG undefined FUN_145e9f768(void)

undefined * FUN_145e9f768(void)

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
              0x110) < DAT_14ca609e0) {
    FUN_144b3d300(&DAT_14ca609e0);
    if (DAT_14ca609e0 == -1) {
      FUN_145e9f88a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = L"SceneTextures";
      local_70 = L"TranslucentDepthPass";
      local_78 = L"FTranslucencyDepthPassUniformParameters";
      local_38 = 0;
      local_50 = 0x170;
      local_58 = 0xef;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca60960,1,2);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430abaea);
      _Init_thread_footer(&DAT_14ca609e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca60960;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9f88a FUN_145e9f88a body=226 status=ok
// SIG undefined FUN_145e9f88a(void)

longlong * FUN_145e9f88a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_145eeb62a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9f972 FUN_145e9f972 body=136 status=ok
// SIG undefined FUN_145e9f972(void)

undefined1 * FUN_145e9f972(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xf0;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145e9f96e;
}



// FUNCTION 145e9f9fa FUN_145e9f9fa body=138 status=ok
// SIG undefined FUN_145e9f9fa(void)

code * FUN_145e9f9fa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InvMaxSubjectDepth";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd4000000f3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147325e3a;
}



// FUNCTION 145e9fa84 FUN_145e9fa84 body=53 status=ok
// SIG undefined FUN_145e9fa84(void)

void FUN_145e9fa84(longlong *param_1)

{
  FUN_145e9faba();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145e9faba FUN_145e9faba body=343 status=ok
// SIG undefined FUN_145e9faba(void)

void FUN_145e9faba(longlong *param_1)

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
      FUN_14340d97a(*local_68 + (longlong)iStack_4c * 0x40 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140b7ce44(param_1,0);
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



// FUNCTION 145e9fc12 FUN_145e9fc12 body=292 status=ok
// SIG undefined FUN_145e9fc12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145e9fc12(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ec2d0) {
    FUN_144b3d300(&DAT_14c9ec2d0);
    if (DAT_14c9ec2d0 == -1) {
      FUN_145e9fe80();
      FUN_145e9fd36();
      FUN_140db5666(&DAT_14c9ec228,0,&DAT_14c9ec1c0,L"FFinishOcclusionPixelShader",
                    L"/Engine/Private/LightShaftShader.usf",L"FinishOcclusionMain",3,1,FUN_1471dc248
                    ,FUN_1471dc1e8,&LAB_1471dc1d0,&LAB_1471dc1cc,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9eff88);
      _DAT_14c9ec228 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cfe777);
      _Init_thread_footer(&DAT_14c9ec2d0);
    }
  }
  return &DAT_14c9ec228;
}



// FUNCTION 145e9fd36 FUN_145e9fd36 body=205 status=ok
// SIG undefined FUN_145e9fd36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9fd36(void)

{
  if ((DAT_14c9ec227 & 2) == 0) {
    DAT_14c9ec227 = DAT_14c9ec227 | 2;
    _DAT_14c9ec1c8 = L"FFinishOcclusionPixelShader";
    _DAT_14c9ec1e0 = FUN_146826540;
    _DAT_14c9ec1e8 = FUN_146825d77;
    _DAT_14c9ec1f0 = FUN_146825fd6;
    _DAT_14c9ec1f8 = FUN_1407e02ea;
    _DAT_14c9ec200 = FUN_146826273;
    _DAT_14c9ec1d8 = FUN_1471dc19e;
    _DAT_14c9ec218 = 0xffffffff000000e0;
    _DAT_14c9ec220 = 8;
    DAT_14c9ec224 = 0;
    _DAT_14c9ec208 = &LAB_1471dc1c8;
    FUN_145e9fe04();
    FUN_1407e00cc(&DAT_14c9ec1c0);
    return;
  }
  return;
}



// FUNCTION 145e9fe04 FUN_145e9fe04 body=123 status=ok
// SIG undefined FUN_145e9fe04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145e9fe04(void)

{
  _DAT_14c9f1558 = L"BASE";
  DAT_14c9f1582 = 4;
  _DAT_14c9f1560 = FUN_140b35ae4();
  _DAT_14c9f1568 = DAT_14c9ec1d0;
  _DAT_14c9f1570 = &LAB_14682652b;
  DAT_14c9ec1d0 = &DAT_14c9f1558;
  DAT_14c9ec225 = DAT_14c9ec225 + '\x01';
  _DAT_14c9f1578 = 0x100000000;
  if (*(char *)(_DAT_14c9f1560 + 100) != '\0') {
    DAT_14c9ec226 = DAT_14c9ec226 + '\x01';
  }
  return;
}



// FUNCTION 145e9fe80 FUN_145e9fe80 body=261 status=ok
// SIG undefined FUN_145e9fe80(void)

void FUN_145e9fe80(void)

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
              0x110) < DAT_14c9f0008) {
    FUN_144b3d300(&DAT_14c9f0008);
    if (DAT_14c9f0008 == -1) {
      FUN_145e9ff86(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x170;
      local_58 = 0x107;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9eff88,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d261d3);
      _Init_thread_footer(&DAT_14c9f0008);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145e9ff86 FUN_145e9ff86 body=226 status=ok
// SIG undefined FUN_145e9ff86(void)

longlong * FUN_145e9ff86(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d773c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea006e FUN_145ea006e body=138 status=ok
// SIG undefined FUN_145ea006e(void)

code * FUN_145ea006e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SourceTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000109;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ea00f8;
}



// FUNCTION 145ea00f8 FUN_145ea00f8 body=140 status=ok
// SIG undefined FUN_145ea00f8(void)

undefined1 * FUN_145ea00f8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1456e3770();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightShafts";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLightShaftPixelShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x108;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9efe78;
  return &LAB_145ea006a;
}



// FUNCTION 145ea0184 FUN_145ea0184 body=205 status=ok
// SIG undefined FUN_145ea0184(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea0184(void)

{
  if ((DAT_14c9f434f & 2) == 0) {
    DAT_14c9f434f = DAT_14c9f434f | 2;
    _DAT_14c9f42f0 = L"FLumenReflectionDenoiserClearCS";
    _DAT_14c9f4308 = FUN_146826540;
    _DAT_14c9f4310 = FUN_146825d77;
    _DAT_14c9f4318 = FUN_146825fd6;
    _DAT_14c9f4320 = FUN_1407e02ea;
    _DAT_14c9f4328 = FUN_146826273;
    _DAT_14c9f4300 = FUN_1471ef7b6;
    _DAT_14c9f4340 = 0xffffffff000000e0;
    _DAT_14c9f4348 = 8;
    DAT_14c9f434c = 0;
    _DAT_14c9f4330 = &LAB_1471ef7e0;
    FUN_145ea0252();
    FUN_1407e00cc(&DAT_14c9f42e8);
    return;
  }
  return;
}



// FUNCTION 145ea0252 FUN_145ea0252 body=123 status=ok
// SIG undefined FUN_145ea0252(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea0252(void)

{
  _DAT_14c9f7db8 = L"BASE";
  DAT_14c9f7de2 = 4;
  _DAT_14c9f7dc0 = FUN_140b35ae4();
  _DAT_14c9f7dc8 = DAT_14c9f42f8;
  _DAT_14c9f7dd0 = &LAB_14682652b;
  DAT_14c9f42f8 = &DAT_14c9f7db8;
  DAT_14c9f434d = DAT_14c9f434d + '\x01';
  _DAT_14c9f7dd8 = 0x100000000;
  if (*(char *)(_DAT_14c9f7dc0 + 100) != '\0') {
    DAT_14c9f434e = DAT_14c9f434e + '\x01';
  }
  return;
}



// FUNCTION 145ea02ce FUN_145ea02ce body=226 status=ok
// SIG undefined FUN_145ea02ce(void)

longlong * FUN_145ea02ce(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462dea46;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea03b6 FUN_145ea03b6 body=138 status=ok
// SIG undefined FUN_145ea03b6(void)

code * FUN_145ea03b6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWResolvedSpecular";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2DArray<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x600000036d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ea0440;
}



// FUNCTION 145ea0440 FUN_145ea0440 body=146 status=ok
// SIG undefined FUN_145ea0440(void)

code * FUN_145ea0440(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000036c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9f66a0;
  return FUN_1462deace;
}



// FUNCTION 145ea04d2 FUN_145ea04d2 body=205 status=ok
// SIG undefined FUN_145ea04d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea04d2(void)

{
  if ((DAT_14c9f4f17 & 2) == 0) {
    DAT_14c9f4f17 = DAT_14c9f4f17 | 2;
    _DAT_14c9f4eb8 = L"FReflectionTraceVoxelsCS";
    _DAT_14c9f4ed0 = FUN_146826540;
    _DAT_14c9f4ed8 = FUN_146825d77;
    _DAT_14c9f4ee0 = FUN_146825fd6;
    _DAT_14c9f4ee8 = FUN_1407e02ea;
    _DAT_14c9f4ef0 = FUN_146826273;
    _DAT_14c9f4ec8 = FUN_1471efea0;
    _DAT_14c9f4f08 = 0xffffffff000000e0;
    _DAT_14c9f4f10 = 8;
    DAT_14c9f4f14 = 0;
    _DAT_14c9f4ef8 = &LAB_1471efeca;
    FUN_145ea05a0();
    FUN_1407e00cc(&DAT_14c9f4eb0);
    return;
  }
  return;
}



// FUNCTION 145ea05a0 FUN_145ea05a0 body=123 status=ok
// SIG undefined FUN_145ea05a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea05a0(void)

{
  _DAT_14c9f7f68 = L"BASE";
  DAT_14c9f7f92 = 4;
  _DAT_14c9f7f70 = FUN_140b35ae4();
  _DAT_14c9f7f78 = DAT_14c9f4ec0;
  _DAT_14c9f7f80 = &LAB_14682652b;
  DAT_14c9f4ec0 = &DAT_14c9f7f68;
  DAT_14c9f4f15 = DAT_14c9f4f15 + '\x01';
  _DAT_14c9f7f88 = 0x100000000;
  if (*(char *)(_DAT_14c9f7f70 + 100) != '\0') {
    DAT_14c9f4f16 = DAT_14c9f4f16 + '\x01';
  }
  return;
}



// FUNCTION 145ea061c FUN_145ea061c body=226 status=ok
// SIG undefined FUN_145ea061c(void)

longlong * FUN_145ea061c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462dfbdc;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea0704 FUN_145ea0704 body=138 status=ok
// SIG undefined FUN_145ea0704(void)

code * FUN_145ea0704(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DistantScreenTraceFurthestHZBTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4f800000217;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f9e44;
}



// FUNCTION 145ea078e FUN_145ea078e body=146 status=ok
// SIG undefined FUN_145ea078e(void)

code * FUN_145ea078e(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000020c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9f6728;
  return FUN_1462e016e;
}



// FUNCTION 145ea0820 FUN_145ea0820 body=292 status=ok
// SIG undefined FUN_145ea0820(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ea0820(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1fe90) {
    FUN_144b3d300(&DAT_14ca1fe90);
    if (DAT_14ca1fe90 == -1) {
      FUN_145ea0a8e();
      FUN_145ea0944();
      FUN_140db5666(&DAT_14ca1fde8,0,&DAT_14ca1fd80,L"FTemporalReprojectionBlurCS",
                    L"/Engine/Private/PathTracing/PathTracingSpatialTemporalDenoising.usf",
                    L"ReprojectionBlurCS",5,2,FUN_147277100,FUN_1472770a0,&LAB_1462f51e6,
                    &LAB_14727709c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca223d0);
      _DAT_14ca1fde8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e83288);
      _Init_thread_footer(&DAT_14ca1fe90);
    }
  }
  return &DAT_14ca1fde8;
}



// FUNCTION 145ea0944 FUN_145ea0944 body=205 status=ok
// SIG undefined FUN_145ea0944(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea0944(void)

{
  if ((DAT_14ca1fde7 & 2) == 0) {
    DAT_14ca1fde7 = DAT_14ca1fde7 | 2;
    _DAT_14ca1fd88 = L"FTemporalReprojectionBlurCS";
    _DAT_14ca1fda0 = FUN_146826540;
    _DAT_14ca1fda8 = FUN_146825d77;
    _DAT_14ca1fdb0 = FUN_146825fd6;
    _DAT_14ca1fdb8 = FUN_1407e02ea;
    _DAT_14ca1fdc0 = FUN_146826273;
    _DAT_14ca1fd98 = FUN_14727706c;
    _DAT_14ca1fdd8 = 0xffffffff000000e0;
    _DAT_14ca1fde0 = 8;
    DAT_14ca1fde4 = 0;
    _DAT_14ca1fdc8 = &LAB_147277098;
    FUN_145ea0a12();
    FUN_1407e00cc(&DAT_14ca1fd80);
    return;
  }
  return;
}



// FUNCTION 145ea0a12 FUN_145ea0a12 body=123 status=ok
// SIG undefined FUN_145ea0a12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea0a12(void)

{
  _DAT_14ca24e38 = L"BASE";
  DAT_14ca24e62 = 4;
  _DAT_14ca24e40 = FUN_140b35ae4();
  _DAT_14ca24e48 = DAT_14ca1fd90;
  _DAT_14ca24e50 = &LAB_14682652b;
  DAT_14ca1fd90 = &DAT_14ca24e38;
  DAT_14ca1fde5 = DAT_14ca1fde5 + '\x01';
  _DAT_14ca24e58 = 0x100000000;
  if (*(char *)(_DAT_14ca24e40 + 100) != '\0') {
    DAT_14ca1fde6 = DAT_14ca1fde6 + '\x01';
  }
  return;
}



// FUNCTION 145ea0a8e FUN_145ea0a8e body=261 status=ok
// SIG undefined FUN_145ea0a8e(void)

void FUN_145ea0a8e(void)

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
              0x110) < DAT_14ca22450) {
    FUN_144b3d300(&DAT_14ca22450);
    if (DAT_14ca22450 == -1) {
      FUN_145ea0b94(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xb0;
      local_58 = 0x2fa;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca223d0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e95e1b);
      _Init_thread_footer(&DAT_14ca22450);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea0b94 FUN_145ea0b94 body=226 status=ok
// SIG undefined FUN_145ea0b94(void)

longlong * FUN_145ea0b94(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f6e50;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea0c7c FUN_145ea0c7c body=138 status=ok
// SIG undefined FUN_145ea0c7c(void)

code * FUN_145ea0c7c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa0000002fc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ea0d06;
}



// FUNCTION 145ea0d06 FUN_145ea0d06 body=140 status=ok
// SIG undefined FUN_145ea0d06(void)

undefined1 * FUN_145ea0d06(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145cef382();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DenoisingCommonParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDenoisingCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2fb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca22338;
  return &LAB_145ea0c78;
}



// FUNCTION 145ea0d92 FUN_145ea0d92 body=292 status=ok
// SIG undefined FUN_145ea0d92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ea0d92(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca200e0) {
    FUN_144b3d300(&DAT_14ca200e0);
    if (DAT_14ca200e0 == -1) {
      FUN_145ea1000();
      FUN_145ea0eb6();
      FUN_140db5666(&DAT_14ca20038,0,&DAT_14ca1ffd0,L"FMotionVectorSubtractCS",
                    L"/Engine/Private/PathTracing/PathTracingSpatialTemporalDenoising.usf",
                    L"MotionVectorSubtractCS",5,1,FUN_14727733c,FUN_1472772dc,&LAB_1462f51f6,
                    &LAB_1472772d8,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca224e0);
      _DAT_14ca20038 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e832a0);
      _Init_thread_footer(&DAT_14ca200e0);
    }
  }
  return &DAT_14ca20038;
}



// FUNCTION 145ea0eb6 FUN_145ea0eb6 body=205 status=ok
// SIG undefined FUN_145ea0eb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea0eb6(void)

{
  if ((DAT_14ca20037 & 2) == 0) {
    DAT_14ca20037 = DAT_14ca20037 | 2;
    _DAT_14ca1ffd8 = L"FMotionVectorSubtractCS";
    _DAT_14ca1fff0 = FUN_146826540;
    _DAT_14ca1fff8 = FUN_146825d77;
    _DAT_14ca20000 = FUN_146825fd6;
    _DAT_14ca20008 = FUN_1407e02ea;
    _DAT_14ca20010 = FUN_146826273;
    _DAT_14ca1ffe8 = FUN_1472772a8;
    _DAT_14ca20028 = 0xffffffff000000e0;
    _DAT_14ca20030 = 8;
    DAT_14ca20034 = 0;
    _DAT_14ca20018 = &LAB_1472772d4;
    FUN_145ea0f84();
    FUN_1407e00cc(&DAT_14ca1ffd0);
    return;
  }
  return;
}



// FUNCTION 145ea0f84 FUN_145ea0f84 body=123 status=ok
// SIG undefined FUN_145ea0f84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea0f84(void)

{
  _DAT_14ca24e98 = L"BASE";
  DAT_14ca24ec2 = 4;
  _DAT_14ca24ea0 = FUN_140b35ae4();
  _DAT_14ca24ea8 = DAT_14ca1ffe0;
  _DAT_14ca24eb0 = &LAB_14682652b;
  DAT_14ca1ffe0 = &DAT_14ca24e98;
  DAT_14ca20035 = DAT_14ca20035 + '\x01';
  _DAT_14ca24eb8 = 0x100000000;
  if (*(char *)(_DAT_14ca24ea0 + 100) != '\0') {
    DAT_14ca20036 = DAT_14ca20036 + '\x01';
  }
  return;
}



// FUNCTION 145ea1000 FUN_145ea1000 body=261 status=ok
// SIG undefined FUN_145ea1000(void)

void FUN_145ea1000(void)

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
              0x110) < DAT_14ca22560) {
    FUN_144b3d300(&DAT_14ca22560);
    if (DAT_14ca22560 == -1) {
      FUN_145ea1106(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xb0;
      local_58 = 0x338;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca224e0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e95e33);
      _Init_thread_footer(&DAT_14ca22560);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea1106 FUN_145ea1106 body=226 status=ok
// SIG undefined FUN_145ea1106(void)

longlong * FUN_145ea1106(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f6fec;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea11ee FUN_145ea11ee body=138 status=ok
// SIG undefined FUN_145ea11ee(void)

code * FUN_145ea11ee(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Minuend";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa00000033a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ea1278;
}



// FUNCTION 145ea1278 FUN_145ea1278 body=140 status=ok
// SIG undefined FUN_145ea1278(void)

undefined1 * FUN_145ea1278(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145cef382();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DenoisingCommonParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDenoisingCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x339;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca22338;
  return &LAB_145ea11ea;
}



// FUNCTION 145ea1304 FUN_145ea1304 body=292 status=ok
// SIG undefined FUN_145ea1304(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ea1304(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca26708) {
    FUN_144b3d300(&DAT_14ca26708);
    if (DAT_14ca26708 == -1) {
      FUN_145ea1572();
      FUN_145ea1428();
      FUN_140db5666(&DAT_14ca26660,0,&DAT_14ca265f8,L"FLUTBlenderCS",
                    L"/Engine/Private/PostProcessCombineLUTs.usf",L"MainCS",5,0x14,FUN_14728ac88,
                    FUN_14728ac28,&LAB_142eb679a,&LAB_142eb6796,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca28e00);
      _DAT_14ca26660 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142eb67b1);
      _Init_thread_footer(&DAT_14ca26708);
    }
  }
  return &DAT_14ca26660;
}



// FUNCTION 145ea1428 FUN_145ea1428 body=205 status=ok
// SIG undefined FUN_145ea1428(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea1428(void)

{
  if ((DAT_14ca2665f & 2) == 0) {
    DAT_14ca2665f = DAT_14ca2665f | 2;
    _DAT_14ca26600 = L"FLUTBlenderCS";
    _DAT_14ca26618 = FUN_146826540;
    _DAT_14ca26620 = FUN_146825d77;
    _DAT_14ca26628 = FUN_146825fd6;
    _DAT_14ca26630 = FUN_1407e02ea;
    _DAT_14ca26638 = FUN_146826273;
    _DAT_14ca26610 = FUN_14728abf8;
    _DAT_14ca26650 = 0xffffffff000000e0;
    _DAT_14ca26658 = 8;
    DAT_14ca2665c = 0;
    _DAT_14ca26640 = &LAB_14728ac24;
    FUN_145ea14f6();
    FUN_1407e00cc(&DAT_14ca265f8);
    return;
  }
  return;
}



// FUNCTION 145ea14f6 FUN_145ea14f6 body=123 status=ok
// SIG undefined FUN_145ea14f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea14f6(void)

{
  _DAT_14ca2c030 = L"BASE";
  DAT_14ca2c05a = 4;
  _DAT_14ca2c038 = FUN_140b35ae4();
  _DAT_14ca2c040 = DAT_14ca26608;
  _DAT_14ca2c048 = &LAB_14682652b;
  DAT_14ca26608 = &DAT_14ca2c030;
  DAT_14ca2665d = DAT_14ca2665d + '\x01';
  _DAT_14ca2c050 = 0x100000000;
  if (*(char *)(_DAT_14ca2c038 + 100) != '\0') {
    DAT_14ca2665e = DAT_14ca2665e + '\x01';
  }
  return;
}



// FUNCTION 145ea1572 FUN_145ea1572 body=261 status=ok
// SIG undefined FUN_145ea1572(void)

void FUN_145ea1572(void)

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
              0x110) < DAT_14ca28e80) {
    FUN_144b3d300(&DAT_14ca28e80);
    if (DAT_14ca28e80 == -1) {
      FUN_145ea1678(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x2c0;
      local_58 = 399;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca28e00,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edbfa5);
      _Init_thread_footer(&DAT_14ca28e80);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea1678 FUN_145ea1678 body=226 status=ok
// SIG undefined FUN_145ea1678(void)

longlong * FUN_145ea1678(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f9c42;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea1760 FUN_145ea1760 body=138 status=ok
// SIG undefined FUN_145ea1760(void)

code * FUN_145ea1760(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputExtentInverse";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2b000000191;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ea17ea;
}



// FUNCTION 145ea17ea FUN_145ea17ea body=140 status=ok
// SIG undefined FUN_145ea17ea(void)

undefined1 * FUN_145ea17ea(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145dec9c6();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CombineLUT";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FCombineLUTParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 400;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca28cf0;
  return &LAB_145ea175c;
}



// FUNCTION 145ea1876 FUN_145ea1876 body=292 status=ok
// SIG undefined FUN_145ea1876(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ea1876(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2ec60) {
    FUN_144b3d300(&DAT_14ca2ec60);
    if (DAT_14ca2ec60 == -1) {
      FUN_145ea1ae4();
      FUN_145ea199a();
      FUN_140db5666(&DAT_14ca2ebb8,0,&DAT_14ca2eb50,L"FMotionBlurVelocityDilateScatterVS",
                    L"/Engine/Private/MotionBlur/MotionBlurTileScatter.usf",L"MainVS",0,1,
                    FUN_147297d7a,FUN_147297d1a,&LAB_147297d02,&LAB_147297cfe,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca33348);
      _DAT_14ca2ebb8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142eff0a6);
      _Init_thread_footer(&DAT_14ca2ec60);
    }
  }
  return &DAT_14ca2ebb8;
}



// FUNCTION 145ea199a FUN_145ea199a body=205 status=ok
// SIG undefined FUN_145ea199a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea199a(void)

{
  if ((DAT_14ca2ebb7 & 2) == 0) {
    DAT_14ca2ebb7 = DAT_14ca2ebb7 | 2;
    _DAT_14ca2eb58 = L"FMotionBlurVelocityDilateScatterVS";
    _DAT_14ca2eb70 = FUN_146826540;
    _DAT_14ca2eb78 = FUN_146825d77;
    _DAT_14ca2eb80 = FUN_146825fd6;
    _DAT_14ca2eb88 = FUN_1407e02ea;
    _DAT_14ca2eb90 = FUN_146826273;
    _DAT_14ca2eb68 = FUN_147297cce;
    _DAT_14ca2eba8 = 0xffffffff000000e0;
    _DAT_14ca2ebb0 = 8;
    DAT_14ca2ebb4 = 0;
    _DAT_14ca2eb98 = &LAB_147297cfa;
    FUN_145ea1a68();
    FUN_1407e00cc(&DAT_14ca2eb50);
    return;
  }
  return;
}



// FUNCTION 145ea1a68 FUN_145ea1a68 body=123 status=ok
// SIG undefined FUN_145ea1a68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea1a68(void)

{
  _DAT_14ca34960 = L"BASE";
  DAT_14ca3498a = 4;
  _DAT_14ca34968 = FUN_140b35ae4();
  _DAT_14ca34970 = DAT_14ca2eb60;
  _DAT_14ca34978 = &LAB_14682652b;
  DAT_14ca2eb60 = &DAT_14ca34960;
  DAT_14ca2ebb5 = DAT_14ca2ebb5 + '\x01';
  _DAT_14ca34980 = 0x100000000;
  if (*(char *)(_DAT_14ca34968 + 100) != '\0') {
    DAT_14ca2ebb6 = DAT_14ca2ebb6 + '\x01';
  }
  return;
}



// FUNCTION 145ea1ae4 FUN_145ea1ae4 body=261 status=ok
// SIG undefined FUN_145ea1ae4(void)

void FUN_145ea1ae4(void)

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
              0x110) < DAT_14ca333c8) {
    FUN_144b3d300(&DAT_14ca333c8);
    if (DAT_14ca333c8 == -1) {
      FUN_145ea1bea(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1a0;
      local_58 = 0x191;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca33348,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f13ff1);
      _Init_thread_footer(&DAT_14ca333c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea1bea FUN_145ea1bea body=226 status=ok
// SIG undefined FUN_145ea1bea(void)

longlong * FUN_145ea1bea(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462fd018;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea1cd2 FUN_145ea1cd2 body=132 status=ok
// SIG undefined FUN_145ea1cd2(void)

undefined1 * FUN_145ea1cd2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ScatterPass";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x192;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145ea1cce;
}



// FUNCTION 145ea1d56 FUN_145ea1d56 body=146 status=ok
// SIG undefined FUN_145ea1d56(void)

code * FUN_145ea1d56(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d0ae8c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Dilate";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FMotionBlurVelocityDilateParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000193;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca332c0;
  return FUN_145ea1cd2;
}



// FUNCTION 145ea1de8 FUN_145ea1de8 body=292 status=ok
// SIG undefined FUN_145ea1de8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ea1de8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca30c78) {
    FUN_144b3d300(&DAT_14ca30c78);
    if (DAT_14ca30c78 == -1) {
      FUN_145ea2056();
      FUN_145ea1f0c();
      FUN_140db5666(&DAT_14ca30bd0,0,&DAT_14ca30b68,L"FTonemapCS",
                    L"/Engine/Private/PostProcessTonemap.usf",L"MainCS",5,0x300,FUN_14729a70c,
                    FUN_14729a6ac,FUN_140930c3c,&LAB_142f0be5a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca341a0);
      _DAT_14ca30bd0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f0be5d);
      _Init_thread_footer(&DAT_14ca30c78);
    }
  }
  return &DAT_14ca30bd0;
}



// FUNCTION 145ea1f0c FUN_145ea1f0c body=205 status=ok
// SIG undefined FUN_145ea1f0c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea1f0c(void)

{
  if ((DAT_14ca30bcf & 2) == 0) {
    DAT_14ca30bcf = DAT_14ca30bcf | 2;
    _DAT_14ca30b70 = L"FTonemapCS";
    _DAT_14ca30b88 = FUN_146826540;
    _DAT_14ca30b90 = FUN_146825d77;
    _DAT_14ca30b98 = FUN_146825fd6;
    _DAT_14ca30ba0 = FUN_1407e02ea;
    _DAT_14ca30ba8 = FUN_146826273;
    _DAT_14ca30b80 = FUN_14729a67c;
    _DAT_14ca30bc0 = 0xffffffff000000e0;
    _DAT_14ca30bc8 = 8;
    DAT_14ca30bcc = 0;
    _DAT_14ca30bb0 = &LAB_14729a6a8;
    FUN_145ea1fda();
    FUN_1407e00cc(&DAT_14ca30b68);
    return;
  }
  return;
}



// FUNCTION 145ea1fda FUN_145ea1fda body=123 status=ok
// SIG undefined FUN_145ea1fda(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea1fda(void)

{
  _DAT_14ca34e30 = L"BASE";
  DAT_14ca34e5a = 4;
  _DAT_14ca34e38 = FUN_140b35ae4();
  _DAT_14ca34e40 = DAT_14ca30b78;
  _DAT_14ca34e48 = &LAB_14682652b;
  DAT_14ca30b78 = &DAT_14ca34e30;
  DAT_14ca30bcd = DAT_14ca30bcd + '\x01';
  _DAT_14ca34e50 = 0x100000000;
  if (*(char *)(_DAT_14ca34e38 + 100) != '\0') {
    DAT_14ca30bce = DAT_14ca30bce + '\x01';
  }
  return;
}



// FUNCTION 145ea2056 FUN_145ea2056 body=261 status=ok
// SIG undefined FUN_145ea2056(void)

void FUN_145ea2056(void)

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
              0x110) < DAT_14ca34220) {
    FUN_144b3d300(&DAT_14ca34220);
    if (DAT_14ca34220 == -1) {
      FUN_145ea215c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x400;
      local_58 = 0x1b4;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca341a0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f14141);
      _Init_thread_footer(&DAT_14ca34220);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea215c FUN_145ea215c body=226 status=ok
// SIG undefined FUN_145ea215c(void)

longlong * FUN_145ea215c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462ff48e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ea2244 FUN_145ea2244 body=138 status=ok
// SIG undefined FUN_145ea2244(void)

code * FUN_145ea2244(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3f0000001b6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ea22ce;
}



// FUNCTION 145ea22ce FUN_145ea22ce body=140 status=ok
// SIG undefined FUN_145ea22ce(void)

undefined1 * FUN_145ea22ce(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14155e4d8();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Tonemap";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FTonemapParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca34008;
  return &LAB_145ea2240;
}



// FUNCTION 145ea235a FUN_145ea235a body=292 status=ok
// SIG undefined FUN_145ea235a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ea235a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4d7c0) {
    FUN_144b3d300(&DAT_14ca4d7c0);
    if (DAT_14ca4d7c0 == -1) {
      FUN_145ea25c8();
      FUN_145ea247e();
      FUN_140db5666(&DAT_14ca4d718,0,&DAT_14ca4d6b0,L"FShaderBuildIndirectDispatchArgsCS",
                    L"/Engine/Private/ShaderPrintDraw.usf",L"BuildIndirectDispatchArgsCS",5,1,
                    FUN_1472eac12,FUN_1472eabb2,&LAB_1472eab88,&LAB_1472eab84,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca55eb8);
      _DAT_14ca4d718 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14303e992);
      _Init_thread_footer(&DAT_14ca4d7c0);
    }
  }
  return &DAT_14ca4d718;
}



// FUNCTION 145ea247e FUN_145ea247e body=205 status=ok
// SIG undefined FUN_145ea247e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea247e(void)

{
  if ((DAT_14ca4d717 & 2) == 0) {
    DAT_14ca4d717 = DAT_14ca4d717 | 2;
    _DAT_14ca4d6b8 = L"FShaderBuildIndirectDispatchArgsCS";
    _DAT_14ca4d6d0 = FUN_146826540;
    _DAT_14ca4d6d8 = FUN_146825d77;
    _DAT_14ca4d6e0 = FUN_146825fd6;
    _DAT_14ca4d6e8 = FUN_1407e02ea;
    _DAT_14ca4d6f0 = FUN_146826273;
    _DAT_14ca4d6c8 = FUN_1472eab54;
    _DAT_14ca4d708 = 0xffffffff000000e0;
    _DAT_14ca4d710 = 8;
    DAT_14ca4d714 = 0;
    _DAT_14ca4d6f8 = &LAB_1472eab80;
    FUN_145ea254c();
    FUN_1407e00cc(&DAT_14ca4d6b0);
    return;
  }
  return;
}



// FUNCTION 145ea254c FUN_145ea254c body=123 status=ok
// SIG undefined FUN_145ea254c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ea254c(void)

{
  _DAT_14ca56948 = L"BASE";
  DAT_14ca56972 = 4;
  _DAT_14ca56950 = FUN_140b35ae4();
  _DAT_14ca56958 = DAT_14ca4d6c0;
  _DAT_14ca56960 = &LAB_14682652b;
  DAT_14ca4d6c0 = &DAT_14ca56948;
  DAT_14ca4d715 = DAT_14ca4d715 + '\x01';
  _DAT_14ca56968 = 0x100000000;
  if (*(char *)(_DAT_14ca56950 + 100) != '\0') {
    DAT_14ca4d716 = DAT_14ca4d716 + '\x01';
  }
  return;
}



// FUNCTION 145ea25c8 FUN_145ea25c8 body=261 status=ok
// SIG undefined FUN_145ea25c8(void)

void FUN_145ea25c8(void)

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
              0x110) < DAT_14ca55f38) {
    FUN_144b3d300(&DAT_14ca55f38);
    if (DAT_14ca55f38 == -1) {
      FUN_145ea26ce(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x1cb;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca55eb8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14305d7c9);
      _Init_thread_footer(&DAT_14ca55f38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


