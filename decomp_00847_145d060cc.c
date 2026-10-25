// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145d060cc FUN_145d060cc body=216 status=ok
// SIG undefined FUN_145d060cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d060cc(void)

{
  _DAT_14c9bd070 = L"Targets";
  DAT_14c9bd09a = FUN_140850cc5();
  _DAT_14c9bd078 = FUN_1410b9266();
  _DAT_14c9bd088 = &LAB_14682652b;
  _DAT_14c9bd090 = 0x100000126;
  _DAT_14c9bd098 = 0;
  _DAT_14c9bd080 = DAT_14c9bcdd8;
  DAT_14c9bcdd8 = &DAT_14c9bd070;
  _DAT_14c9bd040 = L"Target7";
  DAT_14c9bd06a = FUN_140850cc5();
  _DAT_14c9bd048 = FUN_1410b9266();
  _DAT_14c9bd058 = &LAB_14682652b;
  _DAT_14c9bd060 = 0x100000125;
  _DAT_14c9bd068 = 0;
  _DAT_14c9bd050 = DAT_14c9bcdd8;
  DAT_14c9bcdd8 = &DAT_14c9bd040;
  return;
}



// FUNCTION 145d061a4 FUN_145d061a4 body=225 status=ok
// SIG undefined FUN_145d061a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d061a4(void)

{
  _DAT_14c9bd0a0 = L"BASE";
  DAT_14c9bd0ca = 4;
  _DAT_14c9bd0a8 = FUN_1411cad6c();
  _DAT_14c9bd0b0 = DAT_14c9bcdd8;
  _DAT_14c9bd0b8 = &LAB_14682652b;
  DAT_14c9bcdd8 = &DAT_14c9bd0a0;
  DAT_14c9bce2d = DAT_14c9bce2d + '\x01';
  _DAT_14c9bd0c0 = &DAT_100000108;
  if (*(char *)(_DAT_14c9bd0a8 + 100) != '\0') {
    DAT_14c9bce2e = DAT_14c9bce2e + '\x01';
  }
  _DAT_14c9bd0d0 = L"BASE";
  DAT_14c9bd0fa = 4;
  _DAT_14c9bd0d8 = FUN_141092e92();
  _DAT_14c9bd0e0 = DAT_14c9bcdd8;
  _DAT_14c9bd0e8 = &LAB_14682652b;
  DAT_14c9bcdd8 = &DAT_14c9bd0d0;
  DAT_14c9bce2d = DAT_14c9bce2d + '\x01';
  _DAT_14c9bd0f0 = 0x100000000;
  if (*(char *)(_DAT_14c9bd0d8 + 100) != '\0') {
    DAT_14c9bce2e = DAT_14c9bce2e + '\x01';
  }
  return;
}



// FUNCTION 145d06286 FUN_145d06286 body=287 status=ok
// SIG undefined FUN_145d06286(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d06286(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b3008) {
    FUN_144b3d300(&DAT_14c9b3008);
    if (DAT_14c9b3008 == -1) {
      FUN_145d063a6();
      FUN_140db5666(&DAT_14c9b2f60,2,&DAT_14c9b2ef8,
                    L"TBasePassCSFCachedPointIndirectLightingPolicySkylight",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",5,1,FUN_14712ef3c,
                    FUN_14712ef14,FUN_141756888,&LAB_14712ef10,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9b2f60 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c76c);
      _Init_thread_footer(&DAT_14c9b3008);
    }
  }
  return &DAT_14c9b2f60;
}



// FUNCTION 145d063a6 FUN_145d063a6 body=205 status=ok
// SIG undefined FUN_145d063a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d063a6(void)

{
  if ((DAT_14c9b2f5f & 2) == 0) {
    DAT_14c9b2f5f = DAT_14c9b2f5f | 2;
    _DAT_14c9b2f00 = L"TBasePassCSFCachedPointIndirectLightingPolicySkylight";
    _DAT_14c9b2f18 = FUN_146826540;
    _DAT_14c9b2f20 = FUN_146825d77;
    _DAT_14c9b2f28 = FUN_146825fd6;
    _DAT_14c9b2f30 = FUN_1407e02ea;
    _DAT_14c9b2f38 = FUN_146826273;
    _DAT_14c9b2f10 = FUN_14712eed6;
    _DAT_14c9b2f50 = 0xffffffff00000128;
    _DAT_14c9b2f58 = 8;
    DAT_14c9b2f5c = 0;
    _DAT_14c9b2f40 = &LAB_14712ef0c;
    FUN_145d06474();
    FUN_1407e00cc(&DAT_14c9b2ef8);
    return;
  }
  return;
}



// FUNCTION 145d06474 FUN_145d06474 body=133 status=ok
// SIG undefined FUN_145d06474(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d06474(void)

{
  _DAT_14c9bd7f0 = L"BASE";
  DAT_14c9bd81a = 4;
  FUN_145d064fa();
  _DAT_14c9bd800 = DAT_14c9b2f08;
  _DAT_14c9bd7f8 = &DAT_14c9bd820;
  _DAT_14c9bd808 = &LAB_14682652b;
  DAT_14c9b2f08 = &DAT_14c9bd7f0;
  DAT_14c9b2f5d = DAT_14c9b2f5d + '\x01';
  _DAT_14c9bd810 = 0x100000000;
  if (DAT_14c9bd884 != '\0') {
    DAT_14c9b2f5e = DAT_14c9b2f5e + '\x01';
  }
  return;
}



// FUNCTION 145d064fa FUN_145d064fa body=200 status=ok
// SIG undefined FUN_145d064fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d064fa(void)

{
  if ((DAT_14c9bd887 & 2) != 0) {
    return;
  }
  DAT_14c9bd887 = DAT_14c9bd887 | 2;
  _DAT_14c9bd828 = L"TBasePassComputeShaderBaseType";
  _DAT_14c9bd840 = FUN_146826540;
  _DAT_14c9bd848 = FUN_146825d77;
  _DAT_14c9bd850 = FUN_146825fd6;
  _DAT_14c9bd858 = FUN_1407e02ea;
  _DAT_14c9bd860 = FUN_146826273;
  _DAT_14c9bd838 = FUN_14713dc6a;
  _DAT_14c9bd878 = 0xffffffff00000128;
  _DAT_14c9bd880 = 8;
  DAT_14c9bd884 = 0;
  _DAT_14c9bd868 = &LAB_14713dca0;
  FUN_145d065c2();
  FUN_1407e00cc(&DAT_14c9bd820);
  return;
}



// FUNCTION 145d065c2 FUN_145d065c2 body=133 status=ok
// SIG undefined FUN_145d065c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d065c2(void)

{
  _DAT_14c9bd888 = L"BASE";
  DAT_14c9bd8b2 = 4;
  FUN_145d06648();
  _DAT_14c9bd898 = DAT_14c9bd830;
  _DAT_14c9bd890 = &DAT_14c9bd8b8;
  _DAT_14c9bd8a0 = &LAB_14682652b;
  DAT_14c9bd830 = &DAT_14c9bd888;
  DAT_14c9bd885 = DAT_14c9bd885 + '\x01';
  _DAT_14c9bd8a8 = 0x100000000;
  if (DAT_14c9bd91c != '\0') {
    DAT_14c9bd886 = DAT_14c9bd886 + '\x01';
  }
  return;
}



// FUNCTION 145d06648 FUN_145d06648 body=210 status=ok
// SIG undefined FUN_145d06648(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d06648(void)

{
  if ((DAT_14c9bd91f & 2) == 0) {
    DAT_14c9bd91f = DAT_14c9bd91f | 2;
    _DAT_14c9bd8c0 = L"TBasePassComputeShaderPolicyParamType";
    _DAT_14c9bd8d8 = FUN_146826540;
    _DAT_14c9bd8e0 = FUN_146825d77;
    _DAT_14c9bd8e8 = FUN_146825fd6;
    _DAT_14c9bd8f0 = FUN_1407e02ea;
    _DAT_14c9bd8f8 = FUN_146826273;
    _DAT_14c9bd8d0 = FUN_14713dca4;
    _DAT_14c9bd910 = 0xffffffff00000128;
    _DAT_14c9bd918 = 8;
    DAT_14c9bd91c = 0;
    _DAT_14c9bd900 = &LAB_14713dcda;
    FUN_145d0671a();
    FUN_145d06d30();
    FUN_1407e00cc(&DAT_14c9bd8b8);
    return;
  }
  return;
}



// FUNCTION 145d0671a FUN_145d0671a body=121 status=ok
// SIG undefined FUN_145d0671a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d0671a(void)

{
  FUN_145d06794();
  _DAT_14c9bd920 = L"ReflectionCaptureBuffer";
  DAT_14c9bd94a = FUN_140850cc5();
  _DAT_14c9bd928 = FUN_14106a12a();
  _DAT_14c9bd938 = &LAB_14682652b;
  _DAT_14c9bd940 = 0x10000010e;
  _DAT_14c9bd948 = 0;
  _DAT_14c9bd930 = DAT_14c9bd8c8;
  DAT_14c9bd8c8 = &DAT_14c9bd920;
  return;
}



// FUNCTION 145d06794 FUN_145d06794 body=121 status=ok
// SIG undefined FUN_145d06794(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d06794(void)

{
  FUN_145d0680e();
  _DAT_14c9bd950 = L"ShadingOutputsParam";
  DAT_14c9bd97a = FUN_140850cc5();
  _DAT_14c9bd958 = FUN_14106a12a();
  _DAT_14c9bd968 = &LAB_14682652b;
  _DAT_14c9bd970 = 0x100000110;
  _DAT_14c9bd978 = 0;
  _DAT_14c9bd960 = DAT_14c9bd8c8;
  DAT_14c9bd8c8 = &DAT_14c9bd950;
  return;
}



// FUNCTION 145d0680e FUN_145d0680e body=121 status=ok
// SIG undefined FUN_145d0680e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d0680e(void)

{
  FUN_145d06888();
  _DAT_14c9bd980 = L"ViewRectParam";
  DAT_14c9bd9aa = FUN_140850cc5();
  _DAT_14c9bd988 = FUN_140ec6960();
  _DAT_14c9bd998 = &LAB_14682652b;
  _DAT_14c9bd9a0 = 0x100000112;
  _DAT_14c9bd9a8 = 0;
  _DAT_14c9bd990 = DAT_14c9bd8c8;
  DAT_14c9bd8c8 = &DAT_14c9bd980;
  return;
}



// FUNCTION 145d06888 FUN_145d06888 body=121 status=ok
// SIG undefined FUN_145d06888(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d06888(void)

{
  FUN_145d06902();
  _DAT_14c9bd9b0 = L"PassDataParam";
  DAT_14c9bd9da = FUN_140850cc5();
  _DAT_14c9bd9b8 = FUN_140ec6960();
  _DAT_14c9bd9c8 = &LAB_14682652b;
  _DAT_14c9bd9d0 = 0x100000118;
  _DAT_14c9bd9d8 = 0;
  _DAT_14c9bd9c0 = DAT_14c9bd8c8;
  DAT_14c9bd8c8 = &DAT_14c9bd9b0;
  return;
}



// FUNCTION 145d06902 FUN_145d06902 body=121 status=ok
// SIG undefined FUN_145d06902(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d06902(void)

{
  FUN_145d0697c();
  _DAT_14c9bd9e0 = L"Target0";
  DAT_14c9bda0a = FUN_140850cc5();
  _DAT_14c9bd9e8 = FUN_1410b9266();
  _DAT_14c9bd9f8 = &LAB_14682652b;
  _DAT_14c9bda00 = 0x10000011e;
  _DAT_14c9bda08 = 0;
  _DAT_14c9bd9f0 = DAT_14c9bd8c8;
  DAT_14c9bd8c8 = &DAT_14c9bd9e0;
  return;
}



// FUNCTION 145d0697c FUN_145d0697c body=121 status=ok
// SIG undefined FUN_145d0697c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d0697c(void)

{
  FUN_145d069f6();
  _DAT_14c9bda10 = L"Target1";
  DAT_14c9bda3a = FUN_140850cc5();
  _DAT_14c9bda18 = FUN_1410b9266();
  _DAT_14c9bda28 = &LAB_14682652b;
  _DAT_14c9bda30 = 0x10000011f;
  _DAT_14c9bda38 = 0;
  _DAT_14c9bda20 = DAT_14c9bd8c8;
  DAT_14c9bd8c8 = &DAT_14c9bda10;
  return;
}



// FUNCTION 145d069f6 FUN_145d069f6 body=121 status=ok
// SIG undefined FUN_145d069f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d069f6(void)

{
  FUN_145d06a70();
  _DAT_14c9bda40 = L"Target2";
  DAT_14c9bda6a = FUN_140850cc5();
  _DAT_14c9bda48 = FUN_1410b9266();
  _DAT_14c9bda58 = &LAB_14682652b;
  _DAT_14c9bda60 = 0x100000120;
  _DAT_14c9bda68 = 0;
  _DAT_14c9bda50 = DAT_14c9bd8c8;
  DAT_14c9bd8c8 = &DAT_14c9bda40;
  return;
}



// FUNCTION 145d06a70 FUN_145d06a70 body=121 status=ok
// SIG undefined FUN_145d06a70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d06a70(void)

{
  FUN_145d06aea();
  _DAT_14c9bda70 = L"Target3";
  DAT_14c9bda9a = FUN_140850cc5();
  _DAT_14c9bda78 = FUN_1410b9266();
  _DAT_14c9bda88 = &LAB_14682652b;
  _DAT_14c9bda90 = 0x100000121;
  _DAT_14c9bda98 = 0;
  _DAT_14c9bda80 = DAT_14c9bd8c8;
  DAT_14c9bd8c8 = &DAT_14c9bda70;
  return;
}



// FUNCTION 145d06aea FUN_145d06aea body=121 status=ok
// SIG undefined FUN_145d06aea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d06aea(void)

{
  FUN_145d06b64();
  _DAT_14c9bdaa0 = L"Target4";
  DAT_14c9bdaca = FUN_140850cc5();
  _DAT_14c9bdaa8 = FUN_1410b9266();
  _DAT_14c9bdab8 = &LAB_14682652b;
  _DAT_14c9bdac0 = 0x100000122;
  _DAT_14c9bdac8 = 0;
  _DAT_14c9bdab0 = DAT_14c9bd8c8;
  DAT_14c9bd8c8 = &DAT_14c9bdaa0;
  return;
}



// FUNCTION 145d06b64 FUN_145d06b64 body=121 status=ok
// SIG undefined FUN_145d06b64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d06b64(void)

{
  FUN_145d06bde();
  _DAT_14c9bdad0 = L"Target5";
  DAT_14c9bdafa = FUN_140850cc5();
  _DAT_14c9bdad8 = FUN_1410b9266();
  _DAT_14c9bdae8 = &LAB_14682652b;
  _DAT_14c9bdaf0 = 0x100000123;
  _DAT_14c9bdaf8 = 0;
  _DAT_14c9bdae0 = DAT_14c9bd8c8;
  DAT_14c9bd8c8 = &DAT_14c9bdad0;
  return;
}



// FUNCTION 145d06bde FUN_145d06bde body=121 status=ok
// SIG undefined FUN_145d06bde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d06bde(void)

{
  FUN_145d06c58();
  _DAT_14c9bdb00 = L"Target6";
  DAT_14c9bdb2a = FUN_140850cc5();
  _DAT_14c9bdb08 = FUN_1410b9266();
  _DAT_14c9bdb18 = &LAB_14682652b;
  _DAT_14c9bdb20 = 0x100000124;
  _DAT_14c9bdb28 = 0;
  _DAT_14c9bdb10 = DAT_14c9bd8c8;
  DAT_14c9bd8c8 = &DAT_14c9bdb00;
  return;
}



// FUNCTION 145d06c58 FUN_145d06c58 body=216 status=ok
// SIG undefined FUN_145d06c58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d06c58(void)

{
  _DAT_14c9bdb60 = L"Targets";
  DAT_14c9bdb8a = FUN_140850cc5();
  _DAT_14c9bdb68 = FUN_1410b9266();
  _DAT_14c9bdb78 = &LAB_14682652b;
  _DAT_14c9bdb80 = 0x100000126;
  _DAT_14c9bdb88 = 0;
  _DAT_14c9bdb70 = DAT_14c9bd8c8;
  DAT_14c9bd8c8 = &DAT_14c9bdb60;
  _DAT_14c9bdb30 = L"Target7";
  DAT_14c9bdb5a = FUN_140850cc5();
  _DAT_14c9bdb38 = FUN_1410b9266();
  _DAT_14c9bdb48 = &LAB_14682652b;
  _DAT_14c9bdb50 = 0x100000125;
  _DAT_14c9bdb58 = 0;
  _DAT_14c9bdb40 = DAT_14c9bd8c8;
  DAT_14c9bd8c8 = &DAT_14c9bdb30;
  return;
}



// FUNCTION 145d06d30 FUN_145d06d30 body=225 status=ok
// SIG undefined FUN_145d06d30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d06d30(void)

{
  _DAT_14c9bdb90 = L"BASE";
  DAT_14c9bdbba = 4;
  _DAT_14c9bdb98 = FUN_1411cad6c();
  _DAT_14c9bdba0 = DAT_14c9bd8c8;
  _DAT_14c9bdba8 = &LAB_14682652b;
  DAT_14c9bd8c8 = &DAT_14c9bdb90;
  DAT_14c9bd91d = DAT_14c9bd91d + '\x01';
  _DAT_14c9bdbb0 = &DAT_100000108;
  if (*(char *)(_DAT_14c9bdb98 + 100) != '\0') {
    DAT_14c9bd91e = DAT_14c9bd91e + '\x01';
  }
  _DAT_14c9bdbc0 = L"BASE";
  DAT_14c9bdbea = 4;
  _DAT_14c9bdbc8 = FUN_141092e92();
  _DAT_14c9bdbd0 = DAT_14c9bd8c8;
  _DAT_14c9bdbd8 = &LAB_14682652b;
  DAT_14c9bd8c8 = &DAT_14c9bdbc0;
  DAT_14c9bd91d = DAT_14c9bd91d + '\x01';
  _DAT_14c9bdbe0 = 0x100000000;
  if (*(char *)(_DAT_14c9bdbc8 + 100) != '\0') {
    DAT_14c9bd91e = DAT_14c9bd91e + '\x01';
  }
  return;
}



// FUNCTION 145d06e12 FUN_145d06e12 body=287 status=ok
// SIG undefined FUN_145d06e12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d06e12(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b3f10) {
    FUN_144b3d300(&DAT_14c9b3f10);
    if (DAT_14c9b3f10 == -1) {
      FUN_145d06f32();
      FUN_140db5666(&DAT_14c9b3e68,2,&DAT_14c9b3e00,L"TBasePassCSTLightMapPolicyLQSkylight",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",5,1,FUN_14712f872,
                    FUN_14712f84a,FUN_141758f2a,&LAB_14712f846,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9b3e68 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c808);
      _Init_thread_footer(&DAT_14c9b3f10);
    }
  }
  return &DAT_14c9b3e68;
}



// FUNCTION 145d06f32 FUN_145d06f32 body=205 status=ok
// SIG undefined FUN_145d06f32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d06f32(void)

{
  if ((DAT_14c9b3e67 & 2) == 0) {
    DAT_14c9b3e67 = DAT_14c9b3e67 | 2;
    _DAT_14c9b3e08 = L"TBasePassCSTLightMapPolicyLQSkylight";
    _DAT_14c9b3e20 = FUN_146826540;
    _DAT_14c9b3e28 = FUN_146825d77;
    _DAT_14c9b3e30 = FUN_146825fd6;
    _DAT_14c9b3e38 = FUN_1407e02ea;
    _DAT_14c9b3e40 = FUN_146826273;
    _DAT_14c9b3e18 = FUN_14712f80c;
    _DAT_14c9b3e58 = 0xffffffff00000128;
    _DAT_14c9b3e60 = 8;
    DAT_14c9b3e64 = 0;
    _DAT_14c9b3e48 = &LAB_14712f842;
    FUN_145d07000();
    FUN_1407e00cc(&DAT_14c9b3e00);
    return;
  }
  return;
}



// FUNCTION 145d07000 FUN_145d07000 body=133 status=ok
// SIG undefined FUN_145d07000(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d07000(void)

{
  _DAT_14c9be2e0 = L"BASE";
  DAT_14c9be30a = 4;
  FUN_145d07086();
  _DAT_14c9be2f0 = DAT_14c9b3e10;
  _DAT_14c9be2e8 = &DAT_14c9be310;
  _DAT_14c9be2f8 = &LAB_14682652b;
  DAT_14c9b3e10 = &DAT_14c9be2e0;
  DAT_14c9b3e65 = DAT_14c9b3e65 + '\x01';
  _DAT_14c9be300 = 0x100000000;
  if (DAT_14c9be374 != '\0') {
    DAT_14c9b3e66 = DAT_14c9b3e66 + '\x01';
  }
  return;
}



// FUNCTION 145d07086 FUN_145d07086 body=200 status=ok
// SIG undefined FUN_145d07086(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d07086(void)

{
  if ((DAT_14c9be377 & 2) != 0) {
    return;
  }
  DAT_14c9be377 = DAT_14c9be377 | 2;
  _DAT_14c9be318 = L"TBasePassComputeShaderBaseType";
  _DAT_14c9be330 = FUN_146826540;
  _DAT_14c9be338 = FUN_146825d77;
  _DAT_14c9be340 = FUN_146825fd6;
  _DAT_14c9be348 = FUN_1407e02ea;
  _DAT_14c9be350 = FUN_146826273;
  _DAT_14c9be328 = FUN_14713e164;
  _DAT_14c9be368 = 0xffffffff00000128;
  _DAT_14c9be370 = 8;
  DAT_14c9be374 = 0;
  _DAT_14c9be358 = &LAB_14713e19a;
  FUN_145d0714e();
  FUN_1407e00cc(&DAT_14c9be310);
  return;
}



// FUNCTION 145d0714e FUN_145d0714e body=133 status=ok
// SIG undefined FUN_145d0714e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d0714e(void)

{
  _DAT_14c9be378 = L"BASE";
  DAT_14c9be3a2 = 4;
  FUN_145d071d4();
  _DAT_14c9be388 = DAT_14c9be320;
  _DAT_14c9be380 = &DAT_14c9be3a8;
  _DAT_14c9be390 = &LAB_14682652b;
  DAT_14c9be320 = &DAT_14c9be378;
  DAT_14c9be375 = DAT_14c9be375 + '\x01';
  _DAT_14c9be398 = 0x100000000;
  if (DAT_14c9be40c != '\0') {
    DAT_14c9be376 = DAT_14c9be376 + '\x01';
  }
  return;
}



// FUNCTION 145d071d4 FUN_145d071d4 body=210 status=ok
// SIG undefined FUN_145d071d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d071d4(void)

{
  if ((DAT_14c9be40f & 2) == 0) {
    DAT_14c9be40f = DAT_14c9be40f | 2;
    _DAT_14c9be3b0 = L"TBasePassComputeShaderPolicyParamType";
    _DAT_14c9be3c8 = FUN_146826540;
    _DAT_14c9be3d0 = FUN_146825d77;
    _DAT_14c9be3d8 = FUN_146825fd6;
    _DAT_14c9be3e0 = FUN_1407e02ea;
    _DAT_14c9be3e8 = FUN_146826273;
    _DAT_14c9be3c0 = FUN_14713e19e;
    _DAT_14c9be400 = 0xffffffff00000128;
    _DAT_14c9be408 = 8;
    DAT_14c9be40c = 0;
    _DAT_14c9be3f0 = &LAB_14713e1d4;
    FUN_145d072a6();
    FUN_145d078bc();
    FUN_1407e00cc(&DAT_14c9be3a8);
    return;
  }
  return;
}



// FUNCTION 145d072a6 FUN_145d072a6 body=121 status=ok
// SIG undefined FUN_145d072a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d072a6(void)

{
  FUN_145d07320();
  _DAT_14c9be410 = L"ReflectionCaptureBuffer";
  DAT_14c9be43a = FUN_140850cc5();
  _DAT_14c9be418 = FUN_14106a12a();
  _DAT_14c9be428 = &LAB_14682652b;
  _DAT_14c9be430 = 0x10000010e;
  _DAT_14c9be438 = 0;
  _DAT_14c9be420 = DAT_14c9be3b8;
  DAT_14c9be3b8 = &DAT_14c9be410;
  return;
}



// FUNCTION 145d07320 FUN_145d07320 body=121 status=ok
// SIG undefined FUN_145d07320(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d07320(void)

{
  FUN_145d0739a();
  _DAT_14c9be440 = L"ShadingOutputsParam";
  DAT_14c9be46a = FUN_140850cc5();
  _DAT_14c9be448 = FUN_14106a12a();
  _DAT_14c9be458 = &LAB_14682652b;
  _DAT_14c9be460 = 0x100000110;
  _DAT_14c9be468 = 0;
  _DAT_14c9be450 = DAT_14c9be3b8;
  DAT_14c9be3b8 = &DAT_14c9be440;
  return;
}



// FUNCTION 145d0739a FUN_145d0739a body=121 status=ok
// SIG undefined FUN_145d0739a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d0739a(void)

{
  FUN_145d07414();
  _DAT_14c9be470 = L"ViewRectParam";
  DAT_14c9be49a = FUN_140850cc5();
  _DAT_14c9be478 = FUN_140ec6960();
  _DAT_14c9be488 = &LAB_14682652b;
  _DAT_14c9be490 = 0x100000112;
  _DAT_14c9be498 = 0;
  _DAT_14c9be480 = DAT_14c9be3b8;
  DAT_14c9be3b8 = &DAT_14c9be470;
  return;
}



// FUNCTION 145d07414 FUN_145d07414 body=121 status=ok
// SIG undefined FUN_145d07414(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d07414(void)

{
  FUN_145d0748e();
  _DAT_14c9be4a0 = L"PassDataParam";
  DAT_14c9be4ca = FUN_140850cc5();
  _DAT_14c9be4a8 = FUN_140ec6960();
  _DAT_14c9be4b8 = &LAB_14682652b;
  _DAT_14c9be4c0 = 0x100000118;
  _DAT_14c9be4c8 = 0;
  _DAT_14c9be4b0 = DAT_14c9be3b8;
  DAT_14c9be3b8 = &DAT_14c9be4a0;
  return;
}



// FUNCTION 145d0748e FUN_145d0748e body=121 status=ok
// SIG undefined FUN_145d0748e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d0748e(void)

{
  FUN_145d07508();
  _DAT_14c9be4d0 = L"Target0";
  DAT_14c9be4fa = FUN_140850cc5();
  _DAT_14c9be4d8 = FUN_1410b9266();
  _DAT_14c9be4e8 = &LAB_14682652b;
  _DAT_14c9be4f0 = 0x10000011e;
  _DAT_14c9be4f8 = 0;
  _DAT_14c9be4e0 = DAT_14c9be3b8;
  DAT_14c9be3b8 = &DAT_14c9be4d0;
  return;
}



// FUNCTION 145d07508 FUN_145d07508 body=121 status=ok
// SIG undefined FUN_145d07508(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d07508(void)

{
  FUN_145d07582();
  _DAT_14c9be500 = L"Target1";
  DAT_14c9be52a = FUN_140850cc5();
  _DAT_14c9be508 = FUN_1410b9266();
  _DAT_14c9be518 = &LAB_14682652b;
  _DAT_14c9be520 = 0x10000011f;
  _DAT_14c9be528 = 0;
  _DAT_14c9be510 = DAT_14c9be3b8;
  DAT_14c9be3b8 = &DAT_14c9be500;
  return;
}



// FUNCTION 145d07582 FUN_145d07582 body=121 status=ok
// SIG undefined FUN_145d07582(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d07582(void)

{
  FUN_145d075fc();
  _DAT_14c9be530 = L"Target2";
  DAT_14c9be55a = FUN_140850cc5();
  _DAT_14c9be538 = FUN_1410b9266();
  _DAT_14c9be548 = &LAB_14682652b;
  _DAT_14c9be550 = 0x100000120;
  _DAT_14c9be558 = 0;
  _DAT_14c9be540 = DAT_14c9be3b8;
  DAT_14c9be3b8 = &DAT_14c9be530;
  return;
}



// FUNCTION 145d075fc FUN_145d075fc body=121 status=ok
// SIG undefined FUN_145d075fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d075fc(void)

{
  FUN_145d07676();
  _DAT_14c9be560 = L"Target3";
  DAT_14c9be58a = FUN_140850cc5();
  _DAT_14c9be568 = FUN_1410b9266();
  _DAT_14c9be578 = &LAB_14682652b;
  _DAT_14c9be580 = 0x100000121;
  _DAT_14c9be588 = 0;
  _DAT_14c9be570 = DAT_14c9be3b8;
  DAT_14c9be3b8 = &DAT_14c9be560;
  return;
}



// FUNCTION 145d07676 FUN_145d07676 body=121 status=ok
// SIG undefined FUN_145d07676(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d07676(void)

{
  FUN_145d076f0();
  _DAT_14c9be590 = L"Target4";
  DAT_14c9be5ba = FUN_140850cc5();
  _DAT_14c9be598 = FUN_1410b9266();
  _DAT_14c9be5a8 = &LAB_14682652b;
  _DAT_14c9be5b0 = 0x100000122;
  _DAT_14c9be5b8 = 0;
  _DAT_14c9be5a0 = DAT_14c9be3b8;
  DAT_14c9be3b8 = &DAT_14c9be590;
  return;
}



// FUNCTION 145d076f0 FUN_145d076f0 body=121 status=ok
// SIG undefined FUN_145d076f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d076f0(void)

{
  FUN_145d0776a();
  _DAT_14c9be5c0 = L"Target5";
  DAT_14c9be5ea = FUN_140850cc5();
  _DAT_14c9be5c8 = FUN_1410b9266();
  _DAT_14c9be5d8 = &LAB_14682652b;
  _DAT_14c9be5e0 = 0x100000123;
  _DAT_14c9be5e8 = 0;
  _DAT_14c9be5d0 = DAT_14c9be3b8;
  DAT_14c9be3b8 = &DAT_14c9be5c0;
  return;
}



// FUNCTION 145d0776a FUN_145d0776a body=121 status=ok
// SIG undefined FUN_145d0776a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d0776a(void)

{
  FUN_145d077e4();
  _DAT_14c9be5f0 = L"Target6";
  DAT_14c9be61a = FUN_140850cc5();
  _DAT_14c9be5f8 = FUN_1410b9266();
  _DAT_14c9be608 = &LAB_14682652b;
  _DAT_14c9be610 = 0x100000124;
  _DAT_14c9be618 = 0;
  _DAT_14c9be600 = DAT_14c9be3b8;
  DAT_14c9be3b8 = &DAT_14c9be5f0;
  return;
}



// FUNCTION 145d077e4 FUN_145d077e4 body=216 status=ok
// SIG undefined FUN_145d077e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d077e4(void)

{
  _DAT_14c9be650 = L"Targets";
  DAT_14c9be67a = FUN_140850cc5();
  _DAT_14c9be658 = FUN_1410b9266();
  _DAT_14c9be668 = &LAB_14682652b;
  _DAT_14c9be670 = 0x100000126;
  _DAT_14c9be678 = 0;
  _DAT_14c9be660 = DAT_14c9be3b8;
  DAT_14c9be3b8 = &DAT_14c9be650;
  _DAT_14c9be620 = L"Target7";
  DAT_14c9be64a = FUN_140850cc5();
  _DAT_14c9be628 = FUN_1410b9266();
  _DAT_14c9be638 = &LAB_14682652b;
  _DAT_14c9be640 = 0x100000125;
  _DAT_14c9be648 = 0;
  _DAT_14c9be630 = DAT_14c9be3b8;
  DAT_14c9be3b8 = &DAT_14c9be620;
  return;
}



// FUNCTION 145d078bc FUN_145d078bc body=225 status=ok
// SIG undefined FUN_145d078bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d078bc(void)

{
  _DAT_14c9be680 = L"BASE";
  DAT_14c9be6aa = 4;
  _DAT_14c9be688 = FUN_1411cad6c();
  _DAT_14c9be690 = DAT_14c9be3b8;
  _DAT_14c9be698 = &LAB_14682652b;
  DAT_14c9be3b8 = &DAT_14c9be680;
  DAT_14c9be40d = DAT_14c9be40d + '\x01';
  _DAT_14c9be6a0 = &DAT_100000108;
  if (*(char *)(_DAT_14c9be688 + 100) != '\0') {
    DAT_14c9be40e = DAT_14c9be40e + '\x01';
  }
  _DAT_14c9be6b0 = L"BASE";
  DAT_14c9be6da = 4;
  _DAT_14c9be6b8 = FUN_141092e92();
  _DAT_14c9be6c0 = DAT_14c9be3b8;
  _DAT_14c9be6c8 = &LAB_14682652b;
  DAT_14c9be3b8 = &DAT_14c9be6b0;
  DAT_14c9be40d = DAT_14c9be40d + '\x01';
  _DAT_14c9be6d0 = 0x100000000;
  if (*(char *)(_DAT_14c9be6b8 + 100) != '\0') {
    DAT_14c9be40e = DAT_14c9be40e + '\x01';
  }
  return;
}



// FUNCTION 145d0799e FUN_145d0799e body=287 status=ok
// SIG undefined FUN_145d0799e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d0799e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b4e18) {
    FUN_144b3d300(&DAT_14c9b4e18);
    if (DAT_14c9b4e18 == -1) {
      FUN_145d07abe();
      FUN_140db5666(&DAT_14c9b4d70,2,&DAT_14c9b4d08,L"TBasePassCSTLightMapPolicyHQSkylight",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",5,1,FUN_1471301a8,
                    FUN_147130180,FUN_14175b5cc,&LAB_14713017c,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9b4d70 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c8a4);
      _Init_thread_footer(&DAT_14c9b4e18);
    }
  }
  return &DAT_14c9b4d70;
}



// FUNCTION 145d07abe FUN_145d07abe body=205 status=ok
// SIG undefined FUN_145d07abe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d07abe(void)

{
  if ((DAT_14c9b4d6f & 2) == 0) {
    DAT_14c9b4d6f = DAT_14c9b4d6f | 2;
    _DAT_14c9b4d10 = L"TBasePassCSTLightMapPolicyHQSkylight";
    _DAT_14c9b4d28 = FUN_146826540;
    _DAT_14c9b4d30 = FUN_146825d77;
    _DAT_14c9b4d38 = FUN_146825fd6;
    _DAT_14c9b4d40 = FUN_1407e02ea;
    _DAT_14c9b4d48 = FUN_146826273;
    _DAT_14c9b4d20 = FUN_147130142;
    _DAT_14c9b4d60 = 0xffffffff00000128;
    _DAT_14c9b4d68 = 8;
    DAT_14c9b4d6c = 0;
    _DAT_14c9b4d50 = &LAB_147130178;
    FUN_145d07b8c();
    FUN_1407e00cc(&DAT_14c9b4d08);
    return;
  }
  return;
}



// FUNCTION 145d07b8c FUN_145d07b8c body=133 status=ok
// SIG undefined FUN_145d07b8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d07b8c(void)

{
  _DAT_14c9bedd0 = L"BASE";
  DAT_14c9bedfa = 4;
  FUN_145d07c12();
  _DAT_14c9bede0 = DAT_14c9b4d18;
  _DAT_14c9bedd8 = &DAT_14c9bee00;
  _DAT_14c9bede8 = &LAB_14682652b;
  DAT_14c9b4d18 = &DAT_14c9bedd0;
  DAT_14c9b4d6d = DAT_14c9b4d6d + '\x01';
  _DAT_14c9bedf0 = 0x100000000;
  if (DAT_14c9bee64 != '\0') {
    DAT_14c9b4d6e = DAT_14c9b4d6e + '\x01';
  }
  return;
}



// FUNCTION 145d07c12 FUN_145d07c12 body=200 status=ok
// SIG undefined FUN_145d07c12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d07c12(void)

{
  if ((DAT_14c9bee67 & 2) != 0) {
    return;
  }
  DAT_14c9bee67 = DAT_14c9bee67 | 2;
  _DAT_14c9bee08 = L"TBasePassComputeShaderBaseType";
  _DAT_14c9bee20 = FUN_146826540;
  _DAT_14c9bee28 = FUN_146825d77;
  _DAT_14c9bee30 = FUN_146825fd6;
  _DAT_14c9bee38 = FUN_1407e02ea;
  _DAT_14c9bee40 = FUN_146826273;
  _DAT_14c9bee18 = FUN_14713e65e;
  _DAT_14c9bee58 = 0xffffffff00000128;
  _DAT_14c9bee60 = 8;
  DAT_14c9bee64 = 0;
  _DAT_14c9bee48 = &LAB_14713e694;
  FUN_145d07cda();
  FUN_1407e00cc(&DAT_14c9bee00);
  return;
}



// FUNCTION 145d07cda FUN_145d07cda body=133 status=ok
// SIG undefined FUN_145d07cda(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d07cda(void)

{
  _DAT_14c9bee68 = L"BASE";
  DAT_14c9bee92 = 4;
  FUN_145d07d60();
  _DAT_14c9bee78 = DAT_14c9bee10;
  _DAT_14c9bee70 = &DAT_14c9bee98;
  _DAT_14c9bee80 = &LAB_14682652b;
  DAT_14c9bee10 = &DAT_14c9bee68;
  DAT_14c9bee65 = DAT_14c9bee65 + '\x01';
  _DAT_14c9bee88 = 0x100000000;
  if (DAT_14c9beefc != '\0') {
    DAT_14c9bee66 = DAT_14c9bee66 + '\x01';
  }
  return;
}



// FUNCTION 145d07d60 FUN_145d07d60 body=210 status=ok
// SIG undefined FUN_145d07d60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d07d60(void)

{
  if ((DAT_14c9beeff & 2) == 0) {
    DAT_14c9beeff = DAT_14c9beeff | 2;
    _DAT_14c9beea0 = L"TBasePassComputeShaderPolicyParamType";
    _DAT_14c9beeb8 = FUN_146826540;
    _DAT_14c9beec0 = FUN_146825d77;
    _DAT_14c9beec8 = FUN_146825fd6;
    _DAT_14c9beed0 = FUN_1407e02ea;
    _DAT_14c9beed8 = FUN_146826273;
    _DAT_14c9beeb0 = FUN_14713e698;
    _DAT_14c9beef0 = 0xffffffff00000128;
    _DAT_14c9beef8 = 8;
    DAT_14c9beefc = 0;
    _DAT_14c9beee0 = &LAB_14713e6ce;
    FUN_145d07e32();
    FUN_145d08448();
    FUN_1407e00cc(&DAT_14c9bee98);
    return;
  }
  return;
}



// FUNCTION 145d07e32 FUN_145d07e32 body=121 status=ok
// SIG undefined FUN_145d07e32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d07e32(void)

{
  FUN_145d07eac();
  _DAT_14c9bef00 = L"ReflectionCaptureBuffer";
  DAT_14c9bef2a = FUN_140850cc5();
  _DAT_14c9bef08 = FUN_14106a12a();
  _DAT_14c9bef18 = &LAB_14682652b;
  _DAT_14c9bef20 = 0x10000010e;
  _DAT_14c9bef28 = 0;
  _DAT_14c9bef10 = DAT_14c9beea8;
  DAT_14c9beea8 = &DAT_14c9bef00;
  return;
}



// FUNCTION 145d07eac FUN_145d07eac body=121 status=ok
// SIG undefined FUN_145d07eac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d07eac(void)

{
  FUN_145d07f26();
  _DAT_14c9bef30 = L"ShadingOutputsParam";
  DAT_14c9bef5a = FUN_140850cc5();
  _DAT_14c9bef38 = FUN_14106a12a();
  _DAT_14c9bef48 = &LAB_14682652b;
  _DAT_14c9bef50 = 0x100000110;
  _DAT_14c9bef58 = 0;
  _DAT_14c9bef40 = DAT_14c9beea8;
  DAT_14c9beea8 = &DAT_14c9bef30;
  return;
}



// FUNCTION 145d07f26 FUN_145d07f26 body=121 status=ok
// SIG undefined FUN_145d07f26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d07f26(void)

{
  FUN_145d07fa0();
  _DAT_14c9bef60 = L"ViewRectParam";
  DAT_14c9bef8a = FUN_140850cc5();
  _DAT_14c9bef68 = FUN_140ec6960();
  _DAT_14c9bef78 = &LAB_14682652b;
  _DAT_14c9bef80 = 0x100000112;
  _DAT_14c9bef88 = 0;
  _DAT_14c9bef70 = DAT_14c9beea8;
  DAT_14c9beea8 = &DAT_14c9bef60;
  return;
}



// FUNCTION 145d07fa0 FUN_145d07fa0 body=121 status=ok
// SIG undefined FUN_145d07fa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d07fa0(void)

{
  FUN_145d0801a();
  _DAT_14c9bef90 = L"PassDataParam";
  DAT_14c9befba = FUN_140850cc5();
  _DAT_14c9bef98 = FUN_140ec6960();
  _DAT_14c9befa8 = &LAB_14682652b;
  _DAT_14c9befb0 = 0x100000118;
  _DAT_14c9befb8 = 0;
  _DAT_14c9befa0 = DAT_14c9beea8;
  DAT_14c9beea8 = &DAT_14c9bef90;
  return;
}



// FUNCTION 145d0801a FUN_145d0801a body=121 status=ok
// SIG undefined FUN_145d0801a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d0801a(void)

{
  FUN_145d08094();
  _DAT_14c9befc0 = L"Target0";
  DAT_14c9befea = FUN_140850cc5();
  _DAT_14c9befc8 = FUN_1410b9266();
  _DAT_14c9befd8 = &LAB_14682652b;
  _DAT_14c9befe0 = 0x10000011e;
  _DAT_14c9befe8 = 0;
  _DAT_14c9befd0 = DAT_14c9beea8;
  DAT_14c9beea8 = &DAT_14c9befc0;
  return;
}



// FUNCTION 145d08094 FUN_145d08094 body=121 status=ok
// SIG undefined FUN_145d08094(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d08094(void)

{
  FUN_145d0810e();
  _DAT_14c9beff0 = L"Target1";
  DAT_14c9bf01a = FUN_140850cc5();
  _DAT_14c9beff8 = FUN_1410b9266();
  _DAT_14c9bf008 = &LAB_14682652b;
  _DAT_14c9bf010 = 0x10000011f;
  _DAT_14c9bf018 = 0;
  _DAT_14c9bf000 = DAT_14c9beea8;
  DAT_14c9beea8 = &DAT_14c9beff0;
  return;
}



// FUNCTION 145d0810e FUN_145d0810e body=121 status=ok
// SIG undefined FUN_145d0810e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d0810e(void)

{
  FUN_145d08188();
  _DAT_14c9bf020 = L"Target2";
  DAT_14c9bf04a = FUN_140850cc5();
  _DAT_14c9bf028 = FUN_1410b9266();
  _DAT_14c9bf038 = &LAB_14682652b;
  _DAT_14c9bf040 = 0x100000120;
  _DAT_14c9bf048 = 0;
  _DAT_14c9bf030 = DAT_14c9beea8;
  DAT_14c9beea8 = &DAT_14c9bf020;
  return;
}



// FUNCTION 145d08188 FUN_145d08188 body=121 status=ok
// SIG undefined FUN_145d08188(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d08188(void)

{
  FUN_145d08202();
  _DAT_14c9bf050 = L"Target3";
  DAT_14c9bf07a = FUN_140850cc5();
  _DAT_14c9bf058 = FUN_1410b9266();
  _DAT_14c9bf068 = &LAB_14682652b;
  _DAT_14c9bf070 = 0x100000121;
  _DAT_14c9bf078 = 0;
  _DAT_14c9bf060 = DAT_14c9beea8;
  DAT_14c9beea8 = &DAT_14c9bf050;
  return;
}



// FUNCTION 145d08202 FUN_145d08202 body=121 status=ok
// SIG undefined FUN_145d08202(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d08202(void)

{
  FUN_145d0827c();
  _DAT_14c9bf080 = L"Target4";
  DAT_14c9bf0aa = FUN_140850cc5();
  _DAT_14c9bf088 = FUN_1410b9266();
  _DAT_14c9bf098 = &LAB_14682652b;
  _DAT_14c9bf0a0 = 0x100000122;
  _DAT_14c9bf0a8 = 0;
  _DAT_14c9bf090 = DAT_14c9beea8;
  DAT_14c9beea8 = &DAT_14c9bf080;
  return;
}



// FUNCTION 145d0827c FUN_145d0827c body=121 status=ok
// SIG undefined FUN_145d0827c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d0827c(void)

{
  FUN_145d082f6();
  _DAT_14c9bf0b0 = L"Target5";
  DAT_14c9bf0da = FUN_140850cc5();
  _DAT_14c9bf0b8 = FUN_1410b9266();
  _DAT_14c9bf0c8 = &LAB_14682652b;
  _DAT_14c9bf0d0 = 0x100000123;
  _DAT_14c9bf0d8 = 0;
  _DAT_14c9bf0c0 = DAT_14c9beea8;
  DAT_14c9beea8 = &DAT_14c9bf0b0;
  return;
}



// FUNCTION 145d082f6 FUN_145d082f6 body=121 status=ok
// SIG undefined FUN_145d082f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d082f6(void)

{
  FUN_145d08370();
  _DAT_14c9bf0e0 = L"Target6";
  DAT_14c9bf10a = FUN_140850cc5();
  _DAT_14c9bf0e8 = FUN_1410b9266();
  _DAT_14c9bf0f8 = &LAB_14682652b;
  _DAT_14c9bf100 = 0x100000124;
  _DAT_14c9bf108 = 0;
  _DAT_14c9bf0f0 = DAT_14c9beea8;
  DAT_14c9beea8 = &DAT_14c9bf0e0;
  return;
}



// FUNCTION 145d08370 FUN_145d08370 body=216 status=ok
// SIG undefined FUN_145d08370(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d08370(void)

{
  _DAT_14c9bf140 = L"Targets";
  DAT_14c9bf16a = FUN_140850cc5();
  _DAT_14c9bf148 = FUN_1410b9266();
  _DAT_14c9bf158 = &LAB_14682652b;
  _DAT_14c9bf160 = 0x100000126;
  _DAT_14c9bf168 = 0;
  _DAT_14c9bf150 = DAT_14c9beea8;
  DAT_14c9beea8 = &DAT_14c9bf140;
  _DAT_14c9bf110 = L"Target7";
  DAT_14c9bf13a = FUN_140850cc5();
  _DAT_14c9bf118 = FUN_1410b9266();
  _DAT_14c9bf128 = &LAB_14682652b;
  _DAT_14c9bf130 = 0x100000125;
  _DAT_14c9bf138 = 0;
  _DAT_14c9bf120 = DAT_14c9beea8;
  DAT_14c9beea8 = &DAT_14c9bf110;
  return;
}



// FUNCTION 145d08448 FUN_145d08448 body=225 status=ok
// SIG undefined FUN_145d08448(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d08448(void)

{
  _DAT_14c9bf170 = L"BASE";
  DAT_14c9bf19a = 4;
  _DAT_14c9bf178 = FUN_1411cad6c();
  _DAT_14c9bf180 = DAT_14c9beea8;
  _DAT_14c9bf188 = &LAB_14682652b;
  DAT_14c9beea8 = &DAT_14c9bf170;
  DAT_14c9beefd = DAT_14c9beefd + '\x01';
  _DAT_14c9bf190 = &DAT_100000108;
  if (*(char *)(_DAT_14c9bf178 + 100) != '\0') {
    DAT_14c9beefe = DAT_14c9beefe + '\x01';
  }
  _DAT_14c9bf1a0 = L"BASE";
  DAT_14c9bf1ca = 4;
  _DAT_14c9bf1a8 = FUN_141092e92();
  _DAT_14c9bf1b0 = DAT_14c9beea8;
  _DAT_14c9bf1b8 = &LAB_14682652b;
  DAT_14c9beea8 = &DAT_14c9bf1a0;
  DAT_14c9beefd = DAT_14c9beefd + '\x01';
  _DAT_14c9bf1c0 = 0x100000000;
  if (*(char *)(_DAT_14c9bf1a8 + 100) != '\0') {
    DAT_14c9beefe = DAT_14c9beefe + '\x01';
  }
  return;
}



// FUNCTION 145d0852a FUN_145d0852a body=287 status=ok
// SIG undefined FUN_145d0852a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d0852a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b5d20) {
    FUN_144b3d300(&DAT_14c9b5d20);
    if (DAT_14c9b5d20 == -1) {
      FUN_145d0864a();
      FUN_140db5666(&DAT_14c9b5c78,2,&DAT_14c9b5c10,
                    L"TBasePassCSTDistanceFieldShadowsAndLightMapPolicyHQSkylight",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",5,1,FUN_147130ade,
                    FUN_147130ab6,FUN_14175dc6e,&LAB_147130ab2,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9b5c78 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c940);
      _Init_thread_footer(&DAT_14c9b5d20);
    }
  }
  return &DAT_14c9b5c78;
}



// FUNCTION 145d0864a FUN_145d0864a body=205 status=ok
// SIG undefined FUN_145d0864a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d0864a(void)

{
  if ((DAT_14c9b5c77 & 2) == 0) {
    DAT_14c9b5c77 = DAT_14c9b5c77 | 2;
    _DAT_14c9b5c18 = L"TBasePassCSTDistanceFieldShadowsAndLightMapPolicyHQSkylight";
    _DAT_14c9b5c30 = FUN_146826540;
    _DAT_14c9b5c38 = FUN_146825d77;
    _DAT_14c9b5c40 = FUN_146825fd6;
    _DAT_14c9b5c48 = FUN_1407e02ea;
    _DAT_14c9b5c50 = FUN_146826273;
    _DAT_14c9b5c28 = FUN_147130a78;
    _DAT_14c9b5c68 = 0xffffffff00000128;
    _DAT_14c9b5c70 = 8;
    DAT_14c9b5c74 = 0;
    _DAT_14c9b5c58 = &LAB_147130aae;
    FUN_145d08718();
    FUN_1407e00cc(&DAT_14c9b5c10);
    return;
  }
  return;
}



// FUNCTION 145d08718 FUN_145d08718 body=133 status=ok
// SIG undefined FUN_145d08718(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d08718(void)

{
  _DAT_14c9bf8c0 = L"BASE";
  DAT_14c9bf8ea = 4;
  FUN_145d0879e();
  _DAT_14c9bf8d0 = DAT_14c9b5c20;
  _DAT_14c9bf8c8 = &DAT_14c9bf8f0;
  _DAT_14c9bf8d8 = &LAB_14682652b;
  DAT_14c9b5c20 = &DAT_14c9bf8c0;
  DAT_14c9b5c75 = DAT_14c9b5c75 + '\x01';
  _DAT_14c9bf8e0 = 0x100000000;
  if (DAT_14c9bf954 != '\0') {
    DAT_14c9b5c76 = DAT_14c9b5c76 + '\x01';
  }
  return;
}



// FUNCTION 145d0879e FUN_145d0879e body=200 status=ok
// SIG undefined FUN_145d0879e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d0879e(void)

{
  if ((DAT_14c9bf957 & 2) != 0) {
    return;
  }
  DAT_14c9bf957 = DAT_14c9bf957 | 2;
  _DAT_14c9bf8f8 = L"TBasePassComputeShaderBaseType";
  _DAT_14c9bf910 = FUN_146826540;
  _DAT_14c9bf918 = FUN_146825d77;
  _DAT_14c9bf920 = FUN_146825fd6;
  _DAT_14c9bf928 = FUN_1407e02ea;
  _DAT_14c9bf930 = FUN_146826273;
  _DAT_14c9bf908 = FUN_14713eb58;
  _DAT_14c9bf948 = 0xffffffff00000128;
  _DAT_14c9bf950 = 8;
  DAT_14c9bf954 = 0;
  _DAT_14c9bf938 = &LAB_14713eb8e;
  FUN_145d08866();
  FUN_1407e00cc(&DAT_14c9bf8f0);
  return;
}



// FUNCTION 145d08866 FUN_145d08866 body=133 status=ok
// SIG undefined FUN_145d08866(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d08866(void)

{
  _DAT_14c9bf958 = L"BASE";
  DAT_14c9bf982 = 4;
  FUN_145d088ec();
  _DAT_14c9bf968 = DAT_14c9bf900;
  _DAT_14c9bf960 = &DAT_14c9bf988;
  _DAT_14c9bf970 = &LAB_14682652b;
  DAT_14c9bf900 = &DAT_14c9bf958;
  DAT_14c9bf955 = DAT_14c9bf955 + '\x01';
  _DAT_14c9bf978 = 0x100000000;
  if (DAT_14c9bf9ec != '\0') {
    DAT_14c9bf956 = DAT_14c9bf956 + '\x01';
  }
  return;
}



// FUNCTION 145d088ec FUN_145d088ec body=210 status=ok
// SIG undefined FUN_145d088ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d088ec(void)

{
  if ((DAT_14c9bf9ef & 2) == 0) {
    DAT_14c9bf9ef = DAT_14c9bf9ef | 2;
    _DAT_14c9bf990 = L"TBasePassComputeShaderPolicyParamType";
    _DAT_14c9bf9a8 = FUN_146826540;
    _DAT_14c9bf9b0 = FUN_146825d77;
    _DAT_14c9bf9b8 = FUN_146825fd6;
    _DAT_14c9bf9c0 = FUN_1407e02ea;
    _DAT_14c9bf9c8 = FUN_146826273;
    _DAT_14c9bf9a0 = FUN_14713eb92;
    _DAT_14c9bf9e0 = 0xffffffff00000128;
    _DAT_14c9bf9e8 = 8;
    DAT_14c9bf9ec = 0;
    _DAT_14c9bf9d0 = &LAB_14713ebc8;
    FUN_145d089be();
    FUN_145d08fd4();
    FUN_1407e00cc(&DAT_14c9bf988);
    return;
  }
  return;
}



// FUNCTION 145d089be FUN_145d089be body=121 status=ok
// SIG undefined FUN_145d089be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d089be(void)

{
  FUN_145d08a38();
  _DAT_14c9bf9f0 = L"ReflectionCaptureBuffer";
  DAT_14c9bfa1a = FUN_140850cc5();
  _DAT_14c9bf9f8 = FUN_14106a12a();
  _DAT_14c9bfa08 = &LAB_14682652b;
  _DAT_14c9bfa10 = 0x10000010e;
  _DAT_14c9bfa18 = 0;
  _DAT_14c9bfa00 = DAT_14c9bf998;
  DAT_14c9bf998 = &DAT_14c9bf9f0;
  return;
}



// FUNCTION 145d08a38 FUN_145d08a38 body=121 status=ok
// SIG undefined FUN_145d08a38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d08a38(void)

{
  FUN_145d08ab2();
  _DAT_14c9bfa20 = L"ShadingOutputsParam";
  DAT_14c9bfa4a = FUN_140850cc5();
  _DAT_14c9bfa28 = FUN_14106a12a();
  _DAT_14c9bfa38 = &LAB_14682652b;
  _DAT_14c9bfa40 = 0x100000110;
  _DAT_14c9bfa48 = 0;
  _DAT_14c9bfa30 = DAT_14c9bf998;
  DAT_14c9bf998 = &DAT_14c9bfa20;
  return;
}



// FUNCTION 145d08ab2 FUN_145d08ab2 body=121 status=ok
// SIG undefined FUN_145d08ab2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d08ab2(void)

{
  FUN_145d08b2c();
  _DAT_14c9bfa50 = L"ViewRectParam";
  DAT_14c9bfa7a = FUN_140850cc5();
  _DAT_14c9bfa58 = FUN_140ec6960();
  _DAT_14c9bfa68 = &LAB_14682652b;
  _DAT_14c9bfa70 = 0x100000112;
  _DAT_14c9bfa78 = 0;
  _DAT_14c9bfa60 = DAT_14c9bf998;
  DAT_14c9bf998 = &DAT_14c9bfa50;
  return;
}



// FUNCTION 145d08b2c FUN_145d08b2c body=121 status=ok
// SIG undefined FUN_145d08b2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d08b2c(void)

{
  FUN_145d08ba6();
  _DAT_14c9bfa80 = L"PassDataParam";
  DAT_14c9bfaaa = FUN_140850cc5();
  _DAT_14c9bfa88 = FUN_140ec6960();
  _DAT_14c9bfa98 = &LAB_14682652b;
  _DAT_14c9bfaa0 = 0x100000118;
  _DAT_14c9bfaa8 = 0;
  _DAT_14c9bfa90 = DAT_14c9bf998;
  DAT_14c9bf998 = &DAT_14c9bfa80;
  return;
}



// FUNCTION 145d08ba6 FUN_145d08ba6 body=121 status=ok
// SIG undefined FUN_145d08ba6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d08ba6(void)

{
  FUN_145d08c20();
  _DAT_14c9bfab0 = L"Target0";
  DAT_14c9bfada = FUN_140850cc5();
  _DAT_14c9bfab8 = FUN_1410b9266();
  _DAT_14c9bfac8 = &LAB_14682652b;
  _DAT_14c9bfad0 = 0x10000011e;
  _DAT_14c9bfad8 = 0;
  _DAT_14c9bfac0 = DAT_14c9bf998;
  DAT_14c9bf998 = &DAT_14c9bfab0;
  return;
}



// FUNCTION 145d08c20 FUN_145d08c20 body=121 status=ok
// SIG undefined FUN_145d08c20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d08c20(void)

{
  FUN_145d08c9a();
  _DAT_14c9bfae0 = L"Target1";
  DAT_14c9bfb0a = FUN_140850cc5();
  _DAT_14c9bfae8 = FUN_1410b9266();
  _DAT_14c9bfaf8 = &LAB_14682652b;
  _DAT_14c9bfb00 = 0x10000011f;
  _DAT_14c9bfb08 = 0;
  _DAT_14c9bfaf0 = DAT_14c9bf998;
  DAT_14c9bf998 = &DAT_14c9bfae0;
  return;
}



// FUNCTION 145d08c9a FUN_145d08c9a body=121 status=ok
// SIG undefined FUN_145d08c9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d08c9a(void)

{
  FUN_145d08d14();
  _DAT_14c9bfb10 = L"Target2";
  DAT_14c9bfb3a = FUN_140850cc5();
  _DAT_14c9bfb18 = FUN_1410b9266();
  _DAT_14c9bfb28 = &LAB_14682652b;
  _DAT_14c9bfb30 = 0x100000120;
  _DAT_14c9bfb38 = 0;
  _DAT_14c9bfb20 = DAT_14c9bf998;
  DAT_14c9bf998 = &DAT_14c9bfb10;
  return;
}



// FUNCTION 145d08d14 FUN_145d08d14 body=121 status=ok
// SIG undefined FUN_145d08d14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d08d14(void)

{
  FUN_145d08d8e();
  _DAT_14c9bfb40 = L"Target3";
  DAT_14c9bfb6a = FUN_140850cc5();
  _DAT_14c9bfb48 = FUN_1410b9266();
  _DAT_14c9bfb58 = &LAB_14682652b;
  _DAT_14c9bfb60 = 0x100000121;
  _DAT_14c9bfb68 = 0;
  _DAT_14c9bfb50 = DAT_14c9bf998;
  DAT_14c9bf998 = &DAT_14c9bfb40;
  return;
}



// FUNCTION 145d08d8e FUN_145d08d8e body=121 status=ok
// SIG undefined FUN_145d08d8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d08d8e(void)

{
  FUN_145d08e08();
  _DAT_14c9bfb70 = L"Target4";
  DAT_14c9bfb9a = FUN_140850cc5();
  _DAT_14c9bfb78 = FUN_1410b9266();
  _DAT_14c9bfb88 = &LAB_14682652b;
  _DAT_14c9bfb90 = 0x100000122;
  _DAT_14c9bfb98 = 0;
  _DAT_14c9bfb80 = DAT_14c9bf998;
  DAT_14c9bf998 = &DAT_14c9bfb70;
  return;
}



// FUNCTION 145d08e08 FUN_145d08e08 body=121 status=ok
// SIG undefined FUN_145d08e08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d08e08(void)

{
  FUN_145d08e82();
  _DAT_14c9bfba0 = L"Target5";
  DAT_14c9bfbca = FUN_140850cc5();
  _DAT_14c9bfba8 = FUN_1410b9266();
  _DAT_14c9bfbb8 = &LAB_14682652b;
  _DAT_14c9bfbc0 = 0x100000123;
  _DAT_14c9bfbc8 = 0;
  _DAT_14c9bfbb0 = DAT_14c9bf998;
  DAT_14c9bf998 = &DAT_14c9bfba0;
  return;
}



// FUNCTION 145d08e82 FUN_145d08e82 body=121 status=ok
// SIG undefined FUN_145d08e82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d08e82(void)

{
  FUN_145d08efc();
  _DAT_14c9bfbd0 = L"Target6";
  DAT_14c9bfbfa = FUN_140850cc5();
  _DAT_14c9bfbd8 = FUN_1410b9266();
  _DAT_14c9bfbe8 = &LAB_14682652b;
  _DAT_14c9bfbf0 = 0x100000124;
  _DAT_14c9bfbf8 = 0;
  _DAT_14c9bfbe0 = DAT_14c9bf998;
  DAT_14c9bf998 = &DAT_14c9bfbd0;
  return;
}



// FUNCTION 145d08efc FUN_145d08efc body=216 status=ok
// SIG undefined FUN_145d08efc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d08efc(void)

{
  _DAT_14c9bfc30 = L"Targets";
  DAT_14c9bfc5a = FUN_140850cc5();
  _DAT_14c9bfc38 = FUN_1410b9266();
  _DAT_14c9bfc48 = &LAB_14682652b;
  _DAT_14c9bfc50 = 0x100000126;
  _DAT_14c9bfc58 = 0;
  _DAT_14c9bfc40 = DAT_14c9bf998;
  DAT_14c9bf998 = &DAT_14c9bfc30;
  _DAT_14c9bfc00 = L"Target7";
  DAT_14c9bfc2a = FUN_140850cc5();
  _DAT_14c9bfc08 = FUN_1410b9266();
  _DAT_14c9bfc18 = &LAB_14682652b;
  _DAT_14c9bfc20 = 0x100000125;
  _DAT_14c9bfc28 = 0;
  _DAT_14c9bfc10 = DAT_14c9bf998;
  DAT_14c9bf998 = &DAT_14c9bfc00;
  return;
}



// FUNCTION 145d08fd4 FUN_145d08fd4 body=225 status=ok
// SIG undefined FUN_145d08fd4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d08fd4(void)

{
  _DAT_14c9bfc60 = L"BASE";
  DAT_14c9bfc8a = 4;
  _DAT_14c9bfc68 = FUN_1411cad6c();
  _DAT_14c9bfc70 = DAT_14c9bf998;
  _DAT_14c9bfc78 = &LAB_14682652b;
  DAT_14c9bf998 = &DAT_14c9bfc60;
  DAT_14c9bf9ed = DAT_14c9bf9ed + '\x01';
  _DAT_14c9bfc80 = &DAT_100000108;
  if (*(char *)(_DAT_14c9bfc68 + 100) != '\0') {
    DAT_14c9bf9ee = DAT_14c9bf9ee + '\x01';
  }
  _DAT_14c9bfc90 = L"BASE";
  DAT_14c9bfcba = 4;
  _DAT_14c9bfc98 = FUN_141092e92();
  _DAT_14c9bfca0 = DAT_14c9bf998;
  _DAT_14c9bfca8 = &LAB_14682652b;
  DAT_14c9bf998 = &DAT_14c9bfc90;
  DAT_14c9bf9ed = DAT_14c9bf9ed + '\x01';
  _DAT_14c9bfcb0 = 0x100000000;
  if (*(char *)(_DAT_14c9bfc98 + 100) != '\0') {
    DAT_14c9bf9ee = DAT_14c9bf9ee + '\x01';
  }
  return;
}



// FUNCTION 145d090b6 FUN_145d090b6 body=57 status=ok
// SIG undefined FUN_145d090b6(void)

void FUN_145d090b6(longlong param_1)

{
  FUN_145ade3fe(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_145d090f0(param_1 + 0x18);
    return;
  }
  return;
}



// FUNCTION 145d090f0 FUN_145d090f0 body=48 status=ok
// SIG undefined FUN_145d090f0(void)

void FUN_145d090f0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 145d0912c FUN_145d0912c body=115 status=ok
// SIG undefined FUN_145d0912c(void)

undefined8 * FUN_145d0912c(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14a3b8810;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa7b50) {
    FUN_144b3d300(&DAT_14caa7b50);
    if (DAT_14caa7b50 == -1) {
      FUN_1415307fe();
      atexit((_func_5014 *)&LAB_143270ad6);
      _Init_thread_footer(&DAT_14caa7b50);
    }
  }
  return param_1;
}



// FUNCTION 145d091aa FUN_145d091aa body=115 status=ok
// SIG undefined FUN_145d091aa(void)

undefined8 * FUN_145d091aa(undefined8 *param_1)

{
  FUN_140f188b8();
  *param_1 = &PTR_FUN_14a3d6ae0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa7c58) {
    FUN_144b3d300(&DAT_14caa7c58);
    if (DAT_14caa7c58 == -1) {
      FUN_141530898();
      atexit((_func_5014 *)&LAB_143270b3a);
      _Init_thread_footer(&DAT_14caa7c58);
    }
  }
  return param_1;
}



// FUNCTION 145d0921e FUN_145d0921e body=38 status=ok
// SIG undefined FUN_145d0921e(void)

undefined8 FUN_145d0921e(undefined8 param_1,int param_2)

{
  FUN_145d09244();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d09244 FUN_145d09244 body=102 status=ok
// SIG undefined FUN_145d09244(void)

void FUN_145d09244(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5a4840;
  param_1[1] = &PTR_FUN_14a5a48a0;
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_1458e7f7d(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1410c966c(param_1 + 1);
  return;
}



// FUNCTION 145d092b6 FUN_145d092b6 body=129 status=ok
// SIG undefined FUN_145d092b6(void)

undefined8 * FUN_145d092b6(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14a67faf0;
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
  return param_1;
}



// FUNCTION 145d09342 FUN_145d09342 body=129 status=ok
// SIG undefined FUN_145d09342(void)

undefined8 * FUN_145d09342(undefined8 *param_1)

{
  FUN_144a0768c();
  *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf0 | 3;
  *param_1 = &PTR_FUN_14a6d0930;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x75) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x3f80000040000000;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0x14 | 0x80;
  return param_1;
}



// FUNCTION 145d093c8 FUN_145d093c8 body=135 status=ok
// SIG undefined FUN_145d093c8(void)

void FUN_145d093c8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400ead26(puVar1,param_1);
  *puVar1 = &PTR_FUN_14a865560;
  puVar1[5] = &PTR_LAB_14a865b50;
  puVar1[6] = &PTR_LAB_14a865b90;
  puVar1[0x55] = 0;
  puVar1[0x57] = 0;
  puVar1[0x5c] = 0;
  puVar1[0x5d] = 0;
  FUN_144a78564(puVar1 + 0x61);
  *(undefined4 *)((longlong)puVar1 + 0x2c4) = 0x3f800000;
  *(undefined1 *)((longlong)puVar1 + 0x1fb) = 0;
  puVar1[0x5e] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x304) = 0x3f800000;
  *(undefined1 *)(puVar1 + 0x60) = 0;
  return;
}



// FUNCTION 145d0945a FUN_145d0945a body=129 status=ok
// SIG undefined FUN_145d0945a(void)

undefined8 * FUN_145d0945a(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14aa9e930;
  param_1[6] = &PTR_FUN_14a7fed40;
  param_1[7] = 0;
  param_1[8] = 0x3f80000044160000;
  param_1[9] = 0x447a00003f800000;
  param_1[10] = &DAT_3f8000003f800000;
  param_1[0xb] = 0x3f80000044fa0000;
  param_1[0xc] = 0x461c40003f800000;
  param_1[0xd] = &DAT_3f8000003f800000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe;
  param_1[0x10] = 0x3e4ccccd00000000;
  param_1[0x11] = 0x3e4ccccdbf800000;
  return param_1;
}



// FUNCTION 145d094e0 FUN_145d094e0 body=135 status=ok
// SIG undefined FUN_145d094e0(void)

void FUN_145d094e0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_14007ca06();
  FUN_144805d84(puVar1,uVar2);
  *puVar1 = &PTR_FUN_14aafa6d0;
  puVar1[5] = &PTR_FUN_14aafab70;
  puVar1[6] = &PTR_LAB_14aafabb0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x28] = 0;
  puVar1[0x25] = &PTR_FUN_14a184370;
  *(undefined4 *)(puVar1 + 0x29) = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  *(undefined1 *)(puVar1 + 0x28) = 0;
  *(byte *)((longlong)puVar1 + 0x14c) = *(byte *)((longlong)puVar1 + 0x14c) & 0xfe;
  return;
}



// FUNCTION 145d09568 FUN_145d09568 body=40 status=ok
// SIG undefined FUN_145d09568(void)

undefined8 FUN_145d09568(undefined8 param_1,int param_2)

{
  FUN_145d09590();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d09590 FUN_145d09590 body=100 status=ok
// SIG undefined FUN_145d09590(void)

void FUN_145d09590(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac94420;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d095f4 FUN_145d095f4 body=43 status=ok
// SIG undefined FUN_145d095f4(void)

undefined8 FUN_145d095f4(undefined8 param_1,int param_2)

{
  FUN_141530932();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 145d09624 FUN_145d09624 body=135 status=ok
// SIG undefined FUN_145d09624(void)

void FUN_145d09624(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144805d84(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b121200;
  puVar1[5] = &PTR_FUN_14b121680;
  puVar1[6] = &PTR_LAB_14b1216c0;
  puVar1[0x22] = &PTR_FUN_14b121710;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  FUN_1406516ce(puVar1 + 0x27);
  puVar1[0xa6] = 0;
  puVar1[0xa7] = 0;
  puVar1[0xa8] = 0;
  puVar1[0xa9] = 0;
  puVar1[0xaa] = 0;
  return;
}



// FUNCTION 145d096ac FUN_145d096ac body=70 status=ok
// SIG undefined FUN_145d096ac(void)

void FUN_145d096ac(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = (**(code **)(*(longlong *)(param_1 + 0x1c0) + 0x10))(param_1 + 0x1c0);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x50) = param_3;
      return;
    }
  }
  return;
}



// FUNCTION 145d096f4 FUN_145d096f4 body=40 status=ok
// SIG undefined FUN_145d096f4(void)

undefined8 FUN_145d096f4(undefined8 param_1,int param_2)

{
  FUN_145d0971c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d0971c FUN_145d0971c body=100 status=ok
// SIG undefined FUN_145d0971c(void)

void FUN_145d0971c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bab8de0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1458c19d0(param_1 + 8);
  *param_1 = &PTR_FUN_14bab8600;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d0978c FUN_145d0978c body=129 status=ok
// SIG undefined FUN_145d0978c(void)

undefined8 * FUN_145d0978c(undefined8 *param_1)

{
  FUN_1406ed334();
  *param_1 = &PTR_FUN_14bccddd0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  FUN_1446f8bcc(param_1 + 0x26,0);
  *(undefined1 **)((longlong)param_1 + 0x114) = &DAT_ff7fffffff7fffff;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x3f800000;
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) & 0xfe;
  *(undefined2 *)((longlong)param_1 + 0xd9) = 0x101;
  *(undefined2 *)(param_1 + 0xb) = 0x201;
  return param_1;
}



// FUNCTION 145d0980e FUN_145d0980e body=40 status=ok
// SIG undefined FUN_145d0980e(void)

undefined8 FUN_145d0980e(undefined8 param_1,int param_2)

{
  FUN_145d09836();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d09836 FUN_145d09836 body=197 status=ok
// SIG undefined FUN_145d09836(void)

void FUN_145d09836(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd93300;
  param_1[5] = &PTR_FUN_14bd936f0;
  param_1[0x13] = &PTR_FUN_14bd93710;
  param_1[0x15] = &PTR_FUN_14bd93740;
  param_1[0x16] = &PTR_FUN_14bd93780;
  param_1[0x20] = &PTR_FUN_14bd937b0;
  FUN_145d098fb(param_1[0x99],*(undefined4 *)(param_1 + 0x9a));
  if (param_1[0x99] != 0) {
    FUN_1400020a8();
  }
  FUN_1457e5b52(param_1 + 0x7e);
  param_1[0x4c] = &PTR_FUN_14bd93990;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_145aba0b4(param_1 + 0x4c);
  thunk_FUN_1411412f4(param_1);
  return;
}



// FUNCTION 145d098fb FUN_145d098fb body=43 status=ok
// SIG undefined FUN_145d098fb(void)

void FUN_145d098fb(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14967f37e(param_1);
    param_1 = param_1 + 0x98;
  }
  return;
}



// FUNCTION 145d09926 FUN_145d09926 body=776 status=ok
// SIG undefined FUN_145d09926(void)

void FUN_145d09926(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1412719b8();
  if ((*(byte *)(param_1 + 0x1b0) & 1) == 0) {
    if (*(longlong *)(param_1 + 0x180) != 0) {
      local_28 = 0xbf800000;
LAB_145d09966:
      local_24 = 1;
      local_20 = 0;
      uStack_18 = 0;
      FUN_145d09c30();
    }
  }
  else if (*(longlong *)(param_1 + 0x180) != 0) {
    local_28 = *(undefined4 *)(param_1 + 400);
    goto LAB_145d09966;
  }
  if ((*(byte *)(param_1 + 0x1b0) & 2) == 0) {
    if (*(longlong *)(param_1 + 0x180) != 0) {
      local_28 = 0xbf800000;
LAB_145d0999a:
      local_24 = 1;
      local_20 = 0;
      uStack_18 = 0;
      FUN_145d09c5c();
    }
  }
  else if (*(longlong *)(param_1 + 0x180) != 0) {
    local_28 = *(undefined4 *)(param_1 + 0x194);
    goto LAB_145d0999a;
  }
  if ((*(byte *)(param_1 + 0x1b0) & 4) == 0) {
    if (*(longlong *)(param_1 + 0x180) != 0) {
      local_28 = 0xbf800000;
LAB_145d099ce:
      local_24 = 1;
      local_20 = 0;
      uStack_18 = 0;
      FUN_145d09c88();
    }
  }
  else if (*(longlong *)(param_1 + 0x180) != 0) {
    local_28 = *(undefined4 *)(param_1 + 0x198);
    goto LAB_145d099ce;
  }
  if ((*(byte *)(param_1 + 0x1b0) & 8) == 0) {
    if (*(longlong *)(param_1 + 0x180) != 0) {
      local_28 = 0xbf800000;
LAB_145d09a02:
      local_24 = 1;
      local_20 = 0;
      uStack_18 = 0;
      FUN_145d09cb4();
    }
  }
  else if (*(longlong *)(param_1 + 0x180) != 0) {
    local_28 = *(undefined4 *)(param_1 + 0x19c);
    goto LAB_145d09a02;
  }
  if ((*(byte *)(param_1 + 0x1b0) & 0x10) == 0) {
    if (*(longlong *)(param_1 + 0x180) != 0) {
      local_28 = 0xbf800000;
LAB_145d09a36:
      local_24 = 1;
      local_20 = 0;
      uStack_18 = 0;
      FUN_145d09ce0();
    }
  }
  else if (*(longlong *)(param_1 + 0x180) != 0) {
    local_28 = *(undefined4 *)(param_1 + 0x1a0);
    goto LAB_145d09a36;
  }
  if ((*(byte *)(param_1 + 0x1b0) & 0x20) == 0) {
    if (*(longlong *)(param_1 + 0x180) != 0) {
      local_28 = 0xbf800000;
LAB_145d09a6a:
      local_24 = 1;
      local_20 = 0;
      uStack_18 = 0;
      FUN_145d09d0c();
    }
  }
  else if (*(longlong *)(param_1 + 0x180) != 0) {
    local_28 = *(undefined4 *)(param_1 + 0x1a4);
    goto LAB_145d09a6a;
  }
  if ((*(byte *)(param_1 + 0x1b0) & 0x40) == 0) {
    if (*(longlong *)(param_1 + 0x180) != 0) {
      local_28 = 0xbf800000;
LAB_145d09a9e:
      local_24 = 1;
      local_20 = 0;
      uStack_18 = 0;
      FUN_145d09d38();
    }
  }
  else if (*(longlong *)(param_1 + 0x180) != 0) {
    local_28 = *(undefined4 *)(param_1 + 0x1a8);
    goto LAB_145d09a9e;
  }
  if (*(char *)(param_1 + 0x1b0) < '\0') {
    if (*(longlong *)(param_1 + 0x180) == 0) goto LAB_145d09ae2;
    local_28 = *(undefined4 *)(param_1 + 0x1ac);
  }
  else {
    if (*(longlong *)(param_1 + 0x180) == 0) goto LAB_145d09ae2;
    local_28 = 0xbf800000;
  }
  local_24 = 1;
  local_20 = 0;
  uStack_18 = 0;
  FUN_145d09d64();
LAB_145d09ae2:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d09c30 FUN_145d09c30 body=43 status=ok
// SIG undefined FUN_145d09c30(void)

void FUN_145d09c30(longlong param_1,longlong param_2)

{
  FUN_140a58a98(param_1 + 0x230,param_1,param_2);
  FUN_1449db362(param_2 + 8);
  return;
}



// FUNCTION 145d09c5c FUN_145d09c5c body=43 status=ok
// SIG undefined FUN_145d09c5c(void)

void FUN_145d09c5c(longlong param_1,longlong param_2)

{
  FUN_140a58a98(param_1 + 0x234,param_1,param_2);
  FUN_1449db362(param_2 + 8);
  return;
}



// FUNCTION 145d09c88 FUN_145d09c88 body=43 status=ok
// SIG undefined FUN_145d09c88(void)

void FUN_145d09c88(longlong param_1,longlong param_2)

{
  FUN_140a58a98(param_1 + 0x238,param_1,param_2);
  FUN_1449db362(param_2 + 8);
  return;
}



// FUNCTION 145d09cb4 FUN_145d09cb4 body=43 status=ok
// SIG undefined FUN_145d09cb4(void)

void FUN_145d09cb4(longlong param_1,longlong param_2)

{
  FUN_140a58a98(param_1 + 0x23c,param_1,param_2);
  FUN_1449db362(param_2 + 8);
  return;
}



// FUNCTION 145d09ce0 FUN_145d09ce0 body=43 status=ok
// SIG undefined FUN_145d09ce0(void)

void FUN_145d09ce0(longlong param_1,longlong param_2)

{
  FUN_140a58a98(param_1 + 0x240,param_1,param_2);
  FUN_1449db362(param_2 + 8);
  return;
}



// FUNCTION 145d09d0c FUN_145d09d0c body=43 status=ok
// SIG undefined FUN_145d09d0c(void)

void FUN_145d09d0c(longlong param_1,longlong param_2)

{
  FUN_140a58a98(param_1 + 0x244,param_1,param_2);
  FUN_1449db362(param_2 + 8);
  return;
}



// FUNCTION 145d09d38 FUN_145d09d38 body=43 status=ok
// SIG undefined FUN_145d09d38(void)

void FUN_145d09d38(longlong param_1,longlong param_2)

{
  FUN_140a58a98(param_1 + 0x248,param_1,param_2);
  FUN_1449db362(param_2 + 8);
  return;
}



// FUNCTION 145d09d64 FUN_145d09d64 body=43 status=ok
// SIG undefined FUN_145d09d64(void)

void FUN_145d09d64(longlong param_1,longlong param_2)

{
  FUN_140a58a98(param_1 + 0x24c,param_1,param_2);
  FUN_1449db362(param_2 + 8);
  return;
}



// FUNCTION 145d09d90 FUN_145d09d90 body=261 status=ok
// SIG undefined FUN_145d09d90(void)

void FUN_145d09d90(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar1 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b4da5c0;
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
  local_48[2] = lVar3;
  *local_48 = &PTR_FUN_14b9b4ab0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_1);
  puVar1[4] = param_1;
  *(undefined4 *)(puVar1 + 5) = param_4;
  *(undefined1 *)((longlong)puVar1 + 0x2c) = param_5;
  FUN_145d09e96(param_2,param_3,&local_48);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d09e96 FUN_145d09e96 body=263 status=ok
// SIG undefined FUN_145d09e96(void)

void FUN_145d09e96(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [16];
  longlong local_a0;
  int local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  code *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1401e7e86(local_b0);
  local_c8 = 0;
  FUN_14485c47a(&local_c8,param_1);
  local_88 = *param_3;
  *param_3 = 0;
  local_80 = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)(param_3 + 1) = 0;
  local_50 = FUN_143ef9064;
  local_48 = &LAB_143ef9178;
  local_40 = &LAB_143ef919e;
  local_38 = FUN_143ef91d2;
  local_90 = local_c8;
  local_c0 = 0;
  local_b8 = 0;
  FUN_14482e566(local_b0);
  local_d0 = local_98 + local_a0;
  local_d8 = local_a0;
  bifrost::http::get(&local_d8,&local_90);
  FUN_1449db362(&local_c0);
  FUN_1401e7e48(local_b0);
  FUN_1449db362(param_3);
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d09f9e FUN_145d09f9e body=271 status=ok
// SIG undefined FUN_145d09f9e(void)

void FUN_145d09f9e(undefined8 param_1,longlong *param_2,char param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RBP;
  bool bVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined1 local_50 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  short local_34 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_2 != 0) {
    bVar4 = *param_2 == DAT_14cb71810;
    uVar1 = FUN_1403b0700();
    FUN_145d0a0ae(uVar1);
    uVar1 = FUN_1403b0700(param_1);
    FUN_145d0a0b4(uVar1,param_2,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar4) & 0xffffffff);
    FUN_145d0a3fc(param_1);
    if (param_3 != '\0') {
      lVar2 = FUN_1447210f0(param_1);
      if (lVar2 != 0) {
        lVar3 = FUN_1400f6f32(lVar2);
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = *(longlong *)(lVar3 + 0x68);
        }
        lVar2 = FUN_1400f6f32(lVar2);
        if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x30), lVar2 != 0 && lVar3 != 0)) {
          FUN_14042af24(lVar3,local_34,param_1);
          if (-1 < local_34[0]) {
            local_58 = &local_48;
            local_48 = 0;
            uStack_40 = 0;
            FUN_1457cd3ba(lVar2,local_50,local_34,0);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d0a0ae FUN_145d0a0ae body=5 status=ok
// SIG undefined FUN_145d0a0ae(void)

void FUN_145d0a0ae(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



// FUNCTION 145d0a0b4 FUN_145d0a0b4 body=665 status=ok
// SIG undefined FUN_145d0a0b4(void)

void FUN_145d0a0b4(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar10 = FUN_14479d2ce(param_1 + 0x30);
  if (lVar10 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    uVar11 = FUN_14477b664(*(undefined8 *)(param_1 + 0x40));
    lVar12 = FUN_14477b664(uVar11);
    lVar13 = DAT_14cb71810;
    lVar5 = *(longlong *)(param_1 + 0x38);
    if ((lVar5 == DAT_14cb71810 || lVar5 == 0) || ((*(byte *)(lVar10 + 0x39a) & 8) == 0)) {
      lVar14 = *param_2;
      if (*param_2 == 0) {
        lVar14 = DAT_14cb71810;
      }
      if (lVar5 != lVar14) {
        *(undefined8 *)(param_1 + 0x48) = 0;
      }
      *plVar1 = lVar14;
      if (param_3 != '\0') goto LAB_145d0a156;
      lVar5 = *param_2;
      if ((lVar5 != 0) && (lVar5 != lVar13)) {
        *(longlong *)(lVar10 + 0x530) = lVar5;
      }
    }
    else if (param_3 != '\0') goto LAB_145d0a156;
    *(undefined8 *)(param_1 + 0x50) = 0;
    plVar6 = *(longlong **)(param_1 + 0x58);
    if (plVar6 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x58) = 0;
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar3 = (int *)((longlong)plVar6 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (((*param_2 == 0) || (*param_2 == DAT_14cb71810)) && (*(longlong *)(lVar10 + 0x408) != 0)) {
      lVar13 = FUN_144a78b9e();
      lVar5 = *(longlong *)(lVar10 + 0x408);
      if (((lVar5 != 0) && (lVar13 != 0)) &&
         ((lVar14 = *(longlong *)(lVar5 + 0x10), lVar14 != 0 &&
          ((*(int *)(lVar13 + 0x38) <= *(int *)(lVar14 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) ==
            lVar13 + 0x30)))))) {
        uVar11 = (**(code **)(*(longlong *)(lVar5 + 0x10b0) + 0x28))(lVar5 + 0x10b0);
        local_50 = 0;
        FUN_1410674bc(uVar11,&local_50,0);
      }
    }
    local_68 = lVar10;
    if (lVar12 == 0) {
      uVar11 = FUN_140355b7c();
      lVar12 = FUN_14477b664(uVar11);
    }
    lVar10 = *(longlong *)(param_1 + 0x40);
    local_60 = param_2;
    if (lVar10 == 0) {
      lVar10 = FUN_140355b7c();
    }
    lVar5 = *plVar1;
    uVar11 = FUN_14477b664(lVar10);
    local_50 = lVar5;
    uVar8 = FUN_144a7891a(uVar11);
    local_58 = uVar4;
    uVar9 = FUN_144a7891a(lVar12);
    local_78 = uVar11;
    local_70 = &local_50;
    cVar7 = FUN_144a789b8(uVar9,lVar12,&local_58,uVar8);
    plVar6 = local_60;
    if (cVar7 == '\0') {
      FUN_145d0a34e(&DAT_14cb717f8,local_68,plVar1);
      if ((*plVar6 != 0) && (*plVar6 != DAT_14cb71810)) {
        FUN_14079241e(param_1);
      }
    }
  }
LAB_145d0a156:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d0a34e FUN_145d0a34e body=173 status=ok
// SIG undefined FUN_145d0a34e(void)

void FUN_145d0a34e(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_145d0a3e5;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145d0a3e5:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145d0a3fc FUN_145d0a3fc body=945 status=ok
// SIG undefined FUN_145d0a3fc(void)

void FUN_145d0a3fc(longlong param_1)

{
  void **ppvVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  void *_Src;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  ushort uVar11;
  ulonglong uVar12;
  ushort uVar13;
  ulonglong uVar14;
  undefined1 auStack_98 [32];
  void **local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  short local_44 [2];
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = FUN_1403b0700();
  lVar10 = *(longlong *)(lVar7 + 0x38);
  if ((lVar10 == 0) || (lVar10 == DAT_14cb71810)) {
    if (lVar10 == DAT_14cb71810) {
      lVar10 = FUN_1403ca102(param_1);
      if (lVar10 != 0) {
        cVar4 = FUN_1410cda3e(lVar10);
        if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
        }
      }
    }
  }
  else {
    ppvVar1 = (void **)(param_1 + 0x728);
    if (1 < *(int *)(param_1 + 0x730)) {
      lVar10 = 0;
      while( true ) {
        uVar11 = *(ushort *)((longlong)*ppvVar1 + lVar10);
        uVar12 = (ulonglong)uVar11;
        uVar13 = *(ushort *)((longlong)L"Default" + lVar10);
        if (uVar11 != uVar13) break;
        if (uVar11 == 0) goto LAB_145d0a4a2;
LAB_145d0a476:
        lVar10 = lVar10 + 2;
      }
      if ((uVar13 | uVar11) < 0x80) {
        uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
        uVar14 = (ulonglong)uVar13;
        uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
        if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar14]) goto LAB_145d0a476;
      }
      if (uVar11 != uVar13) goto LAB_145d0a50b;
    }
LAB_145d0a4a2:
    FUN_145d0a7c8(param_1,&local_40);
    _Src = local_40;
    if (ppvVar1 != &local_40) {
      *(int *)(param_1 + 0x730) = local_38;
      if (local_38 == 0 && *(int *)(param_1 + 0x734) == 0) {
        *(undefined4 *)(param_1 + 0x734) = 0;
      }
      else {
        FUN_1446dd670(ppvVar1,local_38);
        if (local_38 != 0) {
          memcpy(*ppvVar1,_Src,(longlong)local_38 * 2);
        }
      }
    }
    if (local_40 != (void *)0x0) {
      FUN_1400020a8();
    }
LAB_145d0a50b:
    lVar10 = FUN_1447210f0(param_1);
    if (lVar10 != 0) {
      iVar5 = FUN_14490d72a(lVar10);
      if (iVar5 == 3) {
        FUN_140b9fa66(param_1,0);
        goto LAB_145d0a6d5;
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x168);
    if (plVar2 != (longlong *)0x0) {
      lVar8 = FUN_144a5dd5e();
      if ((((*(int *)(lVar8 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
            lVar8 + 0x30)) && (*(char *)((longlong)plVar2 + 0xd69) == '\0')) &&
         (lVar8 = plVar2[0x7a], lVar8 != 0)) {
        (**(code **)(*plVar2 + 0x6b0))(plVar2,0);
        uVar9 = FUN_1447210f0(param_1);
        FUN_1412f3774(uVar9,lVar8,1,1);
      }
    }
    FUN_145891a30(lVar7);
    if (lVar10 != 0) {
      lVar10 = FUN_1400f6f32(lVar10);
      if ((lVar10 != 0) && (lVar10 = *(longlong *)(lVar10 + 0x68), lVar10 != 0)) {
        FUN_14042af24(lVar10,local_44,param_1);
        if (-1 < local_44[0]) {
          uVar6 = FUN_1402d8968(lVar10,local_44);
          if (uVar6 < 3) {
            if (*(longlong *)(param_1 + 0xf10) == 0) {
              FUN_140056680(&local_40,L"OakPlayerState.PostAssignCharacterDef");
              local_60 = (undefined8 *)0x0;
              local_58 = 0;
              FUN_1446efa72(&local_60,0,3,0x10);
              puVar3 = local_60;
              local_58 = 3;
              *local_60 = &PTR_LAB_14b3e9ca0;
              LOCK();
              UNLOCK();
              lVar8 = DAT_14c758608 + 1;
              lVar7 = DAT_14c758608 + 1;
              if (lVar8 == 0) {
                LOCK();
                UNLOCK();
                lVar8 = DAT_14c758608 + 2;
                lVar7 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar7;
              local_60[2] = lVar8;
              *local_60 = &PTR_FUN_14b996ab0;
              local_60[3] = 0;
              FUN_14485c47a(local_60 + 3,param_1);
              puVar3[4] = FUN_145fed9cc;
              *(undefined4 *)(puVar3 + 5) = 0;
              local_68 = 1;
              local_70 = 0x80000;
              local_78 = &local_40;
              FUN_1413d987a(lVar10,&local_50,local_44,&local_60);
              *(undefined8 *)(param_1 + 0xf10) = local_50;
              FUN_1449db362(&local_60);
              if (local_40 != (void *)0x0) {
                FUN_1400020a8();
              }
            }
          }
          else {
            local_78 = &local_40;
            FUN_145fed9cc(param_1);
          }
        }
      }
    }
  }
LAB_145d0a6d5:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d0a7c8 FUN_145d0a7c8 body=264 status=ok
// SIG undefined FUN_145d0a7c8(void)

undefined8 * FUN_145d0a7c8(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = FUN_1403b0700();
  lVar5 = *(longlong *)(lVar2 + 0x40);
  if (lVar5 == 0) {
    uVar3 = FUN_140355b7c();
    lVar5 = FUN_14477b664(uVar3);
    *(longlong *)(lVar2 + 0x40) = lVar5;
  }
  plVar4 = *(longlong **)(lVar2 + 0x48);
  if (plVar4 == (longlong *)0x0) {
    if (lVar5 == 0) {
      return param_2;
    }
    if (*(longlong *)(lVar2 + 0x38) == 0) {
      return param_2;
    }
    plVar4 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar1 == '\0')) {
      *(undefined8 *)(lVar2 + 0x48) = 0;
      return param_2;
    }
    uVar3 = (**(code **)(*plVar4 + 0x110))(plVar4);
    plVar4 = (longlong *)FUN_144aff482(uVar3,(longlong *)(lVar2 + 0x38));
    *(longlong **)(lVar2 + 0x48) = plVar4;
    if (plVar4 == (longlong *)0x0) {
      return param_2;
    }
  }
  lVar5 = (**(code **)(*plVar4 + 8))(plVar4);
  lVar2 = FUN_1401548e0();
  if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    if ((char)plVar4[0x1bb] == '\x01') {
      FUN_145d0a8d0(plVar4,param_2);
    }
    else {
      FUN_140cac256(plVar4,param_2);
    }
  }
  return param_2;
}



// FUNCTION 145d0a8d0 FUN_145d0a8d0 body=211 status=ok
// SIG undefined FUN_145d0a8d0(void)

undefined8 FUN_145d0a8d0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0xdd8) == '\x01') {
    lVar5 = *(longlong *)(param_1 + 0xde8);
    if (lVar5 == 0) {
      uVar3 = FUN_140da11f2();
      lVar5 = FUN_14477b664(uVar3);
      *(longlong *)(param_1 + 0xde8) = lVar5;
    }
    lVar4 = *(longlong *)(param_1 + 0xdf0);
    if (lVar4 != 0) {
LAB_145d0a95b:
      FUN_140cac328(lVar4,*(undefined1 *)(param_1 + 0xea0),param_2);
      return 1;
    }
    if (lVar5 == 0) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0xde0) == 0) {
      return 0;
    }
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      *(undefined8 *)(param_1 + 0xdf0) = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar4 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0xde0));
      *(longlong *)(param_1 + 0xdf0) = lVar4;
      if (lVar4 != 0) goto LAB_145d0a95b;
    }
  }
  return 0;
}



// FUNCTION 145d0a9a4 FUN_145d0a9a4 body=292 status=ok
// SIG undefined FUN_145d0a9a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145d0a9a4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2eb38) {
    FUN_144b3d300(&DAT_14ca2eb38);
    if (DAT_14ca2eb38 == -1) {
      FUN_145d0ac12();
      FUN_145d0aac8();
      FUN_140db5666(&DAT_14ca2ea90,0,&DAT_14ca2ea28,L"FMotionBlurVelocityDilateGatherCS",
                    L"/Engine/Private/MotionBlur/MotionBlurTileGather.usf",L"MainCS",5,2,
                    FUN_147297c44,FUN_147297be4,&LAB_147297bcc,&LAB_147297bc8,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca331b0);
      _DAT_14ca2ea90 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142eff09a);
      _Init_thread_footer(&DAT_14ca2eb38);
    }
  }
  return &DAT_14ca2ea90;
}



// FUNCTION 145d0aac8 FUN_145d0aac8 body=205 status=ok
// SIG undefined FUN_145d0aac8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d0aac8(void)

{
  if ((DAT_14ca2ea8f & 2) == 0) {
    DAT_14ca2ea8f = DAT_14ca2ea8f | 2;
    _DAT_14ca2ea30 = L"FMotionBlurVelocityDilateGatherCS";
    _DAT_14ca2ea48 = FUN_146826540;
    _DAT_14ca2ea50 = FUN_146825d77;
    _DAT_14ca2ea58 = FUN_146825fd6;
    _DAT_14ca2ea60 = FUN_1407e02ea;
    _DAT_14ca2ea68 = FUN_146826273;
    _DAT_14ca2ea40 = FUN_147297b98;
    _DAT_14ca2ea80 = 0xffffffff000000e0;
    _DAT_14ca2ea88 = 8;
    DAT_14ca2ea8c = 0;
    _DAT_14ca2ea70 = &LAB_147297bc4;
    FUN_145d0ab96();
    FUN_1407e00cc(&DAT_14ca2ea28);
    return;
  }
  return;
}



// FUNCTION 145d0ab96 FUN_145d0ab96 body=123 status=ok
// SIG undefined FUN_145d0ab96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145d0ab96(void)

{
  _DAT_14ca34930 = L"BASE";
  DAT_14ca3495a = 4;
  _DAT_14ca34938 = FUN_140b35ae4();
  _DAT_14ca34940 = DAT_14ca2ea38;
  _DAT_14ca34948 = &LAB_14682652b;
  DAT_14ca2ea38 = &DAT_14ca34930;
  DAT_14ca2ea8d = DAT_14ca2ea8d + '\x01';
  _DAT_14ca34950 = 0x100000000;
  if (*(char *)(_DAT_14ca34938 + 100) != '\0') {
    DAT_14ca2ea8e = DAT_14ca2ea8e + '\x01';
  }
  return;
}



// FUNCTION 145d0ac12 FUN_145d0ac12 body=261 status=ok
// SIG undefined FUN_145d0ac12(void)

void FUN_145d0ac12(void)

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
              0x110) < DAT_14ca33230) {
    FUN_144b3d300(&DAT_14ca33230);
    if (DAT_14ca33230 == -1) {
      FUN_145d0ad18(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xb0;
      local_58 = 0x17b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca331b0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f13fcd);
      _Init_thread_footer(&DAT_14ca33230);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d0ad18 FUN_145d0ad18 body=226 status=ok
// SIG undefined FUN_145d0ad18(void)

longlong * FUN_145d0ad18(longlong *param_1)

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
  pcVar13 = FUN_1462fce86;
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



// FUNCTION 145d0ae00 FUN_145d0ae00 body=140 status=ok
// SIG undefined FUN_145d0ae00(void)

undefined1 * FUN_145d0ae00(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x17c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca332c0;
  return &LAB_145d0adfc;
}



// FUNCTION 145d0ae8c FUN_145d0ae8c body=261 status=ok
// SIG undefined FUN_145d0ae8c(void)

void FUN_145d0ae8c(void)

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
              0x110) < DAT_14ca33340) {
    FUN_144b3d300(&DAT_14ca33340);
    if (DAT_14ca33340 == -1) {
      FUN_145d0b128(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FMotionBlurVelocityDilateParameters";
      local_38 = 0;
      local_50 = 0x90;
      local_58 = 0x16d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca332c0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f13fe5);
      _Init_thread_footer(&DAT_14ca33340);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d0af92 FUN_145d0af92 body=146 status=ok
// SIG undefined FUN_145d0af92(void)

code * FUN_145d0af92(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d0b024();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CenterVelocityTileTextures";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FVecocityTileTextureSRVs";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x900000017d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca33238;
  return FUN_145d0ae00;
}



// FUNCTION 145d0b024 FUN_145d0b024 body=258 status=ok
// SIG undefined FUN_145d0b024(void)

void FUN_145d0b024(void)

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
              0x110) < DAT_14ca332b8) {
    FUN_144b3d300(&DAT_14ca332b8);
    if (DAT_14ca332b8 == -1) {
      FUN_145d0b32c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FVecocityTileTextureSRVs";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x120;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca33238,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f13fd9);
      _Init_thread_footer(&DAT_14ca332b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d0b128 FUN_145d0b128 body=226 status=ok
// SIG undefined FUN_145d0b128(void)

longlong * FUN_145d0b128(longlong *param_1)

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
  pcVar13 = FUN_1462fcf90;
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



// FUNCTION 145d0b210 FUN_145d0b210 body=138 status=ok
// SIG undefined FUN_145d0b210(void)

undefined1 * FUN_145d0b210(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"VelocityTile";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x16e;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145d0b20c;
}



// FUNCTION 145d0b29a FUN_145d0b29a body=146 status=ok
// SIG undefined FUN_145d0b29a(void)

code * FUN_145d0b29a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d0b024();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VelocityTileTextures";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FVecocityTileTextureSRVs";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x700000016f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca33238;
  return FUN_145d0b210;
}



// FUNCTION 145d0b32c FUN_145d0b32c body=232 status=ok
// SIG undefined FUN_145d0b32c(void)

longlong * FUN_145d0b32c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_1462fcf0e;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145d0b41a FUN_145d0b41a body=140 status=ok
// SIG undefined FUN_145d0b41a(void)

void FUN_145d0b41a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e015b0;
  FUN_144760e21(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145d0b4a6(param_1 + 1);
  return;
}



// FUNCTION 145d0b4a6 FUN_145d0b4a6 body=53 status=ok
// SIG undefined FUN_145d0b4a6(void)

void FUN_145d0b4a6(longlong *param_1)

{
  FUN_145d0b4dc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d0b4dc FUN_145d0b4dc body=88 status=ok
// SIG undefined FUN_145d0b4dc(void)

void FUN_145d0b4dc(longlong param_1)

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



// FUNCTION 145d0b534 FUN_145d0b534 body=139 status=ok
// SIG undefined FUN_145d0b534(void)

void FUN_145d0b534(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = param_1[1];
  uVar2 = param_2 - lVar1;
  if (uVar2 != 0 && lVar1 <= param_2) {
    param_1[1] = param_2;
    if ((ulonglong)(param_1[2] - lVar1) < uVar2) {
      FUN_145d0b5c0(param_1,lVar1);
    }
    if (uVar2 != 0) {
      memset((void *)(lVar1 * 0x10 + *param_1),0,uVar2 * 0x10);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (lVar1 <= param_2) {
    return;
  }
  param_1[1] = param_2;
  FUN_146829300(param_1);
  return;
}



// FUNCTION 145d0b5c0 FUN_145d0b5c0 body=141 status=ok
// SIG undefined FUN_145d0b5c0(void)

void FUN_145d0b5c0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(ulonglong *)(param_1 + 8);
  if (param_2 <= (longlong)uVar1) {
    if (*(longlong *)(param_1 + 0x10) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      uVar3 = uVar1 + (uVar1 * 3 >> 3) + 0x10;
    }
    uVar2 = FUN_144a3809e(uVar3 << 4,8);
    uVar3 = 0x7fffffffffffffff;
    if ((longlong)uVar1 <= (longlong)(uVar2 >> 4)) {
      uVar3 = uVar2 >> 4;
    }
    *(ulonglong *)(param_1 + 0x10) = uVar3;
    FUN_140d2d5e4(param_1,param_2,uVar3,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 145d0b658 FUN_145d0b658 body=270 status=ok
// SIG undefined FUN_145d0b658(void)

undefined8 * FUN_145d0b658(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14acfe9b0;
  FUN_144894d4c(param_1 + 8);
  *(undefined8 *)((longlong)param_1 + 0x904) = 0x41955c2941c71eb8;
  *(undefined8 *)((longlong)param_1 + 0x90c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x914) = 0x424800003faa3d71;
  *(undefined8 *)((longlong)param_1 + 0x91c) = 0x4000000042480000;
  *(undefined8 *)((longlong)param_1 + 0x924) = 0x4170000040000000;
  *(undefined8 *)((longlong)param_1 + 0x92c) = 0x53f800000;
  *(undefined1 *)(param_1 + 0x127) = 1;
  *(undefined4 *)((longlong)param_1 + 0x93c) = 0x47c35000;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[0x12a] = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  param_1[0x12f] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  *(byte *)(param_1 + 0x130) = *(byte *)(param_1 + 0x130) & 0xfe;
  *(byte *)(param_1 + 0x131) = *(byte *)(param_1 + 0x131) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x98c) = 0x41000000;
  param_1[0x136] = 0;
  param_1[0x137] = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c4) = 0;
  *(undefined4 *)(param_1 + 0x139) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9cc) = 0x3ff00000;
  param_1[0x13c] = 0;
  param_1[0x13d] = 0;
  param_1[0x13a] = 0;
  param_1[0x13b] = 0;
  param_1[0x13e] = 0x3ff0000000000000;
  param_1[0x13f] = 0x3ff0000000000000;
  param_1[0x140] = 0x3ff0000000000000;
  param_1[0x141] = 0;
  *(undefined1 *)(param_1 + 0x142) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa14) = 0;
  return param_1;
}



// FUNCTION 145d0b766 FUN_145d0b766 body=89 status=ok
// SIG undefined FUN_145d0b766(void)

void FUN_145d0b766(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  DAT_14cb77c48 = 0;
  lVar1 = *param_1;
  uVar2 = (ulonglong)(param_1[1] - lVar1) >> 4;
  DAT_14cb77c50 = (int)uVar2;
  if (DAT_14cb77c50 != 0) {
    FUN_145d0b7c0(uVar2 & 0xffffffff);
    FUN_145d0b81a(DAT_14cb77c48,lVar1,uVar2 & 0xffffffff);
    return;
  }
  DAT_14cb77c54 = 0;
  return;
}



// FUNCTION 145d0b7c0 FUN_145d0b7c0 body=90 status=ok
// SIG undefined FUN_145d0b7c0(void)

void FUN_145d0b7c0(int param_1)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_1 << 4,8);
  uVar3 = 0x7fffffff;
  if (param_1 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(&DAT_14cb77c48,0,uVar3,0x10,8);
  }
  DAT_14cb77c54 = iVar2;
  return;
}



// FUNCTION 145d0b81a FUN_145d0b81a body=102 status=ok
// SIG undefined FUN_145d0b81a(void)

void FUN_145d0b81a(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_2 + 8);
  do {
    *param_1 = 0;
    iVar1 = *piVar3;
    uVar2 = *(undefined8 *)(piVar3 + -2);
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14861601e(param_1,iVar1,0);
      FUN_148616090(*param_1,uVar2);
    }
    param_1 = param_1 + 2;
    piVar3 = piVar3 + 4;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 145d0b88c FUN_145d0b88c body=275 status=ok
// SIG undefined FUN_145d0b88c(void)

undefined8 * FUN_145d0b88c(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140da6ea8();
  *param_1 = &PTR_FUN_14b45a080;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  lVar1 = DAT_14caa8580;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar2 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_149e020b0;
  uVar3 = FUN_144a3f946();
  puVar2[2] = uVar3;
  *puVar2 = &PTR_FUN_14b45bbc0;
  puVar2[3] = param_1;
  FUN_145d0b9a0(lVar1,local_40,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d0b9a0 FUN_145d0b9a0 body=159 status=ok
// SIG undefined FUN_145d0b9a0(void)

undefined8 * FUN_145d0b9a0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x231) == '\x01') {
    if (*(int *)(param_3 + 1) == 0) {
      plVar1 = (longlong *)0x0;
    }
    else {
      plVar1 = (longlong *)*param_3;
    }
    (**(code **)(*plVar1 + 0x58))();
    *param_2 = 0;
  }
  else {
    FUN_145d0ba40();
    local_30 = 0;
    local_28 = 0;
    FUN_14009d848(&local_30,param_3);
    FUN_1448b6402(&DAT_14caa8400,param_2,&local_30);
    FUN_1449db362(&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d0ba40 FUN_145d0ba40 body=115 status=ok
// SIG undefined FUN_145d0ba40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145d0ba40(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa8418) {
    FUN_144b3d300(&DAT_14caa8418);
    if (DAT_14caa8418 == -1) {
      DAT_14caa8400 = 0;
      _DAT_14caa8408 = 0;
      _DAT_14caa8410 = 2;
      atexit(FUN_1432746ee);
      _Init_thread_footer(&DAT_14caa8418);
    }
  }
  return &DAT_14caa8400;
}



// FUNCTION 145d0babe FUN_145d0babe body=125 status=ok
// SIG undefined FUN_145d0babe(void)

void FUN_145d0babe(longlong *param_1)

{
  FUN_140368b56(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_145d0bb3c(param_1 + 6);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_145da38cf(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d0bb3c FUN_145d0bb3c body=53 status=ok
// SIG undefined FUN_145d0bb3c(void)

void FUN_145d0bb3c(longlong *param_1)

{
  FUN_145d0bb72();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d0bb72 FUN_145d0bb72 body=339 status=ok
// SIG undefined FUN_145d0bb72(void)

void FUN_145d0bb72(longlong *param_1)

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
      lVar3 = (longlong)iStack_5c * 0x20;
      FUN_1456d172d(*(undefined8 *)(lVar2 + 8 + lVar3),*(undefined4 *)(lVar2 + 0x10 + lVar3));
      if (*(longlong *)(lVar2 + 8 + lVar3) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d0bcce FUN_145d0bcce body=473 status=ok
// SIG undefined FUN_145d0bcce(void)

undefined8 * FUN_145d0bcce(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  undefined8 **local_a8;
  ulonglong *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14078cbfa();
  *param_1 = &PTR_FUN_14ba89f30;
  local_b0 = param_1 + 0x17;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined2 *)(param_1 + 0x19) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0xf;
  FUN_140120f5c(param_1 + 0x1a);
  FUN_140120f5c(param_1 + 0x21);
  FUN_140120f5c(param_1 + 0x28);
  FUN_140120f5c(param_1 + 0x2f);
  FUN_140120f5c(param_1 + 0x36);
  FUN_140120f5c(param_1 + 0x3d);
  FUN_140120f5c(param_1 + 0x44);
  puVar1 = local_b0;
  *(undefined1 *)((longlong)param_1 + 0x25c) = 1;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined1 *)(param_1 + 0x56) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x57) = 1;
  *(undefined4 *)((longlong)param_1 + 700) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x58) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x59) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0xffffffff;
  local_a8 = &local_98;
  local_a0 = local_60;
  local_98 = param_1 + 0x1a;
  local_90 = param_1 + 0x21;
  local_88 = param_1 + 0x28;
  local_80 = param_1 + 0x2f;
  local_78 = param_1 + 0x36;
  local_70 = param_1 + 0x44;
  local_68 = param_1 + 0x3d;
  FUN_14078cc5e(param_1 + 0x15);
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
    FUN_145d0bea8(puVar1);
    iVar2 = *(int *)(param_1 + 0x18);
  }
  if (*(int *)((longlong)param_1 + 0xc4) != iVar2) {
    FUN_145d0bee6(puVar1);
  }
  if ((local_60[0] ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d0bea8 FUN_145d0bea8 body=61 status=ok
// SIG undefined FUN_145d0bea8(void)

void FUN_145d0bea8(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145d0bfe2(param_1,iVar1);
  }
  FUN_145d0bf58((longlong)iVar1 * 0x48 + *param_1);
  return;
}



// FUNCTION 145d0bee6 FUN_145d0bee6 body=113 status=ok
// SIG undefined FUN_145d0bee6(void)

void FUN_145d0bee6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x48,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x48)) {
      uVar2 = uVar1 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x48,8);
  }
  return;
}



// FUNCTION 145d0bf58 FUN_145d0bf58 body=137 status=ok
// SIG undefined FUN_145d0bf58(void)

undefined8 * FUN_145d0bf58(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  local_20 = FUN_1446f8646();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  local_18 = 1;
  local_16 = 0;
  local_14 = 0xffffffff;
  FUN_141530f12(param_1 + 1);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d0bfe2 FUN_145d0bfe2 body=147 status=ok
// SIG undefined FUN_145d0bfe2(void)

void FUN_145d0bfe2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145d0c07e FUN_145d0c07e body=449 status=ok
// SIG undefined FUN_145d0c07e(void)

undefined8 * FUN_145d0c07e(undefined8 *param_1)

{
  FUN_140e5143e();
  *param_1 = &PTR_FUN_14b678570;
  param_1[0x72] = &PTR_FUN_14b678f00;
  param_1[0x73] = &PTR_FUN_14b678f80;
  param_1[0x74] = &PTR_FUN_14b678ff0;
  param_1[0x75] = &PTR_FUN_14b679018;
  param_1[0x76] = &PTR_FUN_14b679030;
  param_1[0xa4] = &PTR_FUN_14b679060;
  param_1[0xa5] = &PTR_FUN_14b6790b0;
  param_1[0xa6] = &PTR_FUN_14b6790e0;
  param_1[0xa7] = &PTR_FUN_14b679110;
  param_1[0xa8] = &PTR_FUN_14b679128;
  param_1[0x118] = &PTR_FUN_14b679140;
  param_1[0x119] = &PTR_FUN_14b679230;
  param_1[0x11a] = &PTR_FUN_14b679260;
  param_1[0x11b] = &PTR_FUN_14b679280;
  param_1[0x11c] = &PTR_FUN_14b6792a0;
  param_1[0x11d] = &PTR_FUN_14b679310;
  param_1[0x1bb] = &PTR_FUN_14b679330;
  param_1[0x1bc] = &PTR_FUN_14b679360;
  param_1[0x1bd] = &PTR_FUN_14b679390;
  param_1[0x1be] = &PTR_FUN_14b6793b0;
  param_1[0x1bf] = &PTR_FUN_14b679420;
  param_1[0x1c0] = &PTR_FUN_14b679460;
  param_1[0x20d] = &PTR_FUN_14b6794d0;
  param_1[0x20e] = &PTR_FUN_14b679590;
  *(undefined8 *)((longlong)param_1 + 0x1084) = 0;
  *(undefined8 *)((longlong)param_1 + 0x108c) = 0;
  param_1[0x20f] = 0;
  param_1[0x210] = 0;
  *(undefined1 *)((longlong)param_1 + 0x1094) = 0xff;
  *(undefined8 *)((longlong)param_1 + 0x10ac) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10b3) = 0;
  param_1[0x219] = 0;
  param_1[0x217] = 0;
  param_1[0x218] = 0;
  param_1[0x213] = 0;
  param_1[0x214] = 0;
  *(undefined1 *)(param_1 + 0x215) = 0;
  *(undefined4 *)(param_1 + 0x213) = 8;
  return param_1;
}



// FUNCTION 145d0c240 FUN_145d0c240 body=113 status=ok
// SIG undefined FUN_145d0c240(void)

void FUN_145d0c240(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_145d0c2fa();
  (**(code **)(*plVar2 + 0x278))(plVar2);
  plVar2 = DAT_14cacd9d8;
  if ((DAT_14cacd9d8 == (longlong *)0x0) &&
     (lVar1 = param_1[0x6b], *(int *)(param_1 + 0x6b) = (int)lVar1 + 1, plVar2 = param_1,
     (int)lVar1 == 0)) {
    (**(code **)(*param_1 + 0x2c0))(param_1);
    plVar2 = param_1;
  }
  DAT_14cacd9d8 = plVar2;
  (**(code **)(*param_1 + 0x518))(param_1);
  FUN_1447f69b6(&DAT_14cacd8f0);
  FUN_1448a8284(&DAT_14cacd8f0);
  return;
}



// FUNCTION 145d0c2b2 FUN_145d0c2b2 body=72 status=ok
// SIG undefined FUN_145d0c2b2(void)

void FUN_145d0c2b2(longlong param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  *(undefined4 *)(param_1 + 0x364) = 0;
  plVar2 = (longlong *)FUN_145d0c2fa();
  uVar1 = (**(code **)(*plVar2 + 0x1e8))(plVar2);
  *(undefined1 *)(param_1 + 0x478) = uVar1;
  plVar2 = (longlong *)FUN_145d0c2fa(param_1);
                    /* WARNING: Could not recover jumptable at 0x000145d0c2f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x1d8))(plVar2,1,*(code **)(*plVar2 + 0x1d8));
  return;
}



// FUNCTION 145d0c2fa FUN_145d0c2fa body=128 status=ok
// SIG undefined FUN_145d0c2fa(void)

void FUN_145d0c2fa(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x4d0) == 0) {
    FUN_1446f470e(&local_20,L"AssetRegistry",1);
    uVar1 = FUN_144a52528();
    plVar2 = (longlong *)FUN_14493e38c(uVar1,local_20);
    uVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);
    *(undefined8 *)(param_1 + 0x4d0) = uVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d0c37c FUN_145d0c37c body=189 status=ok
// SIG undefined FUN_145d0c37c(void)

void FUN_145d0c37c(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_2c8 [39];
  undefined1 local_2a1;
  undefined1 local_2a0 [312];
  undefined1 local_168 [312];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_2a1 = 1;
  FUN_1413dbc9a(local_168);
  FUN_145d0c43a(param_1,local_2a0,1);
  FUN_140f991ea(local_168,local_2a0);
  FUN_1449daebe(local_2a0);
  FUN_141531246(param_2,local_168,0,&local_2a1);
  (**(code **)(*param_1 + 0x308))(param_1,local_2a0,local_168,0);
  FUN_1449daebe(local_168);
  if ((local_30 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d0c43a FUN_145d0c43a body=124 status=ok
// SIG undefined FUN_145d0c43a(void)

longlong * FUN_145d0c43a(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  ulonglong *puVar1;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_11 = param_3;
  FUN_1449daf8c(param_2,param_1,0);
  *(byte *)((longlong)param_2 + 0xf4) = *(byte *)((longlong)param_2 + 0xf4) | 0x10;
  puVar1 = (ulonglong *)param_2[1];
  if (puVar1[1] < *puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_11,1);
  }
  else {
    *puVar1 = *puVar1 + 1;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d0c4b8 FUN_145d0c4b8 body=26 status=ok
// SIG undefined FUN_145d0c4b8(void)

undefined8 FUN_145d0c4b8(longlong param_1,undefined8 param_2)

{
  FUN_145d0c4d2(param_1 + 0x18);
  return param_2;
}



// FUNCTION 145d0c4d2 FUN_145d0c4d2 body=422 status=ok
// SIG undefined FUN_145d0c4d2(void)

longlong * FUN_145d0c4d2(undefined8 param_1,longlong *param_2)

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
  if ((DAT_14cb717d8 != (longlong *)0x0 && DAT_14cb717e0 != 0) &&
     (cVar2 = (**(code **)(*DAT_14cb717d8 + 0x30))(), cVar2 != '\0')) {
    plVar4 = DAT_14cb717d8;
    if (DAT_14cb717e0 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,&local_38);
    goto LAB_145d0c5a3;
  }
  lVar3 = FUN_14001cc68(0x68,0x10);
  FUN_145d0c67a(lVar3);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b3e9b00;
  plVar4[2] = lVar3;
  local_30 = plVar4;
  if (lVar3 == 0) {
    local_38 = 0;
    goto LAB_145d0c5a3;
  }
  local_38 = lVar3;
  if (((*(longlong *)(lVar3 + 0x10) != 0) && (*(longlong *)(lVar3 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar3 + 0x18) + 8))) goto LAB_145d0c5a3;
  if (plVar4 == (longlong *)0x0) {
    *(longlong *)(lVar3 + 0x10) = lVar3;
    plVar5 = *(longlong **)(lVar3 + 0x18);
    if (plVar5 != (longlong *)0x0) {
LAB_145d0c61e:
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      *(longlong **)(lVar3 + 0x18) = plVar4;
      if (plVar4 != (longlong *)0x0) goto LAB_145d0c599;
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
      if (plVar5 != (longlong *)0x0) goto LAB_145d0c61e;
      *(longlong **)(lVar3 + 0x18) = plVar4;
    }
LAB_145d0c599:
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
LAB_145d0c5a3:
  *param_2 = local_38;
  param_2[1] = (longlong)local_30;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145d0c67a FUN_145d0c67a body=114 status=ok
// SIG undefined FUN_145d0c67a(void)

undefined8 * FUN_145d0c67a(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b3f5ef0;
  FUN_1412cbb62(param_1 + 4);
  *param_1 = &PTR_FUN_14b3f5680;
  param_1[4] = &PTR_FUN_14b3f56a0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = &PTR_FUN_14b3f60d8;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined2 *)(param_1 + 0xc) = 1;
  return param_1;
}



// FUNCTION 145d0c6ec FUN_145d0c6ec body=40 status=ok
// SIG undefined FUN_145d0c6ec(void)

undefined8 FUN_145d0c6ec(undefined8 param_1,int param_2)

{
  FUN_1415314e4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d0c714 FUN_145d0c714 body=231 status=ok
// SIG undefined FUN_145d0c714(void)

void FUN_145d0c714(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  longlong *local_20;
  undefined8 *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_3;
  local_28 = param_2;
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    lVar3 = param_1 + 0xa0;
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xa8);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xb0) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar4) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar2 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x68);
      do {
        if (*(longlong *)(lVar3 + (longlong)iVar2 * 0x18) == param_2) goto LAB_145d0c7e0;
        iVar2 = *(int *)(lVar3 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_20 = &local_28;
  local_18 = &local_30;
  FUN_145d0c7fc((longlong *)(param_1 + 0x68),local_c);
LAB_145d0c7e0:
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d0c7fc FUN_145d0c7fc body=332 status=ok
// SIG undefined FUN_145d0c7fc(void)

undefined4 * FUN_145d0c7fc(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145d0c9cc(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_145d0c94a(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145d0cab4(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d0c94a FUN_145d0c94a body=130 status=ok
// SIG undefined FUN_145d0c94a(void)

undefined8 FUN_145d0c94a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_145bca846((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145d0c9cc FUN_145d0c9cc body=231 status=ok
// SIG undefined FUN_145d0c9cc(void)

int * FUN_145d0c9cc(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 145d0cab4 FUN_145d0cab4 body=482 status=ok
// SIG undefined FUN_145d0cab4(void)

void FUN_145d0cab4(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
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



// FUNCTION 145d0cc98 FUN_145d0cc98 body=53 status=ok
// SIG undefined FUN_145d0cc98(void)

void FUN_145d0cc98(longlong *param_1)

{
  FUN_145d0ccce();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d0ccce FUN_145d0ccce body=88 status=ok
// SIG undefined FUN_145d0ccce(void)

void FUN_145d0ccce(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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



// FUNCTION 145d0cd26 FUN_145d0cd26 body=53 status=ok
// SIG undefined FUN_145d0cd26(void)

void FUN_145d0cd26(longlong *param_1)

{
  FUN_145d0cd5c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d0cd5c FUN_145d0cd5c body=88 status=ok
// SIG undefined FUN_145d0cd5c(void)

void FUN_145d0cd5c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
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



// FUNCTION 145d0cdc0 FUN_145d0cdc0 body=130 status=ok
// SIG undefined FUN_145d0cdc0(void)

undefined8 * FUN_145d0cdc0(undefined8 *param_1)

{
  FUN_1406ed334();
  *param_1 = &PTR_FUN_14a4b7010;
  param_1[0x1f] = &PTR_FUN_14a4b7380;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined2 *)(param_1 + 0xb) = 0x201;
  FUN_14581daa4(param_1,1);
  return param_1;
}



// FUNCTION 145d0ce42 FUN_145d0ce42 body=40 status=ok
// SIG undefined FUN_145d0ce42(void)

undefined8 FUN_145d0ce42(undefined8 param_1,int param_2)

{
  FUN_145d0ce6a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d0ce6a FUN_145d0ce6a body=101 status=ok
// SIG undefined FUN_145d0ce6a(void)

void FUN_145d0ce6a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6e9a40;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d0ced0 FUN_145d0ced0 body=53 status=ok
// SIG undefined FUN_145d0ced0(void)

void FUN_145d0ced0(longlong *param_1)

{
  FUN_145d0cf06();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d0cf06 FUN_145d0cf06 body=88 status=ok
// SIG undefined FUN_145d0cf06(void)

void FUN_145d0cf06(longlong param_1)

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



// FUNCTION 145d0cf6a FUN_145d0cf6a body=130 status=ok
// SIG undefined FUN_145d0cf6a(void)

undefined8 * FUN_145d0cf6a(undefined8 *param_1)

{
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14a845360;
  param_1[5] = &PTR_FUN_14a845950;
  param_1[6] = &PTR_LAB_14a845990;
  param_1[0x55] = 0;
  param_1[0x57] = 0;
  FUN_1458d7a8c(param_1 + 0x58);
  param_1[0x58] = &PTR_FUN_14a616350;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *(byte *)(param_1 + 0x56) = *(byte *)(param_1 + 0x56) | 4;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0x3f800000;
  return param_1;
}



// FUNCTION 145d0cfec FUN_145d0cfec body=369 status=ok
// SIG undefined FUN_145d0cfec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145d0cfec(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cadbe20) && (FUN_144b3d300(&DAT_14cadbe20), DAT_14cadbe20 == -1)) {
    DAT_14cadbe10 = (undefined8 *)0x0;
    _DAT_14cadbe18 = 0x1000000000;
    atexit((_func_5014 *)&LAB_143504b85);
    _Init_thread_footer(&DAT_14cadbe20);
  }
  FUN_1446ddc76(&local_38,param_2,1);
  puVar3 = DAT_14cadbe10;
  if (DAT_14cadbe10 == (undefined8 *)0x0) {
    puVar3 = &DAT_14cadbd90;
  }
  if ((longlong)DAT_14cadbe18 != 0) {
    lVar5 = (longlong)DAT_14cadbe18 << 3;
    do {
      plVar4 = (longlong *)*puVar3;
      if (*plVar4 == local_38) {
        if (puVar3 != (undefined8 *)0x0) goto LAB_145d0d116;
        break;
      }
      puVar3 = puVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  plVar4 = (longlong *)FUN_14001cc68(0x20,0x10);
  FUN_145d0d15e(plVar4,param_2,param_3);
  uVar1 = _DAT_14cadbe18;
  lVar5 = (longlong)DAT_14cadbe18;
  uVar2 = DAT_14cadbe18 + 1;
  _DAT_14cadbe18 = CONCAT44(DAT_14cadbe1c,uVar2);
  if (DAT_14cadbe1c < uVar2) {
    FUN_147ad4262(&DAT_14cadbd90,uVar1 & 0xffffffff);
  }
  puVar3 = &DAT_14cadbd90;
  if (DAT_14cadbe10 != (undefined8 *)0x0) {
    puVar3 = DAT_14cadbe10;
  }
  puVar3[lVar5] = plVar4;
LAB_145d0d116:
  *param_1 = plVar4 + 1;
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145d0d15e FUN_145d0d15e body=225 status=ok
// SIG undefined FUN_145d0d15e(void)

longlong FUN_145d0d15e(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined2 *local_158;
  int local_150;
  undefined1 local_148 [256];
  longlong local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_1446ddc76(param_1,param_2,1);
  *(undefined1 *)(param_1 + 8) = param_3;
  FUN_144a81018(local_148,param_2);
  FUN_140002266(&local_158,L"gc.gbx.ActorClustering.%s",local_40);
  puVar1 = &DAT_149dfb77a;
  if (local_150 != 0) {
    puVar1 = local_158;
  }
  local_168 = 0x40;
  FUN_14153156c(param_1 + 0x10,puVar1,param_1 + 8);
  if (local_158 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d0d24c FUN_145d0d24c body=130 status=ok
// SIG undefined FUN_145d0d24c(void)

undefined8 * FUN_145d0d24c(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_1458097b0();
  *param_1 = &PTR_FUN_14ac0e950;
  param_1[0x40] = 0;
  lVar1 = FUN_1411e5f92();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x40] = lVar1;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  lVar1 = FUN_145869c20();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[0x3d] = lVar1;
  return param_1;
}



// FUNCTION 145d0d2d6 FUN_145d0d2d6 body=133 status=ok
// SIG undefined FUN_145d0d2d6(void)

undefined8 * FUN_145d0d2d6(undefined8 *param_1)

{
  FUN_14130a082();
  *param_1 = &PTR_FUN_14aead0a0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return param_1;
}



// FUNCTION 145d0d364 FUN_145d0d364 body=133 status=ok
// SIG undefined FUN_145d0d364(void)

undefined8 * FUN_145d0d364(undefined8 *param_1)

{
  FUN_14130a082();
  *param_1 = &PTR_FUN_14aeaf280;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return param_1;
}



// FUNCTION 145d0d3ea FUN_145d0d3ea body=40 status=ok
// SIG undefined FUN_145d0d3ea(void)

undefined8 FUN_145d0d3ea(undefined8 param_1,int param_2)

{
  FUN_145d0d412();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d0d412 FUN_145d0d412 body=101 status=ok
// SIG undefined FUN_145d0d412(void)

void FUN_145d0d412(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aecc850;
  param_1[5] = &PTR_FUN_14aeccb50;
  param_1[7] = &PTR_FUN_14aeccb70;
  if ((longlong *)param_1[0x11] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x11] + 0x10))();
  }
  if (param_1[8] != 0) {
    plVar1 = param_1 + 0xc;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[10];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d0d478 FUN_145d0d478 body=40 status=ok
// SIG undefined FUN_145d0d478(void)

undefined8 FUN_145d0d478(undefined8 param_1,int param_2)

{
  FUN_145d0d4a0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d0d4a0 FUN_145d0d4a0 body=101 status=ok
// SIG undefined FUN_145d0d4a0(void)

void FUN_145d0d4a0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aece010;
  plVar3 = (longlong *)param_1[9];
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
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d0d506 FUN_145d0d506 body=53 status=ok
// SIG undefined FUN_145d0d506(void)

void FUN_145d0d506(longlong *param_1)

{
  FUN_145d0d53c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d0d53c FUN_145d0d53c body=88 status=ok
// SIG undefined FUN_145d0d53c(void)

void FUN_145d0d53c(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
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



// FUNCTION 145d0d594 FUN_145d0d594 body=53 status=ok
// SIG undefined FUN_145d0d594(void)

void FUN_145d0d594(longlong *param_1)

{
  FUN_145d0d5ca();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d0d5ca FUN_145d0d5ca body=88 status=ok
// SIG undefined FUN_145d0d5ca(void)

void FUN_145d0d5ca(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
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



// FUNCTION 145d0d62e FUN_145d0d62e body=130 status=ok
// SIG undefined FUN_145d0d62e(void)

undefined8 * FUN_145d0d62e(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x150);
  memset(_Dst,0,0x150);
  *_Dst = &PTR_FUN_14b5b71d0;
  FUN_145d0d6b0(_Dst + 1);
  _Dst[0x24] = 0;
  *(undefined4 *)(_Dst + 0x25) = 0;
  _Dst[0x20] = 0;
  _Dst[0x21] = 0;
  *(undefined8 *)((longlong)_Dst + 300) = 0xffffffff00000080;
  *(undefined4 *)((longlong)_Dst + 0x134) = 0;
  _Dst[0x28] = 0;
  *(undefined4 *)(_Dst + 0x29) = 0;
  return _Dst;
}



// FUNCTION 145d0d6b0 FUN_145d0d6b0 body=141 status=ok
// SIG undefined FUN_145d0d6b0(void)

void FUN_145d0d6b0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 2;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x200000000;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
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
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  return;
}



// FUNCTION 145d0d748 FUN_145d0d748 body=270 status=ok
// SIG undefined FUN_145d0d748(void)

undefined8 * FUN_145d0d748(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140eca8ca();
  *param_1 = &PTR_FUN_14b88b280;
  local_50 = DAT_14cbe5608;
  local_58 = DAT_14cbe5600;
  FUN_1448075d0(&local_48);
  FUN_1404e49fa(param_1 + 5,&local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_1447715ec(param_1 + 10,&DAT_14cbe5618);
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  FUN_1446ddda2(&local_48,&DAT_14b9d8d88,0);
  FUN_1447325ac(&local_48,&local_58,1);
  param_1[0x10] = local_58;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  param_1[0x11] = DAT_14cbe5640;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x3f99999a;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d0d858 FUN_145d0d858 body=38 status=ok
// SIG undefined FUN_145d0d858(void)

undefined8 FUN_145d0d858(undefined8 param_1,int param_2)

{
  FUN_145d0d87e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d0d87e FUN_145d0d87e body=103 status=ok
// SIG undefined FUN_145d0d87e(void)

void FUN_145d0d87e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8a2890;
  FUN_14042a3cd(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_14042ab82(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145d0d8ee FUN_145d0d8ee body=133 status=ok
// SIG undefined FUN_145d0d8ee(void)

undefined8 * FUN_145d0d8ee(undefined8 *param_1)

{
  FUN_141083082();
  *param_1 = &PTR_FUN_14bc7e840;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  FUN_14020fad6(param_1 + 0x2a,L"IsMaterialImportEnabled");
  *param_1 = &PTR_FUN_14bc85210;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  FUN_14020fad6(param_1 + 0x2c,L"InstanceClassName");
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_14020fad6(param_1 + 0x2e,L"Parent");
  return param_1;
}



// FUNCTION 145d0d97c FUN_145d0d97c body=133 status=ok
// SIG undefined FUN_145d0d97c(void)

undefined8 * FUN_145d0d97c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14007ca06();
  FUN_1459e15ba(param_1,uVar1);
  *param_1 = &PTR_FUN_14bd31800;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45) = 0;
  param_1[10] = &DAT_100000018;
  *(undefined4 *)(param_1 + 0xb) = 4;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x12));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x12),4000);
  param_1[0x17] = 0;
  return param_1;
}



// FUNCTION 145d0da0a FUN_145d0da0a body=486 status=ok
// SIG undefined FUN_145d0da0a(void)

undefined8 * FUN_145d0da0a(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_140c8816c();
  *param_1 = &PTR_FUN_14b82ef00;
  param_1[6] = &PTR_LAB_14b82f1c0;
  param_1[7] = &PTR_FUN_14b82f250;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x14;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined1 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0x3fc000003e800000;
  param_1[0x2a] = &PTR_FUN_14b00bdf8;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x1c4) = 0x404;
  param_1[0x2b] = &DAT_14a176f00;
  param_1[0x3f] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x40] = &PTR_FUN_14b00bdf8;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x274) = 0x404;
  param_1[0x41] = &DAT_14a176f00;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 700) = 0x4416000044610000;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0x466a6000461c4000;
  return param_1;
}



// FUNCTION 145d0dbf0 FUN_145d0dbf0 body=153 status=ok
// SIG undefined FUN_145d0dbf0(void)

undefined8 FUN_145d0dbf0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  if (param_2 != 0) {
    FUN_146037cc8();
    plVar1 = (longlong *)(param_1 + 0x50);
    lVar2 = param_2 + 0x2e0;
    uVar3 = FUN_1447addd0(lVar2,0x10);
    iVar4 = FUN_14025f414(plVar1,uVar3,lVar2);
    if (iVar4 != -1) {
      if (*plVar1 + (longlong)iVar4 * 0x24 == 0) {
        return 0;
      }
      piVar5 = (int *)(*plVar1 + (longlong)iVar4 * 0x24 + 0x10);
      if (piVar5 == (int *)0x0) {
        return 0;
      }
      if (*piVar5 < 2) {
        FUN_145d0dddc(plVar1,lVar2);
        FUN_145d0dc8a(param_1,param_2);
        return 1;
      }
      *piVar5 = *piVar5 + -1;
    }
  }
  return 0;
}



// FUNCTION 145d0dc8a FUN_145d0dc8a body=132 status=ok
// SIG undefined FUN_145d0dc8a(void)

void FUN_145d0dc8a(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x20) == param_2) {
          FUN_145d0dd0e(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *param_1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 145d0dd0e FUN_145d0dd0e body=89 status=ok
// SIG undefined FUN_145d0dd0e(void)

void FUN_145d0dd0e(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x20 + 0x18);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_145d0dd68();
  return;
}



// FUNCTION 145d0dd68 FUN_145d0dd68 body=116 status=ok
// SIG undefined FUN_145d0dd68(void)

void FUN_145d0dd68(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 145d0dddc FUN_145d0dddc body=156 status=ok
// SIG undefined FUN_145d0dddc(void)

void FUN_145d0dddc(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_1447addd0(param_2,0x10);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2;
        if ((((*(int *)(lVar1 + lVar4 * 0x24) == *param_2) &&
             (*(int *)(lVar1 + 4 + lVar4 * 0x24) == param_2[1])) &&
            (*(int *)(lVar1 + 8 + lVar4 * 0x24) == param_2[2])) &&
           (*(int *)(lVar1 + 0xc + lVar4 * 0x24) == param_2[3])) {
          FUN_145d0de78(param_1);
          return;
        }
        iVar2 = *(int *)(lVar1 + lVar4 * 0x24 + 0x1c);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 145d0de78 FUN_145d0de78 body=85 status=ok
// SIG undefined FUN_145d0de78(void)

void FUN_145d0de78(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x24;
  lVar5 = (longlong)*(int *)(lVar1 + 0x20);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x24 + 0x1c);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x1c);
  FUN_145d0dece();
  return;
}



// FUNCTION 145d0dece FUN_145d0dece body=116 status=ok
// SIG undefined FUN_145d0dece(void)

void FUN_145d0dece(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x24) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x24);
  *puVar1 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 145d0df42 FUN_145d0df42 body=333 status=ok
// SIG undefined FUN_145d0df42(void)

undefined4 * FUN_145d0df42(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145d0e120(local_40);
  puVar1 = (undefined8 *)param_2[1];
  uVar2 = *(undefined8 *)*param_2;
  *local_38 = uVar2;
  local_38[1] = *puVar1;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40[0];
  uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar10 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar6 >> 4);
  cVar5 = FUN_145d0e090(uVar10,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar6 = DAT_14cb8a738 - DAT_14cb8a764;
    iVar9 = 1;
    if (3 < uVar6) {
      uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= DAT_14cb8a778)) {
      uVar10 = DAT_14cb8a778 - 1U & uVar10;
      *(uint *)((longlong)local_38 + 0x14) = uVar10;
      puVar7 = DAT_14cb8a770;
      if (DAT_14cb8a770 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8a768;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8a778 - 1U & (longlong)(int)uVar10) * 4);
      puVar7 = DAT_14cb8a770;
      if (DAT_14cb8a770 == (undefined *)0x0) {
        puVar7 = &DAT_14cb8a768;
      }
      *(undefined4 *)(puVar7 + ((longlong)DAT_14cb8a778 - 1U & (longlong)(int)uVar10) * 4) =
           local_44;
    }
    else {
      DAT_14cb8a778 = iVar9;
      FUN_145d0e22e();
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d0e090 FUN_145d0e090 body=143 status=ok
// SIG undefined FUN_145d0e090(void)

undefined8 FUN_145d0e090(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  if ((DAT_14cb8a738 - DAT_14cb8a764 != 1) && (DAT_14cb8a738 != DAT_14cb8a764)) {
    puVar6 = &DAT_14cb8a768;
    if (DAT_14cb8a770 != (undefined *)0x0) {
      puVar6 = DAT_14cb8a770;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14cb8a778 - 1U & param_1) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cb8a730 + (longlong)iVar5 * 0x18);
        if (*plVar1 == *param_2) {
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar4 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(int *)plVar1 = (int)*param_2;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_148966de6(*param_3);
          *param_3 = iVar5;
          return 1;
        }
        iVar5 = (int)plVar1[2];
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 145d0e120 FUN_145d0e120 body=270 status=ok
// SIG undefined FUN_145d0e120(void)

int * FUN_145d0e120(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cb8a760;
  iVar3 = DAT_14cb8a738;
  if (DAT_14cb8a764 == 0) {
    iVar2 = DAT_14cb8a738 + 1;
    bVar7 = DAT_14cb8a73c == DAT_14cb8a738;
    DAT_14cb8a738 = iVar2;
    if (bVar7) {
      FUN_14482b872(&DAT_14cb8a730,iVar3);
    }
    lVar6 = (longlong)iVar3;
    iVar2 = FUN_144a54ea4(&DAT_14cb8a740,1);
    puVar4 = DAT_14cb8a750;
    if (DAT_14cb8a750 == (undefined4 *)0x0) {
      puVar4 = &DAT_14cb8a740;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    puVar4[iVar5 >> 5] = puVar4[iVar5 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
    iVar2 = iVar3;
  }
  else {
    lVar6 = (longlong)DAT_14cb8a760;
    DAT_14cb8a760 = *(int *)(DAT_14cb8a730 + 4 + lVar6 * 0x18);
    DAT_14cb8a764 = DAT_14cb8a764 + -1;
    if (DAT_14cb8a764 != 0) {
      *(undefined4 *)(DAT_14cb8a730 + (longlong)DAT_14cb8a760 * 0x18) = 0xffffffff;
    }
  }
  puVar4 = &DAT_14cb8a740;
  if (DAT_14cb8a750 != (undefined4 *)0x0) {
    puVar4 = DAT_14cb8a750;
  }
  iVar3 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar3 = iVar2;
  }
  puVar4[iVar3 >> 5] = puVar4[iVar3 >> 5] | 1 << ((byte)iVar2 & 0x1f);
  *param_1 = iVar2;
  *(longlong *)(param_1 + 2) = lVar6 * 0x18 + DAT_14cb8a730;
  return param_1;
}



// FUNCTION 145d0e22e FUN_145d0e22e body=523 status=ok
// SIG undefined FUN_145d0e22e(void)

void FUN_145d0e22e(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined4 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb8a770 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cb8a770,0,0,4);
  }
  uVar3 = DAT_14cb8a778;
  uVar2 = local_50;
  if (DAT_14cb8a778 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14cb8a768,0,DAT_14cb8a778,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14cb8a770;
        if (DAT_14cb8a770 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8a768;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14cb8a778 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14cb8a740;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14cb8a758 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14cb8a730;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < (int)local_38[6]) {
      iVar4 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar4;
        uVar2 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
        uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar7 = (uint)uVar2 & 0xffff;
        uVar9 = (longlong)
                (int)(((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4)) &
                (longlong)(int)DAT_14cb8a778 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14cb8a770;
        if (DAT_14cb8a770 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8a768;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14cb8a778 - 1U & uVar9) * 4);
        puVar6 = DAT_14cb8a770;
        if (DAT_14cb8a770 == (undefined *)0x0) {
          puVar6 = &DAT_14cb8a768;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14cb8a778 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < (int)local_58[6]);
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145d0e43a FUN_145d0e43a body=553 status=ok
// SIG undefined FUN_145d0e43a(void)

undefined8 * FUN_145d0e43a(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined1 local_79;
  longlong *local_78;
  longlong *local_70;
  code *local_68;
  undefined4 local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = (**(code **)(*(longlong *)*param_3 + 8))();
  if (lVar4 != 0) {
    lVar5 = FUN_144a2f878();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      uVar3 = FUN_140f12a86(param_1,lVar4);
      local_68 = (code *)CONCAT71(local_68._1_7_,uVar3);
      local_58 = param_3[1];
      local_50 = (longlong *)param_3[2];
      if (local_50 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
        plVar6 = local_50;
      }
      local_88 = param_2;
      local_70 = (longlong *)FUN_145d0e74e(&local_58,&local_68);
      local_78 = local_70 + 2;
      FUN_145d0e86c();
      if (plVar6 != (longlong *)0x0) {
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
      plVar6 = local_78;
      FUN_14485c47a(local_78 + 8,lVar4);
      local_79 = 1;
      local_68 = FUN_140f12a18;
      local_60 = 0;
      FUN_145d0e664(&local_58,&local_78,&local_68,&local_79);
      FUN_1448b6402(lVar4 + 0x6060,&local_68,&local_58);
      FUN_1449db362(&local_58);
      local_79 = 0;
      local_68 = FUN_140f12a18;
      local_60 = 0;
      FUN_145d0e664(&local_58,&local_78,&local_68,&local_79);
      FUN_1448b6402(lVar4 + 0x6078,&local_68,&local_58);
      FUN_1449db362(&local_58);
      plVar1 = local_70;
      *local_88 = plVar6;
      local_88[1] = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
        if (local_70 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_70 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_70)(local_70);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 145d0e664 FUN_145d0e664 body=234 status=ok
// SIG undefined FUN_145d0e664(void)

longlong *
FUN_145d0e664(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = *param_2;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  *puVar5 = &PTR_LAB_14a83c0e0;
  *(undefined1 *)(puVar5 + 1) = *param_4;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  puVar5[2] = lVar9;
  *puVar5 = &PTR_FUN_14b99eda0;
  puVar5[3] = uVar6;
  puVar5[4] = plVar7;
  if (plVar7 == (longlong *)0x0) {
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  return param_1;
}



// FUNCTION 145d0e74e FUN_145d0e74e body=149 status=ok
// SIG undefined FUN_145d0e74e(void)

undefined8 * FUN_145d0e74e(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b99ed40;
  uVar1 = *param_2;
  local_30 = *param_1;
  local_28 = param_1[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_145d0e7e4(puVar2 + 2,&local_30,uVar1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d0e7e4 FUN_145d0e7e4 body=136 status=ok
// SIG undefined FUN_145d0e7e4(void)

undefined8 * FUN_145d0e7e4(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xf0 | param_3 * '\x02';
  *param_1 = &PTR_FUN_14b99ed80;
  param_1[6] = *param_2;
  lVar3 = param_2[1];
  param_1[7] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *param_1 = &PTR_FUN_14b99ed60;
  param_1[8] = 0;
  plVar4 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 145d0e86c FUN_145d0e86c body=162 status=ok
// SIG undefined FUN_145d0e86c(void)

void FUN_145d0e86c(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145d0e8ab;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145d0e8ab;
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
LAB_145d0e8ab:
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
                    /* WARNING: Could not recover jumptable at 0x000145d0e90a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145d0e90e FUN_145d0e90e body=54 status=ok
// SIG undefined FUN_145d0e90e(void)

void FUN_145d0e90e(longlong param_1)

{
  FUN_144a63f30();
  FUN_141532077(param_1 + 0x80);
  FUN_141532077(param_1 + 0xa0);
  FUN_141532077(param_1 + 0x38);
  return;
}



// FUNCTION 145d0e950 FUN_145d0e950 body=456 status=ok
// SIG undefined FUN_145d0e950(void)

undefined8 * FUN_145d0e950(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145d0eb1a();
  *param_1 = &PTR_FUN_14b09b620;
  lVar2 = FUN_144a78b9e();
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar2);
  }
  param_1[5] = lVar2;
  if ((param_1 != (undefined8 *)0x0) && ((*(uint *)(param_1 + 1) & 0x10) != 0)) {
    lVar2 = param_1[2];
    lVar3 = FUN_1459efc60();
    if (lVar2 == lVar3) {
      local_38 = (undefined8 *)0x0;
      local_30 = 0;
      FUN_1446efa72(&local_38,0,2,0x10);
      local_30 = 2;
      *local_38 = &PTR_LAB_14b410440;
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
      *local_38 = &PTR_FUN_14b4103d0;
      local_38[3] = FUN_143d9a592;
      FUN_145d0eb42(&local_28,&local_38);
      DAT_14cb81c98 = local_28;
      FUN_1449db362(&local_38);
      if (DAT_14c9a3b60 != 2) {
        FUN_1446efa72(&DAT_14c9a3b58,0,2,0x10);
        DAT_14c9a3b60 = 2;
      }
      puVar1 = DAT_14c9a3b58;
      *DAT_14c9a3b58 = &PTR_LAB_14b410520;
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
      puVar1[2] = lVar3;
      *puVar1 = &PTR_FUN_14b4104b0;
      puVar1[3] = FUN_140eadc7f;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d0eb1a FUN_145d0eb1a body=40 status=ok
// SIG undefined FUN_145d0eb1a(void)

undefined8 * FUN_145d0eb1a(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a17b500;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 145d0eb42 FUN_145d0eb42 body=102 status=ok
// SIG undefined FUN_145d0eb42(void)

longlong * FUN_145d0eb42(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  FUN_140d8b835();
  plVar2 = (longlong *)FUN_145d0eba8();
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *plVar2 = lVar3;
  FUN_144a450dc(plVar2 + 1,param_2);
  *param_1 = *plVar2;
  return param_1;
}



// FUNCTION 145d0eba8 FUN_145d0eba8 body=68 status=ok
// SIG undefined FUN_145d0eba8(void)

longlong FUN_145d0eba8(void)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = DAT_14c9a3b78;
  lVar2 = (longlong)(int)DAT_14c9a3b78;
  DAT_14c9a3b78 = DAT_14c9a3b78 + 1;
  if (DAT_14c9a3b7c < DAT_14c9a3b78) {
    FUN_145d0ebfc(iVar1);
  }
  lVar2 = lVar2 * 0x18 + DAT_14c9a3b70;
  FUN_145d0ebec(lVar2);
  return lVar2;
}



// FUNCTION 145d0ebec FUN_145d0ebec body=15 status=ok
// SIG undefined FUN_145d0ebec(void)

void FUN_145d0ebec(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 145d0ebfc FUN_145d0ebfc body=155 status=ok
// SIG undefined FUN_145d0ebfc(void)

void FUN_145d0ebfc(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = DAT_14c9a3b78;
  if (param_1 <= (int)DAT_14c9a3b78) {
    if (DAT_14c9a3b7c == 0) {
      uVar2 = 4;
      if (4 < DAT_14c9a3b78) {
        uVar2 = DAT_14c9a3b78;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)DAT_14c9a3b78 * 3) >> 3) + (longlong)(int)DAT_14c9a3b78 +
              0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    DAT_14c9a3b7c = (int)uVar5;
    FUN_1446f8d3c(&DAT_14c9a3b70,param_1,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145d0ec98 FUN_145d0ec98 body=24 status=ok
// SIG undefined FUN_145d0ec98(void)

void FUN_145d0ec98(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145d0ecac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145d0ecb0 FUN_145d0ecb0 body=38 status=ok
// SIG undefined FUN_145d0ecb0(void)

undefined8 FUN_145d0ecb0(undefined8 param_1,int param_2)

{
  FUN_1415321ea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d0ecd6 FUN_145d0ecd6 body=40 status=ok
// SIG undefined FUN_145d0ecd6(void)

undefined8 FUN_145d0ecd6(undefined8 param_1,int param_2)

{
  FUN_145d0ecfe();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d0ecfe FUN_145d0ecfe body=166 status=ok
// SIG undefined FUN_145d0ecfe(void)

void FUN_145d0ecfe(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b94e760;
  FUN_145d0eda4(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_140368c45(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xc];
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
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145d0eda4 FUN_145d0eda4 body=77 status=ok
// SIG undefined FUN_145d0eda4(void)

void FUN_145d0eda4(longlong param_1,int param_2)

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



// FUNCTION 145d0edf2 FUN_145d0edf2 body=50 status=ok
// SIG undefined FUN_145d0edf2(void)

undefined8 * FUN_145d0edf2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x458,0x10);
  FUN_145d0ee24(puVar1);
  *puVar1 = &PTR_LAB_14b96bea0;
  return puVar1;
}



// FUNCTION 145d0ee24 FUN_145d0ee24 body=658 status=ok
// SIG undefined FUN_145d0ee24(void)

void FUN_145d0ee24(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14b3fdda0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 2;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x147) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x33c) = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(undefined2 *)(param_1 + 0x6b) = 0;
  param_1[0x70] = 0;
  *(undefined4 *)(param_1 + 0x71) = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x38c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x394) = 0;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3e4) = 0;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  return;
}



// FUNCTION 145d0f0b6 FUN_145d0f0b6 body=114 status=ok
// SIG undefined FUN_145d0f0b6(void)

void FUN_145d0f0b6(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [40];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48[0] = 0;
  local_20 = 0;
  uVar1 = FUN_140f0e194(param_2,&DAT_14cbd2d18,local_48);
  FUN_145d0f129(param_1 + 0x98,uVar1);
  FUN_144a5ac3a(local_48);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d0f129 FUN_145d0f129 body=61 status=ok
// SIG undefined FUN_145d0f129(void)

void FUN_145d0f129(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_1447cd2ec(param_1,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d0f168 FUN_145d0f168 body=796 status=ok
// SIG undefined FUN_145d0f168(void)

void FUN_145d0f168(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  int local_78;
  int local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  iVar1 = local_74;
  local_78 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_f8 = &local_98;
  local_88 = local_60;
  local_98 = local_70;
  uStack_90 = uStack_68;
  local_b8 = local_58;
  uStack_b0 = uStack_50;
  local_a8 = local_48;
  local_d8 = local_40;
  uStack_d4 = uStack_3c;
  uStack_d0 = uStack_38;
  uStack_cc = uStack_34;
  local_c8 = local_30;
  local_e8 = local_78 != 0;
  local_f0 = iVar1 != 0;
  FUN_145d0f486(local_20,local_28);
  if ((local_18 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d0f486 FUN_145d0f486 body=229 status=ok
// SIG undefined FUN_145d0f486(void)

void FUN_145d0f486(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined1 param_6,undefined1 param_7)

{
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined1 local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_38[0] = 0;
  local_38[1] = 0;
  local_48 = param_5[2];
  local_d0 = &local_58;
  local_58 = *param_5;
  uStack_50 = param_5[1];
  local_78 = *param_4;
  uStack_70 = param_4[1];
  local_d8 = &local_78;
  local_68 = param_4[2];
  local_98 = *param_3;
  uStack_94 = param_3[1];
  uStack_90 = param_3[2];
  uStack_8c = param_3[3];
  local_88 = *(undefined8 *)(param_3 + 4);
  local_b0 = 0;
  local_b8 = param_7;
  local_c0 = 0;
  local_c8 = param_6;
  local_a8 = 1;
  FUN_1413d76a4(local_98,param_2,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d0f56c FUN_145d0f56c body=533 status=ok
// SIG undefined FUN_145d0f56c(void)

void FUN_145d0f56c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1448284b2();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cb60);
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x628);
  if (((*(byte *)(param_2 + 5) & 1) != 0) && ((int)param_2[8] < 0x14a)) {
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_48,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_48);
      }
    }
    else {
      local_48 = CONCAT44(local_48._4_4_,*(undefined4 *)*puVar3);
      *puVar3 = (ulonglong)puVar2;
    }
  }
  FUN_145d0f782(param_2,param_1 + 0x650);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    iVar8 = *(int *)(param_1 + 0x658);
    if (0 < iVar8) {
      local_48 = 0;
      uStack_40 = 0;
      lVar11 = 0;
      do {
        uVar7 = uStack_40;
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x650) + lVar11 * 8);
        if (*(longlong *)(lVar1 + 0x28) != 0) {
          lVar10 = (longlong)(int)uStack_40;
          uVar9 = (int)uStack_40 + 1;
          uStack_40 = CONCAT44(uStack_40._4_4_,uVar9);
          if (uStack_40._4_4_ < uVar9) {
            FUN_147457fe0(&local_48,uVar7 & 0xffffffff);
          }
          uVar4 = *(undefined4 *)(lVar1 + 0x34);
          uVar5 = *(undefined4 *)(lVar1 + 0x38);
          uVar6 = *(undefined4 *)(lVar1 + 0x3c);
          puVar2 = (undefined4 *)(local_48 + lVar10 * 0x18);
          *puVar2 = *(undefined4 *)(lVar1 + 0x30);
          puVar2[1] = uVar4;
          puVar2[2] = uVar5;
          puVar2[3] = uVar6;
          *(undefined8 *)(local_48 + 0x10 + lVar10 * 0x18) = *(undefined8 *)(lVar1 + 0x28);
          *(undefined8 *)(lVar1 + 0x28) = 0;
          iVar8 = *(int *)(param_1 + 0x658);
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < iVar8);
      if (0 < (int)uStack_40) {
        FUN_147458074(&DAT_14cae9ca0,param_1,&local_48);
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
    }
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x630),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x630) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_14041268c(param_2,param_1 + 0x640);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d0f782 FUN_145d0f782 body=432 status=ok
// SIG undefined FUN_145d0f782(void)

longlong * FUN_145d0f782(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [44];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_3c = (int)param_2[1];
    puVar3 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_3c);
      }
    }
    else {
      local_3c = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    if (0 < local_3c) {
      lVar5 = 0;
      do {
        FUN_145d0f933(param_1,*(undefined8 *)(*param_2 + lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar5 < local_3c);
    }
  }
  else {
    puVar3 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_3c);
      }
    }
    else {
      local_3c = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    FUN_1458c3e46(param_2,local_3c);
    if (0 < local_3c) {
      iVar6 = 0;
      do {
        puVar4 = (undefined8 *)FUN_14001cc68(0x90);
        *puVar4 = &PTR_FUN_14a862068;
        memset(puVar4 + 1,0,0x81);
        FUN_145d0f933(param_1,puVar4);
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1456bd870(param_2,iVar2);
        }
        *(undefined8 **)(*param_2 + (longlong)iVar2 * 8) = puVar4;
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_3c);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145d0f933 FUN_145d0f933 body=308 status=ok
// SIG undefined FUN_145d0f933(void)

longlong * FUN_145d0f933(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    iVar1 = FUN_1448332aa(param_1,&DAT_149e3cb60);
    if (iVar1 < 9) {
      uVar3 = FUN_14001cc68(0x38,0x10);
      FUN_147ba534c(uVar3);
      *(undefined8 *)(param_2 + 0x28) = uVar3;
      FUN_147457ee8(uVar3,param_1);
      FUN_147457f64(*(longlong *)(param_2 + 0x28) + 8,param_1);
    }
  }
  iVar1 = FUN_1448332aa(param_1,&DAT_149e3cb60);
  if (iVar1 < 0xc) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_1412e3d1e(&local_30);
      *(undefined4 *)(param_2 + 0x30) = local_30;
      *(undefined4 *)(param_2 + 0x34) = uStack_2c;
      *(undefined4 *)(param_2 + 0x38) = uStack_28;
      *(undefined4 *)(param_2 + 0x3c) = uStack_24;
    }
  }
  else {
    FUN_1402ac1b3(param_1,param_2 + 0x30);
  }
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x150))(param_1,param_2 + 8);
  uVar3 = (**(code **)(*plVar2 + 0x150))(plVar2,param_2 + 0x10);
  FUN_14041268c(uVar3,param_2 + 0x18);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    iVar1 = FUN_1448332aa(param_1,&DAT_149e3cb60);
    if (iVar1 < 9) {
      FUN_146ed6908(param_1,*(longlong *)(param_2 + 0x28) + 0x10);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d0fa68 FUN_145d0fa68 body=40 status=ok
// SIG undefined FUN_145d0fa68(void)

undefined8 FUN_145d0fa68(undefined8 param_1,int param_2)

{
  FUN_145d0fa90();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145d0fa90 FUN_145d0fa90 body=112 status=ok
// SIG undefined FUN_145d0fa90(void)

void FUN_145d0fa90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bcbf5c0;
  FUN_145d0fb00(param_1 + 0x4a);
  FUN_145d0fb76(param_1 + 0x3f);
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_1410aba6a(param_1);
  return;
}



// FUNCTION 145d0fb00 FUN_145d0fb00 body=63 status=ok
// SIG undefined FUN_145d0fb00(void)

void FUN_145d0fb00(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x10))();
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_145d0fb40(param_1 + 0x10);
  return;
}



// FUNCTION 145d0fb40 FUN_145d0fb40 body=53 status=ok
// SIG undefined FUN_145d0fb40(void)

void FUN_145d0fb40(longlong *param_1)

{
  FUN_145d0fbde();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d0fb76 FUN_145d0fb76 body=104 status=ok
// SIG undefined FUN_145d0fb76(void)

void FUN_145d0fb76(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145d0fbde FUN_145d0fbde body=336 status=ok
// SIG undefined FUN_145d0fbde(void)

void FUN_145d0fbde(longlong *param_1)

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
      FUN_1493ebe90((longlong)iStack_4c * 0x28 + *local_68);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
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



// FUNCTION 145d0fd3a FUN_145d0fd3a body=782 status=ok
// SIG undefined FUN_145d0fd3a(void)

undefined8 * FUN_145d0fd3a(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b140e80;
  *(undefined4 *)(param_1 + 0x16) = 0xdeadf001;
  param_1[0x17] = "entitlement";
  FUN_1400b22c2(local_58,"GbxGame.Entitlement");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_145d1004a();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d0fe32;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145d0fe32:
  lVar4 = FUN_145d1004a();
  if (lVar4 == 0) {
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    *(undefined4 *)(param_1 + 99) = 0;
    if (*(int *)((longlong)param_1 + 0x31c) < 0) {
      FUN_1446f8c06(param_1 + 0x62,0);
    }
    puVar2 = (undefined2 *)param_1[0x62];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x60) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x304) = uStack_44;
    *(undefined4 *)(param_1 + 0x61) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x30c) = uStack_3c;
    if (param_1 + 0x60 == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x62] != 0) {
        FUN_1400020a8();
      }
      param_1[0x62] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 99) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x31c) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5f] = 0;
        goto LAB_145d0fec7;
      }
    }
    FUN_14485c47a(param_1 + 0x5f,lVar4);
  }
LAB_145d0fec7:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1004a FUN_145d1004a body=57 status=ok
// SIG undefined FUN_145d1004a(void)

void FUN_145d1004a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5dc30 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5dc30 = FUN_140002ddd(FUN_1464ddf9a,uVar1,L"GbxEntitlementDef");
  }
  return;
}



// FUNCTION 145d1008e FUN_145d1008e body=782 status=ok
// SIG undefined FUN_145d1008e(void)

undefined8 * FUN_145d1008e(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b1a04d0;
  *(undefined4 *)(param_1 + 0x16) = 0xbeef2003;
  param_1[0x17] = "loadingscreen_data";
  lVar4 = FUN_145d1039e();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d10165;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145d10165:
  lVar4 = FUN_145d1039e();
  if (lVar4 == 0) {
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    *(undefined4 *)(param_1 + 99) = 0;
    if (*(int *)((longlong)param_1 + 0x31c) < 0) {
      FUN_1446f8c06(param_1 + 0x62,0);
    }
    puVar2 = (undefined2 *)param_1[0x62];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x60) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x304) = uStack_44;
    *(undefined4 *)(param_1 + 0x61) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x30c) = uStack_3c;
    if (param_1 + 0x60 == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x62] != 0) {
        FUN_1400020a8();
      }
      param_1[0x62] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 99) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x31c) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5f] = 0;
        goto LAB_145d101fa;
      }
    }
    FUN_14485c47a(param_1 + 0x5f,lVar4);
  }
LAB_145d101fa:
  FUN_1400b22c2(local_58,"LoadingScreenData");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d1039e FUN_145d1039e body=57 status=ok
// SIG undefined FUN_145d1039e(void)

void FUN_145d1039e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60420 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60420 = FUN_140002ddd(FUN_1464ec26e,uVar1,L"GbxLoadingScreenDef");
  }
  return;
}



// FUNCTION 145d103e2 FUN_145d103e2 body=782 status=ok
// SIG undefined FUN_145d103e2(void)

undefined8 * FUN_145d103e2(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b369700;
  *(undefined4 *)(param_1 + 0x16) = 0x7002;
  param_1[0x17] = "aim_assist_parameters";
  lVar4 = FUN_145d106f2();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d104b9;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145d104b9:
  lVar4 = FUN_145d106f2();
  if (lVar4 == 0) {
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    *(undefined4 *)(param_1 + 99) = 0;
    if (*(int *)((longlong)param_1 + 0x31c) < 0) {
      FUN_1446f8c06(param_1 + 0x62,0);
    }
    puVar2 = (undefined2 *)param_1[0x62];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x60) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x304) = uStack_44;
    *(undefined4 *)(param_1 + 0x61) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x30c) = uStack_3c;
    if (param_1 + 0x60 == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x62] != 0) {
        FUN_1400020a8();
      }
      param_1[0x62] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 99) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x31c) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5f] = 0;
        goto LAB_145d1054e;
      }
    }
    FUN_14485c47a(param_1 + 0x5f,lVar4);
  }
LAB_145d1054e:
  FUN_1400b22c2(local_58,"GbxInput.Aim Assist");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d106f2 FUN_145d106f2 body=57 status=ok
// SIG undefined FUN_145d106f2(void)

void FUN_145d106f2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb549f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb549f8 = FUN_140002ddd(FUN_1464ae4f2,uVar1,L"AimAssistParameters");
  }
  return;
}



// FUNCTION 145d10736 FUN_145d10736 body=782 status=ok
// SIG undefined FUN_145d10736(void)

undefined8 * FUN_145d10736(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b37c3a0;
  *(undefined4 *)(param_1 + 0x16) = 0x777c666;
  param_1[0x17] = "capital";
  FUN_1400b22c2(local_58,"Capital");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_145d10a46();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d1082e;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145d1082e:
  lVar4 = FUN_145d10a46();
  if (lVar4 == 0) {
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    *(undefined4 *)(param_1 + 99) = 0;
    if (*(int *)((longlong)param_1 + 0x31c) < 0) {
      FUN_1446f8c06(param_1 + 0x62,0);
    }
    puVar2 = (undefined2 *)param_1[0x62];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x60) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x304) = uStack_44;
    *(undefined4 *)(param_1 + 0x61) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x30c) = uStack_3c;
    if (param_1 + 0x60 == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x62] != 0) {
        FUN_1400020a8();
      }
      param_1[0x62] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 99) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x31c) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5f] = 0;
        goto LAB_145d108c3;
      }
    }
    FUN_14485c47a(param_1 + 0x5f,lVar4);
  }
LAB_145d108c3:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d10a46 FUN_145d10a46 body=57 status=ok
// SIG undefined FUN_145d10a46(void)

void FUN_145d10a46(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b278 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b278 = FUN_140002ddd(FUN_1464ce942,uVar1,L"GbxCapitalDef");
  }
  return;
}



// FUNCTION 145d10a8a FUN_145d10a8a body=782 status=ok
// SIG undefined FUN_145d10a8a(void)

undefined8 * FUN_145d10a8a(undefined8 *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c6b96a();
  *param_1 = &PTR_FUN_14b36ff00;
  *(undefined4 *)(param_1 + 0x16) = 0xe8790600;
  param_1[0x17] = "xp_progression";
  FUN_1400b22c2(local_58,"Experience Progression");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = FUN_145d10d9a();
  if (lVar4 == 0) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar2 = (undefined2 *)param_1[0x5d];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_145d10b82;
      }
    }
    FUN_14485c47a(param_1 + 0x5a,lVar4);
  }
LAB_145d10b82:
  lVar4 = FUN_145d10d9a();
  if (lVar4 == 0) {
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
    *(undefined4 *)(param_1 + 99) = 0;
    if (*(int *)((longlong)param_1 + 0x31c) < 0) {
      FUN_1446f8c06(param_1 + 0x62,0);
    }
    puVar2 = (undefined2 *)param_1[0x62];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1400bbfae(&local_48,lVar4);
    *(undefined4 *)(param_1 + 0x60) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x304) = uStack_44;
    *(undefined4 *)(param_1 + 0x61) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x30c) = uStack_3c;
    if (param_1 + 0x60 == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x62] != 0) {
        FUN_1400020a8();
      }
      param_1[0x62] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 99) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x31c) = local_2c;
    }
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        param_1[0x5f] = 0;
        goto LAB_145d10c17;
      }
    }
    FUN_14485c47a(param_1 + 0x5f,lVar4);
  }
LAB_145d10c17:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145d10d9a FUN_145d10d9a body=57 status=ok
// SIG undefined FUN_145d10d9a(void)

void FUN_145d10d9a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5dd10 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5dd10 = FUN_140002ddd(FUN_1464de20d,uVar1,L"GbxExperienceProgressionDef");
  }
  return;
}


