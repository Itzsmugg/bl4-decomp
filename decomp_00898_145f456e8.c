// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145f456e8 FUN_145f456e8 body=123 status=ok
// SIG undefined FUN_145f456e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f456e8(void)

{
  _DAT_14c9dc218 = L"BASE";
  DAT_14c9dc242 = 4;
  _DAT_14c9dc220 = FUN_140b35ae4();
  _DAT_14c9dc228 = DAT_14c9d9028;
  _DAT_14c9dc230 = &LAB_14682652b;
  DAT_14c9d9028 = &DAT_14c9dc218;
  DAT_14c9d907d = DAT_14c9d907d + '\x01';
  _DAT_14c9dc238 = 0x100000000;
  if (*(char *)(_DAT_14c9dc220 + 100) != '\0') {
    DAT_14c9d907e = DAT_14c9d907e + '\x01';
  }
  return;
}



// FUNCTION 145f45764 FUN_145f45764 body=261 status=ok
// SIG undefined FUN_145f45764(void)

void FUN_145f45764(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9daf18) {
    FUN_144b3d300(&DAT_14c9daf18);
    if (DAT_14c9daf18 == -1) {
      FUN_145f4586a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x230;
      local_58 = 0xcc1;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9dae98,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c71d5d);
      _Init_thread_footer(&DAT_14c9daf18);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4586a FUN_145f4586a body=226 status=ok
// SIG undefined FUN_145f4586a(void)

longlong * FUN_145f4586a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462cd01a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4594e FUN_145f4594e body=138 status=ok
// SIG undefined FUN_145f4594e(void)

code * FUN_145f4594e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrimIDsBufferSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6400000cc4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f459d8;
}



// FUNCTION 145f459d8 FUN_145f459d8 body=138 status=ok
// SIG undefined FUN_145f459d8(void)

code * FUN_145f459d8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000cc3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462cd136;
}



// FUNCTION 145f45a62 FUN_145f45a62 body=138 status=ok
// SIG undefined FUN_145f45a62(void)

code * FUN_145f45a62(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutPrimIDs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000cc7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462cd0a8;
}



// FUNCTION 145f45aec FUN_145f45aec body=292 status=ok
// SIG undefined FUN_145f45aec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f45aec(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9dca10) {
    FUN_144b3d300(&DAT_14c9dca10);
    if (DAT_14c9dca10 == -1) {
      FUN_145f45d5a();
      FUN_145f45c10();
      FUN_140db5666(&DAT_14c9dc968,0,&DAT_14c9dc900,L"FVoxelMarkValidPageIndex_PrepareCS",
                    L"/Engine/Private/HairStrands/HairStrandsVoxelRasterCompute.usf",
                    L"MarkValid_PrepareCS",5,2,FUN_1471987a8,FUN_147198748,&LAB_1462ce31a,
                    &LAB_147198744,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9dffe8);
      _DAT_14c9dc968 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c861ec);
      _Init_thread_footer(&DAT_14c9dca10);
    }
  }
  return &DAT_14c9dc968;
}



// FUNCTION 145f45c10 FUN_145f45c10 body=205 status=ok
// SIG undefined FUN_145f45c10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f45c10(void)

{
  if ((DAT_14c9dc967 & 2) == 0) {
    DAT_14c9dc967 = DAT_14c9dc967 | 2;
    _DAT_14c9dc908 = L"FVoxelMarkValidPageIndex_PrepareCS";
    _DAT_14c9dc920 = FUN_146826540;
    _DAT_14c9dc928 = FUN_146825d77;
    _DAT_14c9dc930 = FUN_146825fd6;
    _DAT_14c9dc938 = FUN_1407e02ea;
    _DAT_14c9dc940 = FUN_146826273;
    _DAT_14c9dc918 = FUN_147198716;
    _DAT_14c9dc958 = 0xffffffff000000e0;
    _DAT_14c9dc960 = 8;
    DAT_14c9dc964 = 0;
    _DAT_14c9dc948 = &LAB_147198740;
    FUN_145f45cde();
    FUN_1407e00cc(&DAT_14c9dc900);
    return;
  }
  return;
}



// FUNCTION 145f45cde FUN_145f45cde body=123 status=ok
// SIG undefined FUN_145f45cde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f45cde(void)

{
  _DAT_14c9e14b0 = L"BASE";
  DAT_14c9e14da = 4;
  _DAT_14c9e14b8 = FUN_140b35ae4();
  _DAT_14c9e14c0 = DAT_14c9dc910;
  _DAT_14c9e14c8 = &LAB_14682652b;
  DAT_14c9dc910 = &DAT_14c9e14b0;
  DAT_14c9dc965 = DAT_14c9dc965 + '\x01';
  _DAT_14c9e14d0 = 0x100000000;
  if (*(char *)(_DAT_14c9e14b8 + 100) != '\0') {
    DAT_14c9dc966 = DAT_14c9dc966 + '\x01';
  }
  return;
}



// FUNCTION 145f45d5a FUN_145f45d5a body=261 status=ok
// SIG undefined FUN_145f45d5a(void)

void FUN_145f45d5a(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e0068) {
    FUN_144b3d300(&DAT_14c9e0068);
    if (DAT_14c9e0068 == -1) {
      FUN_145f45e60(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0x11b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9dffe8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c9e6b3);
      _Init_thread_footer(&DAT_14c9e0068);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f45e60 FUN_145f45e60 body=226 status=ok
// SIG undefined FUN_145f45e60(void)

longlong * FUN_145f45e60(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462ce868;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f45f44 FUN_145f45f44 body=138 status=ok
// SIG undefined FUN_145f45f44(void)

code * FUN_145f45f44(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MacroGroupBoundCPU_TranslatedWorldMaxAABB";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000122;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a0c36;
}



// FUNCTION 145f45fce FUN_145f45fce body=138 status=ok
// SIG undefined FUN_145f45fce(void)

code * FUN_145f45fce(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PageIndexResolutionAndOffsetBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000127;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a0b22;
}



// FUNCTION 145f46058 FUN_145f46058 body=138 status=ok
// SIG undefined FUN_145f46058(void)

code * FUN_145f46058(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000011e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a0dd4;
}



// FUNCTION 145f460e2 FUN_145f460e2 body=292 status=ok
// SIG undefined FUN_145f460e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f460e2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9dcb38) {
    FUN_144b3d300(&DAT_14c9dcb38);
    if (DAT_14c9dcb38 == -1) {
      FUN_145f46350();
      FUN_145f46206();
      FUN_140db5666(&DAT_14c9dca90,0,&DAT_14c9dca28,L"FVoxelAllocatePageIndexCS",
                    L"/Engine/Private/HairStrands/HairStrandsVoxelRasterCompute.usf",
                    L"AllocatePageIndex",5,1,FUN_14719886e,FUN_14719880e,&LAB_1462ce324,
                    &LAB_14719880a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e0070);
      _DAT_14c9dca90 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c861f8);
      _Init_thread_footer(&DAT_14c9dcb38);
    }
  }
  return &DAT_14c9dca90;
}



// FUNCTION 145f46206 FUN_145f46206 body=205 status=ok
// SIG undefined FUN_145f46206(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f46206(void)

{
  if ((DAT_14c9dca8f & 2) == 0) {
    DAT_14c9dca8f = DAT_14c9dca8f | 2;
    _DAT_14c9dca30 = L"FVoxelAllocatePageIndexCS";
    _DAT_14c9dca48 = FUN_146826540;
    _DAT_14c9dca50 = FUN_146825d77;
    _DAT_14c9dca58 = FUN_146825fd6;
    _DAT_14c9dca60 = FUN_1407e02ea;
    _DAT_14c9dca68 = FUN_146826273;
    _DAT_14c9dca40 = FUN_1471987dc;
    _DAT_14c9dca80 = 0xffffffff000000e0;
    _DAT_14c9dca88 = 8;
    DAT_14c9dca8c = 0;
    _DAT_14c9dca70 = &LAB_147198806;
    FUN_145f462d4();
    FUN_1407e00cc(&DAT_14c9dca28);
    return;
  }
  return;
}



// FUNCTION 145f462d4 FUN_145f462d4 body=123 status=ok
// SIG undefined FUN_145f462d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f462d4(void)

{
  _DAT_14c9e14e0 = L"BASE";
  DAT_14c9e150a = 4;
  _DAT_14c9e14e8 = FUN_140b35ae4();
  _DAT_14c9e14f0 = DAT_14c9dca38;
  _DAT_14c9e14f8 = &LAB_14682652b;
  DAT_14c9dca38 = &DAT_14c9e14e0;
  DAT_14c9dca8d = DAT_14c9dca8d + '\x01';
  _DAT_14c9e1500 = 0x100000000;
  if (*(char *)(_DAT_14c9e14e8 + 100) != '\0') {
    DAT_14c9dca8e = DAT_14c9dca8e + '\x01';
  }
  return;
}



// FUNCTION 145f46350 FUN_145f46350 body=261 status=ok
// SIG undefined FUN_145f46350(void)

void FUN_145f46350(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e00f0) {
    FUN_144b3d300(&DAT_14c9e00f0);
    if (DAT_14c9e00f0 == -1) {
      FUN_14159c49a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x360;
      local_58 = 0xf1;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e0070,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c9e6bf);
      _Init_thread_footer(&DAT_14c9e00f0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f46456 FUN_145f46456 body=138 status=ok
// SIG undefined FUN_145f46456(void)

code * FUN_145f46456(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MacroGroupCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14000000f7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a13c0;
}



// FUNCTION 145f464e0 FUN_145f464e0 body=138 status=ok
// SIG undefined FUN_145f464e0(void)

code * FUN_145f464e0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CPU_TranslatedWorldMinAABB";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000fb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0x10;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a12ac;
}



// FUNCTION 145f4656a FUN_145f4656a body=138 status=ok
// SIG undefined FUN_145f4656a(void)

code * FUN_145f4656a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"bUseCPUVoxelWorldSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000f4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a14d4;
}



// FUNCTION 145f465f4 FUN_145f465f4 body=292 status=ok
// SIG undefined FUN_145f465f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f465f4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9dd350) {
    FUN_144b3d300(&DAT_14c9dd350);
    if (DAT_14c9dd350 == -1) {
      FUN_145f46862();
      FUN_145f46718();
      FUN_140db5666(&DAT_14c9dd2a8,0,&DAT_14c9dd240,L"FVirtualVoxelGenerateMipCS",
                    L"/Engine/Private/HairStrands/HairStrandsVoxelRasterCompute.usf",L"MainCS",5,2,
                    FUN_147198dd8,FUN_147198d78,&LAB_1462ce36a,&LAB_147198d74,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9e0428);
      _DAT_14c9dd2a8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c8624c);
      _Init_thread_footer(&DAT_14c9dd350);
    }
  }
  return &DAT_14c9dd2a8;
}



// FUNCTION 145f46718 FUN_145f46718 body=205 status=ok
// SIG undefined FUN_145f46718(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f46718(void)

{
  if ((DAT_14c9dd2a7 & 2) == 0) {
    DAT_14c9dd2a7 = DAT_14c9dd2a7 | 2;
    _DAT_14c9dd248 = L"FVirtualVoxelGenerateMipCS";
    _DAT_14c9dd260 = FUN_146826540;
    _DAT_14c9dd268 = FUN_146825d77;
    _DAT_14c9dd270 = FUN_146825fd6;
    _DAT_14c9dd278 = FUN_1407e02ea;
    _DAT_14c9dd280 = FUN_146826273;
    _DAT_14c9dd258 = FUN_147198d46;
    _DAT_14c9dd298 = 0xffffffff000000e0;
    _DAT_14c9dd2a0 = 8;
    DAT_14c9dd2a4 = 0;
    _DAT_14c9dd288 = &LAB_147198d70;
    FUN_145f467e6();
    FUN_1407e00cc(&DAT_14c9dd240);
    return;
  }
  return;
}



// FUNCTION 145f467e6 FUN_145f467e6 body=123 status=ok
// SIG undefined FUN_145f467e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f467e6(void)

{
  _DAT_14c9e1630 = L"BASE";
  DAT_14c9e165a = 4;
  _DAT_14c9e1638 = FUN_140b35ae4();
  _DAT_14c9e1640 = DAT_14c9dd250;
  _DAT_14c9e1648 = &LAB_14682652b;
  DAT_14c9dd250 = &DAT_14c9e1630;
  DAT_14c9dd2a5 = DAT_14c9dd2a5 + '\x01';
  _DAT_14c9e1650 = 0x100000000;
  if (*(char *)(_DAT_14c9e1638 + 100) != '\0') {
    DAT_14c9dd2a6 = DAT_14c9dd2a6 + '\x01';
  }
  return;
}



// FUNCTION 145f46862 FUN_145f46862 body=261 status=ok
// SIG undefined FUN_145f46862(void)

void FUN_145f46862(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e04a8) {
    FUN_144b3d300(&DAT_14c9e04a8);
    if (DAT_14c9e04a8 == -1) {
      FUN_145f46968(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xd0;
      local_58 = 0x479;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e0428,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c9e713);
      _Init_thread_footer(&DAT_14c9e04a8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f46968 FUN_145f46968 body=226 status=ok
// SIG undefined FUN_145f46968(void)

longlong * FUN_145f46968(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462cef62;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f46a4c FUN_145f46a4c body=138 status=ok
// SIG undefined FUN_145f46a4c(void)

code * FUN_145f46a4c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutDensityTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb800000487;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a22de;
}



// FUNCTION 145f46ad6 FUN_145f46ad6 body=138 status=ok
// SIG undefined FUN_145f46ad6(void)

code * FUN_145f46ad6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"bPatchEmptyPage";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8800000480;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a247c;
}



// FUNCTION 145f46b60 FUN_145f46b60 body=138 status=ok
// SIG undefined FUN_145f46b60(void)

code * FUN_145f46b60(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SourceMip";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000047e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a2506;
}



// FUNCTION 145f46bea FUN_145f46bea body=292 status=ok
// SIG undefined FUN_145f46bea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f46bea(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9df128) {
    FUN_144b3d300(&DAT_14c9df128);
    if (DAT_14c9df128 == -1) {
      FUN_145f46e58();
      FUN_145f46d0e();
      FUN_140db5666(&DAT_14c9df080,0,&DAT_14c9df018,L"FRenderSingleScatteringWithPreshadingRGS",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesHardwareRayTracing.usf"
                    ,L"RenderSingleScatteringWithPreshadingRGS",6,8,FUN_14719bd60,FUN_14719bd1c,
                    &LAB_145851fd0,&LAB_14719bd18,&LAB_14719bd12,&LAB_14712ac08,0xe0,&DAT_14c9e0be0)
      ;
      _DAT_14c9df080 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c9a36a);
      _Init_thread_footer(&DAT_14c9df128);
    }
  }
  return &DAT_14c9df080;
}



// FUNCTION 145f46d0e FUN_145f46d0e body=205 status=ok
// SIG undefined FUN_145f46d0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f46d0e(void)

{
  if ((DAT_14c9df07f & 2) == 0) {
    DAT_14c9df07f = DAT_14c9df07f | 2;
    _DAT_14c9df020 = L"FRenderSingleScatteringWithPreshadingRGS";
    _DAT_14c9df038 = FUN_146826540;
    _DAT_14c9df040 = FUN_146825d77;
    _DAT_14c9df048 = FUN_146825fd6;
    _DAT_14c9df050 = FUN_1407e02ea;
    _DAT_14c9df058 = FUN_146826273;
    _DAT_14c9df030 = FUN_14719bce4;
    _DAT_14c9df070 = 0xffffffff000000e0;
    _DAT_14c9df078 = 8;
    DAT_14c9df07c = 0;
    _DAT_14c9df060 = &LAB_14719bd0e;
    FUN_145f46ddc();
    FUN_1407e00cc(&DAT_14c9df018);
    return;
  }
  return;
}



// FUNCTION 145f46ddc FUN_145f46ddc body=123 status=ok
// SIG undefined FUN_145f46ddc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f46ddc(void)

{
  _DAT_14c9e1ad8 = L"BASE";
  DAT_14c9e1b02 = 4;
  _DAT_14c9e1ae0 = FUN_140b35ae4();
  _DAT_14c9e1ae8 = DAT_14c9df028;
  _DAT_14c9e1af0 = &LAB_14682652b;
  DAT_14c9df028 = &DAT_14c9e1ad8;
  DAT_14c9df07d = DAT_14c9df07d + '\x01';
  _DAT_14c9e1af8 = 0x100000000;
  if (*(char *)(_DAT_14c9e1ae0 + 100) != '\0') {
    DAT_14c9df07e = DAT_14c9df07e + '\x01';
  }
  return;
}



// FUNCTION 145f46e58 FUN_145f46e58 body=261 status=ok
// SIG undefined FUN_145f46e58(void)

void FUN_145f46e58(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e0c60) {
    FUN_144b3d300(&DAT_14c9e0c60);
    if (DAT_14c9e0c60 == -1) {
      FUN_14159c57e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x410;
      local_58 = 0x197;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e0be0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ca0eb1);
      _Init_thread_footer(&DAT_14c9e0c60);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f46f5e FUN_145f46f5e body=132 status=ok
// SIG undefined FUN_145f46f5e(void)

undefined1 * FUN_145f46f5e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x199;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471a9232;
}



// FUNCTION 145f46fe2 FUN_145f46fe2 body=138 status=ok
// SIG undefined FUN_145f46fe2(void)

code * FUN_145f46fe2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3c0000001b1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462cfbcc;
}



// FUNCTION 145f4706c FUN_145f4706c body=144 status=ok
// SIG undefined FUN_145f4706c(void)

code * FUN_145f4706c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145b1fdd4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"VolumeShadowingShaderParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FVolumeShadowingShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xc0000001a6;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462cfd7c;
}



// FUNCTION 145f470fc FUN_145f470fc body=292 status=ok
// SIG undefined FUN_145f470fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f470fc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9dfa20) {
    FUN_144b3d300(&DAT_14c9dfa20);
    if (DAT_14c9dfa20 == -1) {
      FUN_145f4736a();
      FUN_145f47220();
      FUN_140db5666(&DAT_14c9df978,0,&DAT_14c9df910,L"FGenerateRayMarchingTiles",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesPreshadingPipeline.usf"
                    ,L"GenerateRayMarchingTiles",5,4,FUN_14719f3e2,FUN_14719f382,&LAB_14719f346,
                    &LAB_14719f342,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e11d8);
      _DAT_14c9df978 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c9cc2c);
      _Init_thread_footer(&DAT_14c9dfa20);
    }
  }
  return &DAT_14c9df978;
}



// FUNCTION 145f47220 FUN_145f47220 body=205 status=ok
// SIG undefined FUN_145f47220(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f47220(void)

{
  if ((DAT_14c9df977 & 2) == 0) {
    DAT_14c9df977 = DAT_14c9df977 | 2;
    _DAT_14c9df918 = L"FGenerateRayMarchingTiles";
    _DAT_14c9df930 = FUN_146826540;
    _DAT_14c9df938 = FUN_146825d77;
    _DAT_14c9df940 = FUN_146825fd6;
    _DAT_14c9df948 = FUN_1407e02ea;
    _DAT_14c9df950 = FUN_146826273;
    _DAT_14c9df928 = FUN_14719f314;
    _DAT_14c9df968 = 0xffffffff000000e0;
    _DAT_14c9df970 = 8;
    DAT_14c9df974 = 0;
    _DAT_14c9df958 = &LAB_14719f33e;
    FUN_145f472ee();
    FUN_1407e00cc(&DAT_14c9df910);
    return;
  }
  return;
}



// FUNCTION 145f472ee FUN_145f472ee body=123 status=ok
// SIG undefined FUN_145f472ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f472ee(void)

{
  _DAT_14c9e1c28 = L"BASE";
  DAT_14c9e1c52 = 4;
  _DAT_14c9e1c30 = FUN_140b35ae4();
  _DAT_14c9e1c38 = DAT_14c9df920;
  _DAT_14c9e1c40 = &LAB_14682652b;
  DAT_14c9df920 = &DAT_14c9e1c28;
  DAT_14c9df975 = DAT_14c9df975 + '\x01';
  _DAT_14c9e1c48 = 0x100000000;
  if (*(char *)(_DAT_14c9e1c30 + 100) != '\0') {
    DAT_14c9df976 = DAT_14c9df976 + '\x01';
  }
  return;
}



// FUNCTION 145f4736a FUN_145f4736a body=261 status=ok
// SIG undefined FUN_145f4736a(void)

void FUN_145f4736a(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e1258) {
    FUN_144b3d300(&DAT_14c9e1258);
    if (DAT_14c9e1258 == -1) {
      FUN_14159c662(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0x1a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e11d8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ca489f);
      _Init_thread_footer(&DAT_14c9e1258);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f47470 FUN_145f47470 body=138 status=ok
// SIG undefined FUN_145f47470(void)

code * FUN_145f47470(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d037e;
}



// FUNCTION 145f474fa FUN_145f474fa body=138 status=ok
// SIG undefined FUN_145f474fa(void)

code * FUN_145f474fa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWNumVoxelsPerTileBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13800000037;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471afc4e;
}



// FUNCTION 145f47584 FUN_145f47584 body=138 status=ok
// SIG undefined FUN_145f47584(void)

code * FUN_145f47584(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"bJitter";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10c0000002a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471afe76;
}



// FUNCTION 145f4760e FUN_145f4760e body=292 status=ok
// SIG undefined FUN_145f4760e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f4760e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e2b60) {
    FUN_144b3d300(&DAT_14c9e2b60);
    if (DAT_14c9e2b60 == -1) {
      FUN_145f4787c();
      FUN_145f47732();
      FUN_140db5666(&DAT_14c9e2ab8,0,&DAT_14c9e2a50,L"FMarkTopLevelGridVoxelsForFrustumGrid",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesFrustumVoxelGrid.usf"
                    ,L"MarkTopLevelGridVoxelsForFrustumGridCS",5,1,FUN_1471b65f6,FUN_1471b6596,
                    &LAB_1471b655a,&LAB_1471b6556,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e5c28)
      ;
      _DAT_14c9e2ab8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cad807);
      _Init_thread_footer(&DAT_14c9e2b60);
    }
  }
  return &DAT_14c9e2ab8;
}



// FUNCTION 145f47732 FUN_145f47732 body=205 status=ok
// SIG undefined FUN_145f47732(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f47732(void)

{
  if ((DAT_14c9e2ab7 & 2) == 0) {
    DAT_14c9e2ab7 = DAT_14c9e2ab7 | 2;
    _DAT_14c9e2a58 = L"FMarkTopLevelGridVoxelsForFrustumGrid";
    _DAT_14c9e2a70 = FUN_146826540;
    _DAT_14c9e2a78 = FUN_146825d77;
    _DAT_14c9e2a80 = FUN_146825fd6;
    _DAT_14c9e2a88 = FUN_1407e02ea;
    _DAT_14c9e2a90 = FUN_146826273;
    _DAT_14c9e2a68 = FUN_1471b6528;
    _DAT_14c9e2aa8 = 0xffffffff000000e0;
    _DAT_14c9e2ab0 = 8;
    DAT_14c9e2ab4 = 0;
    _DAT_14c9e2a98 = &LAB_1471b6552;
    FUN_145f47800();
    FUN_1407e00cc(&DAT_14c9e2a50);
    return;
  }
  return;
}



// FUNCTION 145f47800 FUN_145f47800 body=123 status=ok
// SIG undefined FUN_145f47800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f47800(void)

{
  _DAT_14c9e6c80 = L"BASE";
  DAT_14c9e6caa = 4;
  _DAT_14c9e6c88 = FUN_140b35ae4();
  _DAT_14c9e6c90 = DAT_14c9e2a60;
  _DAT_14c9e6c98 = &LAB_14682652b;
  DAT_14c9e2a60 = &DAT_14c9e6c80;
  DAT_14c9e2ab5 = DAT_14c9e2ab5 + '\x01';
  _DAT_14c9e6ca0 = 0x100000000;
  if (*(char *)(_DAT_14c9e6c88 + 100) != '\0') {
    DAT_14c9e2ab6 = DAT_14c9e2ab6 + '\x01';
  }
  return;
}



// FUNCTION 145f4787c FUN_145f4787c body=261 status=ok
// SIG undefined FUN_145f4787c(void)

void FUN_145f4787c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e5ca8) {
    FUN_144b3d300(&DAT_14c9e5ca8);
    if (DAT_14c9e5ca8 == -1) {
      FUN_145f47982(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xb0;
      local_58 = 499;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e5c28,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cccf2e);
      _Init_thread_footer(&DAT_14c9e5ca8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f47982 FUN_145f47982 body=226 status=ok
// SIG undefined FUN_145f47982(void)

longlong * FUN_145f47982(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d1bba;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f47a66 FUN_145f47a66 body=138 status=ok
// SIG undefined FUN_145f47a66(void)

undefined1 * FUN_145f47a66(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 500;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1471c0c12;
}



// FUNCTION 145f47af0 FUN_145f47af0 body=138 status=ok
// SIG undefined FUN_145f47af0(void)

code * FUN_145f47af0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrimitiveWorldBoundsMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000001f9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c0b88;
}



// FUNCTION 145f47b7a FUN_145f47b7a body=138 status=ok
// SIG undefined FUN_145f47b7a(void)

code * FUN_145f47b7a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TopLevelGridResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000001f6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f47a66;
}



// FUNCTION 145f47c04 FUN_145f47c04 body=292 status=ok
// SIG undefined FUN_145f47c04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f47c04(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e2db0) {
    FUN_144b3d300(&DAT_14c9e2db0);
    if (DAT_14c9e2db0 == -1) {
      FUN_145f47e72();
      FUN_145f47d28();
      FUN_140db5666(&DAT_14c9e2d08,0,&DAT_14c9e2ca0,L"FTopLevelGridCalculateVoxelSize",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesVoxelGridPipeline.usf"
                    ,L"TopLevelGridCalculateVoxelSize",5,1,FUN_1471b67dc,FUN_1471b677c,
                    &LAB_1471b6740,&LAB_1471b673c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e5d38)
      ;
      _DAT_14c9e2d08 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cad874);
      _Init_thread_footer(&DAT_14c9e2db0);
    }
  }
  return &DAT_14c9e2d08;
}



// FUNCTION 145f47d28 FUN_145f47d28 body=205 status=ok
// SIG undefined FUN_145f47d28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f47d28(void)

{
  if ((DAT_14c9e2d07 & 2) == 0) {
    DAT_14c9e2d07 = DAT_14c9e2d07 | 2;
    _DAT_14c9e2ca8 = L"FTopLevelGridCalculateVoxelSize";
    _DAT_14c9e2cc0 = FUN_146826540;
    _DAT_14c9e2cc8 = FUN_146825d77;
    _DAT_14c9e2cd0 = FUN_146825fd6;
    _DAT_14c9e2cd8 = FUN_1407e02ea;
    _DAT_14c9e2ce0 = FUN_146826273;
    _DAT_14c9e2cb8 = FUN_1471b670e;
    _DAT_14c9e2cf8 = 0xffffffff000000e0;
    _DAT_14c9e2d00 = 8;
    DAT_14c9e2d04 = 0;
    _DAT_14c9e2ce8 = &LAB_1471b6738;
    FUN_145f47df6();
    FUN_1407e00cc(&DAT_14c9e2ca0);
    return;
  }
  return;
}



// FUNCTION 145f47df6 FUN_145f47df6 body=123 status=ok
// SIG undefined FUN_145f47df6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f47df6(void)

{
  _DAT_14c9e6ce0 = L"BASE";
  DAT_14c9e6d0a = 4;
  _DAT_14c9e6ce8 = FUN_140b35ae4();
  _DAT_14c9e6cf0 = DAT_14c9e2cb0;
  _DAT_14c9e6cf8 = &LAB_14682652b;
  DAT_14c9e2cb0 = &DAT_14c9e6ce0;
  DAT_14c9e2d05 = DAT_14c9e2d05 + '\x01';
  _DAT_14c9e6d00 = 0x100000000;
  if (*(char *)(_DAT_14c9e6ce8 + 100) != '\0') {
    DAT_14c9e2d06 = DAT_14c9e2d06 + '\x01';
  }
  return;
}



// FUNCTION 145f47e72 FUN_145f47e72 body=261 status=ok
// SIG undefined FUN_145f47e72(void)

void FUN_145f47e72(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e5db8) {
    FUN_144b3d300(&DAT_14c9e5db8);
    if (DAT_14c9e5db8 == -1) {
      FUN_145f47f78(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x80;
      local_58 = 0x296;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e5d38,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cccf46);
      _Init_thread_footer(&DAT_14c9e5db8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f47f78 FUN_145f47f78 body=226 status=ok
// SIG undefined FUN_145f47f78(void)

longlong * FUN_145f47f78(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d1cca;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4805c FUN_145f4805c body=138 status=ok
// SIG undefined FUN_145f4805c(void)

code * FUN_145f4805c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MinVoxelSizeOutOfFrustum";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x68000002a3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d1d52;
}



// FUNCTION 145f480e6 FUN_145f480e6 body=138 status=ok
// SIG undefined FUN_145f480e6(void)

code * FUN_145f480e6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TopLevelGridResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000299;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d1dda;
}



// FUNCTION 145f48170 FUN_145f48170 body=138 status=ok
// SIG undefined FUN_145f48170(void)

code * FUN_145f48170(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"bUseProjectedPixelSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70000002a5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c1c66;
}



// FUNCTION 145f481fa FUN_145f481fa body=292 status=ok
// SIG undefined FUN_145f481fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f481fa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e2ed8) {
    FUN_144b3d300(&DAT_14c9e2ed8);
    if (DAT_14c9e2ed8 == -1) {
      FUN_145f48468();
      FUN_145f4831e();
      FUN_140db5666(&DAT_14c9e2e30,0,&DAT_14c9e2dc8,L"FAllocateBottomLevelGrid",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesVoxelGridPipeline.usf"
                    ,L"AllocateBottomLevelGrid",5,2,FUN_1471b68de,FUN_1471b687e,&LAB_1471b6842,
                    &LAB_1471b683e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e5dc0);
      _DAT_14c9e2e30 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cad880);
      _Init_thread_footer(&DAT_14c9e2ed8);
    }
  }
  return &DAT_14c9e2e30;
}



// FUNCTION 145f4831e FUN_145f4831e body=205 status=ok
// SIG undefined FUN_145f4831e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4831e(void)

{
  if ((DAT_14c9e2e2f & 2) == 0) {
    DAT_14c9e2e2f = DAT_14c9e2e2f | 2;
    _DAT_14c9e2dd0 = L"FAllocateBottomLevelGrid";
    _DAT_14c9e2de8 = FUN_146826540;
    _DAT_14c9e2df0 = FUN_146825d77;
    _DAT_14c9e2df8 = FUN_146825fd6;
    _DAT_14c9e2e00 = FUN_1407e02ea;
    _DAT_14c9e2e08 = FUN_146826273;
    _DAT_14c9e2de0 = FUN_1471b6810;
    _DAT_14c9e2e20 = 0xffffffff000000e0;
    _DAT_14c9e2e28 = 8;
    DAT_14c9e2e2c = 0;
    _DAT_14c9e2e10 = &LAB_1471b683a;
    FUN_145f483ec();
    FUN_1407e00cc(&DAT_14c9e2dc8);
    return;
  }
  return;
}



// FUNCTION 145f483ec FUN_145f483ec body=123 status=ok
// SIG undefined FUN_145f483ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f483ec(void)

{
  _DAT_14c9e6d10 = L"BASE";
  DAT_14c9e6d3a = 4;
  _DAT_14c9e6d18 = FUN_140b35ae4();
  _DAT_14c9e6d20 = DAT_14c9e2dd8;
  _DAT_14c9e6d28 = &LAB_14682652b;
  DAT_14c9e2dd8 = &DAT_14c9e6d10;
  DAT_14c9e2e2d = DAT_14c9e2e2d + '\x01';
  _DAT_14c9e6d30 = 0x100000000;
  if (*(char *)(_DAT_14c9e6d18 + 100) != '\0') {
    DAT_14c9e2e2e = DAT_14c9e2e2e + '\x01';
  }
  return;
}



// FUNCTION 145f48468 FUN_145f48468 body=261 status=ok
// SIG undefined FUN_145f48468(void)

void FUN_145f48468(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e5e40) {
    FUN_144b3d300(&DAT_14c9e5e40);
    if (DAT_14c9e5e40 == -1) {
      FUN_145f4856e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0x2c9;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e5dc0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cccf52);
      _Init_thread_footer(&DAT_14c9e5e40);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4856e FUN_145f4856e body=226 status=ok
// SIG undefined FUN_145f4856e(void)

longlong * FUN_145f4856e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d1e64;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f48652 FUN_145f48652 body=138 status=ok
// SIG undefined FUN_145f48652(void)

code * FUN_145f48652(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWBottomLevelGridAllocatorBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000002d4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d1eec;
}



// FUNCTION 145f486dc FUN_145f486dc body=138 status=ok
// SIG undefined FUN_145f486dc(void)

code * FUN_145f486dc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TopLevelGridWorldBoundsMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000002ce;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c21ce;
}



// FUNCTION 145f48766 FUN_145f48766 body=138 status=ok
// SIG undefined FUN_145f48766(void)

code * FUN_145f48766(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxVoxelResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3c000002d0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f486dc;
}



// FUNCTION 145f487f0 FUN_145f487f0 body=292 status=ok
// SIG undefined FUN_145f487f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f487f0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e3818) {
    FUN_144b3d300(&DAT_14c9e3818);
    if (DAT_14c9e3818 == -1) {
      FUN_145f48a5e();
      FUN_145f48914();
      FUN_140db5666(&DAT_14c9e3770,0,&DAT_14c9e3708,L"FRenderTransmittanceWithVoxelGridCS",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesVoxelGridRendering.usf"
                    ,L"RenderTransmittanceWithVoxelGridCS",5,9,FUN_1471b74a6,FUN_1471b7446,
                    &LAB_142cad934,&LAB_1471b7442,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e6200)
      ;
      _DAT_14c9e3770 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cad970);
      _Init_thread_footer(&DAT_14c9e3818);
    }
  }
  return &DAT_14c9e3770;
}



// FUNCTION 145f48914 FUN_145f48914 body=205 status=ok
// SIG undefined FUN_145f48914(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f48914(void)

{
  if ((DAT_14c9e376f & 2) == 0) {
    DAT_14c9e376f = DAT_14c9e376f | 2;
    _DAT_14c9e3710 = L"FRenderTransmittanceWithVoxelGridCS";
    _DAT_14c9e3728 = FUN_146826540;
    _DAT_14c9e3730 = FUN_146825d77;
    _DAT_14c9e3738 = FUN_146825fd6;
    _DAT_14c9e3740 = FUN_1407e02ea;
    _DAT_14c9e3748 = FUN_146826273;
    _DAT_14c9e3720 = FUN_1471b7414;
    _DAT_14c9e3760 = 0xffffffff000000e0;
    _DAT_14c9e3768 = 8;
    DAT_14c9e376c = 0;
    _DAT_14c9e3750 = &LAB_1471b743e;
    FUN_145f489e2();
    FUN_1407e00cc(&DAT_14c9e3708);
    return;
  }
  return;
}



// FUNCTION 145f489e2 FUN_145f489e2 body=123 status=ok
// SIG undefined FUN_145f489e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f489e2(void)

{
  _DAT_14c9e6e90 = L"BASE";
  DAT_14c9e6eba = 4;
  _DAT_14c9e6e98 = FUN_140b35ae4();
  _DAT_14c9e6ea0 = DAT_14c9e3718;
  _DAT_14c9e6ea8 = &LAB_14682652b;
  DAT_14c9e3718 = &DAT_14c9e6e90;
  DAT_14c9e376d = DAT_14c9e376d + '\x01';
  _DAT_14c9e6eb0 = 0x100000000;
  if (*(char *)(_DAT_14c9e6e98 + 100) != '\0') {
    DAT_14c9e376e = DAT_14c9e376e + '\x01';
  }
  return;
}



// FUNCTION 145f48a5e FUN_145f48a5e body=261 status=ok
// SIG undefined FUN_145f48a5e(void)

void FUN_145f48a5e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e6280) {
    FUN_144b3d300(&DAT_14c9e6280);
    if (DAT_14c9e6280 == -1) {
      FUN_145f48b64(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xc0;
      local_58 = 0x522;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e6200,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cccfb2);
      _Init_thread_footer(&DAT_14c9e6280);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f48b64 FUN_145f48b64 body=226 status=ok
// SIG undefined FUN_145f48b64(void)

longlong * FUN_145f48b64(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d2438;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f48c48 FUN_145f48c48 body=138 status=ok
// SIG undefined FUN_145f48c48(void)

code * FUN_145f48c48(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"bJitter";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000528;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d25e2;
}



// FUNCTION 145f48cd2 FUN_145f48cd2 body=138 status=ok
// SIG undefined FUN_145f48cd2(void)

undefined1 * FUN_145f48cd2(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x524;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1471c3a2e;
}



// FUNCTION 145f48d5c FUN_145f48d5c body=138 status=ok
// SIG undefined FUN_145f48d5c(void)

code * FUN_145f48d5c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxStepCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7c0000052b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c391a;
}



// FUNCTION 145f48de6 FUN_145f48de6 body=292 status=ok
// SIG undefined FUN_145f48de6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f48de6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e3940) {
    FUN_144b3d300(&DAT_14c9e3940);
    if (DAT_14c9e3940 == -1) {
      FUN_145f49054();
      FUN_145f48f0a();
      FUN_140db5666(&DAT_14c9e3898,0,&DAT_14c9e3830,
                    L"FRenderVolumetricShadowMapForLightWithVoxelGridCS",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesVoxelGridShadows.usf"
                    ,L"RenderVolumetricShadowMapForLightWithVoxelGridCS",5,4,FUN_1471b9916,
                    FUN_1471b98b6,&LAB_1471b987a,&LAB_1471b9876,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9e6288);
      _DAT_14c9e3898 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cb7766);
      _Init_thread_footer(&DAT_14c9e3940);
    }
  }
  return &DAT_14c9e3898;
}



// FUNCTION 145f48f0a FUN_145f48f0a body=205 status=ok
// SIG undefined FUN_145f48f0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f48f0a(void)

{
  if ((DAT_14c9e3897 & 2) == 0) {
    DAT_14c9e3897 = DAT_14c9e3897 | 2;
    _DAT_14c9e3838 = L"FRenderVolumetricShadowMapForLightWithVoxelGridCS";
    _DAT_14c9e3850 = FUN_146826540;
    _DAT_14c9e3858 = FUN_146825d77;
    _DAT_14c9e3860 = FUN_146825fd6;
    _DAT_14c9e3868 = FUN_1407e02ea;
    _DAT_14c9e3870 = FUN_146826273;
    _DAT_14c9e3848 = FUN_1471b9848;
    _DAT_14c9e3888 = 0xffffffff000000e0;
    _DAT_14c9e3890 = 8;
    DAT_14c9e3894 = 0;
    _DAT_14c9e3878 = &LAB_1471b9872;
    FUN_145f48fd8();
    FUN_1407e00cc(&DAT_14c9e3830);
    return;
  }
  return;
}



// FUNCTION 145f48fd8 FUN_145f48fd8 body=123 status=ok
// SIG undefined FUN_145f48fd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f48fd8(void)

{
  _DAT_14c9e6ec0 = L"BASE";
  DAT_14c9e6eea = 4;
  _DAT_14c9e6ec8 = FUN_140b35ae4();
  _DAT_14c9e6ed0 = DAT_14c9e3840;
  _DAT_14c9e6ed8 = &LAB_14682652b;
  DAT_14c9e3840 = &DAT_14c9e6ec0;
  DAT_14c9e3895 = DAT_14c9e3895 + '\x01';
  _DAT_14c9e6ee0 = 0x100000000;
  if (*(char *)(_DAT_14c9e6ec8 + 100) != '\0') {
    DAT_14c9e3896 = DAT_14c9e3896 + '\x01';
  }
  return;
}



// FUNCTION 145f49054 FUN_145f49054 body=261 status=ok
// SIG undefined FUN_145f49054(void)

void FUN_145f49054(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e6308) {
    FUN_144b3d300(&DAT_14c9e6308);
    if (DAT_14c9e6308 == -1) {
      FUN_14159c746(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x420;
      local_58 = 0xb8c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e6288,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cccfbe);
      _Init_thread_footer(&DAT_14c9e6308);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4915a FUN_145f4915a body=138 status=ok
// SIG undefined FUN_145f4915a(void)

code * FUN_145f4915a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AbsoluteErrorThreshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb000000b9b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c3f0c;
}



// FUNCTION 145f491e4 FUN_145f491e4 body=138 status=ok
// SIG undefined FUN_145f491e4(void)

code * FUN_145f491e4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWVolumetricShadowLinkedListAllocatorBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000000bb0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d26fa;
}



// FUNCTION 145f4926e FUN_145f4926e body=138 status=ok
// SIG undefined FUN_145f4926e(void)

code * FUN_145f4926e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"bJitter";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3e800000ba9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c3bd0;
}



// FUNCTION 145f492f8 FUN_145f492f8 body=205 status=ok
// SIG undefined FUN_145f492f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f492f8(void)

{
  if ((DAT_14c9e4797 & 2) == 0) {
    DAT_14c9e4797 = DAT_14c9e4797 | 2;
    _DAT_14c9e4738 = L"FAmbientCubemapCompositePS";
    _DAT_14c9e4750 = FUN_146826540;
    _DAT_14c9e4758 = FUN_146825d77;
    _DAT_14c9e4760 = FUN_146825fd6;
    _DAT_14c9e4768 = FUN_1407e02ea;
    _DAT_14c9e4770 = FUN_146826273;
    _DAT_14c9e4748 = FUN_1471bdf7e;
    _DAT_14c9e4788 = 0xffffffff000000e0;
    _DAT_14c9e4790 = 8;
    DAT_14c9e4794 = 0;
    _DAT_14c9e4778 = &LAB_1471bdfa8;
    FUN_145f493c6();
    FUN_1407e00cc(&DAT_14c9e4730);
    return;
  }
  return;
}



// FUNCTION 145f493c6 FUN_145f493c6 body=123 status=ok
// SIG undefined FUN_145f493c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f493c6(void)

{
  _DAT_14c9e70b8 = L"BASE";
  DAT_14c9e70e2 = 4;
  _DAT_14c9e70c0 = FUN_140b35ae4();
  _DAT_14c9e70c8 = DAT_14c9e4740;
  _DAT_14c9e70d0 = &LAB_14682652b;
  DAT_14c9e4740 = &DAT_14c9e70b8;
  DAT_14c9e4795 = DAT_14c9e4795 + '\x01';
  _DAT_14c9e70d8 = 0x100000000;
  if (*(char *)(_DAT_14c9e70c0 + 100) != '\0') {
    DAT_14c9e4796 = DAT_14c9e4796 + '\x01';
  }
  return;
}



// FUNCTION 145f49442 FUN_145f49442 body=226 status=ok
// SIG undefined FUN_145f49442(void)

longlong * FUN_145f49442(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d36b8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f49526 FUN_145f49526 body=138 status=ok
// SIG undefined FUN_145f49526(void)

code * FUN_145f49526(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AmbientOcclusionSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000f8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c6414;
}



// FUNCTION 145f495b0 FUN_145f495b0 body=138 status=ok
// SIG undefined FUN_145f495b0(void)

code * FUN_145f495b0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PreIntegratedGFSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000f5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c649e;
}



// FUNCTION 145f4963a FUN_145f4963a body=144 status=ok
// SIG undefined FUN_145f4963a(void)

code * FUN_145f4963a(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x20000000fa;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f49526;
}



// FUNCTION 145f496ca FUN_145f496ca body=205 status=ok
// SIG undefined FUN_145f496ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f496ca(void)

{
  if ((DAT_14c9edc77 & 2) == 0) {
    DAT_14c9edc77 = DAT_14c9edc77 | 2;
    _DAT_14c9edc18 = L"FCullMeshSDFObjectsForViewCS";
    _DAT_14c9edc30 = FUN_146826540;
    _DAT_14c9edc38 = FUN_146825d77;
    _DAT_14c9edc40 = FUN_146825fd6;
    _DAT_14c9edc48 = FUN_1407e02ea;
    _DAT_14c9edc50 = FUN_146826273;
    _DAT_14c9edc28 = FUN_1471dea60;
    _DAT_14c9edc68 = 0xffffffff000000e0;
    _DAT_14c9edc70 = 8;
    DAT_14c9edc74 = 0;
    _DAT_14c9edc58 = &LAB_1471dea8a;
    FUN_145f49798();
    FUN_1407e00cc(&DAT_14c9edc10);
    return;
  }
  return;
}



// FUNCTION 145f49798 FUN_145f49798 body=123 status=ok
// SIG undefined FUN_145f49798(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f49798(void)

{
  _DAT_14c9f1948 = L"BASE";
  DAT_14c9f1972 = 4;
  _DAT_14c9f1950 = FUN_140b35ae4();
  _DAT_14c9f1958 = DAT_14c9edc20;
  _DAT_14c9f1960 = &LAB_14682652b;
  DAT_14c9edc20 = &DAT_14c9f1948;
  DAT_14c9edc75 = DAT_14c9edc75 + '\x01';
  _DAT_14c9f1968 = 0x100000000;
  if (*(char *)(_DAT_14c9f1950 + 100) != '\0') {
    DAT_14c9edc76 = DAT_14c9edc76 + '\x01';
  }
  return;
}



// FUNCTION 145f49814 FUN_145f49814 body=226 status=ok
// SIG undefined FUN_145f49814(void)

longlong * FUN_145f49814(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d83ba;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f498f8 FUN_145f498f8 body=138 status=ok
// SIG undefined FUN_145f498f8(void)

code * FUN_145f498f8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ObjectBoundingGeometryIndexCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd000000065;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d8442;
}



// FUNCTION 145f49982 FUN_145f49982 body=138 status=ok
// SIG undefined FUN_145f49982(void)

code * FUN_145f49982(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWObjectIndirectArguments";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000060;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e18f6;
}



// FUNCTION 145f49a0c FUN_145f49a0c body=144 status=ok
// SIG undefined FUN_145f49a0c(void)

code * FUN_145f49a0c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x5000000062;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462d84ca;
}



// FUNCTION 145f49a9c FUN_145f49a9c body=205 status=ok
// SIG undefined FUN_145f49a9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f49a9c(void)

{
  if ((DAT_14c9ee367 & 2) == 0) {
    DAT_14c9ee367 = DAT_14c9ee367 | 2;
    _DAT_14c9ee308 = L"FCullHeightfieldObjectsForViewCS";
    _DAT_14c9ee320 = FUN_146826540;
    _DAT_14c9ee328 = FUN_146825d77;
    _DAT_14c9ee330 = FUN_146825fd6;
    _DAT_14c9ee338 = FUN_1407e02ea;
    _DAT_14c9ee340 = FUN_146826273;
    _DAT_14c9ee318 = FUN_1471def04;
    _DAT_14c9ee358 = 0xffffffff000000e0;
    _DAT_14c9ee360 = 8;
    DAT_14c9ee364 = 0;
    _DAT_14c9ee348 = &LAB_1471def2e;
    FUN_145f49b6a();
    FUN_1407e00cc(&DAT_14c9ee300);
    return;
  }
  return;
}



// FUNCTION 145f49b6a FUN_145f49b6a body=123 status=ok
// SIG undefined FUN_145f49b6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f49b6a(void)

{
  _DAT_14c9f1a68 = L"BASE";
  DAT_14c9f1a92 = 4;
  _DAT_14c9f1a70 = FUN_140b35ae4();
  _DAT_14c9f1a78 = DAT_14c9ee310;
  _DAT_14c9f1a80 = &LAB_14682652b;
  DAT_14c9ee310 = &DAT_14c9f1a68;
  DAT_14c9ee365 = DAT_14c9ee365 + '\x01';
  _DAT_14c9f1a88 = 0x100000000;
  if (*(char *)(_DAT_14c9f1a70 + 100) != '\0') {
    DAT_14c9ee366 = DAT_14c9ee366 + '\x01';
  }
  return;
}



// FUNCTION 145f49be6 FUN_145f49be6 body=226 status=ok
// SIG undefined FUN_145f49be6(void)

longlong * FUN_145f49be6(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d8d82;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f49cca FUN_145f49cca body=138 status=ok
// SIG undefined FUN_145f49cca(void)

code * FUN_145f49cca(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxMeshSDFInfluenceRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x24000001cb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e280c;
}



// FUNCTION 145f49d54 FUN_145f49d54 body=138 status=ok
// SIG undefined FUN_145f49d54(void)

code * FUN_145f49d54(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxNumObjects";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000001cc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f49cca;
}



// FUNCTION 145f49dde FUN_145f49dde body=144 status=ok
// SIG undefined FUN_145f49dde(void)

code * FUN_145f49dde(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000001c9;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462d8e92;
}



// FUNCTION 145f49e6e FUN_145f49e6e body=292 status=ok
// SIG undefined FUN_145f49e6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f49e6e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9eef58) {
    FUN_144b3d300(&DAT_14c9eef58);
    if (DAT_14c9eef58 == -1) {
      FUN_145f4a0dc();
      FUN_145f49f92();
      FUN_140db5666(&DAT_14c9eeeb0,0,&DAT_14c9eee48,L"FRadianceCacheUpdateStatsCS",
                    L"/Engine/Private/Lumen/LumenRadianceCacheDebug.usf",
                    L"RadianceCacheUpdateStatsCS",5,1,FUN_1471df8f6,FUN_1471df896,&LAB_1462d734a,
                    &LAB_1471df892,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f0de0);
      _DAT_14c9eeeb0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d26091);
      _Init_thread_footer(&DAT_14c9eef58);
    }
  }
  return &DAT_14c9eeeb0;
}



// FUNCTION 145f49f92 FUN_145f49f92 body=205 status=ok
// SIG undefined FUN_145f49f92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f49f92(void)

{
  if ((DAT_14c9eeeaf & 2) == 0) {
    DAT_14c9eeeaf = DAT_14c9eeeaf | 2;
    _DAT_14c9eee50 = L"FRadianceCacheUpdateStatsCS";
    _DAT_14c9eee68 = FUN_146826540;
    _DAT_14c9eee70 = FUN_146825d77;
    _DAT_14c9eee78 = FUN_146825fd6;
    _DAT_14c9eee80 = FUN_1407e02ea;
    _DAT_14c9eee88 = FUN_146826273;
    _DAT_14c9eee60 = FUN_1471df864;
    _DAT_14c9eeea0 = 0xffffffff000000e0;
    _DAT_14c9eeea8 = 8;
    DAT_14c9eeeac = 0;
    _DAT_14c9eee90 = &LAB_1471df88e;
    FUN_145f4a060();
    FUN_1407e00cc(&DAT_14c9eee48);
    return;
  }
  return;
}



// FUNCTION 145f4a060 FUN_145f4a060 body=123 status=ok
// SIG undefined FUN_145f4a060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4a060(void)

{
  _DAT_14c9f1ca0 = L"BASE";
  DAT_14c9f1cca = 4;
  _DAT_14c9f1ca8 = FUN_140b35ae4();
  _DAT_14c9f1cb0 = DAT_14c9eee58;
  _DAT_14c9f1cb8 = &LAB_14682652b;
  DAT_14c9eee58 = &DAT_14c9f1ca0;
  DAT_14c9eeead = DAT_14c9eeead + '\x01';
  _DAT_14c9f1cc0 = 0x100000000;
  if (*(char *)(_DAT_14c9f1ca8 + 100) != '\0') {
    DAT_14c9eeeae = DAT_14c9eeeae + '\x01';
  }
  return;
}



// FUNCTION 145f4a0dc FUN_145f4a0dc body=261 status=ok
// SIG undefined FUN_145f4a0dc(void)

void FUN_145f4a0dc(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f0e60) {
    FUN_144b3d300(&DAT_14c9f0e60);
    if (DAT_14c9f0e60 == -1) {
      FUN_145f4a1e2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0x212;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f0de0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d26343);
      _Init_thread_footer(&DAT_14c9f0e60);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4a1e2 FUN_145f4a1e2 body=226 status=ok
// SIG undefined FUN_145f4a1e2(void)

longlong * FUN_145f4a1e2(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d959e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4a2c6 FUN_145f4a2c6 body=138 status=ok
// SIG undefined FUN_145f4a2c6(void)

code * FUN_145f4a2c6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxTracesFromMaxUpdateBucket";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000217;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471e3b7c;
}



// FUNCTION 145f4a350 FUN_145f4a350 body=138 status=ok
// SIG undefined FUN_145f4a350(void)

undefined1 * FUN_145f4a350(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x213;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1471e3c90;
}



// FUNCTION 145f4a3da FUN_145f4a3da body=138 status=ok
// SIG undefined FUN_145f4a3da(void)

code * FUN_145f4a3da(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ProbeTraceAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000219;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d9626;
}



// FUNCTION 145f4a464 FUN_145f4a464 body=292 status=ok
// SIG undefined FUN_145f4a464(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f4a464(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ef770) {
    FUN_144b3d300(&DAT_14c9ef770);
    if (DAT_14c9ef770 == -1) {
      FUN_145f4a6d2();
      FUN_145f4a588();
      FUN_140db5666(&DAT_14c9ef6c8,0,&DAT_14c9ef660,L"FSortProbeTraceTilesCS",
                    L"/Engine/Private/Lumen/LumenRadianceCache.usf",L"SortProbeTraceTilesCS",5,1,
                    FUN_1471dfe60,FUN_1471dfe00,&LAB_1462d7390,&LAB_1471dfdfc,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9f1198);
      _DAT_14c9ef6c8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d260e5);
      _Init_thread_footer(&DAT_14c9ef770);
    }
  }
  return &DAT_14c9ef6c8;
}



// FUNCTION 145f4a588 FUN_145f4a588 body=205 status=ok
// SIG undefined FUN_145f4a588(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4a588(void)

{
  if ((DAT_14c9ef6c7 & 2) == 0) {
    DAT_14c9ef6c7 = DAT_14c9ef6c7 | 2;
    _DAT_14c9ef668 = L"FSortProbeTraceTilesCS";
    _DAT_14c9ef680 = FUN_146826540;
    _DAT_14c9ef688 = FUN_146825d77;
    _DAT_14c9ef690 = FUN_146825fd6;
    _DAT_14c9ef698 = FUN_1407e02ea;
    _DAT_14c9ef6a0 = FUN_146826273;
    _DAT_14c9ef678 = FUN_1471dfdce;
    _DAT_14c9ef6b8 = 0xffffffff000000e0;
    _DAT_14c9ef6c0 = 8;
    DAT_14c9ef6c4 = 0;
    _DAT_14c9ef6a8 = &LAB_1471dfdf8;
    FUN_145f4a656();
    FUN_1407e00cc(&DAT_14c9ef660);
    return;
  }
  return;
}



// FUNCTION 145f4a656 FUN_145f4a656 body=123 status=ok
// SIG undefined FUN_145f4a656(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4a656(void)

{
  _DAT_14c9f1df0 = L"BASE";
  DAT_14c9f1e1a = 4;
  _DAT_14c9f1df8 = FUN_140b35ae4();
  _DAT_14c9f1e00 = DAT_14c9ef670;
  _DAT_14c9f1e08 = &LAB_14682652b;
  DAT_14c9ef670 = &DAT_14c9f1df0;
  DAT_14c9ef6c5 = DAT_14c9ef6c5 + '\x01';
  _DAT_14c9f1e10 = 0x100000000;
  if (*(char *)(_DAT_14c9f1df8 + 100) != '\0') {
    DAT_14c9ef6c6 = DAT_14c9ef6c6 + '\x01';
  }
  return;
}



// FUNCTION 145f4a6d2 FUN_145f4a6d2 body=261 status=ok
// SIG undefined FUN_145f4a6d2(void)

void FUN_145f4a6d2(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f1218) {
    FUN_144b3d300(&DAT_14c9f1218);
    if (DAT_14c9f1218 == -1) {
      FUN_145f4a7d8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x80;
      local_58 = 0x326;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f1198,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d263af);
      _Init_thread_footer(&DAT_14c9f1218);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4a7d8 FUN_145f4a7d8 body=226 status=ok
// SIG undefined FUN_145f4a7d8(void)

longlong * FUN_145f4a7d8(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462da104;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4a8bc FUN_145f4a8bc body=132 status=ok
// SIG undefined FUN_145f4a8bc(void)

undefined1 * FUN_145f4a8bc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWProbeTraceTileData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x327;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471e5ab8;
}



// FUNCTION 145f4a940 FUN_145f4a940 body=138 status=ok
// SIG undefined FUN_145f4a940(void)

code * FUN_145f4a940(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ProbeTraceTileData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000329;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462da18c;
}



// FUNCTION 145f4a9ca FUN_145f4a9ca body=144 status=ok
// SIG undefined FUN_145f4a9ca(void)

code * FUN_145f4a9ca(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145dd6572();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"RadianceCacheInputs";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"LumenRadianceCache::FRadianceCacheInputs";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x200000032b;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1471e5a2e;
}



// FUNCTION 145f4aa5a FUN_145f4aa5a body=292 status=ok
// SIG undefined FUN_145f4aa5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f4aa5a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f33c0) {
    FUN_144b3d300(&DAT_14c9f33c0);
    if (DAT_14c9f33c0 == -1) {
      FUN_145f4acc8();
      FUN_145f4ab7e();
      FUN_140db5666(&DAT_14c9f3318,0,&DAT_14c9f32b0,L"FBuildVisualizeProbesCS",
                    L"/Engine/Private/Lumen/Radiosity/LumenVisualizeRadiosityProbes.usf",
                    L"BuildVisualizeProbesCS",5,1,FUN_1471edc3e,FUN_1471edbde,&LAB_1462db420,
                    &LAB_1471edbda,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f6480);
      _DAT_14c9f3318 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d3ae13);
      _Init_thread_footer(&DAT_14c9f33c0);
    }
  }
  return &DAT_14c9f3318;
}



// FUNCTION 145f4ab7e FUN_145f4ab7e body=205 status=ok
// SIG undefined FUN_145f4ab7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4ab7e(void)

{
  if ((DAT_14c9f3317 & 2) == 0) {
    DAT_14c9f3317 = DAT_14c9f3317 | 2;
    _DAT_14c9f32b8 = L"FBuildVisualizeProbesCS";
    _DAT_14c9f32d0 = FUN_146826540;
    _DAT_14c9f32d8 = FUN_146825d77;
    _DAT_14c9f32e0 = FUN_146825fd6;
    _DAT_14c9f32e8 = FUN_1407e02ea;
    _DAT_14c9f32f0 = FUN_146826273;
    _DAT_14c9f32c8 = FUN_1471edbac;
    _DAT_14c9f3308 = 0xffffffff000000e0;
    _DAT_14c9f3310 = 8;
    DAT_14c9f3314 = 0;
    _DAT_14c9f32f8 = &LAB_1471edbd6;
    FUN_145f4ac4c();
    FUN_1407e00cc(&DAT_14c9f32b0);
    return;
  }
  return;
}



// FUNCTION 145f4ac4c FUN_145f4ac4c body=123 status=ok
// SIG undefined FUN_145f4ac4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4ac4c(void)

{
  _DAT_14c9f7b20 = L"BASE";
  DAT_14c9f7b4a = 4;
  _DAT_14c9f7b28 = FUN_140b35ae4();
  _DAT_14c9f7b30 = DAT_14c9f32c0;
  _DAT_14c9f7b38 = &LAB_14682652b;
  DAT_14c9f32c0 = &DAT_14c9f7b20;
  DAT_14c9f3315 = DAT_14c9f3315 + '\x01';
  _DAT_14c9f7b40 = 0x100000000;
  if (*(char *)(_DAT_14c9f7b28 + 100) != '\0') {
    DAT_14c9f3316 = DAT_14c9f3316 + '\x01';
  }
  return;
}



// FUNCTION 145f4acc8 FUN_145f4acc8 body=261 status=ok
// SIG undefined FUN_145f4acc8(void)

void FUN_145f4acc8(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f6500) {
    FUN_144b3d300(&DAT_14c9f6500);
    if (DAT_14c9f6500 == -1) {
      FUN_145f4adce(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x450;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f6480,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d586f3);
      _Init_thread_footer(&DAT_14c9f6500);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4adce FUN_145f4adce body=226 status=ok
// SIG undefined FUN_145f4adce(void)

longlong * FUN_145f4adce(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462dce44;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4aeb2 FUN_145f4aeb2 body=138 status=ok
// SIG undefined FUN_145f4aeb2(void)

code * FUN_145f4aeb2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWVisualizeProbeAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000453;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462dcf54;
}



// FUNCTION 145f4af3c FUN_145f4af3c body=138 status=ok
// SIG undefined FUN_145f4af3c(void)

code * FUN_145f4af3c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ProbeTileSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000457;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f5612;
}



// FUNCTION 145f4afc6 FUN_145f4afc6 body=138 status=ok
// SIG undefined FUN_145f4afc6(void)

code * FUN_145f4afc6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisualizeProbeRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000455;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462dcecc;
}



// FUNCTION 145f4b050 FUN_145f4b050 body=292 status=ok
// SIG undefined FUN_145f4b050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f4b050(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f34e8) {
    FUN_144b3d300(&DAT_14c9f34e8);
    if (DAT_14c9f34e8 == -1) {
      FUN_145f4b2be();
      FUN_145f4b174();
      FUN_140db5666(&DAT_14c9f3440,0,&DAT_14c9f33d8,L"FVisualizeRadiosityProbesVS",
                    L"/Engine/Private/Lumen/Radiosity/LumenVisualizeRadiosityProbes.usf",
                    L"VisualizeRadiosityProbesVS",0,1,FUN_1471edd04,FUN_1471edca4,&LAB_1462db42a,
                    &LAB_1471edca0,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f6508);
      _DAT_14c9f3440 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d3ae1f);
      _Init_thread_footer(&DAT_14c9f34e8);
    }
  }
  return &DAT_14c9f3440;
}



// FUNCTION 145f4b174 FUN_145f4b174 body=205 status=ok
// SIG undefined FUN_145f4b174(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4b174(void)

{
  if ((DAT_14c9f343f & 2) == 0) {
    DAT_14c9f343f = DAT_14c9f343f | 2;
    _DAT_14c9f33e0 = L"FVisualizeRadiosityProbesVS";
    _DAT_14c9f33f8 = FUN_146826540;
    _DAT_14c9f3400 = FUN_146825d77;
    _DAT_14c9f3408 = FUN_146825fd6;
    _DAT_14c9f3410 = FUN_1407e02ea;
    _DAT_14c9f3418 = FUN_146826273;
    _DAT_14c9f33f0 = FUN_1471edc72;
    _DAT_14c9f3430 = 0xffffffff000000e0;
    _DAT_14c9f3438 = 8;
    DAT_14c9f343c = 0;
    _DAT_14c9f3420 = &LAB_1471edc9c;
    FUN_145f4b242();
    FUN_1407e00cc(&DAT_14c9f33d8);
    return;
  }
  return;
}



// FUNCTION 145f4b242 FUN_145f4b242 body=123 status=ok
// SIG undefined FUN_145f4b242(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4b242(void)

{
  _DAT_14c9f7b50 = L"BASE";
  DAT_14c9f7b7a = 4;
  _DAT_14c9f7b58 = FUN_140b35ae4();
  _DAT_14c9f7b60 = DAT_14c9f33e8;
  _DAT_14c9f7b68 = &LAB_14682652b;
  DAT_14c9f33e8 = &DAT_14c9f7b50;
  DAT_14c9f343d = DAT_14c9f343d + '\x01';
  _DAT_14c9f7b70 = 0x100000000;
  if (*(char *)(_DAT_14c9f7b58 + 100) != '\0') {
    DAT_14c9f343e = DAT_14c9f343e + '\x01';
  }
  return;
}



// FUNCTION 145f4b2be FUN_145f4b2be body=261 status=ok
// SIG undefined FUN_145f4b2be(void)

void FUN_145f4b2be(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f6588) {
    FUN_144b3d300(&DAT_14c9f6588);
    if (DAT_14c9f6588 == -1) {
      FUN_145f4b3c4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x473;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f6508,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d586ff);
      _Init_thread_footer(&DAT_14c9f6588);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4b3c4 FUN_145f4b3c4 body=226 status=ok
// SIG undefined FUN_145f4b3c4(void)

longlong * FUN_145f4b3c4(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462dd06e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4b4a8 FUN_145f4b4a8 body=138 status=ok
// SIG undefined FUN_145f4b4a8(void)

undefined1 * FUN_145f4b4a8(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x474;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1471f57b4;
}



// FUNCTION 145f4b532 FUN_145f4b532 body=138 status=ok
// SIG undefined FUN_145f4b532(void)

code * FUN_145f4b532(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ProbesPerPhysicalPage";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3400000479;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f4b5bc;
}



// FUNCTION 145f4b5bc FUN_145f4b5bc body=138 status=ok
// SIG undefined FUN_145f4b5bc(void)

code * FUN_145f4b5bc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisualizeProbeRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000478;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462dd0f6;
}



// FUNCTION 145f4b646 FUN_145f4b646 body=205 status=ok
// SIG undefined FUN_145f4b646(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4b646(void)

{
  if ((DAT_14c9f3d87 & 2) == 0) {
    DAT_14c9f3d87 = DAT_14c9f3d87 | 2;
    _DAT_14c9f3d28 = L"FReflectionTileClassificationMarkCS";
    _DAT_14c9f3d40 = FUN_146826540;
    _DAT_14c9f3d48 = FUN_146825d77;
    _DAT_14c9f3d50 = FUN_146825fd6;
    _DAT_14c9f3d58 = FUN_1407e02ea;
    _DAT_14c9f3d60 = FUN_146826273;
    _DAT_14c9f3d38 = FUN_1471ef3c6;
    _DAT_14c9f3d78 = 0xffffffff000000e0;
    _DAT_14c9f3d80 = 8;
    DAT_14c9f3d84 = 0;
    _DAT_14c9f3d68 = &LAB_1471ef3f0;
    FUN_145f4b714();
    FUN_1407e00cc(&DAT_14c9f3d20);
    return;
  }
  return;
}



// FUNCTION 145f4b714 FUN_145f4b714 body=123 status=ok
// SIG undefined FUN_145f4b714(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4b714(void)

{
  _DAT_14c9f7cc8 = L"BASE";
  DAT_14c9f7cf2 = 4;
  _DAT_14c9f7cd0 = FUN_140b35ae4();
  _DAT_14c9f7cd8 = DAT_14c9f3d30;
  _DAT_14c9f7ce0 = &LAB_14682652b;
  DAT_14c9f3d30 = &DAT_14c9f7cc8;
  DAT_14c9f3d85 = DAT_14c9f3d85 + '\x01';
  _DAT_14c9f7ce8 = 0x100000000;
  if (*(char *)(_DAT_14c9f7cd0 + 100) != '\0') {
    DAT_14c9f3d86 = DAT_14c9f3d86 + '\x01';
  }
  return;
}



// FUNCTION 145f4b790 FUN_145f4b790 body=226 status=ok
// SIG undefined FUN_145f4b790(void)

longlong * FUN_145f4b790(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462dda2c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4b874 FUN_145f4b874 body=138 status=ok
// SIG undefined FUN_145f4b874(void)

code * FUN_145f4b874(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWReflectionClearTileIndirectArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000017e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f7d44;
}



// FUNCTION 145f4b8fe FUN_145f4b8fe body=138 status=ok
// SIG undefined FUN_145f4b8fe(void)

code * FUN_145f4b8fe(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWResolveTileUsed";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2DArray<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000181;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f7c30;
}



// FUNCTION 145f4b988 FUN_145f4b988 body=144 status=ok
// SIG undefined FUN_145f4b988(void)

code * FUN_145f4b988(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x6000000185;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145c761ea;
}



// FUNCTION 145f4ba18 FUN_145f4ba18 body=292 status=ok
// SIG undefined FUN_145f4ba18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f4ba18(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f4c48) {
    FUN_144b3d300(&DAT_14c9f4c48);
    if (DAT_14c9f4c48 == -1) {
      FUN_145f4bc86();
      FUN_145f4bb3c();
      FUN_140db5666(&DAT_14c9f4ba0,0,&DAT_14c9f4b38,L"FReflectionSortTracesByMaterialCS",
                    L"/Engine/Private/Lumen/LumenReflectionTracing.usf",
                    L"ReflectionSortTracesByMaterialCS",5,2,FUN_1471efce4,FUN_1471efc84,
                    &LAB_1462db4e6,&LAB_1471efc80,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f6fa8)
      ;
      _DAT_14c9f4ba0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d4a42f);
      _Init_thread_footer(&DAT_14c9f4c48);
    }
  }
  return &DAT_14c9f4ba0;
}



// FUNCTION 145f4bb3c FUN_145f4bb3c body=205 status=ok
// SIG undefined FUN_145f4bb3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4bb3c(void)

{
  if ((DAT_14c9f4b9f & 2) == 0) {
    DAT_14c9f4b9f = DAT_14c9f4b9f | 2;
    _DAT_14c9f4b40 = L"FReflectionSortTracesByMaterialCS";
    _DAT_14c9f4b58 = FUN_146826540;
    _DAT_14c9f4b60 = FUN_146825d77;
    _DAT_14c9f4b68 = FUN_146825fd6;
    _DAT_14c9f4b70 = FUN_1407e02ea;
    _DAT_14c9f4b78 = FUN_146826273;
    _DAT_14c9f4b50 = FUN_1471efc52;
    _DAT_14c9f4b90 = 0xffffffff000000e0;
    _DAT_14c9f4b98 = 8;
    DAT_14c9f4b9c = 0;
    _DAT_14c9f4b80 = &LAB_1471efc7c;
    FUN_145f4bc0a();
    FUN_1407e00cc(&DAT_14c9f4b38);
    return;
  }
  return;
}



// FUNCTION 145f4bc0a FUN_145f4bc0a body=123 status=ok
// SIG undefined FUN_145f4bc0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4bc0a(void)

{
  _DAT_14c9f7ed8 = L"BASE";
  DAT_14c9f7f02 = 4;
  _DAT_14c9f7ee0 = FUN_140b35ae4();
  _DAT_14c9f7ee8 = DAT_14c9f4b48;
  _DAT_14c9f7ef0 = &LAB_14682652b;
  DAT_14c9f4b48 = &DAT_14c9f7ed8;
  DAT_14c9f4b9d = DAT_14c9f4b9d + '\x01';
  _DAT_14c9f7ef8 = 0x100000000;
  if (*(char *)(_DAT_14c9f7ee0 + 100) != '\0') {
    DAT_14c9f4b9e = DAT_14c9f4b9e + '\x01';
  }
  return;
}



// FUNCTION 145f4bc86 FUN_145f4bc86 body=261 status=ok
// SIG undefined FUN_145f4bc86(void)

void FUN_145f4bc86(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f7028) {
    FUN_144b3d300(&DAT_14c9f7028);
    if (DAT_14c9f7028 == -1) {
      FUN_145f4bd8c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x140;
      local_58 = 0x18e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f6fa8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d595fd);
      _Init_thread_footer(&DAT_14c9f7028);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4bd8c FUN_145f4bd8c body=226 status=ok
// SIG undefined FUN_145f4bd8c(void)

longlong * FUN_145f4bd8c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462df4b2;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4be70 FUN_145f4be70 body=132 status=ok
// SIG undefined FUN_145f4be70(void)

undefined1 * FUN_145f4be70(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectArgs";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 399;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1471f98de;
}



// FUNCTION 145f4bef4 FUN_145f4bef4 body=138 status=ok
// SIG undefined FUN_145f4bef4(void)

code * FUN_145f4bef4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CompactedTraceTexelData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11800000192;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f9854;
}



// FUNCTION 145f4bf7e FUN_145f4bf7e body=144 status=ok
// SIG undefined FUN_145f4bf7e(void)

code * FUN_145f4bf7e(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000190;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9f6728;
  return FUN_145f4be70;
}



// FUNCTION 145f4c00e FUN_145f4c00e body=292 status=ok
// SIG undefined FUN_145f4c00e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f4c00e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f5538) {
    FUN_144b3d300(&DAT_14c9f5538);
    if (DAT_14c9f5538 == -1) {
      FUN_145f4c27c();
      FUN_145f4c132();
      FUN_140db5666(&DAT_14c9f5490,0,&DAT_14c9f5428,L"FLumenInitialSamplingRGS",
                    L"/Engine/Private/Lumen/LumenReSTIRGather.usf",L"LumenInitialSamplingRGS",6,4,
                    FUN_1471f0416,FUN_1471f03d2,&LAB_1462db54a,&LAB_1471f03ce,&LAB_1471f03ae,
                    &LAB_1471f03a6,0xe0,&DAT_14c9f74f8);
      _DAT_14c9f5490 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d4ae1a);
      _Init_thread_footer(&DAT_14c9f5538);
    }
  }
  return &DAT_14c9f5490;
}



// FUNCTION 145f4c132 FUN_145f4c132 body=205 status=ok
// SIG undefined FUN_145f4c132(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4c132(void)

{
  if ((DAT_14c9f548f & 2) == 0) {
    DAT_14c9f548f = DAT_14c9f548f | 2;
    _DAT_14c9f5430 = L"FLumenInitialSamplingRGS";
    _DAT_14c9f5448 = FUN_146826540;
    _DAT_14c9f5450 = FUN_146825d77;
    _DAT_14c9f5458 = FUN_146825fd6;
    _DAT_14c9f5460 = FUN_1407e02ea;
    _DAT_14c9f5468 = FUN_146826273;
    _DAT_14c9f5440 = FUN_1471f0378;
    _DAT_14c9f5480 = 0xffffffff000000e0;
    _DAT_14c9f5488 = 8;
    DAT_14c9f548c = 0;
    _DAT_14c9f5470 = &LAB_1471f03a2;
    FUN_145f4c200();
    FUN_1407e00cc(&DAT_14c9f5428);
    return;
  }
  return;
}



// FUNCTION 145f4c200 FUN_145f4c200 body=123 status=ok
// SIG undefined FUN_145f4c200(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4c200(void)

{
  _DAT_14c9f7ff8 = L"BASE";
  DAT_14c9f8022 = 4;
  _DAT_14c9f8000 = FUN_140b35ae4();
  _DAT_14c9f8008 = DAT_14c9f5438;
  _DAT_14c9f8010 = &LAB_14682652b;
  DAT_14c9f5438 = &DAT_14c9f7ff8;
  DAT_14c9f548d = DAT_14c9f548d + '\x01';
  _DAT_14c9f8018 = 0x100000000;
  if (*(char *)(_DAT_14c9f8000 + 100) != '\0') {
    DAT_14c9f548e = DAT_14c9f548e + '\x01';
  }
  return;
}



// FUNCTION 145f4c27c FUN_145f4c27c body=261 status=ok
// SIG undefined FUN_145f4c27c(void)

void FUN_145f4c27c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f7578) {
    FUN_144b3d300(&DAT_14c9f7578);
    if (DAT_14c9f7578 == -1) {
      FUN_145f4c382(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x2c0;
      local_58 = 0x166;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f74f8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d5968d);
      _Init_thread_footer(&DAT_14c9f7578);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4c382 FUN_145f4c382 body=226 status=ok
// SIG undefined FUN_145f4c382(void)

longlong * FUN_145f4c382(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e06d8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4c466 FUN_145f4c466 body=138 status=ok
// SIG undefined FUN_145f4c466(void)

code * FUN_145f4c466(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2b80000016d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471fa90e;
}



// FUNCTION 145f4c4f0 FUN_145f4c4f0 body=138 status=ok
// SIG undefined FUN_145f4c4f0(void)

code * FUN_145f4c4f0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2a000000169;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462e07e8;
}



// FUNCTION 145f4c57a FUN_145f4c57a body=138 status=ok
// SIG undefined FUN_145f4c57a(void)

undefined1 * FUN_145f4c57a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145ad0612();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SharedParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLumenHardwareRayTracingShaderBase::FSharedParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x167;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1471faa22;
}



// FUNCTION 145f4c604 FUN_145f4c604 body=292 status=ok
// SIG undefined FUN_145f4c604(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f4c604(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f97d8) {
    FUN_144b3d300(&DAT_14c9f97d8);
    if (DAT_14c9f97d8 == -1) {
      FUN_145f4c872();
      FUN_145f4c728();
      FUN_140db5666(&DAT_14c9f9730,0,&DAT_14c9f96c8,L"FLumenSceneDirectLightingStatsCS",
                    L"/Engine/Private/Lumen/LumenSceneLightingDebug.usf",
                    L"LumenSceneDirectLightingStatsCS",5,1,FUN_147205774,FUN_147205714,
                    &LAB_1462e169e,&LAB_147205710,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9fe1a0)
      ;
      _DAT_14c9f9730 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d692dd);
      _Init_thread_footer(&DAT_14c9f97d8);
    }
  }
  return &DAT_14c9f9730;
}



// FUNCTION 145f4c728 FUN_145f4c728 body=205 status=ok
// SIG undefined FUN_145f4c728(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4c728(void)

{
  if ((DAT_14c9f972f & 2) == 0) {
    DAT_14c9f972f = DAT_14c9f972f | 2;
    _DAT_14c9f96d0 = L"FLumenSceneDirectLightingStatsCS";
    _DAT_14c9f96e8 = FUN_146826540;
    _DAT_14c9f96f0 = FUN_146825d77;
    _DAT_14c9f96f8 = FUN_146825fd6;
    _DAT_14c9f9700 = FUN_1407e02ea;
    _DAT_14c9f9708 = FUN_146826273;
    _DAT_14c9f96e0 = FUN_1472056e2;
    _DAT_14c9f9720 = 0xffffffff000000e0;
    _DAT_14c9f9728 = 8;
    DAT_14c9f972c = 0;
    _DAT_14c9f9710 = &LAB_14720570c;
    FUN_145f4c7f6();
    FUN_1407e00cc(&DAT_14c9f96c8);
    return;
  }
  return;
}



// FUNCTION 145f4c7f6 FUN_145f4c7f6 body=123 status=ok
// SIG undefined FUN_145f4c7f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4c7f6(void)

{
  _DAT_14c9ffd68 = L"BASE";
  DAT_14c9ffd92 = 4;
  _DAT_14c9ffd70 = FUN_140b35ae4();
  _DAT_14c9ffd78 = DAT_14c9f96d8;
  _DAT_14c9ffd80 = &LAB_14682652b;
  DAT_14c9f96d8 = &DAT_14c9ffd68;
  DAT_14c9f972d = DAT_14c9f972d + '\x01';
  _DAT_14c9ffd88 = 0x100000000;
  if (*(char *)(_DAT_14c9ffd70 + 100) != '\0') {
    DAT_14c9f972e = DAT_14c9f972e + '\x01';
  }
  return;
}



// FUNCTION 145f4c872 FUN_145f4c872 body=261 status=ok
// SIG undefined FUN_145f4c872(void)

void FUN_145f4c872(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fe220) {
    FUN_144b3d300(&DAT_14c9fe220);
    if (DAT_14c9fe220 == -1) {
      FUN_14159d0c2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xa0;
      local_58 = 0x7ec;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fe1a0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d99377);
      _Init_thread_footer(&DAT_14c9fe220);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4c978 FUN_145f4c978 body=138 status=ok
// SIG undefined FUN_145f4c978(void)

code * FUN_145f4c978(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CardTileAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000007fd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f4ca8c;
}



// FUNCTION 145f4ca02 FUN_145f4ca02 body=138 status=ok
// SIG undefined FUN_145f4ca02(void)

code * FUN_145f4ca02(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumStandaloneLights";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x24000007f4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14720c4ac;
}



// FUNCTION 145f4ca8c FUN_145f4ca8c body=138 status=ok
// SIG undefined FUN_145f4ca8c(void)

code * FUN_145f4ca8c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CardPageIndexData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000007fc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14720c170;
}



// FUNCTION 145f4cb16 FUN_145f4cb16 body=292 status=ok
// SIG undefined FUN_145f4cb16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f4cb16(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fa098) {
    FUN_144b3d300(&DAT_14c9fa098);
    if (DAT_14c9fa098 == -1) {
      FUN_145f4cd84();
      FUN_145f4cc3a();
      FUN_140db5666(&DAT_14c9f9ff0,0,&DAT_14c9f9f88,L"FLumenSceneCompactLightSampleTracesCS",
                    L"/Engine/Private/Lumen/LumenSceneDirectLightingStochastic.usf",
                    L"CompactLightSampleTracesCS",5,2,FUN_147205d02,FUN_147205ca2,&LAB_1462e16d0,
                    &LAB_147205c9e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9fe5e0);
      _DAT_14c9f9ff0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d69517);
      _Init_thread_footer(&DAT_14c9fa098);
    }
  }
  return &DAT_14c9f9ff0;
}



// FUNCTION 145f4cc3a FUN_145f4cc3a body=205 status=ok
// SIG undefined FUN_145f4cc3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4cc3a(void)

{
  if ((DAT_14c9f9fef & 2) == 0) {
    DAT_14c9f9fef = DAT_14c9f9fef | 2;
    _DAT_14c9f9f90 = L"FLumenSceneCompactLightSampleTracesCS";
    _DAT_14c9f9fa8 = FUN_146826540;
    _DAT_14c9f9fb0 = FUN_146825d77;
    _DAT_14c9f9fb8 = FUN_146825fd6;
    _DAT_14c9f9fc0 = FUN_1407e02ea;
    _DAT_14c9f9fc8 = FUN_146826273;
    _DAT_14c9f9fa0 = FUN_147205c70;
    _DAT_14c9f9fe0 = 0xffffffff000000e0;
    _DAT_14c9f9fe8 = 8;
    DAT_14c9f9fec = 0;
    _DAT_14c9f9fd0 = &LAB_147205c9a;
    FUN_145f4cd08();
    FUN_1407e00cc(&DAT_14c9f9f88);
    return;
  }
  return;
}



// FUNCTION 145f4cd08 FUN_145f4cd08 body=123 status=ok
// SIG undefined FUN_145f4cd08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4cd08(void)

{
  _DAT_14c9ffeb8 = L"BASE";
  DAT_14c9ffee2 = 4;
  _DAT_14c9ffec0 = FUN_140b35ae4();
  _DAT_14c9ffec8 = DAT_14c9f9f98;
  _DAT_14c9ffed0 = &LAB_14682652b;
  DAT_14c9f9f98 = &DAT_14c9ffeb8;
  DAT_14c9f9fed = DAT_14c9f9fed + '\x01';
  _DAT_14c9ffed8 = 0x100000000;
  if (*(char *)(_DAT_14c9ffec0 + 100) != '\0') {
    DAT_14c9f9fee = DAT_14c9f9fee + '\x01';
  }
  return;
}



// FUNCTION 145f4cd84 FUN_145f4cd84 body=261 status=ok
// SIG undefined FUN_145f4cd84(void)

void FUN_145f4cd84(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fe660) {
    FUN_144b3d300(&DAT_14c9fe660);
    if (DAT_14c9fe660 == -1) {
      FUN_145f4ce8a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x198;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fe5e0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d993d7);
      _Init_thread_footer(&DAT_14c9fe660);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4ce8a FUN_145f4ce8a body=226 status=ok
// SIG undefined FUN_145f4ce8a(void)

longlong * FUN_145f4ce8a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e3900;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4cf6e FUN_145f4cf6e body=138 status=ok
// SIG undefined FUN_145f4cf6e(void)

code * FUN_145f4cf6e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SampleViewSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000019c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f4d082;
}



// FUNCTION 145f4cff8 FUN_145f4cff8 body=138 status=ok
// SIG undefined FUN_145f4cff8(void)

code * FUN_145f4cff8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumSamplesPerPixel1d";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000019d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f4cf6e;
}



// FUNCTION 145f4d082 FUN_145f4d082 body=138 status=ok
// SIG undefined FUN_145f4d082(void)

code * FUN_145f4d082(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DArray<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000019b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462e398e;
}



// FUNCTION 145f4d10c FUN_145f4d10c body=292 status=ok
// SIG undefined FUN_145f4d10c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f4d10c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fa1c0) {
    FUN_144b3d300(&DAT_14c9fa1c0);
    if (DAT_14c9fa1c0 == -1) {
      FUN_145f4d37a();
      FUN_145f4d230();
      FUN_140db5666(&DAT_14c9fa118,0,&DAT_14c9fa0b0,L"FLumenSceneDenoiserTemporalCS",
                    L"/Engine/Private/Lumen/LumenSceneDirectLightingStochastic.usf",
                    L"DenoiserTemporalCS",5,2,FUN_147205dc8,FUN_147205d68,&LAB_1462e16da,
                    &LAB_147205d64,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9fe668);
      _DAT_14c9fa118 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d69523);
      _Init_thread_footer(&DAT_14c9fa1c0);
    }
  }
  return &DAT_14c9fa118;
}



// FUNCTION 145f4d230 FUN_145f4d230 body=205 status=ok
// SIG undefined FUN_145f4d230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4d230(void)

{
  if ((DAT_14c9fa117 & 2) == 0) {
    DAT_14c9fa117 = DAT_14c9fa117 | 2;
    _DAT_14c9fa0b8 = L"FLumenSceneDenoiserTemporalCS";
    _DAT_14c9fa0d0 = FUN_146826540;
    _DAT_14c9fa0d8 = FUN_146825d77;
    _DAT_14c9fa0e0 = FUN_146825fd6;
    _DAT_14c9fa0e8 = FUN_1407e02ea;
    _DAT_14c9fa0f0 = FUN_146826273;
    _DAT_14c9fa0c8 = FUN_147205d36;
    _DAT_14c9fa108 = 0xffffffff000000e0;
    _DAT_14c9fa110 = 8;
    DAT_14c9fa114 = 0;
    _DAT_14c9fa0f8 = &LAB_147205d60;
    FUN_145f4d2fe();
    FUN_1407e00cc(&DAT_14c9fa0b0);
    return;
  }
  return;
}



// FUNCTION 145f4d2fe FUN_145f4d2fe body=123 status=ok
// SIG undefined FUN_145f4d2fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4d2fe(void)

{
  _DAT_14c9ffee8 = L"BASE";
  DAT_14c9fff12 = 4;
  _DAT_14c9ffef0 = FUN_140b35ae4();
  _DAT_14c9ffef8 = DAT_14c9fa0c0;
  _DAT_14c9fff00 = &LAB_14682652b;
  DAT_14c9fa0c0 = &DAT_14c9ffee8;
  DAT_14c9fa115 = DAT_14c9fa115 + '\x01';
  _DAT_14c9fff08 = 0x100000000;
  if (*(char *)(_DAT_14c9ffef0 + 100) != '\0') {
    DAT_14c9fa116 = DAT_14c9fa116 + '\x01';
  }
  return;
}



// FUNCTION 145f4d37a FUN_145f4d37a body=261 status=ok
// SIG undefined FUN_145f4d37a(void)

void FUN_145f4d37a(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fe6e8) {
    FUN_144b3d300(&DAT_14c9fe6e8);
    if (DAT_14c9fe6e8 == -1) {
      FUN_14159d1a6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x210;
      local_58 = 0x1c5;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fe668,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d993e3);
      _Init_thread_footer(&DAT_14c9fe6e8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4d480 FUN_145f4d480 body=138 status=ok
// SIG undefined FUN_145f4d480(void)

code * FUN_145f4d480(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OpacityAtlas";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d0000001d4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14720ee76;
}



// FUNCTION 145f4d50a FUN_145f4d50a body=138 status=ok
// SIG undefined FUN_145f4d50a(void)

code * FUN_145f4d50a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DiffuseLightingAndSecondMomentHistoryTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x188000001ca;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14720f23c;
}



// FUNCTION 145f4d594 FUN_145f4d594 body=138 status=ok
// SIG undefined FUN_145f4d594(void)

code * FUN_145f4d594(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b8000001d0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14720ef8a;
}



// FUNCTION 145f4d61e FUN_145f4d61e body=292 status=ok
// SIG undefined FUN_145f4d61e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f4d61e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fa9c0) {
    FUN_144b3d300(&DAT_14c9fa9c0);
    if (DAT_14c9fa9c0 == -1) {
      FUN_145f4d88c();
      FUN_145f4d742();
      FUN_140db5666(&DAT_14c9fa918,0,&DAT_14c9fa8b0,L"FLumenSceneUpdateCS",
                    L"/Engine/Private/Lumen/LumenScene.usf",L"LumenSceneUpdateCS",5,1,FUN_1472073c6,
                    FUN_147207366,&LAB_1462e16ee,&LAB_147207362,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9fe888);
      _DAT_14c9fa918 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d7b6dd);
      _Init_thread_footer(&DAT_14c9fa9c0);
    }
  }
  return &DAT_14c9fa918;
}



// FUNCTION 145f4d742 FUN_145f4d742 body=205 status=ok
// SIG undefined FUN_145f4d742(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4d742(void)

{
  if ((DAT_14c9fa917 & 2) == 0) {
    DAT_14c9fa917 = DAT_14c9fa917 | 2;
    _DAT_14c9fa8b8 = L"FLumenSceneUpdateCS";
    _DAT_14c9fa8d0 = FUN_146826540;
    _DAT_14c9fa8d8 = FUN_146825d77;
    _DAT_14c9fa8e0 = FUN_146825fd6;
    _DAT_14c9fa8e8 = FUN_1407e02ea;
    _DAT_14c9fa8f0 = FUN_146826273;
    _DAT_14c9fa8c8 = FUN_147207334;
    _DAT_14c9fa908 = 0xffffffff000000e0;
    _DAT_14c9fa910 = 8;
    DAT_14c9fa914 = 0;
    _DAT_14c9fa8f8 = &LAB_14720735e;
    FUN_145f4d810();
    FUN_1407e00cc(&DAT_14c9fa8b0);
    return;
  }
  return;
}



// FUNCTION 145f4d810 FUN_145f4d810 body=123 status=ok
// SIG undefined FUN_145f4d810(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4d810(void)

{
  _DAT_14ca00028 = L"BASE";
  DAT_14ca00052 = 4;
  _DAT_14ca00030 = FUN_140b35ae4();
  _DAT_14ca00038 = DAT_14c9fa8c0;
  _DAT_14ca00040 = &LAB_14682652b;
  DAT_14c9fa8c0 = &DAT_14ca00028;
  DAT_14c9fa915 = DAT_14c9fa915 + '\x01';
  _DAT_14ca00048 = 0x100000000;
  if (*(char *)(_DAT_14ca00030 + 100) != '\0') {
    DAT_14c9fa916 = DAT_14c9fa916 + '\x01';
  }
  return;
}



// FUNCTION 145f4d88c FUN_145f4d88c body=261 status=ok
// SIG undefined FUN_145f4d88c(void)

void FUN_145f4d88c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fe908) {
    FUN_144b3d300(&DAT_14c9fe908);
    if (DAT_14c9fe908 == -1) {
      FUN_145f4d992(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x80;
      local_58 = 0xd7;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fe888,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c4e7);
      _Init_thread_footer(&DAT_14c9fe908);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4d992 FUN_145f4d992 body=226 status=ok
// SIG undefined FUN_145f4d992(void)

longlong * FUN_145f4d992(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e4010;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4da76 FUN_145f4da76 body=138 status=ok
// SIG undefined FUN_145f4da76(void)

code * FUN_145f4da76(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CardTexelDensity";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3c000000df;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14721434c;
}



// FUNCTION 145f4db00 FUN_145f4db00 body=138 status=ok
// SIG undefined FUN_145f4db00(void)

undefined1 * FUN_145f4db00(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xd8;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_147214574;
}



// FUNCTION 145f4db8a FUN_145f4db8a body=138 status=ok
// SIG undefined FUN_145f4db8a(void)

code * FUN_145f4db8a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxSceneAddOps";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000dc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147214460;
}



// FUNCTION 145f4dc14 FUN_145f4dc14 body=292 status=ok
// SIG undefined FUN_145f4dc14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f4dc14(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fb000) {
    FUN_144b3d300(&DAT_14c9fb000);
    if (DAT_14c9fb000 == -1) {
      FUN_145f4de82();
      FUN_145f4dd38();
      FUN_140db5666(&DAT_14c9faf58,0,&DAT_14c9faef0,L"FRasterizeToCardsVS",
                    L"/Engine/Private/Lumen/LumenSceneLighting.usf",L"RasterizeToCardsVS",0,1,
                    FUN_147207afe,FUN_147207a9e,&LAB_1462e1720,&LAB_147207a9a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9feaa8);
      _DAT_14c9faf58 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d7bab1);
      _Init_thread_footer(&DAT_14c9fb000);
    }
  }
  return &DAT_14c9faf58;
}



// FUNCTION 145f4dd38 FUN_145f4dd38 body=205 status=ok
// SIG undefined FUN_145f4dd38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4dd38(void)

{
  if ((DAT_14c9faf57 & 2) == 0) {
    DAT_14c9faf57 = DAT_14c9faf57 | 2;
    _DAT_14c9faef8 = L"FRasterizeToCardsVS";
    _DAT_14c9faf10 = FUN_146826540;
    _DAT_14c9faf18 = FUN_146825d77;
    _DAT_14c9faf20 = FUN_146825fd6;
    _DAT_14c9faf28 = FUN_1407e02ea;
    _DAT_14c9faf30 = FUN_146826273;
    _DAT_14c9faf08 = FUN_147207a6c;
    _DAT_14c9faf48 = 0xffffffff000000e0;
    _DAT_14c9faf50 = 8;
    DAT_14c9faf54 = 0;
    _DAT_14c9faf38 = &LAB_147207a96;
    FUN_145f4de06();
    FUN_1407e00cc(&DAT_14c9faef0);
    return;
  }
  return;
}



// FUNCTION 145f4de06 FUN_145f4de06 body=123 status=ok
// SIG undefined FUN_145f4de06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4de06(void)

{
  _DAT_14ca00118 = L"BASE";
  DAT_14ca00142 = 4;
  _DAT_14ca00120 = FUN_140b35ae4();
  _DAT_14ca00128 = DAT_14c9faf00;
  _DAT_14ca00130 = &LAB_14682652b;
  DAT_14c9faf00 = &DAT_14ca00118;
  DAT_14c9faf55 = DAT_14c9faf55 + '\x01';
  _DAT_14ca00138 = 0x100000000;
  if (*(char *)(_DAT_14ca00120 + 100) != '\0') {
    DAT_14c9faf56 = DAT_14c9faf56 + '\x01';
  }
  return;
}



// FUNCTION 145f4de82 FUN_145f4de82 body=261 status=ok
// SIG undefined FUN_145f4de82(void)

void FUN_145f4de82(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9feb28) {
    FUN_144b3d300(&DAT_14c9feb28);
    if (DAT_14c9feb28 == -1) {
      FUN_145f4df88(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x32;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9feaa8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c523);
      _Init_thread_footer(&DAT_14c9feb28);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4df88 FUN_145f4df88 body=226 status=ok
// SIG undefined FUN_145f4df88(void)

longlong * FUN_145f4df88(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e457c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4e06c FUN_145f4e06c body=138 status=ok
// SIG undefined FUN_145f4e06c(void)

code * FUN_145f4e06c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DrawIndirectArgs";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000034;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462e4604;
}



// FUNCTION 145f4e0f6 FUN_145f4e0f6 body=138 status=ok
// SIG undefined FUN_145f4e0f6(void)

code * FUN_145f4e0f6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CardPageIndexAllocator";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000035;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f4e06c;
}



// FUNCTION 145f4e180 FUN_145f4e180 body=138 status=ok
// SIG undefined FUN_145f4e180(void)

code * FUN_145f4e180(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CardPageIndexData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000036;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f4e0f6;
}



// FUNCTION 145f4e20a FUN_145f4e20a body=292 status=ok
// SIG undefined FUN_145f4e20a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f4e20a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fc320) {
    FUN_144b3d300(&DAT_14c9fc320);
    if (DAT_14c9fc320 == -1) {
      FUN_145f4e478();
      FUN_145f4e32e();
      FUN_140db5666(&DAT_14c9fc278,0,&DAT_14c9fc210,L"FScreenProbeInjectLightSamplesCS",
                    L"/Engine/Private/Lumen/LumenScreenProbeFiltering.usf",
                    L"ScreenProbeInjectLightSamplesCS",5,1,FUN_147208744,FUN_1472086e4,
                    &LAB_1462e17a2,&LAB_1472086e0,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9ff190)
      ;
      _DAT_14c9fc278 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d878ef);
      _Init_thread_footer(&DAT_14c9fc320);
    }
  }
  return &DAT_14c9fc278;
}



// FUNCTION 145f4e32e FUN_145f4e32e body=205 status=ok
// SIG undefined FUN_145f4e32e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4e32e(void)

{
  if ((DAT_14c9fc277 & 2) == 0) {
    DAT_14c9fc277 = DAT_14c9fc277 | 2;
    _DAT_14c9fc218 = L"FScreenProbeInjectLightSamplesCS";
    _DAT_14c9fc230 = FUN_146826540;
    _DAT_14c9fc238 = FUN_146825d77;
    _DAT_14c9fc240 = FUN_146825fd6;
    _DAT_14c9fc248 = FUN_1407e02ea;
    _DAT_14c9fc250 = FUN_146826273;
    _DAT_14c9fc228 = FUN_1472086b2;
    _DAT_14c9fc268 = 0xffffffff000000e0;
    _DAT_14c9fc270 = 8;
    DAT_14c9fc274 = 0;
    _DAT_14c9fc258 = &LAB_1472086dc;
    FUN_145f4e3fc();
    FUN_1407e00cc(&DAT_14c9fc210);
    return;
  }
  return;
}



// FUNCTION 145f4e3fc FUN_145f4e3fc body=123 status=ok
// SIG undefined FUN_145f4e3fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4e3fc(void)

{
  _DAT_14ca00498 = L"BASE";
  DAT_14ca004c2 = 4;
  _DAT_14ca004a0 = FUN_140b35ae4();
  _DAT_14ca004a8 = DAT_14c9fc220;
  _DAT_14ca004b0 = &LAB_14682652b;
  DAT_14c9fc220 = &DAT_14ca00498;
  DAT_14c9fc275 = DAT_14c9fc275 + '\x01';
  _DAT_14ca004b8 = 0x100000000;
  if (*(char *)(_DAT_14ca004a0 + 100) != '\0') {
    DAT_14c9fc276 = DAT_14c9fc276 + '\x01';
  }
  return;
}



// FUNCTION 145f4e478 FUN_145f4e478 body=261 status=ok
// SIG undefined FUN_145f4e478(void)

void FUN_145f4e478(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ff210) {
    FUN_144b3d300(&DAT_14c9ff210);
    if (DAT_14c9ff210 == -1) {
      FUN_145f4e57e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x170;
      local_58 = 0xe1;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ff190,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c659);
      _Init_thread_footer(&DAT_14c9ff210);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4e57e FUN_145f4e57e body=226 status=ok
// SIG undefined FUN_145f4e57e(void)

longlong * FUN_145f4e57e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e5638;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4e662 FUN_145f4e662 body=132 status=ok
// SIG undefined FUN_145f4e662(void)

undefined1 * FUN_145f4e662(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWScreenProbeRadiance";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1472171c8;
}



// FUNCTION 145f4e6e6 FUN_145f4e6e6 body=138 status=ok
// SIG undefined FUN_145f4e6e6(void)

code * FUN_145f4e6e6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ScreenProbeRadiance";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000e3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f4e662;
}



// FUNCTION 145f4e770 FUN_145f4e770 body=144 status=ok
// SIG undefined FUN_145f4e770(void)

code * FUN_145f4e770(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000000e4;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f4e6e6;
}



// FUNCTION 145f4e800 FUN_145f4e800 body=205 status=ok
// SIG undefined FUN_145f4e800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4e800(void)

{
  if ((DAT_14ca00e97 & 2) == 0) {
    DAT_14ca00e97 = DAT_14ca00e97 | 2;
    _DAT_14ca00e38 = L"FScreenProbeComputeLightingProbabilityDensityFunctionCS";
    _DAT_14ca00e50 = FUN_146826540;
    _DAT_14ca00e58 = FUN_146825d77;
    _DAT_14ca00e60 = FUN_146825fd6;
    _DAT_14ca00e68 = FUN_1407e02ea;
    _DAT_14ca00e70 = FUN_146826273;
    _DAT_14ca00e48 = FUN_147220c1e;
    _DAT_14ca00e88 = 0xffffffff000000e0;
    _DAT_14ca00e90 = 8;
    DAT_14ca00e94 = 0;
    _DAT_14ca00e78 = &LAB_147220c48;
    FUN_145f4e8ce();
    FUN_1407e00cc(&DAT_14ca00e30);
    return;
  }
  return;
}



// FUNCTION 145f4e8ce FUN_145f4e8ce body=123 status=ok
// SIG undefined FUN_145f4e8ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4e8ce(void)

{
  _DAT_14ca077a8 = L"BASE";
  DAT_14ca077d2 = 4;
  _DAT_14ca077b0 = FUN_140b35ae4();
  _DAT_14ca077b8 = DAT_14ca00e40;
  _DAT_14ca077c0 = &LAB_14682652b;
  DAT_14ca00e40 = &DAT_14ca077a8;
  DAT_14ca00e95 = DAT_14ca00e95 + '\x01';
  _DAT_14ca077c8 = 0x100000000;
  if (*(char *)(_DAT_14ca077b0 + 100) != '\0') {
    DAT_14ca00e96 = DAT_14ca00e96 + '\x01';
  }
  return;
}



// FUNCTION 145f4e94a FUN_145f4e94a body=226 status=ok
// SIG undefined FUN_145f4e94a(void)

longlong * FUN_145f4e94a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e7a0a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4ea2e FUN_145f4ea2e body=138 status=ok
// SIG undefined FUN_145f4ea2e(void)

code * FUN_145f4ea2e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ImportanceSamplingHistoryDistanceThreshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000081;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472296e8;
}



// FUNCTION 145f4eab8 FUN_145f4eab8 body=138 status=ok
// SIG undefined FUN_145f4eab8(void)

code * FUN_145f4eab8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30800000083;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462e7a98;
}



// FUNCTION 145f4eb42 FUN_145f4eb42 body=144 status=ok
// SIG undefined FUN_145f4eb42(void)

code * FUN_145f4eb42(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000007c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1472297fc;
}



// FUNCTION 145f4ebd2 FUN_145f4ebd2 body=292 status=ok
// SIG undefined FUN_145f4ebd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f4ebd2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca04fe8) {
    FUN_144b3d300(&DAT_14ca04fe8);
    if (DAT_14ca04fe8 == -1) {
      FUN_145f4ee40();
      FUN_145f4ecf6();
      FUN_140db5666(&DAT_14ca04f40,0,&DAT_14ca04ed8,L"FClearLightSamplesCS",
                    L"/Engine/Private/MegaLights/MegaLightsSampling.usf",L"ClearLightSamplesCS",5,2,
                    FUN_14722781c,FUN_1472277bc,&LAB_14722779a,&LAB_14722778a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca072a8);
      _DAT_14ca04f40 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dc9ab1);
      _Init_thread_footer(&DAT_14ca04fe8);
    }
  }
  return &DAT_14ca04f40;
}



// FUNCTION 145f4ecf6 FUN_145f4ecf6 body=205 status=ok
// SIG undefined FUN_145f4ecf6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4ecf6(void)

{
  if ((DAT_14ca04f3f & 2) == 0) {
    DAT_14ca04f3f = DAT_14ca04f3f | 2;
    _DAT_14ca04ee0 = L"FClearLightSamplesCS";
    _DAT_14ca04ef8 = FUN_146826540;
    _DAT_14ca04f00 = FUN_146825d77;
    _DAT_14ca04f08 = FUN_146825fd6;
    _DAT_14ca04f10 = FUN_1407e02ea;
    _DAT_14ca04f18 = FUN_146826273;
    _DAT_14ca04ef0 = FUN_14722775c;
    _DAT_14ca04f30 = 0xffffffff000000e0;
    _DAT_14ca04f38 = 8;
    DAT_14ca04f3c = 0;
    _DAT_14ca04f20 = &LAB_147227786;
    FUN_145f4edc4();
    FUN_1407e00cc(&DAT_14ca04ed8);
    return;
  }
  return;
}



// FUNCTION 145f4edc4 FUN_145f4edc4 body=123 status=ok
// SIG undefined FUN_145f4edc4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4edc4(void)

{
  _DAT_14ca08290 = L"BASE";
  DAT_14ca082ba = 4;
  _DAT_14ca08298 = FUN_140b35ae4();
  _DAT_14ca082a0 = DAT_14ca04ee8;
  _DAT_14ca082a8 = &LAB_14682652b;
  DAT_14ca04ee8 = &DAT_14ca08290;
  DAT_14ca04f3d = DAT_14ca04f3d + '\x01';
  _DAT_14ca082b0 = 0x100000000;
  if (*(char *)(_DAT_14ca08298 + 100) != '\0') {
    DAT_14ca04f3e = DAT_14ca04f3e + '\x01';
  }
  return;
}



// FUNCTION 145f4ee40 FUN_145f4ee40 body=261 status=ok
// SIG undefined FUN_145f4ee40(void)

void FUN_145f4ee40(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca07328) {
    FUN_144b3d300(&DAT_14ca07328);
    if (DAT_14ca07328 == -1) {
      FUN_145f4ef46(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x300;
      local_58 = 0x2dd;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca072a8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd4153);
      _Init_thread_footer(&DAT_14ca07328);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4ef46 FUN_145f4ef46 body=226 status=ok
// SIG undefined FUN_145f4ef46(void)

longlong * FUN_145f4ef46(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462eb9ec;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4f02a FUN_145f4f02a body=132 status=ok
// SIG undefined FUN_145f4f02a(void)

undefined1 * FUN_145f4f02a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectArgs";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2de;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14722ff7e;
}



// FUNCTION 145f4f0ae FUN_145f4f0ae body=138 status=ok
// SIG undefined FUN_145f4f0ae(void)

code * FUN_145f4f0ae(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2e0000002e2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14722fef4;
}



// FUNCTION 145f4f138 FUN_145f4f138 body=144 status=ok
// SIG undefined FUN_145f4f138(void)

code * FUN_145f4f138(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000002df;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f4f02a;
}



// FUNCTION 145f4f1c8 FUN_145f4f1c8 body=292 status=ok
// SIG undefined FUN_145f4f1c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f4f1c8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca055b0) {
    FUN_144b3d300(&DAT_14ca055b0);
    if (DAT_14ca055b0 == -1) {
      FUN_145f4f436();
      FUN_145f4f2ec();
      FUN_140db5666(&DAT_14ca05508,0,&DAT_14ca054a0,L"FDenoiserTemporalCS",
                    L"/Engine/Private/MegaLights/MegaLightsDenoiserTemporal.usf",
                    L"DenoiserTemporalCS",5,4,FUN_147227c8e,FUN_147227c2e,&LAB_147227c0c,
                    &LAB_147227bf2,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca07550);
      _DAT_14ca05508 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dc9b71);
      _Init_thread_footer(&DAT_14ca055b0);
    }
  }
  return &DAT_14ca05508;
}



// FUNCTION 145f4f2ec FUN_145f4f2ec body=205 status=ok
// SIG undefined FUN_145f4f2ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4f2ec(void)

{
  if ((DAT_14ca05507 & 2) == 0) {
    DAT_14ca05507 = DAT_14ca05507 | 2;
    _DAT_14ca054a8 = L"FDenoiserTemporalCS";
    _DAT_14ca054c0 = FUN_146826540;
    _DAT_14ca054c8 = FUN_146825d77;
    _DAT_14ca054d0 = FUN_146825fd6;
    _DAT_14ca054d8 = FUN_1407e02ea;
    _DAT_14ca054e0 = FUN_146826273;
    _DAT_14ca054b8 = FUN_147227bc4;
    _DAT_14ca054f8 = 0xffffffff000000e0;
    _DAT_14ca05500 = 8;
    DAT_14ca05504 = 0;
    _DAT_14ca054e8 = &LAB_147227bee;
    FUN_145f4f3ba();
    FUN_1407e00cc(&DAT_14ca054a0);
    return;
  }
  return;
}



// FUNCTION 145f4f3ba FUN_145f4f3ba body=123 status=ok
// SIG undefined FUN_145f4f3ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4f3ba(void)

{
  _DAT_14ca08380 = L"BASE";
  DAT_14ca083aa = 4;
  _DAT_14ca08388 = FUN_140b35ae4();
  _DAT_14ca08390 = DAT_14ca054b0;
  _DAT_14ca08398 = &LAB_14682652b;
  DAT_14ca054b0 = &DAT_14ca08380;
  DAT_14ca05505 = DAT_14ca05505 + '\x01';
  _DAT_14ca083a0 = 0x100000000;
  if (*(char *)(_DAT_14ca08388 + 100) != '\0') {
    DAT_14ca05506 = DAT_14ca05506 + '\x01';
  }
  return;
}



// FUNCTION 145f4f436 FUN_145f4f436 body=261 status=ok
// SIG undefined FUN_145f4f436(void)

void FUN_145f4f436(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca075d0) {
    FUN_144b3d300(&DAT_14ca075d0);
    if (DAT_14ca075d0 == -1) {
      FUN_14159d4b0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x360;
      local_58 = 0x3e5;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca07550,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd418f);
      _Init_thread_footer(&DAT_14ca075d0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4f53c FUN_145f4f53c body=138 status=ok
// SIG undefined FUN_145f4f53c(void)

code * FUN_145f4f53c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SpecularLightingAndSecondMomentHistoryTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2e0000003eb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472309c0;
}



// FUNCTION 145f4f5c6 FUN_145f4f5c6 body=138 status=ok
// SIG undefined FUN_145f4f5c6(void)

code * FUN_145f4f5c6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2d0000003e9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147230a4a;
}



// FUNCTION 145f4f650 FUN_145f4f650 body=138 status=ok
// SIG undefined FUN_145f4f650(void)

undefined1 * FUN_145f4f650(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x3e6;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_147230b5e;
}



// FUNCTION 145f4f6da FUN_145f4f6da body=292 status=ok
// SIG undefined FUN_145f4f6da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f4f6da(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca095e8) {
    FUN_144b3d300(&DAT_14ca095e8);
    if (DAT_14ca095e8 == -1) {
      FUN_145f4f948();
      FUN_145f4f7fe();
      FUN_140db5666(&DAT_14ca09540,0,&DAT_14ca094d8,L"FComposeMeshEdgesPS",
                    L"/Engine/Private/MeshEdges.usf",L"ComposeMeshEdgesPS",3,4,FUN_14723af86,
                    FUN_14723af26,&LAB_14723af0e,&LAB_14723af0a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca0e640);
      _DAT_14ca09540 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142de5e5c);
      _Init_thread_footer(&DAT_14ca095e8);
    }
  }
  return &DAT_14ca09540;
}



// FUNCTION 145f4f7fe FUN_145f4f7fe body=205 status=ok
// SIG undefined FUN_145f4f7fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4f7fe(void)

{
  if ((DAT_14ca0953f & 2) == 0) {
    DAT_14ca0953f = DAT_14ca0953f | 2;
    _DAT_14ca094e0 = L"FComposeMeshEdgesPS";
    _DAT_14ca094f8 = FUN_146826540;
    _DAT_14ca09500 = FUN_146825d77;
    _DAT_14ca09508 = FUN_146825fd6;
    _DAT_14ca09510 = FUN_1407e02ea;
    _DAT_14ca09518 = FUN_146826273;
    _DAT_14ca094f0 = FUN_14723aedc;
    _DAT_14ca09530 = 0xffffffff000000e0;
    _DAT_14ca09538 = 8;
    DAT_14ca0953c = 0;
    _DAT_14ca09520 = &LAB_14723af06;
    FUN_145f4f8cc();
    FUN_1407e00cc(&DAT_14ca094d8);
    return;
  }
  return;
}



// FUNCTION 145f4f8cc FUN_145f4f8cc body=123 status=ok
// SIG undefined FUN_145f4f8cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4f8cc(void)

{
  _DAT_14ca0ec10 = L"BASE";
  DAT_14ca0ec3a = 4;
  _DAT_14ca0ec18 = FUN_140b35ae4();
  _DAT_14ca0ec20 = DAT_14ca094e8;
  _DAT_14ca0ec28 = &LAB_14682652b;
  DAT_14ca094e8 = &DAT_14ca0ec10;
  DAT_14ca0953d = DAT_14ca0953d + '\x01';
  _DAT_14ca0ec30 = 0x100000000;
  if (*(char *)(_DAT_14ca0ec18 + 100) != '\0') {
    DAT_14ca0953e = DAT_14ca0953e + '\x01';
  }
  return;
}



// FUNCTION 145f4f948 FUN_145f4f948 body=261 status=ok
// SIG undefined FUN_145f4f948(void)

void FUN_145f4f948(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0e6c0) {
    FUN_144b3d300(&DAT_14ca0e6c0);
    if (DAT_14ca0e6c0 == -1) {
      FUN_145f4fa4e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x310;
      local_58 = 0x3c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca0e640,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142def747);
      _Init_thread_footer(&DAT_14ca0e6c0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4fa4e FUN_145f4fa4e body=226 status=ok
// SIG undefined FUN_145f4fa4e(void)

longlong * FUN_145f4fa4e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462eda44;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4fb32 FUN_145f4fb32 body=132 status=ok
// SIG undefined FUN_145f4fb32(void)

undefined1 * FUN_145f4fb32(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WireframeColorTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14724420c;
}



// FUNCTION 145f4fbb6 FUN_145f4fbb6 body=138 status=ok
// SIG undefined FUN_145f4fbb6(void)

code * FUN_145f4fbb6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SampleOffsetArray";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11000000045;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 8;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462edb5c;
}



// FUNCTION 145f4fc40 FUN_145f4fc40 body=144 status=ok
// SIG undefined FUN_145f4fc40(void)

code * FUN_145f4fc40(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"Wireframe";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000003f;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_147244182;
}



// FUNCTION 145f4fcd0 FUN_145f4fcd0 body=292 status=ok
// SIG undefined FUN_145f4fcd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f4fcd0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca122b8) {
    FUN_144b3d300(&DAT_14ca122b8);
    if (DAT_14ca122b8 == -1) {
      FUN_145f4ff3e();
      FUN_145f4fdf4();
      FUN_140db5666(&DAT_14ca12210,0,&DAT_14ca121a8,L"FMobileDistortionMergePS",
                    L"/Engine/Private/DistortApplyScreenPS.usf",L"Merge_Mobile",3,1,FUN_14724d8c8,
                    FUN_14724d868,&LAB_14724d850,&LAB_14724d84c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca16be8);
      _DAT_14ca12210 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142df55a9);
      _Init_thread_footer(&DAT_14ca122b8);
    }
  }
  return &DAT_14ca12210;
}



// FUNCTION 145f4fdf4 FUN_145f4fdf4 body=205 status=ok
// SIG undefined FUN_145f4fdf4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4fdf4(void)

{
  if ((DAT_14ca1220f & 2) == 0) {
    DAT_14ca1220f = DAT_14ca1220f | 2;
    _DAT_14ca121b0 = L"FMobileDistortionMergePS";
    _DAT_14ca121c8 = FUN_146826540;
    _DAT_14ca121d0 = FUN_146825d77;
    _DAT_14ca121d8 = FUN_146825fd6;
    _DAT_14ca121e0 = FUN_1407e02ea;
    _DAT_14ca121e8 = FUN_146826273;
    _DAT_14ca121c0 = FUN_14724d81c;
    _DAT_14ca12200 = 0xffffffff000000e0;
    _DAT_14ca12208 = 8;
    DAT_14ca1220c = 0;
    _DAT_14ca121f0 = &LAB_14724d848;
    FUN_145f4fec2();
    FUN_1407e00cc(&DAT_14ca121a8);
    return;
  }
  return;
}



// FUNCTION 145f4fec2 FUN_145f4fec2 body=123 status=ok
// SIG undefined FUN_145f4fec2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4fec2(void)

{
  _DAT_14ca187a0 = L"BASE";
  DAT_14ca187ca = 4;
  _DAT_14ca187a8 = FUN_140b35ae4();
  _DAT_14ca187b0 = DAT_14ca121b8;
  _DAT_14ca187b8 = &LAB_14682652b;
  DAT_14ca121b8 = &DAT_14ca187a0;
  DAT_14ca1220d = DAT_14ca1220d + '\x01';
  _DAT_14ca187c0 = 0x100000000;
  if (*(char *)(_DAT_14ca187a8 + 100) != '\0') {
    DAT_14ca1220e = DAT_14ca1220e + '\x01';
  }
  return;
}



// FUNCTION 145f4ff3e FUN_145f4ff3e body=261 status=ok
// SIG undefined FUN_145f4ff3e(void)

void FUN_145f4ff3e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca16c68) {
    FUN_144b3d300(&DAT_14ca16c68);
    if (DAT_14ca16c68 == -1) {
      FUN_145f50044(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0x6b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca16be8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e26fda);
      _Init_thread_footer(&DAT_14ca16c68);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f50044 FUN_145f50044 body=226 status=ok
// SIG undefined FUN_145f50044(void)

longlong * FUN_145f50044(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462ef36a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f50128 FUN_145f50128 body=138 status=ok
// SIG undefined FUN_145f50128(void)

code * FUN_145f50128(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DistortionAccumulateTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000006f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f501b2;
}



// FUNCTION 145f501b2 FUN_145f501b2 body=138 status=ok
// SIG undefined FUN_145f501b2(void)

code * FUN_145f501b2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColorTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000006e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462ef3f2;
}



// FUNCTION 145f5023c FUN_145f5023c body=138 status=ok
// SIG undefined FUN_145f5023c(void)

code * FUN_145f5023c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DistortionAccumulateSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000070;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f50128;
}



// FUNCTION 145f502c6 FUN_145f502c6 body=292 status=ok
// SIG undefined FUN_145f502c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f502c6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca12538) {
    FUN_144b3d300(&DAT_14ca12538);
    if (DAT_14ca12538 == -1) {
      FUN_145f50534();
      FUN_145f503ea();
      FUN_140db5666(&DAT_14ca12490,0,&DAT_14ca12428,L"FMobileFogPS",L"/Engine/Private/MobileFog.usf"
                    ,L"MobileFogPS",3,0x180,FUN_14724db1c,FUN_14724dabc,FUN_142df5f74,&LAB_14724dab8
                    ,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca16cf8);
      _DAT_14ca12490 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142df6029);
      _Init_thread_footer(&DAT_14ca12538);
    }
  }
  return &DAT_14ca12490;
}



// FUNCTION 145f503ea FUN_145f503ea body=205 status=ok
// SIG undefined FUN_145f503ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f503ea(void)

{
  if ((DAT_14ca1248f & 2) == 0) {
    DAT_14ca1248f = DAT_14ca1248f | 2;
    _DAT_14ca12430 = L"FMobileFogPS";
    _DAT_14ca12448 = FUN_146826540;
    _DAT_14ca12450 = FUN_146825d77;
    _DAT_14ca12458 = FUN_146825fd6;
    _DAT_14ca12460 = FUN_1407e02ea;
    _DAT_14ca12468 = FUN_146826273;
    _DAT_14ca12440 = FUN_14724da88;
    _DAT_14ca12480 = 0xffffffff000000e0;
    _DAT_14ca12488 = 8;
    DAT_14ca1248c = 0;
    _DAT_14ca12470 = &LAB_14724dab4;
    FUN_145f504b8();
    FUN_1407e00cc(&DAT_14ca12428);
    return;
  }
  return;
}



// FUNCTION 145f504b8 FUN_145f504b8 body=123 status=ok
// SIG undefined FUN_145f504b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f504b8(void)

{
  _DAT_14ca18800 = L"BASE";
  DAT_14ca1882a = 4;
  _DAT_14ca18808 = FUN_140b35ae4();
  _DAT_14ca18810 = DAT_14ca12438;
  _DAT_14ca18818 = &LAB_14682652b;
  DAT_14ca12438 = &DAT_14ca18800;
  DAT_14ca1248d = DAT_14ca1248d + '\x01';
  _DAT_14ca18820 = 0x100000000;
  if (*(char *)(_DAT_14ca18808 + 100) != '\0') {
    DAT_14ca1248e = DAT_14ca1248e + '\x01';
  }
  return;
}



// FUNCTION 145f50534 FUN_145f50534 body=261 status=ok
// SIG undefined FUN_145f50534(void)

void FUN_145f50534(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca16d78) {
    FUN_144b3d300(&DAT_14ca16d78);
    if (DAT_14ca16d78 == -1) {
      FUN_145f5063a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xb0;
      local_58 = 0x75;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca16cf8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e26ff2);
      _Init_thread_footer(&DAT_14ca16d78);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f5063a FUN_145f5063a body=226 status=ok
// SIG undefined FUN_145f5063a(void)

longlong * FUN_145f5063a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462ef58c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f5071e FUN_145f5071e body=138 status=ok
// SIG undefined FUN_145f5071e(void)

code * FUN_145f5071e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HalfResLocalFogVolumeDepthSRV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa00000007a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147254b42;
}



// FUNCTION 145f507a8 FUN_145f507a8 body=138 status=ok
// SIG undefined FUN_145f507a8(void)

code * FUN_145f507a8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HalfResLocalFogVolumeViewSRV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000078;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462ef614;
}



// FUNCTION 145f50832 FUN_145f50832 body=138 status=ok
// SIG undefined FUN_145f50832(void)

undefined1 * FUN_145f50832(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x76;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_147254bcc;
}



// FUNCTION 145f508bc FUN_145f508bc body=292 status=ok
// SIG undefined FUN_145f508bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f508bc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca15010) {
    FUN_144b3d300(&DAT_14ca15010);
    if (DAT_14ca15010 == -1) {
      FUN_145f50b2a();
      FUN_145f509e0();
      FUN_140db5666(&DAT_14ca14f68,0,&DAT_14ca14f00,L"FInstanceCullVSM_CS",
                    L"/Engine/Private/Nanite/NaniteInstanceCulling.usf",L"InstanceCullVSM",5,8,
                    FUN_1472524d6,FUN_147252476,&LAB_142e0a444,&LAB_147252472,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca17bd8);
      _DAT_14ca14f68 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e0a47e);
      _Init_thread_footer(&DAT_14ca15010);
    }
  }
  return &DAT_14ca14f68;
}



// FUNCTION 145f509e0 FUN_145f509e0 body=205 status=ok
// SIG undefined FUN_145f509e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f509e0(void)

{
  if ((DAT_14ca14f67 & 2) == 0) {
    DAT_14ca14f67 = DAT_14ca14f67 | 2;
    _DAT_14ca14f08 = L"FInstanceCullVSM_CS";
    _DAT_14ca14f20 = FUN_146826540;
    _DAT_14ca14f28 = FUN_146825d77;
    _DAT_14ca14f30 = FUN_146825fd6;
    _DAT_14ca14f38 = FUN_1407e02ea;
    _DAT_14ca14f40 = FUN_146826273;
    _DAT_14ca14f18 = FUN_147252442;
    _DAT_14ca14f58 = 0xffffffff000000e0;
    _DAT_14ca14f60 = 8;
    DAT_14ca14f64 = 0;
    _DAT_14ca14f48 = &LAB_14725246e;
    FUN_145f50aae();
    FUN_1407e00cc(&DAT_14ca14f00);
    return;
  }
  return;
}



// FUNCTION 145f50aae FUN_145f50aae body=123 status=ok
// SIG undefined FUN_145f50aae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f50aae(void)

{
  _DAT_14ca19130 = L"BASE";
  DAT_14ca1915a = 4;
  _DAT_14ca19138 = FUN_140b35ae4();
  _DAT_14ca19140 = DAT_14ca14f10;
  _DAT_14ca19148 = &LAB_14682652b;
  DAT_14ca14f10 = &DAT_14ca19130;
  DAT_14ca14f65 = DAT_14ca14f65 + '\x01';
  _DAT_14ca19150 = 0x100000000;
  if (*(char *)(_DAT_14ca19138 + 100) != '\0') {
    DAT_14ca14f66 = DAT_14ca14f66 + '\x01';
  }
  return;
}



// FUNCTION 145f50b2a FUN_145f50b2a body=261 status=ok
// SIG undefined FUN_145f50b2a(void)

void FUN_145f50b2a(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca17c58) {
    FUN_144b3d300(&DAT_14ca17c58);
    if (DAT_14ca17c58 == -1) {
      FUN_145f50c30(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x100;
      local_58 = 0x3c3;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca17bd8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e27663);
      _Init_thread_footer(&DAT_14ca17c58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f50c30 FUN_145f50c30 body=226 status=ok
// SIG undefined FUN_145f50c30(void)

longlong * FUN_145f50c30(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f1218;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


