// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146093ba6 FUN_146093ba6 body=228 status=ok
// SIG undefined FUN_146093ba6(void)

void FUN_146093ba6(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  float param_5)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_140ff33c4(param_2,param_1,0);
  fVar2 = (float)FUN_140ff33c4(param_3,param_1,0);
  if (0.0 < fVar2) {
    if (param_4 <= 0.0) {
      if (param_5 < fVar1 / fVar2) {
        fVar1 = param_4 * fVar2 + fVar1;
        if (fVar1 <= param_5 * fVar2) {
          fVar1 = param_5 * fVar2;
        }
        goto LAB_146093c5f;
      }
    }
    else if (fVar1 / fVar2 < param_5) {
      fVar1 = param_4 * fVar2 + fVar1;
      if (param_5 * fVar2 <= fVar1) {
        fVar1 = param_5 * fVar2;
      }
LAB_146093c5f:
      FUN_1459d19c6(param_2,param_1,fVar1);
      return;
    }
  }
  return;
}



// FUNCTION 146093c8a FUN_146093c8a body=292 status=ok
// SIG undefined FUN_146093c8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146093c8a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f2468) {
    FUN_144b3d300(&DAT_14c9f2468);
    if (DAT_14c9f2468 == -1) {
      FUN_145d738aa();
      FUN_146093dae();
      FUN_140db5666(&DAT_14c9f23c0,0,&DAT_14c9f2358,L"FLumenRadianceCacheHardwareRayTracingRGS",
                    L"/Engine/Private/Lumen/LumenRadianceCacheHardwareRayTracing.usf",
                    L"LumenRadianceCacheHardwareRayTracingRGS",6,0x18,FUN_1471ec272,FUN_1471ec22e,
                    &LAB_141768ea4,&LAB_1471ec22a,&LAB_1471ec1f4,&LAB_1471ec1ec,0xe0,&DAT_14c9f5d10)
      ;
      _DAT_14c9f23c0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d3307c);
      _Init_thread_footer(&DAT_14c9f2468);
    }
  }
  return &DAT_14c9f23c0;
}



// FUNCTION 146093dae FUN_146093dae body=205 status=ok
// SIG undefined FUN_146093dae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146093dae(void)

{
  if ((DAT_14c9f23bf & 2) == 0) {
    DAT_14c9f23bf = DAT_14c9f23bf | 2;
    _DAT_14c9f2360 = L"FLumenRadianceCacheHardwareRayTracingRGS";
    _DAT_14c9f2378 = FUN_146826540;
    _DAT_14c9f2380 = FUN_146825d77;
    _DAT_14c9f2388 = FUN_146825fd6;
    _DAT_14c9f2390 = FUN_1407e02ea;
    _DAT_14c9f2398 = FUN_146826273;
    _DAT_14c9f2370 = FUN_1471ec1be;
    _DAT_14c9f23b0 = 0xffffffff000000e0;
    _DAT_14c9f23b8 = 8;
    DAT_14c9f23bc = 0;
    _DAT_14c9f23a0 = &LAB_1471ec1e8;
    FUN_146093e7c();
    FUN_1407e00cc(&DAT_14c9f2358);
    return;
  }
  return;
}



// FUNCTION 146093e7c FUN_146093e7c body=123 status=ok
// SIG undefined FUN_146093e7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146093e7c(void)

{
  _DAT_14c9f78e0 = L"BASE";
  DAT_14c9f790a = 4;
  _DAT_14c9f78e8 = FUN_140b35ae4();
  _DAT_14c9f78f0 = DAT_14c9f2368;
  _DAT_14c9f78f8 = &LAB_14682652b;
  DAT_14c9f2368 = &DAT_14c9f78e0;
  DAT_14c9f23bd = DAT_14c9f23bd + '\x01';
  _DAT_14c9f7900 = 0x100000000;
  if (*(char *)(_DAT_14c9f78e8 + 100) != '\0') {
    DAT_14c9f23be = DAT_14c9f23be + '\x01';
  }
  return;
}



// FUNCTION 146093ef8 FUN_146093ef8 body=292 status=ok
// SIG undefined FUN_146093ef8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146093ef8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f2f20) {
    FUN_144b3d300(&DAT_14c9f2f20);
    if (DAT_14c9f2f20 == -1) {
      FUN_145e2089e();
      FUN_14609401c();
      FUN_140db5666(&DAT_14c9f2e78,0,&DAT_14c9f2e10,L"FLumenRadiosityHardwareRayTracingCS",
                    L"/Engine/Private/Lumen/Radiosity/LumenRadiosityHardwareRayTracing.usf",
                    L"LumenRadiosityHardwareRayTracingCS",5,0xc,FUN_1471ed410,FUN_1471ed3b0,
                    &LAB_141768f0a,&LAB_1471ed3ac,&LAB_1471ed3a8,&LAB_14712ac08,0xe0,&DAT_14c9f6260)
      ;
      _DAT_14c9f2e78 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d36356);
      _Init_thread_footer(&DAT_14c9f2f20);
    }
  }
  return &DAT_14c9f2e78;
}



// FUNCTION 14609401c FUN_14609401c body=205 status=ok
// SIG undefined FUN_14609401c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609401c(void)

{
  if ((DAT_14c9f2e77 & 2) == 0) {
    DAT_14c9f2e77 = DAT_14c9f2e77 | 2;
    _DAT_14c9f2e18 = L"FLumenRadiosityHardwareRayTracingCS";
    _DAT_14c9f2e30 = FUN_146826540;
    _DAT_14c9f2e38 = FUN_146825d77;
    _DAT_14c9f2e40 = FUN_146825fd6;
    _DAT_14c9f2e48 = FUN_1407e02ea;
    _DAT_14c9f2e50 = FUN_146826273;
    _DAT_14c9f2e28 = FUN_1471ed37a;
    _DAT_14c9f2e68 = 0xffffffff000000e0;
    _DAT_14c9f2e70 = 8;
    DAT_14c9f2e74 = 0;
    _DAT_14c9f2e58 = &LAB_1471ed3a4;
    FUN_1460940ea();
    FUN_1407e00cc(&DAT_14c9f2e10);
    return;
  }
  return;
}



// FUNCTION 1460940ea FUN_1460940ea body=123 status=ok
// SIG undefined FUN_1460940ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460940ea(void)

{
  _DAT_14c9f7a60 = L"BASE";
  DAT_14c9f7a8a = 4;
  _DAT_14c9f7a68 = FUN_140b35ae4();
  _DAT_14c9f7a70 = DAT_14c9f2e20;
  _DAT_14c9f7a78 = &LAB_14682652b;
  DAT_14c9f2e20 = &DAT_14c9f7a60;
  DAT_14c9f2e75 = DAT_14c9f2e75 + '\x01';
  _DAT_14c9f7a80 = 0x100000000;
  if (*(char *)(_DAT_14c9f7a68 + 100) != '\0') {
    DAT_14c9f2e76 = DAT_14c9f2e76 + '\x01';
  }
  return;
}



// FUNCTION 146094166 FUN_146094166 body=292 status=ok
// SIG undefined FUN_146094166(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146094166(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f38c0) {
    FUN_144b3d300(&DAT_14c9f38c0);
    if (DAT_14c9f38c0 == -1) {
      FUN_145dd46f8();
      FUN_14609428a();
      FUN_140db5666(&DAT_14c9f3818,0,&DAT_14c9f37b0,L"FLumenReflectionHardwareRayTracingRGS",
                    L"/Engine/Private/Lumen/LumenReflectionHardwareRayTracing.usf",
                    L"LumenReflectionHardwareRayTracingRGS",6,0x300,FUN_1471ee0fc,FUN_1471ee0b8,
                    &LAB_141768f90,&LAB_1471ee0b4,&LAB_1471ee07e,&LAB_1471ee076,0xe0,&DAT_14c9f6618)
      ;
      _DAT_14c9f3818 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d3bc70);
      _Init_thread_footer(&DAT_14c9f38c0);
    }
  }
  return &DAT_14c9f3818;
}



// FUNCTION 14609428a FUN_14609428a body=205 status=ok
// SIG undefined FUN_14609428a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609428a(void)

{
  if ((DAT_14c9f3817 & 2) == 0) {
    DAT_14c9f3817 = DAT_14c9f3817 | 2;
    _DAT_14c9f37b8 = L"FLumenReflectionHardwareRayTracingRGS";
    _DAT_14c9f37d0 = FUN_146826540;
    _DAT_14c9f37d8 = FUN_146825d77;
    _DAT_14c9f37e0 = FUN_146825fd6;
    _DAT_14c9f37e8 = FUN_1407e02ea;
    _DAT_14c9f37f0 = FUN_146826273;
    _DAT_14c9f37c8 = FUN_1471ee048;
    _DAT_14c9f3808 = 0xffffffff000000e0;
    _DAT_14c9f3810 = 8;
    DAT_14c9f3814 = 0;
    _DAT_14c9f37f8 = &LAB_1471ee072;
    FUN_146094358();
    FUN_1407e00cc(&DAT_14c9f37b0);
    return;
  }
  return;
}



// FUNCTION 146094358 FUN_146094358 body=123 status=ok
// SIG undefined FUN_146094358(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146094358(void)

{
  _DAT_14c9f7c68 = L"BASE";
  DAT_14c9f7c92 = 4;
  _DAT_14c9f7c70 = FUN_140b35ae4();
  _DAT_14c9f7c78 = DAT_14c9f37c0;
  _DAT_14c9f7c80 = &LAB_14682652b;
  DAT_14c9f37c0 = &DAT_14c9f7c68;
  DAT_14c9f3815 = DAT_14c9f3815 + '\x01';
  _DAT_14c9f7c88 = 0x100000000;
  if (*(char *)(_DAT_14c9f7c70 + 100) != '\0') {
    DAT_14c9f3816 = DAT_14c9f3816 + '\x01';
  }
  return;
}



// FUNCTION 1460943d4 FUN_1460943d4 body=292 status=ok
// SIG undefined FUN_1460943d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460943d4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fa458) {
    FUN_144b3d300(&DAT_14c9fa458);
    if (DAT_14c9fa458 == -1) {
      FUN_145dd8db8();
      FUN_1460944f8();
      FUN_140db5666(&DAT_14c9fa3b0,0,&DAT_14c9fa348,L"FLumenSceneDebugHardwareRayTracingRGS",
                    L"/Engine/Private/Lumen/LumenSceneDebugHardwareRayTracing.usf",
                    L"LumenSceneDebugHardwareRayTracingRGS",6,2,FUN_147206082,FUN_14720603e,
                    &LAB_14597bb46,&LAB_14720603a,&LAB_147206034,&LAB_14720602c,0xe0,&DAT_14c9fe6f0)
      ;
      _DAT_14c9fa3b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d7b485);
      _Init_thread_footer(&DAT_14c9fa458);
    }
  }
  return &DAT_14c9fa3b0;
}



// FUNCTION 1460944f8 FUN_1460944f8 body=205 status=ok
// SIG undefined FUN_1460944f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460944f8(void)

{
  if ((DAT_14c9fa3af & 2) == 0) {
    DAT_14c9fa3af = DAT_14c9fa3af | 2;
    _DAT_14c9fa350 = L"FLumenSceneDebugHardwareRayTracingRGS";
    _DAT_14c9fa368 = FUN_146826540;
    _DAT_14c9fa370 = FUN_146825d77;
    _DAT_14c9fa378 = FUN_146825fd6;
    _DAT_14c9fa380 = FUN_1407e02ea;
    _DAT_14c9fa388 = FUN_146826273;
    _DAT_14c9fa360 = FUN_147205ffe;
    _DAT_14c9fa3a0 = 0xffffffff000000e0;
    _DAT_14c9fa3a8 = 8;
    DAT_14c9fa3ac = 0;
    _DAT_14c9fa390 = &LAB_147206028;
    FUN_1460945c6();
    FUN_1407e00cc(&DAT_14c9fa348);
    return;
  }
  return;
}



// FUNCTION 1460945c6 FUN_1460945c6 body=123 status=ok
// SIG undefined FUN_1460945c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460945c6(void)

{
  _DAT_14c9fff68 = L"BASE";
  DAT_14c9fff92 = 4;
  _DAT_14c9fff70 = FUN_140b35ae4();
  _DAT_14c9fff78 = DAT_14c9fa358;
  _DAT_14c9fff80 = &LAB_14682652b;
  DAT_14c9fa358 = &DAT_14c9fff68;
  DAT_14c9fa3ad = DAT_14c9fa3ad + '\x01';
  _DAT_14c9fff88 = 0x100000000;
  if (*(char *)(_DAT_14c9fff70 + 100) != '\0') {
    DAT_14c9fa3ae = DAT_14c9fa3ae + '\x01';
  }
  return;
}



// FUNCTION 146094642 FUN_146094642 body=292 status=ok
// SIG undefined FUN_146094642(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146094642(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fa6a8) {
    FUN_144b3d300(&DAT_14c9fa6a8);
    if (DAT_14c9fa6a8 == -1) {
      FUN_145dd4b84();
      FUN_146094766();
      FUN_140db5666(&DAT_14c9fa600,0,&DAT_14c9fa598,L"FLumenDirectLightingHardwareRayTracingRGS",
                    L"/Engine/Private/Lumen/LumenSceneDirectLightingHardwareRayTracing.usf",
                    L"LumenSceneDirectLightingHardwareRayTracingRGS",6,0x20,FUN_147206204,
                    FUN_1472061c0,FUN_14176b616,&LAB_1472061bc,&LAB_1472061b6,&LAB_1472061ae,0xe0,
                    &DAT_14c9fe778);
      _DAT_14c9fa600 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d7b49d);
      _Init_thread_footer(&DAT_14c9fa6a8);
    }
  }
  return &DAT_14c9fa600;
}



// FUNCTION 146094766 FUN_146094766 body=205 status=ok
// SIG undefined FUN_146094766(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146094766(void)

{
  if ((DAT_14c9fa5ff & 2) == 0) {
    DAT_14c9fa5ff = DAT_14c9fa5ff | 2;
    _DAT_14c9fa5a0 = L"FLumenDirectLightingHardwareRayTracingRGS";
    _DAT_14c9fa5b8 = FUN_146826540;
    _DAT_14c9fa5c0 = FUN_146825d77;
    _DAT_14c9fa5c8 = FUN_146825fd6;
    _DAT_14c9fa5d0 = FUN_1407e02ea;
    _DAT_14c9fa5d8 = FUN_146826273;
    _DAT_14c9fa5b0 = FUN_147206180;
    _DAT_14c9fa5f0 = 0xffffffff000000e0;
    _DAT_14c9fa5f8 = 8;
    DAT_14c9fa5fc = 0;
    _DAT_14c9fa5e0 = &LAB_1472061aa;
    FUN_146094834();
    FUN_1407e00cc(&DAT_14c9fa598);
    return;
  }
  return;
}



// FUNCTION 146094834 FUN_146094834 body=123 status=ok
// SIG undefined FUN_146094834(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146094834(void)

{
  _DAT_14c9fffc8 = L"BASE";
  DAT_14c9ffff2 = 4;
  _DAT_14c9fffd0 = FUN_140b35ae4();
  _DAT_14c9fffd8 = DAT_14c9fa5a8;
  _DAT_14c9fffe0 = &LAB_14682652b;
  DAT_14c9fa5a8 = &DAT_14c9fffc8;
  DAT_14c9fa5fd = DAT_14c9fa5fd + '\x01';
  _DAT_14c9fffe8 = 0x100000000;
  if (*(char *)(_DAT_14c9fffd0 + 100) != '\0') {
    DAT_14c9fa5fe = DAT_14c9fa5fe + '\x01';
  }
  return;
}



// FUNCTION 1460948b0 FUN_1460948b0 body=292 status=ok
// SIG undefined FUN_1460948b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460948b0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca00b58) {
    FUN_144b3d300(&DAT_14ca00b58);
    if (DAT_14ca00b58 == -1) {
      FUN_145d87590();
      FUN_1460949d4();
      FUN_140db5666(&DAT_14ca00ab0,0,&DAT_14ca00a48,L"FLumenScreenProbeGatherHardwareRayTracingRGS",
                    L"/Engine/Private/Lumen/LumenScreenProbeHardwareRayTracing.usf",
                    L"LumenScreenProbeGatherHardwareRayTracingRGS",6,0x90,FUN_14721fdf4,
                    FUN_14721fdb0,&LAB_14176ddb2,&LAB_14721fdac,&LAB_14721fd68,&LAB_14721fd48,0xe0,
                    &DAT_14ca05818);
      _DAT_14ca00ab0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142daca6b);
      _Init_thread_footer(&DAT_14ca00b58);
    }
  }
  return &DAT_14ca00ab0;
}



// FUNCTION 1460949d4 FUN_1460949d4 body=205 status=ok
// SIG undefined FUN_1460949d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460949d4(void)

{
  if ((DAT_14ca00aaf & 2) == 0) {
    DAT_14ca00aaf = DAT_14ca00aaf | 2;
    _DAT_14ca00a50 = L"FLumenScreenProbeGatherHardwareRayTracingRGS";
    _DAT_14ca00a68 = FUN_146826540;
    _DAT_14ca00a70 = FUN_146825d77;
    _DAT_14ca00a78 = FUN_146825fd6;
    _DAT_14ca00a80 = FUN_1407e02ea;
    _DAT_14ca00a88 = FUN_146826273;
    _DAT_14ca00a60 = FUN_14721fd1a;
    _DAT_14ca00aa0 = 0xffffffff000000e0;
    _DAT_14ca00aa8 = 8;
    DAT_14ca00aac = 0;
    _DAT_14ca00a90 = &LAB_14721fd44;
    FUN_146094aa2();
    FUN_1407e00cc(&DAT_14ca00a48);
    return;
  }
  return;
}



// FUNCTION 146094aa2 FUN_146094aa2 body=123 status=ok
// SIG undefined FUN_146094aa2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146094aa2(void)

{
  _DAT_14ca07718 = L"BASE";
  DAT_14ca07742 = 4;
  _DAT_14ca07720 = FUN_140b35ae4();
  _DAT_14ca07728 = DAT_14ca00a58;
  _DAT_14ca07730 = &LAB_14682652b;
  DAT_14ca00a58 = &DAT_14ca07718;
  DAT_14ca00aad = DAT_14ca00aad + '\x01';
  _DAT_14ca07738 = 0x100000000;
  if (*(char *)(_DAT_14ca07720 + 100) != '\0') {
    DAT_14ca00aae = DAT_14ca00aae + '\x01';
  }
  return;
}



// FUNCTION 146094b1e FUN_146094b1e body=292 status=ok
// SIG undefined FUN_146094b1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146094b1e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca02a48) {
    FUN_144b3d300(&DAT_14ca02a48);
    if (DAT_14ca02a48 == -1) {
      FUN_145ddd34a();
      FUN_146094c42();
      FUN_140db5666(&DAT_14ca029a0,0,&DAT_14ca02938,L"FLumenTranslucencyVolumeHardwareRayTracingCS",
                    L"/Engine/Private/Lumen/LumenTranslucencyVolumeHardwareRayTracing.usf",
                    L"LumenTranslucencyVolumeHardwareRayTracingCS",5,8,FUN_147222182,FUN_147222122,
                    &LAB_14176e138,&LAB_14722211e,&LAB_14722211a,&LAB_14712ac08,0xe0,&DAT_14ca06340)
      ;
      _DAT_14ca029a0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dbdf41);
      _Init_thread_footer(&DAT_14ca02a48);
    }
  }
  return &DAT_14ca029a0;
}



// FUNCTION 146094c42 FUN_146094c42 body=205 status=ok
// SIG undefined FUN_146094c42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146094c42(void)

{
  if ((DAT_14ca0299f & 2) == 0) {
    DAT_14ca0299f = DAT_14ca0299f | 2;
    _DAT_14ca02940 = L"FLumenTranslucencyVolumeHardwareRayTracingCS";
    _DAT_14ca02958 = FUN_146826540;
    _DAT_14ca02960 = FUN_146825d77;
    _DAT_14ca02968 = FUN_146825fd6;
    _DAT_14ca02970 = FUN_1407e02ea;
    _DAT_14ca02978 = FUN_146826273;
    _DAT_14ca02950 = FUN_1472220ec;
    _DAT_14ca02990 = 0xffffffff000000e0;
    _DAT_14ca02998 = 8;
    DAT_14ca0299c = 0;
    _DAT_14ca02980 = &LAB_147222116;
    FUN_146094d10();
    FUN_1407e00cc(&DAT_14ca02938);
    return;
  }
  return;
}



// FUNCTION 146094d10 FUN_146094d10 body=123 status=ok
// SIG undefined FUN_146094d10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146094d10(void)

{
  _DAT_14ca07d00 = L"BASE";
  DAT_14ca07d2a = 4;
  _DAT_14ca07d08 = FUN_140b35ae4();
  _DAT_14ca07d10 = DAT_14ca02948;
  _DAT_14ca07d18 = &LAB_14682652b;
  DAT_14ca02948 = &DAT_14ca07d00;
  DAT_14ca0299d = DAT_14ca0299d + '\x01';
  _DAT_14ca07d20 = 0x100000000;
  if (*(char *)(_DAT_14ca07d08 + 100) != '\0') {
    DAT_14ca0299e = DAT_14ca0299e + '\x01';
  }
  return;
}



// FUNCTION 146094d8c FUN_146094d8c body=292 status=ok
// SIG undefined FUN_146094d8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146094d8c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca043f0) {
    FUN_144b3d300(&DAT_14ca043f0);
    if (DAT_14ca043f0 == -1) {
      FUN_145e23078();
      FUN_146094eb0();
      FUN_140db5666(&DAT_14ca04348,0,&DAT_14ca042e0,L"FLumenVisualizeHardwareRayTracingCS",
                    L"/Engine/Private/Lumen/LumenVisualizeHardwareRayTracing.usf",
                    L"LumenVisualizeHardwareRayTracingCS",5,0x40,FUN_1472264de,FUN_14722647e,
                    &LAB_140f050ec,&LAB_14722647a,&LAB_147226476,&LAB_14712ac08,0xe0,&DAT_14ca06e68)
      ;
      _DAT_14ca04348 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dc8df0);
      _Init_thread_footer(&DAT_14ca043f0);
    }
  }
  return &DAT_14ca04348;
}



// FUNCTION 146094eb0 FUN_146094eb0 body=205 status=ok
// SIG undefined FUN_146094eb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146094eb0(void)

{
  if ((DAT_14ca04347 & 2) == 0) {
    DAT_14ca04347 = DAT_14ca04347 | 2;
    _DAT_14ca042e8 = L"FLumenVisualizeHardwareRayTracingCS";
    _DAT_14ca04300 = FUN_146826540;
    _DAT_14ca04308 = FUN_146825d77;
    _DAT_14ca04310 = FUN_146825fd6;
    _DAT_14ca04318 = FUN_1407e02ea;
    _DAT_14ca04320 = FUN_146826273;
    _DAT_14ca042f8 = FUN_147226448;
    _DAT_14ca04338 = 0xffffffff000000e0;
    _DAT_14ca04340 = 8;
    DAT_14ca04344 = 0;
    _DAT_14ca04328 = &LAB_147226472;
    FUN_146094f7e();
    FUN_1407e00cc(&DAT_14ca042e0);
    return;
  }
  return;
}



// FUNCTION 146094f7e FUN_146094f7e body=123 status=ok
// SIG undefined FUN_146094f7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146094f7e(void)

{
  _DAT_14ca080b8 = L"BASE";
  DAT_14ca080e2 = 4;
  _DAT_14ca080c0 = FUN_140b35ae4();
  _DAT_14ca080c8 = DAT_14ca042f0;
  _DAT_14ca080d0 = &LAB_14682652b;
  DAT_14ca042f0 = &DAT_14ca080b8;
  DAT_14ca04345 = DAT_14ca04345 + '\x01';
  _DAT_14ca080d8 = 0x100000000;
  if (*(char *)(_DAT_14ca080c0 + 100) != '\0') {
    DAT_14ca04346 = DAT_14ca04346 + '\x01';
  }
  return;
}



// FUNCTION 146094ffa FUN_146094ffa body=292 status=ok
// SIG undefined FUN_146094ffa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146094ffa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca08d38) {
    FUN_144b3d300(&DAT_14ca08d38);
    if (DAT_14ca08d38 == -1) {
      FUN_145dd932e();
      FUN_14609511e();
      FUN_140db5666(&DAT_14ca08c90,0,&DAT_14ca08c28,L"FHardwareRayTraceLightSamplesRGS",
                    L"/Engine/Private/MegaLights/MegaLightsHardwareRayTracing.usf",
                    L"HardwareRayTraceLightSamplesRGS",6,0x60,FUN_1472395b6,FUN_147239572,
                    &LAB_14176f29a,&LAB_14723956e,&LAB_14723954e,&LAB_147239546,0xe0,&DAT_14ca0e200)
      ;
      _DAT_14ca08c90 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142de1575);
      _Init_thread_footer(&DAT_14ca08d38);
    }
  }
  return &DAT_14ca08c90;
}



// FUNCTION 14609511e FUN_14609511e body=205 status=ok
// SIG undefined FUN_14609511e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609511e(void)

{
  if ((DAT_14ca08c8f & 2) == 0) {
    DAT_14ca08c8f = DAT_14ca08c8f | 2;
    _DAT_14ca08c30 = L"FHardwareRayTraceLightSamplesRGS";
    _DAT_14ca08c48 = FUN_146826540;
    _DAT_14ca08c50 = FUN_146825d77;
    _DAT_14ca08c58 = FUN_146825fd6;
    _DAT_14ca08c60 = FUN_1407e02ea;
    _DAT_14ca08c68 = FUN_146826273;
    _DAT_14ca08c40 = FUN_147239518;
    _DAT_14ca08c80 = 0xffffffff000000e0;
    _DAT_14ca08c88 = 8;
    DAT_14ca08c8c = 0;
    _DAT_14ca08c70 = &LAB_147239542;
    FUN_1460951ec();
    FUN_1407e00cc(&DAT_14ca08c28);
    return;
  }
  return;
}



// FUNCTION 1460951ec FUN_1460951ec body=123 status=ok
// SIG undefined FUN_1460951ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460951ec(void)

{
  _DAT_14ca0eac0 = L"BASE";
  DAT_14ca0eaea = 4;
  _DAT_14ca0eac8 = FUN_140b35ae4();
  _DAT_14ca0ead0 = DAT_14ca08c38;
  _DAT_14ca0ead8 = &LAB_14682652b;
  DAT_14ca08c38 = &DAT_14ca0eac0;
  DAT_14ca08c8d = DAT_14ca08c8d + '\x01';
  _DAT_14ca0eae0 = 0x100000000;
  if (*(char *)(_DAT_14ca0eac8 + 100) != '\0') {
    DAT_14ca08c8e = DAT_14ca08c8e + '\x01';
  }
  return;
}



// FUNCTION 146095268 FUN_146095268 body=292 status=ok
// SIG undefined FUN_146095268(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146095268(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca08f88) {
    FUN_144b3d300(&DAT_14ca08f88);
    if (DAT_14ca08f88 == -1) {
      FUN_145e2358a();
      FUN_14609538c();
      FUN_140db5666(&DAT_14ca08ee0,0,&DAT_14ca08e78,L"FVolumeHardwareRayTraceLightSamplesRGS",
                    L"/Engine/Private/MegaLights/MegaLightsVolumeHardwareRayTracing.usf",
                    L"VolumeHardwareRayTraceLightSamplesRGS",6,4,FUN_147239738,FUN_1472396f4,
                    &LAB_14587b1d2,&LAB_1472396f0,&LAB_1472396ea,&LAB_1472396e2,0xe0,&DAT_14ca0e398)
      ;
      _DAT_14ca08ee0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142de158d);
      _Init_thread_footer(&DAT_14ca08f88);
    }
  }
  return &DAT_14ca08ee0;
}



// FUNCTION 14609538c FUN_14609538c body=205 status=ok
// SIG undefined FUN_14609538c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609538c(void)

{
  if ((DAT_14ca08edf & 2) == 0) {
    DAT_14ca08edf = DAT_14ca08edf | 2;
    _DAT_14ca08e80 = L"FVolumeHardwareRayTraceLightSamplesRGS";
    _DAT_14ca08e98 = FUN_146826540;
    _DAT_14ca08ea0 = FUN_146825d77;
    _DAT_14ca08ea8 = FUN_146825fd6;
    _DAT_14ca08eb0 = FUN_1407e02ea;
    _DAT_14ca08eb8 = FUN_146826273;
    _DAT_14ca08e90 = FUN_1472396b4;
    _DAT_14ca08ed0 = 0xffffffff000000e0;
    _DAT_14ca08ed8 = 8;
    DAT_14ca08edc = 0;
    _DAT_14ca08ec0 = &LAB_1472396de;
    FUN_14609545a();
    FUN_1407e00cc(&DAT_14ca08e78);
    return;
  }
  return;
}



// FUNCTION 14609545a FUN_14609545a body=123 status=ok
// SIG undefined FUN_14609545a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609545a(void)

{
  _DAT_14ca0eb20 = L"BASE";
  DAT_14ca0eb4a = 4;
  _DAT_14ca0eb28 = FUN_140b35ae4();
  _DAT_14ca0eb30 = DAT_14ca08e88;
  _DAT_14ca0eb38 = &LAB_14682652b;
  DAT_14ca08e88 = &DAT_14ca0eb20;
  DAT_14ca08edd = DAT_14ca08edd + '\x01';
  _DAT_14ca0eb40 = 0x100000000;
  if (*(char *)(_DAT_14ca0eb28 + 100) != '\0') {
    DAT_14ca08ede = DAT_14ca08ede + '\x01';
  }
  return;
}



// FUNCTION 1460954d6 FUN_1460954d6 body=292 status=ok
// SIG undefined FUN_1460954d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460954d6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca13480) {
    FUN_144b3d300(&DAT_14ca13480);
    if (DAT_14ca13480 == -1) {
      FUN_145d48650();
      FUN_1460955fa();
      FUN_140db5666(&DAT_14ca133d8,0,&DAT_14ca13370,L"FEmitCubemapShadowGS",
                    L"/Engine/Private/Nanite/NaniteEmitShadow.usf",L"EmitCubemapShadowGS",4,1,
                    FUN_1472508ea,FUN_14725088a,&LAB_145aedf9c,&LAB_147250886,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca17138);
      _DAT_14ca133d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e015d4);
      _Init_thread_footer(&DAT_14ca13480);
    }
  }
  return &DAT_14ca133d8;
}



// FUNCTION 1460955fa FUN_1460955fa body=205 status=ok
// SIG undefined FUN_1460955fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460955fa(void)

{
  if ((DAT_14ca133d7 & 2) == 0) {
    DAT_14ca133d7 = DAT_14ca133d7 | 2;
    _DAT_14ca13378 = L"FEmitCubemapShadowGS";
    _DAT_14ca13390 = FUN_146826540;
    _DAT_14ca13398 = FUN_146825d77;
    _DAT_14ca133a0 = FUN_146825fd6;
    _DAT_14ca133a8 = FUN_1407e02ea;
    _DAT_14ca133b0 = FUN_146826273;
    _DAT_14ca13388 = FUN_147250856;
    _DAT_14ca133c8 = 0xffffffff000000e0;
    _DAT_14ca133d0 = 8;
    DAT_14ca133d4 = 0;
    _DAT_14ca133b8 = &LAB_147250882;
    FUN_1460956c8();
    FUN_1407e00cc(&DAT_14ca13370);
    return;
  }
  return;
}



// FUNCTION 1460956c8 FUN_1460956c8 body=123 status=ok
// SIG undefined FUN_1460956c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460956c8(void)

{
  _DAT_14ca18bd8 = L"BASE";
  DAT_14ca18c02 = 4;
  _DAT_14ca18be0 = FUN_140b35ae4();
  _DAT_14ca18be8 = DAT_14ca13380;
  _DAT_14ca18bf0 = &LAB_14682652b;
  DAT_14ca13380 = &DAT_14ca18bd8;
  DAT_14ca133d5 = DAT_14ca133d5 + '\x01';
  _DAT_14ca18bf8 = 0x100000000;
  if (*(char *)(_DAT_14ca18be0 + 100) != '\0') {
    DAT_14ca133d6 = DAT_14ca133d6 + '\x01';
  }
  return;
}



// FUNCTION 146095744 FUN_146095744 body=292 status=ok
// SIG undefined FUN_146095744(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146095744(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca135a8) {
    FUN_144b3d300(&DAT_14ca135a8);
    if (DAT_14ca135a8 == -1) {
      FUN_145d48650();
      FUN_146095868();
      FUN_140db5666(&DAT_14ca13500,0,&DAT_14ca13498,L"FEmitCubemapShadowPS",
                    L"/Engine/Private/Nanite/NaniteEmitShadow.usf",L"EmitCubemapShadowPS",3,1,
                    FUN_147250a08,FUN_1472509a8,&LAB_1462eec7c,&LAB_1472509a4,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca17138);
      _DAT_14ca13500 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e015e0);
      _Init_thread_footer(&DAT_14ca135a8);
    }
  }
  return &DAT_14ca13500;
}



// FUNCTION 146095868 FUN_146095868 body=205 status=ok
// SIG undefined FUN_146095868(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146095868(void)

{
  if ((DAT_14ca134ff & 2) == 0) {
    DAT_14ca134ff = DAT_14ca134ff | 2;
    _DAT_14ca134a0 = L"FEmitCubemapShadowPS";
    _DAT_14ca134b8 = FUN_146826540;
    _DAT_14ca134c0 = FUN_146825d77;
    _DAT_14ca134c8 = FUN_146825fd6;
    _DAT_14ca134d0 = FUN_1407e02ea;
    _DAT_14ca134d8 = FUN_146826273;
    _DAT_14ca134b0 = FUN_147250974;
    _DAT_14ca134f0 = 0xffffffff000000e0;
    _DAT_14ca134f8 = 8;
    DAT_14ca134fc = 0;
    _DAT_14ca134e0 = &LAB_1472509a0;
    FUN_146095936();
    FUN_1407e00cc(&DAT_14ca13498);
    return;
  }
  return;
}



// FUNCTION 146095936 FUN_146095936 body=123 status=ok
// SIG undefined FUN_146095936(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146095936(void)

{
  _DAT_14ca18c08 = L"BASE";
  DAT_14ca18c32 = 4;
  _DAT_14ca18c10 = FUN_140b35ae4();
  _DAT_14ca18c18 = DAT_14ca134a8;
  _DAT_14ca18c20 = &LAB_14682652b;
  DAT_14ca134a8 = &DAT_14ca18c08;
  DAT_14ca134fd = DAT_14ca134fd + '\x01';
  _DAT_14ca18c28 = 0x100000000;
  if (*(char *)(_DAT_14ca18c10 + 100) != '\0') {
    DAT_14ca134fe = DAT_14ca134fe + '\x01';
  }
  return;
}



// FUNCTION 1460959b2 FUN_1460959b2 body=205 status=ok
// SIG undefined FUN_1460959b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460959b2(void)

{
  if ((DAT_14ca16437 & 2) == 0) {
    DAT_14ca16437 = DAT_14ca16437 | 2;
    _DAT_14ca163d8 = L"FHWRasterizeMS";
    _DAT_14ca163f0 = FUN_146826540;
    _DAT_14ca163f8 = FUN_146825d77;
    _DAT_14ca16400 = FUN_146825fd6;
    _DAT_14ca16408 = FUN_1407e02ea;
    _DAT_14ca16410 = FUN_146826273;
    _DAT_14ca163e8 = FUN_1472542c8;
    _DAT_14ca16428 = 0xffffffff000000f8;
    _DAT_14ca16430 = 8;
    DAT_14ca16434 = 0;
    _DAT_14ca16418 = &LAB_147254300;
    FUN_146095a80();
    FUN_1407e00cc(&DAT_14ca163d0);
    return;
  }
  return;
}



// FUNCTION 146095a80 FUN_146095a80 body=123 status=ok
// SIG undefined FUN_146095a80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146095a80(void)

{
  _DAT_14ca19490 = L"BASE";
  DAT_14ca194ba = 4;
  _DAT_14ca19498 = FUN_141526006();
  _DAT_14ca194a0 = DAT_14ca163e0;
  _DAT_14ca194a8 = &LAB_14682652b;
  DAT_14ca163e0 = &DAT_14ca19490;
  DAT_14ca16435 = DAT_14ca16435 + '\x01';
  _DAT_14ca194b0 = 0x100000000;
  if (*(char *)(_DAT_14ca19498 + 100) != '\0') {
    DAT_14ca16436 = DAT_14ca16436 + '\x01';
  }
  return;
}



// FUNCTION 146095afc FUN_146095afc body=205 status=ok
// SIG undefined FUN_146095afc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146095afc(void)

{
  if ((DAT_14ca1655f & 2) == 0) {
    DAT_14ca1655f = DAT_14ca1655f | 2;
    _DAT_14ca16500 = L"FHWRasterizePS";
    _DAT_14ca16518 = FUN_146826540;
    _DAT_14ca16520 = FUN_146825d77;
    _DAT_14ca16528 = FUN_146825fd6;
    _DAT_14ca16530 = FUN_1407e02ea;
    _DAT_14ca16538 = FUN_146826273;
    _DAT_14ca16510 = FUN_14725439c;
    _DAT_14ca16550 = 0xffffffff000000f8;
    _DAT_14ca16558 = 8;
    DAT_14ca1655c = 0;
    _DAT_14ca16540 = &LAB_1472543d4;
    FUN_146095bca();
    FUN_1407e00cc(&DAT_14ca164f8);
    return;
  }
  return;
}



// FUNCTION 146095bca FUN_146095bca body=123 status=ok
// SIG undefined FUN_146095bca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146095bca(void)

{
  _DAT_14ca194c0 = L"BASE";
  DAT_14ca194ea = 4;
  _DAT_14ca194c8 = FUN_141526006();
  _DAT_14ca194d0 = DAT_14ca16508;
  _DAT_14ca194d8 = &LAB_14682652b;
  DAT_14ca16508 = &DAT_14ca194c0;
  DAT_14ca1655d = DAT_14ca1655d + '\x01';
  _DAT_14ca194e0 = 0x100000000;
  if (*(char *)(_DAT_14ca194c8 + 100) != '\0') {
    DAT_14ca1655e = DAT_14ca1655e + '\x01';
  }
  return;
}



// FUNCTION 146095c46 FUN_146095c46 body=292 status=ok
// SIG undefined FUN_146095c46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146095c46(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca27d60) {
    FUN_144b3d300(&DAT_14ca27d60);
    if (DAT_14ca27d60 == -1) {
      FUN_145dd5010();
      FUN_146095d6a();
      FUN_140db5666(&DAT_14ca27cb8,0,&DAT_14ca27c50,L"FHMDDistortionVS",
                    L"/Engine/Private/PostProcessHMD.usf",L"MainVS",0,1,FUN_14728c438,FUN_14728c3d8,
                    &LAB_14728c3d4,&LAB_14728c3d0,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca2bc80)
      ;
      _DAT_14ca27cb8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ec3383);
      _Init_thread_footer(&DAT_14ca27d60);
    }
  }
  return &DAT_14ca27cb8;
}



// FUNCTION 146095d6a FUN_146095d6a body=205 status=ok
// SIG undefined FUN_146095d6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146095d6a(void)

{
  if ((DAT_14ca27cb7 & 2) == 0) {
    DAT_14ca27cb7 = DAT_14ca27cb7 | 2;
    _DAT_14ca27c58 = L"FHMDDistortionVS";
    _DAT_14ca27c70 = FUN_146826540;
    _DAT_14ca27c78 = FUN_146825d77;
    _DAT_14ca27c80 = FUN_146825fd6;
    _DAT_14ca27c88 = FUN_1407e02ea;
    _DAT_14ca27c90 = FUN_146826273;
    _DAT_14ca27c68 = FUN_14728c3a0;
    _DAT_14ca27ca8 = 0xffffffff000000e0;
    _DAT_14ca27cb0 = 8;
    DAT_14ca27cb4 = 0;
    _DAT_14ca27c98 = &LAB_14728c3cc;
    FUN_146095e38();
    FUN_1407e00cc(&DAT_14ca27c50);
    return;
  }
  return;
}



// FUNCTION 146095e38 FUN_146095e38 body=123 status=ok
// SIG undefined FUN_146095e38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146095e38(void)

{
  _DAT_14ca2c2a0 = L"BASE";
  DAT_14ca2c2ca = 4;
  _DAT_14ca2c2a8 = FUN_140b35ae4();
  _DAT_14ca2c2b0 = DAT_14ca27c60;
  _DAT_14ca2c2b8 = &LAB_14682652b;
  DAT_14ca27c60 = &DAT_14ca2c2a0;
  DAT_14ca27cb5 = DAT_14ca27cb5 + '\x01';
  _DAT_14ca2c2c0 = 0x100000000;
  if (*(char *)(_DAT_14ca2c2a8 + 100) != '\0') {
    DAT_14ca27cb6 = DAT_14ca27cb6 + '\x01';
  }
  return;
}



// FUNCTION 146095eb4 FUN_146095eb4 body=292 status=ok
// SIG undefined FUN_146095eb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146095eb4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca41f48) {
    FUN_144b3d300(&DAT_14ca41f48);
    if (DAT_14ca41f48 == -1) {
      FUN_14153eeb6();
      FUN_146095fd8();
      FUN_140db5666(&DAT_14ca41ea0,0,&DAT_14ca41e38,L"FCubeDownsampleMaxPS",
                    L"/Engine/Private/ReflectionEnvironmentShaders.usf",L"DownsampleMaxPS",3,1,
                    FUN_1472c6256,FUN_1472c61f6,&LAB_1472c61f2,&LAB_1472c61ee,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca43cc0);
      _DAT_14ca41ea0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f84eff);
      _Init_thread_footer(&DAT_14ca41f48);
    }
  }
  return &DAT_14ca41ea0;
}



// FUNCTION 146095fd8 FUN_146095fd8 body=205 status=ok
// SIG undefined FUN_146095fd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146095fd8(void)

{
  if ((DAT_14ca41e9f & 2) == 0) {
    DAT_14ca41e9f = DAT_14ca41e9f | 2;
    _DAT_14ca41e40 = L"FCubeDownsampleMaxPS";
    _DAT_14ca41e58 = FUN_146826540;
    _DAT_14ca41e60 = FUN_146825d77;
    _DAT_14ca41e68 = FUN_146825fd6;
    _DAT_14ca41e70 = FUN_1407e02ea;
    _DAT_14ca41e78 = FUN_146826273;
    _DAT_14ca41e50 = FUN_1472c61c0;
    _DAT_14ca41e90 = 0xffffffff000000e0;
    _DAT_14ca41e98 = 8;
    DAT_14ca41e9c = 0;
    _DAT_14ca41e80 = &LAB_1472c61ea;
    FUN_1460960a6();
    FUN_1407e00cc(&DAT_14ca41e38);
    return;
  }
  return;
}



// FUNCTION 1460960a6 FUN_1460960a6 body=123 status=ok
// SIG undefined FUN_1460960a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460960a6(void)

{
  _DAT_14ca44828 = L"BASE";
  DAT_14ca44852 = 4;
  _DAT_14ca44830 = FUN_140b35ae4();
  _DAT_14ca44838 = DAT_14ca41e48;
  _DAT_14ca44840 = &LAB_14682652b;
  DAT_14ca41e48 = &DAT_14ca44828;
  DAT_14ca41e9d = DAT_14ca41e9d + '\x01';
  _DAT_14ca44848 = 0x100000000;
  if (*(char *)(_DAT_14ca44830 + 100) != '\0') {
    DAT_14ca41e9e = DAT_14ca41e9e + '\x01';
  }
  return;
}



// FUNCTION 146096122 FUN_146096122 body=292 status=ok
// SIG undefined FUN_146096122(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146096122(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca42070) {
    FUN_144b3d300(&DAT_14ca42070);
    if (DAT_14ca42070 == -1) {
      FUN_14153eeb6();
      FUN_146096246();
      FUN_140db5666(&DAT_14ca41fc8,0,&DAT_14ca41f60,L"FCubeFilterPS",
                    L"/Engine/Private/ReflectionEnvironmentShaders.usf",L"FilterPS",3,1,
                    FUN_1472c6320,FUN_1472c62c0,&LAB_1472c62bc,&LAB_1472c62b8,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca43cc0);
      _DAT_14ca41fc8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f84f0b);
      _Init_thread_footer(&DAT_14ca42070);
    }
  }
  return &DAT_14ca41fc8;
}



// FUNCTION 146096246 FUN_146096246 body=205 status=ok
// SIG undefined FUN_146096246(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146096246(void)

{
  if ((DAT_14ca41fc7 & 2) == 0) {
    DAT_14ca41fc7 = DAT_14ca41fc7 | 2;
    _DAT_14ca41f68 = L"FCubeFilterPS";
    _DAT_14ca41f80 = FUN_146826540;
    _DAT_14ca41f88 = FUN_146825d77;
    _DAT_14ca41f90 = FUN_146825fd6;
    _DAT_14ca41f98 = FUN_1407e02ea;
    _DAT_14ca41fa0 = FUN_146826273;
    _DAT_14ca41f78 = FUN_1472c628a;
    _DAT_14ca41fb8 = 0xffffffff000000e0;
    _DAT_14ca41fc0 = 8;
    DAT_14ca41fc4 = 0;
    _DAT_14ca41fa8 = &LAB_1472c62b4;
    FUN_146096314();
    FUN_1407e00cc(&DAT_14ca41f60);
    return;
  }
  return;
}



// FUNCTION 146096314 FUN_146096314 body=123 status=ok
// SIG undefined FUN_146096314(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146096314(void)

{
  _DAT_14ca44858 = L"BASE";
  DAT_14ca44882 = 4;
  _DAT_14ca44860 = FUN_140b35ae4();
  _DAT_14ca44868 = DAT_14ca41f70;
  _DAT_14ca44870 = &LAB_14682652b;
  DAT_14ca41f70 = &DAT_14ca44858;
  DAT_14ca41fc5 = DAT_14ca41fc5 + '\x01';
  _DAT_14ca44878 = 0x100000000;
  if (*(char *)(_DAT_14ca44860 + 100) != '\0') {
    DAT_14ca41fc6 = DAT_14ca41fc6 + '\x01';
  }
  return;
}



// FUNCTION 146096390 FUN_146096390 body=292 status=ok
// SIG undefined FUN_146096390(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146096390(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca42198) {
    FUN_144b3d300(&DAT_14ca42198);
    if (DAT_14ca42198 == -1) {
      FUN_145daab66();
      FUN_1460964b4();
      FUN_140db5666(&DAT_14ca420f0,0,&DAT_14ca42088,L"FComputeBrightnessPS",
                    L"/Engine/Private/ReflectionEnvironmentShaders.usf",L"ComputeBrightnessMain",3,1
                    ,FUN_1472c63ea,FUN_1472c638a,&LAB_1472c6386,&LAB_1472c6382,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca43d48);
      _DAT_14ca420f0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f84f17);
      _Init_thread_footer(&DAT_14ca42198);
    }
  }
  return &DAT_14ca420f0;
}



// FUNCTION 1460964b4 FUN_1460964b4 body=205 status=ok
// SIG undefined FUN_1460964b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460964b4(void)

{
  if ((DAT_14ca420ef & 2) == 0) {
    DAT_14ca420ef = DAT_14ca420ef | 2;
    _DAT_14ca42090 = L"FComputeBrightnessPS";
    _DAT_14ca420a8 = FUN_146826540;
    _DAT_14ca420b0 = FUN_146825d77;
    _DAT_14ca420b8 = FUN_146825fd6;
    _DAT_14ca420c0 = FUN_1407e02ea;
    _DAT_14ca420c8 = FUN_146826273;
    _DAT_14ca420a0 = FUN_1472c6354;
    _DAT_14ca420e0 = 0xffffffff000000e0;
    _DAT_14ca420e8 = 8;
    DAT_14ca420ec = 0;
    _DAT_14ca420d0 = &LAB_1472c637e;
    FUN_146096582();
    FUN_1407e00cc(&DAT_14ca42088);
    return;
  }
  return;
}



// FUNCTION 146096582 FUN_146096582 body=123 status=ok
// SIG undefined FUN_146096582(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146096582(void)

{
  _DAT_14ca44888 = L"BASE";
  DAT_14ca448b2 = 4;
  _DAT_14ca44890 = FUN_140b35ae4();
  _DAT_14ca44898 = DAT_14ca42098;
  _DAT_14ca448a0 = &LAB_14682652b;
  DAT_14ca42098 = &DAT_14ca44888;
  DAT_14ca420ed = DAT_14ca420ed + '\x01';
  _DAT_14ca448a8 = 0x100000000;
  if (*(char *)(_DAT_14ca44890 + 100) != '\0') {
    DAT_14ca420ee = DAT_14ca420ee + '\x01';
  }
  return;
}



// FUNCTION 1460965fe FUN_1460965fe body=292 status=ok
// SIG undefined FUN_1460965fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460965fe(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca422c0) {
    FUN_144b3d300(&DAT_14ca422c0);
    if (DAT_14ca422c0 == -1) {
      FUN_145daab66();
      FUN_146096722();
      FUN_140db5666(&DAT_14ca42218,0,&DAT_14ca421b0,L"FComputeCubeMaxLuminancePS",
                    L"/Engine/Private/ReflectionEnvironmentShaders.usf",L"ComputeCubeMaxLuminancePS"
                    ,3,1,FUN_1472c64b4,FUN_1472c6454,&LAB_1472c6450,&LAB_1472c644c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca43d48);
      _DAT_14ca42218 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f84f23);
      _Init_thread_footer(&DAT_14ca422c0);
    }
  }
  return &DAT_14ca42218;
}



// FUNCTION 146096722 FUN_146096722 body=205 status=ok
// SIG undefined FUN_146096722(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146096722(void)

{
  if ((DAT_14ca42217 & 2) == 0) {
    DAT_14ca42217 = DAT_14ca42217 | 2;
    _DAT_14ca421b8 = L"FComputeCubeMaxLuminancePS";
    _DAT_14ca421d0 = FUN_146826540;
    _DAT_14ca421d8 = FUN_146825d77;
    _DAT_14ca421e0 = FUN_146825fd6;
    _DAT_14ca421e8 = FUN_1407e02ea;
    _DAT_14ca421f0 = FUN_146826273;
    _DAT_14ca421c8 = FUN_1472c641e;
    _DAT_14ca42208 = 0xffffffff000000e0;
    _DAT_14ca42210 = 8;
    DAT_14ca42214 = 0;
    _DAT_14ca421f8 = &LAB_1472c6448;
    FUN_1460967f0();
    FUN_1407e00cc(&DAT_14ca421b0);
    return;
  }
  return;
}



// FUNCTION 1460967f0 FUN_1460967f0 body=123 status=ok
// SIG undefined FUN_1460967f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460967f0(void)

{
  _DAT_14ca448b8 = L"BASE";
  DAT_14ca448e2 = 4;
  _DAT_14ca448c0 = FUN_140b35ae4();
  _DAT_14ca448c8 = DAT_14ca421c0;
  _DAT_14ca448d0 = &LAB_14682652b;
  DAT_14ca421c0 = &DAT_14ca448b8;
  DAT_14ca42215 = DAT_14ca42215 + '\x01';
  _DAT_14ca448d8 = 0x100000000;
  if (*(char *)(_DAT_14ca448c0 + 100) != '\0') {
    DAT_14ca42216 = DAT_14ca42216 + '\x01';
  }
  return;
}



// FUNCTION 14609686c FUN_14609686c body=292 status=ok
// SIG undefined FUN_14609686c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609686c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca42638) {
    FUN_144b3d300(&DAT_14ca42638);
    if (DAT_14ca42638 == -1) {
      FUN_1414881a4();
      FUN_146096990();
      FUN_140db5666(&DAT_14ca42590,0,&DAT_14ca42528,L"FCopyCubemapToCubeFacePS",
                    L"/Engine/Private/ReflectionEnvironmentShaders.usf",
                    L"CopyCubemapToCubeFaceColorPS",3,1,FUN_1472c66da,FUN_1472c667a,&LAB_1472c6676,
                    &LAB_1472c6672,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca43e58);
      _DAT_14ca42590 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f84f47);
      _Init_thread_footer(&DAT_14ca42638);
    }
  }
  return &DAT_14ca42590;
}



// FUNCTION 146096990 FUN_146096990 body=205 status=ok
// SIG undefined FUN_146096990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146096990(void)

{
  if ((DAT_14ca4258f & 2) == 0) {
    DAT_14ca4258f = DAT_14ca4258f | 2;
    _DAT_14ca42530 = L"FCopyCubemapToCubeFacePS";
    _DAT_14ca42548 = FUN_146826540;
    _DAT_14ca42550 = FUN_146825d77;
    _DAT_14ca42558 = FUN_146825fd6;
    _DAT_14ca42560 = FUN_1407e02ea;
    _DAT_14ca42568 = FUN_146826273;
    _DAT_14ca42540 = FUN_1472c6644;
    _DAT_14ca42580 = 0xffffffff000000e0;
    _DAT_14ca42588 = 8;
    DAT_14ca4258c = 0;
    _DAT_14ca42570 = &LAB_1472c666e;
    FUN_146096a5e();
    FUN_1407e00cc(&DAT_14ca42528);
    return;
  }
  return;
}



// FUNCTION 146096a5e FUN_146096a5e body=123 status=ok
// SIG undefined FUN_146096a5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146096a5e(void)

{
  _DAT_14ca44948 = L"BASE";
  DAT_14ca44972 = 4;
  _DAT_14ca44950 = FUN_140b35ae4();
  _DAT_14ca44958 = DAT_14ca42538;
  _DAT_14ca44960 = &LAB_14682652b;
  DAT_14ca42538 = &DAT_14ca44948;
  DAT_14ca4258d = DAT_14ca4258d + '\x01';
  _DAT_14ca44968 = 0x100000000;
  if (*(char *)(_DAT_14ca44950 + 100) != '\0') {
    DAT_14ca4258e = DAT_14ca4258e + '\x01';
  }
  return;
}



// FUNCTION 146096ada FUN_146096ada body=292 status=ok
// SIG undefined FUN_146096ada(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146096ada(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4dd88) {
    FUN_144b3d300(&DAT_14ca4dd88);
    if (DAT_14ca4dd88 == -1) {
      FUN_145ddb094();
      FUN_146096bfe();
      FUN_140db5666(&DAT_14ca4dce0,0,&DAT_14ca4dc78,L"FShaderDrawSymbolsPS",
                    L"/Engine/Private/ShaderPrintDraw.usf",L"DrawSymbolsPS",3,1,FUN_1472eb27a,
                    FUN_1472eb21a,&LAB_1472eb1f0,&LAB_1472eb1ec,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca560d8);
      _DAT_14ca4dce0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14303e9ce);
      _Init_thread_footer(&DAT_14ca4dd88);
    }
  }
  return &DAT_14ca4dce0;
}



// FUNCTION 146096bfe FUN_146096bfe body=205 status=ok
// SIG undefined FUN_146096bfe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146096bfe(void)

{
  if ((DAT_14ca4dcdf & 2) == 0) {
    DAT_14ca4dcdf = DAT_14ca4dcdf | 2;
    _DAT_14ca4dc80 = L"FShaderDrawSymbolsPS";
    _DAT_14ca4dc98 = FUN_146826540;
    _DAT_14ca4dca0 = FUN_146825d77;
    _DAT_14ca4dca8 = FUN_146825fd6;
    _DAT_14ca4dcb0 = FUN_1407e02ea;
    _DAT_14ca4dcb8 = FUN_146826273;
    _DAT_14ca4dc90 = FUN_1472eb1bc;
    _DAT_14ca4dcd0 = 0xffffffff000000e0;
    _DAT_14ca4dcd8 = 8;
    DAT_14ca4dcdc = 0;
    _DAT_14ca4dcc0 = &LAB_1472eb1e8;
    FUN_146096ccc();
    FUN_1407e00cc(&DAT_14ca4dc78);
    return;
  }
  return;
}



// FUNCTION 146096ccc FUN_146096ccc body=123 status=ok
// SIG undefined FUN_146096ccc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146096ccc(void)

{
  _DAT_14ca56a38 = L"BASE";
  DAT_14ca56a62 = 4;
  _DAT_14ca56a40 = FUN_140b35ae4();
  _DAT_14ca56a48 = DAT_14ca4dc88;
  _DAT_14ca56a50 = &LAB_14682652b;
  DAT_14ca4dc88 = &DAT_14ca56a38;
  DAT_14ca4dcdd = DAT_14ca4dcdd + '\x01';
  _DAT_14ca56a58 = 0x100000000;
  if (*(char *)(_DAT_14ca56a40 + 100) != '\0') {
    DAT_14ca4dcde = DAT_14ca4dcde + '\x01';
  }
  return;
}



// FUNCTION 146096d52 FUN_146096d52 body=443 status=ok
// SIG undefined FUN_146096d52(void)

undefined8 * FUN_146096d52(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14a69ab40;
  memset(param_1 + 0x16,0,200);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caec190) {
    FUN_144b3d300(&DAT_14caec190);
    if (DAT_14caec190 == -1) {
      FUN_1415d3a74();
      atexit((_func_5014 *)&LAB_14356f620);
      _Init_thread_footer(&DAT_14caec190);
    }
  }
  *(byte *)((longlong)param_1 + 0x8c) = *(byte *)((longlong)param_1 + 0x8c) | 2;
  puVar2 = param_1 + 0x14;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (*(int *)((longlong)param_1 + 0xac) < 0) {
    FUN_147bb3bca(puVar2,0);
  }
  FUN_1446f470e(&local_48,L"Specular Color",1);
  iVar3 = *(int *)(param_1 + 0x15);
  *(uint *)(param_1 + 0x15) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xac) < iVar3 + 1U) {
    FUN_145c36f2c(puVar2,iVar3);
  }
  lVar4 = param_1[0x14];
  lVar5 = (longlong)iVar3 * 0x1c;
  *(undefined8 *)(lVar4 + lVar5) = local_48;
  puVar1 = (undefined8 *)(lVar4 + 8 + lVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(lVar4 + 0x18 + lVar5) = 0;
  FUN_1446f470e(&local_50,L"Edge Specular Color",1);
  iVar3 = *(int *)(param_1 + 0x15);
  *(uint *)(param_1 + 0x15) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xac) < iVar3 + 1U) {
    FUN_145c36f2c(puVar2,iVar3);
  }
  lVar4 = param_1[0x14];
  lVar5 = (longlong)iVar3 * 0x1c;
  *(undefined8 *)(lVar4 + lVar5) = local_50;
  puVar2 = (undefined8 *)(lVar4 + 8 + lVar5);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(lVar4 + 0x18 + lVar5) = 0;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146096f0e FUN_146096f0e body=206 status=ok
// SIG undefined FUN_146096f0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146096f0e(void)

{
  if ((DAT_14cb061f7 & 2) == 0) {
    DAT_14cb061f7 = DAT_14cb061f7 | 2;
    _DAT_14cb06198 = L"FSimpleElementGammaPS_SRGB";
    _DAT_14cb061b0 = FUN_146826540;
    _DAT_14cb061b8 = FUN_146825d77;
    _DAT_14cb061c0 = FUN_146825fd6;
    _DAT_14cb061c8 = FUN_1407e02ea;
    _DAT_14cb061d0 = FUN_146826273;
    _DAT_14cb061a8 = FUN_147d140d0;
    _DAT_14cb061e8 = 0xffffffff00000108;
    _DAT_14cb061f0 = 8;
    DAT_14cb061f4 = 0;
    _DAT_14cb061d8 = &LAB_147d140fa;
    FUN_146096fdc();
    FUN_1407e00cc(&DAT_14cb06190);
  }
  return &DAT_14cb06190;
}



// FUNCTION 146096fdc FUN_146096fdc body=133 status=ok
// SIG undefined FUN_146096fdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146096fdc(void)

{
  _DAT_14cb07580 = L"BASE";
  DAT_14cb075aa = 4;
  FUN_145cfa89e();
  _DAT_14cb07590 = DAT_14cb061a0;
  _DAT_14cb07588 = &DAT_14cb05d38;
  _DAT_14cb07598 = &LAB_14682652b;
  DAT_14cb061a0 = &DAT_14cb07580;
  DAT_14cb061f5 = DAT_14cb061f5 + '\x01';
  _DAT_14cb075a0 = 0x100000000;
  if (DAT_14cb05d9c != '\0') {
    DAT_14cb061f6 = DAT_14cb061f6 + '\x01';
  }
  return;
}



// FUNCTION 146097062 FUN_146097062 body=206 status=ok
// SIG undefined FUN_146097062(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146097062(void)

{
  if ((DAT_14cb0631f & 2) == 0) {
    DAT_14cb0631f = DAT_14cb0631f | 2;
    _DAT_14cb062c0 = L"FSimpleElementGammaPS_Linear";
    _DAT_14cb062d8 = FUN_146826540;
    _DAT_14cb062e0 = FUN_146825d77;
    _DAT_14cb062e8 = FUN_146825fd6;
    _DAT_14cb062f0 = FUN_1407e02ea;
    _DAT_14cb062f8 = FUN_146826273;
    _DAT_14cb062d0 = FUN_147d141a8;
    _DAT_14cb06310 = 0xffffffff00000108;
    _DAT_14cb06318 = 8;
    DAT_14cb0631c = 0;
    _DAT_14cb06300 = &LAB_147d141d2;
    FUN_146097130();
    FUN_1407e00cc(&DAT_14cb062b8);
  }
  return &DAT_14cb062b8;
}



// FUNCTION 146097130 FUN_146097130 body=133 status=ok
// SIG undefined FUN_146097130(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146097130(void)

{
  _DAT_14cb075b0 = L"BASE";
  DAT_14cb075da = 4;
  FUN_145cfa89e();
  _DAT_14cb075c0 = DAT_14cb062c8;
  _DAT_14cb075b8 = &DAT_14cb05d38;
  _DAT_14cb075c8 = &LAB_14682652b;
  DAT_14cb062c8 = &DAT_14cb075b0;
  DAT_14cb0631d = DAT_14cb0631d + '\x01';
  _DAT_14cb075d0 = 0x100000000;
  if (DAT_14cb05d9c != '\0') {
    DAT_14cb0631e = DAT_14cb0631e + '\x01';
  }
  return;
}



// FUNCTION 1460971b6 FUN_1460971b6 body=206 status=ok
// SIG undefined FUN_1460971b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460971b6(void)

{
  if ((DAT_14cb06447 & 2) == 0) {
    DAT_14cb06447 = DAT_14cb06447 | 2;
    _DAT_14cb063e8 = L"FSimpleElementGammaAlphaOnlyPS";
    _DAT_14cb06400 = FUN_146826540;
    _DAT_14cb06408 = FUN_146825d77;
    _DAT_14cb06410 = FUN_146825fd6;
    _DAT_14cb06418 = FUN_1407e02ea;
    _DAT_14cb06420 = FUN_146826273;
    _DAT_14cb063f8 = FUN_147d14280;
    _DAT_14cb06438 = 0xffffffff00000108;
    _DAT_14cb06440 = 8;
    DAT_14cb06444 = 0;
    _DAT_14cb06428 = &LAB_147d142aa;
    FUN_146097284();
    FUN_1407e00cc(&DAT_14cb063e0);
  }
  return &DAT_14cb063e0;
}



// FUNCTION 146097284 FUN_146097284 body=133 status=ok
// SIG undefined FUN_146097284(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146097284(void)

{
  _DAT_14cb075e0 = L"BASE";
  DAT_14cb0760a = 4;
  FUN_145cfa89e();
  _DAT_14cb075f0 = DAT_14cb063f0;
  _DAT_14cb075e8 = &DAT_14cb05d38;
  _DAT_14cb075f8 = &LAB_14682652b;
  DAT_14cb063f0 = &DAT_14cb075e0;
  DAT_14cb06445 = DAT_14cb06445 + '\x01';
  _DAT_14cb07600 = 0x100000000;
  if (DAT_14cb05d9c != '\0') {
    DAT_14cb06446 = DAT_14cb06446 + '\x01';
  }
  return;
}



// FUNCTION 14609730a FUN_14609730a body=292 status=ok
// SIG undefined FUN_14609730a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609730a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2dad0) {
    FUN_144b3d300(&DAT_14cb2dad0);
    if (DAT_14cb2dad0 == -1) {
      FUN_145e23b80();
      FUN_14609742e();
      FUN_140db5666(&DAT_14cb2da28,0,&DAT_14cb2d9c0,L"FNiagaraCollisionRayTraceRG",
                    L"/Plugin/FX/Niagara/Private/NiagaraRayTracingShaders.usf",
                    L"NiagaraCollisionRayTraceRG",6,4,FUN_14804bb58,FUN_14804bb14,&LAB_1464606fc,
                    &LAB_14804bb10,&LAB_14804bb0a,&LAB_14712ac08,0xe0,&DAT_14cb33348);
      _DAT_14cb2da28 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438f80fd);
      _Init_thread_footer(&DAT_14cb2dad0);
    }
  }
  return &DAT_14cb2da28;
}



// FUNCTION 14609742e FUN_14609742e body=205 status=ok
// SIG undefined FUN_14609742e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609742e(void)

{
  if ((DAT_14cb2da27 & 2) == 0) {
    DAT_14cb2da27 = DAT_14cb2da27 | 2;
    _DAT_14cb2d9c8 = L"FNiagaraCollisionRayTraceRG";
    _DAT_14cb2d9e0 = FUN_146826540;
    _DAT_14cb2d9e8 = FUN_146825d77;
    _DAT_14cb2d9f0 = FUN_146825fd6;
    _DAT_14cb2d9f8 = FUN_1407e02ea;
    _DAT_14cb2da00 = FUN_146826273;
    _DAT_14cb2d9d8 = FUN_14804badc;
    _DAT_14cb2da18 = 0xffffffff000000e0;
    _DAT_14cb2da20 = 8;
    DAT_14cb2da24 = 0;
    _DAT_14cb2da08 = &LAB_14804bb06;
    FUN_1460974fc();
    FUN_1407e00cc(&DAT_14cb2d9c0);
    return;
  }
  return;
}



// FUNCTION 1460974fc FUN_1460974fc body=123 status=ok
// SIG undefined FUN_1460974fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460974fc(void)

{
  _DAT_14cb352d0 = L"BASE";
  DAT_14cb352fa = 4;
  _DAT_14cb352d8 = FUN_140b35ae4();
  _DAT_14cb352e0 = DAT_14cb2d9d0;
  _DAT_14cb352e8 = &LAB_14682652b;
  DAT_14cb2d9d0 = &DAT_14cb352d0;
  DAT_14cb2da25 = DAT_14cb2da25 + '\x01';
  _DAT_14cb352f0 = 0x100000000;
  if (*(char *)(_DAT_14cb352d8 + 100) != '\0') {
    DAT_14cb2da26 = DAT_14cb2da26 + '\x01';
  }
  return;
}



// FUNCTION 146097578 FUN_146097578 body=150 status=ok
// SIG undefined FUN_146097578(void)

void FUN_146097578(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  lVar2 = FUN_14577a94c();
  if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x238))) {
    iVar5 = 0;
    lVar6 = 0;
    do {
      plVar3 = (longlong *)FUN_14479d2ce(*(longlong *)(lVar2 + 0x230) + lVar6);
      if (plVar3 != (longlong *)0x0) {
        lVar4 = FUN_144a5dd5e();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)) {
          cVar1 = (**(code **)(*plVar3 + 0x6c8))(plVar3);
          if (cVar1 != '\0') {
            FUN_14609760e(plVar3,param_2);
          }
        }
      }
      lVar6 = lVar6 + 8;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(lVar2 + 0x238));
  }
  return;
}



// FUNCTION 14609760e FUN_14609760e body=67 status=ok
// SIG undefined FUN_14609760e(void)

void FUN_14609760e(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    FUN_1415d3e68(param_1 + 0xe88,&DAT_14cbcfb50);
    return;
  }
  FUN_146630da4(param_1 + 0xe88,&DAT_14cbcfb50,param_1 + 0xd98,0,1);
  return;
}



// FUNCTION 146097652 FUN_146097652 body=292 status=ok
// SIG undefined FUN_146097652(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146097652(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc29940) {
    FUN_144b3d300(&DAT_14cc29940);
    if (DAT_14cc29940 == -1) {
      FUN_145c4dcdc();
      FUN_146097776();
      FUN_140db5666(&DAT_14cc29898,0,&DAT_14cc29830,L"FFXRHIAutogenReactiveMaskCS",
                    L"/Plugin/FFX/Private/ffx_fsr3upscaler_autogen_reactive_pass.usf",&DAT_14a1f6a48
                    ,5,0x100,FUN_14981c820,FUN_14981c7f8,&LAB_14190e124,&LAB_144655c7c,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cc2a738);
      _DAT_14cc29898 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144655c7f);
      _Init_thread_footer(&DAT_14cc29940);
    }
  }
  return &DAT_14cc29898;
}



// FUNCTION 146097776 FUN_146097776 body=205 status=ok
// SIG undefined FUN_146097776(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146097776(void)

{
  if ((DAT_14cc29897 & 2) == 0) {
    DAT_14cc29897 = DAT_14cc29897 | 2;
    _DAT_14cc29838 = L"FFXRHIAutogenReactiveMaskCS";
    _DAT_14cc29850 = FUN_146826540;
    _DAT_14cc29858 = FUN_146825d77;
    _DAT_14cc29860 = FUN_146825fd6;
    _DAT_14cc29868 = FUN_1407e02ea;
    _DAT_14cc29870 = FUN_146826273;
    _DAT_14cc29848 = FUN_14981c7ca;
    _DAT_14cc29888 = 0xffffffff000000e0;
    _DAT_14cc29890 = 8;
    DAT_14cc29894 = 0;
    _DAT_14cc29878 = &LAB_14981c7f4;
    FUN_146097844();
    FUN_1407e00cc(&DAT_14cc29830);
    return;
  }
  return;
}



// FUNCTION 146097844 FUN_146097844 body=123 status=ok
// SIG undefined FUN_146097844(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146097844(void)

{
  _DAT_14cc2aa48 = L"BASE";
  DAT_14cc2aa72 = 4;
  _DAT_14cc2aa50 = FUN_140b35ae4();
  _DAT_14cc2aa58 = DAT_14cc29840;
  _DAT_14cc2aa60 = &LAB_14682652b;
  DAT_14cc29840 = &DAT_14cc2aa48;
  DAT_14cc29895 = DAT_14cc29895 + '\x01';
  _DAT_14cc2aa68 = 0x100000000;
  if (*(char *)(_DAT_14cc2aa50 + 100) != '\0') {
    DAT_14cc29896 = DAT_14cc29896 + '\x01';
  }
  return;
}



// FUNCTION 1460978c0 FUN_1460978c0 body=292 status=ok
// SIG undefined FUN_1460978c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460978c0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc29a68) {
    FUN_144b3d300(&DAT_14cc29a68);
    if (DAT_14cc29a68 == -1) {
      FUN_145c4dcdc();
      FUN_1460979e4();
      FUN_140db5666(&DAT_14cc299c0,0,&DAT_14cc29958,L"FFXRHIDebugViewCS",
                    L"/Plugin/FFX/Private/ffx_fsr3upscaler_debug_view_pass.usf",&DAT_14a1f6a48,5,
                    0x100,FUN_14981c946,FUN_14981c91e,&LAB_14190e14e,&LAB_144655c8c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cc2a738);
      _DAT_14cc299c0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144655c8f);
      _Init_thread_footer(&DAT_14cc29a68);
    }
  }
  return &DAT_14cc299c0;
}



// FUNCTION 1460979e4 FUN_1460979e4 body=205 status=ok
// SIG undefined FUN_1460979e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460979e4(void)

{
  if ((DAT_14cc299bf & 2) == 0) {
    DAT_14cc299bf = DAT_14cc299bf | 2;
    _DAT_14cc29960 = L"FFXRHIDebugViewCS";
    _DAT_14cc29978 = FUN_146826540;
    _DAT_14cc29980 = FUN_146825d77;
    _DAT_14cc29988 = FUN_146825fd6;
    _DAT_14cc29990 = FUN_1407e02ea;
    _DAT_14cc29998 = FUN_146826273;
    _DAT_14cc29970 = FUN_14981c8f0;
    _DAT_14cc299b0 = 0xffffffff000000e0;
    _DAT_14cc299b8 = 8;
    DAT_14cc299bc = 0;
    _DAT_14cc299a0 = &LAB_14981c91a;
    FUN_146097ab2();
    FUN_1407e00cc(&DAT_14cc29958);
    return;
  }
  return;
}



// FUNCTION 146097ab2 FUN_146097ab2 body=123 status=ok
// SIG undefined FUN_146097ab2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146097ab2(void)

{
  _DAT_14cc2aa78 = L"BASE";
  DAT_14cc2aaa2 = 4;
  _DAT_14cc2aa80 = FUN_140b35ae4();
  _DAT_14cc2aa88 = DAT_14cc29968;
  _DAT_14cc2aa90 = &LAB_14682652b;
  DAT_14cc29968 = &DAT_14cc2aa78;
  DAT_14cc299bd = DAT_14cc299bd + '\x01';
  _DAT_14cc2aa98 = 0x100000000;
  if (*(char *)(_DAT_14cc2aa80 + 100) != '\0') {
    DAT_14cc299be = DAT_14cc299be + '\x01';
  }
  return;
}



// FUNCTION 146097b2e FUN_146097b2e body=292 status=ok
// SIG undefined FUN_146097b2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146097b2e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc29b90) {
    FUN_144b3d300(&DAT_14cc29b90);
    if (DAT_14cc29b90 == -1) {
      FUN_145c4dcdc();
      FUN_146097c52();
      FUN_140db5666(&DAT_14cc29ae8,0,&DAT_14cc29a80,L"FFXRHILumaInstabilityCS",
                    L"/Plugin/FFX/Private/ffx_fsr3upscaler_luma_instability_pass.usf",&DAT_14a1f6a48
                    ,5,0x100,FUN_14981c9d0,FUN_14981c9a8,&LAB_14190e178,&LAB_144655c9c,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cc2a738);
      _DAT_14cc29ae8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144655c9f);
      _Init_thread_footer(&DAT_14cc29b90);
    }
  }
  return &DAT_14cc29ae8;
}



// FUNCTION 146097c52 FUN_146097c52 body=205 status=ok
// SIG undefined FUN_146097c52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146097c52(void)

{
  if ((DAT_14cc29ae7 & 2) == 0) {
    DAT_14cc29ae7 = DAT_14cc29ae7 | 2;
    _DAT_14cc29a88 = L"FFXRHILumaInstabilityCS";
    _DAT_14cc29aa0 = FUN_146826540;
    _DAT_14cc29aa8 = FUN_146825d77;
    _DAT_14cc29ab0 = FUN_146825fd6;
    _DAT_14cc29ab8 = FUN_1407e02ea;
    _DAT_14cc29ac0 = FUN_146826273;
    _DAT_14cc29a98 = FUN_14981c97a;
    _DAT_14cc29ad8 = 0xffffffff000000e0;
    _DAT_14cc29ae0 = 8;
    DAT_14cc29ae4 = 0;
    _DAT_14cc29ac8 = &LAB_14981c9a4;
    FUN_146097d20();
    FUN_1407e00cc(&DAT_14cc29a80);
    return;
  }
  return;
}



// FUNCTION 146097d20 FUN_146097d20 body=123 status=ok
// SIG undefined FUN_146097d20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146097d20(void)

{
  _DAT_14cc2aaa8 = L"BASE";
  DAT_14cc2aad2 = 4;
  _DAT_14cc2aab0 = FUN_140b35ae4();
  _DAT_14cc2aab8 = DAT_14cc29a90;
  _DAT_14cc2aac0 = &LAB_14682652b;
  DAT_14cc29a90 = &DAT_14cc2aaa8;
  DAT_14cc29ae5 = DAT_14cc29ae5 + '\x01';
  _DAT_14cc2aac8 = 0x100000000;
  if (*(char *)(_DAT_14cc2aab0 + 100) != '\0') {
    DAT_14cc29ae6 = DAT_14cc29ae6 + '\x01';
  }
  return;
}



// FUNCTION 146097d9c FUN_146097d9c body=292 status=ok
// SIG undefined FUN_146097d9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146097d9c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc29cb8) {
    FUN_144b3d300(&DAT_14cc29cb8);
    if (DAT_14cc29cb8 == -1) {
      FUN_145c4dcdc();
      FUN_146097ec0();
      FUN_140db5666(&DAT_14cc29c10,0,&DAT_14cc29ba8,L"FFXRHILumaPyramidCS",
                    L"/Plugin/FFX/Private/ffx_fsr3upscaler_luma_pyramid_pass.usf",&DAT_14a1f6a48,5,
                    0x100,FUN_14981caf6,FUN_14981cace,&LAB_14190e1a2,&LAB_144655cac,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cc2a738);
      _DAT_14cc29c10 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144655caf);
      _Init_thread_footer(&DAT_14cc29cb8);
    }
  }
  return &DAT_14cc29c10;
}



// FUNCTION 146097ec0 FUN_146097ec0 body=205 status=ok
// SIG undefined FUN_146097ec0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146097ec0(void)

{
  if ((DAT_14cc29c0f & 2) == 0) {
    DAT_14cc29c0f = DAT_14cc29c0f | 2;
    _DAT_14cc29bb0 = L"FFXRHILumaPyramidCS";
    _DAT_14cc29bc8 = FUN_146826540;
    _DAT_14cc29bd0 = FUN_146825d77;
    _DAT_14cc29bd8 = FUN_146825fd6;
    _DAT_14cc29be0 = FUN_1407e02ea;
    _DAT_14cc29be8 = FUN_146826273;
    _DAT_14cc29bc0 = FUN_14981caa0;
    _DAT_14cc29c00 = 0xffffffff000000e0;
    _DAT_14cc29c08 = 8;
    DAT_14cc29c0c = 0;
    _DAT_14cc29bf0 = &LAB_14981caca;
    FUN_146097f8e();
    FUN_1407e00cc(&DAT_14cc29ba8);
    return;
  }
  return;
}



// FUNCTION 146097f8e FUN_146097f8e body=123 status=ok
// SIG undefined FUN_146097f8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146097f8e(void)

{
  _DAT_14cc2aad8 = L"BASE";
  DAT_14cc2ab02 = 4;
  _DAT_14cc2aae0 = FUN_140b35ae4();
  _DAT_14cc2aae8 = DAT_14cc29bb8;
  _DAT_14cc2aaf0 = &LAB_14682652b;
  DAT_14cc29bb8 = &DAT_14cc2aad8;
  DAT_14cc29c0d = DAT_14cc29c0d + '\x01';
  _DAT_14cc2aaf8 = 0x100000000;
  if (*(char *)(_DAT_14cc2aae0 + 100) != '\0') {
    DAT_14cc29c0e = DAT_14cc29c0e + '\x01';
  }
  return;
}



// FUNCTION 14609800a FUN_14609800a body=292 status=ok
// SIG undefined FUN_14609800a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609800a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc29de0) {
    FUN_144b3d300(&DAT_14cc29de0);
    if (DAT_14cc29de0 == -1) {
      FUN_145c4dcdc();
      FUN_14609812e();
      FUN_140db5666(&DAT_14cc29d38,0,&DAT_14cc29cd0,L"FFXRHIPrepareInputsCS",
                    L"/Plugin/FFX/Private/ffx_fsr3upscaler_prepare_inputs_pass.usf",&DAT_14a1f6a48,5
                    ,0x100,FUN_14981cc1c,FUN_14981cbf4,&LAB_14190e1cc,&LAB_144655cbc,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cc2a738);
      _DAT_14cc29d38 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144655cbf);
      _Init_thread_footer(&DAT_14cc29de0);
    }
  }
  return &DAT_14cc29d38;
}



// FUNCTION 14609812e FUN_14609812e body=205 status=ok
// SIG undefined FUN_14609812e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609812e(void)

{
  if ((DAT_14cc29d37 & 2) == 0) {
    DAT_14cc29d37 = DAT_14cc29d37 | 2;
    _DAT_14cc29cd8 = L"FFXRHIPrepareInputsCS";
    _DAT_14cc29cf0 = FUN_146826540;
    _DAT_14cc29cf8 = FUN_146825d77;
    _DAT_14cc29d00 = FUN_146825fd6;
    _DAT_14cc29d08 = FUN_1407e02ea;
    _DAT_14cc29d10 = FUN_146826273;
    _DAT_14cc29ce8 = FUN_14981cbc6;
    _DAT_14cc29d28 = 0xffffffff000000e0;
    _DAT_14cc29d30 = 8;
    DAT_14cc29d34 = 0;
    _DAT_14cc29d18 = &LAB_14981cbf0;
    FUN_1460981fc();
    FUN_1407e00cc(&DAT_14cc29cd0);
    return;
  }
  return;
}



// FUNCTION 1460981fc FUN_1460981fc body=123 status=ok
// SIG undefined FUN_1460981fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460981fc(void)

{
  _DAT_14cc2ab08 = L"BASE";
  DAT_14cc2ab32 = 4;
  _DAT_14cc2ab10 = FUN_140b35ae4();
  _DAT_14cc2ab18 = DAT_14cc29ce0;
  _DAT_14cc2ab20 = &LAB_14682652b;
  DAT_14cc29ce0 = &DAT_14cc2ab08;
  DAT_14cc29d35 = DAT_14cc29d35 + '\x01';
  _DAT_14cc2ab28 = 0x100000000;
  if (*(char *)(_DAT_14cc2ab10 + 100) != '\0') {
    DAT_14cc29d36 = DAT_14cc29d36 + '\x01';
  }
  return;
}



// FUNCTION 146098278 FUN_146098278 body=292 status=ok
// SIG undefined FUN_146098278(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146098278(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc29f08) {
    FUN_144b3d300(&DAT_14cc29f08);
    if (DAT_14cc29f08 == -1) {
      FUN_145c4dcdc();
      FUN_14609839c();
      FUN_140db5666(&DAT_14cc29e60,0,&DAT_14cc29df8,L"FFXRHIPrepareReactivityCS",
                    L"/Plugin/FFX/Private/ffx_fsr3upscaler_prepare_reactivity_pass.usf",
                    &DAT_14a1f6a48,5,0x100,FUN_14981cd42,FUN_14981cd1a,&LAB_14190e1f6,&LAB_144655ccc
                    ,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cc2a738);
      _DAT_14cc29e60 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144655ccf);
      _Init_thread_footer(&DAT_14cc29f08);
    }
  }
  return &DAT_14cc29e60;
}



// FUNCTION 14609839c FUN_14609839c body=205 status=ok
// SIG undefined FUN_14609839c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609839c(void)

{
  if ((DAT_14cc29e5f & 2) == 0) {
    DAT_14cc29e5f = DAT_14cc29e5f | 2;
    _DAT_14cc29e00 = L"FFXRHIPrepareReactivityCS";
    _DAT_14cc29e18 = FUN_146826540;
    _DAT_14cc29e20 = FUN_146825d77;
    _DAT_14cc29e28 = FUN_146825fd6;
    _DAT_14cc29e30 = FUN_1407e02ea;
    _DAT_14cc29e38 = FUN_146826273;
    _DAT_14cc29e10 = FUN_14981ccec;
    _DAT_14cc29e50 = 0xffffffff000000e0;
    _DAT_14cc29e58 = 8;
    DAT_14cc29e5c = 0;
    _DAT_14cc29e40 = &LAB_14981cd16;
    FUN_14609846a();
    FUN_1407e00cc(&DAT_14cc29df8);
    return;
  }
  return;
}



// FUNCTION 14609846a FUN_14609846a body=123 status=ok
// SIG undefined FUN_14609846a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609846a(void)

{
  _DAT_14cc2ab38 = L"BASE";
  DAT_14cc2ab62 = 4;
  _DAT_14cc2ab40 = FUN_140b35ae4();
  _DAT_14cc2ab48 = DAT_14cc29e08;
  _DAT_14cc2ab50 = &LAB_14682652b;
  DAT_14cc29e08 = &DAT_14cc2ab38;
  DAT_14cc29e5d = DAT_14cc29e5d + '\x01';
  _DAT_14cc2ab58 = 0x100000000;
  if (*(char *)(_DAT_14cc2ab40 + 100) != '\0') {
    DAT_14cc29e5e = DAT_14cc29e5e + '\x01';
  }
  return;
}



// FUNCTION 1460984e6 FUN_1460984e6 body=292 status=ok
// SIG undefined FUN_1460984e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460984e6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2a3b8) {
    FUN_144b3d300(&DAT_14cc2a3b8);
    if (DAT_14cc2a3b8 == -1) {
      FUN_145c4dcdc();
      FUN_14609860a();
      FUN_140db5666(&DAT_14cc2a310,0,&DAT_14cc2a2a8,L"FFXRHIShadingChangeCS",
                    L"/Plugin/FFX/Private/ffx_fsr3upscaler_shading_change_pass.usf",&DAT_14a1f6a48,5
                    ,0x100,FUN_14981e1a2,FUN_14981e17a,&LAB_14190e24a,&LAB_1446560fc,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cc2a738);
      _DAT_14cc2a310 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1446560ff);
      _Init_thread_footer(&DAT_14cc2a3b8);
    }
  }
  return &DAT_14cc2a310;
}



// FUNCTION 14609860a FUN_14609860a body=205 status=ok
// SIG undefined FUN_14609860a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609860a(void)

{
  if ((DAT_14cc2a30f & 2) == 0) {
    DAT_14cc2a30f = DAT_14cc2a30f | 2;
    _DAT_14cc2a2b0 = L"FFXRHIShadingChangeCS";
    _DAT_14cc2a2c8 = FUN_146826540;
    _DAT_14cc2a2d0 = FUN_146825d77;
    _DAT_14cc2a2d8 = FUN_146825fd6;
    _DAT_14cc2a2e0 = FUN_1407e02ea;
    _DAT_14cc2a2e8 = FUN_146826273;
    _DAT_14cc2a2c0 = FUN_14981e14c;
    _DAT_14cc2a300 = 0xffffffff000000e0;
    _DAT_14cc2a308 = 8;
    DAT_14cc2a30c = 0;
    _DAT_14cc2a2f0 = &LAB_14981e176;
    FUN_1460986d8();
    FUN_1407e00cc(&DAT_14cc2a2a8);
    return;
  }
  return;
}



// FUNCTION 1460986d8 FUN_1460986d8 body=123 status=ok
// SIG undefined FUN_1460986d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460986d8(void)

{
  _DAT_14cc2ab98 = L"BASE";
  DAT_14cc2abc2 = 4;
  _DAT_14cc2aba0 = FUN_140b35ae4();
  _DAT_14cc2aba8 = DAT_14cc2a2b8;
  _DAT_14cc2abb0 = &LAB_14682652b;
  DAT_14cc2a2b8 = &DAT_14cc2ab98;
  DAT_14cc2a30d = DAT_14cc2a30d + '\x01';
  _DAT_14cc2abb8 = 0x100000000;
  if (*(char *)(_DAT_14cc2aba0 + 100) != '\0') {
    DAT_14cc2a30e = DAT_14cc2a30e + '\x01';
  }
  return;
}



// FUNCTION 146098754 FUN_146098754 body=292 status=ok
// SIG undefined FUN_146098754(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146098754(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2a4e0) {
    FUN_144b3d300(&DAT_14cc2a4e0);
    if (DAT_14cc2a4e0 == -1) {
      FUN_145c4dcdc();
      FUN_146098878();
      FUN_140db5666(&DAT_14cc2a438,0,&DAT_14cc2a3d0,L"FFXRHIShadingChangePyramidCS",
                    L"/Plugin/FFX/Private/ffx_fsr3upscaler_shading_change_pyramid_pass.usf",
                    &DAT_14a1f6a48,5,0x100,FUN_14981e22c,FUN_14981e204,&LAB_14190e274,&LAB_14465610c
                    ,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cc2a738);
      _DAT_14cc2a438 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14465610f);
      _Init_thread_footer(&DAT_14cc2a4e0);
    }
  }
  return &DAT_14cc2a438;
}



// FUNCTION 146098878 FUN_146098878 body=205 status=ok
// SIG undefined FUN_146098878(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146098878(void)

{
  if ((DAT_14cc2a437 & 2) == 0) {
    DAT_14cc2a437 = DAT_14cc2a437 | 2;
    _DAT_14cc2a3d8 = L"FFXRHIShadingChangePyramidCS";
    _DAT_14cc2a3f0 = FUN_146826540;
    _DAT_14cc2a3f8 = FUN_146825d77;
    _DAT_14cc2a400 = FUN_146825fd6;
    _DAT_14cc2a408 = FUN_1407e02ea;
    _DAT_14cc2a410 = FUN_146826273;
    _DAT_14cc2a3e8 = FUN_14981e1d6;
    _DAT_14cc2a428 = 0xffffffff000000e0;
    _DAT_14cc2a430 = 8;
    DAT_14cc2a434 = 0;
    _DAT_14cc2a418 = &LAB_14981e200;
    FUN_146098946();
    FUN_1407e00cc(&DAT_14cc2a3d0);
    return;
  }
  return;
}



// FUNCTION 146098946 FUN_146098946 body=123 status=ok
// SIG undefined FUN_146098946(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146098946(void)

{
  _DAT_14cc2abc8 = L"BASE";
  DAT_14cc2abf2 = 4;
  _DAT_14cc2abd0 = FUN_140b35ae4();
  _DAT_14cc2abd8 = DAT_14cc2a3e0;
  _DAT_14cc2abe0 = &LAB_14682652b;
  DAT_14cc2a3e0 = &DAT_14cc2abc8;
  DAT_14cc2a435 = DAT_14cc2a435 + '\x01';
  _DAT_14cc2abe8 = 0x100000000;
  if (*(char *)(_DAT_14cc2abd0 + 100) != '\0') {
    DAT_14cc2a436 = DAT_14cc2a436 + '\x01';
  }
  return;
}



// FUNCTION 1460989c2 FUN_1460989c2 body=292 status=ok
// SIG undefined FUN_1460989c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460989c2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2b0e0) {
    FUN_144b3d300(&DAT_14cc2b0e0);
    if (DAT_14cc2b0e0 == -1) {
      FUN_145aa6372();
      FUN_146098ae6();
      FUN_140db5666(&DAT_14cc2b038,0,&DAT_14cc2afd0,L"FFXRHIFIDebugViewCS",
                    L"/Plugin/FFX/Private/ffx_frameinterpolation_debug_view_pass.usf",&DAT_14a1f6a48
                    ,5,8,FUN_149828902,FUN_1498288da,&LAB_14190e29e,&LAB_1498288d6,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cc2c950);
      _DAT_14cc2b038 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14465d57f);
      _Init_thread_footer(&DAT_14cc2b0e0);
    }
  }
  return &DAT_14cc2b038;
}



// FUNCTION 146098ae6 FUN_146098ae6 body=205 status=ok
// SIG undefined FUN_146098ae6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146098ae6(void)

{
  if ((DAT_14cc2b037 & 2) == 0) {
    DAT_14cc2b037 = DAT_14cc2b037 | 2;
    _DAT_14cc2afd8 = L"FFXRHIFIDebugViewCS";
    _DAT_14cc2aff0 = FUN_146826540;
    _DAT_14cc2aff8 = FUN_146825d77;
    _DAT_14cc2b000 = FUN_146825fd6;
    _DAT_14cc2b008 = FUN_1407e02ea;
    _DAT_14cc2b010 = FUN_146826273;
    _DAT_14cc2afe8 = FUN_1498288a8;
    _DAT_14cc2b028 = 0xffffffff000000e0;
    _DAT_14cc2b030 = 8;
    DAT_14cc2b034 = 0;
    _DAT_14cc2b018 = &LAB_1498288d2;
    FUN_146098bb4();
    FUN_1407e00cc(&DAT_14cc2afd0);
    return;
  }
  return;
}



// FUNCTION 146098bb4 FUN_146098bb4 body=123 status=ok
// SIG undefined FUN_146098bb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146098bb4(void)

{
  _DAT_14cc2cb98 = L"BASE";
  DAT_14cc2cbc2 = 4;
  _DAT_14cc2cba0 = FUN_140b35ae4();
  _DAT_14cc2cba8 = DAT_14cc2afe0;
  _DAT_14cc2cbb0 = &LAB_14682652b;
  DAT_14cc2afe0 = &DAT_14cc2cb98;
  DAT_14cc2b035 = DAT_14cc2b035 + '\x01';
  _DAT_14cc2cbb8 = 0x100000000;
  if (*(char *)(_DAT_14cc2cba0 + 100) != '\0') {
    DAT_14cc2b036 = DAT_14cc2b036 + '\x01';
  }
  return;
}



// FUNCTION 146098c30 FUN_146098c30 body=292 status=ok
// SIG undefined FUN_146098c30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146098c30(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2b208) {
    FUN_144b3d300(&DAT_14cc2b208);
    if (DAT_14cc2b208 == -1) {
      FUN_145aa6372();
      FUN_146098d54();
      FUN_140db5666(&DAT_14cc2b160,0,&DAT_14cc2b0f8,L"FFXRHIFIDisocclusionMaskCS",
                    L"/Plugin/FFX/Private/ffx_frameinterpolation_disocclusion_mask_pass.usf",
                    &DAT_14a1f6a48,5,8,FUN_149828990,FUN_149828968,&LAB_14190e2a4,&LAB_149828964,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cc2c950);
      _DAT_14cc2b160 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14465d58b);
      _Init_thread_footer(&DAT_14cc2b208);
    }
  }
  return &DAT_14cc2b160;
}



// FUNCTION 146098d54 FUN_146098d54 body=205 status=ok
// SIG undefined FUN_146098d54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146098d54(void)

{
  if ((DAT_14cc2b15f & 2) == 0) {
    DAT_14cc2b15f = DAT_14cc2b15f | 2;
    _DAT_14cc2b100 = L"FFXRHIFIDisocclusionMaskCS";
    _DAT_14cc2b118 = FUN_146826540;
    _DAT_14cc2b120 = FUN_146825d77;
    _DAT_14cc2b128 = FUN_146825fd6;
    _DAT_14cc2b130 = FUN_1407e02ea;
    _DAT_14cc2b138 = FUN_146826273;
    _DAT_14cc2b110 = FUN_149828936;
    _DAT_14cc2b150 = 0xffffffff000000e0;
    _DAT_14cc2b158 = 8;
    DAT_14cc2b15c = 0;
    _DAT_14cc2b140 = &LAB_149828960;
    FUN_146098e22();
    FUN_1407e00cc(&DAT_14cc2b0f8);
    return;
  }
  return;
}



// FUNCTION 146098e22 FUN_146098e22 body=123 status=ok
// SIG undefined FUN_146098e22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146098e22(void)

{
  _DAT_14cc2cbc8 = L"BASE";
  DAT_14cc2cbf2 = 4;
  _DAT_14cc2cbd0 = FUN_140b35ae4();
  _DAT_14cc2cbd8 = DAT_14cc2b108;
  _DAT_14cc2cbe0 = &LAB_14682652b;
  DAT_14cc2b108 = &DAT_14cc2cbc8;
  DAT_14cc2b15d = DAT_14cc2b15d + '\x01';
  _DAT_14cc2cbe8 = 0x100000000;
  if (*(char *)(_DAT_14cc2cbd0 + 100) != '\0') {
    DAT_14cc2b15e = DAT_14cc2b15e + '\x01';
  }
  return;
}



// FUNCTION 146098e9e FUN_146098e9e body=292 status=ok
// SIG undefined FUN_146098e9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146098e9e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2b330) {
    FUN_144b3d300(&DAT_14cc2b330);
    if (DAT_14cc2b330 == -1) {
      FUN_145aa6372();
      FUN_146098fc2();
      FUN_140db5666(&DAT_14cc2b288,0,&DAT_14cc2b220,L"FFXRHIFIFrameInterpolationCS",
                    L"/Plugin/FFX/Private/ffx_frameinterpolation_pass.usf",&DAT_14a1f6a48,5,8,
                    FUN_149828a1e,FUN_1498289f6,&LAB_14190e2aa,&LAB_1498289f2,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cc2c950);
      _DAT_14cc2b288 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14465d597);
      _Init_thread_footer(&DAT_14cc2b330);
    }
  }
  return &DAT_14cc2b288;
}



// FUNCTION 146098fc2 FUN_146098fc2 body=205 status=ok
// SIG undefined FUN_146098fc2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146098fc2(void)

{
  if ((DAT_14cc2b287 & 2) == 0) {
    DAT_14cc2b287 = DAT_14cc2b287 | 2;
    _DAT_14cc2b228 = L"FFXRHIFIFrameInterpolationCS";
    _DAT_14cc2b240 = FUN_146826540;
    _DAT_14cc2b248 = FUN_146825d77;
    _DAT_14cc2b250 = FUN_146825fd6;
    _DAT_14cc2b258 = FUN_1407e02ea;
    _DAT_14cc2b260 = FUN_146826273;
    _DAT_14cc2b238 = FUN_1498289c4;
    _DAT_14cc2b278 = 0xffffffff000000e0;
    _DAT_14cc2b280 = 8;
    DAT_14cc2b284 = 0;
    _DAT_14cc2b268 = &LAB_1498289ee;
    FUN_146099090();
    FUN_1407e00cc(&DAT_14cc2b220);
    return;
  }
  return;
}



// FUNCTION 146099090 FUN_146099090 body=123 status=ok
// SIG undefined FUN_146099090(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146099090(void)

{
  _DAT_14cc2cbf8 = L"BASE";
  DAT_14cc2cc22 = 4;
  _DAT_14cc2cc00 = FUN_140b35ae4();
  _DAT_14cc2cc08 = DAT_14cc2b230;
  _DAT_14cc2cc10 = &LAB_14682652b;
  DAT_14cc2b230 = &DAT_14cc2cbf8;
  DAT_14cc2b285 = DAT_14cc2b285 + '\x01';
  _DAT_14cc2cc18 = 0x100000000;
  if (*(char *)(_DAT_14cc2cc00 + 100) != '\0') {
    DAT_14cc2b286 = DAT_14cc2b286 + '\x01';
  }
  return;
}



// FUNCTION 14609910c FUN_14609910c body=292 status=ok
// SIG undefined FUN_14609910c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609910c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2b458) {
    FUN_144b3d300(&DAT_14cc2b458);
    if (DAT_14cc2b458 == -1) {
      FUN_145aa6372();
      FUN_146099230();
      FUN_140db5666(&DAT_14cc2b3b0,0,&DAT_14cc2b348,L"FFXRHIFISetupCS",
                    L"/Plugin/FFX/Private/ffx_frameinterpolation_setup_pass.usf",&DAT_14a1f6a48,5,8,
                    FUN_149828aac,FUN_149828a84,&LAB_14190e2b0,&LAB_149828a80,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cc2c950);
      _DAT_14cc2b3b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14465d5a3);
      _Init_thread_footer(&DAT_14cc2b458);
    }
  }
  return &DAT_14cc2b3b0;
}



// FUNCTION 146099230 FUN_146099230 body=205 status=ok
// SIG undefined FUN_146099230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146099230(void)

{
  if ((DAT_14cc2b3af & 2) == 0) {
    DAT_14cc2b3af = DAT_14cc2b3af | 2;
    _DAT_14cc2b350 = L"FFXRHIFISetupCS";
    _DAT_14cc2b368 = FUN_146826540;
    _DAT_14cc2b370 = FUN_146825d77;
    _DAT_14cc2b378 = FUN_146825fd6;
    _DAT_14cc2b380 = FUN_1407e02ea;
    _DAT_14cc2b388 = FUN_146826273;
    _DAT_14cc2b360 = FUN_149828a52;
    _DAT_14cc2b3a0 = 0xffffffff000000e0;
    _DAT_14cc2b3a8 = 8;
    DAT_14cc2b3ac = 0;
    _DAT_14cc2b390 = &LAB_149828a7c;
    FUN_1460992fe();
    FUN_1407e00cc(&DAT_14cc2b348);
    return;
  }
  return;
}



// FUNCTION 1460992fe FUN_1460992fe body=123 status=ok
// SIG undefined FUN_1460992fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460992fe(void)

{
  _DAT_14cc2cc28 = L"BASE";
  DAT_14cc2cc52 = 4;
  _DAT_14cc2cc30 = FUN_140b35ae4();
  _DAT_14cc2cc38 = DAT_14cc2b358;
  _DAT_14cc2cc40 = &LAB_14682652b;
  DAT_14cc2b358 = &DAT_14cc2cc28;
  DAT_14cc2b3ad = DAT_14cc2b3ad + '\x01';
  _DAT_14cc2cc48 = 0x100000000;
  if (*(char *)(_DAT_14cc2cc30 + 100) != '\0') {
    DAT_14cc2b3ae = DAT_14cc2b3ae + '\x01';
  }
  return;
}



// FUNCTION 14609937a FUN_14609937a body=292 status=ok
// SIG undefined FUN_14609937a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609937a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2b580) {
    FUN_144b3d300(&DAT_14cc2b580);
    if (DAT_14cc2b580 == -1) {
      FUN_145aa6372();
      FUN_14609949e();
      FUN_140db5666(&DAT_14cc2b4d8,0,&DAT_14cc2b470,L"FFXRHIFIGameMotionVectorFieldCS",
                    L"/Plugin/FFX/Private/ffx_frameinterpolation_game_motion_vector_field_pass.usf",
                    &DAT_14a1f6a48,5,8,FUN_149828b3a,FUN_149828b12,&LAB_14190e2b6,&LAB_149828b0e,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cc2c950);
      _DAT_14cc2b4d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14465d5af);
      _Init_thread_footer(&DAT_14cc2b580);
    }
  }
  return &DAT_14cc2b4d8;
}



// FUNCTION 14609949e FUN_14609949e body=205 status=ok
// SIG undefined FUN_14609949e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609949e(void)

{
  if ((DAT_14cc2b4d7 & 2) == 0) {
    DAT_14cc2b4d7 = DAT_14cc2b4d7 | 2;
    _DAT_14cc2b478 = L"FFXRHIFIGameMotionVectorFieldCS";
    _DAT_14cc2b490 = FUN_146826540;
    _DAT_14cc2b498 = FUN_146825d77;
    _DAT_14cc2b4a0 = FUN_146825fd6;
    _DAT_14cc2b4a8 = FUN_1407e02ea;
    _DAT_14cc2b4b0 = FUN_146826273;
    _DAT_14cc2b488 = FUN_149828ae0;
    _DAT_14cc2b4c8 = 0xffffffff000000e0;
    _DAT_14cc2b4d0 = 8;
    DAT_14cc2b4d4 = 0;
    _DAT_14cc2b4b8 = &LAB_149828b0a;
    FUN_14609956c();
    FUN_1407e00cc(&DAT_14cc2b470);
    return;
  }
  return;
}



// FUNCTION 14609956c FUN_14609956c body=123 status=ok
// SIG undefined FUN_14609956c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609956c(void)

{
  _DAT_14cc2cc58 = L"BASE";
  DAT_14cc2cc82 = 4;
  _DAT_14cc2cc60 = FUN_140b35ae4();
  _DAT_14cc2cc68 = DAT_14cc2b480;
  _DAT_14cc2cc70 = &LAB_14682652b;
  DAT_14cc2b480 = &DAT_14cc2cc58;
  DAT_14cc2b4d5 = DAT_14cc2b4d5 + '\x01';
  _DAT_14cc2cc78 = 0x100000000;
  if (*(char *)(_DAT_14cc2cc60 + 100) != '\0') {
    DAT_14cc2b4d6 = DAT_14cc2b4d6 + '\x01';
  }
  return;
}



// FUNCTION 1460995e8 FUN_1460995e8 body=292 status=ok
// SIG undefined FUN_1460995e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460995e8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2b6a8) {
    FUN_144b3d300(&DAT_14cc2b6a8);
    if (DAT_14cc2b6a8 == -1) {
      FUN_145aa6372();
      FUN_14609970c();
      FUN_140db5666(&DAT_14cc2b600,0,&DAT_14cc2b598,L"FFXRHIFIGameVectorFieldInpaintingCS",
                    L"/Plugin/FFX/Private/ffx_frameinterpolation_compute_game_vector_field_inpainting_pyramid_pass.usf"
                    ,&DAT_14a1f6a48,5,8,FUN_149828bc8,FUN_149828ba0,&LAB_14190e2bc,&LAB_149828b9c,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cc2c950);
      _DAT_14cc2b600 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14465d5bb);
      _Init_thread_footer(&DAT_14cc2b6a8);
    }
  }
  return &DAT_14cc2b600;
}



// FUNCTION 14609970c FUN_14609970c body=205 status=ok
// SIG undefined FUN_14609970c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609970c(void)

{
  if ((DAT_14cc2b5ff & 2) == 0) {
    DAT_14cc2b5ff = DAT_14cc2b5ff | 2;
    _DAT_14cc2b5a0 = L"FFXRHIFIGameVectorFieldInpaintingCS";
    _DAT_14cc2b5b8 = FUN_146826540;
    _DAT_14cc2b5c0 = FUN_146825d77;
    _DAT_14cc2b5c8 = FUN_146825fd6;
    _DAT_14cc2b5d0 = FUN_1407e02ea;
    _DAT_14cc2b5d8 = FUN_146826273;
    _DAT_14cc2b5b0 = FUN_149828b6e;
    _DAT_14cc2b5f0 = 0xffffffff000000e0;
    _DAT_14cc2b5f8 = 8;
    DAT_14cc2b5fc = 0;
    _DAT_14cc2b5e0 = &LAB_149828b98;
    FUN_1460997da();
    FUN_1407e00cc(&DAT_14cc2b598);
    return;
  }
  return;
}



// FUNCTION 1460997da FUN_1460997da body=123 status=ok
// SIG undefined FUN_1460997da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460997da(void)

{
  _DAT_14cc2cc88 = L"BASE";
  DAT_14cc2ccb2 = 4;
  _DAT_14cc2cc90 = FUN_140b35ae4();
  _DAT_14cc2cc98 = DAT_14cc2b5a8;
  _DAT_14cc2cca0 = &LAB_14682652b;
  DAT_14cc2b5a8 = &DAT_14cc2cc88;
  DAT_14cc2b5fd = DAT_14cc2b5fd + '\x01';
  _DAT_14cc2cca8 = 0x100000000;
  if (*(char *)(_DAT_14cc2cc90 + 100) != '\0') {
    DAT_14cc2b5fe = DAT_14cc2b5fe + '\x01';
  }
  return;
}



// FUNCTION 146099856 FUN_146099856 body=292 status=ok
// SIG undefined FUN_146099856(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146099856(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2b7d0) {
    FUN_144b3d300(&DAT_14cc2b7d0);
    if (DAT_14cc2b7d0 == -1) {
      FUN_145aa6372();
      FUN_14609997a();
      FUN_140db5666(&DAT_14cc2b728,0,&DAT_14cc2b6c0,L"FFXRHIFIInpaintingMaskCS",
                    L"/Plugin/FFX/Private/ffx_frameinterpolation_inpainting_pass.usf",&DAT_14a1f6a48
                    ,5,8,FUN_149828c56,FUN_149828c2e,&LAB_14190e2c2,&LAB_149828c2a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cc2c950);
      _DAT_14cc2b728 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14465d5c7);
      _Init_thread_footer(&DAT_14cc2b7d0);
    }
  }
  return &DAT_14cc2b728;
}



// FUNCTION 14609997a FUN_14609997a body=205 status=ok
// SIG undefined FUN_14609997a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609997a(void)

{
  if ((DAT_14cc2b727 & 2) == 0) {
    DAT_14cc2b727 = DAT_14cc2b727 | 2;
    _DAT_14cc2b6c8 = L"FFXRHIFIInpaintingMaskCS";
    _DAT_14cc2b6e0 = FUN_146826540;
    _DAT_14cc2b6e8 = FUN_146825d77;
    _DAT_14cc2b6f0 = FUN_146825fd6;
    _DAT_14cc2b6f8 = FUN_1407e02ea;
    _DAT_14cc2b700 = FUN_146826273;
    _DAT_14cc2b6d8 = FUN_149828bfc;
    _DAT_14cc2b718 = 0xffffffff000000e0;
    _DAT_14cc2b720 = 8;
    DAT_14cc2b724 = 0;
    _DAT_14cc2b708 = &LAB_149828c26;
    FUN_146099a48();
    FUN_1407e00cc(&DAT_14cc2b6c0);
    return;
  }
  return;
}



// FUNCTION 146099a48 FUN_146099a48 body=123 status=ok
// SIG undefined FUN_146099a48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146099a48(void)

{
  _DAT_14cc2ccb8 = L"BASE";
  DAT_14cc2cce2 = 4;
  _DAT_14cc2ccc0 = FUN_140b35ae4();
  _DAT_14cc2ccc8 = DAT_14cc2b6d0;
  _DAT_14cc2ccd0 = &LAB_14682652b;
  DAT_14cc2b6d0 = &DAT_14cc2ccb8;
  DAT_14cc2b725 = DAT_14cc2b725 + '\x01';
  _DAT_14cc2ccd8 = 0x100000000;
  if (*(char *)(_DAT_14cc2ccc0 + 100) != '\0') {
    DAT_14cc2b726 = DAT_14cc2b726 + '\x01';
  }
  return;
}



// FUNCTION 146099ac4 FUN_146099ac4 body=292 status=ok
// SIG undefined FUN_146099ac4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146099ac4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2b8f8) {
    FUN_144b3d300(&DAT_14cc2b8f8);
    if (DAT_14cc2b8f8 == -1) {
      FUN_145aa6372();
      FUN_146099be8();
      FUN_140db5666(&DAT_14cc2b850,0,&DAT_14cc2b7e8,L"FFXRHIFIInpaintingPyramidCS",
                    L"/Plugin/FFX/Private/ffx_frameinterpolation_compute_inpainting_pyramid_pass.usf"
                    ,&DAT_14a1f6a48,5,8,FUN_149828ce4,FUN_149828cbc,&LAB_14190e2c8,&LAB_149828cb8,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cc2c950);
      _DAT_14cc2b850 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14465d5d3);
      _Init_thread_footer(&DAT_14cc2b8f8);
    }
  }
  return &DAT_14cc2b850;
}



// FUNCTION 146099be8 FUN_146099be8 body=205 status=ok
// SIG undefined FUN_146099be8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146099be8(void)

{
  if ((DAT_14cc2b84f & 2) == 0) {
    DAT_14cc2b84f = DAT_14cc2b84f | 2;
    _DAT_14cc2b7f0 = L"FFXRHIFIInpaintingPyramidCS";
    _DAT_14cc2b808 = FUN_146826540;
    _DAT_14cc2b810 = FUN_146825d77;
    _DAT_14cc2b818 = FUN_146825fd6;
    _DAT_14cc2b820 = FUN_1407e02ea;
    _DAT_14cc2b828 = FUN_146826273;
    _DAT_14cc2b800 = FUN_149828c8a;
    _DAT_14cc2b840 = 0xffffffff000000e0;
    _DAT_14cc2b848 = 8;
    DAT_14cc2b84c = 0;
    _DAT_14cc2b830 = &LAB_149828cb4;
    FUN_146099cb6();
    FUN_1407e00cc(&DAT_14cc2b7e8);
    return;
  }
  return;
}



// FUNCTION 146099cb6 FUN_146099cb6 body=123 status=ok
// SIG undefined FUN_146099cb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146099cb6(void)

{
  _DAT_14cc2cce8 = L"BASE";
  DAT_14cc2cd12 = 4;
  _DAT_14cc2ccf0 = FUN_140b35ae4();
  _DAT_14cc2ccf8 = DAT_14cc2b7f8;
  _DAT_14cc2cd00 = &LAB_14682652b;
  DAT_14cc2b7f8 = &DAT_14cc2cce8;
  DAT_14cc2b84d = DAT_14cc2b84d + '\x01';
  _DAT_14cc2cd08 = 0x100000000;
  if (*(char *)(_DAT_14cc2ccf0 + 100) != '\0') {
    DAT_14cc2b84e = DAT_14cc2b84e + '\x01';
  }
  return;
}



// FUNCTION 146099d32 FUN_146099d32 body=292 status=ok
// SIG undefined FUN_146099d32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146099d32(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2ba20) {
    FUN_144b3d300(&DAT_14cc2ba20);
    if (DAT_14cc2ba20 == -1) {
      FUN_145aa6372();
      FUN_146099e56();
      FUN_140db5666(&DAT_14cc2b978,0,&DAT_14cc2b910,L"FFXRHIFIOpticalFlowVectorFieldCS",
                    L"/Plugin/FFX/Private/ffx_frameinterpolation_optical_flow_vector_field.usf",
                    &DAT_14a1f6a48,5,8,FUN_149828d72,FUN_149828d4a,&LAB_14190e2ce,&LAB_149828d46,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cc2c950);
      _DAT_14cc2b978 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14465d5df);
      _Init_thread_footer(&DAT_14cc2ba20);
    }
  }
  return &DAT_14cc2b978;
}



// FUNCTION 146099e56 FUN_146099e56 body=205 status=ok
// SIG undefined FUN_146099e56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146099e56(void)

{
  if ((DAT_14cc2b977 & 2) == 0) {
    DAT_14cc2b977 = DAT_14cc2b977 | 2;
    _DAT_14cc2b918 = L"FFXRHIFIOpticalFlowVectorFieldCS";
    _DAT_14cc2b930 = FUN_146826540;
    _DAT_14cc2b938 = FUN_146825d77;
    _DAT_14cc2b940 = FUN_146825fd6;
    _DAT_14cc2b948 = FUN_1407e02ea;
    _DAT_14cc2b950 = FUN_146826273;
    _DAT_14cc2b928 = FUN_149828d18;
    _DAT_14cc2b968 = 0xffffffff000000e0;
    _DAT_14cc2b970 = 8;
    DAT_14cc2b974 = 0;
    _DAT_14cc2b958 = &LAB_149828d42;
    FUN_146099f24();
    FUN_1407e00cc(&DAT_14cc2b910);
    return;
  }
  return;
}



// FUNCTION 146099f24 FUN_146099f24 body=123 status=ok
// SIG undefined FUN_146099f24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146099f24(void)

{
  _DAT_14cc2cd18 = L"BASE";
  DAT_14cc2cd42 = 4;
  _DAT_14cc2cd20 = FUN_140b35ae4();
  _DAT_14cc2cd28 = DAT_14cc2b920;
  _DAT_14cc2cd30 = &LAB_14682652b;
  DAT_14cc2b920 = &DAT_14cc2cd18;
  DAT_14cc2b975 = DAT_14cc2b975 + '\x01';
  _DAT_14cc2cd38 = 0x100000000;
  if (*(char *)(_DAT_14cc2cd20 + 100) != '\0') {
    DAT_14cc2b976 = DAT_14cc2b976 + '\x01';
  }
  return;
}



// FUNCTION 146099fa0 FUN_146099fa0 body=292 status=ok
// SIG undefined FUN_146099fa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146099fa0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2bb48) {
    FUN_144b3d300(&DAT_14cc2bb48);
    if (DAT_14cc2bb48 == -1) {
      FUN_145aa6372();
      FUN_14609a0c4();
      FUN_140db5666(&DAT_14cc2baa0,0,&DAT_14cc2ba38,L"FFXRHIFIReconstructAndDilateCS",
                    L"/Plugin/FFX/Private/ffx_frameinterpolation_reconstruct_and_dilate_pass.usf",
                    &DAT_14a1f6a48,5,8,FUN_149828e00,FUN_149828dd8,&LAB_14190e2d4,&LAB_149828dd4,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cc2c950);
      _DAT_14cc2baa0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14465d5eb);
      _Init_thread_footer(&DAT_14cc2bb48);
    }
  }
  return &DAT_14cc2baa0;
}



// FUNCTION 14609a0c4 FUN_14609a0c4 body=205 status=ok
// SIG undefined FUN_14609a0c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609a0c4(void)

{
  if ((DAT_14cc2ba9f & 2) == 0) {
    DAT_14cc2ba9f = DAT_14cc2ba9f | 2;
    _DAT_14cc2ba40 = L"FFXRHIFIReconstructAndDilateCS";
    _DAT_14cc2ba58 = FUN_146826540;
    _DAT_14cc2ba60 = FUN_146825d77;
    _DAT_14cc2ba68 = FUN_146825fd6;
    _DAT_14cc2ba70 = FUN_1407e02ea;
    _DAT_14cc2ba78 = FUN_146826273;
    _DAT_14cc2ba50 = FUN_149828da6;
    _DAT_14cc2ba90 = 0xffffffff000000e0;
    _DAT_14cc2ba98 = 8;
    DAT_14cc2ba9c = 0;
    _DAT_14cc2ba80 = &LAB_149828dd0;
    FUN_14609a192();
    FUN_1407e00cc(&DAT_14cc2ba38);
    return;
  }
  return;
}



// FUNCTION 14609a192 FUN_14609a192 body=123 status=ok
// SIG undefined FUN_14609a192(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609a192(void)

{
  _DAT_14cc2cd48 = L"BASE";
  DAT_14cc2cd72 = 4;
  _DAT_14cc2cd50 = FUN_140b35ae4();
  _DAT_14cc2cd58 = DAT_14cc2ba48;
  _DAT_14cc2cd60 = &LAB_14682652b;
  DAT_14cc2ba48 = &DAT_14cc2cd48;
  DAT_14cc2ba9d = DAT_14cc2ba9d + '\x01';
  _DAT_14cc2cd68 = 0x100000000;
  if (*(char *)(_DAT_14cc2cd50 + 100) != '\0') {
    DAT_14cc2ba9e = DAT_14cc2ba9e + '\x01';
  }
  return;
}



// FUNCTION 14609a20e FUN_14609a20e body=292 status=ok
// SIG undefined FUN_14609a20e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609a20e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2bc70) {
    FUN_144b3d300(&DAT_14cc2bc70);
    if (DAT_14cc2bc70 == -1) {
      FUN_145aa6372();
      FUN_14609a332();
      FUN_140db5666(&DAT_14cc2bbc8,0,&DAT_14cc2bb60,L"FFXRHIFIReconstructPrevDepthCS",
                    L"/Plugin/FFX/Private/ffx_frameinterpolation_reconstruct_prev_depth_pass.usf",
                    &DAT_14a1f6a48,5,8,FUN_149828e8e,FUN_149828e66,&LAB_14190e2da,&LAB_149828e62,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cc2c950);
      _DAT_14cc2bbc8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14465d5f7);
      _Init_thread_footer(&DAT_14cc2bc70);
    }
  }
  return &DAT_14cc2bbc8;
}



// FUNCTION 14609a332 FUN_14609a332 body=205 status=ok
// SIG undefined FUN_14609a332(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609a332(void)

{
  if ((DAT_14cc2bbc7 & 2) == 0) {
    DAT_14cc2bbc7 = DAT_14cc2bbc7 | 2;
    _DAT_14cc2bb68 = L"FFXRHIFIReconstructPrevDepthCS";
    _DAT_14cc2bb80 = FUN_146826540;
    _DAT_14cc2bb88 = FUN_146825d77;
    _DAT_14cc2bb90 = FUN_146825fd6;
    _DAT_14cc2bb98 = FUN_1407e02ea;
    _DAT_14cc2bba0 = FUN_146826273;
    _DAT_14cc2bb78 = FUN_149828e34;
    _DAT_14cc2bbb8 = 0xffffffff000000e0;
    _DAT_14cc2bbc0 = 8;
    DAT_14cc2bbc4 = 0;
    _DAT_14cc2bba8 = &LAB_149828e5e;
    FUN_14609a400();
    FUN_1407e00cc(&DAT_14cc2bb60);
    return;
  }
  return;
}



// FUNCTION 14609a400 FUN_14609a400 body=123 status=ok
// SIG undefined FUN_14609a400(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609a400(void)

{
  _DAT_14cc2cd78 = L"BASE";
  DAT_14cc2cda2 = 4;
  _DAT_14cc2cd80 = FUN_140b35ae4();
  _DAT_14cc2cd88 = DAT_14cc2bb70;
  _DAT_14cc2cd90 = &LAB_14682652b;
  DAT_14cc2bb70 = &DAT_14cc2cd78;
  DAT_14cc2bbc5 = DAT_14cc2bbc5 + '\x01';
  _DAT_14cc2cd98 = 0x100000000;
  if (*(char *)(_DAT_14cc2cd80 + 100) != '\0') {
    DAT_14cc2bbc6 = DAT_14cc2bbc6 + '\x01';
  }
  return;
}



// FUNCTION 14609a47c FUN_14609a47c body=292 status=ok
// SIG undefined FUN_14609a47c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609a47c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2bff0) {
    FUN_144b3d300(&DAT_14cc2bff0);
    if (DAT_14cc2bff0 == -1) {
      FUN_145c9d2f2();
      FUN_14609a5a0();
      FUN_140db5666(&DAT_14cc2bf48,0,&DAT_14cc2bee0,L"FFXRHIOpticalFlowComputeOpticalFlowAdvCS",
                    L"/Plugin/FFX/Private/ffx_opticalflow_compute_optical_flow_advanced_pass_v5.usf"
                    ,&DAT_14a1f6a48,5,4,FUN_14982a2ba,FUN_14982a292,&LAB_146762dae,&LAB_14982a28e,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cc2c9d8);
      _DAT_14cc2bf48 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14465d817);
      _Init_thread_footer(&DAT_14cc2bff0);
    }
  }
  return &DAT_14cc2bf48;
}



// FUNCTION 14609a5a0 FUN_14609a5a0 body=205 status=ok
// SIG undefined FUN_14609a5a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609a5a0(void)

{
  if ((DAT_14cc2bf47 & 2) == 0) {
    DAT_14cc2bf47 = DAT_14cc2bf47 | 2;
    _DAT_14cc2bee8 = L"FFXRHIOpticalFlowComputeOpticalFlowAdvCS";
    _DAT_14cc2bf00 = FUN_146826540;
    _DAT_14cc2bf08 = FUN_146825d77;
    _DAT_14cc2bf10 = FUN_146825fd6;
    _DAT_14cc2bf18 = FUN_1407e02ea;
    _DAT_14cc2bf20 = FUN_146826273;
    _DAT_14cc2bef8 = FUN_14982a260;
    _DAT_14cc2bf38 = 0xffffffff000000e0;
    _DAT_14cc2bf40 = 8;
    DAT_14cc2bf44 = 0;
    _DAT_14cc2bf28 = &LAB_14982a28a;
    FUN_14609a66e();
    FUN_1407e00cc(&DAT_14cc2bee0);
    return;
  }
  return;
}



// FUNCTION 14609a66e FUN_14609a66e body=123 status=ok
// SIG undefined FUN_14609a66e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609a66e(void)

{
  _DAT_14cc2cdd8 = L"BASE";
  DAT_14cc2ce02 = 4;
  _DAT_14cc2cde0 = FUN_140b35ae4();
  _DAT_14cc2cde8 = DAT_14cc2bef0;
  _DAT_14cc2cdf0 = &LAB_14682652b;
  DAT_14cc2bef0 = &DAT_14cc2cdd8;
  DAT_14cc2bf45 = DAT_14cc2bf45 + '\x01';
  _DAT_14cc2cdf8 = 0x100000000;
  if (*(char *)(_DAT_14cc2cde0 + 100) != '\0') {
    DAT_14cc2bf46 = DAT_14cc2bf46 + '\x01';
  }
  return;
}



// FUNCTION 14609a6ea FUN_14609a6ea body=292 status=ok
// SIG undefined FUN_14609a6ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609a6ea(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2c118) {
    FUN_144b3d300(&DAT_14cc2c118);
    if (DAT_14cc2c118 == -1) {
      FUN_145c9d2f2();
      FUN_14609a80e();
      FUN_140db5666(&DAT_14cc2c070,0,&DAT_14cc2c008,L"FFXRHIOpticalFlowComputeSCDDivergenceCS",
                    L"/Plugin/FFX/Private/ffx_opticalflow_compute_scd_divergence_pass.usf",
                    &DAT_14a1f6a48,5,4,FUN_14982a348,FUN_14982a320,&LAB_146762db4,&LAB_14982a31c,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cc2c9d8);
      _DAT_14cc2c070 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14465d823);
      _Init_thread_footer(&DAT_14cc2c118);
    }
  }
  return &DAT_14cc2c070;
}



// FUNCTION 14609a80e FUN_14609a80e body=205 status=ok
// SIG undefined FUN_14609a80e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609a80e(void)

{
  if ((DAT_14cc2c06f & 2) == 0) {
    DAT_14cc2c06f = DAT_14cc2c06f | 2;
    _DAT_14cc2c010 = L"FFXRHIOpticalFlowComputeSCDDivergenceCS";
    _DAT_14cc2c028 = FUN_146826540;
    _DAT_14cc2c030 = FUN_146825d77;
    _DAT_14cc2c038 = FUN_146825fd6;
    _DAT_14cc2c040 = FUN_1407e02ea;
    _DAT_14cc2c048 = FUN_146826273;
    _DAT_14cc2c020 = FUN_14982a2ee;
    _DAT_14cc2c060 = 0xffffffff000000e0;
    _DAT_14cc2c068 = 8;
    DAT_14cc2c06c = 0;
    _DAT_14cc2c050 = &LAB_14982a318;
    FUN_14609a8dc();
    FUN_1407e00cc(&DAT_14cc2c008);
    return;
  }
  return;
}



// FUNCTION 14609a8dc FUN_14609a8dc body=123 status=ok
// SIG undefined FUN_14609a8dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609a8dc(void)

{
  _DAT_14cc2ce08 = L"BASE";
  DAT_14cc2ce32 = 4;
  _DAT_14cc2ce10 = FUN_140b35ae4();
  _DAT_14cc2ce18 = DAT_14cc2c018;
  _DAT_14cc2ce20 = &LAB_14682652b;
  DAT_14cc2c018 = &DAT_14cc2ce08;
  DAT_14cc2c06d = DAT_14cc2c06d + '\x01';
  _DAT_14cc2ce28 = 0x100000000;
  if (*(char *)(_DAT_14cc2ce10 + 100) != '\0') {
    DAT_14cc2c06e = DAT_14cc2c06e + '\x01';
  }
  return;
}



// FUNCTION 14609a958 FUN_14609a958 body=292 status=ok
// SIG undefined FUN_14609a958(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609a958(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2c240) {
    FUN_144b3d300(&DAT_14cc2c240);
    if (DAT_14cc2c240 == -1) {
      FUN_145c9d2f2();
      FUN_14609aa7c();
      FUN_140db5666(&DAT_14cc2c198,0,&DAT_14cc2c130,L"FFXRHIOpticalFlowFilterOpticalFlowCS",
                    L"/Plugin/FFX/Private/ffx_opticalflow_filter_optical_flow_pass_v5.usf",
                    &DAT_14a1f6a48,5,4,FUN_14982a3d6,FUN_14982a3ae,&LAB_146762dba,&LAB_14982a3aa,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cc2c9d8);
      _DAT_14cc2c198 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14465d82f);
      _Init_thread_footer(&DAT_14cc2c240);
    }
  }
  return &DAT_14cc2c198;
}



// FUNCTION 14609aa7c FUN_14609aa7c body=205 status=ok
// SIG undefined FUN_14609aa7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609aa7c(void)

{
  if ((DAT_14cc2c197 & 2) == 0) {
    DAT_14cc2c197 = DAT_14cc2c197 | 2;
    _DAT_14cc2c138 = L"FFXRHIOpticalFlowFilterOpticalFlowCS";
    _DAT_14cc2c150 = FUN_146826540;
    _DAT_14cc2c158 = FUN_146825d77;
    _DAT_14cc2c160 = FUN_146825fd6;
    _DAT_14cc2c168 = FUN_1407e02ea;
    _DAT_14cc2c170 = FUN_146826273;
    _DAT_14cc2c148 = FUN_14982a37c;
    _DAT_14cc2c188 = 0xffffffff000000e0;
    _DAT_14cc2c190 = 8;
    DAT_14cc2c194 = 0;
    _DAT_14cc2c178 = &LAB_14982a3a6;
    FUN_14609ab4a();
    FUN_1407e00cc(&DAT_14cc2c130);
    return;
  }
  return;
}



// FUNCTION 14609ab4a FUN_14609ab4a body=123 status=ok
// SIG undefined FUN_14609ab4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609ab4a(void)

{
  _DAT_14cc2ce38 = L"BASE";
  DAT_14cc2ce62 = 4;
  _DAT_14cc2ce40 = FUN_140b35ae4();
  _DAT_14cc2ce48 = DAT_14cc2c140;
  _DAT_14cc2ce50 = &LAB_14682652b;
  DAT_14cc2c140 = &DAT_14cc2ce38;
  DAT_14cc2c195 = DAT_14cc2c195 + '\x01';
  _DAT_14cc2ce58 = 0x100000000;
  if (*(char *)(_DAT_14cc2ce40 + 100) != '\0') {
    DAT_14cc2c196 = DAT_14cc2c196 + '\x01';
  }
  return;
}



// FUNCTION 14609abc6 FUN_14609abc6 body=292 status=ok
// SIG undefined FUN_14609abc6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609abc6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2c368) {
    FUN_144b3d300(&DAT_14cc2c368);
    if (DAT_14cc2c368 == -1) {
      FUN_145c9d2f2();
      FUN_14609acea();
      FUN_140db5666(&DAT_14cc2c2c0,0,&DAT_14cc2c258,L"FFXRHIOpticalFlowGenSCDHistogramCS",
                    L"/Plugin/FFX/Private/ffx_opticalflow_generate_scd_histogram_pass.usf",
                    &DAT_14a1f6a48,5,4,FUN_14982a464,FUN_14982a43c,&LAB_146762dc0,&LAB_14982a438,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cc2c9d8);
      _DAT_14cc2c2c0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14465d83b);
      _Init_thread_footer(&DAT_14cc2c368);
    }
  }
  return &DAT_14cc2c2c0;
}



// FUNCTION 14609acea FUN_14609acea body=205 status=ok
// SIG undefined FUN_14609acea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609acea(void)

{
  if ((DAT_14cc2c2bf & 2) == 0) {
    DAT_14cc2c2bf = DAT_14cc2c2bf | 2;
    _DAT_14cc2c260 = L"FFXRHIOpticalFlowGenSCDHistogramCS";
    _DAT_14cc2c278 = FUN_146826540;
    _DAT_14cc2c280 = FUN_146825d77;
    _DAT_14cc2c288 = FUN_146825fd6;
    _DAT_14cc2c290 = FUN_1407e02ea;
    _DAT_14cc2c298 = FUN_146826273;
    _DAT_14cc2c270 = FUN_14982a40a;
    _DAT_14cc2c2b0 = 0xffffffff000000e0;
    _DAT_14cc2c2b8 = 8;
    DAT_14cc2c2bc = 0;
    _DAT_14cc2c2a0 = &LAB_14982a434;
    FUN_14609adb8();
    FUN_1407e00cc(&DAT_14cc2c258);
    return;
  }
  return;
}



// FUNCTION 14609adb8 FUN_14609adb8 body=123 status=ok
// SIG undefined FUN_14609adb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609adb8(void)

{
  _DAT_14cc2ce68 = L"BASE";
  DAT_14cc2ce92 = 4;
  _DAT_14cc2ce70 = FUN_140b35ae4();
  _DAT_14cc2ce78 = DAT_14cc2c268;
  _DAT_14cc2ce80 = &LAB_14682652b;
  DAT_14cc2c268 = &DAT_14cc2ce68;
  DAT_14cc2c2bd = DAT_14cc2c2bd + '\x01';
  _DAT_14cc2ce88 = 0x100000000;
  if (*(char *)(_DAT_14cc2ce70 + 100) != '\0') {
    DAT_14cc2c2be = DAT_14cc2c2be + '\x01';
  }
  return;
}



// FUNCTION 14609ae34 FUN_14609ae34 body=292 status=ok
// SIG undefined FUN_14609ae34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609ae34(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2c490) {
    FUN_144b3d300(&DAT_14cc2c490);
    if (DAT_14cc2c490 == -1) {
      FUN_145c9d2f2();
      FUN_14609af58();
      FUN_140db5666(&DAT_14cc2c3e8,0,&DAT_14cc2c380,L"FFXRHIOpticalFlowPrepareLumaCS",
                    L"/Plugin/FFX/Private/ffx_opticalflow_prepare_luma_pass.usf",&DAT_14a1f6a48,5,4,
                    FUN_14982a4f2,FUN_14982a4ca,&LAB_146762dc6,&LAB_14982a4c6,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cc2c9d8);
      _DAT_14cc2c3e8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14465d847);
      _Init_thread_footer(&DAT_14cc2c490);
    }
  }
  return &DAT_14cc2c3e8;
}



// FUNCTION 14609af58 FUN_14609af58 body=205 status=ok
// SIG undefined FUN_14609af58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609af58(void)

{
  if ((DAT_14cc2c3e7 & 2) == 0) {
    DAT_14cc2c3e7 = DAT_14cc2c3e7 | 2;
    _DAT_14cc2c388 = L"FFXRHIOpticalFlowPrepareLumaCS";
    _DAT_14cc2c3a0 = FUN_146826540;
    _DAT_14cc2c3a8 = FUN_146825d77;
    _DAT_14cc2c3b0 = FUN_146825fd6;
    _DAT_14cc2c3b8 = FUN_1407e02ea;
    _DAT_14cc2c3c0 = FUN_146826273;
    _DAT_14cc2c398 = FUN_14982a498;
    _DAT_14cc2c3d8 = 0xffffffff000000e0;
    _DAT_14cc2c3e0 = 8;
    DAT_14cc2c3e4 = 0;
    _DAT_14cc2c3c8 = &LAB_14982a4c2;
    FUN_14609b026();
    FUN_1407e00cc(&DAT_14cc2c380);
    return;
  }
  return;
}



// FUNCTION 14609b026 FUN_14609b026 body=123 status=ok
// SIG undefined FUN_14609b026(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609b026(void)

{
  _DAT_14cc2ce98 = L"BASE";
  DAT_14cc2cec2 = 4;
  _DAT_14cc2cea0 = FUN_140b35ae4();
  _DAT_14cc2cea8 = DAT_14cc2c390;
  _DAT_14cc2ceb0 = &LAB_14682652b;
  DAT_14cc2c390 = &DAT_14cc2ce98;
  DAT_14cc2c3e5 = DAT_14cc2c3e5 + '\x01';
  _DAT_14cc2ceb8 = 0x100000000;
  if (*(char *)(_DAT_14cc2cea0 + 100) != '\0') {
    DAT_14cc2c3e6 = DAT_14cc2c3e6 + '\x01';
  }
  return;
}



// FUNCTION 14609b0a2 FUN_14609b0a2 body=292 status=ok
// SIG undefined FUN_14609b0a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609b0a2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2c5b8) {
    FUN_144b3d300(&DAT_14cc2c5b8);
    if (DAT_14cc2c5b8 == -1) {
      FUN_145c9d2f2();
      FUN_14609b1c6();
      FUN_140db5666(&DAT_14cc2c510,0,&DAT_14cc2c4a8,L"FFXRHIOpticalFlowScaleOpticalFlowAdvCS",
                    L"/Plugin/FFX/Private/ffx_opticalflow_scale_optical_flow_advanced_pass_v5.usf",
                    &DAT_14a1f6a48,5,4,FUN_14982a580,FUN_14982a558,&LAB_146762dcc,&LAB_14982a554,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cc2c9d8);
      _DAT_14cc2c510 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14465d853);
      _Init_thread_footer(&DAT_14cc2c5b8);
    }
  }
  return &DAT_14cc2c510;
}



// FUNCTION 14609b1c6 FUN_14609b1c6 body=205 status=ok
// SIG undefined FUN_14609b1c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609b1c6(void)

{
  if ((DAT_14cc2c50f & 2) == 0) {
    DAT_14cc2c50f = DAT_14cc2c50f | 2;
    _DAT_14cc2c4b0 = L"FFXRHIOpticalFlowScaleOpticalFlowAdvCS";
    _DAT_14cc2c4c8 = FUN_146826540;
    _DAT_14cc2c4d0 = FUN_146825d77;
    _DAT_14cc2c4d8 = FUN_146825fd6;
    _DAT_14cc2c4e0 = FUN_1407e02ea;
    _DAT_14cc2c4e8 = FUN_146826273;
    _DAT_14cc2c4c0 = FUN_14982a526;
    _DAT_14cc2c500 = 0xffffffff000000e0;
    _DAT_14cc2c508 = 8;
    DAT_14cc2c50c = 0;
    _DAT_14cc2c4f0 = &LAB_14982a550;
    FUN_14609b294();
    FUN_1407e00cc(&DAT_14cc2c4a8);
    return;
  }
  return;
}



// FUNCTION 14609b294 FUN_14609b294 body=123 status=ok
// SIG undefined FUN_14609b294(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609b294(void)

{
  _DAT_14cc2cec8 = L"BASE";
  DAT_14cc2cef2 = 4;
  _DAT_14cc2ced0 = FUN_140b35ae4();
  _DAT_14cc2ced8 = DAT_14cc2c4b8;
  _DAT_14cc2cee0 = &LAB_14682652b;
  DAT_14cc2c4b8 = &DAT_14cc2cec8;
  DAT_14cc2c50d = DAT_14cc2c50d + '\x01';
  _DAT_14cc2cee8 = 0x100000000;
  if (*(char *)(_DAT_14cc2ced0 + 100) != '\0') {
    DAT_14cc2c50e = DAT_14cc2c50e + '\x01';
  }
  return;
}



// FUNCTION 14609b31a FUN_14609b31a body=609 status=ok
// SIG undefined FUN_14609b31a(void)

undefined8 * FUN_14609b31a(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  undefined2 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b2795f0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 2;
  *(undefined4 *)(param_1 + 0x16) = 0xc68d1f01;
  param_1[0x17] = "gbx_stand_in_scene_def";
  lVar5 = FUN_14122bc66();
  if (lVar5 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_60,lVar5);
    *(undefined4 *)(param_1 + 0x5b) = local_60;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_5c;
    *(undefined4 *)(param_1 + 0x5c) = uStack_58;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_54;
    if (param_1 + 0x5b == (undefined8 *)&local_60) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_50;
      local_50 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_48;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_44;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_14609b40b;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar5);
  }
LAB_14609b40b:
  param_1[0x5f] = param_1[0x5a];
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x5b);
  *(undefined4 *)((longlong)param_1 + 0x304) = *(undefined4 *)((longlong)param_1 + 0x2dc);
  *(undefined4 *)(param_1 + 0x61) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((longlong)param_1 + 0x30c) = *(undefined4 *)((longlong)param_1 + 0x2e4);
  iVar1 = *(int *)(param_1 + 0x5e);
  _Src = (void *)param_1[0x5d];
  *(int *)(param_1 + 99) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x31c) == 0) {
    *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x62,iVar1);
    if (iVar1 != 0) {
      memcpy((void *)param_1[0x62],_Src,(longlong)iVar1 * 2);
    }
  }
  FUN_1400b22c2(local_70,"Stand In.Stand In Scene Definition");
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14609b57c FUN_14609b57c body=177 status=ok
// SIG undefined FUN_14609b57c(void)

void FUN_14609b57c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  iVar1 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  local_38 = iVar1;
  if (iVar1 == 0) {
    local_34 = 0;
  }
  else {
    FUN_14047d15e(&local_40,iVar1,0);
    FUN_14047cdb6(local_40,uVar2,iVar1);
  }
  FUN_14609b62e(param_1,param_2,&local_40);
  FUN_14047c710(local_40,local_38);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14609b62e FUN_14609b62e body=287 status=ok
// SIG undefined FUN_14609b62e(void)

void FUN_14609b62e(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong **local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&DAT_149e44000;
  local_50 = plVar4 + 2;
  plVar4[2] = (longlong)&PTR_FUN_149e44020;
  plVar4[4] = *param_3;
  *param_3 = 0;
  *(int *)(plVar4 + 5) = (int)param_3[1];
  *(undefined4 *)((longlong)plVar4 + 0x2c) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  *(undefined4 *)(plVar4 + 3) = 5;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_38 = &local_50;
  local_48 = plVar4;
  local_40 = param_2;
  FUN_1413ef6fe(param_1,local_2c,&local_40,0);
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_48 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14609b74e FUN_14609b74e body=594 status=ok
// SIG undefined FUN_14609b74e(void)

void FUN_14609b74e(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8;
  int local_1a4;
  undefined1 local_1a0 [4];
  undefined4 local_19c;
  undefined4 local_fc;
  undefined4 local_d0;
  int local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_9c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  iVar3 = local_9c;
  memset(local_1a0,0,0x100);
  local_d0 = 0xffffffff;
  local_19c = 0x3f800000;
  local_fc = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_1a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_1a0);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_1a4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a4);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1b8 = local_1a4 != 0;
  puVar5 = local_1a0;
  if (puVar2 != (undefined1 *)0x0) {
    puVar5 = puVar2;
  }
  puVar4 = &local_98;
  if (puVar1 != (undefined8 *)0x0) {
    puVar4 = puVar1;
  }
  FUN_14609b9a2(param_1,puVar4,iVar3 != 0,puVar5);
  if ((local_38 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14609b9a2 FUN_14609b9a2 body=181 status=ok
// SIG undefined FUN_14609b9a2(void)

void FUN_14609b9a2(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = 0;
  if ((char)param_3 != '\0') {
    local_78 = param_4;
  }
  local_48 = *param_2;
  uStack_40 = param_2[1];
  local_38 = param_2[2];
  uStack_30 = param_2[3];
  local_68 = param_2[4];
  uStack_60 = param_2[5];
  local_58 = param_2[6];
  local_70 = param_5;
  FUN_144927ad4(param_1,&local_68,&local_48,param_3);
  local_48 = param_2[8];
  uStack_40 = param_2[9];
  local_38 = param_2[10];
  (**(code **)(*param_1 + 0x478))(param_1,&local_48);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14609ba58 FUN_14609ba58 body=61 status=ok
// SIG undefined FUN_14609ba58(void)

void FUN_14609ba58(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14094d944(puVar1,param_1);
  FUN_14609ba96(puVar1 + 0x4a);
  *puVar1 = &PTR_FUN_149e8cba0;
  puVar1[0x4a] = &PTR_LAB_149e8cf90;
  return;
}



// FUNCTION 14609ba96 FUN_14609ba96 body=250 status=ok
// SIG undefined FUN_14609ba96(void)

void FUN_14609ba96(undefined8 *param_1)

{
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = &PTR_FUN_149e8ec80;
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
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  return;
}



// FUNCTION 14609bb9c FUN_14609bb9c body=300 status=ok
// SIG undefined FUN_14609bb9c(void)

undefined8 * FUN_14609bb9c(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a1c3c30;
  *(undefined4 *)(param_1 + 5) = 0x40e00000;
  FUN_1413e94bc((longlong)param_1 + 0x2c,0x40e00000);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x40000000;
  FUN_1413e94bc((longlong)param_1 + 0xac,0x40000000);
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
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
  lVar1 = -0x180;
  do {
    *(undefined4 *)((longlong)param_1 + lVar1 + 0x2a8) = 0x40000000;
    FUN_1413e94bc((longlong)param_1 + lVar1 + 0x2ac,0x40000000);
    *(undefined8 *)((longlong)param_1 + lVar1 + 0x2b8) = 0;
    *(undefined4 *)((longlong)param_1 + lVar1 + 0x2c0) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0x2c8) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0x2d0) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0x2d8) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0x2e0) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0x2e8) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0x2f0) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0x2f8) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0x300) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0x308) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0x310) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + 0x318) = 0;
    *(undefined8 *)((longlong)param_1 + lVar1 + 800) = 0;
    lVar1 = lVar1 + 0x80;
  } while (lVar1 != 0);
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  return param_1;
}



// FUNCTION 14609bcc8 FUN_14609bcc8 body=284 status=ok
// SIG undefined FUN_14609bcc8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609bcc8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca52a28) {
    FUN_144b3d300(&DAT_14ca52a28);
    if (DAT_14ca52a28 == -1) {
      FUN_14609bde4();
      FUN_140db5666(&DAT_14ca52980,0,&DAT_14ca52918,L"TShadowProjectionFromTranslucencyPS<1>",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472f2796,
                    FUN_1472f276e,&LAB_1472f2734,&LAB_1472f2730,&LAB_14712ac0c,&LAB_14712ac08,0x148,
                    0);
      _DAT_14ca52980 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049c46);
      _Init_thread_footer(&DAT_14ca52a28);
    }
  }
  return &DAT_14ca52980;
}



// FUNCTION 14609bde4 FUN_14609bde4 body=205 status=ok
// SIG undefined FUN_14609bde4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609bde4(void)

{
  if ((DAT_14ca5297f & 2) == 0) {
    DAT_14ca5297f = DAT_14ca5297f | 2;
    _DAT_14ca52920 = L"TShadowProjectionFromTranslucencyPS<1>";
    _DAT_14ca52938 = FUN_146826540;
    _DAT_14ca52940 = FUN_146825d77;
    _DAT_14ca52948 = FUN_146825fd6;
    _DAT_14ca52950 = FUN_1407e02ea;
    _DAT_14ca52958 = FUN_146826273;
    _DAT_14ca52930 = FUN_1472f2700;
    _DAT_14ca52970 = 0xffffffff00000148;
    _DAT_14ca52978 = 8;
    DAT_14ca5297c = 0;
    _DAT_14ca52960 = &LAB_1472f272c;
    FUN_14609beb2();
    FUN_1407e00cc(&DAT_14ca52918);
    return;
  }
  return;
}



// FUNCTION 14609beb2 FUN_14609beb2 body=133 status=ok
// SIG undefined FUN_14609beb2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609beb2(void)

{
  _DAT_14ca59040 = L"BASE";
  DAT_14ca5906a = 4;
  FUN_145df4bf4();
  _DAT_14ca59050 = DAT_14ca52928;
  _DAT_14ca59048 = &DAT_14ca50258;
  _DAT_14ca59058 = &LAB_14682652b;
  DAT_14ca52928 = &DAT_14ca59040;
  DAT_14ca5297d = DAT_14ca5297d + '\x01';
  _DAT_14ca59060 = 0x100000000;
  if (DAT_14ca502bc != '\0') {
    DAT_14ca5297e = DAT_14ca5297e + '\x01';
  }
  return;
}



// FUNCTION 14609bf38 FUN_14609bf38 body=284 status=ok
// SIG undefined FUN_14609bf38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609bf38(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca52b50) {
    FUN_144b3d300(&DAT_14ca52b50);
    if (DAT_14ca52b50 == -1) {
      FUN_14609c054();
      FUN_140db5666(&DAT_14ca52aa8,0,&DAT_14ca52a40,L"TShadowProjectionFromTranslucencyPS<2>",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472f28ea,
                    FUN_1472f28c2,&LAB_1472f2888,&LAB_1472f2884,&LAB_14712ac0c,&LAB_14712ac08,0x148,
                    0);
      _DAT_14ca52aa8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049c52);
      _Init_thread_footer(&DAT_14ca52b50);
    }
  }
  return &DAT_14ca52aa8;
}



// FUNCTION 14609c054 FUN_14609c054 body=205 status=ok
// SIG undefined FUN_14609c054(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609c054(void)

{
  if ((DAT_14ca52aa7 & 2) == 0) {
    DAT_14ca52aa7 = DAT_14ca52aa7 | 2;
    _DAT_14ca52a48 = L"TShadowProjectionFromTranslucencyPS<2>";
    _DAT_14ca52a60 = FUN_146826540;
    _DAT_14ca52a68 = FUN_146825d77;
    _DAT_14ca52a70 = FUN_146825fd6;
    _DAT_14ca52a78 = FUN_1407e02ea;
    _DAT_14ca52a80 = FUN_146826273;
    _DAT_14ca52a58 = FUN_1472f2854;
    _DAT_14ca52a98 = 0xffffffff00000148;
    _DAT_14ca52aa0 = 8;
    DAT_14ca52aa4 = 0;
    _DAT_14ca52a88 = &LAB_1472f2880;
    FUN_14609c122();
    FUN_1407e00cc(&DAT_14ca52a40);
    return;
  }
  return;
}



// FUNCTION 14609c122 FUN_14609c122 body=133 status=ok
// SIG undefined FUN_14609c122(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609c122(void)

{
  _DAT_14ca59070 = L"BASE";
  DAT_14ca5909a = 4;
  FUN_145df5034();
  _DAT_14ca59080 = DAT_14ca52a50;
  _DAT_14ca59078 = &DAT_14ca50380;
  _DAT_14ca59088 = &LAB_14682652b;
  DAT_14ca52a50 = &DAT_14ca59070;
  DAT_14ca52aa5 = DAT_14ca52aa5 + '\x01';
  _DAT_14ca59090 = 0x100000000;
  if (DAT_14ca503e4 != '\0') {
    DAT_14ca52aa6 = DAT_14ca52aa6 + '\x01';
  }
  return;
}



// FUNCTION 14609c1a8 FUN_14609c1a8 body=284 status=ok
// SIG undefined FUN_14609c1a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609c1a8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca52c78) {
    FUN_144b3d300(&DAT_14ca52c78);
    if (DAT_14ca52c78 == -1) {
      FUN_14609c2c4();
      FUN_140db5666(&DAT_14ca52bd0,0,&DAT_14ca52b68,L"TShadowProjectionFromTranslucencyPS<3>",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472f2a3e,
                    FUN_1472f2a16,&LAB_1472f29dc,&LAB_1472f29d8,&LAB_14712ac0c,&LAB_14712ac08,0x148,
                    0);
      _DAT_14ca52bd0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049c5e);
      _Init_thread_footer(&DAT_14ca52c78);
    }
  }
  return &DAT_14ca52bd0;
}



// FUNCTION 14609c2c4 FUN_14609c2c4 body=205 status=ok
// SIG undefined FUN_14609c2c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609c2c4(void)

{
  if ((DAT_14ca52bcf & 2) == 0) {
    DAT_14ca52bcf = DAT_14ca52bcf | 2;
    _DAT_14ca52b70 = L"TShadowProjectionFromTranslucencyPS<3>";
    _DAT_14ca52b88 = FUN_146826540;
    _DAT_14ca52b90 = FUN_146825d77;
    _DAT_14ca52b98 = FUN_146825fd6;
    _DAT_14ca52ba0 = FUN_1407e02ea;
    _DAT_14ca52ba8 = FUN_146826273;
    _DAT_14ca52b80 = FUN_1472f29a8;
    _DAT_14ca52bc0 = 0xffffffff00000148;
    _DAT_14ca52bc8 = 8;
    DAT_14ca52bcc = 0;
    _DAT_14ca52bb0 = &LAB_1472f29d4;
    FUN_14609c392();
    FUN_1407e00cc(&DAT_14ca52b68);
    return;
  }
  return;
}



// FUNCTION 14609c392 FUN_14609c392 body=133 status=ok
// SIG undefined FUN_14609c392(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609c392(void)

{
  _DAT_14ca590a0 = L"BASE";
  DAT_14ca590ca = 4;
  FUN_145df1986();
  _DAT_14ca590b0 = DAT_14ca52b78;
  _DAT_14ca590a8 = &DAT_14ca504a8;
  _DAT_14ca590b8 = &LAB_14682652b;
  DAT_14ca52b78 = &DAT_14ca590a0;
  DAT_14ca52bcd = DAT_14ca52bcd + '\x01';
  _DAT_14ca590c0 = 0x100000000;
  if (DAT_14ca5050c != '\0') {
    DAT_14ca52bce = DAT_14ca52bce + '\x01';
  }
  return;
}



// FUNCTION 14609c418 FUN_14609c418 body=284 status=ok
// SIG undefined FUN_14609c418(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609c418(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca52da0) {
    FUN_144b3d300(&DAT_14ca52da0);
    if (DAT_14ca52da0 == -1) {
      FUN_14609c534();
      FUN_140db5666(&DAT_14ca52cf8,0,&DAT_14ca52c90,L"TShadowProjectionFromTranslucencyPS<4>",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472f2b92,
                    FUN_1472f2b6a,&LAB_1472f2b30,&LAB_1472f2b2c,&LAB_14712ac0c,&LAB_14712ac08,0x148,
                    0);
      _DAT_14ca52cf8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049c6a);
      _Init_thread_footer(&DAT_14ca52da0);
    }
  }
  return &DAT_14ca52cf8;
}



// FUNCTION 14609c534 FUN_14609c534 body=205 status=ok
// SIG undefined FUN_14609c534(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609c534(void)

{
  if ((DAT_14ca52cf7 & 2) == 0) {
    DAT_14ca52cf7 = DAT_14ca52cf7 | 2;
    _DAT_14ca52c98 = L"TShadowProjectionFromTranslucencyPS<4>";
    _DAT_14ca52cb0 = FUN_146826540;
    _DAT_14ca52cb8 = FUN_146825d77;
    _DAT_14ca52cc0 = FUN_146825fd6;
    _DAT_14ca52cc8 = FUN_1407e02ea;
    _DAT_14ca52cd0 = FUN_146826273;
    _DAT_14ca52ca8 = FUN_1472f2afc;
    _DAT_14ca52ce8 = 0xffffffff00000148;
    _DAT_14ca52cf0 = 8;
    DAT_14ca52cf4 = 0;
    _DAT_14ca52cd8 = &LAB_1472f2b28;
    FUN_14609c602();
    FUN_1407e00cc(&DAT_14ca52c90);
    return;
  }
  return;
}



// FUNCTION 14609c602 FUN_14609c602 body=133 status=ok
// SIG undefined FUN_14609c602(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609c602(void)

{
  _DAT_14ca590d0 = L"BASE";
  DAT_14ca590fa = 4;
  FUN_145df5474();
  _DAT_14ca590e0 = DAT_14ca52ca0;
  _DAT_14ca590d8 = &DAT_14ca505d0;
  _DAT_14ca590e8 = &LAB_14682652b;
  DAT_14ca52ca0 = &DAT_14ca590d0;
  DAT_14ca52cf5 = DAT_14ca52cf5 + '\x01';
  _DAT_14ca590f0 = 0x100000000;
  if (DAT_14ca50634 != '\0') {
    DAT_14ca52cf6 = DAT_14ca52cf6 + '\x01';
  }
  return;
}



// FUNCTION 14609c688 FUN_14609c688 body=284 status=ok
// SIG undefined FUN_14609c688(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609c688(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca52ec8) {
    FUN_144b3d300(&DAT_14ca52ec8);
    if (DAT_14ca52ec8 == -1) {
      FUN_14609c7a4();
      FUN_140db5666(&DAT_14ca52e20,0,&DAT_14ca52db8,L"TShadowProjectionFromTranslucencyPS<5>",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472f2ce6,
                    FUN_1472f2cbe,&LAB_1472f2c84,&LAB_1472f2c80,&LAB_14712ac0c,&LAB_14712ac08,0x148,
                    0);
      _DAT_14ca52e20 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049c76);
      _Init_thread_footer(&DAT_14ca52ec8);
    }
  }
  return &DAT_14ca52e20;
}



// FUNCTION 14609c7a4 FUN_14609c7a4 body=205 status=ok
// SIG undefined FUN_14609c7a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609c7a4(void)

{
  if ((DAT_14ca52e1f & 2) == 0) {
    DAT_14ca52e1f = DAT_14ca52e1f | 2;
    _DAT_14ca52dc0 = L"TShadowProjectionFromTranslucencyPS<5>";
    _DAT_14ca52dd8 = FUN_146826540;
    _DAT_14ca52de0 = FUN_146825d77;
    _DAT_14ca52de8 = FUN_146825fd6;
    _DAT_14ca52df0 = FUN_1407e02ea;
    _DAT_14ca52df8 = FUN_146826273;
    _DAT_14ca52dd0 = FUN_1472f2c50;
    _DAT_14ca52e10 = 0xffffffff00000148;
    _DAT_14ca52e18 = 8;
    DAT_14ca52e1c = 0;
    _DAT_14ca52e00 = &LAB_1472f2c7c;
    FUN_14609c872();
    FUN_1407e00cc(&DAT_14ca52db8);
    return;
  }
  return;
}



// FUNCTION 14609c872 FUN_14609c872 body=133 status=ok
// SIG undefined FUN_14609c872(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609c872(void)

{
  _DAT_14ca59100 = L"BASE";
  DAT_14ca5912a = 4;
  FUN_145cee52c();
  _DAT_14ca59110 = DAT_14ca52dc8;
  _DAT_14ca59108 = &DAT_14ca506f8;
  _DAT_14ca59118 = &LAB_14682652b;
  DAT_14ca52dc8 = &DAT_14ca59100;
  DAT_14ca52e1d = DAT_14ca52e1d + '\x01';
  _DAT_14ca59120 = 0x100000000;
  if (DAT_14ca5075c != '\0') {
    DAT_14ca52e1e = DAT_14ca52e1e + '\x01';
  }
  return;
}



// FUNCTION 14609c8f8 FUN_14609c8f8 body=205 status=ok
// SIG undefined FUN_14609c8f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609c8f8(void)

{
  if ((DAT_14ca6bd3f & 2) == 0) {
    DAT_14ca6bd3f = DAT_14ca6bd3f | 2;
    _DAT_14ca6bce0 = L"TVoxelizeVolumeVS<VMode_Object_Box>";
    _DAT_14ca6bcf8 = FUN_146826540;
    _DAT_14ca6bd00 = FUN_146825d77;
    _DAT_14ca6bd08 = FUN_146825fd6;
    _DAT_14ca6bd10 = FUN_1407e02ea;
    _DAT_14ca6bd18 = FUN_146826273;
    _DAT_14ca6bcf0 = FUN_1473351ac;
    _DAT_14ca6bd30 = 0xffffffff00000110;
    _DAT_14ca6bd38 = 8;
    DAT_14ca6bd3c = 0;
    _DAT_14ca6bd20 = &LAB_1473351e2;
    FUN_14609c9c6();
    FUN_1407e00cc(&DAT_14ca6bcd8);
    return;
  }
  return;
}



// FUNCTION 14609c9c6 FUN_14609c9c6 body=133 status=ok
// SIG undefined FUN_14609c9c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609c9c6(void)

{
  _DAT_14ca6d7f0 = L"BASE";
  DAT_14ca6d81a = 4;
  FUN_145eed210();
  _DAT_14ca6d800 = DAT_14ca6bce8;
  _DAT_14ca6d7f8 = &DAT_14ca6d728;
  _DAT_14ca6d808 = &LAB_14682652b;
  DAT_14ca6bce8 = &DAT_14ca6d7f0;
  DAT_14ca6bd3d = DAT_14ca6bd3d + '\x01';
  _DAT_14ca6d810 = 0x100000000;
  if (DAT_14ca6d78c != '\0') {
    DAT_14ca6bd3e = DAT_14ca6bd3e + '\x01';
  }
  return;
}



// FUNCTION 14609ca4c FUN_14609ca4c body=205 status=ok
// SIG undefined FUN_14609ca4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609ca4c(void)

{
  if ((DAT_14ca6bf8f & 2) == 0) {
    DAT_14ca6bf8f = DAT_14ca6bf8f | 2;
    _DAT_14ca6bf30 = L"TVoxelizeVolumeGS<VMode_Object_Box>";
    _DAT_14ca6bf48 = FUN_146826540;
    _DAT_14ca6bf50 = FUN_146825d77;
    _DAT_14ca6bf58 = FUN_146825fd6;
    _DAT_14ca6bf60 = FUN_1407e02ea;
    _DAT_14ca6bf68 = FUN_146826273;
    _DAT_14ca6bf40 = FUN_1473353a4;
    _DAT_14ca6bf80 = 0xffffffff00000110;
    _DAT_14ca6bf88 = 8;
    DAT_14ca6bf8c = 0;
    _DAT_14ca6bf70 = &LAB_1473353da;
    FUN_14609cb1a();
    FUN_1407e00cc(&DAT_14ca6bf28);
    return;
  }
  return;
}



// FUNCTION 14609cb1a FUN_14609cb1a body=133 status=ok
// SIG undefined FUN_14609cb1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609cb1a(void)

{
  _DAT_14ca6d918 = L"BASE";
  DAT_14ca6d942 = 4;
  FUN_145eed636();
  _DAT_14ca6d928 = DAT_14ca6bf38;
  _DAT_14ca6d920 = &DAT_14ca6d850;
  _DAT_14ca6d930 = &LAB_14682652b;
  DAT_14ca6bf38 = &DAT_14ca6d918;
  DAT_14ca6bf8d = DAT_14ca6bf8d + '\x01';
  _DAT_14ca6d938 = 0x100000000;
  if (DAT_14ca6d8b4 != '\0') {
    DAT_14ca6bf8e = DAT_14ca6bf8e + '\x01';
  }
  return;
}



// FUNCTION 14609cba0 FUN_14609cba0 body=205 status=ok
// SIG undefined FUN_14609cba0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609cba0(void)

{
  if ((DAT_14ca6c1df & 2) == 0) {
    DAT_14ca6c1df = DAT_14ca6c1df | 2;
    _DAT_14ca6c180 = L"TVoxelizeVolumePS<VMode_Object_Box>";
    _DAT_14ca6c198 = FUN_146826540;
    _DAT_14ca6c1a0 = FUN_146825d77;
    _DAT_14ca6c1a8 = FUN_146825fd6;
    _DAT_14ca6c1b0 = FUN_1407e02ea;
    _DAT_14ca6c1b8 = FUN_146826273;
    _DAT_14ca6c190 = FUN_147335552;
    _DAT_14ca6c1d0 = 0xffffffff00000108;
    _DAT_14ca6c1d8 = 8;
    DAT_14ca6c1dc = 0;
    _DAT_14ca6c1c0 = &LAB_147335588;
    FUN_14609cc6e();
    FUN_1407e00cc(&DAT_14ca6c178);
    return;
  }
  return;
}



// FUNCTION 14609cc6e FUN_14609cc6e body=133 status=ok
// SIG undefined FUN_14609cc6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609cc6e(void)

{
  _DAT_14ca6da10 = L"BASE";
  DAT_14ca6da3a = 4;
  FUN_145e1fb52();
  _DAT_14ca6da20 = DAT_14ca6c188;
  _DAT_14ca6da18 = &DAT_14ca6d978;
  _DAT_14ca6da28 = &LAB_14682652b;
  DAT_14ca6c188 = &DAT_14ca6da10;
  DAT_14ca6c1dd = DAT_14ca6c1dd + '\x01';
  _DAT_14ca6da30 = 0x100000000;
  if (DAT_14ca6d9dc != '\0') {
    DAT_14ca6c1de = DAT_14ca6c1de + '\x01';
  }
  return;
}



// FUNCTION 14609ccf4 FUN_14609ccf4 body=284 status=ok
// SIG undefined FUN_14609ccf4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609ccf4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca70490) {
    FUN_144b3d300(&DAT_14ca70490);
    if (DAT_14ca70490 == -1) {
      FUN_14609ce10();
      FUN_140db5666(&DAT_14ca703e8,0,&DAT_14ca70380,L"TPageTableUpdatePS<PF_R16G16_UINT>",
                    L"/Engine/Private/PageTableUpdate.usf",L"PageTableUpdatePS_2",3,1,FUN_1473411c8,
                    FUN_1473411a0,&LAB_14734119c,&LAB_147341198,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca703e8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431225e3);
      _Init_thread_footer(&DAT_14ca70490);
    }
  }
  return &DAT_14ca703e8;
}



// FUNCTION 14609ce10 FUN_14609ce10 body=205 status=ok
// SIG undefined FUN_14609ce10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609ce10(void)

{
  if ((DAT_14ca703e7 & 2) == 0) {
    DAT_14ca703e7 = DAT_14ca703e7 | 2;
    _DAT_14ca70388 = L"TPageTableUpdatePS<PF_R16G16_UINT>";
    _DAT_14ca703a0 = FUN_146826540;
    _DAT_14ca703a8 = FUN_146825d77;
    _DAT_14ca703b0 = FUN_146825fd6;
    _DAT_14ca703b8 = FUN_1407e02ea;
    _DAT_14ca703c0 = FUN_146826273;
    _DAT_14ca70398 = FUN_14734116a;
    _DAT_14ca703d8 = 0xffffffff000000e0;
    _DAT_14ca703e0 = 8;
    DAT_14ca703e4 = 0;
    _DAT_14ca703c8 = &LAB_147341194;
    FUN_14609cede();
    FUN_1407e00cc(&DAT_14ca70380);
    return;
  }
  return;
}



// FUNCTION 14609cede FUN_14609cede body=133 status=ok
// SIG undefined FUN_14609cede(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609cede(void)

{
  _DAT_14ca721b8 = L"BASE";
  DAT_14ca721e2 = 4;
  FUN_145c5faae();
  _DAT_14ca721c8 = DAT_14ca70390;
  _DAT_14ca721c0 = &DAT_14ca72120;
  _DAT_14ca721d0 = &LAB_14682652b;
  DAT_14ca70390 = &DAT_14ca721b8;
  DAT_14ca703e5 = DAT_14ca703e5 + '\x01';
  _DAT_14ca721d8 = 0x100000000;
  if (DAT_14ca72184 != '\0') {
    DAT_14ca703e6 = DAT_14ca703e6 + '\x01';
  }
  return;
}



// FUNCTION 14609cf64 FUN_14609cf64 body=284 status=ok
// SIG undefined FUN_14609cf64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609cf64(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca85a70) {
    FUN_144b3d300(&DAT_14ca85a70);
    if (DAT_14ca85a70 == -1) {
      FUN_14609d080();
      FUN_140db5666(&DAT_14ca859c8,0,&DAT_14ca85960,L"FDefaultPayloadMS",
                    L"/Engine/Private/RayTracing/RayTracingBuiltInShaders.usf",L"DefaultPayloadMS",7
                    ,1,FUN_1474153b0,FUN_147415388,&LAB_14631bb20,&LAB_147415384,&LAB_14741537e,
                    &LAB_14712ac08,0xe0,0);
      _DAT_14ca859c8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f0b72);
      _Init_thread_footer(&DAT_14ca85a70);
    }
  }
  return &DAT_14ca859c8;
}



// FUNCTION 14609d080 FUN_14609d080 body=205 status=ok
// SIG undefined FUN_14609d080(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609d080(void)

{
  if ((DAT_14ca859c7 & 2) == 0) {
    DAT_14ca859c7 = DAT_14ca859c7 | 2;
    _DAT_14ca85968 = L"FDefaultPayloadMS";
    _DAT_14ca85980 = FUN_146826540;
    _DAT_14ca85988 = FUN_146825d77;
    _DAT_14ca85990 = FUN_146825fd6;
    _DAT_14ca85998 = FUN_1407e02ea;
    _DAT_14ca859a0 = FUN_146826273;
    _DAT_14ca85978 = FUN_14741534e;
    _DAT_14ca859b8 = 0xffffffff000000e0;
    _DAT_14ca859c0 = 8;
    DAT_14ca859c4 = 0;
    _DAT_14ca859a8 = &LAB_14741537a;
    FUN_14609d14e();
    FUN_1407e00cc(&DAT_14ca85960);
    return;
  }
  return;
}



// FUNCTION 14609d14e FUN_14609d14e body=133 status=ok
// SIG undefined FUN_14609d14e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609d14e(void)

{
  _DAT_14ca91e58 = L"BASE";
  DAT_14ca91e82 = 4;
  FUN_140b35ae4();
  _DAT_14ca91e68 = DAT_14ca85970;
  _DAT_14ca91e60 = &DAT_14ca8c6c8;
  _DAT_14ca91e70 = &LAB_14682652b;
  DAT_14ca85970 = &DAT_14ca91e58;
  DAT_14ca859c5 = DAT_14ca859c5 + '\x01';
  _DAT_14ca91e78 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca859c6 = DAT_14ca859c6 + '\x01';
  }
  return;
}



// FUNCTION 14609d1d4 FUN_14609d1d4 body=284 status=ok
// SIG undefined FUN_14609d1d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609d1d4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca85b98) {
    FUN_144b3d300(&DAT_14ca85b98);
    if (DAT_14ca85b98 == -1) {
      FUN_14609d2f0();
      FUN_140db5666(&DAT_14ca85af0,0,&DAT_14ca85a88,L"FPackedMaterialClosestHitPayloadMS",
                    L"/Engine/Private/RayTracing/RayTracingBuiltInShaders.usf",
                    L"PackedMaterialClosestHitPayloadMS",7,1,FUN_14741549c,FUN_147415474,
                    &LAB_14631bb28,&LAB_147415470,&LAB_14741546a,&LAB_14712ac08,0xe0,0);
      _DAT_14ca85af0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f0b7e);
      _Init_thread_footer(&DAT_14ca85b98);
    }
  }
  return &DAT_14ca85af0;
}



// FUNCTION 14609d2f0 FUN_14609d2f0 body=205 status=ok
// SIG undefined FUN_14609d2f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609d2f0(void)

{
  if ((DAT_14ca85aef & 2) == 0) {
    DAT_14ca85aef = DAT_14ca85aef | 2;
    _DAT_14ca85a90 = L"FPackedMaterialClosestHitPayloadMS";
    _DAT_14ca85aa8 = FUN_146826540;
    _DAT_14ca85ab0 = FUN_146825d77;
    _DAT_14ca85ab8 = FUN_146825fd6;
    _DAT_14ca85ac0 = FUN_1407e02ea;
    _DAT_14ca85ac8 = FUN_146826273;
    _DAT_14ca85aa0 = FUN_14741543a;
    _DAT_14ca85ae0 = 0xffffffff000000e0;
    _DAT_14ca85ae8 = 8;
    DAT_14ca85aec = 0;
    _DAT_14ca85ad0 = &LAB_147415466;
    FUN_14609d3be();
    FUN_1407e00cc(&DAT_14ca85a88);
    return;
  }
  return;
}



// FUNCTION 14609d3be FUN_14609d3be body=133 status=ok
// SIG undefined FUN_14609d3be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609d3be(void)

{
  _DAT_14ca91e88 = L"BASE";
  DAT_14ca91eb2 = 4;
  FUN_140b35ae4();
  _DAT_14ca91e98 = DAT_14ca85a98;
  _DAT_14ca91e90 = &DAT_14ca8c6c8;
  _DAT_14ca91ea0 = &LAB_14682652b;
  DAT_14ca85a98 = &DAT_14ca91e88;
  DAT_14ca85aed = DAT_14ca85aed + '\x01';
  _DAT_14ca91ea8 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca85aee = DAT_14ca85aee + '\x01';
  }
  return;
}



// FUNCTION 14609d444 FUN_14609d444 body=284 status=ok
// SIG undefined FUN_14609d444(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609d444(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca862b0) {
    FUN_144b3d300(&DAT_14ca862b0);
    if (DAT_14ca862b0 == -1) {
      FUN_14609d560();
      FUN_140db5666(&DAT_14ca86208,0,&DAT_14ca861a0,L"FClearReplacementPS_128",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearPS",3,1,FUN_14741621c,
                    FUN_1474161bc,&LAB_1474161b8,&LAB_1474161b4,&LAB_14712ac0c,&LAB_14712ac08,0xf8,0
                   );
      _DAT_14ca86208 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1e3f);
      _Init_thread_footer(&DAT_14ca862b0);
    }
  }
  return &DAT_14ca86208;
}



// FUNCTION 14609d560 FUN_14609d560 body=205 status=ok
// SIG undefined FUN_14609d560(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609d560(void)

{
  if ((DAT_14ca86207 & 2) == 0) {
    DAT_14ca86207 = DAT_14ca86207 | 2;
    _DAT_14ca861a8 = L"FClearReplacementPS_128";
    _DAT_14ca861c0 = FUN_146826540;
    _DAT_14ca861c8 = FUN_146825d77;
    _DAT_14ca861d0 = FUN_146825fd6;
    _DAT_14ca861d8 = FUN_1407e02ea;
    _DAT_14ca861e0 = FUN_146826273;
    _DAT_14ca861b8 = FUN_147416184;
    _DAT_14ca861f8 = 0xffffffff000000f8;
    _DAT_14ca86200 = 8;
    DAT_14ca86204 = 0;
    _DAT_14ca861e8 = &LAB_1474161b0;
    FUN_14609d62e();
    FUN_1407e00cc(&DAT_14ca861a0);
    return;
  }
  return;
}



// FUNCTION 14609d62e FUN_14609d62e body=133 status=ok
// SIG undefined FUN_14609d62e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609d62e(void)

{
  _DAT_14ca923b0 = L"BASE";
  DAT_14ca923da = 4;
  FUN_145cd3bd2();
  _DAT_14ca923c0 = DAT_14ca861b0;
  _DAT_14ca923b8 = &DAT_14ca92288;
  _DAT_14ca923c8 = &LAB_14682652b;
  DAT_14ca861b0 = &DAT_14ca923b0;
  DAT_14ca86205 = DAT_14ca86205 + '\x01';
  _DAT_14ca923d0 = 0x100000000;
  if (DAT_14ca922ec != '\0') {
    DAT_14ca86206 = DAT_14ca86206 + '\x01';
  }
  return;
}



// FUNCTION 14609d6b4 FUN_14609d6b4 body=284 status=ok
// SIG undefined FUN_14609d6b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609d6b4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca863d8) {
    FUN_144b3d300(&DAT_14ca863d8);
    if (DAT_14ca863d8 == -1) {
      FUN_14609d7d0();
      FUN_140db5666(&DAT_14ca86330,0,&DAT_14ca862c8,L"FClearReplacementPS_Zero",
                    L"/Engine/Private/ClearReplacementShaders.usf",L"ClearPS",3,1,FUN_147416334,
                    FUN_1474162f0,&LAB_1474162ec,&LAB_1474162e8,&LAB_14712ac0c,&LAB_14712ac08,0xf8,0
                   );
      _DAT_14ca86330 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f1e4b);
      _Init_thread_footer(&DAT_14ca863d8);
    }
  }
  return &DAT_14ca86330;
}



// FUNCTION 14609d7d0 FUN_14609d7d0 body=205 status=ok
// SIG undefined FUN_14609d7d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609d7d0(void)

{
  if ((DAT_14ca8632f & 2) == 0) {
    DAT_14ca8632f = DAT_14ca8632f | 2;
    _DAT_14ca862d0 = L"FClearReplacementPS_Zero";
    _DAT_14ca862e8 = FUN_146826540;
    _DAT_14ca862f0 = FUN_146825d77;
    _DAT_14ca862f8 = FUN_146825fd6;
    _DAT_14ca86300 = FUN_1407e02ea;
    _DAT_14ca86308 = FUN_146826273;
    _DAT_14ca862e0 = FUN_1474162b8;
    _DAT_14ca86320 = 0xffffffff000000f8;
    _DAT_14ca86328 = 8;
    DAT_14ca8632c = 0;
    _DAT_14ca86310 = &LAB_1474162e4;
    FUN_14609d89e();
    FUN_1407e00cc(&DAT_14ca862c8);
    return;
  }
  return;
}



// FUNCTION 14609d89e FUN_14609d89e body=133 status=ok
// SIG undefined FUN_14609d89e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609d89e(void)

{
  _DAT_14ca923e0 = L"BASE";
  DAT_14ca9240a = 4;
  FUN_145ddfa10();
  _DAT_14ca923f0 = DAT_14ca862d8;
  _DAT_14ca923e8 = &DAT_14ca91f48;
  _DAT_14ca923f8 = &LAB_14682652b;
  DAT_14ca862d8 = &DAT_14ca923e0;
  DAT_14ca8632d = DAT_14ca8632d + '\x01';
  _DAT_14ca92400 = 0x100000000;
  if (DAT_14ca91fac != '\0') {
    DAT_14ca8632e = DAT_14ca8632e + '\x01';
  }
  return;
}



// FUNCTION 14609d924 FUN_14609d924 body=284 status=ok
// SIG undefined FUN_14609d924(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609d924(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca89b90) {
    FUN_144b3d300(&DAT_14ca89b90);
    if (DAT_14ca89b90 == -1) {
      FUN_14609da40();
      FUN_140db5666(&DAT_14ca89ae8,0,&DAT_14ca89a80,L"FCopyTextureCS_Texture2D_Texture2D_Float4",
                    L"/Engine/Private/CopyTextureShaders.usf",L"CopyTextureCS",5,1,FUN_147419e2c,
                    FUN_147419e04,&LAB_147419dec,&LAB_147419de8,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca89ae8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f21fc);
      _Init_thread_footer(&DAT_14ca89b90);
    }
  }
  return &DAT_14ca89ae8;
}



// FUNCTION 14609da40 FUN_14609da40 body=205 status=ok
// SIG undefined FUN_14609da40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609da40(void)

{
  if ((DAT_14ca89ae7 & 2) == 0) {
    DAT_14ca89ae7 = DAT_14ca89ae7 | 2;
    _DAT_14ca89a88 = L"FCopyTextureCS_Texture2D_Texture2D_Float4";
    _DAT_14ca89aa0 = FUN_146826540;
    _DAT_14ca89aa8 = FUN_146825d77;
    _DAT_14ca89ab0 = FUN_146825fd6;
    _DAT_14ca89ab8 = FUN_1407e02ea;
    _DAT_14ca89ac0 = FUN_146826273;
    _DAT_14ca89a98 = FUN_147419db8;
    _DAT_14ca89ad8 = 0xffffffff00000100;
    _DAT_14ca89ae0 = 8;
    DAT_14ca89ae4 = 0;
    _DAT_14ca89ac8 = &LAB_147419de4;
    FUN_14609db0e();
    FUN_1407e00cc(&DAT_14ca89a80);
    return;
  }
  return;
}



// FUNCTION 14609db0e FUN_14609db0e body=133 status=ok
// SIG undefined FUN_14609db0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609db0e(void)

{
  _DAT_14ca93da0 = L"BASE";
  DAT_14ca93dca = 4;
  FUN_14134bf06();
  _DAT_14ca93db0 = DAT_14ca89a90;
  _DAT_14ca93da8 = &DAT_14ca89a10;
  _DAT_14ca93db8 = &LAB_14682652b;
  DAT_14ca89a90 = &DAT_14ca93da0;
  DAT_14ca89ae5 = DAT_14ca89ae5 + '\x01';
  _DAT_14ca93dc0 = 0x100000000;
  if (DAT_14ca89a74 != '\0') {
    DAT_14ca89ae6 = DAT_14ca89ae6 + '\x01';
  }
  return;
}



// FUNCTION 14609db94 FUN_14609db94 body=284 status=ok
// SIG undefined FUN_14609db94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609db94(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca89cb8) {
    FUN_144b3d300(&DAT_14ca89cb8);
    if (DAT_14ca89cb8 == -1) {
      FUN_14609dcb0();
      FUN_140db5666(&DAT_14ca89c10,0,&DAT_14ca89ba8,L"FCopyTextureCS_Texture2D_Texture2D_Int324",
                    L"/Engine/Private/CopyTextureShaders.usf",L"CopyTextureCS",5,1,FUN_147419f3a,
                    FUN_147419f12,&LAB_147419efa,&LAB_147419ef6,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca89c10 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f2208);
      _Init_thread_footer(&DAT_14ca89cb8);
    }
  }
  return &DAT_14ca89c10;
}



// FUNCTION 14609dcb0 FUN_14609dcb0 body=205 status=ok
// SIG undefined FUN_14609dcb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609dcb0(void)

{
  if ((DAT_14ca89c0f & 2) == 0) {
    DAT_14ca89c0f = DAT_14ca89c0f | 2;
    _DAT_14ca89bb0 = L"FCopyTextureCS_Texture2D_Texture2D_Int324";
    _DAT_14ca89bc8 = FUN_146826540;
    _DAT_14ca89bd0 = FUN_146825d77;
    _DAT_14ca89bd8 = FUN_146825fd6;
    _DAT_14ca89be0 = FUN_1407e02ea;
    _DAT_14ca89be8 = FUN_146826273;
    _DAT_14ca89bc0 = FUN_147419ec6;
    _DAT_14ca89c00 = 0xffffffff00000100;
    _DAT_14ca89c08 = 8;
    DAT_14ca89c0c = 0;
    _DAT_14ca89bf0 = &LAB_147419ef2;
    FUN_14609dd7e();
    FUN_1407e00cc(&DAT_14ca89ba8);
    return;
  }
  return;
}



// FUNCTION 14609dd7e FUN_14609dd7e body=133 status=ok
// SIG undefined FUN_14609dd7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609dd7e(void)

{
  _DAT_14ca93dd0 = L"BASE";
  DAT_14ca93dfa = 4;
  FUN_14134bf06();
  _DAT_14ca93de0 = DAT_14ca89bb8;
  _DAT_14ca93dd8 = &DAT_14ca89a10;
  _DAT_14ca93de8 = &LAB_14682652b;
  DAT_14ca89bb8 = &DAT_14ca93dd0;
  DAT_14ca89c0d = DAT_14ca89c0d + '\x01';
  _DAT_14ca93df0 = 0x100000000;
  if (DAT_14ca89a74 != '\0') {
    DAT_14ca89c0e = DAT_14ca89c0e + '\x01';
  }
  return;
}



// FUNCTION 14609de04 FUN_14609de04 body=284 status=ok
// SIG undefined FUN_14609de04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609de04(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca89de0) {
    FUN_144b3d300(&DAT_14ca89de0);
    if (DAT_14ca89de0 == -1) {
      FUN_14609df20();
      FUN_140db5666(&DAT_14ca89d38,0,&DAT_14ca89cd0,L"FCopyTextureCS_Texture2D_Texture2D_Uint324",
                    L"/Engine/Private/CopyTextureShaders.usf",L"CopyTextureCS",5,1,FUN_14741a048,
                    FUN_14741a020,&LAB_14741a008,&LAB_14741a004,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca89d38 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f2214);
      _Init_thread_footer(&DAT_14ca89de0);
    }
  }
  return &DAT_14ca89d38;
}



// FUNCTION 14609df20 FUN_14609df20 body=205 status=ok
// SIG undefined FUN_14609df20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609df20(void)

{
  if ((DAT_14ca89d37 & 2) == 0) {
    DAT_14ca89d37 = DAT_14ca89d37 | 2;
    _DAT_14ca89cd8 = L"FCopyTextureCS_Texture2D_Texture2D_Uint324";
    _DAT_14ca89cf0 = FUN_146826540;
    _DAT_14ca89cf8 = FUN_146825d77;
    _DAT_14ca89d00 = FUN_146825fd6;
    _DAT_14ca89d08 = FUN_1407e02ea;
    _DAT_14ca89d10 = FUN_146826273;
    _DAT_14ca89ce8 = FUN_147419fd4;
    _DAT_14ca89d28 = 0xffffffff00000100;
    _DAT_14ca89d30 = 8;
    DAT_14ca89d34 = 0;
    _DAT_14ca89d18 = &LAB_14741a000;
    FUN_14609dfee();
    FUN_1407e00cc(&DAT_14ca89cd0);
    return;
  }
  return;
}



// FUNCTION 14609dfee FUN_14609dfee body=133 status=ok
// SIG undefined FUN_14609dfee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609dfee(void)

{
  _DAT_14ca93e00 = L"BASE";
  DAT_14ca93e2a = 4;
  FUN_14134bf06();
  _DAT_14ca93e10 = DAT_14ca89ce0;
  _DAT_14ca93e08 = &DAT_14ca89a10;
  _DAT_14ca93e18 = &LAB_14682652b;
  DAT_14ca89ce0 = &DAT_14ca93e00;
  DAT_14ca89d35 = DAT_14ca89d35 + '\x01';
  _DAT_14ca93e20 = 0x100000000;
  if (DAT_14ca89a74 != '\0') {
    DAT_14ca89d36 = DAT_14ca89d36 + '\x01';
  }
  return;
}



// FUNCTION 14609e074 FUN_14609e074 body=284 status=ok
// SIG undefined FUN_14609e074(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609e074(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca89f08) {
    FUN_144b3d300(&DAT_14ca89f08);
    if (DAT_14ca89f08 == -1) {
      FUN_14609e190();
      FUN_140db5666(&DAT_14ca89e60,0,&DAT_14ca89df8,
                    L"FCopyTextureCS_Texture2D_Texture2DArray_Float4",
                    L"/Engine/Private/CopyTextureShaders.usf",L"CopyTextureCS",5,1,FUN_14741a156,
                    FUN_14741a12e,&LAB_14741a116,&LAB_14741a112,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca89e60 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f2220);
      _Init_thread_footer(&DAT_14ca89f08);
    }
  }
  return &DAT_14ca89e60;
}



// FUNCTION 14609e190 FUN_14609e190 body=205 status=ok
// SIG undefined FUN_14609e190(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609e190(void)

{
  if ((DAT_14ca89e5f & 2) == 0) {
    DAT_14ca89e5f = DAT_14ca89e5f | 2;
    _DAT_14ca89e00 = L"FCopyTextureCS_Texture2D_Texture2DArray_Float4";
    _DAT_14ca89e18 = FUN_146826540;
    _DAT_14ca89e20 = FUN_146825d77;
    _DAT_14ca89e28 = FUN_146825fd6;
    _DAT_14ca89e30 = FUN_1407e02ea;
    _DAT_14ca89e38 = FUN_146826273;
    _DAT_14ca89e10 = FUN_14741a0e2;
    _DAT_14ca89e50 = 0xffffffff00000100;
    _DAT_14ca89e58 = 8;
    DAT_14ca89e5c = 0;
    _DAT_14ca89e40 = &LAB_14741a10e;
    FUN_14609e25e();
    FUN_1407e00cc(&DAT_14ca89df8);
    return;
  }
  return;
}



// FUNCTION 14609e25e FUN_14609e25e body=133 status=ok
// SIG undefined FUN_14609e25e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609e25e(void)

{
  _DAT_14ca93e30 = L"BASE";
  DAT_14ca93e5a = 4;
  FUN_14134bf06();
  _DAT_14ca93e40 = DAT_14ca89e08;
  _DAT_14ca93e38 = &DAT_14ca89a10;
  _DAT_14ca93e48 = &LAB_14682652b;
  DAT_14ca89e08 = &DAT_14ca93e30;
  DAT_14ca89e5d = DAT_14ca89e5d + '\x01';
  _DAT_14ca93e50 = 0x100000000;
  if (DAT_14ca89a74 != '\0') {
    DAT_14ca89e5e = DAT_14ca89e5e + '\x01';
  }
  return;
}



// FUNCTION 14609e2e4 FUN_14609e2e4 body=284 status=ok
// SIG undefined FUN_14609e2e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609e2e4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8a030) {
    FUN_144b3d300(&DAT_14ca8a030);
    if (DAT_14ca8a030 == -1) {
      FUN_14609e400();
      FUN_140db5666(&DAT_14ca89f88,0,&DAT_14ca89f20,
                    L"FCopyTextureCS_Texture2D_Texture2DArray_Int324",
                    L"/Engine/Private/CopyTextureShaders.usf",L"CopyTextureCS",5,1,FUN_14741a264,
                    FUN_14741a23c,&LAB_14741a224,&LAB_14741a220,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca89f88 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f222c);
      _Init_thread_footer(&DAT_14ca8a030);
    }
  }
  return &DAT_14ca89f88;
}



// FUNCTION 14609e400 FUN_14609e400 body=205 status=ok
// SIG undefined FUN_14609e400(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609e400(void)

{
  if ((DAT_14ca89f87 & 2) == 0) {
    DAT_14ca89f87 = DAT_14ca89f87 | 2;
    _DAT_14ca89f28 = L"FCopyTextureCS_Texture2D_Texture2DArray_Int324";
    _DAT_14ca89f40 = FUN_146826540;
    _DAT_14ca89f48 = FUN_146825d77;
    _DAT_14ca89f50 = FUN_146825fd6;
    _DAT_14ca89f58 = FUN_1407e02ea;
    _DAT_14ca89f60 = FUN_146826273;
    _DAT_14ca89f38 = FUN_14741a1f0;
    _DAT_14ca89f78 = 0xffffffff00000100;
    _DAT_14ca89f80 = 8;
    DAT_14ca89f84 = 0;
    _DAT_14ca89f68 = &LAB_14741a21c;
    FUN_14609e4ce();
    FUN_1407e00cc(&DAT_14ca89f20);
    return;
  }
  return;
}



// FUNCTION 14609e4ce FUN_14609e4ce body=133 status=ok
// SIG undefined FUN_14609e4ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609e4ce(void)

{
  _DAT_14ca93e60 = L"BASE";
  DAT_14ca93e8a = 4;
  FUN_14134bf06();
  _DAT_14ca93e70 = DAT_14ca89f30;
  _DAT_14ca93e68 = &DAT_14ca89a10;
  _DAT_14ca93e78 = &LAB_14682652b;
  DAT_14ca89f30 = &DAT_14ca93e60;
  DAT_14ca89f85 = DAT_14ca89f85 + '\x01';
  _DAT_14ca93e80 = 0x100000000;
  if (DAT_14ca89a74 != '\0') {
    DAT_14ca89f86 = DAT_14ca89f86 + '\x01';
  }
  return;
}



// FUNCTION 14609e554 FUN_14609e554 body=284 status=ok
// SIG undefined FUN_14609e554(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609e554(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8a158) {
    FUN_144b3d300(&DAT_14ca8a158);
    if (DAT_14ca8a158 == -1) {
      FUN_14609e670();
      FUN_140db5666(&DAT_14ca8a0b0,0,&DAT_14ca8a048,
                    L"FCopyTextureCS_Texture2D_Texture2DArray_Uint324",
                    L"/Engine/Private/CopyTextureShaders.usf",L"CopyTextureCS",5,1,FUN_14741a372,
                    FUN_14741a34a,&LAB_14741a332,&LAB_14741a32e,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca8a0b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f2238);
      _Init_thread_footer(&DAT_14ca8a158);
    }
  }
  return &DAT_14ca8a0b0;
}



// FUNCTION 14609e670 FUN_14609e670 body=205 status=ok
// SIG undefined FUN_14609e670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609e670(void)

{
  if ((DAT_14ca8a0af & 2) == 0) {
    DAT_14ca8a0af = DAT_14ca8a0af | 2;
    _DAT_14ca8a050 = L"FCopyTextureCS_Texture2D_Texture2DArray_Uint324";
    _DAT_14ca8a068 = FUN_146826540;
    _DAT_14ca8a070 = FUN_146825d77;
    _DAT_14ca8a078 = FUN_146825fd6;
    _DAT_14ca8a080 = FUN_1407e02ea;
    _DAT_14ca8a088 = FUN_146826273;
    _DAT_14ca8a060 = FUN_14741a2fe;
    _DAT_14ca8a0a0 = 0xffffffff00000100;
    _DAT_14ca8a0a8 = 8;
    DAT_14ca8a0ac = 0;
    _DAT_14ca8a090 = &LAB_14741a32a;
    FUN_14609e73e();
    FUN_1407e00cc(&DAT_14ca8a048);
    return;
  }
  return;
}



// FUNCTION 14609e73e FUN_14609e73e body=133 status=ok
// SIG undefined FUN_14609e73e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609e73e(void)

{
  _DAT_14ca93e90 = L"BASE";
  DAT_14ca93eba = 4;
  FUN_14134bf06();
  _DAT_14ca93ea0 = DAT_14ca8a058;
  _DAT_14ca93e98 = &DAT_14ca89a10;
  _DAT_14ca93ea8 = &LAB_14682652b;
  DAT_14ca8a058 = &DAT_14ca93e90;
  DAT_14ca8a0ad = DAT_14ca8a0ad + '\x01';
  _DAT_14ca93eb0 = 0x100000000;
  if (DAT_14ca89a74 != '\0') {
    DAT_14ca8a0ae = DAT_14ca8a0ae + '\x01';
  }
  return;
}



// FUNCTION 14609e7c4 FUN_14609e7c4 body=284 status=ok
// SIG undefined FUN_14609e7c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609e7c4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8a280) {
    FUN_144b3d300(&DAT_14ca8a280);
    if (DAT_14ca8a280 == -1) {
      FUN_14609e8e0();
      FUN_140db5666(&DAT_14ca8a1d8,0,&DAT_14ca8a170,L"FCopyTextureCS_Texture2D_Texture3D_Float4",
                    L"/Engine/Private/CopyTextureShaders.usf",L"CopyTextureCS",5,1,FUN_14741a480,
                    FUN_14741a458,&LAB_14741a440,&LAB_14741a43c,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca8a1d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f2244);
      _Init_thread_footer(&DAT_14ca8a280);
    }
  }
  return &DAT_14ca8a1d8;
}



// FUNCTION 14609e8e0 FUN_14609e8e0 body=205 status=ok
// SIG undefined FUN_14609e8e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609e8e0(void)

{
  if ((DAT_14ca8a1d7 & 2) == 0) {
    DAT_14ca8a1d7 = DAT_14ca8a1d7 | 2;
    _DAT_14ca8a178 = L"FCopyTextureCS_Texture2D_Texture3D_Float4";
    _DAT_14ca8a190 = FUN_146826540;
    _DAT_14ca8a198 = FUN_146825d77;
    _DAT_14ca8a1a0 = FUN_146825fd6;
    _DAT_14ca8a1a8 = FUN_1407e02ea;
    _DAT_14ca8a1b0 = FUN_146826273;
    _DAT_14ca8a188 = FUN_14741a40c;
    _DAT_14ca8a1c8 = 0xffffffff00000100;
    _DAT_14ca8a1d0 = 8;
    DAT_14ca8a1d4 = 0;
    _DAT_14ca8a1b8 = &LAB_14741a438;
    FUN_14609e9ae();
    FUN_1407e00cc(&DAT_14ca8a170);
    return;
  }
  return;
}



// FUNCTION 14609e9ae FUN_14609e9ae body=133 status=ok
// SIG undefined FUN_14609e9ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609e9ae(void)

{
  _DAT_14ca93ec0 = L"BASE";
  DAT_14ca93eea = 4;
  FUN_14134bf06();
  _DAT_14ca93ed0 = DAT_14ca8a180;
  _DAT_14ca93ec8 = &DAT_14ca89a10;
  _DAT_14ca93ed8 = &LAB_14682652b;
  DAT_14ca8a180 = &DAT_14ca93ec0;
  DAT_14ca8a1d5 = DAT_14ca8a1d5 + '\x01';
  _DAT_14ca93ee0 = 0x100000000;
  if (DAT_14ca89a74 != '\0') {
    DAT_14ca8a1d6 = DAT_14ca8a1d6 + '\x01';
  }
  return;
}



// FUNCTION 14609ea34 FUN_14609ea34 body=284 status=ok
// SIG undefined FUN_14609ea34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609ea34(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8a3a8) {
    FUN_144b3d300(&DAT_14ca8a3a8);
    if (DAT_14ca8a3a8 == -1) {
      FUN_14609eb50();
      FUN_140db5666(&DAT_14ca8a300,0,&DAT_14ca8a298,L"FCopyTextureCS_Texture2D_Texture3D_Int324",
                    L"/Engine/Private/CopyTextureShaders.usf",L"CopyTextureCS",5,1,FUN_14741a58e,
                    FUN_14741a566,&LAB_14741a54e,&LAB_14741a54a,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca8a300 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f2250);
      _Init_thread_footer(&DAT_14ca8a3a8);
    }
  }
  return &DAT_14ca8a300;
}



// FUNCTION 14609eb50 FUN_14609eb50 body=205 status=ok
// SIG undefined FUN_14609eb50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609eb50(void)

{
  if ((DAT_14ca8a2ff & 2) == 0) {
    DAT_14ca8a2ff = DAT_14ca8a2ff | 2;
    _DAT_14ca8a2a0 = L"FCopyTextureCS_Texture2D_Texture3D_Int324";
    _DAT_14ca8a2b8 = FUN_146826540;
    _DAT_14ca8a2c0 = FUN_146825d77;
    _DAT_14ca8a2c8 = FUN_146825fd6;
    _DAT_14ca8a2d0 = FUN_1407e02ea;
    _DAT_14ca8a2d8 = FUN_146826273;
    _DAT_14ca8a2b0 = FUN_14741a51a;
    _DAT_14ca8a2f0 = 0xffffffff00000100;
    _DAT_14ca8a2f8 = 8;
    DAT_14ca8a2fc = 0;
    _DAT_14ca8a2e0 = &LAB_14741a546;
    FUN_14609ec1e();
    FUN_1407e00cc(&DAT_14ca8a298);
    return;
  }
  return;
}



// FUNCTION 14609ec1e FUN_14609ec1e body=133 status=ok
// SIG undefined FUN_14609ec1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609ec1e(void)

{
  _DAT_14ca93ef0 = L"BASE";
  DAT_14ca93f1a = 4;
  FUN_14134bf06();
  _DAT_14ca93f00 = DAT_14ca8a2a8;
  _DAT_14ca93ef8 = &DAT_14ca89a10;
  _DAT_14ca93f08 = &LAB_14682652b;
  DAT_14ca8a2a8 = &DAT_14ca93ef0;
  DAT_14ca8a2fd = DAT_14ca8a2fd + '\x01';
  _DAT_14ca93f10 = 0x100000000;
  if (DAT_14ca89a74 != '\0') {
    DAT_14ca8a2fe = DAT_14ca8a2fe + '\x01';
  }
  return;
}



// FUNCTION 14609eca4 FUN_14609eca4 body=284 status=ok
// SIG undefined FUN_14609eca4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609eca4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8a4d0) {
    FUN_144b3d300(&DAT_14ca8a4d0);
    if (DAT_14ca8a4d0 == -1) {
      FUN_14609edc0();
      FUN_140db5666(&DAT_14ca8a428,0,&DAT_14ca8a3c0,L"FCopyTextureCS_Texture2D_Texture3D_Uint324",
                    L"/Engine/Private/CopyTextureShaders.usf",L"CopyTextureCS",5,1,FUN_14741a69c,
                    FUN_14741a674,&LAB_14741a65c,&LAB_14741a658,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca8a428 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f225c);
      _Init_thread_footer(&DAT_14ca8a4d0);
    }
  }
  return &DAT_14ca8a428;
}



// FUNCTION 14609edc0 FUN_14609edc0 body=205 status=ok
// SIG undefined FUN_14609edc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609edc0(void)

{
  if ((DAT_14ca8a427 & 2) == 0) {
    DAT_14ca8a427 = DAT_14ca8a427 | 2;
    _DAT_14ca8a3c8 = L"FCopyTextureCS_Texture2D_Texture3D_Uint324";
    _DAT_14ca8a3e0 = FUN_146826540;
    _DAT_14ca8a3e8 = FUN_146825d77;
    _DAT_14ca8a3f0 = FUN_146825fd6;
    _DAT_14ca8a3f8 = FUN_1407e02ea;
    _DAT_14ca8a400 = FUN_146826273;
    _DAT_14ca8a3d8 = FUN_14741a628;
    _DAT_14ca8a418 = 0xffffffff00000100;
    _DAT_14ca8a420 = 8;
    DAT_14ca8a424 = 0;
    _DAT_14ca8a408 = &LAB_14741a654;
    FUN_14609ee8e();
    FUN_1407e00cc(&DAT_14ca8a3c0);
    return;
  }
  return;
}



// FUNCTION 14609ee8e FUN_14609ee8e body=133 status=ok
// SIG undefined FUN_14609ee8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609ee8e(void)

{
  _DAT_14ca93f20 = L"BASE";
  DAT_14ca93f4a = 4;
  FUN_14134bf06();
  _DAT_14ca93f30 = DAT_14ca8a3d0;
  _DAT_14ca93f28 = &DAT_14ca89a10;
  _DAT_14ca93f38 = &LAB_14682652b;
  DAT_14ca8a3d0 = &DAT_14ca93f20;
  DAT_14ca8a425 = DAT_14ca8a425 + '\x01';
  _DAT_14ca93f40 = 0x100000000;
  if (DAT_14ca89a74 != '\0') {
    DAT_14ca8a426 = DAT_14ca8a426 + '\x01';
  }
  return;
}



// FUNCTION 14609ef14 FUN_14609ef14 body=284 status=ok
// SIG undefined FUN_14609ef14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609ef14(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8a5f8) {
    FUN_144b3d300(&DAT_14ca8a5f8);
    if (DAT_14ca8a5f8 == -1) {
      FUN_14609f030();
      FUN_140db5666(&DAT_14ca8a550,0,&DAT_14ca8a4e8,
                    L"FCopyTextureCS_Texture2DArray_Texture2D_Float4",
                    L"/Engine/Private/CopyTextureShaders.usf",L"CopyTextureCS",5,1,FUN_14741a7aa,
                    FUN_14741a782,&LAB_14741a76a,&LAB_14741a766,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca8a550 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f2268);
      _Init_thread_footer(&DAT_14ca8a5f8);
    }
  }
  return &DAT_14ca8a550;
}



// FUNCTION 14609f030 FUN_14609f030 body=205 status=ok
// SIG undefined FUN_14609f030(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609f030(void)

{
  if ((DAT_14ca8a54f & 2) == 0) {
    DAT_14ca8a54f = DAT_14ca8a54f | 2;
    _DAT_14ca8a4f0 = L"FCopyTextureCS_Texture2DArray_Texture2D_Float4";
    _DAT_14ca8a508 = FUN_146826540;
    _DAT_14ca8a510 = FUN_146825d77;
    _DAT_14ca8a518 = FUN_146825fd6;
    _DAT_14ca8a520 = FUN_1407e02ea;
    _DAT_14ca8a528 = FUN_146826273;
    _DAT_14ca8a500 = FUN_14741a736;
    _DAT_14ca8a540 = 0xffffffff00000100;
    _DAT_14ca8a548 = 8;
    DAT_14ca8a54c = 0;
    _DAT_14ca8a530 = &LAB_14741a762;
    FUN_14609f0fe();
    FUN_1407e00cc(&DAT_14ca8a4e8);
    return;
  }
  return;
}



// FUNCTION 14609f0fe FUN_14609f0fe body=133 status=ok
// SIG undefined FUN_14609f0fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609f0fe(void)

{
  _DAT_14ca93f50 = L"BASE";
  DAT_14ca93f7a = 4;
  FUN_14134bf06();
  _DAT_14ca93f60 = DAT_14ca8a4f8;
  _DAT_14ca93f58 = &DAT_14ca89a10;
  _DAT_14ca93f68 = &LAB_14682652b;
  DAT_14ca8a4f8 = &DAT_14ca93f50;
  DAT_14ca8a54d = DAT_14ca8a54d + '\x01';
  _DAT_14ca93f70 = 0x100000000;
  if (DAT_14ca89a74 != '\0') {
    DAT_14ca8a54e = DAT_14ca8a54e + '\x01';
  }
  return;
}



// FUNCTION 14609f184 FUN_14609f184 body=284 status=ok
// SIG undefined FUN_14609f184(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609f184(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8a720) {
    FUN_144b3d300(&DAT_14ca8a720);
    if (DAT_14ca8a720 == -1) {
      FUN_14609f2a0();
      FUN_140db5666(&DAT_14ca8a678,0,&DAT_14ca8a610,
                    L"FCopyTextureCS_Texture2DArray_Texture2D_Int324",
                    L"/Engine/Private/CopyTextureShaders.usf",L"CopyTextureCS",5,1,FUN_14741a8b8,
                    FUN_14741a890,&LAB_14741a878,&LAB_14741a874,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca8a678 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f2274);
      _Init_thread_footer(&DAT_14ca8a720);
    }
  }
  return &DAT_14ca8a678;
}



// FUNCTION 14609f2a0 FUN_14609f2a0 body=205 status=ok
// SIG undefined FUN_14609f2a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609f2a0(void)

{
  if ((DAT_14ca8a677 & 2) == 0) {
    DAT_14ca8a677 = DAT_14ca8a677 | 2;
    _DAT_14ca8a618 = L"FCopyTextureCS_Texture2DArray_Texture2D_Int324";
    _DAT_14ca8a630 = FUN_146826540;
    _DAT_14ca8a638 = FUN_146825d77;
    _DAT_14ca8a640 = FUN_146825fd6;
    _DAT_14ca8a648 = FUN_1407e02ea;
    _DAT_14ca8a650 = FUN_146826273;
    _DAT_14ca8a628 = FUN_14741a844;
    _DAT_14ca8a668 = 0xffffffff00000100;
    _DAT_14ca8a670 = 8;
    DAT_14ca8a674 = 0;
    _DAT_14ca8a658 = &LAB_14741a870;
    FUN_14609f36e();
    FUN_1407e00cc(&DAT_14ca8a610);
    return;
  }
  return;
}



// FUNCTION 14609f36e FUN_14609f36e body=133 status=ok
// SIG undefined FUN_14609f36e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609f36e(void)

{
  _DAT_14ca93f80 = L"BASE";
  DAT_14ca93faa = 4;
  FUN_14134bf06();
  _DAT_14ca93f90 = DAT_14ca8a620;
  _DAT_14ca93f88 = &DAT_14ca89a10;
  _DAT_14ca93f98 = &LAB_14682652b;
  DAT_14ca8a620 = &DAT_14ca93f80;
  DAT_14ca8a675 = DAT_14ca8a675 + '\x01';
  _DAT_14ca93fa0 = 0x100000000;
  if (DAT_14ca89a74 != '\0') {
    DAT_14ca8a676 = DAT_14ca8a676 + '\x01';
  }
  return;
}



// FUNCTION 14609f3f4 FUN_14609f3f4 body=284 status=ok
// SIG undefined FUN_14609f3f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609f3f4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8a848) {
    FUN_144b3d300(&DAT_14ca8a848);
    if (DAT_14ca8a848 == -1) {
      FUN_14609f510();
      FUN_140db5666(&DAT_14ca8a7a0,0,&DAT_14ca8a738,
                    L"FCopyTextureCS_Texture2DArray_Texture2D_Uint324",
                    L"/Engine/Private/CopyTextureShaders.usf",L"CopyTextureCS",5,1,FUN_14741a9c6,
                    FUN_14741a99e,&LAB_14741a986,&LAB_14741a982,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca8a7a0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f2280);
      _Init_thread_footer(&DAT_14ca8a848);
    }
  }
  return &DAT_14ca8a7a0;
}



// FUNCTION 14609f510 FUN_14609f510 body=205 status=ok
// SIG undefined FUN_14609f510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609f510(void)

{
  if ((DAT_14ca8a79f & 2) == 0) {
    DAT_14ca8a79f = DAT_14ca8a79f | 2;
    _DAT_14ca8a740 = L"FCopyTextureCS_Texture2DArray_Texture2D_Uint324";
    _DAT_14ca8a758 = FUN_146826540;
    _DAT_14ca8a760 = FUN_146825d77;
    _DAT_14ca8a768 = FUN_146825fd6;
    _DAT_14ca8a770 = FUN_1407e02ea;
    _DAT_14ca8a778 = FUN_146826273;
    _DAT_14ca8a750 = FUN_14741a952;
    _DAT_14ca8a790 = 0xffffffff00000100;
    _DAT_14ca8a798 = 8;
    DAT_14ca8a79c = 0;
    _DAT_14ca8a780 = &LAB_14741a97e;
    FUN_14609f5de();
    FUN_1407e00cc(&DAT_14ca8a738);
    return;
  }
  return;
}



// FUNCTION 14609f5de FUN_14609f5de body=133 status=ok
// SIG undefined FUN_14609f5de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609f5de(void)

{
  _DAT_14ca93fb0 = L"BASE";
  DAT_14ca93fda = 4;
  FUN_14134bf06();
  _DAT_14ca93fc0 = DAT_14ca8a748;
  _DAT_14ca93fb8 = &DAT_14ca89a10;
  _DAT_14ca93fc8 = &LAB_14682652b;
  DAT_14ca8a748 = &DAT_14ca93fb0;
  DAT_14ca8a79d = DAT_14ca8a79d + '\x01';
  _DAT_14ca93fd0 = 0x100000000;
  if (DAT_14ca89a74 != '\0') {
    DAT_14ca8a79e = DAT_14ca8a79e + '\x01';
  }
  return;
}



// FUNCTION 14609f664 FUN_14609f664 body=284 status=ok
// SIG undefined FUN_14609f664(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609f664(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8a970) {
    FUN_144b3d300(&DAT_14ca8a970);
    if (DAT_14ca8a970 == -1) {
      FUN_14609f780();
      FUN_140db5666(&DAT_14ca8a8c8,0,&DAT_14ca8a860,
                    L"FCopyTextureCS_Texture2DArray_Texture2DArray_Float4",
                    L"/Engine/Private/CopyTextureShaders.usf",L"CopyTextureCS",5,1,FUN_14741aad4,
                    FUN_14741aaac,&LAB_14741aa94,&LAB_14741aa90,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca8a8c8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f228c);
      _Init_thread_footer(&DAT_14ca8a970);
    }
  }
  return &DAT_14ca8a8c8;
}



// FUNCTION 14609f780 FUN_14609f780 body=205 status=ok
// SIG undefined FUN_14609f780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609f780(void)

{
  if ((DAT_14ca8a8c7 & 2) == 0) {
    DAT_14ca8a8c7 = DAT_14ca8a8c7 | 2;
    _DAT_14ca8a868 = L"FCopyTextureCS_Texture2DArray_Texture2DArray_Float4";
    _DAT_14ca8a880 = FUN_146826540;
    _DAT_14ca8a888 = FUN_146825d77;
    _DAT_14ca8a890 = FUN_146825fd6;
    _DAT_14ca8a898 = FUN_1407e02ea;
    _DAT_14ca8a8a0 = FUN_146826273;
    _DAT_14ca8a878 = FUN_14741aa60;
    _DAT_14ca8a8b8 = 0xffffffff00000100;
    _DAT_14ca8a8c0 = 8;
    DAT_14ca8a8c4 = 0;
    _DAT_14ca8a8a8 = &LAB_14741aa8c;
    FUN_14609f84e();
    FUN_1407e00cc(&DAT_14ca8a860);
    return;
  }
  return;
}



// FUNCTION 14609f84e FUN_14609f84e body=133 status=ok
// SIG undefined FUN_14609f84e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609f84e(void)

{
  _DAT_14ca93fe0 = L"BASE";
  DAT_14ca9400a = 4;
  FUN_14134bf06();
  _DAT_14ca93ff0 = DAT_14ca8a870;
  _DAT_14ca93fe8 = &DAT_14ca89a10;
  _DAT_14ca93ff8 = &LAB_14682652b;
  DAT_14ca8a870 = &DAT_14ca93fe0;
  DAT_14ca8a8c5 = DAT_14ca8a8c5 + '\x01';
  _DAT_14ca94000 = 0x100000000;
  if (DAT_14ca89a74 != '\0') {
    DAT_14ca8a8c6 = DAT_14ca8a8c6 + '\x01';
  }
  return;
}



// FUNCTION 14609f8d4 FUN_14609f8d4 body=284 status=ok
// SIG undefined FUN_14609f8d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609f8d4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8aa98) {
    FUN_144b3d300(&DAT_14ca8aa98);
    if (DAT_14ca8aa98 == -1) {
      FUN_14609f9f0();
      FUN_140db5666(&DAT_14ca8a9f0,0,&DAT_14ca8a988,
                    L"FCopyTextureCS_Texture2DArray_Texture2DArray_Int324",
                    L"/Engine/Private/CopyTextureShaders.usf",L"CopyTextureCS",5,1,FUN_14741abe2,
                    FUN_14741abba,&LAB_14741aba2,&LAB_14741ab9e,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca8a9f0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f2298);
      _Init_thread_footer(&DAT_14ca8aa98);
    }
  }
  return &DAT_14ca8a9f0;
}



// FUNCTION 14609f9f0 FUN_14609f9f0 body=205 status=ok
// SIG undefined FUN_14609f9f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609f9f0(void)

{
  if ((DAT_14ca8a9ef & 2) == 0) {
    DAT_14ca8a9ef = DAT_14ca8a9ef | 2;
    _DAT_14ca8a990 = L"FCopyTextureCS_Texture2DArray_Texture2DArray_Int324";
    _DAT_14ca8a9a8 = FUN_146826540;
    _DAT_14ca8a9b0 = FUN_146825d77;
    _DAT_14ca8a9b8 = FUN_146825fd6;
    _DAT_14ca8a9c0 = FUN_1407e02ea;
    _DAT_14ca8a9c8 = FUN_146826273;
    _DAT_14ca8a9a0 = FUN_14741ab6e;
    _DAT_14ca8a9e0 = 0xffffffff00000100;
    _DAT_14ca8a9e8 = 8;
    DAT_14ca8a9ec = 0;
    _DAT_14ca8a9d0 = &LAB_14741ab9a;
    FUN_14609fabe();
    FUN_1407e00cc(&DAT_14ca8a988);
    return;
  }
  return;
}



// FUNCTION 14609fabe FUN_14609fabe body=133 status=ok
// SIG undefined FUN_14609fabe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609fabe(void)

{
  _DAT_14ca94010 = L"BASE";
  DAT_14ca9403a = 4;
  FUN_14134bf06();
  _DAT_14ca94020 = DAT_14ca8a998;
  _DAT_14ca94018 = &DAT_14ca89a10;
  _DAT_14ca94028 = &LAB_14682652b;
  DAT_14ca8a998 = &DAT_14ca94010;
  DAT_14ca8a9ed = DAT_14ca8a9ed + '\x01';
  _DAT_14ca94030 = 0x100000000;
  if (DAT_14ca89a74 != '\0') {
    DAT_14ca8a9ee = DAT_14ca8a9ee + '\x01';
  }
  return;
}



// FUNCTION 14609fb44 FUN_14609fb44 body=284 status=ok
// SIG undefined FUN_14609fb44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609fb44(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8abc0) {
    FUN_144b3d300(&DAT_14ca8abc0);
    if (DAT_14ca8abc0 == -1) {
      FUN_14609fc60();
      FUN_140db5666(&DAT_14ca8ab18,0,&DAT_14ca8aab0,
                    L"FCopyTextureCS_Texture2DArray_Texture2DArray_Uint324",
                    L"/Engine/Private/CopyTextureShaders.usf",L"CopyTextureCS",5,1,FUN_14741acf0,
                    FUN_14741acc8,&LAB_14741acb0,&LAB_14741acac,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca8ab18 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f22a4);
      _Init_thread_footer(&DAT_14ca8abc0);
    }
  }
  return &DAT_14ca8ab18;
}



// FUNCTION 14609fc60 FUN_14609fc60 body=205 status=ok
// SIG undefined FUN_14609fc60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609fc60(void)

{
  if ((DAT_14ca8ab17 & 2) == 0) {
    DAT_14ca8ab17 = DAT_14ca8ab17 | 2;
    _DAT_14ca8aab8 = L"FCopyTextureCS_Texture2DArray_Texture2DArray_Uint324";
    _DAT_14ca8aad0 = FUN_146826540;
    _DAT_14ca8aad8 = FUN_146825d77;
    _DAT_14ca8aae0 = FUN_146825fd6;
    _DAT_14ca8aae8 = FUN_1407e02ea;
    _DAT_14ca8aaf0 = FUN_146826273;
    _DAT_14ca8aac8 = FUN_14741ac7c;
    _DAT_14ca8ab08 = 0xffffffff00000100;
    _DAT_14ca8ab10 = 8;
    DAT_14ca8ab14 = 0;
    _DAT_14ca8aaf8 = &LAB_14741aca8;
    FUN_14609fd2e();
    FUN_1407e00cc(&DAT_14ca8aab0);
    return;
  }
  return;
}



// FUNCTION 14609fd2e FUN_14609fd2e body=133 status=ok
// SIG undefined FUN_14609fd2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609fd2e(void)

{
  _DAT_14ca94040 = L"BASE";
  DAT_14ca9406a = 4;
  FUN_14134bf06();
  _DAT_14ca94050 = DAT_14ca8aac0;
  _DAT_14ca94048 = &DAT_14ca89a10;
  _DAT_14ca94058 = &LAB_14682652b;
  DAT_14ca8aac0 = &DAT_14ca94040;
  DAT_14ca8ab15 = DAT_14ca8ab15 + '\x01';
  _DAT_14ca94060 = 0x100000000;
  if (DAT_14ca89a74 != '\0') {
    DAT_14ca8ab16 = DAT_14ca8ab16 + '\x01';
  }
  return;
}



// FUNCTION 14609fdb4 FUN_14609fdb4 body=284 status=ok
// SIG undefined FUN_14609fdb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14609fdb4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8ace8) {
    FUN_144b3d300(&DAT_14ca8ace8);
    if (DAT_14ca8ace8 == -1) {
      FUN_14609fed0();
      FUN_140db5666(&DAT_14ca8ac40,0,&DAT_14ca8abd8,
                    L"FCopyTextureCS_Texture2DArray_Texture3D_Float4",
                    L"/Engine/Private/CopyTextureShaders.usf",L"CopyTextureCS",5,1,FUN_14741adfe,
                    FUN_14741add6,&LAB_14741adbe,&LAB_14741adba,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca8ac40 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f22b0);
      _Init_thread_footer(&DAT_14ca8ace8);
    }
  }
  return &DAT_14ca8ac40;
}



// FUNCTION 14609fed0 FUN_14609fed0 body=205 status=ok
// SIG undefined FUN_14609fed0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609fed0(void)

{
  if ((DAT_14ca8ac3f & 2) == 0) {
    DAT_14ca8ac3f = DAT_14ca8ac3f | 2;
    _DAT_14ca8abe0 = L"FCopyTextureCS_Texture2DArray_Texture3D_Float4";
    _DAT_14ca8abf8 = FUN_146826540;
    _DAT_14ca8ac00 = FUN_146825d77;
    _DAT_14ca8ac08 = FUN_146825fd6;
    _DAT_14ca8ac10 = FUN_1407e02ea;
    _DAT_14ca8ac18 = FUN_146826273;
    _DAT_14ca8abf0 = FUN_14741ad8a;
    _DAT_14ca8ac30 = 0xffffffff00000100;
    _DAT_14ca8ac38 = 8;
    DAT_14ca8ac3c = 0;
    _DAT_14ca8ac20 = &LAB_14741adb6;
    FUN_14609ff9e();
    FUN_1407e00cc(&DAT_14ca8abd8);
    return;
  }
  return;
}



// FUNCTION 14609ff9e FUN_14609ff9e body=133 status=ok
// SIG undefined FUN_14609ff9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14609ff9e(void)

{
  _DAT_14ca94070 = L"BASE";
  DAT_14ca9409a = 4;
  FUN_14134bf06();
  _DAT_14ca94080 = DAT_14ca8abe8;
  _DAT_14ca94078 = &DAT_14ca89a10;
  _DAT_14ca94088 = &LAB_14682652b;
  DAT_14ca8abe8 = &DAT_14ca94070;
  DAT_14ca8ac3d = DAT_14ca8ac3d + '\x01';
  _DAT_14ca94090 = 0x100000000;
  if (DAT_14ca89a74 != '\0') {
    DAT_14ca8ac3e = DAT_14ca8ac3e + '\x01';
  }
  return;
}



// FUNCTION 1460a0024 FUN_1460a0024 body=284 status=ok
// SIG undefined FUN_1460a0024(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a0024(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8ae10) {
    FUN_144b3d300(&DAT_14ca8ae10);
    if (DAT_14ca8ae10 == -1) {
      FUN_1460a0140();
      FUN_140db5666(&DAT_14ca8ad68,0,&DAT_14ca8ad00,
                    L"FCopyTextureCS_Texture2DArray_Texture3D_Int324",
                    L"/Engine/Private/CopyTextureShaders.usf",L"CopyTextureCS",5,1,FUN_14741af0c,
                    FUN_14741aee4,&LAB_14741aecc,&LAB_14741aec8,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca8ad68 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f22bc);
      _Init_thread_footer(&DAT_14ca8ae10);
    }
  }
  return &DAT_14ca8ad68;
}



// FUNCTION 1460a0140 FUN_1460a0140 body=205 status=ok
// SIG undefined FUN_1460a0140(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a0140(void)

{
  if ((DAT_14ca8ad67 & 2) == 0) {
    DAT_14ca8ad67 = DAT_14ca8ad67 | 2;
    _DAT_14ca8ad08 = L"FCopyTextureCS_Texture2DArray_Texture3D_Int324";
    _DAT_14ca8ad20 = FUN_146826540;
    _DAT_14ca8ad28 = FUN_146825d77;
    _DAT_14ca8ad30 = FUN_146825fd6;
    _DAT_14ca8ad38 = FUN_1407e02ea;
    _DAT_14ca8ad40 = FUN_146826273;
    _DAT_14ca8ad18 = FUN_14741ae98;
    _DAT_14ca8ad58 = 0xffffffff00000100;
    _DAT_14ca8ad60 = 8;
    DAT_14ca8ad64 = 0;
    _DAT_14ca8ad48 = &LAB_14741aec4;
    FUN_1460a020e();
    FUN_1407e00cc(&DAT_14ca8ad00);
    return;
  }
  return;
}



// FUNCTION 1460a020e FUN_1460a020e body=133 status=ok
// SIG undefined FUN_1460a020e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a020e(void)

{
  _DAT_14ca940a0 = L"BASE";
  DAT_14ca940ca = 4;
  FUN_14134bf06();
  _DAT_14ca940b0 = DAT_14ca8ad10;
  _DAT_14ca940a8 = &DAT_14ca89a10;
  _DAT_14ca940b8 = &LAB_14682652b;
  DAT_14ca8ad10 = &DAT_14ca940a0;
  DAT_14ca8ad65 = DAT_14ca8ad65 + '\x01';
  _DAT_14ca940c0 = 0x100000000;
  if (DAT_14ca89a74 != '\0') {
    DAT_14ca8ad66 = DAT_14ca8ad66 + '\x01';
  }
  return;
}



// FUNCTION 1460a0294 FUN_1460a0294 body=284 status=ok
// SIG undefined FUN_1460a0294(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a0294(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8af38) {
    FUN_144b3d300(&DAT_14ca8af38);
    if (DAT_14ca8af38 == -1) {
      FUN_1460a03b0();
      FUN_140db5666(&DAT_14ca8ae90,0,&DAT_14ca8ae28,
                    L"FCopyTextureCS_Texture2DArray_Texture3D_Uint324",
                    L"/Engine/Private/CopyTextureShaders.usf",L"CopyTextureCS",5,1,FUN_14741b01a,
                    FUN_14741aff2,&LAB_14741afda,&LAB_14741afd6,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca8ae90 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f22c8);
      _Init_thread_footer(&DAT_14ca8af38);
    }
  }
  return &DAT_14ca8ae90;
}



// FUNCTION 1460a03b0 FUN_1460a03b0 body=205 status=ok
// SIG undefined FUN_1460a03b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a03b0(void)

{
  if ((DAT_14ca8ae8f & 2) == 0) {
    DAT_14ca8ae8f = DAT_14ca8ae8f | 2;
    _DAT_14ca8ae30 = L"FCopyTextureCS_Texture2DArray_Texture3D_Uint324";
    _DAT_14ca8ae48 = FUN_146826540;
    _DAT_14ca8ae50 = FUN_146825d77;
    _DAT_14ca8ae58 = FUN_146825fd6;
    _DAT_14ca8ae60 = FUN_1407e02ea;
    _DAT_14ca8ae68 = FUN_146826273;
    _DAT_14ca8ae40 = FUN_14741afa6;
    _DAT_14ca8ae80 = 0xffffffff00000100;
    _DAT_14ca8ae88 = 8;
    DAT_14ca8ae8c = 0;
    _DAT_14ca8ae70 = &LAB_14741afd2;
    FUN_1460a047e();
    FUN_1407e00cc(&DAT_14ca8ae28);
    return;
  }
  return;
}



// FUNCTION 1460a047e FUN_1460a047e body=133 status=ok
// SIG undefined FUN_1460a047e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a047e(void)

{
  _DAT_14ca940d0 = L"BASE";
  DAT_14ca940fa = 4;
  FUN_14134bf06();
  _DAT_14ca940e0 = DAT_14ca8ae38;
  _DAT_14ca940d8 = &DAT_14ca89a10;
  _DAT_14ca940e8 = &LAB_14682652b;
  DAT_14ca8ae38 = &DAT_14ca940d0;
  DAT_14ca8ae8d = DAT_14ca8ae8d + '\x01';
  _DAT_14ca940f0 = 0x100000000;
  if (DAT_14ca89a74 != '\0') {
    DAT_14ca8ae8e = DAT_14ca8ae8e + '\x01';
  }
  return;
}



// FUNCTION 1460a0504 FUN_1460a0504 body=284 status=ok
// SIG undefined FUN_1460a0504(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a0504(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8b060) {
    FUN_144b3d300(&DAT_14ca8b060);
    if (DAT_14ca8b060 == -1) {
      FUN_1460a0620();
      FUN_140db5666(&DAT_14ca8afb8,0,&DAT_14ca8af50,L"FCopyTextureCS_Texture3D_Texture2D_Float4",
                    L"/Engine/Private/CopyTextureShaders.usf",L"CopyTextureCS",5,1,FUN_14741b128,
                    FUN_14741b100,&LAB_14741b0e8,&LAB_14741b0e4,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca8afb8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f22d4);
      _Init_thread_footer(&DAT_14ca8b060);
    }
  }
  return &DAT_14ca8afb8;
}



// FUNCTION 1460a0620 FUN_1460a0620 body=205 status=ok
// SIG undefined FUN_1460a0620(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a0620(void)

{
  if ((DAT_14ca8afb7 & 2) == 0) {
    DAT_14ca8afb7 = DAT_14ca8afb7 | 2;
    _DAT_14ca8af58 = L"FCopyTextureCS_Texture3D_Texture2D_Float4";
    _DAT_14ca8af70 = FUN_146826540;
    _DAT_14ca8af78 = FUN_146825d77;
    _DAT_14ca8af80 = FUN_146825fd6;
    _DAT_14ca8af88 = FUN_1407e02ea;
    _DAT_14ca8af90 = FUN_146826273;
    _DAT_14ca8af68 = FUN_14741b0b4;
    _DAT_14ca8afa8 = 0xffffffff00000100;
    _DAT_14ca8afb0 = 8;
    DAT_14ca8afb4 = 0;
    _DAT_14ca8af98 = &LAB_14741b0e0;
    FUN_1460a06ee();
    FUN_1407e00cc(&DAT_14ca8af50);
    return;
  }
  return;
}



// FUNCTION 1460a06ee FUN_1460a06ee body=133 status=ok
// SIG undefined FUN_1460a06ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a06ee(void)

{
  _DAT_14ca94100 = L"BASE";
  DAT_14ca9412a = 4;
  FUN_14134bf06();
  _DAT_14ca94110 = DAT_14ca8af60;
  _DAT_14ca94108 = &DAT_14ca89a10;
  _DAT_14ca94118 = &LAB_14682652b;
  DAT_14ca8af60 = &DAT_14ca94100;
  DAT_14ca8afb5 = DAT_14ca8afb5 + '\x01';
  _DAT_14ca94120 = 0x100000000;
  if (DAT_14ca89a74 != '\0') {
    DAT_14ca8afb6 = DAT_14ca8afb6 + '\x01';
  }
  return;
}


