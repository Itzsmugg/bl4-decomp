// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145ed3c0c FUN_145ed3c0c body=123 status=ok
// SIG undefined FUN_145ed3c0c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ed3c0c(void)

{
  _DAT_14c9dba68 = L"BASE";
  DAT_14c9dba92 = 4;
  _DAT_14c9dba70 = FUN_140b35ae4();
  _DAT_14c9dba78 = DAT_14c9d7200;
  _DAT_14c9dba80 = &LAB_14682652b;
  DAT_14c9d7200 = &DAT_14c9dba68;
  DAT_14c9d7255 = DAT_14c9d7255 + '\x01';
  _DAT_14c9dba88 = 0x100000000;
  if (*(char *)(_DAT_14c9dba70 + 100) != '\0') {
    DAT_14c9d7256 = DAT_14c9d7256 + '\x01';
  }
  return;
}



// FUNCTION 145ed3c88 FUN_145ed3c88 body=261 status=ok
// SIG undefined FUN_145ed3c88(void)

void FUN_145ed3c88(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9da568) {
    FUN_144b3d300(&DAT_14c9da568);
    if (DAT_14c9da568 == -1) {
      FUN_145ed3d8e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x158;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9da4e8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c71c9d);
      _Init_thread_footer(&DAT_14c9da568);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed3d8e FUN_145ed3d8e body=226 status=ok
// SIG undefined FUN_145ed3d8e(void)

longlong * FUN_145ed3d8e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462cbe52;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed3e76 FUN_145ed3e76 body=132 status=ok
// SIG undefined FUN_145ed3e76(void)

undefined1 * FUN_145ed3e76(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxViewportResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x159;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145ed3e72;
}



// FUNCTION 145ed3efa FUN_145ed3efa body=292 status=ok
// SIG undefined FUN_145ed3efa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ed3efa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e36f0) {
    FUN_144b3d300(&DAT_14c9e36f0);
    if (DAT_14c9e36f0 == -1) {
      FUN_145ed4168();
      FUN_145ed401e();
      FUN_140db5666(&DAT_14c9e3648,0,&DAT_14c9e35e0,L"FCopyMaxIntoMajorantVoxelGridCS",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesVoxelGridPipeline.usf"
                    ,L"CopyMaximumIntoMajorantVoxelGridCS",5,1,FUN_1471b70ee,FUN_1471b708e,
                    &LAB_1471b7052,&LAB_1471b704e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e6178)
      ;
      _DAT_14c9e3648 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cad928);
      _Init_thread_footer(&DAT_14c9e36f0);
    }
  }
  return &DAT_14c9e3648;
}



// FUNCTION 145ed401e FUN_145ed401e body=205 status=ok
// SIG undefined FUN_145ed401e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ed401e(void)

{
  if ((DAT_14c9e3647 & 2) == 0) {
    DAT_14c9e3647 = DAT_14c9e3647 | 2;
    _DAT_14c9e35e8 = L"FCopyMaxIntoMajorantVoxelGridCS";
    _DAT_14c9e3600 = FUN_146826540;
    _DAT_14c9e3608 = FUN_146825d77;
    _DAT_14c9e3610 = FUN_146825fd6;
    _DAT_14c9e3618 = FUN_1407e02ea;
    _DAT_14c9e3620 = FUN_146826273;
    _DAT_14c9e35f8 = FUN_1471b7020;
    _DAT_14c9e3638 = 0xffffffff000000e0;
    _DAT_14c9e3640 = 8;
    DAT_14c9e3644 = 0;
    _DAT_14c9e3628 = &LAB_1471b704a;
    FUN_145ed40ec();
    FUN_1407e00cc(&DAT_14c9e35e0);
    return;
  }
  return;
}



// FUNCTION 145ed40ec FUN_145ed40ec body=123 status=ok
// SIG undefined FUN_145ed40ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ed40ec(void)

{
  _DAT_14c9e6e60 = L"BASE";
  DAT_14c9e6e8a = 4;
  _DAT_14c9e6e68 = FUN_140b35ae4();
  _DAT_14c9e6e70 = DAT_14c9e35f0;
  _DAT_14c9e6e78 = &LAB_14682652b;
  DAT_14c9e35f0 = &DAT_14c9e6e60;
  DAT_14c9e3645 = DAT_14c9e3645 + '\x01';
  _DAT_14c9e6e80 = 0x100000000;
  if (*(char *)(_DAT_14c9e6e68 + 100) != '\0') {
    DAT_14c9e3646 = DAT_14c9e3646 + '\x01';
  }
  return;
}



// FUNCTION 145ed4168 FUN_145ed4168 body=261 status=ok
// SIG undefined FUN_145ed4168(void)

void FUN_145ed4168(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e61f8) {
    FUN_144b3d300(&DAT_14c9e61f8);
    if (DAT_14c9e61f8 == -1) {
      FUN_145ed426e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x479;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e6178,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cccfa6);
      _Init_thread_footer(&DAT_14c9e61f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed426e FUN_145ed426e body=226 status=ok
// SIG undefined FUN_145ed426e(void)

longlong * FUN_145ed426e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d23b0;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed4356 FUN_145ed4356 body=132 status=ok
// SIG undefined FUN_145ed4356(void)

undefined1 * FUN_145ed4356(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InputBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<FScalarGridData>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x47a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145ed4352;
}



// FUNCTION 145ed43da FUN_145ed43da body=292 status=ok
// SIG undefined FUN_145ed43da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ed43da(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f9588) {
    FUN_144b3d300(&DAT_14c9f9588);
    if (DAT_14c9f9588 == -1) {
      FUN_145ed4648();
      FUN_145ed44fe();
      FUN_140db5666(&DAT_14c9f94e0,0,&DAT_14c9f9478,L"FInitShadowTraceIndirectArgsCS",
                    L"/Engine/Private/Lumen/LumenSceneDirectLightingSoftwareRayTracing.usf",
                    L"InitShadowTraceIndirectArgsCS",5,1,FUN_14720528e,FUN_14720522e,&LAB_1462e1694,
                    &LAB_14720522a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9fe090);
      _DAT_14c9f94e0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d68e85);
      _Init_thread_footer(&DAT_14c9f9588);
    }
  }
  return &DAT_14c9f94e0;
}



// FUNCTION 145ed44fe FUN_145ed44fe body=205 status=ok
// SIG undefined FUN_145ed44fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ed44fe(void)

{
  if ((DAT_14c9f94df & 2) == 0) {
    DAT_14c9f94df = DAT_14c9f94df | 2;
    _DAT_14c9f9480 = L"FInitShadowTraceIndirectArgsCS";
    _DAT_14c9f9498 = FUN_146826540;
    _DAT_14c9f94a0 = FUN_146825d77;
    _DAT_14c9f94a8 = FUN_146825fd6;
    _DAT_14c9f94b0 = FUN_1407e02ea;
    _DAT_14c9f94b8 = FUN_146826273;
    _DAT_14c9f9490 = FUN_1472051fc;
    _DAT_14c9f94d0 = 0xffffffff000000e0;
    _DAT_14c9f94d8 = 8;
    DAT_14c9f94dc = 0;
    _DAT_14c9f94c0 = &LAB_147205226;
    FUN_145ed45cc();
    FUN_1407e00cc(&DAT_14c9f9478);
    return;
  }
  return;
}



// FUNCTION 145ed45cc FUN_145ed45cc body=123 status=ok
// SIG undefined FUN_145ed45cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ed45cc(void)

{
  _DAT_14c9ffd08 = L"BASE";
  DAT_14c9ffd32 = 4;
  _DAT_14c9ffd10 = FUN_140b35ae4();
  _DAT_14c9ffd18 = DAT_14c9f9488;
  _DAT_14c9ffd20 = &LAB_14682652b;
  DAT_14c9f9488 = &DAT_14c9ffd08;
  DAT_14c9f94dd = DAT_14c9f94dd + '\x01';
  _DAT_14c9ffd28 = 0x100000000;
  if (*(char *)(_DAT_14c9ffd10 + 100) != '\0') {
    DAT_14c9f94de = DAT_14c9f94de + '\x01';
  }
  return;
}



// FUNCTION 145ed4648 FUN_145ed4648 body=261 status=ok
// SIG undefined FUN_145ed4648(void)

void FUN_145ed4648(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fe110) {
    FUN_144b3d300(&DAT_14c9fe110);
    if (DAT_14c9fe110 == -1) {
      FUN_145ed474e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x33b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fe090,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9935f);
      _Init_thread_footer(&DAT_14c9fe110);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed474e FUN_145ed474e body=226 status=ok
// SIG undefined FUN_145ed474e(void)

longlong * FUN_145ed474e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e2764;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed4836 FUN_145ed4836 body=132 status=ok
// SIG undefined FUN_145ed4836(void)

undefined1 * FUN_145ed4836(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWShadowTraceIndirectArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x33c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145ed4832;
}



// FUNCTION 145ed48ba FUN_145ed48ba body=292 status=ok
// SIG undefined FUN_145ed48ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ed48ba(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1a160) {
    FUN_144b3d300(&DAT_14ca1a160);
    if (DAT_14ca1a160 == -1) {
      FUN_145ed4b28();
      FUN_145ed49de();
      FUN_140db5666(&DAT_14ca1a0b8,0,&DAT_14ca1a050,L"FShadingBinValidateCS",
                    L"/Engine/Private/Nanite/NaniteShadeBinning.usf",L"ShadingBinValidateCS",5,1,
                    FUN_147263212,FUN_1472631b2,&LAB_1462f3252,&LAB_1472631ae,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca1b5e0);
      _DAT_14ca1a0b8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e4d46e);
      _Init_thread_footer(&DAT_14ca1a160);
    }
  }
  return &DAT_14ca1a0b8;
}



// FUNCTION 145ed49de FUN_145ed49de body=205 status=ok
// SIG undefined FUN_145ed49de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ed49de(void)

{
  if ((DAT_14ca1a0b7 & 2) == 0) {
    DAT_14ca1a0b7 = DAT_14ca1a0b7 | 2;
    _DAT_14ca1a058 = L"FShadingBinValidateCS";
    _DAT_14ca1a070 = FUN_146826540;
    _DAT_14ca1a078 = FUN_146825d77;
    _DAT_14ca1a080 = FUN_146825fd6;
    _DAT_14ca1a088 = FUN_1407e02ea;
    _DAT_14ca1a090 = FUN_146826273;
    _DAT_14ca1a068 = FUN_147263180;
    _DAT_14ca1a0a8 = 0xffffffff000000e0;
    _DAT_14ca1a0b0 = 8;
    DAT_14ca1a0b4 = 0;
    _DAT_14ca1a098 = &LAB_1472631aa;
    FUN_145ed4aac();
    FUN_1407e00cc(&DAT_14ca1a050);
    return;
  }
  return;
}



// FUNCTION 145ed4aac FUN_145ed4aac body=123 status=ok
// SIG undefined FUN_145ed4aac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ed4aac(void)

{
  _DAT_14ca1be50 = L"BASE";
  DAT_14ca1be7a = 4;
  _DAT_14ca1be58 = FUN_140b35ae4();
  _DAT_14ca1be60 = DAT_14ca1a060;
  _DAT_14ca1be68 = &LAB_14682652b;
  DAT_14ca1a060 = &DAT_14ca1be50;
  DAT_14ca1a0b5 = DAT_14ca1a0b5 + '\x01';
  _DAT_14ca1be70 = 0x100000000;
  if (*(char *)(_DAT_14ca1be58 + 100) != '\0') {
    DAT_14ca1a0b6 = DAT_14ca1a0b6 + '\x01';
  }
  return;
}



// FUNCTION 145ed4b28 FUN_145ed4b28 body=261 status=ok
// SIG undefined FUN_145ed4b28(void)

void FUN_145ed4b28(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1b660) {
    FUN_144b3d300(&DAT_14ca1b660);
    if (DAT_14ca1b660 == -1) {
      FUN_145ed4c2e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x19b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca1b5e0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e5a639);
      _Init_thread_footer(&DAT_14ca1b660);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed4c2e FUN_145ed4c2e body=226 status=ok
// SIG undefined FUN_145ed4c2e(void)

longlong * FUN_145ed4c2e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f393c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed4d16 FUN_145ed4d16 body=132 status=ok
// SIG undefined FUN_145ed4d16(void)

undefined1 * FUN_145ed4d16(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ShadingBinCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x19c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145ed4d12;
}



// FUNCTION 145ed4d9a FUN_145ed4d9a body=292 status=ok
// SIG undefined FUN_145ed4d9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ed4d9a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2efd8) {
    FUN_144b3d300(&DAT_14ca2efd8);
    if (DAT_14ca2efd8 == -1) {
      FUN_145ed5008();
      FUN_145ed4ebe();
      FUN_140db5666(&DAT_14ca2ef30,0,&DAT_14ca2eec8,L"FSetupMotionBlurFilterCS",
                    L"/Engine/Private/MotionBlur/MotionBlurFilterTileClassify.usf",L"MainCS",5,1,
                    FUN_147298116,FUN_1472980b6,&LAB_14729809e,&LAB_14729809a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca33458);
      _DAT_14ca2ef30 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142eff0ca);
      _Init_thread_footer(&DAT_14ca2efd8);
    }
  }
  return &DAT_14ca2ef30;
}



// FUNCTION 145ed4ebe FUN_145ed4ebe body=205 status=ok
// SIG undefined FUN_145ed4ebe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ed4ebe(void)

{
  if ((DAT_14ca2ef2f & 2) == 0) {
    DAT_14ca2ef2f = DAT_14ca2ef2f | 2;
    _DAT_14ca2eed0 = L"FSetupMotionBlurFilterCS";
    _DAT_14ca2eee8 = FUN_146826540;
    _DAT_14ca2eef0 = FUN_146825d77;
    _DAT_14ca2eef8 = FUN_146825fd6;
    _DAT_14ca2ef00 = FUN_1407e02ea;
    _DAT_14ca2ef08 = FUN_146826273;
    _DAT_14ca2eee0 = FUN_14729806a;
    _DAT_14ca2ef20 = 0xffffffff000000e0;
    _DAT_14ca2ef28 = 8;
    DAT_14ca2ef2c = 0;
    _DAT_14ca2ef10 = &LAB_147298096;
    FUN_145ed4f8c();
    FUN_1407e00cc(&DAT_14ca2eec8);
    return;
  }
  return;
}



// FUNCTION 145ed4f8c FUN_145ed4f8c body=123 status=ok
// SIG undefined FUN_145ed4f8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ed4f8c(void)

{
  _DAT_14ca349f0 = L"BASE";
  DAT_14ca34a1a = 4;
  _DAT_14ca349f8 = FUN_140b35ae4();
  _DAT_14ca34a00 = DAT_14ca2eed8;
  _DAT_14ca34a08 = &LAB_14682652b;
  DAT_14ca2eed8 = &DAT_14ca349f0;
  DAT_14ca2ef2d = DAT_14ca2ef2d + '\x01';
  _DAT_14ca34a10 = 0x100000000;
  if (*(char *)(_DAT_14ca349f8 + 100) != '\0') {
    DAT_14ca2ef2e = DAT_14ca2ef2e + '\x01';
  }
  return;
}



// FUNCTION 145ed5008 FUN_145ed5008 body=261 status=ok
// SIG undefined FUN_145ed5008(void)

void FUN_145ed5008(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca334d8) {
    FUN_144b3d300(&DAT_14ca334d8);
    if (DAT_14ca334d8 == -1) {
      FUN_145ed510e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x1ba;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca33458,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f14009);
      _Init_thread_footer(&DAT_14ca334d8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed510e FUN_145ed510e body=226 status=ok
// SIG undefined FUN_145ed510e(void)

longlong * FUN_145ed510e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462fd1ba;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed51f6 FUN_145ed51f6 body=132 status=ok
// SIG undefined FUN_145ed51f6(void)

undefined1 * FUN_145ed51f6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TileListsSizeBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1bb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145ed51f2;
}



// FUNCTION 145ed527a FUN_145ed527a body=292 status=ok
// SIG undefined FUN_145ed527a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ed527a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5e228) {
    FUN_144b3d300(&DAT_14ca5e228);
    if (DAT_14ca5e228 == -1) {
      FUN_145ed54e8();
      FUN_145ed539e();
      FUN_140db5666(&DAT_14ca5e180,0,&DAT_14ca5e118,L"FSubstrateMaterialTilePrepareArgsPassCS",
                    L"/Engine/Private/Substrate/SubstrateMaterialClassification.usf",L"ArgsMainCS",5
                    ,1,FUN_147317704,FUN_1473176a4,&LAB_14630a79e,&LAB_1473176a0,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca5f490);
      _DAT_14ca5e180 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14309a178);
      _Init_thread_footer(&DAT_14ca5e228);
    }
  }
  return &DAT_14ca5e180;
}



// FUNCTION 145ed539e FUN_145ed539e body=205 status=ok
// SIG undefined FUN_145ed539e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ed539e(void)

{
  if ((DAT_14ca5e17f & 2) == 0) {
    DAT_14ca5e17f = DAT_14ca5e17f | 2;
    _DAT_14ca5e120 = L"FSubstrateMaterialTilePrepareArgsPassCS";
    _DAT_14ca5e138 = FUN_146826540;
    _DAT_14ca5e140 = FUN_146825d77;
    _DAT_14ca5e148 = FUN_146825fd6;
    _DAT_14ca5e150 = FUN_1407e02ea;
    _DAT_14ca5e158 = FUN_146826273;
    _DAT_14ca5e130 = FUN_147317672;
    _DAT_14ca5e170 = 0xffffffff000000e0;
    _DAT_14ca5e178 = 8;
    DAT_14ca5e17c = 0;
    _DAT_14ca5e160 = &LAB_14731769c;
    FUN_145ed546c();
    FUN_1407e00cc(&DAT_14ca5e118);
    return;
  }
  return;
}



// FUNCTION 145ed546c FUN_145ed546c body=123 status=ok
// SIG undefined FUN_145ed546c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ed546c(void)

{
  _DAT_14ca5fd08 = L"BASE";
  DAT_14ca5fd32 = 4;
  _DAT_14ca5fd10 = FUN_140b35ae4();
  _DAT_14ca5fd18 = DAT_14ca5e128;
  _DAT_14ca5fd20 = &LAB_14682652b;
  DAT_14ca5e128 = &DAT_14ca5fd08;
  DAT_14ca5e17d = DAT_14ca5e17d + '\x01';
  _DAT_14ca5fd28 = 0x100000000;
  if (*(char *)(_DAT_14ca5fd10 + 100) != '\0') {
    DAT_14ca5e17e = DAT_14ca5e17e + '\x01';
  }
  return;
}



// FUNCTION 145ed54e8 FUN_145ed54e8 body=261 status=ok
// SIG undefined FUN_145ed54e8(void)

void FUN_145ed54e8(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5f510) {
    FUN_144b3d300(&DAT_14ca5f510);
    if (DAT_14ca5f510 == -1) {
      FUN_145ed55ee(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x3b6;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5f490,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14309e8b7);
      _Init_thread_footer(&DAT_14ca5f510);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed55ee FUN_145ed55ee body=226 status=ok
// SIG undefined FUN_145ed55ee(void)

longlong * FUN_145ed55ee(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14630d2c2;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed56d6 FUN_145ed56d6 body=132 status=ok
// SIG undefined FUN_145ed56d6(void)

undefined1 * FUN_145ed56d6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3b7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145ed56d2;
}



// FUNCTION 145ed575a FUN_145ed575a body=292 status=ok
// SIG undefined FUN_145ed575a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ed575a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca62540) {
    FUN_144b3d300(&DAT_14ca62540);
    if (DAT_14ca62540 == -1) {
      FUN_145ed59c8();
      FUN_145ed587e();
      FUN_140db5666(&DAT_14ca62498,0,&DAT_14ca62430,L"FDebugVariableRateShadingPS",
                    L"/Engine/Private/VariableRateShading/VRSShadingRatePreview.usf",
                    L"PreviewVariableRateShadingTexturePS",3,1,FUN_147323cd8,FUN_147323c78,
                    &LAB_147323c60,&LAB_147323c5c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca632a0)
      ;
      _DAT_14ca62498 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430bb07d);
      _Init_thread_footer(&DAT_14ca62540);
    }
  }
  return &DAT_14ca62498;
}



// FUNCTION 145ed587e FUN_145ed587e body=205 status=ok
// SIG undefined FUN_145ed587e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ed587e(void)

{
  if ((DAT_14ca62497 & 2) == 0) {
    DAT_14ca62497 = DAT_14ca62497 | 2;
    _DAT_14ca62438 = L"FDebugVariableRateShadingPS";
    _DAT_14ca62450 = FUN_146826540;
    _DAT_14ca62458 = FUN_146825d77;
    _DAT_14ca62460 = FUN_146825fd6;
    _DAT_14ca62468 = FUN_1407e02ea;
    _DAT_14ca62470 = FUN_146826273;
    _DAT_14ca62448 = FUN_147323c2e;
    _DAT_14ca62488 = 0xffffffff000000e0;
    _DAT_14ca62490 = 8;
    DAT_14ca62494 = 0;
    _DAT_14ca62478 = &LAB_147323c58;
    FUN_145ed594c();
    FUN_1407e00cc(&DAT_14ca62430);
    return;
  }
  return;
}



// FUNCTION 145ed594c FUN_145ed594c body=123 status=ok
// SIG undefined FUN_145ed594c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ed594c(void)

{
  _DAT_14ca63ae0 = L"BASE";
  DAT_14ca63b0a = 4;
  _DAT_14ca63ae8 = FUN_140b35ae4();
  _DAT_14ca63af0 = DAT_14ca62440;
  _DAT_14ca63af8 = &LAB_14682652b;
  DAT_14ca62440 = &DAT_14ca63ae0;
  DAT_14ca62495 = DAT_14ca62495 + '\x01';
  _DAT_14ca63b00 = 0x100000000;
  if (*(char *)(_DAT_14ca63ae8 + 100) != '\0') {
    DAT_14ca62496 = DAT_14ca62496 + '\x01';
  }
  return;
}



// FUNCTION 145ed59c8 FUN_145ed59c8 body=261 status=ok
// SIG undefined FUN_145ed59c8(void)

void FUN_145ed59c8(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca63320) {
    FUN_144b3d300(&DAT_14ca63320);
    if (DAT_14ca63320 == -1) {
      FUN_145ed5ace(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x110;
      local_58 = 0x129;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca632a0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430c1fb0);
      _Init_thread_footer(&DAT_14ca63320);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed5ace FUN_145ed5ace body=226 status=ok
// SIG undefined FUN_145ed5ace(void)

longlong * FUN_145ed5ace(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14630fe94;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed5bb6 FUN_145ed5bb6 body=132 status=ok
// SIG undefined FUN_145ed5bb6(void)

undefined1 * FUN_145ed5bb6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VariableRateShadingTextureIn";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145ed5bb2;
}



// FUNCTION 145ed5c3a FUN_145ed5c3a body=284 status=ok
// SIG undefined FUN_145ed5c3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ed5c3a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8e770) {
    FUN_144b3d300(&DAT_14ca8e770);
    if (DAT_14ca8e770 == -1) {
      FUN_145ed5d56();
      FUN_140db5666(&DAT_14ca8e6c8,0,&DAT_14ca8e660,L"FYCbCrConvertPS",
                    L"/Engine/Private/MediaShaders.usf",L"YCbCrConvertPS",3,1,FUN_14741ecaa,
                    FUN_14741ec82,&LAB_14741ec7e,&LAB_14741ec7a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca8e6c8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f78d2);
      _Init_thread_footer(&DAT_14ca8e770);
    }
  }
  return &DAT_14ca8e6c8;
}



// FUNCTION 145ed5d56 FUN_145ed5d56 body=205 status=ok
// SIG undefined FUN_145ed5d56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ed5d56(void)

{
  if ((DAT_14ca8e6c7 & 2) == 0) {
    DAT_14ca8e6c7 = DAT_14ca8e6c7 | 2;
    _DAT_14ca8e668 = L"FYCbCrConvertPS";
    _DAT_14ca8e680 = FUN_146826540;
    _DAT_14ca8e688 = FUN_146825d77;
    _DAT_14ca8e690 = FUN_146825fd6;
    _DAT_14ca8e698 = FUN_1407e02ea;
    _DAT_14ca8e6a0 = FUN_146826273;
    _DAT_14ca8e678 = FUN_14741ec4a;
    _DAT_14ca8e6b8 = 0xffffffff000000e0;
    _DAT_14ca8e6c0 = 8;
    DAT_14ca8e6c4 = 0;
    _DAT_14ca8e6a8 = &LAB_14741ec76;
    FUN_145ed5e24();
    FUN_1407e00cc(&DAT_14ca8e660);
    return;
  }
  return;
}



// FUNCTION 145ed5e24 FUN_145ed5e24 body=133 status=ok
// SIG undefined FUN_145ed5e24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ed5e24(void)

{
  _DAT_14ca94758 = L"BASE";
  DAT_14ca94782 = 4;
  FUN_140b35ae4();
  _DAT_14ca94768 = DAT_14ca8e670;
  _DAT_14ca94760 = &DAT_14ca8c6c8;
  _DAT_14ca94770 = &LAB_14682652b;
  DAT_14ca8e670 = &DAT_14ca94758;
  DAT_14ca8e6c5 = DAT_14ca8e6c5 + '\x01';
  _DAT_14ca94778 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8e6c6 = DAT_14ca8e6c6 + '\x01';
  }
  return;
}



// FUNCTION 145ed5eaa FUN_145ed5eaa body=292 status=ok
// SIG undefined FUN_145ed5eaa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ed5eaa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb483e0) {
    FUN_144b3d300(&DAT_14cb483e0);
    if (DAT_14cb483e0 == -1) {
      FUN_145ed6118();
      FUN_145ed5fce();
      FUN_140db5666(&DAT_14cb48338,0,&DAT_14cb482d0,L"FWaterQuadTreeOcclusionQueryPS",
                    L"/Plugin/Water/Private/WaterQuadTreeDraws.usf",L"MainPS",3,1,FUN_1483fcd92,
                    FUN_1483fcd32,&LAB_1483fcd2e,&LAB_1483fcd2a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cb48eb8);
      _DAT_14cb48338 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143b3bd19);
      _Init_thread_footer(&DAT_14cb483e0);
    }
  }
  return &DAT_14cb48338;
}



// FUNCTION 145ed5fce FUN_145ed5fce body=205 status=ok
// SIG undefined FUN_145ed5fce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ed5fce(void)

{
  if ((DAT_14cb48337 & 2) == 0) {
    DAT_14cb48337 = DAT_14cb48337 | 2;
    _DAT_14cb482d8 = L"FWaterQuadTreeOcclusionQueryPS";
    _DAT_14cb482f0 = FUN_146826540;
    _DAT_14cb482f8 = FUN_146825d77;
    _DAT_14cb48300 = FUN_146825fd6;
    _DAT_14cb48308 = FUN_1407e02ea;
    _DAT_14cb48310 = FUN_146826273;
    _DAT_14cb482e8 = FUN_1483fccfc;
    _DAT_14cb48328 = 0xffffffff000000e0;
    _DAT_14cb48330 = 8;
    DAT_14cb48334 = 0;
    _DAT_14cb48318 = &LAB_1483fcd26;
    FUN_145ed609c();
    FUN_1407e00cc(&DAT_14cb482d0);
    return;
  }
  return;
}



// FUNCTION 145ed609c FUN_145ed609c body=123 status=ok
// SIG undefined FUN_145ed609c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ed609c(void)

{
  _DAT_14cb49348 = L"BASE";
  DAT_14cb49372 = 4;
  _DAT_14cb49350 = FUN_140b35ae4();
  _DAT_14cb49358 = DAT_14cb482e0;
  _DAT_14cb49360 = &LAB_14682652b;
  DAT_14cb482e0 = &DAT_14cb49348;
  DAT_14cb48335 = DAT_14cb48335 + '\x01';
  _DAT_14cb49368 = 0x100000000;
  if (*(char *)(_DAT_14cb49350 + 100) != '\0') {
    DAT_14cb48336 = DAT_14cb48336 + '\x01';
  }
  return;
}



// FUNCTION 145ed6118 FUN_145ed6118 body=261 status=ok
// SIG undefined FUN_145ed6118(void)

void FUN_145ed6118(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb48f38) {
    FUN_144b3d300(&DAT_14cb48f38);
    if (DAT_14cb48f38 == -1) {
      FUN_145ed621e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x110;
      local_58 = 0x108;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb48eb8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143b3d219);
      _Init_thread_footer(&DAT_14cb48f38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed621e FUN_145ed621e body=226 status=ok
// SIG undefined FUN_145ed621e(void)

longlong * FUN_145ed621e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146488c40;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed6306 FUN_145ed6306 body=132 status=ok
// SIG undefined FUN_145ed6306(void)

undefined1 * FUN_145ed6306(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Visibility";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x109;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145ed6302;
}



// FUNCTION 145ed638a FUN_145ed638a body=307 status=ok
// SIG undefined FUN_145ed638a(void)

void FUN_145ed638a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c2c6fa();
  FUN_1446f470e(&local_58,L"StreamingSourceRepData",1);
  uVar1 = FUN_1408bbcfa();
  FUN_1408bbcfa();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"PlaybackRequests",1);
  uVar1 = FUN_1408bbcfa();
  FUN_1408bbcfa();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = FUN_145ed64be();
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"PreloadRequests",1);
  uVar1 = FUN_1408bbcfa();
  FUN_1408bbcfa();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed64be FUN_145ed64be body=3 status=ok
// SIG undefined FUN_145ed64be(void)

undefined8 FUN_145ed64be(void)

{
  return 0;
}



// FUNCTION 145ed64c2 FUN_145ed64c2 body=292 status=ok
// SIG undefined FUN_145ed64c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ed64c2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfde90) {
    FUN_144b3d300(&DAT_14cbfde90);
    if (DAT_14cbfde90 == -1) {
      FUN_145ed6730();
      FUN_145ed65e6();
      FUN_140db5666(&DAT_14cbfdde8,0,&DAT_14cbfdd80,L"FClearVelocityGridCS",
                    L"/Plugin/Runtime/HairStrands/Private/NiagaraClearVelocityGrid.usf",L"MainCS",5,
                    1,FUN_1490be276,FUN_1490be216,&LAB_1490be212,&LAB_1490be20e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cbfe058);
      _DAT_14cbfdde8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14445506a);
      _Init_thread_footer(&DAT_14cbfde90);
    }
  }
  return &DAT_14cbfdde8;
}



// FUNCTION 145ed65e6 FUN_145ed65e6 body=205 status=ok
// SIG undefined FUN_145ed65e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ed65e6(void)

{
  if ((DAT_14cbfdde7 & 2) == 0) {
    DAT_14cbfdde7 = DAT_14cbfdde7 | 2;
    _DAT_14cbfdd88 = L"FClearVelocityGridCS";
    _DAT_14cbfdda0 = FUN_146826540;
    _DAT_14cbfdda8 = FUN_146825d77;
    _DAT_14cbfddb0 = FUN_146825fd6;
    _DAT_14cbfddb8 = FUN_1407e02ea;
    _DAT_14cbfddc0 = FUN_146826273;
    _DAT_14cbfdd98 = FUN_1490be1e0;
    _DAT_14cbfddd8 = 0xffffffff000000e0;
    _DAT_14cbfdde0 = 8;
    DAT_14cbfdde4 = 0;
    _DAT_14cbfddc8 = &LAB_1490be20a;
    FUN_145ed66b4();
    FUN_1407e00cc(&DAT_14cbfdd80);
    return;
  }
  return;
}



// FUNCTION 145ed66b4 FUN_145ed66b4 body=123 status=ok
// SIG undefined FUN_145ed66b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ed66b4(void)

{
  _DAT_14cbfe230 = L"BASE";
  DAT_14cbfe25a = 4;
  _DAT_14cbfe238 = FUN_140b35ae4();
  _DAT_14cbfe240 = DAT_14cbfdd90;
  _DAT_14cbfe248 = &LAB_14682652b;
  DAT_14cbfdd90 = &DAT_14cbfe230;
  DAT_14cbfdde5 = DAT_14cbfdde5 + '\x01';
  _DAT_14cbfe250 = 0x100000000;
  if (*(char *)(_DAT_14cbfe238 + 100) != '\0') {
    DAT_14cbfdde6 = DAT_14cbfdde6 + '\x01';
  }
  return;
}



// FUNCTION 145ed6730 FUN_145ed6730 body=261 status=ok
// SIG undefined FUN_145ed6730(void)

void FUN_145ed6730(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfe0d8) {
    FUN_144b3d300(&DAT_14cbfe0d8);
    if (DAT_14cbfe0d8 == -1) {
      FUN_145ed6836(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x256;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfe058,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144455753);
      _Init_thread_footer(&DAT_14cbfe0d8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed6836 FUN_145ed6836 body=226 status=ok
// SIG undefined FUN_145ed6836(void)

longlong * FUN_145ed6836(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14667eb14;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed691e FUN_145ed691e body=132 status=ok
// SIG undefined FUN_145ed691e(void)

undefined1 * FUN_145ed691e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GridSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 599;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145ed691a;
}



// FUNCTION 145ed69a2 FUN_145ed69a2 body=292 status=ok
// SIG undefined FUN_145ed69a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ed69a2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc29580) {
    FUN_144b3d300(&DAT_14cc29580);
    if (DAT_14cc29580 == -1) {
      FUN_145ed6c10();
      FUN_145ed6ac6();
      FUN_140db5666(&DAT_14cc294d8,0,&DAT_14cc29470,L"FFXFSR3CopyExposureCS",
                    L"/Plugin/FSR3/Private/PostProcessFFX_FSR3CopyExposure.usf",L"MainCS",5,1,
                    FUN_14981af22,FUN_14981aec2,&LAB_14981aeaa,&LAB_14981aea6,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cc2a690);
      _DAT_14cc294d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14464fbf8);
      _Init_thread_footer(&DAT_14cc29580);
    }
  }
  return &DAT_14cc294d8;
}



// FUNCTION 145ed6ac6 FUN_145ed6ac6 body=205 status=ok
// SIG undefined FUN_145ed6ac6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ed6ac6(void)

{
  if ((DAT_14cc294d7 & 2) == 0) {
    DAT_14cc294d7 = DAT_14cc294d7 | 2;
    _DAT_14cc29478 = L"FFXFSR3CopyExposureCS";
    _DAT_14cc29490 = FUN_146826540;
    _DAT_14cc29498 = FUN_146825d77;
    _DAT_14cc294a0 = FUN_146825fd6;
    _DAT_14cc294a8 = FUN_1407e02ea;
    _DAT_14cc294b0 = FUN_146826273;
    _DAT_14cc29488 = FUN_14981ae78;
    _DAT_14cc294c8 = 0xffffffff000000e0;
    _DAT_14cc294d0 = 8;
    DAT_14cc294d4 = 0;
    _DAT_14cc294b8 = &LAB_14981aea2;
    FUN_145ed6b94();
    FUN_1407e00cc(&DAT_14cc29470);
    return;
  }
  return;
}



// FUNCTION 145ed6b94 FUN_145ed6b94 body=123 status=ok
// SIG undefined FUN_145ed6b94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ed6b94(void)

{
  _DAT_14cc2a8d8 = L"BASE";
  DAT_14cc2a902 = 4;
  _DAT_14cc2a8e0 = FUN_140b35ae4();
  _DAT_14cc2a8e8 = DAT_14cc29480;
  _DAT_14cc2a8f0 = &LAB_14682652b;
  DAT_14cc29480 = &DAT_14cc2a8d8;
  DAT_14cc294d5 = DAT_14cc294d5 + '\x01';
  _DAT_14cc2a8f8 = 0x100000000;
  if (*(char *)(_DAT_14cc2a8e0 + 100) != '\0') {
    DAT_14cc294d6 = DAT_14cc294d6 + '\x01';
  }
  return;
}



// FUNCTION 145ed6c10 FUN_145ed6c10 body=261 status=ok
// SIG undefined FUN_145ed6c10(void)

void FUN_145ed6c10(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2a710) {
    FUN_144b3d300(&DAT_14cc2a710);
    if (DAT_14cc2a710 == -1) {
      FUN_145ed6d16(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0xed;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc2a690,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144656141);
      _Init_thread_footer(&DAT_14cc2a710);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed6d16 FUN_145ed6d16 body=226 status=ok
// SIG undefined FUN_145ed6d16(void)

longlong * FUN_145ed6d16(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146762652;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed6dfe FUN_145ed6dfe body=132 status=ok
// SIG undefined FUN_145ed6dfe(void)

undefined1 * FUN_145ed6dfe(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xee;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145ed6dfa;
}



// FUNCTION 145ed6e82 FUN_145ed6e82 body=364 status=ok
// SIG undefined FUN_145ed6e82(void)

void FUN_145ed6e82(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  double *pdVar1;
  double *pdVar2;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  double local_f0 [3];
  double local_d8 [3];
  double local_c0;
  double local_b8;
  double local_b0;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  pdVar2 = *(double **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f0);
  }
  pdVar1 = local_d8;
  if (pdVar2 != (double *)0x0) {
    pdVar1 = pdVar2;
  }
  pdVar2 = local_f0;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar2 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b0 = pdVar2[2] - pdVar1[2];
  local_b8 = pdVar2[1] - pdVar1[1];
  local_c0 = *pdVar2 - *pdVar1;
  FUN_144a90df0(local_a8);
  FUN_144a90b9e(local_a8,&local_108);
  *(undefined8 *)(param_3 + 4) = local_f8;
  *param_3 = local_108;
  param_3[1] = uStack_104;
  param_3[2] = uStack_100;
  param_3[3] = uStack_fc;
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed6ff0 FUN_145ed6ff0 body=330 status=ok
// SIG undefined FUN_145ed6ff0(void)

void FUN_145ed6ff0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  if ((*(longlong *)(param_1 + 0x10) != 0) && (DAT_14c98e618 != 0)) {
    FUN_14480f766(*(longlong *)(DAT_14c98e618 + 0x20) + 0x60);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x178);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  plVar4 = *(longlong **)(param_1 + 0x70);
  if (plVar4 != (longlong *)0x0) {
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
  }
  plVar4 = *(longlong **)(param_1 + 0x60);
  if (plVar4 != (longlong *)0x0) {
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
  }
  plVar4 = *(longlong **)(param_1 + 0x50);
  if (plVar4 != (longlong *)0x0) {
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
  }
  plVar4 = *(longlong **)(param_1 + 0x40);
  if (plVar4 != (longlong *)0x0) {
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
  }
  FUN_144a76fd2(param_1 + 0x20);
  return;
}



// FUNCTION 145ed7144 FUN_145ed7144 body=62 status=ok
// SIG undefined FUN_145ed7144(void)

void FUN_145ed7144(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    FUN_145ed7182(*param_1);
    plVar2 = (longlong *)param_1[2];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 145ed7182 FUN_145ed7182 body=434 status=ok
// SIG undefined FUN_145ed7182(void)

void FUN_145ed7182(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  plVar4 = DAT_14cb90e08;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  DAT_14cb913f8 = 1;
  DAT_14cb90e00 = 0;
  DAT_14cb90e08 = (longlong *)0x0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  local_48 = 0;
  uStack_40 = 0;
  FUN_145ed7336(&DAT_14cb90e48);
  local_58 = 0;
  uStack_50 = 0;
  (**(code **)(*DAT_14cb90e30 + 0x60))();
  plVar4 = (longlong *)FUN_144a7d136();
  lVar7 = plVar4[0x22];
  if (lVar7 == 0) {
    (**(code **)(*plVar4 + 1000))(plVar4);
    lVar7 = plVar4[0x22];
  }
  if (DAT_14c98e618 != 0) {
    cVar3 = FUN_1410f9880(lVar7,1);
    lVar2 = DAT_14c98e618;
    if ((cVar3 != '\0') && (*(char *)(lVar7 + 0xb2) == '\x01')) {
      local_68 = DAT_14cb90e38;
      local_60 = DAT_14cb90e40;
      if (DAT_14cb90e40 != 0) {
        LOCK();
        *(int *)(DAT_14cb90e40 + 8) = *(int *)(DAT_14cb90e40 + 8) + 1;
        UNLOCK();
      }
      FUN_145a3846a(lVar2,&local_68);
    }
  }
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1);
  }
  FUN_145ed7426();
  DAT_14cb913f8 = 0;
  FUN_1446ddc76(&local_38,"CoherentRenderingPlugin",1);
  uVar6 = local_38;
  uVar5 = FUN_144a52528();
  plVar4 = (longlong *)FUN_1401e3324(uVar5,uVar6);
  cVar3 = (**(code **)(*plVar4 + 0x68))(plVar4);
  if (cVar3 != '\0') {
    FUN_1446ddc76(&local_38,"CoherentRenderingPlugin",1);
    uVar6 = FUN_144a52528();
    plVar4 = (longlong *)FUN_1401e3324(uVar6,local_38);
    (**(code **)(*plVar4 + 0x50))(plVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed7336 FUN_145ed7336 body=132 status=ok
// SIG undefined FUN_145ed7336(void)

void FUN_145ed7336(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = *param_2;
  lVar2 = param_2[1];
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)param_1[1];
  *param_1 = lVar4;
  param_1[1] = lVar2;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
    lVar4 = *param_1;
  }
  if (((lVar4 == 0) || (param_1[1] == 0)) || (*(int *)(param_1[1] + 8) < 1)) {
    FUN_145ed73ba(param_1 + 2,0);
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145ed73b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145ed73ba FUN_145ed73ba body=107 status=ok
// SIG undefined FUN_145ed73ba(void)

void FUN_145ed73ba(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_145ed7409:
      FUN_145aa4d1a(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1457ca76a(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_145ed7409;
  FUN_145ed74f4(param_1);
  FUN_145aa4d1a(param_1,param_2);
  return;
}



// FUNCTION 145ed7426 FUN_145ed7426 body=166 status=ok
// SIG undefined FUN_145ed7426(void)

void FUN_145ed7426(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = DAT_14cb90e18;
  if (DAT_14cb90e18 != (undefined8 *)0x0) {
    DAT_14cb90e18 = (undefined8 *)0x0;
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = DAT_14cb90e20;
  if (DAT_14cb90e20 != (undefined8 *)0x0) {
    DAT_14cb90e20 = (undefined8 *)0x0;
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = DAT_14cb90e28;
  if (DAT_14cb90e28 != (undefined8 *)0x0) {
    DAT_14cb90e28 = (undefined8 *)0x0;
    (**(code **)*puVar1)(puVar1,1);
  }
  plVar2 = DAT_14cb90e10;
  if (DAT_14cb90e10 == (longlong *)0x0) {
    return;
  }
  DAT_14cb90e10 = (longlong *)0x0;
  puVar1 = (undefined8 *)*plVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1400020a8(plVar2);
  return;
}



// FUNCTION 145ed74cc FUN_145ed74cc body=39 status=ok
// SIG undefined FUN_145ed74cc(void)

ITextTransformationManager * FUN_145ed74cc(ITextTransformationManager *param_1,int param_2)

{
  cohtml::ITextTransformationManager::~ITextTransformationManager(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ed74f4 FUN_145ed74f4 body=327 status=ok
// SIG undefined FUN_145ed74f4(void)

void FUN_145ed74f4(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x7c + (longlong)iVar4 * 0x80) * 4) =
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



// FUNCTION 145ed7648 FUN_145ed7648 body=239 status=ok
// SIG undefined FUN_145ed7648(void)

undefined8 * FUN_145ed7648(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a6501f0;
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
              0x110) < DAT_14caeafe8) {
    FUN_144b3d300(&DAT_14caeafe8);
    if (DAT_14caeafe8 == -1) {
      FUN_141586386();
      atexit((_func_5014 *)&LAB_14356db26);
      _Init_thread_footer(&DAT_14caeafe8);
    }
  }
  param_1[0x25] = 0x3f0000003d4ccccd;
  *(undefined4 *)(param_1 + 0x26) = 0;
  return param_1;
}



// FUNCTION 145ed7742 FUN_145ed7742 body=239 status=ok
// SIG undefined FUN_145ed7742(void)

undefined8 * FUN_145ed7742(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a68e490;
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
              0x110) < DAT_14caebae8) {
    FUN_144b3d300(&DAT_14caebae8);
    if (DAT_14caebae8 == -1) {
      FUN_14158642c();
      atexit((_func_5014 *)&LAB_14356ef19);
      _Init_thread_footer(&DAT_14caebae8);
    }
  }
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  return param_1;
}



// FUNCTION 145ed783e FUN_145ed783e body=67 status=ok
// SIG undefined FUN_145ed783e(void)

void FUN_145ed783e(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145ed7882(param_1);
    FUN_145b06a48(param_1,0);
    return;
  }
  FUN_145b06a48(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_145bd2a6c(param_1);
  return;
}



// FUNCTION 145ed7882 FUN_145ed7882 body=335 status=ok
// SIG undefined FUN_145ed7882(void)

void FUN_145ed7882(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x3c + (longlong)iVar4 * 0x40) * 4) =
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



// FUNCTION 145ed79d2 FUN_145ed79d2 body=205 status=ok
// SIG undefined FUN_145ed79d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ed79d2(void)

{
  if ((DAT_14c9c1a4f & 2) == 0) {
    DAT_14c9c1a4f = DAT_14c9c1a4f | 2;
    _DAT_14c9c19f0 = L"FPostProcessEdgeDetection2ApplyTargetChangesPS";
    _DAT_14c9c1a08 = FUN_146826540;
    _DAT_14c9c1a10 = FUN_146825d77;
    _DAT_14c9c1a18 = FUN_146825fd6;
    _DAT_14c9c1a20 = FUN_1407e02ea;
    _DAT_14c9c1a28 = FUN_146826273;
    _DAT_14c9c1a00 = FUN_147144c04;
    _DAT_14c9c1a40 = 0xffffffff000000e0;
    _DAT_14c9c1a48 = 8;
    DAT_14c9c1a4c = 0;
    _DAT_14c9c1a30 = &LAB_147144c2e;
    FUN_145ed7aa0();
    FUN_1407e00cc(&DAT_14c9c19e8);
    return;
  }
  return;
}



// FUNCTION 145ed7aa0 FUN_145ed7aa0 body=123 status=ok
// SIG undefined FUN_145ed7aa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ed7aa0(void)

{
  _DAT_14c9c4188 = L"BASE";
  DAT_14c9c41b2 = 4;
  _DAT_14c9c4190 = FUN_140b35ae4();
  _DAT_14c9c4198 = DAT_14c9c19f8;
  _DAT_14c9c41a0 = &LAB_14682652b;
  DAT_14c9c19f8 = &DAT_14c9c4188;
  DAT_14c9c1a4d = DAT_14c9c1a4d + '\x01';
  _DAT_14c9c41a8 = 0x100000000;
  if (*(char *)(_DAT_14c9c4190 + 100) != '\0') {
    DAT_14c9c1a4e = DAT_14c9c1a4e + '\x01';
  }
  return;
}



// FUNCTION 145ed7b1c FUN_145ed7b1c body=226 status=ok
// SIG undefined FUN_145ed7b1c(void)

longlong * FUN_145ed7b1c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462bc42c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed7c04 FUN_145ed7c04 body=140 status=ok
// SIG undefined FUN_145ed7c04(void)

undefined1 * FUN_145ed7c04(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145dd424e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BaseParams";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FEdgeDetection2ApplyTargetChangesParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x129;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9c3930;
  return &LAB_145ed7c00;
}



// FUNCTION 145ed7c90 FUN_145ed7c90 body=1699 status=ok
// SIG undefined FUN_145ed7c90(void)

void FUN_145ed7c90(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = FUN_140059518(param_1 + 0x44);
  if (lVar5 != 0) {
    lVar6 = FUN_14030d4a0();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      FUN_1402815f4(param_1,&local_50);
      lVar6 = *(longlong *)(local_50 + 0x110);
      AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x100));
      *(int *)(lVar6 + 0xf8) = *(int *)(lVar6 + 0xf8) + 1;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_48 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_48 + 0x10))(local_48);
          }
        }
      }
      plVar2 = (longlong *)(lVar6 + 0x88);
      *(undefined4 *)(lVar6 + 0x90) = 0;
      if (*(int *)(lVar6 + 0x94) < 0) {
        FUN_1402191ca(plVar2,0);
      }
      *(int *)(lVar6 + 0x98) = *(int *)(lVar6 + 0x98) + 1;
      cVar4 = FUN_1415866f8(param_1,*param_2);
      if (cVar4 != '\0') {
        *(int *)(lVar6 + 0x98) = *(int *)(lVar6 + 0x98) + 1;
        iVar3 = *(int *)(lVar6 + 0x90);
        *(uint *)(lVar6 + 0x90) = iVar3 + 1U;
        if (*(uint *)(lVar6 + 0x94) < iVar3 + 1U) {
          FUN_1446f84a2(plVar2,iVar3);
        }
        *(undefined8 *)(*plVar2 + (longlong)iVar3 * 8) = DAT_14cbd70a0;
      }
      cVar4 = FUN_145ed83ea(lVar5,*param_2);
      if (cVar4 != '\0') {
        *(int *)(lVar6 + 0x98) = *(int *)(lVar6 + 0x98) + 1;
        iVar3 = *(int *)(lVar6 + 0x90);
        *(uint *)(lVar6 + 0x90) = iVar3 + 1U;
        if (*(uint *)(lVar6 + 0x94) < iVar3 + 1U) {
          FUN_1446f84a2(plVar2,iVar3);
        }
        *(undefined8 *)(*plVar2 + (longlong)iVar3 * 8) = DAT_14cbd7008;
      }
      cVar4 = FUN_14586c374(lVar5,*param_2);
      if (cVar4 != '\0') {
        *(int *)(lVar6 + 0x98) = *(int *)(lVar6 + 0x98) + 1;
        iVar3 = *(int *)(lVar6 + 0x90);
        *(uint *)(lVar6 + 0x90) = iVar3 + 1U;
        if (*(uint *)(lVar6 + 0x94) < iVar3 + 1U) {
          FUN_1446f84a2(plVar2,iVar3);
        }
        *(undefined8 *)(*plVar2 + (longlong)iVar3 * 8) = DAT_14cbd7010;
      }
      cVar4 = FUN_145976d86(lVar5,*param_2);
      if (cVar4 != '\0') {
        *(int *)(lVar6 + 0x98) = *(int *)(lVar6 + 0x98) + 1;
        iVar3 = *(int *)(lVar6 + 0x90);
        *(uint *)(lVar6 + 0x90) = iVar3 + 1U;
        if (*(uint *)(lVar6 + 0x94) < iVar3 + 1U) {
          FUN_1446f84a2(plVar2,iVar3);
        }
        *(undefined8 *)(*plVar2 + (longlong)iVar3 * 8) = DAT_14cbd7018;
      }
      cVar4 = FUN_145ed834e(lVar5,*param_2);
      if (cVar4 != '\0') {
        *(int *)(lVar6 + 0x98) = *(int *)(lVar6 + 0x98) + 1;
        iVar3 = *(int *)(lVar6 + 0x90);
        *(uint *)(lVar6 + 0x90) = iVar3 + 1U;
        if (*(uint *)(lVar6 + 0x94) < iVar3 + 1U) {
          FUN_1446f84a2(plVar2,iVar3);
        }
        *(undefined8 *)(*plVar2 + (longlong)iVar3 * 8) = DAT_14cbd7020;
      }
      cVar4 = FUN_14586c340(lVar5,*param_2);
      if (cVar4 != '\0') {
        *(int *)(lVar6 + 0x98) = *(int *)(lVar6 + 0x98) + 1;
        iVar3 = *(int *)(lVar6 + 0x90);
        *(uint *)(lVar6 + 0x90) = iVar3 + 1U;
        if (*(uint *)(lVar6 + 0x94) < iVar3 + 1U) {
          FUN_1446f84a2(plVar2,iVar3);
        }
        *(undefined8 *)(*plVar2 + (longlong)iVar3 * 8) = DAT_14cbd7028;
      }
      cVar4 = FUN_145ed8382(lVar5,*param_2);
      if (cVar4 != '\0') {
        *(int *)(lVar6 + 0x98) = *(int *)(lVar6 + 0x98) + 1;
        iVar3 = *(int *)(lVar6 + 0x90);
        *(uint *)(lVar6 + 0x90) = iVar3 + 1U;
        if (*(uint *)(lVar6 + 0x94) < iVar3 + 1U) {
          FUN_1446f84a2(plVar2,iVar3);
        }
        *(undefined8 *)(*plVar2 + (longlong)iVar3 * 8) = DAT_14cbd7030;
      }
      cVar4 = FUN_145ed841e(lVar5,*param_2);
      if (cVar4 != '\0') {
        *(int *)(lVar6 + 0x98) = *(int *)(lVar6 + 0x98) + 1;
        iVar3 = *(int *)(lVar6 + 0x90);
        *(uint *)(lVar6 + 0x90) = iVar3 + 1U;
        if (*(uint *)(lVar6 + 0x94) < iVar3 + 1U) {
          FUN_1446f84a2(plVar2,iVar3);
        }
        *(undefined8 *)(*plVar2 + (longlong)iVar3 * 8) = DAT_14cbd7038;
      }
      cVar4 = FUN_145ed83b6(lVar5,*param_2);
      if (cVar4 != '\0') {
        *(int *)(lVar6 + 0x98) = *(int *)(lVar6 + 0x98) + 1;
        iVar3 = *(int *)(lVar6 + 0x90);
        *(uint *)(lVar6 + 0x90) = iVar3 + 1U;
        if (*(uint *)(lVar6 + 0x94) < iVar3 + 1U) {
          FUN_1446f84a2(plVar2,iVar3);
        }
        *(undefined8 *)(*plVar2 + (longlong)iVar3 * 8) = DAT_14cbd7040;
      }
      cVar4 = FUN_145ed8452(lVar5,*param_2);
      if (cVar4 != '\0') {
        *(int *)(lVar6 + 0x98) = *(int *)(lVar6 + 0x98) + 1;
        iVar3 = *(int *)(lVar6 + 0x90);
        *(uint *)(lVar6 + 0x90) = iVar3 + 1U;
        if (*(uint *)(lVar6 + 0x94) < iVar3 + 1U) {
          FUN_1446f84a2(plVar2,iVar3);
        }
        *(undefined8 *)(*plVar2 + (longlong)iVar3 * 8) = DAT_14cbd7048;
      }
      cVar4 = FUN_145ed8486(lVar5,*param_2);
      if (cVar4 != '\0') {
        *(int *)(lVar6 + 0x98) = *(int *)(lVar6 + 0x98) + 1;
        iVar3 = *(int *)(lVar6 + 0x90);
        *(uint *)(lVar6 + 0x90) = iVar3 + 1U;
        if (*(uint *)(lVar6 + 0x94) < iVar3 + 1U) {
          FUN_1446f84a2(plVar2,iVar3);
        }
        *(undefined8 *)(*plVar2 + (longlong)iVar3 * 8) = DAT_14cbd7050;
      }
      cVar4 = FUN_14586c794(param_1,*param_2);
      if (cVar4 != '\0') {
        *(int *)(lVar6 + 0x98) = *(int *)(lVar6 + 0x98) + 1;
        iVar3 = *(int *)(lVar6 + 0x90);
        *(uint *)(lVar6 + 0x90) = iVar3 + 1U;
        if (*(uint *)(lVar6 + 0x94) < iVar3 + 1U) {
          FUN_1446f84a2(plVar2,iVar3);
        }
        *(undefined8 *)(*plVar2 + (longlong)iVar3 * 8) = DAT_14cbd7058;
      }
      cVar4 = FUN_145ed8fe4(param_1,*param_2);
      if (cVar4 != '\0') {
        *(int *)(lVar6 + 0x98) = *(int *)(lVar6 + 0x98) + 1;
        iVar3 = *(int *)(lVar6 + 0x90);
        *(uint *)(lVar6 + 0x90) = iVar3 + 1U;
        if (*(uint *)(lVar6 + 0x94) < iVar3 + 1U) {
          FUN_1446f84a2(plVar2,iVar3);
        }
        *(undefined8 *)(*plVar2 + (longlong)iVar3 * 8) = DAT_14cbd7060;
      }
      cVar4 = FUN_145ed84ba(lVar5,*param_2);
      if (cVar4 != '\0') {
        *(int *)(lVar6 + 0x98) = *(int *)(lVar6 + 0x98) + 1;
        iVar3 = *(int *)(lVar6 + 0x90);
        *(uint *)(lVar6 + 0x90) = iVar3 + 1U;
        if (*(uint *)(lVar6 + 0x94) < iVar3 + 1U) {
          FUN_1446f84a2(plVar2,iVar3);
        }
        *(undefined8 *)(*plVar2 + (longlong)iVar3 * 8) = DAT_14cbd7068;
      }
      cVar4 = FUN_145ed84ee(lVar5,*param_2);
      if (cVar4 != '\0') {
        *(int *)(lVar6 + 0x98) = *(int *)(lVar6 + 0x98) + 1;
        iVar3 = *(int *)(lVar6 + 0x90);
        *(uint *)(lVar6 + 0x90) = iVar3 + 1U;
        if (*(uint *)(lVar6 + 0x94) < iVar3 + 1U) {
          FUN_1446f84a2(plVar2,iVar3);
        }
        *(undefined8 *)(*plVar2 + (longlong)iVar3 * 8) = DAT_14cbd7070;
      }
      cVar4 = FUN_145ed8522(lVar5,*param_2);
      if (cVar4 != '\0') {
        *(int *)(lVar6 + 0x98) = *(int *)(lVar6 + 0x98) + 1;
        iVar3 = *(int *)(lVar6 + 0x90);
        *(uint *)(lVar6 + 0x90) = iVar3 + 1U;
        if (*(uint *)(lVar6 + 0x94) < iVar3 + 1U) {
          FUN_1446f84a2(plVar2,iVar3);
        }
        *(undefined8 *)(*plVar2 + (longlong)iVar3 * 8) = DAT_14cbd7078;
      }
      *(int *)(lVar6 + 0x98) = *(int *)(lVar6 + 0x98) + 1;
      iVar3 = *(int *)(lVar6 + 0x90);
      *(uint *)(lVar6 + 0x90) = iVar3 + 1U;
      if (*(uint *)(lVar6 + 0x94) < iVar3 + 1U) {
        FUN_1446f84a2(plVar2,iVar3);
      }
      *(undefined8 *)(*plVar2 + (longlong)iVar3 * 8) = DAT_14cbd70a8;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed834e FUN_145ed834e body=52 status=ok
// SIG undefined FUN_145ed834e(void)

ulonglong FUN_145ed834e(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_140f0c81a();
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    param_1 = lVar2;
    bVar1 = FUN_145ed8aa8(lVar2,param_2);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 145ed8382 FUN_145ed8382 body=52 status=ok
// SIG undefined FUN_145ed8382(void)

ulonglong FUN_145ed8382(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_140f0c81a();
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    param_1 = lVar2;
    bVar1 = FUN_145ed8ee0(lVar2,param_2);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 145ed83b6 FUN_145ed83b6 body=52 status=ok
// SIG undefined FUN_145ed83b6(void)

ulonglong FUN_145ed83b6(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_140f0c81a();
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    param_1 = lVar2;
    bVar1 = FUN_145ed8cf0(lVar2,param_2);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 145ed83ea FUN_145ed83ea body=52 status=ok
// SIG undefined FUN_145ed83ea(void)

ulonglong FUN_145ed83ea(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_140f0c81a();
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    param_1 = lVar2;
    bVar1 = FUN_145ed9116(lVar2,param_2);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 145ed841e FUN_145ed841e body=52 status=ok
// SIG undefined FUN_145ed841e(void)

ulonglong FUN_145ed841e(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_140f0c81a();
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    param_1 = lVar2;
    bVar1 = FUN_145ed8556(lVar2,param_2);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 145ed8452 FUN_145ed8452 body=52 status=ok
// SIG undefined FUN_145ed8452(void)

ulonglong FUN_145ed8452(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_140f0c81a();
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    param_1 = lVar2;
    bVar1 = FUN_145ed8732(lVar2,param_2);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 145ed8486 FUN_145ed8486 body=52 status=ok
// SIG undefined FUN_145ed8486(void)

ulonglong FUN_145ed8486(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_140f0c81a();
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    param_1 = lVar2;
    bVar1 = FUN_145ed85c6(lVar2,param_2);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 145ed84ba FUN_145ed84ba body=52 status=ok
// SIG undefined FUN_145ed84ba(void)

ulonglong FUN_145ed84ba(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_140f0c81a();
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    param_1 = lVar2;
    bVar1 = FUN_145ed89de(lVar2,param_2);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 145ed84ee FUN_145ed84ee body=52 status=ok
// SIG undefined FUN_145ed84ee(void)

ulonglong FUN_145ed84ee(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_140f0c81a();
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    param_1 = lVar2;
    bVar1 = FUN_145ed867c(lVar2,param_2);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 145ed8522 FUN_145ed8522 body=52 status=ok
// SIG undefined FUN_145ed8522(void)

ulonglong FUN_145ed8522(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_140f0c81a();
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    param_1 = lVar2;
    bVar1 = FUN_145ed8bfc(lVar2,param_2);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),lVar2 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 145ed8556 FUN_145ed8556 body=111 status=ok
// SIG undefined FUN_145ed8556(void)

undefined8 FUN_145ed8556(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_14127ac30();
  if (((((cVar1 == '\0') && (lVar2 = FUN_14127aa1c(param_1), lVar2 != 0)) &&
       (cVar1 = FUN_14127c006(lVar2), cVar1 != '\0')) &&
      (cVar1 = FUN_14586c512(param_1,param_2), cVar1 != '\0')) &&
     ((cVar1 = FUN_145ed8e60(param_1), cVar1 != '\0' ||
      ((lVar2 = FUN_14127aa1c(param_1), lVar2 != 0 && (cVar1 = FUN_145ed8eb6(lVar2), cVar1 != '\0'))
      )))) {
    return 1;
  }
  return 0;
}



// FUNCTION 145ed85c6 FUN_145ed85c6 body=181 status=ok
// SIG undefined FUN_145ed85c6(void)

undefined4 FUN_145ed85c6(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = FUN_14127aa1c();
  if (lVar5 == 0) {
LAB_145ed85f8:
    cVar3 = FUN_145ed87ec(param_1,param_2);
    if (cVar3 == '\0') {
      FUN_14586ccee(param_1,&local_30,param_2);
      if (local_30 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_145ed898e(param_1);
      }
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar2 = (int *)((longlong)local_28 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_28 + 0x10))(local_28);
          }
        }
      }
      goto LAB_145ed8657;
    }
  }
  else {
    cVar3 = FUN_140b6d060(lVar5);
    if (cVar3 == '\0') goto LAB_145ed85f8;
  }
  uVar4 = 0;
LAB_145ed8657:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed867c FUN_145ed867c body=181 status=ok
// SIG undefined FUN_145ed867c(void)

undefined4 FUN_145ed867c(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = FUN_14127aa1c();
  if (lVar5 == 0) {
LAB_145ed86ae:
    cVar3 = FUN_145ed87ec(param_1,param_2);
    if (cVar3 == '\0') {
      FUN_14586ccee(param_1,&local_30,param_2);
      if (local_30 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_14586c4c2(param_1);
      }
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar2 = (int *)((longlong)local_28 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_28 + 0x10))(local_28);
          }
        }
      }
      goto LAB_145ed870d;
    }
  }
  else {
    cVar3 = FUN_140b6d060(lVar5);
    if (cVar3 == '\0') goto LAB_145ed86ae;
  }
  uVar4 = 0;
LAB_145ed870d:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed8732 FUN_145ed8732 body=185 status=ok
// SIG undefined FUN_145ed8732(void)

uint FUN_145ed8732(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = FUN_14127aa1c();
  if (lVar5 == 0) {
LAB_145ed8764:
    cVar3 = FUN_145ed87ec(param_1,param_2);
    if (cVar3 == '\0') {
      FUN_14586ccee(param_1,&local_30,param_2);
      if (local_30 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_145ed898e(param_1);
        uVar4 = uVar4 ^ 1;
      }
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar2 = (int *)((longlong)local_28 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_28 + 0x10))(local_28);
          }
        }
      }
      goto LAB_145ed87c7;
    }
  }
  else {
    cVar3 = FUN_140b6d060(lVar5);
    if (cVar3 == '\0') goto LAB_145ed8764;
  }
  uVar4 = 0;
LAB_145ed87c7:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed87ec FUN_145ed87ec body=163 status=ok
// SIG undefined FUN_145ed87ec(void)

ulonglong FUN_145ed87ec(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x10))(param_2,&local_38);
  FUN_145ed8890(*(undefined8 *)(param_1 + 0x20),&local_30,local_38);
  if (local_30 != (undefined8 *)0x0) {
    cVar3 = (**(code **)*local_30)(local_30,param_2);
    if (cVar3 != '\0') {
      uVar4 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      goto LAB_145ed8843;
    }
  }
  uVar4 = 0;
LAB_145ed8843:
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed8890 FUN_145ed8890 body=252 status=ok
// SIG undefined FUN_145ed8890(void)

undefined8 FUN_145ed8890(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined **local_60 [3];
  byte local_48;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 == 0) {
    (**(code **)(*param_1 + 0x350))(param_1,local_60);
    FUN_1408e4d18(local_60,param_2);
    local_60[0] = &PTR_FUN_14a5af930;
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    plVar2 = (longlong *)FUN_140489acc();
    lVar1 = param_1[0x1c];
    uVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    local_68 = param_3;
    (**(code **)(*plVar2 + 0x2f0))(plVar2,local_60,uVar3,(int)lVar1);
    FUN_1408e4d18(local_60,param_2);
  }
  local_60[0] = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_48])();
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145ed898e FUN_145ed898e body=79 status=ok
// SIG undefined FUN_145ed898e(void)

ulonglong FUN_145ed898e(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  lVar3 = FUN_140b70372(lVar2);
  if (lVar3 == 0) {
    bVar1 = 0;
  }
  else {
    lVar2 = lVar3;
    bVar1 = FUN_140b70752(lVar3,*(undefined4 *)(param_1[4] + 0xe0),param_2);
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar3 != 0 & bVar1) & 0xffffffff;
}



// FUNCTION 145ed89de FUN_145ed89de body=200 status=ok
// SIG undefined FUN_145ed89de(void)

uint FUN_145ed89de(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = FUN_14127aa1c();
  if (lVar5 == 0) {
LAB_145ed8a10:
    cVar3 = FUN_145ed87ec(param_1,param_2);
    if (cVar3 == '\0') {
      cVar3 = FUN_14127ac30(param_1,param_2);
      if (cVar3 == '\0') {
        FUN_14586ccee(param_1,&local_30,param_2);
        if (local_30 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_14586c4c2(param_1);
          uVar4 = uVar4 ^ 1;
        }
        if (local_28 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_28 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_28)(local_28);
            LOCK();
            piVar2 = (int *)((longlong)local_28 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_28 + 0x10))(local_28);
            }
          }
        }
        goto LAB_145ed8a82;
      }
    }
  }
  else {
    cVar3 = FUN_140b6d060(lVar5);
    if (cVar3 == '\0') goto LAB_145ed8a10;
  }
  uVar4 = 0;
LAB_145ed8a82:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed8aa8 FUN_145ed8aa8 body=339 status=ok
// SIG undefined FUN_145ed8aa8(void)

byte FUN_145ed8aa8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  byte bVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_2 + 0x10))(param_2,&local_40);
  FUN_1446f470e(&local_30,L"SHIFT",1);
  if (local_40 == local_30) {
    uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
    plVar7 = &local_40;
    FUN_140b6e166(plVar7,uVar5,param_2);
    if (local_40 != 0) {
      uVar6 = FUN_145ed8aa8(param_1,local_40);
      plVar7 = (longlong *)(uVar6 & 0xffffffff);
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
    bVar4 = local_40 != 0 & (byte)plVar7;
  }
  else {
    cVar3 = FUN_145977038(param_1,param_2);
    if (cVar3 == '\0') {
      (**(code **)(*param_2 + 0x10))(param_2,&local_40);
      FUN_1446f470e(&local_48,L"EPIC",1);
      if ((local_40 == local_48) && (cVar3 = FUN_145ed898e(param_1,param_2), cVar3 == '\0')) {
        bVar4 = FUN_14127ac30(param_1,param_2);
        bVar4 = bVar4 ^ 1;
        goto LAB_145ed8b0e;
      }
    }
    bVar4 = 0;
  }
LAB_145ed8b0e:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar4;
}



// FUNCTION 145ed8bfc FUN_145ed8bfc body=242 status=ok
// SIG undefined FUN_145ed8bfc(void)

ulonglong FUN_145ed8bfc(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  undefined7 uVar7;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_14127aa1c();
  if (lVar4 == 0) {
LAB_145ed8c34:
    cVar3 = FUN_145ed87ec(param_1,param_2);
    if (cVar3 == '\0') {
      (**(code **)(*param_2 + 0x10))(param_2,&local_30);
      FUN_1446f470e(&local_38,L"SHIFT",1);
      uVar7 = (undefined7)((ulonglong)&local_30 >> 8);
      uVar6 = CONCAT71(uVar7,1);
      if (local_30 != local_38) {
        uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
        FUN_140b6ec10(&local_48,uVar5,param_2);
        uVar6 = CONCAT71(uVar7,local_48 != 0);
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_40 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar2 = (int *)((longlong)local_40 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_40 + 0x10))(local_40);
            }
          }
        }
      }
      goto LAB_145ed8ccc;
    }
  }
  else {
    cVar3 = FUN_140b6d060(lVar4);
    if (cVar3 == '\0') goto LAB_145ed8c34;
  }
  uVar6 = 0;
LAB_145ed8ccc:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed8cf0 FUN_145ed8cf0 body=366 status=ok
// SIG undefined FUN_145ed8cf0(void)

ulonglong FUN_145ed8cf0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_2 + 0x10))(param_2,&local_40);
  FUN_1446f470e(&local_30,L"SHIFT",1);
  if (local_40 == local_30) {
    cVar3 = FUN_14127ac30(param_1,param_2);
    if (cVar3 == '\0') {
      lVar6 = FUN_14127aa1c(param_1);
      if ((lVar6 == 0) || (cVar3 = FUN_14127c006(lVar6), cVar3 == '\0')) {
        uVar8 = 0;
      }
      else {
        uVar5 = FUN_14586c512(param_1,param_2);
        uVar8 = (ulonglong)uVar5;
      }
      cVar3 = FUN_145ed8e60(param_1);
      if ((cVar3 == '\0') &&
         ((lVar6 = FUN_14127aa1c(param_1), lVar6 == 0 ||
          (cVar3 = FUN_145ed8eb6(lVar6), cVar3 == '\0')))) {
        bVar4 = FUN_145ed93f8(param_1,param_2);
      }
      else {
        bVar4 = 0;
      }
      uVar8 = CONCAT71((int7)(uVar8 >> 8),(byte)uVar8 | bVar4);
    }
    else {
      uVar8 = 0;
    }
  }
  else {
    uVar7 = (**(code **)(*param_1 + 0x180))(param_1);
    FUN_140b6ec10(&local_40,uVar7,param_2);
    if (local_40 != 0) {
      uVar5 = FUN_145ed8cf0(param_1,local_40);
      param_1 = (longlong *)(ulonglong)uVar5;
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
    uVar8 = CONCAT71((int7)((ulonglong)local_38 >> 8),local_40 != 0 & (byte)param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 145ed8e60 FUN_145ed8e60 body=86 status=ok
// SIG undefined FUN_145ed8e60(void)

undefined8 FUN_145ed8e60(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  byte bVar6;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x78);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x80), lVar1 != 0)) {
    lVar3 = FUN_144a79464();
    param_1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(param_1 + 0x38)) &&
       (param_1 = *(longlong *)(param_1 + 0x30),
       *(longlong *)(param_1 + (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
      uVar4 = FUN_1410cda3e(lVar1);
      bVar6 = (byte)uVar4;
      uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
      bVar2 = 1;
      goto LAB_145ed8eaa;
    }
  }
  bVar6 = (byte)param_1;
  bVar2 = 0;
  uVar5 = 0;
LAB_145ed8eaa:
  return CONCAT71(uVar5,bVar2 & bVar6);
}



// FUNCTION 145ed8eb6 FUN_145ed8eb6 body=42 status=ok
// SIG undefined FUN_145ed8eb6(void)

undefined8 FUN_145ed8eb6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 != 0) && (iVar1 = FUN_14490d72a(lVar2), iVar1 == 3)) {
    return 1;
  }
  return 0;
}



// FUNCTION 145ed8ee0 FUN_145ed8ee0 body=258 status=ok
// SIG undefined FUN_145ed8ee0(void)

ulonglong FUN_145ed8ee0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = FUN_14127ac30();
  if (cVar3 == '\0') {
    cVar3 = FUN_14586c512(param_1,param_2);
    if (cVar3 != '\0') {
      FUN_14586ccee(param_1,&local_30,param_2);
      uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      if (local_30 != 0) {
        cVar3 = FUN_14586c4c2(param_1);
        if (cVar3 == '\0') {
          lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
          if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1f0) != 0)) {
            lVar4 = FUN_141030f66();
            if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x30) != 0)) {
              cVar3 = FUN_145ed9524(*(longlong *)(lVar4 + 0x30),*(undefined4 *)(param_1[4] + 0xe0),
                                    local_30);
              if (cVar3 == '\0') goto LAB_145ed8fa9;
            }
          }
        }
        else {
LAB_145ed8fa9:
          uVar5 = 0;
        }
      }
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar2 = (int *)((longlong)local_28 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_28 + 0x10))(local_28);
          }
        }
      }
      goto LAB_145ed8f16;
    }
  }
  uVar5 = 0;
LAB_145ed8f16:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed8fe4 FUN_145ed8fe4 body=305 status=ok
// SIG undefined FUN_145ed8fe4(void)

ulonglong FUN_145ed8fe4(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = FUN_140b670f4();
  if (cVar3 != '\0') {
    lVar4 = FUN_140059518((longlong)param_1 + 0x44);
    if (lVar4 != 0) {
      lVar5 = FUN_14030d4a0();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) == lVar5 + 0x30)) {
        cVar3 = FUN_148dad112(lVar4,param_2);
        uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
        if (cVar3 != '\0') goto LAB_145ed900d;
        uVar6 = (**(code **)(*param_1 + 0x180))(param_1);
        FUN_140b6deae(&local_38,uVar6,param_2);
        if (local_38 != 0) {
          cVar3 = FUN_148dad112(lVar4);
          if (cVar3 != '\0') {
            if (local_30 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_30 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_30)(local_30);
                LOCK();
                piVar2 = (int *)((longlong)local_30 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*local_30 + 0x10))(local_30);
                }
              }
            }
            goto LAB_145ed900d;
          }
        }
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_30 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar2 = (int *)((longlong)local_30 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_30 + 0x10))(local_30);
            }
          }
        }
      }
    }
  }
  uVar7 = 0;
LAB_145ed900d:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed9116 FUN_145ed9116 body=517 status=ok
// SIG undefined FUN_145ed9116(void)

undefined4 FUN_145ed9116(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar4 = FUN_14127ac30();
  if (cVar4 == '\0') {
    uVar6 = 0;
    iVar5 = FUN_1413ffdac(param_1,0);
    if (iVar5 != 2) goto LAB_145ed9236;
    cVar4 = FUN_14586c512(param_1,param_2);
    if (cVar4 == '\0') {
      uVar7 = (**(code **)(*param_1 + 0x180))(param_1);
      lVar8 = FUN_140b70372(uVar7);
      if (lVar8 != 0) {
        plVar10 = (longlong *)param_2[2];
        if (plVar10 == (longlong *)0x0) {
LAB_145ed925f:
          plVar10 = (longlong *)0x0;
        }
        else {
          iVar5 = (int)plVar10[1];
          do {
            if (iVar5 == 0) goto LAB_145ed925f;
            LOCK();
            iVar3 = (int)plVar10[1];
            bVar12 = iVar5 == iVar3;
            if (bVar12) {
              *(int *)(plVar10 + 1) = iVar5 + 1;
              iVar3 = iVar5;
            }
            iVar5 = iVar3;
            UNLOCK();
          } while (!bVar12);
        }
        lVar9 = 0;
        if (plVar10 != (longlong *)0x0) {
          lVar9 = param_2[1];
        }
        (**(code **)(*param_2 + 0x10))(param_2,&local_58);
        FUN_1446f470e(&local_48,L"SHIFT",1);
        if (local_58 != local_48) {
          uVar7 = (**(code **)(*param_1 + 0x180))(param_1);
          FUN_140b6ec10(&local_58,uVar7,param_2);
          plVar11 = plVar10;
          if ((local_58 != 0) &&
             (cVar4 = FUN_140b70752(lVar8,*(undefined4 *)(param_1[4] + 0xe0)), cVar4 != '\0')) {
            if (local_50 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_50 + 1) = (int)local_50[1] + 1;
              UNLOCK();
            }
            lVar9 = local_58;
            plVar11 = local_50;
            if (plVar10 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar10 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*plVar10)(plVar10);
                LOCK();
                piVar1 = (int *)((longlong)plVar10 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10);
                }
              }
            }
          }
          plVar10 = plVar11;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_50 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar1 = (int *)((longlong)local_50 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_50 + 0x10))(local_50);
              }
            }
          }
        }
        uVar6 = FUN_145ed931c(lVar8,*(undefined4 *)(param_1[4] + 0xe0),lVar9);
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar10 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
        goto LAB_145ed9236;
      }
    }
  }
  uVar6 = 0;
LAB_145ed9236:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 145ed931c FUN_145ed931c body=219 status=ok
// SIG undefined FUN_145ed931c(void)

ulonglong FUN_145ed931c(undefined8 param_1,undefined4 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined7 uVar5;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_3 + 0x10))(param_3,&local_48);
  FUN_1446f470e(&local_38,&DAT_14b4367f4,1);
  uVar5 = (undefined7)((ulonglong)param_3 >> 8);
  if (local_48 == local_38) {
    uVar4 = CONCAT71(uVar5,1);
  }
  else {
    FUN_140b6c84e(param_1,&local_48,param_2,param_3);
    if (local_48 == (longlong *)0x0) {
      uVar4 = 0;
    }
    else {
      lVar3 = (**(code **)(*local_48 + 0x38))();
      uVar4 = CONCAT71(uVar5,*(undefined1 *)(lVar3 + 0x10)) & 0xffffffffffffff08;
      uVar4 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 >> 3);
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed93f8 FUN_145ed93f8 body=299 status=ok
// SIG undefined FUN_145ed93f8(void)

ulonglong FUN_145ed93f8(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar2 = FUN_14127ac30();
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (cVar2 == '\0') {
    lVar3 = FUN_14127aa1c(param_1);
    if (lVar3 != 0) {
      FUN_14127bdbc(lVar3,&local_50);
      lVar3 = local_50;
      if ((longlong)local_48 != 0) {
        lVar6 = 0;
        do {
          lVar1 = *(longlong *)(lVar3 + lVar6);
          if (lVar1 != 0) {
            if ((&DAT_149fc1b6e)[*(byte *)(lVar1 + 0x3b8)] == '\x01') {
              if ((*(longlong **)(lVar1 + 0x3a8) != (longlong *)0x0) &&
                 (cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x3a8) + 0x28))(), cVar2 != '\0')) {
LAB_145ed949d:
                puVar4 = (undefined8 *)FUN_14127b0d4(lVar1 + 0x3a0);
                cVar2 = (**(code **)*puVar4)(puVar4,param_2);
                if (cVar2 != '\0') {
                  if (local_50 != 0) {
                    FUN_1400020a8();
                  }
                  goto LAB_145ed94cb;
                }
              }
            }
            else if ((*(uint *)(lVar1 + 0x3a8) & 0xffffff) != 0) goto LAB_145ed949d;
          }
          lVar6 = lVar6 + 8;
        } while ((longlong)local_48 * 8 != lVar6);
      }
      if (local_50 != 0) {
        FUN_1400020a8(local_50);
      }
    }
    uVar5 = 0;
  }
LAB_145ed94cb:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 145ed9524 FUN_145ed9524 body=1125 status=ok
// SIG undefined FUN_145ed9524(void)

undefined8 FUN_145ed9524(longlong param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong *local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_3 + 0x10))(param_3,&local_58);
  FUN_1446f470e(local_60,L"SHIFT",1);
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar11 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar11 = *(longlong *)(param_1 + 0xe8);
    }
    iVar7 = *(int *)(lVar11 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & param_2) * 4);
    if (iVar7 != -1) {
      uVar10 = 0;
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar7 * 0xc) == param_2) {
          FUN_140b64d6c(param_1,&local_70,param_2);
          plVar9 = local_68;
          if (local_70 == (longlong *)0x0) goto LAB_145ed9725;
          if (local_68 == (longlong *)0x0) {
            plStack_50 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_68 + 1) = (int)local_68[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(local_68 + 1) = (int)local_68[1] + 1;
            UNLOCK();
            plStack_50 = local_68;
            LOCK();
            *(int *)(local_68 + 1) = (int)local_68[1] + 1;
            UNLOCK();
          }
          local_58 = local_70;
          uVar6 = (**(code **)(*local_70 + 0x40))();
          iVar7 = FUN_140b64cb0((longlong *)(param_1 + 0x50),uVar6,&local_58);
          plVar1 = plStack_50;
          if (iVar7 == -1) {
            lVar11 = 0;
          }
          else {
            lVar11 = (longlong)iVar7 * 0x68 + *(longlong *)(param_1 + 0x50);
          }
          if (plStack_50 != (longlong *)0x0) {
            LOCK();
            plVar3 = plStack_50 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*plStack_50)();
              LOCK();
              piVar2 = (int *)((longlong)plVar1 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar1 + 0x10))();
              }
            }
          }
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar9 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar9)();
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar9 + 0x10))();
              }
            }
            LOCK();
            plVar1 = plVar9 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar9)();
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar9 + 0x10))();
              }
            }
          }
          if (lVar11 == 0) goto LAB_145ed9725;
          plStack_50 = (longlong *)param_3[2];
          if (plStack_50 == (longlong *)0x0) goto LAB_145ed9767;
          iVar7 = (int)plStack_50[1];
          goto LAB_145ed968a;
        }
        iVar7 = *(int *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar7 * 0xc + 4);
      } while (iVar7 != -1);
      goto LAB_145ed973b;
    }
  }
  uVar10 = 0;
  goto LAB_145ed973b;
LAB_145ed9767:
  local_58 = (longlong *)0x0;
  plStack_50 = (longlong *)0x0;
  bVar12 = true;
  goto LAB_145ed96bc;
  while( true ) {
    LOCK();
    iVar4 = (int)plStack_50[1];
    bVar12 = iVar7 == iVar4;
    if (bVar12) {
      *(int *)(plStack_50 + 1) = iVar7 + 1;
      iVar4 = iVar7;
    }
    iVar7 = iVar4;
    UNLOCK();
    if (bVar12) break;
LAB_145ed968a:
    if (iVar7 == 0) goto LAB_145ed9767;
  }
  local_58 = (longlong *)param_3[1];
  LOCK();
  *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
  UNLOCK();
  LOCK();
  *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
  UNLOCK();
  bVar12 = false;
LAB_145ed96bc:
  plVar9 = plStack_50;
  uVar6 = (**(code **)(*local_58 + 0x40))();
  iVar7 = FUN_140b64ea2((longlong *)(lVar11 + 0x10),uVar6,&local_58);
  plVar1 = plStack_50;
  if (iVar7 == -1) {
    lVar11 = 0;
  }
  else {
    lVar11 = (longlong)iVar7 * 0x20 + *(longlong *)(lVar11 + 0x10);
  }
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (!bVar12) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((lVar11 == 0) || (*(char *)(lVar11 + 0x10) != '\x01')) {
LAB_145ed9725:
    uVar10 = 0;
  }
  else {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x2e8) + 8))();
    uVar10 = 1;
    if (cVar5 == '\0') {
      uVar8 = FUN_140b64e34(param_1);
      FUN_140b6e166(&local_58,uVar8,param_3);
      if ((((local_58 != (longlong *)0x0) && (lVar11 = FUN_140b64e34(param_1), lVar11 != 0)) &&
          (*(longlong *)(lVar11 + 0x1f0) != 0)) &&
         (((plVar9 = (longlong *)FUN_140b703aa(), plVar9 != (longlong *)0x0 &&
           (lVar11 = (**(code **)(*plVar9 + 0x2b8))(plVar9), lVar11 != 0)) &&
          (cVar5 = FUN_145cf80ce(lVar11,param_2,local_58), plVar9 = plStack_50, cVar5 != '\0')))) {
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_50)(plStack_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        goto LAB_145ed9725;
      }
      plVar9 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_50 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
    }
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_68 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
LAB_145ed973b:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 145ed998a FUN_145ed998a body=144 status=ok
// SIG undefined FUN_145ed998a(void)

code * FUN_145ed998a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145ed9a1a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PerFrameParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FParticlePerFrameSimulationShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa0000004b0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14caf5760;
  return FUN_147c27158;
}



// FUNCTION 145ed9a1a FUN_145ed9a1a body=261 status=ok
// SIG undefined FUN_145ed9a1a(void)

void FUN_145ed9a1a(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf57e0) {
    FUN_144b3d300(&DAT_14caf57e0);
    if (DAT_14caf57e0 == -1) {
      FUN_145ed9b20(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParticlePerFrameSimulationShaderParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x444;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caf5760,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1435e57a5);
      _Init_thread_footer(&DAT_14caf57e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed9b20 FUN_145ed9b20 body=226 status=ok
// SIG undefined FUN_145ed9b20(void)

longlong * FUN_145ed9b20(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1463f06a8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed9c04 FUN_145ed9c04 body=132 status=ok
// SIG undefined FUN_145ed9c04(void)

undefined1 * FUN_145ed9c04(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PointAttractor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x445;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147c272f6;
}



// FUNCTION 145ed9c88 FUN_145ed9c88 body=136 status=ok
// SIG undefined FUN_145ed9c88(void)

code * FUN_145ed9c88(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PositionOffsetAndAttractorStrength";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000446;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ed9c04;
}



// FUNCTION 145ed9d10 FUN_145ed9d10 body=138 status=ok
// SIG undefined FUN_145ed9d10(void)

code * FUN_145ed9d10(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumIterations";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c00000449;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c271e2;
}



// FUNCTION 145ed9d9a FUN_145ed9d9a body=26 status=ok
// SIG undefined FUN_145ed9d9a(void)

void FUN_145ed9d9a(undefined8 param_1)

{
  FUN_145ed9db4();
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 145ed9db4 FUN_145ed9db4 body=181 status=ok
// SIG undefined FUN_145ed9db4(void)

void FUN_145ed9db4(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_14479d2ce(param_1 + 0x78);
  if (lVar1 != 0) {
    FUN_1475069a4(&local_38);
    FUN_1409ca370(lVar1 + 1000,param_1,local_38);
    FUN_144a7b126(lVar1 + 1000,&local_29,1);
    FUN_147506a64(&local_40);
    FUN_1409ca370(lVar1 + 0x3f8,param_1,local_40);
    FUN_144a7b126(lVar1 + 0x3f8,&local_29,1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed9e6a FUN_145ed9e6a body=142 status=ok
// SIG undefined FUN_145ed9e6a(void)

bool FUN_145ed9e6a(longlong param_1,undefined8 param_2)

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
    FUN_1400841de(param_1 + 0x18,&local_30);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ed9efa FUN_145ed9efa body=89 status=ok
// SIG undefined FUN_145ed9efa(void)

void FUN_145ed9efa(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if (lVar2 != param_2) {
    return;
  }
  lVar2 = *(longlong *)(param_2 + 0x108);
  if (lVar2 != 0) {
    cVar1 = FUN_147a5faf8(lVar2);
    if (cVar1 != '\0') {
      return;
    }
    if (*(char *)(lVar2 + 0xcc3) != '\0') {
      return;
    }
  }
  FUN_145ed9f54(param_1,param_2,0);
  return;
}



// FUNCTION 145ed9f54 FUN_145ed9f54 body=190 status=ok
// SIG undefined FUN_145ed9f54(void)

void FUN_145ed9f54(longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_2 != 0) || (param_2 = (**(code **)(*param_1 + 0x180))(param_1), param_2 != 0)) {
    FUN_145eda014(param_2);
  }
  plVar1 = (longlong *)FUN_14479d2ce((undefined8 *)((longlong)param_1 + 0x34));
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x330))(plVar1);
    *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  }
  if ((param_3 & 1) != 0) {
    FUN_1446ddc76(&local_20,"NetworkReplayStreaming",1);
    uVar2 = FUN_144a52528();
    uVar2 = FUN_14493e38c(uVar2,local_20);
    FUN_1470869cc(uVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145eda014 FUN_145eda014 body=97 status=ok
// SIG undefined FUN_145eda014(void)

void FUN_145eda014(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x108) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x108) + 0x200);
    FUN_1434bc188();
    (**(code **)(**(longlong **)(param_1 + 0x108) + 0x3d8))(*(longlong **)(param_1 + 0x108),0);
    uVar2 = FUN_1405e677a(DAT_14cb0d2b0,param_1);
    FUN_14375e49a(uVar2,uVar1);
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  return;
}



// FUNCTION 145eda080 FUN_145eda080 body=197 status=ok
// SIG undefined FUN_145eda080(void)

undefined8 * FUN_145eda080(undefined8 *param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  FUN_145a3d616();
  *param_1 = &PTR_FUN_14aaa71e0;
  param_1[5] = &PTR_FUN_14aaa75f0;
  param_1[0x2d] = &PTR_LAB_14aaa7630;
  param_1[0x2e] = &PTR_FUN_14aaa7640;
  param_1[0x7f] = 0;
  *(byte *)((longlong)param_1 + 0x34c) = *(byte *)((longlong)param_1 + 0x34c) | 4;
  fVar1 = *(float *)((longlong)param_1 + 0x3f4);
  *(uint *)(param_1 + 0x20) =
       ~-(uint)(0.0 < fVar1) & 0x461c4000 | -(uint)(0.0 < fVar1) & (uint)fVar1;
  *(byte *)((longlong)param_1 + 0x183) = *(byte *)((longlong)param_1 + 0x183) & 0xfe | fVar1 == 0.0;
  uVar2 = 1;
  if (*(char *)(param_1 + 0x7e) != '\0') {
    if (*(char *)(param_1 + 0x7e) != '\x01') {
      return param_1;
    }
    uVar2 = 2;
  }
  *(undefined4 *)((longlong)param_1 + 0x36c) = uVar2;
  return param_1;
}



// FUNCTION 145eda146 FUN_145eda146 body=40 status=ok
// SIG undefined FUN_145eda146(void)

undefined8 FUN_145eda146(undefined8 param_1,int param_2)

{
  FUN_145eda16e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145eda16e FUN_145eda16e body=168 status=ok
// SIG undefined FUN_145eda16e(void)

void FUN_145eda16e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac067c0;
  param_1[5] = &PTR_FUN_14ac071d0;
  param_1[6] = &PTR_LAB_14ac07210;
  param_1[0x55] = &PTR_FUN_14ac07260;
  param_1[0x56] = &PTR_FUN_14ac072e0;
  param_1[0x57] = &PTR_FUN_14ac072f0;
  FUN_1405d1525(param_1[0xd3],*(undefined4 *)(param_1 + 0xd4));
  if (param_1[0xd3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xce] != 0) {
    FUN_1400020a8();
  }
  FUN_14585ef5e(param_1);
  return;
}



// FUNCTION 145eda216 FUN_145eda216 body=40 status=ok
// SIG undefined FUN_145eda216(void)

undefined8 FUN_145eda216(undefined8 param_1,int param_2)

{
  FUN_145eda23e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145eda23e FUN_145eda23e body=168 status=ok
// SIG undefined FUN_145eda23e(void)

void FUN_145eda23e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b588af0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
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
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145eda2e6 FUN_145eda2e6 body=179 status=ok
// SIG undefined FUN_145eda2e6(void)

bool FUN_145eda2e6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eda3b6 FUN_145eda3b6 body=88 status=ok
// SIG undefined FUN_145eda3b6(void)

void FUN_145eda3b6(longlong *param_1)

{
  float fVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    fVar1 = (float)(**(code **)(*param_1 + 0x2d8))();
    if (0.0 < fVar1) {
      FUN_145c7b52e(param_1,0);
      *(undefined1 *)((longlong)param_1 + 0xd6) = 1;
      FUN_141358340(param_1,fVar1);
      *(undefined1 *)((longlong)param_1 + 0xd6) = 0;
    }
  }
  return;
}



// FUNCTION 145eda40e FUN_145eda40e body=206 status=ok
// SIG undefined FUN_145eda40e(void)

void FUN_145eda40e(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = (**(code **)(*param_1 + 0x2b8))();
  fVar4 = 0.0;
  if (cVar1 != '\0') {
    if (param_1[0x1f] != 0) {
      uVar2 = FUN_1401b4c98(param_1[6]);
      local_20 = param_1[0x1f];
      FUN_144a61814(uVar2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
    if (0.0 < (double)param_1[0x28]) {
      lVar3 = (**(code **)(*param_1 + 0x180))(0);
      fVar4 = *(float *)(param_1 + 0x29) -
              (float)(*(double *)(lVar3 + 0x6d0) - (double)param_1[0x28]);
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar4);
}



// FUNCTION 145eda4f4 FUN_145eda4f4 body=203 status=ok
// SIG undefined FUN_145eda4f4(void)

void FUN_145eda4f4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1412c18ae(puVar1);
  *puVar1 = &PTR_FUN_14bd70f00;
  puVar1[5] = &PTR_LAB_14bd712a0;
  puVar1[0x13] = &PTR_LAB_14bd712c0;
  puVar1[0x17] = &PTR_LAB_14bd712f0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0x7fefffffffffffff;
  puVar1[0x1c] = 0x7fefffffffffffff;
  puVar1[0x1d] = 0x7fefffffffffffff;
  puVar1[0x1e] = 0xffefffffffffffff;
  puVar1[0x1f] = 0xffefffffffffffff;
  puVar1[0x20] = 0xffefffffffffffff;
  puVar1[0x21] = 0x7fefffffffffffff;
  puVar1[0x22] = 0x7fefffffffffffff;
  puVar1[0x23] = 0x7fefffffffffffff;
  puVar1[0x24] = 0xffefffffffffffff;
  puVar1[0x25] = 0xffefffffffffffff;
  puVar1[0x26] = 0xffefffffffffffff;
  *(undefined1 *)(puVar1 + 0x2a) = 0;
  return;
}



// FUNCTION 145eda5c0 FUN_145eda5c0 body=146 status=ok
// SIG undefined FUN_145eda5c0(void)

code * FUN_145eda5c0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145eda652();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FogParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FPathTracingFogParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x240000004b1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca21b40;
  return FUN_14727b5ce;
}



// FUNCTION 145eda652 FUN_145eda652 body=261 status=ok
// SIG undefined FUN_145eda652(void)

void FUN_145eda652(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca21bc0) {
    FUN_144b3d300(&DAT_14ca21bc0);
    if (DAT_14ca21bc0 == -1) {
      FUN_145eda758(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FPathTracingFogParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x3f5;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca21b40,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e95c6d);
      _Init_thread_footer(&DAT_14ca21bc0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eda758 FUN_145eda758 body=226 status=ok
// SIG undefined FUN_145eda758(void)

longlong * FUN_145eda758(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f5fb8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eda83c FUN_145eda83c body=132 status=ok
// SIG undefined FUN_145eda83c(void)

undefined1 * FUN_145eda83c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FogDensity";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3f6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14727b90a;
}



// FUNCTION 145eda8c0 FUN_145eda8c0 body=136 status=ok
// SIG undefined FUN_145eda8c0(void)

code * FUN_145eda8c0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FogPhaseG";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000003fa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14727b7f6;
}



// FUNCTION 145eda948 FUN_145eda948 body=138 status=ok
// SIG undefined FUN_145eda948(void)

code * FUN_145eda948(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FogHeight";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000003f7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145eda83c;
}



// FUNCTION 145eda9d2 FUN_145eda9d2 body=63 status=ok
// SIG undefined FUN_145eda9d2(void)

void FUN_145eda9d2(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_141586c1c(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1408e78c4(param_1);
    return;
  }
  FUN_145edaa12(param_1);
  FUN_141586c1c(param_1);
  return;
}



// FUNCTION 145edaa12 FUN_145edaa12 body=325 status=ok
// SIG undefined FUN_145edaa12(void)

void FUN_145edaa12(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 145edab58 FUN_145edab58 body=440 status=ok
// SIG undefined FUN_145edab58(void)

undefined8 * FUN_145edab58(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_238 [39];
  undefined1 local_211;
  undefined1 local_210 [8];
  longlong *local_208;
  undefined2 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined1 local_1d0 [112];
  undefined2 local_160;
  undefined1 local_158 [304];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98d9a8) {
    FUN_144b3d300(&DAT_14c98d9a8);
    if (DAT_14c98d9a8 == -1) {
      FUN_145edad7e(local_1d0);
      local_1f8 = CONCAT11(1,DAT_14c96b23b);
      local_1f0 = 0;
      uStack_1e8 = 0;
      local_160 = local_1f8;
      FUN_144a450dc(local_158,&local_1f0);
      FUN_1449db362(&local_1f0);
      FUN_145edadf0(local_210,&local_211);
      FUN_145edad12(local_210,&local_1e0,local_1d0);
      DAT_14c98d998 = local_1e0;
      DAT_14c98d9a0 = local_1d8;
      if (local_1d8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1d8 + 1) = (int)local_1d8[1] + 1;
        UNLOCK();
        if (local_1d8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_1d8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_1d8)(local_1d8);
            LOCK();
            piVar2 = (int *)((longlong)local_1d8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_1d8 + 0x10))(local_1d8);
            }
          }
        }
      }
      if (local_208 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_208 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_208)(local_208);
          LOCK();
          piVar2 = (int *)((longlong)local_208 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_208 + 0x10))(local_208);
          }
        }
      }
      FUN_140a4ff8c(local_1d0);
      atexit(FUN_142879b84);
      _Init_thread_footer(&DAT_14c98d9a8);
    }
  }
  *param_1 = DAT_14c98d998;
  plVar1 = DAT_14c98d9a0;
  param_1[1] = DAT_14c98d9a0;
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar1 + 1;
    *(int *)plVar1 = (int)*plVar1 + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145edad12 FUN_145edad12 body=103 status=ok
// SIG undefined FUN_145edad12(void)

longlong * FUN_145edad12(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 145edad7e FUN_145edad7e body=113 status=ok
// SIG undefined FUN_145edad7e(void)

longlong FUN_145edad7e(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  local_30 = CONCAT11(1,DAT_14c96b23c);
  local_28 = 0;
  uStack_20 = 0;
  *(undefined2 *)(param_1 + 0x70) = local_30;
  FUN_144a450dc(param_1 + 0x78,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145edadf0 FUN_145edadf0 body=314 status=ok
// SIG undefined FUN_145edadf0(void)

longlong * FUN_145edadf0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_145edaf2b();
  plVar4 = plVar3 + 2;
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_145edaf9c(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_145edae55;
    param_1[1] = 0;
LAB_145edaec4:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_145edae55;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_145edae55;
      goto LAB_145edaec4;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_145edae55;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_145edae55:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x1e0;
  FUN_140a52e78(*param_1,"SNullWidgetContent",".\\Runtime/SlateCore/Private/Widgets/SNullWidget.cpp"
                ,0x4b);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145edaf2b FUN_145edaf2b body=112 status=ok
// SIG undefined FUN_145edaf2b(void)

undefined8 * FUN_145edaf2b(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x1f0,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_149ef00b0;
  FUN_140a560dc(puVar1 + 2);
  puVar1[2] = &PTR_FUN_149ef00d0;
  *(byte *)(puVar1 + 9) = *(byte *)(puVar1 + 9) & 0xfb;
  FUN_144a88240(puVar1 + 5,puVar1 + 2);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc;
  return puVar1;
}



// FUNCTION 145edaf9c FUN_145edaf9c body=162 status=ok
// SIG undefined FUN_145edaf9c(void)

void FUN_145edaf9c(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145edafdb;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145edafdb;
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
LAB_145edafdb:
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
                    /* WARNING: Could not recover jumptable at 0x000145edb03a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145edb03e FUN_145edb03e body=292 status=ok
// SIG undefined FUN_145edb03e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145edb03e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ee618) {
    FUN_144b3d300(&DAT_14c9ee618);
    if (DAT_14c9ee618 == -1) {
      FUN_145edb2ac();
      FUN_145edb162();
      FUN_140db5666(&DAT_14c9ee570,0,&DAT_14c9ee508,L"FMarkRadianceProbesUsedByVisualizeCS",
                    L"/Engine/Private/Lumen/LumenRadianceCache.usf",
                    L"MarkRadianceProbesUsedByVisualizeCS",5,1,FUN_1471df1fc,FUN_1471df19c,
                    &LAB_1462d72fa,&LAB_1471df198,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f09a0)
      ;
      _DAT_14c9ee570 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d25e83);
      _Init_thread_footer(&DAT_14c9ee618);
    }
  }
  return &DAT_14c9ee570;
}



// FUNCTION 145edb162 FUN_145edb162 body=205 status=ok
// SIG undefined FUN_145edb162(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145edb162(void)

{
  if ((DAT_14c9ee56f & 2) == 0) {
    DAT_14c9ee56f = DAT_14c9ee56f | 2;
    _DAT_14c9ee510 = L"FMarkRadianceProbesUsedByVisualizeCS";
    _DAT_14c9ee528 = FUN_146826540;
    _DAT_14c9ee530 = FUN_146825d77;
    _DAT_14c9ee538 = FUN_146825fd6;
    _DAT_14c9ee540 = FUN_1407e02ea;
    _DAT_14c9ee548 = FUN_146826273;
    _DAT_14c9ee520 = FUN_1471df16a;
    _DAT_14c9ee560 = 0xffffffff000000e0;
    _DAT_14c9ee568 = 8;
    DAT_14c9ee56c = 0;
    _DAT_14c9ee550 = &LAB_1471df194;
    FUN_145edb230();
    FUN_1407e00cc(&DAT_14c9ee508);
    return;
  }
  return;
}



// FUNCTION 145edb230 FUN_145edb230 body=123 status=ok
// SIG undefined FUN_145edb230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145edb230(void)

{
  _DAT_14c9f1b20 = L"BASE";
  DAT_14c9f1b4a = 4;
  _DAT_14c9f1b28 = FUN_140b35ae4();
  _DAT_14c9f1b30 = DAT_14c9ee518;
  _DAT_14c9f1b38 = &LAB_14682652b;
  DAT_14c9ee518 = &DAT_14c9f1b20;
  DAT_14c9ee56d = DAT_14c9ee56d + '\x01';
  _DAT_14c9f1b40 = 0x100000000;
  if (*(char *)(_DAT_14c9f1b28 + 100) != '\0') {
    DAT_14c9ee56e = DAT_14c9ee56e + '\x01';
  }
  return;
}



// FUNCTION 145edb2ac FUN_145edb2ac body=261 status=ok
// SIG undefined FUN_145edb2ac(void)

void FUN_145edb2ac(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f0a20) {
    FUN_144b3d300(&DAT_14c9f0a20);
    if (DAT_14c9f0a20 == -1) {
      FUN_145edb3b2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x90;
      local_58 = 0xcf;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f09a0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d262e3);
      _Init_thread_footer(&DAT_14c9f0a20);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145edb3b2 FUN_145edb3b2 body=226 status=ok
// SIG undefined FUN_145edb3b2(void)

longlong * FUN_145edb3b2(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d8f1c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145edb49a FUN_145edb49a body=138 status=ok
// SIG undefined FUN_145edb49a(void)

undefined1 * FUN_145edb49a(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xd0;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145edb496;
}



// FUNCTION 145edb524 FUN_145edb524 body=292 status=ok
// SIG undefined FUN_145edb524(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145edb524(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fadb0) {
    FUN_144b3d300(&DAT_14c9fadb0);
    if (DAT_14c9fadb0 == -1) {
      FUN_145edb792();
      FUN_145edb648();
      FUN_140db5666(&DAT_14c9fad08,0,&DAT_14c9faca0,L"FClearLumenCardsPS",
                    L"/Engine/Private/Lumen/LumenSceneLighting.usf",L"ClearLumenCardsPS",3,2,
                    FUN_147207978,FUN_147207918,&LAB_1462e170c,&LAB_147207914,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9fea20);
      _DAT_14c9fad08 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d7ba99);
      _Init_thread_footer(&DAT_14c9fadb0);
    }
  }
  return &DAT_14c9fad08;
}



// FUNCTION 145edb648 FUN_145edb648 body=205 status=ok
// SIG undefined FUN_145edb648(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145edb648(void)

{
  if ((DAT_14c9fad07 & 2) == 0) {
    DAT_14c9fad07 = DAT_14c9fad07 | 2;
    _DAT_14c9faca8 = L"FClearLumenCardsPS";
    _DAT_14c9facc0 = FUN_146826540;
    _DAT_14c9facc8 = FUN_146825d77;
    _DAT_14c9facd0 = FUN_146825fd6;
    _DAT_14c9facd8 = FUN_1407e02ea;
    _DAT_14c9face0 = FUN_146826273;
    _DAT_14c9facb8 = FUN_1472078e6;
    _DAT_14c9facf8 = 0xffffffff000000e0;
    _DAT_14c9fad00 = 8;
    DAT_14c9fad04 = 0;
    _DAT_14c9face8 = &LAB_147207910;
    FUN_145edb716();
    FUN_1407e00cc(&DAT_14c9faca0);
    return;
  }
  return;
}



// FUNCTION 145edb716 FUN_145edb716 body=123 status=ok
// SIG undefined FUN_145edb716(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145edb716(void)

{
  _DAT_14ca000b8 = L"BASE";
  DAT_14ca000e2 = 4;
  _DAT_14ca000c0 = FUN_140b35ae4();
  _DAT_14ca000c8 = DAT_14c9facb0;
  _DAT_14ca000d0 = &LAB_14682652b;
  DAT_14c9facb0 = &DAT_14ca000b8;
  DAT_14c9fad05 = DAT_14c9fad05 + '\x01';
  _DAT_14ca000d8 = 0x100000000;
  if (*(char *)(_DAT_14ca000c0 + 100) != '\0') {
    DAT_14c9fad06 = DAT_14c9fad06 + '\x01';
  }
  return;
}



// FUNCTION 145edb792 FUN_145edb792 body=261 status=ok
// SIG undefined FUN_145edb792(void)

void FUN_145edb792(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9feaa0) {
    FUN_144b3d300(&DAT_14c9feaa0);
    if (DAT_14c9feaa0 == -1) {
      FUN_145edb898(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x67;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fea20,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c50b);
      _Init_thread_footer(&DAT_14c9feaa0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145edb898 FUN_145edb898 body=226 status=ok
// SIG undefined FUN_145edb898(void)

longlong * FUN_145edb898(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e4352;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145edb980 FUN_145edb980 body=138 status=ok
// SIG undefined FUN_145edb980(void)

undefined1 * FUN_145edb980(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x68;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145edb97c;
}



// FUNCTION 145edba0a FUN_145edba0a body=292 status=ok
// SIG undefined FUN_145edba0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145edba0a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca03770) {
    FUN_144b3d300(&DAT_14ca03770);
    if (DAT_14ca03770 == -1) {
      FUN_145edbc78();
      FUN_145edbb2e();
      FUN_140db5666(&DAT_14ca036c8,0,&DAT_14ca03660,L"FVisualizeTracesVS",
                    L"/Engine/Private/Lumen/LumenVisualize.usf",L"VisualizeTracesVS",0,1,
                    FUN_147222bc8,FUN_147222b68,&LAB_1462e7424,&LAB_147222b64,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca069a0);
      _DAT_14ca036c8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dc2691);
      _Init_thread_footer(&DAT_14ca03770);
    }
  }
  return &DAT_14ca036c8;
}



// FUNCTION 145edbb2e FUN_145edbb2e body=205 status=ok
// SIG undefined FUN_145edbb2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145edbb2e(void)

{
  if ((DAT_14ca036c7 & 2) == 0) {
    DAT_14ca036c7 = DAT_14ca036c7 | 2;
    _DAT_14ca03668 = L"FVisualizeTracesVS";
    _DAT_14ca03680 = FUN_146826540;
    _DAT_14ca03688 = FUN_146825d77;
    _DAT_14ca03690 = FUN_146825fd6;
    _DAT_14ca03698 = FUN_1407e02ea;
    _DAT_14ca036a0 = FUN_146826273;
    _DAT_14ca03678 = FUN_147222b36;
    _DAT_14ca036b8 = 0xffffffff000000e0;
    _DAT_14ca036c0 = 8;
    DAT_14ca036c4 = 0;
    _DAT_14ca036a8 = &LAB_147222b60;
    FUN_145edbbfc();
    FUN_1407e00cc(&DAT_14ca03660);
    return;
  }
  return;
}



// FUNCTION 145edbbfc FUN_145edbbfc body=123 status=ok
// SIG undefined FUN_145edbbfc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145edbbfc(void)

{
  _DAT_14ca07e50 = L"BASE";
  DAT_14ca07e7a = 4;
  _DAT_14ca07e58 = FUN_140b35ae4();
  _DAT_14ca07e60 = DAT_14ca03670;
  _DAT_14ca07e68 = &LAB_14682652b;
  DAT_14ca03670 = &DAT_14ca07e50;
  DAT_14ca036c5 = DAT_14ca036c5 + '\x01';
  _DAT_14ca07e70 = 0x100000000;
  if (*(char *)(_DAT_14ca07e58 + 100) != '\0') {
    DAT_14ca036c6 = DAT_14ca036c6 + '\x01';
  }
  return;
}



// FUNCTION 145edbc78 FUN_145edbc78 body=261 status=ok
// SIG undefined FUN_145edbc78(void)

void FUN_145edbc78(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca06a20) {
    FUN_144b3d300(&DAT_14ca06a20);
    if (DAT_14ca06a20 == -1) {
      FUN_145edbd7e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x1b0;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca069a0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd3a97);
      _Init_thread_footer(&DAT_14ca06a20);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145edbd7e FUN_145edbd7e body=226 status=ok
// SIG undefined FUN_145edbd7e(void)

longlong * FUN_145edbd7e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462ea4ba;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145edbe66 FUN_145edbe66 body=138 status=ok
// SIG undefined FUN_145edbe66(void)

undefined1 * FUN_145edbe66(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1b1;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145edbe62;
}



// FUNCTION 145edbef0 FUN_145edbef0 body=292 status=ok
// SIG undefined FUN_145edbef0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145edbef0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca04580) {
    FUN_144b3d300(&DAT_14ca04580);
    if (DAT_14ca04580 == -1) {
      FUN_145edc15e();
      FUN_145edc014();
      FUN_140db5666(&DAT_14ca044d8,0,&DAT_14ca04470,L"FVisualizeRadianceCacheVS",
                    L"/Engine/Private/Lumen/LumenVisualizeRadianceCache.usf",
                    L"VisualizeRadianceCacheVS",0,1,FUN_14722727e,FUN_14722721e,&LAB_1462e747e,
                    &LAB_14722721a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca06ef0);
      _DAT_14ca044d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dc8f55);
      _Init_thread_footer(&DAT_14ca04580);
    }
  }
  return &DAT_14ca044d8;
}



// FUNCTION 145edc014 FUN_145edc014 body=205 status=ok
// SIG undefined FUN_145edc014(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145edc014(void)

{
  if ((DAT_14ca044d7 & 2) == 0) {
    DAT_14ca044d7 = DAT_14ca044d7 | 2;
    _DAT_14ca04478 = L"FVisualizeRadianceCacheVS";
    _DAT_14ca04490 = FUN_146826540;
    _DAT_14ca04498 = FUN_146825d77;
    _DAT_14ca044a0 = FUN_146825fd6;
    _DAT_14ca044a8 = FUN_1407e02ea;
    _DAT_14ca044b0 = FUN_146826273;
    _DAT_14ca04488 = FUN_1472271ec;
    _DAT_14ca044c8 = 0xffffffff000000e0;
    _DAT_14ca044d0 = 8;
    DAT_14ca044d4 = 0;
    _DAT_14ca044b8 = &LAB_147227216;
    FUN_145edc0e2();
    FUN_1407e00cc(&DAT_14ca04470);
    return;
  }
  return;
}



// FUNCTION 145edc0e2 FUN_145edc0e2 body=123 status=ok
// SIG undefined FUN_145edc0e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145edc0e2(void)

{
  _DAT_14ca080e8 = L"BASE";
  DAT_14ca08112 = 4;
  _DAT_14ca080f0 = FUN_140b35ae4();
  _DAT_14ca080f8 = DAT_14ca04480;
  _DAT_14ca08100 = &LAB_14682652b;
  DAT_14ca04480 = &DAT_14ca080e8;
  DAT_14ca044d5 = DAT_14ca044d5 + '\x01';
  _DAT_14ca08108 = 0x100000000;
  if (*(char *)(_DAT_14ca080f0 + 100) != '\0') {
    DAT_14ca044d6 = DAT_14ca044d6 + '\x01';
  }
  return;
}



// FUNCTION 145edc15e FUN_145edc15e body=261 status=ok
// SIG undefined FUN_145edc15e(void)

void FUN_145edc15e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca06f70) {
    FUN_144b3d300(&DAT_14ca06f70);
    if (DAT_14ca06f70 == -1) {
      FUN_145edc264(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1a0;
      local_58 = 0x42;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca06ef0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd40e7);
      _Init_thread_footer(&DAT_14ca06f70);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145edc264 FUN_145edc264 body=226 status=ok
// SIG undefined FUN_145edc264(void)

longlong * FUN_145edc264(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_145d3ca24;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145edc34c FUN_145edc34c body=138 status=ok
// SIG undefined FUN_145edc34c(void)

undefined1 * FUN_145edc34c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x43;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145edc348;
}



// FUNCTION 145edc3d6 FUN_145edc3d6 body=292 status=ok
// SIG undefined FUN_145edc3d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145edc3d6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca046a8) {
    FUN_144b3d300(&DAT_14ca046a8);
    if (DAT_14ca046a8 == -1) {
      FUN_145edc644();
      FUN_145edc4fa();
      FUN_140db5666(&DAT_14ca04600,0,&DAT_14ca04598,L"FVisualizeRadianceCachePS",
                    L"/Engine/Private/Lumen/LumenVisualizeRadianceCache.usf",
                    L"VisualizeRadianceCachePS",3,2,FUN_147227344,FUN_1472272e4,&LAB_1462e7488,
                    &LAB_1472272e0,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca07000);
      _DAT_14ca04600 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dc8f61);
      _Init_thread_footer(&DAT_14ca046a8);
    }
  }
  return &DAT_14ca04600;
}



// FUNCTION 145edc4fa FUN_145edc4fa body=205 status=ok
// SIG undefined FUN_145edc4fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145edc4fa(void)

{
  if ((DAT_14ca045ff & 2) == 0) {
    DAT_14ca045ff = DAT_14ca045ff | 2;
    _DAT_14ca045a0 = L"FVisualizeRadianceCachePS";
    _DAT_14ca045b8 = FUN_146826540;
    _DAT_14ca045c0 = FUN_146825d77;
    _DAT_14ca045c8 = FUN_146825fd6;
    _DAT_14ca045d0 = FUN_1407e02ea;
    _DAT_14ca045d8 = FUN_146826273;
    _DAT_14ca045b0 = FUN_1472272b2;
    _DAT_14ca045f0 = 0xffffffff000000e0;
    _DAT_14ca045f8 = 8;
    DAT_14ca045fc = 0;
    _DAT_14ca045e0 = &LAB_1472272dc;
    FUN_145edc5c8();
    FUN_1407e00cc(&DAT_14ca04598);
    return;
  }
  return;
}



// FUNCTION 145edc5c8 FUN_145edc5c8 body=123 status=ok
// SIG undefined FUN_145edc5c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145edc5c8(void)

{
  _DAT_14ca08118 = L"BASE";
  DAT_14ca08142 = 4;
  _DAT_14ca08120 = FUN_140b35ae4();
  _DAT_14ca08128 = DAT_14ca045a8;
  _DAT_14ca08130 = &LAB_14682652b;
  DAT_14ca045a8 = &DAT_14ca08118;
  DAT_14ca045fd = DAT_14ca045fd + '\x01';
  _DAT_14ca08138 = 0x100000000;
  if (*(char *)(_DAT_14ca08120 + 100) != '\0') {
    DAT_14ca045fe = DAT_14ca045fe + '\x01';
  }
  return;
}



// FUNCTION 145edc644 FUN_145edc644 body=261 status=ok
// SIG undefined FUN_145edc644(void)

void FUN_145edc644(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca07080) {
    FUN_144b3d300(&DAT_14ca07080);
    if (DAT_14ca07080 == -1) {
      FUN_145edc74a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1a0;
      local_58 = 0x55;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca07000,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd40ff);
      _Init_thread_footer(&DAT_14ca07080);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145edc74a FUN_145edc74a body=226 status=ok
// SIG undefined FUN_145edc74a(void)

longlong * FUN_145edc74a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462eaefc;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145edc832 FUN_145edc832 body=138 status=ok
// SIG undefined FUN_145edc832(void)

undefined1 * FUN_145edc832(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x56;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145edc82e;
}



// FUNCTION 145edc8bc FUN_145edc8bc body=292 status=ok
// SIG undefined FUN_145edc8bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145edc8bc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca04ec0) {
    FUN_144b3d300(&DAT_14ca04ec0);
    if (DAT_14ca04ec0 == -1) {
      FUN_145edcb2a();
      FUN_145edc9e0();
      FUN_140db5666(&DAT_14ca04e18,0,&DAT_14ca04db0,L"FVolumeGenerateLightSamplesCS",
                    L"/Engine/Private/MegaLights/MegaLightsVolumeSampling.usf",
                    L"VolumeGenerateLightSamplesCS",5,0x10,FUN_147227728,FUN_1472276c8,
                    &LAB_142dc9a84,&LAB_142dc9a68,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca07220)
      ;
      _DAT_14ca04e18 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dc9aa5);
      _Init_thread_footer(&DAT_14ca04ec0);
    }
  }
  return &DAT_14ca04e18;
}



// FUNCTION 145edc9e0 FUN_145edc9e0 body=205 status=ok
// SIG undefined FUN_145edc9e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145edc9e0(void)

{
  if ((DAT_14ca04e17 & 2) == 0) {
    DAT_14ca04e17 = DAT_14ca04e17 | 2;
    _DAT_14ca04db8 = L"FVolumeGenerateLightSamplesCS";
    _DAT_14ca04dd0 = FUN_146826540;
    _DAT_14ca04dd8 = FUN_146825d77;
    _DAT_14ca04de0 = FUN_146825fd6;
    _DAT_14ca04de8 = FUN_1407e02ea;
    _DAT_14ca04df0 = FUN_146826273;
    _DAT_14ca04dc8 = FUN_14722769a;
    _DAT_14ca04e08 = 0xffffffff000000e0;
    _DAT_14ca04e10 = 8;
    DAT_14ca04e14 = 0;
    _DAT_14ca04df8 = &LAB_1472276c4;
    FUN_145edcaae();
    FUN_1407e00cc(&DAT_14ca04db0);
    return;
  }
  return;
}



// FUNCTION 145edcaae FUN_145edcaae body=123 status=ok
// SIG undefined FUN_145edcaae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145edcaae(void)

{
  _DAT_14ca08260 = L"BASE";
  DAT_14ca0828a = 4;
  _DAT_14ca08268 = FUN_140b35ae4();
  _DAT_14ca08270 = DAT_14ca04dc0;
  _DAT_14ca08278 = &LAB_14682652b;
  DAT_14ca04dc0 = &DAT_14ca08260;
  DAT_14ca04e15 = DAT_14ca04e15 + '\x01';
  _DAT_14ca08280 = 0x100000000;
  if (*(char *)(_DAT_14ca08268 + 100) != '\0') {
    DAT_14ca04e16 = DAT_14ca04e16 + '\x01';
  }
  return;
}



// FUNCTION 145edcb2a FUN_145edcb2a body=261 status=ok
// SIG undefined FUN_145edcb2a(void)

void FUN_145edcb2a(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca072a0) {
    FUN_144b3d300(&DAT_14ca072a0);
    if (DAT_14ca072a0 == -1) {
      FUN_145edcc30(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x2d0;
      local_58 = 0x2a5;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca07220,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd4147);
      _Init_thread_footer(&DAT_14ca072a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145edcc30 FUN_145edcc30 body=226 status=ok
// SIG undefined FUN_145edcc30(void)

longlong * FUN_145edcc30(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462eb964;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145edcd18 FUN_145edcd18 body=138 status=ok
// SIG undefined FUN_145edcd18(void)

undefined1 * FUN_145edcd18(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2a6;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145edcd14;
}



// FUNCTION 145edcda2 FUN_145edcda2 body=292 status=ok
// SIG undefined FUN_145edcda2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145edcda2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0dd50) {
    FUN_144b3d300(&DAT_14ca0dd50);
    if (DAT_14ca0dd50 == -1) {
      FUN_145edd010();
      FUN_145edcec6();
      FUN_140db5666(&DAT_14ca0dca8,0,&DAT_14ca0dc40,L"FMobileReflectionEnvironmentSkyLightingPS",
                    L"/Engine/Private/MobileDeferredShading.usf",
                    L"MobileReflectionEnvironmentSkyLightingPS",3,0x30,FUN_147242478,FUN_147242418,
                    FUN_142de9eae,&LAB_147242414,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca0e978);
      _DAT_14ca0dca8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142de9f29);
      _Init_thread_footer(&DAT_14ca0dd50);
    }
  }
  return &DAT_14ca0dca8;
}



// FUNCTION 145edcec6 FUN_145edcec6 body=205 status=ok
// SIG undefined FUN_145edcec6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145edcec6(void)

{
  if ((DAT_14ca0dca7 & 2) == 0) {
    DAT_14ca0dca7 = DAT_14ca0dca7 | 2;
    _DAT_14ca0dc48 = L"FMobileReflectionEnvironmentSkyLightingPS";
    _DAT_14ca0dc60 = FUN_146826540;
    _DAT_14ca0dc68 = FUN_146825d77;
    _DAT_14ca0dc70 = FUN_146825fd6;
    _DAT_14ca0dc78 = FUN_1407e02ea;
    _DAT_14ca0dc80 = FUN_146826273;
    _DAT_14ca0dc58 = FUN_1472423e6;
    _DAT_14ca0dc98 = 0xffffffff000000e0;
    _DAT_14ca0dca0 = 8;
    DAT_14ca0dca4 = 0;
    _DAT_14ca0dc88 = &LAB_147242410;
    FUN_145edcf94();
    FUN_1407e00cc(&DAT_14ca0dc40);
    return;
  }
  return;
}



// FUNCTION 145edcf94 FUN_145edcf94 body=123 status=ok
// SIG undefined FUN_145edcf94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145edcf94(void)

{
  _DAT_14ca111b0 = L"BASE";
  DAT_14ca111da = 4;
  _DAT_14ca111b8 = FUN_140b35ae4();
  _DAT_14ca111c0 = DAT_14ca0dc50;
  _DAT_14ca111c8 = &LAB_14682652b;
  DAT_14ca0dc50 = &DAT_14ca111b0;
  DAT_14ca0dca5 = DAT_14ca0dca5 + '\x01';
  _DAT_14ca111d0 = 0x100000000;
  if (*(char *)(_DAT_14ca111b8 + 100) != '\0') {
    DAT_14ca0dca6 = DAT_14ca0dca6 + '\x01';
  }
  return;
}



// FUNCTION 145edd010 FUN_145edd010 body=261 status=ok
// SIG undefined FUN_145edd010(void)

void FUN_145edd010(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0e9f8) {
    FUN_144b3d300(&DAT_14ca0e9f8);
    if (DAT_14ca0e9f8 == -1) {
      FUN_145edd116(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x123;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca0e978,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142def811);
      _Init_thread_footer(&DAT_14ca0e9f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145edd116 FUN_145edd116 body=226 status=ok
// SIG undefined FUN_145edd116(void)

longlong * FUN_145edd116(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462ee3c0;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145edd1fe FUN_145edd1fe body=138 status=ok
// SIG undefined FUN_145edd1fe(void)

undefined1 * FUN_145edd1fe(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x124;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145edd1fa;
}



// FUNCTION 145edd288 FUN_145edd288 body=292 status=ok
// SIG undefined FUN_145edd288(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145edd288(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca12410) {
    FUN_144b3d300(&DAT_14ca12410);
    if (DAT_14ca12410 == -1) {
      FUN_145edd4f6();
      FUN_145edd3ac();
      FUN_140db5666(&DAT_14ca12368,0,&DAT_14ca12300,L"FMobileFogVS",L"/Engine/Private/MobileFog.usf"
                    ,L"MobileFogVS",0,1,FUN_14724d9fe,FUN_14724d99e,&LAB_14724d986,&LAB_14724d982,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca16c70);
      _DAT_14ca12368 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142df5f68);
      _Init_thread_footer(&DAT_14ca12410);
    }
  }
  return &DAT_14ca12368;
}



// FUNCTION 145edd3ac FUN_145edd3ac body=205 status=ok
// SIG undefined FUN_145edd3ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145edd3ac(void)

{
  if ((DAT_14ca12367 & 2) == 0) {
    DAT_14ca12367 = DAT_14ca12367 | 2;
    _DAT_14ca12308 = L"FMobileFogVS";
    _DAT_14ca12320 = FUN_146826540;
    _DAT_14ca12328 = FUN_146825d77;
    _DAT_14ca12330 = FUN_146825fd6;
    _DAT_14ca12338 = FUN_1407e02ea;
    _DAT_14ca12340 = FUN_146826273;
    _DAT_14ca12318 = FUN_14724d952;
    _DAT_14ca12358 = 0xffffffff000000e0;
    _DAT_14ca12360 = 8;
    DAT_14ca12364 = 0;
    _DAT_14ca12348 = &LAB_14724d97e;
    FUN_145edd47a();
    FUN_1407e00cc(&DAT_14ca12300);
    return;
  }
  return;
}



// FUNCTION 145edd47a FUN_145edd47a body=123 status=ok
// SIG undefined FUN_145edd47a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145edd47a(void)

{
  _DAT_14ca187d0 = L"BASE";
  DAT_14ca187fa = 4;
  _DAT_14ca187d8 = FUN_140b35ae4();
  _DAT_14ca187e0 = DAT_14ca12310;
  _DAT_14ca187e8 = &LAB_14682652b;
  DAT_14ca12310 = &DAT_14ca187d0;
  DAT_14ca12365 = DAT_14ca12365 + '\x01';
  _DAT_14ca187f0 = 0x100000000;
  if (*(char *)(_DAT_14ca187d8 + 100) != '\0') {
    DAT_14ca12366 = DAT_14ca12366 + '\x01';
  }
  return;
}



// FUNCTION 145edd4f6 FUN_145edd4f6 body=261 status=ok
// SIG undefined FUN_145edd4f6(void)

void FUN_145edd4f6(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca16cf0) {
    FUN_144b3d300(&DAT_14ca16cf0);
    if (DAT_14ca16cf0 == -1) {
      FUN_145edd5fc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x31;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca16c70,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e26fe6);
      _Init_thread_footer(&DAT_14ca16cf0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145edd5fc FUN_145edd5fc body=226 status=ok
// SIG undefined FUN_145edd5fc(void)

longlong * FUN_145edd5fc(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462ef504;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145edd6e4 FUN_145edd6e4 body=138 status=ok
// SIG undefined FUN_145edd6e4(void)

undefined1 * FUN_145edd6e4(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x32;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145edd6e0;
}



// FUNCTION 145edd76e FUN_145edd76e body=292 status=ok
// SIG undefined FUN_145edd76e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145edd76e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca128c0) {
    FUN_144b3d300(&DAT_14ca128c0);
    if (DAT_14ca128c0 == -1) {
      FUN_145edd9dc();
      FUN_145edd892();
      FUN_140db5666(&DAT_14ca12818,0,&DAT_14ca127b0,L"FLocalLightBufferPS",
                    L"/Engine/Private/MobileLocalLightsBuffer.usf",L"Main",3,2,FUN_14724df2a,
                    FUN_14724deca,&LAB_1462eec1e,&LAB_14724dec6,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca16e90);
      _DAT_14ca12818 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142df6a47);
      _Init_thread_footer(&DAT_14ca128c0);
    }
  }
  return &DAT_14ca12818;
}



// FUNCTION 145edd892 FUN_145edd892 body=205 status=ok
// SIG undefined FUN_145edd892(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145edd892(void)

{
  if ((DAT_14ca12817 & 2) == 0) {
    DAT_14ca12817 = DAT_14ca12817 | 2;
    _DAT_14ca127b8 = L"FLocalLightBufferPS";
    _DAT_14ca127d0 = FUN_146826540;
    _DAT_14ca127d8 = FUN_146825d77;
    _DAT_14ca127e0 = FUN_146825fd6;
    _DAT_14ca127e8 = FUN_1407e02ea;
    _DAT_14ca127f0 = FUN_146826273;
    _DAT_14ca127c8 = FUN_14724de96;
    _DAT_14ca12808 = 0xffffffff000000e0;
    _DAT_14ca12810 = 8;
    DAT_14ca12814 = 0;
    _DAT_14ca127f8 = &LAB_14724dec2;
    FUN_145edd960();
    FUN_1407e00cc(&DAT_14ca127b0);
    return;
  }
  return;
}



// FUNCTION 145edd960 FUN_145edd960 body=123 status=ok
// SIG undefined FUN_145edd960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145edd960(void)

{
  _DAT_14ca18890 = L"BASE";
  DAT_14ca188ba = 4;
  _DAT_14ca18898 = FUN_140b35ae4();
  _DAT_14ca188a0 = DAT_14ca127c0;
  _DAT_14ca188a8 = &LAB_14682652b;
  DAT_14ca127c0 = &DAT_14ca18890;
  DAT_14ca12815 = DAT_14ca12815 + '\x01';
  _DAT_14ca188b0 = 0x100000000;
  if (*(char *)(_DAT_14ca18898 + 100) != '\0') {
    DAT_14ca12816 = DAT_14ca12816 + '\x01';
  }
  return;
}



// FUNCTION 145edd9dc FUN_145edd9dc body=261 status=ok
// SIG undefined FUN_145edd9dc(void)

void FUN_145edd9dc(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca16f10) {
    FUN_144b3d300(&DAT_14ca16f10);
    if (DAT_14ca16f10 == -1) {
      FUN_145eddae2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x4f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca16e90,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e27016);
      _Init_thread_footer(&DAT_14ca16f10);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eddae2 FUN_145eddae2 body=226 status=ok
// SIG undefined FUN_145eddae2(void)

longlong * FUN_145eddae2(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462ef7b2;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eddbca FUN_145eddbca body=138 status=ok
// SIG undefined FUN_145eddbca(void)

undefined1 * FUN_145eddbca(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x50;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145eddbc6;
}



// FUNCTION 145eddc54 FUN_145eddc54 body=292 status=ok
// SIG undefined FUN_145eddc54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eddc54(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2f4c8) {
    FUN_144b3d300(&DAT_14ca2f4c8);
    if (DAT_14ca2f4c8 == -1) {
      FUN_145eddec2();
      FUN_145eddd78();
      FUN_140db5666(&DAT_14ca2f420,0,&DAT_14ca2f3b8,
                    L"FPixelProjectedReflectionMobile_ReflectionPassVS",
                    L"/Engine/Private/PostProcessPixelProjectedReflectionMobile.usf",
                    L"ReflectionPassVS",0,1,FUN_147298c46,FUN_147298be6,&LAB_1462fb248,
                    &LAB_147298be2,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca33678);
      _DAT_14ca2f420 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f03ba6);
      _Init_thread_footer(&DAT_14ca2f4c8);
    }
  }
  return &DAT_14ca2f420;
}



// FUNCTION 145eddd78 FUN_145eddd78 body=205 status=ok
// SIG undefined FUN_145eddd78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eddd78(void)

{
  if ((DAT_14ca2f41f & 2) == 0) {
    DAT_14ca2f41f = DAT_14ca2f41f | 2;
    _DAT_14ca2f3c0 = L"FPixelProjectedReflectionMobile_ReflectionPassVS";
    _DAT_14ca2f3d8 = FUN_146826540;
    _DAT_14ca2f3e0 = FUN_146825d77;
    _DAT_14ca2f3e8 = FUN_146825fd6;
    _DAT_14ca2f3f0 = FUN_1407e02ea;
    _DAT_14ca2f3f8 = FUN_146826273;
    _DAT_14ca2f3d0 = FUN_147298bb2;
    _DAT_14ca2f410 = 0xffffffff000000e0;
    _DAT_14ca2f418 = 8;
    DAT_14ca2f41c = 0;
    _DAT_14ca2f400 = &LAB_147298bde;
    FUN_145edde46();
    FUN_1407e00cc(&DAT_14ca2f3b8);
    return;
  }
  return;
}



// FUNCTION 145edde46 FUN_145edde46 body=123 status=ok
// SIG undefined FUN_145edde46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145edde46(void)

{
  _DAT_14ca34ad0 = L"BASE";
  DAT_14ca34afa = 4;
  _DAT_14ca34ad8 = FUN_140b35ae4();
  _DAT_14ca34ae0 = DAT_14ca2f3c8;
  _DAT_14ca34ae8 = &LAB_14682652b;
  DAT_14ca2f3c8 = &DAT_14ca34ad0;
  DAT_14ca2f41d = DAT_14ca2f41d + '\x01';
  _DAT_14ca34af0 = 0x100000000;
  if (*(char *)(_DAT_14ca34ad8 + 100) != '\0') {
    DAT_14ca2f41e = DAT_14ca2f41e + '\x01';
  }
  return;
}



// FUNCTION 145eddec2 FUN_145eddec2 body=261 status=ok
// SIG undefined FUN_145eddec2(void)

void FUN_145eddec2(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca336f8) {
    FUN_144b3d300(&DAT_14ca336f8);
    if (DAT_14ca336f8 == -1) {
      FUN_145eddfc8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x68;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca33678,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f14039);
      _Init_thread_footer(&DAT_14ca336f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eddfc8 FUN_145eddfc8 body=226 status=ok
// SIG undefined FUN_145eddfc8(void)

longlong * FUN_145eddfc8(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462fd958;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ede0b0 FUN_145ede0b0 body=138 status=ok
// SIG undefined FUN_145ede0b0(void)

undefined1 * FUN_145ede0b0(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x69;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145ede0ac;
}



// FUNCTION 145ede13a FUN_145ede13a body=292 status=ok
// SIG undefined FUN_145ede13a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ede13a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca39660) {
    FUN_144b3d300(&DAT_14ca39660);
    if (DAT_14ca39660 == -1) {
      FUN_145ede3a8();
      FUN_145ede25e();
      FUN_140db5666(&DAT_14ca395b8,0,&DAT_14ca39550,L"FRayTracingDebugHitStatsCHS",
                    L"/Engine/Private/RayTracing/RayTracingDebugHitStatsCHS.usf",
                    L"closesthit=RayTracingDebugHitStatsCHS anyhit=RayTracingDebugHitStatsAHS",8,1,
                    FUN_1472b1e4c,FUN_1472b1e08,&LAB_146300dd4,&LAB_1472b1e04,&LAB_1472b1dfe,
                    &LAB_1472b1dde,0xe0,&DAT_14ca3e9f0);
      _DAT_14ca395b8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f65b94);
      _Init_thread_footer(&DAT_14ca39660);
    }
  }
  return &DAT_14ca395b8;
}



// FUNCTION 145ede25e FUN_145ede25e body=205 status=ok
// SIG undefined FUN_145ede25e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ede25e(void)

{
  if ((DAT_14ca395b7 & 2) == 0) {
    DAT_14ca395b7 = DAT_14ca395b7 | 2;
    _DAT_14ca39558 = L"FRayTracingDebugHitStatsCHS";
    _DAT_14ca39570 = FUN_146826540;
    _DAT_14ca39578 = FUN_146825d77;
    _DAT_14ca39580 = FUN_146825fd6;
    _DAT_14ca39588 = FUN_1407e02ea;
    _DAT_14ca39590 = FUN_146826273;
    _DAT_14ca39568 = FUN_1472b1db0;
    _DAT_14ca395a8 = 0xffffffff000000e0;
    _DAT_14ca395b0 = 8;
    DAT_14ca395b4 = 0;
    _DAT_14ca39598 = &LAB_1472b1dda;
    FUN_145ede32c();
    FUN_1407e00cc(&DAT_14ca39550);
    return;
  }
  return;
}



// FUNCTION 145ede32c FUN_145ede32c body=123 status=ok
// SIG undefined FUN_145ede32c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ede32c(void)

{
  _DAT_14ca3f5f0 = L"BASE";
  DAT_14ca3f61a = 4;
  _DAT_14ca3f5f8 = FUN_140b35ae4();
  _DAT_14ca3f600 = DAT_14ca39560;
  _DAT_14ca3f608 = &LAB_14682652b;
  DAT_14ca39560 = &DAT_14ca3f5f0;
  DAT_14ca395b5 = DAT_14ca395b5 + '\x01';
  _DAT_14ca3f610 = 0x100000000;
  if (*(char *)(_DAT_14ca3f5f8 + 100) != '\0') {
    DAT_14ca395b6 = DAT_14ca395b6 + '\x01';
  }
  return;
}



// FUNCTION 145ede3a8 FUN_145ede3a8 body=261 status=ok
// SIG undefined FUN_145ede3a8(void)

void FUN_145ede3a8(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3ea70) {
    FUN_144b3d300(&DAT_14ca3ea70);
    if (DAT_14ca3ea70 == -1) {
      FUN_145ede4ae(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x12f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca3e9f0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f6f6ea);
      _Init_thread_footer(&DAT_14ca3ea70);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ede4ae FUN_145ede4ae body=226 status=ok
// SIG undefined FUN_145ede4ae(void)

longlong * FUN_145ede4ae(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146301686;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ede596 FUN_145ede596 body=138 status=ok
// SIG undefined FUN_145ede596(void)

undefined1 * FUN_145ede596(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x130;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145ede592;
}



// FUNCTION 145ede620 FUN_145ede620 body=292 status=ok
// SIG undefined FUN_145ede620(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ede620(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca413d0) {
    FUN_144b3d300(&DAT_14ca413d0);
    if (DAT_14ca413d0 == -1) {
      FUN_145ede88e();
      FUN_145ede744();
      FUN_140db5666(&DAT_14ca41328,0,&DAT_14ca412c0,L"FTraceRayInlinePrintStatisticsCS",
                    L"/Engine/Private/RayTracing/TraceRayInlineStatistics.usf",
                    L"TraceRayInlinePrintStatisticsCS",5,1,FUN_1472c4bfc,FUN_1472c4b9c,
                    &LAB_1458fe5ea,&LAB_1472c4b98,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca43990)
      ;
      _DAT_14ca41328 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f802d1);
      _Init_thread_footer(&DAT_14ca413d0);
    }
  }
  return &DAT_14ca41328;
}



// FUNCTION 145ede744 FUN_145ede744 body=205 status=ok
// SIG undefined FUN_145ede744(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ede744(void)

{
  if ((DAT_14ca41327 & 2) == 0) {
    DAT_14ca41327 = DAT_14ca41327 | 2;
    _DAT_14ca412c8 = L"FTraceRayInlinePrintStatisticsCS";
    _DAT_14ca412e0 = FUN_146826540;
    _DAT_14ca412e8 = FUN_146825d77;
    _DAT_14ca412f0 = FUN_146825fd6;
    _DAT_14ca412f8 = FUN_1407e02ea;
    _DAT_14ca41300 = FUN_146826273;
    _DAT_14ca412d8 = FUN_1472c4b6a;
    _DAT_14ca41318 = 0xffffffff000000e0;
    _DAT_14ca41320 = 8;
    DAT_14ca41324 = 0;
    _DAT_14ca41308 = &LAB_1472c4b94;
    FUN_145ede812();
    FUN_1407e00cc(&DAT_14ca412c0);
    return;
  }
  return;
}



// FUNCTION 145ede812 FUN_145ede812 body=123 status=ok
// SIG undefined FUN_145ede812(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ede812(void)

{
  _DAT_14ca446d0 = L"BASE";
  DAT_14ca446fa = 4;
  _DAT_14ca446d8 = FUN_140b35ae4();
  _DAT_14ca446e0 = DAT_14ca412d0;
  _DAT_14ca446e8 = &LAB_14682652b;
  DAT_14ca412d0 = &DAT_14ca446d0;
  DAT_14ca41325 = DAT_14ca41325 + '\x01';
  _DAT_14ca446f0 = 0x100000000;
  if (*(char *)(_DAT_14ca446d8 + 100) != '\0') {
    DAT_14ca41326 = DAT_14ca41326 + '\x01';
  }
  return;
}



// FUNCTION 145ede88e FUN_145ede88e body=261 status=ok
// SIG undefined FUN_145ede88e(void)

void FUN_145ede88e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca43a10) {
    FUN_144b3d300(&DAT_14ca43a10);
    if (DAT_14ca43a10 == -1) {
      FUN_145ede994(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x1a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca43990,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fafd5b);
      _Init_thread_footer(&DAT_14ca43a10);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ede994 FUN_145ede994 body=226 status=ok
// SIG undefined FUN_145ede994(void)

longlong * FUN_145ede994(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146303a6e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145edea7c FUN_145edea7c body=138 status=ok
// SIG undefined FUN_145edea7c(void)

undefined1 * FUN_145edea7c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1b;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145edea78;
}



// FUNCTION 145edeb06 FUN_145edeb06 body=292 status=ok
// SIG undefined FUN_145edeb06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145edeb06(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca45e70) {
    FUN_144b3d300(&DAT_14ca45e70);
    if (DAT_14ca45e70 == -1) {
      FUN_145eded74();
      FUN_145edec2a();
      FUN_140db5666(&DAT_14ca45dc8,0,&DAT_14ca45d60,L"FOcclusionFeedbackVS",
                    L"/Engine/Private/OcclusionFeedbackShaders.usf",L"MainVS",0,1,FUN_1472dade2,
                    FUN_1472dad82,&LAB_1472dad6a,&LAB_1472dad66,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca46f60);
      _DAT_14ca45dc8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142fe08e6);
      _Init_thread_footer(&DAT_14ca45e70);
    }
  }
  return &DAT_14ca45dc8;
}



// FUNCTION 145edec2a FUN_145edec2a body=205 status=ok
// SIG undefined FUN_145edec2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145edec2a(void)

{
  if ((DAT_14ca45dc7 & 2) == 0) {
    DAT_14ca45dc7 = DAT_14ca45dc7 | 2;
    _DAT_14ca45d68 = L"FOcclusionFeedbackVS";
    _DAT_14ca45d80 = FUN_146826540;
    _DAT_14ca45d88 = FUN_146825d77;
    _DAT_14ca45d90 = FUN_146825fd6;
    _DAT_14ca45d98 = FUN_1407e02ea;
    _DAT_14ca45da0 = FUN_146826273;
    _DAT_14ca45d78 = FUN_1472dad38;
    _DAT_14ca45db8 = 0xffffffff000000e0;
    _DAT_14ca45dc0 = 8;
    DAT_14ca45dc4 = 0;
    _DAT_14ca45da8 = &LAB_1472dad62;
    FUN_145edecf8();
    FUN_1407e00cc(&DAT_14ca45d60);
    return;
  }
  return;
}



// FUNCTION 145edecf8 FUN_145edecf8 body=123 status=ok
// SIG undefined FUN_145edecf8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145edecf8(void)

{
  _DAT_14ca472f0 = L"BASE";
  DAT_14ca4731a = 4;
  _DAT_14ca472f8 = FUN_140b35ae4();
  _DAT_14ca47300 = DAT_14ca45d70;
  _DAT_14ca47308 = &LAB_14682652b;
  DAT_14ca45d70 = &DAT_14ca472f0;
  DAT_14ca45dc5 = DAT_14ca45dc5 + '\x01';
  _DAT_14ca47310 = 0x100000000;
  if (*(char *)(_DAT_14ca472f8 + 100) != '\0') {
    DAT_14ca45dc6 = DAT_14ca45dc6 + '\x01';
  }
  return;
}



// FUNCTION 145eded74 FUN_145eded74 body=261 status=ok
// SIG undefined FUN_145eded74(void)

void FUN_145eded74(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca46fe0) {
    FUN_144b3d300(&DAT_14ca46fe0);
    if (DAT_14ca46fe0 == -1) {
      FUN_145edee7a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x71f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca46f60,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fea75c);
      _Init_thread_footer(&DAT_14ca46fe0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145edee7a FUN_145edee7a body=226 status=ok
// SIG undefined FUN_145edee7a(void)

longlong * FUN_145edee7a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146306300;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145edef62 FUN_145edef62 body=138 status=ok
// SIG undefined FUN_145edef62(void)

undefined1 * FUN_145edef62(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x720;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145edef5e;
}



// FUNCTION 145edefec FUN_145edefec body=292 status=ok
// SIG undefined FUN_145edefec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145edefec(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca67140) {
    FUN_144b3d300(&DAT_14ca67140);
    if (DAT_14ca67140 == -1) {
      FUN_145edf25a();
      FUN_145edf110();
      FUN_140db5666(&DAT_14ca67098,0,&DAT_14ca67030,L"FVirtualShadowMapProjectionCompositeTileVS",
                    L"/Engine/Private/VirtualShadowMaps/VirtualShadowMapProjectionComposite.usf",
                    L"VirtualShadowMapCompositeTileVS",0,1,FUN_14732d2e6,FUN_14732d286,
                    &LAB_14732d258,&LAB_14732d254,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca688e8)
      ;
      _DAT_14ca67098 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430e4d95);
      _Init_thread_footer(&DAT_14ca67140);
    }
  }
  return &DAT_14ca67098;
}



// FUNCTION 145edf110 FUN_145edf110 body=205 status=ok
// SIG undefined FUN_145edf110(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145edf110(void)

{
  if ((DAT_14ca67097 & 2) == 0) {
    DAT_14ca67097 = DAT_14ca67097 | 2;
    _DAT_14ca67038 = L"FVirtualShadowMapProjectionCompositeTileVS";
    _DAT_14ca67050 = FUN_146826540;
    _DAT_14ca67058 = FUN_146825d77;
    _DAT_14ca67060 = FUN_146825fd6;
    _DAT_14ca67068 = FUN_1407e02ea;
    _DAT_14ca67070 = FUN_146826273;
    _DAT_14ca67048 = FUN_14732d226;
    _DAT_14ca67088 = 0xffffffff000000e0;
    _DAT_14ca67090 = 8;
    DAT_14ca67094 = 0;
    _DAT_14ca67078 = &LAB_14732d250;
    FUN_145edf1de();
    FUN_1407e00cc(&DAT_14ca67030);
    return;
  }
  return;
}



// FUNCTION 145edf1de FUN_145edf1de body=123 status=ok
// SIG undefined FUN_145edf1de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145edf1de(void)

{
  _DAT_14ca69110 = L"BASE";
  DAT_14ca6913a = 4;
  _DAT_14ca69118 = FUN_140b35ae4();
  _DAT_14ca69120 = DAT_14ca67040;
  _DAT_14ca69128 = &LAB_14682652b;
  DAT_14ca67040 = &DAT_14ca69110;
  DAT_14ca67095 = DAT_14ca67095 + '\x01';
  _DAT_14ca69130 = 0x100000000;
  if (*(char *)(_DAT_14ca69118 + 100) != '\0') {
    DAT_14ca67096 = DAT_14ca67096 + '\x01';
  }
  return;
}



// FUNCTION 145edf25a FUN_145edf25a body=261 status=ok
// SIG undefined FUN_145edf25a(void)

void FUN_145edf25a(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca68968) {
    FUN_144b3d300(&DAT_14ca68968);
    if (DAT_14ca68968 == -1) {
      FUN_145edf360(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x207;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca688e8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e72f1);
      _Init_thread_footer(&DAT_14ca68968);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145edf360 FUN_145edf360 body=226 status=ok
// SIG undefined FUN_145edf360(void)

longlong * FUN_145edf360(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1463138c4;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145edf448 FUN_145edf448 body=138 status=ok
// SIG undefined FUN_145edf448(void)

undefined1 * FUN_145edf448(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x208;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145edf444;
}



// FUNCTION 145edf4d2 FUN_145edf4d2 body=292 status=ok
// SIG undefined FUN_145edf4d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145edf4d2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa2b60) {
    FUN_144b3d300(&DAT_14caa2b60);
    if (DAT_14caa2b60 == -1) {
      FUN_145edf740();
      FUN_145edf5f6();
      FUN_140db5666(&DAT_14caa2ab8,0,&DAT_14caa2a50,L"FCopyQuadsPS",
                    L"/Engine/Private/Landscape/LandscapeEditLayersUtils.usf",L"CopyQuadsPS",3,1,
                    FUN_14745e656,FUN_14745e5fa,&LAB_1463248f4,&LAB_14745e5f6,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14caa47d8);
      _DAT_14caa2ab8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14324e034);
      _Init_thread_footer(&DAT_14caa2b60);
    }
  }
  return &DAT_14caa2ab8;
}



// FUNCTION 145edf5f6 FUN_145edf5f6 body=205 status=ok
// SIG undefined FUN_145edf5f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145edf5f6(void)

{
  if ((DAT_14caa2ab7 & 2) == 0) {
    DAT_14caa2ab7 = DAT_14caa2ab7 | 2;
    _DAT_14caa2a58 = L"FCopyQuadsPS";
    _DAT_14caa2a70 = FUN_146826540;
    _DAT_14caa2a78 = FUN_146825d77;
    _DAT_14caa2a80 = FUN_146825fd6;
    _DAT_14caa2a88 = FUN_1407e02ea;
    _DAT_14caa2a90 = FUN_146826273;
    _DAT_14caa2a68 = FUN_14745e5c8;
    _DAT_14caa2aa8 = 0xffffffff000000e0;
    _DAT_14caa2ab0 = 8;
    DAT_14caa2ab4 = 0;
    _DAT_14caa2a98 = &LAB_14745e5f2;
    FUN_145edf6c4();
    FUN_1407e00cc(&DAT_14caa2a50);
    return;
  }
  return;
}



// FUNCTION 145edf6c4 FUN_145edf6c4 body=123 status=ok
// SIG undefined FUN_145edf6c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145edf6c4(void)

{
  _DAT_14caa5838 = L"BASE";
  DAT_14caa5862 = 4;
  _DAT_14caa5840 = FUN_140b35ae4();
  _DAT_14caa5848 = DAT_14caa2a60;
  _DAT_14caa5850 = &LAB_14682652b;
  DAT_14caa2a60 = &DAT_14caa5838;
  DAT_14caa2ab5 = DAT_14caa2ab5 + '\x01';
  _DAT_14caa5858 = 0x100000000;
  if (*(char *)(_DAT_14caa5840 + 100) != '\0') {
    DAT_14caa2ab6 = DAT_14caa2ab6 + '\x01';
  }
  return;
}



// FUNCTION 145edf740 FUN_145edf740 body=261 status=ok
// SIG undefined FUN_145edf740(void)

void FUN_145edf740(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa4858) {
    FUN_144b3d300(&DAT_14caa4858);
    if (DAT_14caa4858 == -1) {
      FUN_145edf846(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x4c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa47d8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14324e16c);
      _Init_thread_footer(&DAT_14caa4858);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145edf846 FUN_145edf846 body=226 status=ok
// SIG undefined FUN_145edf846(void)

longlong * FUN_145edf846(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1463249bc;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145edf92e FUN_145edf92e body=138 status=ok
// SIG undefined FUN_145edf92e(void)

undefined1 * FUN_145edf92e(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x4d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145edf92a;
}



// FUNCTION 145edf9b8 FUN_145edf9b8 body=40 status=ok
// SIG undefined FUN_145edf9b8(void)

undefined8 FUN_145edf9b8(undefined8 param_1,int param_2)

{
  FUN_145edf9e0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145edf9e0 FUN_145edf9e0 body=156 status=ok
// SIG undefined FUN_145edf9e0(void)

void FUN_145edf9e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a851840;
  param_1[5] = &PTR_FUN_14a851cc0;
  param_1[6] = &PTR_LAB_14a851d00;
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_145edfa7c(param_1 + 0x26);
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 145edfa7c FUN_145edfa7c body=53 status=ok
// SIG undefined FUN_145edfa7c(void)

void FUN_145edfa7c(longlong *param_1)

{
  FUN_145edfab2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145edfab2 FUN_145edfab2 body=375 status=ok
// SIG undefined FUN_145edfab2(void)

void FUN_145edfab2(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c;
      if (*(longlong *)(lVar2 + 0x18 + lVar3 * 0x30) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + lVar3 * 0x30 + 8) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145edfc2a FUN_145edfc2a body=292 status=ok
// SIG undefined FUN_145edfc2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145edfc2a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2e8e8) {
    FUN_144b3d300(&DAT_14cb2e8e8);
    if (DAT_14cb2e8e8 == -1) {
      FUN_145edfe98();
      FUN_145edfd4e();
      FUN_140db5666(&DAT_14cb2e840,0,&DAT_14cb2e7d8,L"FNiagaraDebugDrawLineVS",
                    L"/Plugin/FX/Niagara/Private/NiagaraDebugDraw.usf",L"MainVS",0,1,FUN_14804d108,
                    FUN_14804d0a8,&LAB_14804d0a4,&LAB_14804d0a0,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cb33898);
      _DAT_14cb2e840 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438f98d7);
      _Init_thread_footer(&DAT_14cb2e8e8);
    }
  }
  return &DAT_14cb2e840;
}



// FUNCTION 145edfd4e FUN_145edfd4e body=205 status=ok
// SIG undefined FUN_145edfd4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145edfd4e(void)

{
  if ((DAT_14cb2e83f & 2) == 0) {
    DAT_14cb2e83f = DAT_14cb2e83f | 2;
    _DAT_14cb2e7e0 = L"FNiagaraDebugDrawLineVS";
    _DAT_14cb2e7f8 = FUN_146826540;
    _DAT_14cb2e800 = FUN_146825d77;
    _DAT_14cb2e808 = FUN_146825fd6;
    _DAT_14cb2e810 = FUN_1407e02ea;
    _DAT_14cb2e818 = FUN_146826273;
    _DAT_14cb2e7f0 = FUN_14804d072;
    _DAT_14cb2e830 = 0xffffffff000000e0;
    _DAT_14cb2e838 = 8;
    DAT_14cb2e83c = 0;
    _DAT_14cb2e820 = &LAB_14804d09c;
    FUN_145edfe1c();
    FUN_1407e00cc(&DAT_14cb2e7d8);
    return;
  }
  return;
}



// FUNCTION 145edfe1c FUN_145edfe1c body=123 status=ok
// SIG undefined FUN_145edfe1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145edfe1c(void)

{
  _DAT_14cb35510 = L"BASE";
  DAT_14cb3553a = 4;
  _DAT_14cb35518 = FUN_140b35ae4();
  _DAT_14cb35520 = DAT_14cb2e7e8;
  _DAT_14cb35528 = &LAB_14682652b;
  DAT_14cb2e7e8 = &DAT_14cb35510;
  DAT_14cb2e83d = DAT_14cb2e83d + '\x01';
  _DAT_14cb35530 = 0x100000000;
  if (*(char *)(_DAT_14cb35518 + 100) != '\0') {
    DAT_14cb2e83e = DAT_14cb2e83e + '\x01';
  }
  return;
}



// FUNCTION 145edfe98 FUN_145edfe98 body=261 status=ok
// SIG undefined FUN_145edfe98(void)

void FUN_145edfe98(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb33918) {
    FUN_144b3d300(&DAT_14cb33918);
    if (DAT_14cb33918 == -1) {
      FUN_145edff9e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x7d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb33898,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb6f4);
      _Init_thread_footer(&DAT_14cb33918);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145edff9e FUN_145edff9e body=226 status=ok
// SIG undefined FUN_145edff9e(void)

longlong * FUN_145edff9e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14646166c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee0086 FUN_145ee0086 body=138 status=ok
// SIG undefined FUN_145ee0086(void)

undefined1 * FUN_145ee0086(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x7e;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145ee0082;
}



// FUNCTION 145ee0110 FUN_145ee0110 body=292 status=ok
// SIG undefined FUN_145ee0110(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ee0110(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb482b8) {
    FUN_144b3d300(&DAT_14cb482b8);
    if (DAT_14cb482b8 == -1) {
      FUN_145ee037e();
      FUN_145ee0234();
      FUN_140db5666(&DAT_14cb48210,0,&DAT_14cb481a8,L"FWaterQuadTreeOcclusionQueryVS",
                    L"/Plugin/Water/Private/WaterQuadTreeDraws.usf",L"MainVS",0,1,FUN_1483fccc8,
                    FUN_1483fcc68,&LAB_1483fcc64,&LAB_1483fcc60,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cb48e30);
      _DAT_14cb48210 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143b3bd0d);
      _Init_thread_footer(&DAT_14cb482b8);
    }
  }
  return &DAT_14cb48210;
}



// FUNCTION 145ee0234 FUN_145ee0234 body=205 status=ok
// SIG undefined FUN_145ee0234(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee0234(void)

{
  if ((DAT_14cb4820f & 2) == 0) {
    DAT_14cb4820f = DAT_14cb4820f | 2;
    _DAT_14cb481b0 = L"FWaterQuadTreeOcclusionQueryVS";
    _DAT_14cb481c8 = FUN_146826540;
    _DAT_14cb481d0 = FUN_146825d77;
    _DAT_14cb481d8 = FUN_146825fd6;
    _DAT_14cb481e0 = FUN_1407e02ea;
    _DAT_14cb481e8 = FUN_146826273;
    _DAT_14cb481c0 = FUN_1483fcc32;
    _DAT_14cb48200 = 0xffffffff000000e0;
    _DAT_14cb48208 = 8;
    DAT_14cb4820c = 0;
    _DAT_14cb481f0 = &LAB_1483fcc5c;
    FUN_145ee0302();
    FUN_1407e00cc(&DAT_14cb481a8);
    return;
  }
  return;
}



// FUNCTION 145ee0302 FUN_145ee0302 body=123 status=ok
// SIG undefined FUN_145ee0302(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ee0302(void)

{
  _DAT_14cb49318 = L"BASE";
  DAT_14cb49342 = 4;
  _DAT_14cb49320 = FUN_140b35ae4();
  _DAT_14cb49328 = DAT_14cb481b8;
  _DAT_14cb49330 = &LAB_14682652b;
  DAT_14cb481b8 = &DAT_14cb49318;
  DAT_14cb4820d = DAT_14cb4820d + '\x01';
  _DAT_14cb49338 = 0x100000000;
  if (*(char *)(_DAT_14cb49320 + 100) != '\0') {
    DAT_14cb4820e = DAT_14cb4820e + '\x01';
  }
  return;
}



// FUNCTION 145ee037e FUN_145ee037e body=261 status=ok
// SIG undefined FUN_145ee037e(void)

void FUN_145ee037e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb48eb0) {
    FUN_144b3d300(&DAT_14cb48eb0);
    if (DAT_14cb48eb0 == -1) {
      FUN_145ee0484(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0xf5;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb48e30,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143b3d20d);
      _Init_thread_footer(&DAT_14cb48eb0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ee0484 FUN_145ee0484 body=226 status=ok
// SIG undefined FUN_145ee0484(void)

longlong * FUN_145ee0484(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146488bb8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


