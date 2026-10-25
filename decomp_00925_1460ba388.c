// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1460ba388 FUN_1460ba388 body=287 status=ok
// SIG undefined FUN_1460ba388(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ba388(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b1448) {
    FUN_144b3d300(&DAT_14c9b1448);
    if (DAT_14c9b1448 == -1) {
      FUN_1460ba4a8();
      FUN_140db5666(&DAT_14c9b13a0,2,&DAT_14c9b1338,
                    L"TBasePassWorkGraphCSFPrecomputedVolumetricLightmapLightingPolicySkylight",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",0xb,1,FUN_14712de5c,
                    FUN_14712de34,FUN_141752074,&LAB_14712de30,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9b13a0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c64c);
      _Init_thread_footer(&DAT_14c9b1448);
    }
  }
  return &DAT_14c9b13a0;
}



// FUNCTION 1460ba4a8 FUN_1460ba4a8 body=205 status=ok
// SIG undefined FUN_1460ba4a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ba4a8(void)

{
  if ((DAT_14c9b139f & 2) == 0) {
    DAT_14c9b139f = DAT_14c9b139f | 2;
    _DAT_14c9b1340 = L"TBasePassWorkGraphCSFPrecomputedVolumetricLightmapLightingPolicySkylight";
    _DAT_14c9b1358 = FUN_146826540;
    _DAT_14c9b1360 = FUN_146825d77;
    _DAT_14c9b1368 = FUN_146825fd6;
    _DAT_14c9b1370 = FUN_1407e02ea;
    _DAT_14c9b1378 = FUN_146826273;
    _DAT_14c9b1350 = FUN_14712ddf6;
    _DAT_14c9b1390 = 0xffffffff00000128;
    _DAT_14c9b1398 = 8;
    DAT_14c9b139c = 0;
    _DAT_14c9b1380 = &LAB_14712de2c;
    FUN_1460ba576();
    FUN_1407e00cc(&DAT_14c9b1338);
    return;
  }
  return;
}



// FUNCTION 1460ba576 FUN_1460ba576 body=133 status=ok
// SIG undefined FUN_1460ba576(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ba576(void)

{
  _DAT_14c9bc680 = L"BASE";
  DAT_14c9bc6aa = 4;
  FUN_145d04de2();
  _DAT_14c9bc690 = DAT_14c9b1348;
  _DAT_14c9bc688 = &DAT_14c9bc240;
  _DAT_14c9bc698 = &LAB_14682652b;
  DAT_14c9b1348 = &DAT_14c9bc680;
  DAT_14c9b139d = DAT_14c9b139d + '\x01';
  _DAT_14c9bc6a0 = 0x100000000;
  if (DAT_14c9bc2a4 != '\0') {
    DAT_14c9b139e = DAT_14c9b139e + '\x01';
  }
  return;
}



// FUNCTION 1460ba5fc FUN_1460ba5fc body=287 status=ok
// SIG undefined FUN_1460ba5fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ba5fc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b1570) {
    FUN_144b3d300(&DAT_14c9b1570);
    if (DAT_14c9b1570 == -1) {
      FUN_1460ba71c();
      FUN_140db5666(&DAT_14c9b14c8,2,&DAT_14c9b1460,
                    L"TBasePassWorkGraphCSFPrecomputedVolumetricLightmapLightingPolicy",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",0xb,1,FUN_14712df22,
                    FUN_14712defa,FUN_14175239a,&LAB_14712def6,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9b14c8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c658);
      _Init_thread_footer(&DAT_14c9b1570);
    }
  }
  return &DAT_14c9b14c8;
}



// FUNCTION 1460ba71c FUN_1460ba71c body=205 status=ok
// SIG undefined FUN_1460ba71c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ba71c(void)

{
  if ((DAT_14c9b14c7 & 2) == 0) {
    DAT_14c9b14c7 = DAT_14c9b14c7 | 2;
    _DAT_14c9b1468 = L"TBasePassWorkGraphCSFPrecomputedVolumetricLightmapLightingPolicy";
    _DAT_14c9b1480 = FUN_146826540;
    _DAT_14c9b1488 = FUN_146825d77;
    _DAT_14c9b1490 = FUN_146825fd6;
    _DAT_14c9b1498 = FUN_1407e02ea;
    _DAT_14c9b14a0 = FUN_146826273;
    _DAT_14c9b1478 = FUN_14712debc;
    _DAT_14c9b14b8 = 0xffffffff00000128;
    _DAT_14c9b14c0 = 8;
    DAT_14c9b14c4 = 0;
    _DAT_14c9b14a8 = &LAB_14712def2;
    FUN_1460ba7ea();
    FUN_1407e00cc(&DAT_14c9b1460);
    return;
  }
  return;
}



// FUNCTION 1460ba7ea FUN_1460ba7ea body=133 status=ok
// SIG undefined FUN_1460ba7ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ba7ea(void)

{
  _DAT_14c9bc6d0 = L"BASE";
  DAT_14c9bc6fa = 4;
  FUN_145d04de2();
  _DAT_14c9bc6e0 = DAT_14c9b1470;
  _DAT_14c9bc6d8 = &DAT_14c9bc240;
  _DAT_14c9bc6e8 = &LAB_14682652b;
  DAT_14c9b1470 = &DAT_14c9bc6d0;
  DAT_14c9b14c5 = DAT_14c9b14c5 + '\x01';
  _DAT_14c9bc6f0 = 0x100000000;
  if (DAT_14c9bc2a4 != '\0') {
    DAT_14c9b14c6 = DAT_14c9b14c6 + '\x01';
  }
  return;
}



// FUNCTION 1460ba870 FUN_1460ba870 body=287 status=ok
// SIG undefined FUN_1460ba870(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ba870(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b18e8) {
    FUN_144b3d300(&DAT_14c9b18e8);
    if (DAT_14c9b18e8 == -1) {
      FUN_1460ba990();
      FUN_140db5666(&DAT_14c9b1840,2,&DAT_14c9b17d8,
                    L"TBasePassPSFCachedVolumeIndirectLightingPolicy",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712e144,
                    FUN_14712e11c,FUN_141752ab6,&LAB_14712e118,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b1840 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c67c);
      _Init_thread_footer(&DAT_14c9b18e8);
    }
  }
  return &DAT_14c9b1840;
}



// FUNCTION 1460ba990 FUN_1460ba990 body=205 status=ok
// SIG undefined FUN_1460ba990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ba990(void)

{
  if ((DAT_14c9b183f & 2) == 0) {
    DAT_14c9b183f = DAT_14c9b183f | 2;
    _DAT_14c9b17e0 = L"TBasePassPSFCachedVolumeIndirectLightingPolicy";
    _DAT_14c9b17f8 = FUN_146826540;
    _DAT_14c9b1800 = FUN_146825d77;
    _DAT_14c9b1808 = FUN_146825fd6;
    _DAT_14c9b1810 = FUN_1407e02ea;
    _DAT_14c9b1818 = FUN_146826273;
    _DAT_14c9b17f0 = FUN_14712e0de;
    _DAT_14c9b1830 = 0xffffffff00000110;
    _DAT_14c9b1838 = 8;
    DAT_14c9b183c = 0;
    _DAT_14c9b1820 = &LAB_14712e114;
    FUN_1460baa5e();
    FUN_1407e00cc(&DAT_14c9b17d8);
    return;
  }
  return;
}



// FUNCTION 1460baa5e FUN_1460baa5e body=133 status=ok
// SIG undefined FUN_1460baa5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460baa5e(void)

{
  _DAT_14c9bcad0 = L"BASE";
  DAT_14c9bcafa = 4;
  FUN_145c9435c();
  _DAT_14c9bcae0 = DAT_14c9b17e8;
  _DAT_14c9bcad8 = &DAT_14c9bc920;
  _DAT_14c9bcae8 = &LAB_14682652b;
  DAT_14c9b17e8 = &DAT_14c9bcad0;
  DAT_14c9b183d = DAT_14c9b183d + '\x01';
  _DAT_14c9bcaf0 = 0x100000000;
  if (DAT_14c9bc984 != '\0') {
    DAT_14c9b183e = DAT_14c9b183e + '\x01';
  }
  return;
}



// FUNCTION 1460baae4 FUN_1460baae4 body=287 status=ok
// SIG undefined FUN_1460baae4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460baae4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b1a10) {
    FUN_144b3d300(&DAT_14c9b1a10);
    if (DAT_14c9b1a10 == -1) {
      FUN_1460bac04();
      FUN_140db5666(&DAT_14c9b1968,2,&DAT_14c9b1900,
                    L"TBasePassPSFCachedVolumeIndirectLightingPolicySkylightForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712e1f2,
                    FUN_14712e1ca,FUN_141752d78,&LAB_14712e1c6,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b1968 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c688);
      _Init_thread_footer(&DAT_14c9b1a10);
    }
  }
  return &DAT_14c9b1968;
}



// FUNCTION 1460bac04 FUN_1460bac04 body=205 status=ok
// SIG undefined FUN_1460bac04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bac04(void)

{
  if ((DAT_14c9b1967 & 2) == 0) {
    DAT_14c9b1967 = DAT_14c9b1967 | 2;
    _DAT_14c9b1908 = L"TBasePassPSFCachedVolumeIndirectLightingPolicySkylightForceVelocity";
    _DAT_14c9b1920 = FUN_146826540;
    _DAT_14c9b1928 = FUN_146825d77;
    _DAT_14c9b1930 = FUN_146825fd6;
    _DAT_14c9b1938 = FUN_1407e02ea;
    _DAT_14c9b1940 = FUN_146826273;
    _DAT_14c9b1918 = FUN_14712e18c;
    _DAT_14c9b1958 = 0xffffffff00000110;
    _DAT_14c9b1960 = 8;
    DAT_14c9b1964 = 0;
    _DAT_14c9b1948 = &LAB_14712e1c2;
    FUN_1460bacd2();
    FUN_1407e00cc(&DAT_14c9b1900);
    return;
  }
  return;
}



// FUNCTION 1460bacd2 FUN_1460bacd2 body=133 status=ok
// SIG undefined FUN_1460bacd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bacd2(void)

{
  _DAT_14c9bcb20 = L"BASE";
  DAT_14c9bcb4a = 4;
  FUN_145c9435c();
  _DAT_14c9bcb30 = DAT_14c9b1910;
  _DAT_14c9bcb28 = &DAT_14c9bc920;
  _DAT_14c9bcb38 = &LAB_14682652b;
  DAT_14c9b1910 = &DAT_14c9bcb20;
  DAT_14c9b1965 = DAT_14c9b1965 + '\x01';
  _DAT_14c9bcb40 = 0x100000000;
  if (DAT_14c9bc984 != '\0') {
    DAT_14c9b1966 = DAT_14c9b1966 + '\x01';
  }
  return;
}



// FUNCTION 1460bad58 FUN_1460bad58 body=287 status=ok
// SIG undefined FUN_1460bad58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460bad58(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b1b38) {
    FUN_144b3d300(&DAT_14c9b1b38);
    if (DAT_14c9b1b38 == -1) {
      FUN_1460bae78();
      FUN_140db5666(&DAT_14c9b1a90,2,&DAT_14c9b1a28,
                    L"TBasePassPSFCachedVolumeIndirectLightingPolicyForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712e2a0,
                    FUN_14712e278,FUN_14175315a,&LAB_14712e274,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b1a90 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c694);
      _Init_thread_footer(&DAT_14c9b1b38);
    }
  }
  return &DAT_14c9b1a90;
}



// FUNCTION 1460bae78 FUN_1460bae78 body=205 status=ok
// SIG undefined FUN_1460bae78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bae78(void)

{
  if ((DAT_14c9b1a8f & 2) == 0) {
    DAT_14c9b1a8f = DAT_14c9b1a8f | 2;
    _DAT_14c9b1a30 = L"TBasePassPSFCachedVolumeIndirectLightingPolicyForceVelocity";
    _DAT_14c9b1a48 = FUN_146826540;
    _DAT_14c9b1a50 = FUN_146825d77;
    _DAT_14c9b1a58 = FUN_146825fd6;
    _DAT_14c9b1a60 = FUN_1407e02ea;
    _DAT_14c9b1a68 = FUN_146826273;
    _DAT_14c9b1a40 = FUN_14712e23a;
    _DAT_14c9b1a80 = 0xffffffff00000110;
    _DAT_14c9b1a88 = 8;
    DAT_14c9b1a8c = 0;
    _DAT_14c9b1a70 = &LAB_14712e270;
    FUN_1460baf46();
    FUN_1407e00cc(&DAT_14c9b1a28);
    return;
  }
  return;
}



// FUNCTION 1460baf46 FUN_1460baf46 body=133 status=ok
// SIG undefined FUN_1460baf46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460baf46(void)

{
  _DAT_14c9bcb70 = L"BASE";
  DAT_14c9bcb9a = 4;
  FUN_145c9435c();
  _DAT_14c9bcb80 = DAT_14c9b1a38;
  _DAT_14c9bcb78 = &DAT_14c9bc920;
  _DAT_14c9bcb88 = &LAB_14682652b;
  DAT_14c9b1a38 = &DAT_14c9bcb70;
  DAT_14c9b1a8d = DAT_14c9b1a8d + '\x01';
  _DAT_14c9bcb90 = 0x100000000;
  if (DAT_14c9bc984 != '\0') {
    DAT_14c9b1a8e = DAT_14c9b1a8e + '\x01';
  }
  return;
}



// FUNCTION 1460bafcc FUN_1460bafcc body=287 status=ok
// SIG undefined FUN_1460bafcc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460bafcc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b1c60) {
    FUN_144b3d300(&DAT_14c9b1c60);
    if (DAT_14c9b1c60 == -1) {
      FUN_1460bb0ec();
      FUN_140db5666(&DAT_14c9b1bb8,2,&DAT_14c9b1b50,
                    L"TBasePassPSFCachedVolumeIndirectLightingPolicySkylightGbxDigi",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712e34e,
                    FUN_14712e326,FUN_141753448,&LAB_14712e322,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b1bb8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c6a0);
      _Init_thread_footer(&DAT_14c9b1c60);
    }
  }
  return &DAT_14c9b1bb8;
}



// FUNCTION 1460bb0ec FUN_1460bb0ec body=205 status=ok
// SIG undefined FUN_1460bb0ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bb0ec(void)

{
  if ((DAT_14c9b1bb7 & 2) == 0) {
    DAT_14c9b1bb7 = DAT_14c9b1bb7 | 2;
    _DAT_14c9b1b58 = L"TBasePassPSFCachedVolumeIndirectLightingPolicySkylightGbxDigi";
    _DAT_14c9b1b70 = FUN_146826540;
    _DAT_14c9b1b78 = FUN_146825d77;
    _DAT_14c9b1b80 = FUN_146825fd6;
    _DAT_14c9b1b88 = FUN_1407e02ea;
    _DAT_14c9b1b90 = FUN_146826273;
    _DAT_14c9b1b68 = FUN_14712e2e8;
    _DAT_14c9b1ba8 = 0xffffffff00000110;
    _DAT_14c9b1bb0 = 8;
    DAT_14c9b1bb4 = 0;
    _DAT_14c9b1b98 = &LAB_14712e31e;
    FUN_1460bb1ba();
    FUN_1407e00cc(&DAT_14c9b1b50);
    return;
  }
  return;
}



// FUNCTION 1460bb1ba FUN_1460bb1ba body=133 status=ok
// SIG undefined FUN_1460bb1ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bb1ba(void)

{
  _DAT_14c9bcbc0 = L"BASE";
  DAT_14c9bcbea = 4;
  FUN_145c9435c();
  _DAT_14c9bcbd0 = DAT_14c9b1b60;
  _DAT_14c9bcbc8 = &DAT_14c9bc920;
  _DAT_14c9bcbd8 = &LAB_14682652b;
  DAT_14c9b1b60 = &DAT_14c9bcbc0;
  DAT_14c9b1bb5 = DAT_14c9b1bb5 + '\x01';
  _DAT_14c9bcbe0 = 0x100000000;
  if (DAT_14c9bc984 != '\0') {
    DAT_14c9b1bb6 = DAT_14c9b1bb6 + '\x01';
  }
  return;
}



// FUNCTION 1460bb240 FUN_1460bb240 body=287 status=ok
// SIG undefined FUN_1460bb240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460bb240(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b1d88) {
    FUN_144b3d300(&DAT_14c9b1d88);
    if (DAT_14c9b1d88 == -1) {
      FUN_1460bb360();
      FUN_140db5666(&DAT_14c9b1ce0,2,&DAT_14c9b1c78,
                    L"TBasePassPSFCachedVolumeIndirectLightingPolicyGbxDigi",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712e3fc,
                    FUN_14712e3d4,FUN_14175380c,&LAB_14712e3d0,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b1ce0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c6ac);
      _Init_thread_footer(&DAT_14c9b1d88);
    }
  }
  return &DAT_14c9b1ce0;
}



// FUNCTION 1460bb360 FUN_1460bb360 body=205 status=ok
// SIG undefined FUN_1460bb360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bb360(void)

{
  if ((DAT_14c9b1cdf & 2) == 0) {
    DAT_14c9b1cdf = DAT_14c9b1cdf | 2;
    _DAT_14c9b1c80 = L"TBasePassPSFCachedVolumeIndirectLightingPolicyGbxDigi";
    _DAT_14c9b1c98 = FUN_146826540;
    _DAT_14c9b1ca0 = FUN_146825d77;
    _DAT_14c9b1ca8 = FUN_146825fd6;
    _DAT_14c9b1cb0 = FUN_1407e02ea;
    _DAT_14c9b1cb8 = FUN_146826273;
    _DAT_14c9b1c90 = FUN_14712e396;
    _DAT_14c9b1cd0 = 0xffffffff00000110;
    _DAT_14c9b1cd8 = 8;
    DAT_14c9b1cdc = 0;
    _DAT_14c9b1cc0 = &LAB_14712e3cc;
    FUN_1460bb42e();
    FUN_1407e00cc(&DAT_14c9b1c78);
    return;
  }
  return;
}



// FUNCTION 1460bb42e FUN_1460bb42e body=133 status=ok
// SIG undefined FUN_1460bb42e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bb42e(void)

{
  _DAT_14c9bcc10 = L"BASE";
  DAT_14c9bcc3a = 4;
  FUN_145c9435c();
  _DAT_14c9bcc20 = DAT_14c9b1c88;
  _DAT_14c9bcc18 = &DAT_14c9bc920;
  _DAT_14c9bcc28 = &LAB_14682652b;
  DAT_14c9b1c88 = &DAT_14c9bcc10;
  DAT_14c9b1cdd = DAT_14c9b1cdd + '\x01';
  _DAT_14c9bcc30 = 0x100000000;
  if (DAT_14c9bc984 != '\0') {
    DAT_14c9b1cde = DAT_14c9b1cde + '\x01';
  }
  return;
}



// FUNCTION 1460bb4b4 FUN_1460bb4b4 body=287 status=ok
// SIG undefined FUN_1460bb4b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460bb4b4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b1eb0) {
    FUN_144b3d300(&DAT_14c9b1eb0);
    if (DAT_14c9b1eb0 == -1) {
      FUN_1460bb5d4();
      FUN_140db5666(&DAT_14c9b1e08,2,&DAT_14c9b1da0,
                    L"TBasePassPSFCachedVolumeIndirectLightingPolicySkylightGbxDigiForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712e4aa,
                    FUN_14712e482,FUN_141753ae6,&LAB_14712e47e,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b1e08 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c6b8);
      _Init_thread_footer(&DAT_14c9b1eb0);
    }
  }
  return &DAT_14c9b1e08;
}



// FUNCTION 1460bb5d4 FUN_1460bb5d4 body=205 status=ok
// SIG undefined FUN_1460bb5d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bb5d4(void)

{
  if ((DAT_14c9b1e07 & 2) == 0) {
    DAT_14c9b1e07 = DAT_14c9b1e07 | 2;
    _DAT_14c9b1da8 = L"TBasePassPSFCachedVolumeIndirectLightingPolicySkylightGbxDigiForceVelocity";
    _DAT_14c9b1dc0 = FUN_146826540;
    _DAT_14c9b1dc8 = FUN_146825d77;
    _DAT_14c9b1dd0 = FUN_146825fd6;
    _DAT_14c9b1dd8 = FUN_1407e02ea;
    _DAT_14c9b1de0 = FUN_146826273;
    _DAT_14c9b1db8 = FUN_14712e444;
    _DAT_14c9b1df8 = 0xffffffff00000110;
    _DAT_14c9b1e00 = 8;
    DAT_14c9b1e04 = 0;
    _DAT_14c9b1de8 = &LAB_14712e47a;
    FUN_1460bb6a2();
    FUN_1407e00cc(&DAT_14c9b1da0);
    return;
  }
  return;
}



// FUNCTION 1460bb6a2 FUN_1460bb6a2 body=133 status=ok
// SIG undefined FUN_1460bb6a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bb6a2(void)

{
  _DAT_14c9bcc60 = L"BASE";
  DAT_14c9bcc8a = 4;
  FUN_145c9435c();
  _DAT_14c9bcc70 = DAT_14c9b1db0;
  _DAT_14c9bcc68 = &DAT_14c9bc920;
  _DAT_14c9bcc78 = &LAB_14682652b;
  DAT_14c9b1db0 = &DAT_14c9bcc60;
  DAT_14c9b1e05 = DAT_14c9b1e05 + '\x01';
  _DAT_14c9bcc80 = 0x100000000;
  if (DAT_14c9bc984 != '\0') {
    DAT_14c9b1e06 = DAT_14c9b1e06 + '\x01';
  }
  return;
}



// FUNCTION 1460bb728 FUN_1460bb728 body=287 status=ok
// SIG undefined FUN_1460bb728(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460bb728(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b1fd8) {
    FUN_144b3d300(&DAT_14c9b1fd8);
    if (DAT_14c9b1fd8 == -1) {
      FUN_1460bb848();
      FUN_140db5666(&DAT_14c9b1f30,2,&DAT_14c9b1ec8,
                    L"TBasePassPSFCachedVolumeIndirectLightingPolicyGbxDigiForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712e558,
                    FUN_14712e530,FUN_141753ede,&LAB_14712e52c,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b1f30 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c6c4);
      _Init_thread_footer(&DAT_14c9b1fd8);
    }
  }
  return &DAT_14c9b1f30;
}



// FUNCTION 1460bb848 FUN_1460bb848 body=205 status=ok
// SIG undefined FUN_1460bb848(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bb848(void)

{
  if ((DAT_14c9b1f2f & 2) == 0) {
    DAT_14c9b1f2f = DAT_14c9b1f2f | 2;
    _DAT_14c9b1ed0 = L"TBasePassPSFCachedVolumeIndirectLightingPolicyGbxDigiForceVelocity";
    _DAT_14c9b1ee8 = FUN_146826540;
    _DAT_14c9b1ef0 = FUN_146825d77;
    _DAT_14c9b1ef8 = FUN_146825fd6;
    _DAT_14c9b1f00 = FUN_1407e02ea;
    _DAT_14c9b1f08 = FUN_146826273;
    _DAT_14c9b1ee0 = FUN_14712e4f2;
    _DAT_14c9b1f20 = 0xffffffff00000110;
    _DAT_14c9b1f28 = 8;
    DAT_14c9b1f2c = 0;
    _DAT_14c9b1f10 = &LAB_14712e528;
    FUN_1460bb916();
    FUN_1407e00cc(&DAT_14c9b1ec8);
    return;
  }
  return;
}



// FUNCTION 1460bb916 FUN_1460bb916 body=133 status=ok
// SIG undefined FUN_1460bb916(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bb916(void)

{
  _DAT_14c9bccb0 = L"BASE";
  DAT_14c9bccda = 4;
  FUN_145c9435c();
  _DAT_14c9bccc0 = DAT_14c9b1ed8;
  _DAT_14c9bccb8 = &DAT_14c9bc920;
  _DAT_14c9bccc8 = &LAB_14682652b;
  DAT_14c9b1ed8 = &DAT_14c9bccb0;
  DAT_14c9b1f2d = DAT_14c9b1f2d + '\x01';
  _DAT_14c9bccd0 = 0x100000000;
  if (DAT_14c9bc984 != '\0') {
    DAT_14c9b1f2e = DAT_14c9b1f2e + '\x01';
  }
  return;
}



// FUNCTION 1460bb99c FUN_1460bb99c body=287 status=ok
// SIG undefined FUN_1460bb99c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460bb99c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b2228) {
    FUN_144b3d300(&DAT_14c9b2228);
    if (DAT_14c9b2228 == -1) {
      FUN_1460bbabc();
      FUN_140db5666(&DAT_14c9b2180,2,&DAT_14c9b2118,
                    L"TBasePassCSFCachedVolumeIndirectLightingPolicy",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",5,1,FUN_14712e6cc,
                    FUN_14712e6a4,FUN_141754504,&LAB_14712e6a0,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9b2180 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c6dc);
      _Init_thread_footer(&DAT_14c9b2228);
    }
  }
  return &DAT_14c9b2180;
}



// FUNCTION 1460bbabc FUN_1460bbabc body=205 status=ok
// SIG undefined FUN_1460bbabc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bbabc(void)

{
  if ((DAT_14c9b217f & 2) == 0) {
    DAT_14c9b217f = DAT_14c9b217f | 2;
    _DAT_14c9b2120 = L"TBasePassCSFCachedVolumeIndirectLightingPolicy";
    _DAT_14c9b2138 = FUN_146826540;
    _DAT_14c9b2140 = FUN_146825d77;
    _DAT_14c9b2148 = FUN_146825fd6;
    _DAT_14c9b2150 = FUN_1407e02ea;
    _DAT_14c9b2158 = FUN_146826273;
    _DAT_14c9b2130 = FUN_14712e666;
    _DAT_14c9b2170 = 0xffffffff00000128;
    _DAT_14c9b2178 = 8;
    DAT_14c9b217c = 0;
    _DAT_14c9b2160 = &LAB_14712e69c;
    FUN_1460bbb8a();
    FUN_1407e00cc(&DAT_14c9b2118);
    return;
  }
  return;
}



// FUNCTION 1460bbb8a FUN_1460bbb8a body=133 status=ok
// SIG undefined FUN_1460bbb8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bbb8a(void)

{
  _DAT_14c9bd120 = L"BASE";
  DAT_14c9bd14a = 4;
  FUN_145d0596e();
  _DAT_14c9bd130 = DAT_14c9b2128;
  _DAT_14c9bd128 = &DAT_14c9bcd30;
  _DAT_14c9bd138 = &LAB_14682652b;
  DAT_14c9b2128 = &DAT_14c9bd120;
  DAT_14c9b217d = DAT_14c9b217d + '\x01';
  _DAT_14c9bd140 = 0x100000000;
  if (DAT_14c9bcd94 != '\0') {
    DAT_14c9b217e = DAT_14c9b217e + '\x01';
  }
  return;
}



// FUNCTION 1460bbc10 FUN_1460bbc10 body=287 status=ok
// SIG undefined FUN_1460bbc10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460bbc10(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b2350) {
    FUN_144b3d300(&DAT_14c9b2350);
    if (DAT_14c9b2350 == -1) {
      FUN_1460bbd30();
      FUN_140db5666(&DAT_14c9b22a8,2,&DAT_14c9b2240,
                    L"TBasePassWorkGraphCSFCachedVolumeIndirectLightingPolicySkylight",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",0xb,1,FUN_14712e792,
                    FUN_14712e76a,FUN_141754716,&LAB_14712e766,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9b22a8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c6e8);
      _Init_thread_footer(&DAT_14c9b2350);
    }
  }
  return &DAT_14c9b22a8;
}



// FUNCTION 1460bbd30 FUN_1460bbd30 body=205 status=ok
// SIG undefined FUN_1460bbd30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bbd30(void)

{
  if ((DAT_14c9b22a7 & 2) == 0) {
    DAT_14c9b22a7 = DAT_14c9b22a7 | 2;
    _DAT_14c9b2248 = L"TBasePassWorkGraphCSFCachedVolumeIndirectLightingPolicySkylight";
    _DAT_14c9b2260 = FUN_146826540;
    _DAT_14c9b2268 = FUN_146825d77;
    _DAT_14c9b2270 = FUN_146825fd6;
    _DAT_14c9b2278 = FUN_1407e02ea;
    _DAT_14c9b2280 = FUN_146826273;
    _DAT_14c9b2258 = FUN_14712e72c;
    _DAT_14c9b2298 = 0xffffffff00000128;
    _DAT_14c9b22a0 = 8;
    DAT_14c9b22a4 = 0;
    _DAT_14c9b2288 = &LAB_14712e762;
    FUN_1460bbdfe();
    FUN_1407e00cc(&DAT_14c9b2240);
    return;
  }
  return;
}



// FUNCTION 1460bbdfe FUN_1460bbdfe body=133 status=ok
// SIG undefined FUN_1460bbdfe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bbdfe(void)

{
  _DAT_14c9bd170 = L"BASE";
  DAT_14c9bd19a = 4;
  FUN_145d0596e();
  _DAT_14c9bd180 = DAT_14c9b2250;
  _DAT_14c9bd178 = &DAT_14c9bcd30;
  _DAT_14c9bd188 = &LAB_14682652b;
  DAT_14c9b2250 = &DAT_14c9bd170;
  DAT_14c9b22a5 = DAT_14c9b22a5 + '\x01';
  _DAT_14c9bd190 = 0x100000000;
  if (DAT_14c9bcd94 != '\0') {
    DAT_14c9b22a6 = DAT_14c9b22a6 + '\x01';
  }
  return;
}



// FUNCTION 1460bbe84 FUN_1460bbe84 body=287 status=ok
// SIG undefined FUN_1460bbe84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460bbe84(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b2478) {
    FUN_144b3d300(&DAT_14c9b2478);
    if (DAT_14c9b2478 == -1) {
      FUN_1460bbfa4();
      FUN_140db5666(&DAT_14c9b23d0,2,&DAT_14c9b2368,
                    L"TBasePassWorkGraphCSFCachedVolumeIndirectLightingPolicy",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",0xb,1,FUN_14712e858,
                    FUN_14712e830,FUN_141754a3c,&LAB_14712e82c,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9b23d0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c6f4);
      _Init_thread_footer(&DAT_14c9b2478);
    }
  }
  return &DAT_14c9b23d0;
}



// FUNCTION 1460bbfa4 FUN_1460bbfa4 body=205 status=ok
// SIG undefined FUN_1460bbfa4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bbfa4(void)

{
  if ((DAT_14c9b23cf & 2) == 0) {
    DAT_14c9b23cf = DAT_14c9b23cf | 2;
    _DAT_14c9b2370 = L"TBasePassWorkGraphCSFCachedVolumeIndirectLightingPolicy";
    _DAT_14c9b2388 = FUN_146826540;
    _DAT_14c9b2390 = FUN_146825d77;
    _DAT_14c9b2398 = FUN_146825fd6;
    _DAT_14c9b23a0 = FUN_1407e02ea;
    _DAT_14c9b23a8 = FUN_146826273;
    _DAT_14c9b2380 = FUN_14712e7f2;
    _DAT_14c9b23c0 = 0xffffffff00000128;
    _DAT_14c9b23c8 = 8;
    DAT_14c9b23cc = 0;
    _DAT_14c9b23b0 = &LAB_14712e828;
    FUN_1460bc072();
    FUN_1407e00cc(&DAT_14c9b2368);
    return;
  }
  return;
}



// FUNCTION 1460bc072 FUN_1460bc072 body=133 status=ok
// SIG undefined FUN_1460bc072(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bc072(void)

{
  _DAT_14c9bd1c0 = L"BASE";
  DAT_14c9bd1ea = 4;
  FUN_145d0596e();
  _DAT_14c9bd1d0 = DAT_14c9b2378;
  _DAT_14c9bd1c8 = &DAT_14c9bcd30;
  _DAT_14c9bd1d8 = &LAB_14682652b;
  DAT_14c9b2378 = &DAT_14c9bd1c0;
  DAT_14c9b23cd = DAT_14c9b23cd + '\x01';
  _DAT_14c9bd1e0 = 0x100000000;
  if (DAT_14c9bcd94 != '\0') {
    DAT_14c9b23ce = DAT_14c9b23ce + '\x01';
  }
  return;
}



// FUNCTION 1460bc0f8 FUN_1460bc0f8 body=287 status=ok
// SIG undefined FUN_1460bc0f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460bc0f8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b27f0) {
    FUN_144b3d300(&DAT_14c9b27f0);
    if (DAT_14c9b27f0 == -1) {
      FUN_1460bc218();
      FUN_140db5666(&DAT_14c9b2748,2,&DAT_14c9b26e0,L"TBasePassPSFCachedPointIndirectLightingPolicy"
                    ,L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712ea7a,
                    FUN_14712ea52,FUN_141755158,&LAB_14712ea4e,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b2748 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c718);
      _Init_thread_footer(&DAT_14c9b27f0);
    }
  }
  return &DAT_14c9b2748;
}



// FUNCTION 1460bc218 FUN_1460bc218 body=205 status=ok
// SIG undefined FUN_1460bc218(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bc218(void)

{
  if ((DAT_14c9b2747 & 2) == 0) {
    DAT_14c9b2747 = DAT_14c9b2747 | 2;
    _DAT_14c9b26e8 = L"TBasePassPSFCachedPointIndirectLightingPolicy";
    _DAT_14c9b2700 = FUN_146826540;
    _DAT_14c9b2708 = FUN_146825d77;
    _DAT_14c9b2710 = FUN_146825fd6;
    _DAT_14c9b2718 = FUN_1407e02ea;
    _DAT_14c9b2720 = FUN_146826273;
    _DAT_14c9b26f8 = FUN_14712ea14;
    _DAT_14c9b2738 = 0xffffffff00000110;
    _DAT_14c9b2740 = 8;
    DAT_14c9b2744 = 0;
    _DAT_14c9b2728 = &LAB_14712ea4a;
    FUN_1460bc2e6();
    FUN_1407e00cc(&DAT_14c9b26e0);
    return;
  }
  return;
}



// FUNCTION 1460bc2e6 FUN_1460bc2e6 body=133 status=ok
// SIG undefined FUN_1460bc2e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bc2e6(void)

{
  _DAT_14c9bd5c0 = L"BASE";
  DAT_14c9bd5ea = 4;
  FUN_145c9493a();
  _DAT_14c9bd5d0 = DAT_14c9b26f0;
  _DAT_14c9bd5c8 = &DAT_14c9bd410;
  _DAT_14c9bd5d8 = &LAB_14682652b;
  DAT_14c9b26f0 = &DAT_14c9bd5c0;
  DAT_14c9b2745 = DAT_14c9b2745 + '\x01';
  _DAT_14c9bd5e0 = 0x100000000;
  if (DAT_14c9bd474 != '\0') {
    DAT_14c9b2746 = DAT_14c9b2746 + '\x01';
  }
  return;
}



// FUNCTION 1460bc36c FUN_1460bc36c body=287 status=ok
// SIG undefined FUN_1460bc36c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460bc36c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b2918) {
    FUN_144b3d300(&DAT_14c9b2918);
    if (DAT_14c9b2918 == -1) {
      FUN_1460bc48c();
      FUN_140db5666(&DAT_14c9b2870,2,&DAT_14c9b2808,
                    L"TBasePassPSFCachedPointIndirectLightingPolicySkylightForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712eb28,
                    FUN_14712eb00,FUN_14175541a,&LAB_14712eafc,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b2870 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c724);
      _Init_thread_footer(&DAT_14c9b2918);
    }
  }
  return &DAT_14c9b2870;
}



// FUNCTION 1460bc48c FUN_1460bc48c body=205 status=ok
// SIG undefined FUN_1460bc48c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bc48c(void)

{
  if ((DAT_14c9b286f & 2) == 0) {
    DAT_14c9b286f = DAT_14c9b286f | 2;
    _DAT_14c9b2810 = L"TBasePassPSFCachedPointIndirectLightingPolicySkylightForceVelocity";
    _DAT_14c9b2828 = FUN_146826540;
    _DAT_14c9b2830 = FUN_146825d77;
    _DAT_14c9b2838 = FUN_146825fd6;
    _DAT_14c9b2840 = FUN_1407e02ea;
    _DAT_14c9b2848 = FUN_146826273;
    _DAT_14c9b2820 = FUN_14712eac2;
    _DAT_14c9b2860 = 0xffffffff00000110;
    _DAT_14c9b2868 = 8;
    DAT_14c9b286c = 0;
    _DAT_14c9b2850 = &LAB_14712eaf8;
    FUN_1460bc55a();
    FUN_1407e00cc(&DAT_14c9b2808);
    return;
  }
  return;
}



// FUNCTION 1460bc55a FUN_1460bc55a body=133 status=ok
// SIG undefined FUN_1460bc55a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bc55a(void)

{
  _DAT_14c9bd610 = L"BASE";
  DAT_14c9bd63a = 4;
  FUN_145c9493a();
  _DAT_14c9bd620 = DAT_14c9b2818;
  _DAT_14c9bd618 = &DAT_14c9bd410;
  _DAT_14c9bd628 = &LAB_14682652b;
  DAT_14c9b2818 = &DAT_14c9bd610;
  DAT_14c9b286d = DAT_14c9b286d + '\x01';
  _DAT_14c9bd630 = 0x100000000;
  if (DAT_14c9bd474 != '\0') {
    DAT_14c9b286e = DAT_14c9b286e + '\x01';
  }
  return;
}



// FUNCTION 1460bc5e0 FUN_1460bc5e0 body=287 status=ok
// SIG undefined FUN_1460bc5e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460bc5e0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b2a40) {
    FUN_144b3d300(&DAT_14c9b2a40);
    if (DAT_14c9b2a40 == -1) {
      FUN_1460bc700();
      FUN_140db5666(&DAT_14c9b2998,2,&DAT_14c9b2930,
                    L"TBasePassPSFCachedPointIndirectLightingPolicyForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712ebd6,
                    FUN_14712ebae,FUN_1417557fc,&LAB_14712ebaa,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b2998 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c730);
      _Init_thread_footer(&DAT_14c9b2a40);
    }
  }
  return &DAT_14c9b2998;
}



// FUNCTION 1460bc700 FUN_1460bc700 body=205 status=ok
// SIG undefined FUN_1460bc700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bc700(void)

{
  if ((DAT_14c9b2997 & 2) == 0) {
    DAT_14c9b2997 = DAT_14c9b2997 | 2;
    _DAT_14c9b2938 = L"TBasePassPSFCachedPointIndirectLightingPolicyForceVelocity";
    _DAT_14c9b2950 = FUN_146826540;
    _DAT_14c9b2958 = FUN_146825d77;
    _DAT_14c9b2960 = FUN_146825fd6;
    _DAT_14c9b2968 = FUN_1407e02ea;
    _DAT_14c9b2970 = FUN_146826273;
    _DAT_14c9b2948 = FUN_14712eb70;
    _DAT_14c9b2988 = 0xffffffff00000110;
    _DAT_14c9b2990 = 8;
    DAT_14c9b2994 = 0;
    _DAT_14c9b2978 = &LAB_14712eba6;
    FUN_1460bc7ce();
    FUN_1407e00cc(&DAT_14c9b2930);
    return;
  }
  return;
}



// FUNCTION 1460bc7ce FUN_1460bc7ce body=133 status=ok
// SIG undefined FUN_1460bc7ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bc7ce(void)

{
  _DAT_14c9bd660 = L"BASE";
  DAT_14c9bd68a = 4;
  FUN_145c9493a();
  _DAT_14c9bd670 = DAT_14c9b2940;
  _DAT_14c9bd668 = &DAT_14c9bd410;
  _DAT_14c9bd678 = &LAB_14682652b;
  DAT_14c9b2940 = &DAT_14c9bd660;
  DAT_14c9b2995 = DAT_14c9b2995 + '\x01';
  _DAT_14c9bd680 = 0x100000000;
  if (DAT_14c9bd474 != '\0') {
    DAT_14c9b2996 = DAT_14c9b2996 + '\x01';
  }
  return;
}



// FUNCTION 1460bc854 FUN_1460bc854 body=287 status=ok
// SIG undefined FUN_1460bc854(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460bc854(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b2b68) {
    FUN_144b3d300(&DAT_14c9b2b68);
    if (DAT_14c9b2b68 == -1) {
      FUN_1460bc974();
      FUN_140db5666(&DAT_14c9b2ac0,2,&DAT_14c9b2a58,
                    L"TBasePassPSFCachedPointIndirectLightingPolicySkylightGbxDigi",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712ec84,
                    FUN_14712ec5c,FUN_141755aea,&LAB_14712ec58,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b2ac0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c73c);
      _Init_thread_footer(&DAT_14c9b2b68);
    }
  }
  return &DAT_14c9b2ac0;
}



// FUNCTION 1460bc974 FUN_1460bc974 body=205 status=ok
// SIG undefined FUN_1460bc974(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bc974(void)

{
  if ((DAT_14c9b2abf & 2) == 0) {
    DAT_14c9b2abf = DAT_14c9b2abf | 2;
    _DAT_14c9b2a60 = L"TBasePassPSFCachedPointIndirectLightingPolicySkylightGbxDigi";
    _DAT_14c9b2a78 = FUN_146826540;
    _DAT_14c9b2a80 = FUN_146825d77;
    _DAT_14c9b2a88 = FUN_146825fd6;
    _DAT_14c9b2a90 = FUN_1407e02ea;
    _DAT_14c9b2a98 = FUN_146826273;
    _DAT_14c9b2a70 = FUN_14712ec1e;
    _DAT_14c9b2ab0 = 0xffffffff00000110;
    _DAT_14c9b2ab8 = 8;
    DAT_14c9b2abc = 0;
    _DAT_14c9b2aa0 = &LAB_14712ec54;
    FUN_1460bca42();
    FUN_1407e00cc(&DAT_14c9b2a58);
    return;
  }
  return;
}



// FUNCTION 1460bca42 FUN_1460bca42 body=133 status=ok
// SIG undefined FUN_1460bca42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bca42(void)

{
  _DAT_14c9bd6b0 = L"BASE";
  DAT_14c9bd6da = 4;
  FUN_145c9493a();
  _DAT_14c9bd6c0 = DAT_14c9b2a68;
  _DAT_14c9bd6b8 = &DAT_14c9bd410;
  _DAT_14c9bd6c8 = &LAB_14682652b;
  DAT_14c9b2a68 = &DAT_14c9bd6b0;
  DAT_14c9b2abd = DAT_14c9b2abd + '\x01';
  _DAT_14c9bd6d0 = 0x100000000;
  if (DAT_14c9bd474 != '\0') {
    DAT_14c9b2abe = DAT_14c9b2abe + '\x01';
  }
  return;
}



// FUNCTION 1460bcac8 FUN_1460bcac8 body=287 status=ok
// SIG undefined FUN_1460bcac8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460bcac8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b2c90) {
    FUN_144b3d300(&DAT_14c9b2c90);
    if (DAT_14c9b2c90 == -1) {
      FUN_1460bcbe8();
      FUN_140db5666(&DAT_14c9b2be8,2,&DAT_14c9b2b80,
                    L"TBasePassPSFCachedPointIndirectLightingPolicyGbxDigi",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712ed32,
                    FUN_14712ed0a,FUN_141755eae,&LAB_14712ed06,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b2be8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c748);
      _Init_thread_footer(&DAT_14c9b2c90);
    }
  }
  return &DAT_14c9b2be8;
}



// FUNCTION 1460bcbe8 FUN_1460bcbe8 body=205 status=ok
// SIG undefined FUN_1460bcbe8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bcbe8(void)

{
  if ((DAT_14c9b2be7 & 2) == 0) {
    DAT_14c9b2be7 = DAT_14c9b2be7 | 2;
    _DAT_14c9b2b88 = L"TBasePassPSFCachedPointIndirectLightingPolicyGbxDigi";
    _DAT_14c9b2ba0 = FUN_146826540;
    _DAT_14c9b2ba8 = FUN_146825d77;
    _DAT_14c9b2bb0 = FUN_146825fd6;
    _DAT_14c9b2bb8 = FUN_1407e02ea;
    _DAT_14c9b2bc0 = FUN_146826273;
    _DAT_14c9b2b98 = FUN_14712eccc;
    _DAT_14c9b2bd8 = 0xffffffff00000110;
    _DAT_14c9b2be0 = 8;
    DAT_14c9b2be4 = 0;
    _DAT_14c9b2bc8 = &LAB_14712ed02;
    FUN_1460bccb6();
    FUN_1407e00cc(&DAT_14c9b2b80);
    return;
  }
  return;
}



// FUNCTION 1460bccb6 FUN_1460bccb6 body=133 status=ok
// SIG undefined FUN_1460bccb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bccb6(void)

{
  _DAT_14c9bd700 = L"BASE";
  DAT_14c9bd72a = 4;
  FUN_145c9493a();
  _DAT_14c9bd710 = DAT_14c9b2b90;
  _DAT_14c9bd708 = &DAT_14c9bd410;
  _DAT_14c9bd718 = &LAB_14682652b;
  DAT_14c9b2b90 = &DAT_14c9bd700;
  DAT_14c9b2be5 = DAT_14c9b2be5 + '\x01';
  _DAT_14c9bd720 = 0x100000000;
  if (DAT_14c9bd474 != '\0') {
    DAT_14c9b2be6 = DAT_14c9b2be6 + '\x01';
  }
  return;
}



// FUNCTION 1460bcd3c FUN_1460bcd3c body=287 status=ok
// SIG undefined FUN_1460bcd3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460bcd3c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b2db8) {
    FUN_144b3d300(&DAT_14c9b2db8);
    if (DAT_14c9b2db8 == -1) {
      FUN_1460bce5c();
      FUN_140db5666(&DAT_14c9b2d10,2,&DAT_14c9b2ca8,
                    L"TBasePassPSFCachedPointIndirectLightingPolicySkylightGbxDigiForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712ede0,
                    FUN_14712edb8,FUN_141756188,&LAB_14712edb4,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b2d10 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c754);
      _Init_thread_footer(&DAT_14c9b2db8);
    }
  }
  return &DAT_14c9b2d10;
}



// FUNCTION 1460bce5c FUN_1460bce5c body=205 status=ok
// SIG undefined FUN_1460bce5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bce5c(void)

{
  if ((DAT_14c9b2d0f & 2) == 0) {
    DAT_14c9b2d0f = DAT_14c9b2d0f | 2;
    _DAT_14c9b2cb0 = L"TBasePassPSFCachedPointIndirectLightingPolicySkylightGbxDigiForceVelocity";
    _DAT_14c9b2cc8 = FUN_146826540;
    _DAT_14c9b2cd0 = FUN_146825d77;
    _DAT_14c9b2cd8 = FUN_146825fd6;
    _DAT_14c9b2ce0 = FUN_1407e02ea;
    _DAT_14c9b2ce8 = FUN_146826273;
    _DAT_14c9b2cc0 = FUN_14712ed7a;
    _DAT_14c9b2d00 = 0xffffffff00000110;
    _DAT_14c9b2d08 = 8;
    DAT_14c9b2d0c = 0;
    _DAT_14c9b2cf0 = &LAB_14712edb0;
    FUN_1460bcf2a();
    FUN_1407e00cc(&DAT_14c9b2ca8);
    return;
  }
  return;
}



// FUNCTION 1460bcf2a FUN_1460bcf2a body=133 status=ok
// SIG undefined FUN_1460bcf2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bcf2a(void)

{
  _DAT_14c9bd750 = L"BASE";
  DAT_14c9bd77a = 4;
  FUN_145c9493a();
  _DAT_14c9bd760 = DAT_14c9b2cb8;
  _DAT_14c9bd758 = &DAT_14c9bd410;
  _DAT_14c9bd768 = &LAB_14682652b;
  DAT_14c9b2cb8 = &DAT_14c9bd750;
  DAT_14c9b2d0d = DAT_14c9b2d0d + '\x01';
  _DAT_14c9bd770 = 0x100000000;
  if (DAT_14c9bd474 != '\0') {
    DAT_14c9b2d0e = DAT_14c9b2d0e + '\x01';
  }
  return;
}



// FUNCTION 1460bcfb0 FUN_1460bcfb0 body=287 status=ok
// SIG undefined FUN_1460bcfb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460bcfb0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b2ee0) {
    FUN_144b3d300(&DAT_14c9b2ee0);
    if (DAT_14c9b2ee0 == -1) {
      FUN_1460bd0d0();
      FUN_140db5666(&DAT_14c9b2e38,2,&DAT_14c9b2dd0,
                    L"TBasePassPSFCachedPointIndirectLightingPolicyGbxDigiForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712ee8e,
                    FUN_14712ee66,FUN_141756580,&LAB_14712ee62,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b2e38 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c760);
      _Init_thread_footer(&DAT_14c9b2ee0);
    }
  }
  return &DAT_14c9b2e38;
}



// FUNCTION 1460bd0d0 FUN_1460bd0d0 body=205 status=ok
// SIG undefined FUN_1460bd0d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bd0d0(void)

{
  if ((DAT_14c9b2e37 & 2) == 0) {
    DAT_14c9b2e37 = DAT_14c9b2e37 | 2;
    _DAT_14c9b2dd8 = L"TBasePassPSFCachedPointIndirectLightingPolicyGbxDigiForceVelocity";
    _DAT_14c9b2df0 = FUN_146826540;
    _DAT_14c9b2df8 = FUN_146825d77;
    _DAT_14c9b2e00 = FUN_146825fd6;
    _DAT_14c9b2e08 = FUN_1407e02ea;
    _DAT_14c9b2e10 = FUN_146826273;
    _DAT_14c9b2de8 = FUN_14712ee28;
    _DAT_14c9b2e28 = 0xffffffff00000110;
    _DAT_14c9b2e30 = 8;
    DAT_14c9b2e34 = 0;
    _DAT_14c9b2e18 = &LAB_14712ee5e;
    FUN_1460bd19e();
    FUN_1407e00cc(&DAT_14c9b2dd0);
    return;
  }
  return;
}



// FUNCTION 1460bd19e FUN_1460bd19e body=133 status=ok
// SIG undefined FUN_1460bd19e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bd19e(void)

{
  _DAT_14c9bd7a0 = L"BASE";
  DAT_14c9bd7ca = 4;
  FUN_145c9493a();
  _DAT_14c9bd7b0 = DAT_14c9b2de0;
  _DAT_14c9bd7a8 = &DAT_14c9bd410;
  _DAT_14c9bd7b8 = &LAB_14682652b;
  DAT_14c9b2de0 = &DAT_14c9bd7a0;
  DAT_14c9b2e35 = DAT_14c9b2e35 + '\x01';
  _DAT_14c9bd7c0 = 0x100000000;
  if (DAT_14c9bd474 != '\0') {
    DAT_14c9b2e36 = DAT_14c9b2e36 + '\x01';
  }
  return;
}



// FUNCTION 1460bd224 FUN_1460bd224 body=287 status=ok
// SIG undefined FUN_1460bd224(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460bd224(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b3130) {
    FUN_144b3d300(&DAT_14c9b3130);
    if (DAT_14c9b3130 == -1) {
      FUN_1460bd344();
      FUN_140db5666(&DAT_14c9b3088,2,&DAT_14c9b3020,L"TBasePassCSFCachedPointIndirectLightingPolicy"
                    ,L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",5,1,FUN_14712f002,
                    FUN_14712efda,FUN_141756ba6,&LAB_14712efd6,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9b3088 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c778);
      _Init_thread_footer(&DAT_14c9b3130);
    }
  }
  return &DAT_14c9b3088;
}



// FUNCTION 1460bd344 FUN_1460bd344 body=205 status=ok
// SIG undefined FUN_1460bd344(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bd344(void)

{
  if ((DAT_14c9b3087 & 2) == 0) {
    DAT_14c9b3087 = DAT_14c9b3087 | 2;
    _DAT_14c9b3028 = L"TBasePassCSFCachedPointIndirectLightingPolicy";
    _DAT_14c9b3040 = FUN_146826540;
    _DAT_14c9b3048 = FUN_146825d77;
    _DAT_14c9b3050 = FUN_146825fd6;
    _DAT_14c9b3058 = FUN_1407e02ea;
    _DAT_14c9b3060 = FUN_146826273;
    _DAT_14c9b3038 = FUN_14712ef9c;
    _DAT_14c9b3078 = 0xffffffff00000128;
    _DAT_14c9b3080 = 8;
    DAT_14c9b3084 = 0;
    _DAT_14c9b3068 = &LAB_14712efd2;
    FUN_1460bd412();
    FUN_1407e00cc(&DAT_14c9b3020);
    return;
  }
  return;
}



// FUNCTION 1460bd412 FUN_1460bd412 body=133 status=ok
// SIG undefined FUN_1460bd412(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bd412(void)

{
  _DAT_14c9bdc10 = L"BASE";
  DAT_14c9bdc3a = 4;
  FUN_145d064fa();
  _DAT_14c9bdc20 = DAT_14c9b3030;
  _DAT_14c9bdc18 = &DAT_14c9bd820;
  _DAT_14c9bdc28 = &LAB_14682652b;
  DAT_14c9b3030 = &DAT_14c9bdc10;
  DAT_14c9b3085 = DAT_14c9b3085 + '\x01';
  _DAT_14c9bdc30 = 0x100000000;
  if (DAT_14c9bd884 != '\0') {
    DAT_14c9b3086 = DAT_14c9b3086 + '\x01';
  }
  return;
}



// FUNCTION 1460bd498 FUN_1460bd498 body=287 status=ok
// SIG undefined FUN_1460bd498(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460bd498(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b3258) {
    FUN_144b3d300(&DAT_14c9b3258);
    if (DAT_14c9b3258 == -1) {
      FUN_1460bd5b8();
      FUN_140db5666(&DAT_14c9b31b0,2,&DAT_14c9b3148,
                    L"TBasePassWorkGraphCSFCachedPointIndirectLightingPolicySkylight",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",0xb,1,FUN_14712f0c8,
                    FUN_14712f0a0,FUN_141756db8,&LAB_14712f09c,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9b31b0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c784);
      _Init_thread_footer(&DAT_14c9b3258);
    }
  }
  return &DAT_14c9b31b0;
}



// FUNCTION 1460bd5b8 FUN_1460bd5b8 body=205 status=ok
// SIG undefined FUN_1460bd5b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bd5b8(void)

{
  if ((DAT_14c9b31af & 2) == 0) {
    DAT_14c9b31af = DAT_14c9b31af | 2;
    _DAT_14c9b3150 = L"TBasePassWorkGraphCSFCachedPointIndirectLightingPolicySkylight";
    _DAT_14c9b3168 = FUN_146826540;
    _DAT_14c9b3170 = FUN_146825d77;
    _DAT_14c9b3178 = FUN_146825fd6;
    _DAT_14c9b3180 = FUN_1407e02ea;
    _DAT_14c9b3188 = FUN_146826273;
    _DAT_14c9b3160 = FUN_14712f062;
    _DAT_14c9b31a0 = 0xffffffff00000128;
    _DAT_14c9b31a8 = 8;
    DAT_14c9b31ac = 0;
    _DAT_14c9b3190 = &LAB_14712f098;
    FUN_1460bd686();
    FUN_1407e00cc(&DAT_14c9b3148);
    return;
  }
  return;
}



// FUNCTION 1460bd686 FUN_1460bd686 body=133 status=ok
// SIG undefined FUN_1460bd686(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bd686(void)

{
  _DAT_14c9bdc60 = L"BASE";
  DAT_14c9bdc8a = 4;
  FUN_145d064fa();
  _DAT_14c9bdc70 = DAT_14c9b3158;
  _DAT_14c9bdc68 = &DAT_14c9bd820;
  _DAT_14c9bdc78 = &LAB_14682652b;
  DAT_14c9b3158 = &DAT_14c9bdc60;
  DAT_14c9b31ad = DAT_14c9b31ad + '\x01';
  _DAT_14c9bdc80 = 0x100000000;
  if (DAT_14c9bd884 != '\0') {
    DAT_14c9b31ae = DAT_14c9b31ae + '\x01';
  }
  return;
}



// FUNCTION 1460bd70c FUN_1460bd70c body=287 status=ok
// SIG undefined FUN_1460bd70c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460bd70c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b3380) {
    FUN_144b3d300(&DAT_14c9b3380);
    if (DAT_14c9b3380 == -1) {
      FUN_1460bd82c();
      FUN_140db5666(&DAT_14c9b32d8,2,&DAT_14c9b3270,
                    L"TBasePassWorkGraphCSFCachedPointIndirectLightingPolicy",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",0xb,1,FUN_14712f18e,
                    FUN_14712f166,FUN_1417570de,&LAB_14712f162,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9b32d8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c790);
      _Init_thread_footer(&DAT_14c9b3380);
    }
  }
  return &DAT_14c9b32d8;
}



// FUNCTION 1460bd82c FUN_1460bd82c body=205 status=ok
// SIG undefined FUN_1460bd82c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bd82c(void)

{
  if ((DAT_14c9b32d7 & 2) == 0) {
    DAT_14c9b32d7 = DAT_14c9b32d7 | 2;
    _DAT_14c9b3278 = L"TBasePassWorkGraphCSFCachedPointIndirectLightingPolicy";
    _DAT_14c9b3290 = FUN_146826540;
    _DAT_14c9b3298 = FUN_146825d77;
    _DAT_14c9b32a0 = FUN_146825fd6;
    _DAT_14c9b32a8 = FUN_1407e02ea;
    _DAT_14c9b32b0 = FUN_146826273;
    _DAT_14c9b3288 = FUN_14712f128;
    _DAT_14c9b32c8 = 0xffffffff00000128;
    _DAT_14c9b32d0 = 8;
    DAT_14c9b32d4 = 0;
    _DAT_14c9b32b8 = &LAB_14712f15e;
    FUN_1460bd8fa();
    FUN_1407e00cc(&DAT_14c9b3270);
    return;
  }
  return;
}



// FUNCTION 1460bd8fa FUN_1460bd8fa body=133 status=ok
// SIG undefined FUN_1460bd8fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bd8fa(void)

{
  _DAT_14c9bdcb0 = L"BASE";
  DAT_14c9bdcda = 4;
  FUN_145d064fa();
  _DAT_14c9bdcc0 = DAT_14c9b3280;
  _DAT_14c9bdcb8 = &DAT_14c9bd820;
  _DAT_14c9bdcc8 = &LAB_14682652b;
  DAT_14c9b3280 = &DAT_14c9bdcb0;
  DAT_14c9b32d5 = DAT_14c9b32d5 + '\x01';
  _DAT_14c9bdcd0 = 0x100000000;
  if (DAT_14c9bd884 != '\0') {
    DAT_14c9b32d6 = DAT_14c9b32d6 + '\x01';
  }
  return;
}



// FUNCTION 1460bd980 FUN_1460bd980 body=287 status=ok
// SIG undefined FUN_1460bd980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460bd980(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b36f8) {
    FUN_144b3d300(&DAT_14c9b36f8);
    if (DAT_14c9b36f8 == -1) {
      FUN_1460bdaa0();
      FUN_140db5666(&DAT_14c9b3650,2,&DAT_14c9b35e8,L"TBasePassPSTLightMapPolicyLQ",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712f3b0,
                    FUN_14712f388,FUN_1417577fa,&LAB_14712f384,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b3650 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c7b4);
      _Init_thread_footer(&DAT_14c9b36f8);
    }
  }
  return &DAT_14c9b3650;
}



// FUNCTION 1460bdaa0 FUN_1460bdaa0 body=205 status=ok
// SIG undefined FUN_1460bdaa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bdaa0(void)

{
  if ((DAT_14c9b364f & 2) == 0) {
    DAT_14c9b364f = DAT_14c9b364f | 2;
    _DAT_14c9b35f0 = L"TBasePassPSTLightMapPolicyLQ";
    _DAT_14c9b3608 = FUN_146826540;
    _DAT_14c9b3610 = FUN_146825d77;
    _DAT_14c9b3618 = FUN_146825fd6;
    _DAT_14c9b3620 = FUN_1407e02ea;
    _DAT_14c9b3628 = FUN_146826273;
    _DAT_14c9b3600 = FUN_14712f34a;
    _DAT_14c9b3640 = 0xffffffff00000110;
    _DAT_14c9b3648 = 8;
    DAT_14c9b364c = 0;
    _DAT_14c9b3630 = &LAB_14712f380;
    FUN_1460bdb6e();
    FUN_1407e00cc(&DAT_14c9b35e8);
    return;
  }
  return;
}



// FUNCTION 1460bdb6e FUN_1460bdb6e body=133 status=ok
// SIG undefined FUN_1460bdb6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bdb6e(void)

{
  _DAT_14c9be0b0 = L"BASE";
  DAT_14c9be0da = 4;
  FUN_145c94f18();
  _DAT_14c9be0c0 = DAT_14c9b35f8;
  _DAT_14c9be0b8 = &DAT_14c9bdf00;
  _DAT_14c9be0c8 = &LAB_14682652b;
  DAT_14c9b35f8 = &DAT_14c9be0b0;
  DAT_14c9b364d = DAT_14c9b364d + '\x01';
  _DAT_14c9be0d0 = 0x100000000;
  if (DAT_14c9bdf64 != '\0') {
    DAT_14c9b364e = DAT_14c9b364e + '\x01';
  }
  return;
}



// FUNCTION 1460bdbf4 FUN_1460bdbf4 body=287 status=ok
// SIG undefined FUN_1460bdbf4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460bdbf4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b3820) {
    FUN_144b3d300(&DAT_14c9b3820);
    if (DAT_14c9b3820 == -1) {
      FUN_1460bdd14();
      FUN_140db5666(&DAT_14c9b3778,2,&DAT_14c9b3710,
                    L"TBasePassPSTLightMapPolicyLQSkylightForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712f45e,
                    FUN_14712f436,FUN_141757abc,&LAB_14712f432,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b3778 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c7c0);
      _Init_thread_footer(&DAT_14c9b3820);
    }
  }
  return &DAT_14c9b3778;
}



// FUNCTION 1460bdd14 FUN_1460bdd14 body=205 status=ok
// SIG undefined FUN_1460bdd14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bdd14(void)

{
  if ((DAT_14c9b3777 & 2) == 0) {
    DAT_14c9b3777 = DAT_14c9b3777 | 2;
    _DAT_14c9b3718 = L"TBasePassPSTLightMapPolicyLQSkylightForceVelocity";
    _DAT_14c9b3730 = FUN_146826540;
    _DAT_14c9b3738 = FUN_146825d77;
    _DAT_14c9b3740 = FUN_146825fd6;
    _DAT_14c9b3748 = FUN_1407e02ea;
    _DAT_14c9b3750 = FUN_146826273;
    _DAT_14c9b3728 = FUN_14712f3f8;
    _DAT_14c9b3768 = 0xffffffff00000110;
    _DAT_14c9b3770 = 8;
    DAT_14c9b3774 = 0;
    _DAT_14c9b3758 = &LAB_14712f42e;
    FUN_1460bdde2();
    FUN_1407e00cc(&DAT_14c9b3710);
    return;
  }
  return;
}



// FUNCTION 1460bdde2 FUN_1460bdde2 body=133 status=ok
// SIG undefined FUN_1460bdde2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bdde2(void)

{
  _DAT_14c9be100 = L"BASE";
  DAT_14c9be12a = 4;
  FUN_145c94f18();
  _DAT_14c9be110 = DAT_14c9b3720;
  _DAT_14c9be108 = &DAT_14c9bdf00;
  _DAT_14c9be118 = &LAB_14682652b;
  DAT_14c9b3720 = &DAT_14c9be100;
  DAT_14c9b3775 = DAT_14c9b3775 + '\x01';
  _DAT_14c9be120 = 0x100000000;
  if (DAT_14c9bdf64 != '\0') {
    DAT_14c9b3776 = DAT_14c9b3776 + '\x01';
  }
  return;
}



// FUNCTION 1460bde68 FUN_1460bde68 body=287 status=ok
// SIG undefined FUN_1460bde68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460bde68(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b3948) {
    FUN_144b3d300(&DAT_14c9b3948);
    if (DAT_14c9b3948 == -1) {
      FUN_1460bdf88();
      FUN_140db5666(&DAT_14c9b38a0,2,&DAT_14c9b3838,L"TBasePassPSTLightMapPolicyLQForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712f50c,
                    FUN_14712f4e4,FUN_141757e9e,&LAB_14712f4e0,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b38a0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c7cc);
      _Init_thread_footer(&DAT_14c9b3948);
    }
  }
  return &DAT_14c9b38a0;
}



// FUNCTION 1460bdf88 FUN_1460bdf88 body=205 status=ok
// SIG undefined FUN_1460bdf88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bdf88(void)

{
  if ((DAT_14c9b389f & 2) == 0) {
    DAT_14c9b389f = DAT_14c9b389f | 2;
    _DAT_14c9b3840 = L"TBasePassPSTLightMapPolicyLQForceVelocity";
    _DAT_14c9b3858 = FUN_146826540;
    _DAT_14c9b3860 = FUN_146825d77;
    _DAT_14c9b3868 = FUN_146825fd6;
    _DAT_14c9b3870 = FUN_1407e02ea;
    _DAT_14c9b3878 = FUN_146826273;
    _DAT_14c9b3850 = FUN_14712f4a6;
    _DAT_14c9b3890 = 0xffffffff00000110;
    _DAT_14c9b3898 = 8;
    DAT_14c9b389c = 0;
    _DAT_14c9b3880 = &LAB_14712f4dc;
    FUN_1460be056();
    FUN_1407e00cc(&DAT_14c9b3838);
    return;
  }
  return;
}



// FUNCTION 1460be056 FUN_1460be056 body=133 status=ok
// SIG undefined FUN_1460be056(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460be056(void)

{
  _DAT_14c9be150 = L"BASE";
  DAT_14c9be17a = 4;
  FUN_145c94f18();
  _DAT_14c9be160 = DAT_14c9b3848;
  _DAT_14c9be158 = &DAT_14c9bdf00;
  _DAT_14c9be168 = &LAB_14682652b;
  DAT_14c9b3848 = &DAT_14c9be150;
  DAT_14c9b389d = DAT_14c9b389d + '\x01';
  _DAT_14c9be170 = 0x100000000;
  if (DAT_14c9bdf64 != '\0') {
    DAT_14c9b389e = DAT_14c9b389e + '\x01';
  }
  return;
}



// FUNCTION 1460be0dc FUN_1460be0dc body=287 status=ok
// SIG undefined FUN_1460be0dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460be0dc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b3a70) {
    FUN_144b3d300(&DAT_14c9b3a70);
    if (DAT_14c9b3a70 == -1) {
      FUN_1460be1fc();
      FUN_140db5666(&DAT_14c9b39c8,2,&DAT_14c9b3960,L"TBasePassPSTLightMapPolicyLQSkylightGbxDigi",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712f5ba,
                    FUN_14712f592,FUN_14175818c,&LAB_14712f58e,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b39c8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c7d8);
      _Init_thread_footer(&DAT_14c9b3a70);
    }
  }
  return &DAT_14c9b39c8;
}



// FUNCTION 1460be1fc FUN_1460be1fc body=205 status=ok
// SIG undefined FUN_1460be1fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460be1fc(void)

{
  if ((DAT_14c9b39c7 & 2) == 0) {
    DAT_14c9b39c7 = DAT_14c9b39c7 | 2;
    _DAT_14c9b3968 = L"TBasePassPSTLightMapPolicyLQSkylightGbxDigi";
    _DAT_14c9b3980 = FUN_146826540;
    _DAT_14c9b3988 = FUN_146825d77;
    _DAT_14c9b3990 = FUN_146825fd6;
    _DAT_14c9b3998 = FUN_1407e02ea;
    _DAT_14c9b39a0 = FUN_146826273;
    _DAT_14c9b3978 = FUN_14712f554;
    _DAT_14c9b39b8 = 0xffffffff00000110;
    _DAT_14c9b39c0 = 8;
    DAT_14c9b39c4 = 0;
    _DAT_14c9b39a8 = &LAB_14712f58a;
    FUN_1460be2ca();
    FUN_1407e00cc(&DAT_14c9b3960);
    return;
  }
  return;
}



// FUNCTION 1460be2ca FUN_1460be2ca body=133 status=ok
// SIG undefined FUN_1460be2ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460be2ca(void)

{
  _DAT_14c9be1a0 = L"BASE";
  DAT_14c9be1ca = 4;
  FUN_145c94f18();
  _DAT_14c9be1b0 = DAT_14c9b3970;
  _DAT_14c9be1a8 = &DAT_14c9bdf00;
  _DAT_14c9be1b8 = &LAB_14682652b;
  DAT_14c9b3970 = &DAT_14c9be1a0;
  DAT_14c9b39c5 = DAT_14c9b39c5 + '\x01';
  _DAT_14c9be1c0 = 0x100000000;
  if (DAT_14c9bdf64 != '\0') {
    DAT_14c9b39c6 = DAT_14c9b39c6 + '\x01';
  }
  return;
}



// FUNCTION 1460be350 FUN_1460be350 body=287 status=ok
// SIG undefined FUN_1460be350(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460be350(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b3b98) {
    FUN_144b3d300(&DAT_14c9b3b98);
    if (DAT_14c9b3b98 == -1) {
      FUN_1460be470();
      FUN_140db5666(&DAT_14c9b3af0,2,&DAT_14c9b3a88,L"TBasePassPSTLightMapPolicyLQGbxDigi",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712f668,
                    FUN_14712f640,FUN_141758550,&LAB_14712f63c,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b3af0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c7e4);
      _Init_thread_footer(&DAT_14c9b3b98);
    }
  }
  return &DAT_14c9b3af0;
}



// FUNCTION 1460be470 FUN_1460be470 body=205 status=ok
// SIG undefined FUN_1460be470(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460be470(void)

{
  if ((DAT_14c9b3aef & 2) == 0) {
    DAT_14c9b3aef = DAT_14c9b3aef | 2;
    _DAT_14c9b3a90 = L"TBasePassPSTLightMapPolicyLQGbxDigi";
    _DAT_14c9b3aa8 = FUN_146826540;
    _DAT_14c9b3ab0 = FUN_146825d77;
    _DAT_14c9b3ab8 = FUN_146825fd6;
    _DAT_14c9b3ac0 = FUN_1407e02ea;
    _DAT_14c9b3ac8 = FUN_146826273;
    _DAT_14c9b3aa0 = FUN_14712f602;
    _DAT_14c9b3ae0 = 0xffffffff00000110;
    _DAT_14c9b3ae8 = 8;
    DAT_14c9b3aec = 0;
    _DAT_14c9b3ad0 = &LAB_14712f638;
    FUN_1460be53e();
    FUN_1407e00cc(&DAT_14c9b3a88);
    return;
  }
  return;
}



// FUNCTION 1460be53e FUN_1460be53e body=133 status=ok
// SIG undefined FUN_1460be53e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460be53e(void)

{
  _DAT_14c9be1f0 = L"BASE";
  DAT_14c9be21a = 4;
  FUN_145c94f18();
  _DAT_14c9be200 = DAT_14c9b3a98;
  _DAT_14c9be1f8 = &DAT_14c9bdf00;
  _DAT_14c9be208 = &LAB_14682652b;
  DAT_14c9b3a98 = &DAT_14c9be1f0;
  DAT_14c9b3aed = DAT_14c9b3aed + '\x01';
  _DAT_14c9be210 = 0x100000000;
  if (DAT_14c9bdf64 != '\0') {
    DAT_14c9b3aee = DAT_14c9b3aee + '\x01';
  }
  return;
}



// FUNCTION 1460be5c4 FUN_1460be5c4 body=287 status=ok
// SIG undefined FUN_1460be5c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460be5c4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b3cc0) {
    FUN_144b3d300(&DAT_14c9b3cc0);
    if (DAT_14c9b3cc0 == -1) {
      FUN_1460be6e4();
      FUN_140db5666(&DAT_14c9b3c18,2,&DAT_14c9b3bb0,
                    L"TBasePassPSTLightMapPolicyLQSkylightGbxDigiForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712f716,
                    FUN_14712f6ee,FUN_14175882a,&LAB_14712f6ea,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b3c18 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c7f0);
      _Init_thread_footer(&DAT_14c9b3cc0);
    }
  }
  return &DAT_14c9b3c18;
}



// FUNCTION 1460be6e4 FUN_1460be6e4 body=205 status=ok
// SIG undefined FUN_1460be6e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460be6e4(void)

{
  if ((DAT_14c9b3c17 & 2) == 0) {
    DAT_14c9b3c17 = DAT_14c9b3c17 | 2;
    _DAT_14c9b3bb8 = L"TBasePassPSTLightMapPolicyLQSkylightGbxDigiForceVelocity";
    _DAT_14c9b3bd0 = FUN_146826540;
    _DAT_14c9b3bd8 = FUN_146825d77;
    _DAT_14c9b3be0 = FUN_146825fd6;
    _DAT_14c9b3be8 = FUN_1407e02ea;
    _DAT_14c9b3bf0 = FUN_146826273;
    _DAT_14c9b3bc8 = FUN_14712f6b0;
    _DAT_14c9b3c08 = 0xffffffff00000110;
    _DAT_14c9b3c10 = 8;
    DAT_14c9b3c14 = 0;
    _DAT_14c9b3bf8 = &LAB_14712f6e6;
    FUN_1460be7b2();
    FUN_1407e00cc(&DAT_14c9b3bb0);
    return;
  }
  return;
}



// FUNCTION 1460be7b2 FUN_1460be7b2 body=133 status=ok
// SIG undefined FUN_1460be7b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460be7b2(void)

{
  _DAT_14c9be240 = L"BASE";
  DAT_14c9be26a = 4;
  FUN_145c94f18();
  _DAT_14c9be250 = DAT_14c9b3bc0;
  _DAT_14c9be248 = &DAT_14c9bdf00;
  _DAT_14c9be258 = &LAB_14682652b;
  DAT_14c9b3bc0 = &DAT_14c9be240;
  DAT_14c9b3c15 = DAT_14c9b3c15 + '\x01';
  _DAT_14c9be260 = 0x100000000;
  if (DAT_14c9bdf64 != '\0') {
    DAT_14c9b3c16 = DAT_14c9b3c16 + '\x01';
  }
  return;
}



// FUNCTION 1460be838 FUN_1460be838 body=287 status=ok
// SIG undefined FUN_1460be838(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460be838(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b3de8) {
    FUN_144b3d300(&DAT_14c9b3de8);
    if (DAT_14c9b3de8 == -1) {
      FUN_1460be958();
      FUN_140db5666(&DAT_14c9b3d40,2,&DAT_14c9b3cd8,
                    L"TBasePassPSTLightMapPolicyLQGbxDigiForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712f7c4,
                    FUN_14712f79c,FUN_141758c22,&LAB_14712f798,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b3d40 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c7fc);
      _Init_thread_footer(&DAT_14c9b3de8);
    }
  }
  return &DAT_14c9b3d40;
}



// FUNCTION 1460be958 FUN_1460be958 body=205 status=ok
// SIG undefined FUN_1460be958(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460be958(void)

{
  if ((DAT_14c9b3d3f & 2) == 0) {
    DAT_14c9b3d3f = DAT_14c9b3d3f | 2;
    _DAT_14c9b3ce0 = L"TBasePassPSTLightMapPolicyLQGbxDigiForceVelocity";
    _DAT_14c9b3cf8 = FUN_146826540;
    _DAT_14c9b3d00 = FUN_146825d77;
    _DAT_14c9b3d08 = FUN_146825fd6;
    _DAT_14c9b3d10 = FUN_1407e02ea;
    _DAT_14c9b3d18 = FUN_146826273;
    _DAT_14c9b3cf0 = FUN_14712f75e;
    _DAT_14c9b3d30 = 0xffffffff00000110;
    _DAT_14c9b3d38 = 8;
    DAT_14c9b3d3c = 0;
    _DAT_14c9b3d20 = &LAB_14712f794;
    FUN_1460bea26();
    FUN_1407e00cc(&DAT_14c9b3cd8);
    return;
  }
  return;
}



// FUNCTION 1460bea26 FUN_1460bea26 body=133 status=ok
// SIG undefined FUN_1460bea26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bea26(void)

{
  _DAT_14c9be290 = L"BASE";
  DAT_14c9be2ba = 4;
  FUN_145c94f18();
  _DAT_14c9be2a0 = DAT_14c9b3ce8;
  _DAT_14c9be298 = &DAT_14c9bdf00;
  _DAT_14c9be2a8 = &LAB_14682652b;
  DAT_14c9b3ce8 = &DAT_14c9be290;
  DAT_14c9b3d3d = DAT_14c9b3d3d + '\x01';
  _DAT_14c9be2b0 = 0x100000000;
  if (DAT_14c9bdf64 != '\0') {
    DAT_14c9b3d3e = DAT_14c9b3d3e + '\x01';
  }
  return;
}



// FUNCTION 1460beaac FUN_1460beaac body=287 status=ok
// SIG undefined FUN_1460beaac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460beaac(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b4038) {
    FUN_144b3d300(&DAT_14c9b4038);
    if (DAT_14c9b4038 == -1) {
      FUN_1460bebcc();
      FUN_140db5666(&DAT_14c9b3f90,2,&DAT_14c9b3f28,L"TBasePassCSTLightMapPolicyLQ",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",5,1,FUN_14712f938,
                    FUN_14712f910,FUN_141759248,&LAB_14712f90c,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9b3f90 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c814);
      _Init_thread_footer(&DAT_14c9b4038);
    }
  }
  return &DAT_14c9b3f90;
}



// FUNCTION 1460bebcc FUN_1460bebcc body=205 status=ok
// SIG undefined FUN_1460bebcc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bebcc(void)

{
  if ((DAT_14c9b3f8f & 2) == 0) {
    DAT_14c9b3f8f = DAT_14c9b3f8f | 2;
    _DAT_14c9b3f30 = L"TBasePassCSTLightMapPolicyLQ";
    _DAT_14c9b3f48 = FUN_146826540;
    _DAT_14c9b3f50 = FUN_146825d77;
    _DAT_14c9b3f58 = FUN_146825fd6;
    _DAT_14c9b3f60 = FUN_1407e02ea;
    _DAT_14c9b3f68 = FUN_146826273;
    _DAT_14c9b3f40 = FUN_14712f8d2;
    _DAT_14c9b3f80 = 0xffffffff00000128;
    _DAT_14c9b3f88 = 8;
    DAT_14c9b3f8c = 0;
    _DAT_14c9b3f70 = &LAB_14712f908;
    FUN_1460bec9a();
    FUN_1407e00cc(&DAT_14c9b3f28);
    return;
  }
  return;
}



// FUNCTION 1460bec9a FUN_1460bec9a body=133 status=ok
// SIG undefined FUN_1460bec9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bec9a(void)

{
  _DAT_14c9be700 = L"BASE";
  DAT_14c9be72a = 4;
  FUN_145d07086();
  _DAT_14c9be710 = DAT_14c9b3f38;
  _DAT_14c9be708 = &DAT_14c9be310;
  _DAT_14c9be718 = &LAB_14682652b;
  DAT_14c9b3f38 = &DAT_14c9be700;
  DAT_14c9b3f8d = DAT_14c9b3f8d + '\x01';
  _DAT_14c9be720 = 0x100000000;
  if (DAT_14c9be374 != '\0') {
    DAT_14c9b3f8e = DAT_14c9b3f8e + '\x01';
  }
  return;
}



// FUNCTION 1460bed20 FUN_1460bed20 body=287 status=ok
// SIG undefined FUN_1460bed20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460bed20(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b4160) {
    FUN_144b3d300(&DAT_14c9b4160);
    if (DAT_14c9b4160 == -1) {
      FUN_1460bee40();
      FUN_140db5666(&DAT_14c9b40b8,2,&DAT_14c9b4050,L"TBasePassWorkGraphCSTLightMapPolicyLQSkylight"
                    ,L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",0xb,1,FUN_14712f9fe,
                    FUN_14712f9d6,FUN_14175945a,&LAB_14712f9d2,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9b40b8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c820);
      _Init_thread_footer(&DAT_14c9b4160);
    }
  }
  return &DAT_14c9b40b8;
}



// FUNCTION 1460bee40 FUN_1460bee40 body=205 status=ok
// SIG undefined FUN_1460bee40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bee40(void)

{
  if ((DAT_14c9b40b7 & 2) == 0) {
    DAT_14c9b40b7 = DAT_14c9b40b7 | 2;
    _DAT_14c9b4058 = L"TBasePassWorkGraphCSTLightMapPolicyLQSkylight";
    _DAT_14c9b4070 = FUN_146826540;
    _DAT_14c9b4078 = FUN_146825d77;
    _DAT_14c9b4080 = FUN_146825fd6;
    _DAT_14c9b4088 = FUN_1407e02ea;
    _DAT_14c9b4090 = FUN_146826273;
    _DAT_14c9b4068 = FUN_14712f998;
    _DAT_14c9b40a8 = 0xffffffff00000128;
    _DAT_14c9b40b0 = 8;
    DAT_14c9b40b4 = 0;
    _DAT_14c9b4098 = &LAB_14712f9ce;
    FUN_1460bef0e();
    FUN_1407e00cc(&DAT_14c9b4050);
    return;
  }
  return;
}



// FUNCTION 1460bef0e FUN_1460bef0e body=133 status=ok
// SIG undefined FUN_1460bef0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bef0e(void)

{
  _DAT_14c9be750 = L"BASE";
  DAT_14c9be77a = 4;
  FUN_145d07086();
  _DAT_14c9be760 = DAT_14c9b4060;
  _DAT_14c9be758 = &DAT_14c9be310;
  _DAT_14c9be768 = &LAB_14682652b;
  DAT_14c9b4060 = &DAT_14c9be750;
  DAT_14c9b40b5 = DAT_14c9b40b5 + '\x01';
  _DAT_14c9be770 = 0x100000000;
  if (DAT_14c9be374 != '\0') {
    DAT_14c9b40b6 = DAT_14c9b40b6 + '\x01';
  }
  return;
}



// FUNCTION 1460bef94 FUN_1460bef94 body=287 status=ok
// SIG undefined FUN_1460bef94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460bef94(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b4288) {
    FUN_144b3d300(&DAT_14c9b4288);
    if (DAT_14c9b4288 == -1) {
      FUN_1460bf0b4();
      FUN_140db5666(&DAT_14c9b41e0,2,&DAT_14c9b4178,L"TBasePassWorkGraphCSTLightMapPolicyLQ",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",0xb,1,FUN_14712fac4,
                    FUN_14712fa9c,FUN_141759780,&LAB_14712fa98,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9b41e0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c82c);
      _Init_thread_footer(&DAT_14c9b4288);
    }
  }
  return &DAT_14c9b41e0;
}



// FUNCTION 1460bf0b4 FUN_1460bf0b4 body=205 status=ok
// SIG undefined FUN_1460bf0b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bf0b4(void)

{
  if ((DAT_14c9b41df & 2) == 0) {
    DAT_14c9b41df = DAT_14c9b41df | 2;
    _DAT_14c9b4180 = L"TBasePassWorkGraphCSTLightMapPolicyLQ";
    _DAT_14c9b4198 = FUN_146826540;
    _DAT_14c9b41a0 = FUN_146825d77;
    _DAT_14c9b41a8 = FUN_146825fd6;
    _DAT_14c9b41b0 = FUN_1407e02ea;
    _DAT_14c9b41b8 = FUN_146826273;
    _DAT_14c9b4190 = FUN_14712fa5e;
    _DAT_14c9b41d0 = 0xffffffff00000128;
    _DAT_14c9b41d8 = 8;
    DAT_14c9b41dc = 0;
    _DAT_14c9b41c0 = &LAB_14712fa94;
    FUN_1460bf182();
    FUN_1407e00cc(&DAT_14c9b4178);
    return;
  }
  return;
}



// FUNCTION 1460bf182 FUN_1460bf182 body=133 status=ok
// SIG undefined FUN_1460bf182(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bf182(void)

{
  _DAT_14c9be7a0 = L"BASE";
  DAT_14c9be7ca = 4;
  FUN_145d07086();
  _DAT_14c9be7b0 = DAT_14c9b4188;
  _DAT_14c9be7a8 = &DAT_14c9be310;
  _DAT_14c9be7b8 = &LAB_14682652b;
  DAT_14c9b4188 = &DAT_14c9be7a0;
  DAT_14c9b41dd = DAT_14c9b41dd + '\x01';
  _DAT_14c9be7c0 = 0x100000000;
  if (DAT_14c9be374 != '\0') {
    DAT_14c9b41de = DAT_14c9b41de + '\x01';
  }
  return;
}



// FUNCTION 1460bf208 FUN_1460bf208 body=287 status=ok
// SIG undefined FUN_1460bf208(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460bf208(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b4600) {
    FUN_144b3d300(&DAT_14c9b4600);
    if (DAT_14c9b4600 == -1) {
      FUN_1460bf328();
      FUN_140db5666(&DAT_14c9b4558,2,&DAT_14c9b44f0,L"TBasePassPSTLightMapPolicyHQ",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712fce6,
                    FUN_14712fcbe,FUN_141759e9c,&LAB_14712fcba,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b4558 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c850);
      _Init_thread_footer(&DAT_14c9b4600);
    }
  }
  return &DAT_14c9b4558;
}



// FUNCTION 1460bf328 FUN_1460bf328 body=205 status=ok
// SIG undefined FUN_1460bf328(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bf328(void)

{
  if ((DAT_14c9b4557 & 2) == 0) {
    DAT_14c9b4557 = DAT_14c9b4557 | 2;
    _DAT_14c9b44f8 = L"TBasePassPSTLightMapPolicyHQ";
    _DAT_14c9b4510 = FUN_146826540;
    _DAT_14c9b4518 = FUN_146825d77;
    _DAT_14c9b4520 = FUN_146825fd6;
    _DAT_14c9b4528 = FUN_1407e02ea;
    _DAT_14c9b4530 = FUN_146826273;
    _DAT_14c9b4508 = FUN_14712fc80;
    _DAT_14c9b4548 = 0xffffffff00000110;
    _DAT_14c9b4550 = 8;
    DAT_14c9b4554 = 0;
    _DAT_14c9b4538 = &LAB_14712fcb6;
    FUN_1460bf3f6();
    FUN_1407e00cc(&DAT_14c9b44f0);
    return;
  }
  return;
}



// FUNCTION 1460bf3f6 FUN_1460bf3f6 body=133 status=ok
// SIG undefined FUN_1460bf3f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bf3f6(void)

{
  _DAT_14c9beba0 = L"BASE";
  DAT_14c9bebca = 4;
  FUN_145c954f6();
  _DAT_14c9bebb0 = DAT_14c9b4500;
  _DAT_14c9beba8 = &DAT_14c9be9f0;
  _DAT_14c9bebb8 = &LAB_14682652b;
  DAT_14c9b4500 = &DAT_14c9beba0;
  DAT_14c9b4555 = DAT_14c9b4555 + '\x01';
  _DAT_14c9bebc0 = 0x100000000;
  if (DAT_14c9bea54 != '\0') {
    DAT_14c9b4556 = DAT_14c9b4556 + '\x01';
  }
  return;
}



// FUNCTION 1460bf47c FUN_1460bf47c body=287 status=ok
// SIG undefined FUN_1460bf47c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460bf47c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b4728) {
    FUN_144b3d300(&DAT_14c9b4728);
    if (DAT_14c9b4728 == -1) {
      FUN_1460bf59c();
      FUN_140db5666(&DAT_14c9b4680,2,&DAT_14c9b4618,
                    L"TBasePassPSTLightMapPolicyHQSkylightForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712fd94,
                    FUN_14712fd6c,FUN_14175a15e,&LAB_14712fd68,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b4680 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c85c);
      _Init_thread_footer(&DAT_14c9b4728);
    }
  }
  return &DAT_14c9b4680;
}



// FUNCTION 1460bf59c FUN_1460bf59c body=205 status=ok
// SIG undefined FUN_1460bf59c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bf59c(void)

{
  if ((DAT_14c9b467f & 2) == 0) {
    DAT_14c9b467f = DAT_14c9b467f | 2;
    _DAT_14c9b4620 = L"TBasePassPSTLightMapPolicyHQSkylightForceVelocity";
    _DAT_14c9b4638 = FUN_146826540;
    _DAT_14c9b4640 = FUN_146825d77;
    _DAT_14c9b4648 = FUN_146825fd6;
    _DAT_14c9b4650 = FUN_1407e02ea;
    _DAT_14c9b4658 = FUN_146826273;
    _DAT_14c9b4630 = FUN_14712fd2e;
    _DAT_14c9b4670 = 0xffffffff00000110;
    _DAT_14c9b4678 = 8;
    DAT_14c9b467c = 0;
    _DAT_14c9b4660 = &LAB_14712fd64;
    FUN_1460bf66a();
    FUN_1407e00cc(&DAT_14c9b4618);
    return;
  }
  return;
}



// FUNCTION 1460bf66a FUN_1460bf66a body=133 status=ok
// SIG undefined FUN_1460bf66a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bf66a(void)

{
  _DAT_14c9bebf0 = L"BASE";
  DAT_14c9bec1a = 4;
  FUN_145c954f6();
  _DAT_14c9bec00 = DAT_14c9b4628;
  _DAT_14c9bebf8 = &DAT_14c9be9f0;
  _DAT_14c9bec08 = &LAB_14682652b;
  DAT_14c9b4628 = &DAT_14c9bebf0;
  DAT_14c9b467d = DAT_14c9b467d + '\x01';
  _DAT_14c9bec10 = 0x100000000;
  if (DAT_14c9bea54 != '\0') {
    DAT_14c9b467e = DAT_14c9b467e + '\x01';
  }
  return;
}



// FUNCTION 1460bf6f0 FUN_1460bf6f0 body=287 status=ok
// SIG undefined FUN_1460bf6f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460bf6f0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b4850) {
    FUN_144b3d300(&DAT_14c9b4850);
    if (DAT_14c9b4850 == -1) {
      FUN_1460bf810();
      FUN_140db5666(&DAT_14c9b47a8,2,&DAT_14c9b4740,L"TBasePassPSTLightMapPolicyHQForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712fe42,
                    FUN_14712fe1a,FUN_14175a540,&LAB_14712fe16,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b47a8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c868);
      _Init_thread_footer(&DAT_14c9b4850);
    }
  }
  return &DAT_14c9b47a8;
}



// FUNCTION 1460bf810 FUN_1460bf810 body=205 status=ok
// SIG undefined FUN_1460bf810(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bf810(void)

{
  if ((DAT_14c9b47a7 & 2) == 0) {
    DAT_14c9b47a7 = DAT_14c9b47a7 | 2;
    _DAT_14c9b4748 = L"TBasePassPSTLightMapPolicyHQForceVelocity";
    _DAT_14c9b4760 = FUN_146826540;
    _DAT_14c9b4768 = FUN_146825d77;
    _DAT_14c9b4770 = FUN_146825fd6;
    _DAT_14c9b4778 = FUN_1407e02ea;
    _DAT_14c9b4780 = FUN_146826273;
    _DAT_14c9b4758 = FUN_14712fddc;
    _DAT_14c9b4798 = 0xffffffff00000110;
    _DAT_14c9b47a0 = 8;
    DAT_14c9b47a4 = 0;
    _DAT_14c9b4788 = &LAB_14712fe12;
    FUN_1460bf8de();
    FUN_1407e00cc(&DAT_14c9b4740);
    return;
  }
  return;
}



// FUNCTION 1460bf8de FUN_1460bf8de body=133 status=ok
// SIG undefined FUN_1460bf8de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bf8de(void)

{
  _DAT_14c9bec40 = L"BASE";
  DAT_14c9bec6a = 4;
  FUN_145c954f6();
  _DAT_14c9bec50 = DAT_14c9b4750;
  _DAT_14c9bec48 = &DAT_14c9be9f0;
  _DAT_14c9bec58 = &LAB_14682652b;
  DAT_14c9b4750 = &DAT_14c9bec40;
  DAT_14c9b47a5 = DAT_14c9b47a5 + '\x01';
  _DAT_14c9bec60 = 0x100000000;
  if (DAT_14c9bea54 != '\0') {
    DAT_14c9b47a6 = DAT_14c9b47a6 + '\x01';
  }
  return;
}



// FUNCTION 1460bf964 FUN_1460bf964 body=287 status=ok
// SIG undefined FUN_1460bf964(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460bf964(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b4978) {
    FUN_144b3d300(&DAT_14c9b4978);
    if (DAT_14c9b4978 == -1) {
      FUN_1460bfa84();
      FUN_140db5666(&DAT_14c9b48d0,2,&DAT_14c9b4868,L"TBasePassPSTLightMapPolicyHQSkylightGbxDigi",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712fef0,
                    FUN_14712fec8,FUN_14175a82e,&LAB_14712fec4,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b48d0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c874);
      _Init_thread_footer(&DAT_14c9b4978);
    }
  }
  return &DAT_14c9b48d0;
}



// FUNCTION 1460bfa84 FUN_1460bfa84 body=205 status=ok
// SIG undefined FUN_1460bfa84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bfa84(void)

{
  if ((DAT_14c9b48cf & 2) == 0) {
    DAT_14c9b48cf = DAT_14c9b48cf | 2;
    _DAT_14c9b4870 = L"TBasePassPSTLightMapPolicyHQSkylightGbxDigi";
    _DAT_14c9b4888 = FUN_146826540;
    _DAT_14c9b4890 = FUN_146825d77;
    _DAT_14c9b4898 = FUN_146825fd6;
    _DAT_14c9b48a0 = FUN_1407e02ea;
    _DAT_14c9b48a8 = FUN_146826273;
    _DAT_14c9b4880 = FUN_14712fe8a;
    _DAT_14c9b48c0 = 0xffffffff00000110;
    _DAT_14c9b48c8 = 8;
    DAT_14c9b48cc = 0;
    _DAT_14c9b48b0 = &LAB_14712fec0;
    FUN_1460bfb52();
    FUN_1407e00cc(&DAT_14c9b4868);
    return;
  }
  return;
}



// FUNCTION 1460bfb52 FUN_1460bfb52 body=133 status=ok
// SIG undefined FUN_1460bfb52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bfb52(void)

{
  _DAT_14c9bec90 = L"BASE";
  DAT_14c9becba = 4;
  FUN_145c954f6();
  _DAT_14c9beca0 = DAT_14c9b4878;
  _DAT_14c9bec98 = &DAT_14c9be9f0;
  _DAT_14c9beca8 = &LAB_14682652b;
  DAT_14c9b4878 = &DAT_14c9bec90;
  DAT_14c9b48cd = DAT_14c9b48cd + '\x01';
  _DAT_14c9becb0 = 0x100000000;
  if (DAT_14c9bea54 != '\0') {
    DAT_14c9b48ce = DAT_14c9b48ce + '\x01';
  }
  return;
}



// FUNCTION 1460bfbd8 FUN_1460bfbd8 body=287 status=ok
// SIG undefined FUN_1460bfbd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460bfbd8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b4aa0) {
    FUN_144b3d300(&DAT_14c9b4aa0);
    if (DAT_14c9b4aa0 == -1) {
      FUN_1460bfcf8();
      FUN_140db5666(&DAT_14c9b49f8,2,&DAT_14c9b4990,L"TBasePassPSTLightMapPolicyHQGbxDigi",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14712ff9e,
                    FUN_14712ff76,FUN_14175abf2,&LAB_14712ff72,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b49f8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c880);
      _Init_thread_footer(&DAT_14c9b4aa0);
    }
  }
  return &DAT_14c9b49f8;
}



// FUNCTION 1460bfcf8 FUN_1460bfcf8 body=205 status=ok
// SIG undefined FUN_1460bfcf8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bfcf8(void)

{
  if ((DAT_14c9b49f7 & 2) == 0) {
    DAT_14c9b49f7 = DAT_14c9b49f7 | 2;
    _DAT_14c9b4998 = L"TBasePassPSTLightMapPolicyHQGbxDigi";
    _DAT_14c9b49b0 = FUN_146826540;
    _DAT_14c9b49b8 = FUN_146825d77;
    _DAT_14c9b49c0 = FUN_146825fd6;
    _DAT_14c9b49c8 = FUN_1407e02ea;
    _DAT_14c9b49d0 = FUN_146826273;
    _DAT_14c9b49a8 = FUN_14712ff38;
    _DAT_14c9b49e8 = 0xffffffff00000110;
    _DAT_14c9b49f0 = 8;
    DAT_14c9b49f4 = 0;
    _DAT_14c9b49d8 = &LAB_14712ff6e;
    FUN_1460bfdc6();
    FUN_1407e00cc(&DAT_14c9b4990);
    return;
  }
  return;
}



// FUNCTION 1460bfdc6 FUN_1460bfdc6 body=133 status=ok
// SIG undefined FUN_1460bfdc6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bfdc6(void)

{
  _DAT_14c9bece0 = L"BASE";
  DAT_14c9bed0a = 4;
  FUN_145c954f6();
  _DAT_14c9becf0 = DAT_14c9b49a0;
  _DAT_14c9bece8 = &DAT_14c9be9f0;
  _DAT_14c9becf8 = &LAB_14682652b;
  DAT_14c9b49a0 = &DAT_14c9bece0;
  DAT_14c9b49f5 = DAT_14c9b49f5 + '\x01';
  _DAT_14c9bed00 = 0x100000000;
  if (DAT_14c9bea54 != '\0') {
    DAT_14c9b49f6 = DAT_14c9b49f6 + '\x01';
  }
  return;
}



// FUNCTION 1460bfe4c FUN_1460bfe4c body=287 status=ok
// SIG undefined FUN_1460bfe4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460bfe4c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b4bc8) {
    FUN_144b3d300(&DAT_14c9b4bc8);
    if (DAT_14c9b4bc8 == -1) {
      FUN_1460bff6c();
      FUN_140db5666(&DAT_14c9b4b20,2,&DAT_14c9b4ab8,
                    L"TBasePassPSTLightMapPolicyHQSkylightGbxDigiForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14713004c,
                    FUN_147130024,FUN_14175aecc,&LAB_147130020,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b4b20 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c88c);
      _Init_thread_footer(&DAT_14c9b4bc8);
    }
  }
  return &DAT_14c9b4b20;
}



// FUNCTION 1460bff6c FUN_1460bff6c body=205 status=ok
// SIG undefined FUN_1460bff6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460bff6c(void)

{
  if ((DAT_14c9b4b1f & 2) == 0) {
    DAT_14c9b4b1f = DAT_14c9b4b1f | 2;
    _DAT_14c9b4ac0 = L"TBasePassPSTLightMapPolicyHQSkylightGbxDigiForceVelocity";
    _DAT_14c9b4ad8 = FUN_146826540;
    _DAT_14c9b4ae0 = FUN_146825d77;
    _DAT_14c9b4ae8 = FUN_146825fd6;
    _DAT_14c9b4af0 = FUN_1407e02ea;
    _DAT_14c9b4af8 = FUN_146826273;
    _DAT_14c9b4ad0 = FUN_14712ffe6;
    _DAT_14c9b4b10 = 0xffffffff00000110;
    _DAT_14c9b4b18 = 8;
    DAT_14c9b4b1c = 0;
    _DAT_14c9b4b00 = &LAB_14713001c;
    FUN_1460c003a();
    FUN_1407e00cc(&DAT_14c9b4ab8);
    return;
  }
  return;
}



// FUNCTION 1460c003a FUN_1460c003a body=133 status=ok
// SIG undefined FUN_1460c003a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c003a(void)

{
  _DAT_14c9bed30 = L"BASE";
  DAT_14c9bed5a = 4;
  FUN_145c954f6();
  _DAT_14c9bed40 = DAT_14c9b4ac8;
  _DAT_14c9bed38 = &DAT_14c9be9f0;
  _DAT_14c9bed48 = &LAB_14682652b;
  DAT_14c9b4ac8 = &DAT_14c9bed30;
  DAT_14c9b4b1d = DAT_14c9b4b1d + '\x01';
  _DAT_14c9bed50 = 0x100000000;
  if (DAT_14c9bea54 != '\0') {
    DAT_14c9b4b1e = DAT_14c9b4b1e + '\x01';
  }
  return;
}



// FUNCTION 1460c00c0 FUN_1460c00c0 body=287 status=ok
// SIG undefined FUN_1460c00c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c00c0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b4cf0) {
    FUN_144b3d300(&DAT_14c9b4cf0);
    if (DAT_14c9b4cf0 == -1) {
      FUN_1460c01e0();
      FUN_140db5666(&DAT_14c9b4c48,2,&DAT_14c9b4be0,
                    L"TBasePassPSTLightMapPolicyHQGbxDigiForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_1471300fa,
                    FUN_1471300d2,FUN_14175b2c4,&LAB_1471300ce,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b4c48 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c898);
      _Init_thread_footer(&DAT_14c9b4cf0);
    }
  }
  return &DAT_14c9b4c48;
}



// FUNCTION 1460c01e0 FUN_1460c01e0 body=205 status=ok
// SIG undefined FUN_1460c01e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c01e0(void)

{
  if ((DAT_14c9b4c47 & 2) == 0) {
    DAT_14c9b4c47 = DAT_14c9b4c47 | 2;
    _DAT_14c9b4be8 = L"TBasePassPSTLightMapPolicyHQGbxDigiForceVelocity";
    _DAT_14c9b4c00 = FUN_146826540;
    _DAT_14c9b4c08 = FUN_146825d77;
    _DAT_14c9b4c10 = FUN_146825fd6;
    _DAT_14c9b4c18 = FUN_1407e02ea;
    _DAT_14c9b4c20 = FUN_146826273;
    _DAT_14c9b4bf8 = FUN_147130094;
    _DAT_14c9b4c38 = 0xffffffff00000110;
    _DAT_14c9b4c40 = 8;
    DAT_14c9b4c44 = 0;
    _DAT_14c9b4c28 = &LAB_1471300ca;
    FUN_1460c02ae();
    FUN_1407e00cc(&DAT_14c9b4be0);
    return;
  }
  return;
}



// FUNCTION 1460c02ae FUN_1460c02ae body=133 status=ok
// SIG undefined FUN_1460c02ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c02ae(void)

{
  _DAT_14c9bed80 = L"BASE";
  DAT_14c9bedaa = 4;
  FUN_145c954f6();
  _DAT_14c9bed90 = DAT_14c9b4bf0;
  _DAT_14c9bed88 = &DAT_14c9be9f0;
  _DAT_14c9bed98 = &LAB_14682652b;
  DAT_14c9b4bf0 = &DAT_14c9bed80;
  DAT_14c9b4c45 = DAT_14c9b4c45 + '\x01';
  _DAT_14c9beda0 = 0x100000000;
  if (DAT_14c9bea54 != '\0') {
    DAT_14c9b4c46 = DAT_14c9b4c46 + '\x01';
  }
  return;
}



// FUNCTION 1460c0334 FUN_1460c0334 body=287 status=ok
// SIG undefined FUN_1460c0334(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c0334(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b4f40) {
    FUN_144b3d300(&DAT_14c9b4f40);
    if (DAT_14c9b4f40 == -1) {
      FUN_1460c0454();
      FUN_140db5666(&DAT_14c9b4e98,2,&DAT_14c9b4e30,L"TBasePassCSTLightMapPolicyHQ",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",5,1,FUN_14713026e,
                    FUN_147130246,FUN_14175b8ea,&LAB_147130242,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9b4e98 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c8b0);
      _Init_thread_footer(&DAT_14c9b4f40);
    }
  }
  return &DAT_14c9b4e98;
}



// FUNCTION 1460c0454 FUN_1460c0454 body=205 status=ok
// SIG undefined FUN_1460c0454(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c0454(void)

{
  if ((DAT_14c9b4e97 & 2) == 0) {
    DAT_14c9b4e97 = DAT_14c9b4e97 | 2;
    _DAT_14c9b4e38 = L"TBasePassCSTLightMapPolicyHQ";
    _DAT_14c9b4e50 = FUN_146826540;
    _DAT_14c9b4e58 = FUN_146825d77;
    _DAT_14c9b4e60 = FUN_146825fd6;
    _DAT_14c9b4e68 = FUN_1407e02ea;
    _DAT_14c9b4e70 = FUN_146826273;
    _DAT_14c9b4e48 = FUN_147130208;
    _DAT_14c9b4e88 = 0xffffffff00000128;
    _DAT_14c9b4e90 = 8;
    DAT_14c9b4e94 = 0;
    _DAT_14c9b4e78 = &LAB_14713023e;
    FUN_1460c0522();
    FUN_1407e00cc(&DAT_14c9b4e30);
    return;
  }
  return;
}



// FUNCTION 1460c0522 FUN_1460c0522 body=133 status=ok
// SIG undefined FUN_1460c0522(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c0522(void)

{
  _DAT_14c9bf1f0 = L"BASE";
  DAT_14c9bf21a = 4;
  FUN_145d07c12();
  _DAT_14c9bf200 = DAT_14c9b4e40;
  _DAT_14c9bf1f8 = &DAT_14c9bee00;
  _DAT_14c9bf208 = &LAB_14682652b;
  DAT_14c9b4e40 = &DAT_14c9bf1f0;
  DAT_14c9b4e95 = DAT_14c9b4e95 + '\x01';
  _DAT_14c9bf210 = 0x100000000;
  if (DAT_14c9bee64 != '\0') {
    DAT_14c9b4e96 = DAT_14c9b4e96 + '\x01';
  }
  return;
}



// FUNCTION 1460c05a8 FUN_1460c05a8 body=287 status=ok
// SIG undefined FUN_1460c05a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c05a8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b5068) {
    FUN_144b3d300(&DAT_14c9b5068);
    if (DAT_14c9b5068 == -1) {
      FUN_1460c06c8();
      FUN_140db5666(&DAT_14c9b4fc0,2,&DAT_14c9b4f58,L"TBasePassWorkGraphCSTLightMapPolicyHQSkylight"
                    ,L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",0xb,1,FUN_147130334,
                    FUN_14713030c,FUN_14175bafc,&LAB_147130308,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9b4fc0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c8bc);
      _Init_thread_footer(&DAT_14c9b5068);
    }
  }
  return &DAT_14c9b4fc0;
}



// FUNCTION 1460c06c8 FUN_1460c06c8 body=205 status=ok
// SIG undefined FUN_1460c06c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c06c8(void)

{
  if ((DAT_14c9b4fbf & 2) == 0) {
    DAT_14c9b4fbf = DAT_14c9b4fbf | 2;
    _DAT_14c9b4f60 = L"TBasePassWorkGraphCSTLightMapPolicyHQSkylight";
    _DAT_14c9b4f78 = FUN_146826540;
    _DAT_14c9b4f80 = FUN_146825d77;
    _DAT_14c9b4f88 = FUN_146825fd6;
    _DAT_14c9b4f90 = FUN_1407e02ea;
    _DAT_14c9b4f98 = FUN_146826273;
    _DAT_14c9b4f70 = FUN_1471302ce;
    _DAT_14c9b4fb0 = 0xffffffff00000128;
    _DAT_14c9b4fb8 = 8;
    DAT_14c9b4fbc = 0;
    _DAT_14c9b4fa0 = &LAB_147130304;
    FUN_1460c0796();
    FUN_1407e00cc(&DAT_14c9b4f58);
    return;
  }
  return;
}



// FUNCTION 1460c0796 FUN_1460c0796 body=133 status=ok
// SIG undefined FUN_1460c0796(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c0796(void)

{
  _DAT_14c9bf240 = L"BASE";
  DAT_14c9bf26a = 4;
  FUN_145d07c12();
  _DAT_14c9bf250 = DAT_14c9b4f68;
  _DAT_14c9bf248 = &DAT_14c9bee00;
  _DAT_14c9bf258 = &LAB_14682652b;
  DAT_14c9b4f68 = &DAT_14c9bf240;
  DAT_14c9b4fbd = DAT_14c9b4fbd + '\x01';
  _DAT_14c9bf260 = 0x100000000;
  if (DAT_14c9bee64 != '\0') {
    DAT_14c9b4fbe = DAT_14c9b4fbe + '\x01';
  }
  return;
}



// FUNCTION 1460c081c FUN_1460c081c body=287 status=ok
// SIG undefined FUN_1460c081c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c081c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b5190) {
    FUN_144b3d300(&DAT_14c9b5190);
    if (DAT_14c9b5190 == -1) {
      FUN_1460c093c();
      FUN_140db5666(&DAT_14c9b50e8,2,&DAT_14c9b5080,L"TBasePassWorkGraphCSTLightMapPolicyHQ",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",0xb,1,FUN_1471303fa,
                    FUN_1471303d2,FUN_14175be22,&LAB_1471303ce,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9b50e8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c8c8);
      _Init_thread_footer(&DAT_14c9b5190);
    }
  }
  return &DAT_14c9b50e8;
}



// FUNCTION 1460c093c FUN_1460c093c body=205 status=ok
// SIG undefined FUN_1460c093c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c093c(void)

{
  if ((DAT_14c9b50e7 & 2) == 0) {
    DAT_14c9b50e7 = DAT_14c9b50e7 | 2;
    _DAT_14c9b5088 = L"TBasePassWorkGraphCSTLightMapPolicyHQ";
    _DAT_14c9b50a0 = FUN_146826540;
    _DAT_14c9b50a8 = FUN_146825d77;
    _DAT_14c9b50b0 = FUN_146825fd6;
    _DAT_14c9b50b8 = FUN_1407e02ea;
    _DAT_14c9b50c0 = FUN_146826273;
    _DAT_14c9b5098 = FUN_147130394;
    _DAT_14c9b50d8 = 0xffffffff00000128;
    _DAT_14c9b50e0 = 8;
    DAT_14c9b50e4 = 0;
    _DAT_14c9b50c8 = &LAB_1471303ca;
    FUN_1460c0a0a();
    FUN_1407e00cc(&DAT_14c9b5080);
    return;
  }
  return;
}



// FUNCTION 1460c0a0a FUN_1460c0a0a body=133 status=ok
// SIG undefined FUN_1460c0a0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c0a0a(void)

{
  _DAT_14c9bf290 = L"BASE";
  DAT_14c9bf2ba = 4;
  FUN_145d07c12();
  _DAT_14c9bf2a0 = DAT_14c9b5090;
  _DAT_14c9bf298 = &DAT_14c9bee00;
  _DAT_14c9bf2a8 = &LAB_14682652b;
  DAT_14c9b5090 = &DAT_14c9bf290;
  DAT_14c9b50e5 = DAT_14c9b50e5 + '\x01';
  _DAT_14c9bf2b0 = 0x100000000;
  if (DAT_14c9bee64 != '\0') {
    DAT_14c9b50e6 = DAT_14c9b50e6 + '\x01';
  }
  return;
}



// FUNCTION 1460c0a90 FUN_1460c0a90 body=287 status=ok
// SIG undefined FUN_1460c0a90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c0a90(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b5508) {
    FUN_144b3d300(&DAT_14c9b5508);
    if (DAT_14c9b5508 == -1) {
      FUN_1460c0bb0();
      FUN_140db5666(&DAT_14c9b5460,2,&DAT_14c9b53f8,
                    L"TBasePassPSTDistanceFieldShadowsAndLightMapPolicyHQ",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_14713061c,
                    FUN_1471305f4,FUN_14175c53e,&LAB_1471305f0,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b5460 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c8ec);
      _Init_thread_footer(&DAT_14c9b5508);
    }
  }
  return &DAT_14c9b5460;
}



// FUNCTION 1460c0bb0 FUN_1460c0bb0 body=205 status=ok
// SIG undefined FUN_1460c0bb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c0bb0(void)

{
  if ((DAT_14c9b545f & 2) == 0) {
    DAT_14c9b545f = DAT_14c9b545f | 2;
    _DAT_14c9b5400 = L"TBasePassPSTDistanceFieldShadowsAndLightMapPolicyHQ";
    _DAT_14c9b5418 = FUN_146826540;
    _DAT_14c9b5420 = FUN_146825d77;
    _DAT_14c9b5428 = FUN_146825fd6;
    _DAT_14c9b5430 = FUN_1407e02ea;
    _DAT_14c9b5438 = FUN_146826273;
    _DAT_14c9b5410 = FUN_1471305b6;
    _DAT_14c9b5450 = 0xffffffff00000110;
    _DAT_14c9b5458 = 8;
    DAT_14c9b545c = 0;
    _DAT_14c9b5440 = &LAB_1471305ec;
    FUN_1460c0c7e();
    FUN_1407e00cc(&DAT_14c9b53f8);
    return;
  }
  return;
}



// FUNCTION 1460c0c7e FUN_1460c0c7e body=133 status=ok
// SIG undefined FUN_1460c0c7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c0c7e(void)

{
  _DAT_14c9bf690 = L"BASE";
  DAT_14c9bf6ba = 4;
  FUN_145c95ad4();
  _DAT_14c9bf6a0 = DAT_14c9b5408;
  _DAT_14c9bf698 = &DAT_14c9bf4e0;
  _DAT_14c9bf6a8 = &LAB_14682652b;
  DAT_14c9b5408 = &DAT_14c9bf690;
  DAT_14c9b545d = DAT_14c9b545d + '\x01';
  _DAT_14c9bf6b0 = 0x100000000;
  if (DAT_14c9bf544 != '\0') {
    DAT_14c9b545e = DAT_14c9b545e + '\x01';
  }
  return;
}



// FUNCTION 1460c0d04 FUN_1460c0d04 body=287 status=ok
// SIG undefined FUN_1460c0d04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c0d04(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b5630) {
    FUN_144b3d300(&DAT_14c9b5630);
    if (DAT_14c9b5630 == -1) {
      FUN_1460c0e24();
      FUN_140db5666(&DAT_14c9b5588,2,&DAT_14c9b5520,
                    L"TBasePassPSTDistanceFieldShadowsAndLightMapPolicyHQSkylightForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_1471306ca,
                    FUN_1471306a2,FUN_14175c800,&LAB_14713069e,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b5588 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c8f8);
      _Init_thread_footer(&DAT_14c9b5630);
    }
  }
  return &DAT_14c9b5588;
}



// FUNCTION 1460c0e24 FUN_1460c0e24 body=205 status=ok
// SIG undefined FUN_1460c0e24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c0e24(void)

{
  if ((DAT_14c9b5587 & 2) == 0) {
    DAT_14c9b5587 = DAT_14c9b5587 | 2;
    _DAT_14c9b5528 = L"TBasePassPSTDistanceFieldShadowsAndLightMapPolicyHQSkylightForceVelocity";
    _DAT_14c9b5540 = FUN_146826540;
    _DAT_14c9b5548 = FUN_146825d77;
    _DAT_14c9b5550 = FUN_146825fd6;
    _DAT_14c9b5558 = FUN_1407e02ea;
    _DAT_14c9b5560 = FUN_146826273;
    _DAT_14c9b5538 = FUN_147130664;
    _DAT_14c9b5578 = 0xffffffff00000110;
    _DAT_14c9b5580 = 8;
    DAT_14c9b5584 = 0;
    _DAT_14c9b5568 = &LAB_14713069a;
    FUN_1460c0ef2();
    FUN_1407e00cc(&DAT_14c9b5520);
    return;
  }
  return;
}



// FUNCTION 1460c0ef2 FUN_1460c0ef2 body=133 status=ok
// SIG undefined FUN_1460c0ef2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c0ef2(void)

{
  _DAT_14c9bf6e0 = L"BASE";
  DAT_14c9bf70a = 4;
  FUN_145c95ad4();
  _DAT_14c9bf6f0 = DAT_14c9b5530;
  _DAT_14c9bf6e8 = &DAT_14c9bf4e0;
  _DAT_14c9bf6f8 = &LAB_14682652b;
  DAT_14c9b5530 = &DAT_14c9bf6e0;
  DAT_14c9b5585 = DAT_14c9b5585 + '\x01';
  _DAT_14c9bf700 = 0x100000000;
  if (DAT_14c9bf544 != '\0') {
    DAT_14c9b5586 = DAT_14c9b5586 + '\x01';
  }
  return;
}



// FUNCTION 1460c0f78 FUN_1460c0f78 body=287 status=ok
// SIG undefined FUN_1460c0f78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c0f78(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b5758) {
    FUN_144b3d300(&DAT_14c9b5758);
    if (DAT_14c9b5758 == -1) {
      FUN_1460c1098();
      FUN_140db5666(&DAT_14c9b56b0,2,&DAT_14c9b5648,
                    L"TBasePassPSTDistanceFieldShadowsAndLightMapPolicyHQForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_147130778,
                    FUN_147130750,FUN_14175cbe2,&LAB_14713074c,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b56b0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c904);
      _Init_thread_footer(&DAT_14c9b5758);
    }
  }
  return &DAT_14c9b56b0;
}



// FUNCTION 1460c1098 FUN_1460c1098 body=205 status=ok
// SIG undefined FUN_1460c1098(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c1098(void)

{
  if ((DAT_14c9b56af & 2) == 0) {
    DAT_14c9b56af = DAT_14c9b56af | 2;
    _DAT_14c9b5650 = L"TBasePassPSTDistanceFieldShadowsAndLightMapPolicyHQForceVelocity";
    _DAT_14c9b5668 = FUN_146826540;
    _DAT_14c9b5670 = FUN_146825d77;
    _DAT_14c9b5678 = FUN_146825fd6;
    _DAT_14c9b5680 = FUN_1407e02ea;
    _DAT_14c9b5688 = FUN_146826273;
    _DAT_14c9b5660 = FUN_147130712;
    _DAT_14c9b56a0 = 0xffffffff00000110;
    _DAT_14c9b56a8 = 8;
    DAT_14c9b56ac = 0;
    _DAT_14c9b5690 = &LAB_147130748;
    FUN_1460c1166();
    FUN_1407e00cc(&DAT_14c9b5648);
    return;
  }
  return;
}



// FUNCTION 1460c1166 FUN_1460c1166 body=133 status=ok
// SIG undefined FUN_1460c1166(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c1166(void)

{
  _DAT_14c9bf730 = L"BASE";
  DAT_14c9bf75a = 4;
  FUN_145c95ad4();
  _DAT_14c9bf740 = DAT_14c9b5658;
  _DAT_14c9bf738 = &DAT_14c9bf4e0;
  _DAT_14c9bf748 = &LAB_14682652b;
  DAT_14c9b5658 = &DAT_14c9bf730;
  DAT_14c9b56ad = DAT_14c9b56ad + '\x01';
  _DAT_14c9bf750 = 0x100000000;
  if (DAT_14c9bf544 != '\0') {
    DAT_14c9b56ae = DAT_14c9b56ae + '\x01';
  }
  return;
}



// FUNCTION 1460c11ec FUN_1460c11ec body=287 status=ok
// SIG undefined FUN_1460c11ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c11ec(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b5880) {
    FUN_144b3d300(&DAT_14c9b5880);
    if (DAT_14c9b5880 == -1) {
      FUN_1460c130c();
      FUN_140db5666(&DAT_14c9b57d8,2,&DAT_14c9b5770,
                    L"TBasePassPSTDistanceFieldShadowsAndLightMapPolicyHQSkylightGbxDigi",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_147130826,
                    FUN_1471307fe,FUN_14175ced0,&LAB_1471307fa,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b57d8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c910);
      _Init_thread_footer(&DAT_14c9b5880);
    }
  }
  return &DAT_14c9b57d8;
}



// FUNCTION 1460c130c FUN_1460c130c body=205 status=ok
// SIG undefined FUN_1460c130c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c130c(void)

{
  if ((DAT_14c9b57d7 & 2) == 0) {
    DAT_14c9b57d7 = DAT_14c9b57d7 | 2;
    _DAT_14c9b5778 = L"TBasePassPSTDistanceFieldShadowsAndLightMapPolicyHQSkylightGbxDigi";
    _DAT_14c9b5790 = FUN_146826540;
    _DAT_14c9b5798 = FUN_146825d77;
    _DAT_14c9b57a0 = FUN_146825fd6;
    _DAT_14c9b57a8 = FUN_1407e02ea;
    _DAT_14c9b57b0 = FUN_146826273;
    _DAT_14c9b5788 = FUN_1471307c0;
    _DAT_14c9b57c8 = 0xffffffff00000110;
    _DAT_14c9b57d0 = 8;
    DAT_14c9b57d4 = 0;
    _DAT_14c9b57b8 = &LAB_1471307f6;
    FUN_1460c13da();
    FUN_1407e00cc(&DAT_14c9b5770);
    return;
  }
  return;
}



// FUNCTION 1460c13da FUN_1460c13da body=133 status=ok
// SIG undefined FUN_1460c13da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c13da(void)

{
  _DAT_14c9bf780 = L"BASE";
  DAT_14c9bf7aa = 4;
  FUN_145c95ad4();
  _DAT_14c9bf790 = DAT_14c9b5780;
  _DAT_14c9bf788 = &DAT_14c9bf4e0;
  _DAT_14c9bf798 = &LAB_14682652b;
  DAT_14c9b5780 = &DAT_14c9bf780;
  DAT_14c9b57d5 = DAT_14c9b57d5 + '\x01';
  _DAT_14c9bf7a0 = 0x100000000;
  if (DAT_14c9bf544 != '\0') {
    DAT_14c9b57d6 = DAT_14c9b57d6 + '\x01';
  }
  return;
}



// FUNCTION 1460c1460 FUN_1460c1460 body=287 status=ok
// SIG undefined FUN_1460c1460(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c1460(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b59a8) {
    FUN_144b3d300(&DAT_14c9b59a8);
    if (DAT_14c9b59a8 == -1) {
      FUN_1460c1580();
      FUN_140db5666(&DAT_14c9b5900,2,&DAT_14c9b5898,
                    L"TBasePassPSTDistanceFieldShadowsAndLightMapPolicyHQGbxDigi",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_1471308d4,
                    FUN_1471308ac,FUN_14175d294,&LAB_1471308a8,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b5900 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c91c);
      _Init_thread_footer(&DAT_14c9b59a8);
    }
  }
  return &DAT_14c9b5900;
}



// FUNCTION 1460c1580 FUN_1460c1580 body=205 status=ok
// SIG undefined FUN_1460c1580(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c1580(void)

{
  if ((DAT_14c9b58ff & 2) == 0) {
    DAT_14c9b58ff = DAT_14c9b58ff | 2;
    _DAT_14c9b58a0 = L"TBasePassPSTDistanceFieldShadowsAndLightMapPolicyHQGbxDigi";
    _DAT_14c9b58b8 = FUN_146826540;
    _DAT_14c9b58c0 = FUN_146825d77;
    _DAT_14c9b58c8 = FUN_146825fd6;
    _DAT_14c9b58d0 = FUN_1407e02ea;
    _DAT_14c9b58d8 = FUN_146826273;
    _DAT_14c9b58b0 = FUN_14713086e;
    _DAT_14c9b58f0 = 0xffffffff00000110;
    _DAT_14c9b58f8 = 8;
    DAT_14c9b58fc = 0;
    _DAT_14c9b58e0 = &LAB_1471308a4;
    FUN_1460c164e();
    FUN_1407e00cc(&DAT_14c9b5898);
    return;
  }
  return;
}



// FUNCTION 1460c164e FUN_1460c164e body=133 status=ok
// SIG undefined FUN_1460c164e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c164e(void)

{
  _DAT_14c9bf7d0 = L"BASE";
  DAT_14c9bf7fa = 4;
  FUN_145c95ad4();
  _DAT_14c9bf7e0 = DAT_14c9b58a8;
  _DAT_14c9bf7d8 = &DAT_14c9bf4e0;
  _DAT_14c9bf7e8 = &LAB_14682652b;
  DAT_14c9b58a8 = &DAT_14c9bf7d0;
  DAT_14c9b58fd = DAT_14c9b58fd + '\x01';
  _DAT_14c9bf7f0 = 0x100000000;
  if (DAT_14c9bf544 != '\0') {
    DAT_14c9b58fe = DAT_14c9b58fe + '\x01';
  }
  return;
}



// FUNCTION 1460c16d4 FUN_1460c16d4 body=287 status=ok
// SIG undefined FUN_1460c16d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c16d4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b5ad0) {
    FUN_144b3d300(&DAT_14c9b5ad0);
    if (DAT_14c9b5ad0 == -1) {
      FUN_1460c17f4();
      FUN_140db5666(&DAT_14c9b5a28,2,&DAT_14c9b59c0,
                    L"TBasePassPSTDistanceFieldShadowsAndLightMapPolicyHQSkylightGbxDigiForceVelocity"
                    ,L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_147130982,
                    FUN_14713095a,FUN_14175d56e,&LAB_147130956,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b5a28 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c928);
      _Init_thread_footer(&DAT_14c9b5ad0);
    }
  }
  return &DAT_14c9b5a28;
}



// FUNCTION 1460c17f4 FUN_1460c17f4 body=205 status=ok
// SIG undefined FUN_1460c17f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c17f4(void)

{
  if ((DAT_14c9b5a27 & 2) == 0) {
    DAT_14c9b5a27 = DAT_14c9b5a27 | 2;
    _DAT_14c9b59c8 =
         L"TBasePassPSTDistanceFieldShadowsAndLightMapPolicyHQSkylightGbxDigiForceVelocity";
    _DAT_14c9b59e0 = FUN_146826540;
    _DAT_14c9b59e8 = FUN_146825d77;
    _DAT_14c9b59f0 = FUN_146825fd6;
    _DAT_14c9b59f8 = FUN_1407e02ea;
    _DAT_14c9b5a00 = FUN_146826273;
    _DAT_14c9b59d8 = FUN_14713091c;
    _DAT_14c9b5a18 = 0xffffffff00000110;
    _DAT_14c9b5a20 = 8;
    DAT_14c9b5a24 = 0;
    _DAT_14c9b5a08 = &LAB_147130952;
    FUN_1460c18c2();
    FUN_1407e00cc(&DAT_14c9b59c0);
    return;
  }
  return;
}



// FUNCTION 1460c18c2 FUN_1460c18c2 body=133 status=ok
// SIG undefined FUN_1460c18c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c18c2(void)

{
  _DAT_14c9bf820 = L"BASE";
  DAT_14c9bf84a = 4;
  FUN_145c95ad4();
  _DAT_14c9bf830 = DAT_14c9b59d0;
  _DAT_14c9bf828 = &DAT_14c9bf4e0;
  _DAT_14c9bf838 = &LAB_14682652b;
  DAT_14c9b59d0 = &DAT_14c9bf820;
  DAT_14c9b5a25 = DAT_14c9b5a25 + '\x01';
  _DAT_14c9bf840 = 0x100000000;
  if (DAT_14c9bf544 != '\0') {
    DAT_14c9b5a26 = DAT_14c9b5a26 + '\x01';
  }
  return;
}



// FUNCTION 1460c1948 FUN_1460c1948 body=287 status=ok
// SIG undefined FUN_1460c1948(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c1948(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b5bf8) {
    FUN_144b3d300(&DAT_14c9b5bf8);
    if (DAT_14c9b5bf8 == -1) {
      FUN_1460c1a68();
      FUN_140db5666(&DAT_14c9b5b50,2,&DAT_14c9b5ae8,
                    L"TBasePassPSTDistanceFieldShadowsAndLightMapPolicyHQGbxDigiForceVelocity",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_147130a30,
                    FUN_147130a08,FUN_14175d966,&LAB_147130a04,&LAB_14712ac0c,&LAB_14712ac08,0x110,0
                   );
      _DAT_14c9b5b50 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c934);
      _Init_thread_footer(&DAT_14c9b5bf8);
    }
  }
  return &DAT_14c9b5b50;
}



// FUNCTION 1460c1a68 FUN_1460c1a68 body=205 status=ok
// SIG undefined FUN_1460c1a68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c1a68(void)

{
  if ((DAT_14c9b5b4f & 2) == 0) {
    DAT_14c9b5b4f = DAT_14c9b5b4f | 2;
    _DAT_14c9b5af0 = L"TBasePassPSTDistanceFieldShadowsAndLightMapPolicyHQGbxDigiForceVelocity";
    _DAT_14c9b5b08 = FUN_146826540;
    _DAT_14c9b5b10 = FUN_146825d77;
    _DAT_14c9b5b18 = FUN_146825fd6;
    _DAT_14c9b5b20 = FUN_1407e02ea;
    _DAT_14c9b5b28 = FUN_146826273;
    _DAT_14c9b5b00 = FUN_1471309ca;
    _DAT_14c9b5b40 = 0xffffffff00000110;
    _DAT_14c9b5b48 = 8;
    DAT_14c9b5b4c = 0;
    _DAT_14c9b5b30 = &LAB_147130a00;
    FUN_1460c1b36();
    FUN_1407e00cc(&DAT_14c9b5ae8);
    return;
  }
  return;
}



// FUNCTION 1460c1b36 FUN_1460c1b36 body=133 status=ok
// SIG undefined FUN_1460c1b36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c1b36(void)

{
  _DAT_14c9bf870 = L"BASE";
  DAT_14c9bf89a = 4;
  FUN_145c95ad4();
  _DAT_14c9bf880 = DAT_14c9b5af8;
  _DAT_14c9bf878 = &DAT_14c9bf4e0;
  _DAT_14c9bf888 = &LAB_14682652b;
  DAT_14c9b5af8 = &DAT_14c9bf870;
  DAT_14c9b5b4d = DAT_14c9b5b4d + '\x01';
  _DAT_14c9bf890 = 0x100000000;
  if (DAT_14c9bf544 != '\0') {
    DAT_14c9b5b4e = DAT_14c9b5b4e + '\x01';
  }
  return;
}



// FUNCTION 1460c1bbc FUN_1460c1bbc body=287 status=ok
// SIG undefined FUN_1460c1bbc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c1bbc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b5e48) {
    FUN_144b3d300(&DAT_14c9b5e48);
    if (DAT_14c9b5e48 == -1) {
      FUN_1460c1cdc();
      FUN_140db5666(&DAT_14c9b5da0,2,&DAT_14c9b5d38,
                    L"TBasePassCSTDistanceFieldShadowsAndLightMapPolicyHQ",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",5,1,FUN_147130ba4,
                    FUN_147130b7c,FUN_14175df8c,&LAB_147130b78,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9b5da0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c94c);
      _Init_thread_footer(&DAT_14c9b5e48);
    }
  }
  return &DAT_14c9b5da0;
}



// FUNCTION 1460c1cdc FUN_1460c1cdc body=205 status=ok
// SIG undefined FUN_1460c1cdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c1cdc(void)

{
  if ((DAT_14c9b5d9f & 2) == 0) {
    DAT_14c9b5d9f = DAT_14c9b5d9f | 2;
    _DAT_14c9b5d40 = L"TBasePassCSTDistanceFieldShadowsAndLightMapPolicyHQ";
    _DAT_14c9b5d58 = FUN_146826540;
    _DAT_14c9b5d60 = FUN_146825d77;
    _DAT_14c9b5d68 = FUN_146825fd6;
    _DAT_14c9b5d70 = FUN_1407e02ea;
    _DAT_14c9b5d78 = FUN_146826273;
    _DAT_14c9b5d50 = FUN_147130b3e;
    _DAT_14c9b5d90 = 0xffffffff00000128;
    _DAT_14c9b5d98 = 8;
    DAT_14c9b5d9c = 0;
    _DAT_14c9b5d80 = &LAB_147130b74;
    FUN_1460c1daa();
    FUN_1407e00cc(&DAT_14c9b5d38);
    return;
  }
  return;
}



// FUNCTION 1460c1daa FUN_1460c1daa body=133 status=ok
// SIG undefined FUN_1460c1daa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c1daa(void)

{
  _DAT_14c9bfce0 = L"BASE";
  DAT_14c9bfd0a = 4;
  FUN_145d0879e();
  _DAT_14c9bfcf0 = DAT_14c9b5d48;
  _DAT_14c9bfce8 = &DAT_14c9bf8f0;
  _DAT_14c9bfcf8 = &LAB_14682652b;
  DAT_14c9b5d48 = &DAT_14c9bfce0;
  DAT_14c9b5d9d = DAT_14c9b5d9d + '\x01';
  _DAT_14c9bfd00 = 0x100000000;
  if (DAT_14c9bf954 != '\0') {
    DAT_14c9b5d9e = DAT_14c9b5d9e + '\x01';
  }
  return;
}



// FUNCTION 1460c1e30 FUN_1460c1e30 body=287 status=ok
// SIG undefined FUN_1460c1e30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c1e30(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b5f70) {
    FUN_144b3d300(&DAT_14c9b5f70);
    if (DAT_14c9b5f70 == -1) {
      FUN_1460c1f50();
      FUN_140db5666(&DAT_14c9b5ec8,2,&DAT_14c9b5e60,
                    L"TBasePassWorkGraphCSTDistanceFieldShadowsAndLightMapPolicyHQSkylight",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",0xb,1,FUN_147130c6a,
                    FUN_147130c42,FUN_14175e19e,&LAB_147130c3e,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9b5ec8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c958);
      _Init_thread_footer(&DAT_14c9b5f70);
    }
  }
  return &DAT_14c9b5ec8;
}



// FUNCTION 1460c1f50 FUN_1460c1f50 body=205 status=ok
// SIG undefined FUN_1460c1f50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c1f50(void)

{
  if ((DAT_14c9b5ec7 & 2) == 0) {
    DAT_14c9b5ec7 = DAT_14c9b5ec7 | 2;
    _DAT_14c9b5e68 = L"TBasePassWorkGraphCSTDistanceFieldShadowsAndLightMapPolicyHQSkylight";
    _DAT_14c9b5e80 = FUN_146826540;
    _DAT_14c9b5e88 = FUN_146825d77;
    _DAT_14c9b5e90 = FUN_146825fd6;
    _DAT_14c9b5e98 = FUN_1407e02ea;
    _DAT_14c9b5ea0 = FUN_146826273;
    _DAT_14c9b5e78 = FUN_147130c04;
    _DAT_14c9b5eb8 = 0xffffffff00000128;
    _DAT_14c9b5ec0 = 8;
    DAT_14c9b5ec4 = 0;
    _DAT_14c9b5ea8 = &LAB_147130c3a;
    FUN_1460c201e();
    FUN_1407e00cc(&DAT_14c9b5e60);
    return;
  }
  return;
}



// FUNCTION 1460c201e FUN_1460c201e body=133 status=ok
// SIG undefined FUN_1460c201e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c201e(void)

{
  _DAT_14c9bfd30 = L"BASE";
  DAT_14c9bfd5a = 4;
  FUN_145d0879e();
  _DAT_14c9bfd40 = DAT_14c9b5e70;
  _DAT_14c9bfd38 = &DAT_14c9bf8f0;
  _DAT_14c9bfd48 = &LAB_14682652b;
  DAT_14c9b5e70 = &DAT_14c9bfd30;
  DAT_14c9b5ec5 = DAT_14c9b5ec5 + '\x01';
  _DAT_14c9bfd50 = 0x100000000;
  if (DAT_14c9bf954 != '\0') {
    DAT_14c9b5ec6 = DAT_14c9b5ec6 + '\x01';
  }
  return;
}



// FUNCTION 1460c20a4 FUN_1460c20a4 body=287 status=ok
// SIG undefined FUN_1460c20a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c20a4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b6098) {
    FUN_144b3d300(&DAT_14c9b6098);
    if (DAT_14c9b6098 == -1) {
      FUN_1460c21c4();
      FUN_140db5666(&DAT_14c9b5ff0,2,&DAT_14c9b5f88,
                    L"TBasePassWorkGraphCSTDistanceFieldShadowsAndLightMapPolicyHQ",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",0xb,1,FUN_147130d30,
                    FUN_147130d08,FUN_14175e4c4,&LAB_147130d04,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9b5ff0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c964);
      _Init_thread_footer(&DAT_14c9b6098);
    }
  }
  return &DAT_14c9b5ff0;
}



// FUNCTION 1460c21c4 FUN_1460c21c4 body=205 status=ok
// SIG undefined FUN_1460c21c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c21c4(void)

{
  if ((DAT_14c9b5fef & 2) == 0) {
    DAT_14c9b5fef = DAT_14c9b5fef | 2;
    _DAT_14c9b5f90 = L"TBasePassWorkGraphCSTDistanceFieldShadowsAndLightMapPolicyHQ";
    _DAT_14c9b5fa8 = FUN_146826540;
    _DAT_14c9b5fb0 = FUN_146825d77;
    _DAT_14c9b5fb8 = FUN_146825fd6;
    _DAT_14c9b5fc0 = FUN_1407e02ea;
    _DAT_14c9b5fc8 = FUN_146826273;
    _DAT_14c9b5fa0 = FUN_147130cca;
    _DAT_14c9b5fe0 = 0xffffffff00000128;
    _DAT_14c9b5fe8 = 8;
    DAT_14c9b5fec = 0;
    _DAT_14c9b5fd0 = &LAB_147130d00;
    FUN_1460c2292();
    FUN_1407e00cc(&DAT_14c9b5f88);
    return;
  }
  return;
}



// FUNCTION 1460c2292 FUN_1460c2292 body=133 status=ok
// SIG undefined FUN_1460c2292(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c2292(void)

{
  _DAT_14c9bfd80 = L"BASE";
  DAT_14c9bfdaa = 4;
  FUN_145d0879e();
  _DAT_14c9bfd90 = DAT_14c9b5f98;
  _DAT_14c9bfd88 = &DAT_14c9bf8f0;
  _DAT_14c9bfd98 = &LAB_14682652b;
  DAT_14c9b5f98 = &DAT_14c9bfd80;
  DAT_14c9b5fed = DAT_14c9b5fed + '\x01';
  _DAT_14c9bfda0 = 0x100000000;
  if (DAT_14c9bf954 != '\0') {
    DAT_14c9b5fee = DAT_14c9b5fee + '\x01';
  }
  return;
}



// FUNCTION 1460c2318 FUN_1460c2318 body=287 status=ok
// SIG undefined FUN_1460c2318(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c2318(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b61c0) {
    FUN_144b3d300(&DAT_14c9b61c0);
    if (DAT_14c9b61c0 == -1) {
      FUN_1460c2438();
      FUN_140db5666(&DAT_14c9b6118,2,&DAT_14c9b60b0,L"F128BitRTBasePassPS",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainPS",3,2,FUN_147130df6,
                    FUN_147130dce,&LAB_142b7c970,&LAB_147130dca,&LAB_14712ac0c,&LAB_14712ac08,0x110,
                    0);
      _DAT_14c9b6118 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c988);
      _Init_thread_footer(&DAT_14c9b61c0);
    }
  }
  return &DAT_14c9b6118;
}



// FUNCTION 1460c2438 FUN_1460c2438 body=205 status=ok
// SIG undefined FUN_1460c2438(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c2438(void)

{
  if ((DAT_14c9b6117 & 2) == 0) {
    DAT_14c9b6117 = DAT_14c9b6117 | 2;
    _DAT_14c9b60b8 = L"F128BitRTBasePassPS";
    _DAT_14c9b60d0 = FUN_146826540;
    _DAT_14c9b60d8 = FUN_146825d77;
    _DAT_14c9b60e0 = FUN_146825fd6;
    _DAT_14c9b60e8 = FUN_1407e02ea;
    _DAT_14c9b60f0 = FUN_146826273;
    _DAT_14c9b60c8 = FUN_147130d90;
    _DAT_14c9b6108 = 0xffffffff00000110;
    _DAT_14c9b6110 = 8;
    DAT_14c9b6114 = 0;
    _DAT_14c9b60f8 = &LAB_147130dc6;
    FUN_1460c2506();
    FUN_1407e00cc(&DAT_14c9b60b0);
    return;
  }
  return;
}



// FUNCTION 1460c2506 FUN_1460c2506 body=133 status=ok
// SIG undefined FUN_1460c2506(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c2506(void)

{
  _DAT_14c9bfdd0 = L"BASE";
  DAT_14c9bfdfa = 4;
  FUN_1456c1f9a();
  _DAT_14c9bfde0 = DAT_14c9b60c0;
  _DAT_14c9bfdd8 = &DAT_14c9af9c8;
  _DAT_14c9bfde8 = &LAB_14682652b;
  DAT_14c9b60c0 = &DAT_14c9bfdd0;
  DAT_14c9b6115 = DAT_14c9b6115 + '\x01';
  _DAT_14c9bfdf0 = 0x100000000;
  if (DAT_14c9afa2c != '\0') {
    DAT_14c9b6116 = DAT_14c9b6116 + '\x01';
  }
  return;
}



// FUNCTION 1460c258c FUN_1460c258c body=287 status=ok
// SIG undefined FUN_1460c258c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c258c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c1ec8) {
    FUN_144b3d300(&DAT_14c9c1ec8);
    if (DAT_14c9c1ec8 == -1) {
      FUN_1460c26ac();
      FUN_140db5666(&DAT_14c9c1e20,2,&DAT_14c9c1db8,L"FMeshDecalsEmissivePS",
                    L"/Engine/Private/MeshDecals.usf",L"MainPS",3,1,FUN_147144f88,FUN_147144f60,
                    FUN_14175ea7e,&LAB_147144f5c,&LAB_14712ac0c,&LAB_14712ac08,0x108,0);
      _DAT_14c9c1e20 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142ba5e43);
      _Init_thread_footer(&DAT_14c9c1ec8);
    }
  }
  return &DAT_14c9c1e20;
}



// FUNCTION 1460c26ac FUN_1460c26ac body=205 status=ok
// SIG undefined FUN_1460c26ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c26ac(void)

{
  if ((DAT_14c9c1e1f & 2) == 0) {
    DAT_14c9c1e1f = DAT_14c9c1e1f | 2;
    _DAT_14c9c1dc0 = L"FMeshDecalsEmissivePS";
    _DAT_14c9c1dd8 = FUN_146826540;
    _DAT_14c9c1de0 = FUN_146825d77;
    _DAT_14c9c1de8 = FUN_146825fd6;
    _DAT_14c9c1df0 = FUN_1407e02ea;
    _DAT_14c9c1df8 = FUN_146826273;
    _DAT_14c9c1dd0 = FUN_147144f22;
    _DAT_14c9c1e10 = 0xffffffff00000108;
    _DAT_14c9c1e18 = 8;
    DAT_14c9c1e1c = 0;
    _DAT_14c9c1e00 = &LAB_147144f58;
    FUN_1460c277a();
    FUN_1407e00cc(&DAT_14c9c1db8);
    return;
  }
  return;
}



// FUNCTION 1460c277a FUN_1460c277a body=133 status=ok
// SIG undefined FUN_1460c277a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c277a(void)

{
  _DAT_14c9c4218 = L"BASE";
  DAT_14c9c4242 = 4;
  FUN_14578af2e();
  _DAT_14c9c4228 = DAT_14c9c1dc8;
  _DAT_14c9c4220 = &DAT_14c9c1c90;
  _DAT_14c9c4230 = &LAB_14682652b;
  DAT_14c9c1dc8 = &DAT_14c9c4218;
  DAT_14c9c1e1d = DAT_14c9c1e1d + '\x01';
  _DAT_14c9c4238 = 0x100000000;
  if (DAT_14c9c1cf4 != '\0') {
    DAT_14c9c1e1e = DAT_14c9c1e1e + '\x01';
  }
  return;
}



// FUNCTION 1460c2800 FUN_1460c2800 body=287 status=ok
// SIG undefined FUN_1460c2800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c2800(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c2a70) {
    FUN_144b3d300(&DAT_14c9c2a70);
    if (DAT_14c9c2a70 == -1) {
      FUN_1460c2920();
      FUN_140db5666(&DAT_14c9c29c8,1,&DAT_14c9c2960,L"FDeferredDecalEmissivePS",
                    L"/Engine/Private/DeferredDecal.usf",L"MainPS",3,1,FUN_147146148,FUN_147146120,
                    FUN_14175ef2a,&LAB_14714611c,&LAB_14712ac0c,&LAB_14712ac08,0x140,0);
      _DAT_14c9c29c8 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_142ba98a3);
      _Init_thread_footer(&DAT_14c9c2a70);
    }
  }
  return &DAT_14c9c29c8;
}



// FUNCTION 1460c2920 FUN_1460c2920 body=205 status=ok
// SIG undefined FUN_1460c2920(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c2920(void)

{
  if ((DAT_14c9c29c7 & 2) == 0) {
    DAT_14c9c29c7 = DAT_14c9c29c7 | 2;
    _DAT_14c9c2968 = L"FDeferredDecalEmissivePS";
    _DAT_14c9c2980 = FUN_146826540;
    _DAT_14c9c2988 = FUN_146825d77;
    _DAT_14c9c2990 = FUN_146825fd6;
    _DAT_14c9c2998 = FUN_1407e02ea;
    _DAT_14c9c29a0 = FUN_146826273;
    _DAT_14c9c2978 = FUN_1471460e2;
    _DAT_14c9c29b8 = 0xffffffff00000140;
    _DAT_14c9c29c0 = 8;
    DAT_14c9c29c4 = 0;
    _DAT_14c9c29a8 = &LAB_147146118;
    FUN_1460c29ee();
    FUN_1407e00cc(&DAT_14c9c2960);
    return;
  }
  return;
}



// FUNCTION 1460c29ee FUN_1460c29ee body=133 status=ok
// SIG undefined FUN_1460c29ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c29ee(void)

{
  _DAT_14c9c43c0 = L"BASE";
  DAT_14c9c43ea = 4;
  FUN_14577ea2a();
  _DAT_14c9c43d0 = DAT_14c9c2970;
  _DAT_14c9c43c8 = &DAT_14c9c2838;
  _DAT_14c9c43d8 = &LAB_14682652b;
  DAT_14c9c2970 = &DAT_14c9c43c0;
  DAT_14c9c29c5 = DAT_14c9c29c5 + '\x01';
  _DAT_14c9c43e0 = 0x100000000;
  if (DAT_14c9c289c != '\0') {
    DAT_14c9c29c6 = DAT_14c9c29c6 + '\x01';
  }
  return;
}



// FUNCTION 1460c2a74 FUN_1460c2a74 body=287 status=ok
// SIG undefined FUN_1460c2a74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c2a74(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c2cc0) {
    FUN_144b3d300(&DAT_14c9c2cc0);
    if (DAT_14c9c2cc0 == -1) {
      FUN_1460c2b94();
      FUN_140db5666(&DAT_14c9c2c18,1,&DAT_14c9c2bb0,L"FDeferredDecalMobilePS",
                    L"/Engine/Private/DeferredDecal.usf",L"MainPS",3,1,FUN_1471462dc,FUN_1471462b4,
                    FUN_14175ef7a,&LAB_1471462b0,&LAB_14712ac0c,&LAB_14712ac08,0x140,0);
      _DAT_14c9c2c18 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_142ba98bb);
      _Init_thread_footer(&DAT_14c9c2cc0);
    }
  }
  return &DAT_14c9c2c18;
}



// FUNCTION 1460c2b94 FUN_1460c2b94 body=205 status=ok
// SIG undefined FUN_1460c2b94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c2b94(void)

{
  if ((DAT_14c9c2c17 & 2) == 0) {
    DAT_14c9c2c17 = DAT_14c9c2c17 | 2;
    _DAT_14c9c2bb8 = L"FDeferredDecalMobilePS";
    _DAT_14c9c2bd0 = FUN_146826540;
    _DAT_14c9c2bd8 = FUN_146825d77;
    _DAT_14c9c2be0 = FUN_146825fd6;
    _DAT_14c9c2be8 = FUN_1407e02ea;
    _DAT_14c9c2bf0 = FUN_146826273;
    _DAT_14c9c2bc8 = FUN_147146276;
    _DAT_14c9c2c08 = 0xffffffff00000140;
    _DAT_14c9c2c10 = 8;
    DAT_14c9c2c14 = 0;
    _DAT_14c9c2bf8 = &LAB_1471462ac;
    FUN_1460c2c62();
    FUN_1407e00cc(&DAT_14c9c2bb0);
    return;
  }
  return;
}



// FUNCTION 1460c2c62 FUN_1460c2c62 body=133 status=ok
// SIG undefined FUN_1460c2c62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c2c62(void)

{
  _DAT_14c9c4420 = L"BASE";
  DAT_14c9c444a = 4;
  FUN_14577ea2a();
  _DAT_14c9c4430 = DAT_14c9c2bc0;
  _DAT_14c9c4428 = &DAT_14c9c2838;
  _DAT_14c9c4438 = &LAB_14682652b;
  DAT_14c9c2bc0 = &DAT_14c9c4420;
  DAT_14c9c2c15 = DAT_14c9c2c15 + '\x01';
  _DAT_14c9c4440 = 0x100000000;
  if (DAT_14c9c289c != '\0') {
    DAT_14c9c2c16 = DAT_14c9c2c16 + '\x01';
  }
  return;
}



// FUNCTION 1460c2ce8 FUN_1460c2ce8 body=287 status=ok
// SIG undefined FUN_1460c2ce8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c2ce8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca09c50) {
    FUN_144b3d300(&DAT_14ca09c50);
    if (DAT_14ca09c50 == -1) {
      FUN_1460c2e08();
      FUN_140db5666(&DAT_14ca09ba8,2,&DAT_14ca09b40,
                    L"TMobileBasePassPSFNoLightMapPolicyLOCAL_LIGHTS_DISABLEDThinTranslGrey",
                    L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14723e7c6,
                    FUN_14723e79e,FUN_14176f3fe,&LAB_14723e79a,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca09ba8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de82cc);
      _Init_thread_footer(&DAT_14ca09c50);
    }
  }
  return &DAT_14ca09ba8;
}



// FUNCTION 1460c2e08 FUN_1460c2e08 body=205 status=ok
// SIG undefined FUN_1460c2e08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c2e08(void)

{
  if ((DAT_14ca09ba7 & 2) == 0) {
    DAT_14ca09ba7 = DAT_14ca09ba7 | 2;
    _DAT_14ca09b48 = L"TMobileBasePassPSFNoLightMapPolicyLOCAL_LIGHTS_DISABLEDThinTranslGrey";
    _DAT_14ca09b60 = FUN_146826540;
    _DAT_14ca09b68 = FUN_146825d77;
    _DAT_14ca09b70 = FUN_146825fd6;
    _DAT_14ca09b78 = FUN_1407e02ea;
    _DAT_14ca09b80 = FUN_146826273;
    _DAT_14ca09b58 = FUN_14723e752;
    _DAT_14ca09b98 = 0xffffffff00000118;
    _DAT_14ca09ba0 = 8;
    DAT_14ca09ba4 = 0;
    _DAT_14ca09b88 = &LAB_14723e796;
    FUN_1460c2ed6();
    FUN_1407e00cc(&DAT_14ca09b40);
    return;
  }
  return;
}



// FUNCTION 1460c2ed6 FUN_1460c2ed6 body=133 status=ok
// SIG undefined FUN_1460c2ed6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c2ed6(void)

{
  _DAT_14ca0f000 = L"BASE";
  DAT_14ca0f02a = 4;
  FUN_145ce6e12();
  _DAT_14ca0f010 = DAT_14ca09b50;
  _DAT_14ca0f008 = &DAT_14ca0ee10;
  _DAT_14ca0f018 = &LAB_14682652b;
  DAT_14ca09b50 = &DAT_14ca0f000;
  DAT_14ca09ba5 = DAT_14ca09ba5 + '\x01';
  _DAT_14ca0f020 = 0x100000000;
  if (DAT_14ca0ee74 != '\0') {
    DAT_14ca09ba6 = DAT_14ca09ba6 + '\x01';
  }
  return;
}



// FUNCTION 1460c2f5c FUN_1460c2f5c body=287 status=ok
// SIG undefined FUN_1460c2f5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c2f5c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca09d78) {
    FUN_144b3d300(&DAT_14ca09d78);
    if (DAT_14ca09d78 == -1) {
      FUN_1460c307c();
      FUN_140db5666(&DAT_14ca09cd0,2,&DAT_14ca09c68,
                    L"TMobileBasePassPSFNoLightMapPolicyLOCAL_LIGHTS_ENABLED",
                    L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14723e89e,
                    FUN_14723e876,FUN_14176f466,&LAB_14723e872,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca09cd0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de82d8);
      _Init_thread_footer(&DAT_14ca09d78);
    }
  }
  return &DAT_14ca09cd0;
}



// FUNCTION 1460c307c FUN_1460c307c body=205 status=ok
// SIG undefined FUN_1460c307c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c307c(void)

{
  if ((DAT_14ca09ccf & 2) == 0) {
    DAT_14ca09ccf = DAT_14ca09ccf | 2;
    _DAT_14ca09c70 = L"TMobileBasePassPSFNoLightMapPolicyLOCAL_LIGHTS_ENABLED";
    _DAT_14ca09c88 = FUN_146826540;
    _DAT_14ca09c90 = FUN_146825d77;
    _DAT_14ca09c98 = FUN_146825fd6;
    _DAT_14ca09ca0 = FUN_1407e02ea;
    _DAT_14ca09ca8 = FUN_146826273;
    _DAT_14ca09c80 = FUN_14723e82a;
    _DAT_14ca09cc0 = 0xffffffff00000118;
    _DAT_14ca09cc8 = 8;
    DAT_14ca09ccc = 0;
    _DAT_14ca09cb0 = &LAB_14723e86e;
    FUN_1460c314a();
    FUN_1407e00cc(&DAT_14ca09c68);
    return;
  }
  return;
}



// FUNCTION 1460c314a FUN_1460c314a body=133 status=ok
// SIG undefined FUN_1460c314a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c314a(void)

{
  _DAT_14ca0f030 = L"BASE";
  DAT_14ca0f05a = 4;
  FUN_145ce6e12();
  _DAT_14ca0f040 = DAT_14ca09c78;
  _DAT_14ca0f038 = &DAT_14ca0ee10;
  _DAT_14ca0f048 = &LAB_14682652b;
  DAT_14ca09c78 = &DAT_14ca0f030;
  DAT_14ca09ccd = DAT_14ca09ccd + '\x01';
  _DAT_14ca0f050 = 0x100000000;
  if (DAT_14ca0ee74 != '\0') {
    DAT_14ca09cce = DAT_14ca09cce + '\x01';
  }
  return;
}



// FUNCTION 1460c31d0 FUN_1460c31d0 body=287 status=ok
// SIG undefined FUN_1460c31d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c31d0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca09ea0) {
    FUN_144b3d300(&DAT_14ca09ea0);
    if (DAT_14ca09ea0 == -1) {
      FUN_1460c32f0();
      FUN_140db5666(&DAT_14ca09df8,2,&DAT_14ca09d90,
                    L"TMobileBasePassPSFNoLightMapPolicyLOCAL_LIGHTS_ENABLEDThinTranslGrey",
                    L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14723e976,
                    FUN_14723e94e,FUN_14176f4e8,&LAB_14723e94a,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca09df8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de82e4);
      _Init_thread_footer(&DAT_14ca09ea0);
    }
  }
  return &DAT_14ca09df8;
}



// FUNCTION 1460c32f0 FUN_1460c32f0 body=205 status=ok
// SIG undefined FUN_1460c32f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c32f0(void)

{
  if ((DAT_14ca09df7 & 2) == 0) {
    DAT_14ca09df7 = DAT_14ca09df7 | 2;
    _DAT_14ca09d98 = L"TMobileBasePassPSFNoLightMapPolicyLOCAL_LIGHTS_ENABLEDThinTranslGrey";
    _DAT_14ca09db0 = FUN_146826540;
    _DAT_14ca09db8 = FUN_146825d77;
    _DAT_14ca09dc0 = FUN_146825fd6;
    _DAT_14ca09dc8 = FUN_1407e02ea;
    _DAT_14ca09dd0 = FUN_146826273;
    _DAT_14ca09da8 = FUN_14723e902;
    _DAT_14ca09de8 = 0xffffffff00000118;
    _DAT_14ca09df0 = 8;
    DAT_14ca09df4 = 0;
    _DAT_14ca09dd8 = &LAB_14723e946;
    FUN_1460c33be();
    FUN_1407e00cc(&DAT_14ca09d90);
    return;
  }
  return;
}



// FUNCTION 1460c33be FUN_1460c33be body=133 status=ok
// SIG undefined FUN_1460c33be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c33be(void)

{
  _DAT_14ca0f060 = L"BASE";
  DAT_14ca0f08a = 4;
  FUN_145ce6e12();
  _DAT_14ca0f070 = DAT_14ca09da0;
  _DAT_14ca0f068 = &DAT_14ca0ee10;
  _DAT_14ca0f078 = &LAB_14682652b;
  DAT_14ca09da0 = &DAT_14ca0f060;
  DAT_14ca09df5 = DAT_14ca09df5 + '\x01';
  _DAT_14ca0f080 = 0x100000000;
  if (DAT_14ca0ee74 != '\0') {
    DAT_14ca09df6 = DAT_14ca09df6 + '\x01';
  }
  return;
}



// FUNCTION 1460c3444 FUN_1460c3444 body=287 status=ok
// SIG undefined FUN_1460c3444(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c3444(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca09fc8) {
    FUN_144b3d300(&DAT_14ca09fc8);
    if (DAT_14ca09fc8 == -1) {
      FUN_1460c3564();
      FUN_140db5666(&DAT_14ca09f20,2,&DAT_14ca09eb8,
                    L"TMobileBasePassPSFNoLightMapPolicyLOCAL_LIGHTS_BUFFER",
                    L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14723ea4e,
                    FUN_14723ea26,FUN_14176f59e,&LAB_14723ea22,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca09f20 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de82f0);
      _Init_thread_footer(&DAT_14ca09fc8);
    }
  }
  return &DAT_14ca09f20;
}



// FUNCTION 1460c3564 FUN_1460c3564 body=205 status=ok
// SIG undefined FUN_1460c3564(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c3564(void)

{
  if ((DAT_14ca09f1f & 2) == 0) {
    DAT_14ca09f1f = DAT_14ca09f1f | 2;
    _DAT_14ca09ec0 = L"TMobileBasePassPSFNoLightMapPolicyLOCAL_LIGHTS_BUFFER";
    _DAT_14ca09ed8 = FUN_146826540;
    _DAT_14ca09ee0 = FUN_146825d77;
    _DAT_14ca09ee8 = FUN_146825fd6;
    _DAT_14ca09ef0 = FUN_1407e02ea;
    _DAT_14ca09ef8 = FUN_146826273;
    _DAT_14ca09ed0 = FUN_14723e9da;
    _DAT_14ca09f10 = 0xffffffff00000118;
    _DAT_14ca09f18 = 8;
    DAT_14ca09f1c = 0;
    _DAT_14ca09f00 = &LAB_14723ea1e;
    FUN_1460c3632();
    FUN_1407e00cc(&DAT_14ca09eb8);
    return;
  }
  return;
}



// FUNCTION 1460c3632 FUN_1460c3632 body=133 status=ok
// SIG undefined FUN_1460c3632(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c3632(void)

{
  _DAT_14ca0f090 = L"BASE";
  DAT_14ca0f0ba = 4;
  FUN_145ce6e12();
  _DAT_14ca0f0a0 = DAT_14ca09ec8;
  _DAT_14ca0f098 = &DAT_14ca0ee10;
  _DAT_14ca0f0a8 = &LAB_14682652b;
  DAT_14ca09ec8 = &DAT_14ca0f090;
  DAT_14ca09f1d = DAT_14ca09f1d + '\x01';
  _DAT_14ca0f0b0 = 0x100000000;
  if (DAT_14ca0ee74 != '\0') {
    DAT_14ca09f1e = DAT_14ca09f1e + '\x01';
  }
  return;
}



// FUNCTION 1460c36b8 FUN_1460c36b8 body=287 status=ok
// SIG undefined FUN_1460c36b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c36b8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0a0f0) {
    FUN_144b3d300(&DAT_14ca0a0f0);
    if (DAT_14ca0a0f0 == -1) {
      FUN_1460c37d8();
      FUN_140db5666(&DAT_14ca0a048,2,&DAT_14ca09fe0,
                    L"TMobileBasePassPSFNoLightMapPolicyLOCAL_LIGHTS_BUFFERThinTranslGrey",
                    L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14723eb26,
                    FUN_14723eafe,FUN_14176f620,&LAB_14723eafa,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0a048 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de82fc);
      _Init_thread_footer(&DAT_14ca0a0f0);
    }
  }
  return &DAT_14ca0a048;
}



// FUNCTION 1460c37d8 FUN_1460c37d8 body=205 status=ok
// SIG undefined FUN_1460c37d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c37d8(void)

{
  if ((DAT_14ca0a047 & 2) == 0) {
    DAT_14ca0a047 = DAT_14ca0a047 | 2;
    _DAT_14ca09fe8 = L"TMobileBasePassPSFNoLightMapPolicyLOCAL_LIGHTS_BUFFERThinTranslGrey";
    _DAT_14ca0a000 = FUN_146826540;
    _DAT_14ca0a008 = FUN_146825d77;
    _DAT_14ca0a010 = FUN_146825fd6;
    _DAT_14ca0a018 = FUN_1407e02ea;
    _DAT_14ca0a020 = FUN_146826273;
    _DAT_14ca09ff8 = FUN_14723eab2;
    _DAT_14ca0a038 = 0xffffffff00000118;
    _DAT_14ca0a040 = 8;
    DAT_14ca0a044 = 0;
    _DAT_14ca0a028 = &LAB_14723eaf6;
    FUN_1460c38a6();
    FUN_1407e00cc(&DAT_14ca09fe0);
    return;
  }
  return;
}



// FUNCTION 1460c38a6 FUN_1460c38a6 body=133 status=ok
// SIG undefined FUN_1460c38a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c38a6(void)

{
  _DAT_14ca0f0c0 = L"BASE";
  DAT_14ca0f0ea = 4;
  FUN_145ce6e12();
  _DAT_14ca0f0d0 = DAT_14ca09ff0;
  _DAT_14ca0f0c8 = &DAT_14ca0ee10;
  _DAT_14ca0f0d8 = &LAB_14682652b;
  DAT_14ca09ff0 = &DAT_14ca0f0c0;
  DAT_14ca0a045 = DAT_14ca0a045 + '\x01';
  _DAT_14ca0f0e0 = 0x100000000;
  if (DAT_14ca0ee74 != '\0') {
    DAT_14ca0a046 = DAT_14ca0a046 + '\x01';
  }
  return;
}



// FUNCTION 1460c392c FUN_1460c392c body=287 status=ok
// SIG undefined FUN_1460c392c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c392c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0a468) {
    FUN_144b3d300(&DAT_14ca0a468);
    if (DAT_14ca0a468 == -1) {
      FUN_1460c3a4c();
      FUN_140db5666(&DAT_14ca0a3c0,2,&DAT_14ca0a358,
                    L"TMobileBasePassPSTLightMapPolicyLQLOCAL_LIGHTS_DISABLEDThinTranslGrey",
                    L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14723ed9a,
                    FUN_14723ed72,FUN_14176f710,&LAB_14723ed6e,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0a3c0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de8345);
      _Init_thread_footer(&DAT_14ca0a468);
    }
  }
  return &DAT_14ca0a3c0;
}



// FUNCTION 1460c3a4c FUN_1460c3a4c body=205 status=ok
// SIG undefined FUN_1460c3a4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c3a4c(void)

{
  if ((DAT_14ca0a3bf & 2) == 0) {
    DAT_14ca0a3bf = DAT_14ca0a3bf | 2;
    _DAT_14ca0a360 = L"TMobileBasePassPSTLightMapPolicyLQLOCAL_LIGHTS_DISABLEDThinTranslGrey";
    _DAT_14ca0a378 = FUN_146826540;
    _DAT_14ca0a380 = FUN_146825d77;
    _DAT_14ca0a388 = FUN_146825fd6;
    _DAT_14ca0a390 = FUN_1407e02ea;
    _DAT_14ca0a398 = FUN_146826273;
    _DAT_14ca0a370 = FUN_14723ed26;
    _DAT_14ca0a3b0 = 0xffffffff00000118;
    _DAT_14ca0a3b8 = 8;
    DAT_14ca0a3bc = 0;
    _DAT_14ca0a3a0 = &LAB_14723ed6a;
    FUN_1460c3b1a();
    FUN_1407e00cc(&DAT_14ca0a358);
    return;
  }
  return;
}



// FUNCTION 1460c3b1a FUN_1460c3b1a body=133 status=ok
// SIG undefined FUN_1460c3b1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c3b1a(void)

{
  _DAT_14ca0f4a0 = L"BASE";
  DAT_14ca0f4ca = 4;
  FUN_145ce74da();
  _DAT_14ca0f4b0 = DAT_14ca0a368;
  _DAT_14ca0f4a8 = &DAT_14ca0f2b0;
  _DAT_14ca0f4b8 = &LAB_14682652b;
  DAT_14ca0a368 = &DAT_14ca0f4a0;
  DAT_14ca0a3bd = DAT_14ca0a3bd + '\x01';
  _DAT_14ca0f4c0 = 0x100000000;
  if (DAT_14ca0f314 != '\0') {
    DAT_14ca0a3be = DAT_14ca0a3be + '\x01';
  }
  return;
}



// FUNCTION 1460c3ba0 FUN_1460c3ba0 body=287 status=ok
// SIG undefined FUN_1460c3ba0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c3ba0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0a590) {
    FUN_144b3d300(&DAT_14ca0a590);
    if (DAT_14ca0a590 == -1) {
      FUN_1460c3cc0();
      FUN_140db5666(&DAT_14ca0a4e8,2,&DAT_14ca0a480,
                    L"TMobileBasePassPSTLightMapPolicyLQLOCAL_LIGHTS_ENABLED",
                    L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14723ee72,
                    FUN_14723ee4a,FUN_14176f774,&LAB_14723ee46,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0a4e8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de8351);
      _Init_thread_footer(&DAT_14ca0a590);
    }
  }
  return &DAT_14ca0a4e8;
}



// FUNCTION 1460c3cc0 FUN_1460c3cc0 body=205 status=ok
// SIG undefined FUN_1460c3cc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c3cc0(void)

{
  if ((DAT_14ca0a4e7 & 2) == 0) {
    DAT_14ca0a4e7 = DAT_14ca0a4e7 | 2;
    _DAT_14ca0a488 = L"TMobileBasePassPSTLightMapPolicyLQLOCAL_LIGHTS_ENABLED";
    _DAT_14ca0a4a0 = FUN_146826540;
    _DAT_14ca0a4a8 = FUN_146825d77;
    _DAT_14ca0a4b0 = FUN_146825fd6;
    _DAT_14ca0a4b8 = FUN_1407e02ea;
    _DAT_14ca0a4c0 = FUN_146826273;
    _DAT_14ca0a498 = FUN_14723edfe;
    _DAT_14ca0a4d8 = 0xffffffff00000118;
    _DAT_14ca0a4e0 = 8;
    DAT_14ca0a4e4 = 0;
    _DAT_14ca0a4c8 = &LAB_14723ee42;
    FUN_1460c3d8e();
    FUN_1407e00cc(&DAT_14ca0a480);
    return;
  }
  return;
}



// FUNCTION 1460c3d8e FUN_1460c3d8e body=133 status=ok
// SIG undefined FUN_1460c3d8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c3d8e(void)

{
  _DAT_14ca0f4d0 = L"BASE";
  DAT_14ca0f4fa = 4;
  FUN_145ce74da();
  _DAT_14ca0f4e0 = DAT_14ca0a490;
  _DAT_14ca0f4d8 = &DAT_14ca0f2b0;
  _DAT_14ca0f4e8 = &LAB_14682652b;
  DAT_14ca0a490 = &DAT_14ca0f4d0;
  DAT_14ca0a4e5 = DAT_14ca0a4e5 + '\x01';
  _DAT_14ca0f4f0 = 0x100000000;
  if (DAT_14ca0f314 != '\0') {
    DAT_14ca0a4e6 = DAT_14ca0a4e6 + '\x01';
  }
  return;
}



// FUNCTION 1460c3e14 FUN_1460c3e14 body=287 status=ok
// SIG undefined FUN_1460c3e14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c3e14(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0a6b8) {
    FUN_144b3d300(&DAT_14ca0a6b8);
    if (DAT_14ca0a6b8 == -1) {
      FUN_1460c3f34();
      FUN_140db5666(&DAT_14ca0a610,2,&DAT_14ca0a5a8,
                    L"TMobileBasePassPSTLightMapPolicyLQLOCAL_LIGHTS_ENABLEDThinTranslGrey",
                    L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14723ef4a,
                    FUN_14723ef22,FUN_14176f7f8,&LAB_14723ef1e,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0a610 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de835d);
      _Init_thread_footer(&DAT_14ca0a6b8);
    }
  }
  return &DAT_14ca0a610;
}



// FUNCTION 1460c3f34 FUN_1460c3f34 body=205 status=ok
// SIG undefined FUN_1460c3f34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c3f34(void)

{
  if ((DAT_14ca0a60f & 2) == 0) {
    DAT_14ca0a60f = DAT_14ca0a60f | 2;
    _DAT_14ca0a5b0 = L"TMobileBasePassPSTLightMapPolicyLQLOCAL_LIGHTS_ENABLEDThinTranslGrey";
    _DAT_14ca0a5c8 = FUN_146826540;
    _DAT_14ca0a5d0 = FUN_146825d77;
    _DAT_14ca0a5d8 = FUN_146825fd6;
    _DAT_14ca0a5e0 = FUN_1407e02ea;
    _DAT_14ca0a5e8 = FUN_146826273;
    _DAT_14ca0a5c0 = FUN_14723eed6;
    _DAT_14ca0a600 = 0xffffffff00000118;
    _DAT_14ca0a608 = 8;
    DAT_14ca0a60c = 0;
    _DAT_14ca0a5f0 = &LAB_14723ef1a;
    FUN_1460c4002();
    FUN_1407e00cc(&DAT_14ca0a5a8);
    return;
  }
  return;
}



// FUNCTION 1460c4002 FUN_1460c4002 body=133 status=ok
// SIG undefined FUN_1460c4002(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c4002(void)

{
  _DAT_14ca0f500 = L"BASE";
  DAT_14ca0f52a = 4;
  FUN_145ce74da();
  _DAT_14ca0f510 = DAT_14ca0a5b8;
  _DAT_14ca0f508 = &DAT_14ca0f2b0;
  _DAT_14ca0f518 = &LAB_14682652b;
  DAT_14ca0a5b8 = &DAT_14ca0f500;
  DAT_14ca0a60d = DAT_14ca0a60d + '\x01';
  _DAT_14ca0f520 = 0x100000000;
  if (DAT_14ca0f314 != '\0') {
    DAT_14ca0a60e = DAT_14ca0a60e + '\x01';
  }
  return;
}



// FUNCTION 1460c4088 FUN_1460c4088 body=287 status=ok
// SIG undefined FUN_1460c4088(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c4088(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0a7e0) {
    FUN_144b3d300(&DAT_14ca0a7e0);
    if (DAT_14ca0a7e0 == -1) {
      FUN_1460c41a8();
      FUN_140db5666(&DAT_14ca0a738,2,&DAT_14ca0a6d0,
                    L"TMobileBasePassPSTLightMapPolicyLQLOCAL_LIGHTS_BUFFER",
                    L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14723f022,
                    FUN_14723effa,FUN_14176f8aa,&LAB_14723eff6,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0a738 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de8369);
      _Init_thread_footer(&DAT_14ca0a7e0);
    }
  }
  return &DAT_14ca0a738;
}



// FUNCTION 1460c41a8 FUN_1460c41a8 body=205 status=ok
// SIG undefined FUN_1460c41a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c41a8(void)

{
  if ((DAT_14ca0a737 & 2) == 0) {
    DAT_14ca0a737 = DAT_14ca0a737 | 2;
    _DAT_14ca0a6d8 = L"TMobileBasePassPSTLightMapPolicyLQLOCAL_LIGHTS_BUFFER";
    _DAT_14ca0a6f0 = FUN_146826540;
    _DAT_14ca0a6f8 = FUN_146825d77;
    _DAT_14ca0a700 = FUN_146825fd6;
    _DAT_14ca0a708 = FUN_1407e02ea;
    _DAT_14ca0a710 = FUN_146826273;
    _DAT_14ca0a6e8 = FUN_14723efae;
    _DAT_14ca0a728 = 0xffffffff00000118;
    _DAT_14ca0a730 = 8;
    DAT_14ca0a734 = 0;
    _DAT_14ca0a718 = &LAB_14723eff2;
    FUN_1460c4276();
    FUN_1407e00cc(&DAT_14ca0a6d0);
    return;
  }
  return;
}



// FUNCTION 1460c4276 FUN_1460c4276 body=133 status=ok
// SIG undefined FUN_1460c4276(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c4276(void)

{
  _DAT_14ca0f530 = L"BASE";
  DAT_14ca0f55a = 4;
  FUN_145ce74da();
  _DAT_14ca0f540 = DAT_14ca0a6e0;
  _DAT_14ca0f538 = &DAT_14ca0f2b0;
  _DAT_14ca0f548 = &LAB_14682652b;
  DAT_14ca0a6e0 = &DAT_14ca0f530;
  DAT_14ca0a735 = DAT_14ca0a735 + '\x01';
  _DAT_14ca0f550 = 0x100000000;
  if (DAT_14ca0f314 != '\0') {
    DAT_14ca0a736 = DAT_14ca0a736 + '\x01';
  }
  return;
}



// FUNCTION 1460c42fc FUN_1460c42fc body=287 status=ok
// SIG undefined FUN_1460c42fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c42fc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0a908) {
    FUN_144b3d300(&DAT_14ca0a908);
    if (DAT_14ca0a908 == -1) {
      FUN_1460c441c();
      FUN_140db5666(&DAT_14ca0a860,2,&DAT_14ca0a7f8,
                    L"TMobileBasePassPSTLightMapPolicyLQLOCAL_LIGHTS_BUFFERThinTranslGrey",
                    L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14723f0fa,
                    FUN_14723f0d2,FUN_14176f92e,&LAB_14723f0ce,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0a860 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de8375);
      _Init_thread_footer(&DAT_14ca0a908);
    }
  }
  return &DAT_14ca0a860;
}



// FUNCTION 1460c441c FUN_1460c441c body=205 status=ok
// SIG undefined FUN_1460c441c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c441c(void)

{
  if ((DAT_14ca0a85f & 2) == 0) {
    DAT_14ca0a85f = DAT_14ca0a85f | 2;
    _DAT_14ca0a800 = L"TMobileBasePassPSTLightMapPolicyLQLOCAL_LIGHTS_BUFFERThinTranslGrey";
    _DAT_14ca0a818 = FUN_146826540;
    _DAT_14ca0a820 = FUN_146825d77;
    _DAT_14ca0a828 = FUN_146825fd6;
    _DAT_14ca0a830 = FUN_1407e02ea;
    _DAT_14ca0a838 = FUN_146826273;
    _DAT_14ca0a810 = FUN_14723f086;
    _DAT_14ca0a850 = 0xffffffff00000118;
    _DAT_14ca0a858 = 8;
    DAT_14ca0a85c = 0;
    _DAT_14ca0a840 = &LAB_14723f0ca;
    FUN_1460c44ea();
    FUN_1407e00cc(&DAT_14ca0a7f8);
    return;
  }
  return;
}



// FUNCTION 1460c44ea FUN_1460c44ea body=133 status=ok
// SIG undefined FUN_1460c44ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c44ea(void)

{
  _DAT_14ca0f560 = L"BASE";
  DAT_14ca0f58a = 4;
  FUN_145ce74da();
  _DAT_14ca0f570 = DAT_14ca0a808;
  _DAT_14ca0f568 = &DAT_14ca0f2b0;
  _DAT_14ca0f578 = &LAB_14682652b;
  DAT_14ca0a808 = &DAT_14ca0f560;
  DAT_14ca0a85d = DAT_14ca0a85d + '\x01';
  _DAT_14ca0f580 = 0x100000000;
  if (DAT_14ca0f314 != '\0') {
    DAT_14ca0a85e = DAT_14ca0a85e + '\x01';
  }
  return;
}



// FUNCTION 1460c4570 FUN_1460c4570 body=287 status=ok
// SIG undefined FUN_1460c4570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c4570(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0ac80) {
    FUN_144b3d300(&DAT_14ca0ac80);
    if (DAT_14ca0ac80 == -1) {
      FUN_1460c4690();
      FUN_140db5666(&DAT_14ca0abd8,2,&DAT_14ca0ab70,
                    L"TMobileBasePassPSFMobileDistanceFieldShadowsAndLQLightMapPolicyLOCAL_LIGHTS_DISABLEDThinTranslGrey"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14723f36e,
                    FUN_14723f346,FUN_14176fa1a,&LAB_14723f342,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0abd8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de83bf);
      _Init_thread_footer(&DAT_14ca0ac80);
    }
  }
  return &DAT_14ca0abd8;
}



// FUNCTION 1460c4690 FUN_1460c4690 body=205 status=ok
// SIG undefined FUN_1460c4690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c4690(void)

{
  if ((DAT_14ca0abd7 & 2) == 0) {
    DAT_14ca0abd7 = DAT_14ca0abd7 | 2;
    _DAT_14ca0ab78 =
         L"TMobileBasePassPSFMobileDistanceFieldShadowsAndLQLightMapPolicyLOCAL_LIGHTS_DISABLEDThinTranslGrey"
    ;
    _DAT_14ca0ab90 = FUN_146826540;
    _DAT_14ca0ab98 = FUN_146825d77;
    _DAT_14ca0aba0 = FUN_146825fd6;
    _DAT_14ca0aba8 = FUN_1407e02ea;
    _DAT_14ca0abb0 = FUN_146826273;
    _DAT_14ca0ab88 = FUN_14723f2fa;
    _DAT_14ca0abc8 = 0xffffffff00000118;
    _DAT_14ca0abd0 = 8;
    DAT_14ca0abd4 = 0;
    _DAT_14ca0abb8 = &LAB_14723f33e;
    FUN_1460c475e();
    FUN_1407e00cc(&DAT_14ca0ab70);
    return;
  }
  return;
}



// FUNCTION 1460c475e FUN_1460c475e body=133 status=ok
// SIG undefined FUN_1460c475e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c475e(void)

{
  _DAT_14ca0f940 = L"BASE";
  DAT_14ca0f96a = 4;
  FUN_145ce7ba2();
  _DAT_14ca0f950 = DAT_14ca0ab80;
  _DAT_14ca0f948 = &DAT_14ca0f750;
  _DAT_14ca0f958 = &LAB_14682652b;
  DAT_14ca0ab80 = &DAT_14ca0f940;
  DAT_14ca0abd5 = DAT_14ca0abd5 + '\x01';
  _DAT_14ca0f960 = 0x100000000;
  if (DAT_14ca0f7b4 != '\0') {
    DAT_14ca0abd6 = DAT_14ca0abd6 + '\x01';
  }
  return;
}



// FUNCTION 1460c47e4 FUN_1460c47e4 body=287 status=ok
// SIG undefined FUN_1460c47e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c47e4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0ada8) {
    FUN_144b3d300(&DAT_14ca0ada8);
    if (DAT_14ca0ada8 == -1) {
      FUN_1460c4904();
      FUN_140db5666(&DAT_14ca0ad00,2,&DAT_14ca0ac98,
                    L"TMobileBasePassPSFMobileDistanceFieldShadowsAndLQLightMapPolicyLOCAL_LIGHTS_ENABLED"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14723f446,
                    FUN_14723f41e,FUN_14176fa7e,&LAB_14723f41a,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0ad00 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de83cb);
      _Init_thread_footer(&DAT_14ca0ada8);
    }
  }
  return &DAT_14ca0ad00;
}



// FUNCTION 1460c4904 FUN_1460c4904 body=205 status=ok
// SIG undefined FUN_1460c4904(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c4904(void)

{
  if ((DAT_14ca0acff & 2) == 0) {
    DAT_14ca0acff = DAT_14ca0acff | 2;
    _DAT_14ca0aca0 =
         L"TMobileBasePassPSFMobileDistanceFieldShadowsAndLQLightMapPolicyLOCAL_LIGHTS_ENABLED";
    _DAT_14ca0acb8 = FUN_146826540;
    _DAT_14ca0acc0 = FUN_146825d77;
    _DAT_14ca0acc8 = FUN_146825fd6;
    _DAT_14ca0acd0 = FUN_1407e02ea;
    _DAT_14ca0acd8 = FUN_146826273;
    _DAT_14ca0acb0 = FUN_14723f3d2;
    _DAT_14ca0acf0 = 0xffffffff00000118;
    _DAT_14ca0acf8 = 8;
    DAT_14ca0acfc = 0;
    _DAT_14ca0ace0 = &LAB_14723f416;
    FUN_1460c49d2();
    FUN_1407e00cc(&DAT_14ca0ac98);
    return;
  }
  return;
}



// FUNCTION 1460c49d2 FUN_1460c49d2 body=133 status=ok
// SIG undefined FUN_1460c49d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c49d2(void)

{
  _DAT_14ca0f970 = L"BASE";
  DAT_14ca0f99a = 4;
  FUN_145ce7ba2();
  _DAT_14ca0f980 = DAT_14ca0aca8;
  _DAT_14ca0f978 = &DAT_14ca0f750;
  _DAT_14ca0f988 = &LAB_14682652b;
  DAT_14ca0aca8 = &DAT_14ca0f970;
  DAT_14ca0acfd = DAT_14ca0acfd + '\x01';
  _DAT_14ca0f990 = 0x100000000;
  if (DAT_14ca0f7b4 != '\0') {
    DAT_14ca0acfe = DAT_14ca0acfe + '\x01';
  }
  return;
}



// FUNCTION 1460c4a58 FUN_1460c4a58 body=287 status=ok
// SIG undefined FUN_1460c4a58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c4a58(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0aed0) {
    FUN_144b3d300(&DAT_14ca0aed0);
    if (DAT_14ca0aed0 == -1) {
      FUN_1460c4b78();
      FUN_140db5666(&DAT_14ca0ae28,2,&DAT_14ca0adc0,
                    L"TMobileBasePassPSFMobileDistanceFieldShadowsAndLQLightMapPolicyLOCAL_LIGHTS_ENABLEDThinTranslGrey"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14723f51e,
                    FUN_14723f4f6,FUN_14176fb02,&LAB_14723f4f2,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0ae28 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de83d7);
      _Init_thread_footer(&DAT_14ca0aed0);
    }
  }
  return &DAT_14ca0ae28;
}



// FUNCTION 1460c4b78 FUN_1460c4b78 body=205 status=ok
// SIG undefined FUN_1460c4b78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c4b78(void)

{
  if ((DAT_14ca0ae27 & 2) == 0) {
    DAT_14ca0ae27 = DAT_14ca0ae27 | 2;
    _DAT_14ca0adc8 =
         L"TMobileBasePassPSFMobileDistanceFieldShadowsAndLQLightMapPolicyLOCAL_LIGHTS_ENABLEDThinTranslGrey"
    ;
    _DAT_14ca0ade0 = FUN_146826540;
    _DAT_14ca0ade8 = FUN_146825d77;
    _DAT_14ca0adf0 = FUN_146825fd6;
    _DAT_14ca0adf8 = FUN_1407e02ea;
    _DAT_14ca0ae00 = FUN_146826273;
    _DAT_14ca0add8 = FUN_14723f4aa;
    _DAT_14ca0ae18 = 0xffffffff00000118;
    _DAT_14ca0ae20 = 8;
    DAT_14ca0ae24 = 0;
    _DAT_14ca0ae08 = &LAB_14723f4ee;
    FUN_1460c4c46();
    FUN_1407e00cc(&DAT_14ca0adc0);
    return;
  }
  return;
}



// FUNCTION 1460c4c46 FUN_1460c4c46 body=133 status=ok
// SIG undefined FUN_1460c4c46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c4c46(void)

{
  _DAT_14ca0f9a0 = L"BASE";
  DAT_14ca0f9ca = 4;
  FUN_145ce7ba2();
  _DAT_14ca0f9b0 = DAT_14ca0add0;
  _DAT_14ca0f9a8 = &DAT_14ca0f750;
  _DAT_14ca0f9b8 = &LAB_14682652b;
  DAT_14ca0add0 = &DAT_14ca0f9a0;
  DAT_14ca0ae25 = DAT_14ca0ae25 + '\x01';
  _DAT_14ca0f9c0 = 0x100000000;
  if (DAT_14ca0f7b4 != '\0') {
    DAT_14ca0ae26 = DAT_14ca0ae26 + '\x01';
  }
  return;
}



// FUNCTION 1460c4ccc FUN_1460c4ccc body=287 status=ok
// SIG undefined FUN_1460c4ccc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c4ccc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0aff8) {
    FUN_144b3d300(&DAT_14ca0aff8);
    if (DAT_14ca0aff8 == -1) {
      FUN_1460c4dec();
      FUN_140db5666(&DAT_14ca0af50,2,&DAT_14ca0aee8,
                    L"TMobileBasePassPSFMobileDistanceFieldShadowsAndLQLightMapPolicyLOCAL_LIGHTS_BUFFER"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14723f5f6,
                    FUN_14723f5ce,FUN_14176fbb4,&LAB_14723f5ca,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0af50 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de83e3);
      _Init_thread_footer(&DAT_14ca0aff8);
    }
  }
  return &DAT_14ca0af50;
}



// FUNCTION 1460c4dec FUN_1460c4dec body=205 status=ok
// SIG undefined FUN_1460c4dec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c4dec(void)

{
  if ((DAT_14ca0af4f & 2) == 0) {
    DAT_14ca0af4f = DAT_14ca0af4f | 2;
    _DAT_14ca0aef0 =
         L"TMobileBasePassPSFMobileDistanceFieldShadowsAndLQLightMapPolicyLOCAL_LIGHTS_BUFFER";
    _DAT_14ca0af08 = FUN_146826540;
    _DAT_14ca0af10 = FUN_146825d77;
    _DAT_14ca0af18 = FUN_146825fd6;
    _DAT_14ca0af20 = FUN_1407e02ea;
    _DAT_14ca0af28 = FUN_146826273;
    _DAT_14ca0af00 = FUN_14723f582;
    _DAT_14ca0af40 = 0xffffffff00000118;
    _DAT_14ca0af48 = 8;
    DAT_14ca0af4c = 0;
    _DAT_14ca0af30 = &LAB_14723f5c6;
    FUN_1460c4eba();
    FUN_1407e00cc(&DAT_14ca0aee8);
    return;
  }
  return;
}



// FUNCTION 1460c4eba FUN_1460c4eba body=133 status=ok
// SIG undefined FUN_1460c4eba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c4eba(void)

{
  _DAT_14ca0f9d0 = L"BASE";
  DAT_14ca0f9fa = 4;
  FUN_145ce7ba2();
  _DAT_14ca0f9e0 = DAT_14ca0aef8;
  _DAT_14ca0f9d8 = &DAT_14ca0f750;
  _DAT_14ca0f9e8 = &LAB_14682652b;
  DAT_14ca0aef8 = &DAT_14ca0f9d0;
  DAT_14ca0af4d = DAT_14ca0af4d + '\x01';
  _DAT_14ca0f9f0 = 0x100000000;
  if (DAT_14ca0f7b4 != '\0') {
    DAT_14ca0af4e = DAT_14ca0af4e + '\x01';
  }
  return;
}



// FUNCTION 1460c4f40 FUN_1460c4f40 body=287 status=ok
// SIG undefined FUN_1460c4f40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c4f40(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0b120) {
    FUN_144b3d300(&DAT_14ca0b120);
    if (DAT_14ca0b120 == -1) {
      FUN_1460c5060();
      FUN_140db5666(&DAT_14ca0b078,2,&DAT_14ca0b010,
                    L"TMobileBasePassPSFMobileDistanceFieldShadowsAndLQLightMapPolicyLOCAL_LIGHTS_BUFFERThinTranslGrey"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14723f6ce,
                    FUN_14723f6a6,FUN_14176fc38,&LAB_14723f6a2,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0b078 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de83ef);
      _Init_thread_footer(&DAT_14ca0b120);
    }
  }
  return &DAT_14ca0b078;
}



// FUNCTION 1460c5060 FUN_1460c5060 body=205 status=ok
// SIG undefined FUN_1460c5060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c5060(void)

{
  if ((DAT_14ca0b077 & 2) == 0) {
    DAT_14ca0b077 = DAT_14ca0b077 | 2;
    _DAT_14ca0b018 =
         L"TMobileBasePassPSFMobileDistanceFieldShadowsAndLQLightMapPolicyLOCAL_LIGHTS_BUFFERThinTranslGrey"
    ;
    _DAT_14ca0b030 = FUN_146826540;
    _DAT_14ca0b038 = FUN_146825d77;
    _DAT_14ca0b040 = FUN_146825fd6;
    _DAT_14ca0b048 = FUN_1407e02ea;
    _DAT_14ca0b050 = FUN_146826273;
    _DAT_14ca0b028 = FUN_14723f65a;
    _DAT_14ca0b068 = 0xffffffff00000118;
    _DAT_14ca0b070 = 8;
    DAT_14ca0b074 = 0;
    _DAT_14ca0b058 = &LAB_14723f69e;
    FUN_1460c512e();
    FUN_1407e00cc(&DAT_14ca0b010);
    return;
  }
  return;
}



// FUNCTION 1460c512e FUN_1460c512e body=133 status=ok
// SIG undefined FUN_1460c512e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c512e(void)

{
  _DAT_14ca0fa00 = L"BASE";
  DAT_14ca0fa2a = 4;
  FUN_145ce7ba2();
  _DAT_14ca0fa10 = DAT_14ca0b020;
  _DAT_14ca0fa08 = &DAT_14ca0f750;
  _DAT_14ca0fa18 = &LAB_14682652b;
  DAT_14ca0b020 = &DAT_14ca0fa00;
  DAT_14ca0b075 = DAT_14ca0b075 + '\x01';
  _DAT_14ca0fa20 = 0x100000000;
  if (DAT_14ca0f7b4 != '\0') {
    DAT_14ca0b076 = DAT_14ca0b076 + '\x01';
  }
  return;
}



// FUNCTION 1460c51b4 FUN_1460c51b4 body=287 status=ok
// SIG undefined FUN_1460c51b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c51b4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0b498) {
    FUN_144b3d300(&DAT_14ca0b498);
    if (DAT_14ca0b498 == -1) {
      FUN_1460c52d4();
      FUN_140db5666(&DAT_14ca0b3f0,2,&DAT_14ca0b388,
                    L"TMobileBasePassPSFMobileDistanceFieldShadowsLightMapAndCSMLightingPolicyLOCAL_LIGHTS_DISABLEDThinTranslGrey"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14723f942,
                    FUN_14723f91a,FUN_14176fd24,&LAB_14723f916,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0b3f0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de8439);
      _Init_thread_footer(&DAT_14ca0b498);
    }
  }
  return &DAT_14ca0b3f0;
}



// FUNCTION 1460c52d4 FUN_1460c52d4 body=205 status=ok
// SIG undefined FUN_1460c52d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c52d4(void)

{
  if ((DAT_14ca0b3ef & 2) == 0) {
    DAT_14ca0b3ef = DAT_14ca0b3ef | 2;
    _DAT_14ca0b390 =
         L"TMobileBasePassPSFMobileDistanceFieldShadowsLightMapAndCSMLightingPolicyLOCAL_LIGHTS_DISABLEDThinTranslGrey"
    ;
    _DAT_14ca0b3a8 = FUN_146826540;
    _DAT_14ca0b3b0 = FUN_146825d77;
    _DAT_14ca0b3b8 = FUN_146825fd6;
    _DAT_14ca0b3c0 = FUN_1407e02ea;
    _DAT_14ca0b3c8 = FUN_146826273;
    _DAT_14ca0b3a0 = FUN_14723f8ce;
    _DAT_14ca0b3e0 = 0xffffffff00000118;
    _DAT_14ca0b3e8 = 8;
    DAT_14ca0b3ec = 0;
    _DAT_14ca0b3d0 = &LAB_14723f912;
    FUN_1460c53a2();
    FUN_1407e00cc(&DAT_14ca0b388);
    return;
  }
  return;
}



// FUNCTION 1460c53a2 FUN_1460c53a2 body=133 status=ok
// SIG undefined FUN_1460c53a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c53a2(void)

{
  _DAT_14ca0fde0 = L"BASE";
  DAT_14ca0fe0a = 4;
  FUN_145ce826a();
  _DAT_14ca0fdf0 = DAT_14ca0b398;
  _DAT_14ca0fde8 = &DAT_14ca0fbf0;
  _DAT_14ca0fdf8 = &LAB_14682652b;
  DAT_14ca0b398 = &DAT_14ca0fde0;
  DAT_14ca0b3ed = DAT_14ca0b3ed + '\x01';
  _DAT_14ca0fe00 = 0x100000000;
  if (DAT_14ca0fc54 != '\0') {
    DAT_14ca0b3ee = DAT_14ca0b3ee + '\x01';
  }
  return;
}



// FUNCTION 1460c5428 FUN_1460c5428 body=287 status=ok
// SIG undefined FUN_1460c5428(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c5428(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0b5c0) {
    FUN_144b3d300(&DAT_14ca0b5c0);
    if (DAT_14ca0b5c0 == -1) {
      FUN_1460c5548();
      FUN_140db5666(&DAT_14ca0b518,2,&DAT_14ca0b4b0,
                    L"TMobileBasePassPSFMobileDistanceFieldShadowsLightMapAndCSMLightingPolicyLOCAL_LIGHTS_ENABLED"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14723fa1a,
                    FUN_14723f9f2,FUN_14176fd88,&LAB_14723f9ee,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0b518 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de8445);
      _Init_thread_footer(&DAT_14ca0b5c0);
    }
  }
  return &DAT_14ca0b518;
}



// FUNCTION 1460c5548 FUN_1460c5548 body=205 status=ok
// SIG undefined FUN_1460c5548(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c5548(void)

{
  if ((DAT_14ca0b517 & 2) == 0) {
    DAT_14ca0b517 = DAT_14ca0b517 | 2;
    _DAT_14ca0b4b8 =
         L"TMobileBasePassPSFMobileDistanceFieldShadowsLightMapAndCSMLightingPolicyLOCAL_LIGHTS_ENABLED"
    ;
    _DAT_14ca0b4d0 = FUN_146826540;
    _DAT_14ca0b4d8 = FUN_146825d77;
    _DAT_14ca0b4e0 = FUN_146825fd6;
    _DAT_14ca0b4e8 = FUN_1407e02ea;
    _DAT_14ca0b4f0 = FUN_146826273;
    _DAT_14ca0b4c8 = FUN_14723f9a6;
    _DAT_14ca0b508 = 0xffffffff00000118;
    _DAT_14ca0b510 = 8;
    DAT_14ca0b514 = 0;
    _DAT_14ca0b4f8 = &LAB_14723f9ea;
    FUN_1460c5616();
    FUN_1407e00cc(&DAT_14ca0b4b0);
    return;
  }
  return;
}



// FUNCTION 1460c5616 FUN_1460c5616 body=133 status=ok
// SIG undefined FUN_1460c5616(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c5616(void)

{
  _DAT_14ca0fe10 = L"BASE";
  DAT_14ca0fe3a = 4;
  FUN_145ce826a();
  _DAT_14ca0fe20 = DAT_14ca0b4c0;
  _DAT_14ca0fe18 = &DAT_14ca0fbf0;
  _DAT_14ca0fe28 = &LAB_14682652b;
  DAT_14ca0b4c0 = &DAT_14ca0fe10;
  DAT_14ca0b515 = DAT_14ca0b515 + '\x01';
  _DAT_14ca0fe30 = 0x100000000;
  if (DAT_14ca0fc54 != '\0') {
    DAT_14ca0b516 = DAT_14ca0b516 + '\x01';
  }
  return;
}



// FUNCTION 1460c569c FUN_1460c569c body=287 status=ok
// SIG undefined FUN_1460c569c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c569c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0b6e8) {
    FUN_144b3d300(&DAT_14ca0b6e8);
    if (DAT_14ca0b6e8 == -1) {
      FUN_1460c57bc();
      FUN_140db5666(&DAT_14ca0b640,2,&DAT_14ca0b5d8,
                    L"TMobileBasePassPSFMobileDistanceFieldShadowsLightMapAndCSMLightingPolicyLOCAL_LIGHTS_ENABLEDThinTranslGrey"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14723faf2,
                    FUN_14723faca,FUN_14176fe0c,&LAB_14723fac6,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0b640 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de8451);
      _Init_thread_footer(&DAT_14ca0b6e8);
    }
  }
  return &DAT_14ca0b640;
}



// FUNCTION 1460c57bc FUN_1460c57bc body=205 status=ok
// SIG undefined FUN_1460c57bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c57bc(void)

{
  if ((DAT_14ca0b63f & 2) == 0) {
    DAT_14ca0b63f = DAT_14ca0b63f | 2;
    _DAT_14ca0b5e0 =
         L"TMobileBasePassPSFMobileDistanceFieldShadowsLightMapAndCSMLightingPolicyLOCAL_LIGHTS_ENABLEDThinTranslGrey"
    ;
    _DAT_14ca0b5f8 = FUN_146826540;
    _DAT_14ca0b600 = FUN_146825d77;
    _DAT_14ca0b608 = FUN_146825fd6;
    _DAT_14ca0b610 = FUN_1407e02ea;
    _DAT_14ca0b618 = FUN_146826273;
    _DAT_14ca0b5f0 = FUN_14723fa7e;
    _DAT_14ca0b630 = 0xffffffff00000118;
    _DAT_14ca0b638 = 8;
    DAT_14ca0b63c = 0;
    _DAT_14ca0b620 = &LAB_14723fac2;
    FUN_1460c588a();
    FUN_1407e00cc(&DAT_14ca0b5d8);
    return;
  }
  return;
}



// FUNCTION 1460c588a FUN_1460c588a body=133 status=ok
// SIG undefined FUN_1460c588a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c588a(void)

{
  _DAT_14ca0fe40 = L"BASE";
  DAT_14ca0fe6a = 4;
  FUN_145ce826a();
  _DAT_14ca0fe50 = DAT_14ca0b5e8;
  _DAT_14ca0fe48 = &DAT_14ca0fbf0;
  _DAT_14ca0fe58 = &LAB_14682652b;
  DAT_14ca0b5e8 = &DAT_14ca0fe40;
  DAT_14ca0b63d = DAT_14ca0b63d + '\x01';
  _DAT_14ca0fe60 = 0x100000000;
  if (DAT_14ca0fc54 != '\0') {
    DAT_14ca0b63e = DAT_14ca0b63e + '\x01';
  }
  return;
}



// FUNCTION 1460c5910 FUN_1460c5910 body=287 status=ok
// SIG undefined FUN_1460c5910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c5910(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0b810) {
    FUN_144b3d300(&DAT_14ca0b810);
    if (DAT_14ca0b810 == -1) {
      FUN_1460c5a30();
      FUN_140db5666(&DAT_14ca0b768,2,&DAT_14ca0b700,
                    L"TMobileBasePassPSFMobileDistanceFieldShadowsLightMapAndCSMLightingPolicyLOCAL_LIGHTS_BUFFER"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14723fbca,
                    FUN_14723fba2,FUN_14176febe,&LAB_14723fb9e,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0b768 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de845d);
      _Init_thread_footer(&DAT_14ca0b810);
    }
  }
  return &DAT_14ca0b768;
}



// FUNCTION 1460c5a30 FUN_1460c5a30 body=205 status=ok
// SIG undefined FUN_1460c5a30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c5a30(void)

{
  if ((DAT_14ca0b767 & 2) == 0) {
    DAT_14ca0b767 = DAT_14ca0b767 | 2;
    _DAT_14ca0b708 =
         L"TMobileBasePassPSFMobileDistanceFieldShadowsLightMapAndCSMLightingPolicyLOCAL_LIGHTS_BUFFER"
    ;
    _DAT_14ca0b720 = FUN_146826540;
    _DAT_14ca0b728 = FUN_146825d77;
    _DAT_14ca0b730 = FUN_146825fd6;
    _DAT_14ca0b738 = FUN_1407e02ea;
    _DAT_14ca0b740 = FUN_146826273;
    _DAT_14ca0b718 = FUN_14723fb56;
    _DAT_14ca0b758 = 0xffffffff00000118;
    _DAT_14ca0b760 = 8;
    DAT_14ca0b764 = 0;
    _DAT_14ca0b748 = &LAB_14723fb9a;
    FUN_1460c5afe();
    FUN_1407e00cc(&DAT_14ca0b700);
    return;
  }
  return;
}



// FUNCTION 1460c5afe FUN_1460c5afe body=133 status=ok
// SIG undefined FUN_1460c5afe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c5afe(void)

{
  _DAT_14ca0fe70 = L"BASE";
  DAT_14ca0fe9a = 4;
  FUN_145ce826a();
  _DAT_14ca0fe80 = DAT_14ca0b710;
  _DAT_14ca0fe78 = &DAT_14ca0fbf0;
  _DAT_14ca0fe88 = &LAB_14682652b;
  DAT_14ca0b710 = &DAT_14ca0fe70;
  DAT_14ca0b765 = DAT_14ca0b765 + '\x01';
  _DAT_14ca0fe90 = 0x100000000;
  if (DAT_14ca0fc54 != '\0') {
    DAT_14ca0b766 = DAT_14ca0b766 + '\x01';
  }
  return;
}



// FUNCTION 1460c5b84 FUN_1460c5b84 body=287 status=ok
// SIG undefined FUN_1460c5b84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c5b84(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0b938) {
    FUN_144b3d300(&DAT_14ca0b938);
    if (DAT_14ca0b938 == -1) {
      FUN_1460c5ca4();
      FUN_140db5666(&DAT_14ca0b890,2,&DAT_14ca0b828,
                    L"TMobileBasePassPSFMobileDistanceFieldShadowsLightMapAndCSMLightingPolicyLOCAL_LIGHTS_BUFFERThinTranslGrey"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14723fca2,
                    FUN_14723fc7a,FUN_14176ff42,&LAB_14723fc76,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0b890 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de8469);
      _Init_thread_footer(&DAT_14ca0b938);
    }
  }
  return &DAT_14ca0b890;
}



// FUNCTION 1460c5ca4 FUN_1460c5ca4 body=205 status=ok
// SIG undefined FUN_1460c5ca4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c5ca4(void)

{
  if ((DAT_14ca0b88f & 2) == 0) {
    DAT_14ca0b88f = DAT_14ca0b88f | 2;
    _DAT_14ca0b830 =
         L"TMobileBasePassPSFMobileDistanceFieldShadowsLightMapAndCSMLightingPolicyLOCAL_LIGHTS_BUFFERThinTranslGrey"
    ;
    _DAT_14ca0b848 = FUN_146826540;
    _DAT_14ca0b850 = FUN_146825d77;
    _DAT_14ca0b858 = FUN_146825fd6;
    _DAT_14ca0b860 = FUN_1407e02ea;
    _DAT_14ca0b868 = FUN_146826273;
    _DAT_14ca0b840 = FUN_14723fc2e;
    _DAT_14ca0b880 = 0xffffffff00000118;
    _DAT_14ca0b888 = 8;
    DAT_14ca0b88c = 0;
    _DAT_14ca0b870 = &LAB_14723fc72;
    FUN_1460c5d72();
    FUN_1407e00cc(&DAT_14ca0b828);
    return;
  }
  return;
}



// FUNCTION 1460c5d72 FUN_1460c5d72 body=133 status=ok
// SIG undefined FUN_1460c5d72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c5d72(void)

{
  _DAT_14ca0fea0 = L"BASE";
  DAT_14ca0feca = 4;
  FUN_145ce826a();
  _DAT_14ca0feb0 = DAT_14ca0b838;
  _DAT_14ca0fea8 = &DAT_14ca0fbf0;
  _DAT_14ca0feb8 = &LAB_14682652b;
  DAT_14ca0b838 = &DAT_14ca0fea0;
  DAT_14ca0b88d = DAT_14ca0b88d + '\x01';
  _DAT_14ca0fec0 = 0x100000000;
  if (DAT_14ca0fc54 != '\0') {
    DAT_14ca0b88e = DAT_14ca0b88e + '\x01';
  }
  return;
}



// FUNCTION 1460c5df8 FUN_1460c5df8 body=287 status=ok
// SIG undefined FUN_1460c5df8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c5df8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0bcb0) {
    FUN_144b3d300(&DAT_14ca0bcb0);
    if (DAT_14ca0bcb0 == -1) {
      FUN_1460c5f18();
      FUN_140db5666(&DAT_14ca0bc08,2,&DAT_14ca0bba0,
                    L"TMobileBasePassPSFMobileDirectionalLightCSMAndLightMapPolicyLOCAL_LIGHTS_DISABLEDThinTranslGrey"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14723ff16,
                    FUN_14723feee,FUN_14177002e,&LAB_14723feea,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0bc08 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de84b3);
      _Init_thread_footer(&DAT_14ca0bcb0);
    }
  }
  return &DAT_14ca0bc08;
}



// FUNCTION 1460c5f18 FUN_1460c5f18 body=205 status=ok
// SIG undefined FUN_1460c5f18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c5f18(void)

{
  if ((DAT_14ca0bc07 & 2) == 0) {
    DAT_14ca0bc07 = DAT_14ca0bc07 | 2;
    _DAT_14ca0bba8 =
         L"TMobileBasePassPSFMobileDirectionalLightCSMAndLightMapPolicyLOCAL_LIGHTS_DISABLEDThinTranslGrey"
    ;
    _DAT_14ca0bbc0 = FUN_146826540;
    _DAT_14ca0bbc8 = FUN_146825d77;
    _DAT_14ca0bbd0 = FUN_146825fd6;
    _DAT_14ca0bbd8 = FUN_1407e02ea;
    _DAT_14ca0bbe0 = FUN_146826273;
    _DAT_14ca0bbb8 = FUN_14723fea2;
    _DAT_14ca0bbf8 = 0xffffffff00000118;
    _DAT_14ca0bc00 = 8;
    DAT_14ca0bc04 = 0;
    _DAT_14ca0bbe8 = &LAB_14723fee6;
    FUN_1460c5fe6();
    FUN_1407e00cc(&DAT_14ca0bba0);
    return;
  }
  return;
}



// FUNCTION 1460c5fe6 FUN_1460c5fe6 body=133 status=ok
// SIG undefined FUN_1460c5fe6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c5fe6(void)

{
  _DAT_14ca10280 = L"BASE";
  DAT_14ca102aa = 4;
  FUN_145ce8932();
  _DAT_14ca10290 = DAT_14ca0bbb0;
  _DAT_14ca10288 = &DAT_14ca10090;
  _DAT_14ca10298 = &LAB_14682652b;
  DAT_14ca0bbb0 = &DAT_14ca10280;
  DAT_14ca0bc05 = DAT_14ca0bc05 + '\x01';
  _DAT_14ca102a0 = 0x100000000;
  if (DAT_14ca100f4 != '\0') {
    DAT_14ca0bc06 = DAT_14ca0bc06 + '\x01';
  }
  return;
}



// FUNCTION 1460c606c FUN_1460c606c body=287 status=ok
// SIG undefined FUN_1460c606c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c606c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0bdd8) {
    FUN_144b3d300(&DAT_14ca0bdd8);
    if (DAT_14ca0bdd8 == -1) {
      FUN_1460c618c();
      FUN_140db5666(&DAT_14ca0bd30,2,&DAT_14ca0bcc8,
                    L"TMobileBasePassPSFMobileDirectionalLightCSMAndLightMapPolicyLOCAL_LIGHTS_ENABLED"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14723ffee,
                    FUN_14723ffc6,FUN_141770092,&LAB_14723ffc2,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0bd30 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de84bf);
      _Init_thread_footer(&DAT_14ca0bdd8);
    }
  }
  return &DAT_14ca0bd30;
}



// FUNCTION 1460c618c FUN_1460c618c body=205 status=ok
// SIG undefined FUN_1460c618c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c618c(void)

{
  if ((DAT_14ca0bd2f & 2) == 0) {
    DAT_14ca0bd2f = DAT_14ca0bd2f | 2;
    _DAT_14ca0bcd0 =
         L"TMobileBasePassPSFMobileDirectionalLightCSMAndLightMapPolicyLOCAL_LIGHTS_ENABLED";
    _DAT_14ca0bce8 = FUN_146826540;
    _DAT_14ca0bcf0 = FUN_146825d77;
    _DAT_14ca0bcf8 = FUN_146825fd6;
    _DAT_14ca0bd00 = FUN_1407e02ea;
    _DAT_14ca0bd08 = FUN_146826273;
    _DAT_14ca0bce0 = FUN_14723ff7a;
    _DAT_14ca0bd20 = 0xffffffff00000118;
    _DAT_14ca0bd28 = 8;
    DAT_14ca0bd2c = 0;
    _DAT_14ca0bd10 = &LAB_14723ffbe;
    FUN_1460c625a();
    FUN_1407e00cc(&DAT_14ca0bcc8);
    return;
  }
  return;
}



// FUNCTION 1460c625a FUN_1460c625a body=133 status=ok
// SIG undefined FUN_1460c625a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c625a(void)

{
  _DAT_14ca102b0 = L"BASE";
  DAT_14ca102da = 4;
  FUN_145ce8932();
  _DAT_14ca102c0 = DAT_14ca0bcd8;
  _DAT_14ca102b8 = &DAT_14ca10090;
  _DAT_14ca102c8 = &LAB_14682652b;
  DAT_14ca0bcd8 = &DAT_14ca102b0;
  DAT_14ca0bd2d = DAT_14ca0bd2d + '\x01';
  _DAT_14ca102d0 = 0x100000000;
  if (DAT_14ca100f4 != '\0') {
    DAT_14ca0bd2e = DAT_14ca0bd2e + '\x01';
  }
  return;
}



// FUNCTION 1460c62e0 FUN_1460c62e0 body=287 status=ok
// SIG undefined FUN_1460c62e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c62e0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0bf00) {
    FUN_144b3d300(&DAT_14ca0bf00);
    if (DAT_14ca0bf00 == -1) {
      FUN_1460c6400();
      FUN_140db5666(&DAT_14ca0be58,2,&DAT_14ca0bdf0,
                    L"TMobileBasePassPSFMobileDirectionalLightCSMAndLightMapPolicyLOCAL_LIGHTS_ENABLEDThinTranslGrey"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_1472400c6,
                    FUN_14724009e,FUN_141770116,&LAB_14724009a,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0be58 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de84cb);
      _Init_thread_footer(&DAT_14ca0bf00);
    }
  }
  return &DAT_14ca0be58;
}



// FUNCTION 1460c6400 FUN_1460c6400 body=205 status=ok
// SIG undefined FUN_1460c6400(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c6400(void)

{
  if ((DAT_14ca0be57 & 2) == 0) {
    DAT_14ca0be57 = DAT_14ca0be57 | 2;
    _DAT_14ca0bdf8 =
         L"TMobileBasePassPSFMobileDirectionalLightCSMAndLightMapPolicyLOCAL_LIGHTS_ENABLEDThinTranslGrey"
    ;
    _DAT_14ca0be10 = FUN_146826540;
    _DAT_14ca0be18 = FUN_146825d77;
    _DAT_14ca0be20 = FUN_146825fd6;
    _DAT_14ca0be28 = FUN_1407e02ea;
    _DAT_14ca0be30 = FUN_146826273;
    _DAT_14ca0be08 = FUN_147240052;
    _DAT_14ca0be48 = 0xffffffff00000118;
    _DAT_14ca0be50 = 8;
    DAT_14ca0be54 = 0;
    _DAT_14ca0be38 = &LAB_147240096;
    FUN_1460c64ce();
    FUN_1407e00cc(&DAT_14ca0bdf0);
    return;
  }
  return;
}



// FUNCTION 1460c64ce FUN_1460c64ce body=133 status=ok
// SIG undefined FUN_1460c64ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c64ce(void)

{
  _DAT_14ca102e0 = L"BASE";
  DAT_14ca1030a = 4;
  FUN_145ce8932();
  _DAT_14ca102f0 = DAT_14ca0be00;
  _DAT_14ca102e8 = &DAT_14ca10090;
  _DAT_14ca102f8 = &LAB_14682652b;
  DAT_14ca0be00 = &DAT_14ca102e0;
  DAT_14ca0be55 = DAT_14ca0be55 + '\x01';
  _DAT_14ca10300 = 0x100000000;
  if (DAT_14ca100f4 != '\0') {
    DAT_14ca0be56 = DAT_14ca0be56 + '\x01';
  }
  return;
}



// FUNCTION 1460c6554 FUN_1460c6554 body=287 status=ok
// SIG undefined FUN_1460c6554(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c6554(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0c028) {
    FUN_144b3d300(&DAT_14ca0c028);
    if (DAT_14ca0c028 == -1) {
      FUN_1460c6674();
      FUN_140db5666(&DAT_14ca0bf80,2,&DAT_14ca0bf18,
                    L"TMobileBasePassPSFMobileDirectionalLightCSMAndLightMapPolicyLOCAL_LIGHTS_BUFFER"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14724019e,
                    FUN_147240176,FUN_1417701c8,&LAB_147240172,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0bf80 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de84d7);
      _Init_thread_footer(&DAT_14ca0c028);
    }
  }
  return &DAT_14ca0bf80;
}



// FUNCTION 1460c6674 FUN_1460c6674 body=205 status=ok
// SIG undefined FUN_1460c6674(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c6674(void)

{
  if ((DAT_14ca0bf7f & 2) == 0) {
    DAT_14ca0bf7f = DAT_14ca0bf7f | 2;
    _DAT_14ca0bf20 =
         L"TMobileBasePassPSFMobileDirectionalLightCSMAndLightMapPolicyLOCAL_LIGHTS_BUFFER";
    _DAT_14ca0bf38 = FUN_146826540;
    _DAT_14ca0bf40 = FUN_146825d77;
    _DAT_14ca0bf48 = FUN_146825fd6;
    _DAT_14ca0bf50 = FUN_1407e02ea;
    _DAT_14ca0bf58 = FUN_146826273;
    _DAT_14ca0bf30 = FUN_14724012a;
    _DAT_14ca0bf70 = 0xffffffff00000118;
    _DAT_14ca0bf78 = 8;
    DAT_14ca0bf7c = 0;
    _DAT_14ca0bf60 = &LAB_14724016e;
    FUN_1460c6742();
    FUN_1407e00cc(&DAT_14ca0bf18);
    return;
  }
  return;
}



// FUNCTION 1460c6742 FUN_1460c6742 body=133 status=ok
// SIG undefined FUN_1460c6742(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c6742(void)

{
  _DAT_14ca10310 = L"BASE";
  DAT_14ca1033a = 4;
  FUN_145ce8932();
  _DAT_14ca10320 = DAT_14ca0bf28;
  _DAT_14ca10318 = &DAT_14ca10090;
  _DAT_14ca10328 = &LAB_14682652b;
  DAT_14ca0bf28 = &DAT_14ca10310;
  DAT_14ca0bf7d = DAT_14ca0bf7d + '\x01';
  _DAT_14ca10330 = 0x100000000;
  if (DAT_14ca100f4 != '\0') {
    DAT_14ca0bf7e = DAT_14ca0bf7e + '\x01';
  }
  return;
}



// FUNCTION 1460c67c8 FUN_1460c67c8 body=287 status=ok
// SIG undefined FUN_1460c67c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c67c8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0c150) {
    FUN_144b3d300(&DAT_14ca0c150);
    if (DAT_14ca0c150 == -1) {
      FUN_1460c68e8();
      FUN_140db5666(&DAT_14ca0c0a8,2,&DAT_14ca0c040,
                    L"TMobileBasePassPSFMobileDirectionalLightCSMAndLightMapPolicyLOCAL_LIGHTS_BUFFERThinTranslGrey"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_147240276,
                    FUN_14724024e,FUN_14177024c,&LAB_14724024a,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0c0a8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de84e3);
      _Init_thread_footer(&DAT_14ca0c150);
    }
  }
  return &DAT_14ca0c0a8;
}



// FUNCTION 1460c68e8 FUN_1460c68e8 body=205 status=ok
// SIG undefined FUN_1460c68e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c68e8(void)

{
  if ((DAT_14ca0c0a7 & 2) == 0) {
    DAT_14ca0c0a7 = DAT_14ca0c0a7 | 2;
    _DAT_14ca0c048 =
         L"TMobileBasePassPSFMobileDirectionalLightCSMAndLightMapPolicyLOCAL_LIGHTS_BUFFERThinTranslGrey"
    ;
    _DAT_14ca0c060 = FUN_146826540;
    _DAT_14ca0c068 = FUN_146825d77;
    _DAT_14ca0c070 = FUN_146825fd6;
    _DAT_14ca0c078 = FUN_1407e02ea;
    _DAT_14ca0c080 = FUN_146826273;
    _DAT_14ca0c058 = FUN_147240202;
    _DAT_14ca0c098 = 0xffffffff00000118;
    _DAT_14ca0c0a0 = 8;
    DAT_14ca0c0a4 = 0;
    _DAT_14ca0c088 = &LAB_147240246;
    FUN_1460c69b6();
    FUN_1407e00cc(&DAT_14ca0c040);
    return;
  }
  return;
}



// FUNCTION 1460c69b6 FUN_1460c69b6 body=133 status=ok
// SIG undefined FUN_1460c69b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c69b6(void)

{
  _DAT_14ca10340 = L"BASE";
  DAT_14ca1036a = 4;
  FUN_145ce8932();
  _DAT_14ca10350 = DAT_14ca0c050;
  _DAT_14ca10348 = &DAT_14ca10090;
  _DAT_14ca10358 = &LAB_14682652b;
  DAT_14ca0c050 = &DAT_14ca10340;
  DAT_14ca0c0a5 = DAT_14ca0c0a5 + '\x01';
  _DAT_14ca10360 = 0x100000000;
  if (DAT_14ca100f4 != '\0') {
    DAT_14ca0c0a6 = DAT_14ca0c0a6 + '\x01';
  }
  return;
}



// FUNCTION 1460c6a3c FUN_1460c6a3c body=287 status=ok
// SIG undefined FUN_1460c6a3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c6a3c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0c4c8) {
    FUN_144b3d300(&DAT_14ca0c4c8);
    if (DAT_14ca0c4c8 == -1) {
      FUN_1460c6b5c();
      FUN_140db5666(&DAT_14ca0c420,2,&DAT_14ca0c3b8,
                    L"TMobileBasePassPSFMobileDirectionalLightAndSHIndirectPolicyLOCAL_LIGHTS_DISABLEDThinTranslGrey"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_1472404ea,
                    FUN_1472404c2,FUN_141770338,&LAB_1472404be,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0c420 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de852d);
      _Init_thread_footer(&DAT_14ca0c4c8);
    }
  }
  return &DAT_14ca0c420;
}



// FUNCTION 1460c6b5c FUN_1460c6b5c body=205 status=ok
// SIG undefined FUN_1460c6b5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c6b5c(void)

{
  if ((DAT_14ca0c41f & 2) == 0) {
    DAT_14ca0c41f = DAT_14ca0c41f | 2;
    _DAT_14ca0c3c0 =
         L"TMobileBasePassPSFMobileDirectionalLightAndSHIndirectPolicyLOCAL_LIGHTS_DISABLEDThinTranslGrey"
    ;
    _DAT_14ca0c3d8 = FUN_146826540;
    _DAT_14ca0c3e0 = FUN_146825d77;
    _DAT_14ca0c3e8 = FUN_146825fd6;
    _DAT_14ca0c3f0 = FUN_1407e02ea;
    _DAT_14ca0c3f8 = FUN_146826273;
    _DAT_14ca0c3d0 = FUN_147240476;
    _DAT_14ca0c410 = 0xffffffff00000118;
    _DAT_14ca0c418 = 8;
    DAT_14ca0c41c = 0;
    _DAT_14ca0c400 = &LAB_1472404ba;
    FUN_1460c6c2a();
    FUN_1407e00cc(&DAT_14ca0c3b8);
    return;
  }
  return;
}



// FUNCTION 1460c6c2a FUN_1460c6c2a body=133 status=ok
// SIG undefined FUN_1460c6c2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c6c2a(void)

{
  _DAT_14ca10720 = L"BASE";
  DAT_14ca1074a = 4;
  FUN_145ce8ffa();
  _DAT_14ca10730 = DAT_14ca0c3c8;
  _DAT_14ca10728 = &DAT_14ca10530;
  _DAT_14ca10738 = &LAB_14682652b;
  DAT_14ca0c3c8 = &DAT_14ca10720;
  DAT_14ca0c41d = DAT_14ca0c41d + '\x01';
  _DAT_14ca10740 = 0x100000000;
  if (DAT_14ca10594 != '\0') {
    DAT_14ca0c41e = DAT_14ca0c41e + '\x01';
  }
  return;
}



// FUNCTION 1460c6cb0 FUN_1460c6cb0 body=287 status=ok
// SIG undefined FUN_1460c6cb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c6cb0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0c5f0) {
    FUN_144b3d300(&DAT_14ca0c5f0);
    if (DAT_14ca0c5f0 == -1) {
      FUN_1460c6dd0();
      FUN_140db5666(&DAT_14ca0c548,2,&DAT_14ca0c4e0,
                    L"TMobileBasePassPSFMobileDirectionalLightAndSHIndirectPolicyLOCAL_LIGHTS_ENABLED"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_1472405c2,
                    FUN_14724059a,FUN_14177039c,&LAB_147240596,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0c548 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de8539);
      _Init_thread_footer(&DAT_14ca0c5f0);
    }
  }
  return &DAT_14ca0c548;
}



// FUNCTION 1460c6dd0 FUN_1460c6dd0 body=205 status=ok
// SIG undefined FUN_1460c6dd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c6dd0(void)

{
  if ((DAT_14ca0c547 & 2) == 0) {
    DAT_14ca0c547 = DAT_14ca0c547 | 2;
    _DAT_14ca0c4e8 =
         L"TMobileBasePassPSFMobileDirectionalLightAndSHIndirectPolicyLOCAL_LIGHTS_ENABLED";
    _DAT_14ca0c500 = FUN_146826540;
    _DAT_14ca0c508 = FUN_146825d77;
    _DAT_14ca0c510 = FUN_146825fd6;
    _DAT_14ca0c518 = FUN_1407e02ea;
    _DAT_14ca0c520 = FUN_146826273;
    _DAT_14ca0c4f8 = FUN_14724054e;
    _DAT_14ca0c538 = 0xffffffff00000118;
    _DAT_14ca0c540 = 8;
    DAT_14ca0c544 = 0;
    _DAT_14ca0c528 = &LAB_147240592;
    FUN_1460c6e9e();
    FUN_1407e00cc(&DAT_14ca0c4e0);
    return;
  }
  return;
}



// FUNCTION 1460c6e9e FUN_1460c6e9e body=133 status=ok
// SIG undefined FUN_1460c6e9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c6e9e(void)

{
  _DAT_14ca10750 = L"BASE";
  DAT_14ca1077a = 4;
  FUN_145ce8ffa();
  _DAT_14ca10760 = DAT_14ca0c4f0;
  _DAT_14ca10758 = &DAT_14ca10530;
  _DAT_14ca10768 = &LAB_14682652b;
  DAT_14ca0c4f0 = &DAT_14ca10750;
  DAT_14ca0c545 = DAT_14ca0c545 + '\x01';
  _DAT_14ca10770 = 0x100000000;
  if (DAT_14ca10594 != '\0') {
    DAT_14ca0c546 = DAT_14ca0c546 + '\x01';
  }
  return;
}



// FUNCTION 1460c6f24 FUN_1460c6f24 body=287 status=ok
// SIG undefined FUN_1460c6f24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c6f24(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0c718) {
    FUN_144b3d300(&DAT_14ca0c718);
    if (DAT_14ca0c718 == -1) {
      FUN_1460c7044();
      FUN_140db5666(&DAT_14ca0c670,2,&DAT_14ca0c608,
                    L"TMobileBasePassPSFMobileDirectionalLightAndSHIndirectPolicyLOCAL_LIGHTS_ENABLEDThinTranslGrey"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14724069a,
                    FUN_147240672,FUN_141770420,&LAB_14724066e,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0c670 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de8545);
      _Init_thread_footer(&DAT_14ca0c718);
    }
  }
  return &DAT_14ca0c670;
}


