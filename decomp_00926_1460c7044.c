// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1460c7044 FUN_1460c7044 body=205 status=ok
// SIG undefined FUN_1460c7044(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c7044(void)

{
  if ((DAT_14ca0c66f & 2) == 0) {
    DAT_14ca0c66f = DAT_14ca0c66f | 2;
    _DAT_14ca0c610 =
         L"TMobileBasePassPSFMobileDirectionalLightAndSHIndirectPolicyLOCAL_LIGHTS_ENABLEDThinTranslGrey"
    ;
    _DAT_14ca0c628 = FUN_146826540;
    _DAT_14ca0c630 = FUN_146825d77;
    _DAT_14ca0c638 = FUN_146825fd6;
    _DAT_14ca0c640 = FUN_1407e02ea;
    _DAT_14ca0c648 = FUN_146826273;
    _DAT_14ca0c620 = FUN_147240626;
    _DAT_14ca0c660 = 0xffffffff00000118;
    _DAT_14ca0c668 = 8;
    DAT_14ca0c66c = 0;
    _DAT_14ca0c650 = &LAB_14724066a;
    FUN_1460c7112();
    FUN_1407e00cc(&DAT_14ca0c608);
    return;
  }
  return;
}



// FUNCTION 1460c7112 FUN_1460c7112 body=133 status=ok
// SIG undefined FUN_1460c7112(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c7112(void)

{
  _DAT_14ca10780 = L"BASE";
  DAT_14ca107aa = 4;
  FUN_145ce8ffa();
  _DAT_14ca10790 = DAT_14ca0c618;
  _DAT_14ca10788 = &DAT_14ca10530;
  _DAT_14ca10798 = &LAB_14682652b;
  DAT_14ca0c618 = &DAT_14ca10780;
  DAT_14ca0c66d = DAT_14ca0c66d + '\x01';
  _DAT_14ca107a0 = 0x100000000;
  if (DAT_14ca10594 != '\0') {
    DAT_14ca0c66e = DAT_14ca0c66e + '\x01';
  }
  return;
}



// FUNCTION 1460c7198 FUN_1460c7198 body=287 status=ok
// SIG undefined FUN_1460c7198(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c7198(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0c840) {
    FUN_144b3d300(&DAT_14ca0c840);
    if (DAT_14ca0c840 == -1) {
      FUN_1460c72b8();
      FUN_140db5666(&DAT_14ca0c798,2,&DAT_14ca0c730,
                    L"TMobileBasePassPSFMobileDirectionalLightAndSHIndirectPolicyLOCAL_LIGHTS_BUFFER"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_147240772,
                    FUN_14724074a,FUN_1417704d2,&LAB_147240746,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0c798 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de8551);
      _Init_thread_footer(&DAT_14ca0c840);
    }
  }
  return &DAT_14ca0c798;
}



// FUNCTION 1460c72b8 FUN_1460c72b8 body=205 status=ok
// SIG undefined FUN_1460c72b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c72b8(void)

{
  if ((DAT_14ca0c797 & 2) == 0) {
    DAT_14ca0c797 = DAT_14ca0c797 | 2;
    _DAT_14ca0c738 =
         L"TMobileBasePassPSFMobileDirectionalLightAndSHIndirectPolicyLOCAL_LIGHTS_BUFFER";
    _DAT_14ca0c750 = FUN_146826540;
    _DAT_14ca0c758 = FUN_146825d77;
    _DAT_14ca0c760 = FUN_146825fd6;
    _DAT_14ca0c768 = FUN_1407e02ea;
    _DAT_14ca0c770 = FUN_146826273;
    _DAT_14ca0c748 = FUN_1472406fe;
    _DAT_14ca0c788 = 0xffffffff00000118;
    _DAT_14ca0c790 = 8;
    DAT_14ca0c794 = 0;
    _DAT_14ca0c778 = &LAB_147240742;
    FUN_1460c7386();
    FUN_1407e00cc(&DAT_14ca0c730);
    return;
  }
  return;
}



// FUNCTION 1460c7386 FUN_1460c7386 body=133 status=ok
// SIG undefined FUN_1460c7386(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c7386(void)

{
  _DAT_14ca107b0 = L"BASE";
  DAT_14ca107da = 4;
  FUN_145ce8ffa();
  _DAT_14ca107c0 = DAT_14ca0c740;
  _DAT_14ca107b8 = &DAT_14ca10530;
  _DAT_14ca107c8 = &LAB_14682652b;
  DAT_14ca0c740 = &DAT_14ca107b0;
  DAT_14ca0c795 = DAT_14ca0c795 + '\x01';
  _DAT_14ca107d0 = 0x100000000;
  if (DAT_14ca10594 != '\0') {
    DAT_14ca0c796 = DAT_14ca0c796 + '\x01';
  }
  return;
}



// FUNCTION 1460c740c FUN_1460c740c body=287 status=ok
// SIG undefined FUN_1460c740c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c740c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0c968) {
    FUN_144b3d300(&DAT_14ca0c968);
    if (DAT_14ca0c968 == -1) {
      FUN_1460c752c();
      FUN_140db5666(&DAT_14ca0c8c0,2,&DAT_14ca0c858,
                    L"TMobileBasePassPSFMobileDirectionalLightAndSHIndirectPolicyLOCAL_LIGHTS_BUFFERThinTranslGrey"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14724084a,
                    FUN_147240822,FUN_141770556,&LAB_14724081e,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0c8c0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de855d);
      _Init_thread_footer(&DAT_14ca0c968);
    }
  }
  return &DAT_14ca0c8c0;
}



// FUNCTION 1460c752c FUN_1460c752c body=205 status=ok
// SIG undefined FUN_1460c752c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c752c(void)

{
  if ((DAT_14ca0c8bf & 2) == 0) {
    DAT_14ca0c8bf = DAT_14ca0c8bf | 2;
    _DAT_14ca0c860 =
         L"TMobileBasePassPSFMobileDirectionalLightAndSHIndirectPolicyLOCAL_LIGHTS_BUFFERThinTranslGrey"
    ;
    _DAT_14ca0c878 = FUN_146826540;
    _DAT_14ca0c880 = FUN_146825d77;
    _DAT_14ca0c888 = FUN_146825fd6;
    _DAT_14ca0c890 = FUN_1407e02ea;
    _DAT_14ca0c898 = FUN_146826273;
    _DAT_14ca0c870 = FUN_1472407d6;
    _DAT_14ca0c8b0 = 0xffffffff00000118;
    _DAT_14ca0c8b8 = 8;
    DAT_14ca0c8bc = 0;
    _DAT_14ca0c8a0 = &LAB_14724081a;
    FUN_1460c75fa();
    FUN_1407e00cc(&DAT_14ca0c858);
    return;
  }
  return;
}



// FUNCTION 1460c75fa FUN_1460c75fa body=133 status=ok
// SIG undefined FUN_1460c75fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c75fa(void)

{
  _DAT_14ca107e0 = L"BASE";
  DAT_14ca1080a = 4;
  FUN_145ce8ffa();
  _DAT_14ca107f0 = DAT_14ca0c868;
  _DAT_14ca107e8 = &DAT_14ca10530;
  _DAT_14ca107f8 = &LAB_14682652b;
  DAT_14ca0c868 = &DAT_14ca107e0;
  DAT_14ca0c8bd = DAT_14ca0c8bd + '\x01';
  _DAT_14ca10800 = 0x100000000;
  if (DAT_14ca10594 != '\0') {
    DAT_14ca0c8be = DAT_14ca0c8be + '\x01';
  }
  return;
}



// FUNCTION 1460c7680 FUN_1460c7680 body=287 status=ok
// SIG undefined FUN_1460c7680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c7680(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0cce0) {
    FUN_144b3d300(&DAT_14ca0cce0);
    if (DAT_14ca0cce0 == -1) {
      FUN_1460c77a0();
      FUN_140db5666(&DAT_14ca0cc38,2,&DAT_14ca0cbd0,
                    L"TMobileBasePassPSFMobileDirectionalLightCSMAndSHIndirectPolicyLOCAL_LIGHTS_DISABLEDThinTranslGrey"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_147240abe,
                    FUN_147240a96,FUN_141770642,&LAB_147240a92,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0cc38 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de85a7);
      _Init_thread_footer(&DAT_14ca0cce0);
    }
  }
  return &DAT_14ca0cc38;
}



// FUNCTION 1460c77a0 FUN_1460c77a0 body=205 status=ok
// SIG undefined FUN_1460c77a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c77a0(void)

{
  if ((DAT_14ca0cc37 & 2) == 0) {
    DAT_14ca0cc37 = DAT_14ca0cc37 | 2;
    _DAT_14ca0cbd8 =
         L"TMobileBasePassPSFMobileDirectionalLightCSMAndSHIndirectPolicyLOCAL_LIGHTS_DISABLEDThinTranslGrey"
    ;
    _DAT_14ca0cbf0 = FUN_146826540;
    _DAT_14ca0cbf8 = FUN_146825d77;
    _DAT_14ca0cc00 = FUN_146825fd6;
    _DAT_14ca0cc08 = FUN_1407e02ea;
    _DAT_14ca0cc10 = FUN_146826273;
    _DAT_14ca0cbe8 = FUN_147240a4a;
    _DAT_14ca0cc28 = 0xffffffff00000118;
    _DAT_14ca0cc30 = 8;
    DAT_14ca0cc34 = 0;
    _DAT_14ca0cc18 = &LAB_147240a8e;
    FUN_1460c786e();
    FUN_1407e00cc(&DAT_14ca0cbd0);
    return;
  }
  return;
}



// FUNCTION 1460c786e FUN_1460c786e body=133 status=ok
// SIG undefined FUN_1460c786e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c786e(void)

{
  _DAT_14ca10bc0 = L"BASE";
  DAT_14ca10bea = 4;
  FUN_145ce96c2();
  _DAT_14ca10bd0 = DAT_14ca0cbe0;
  _DAT_14ca10bc8 = &DAT_14ca109d0;
  _DAT_14ca10bd8 = &LAB_14682652b;
  DAT_14ca0cbe0 = &DAT_14ca10bc0;
  DAT_14ca0cc35 = DAT_14ca0cc35 + '\x01';
  _DAT_14ca10be0 = 0x100000000;
  if (DAT_14ca10a34 != '\0') {
    DAT_14ca0cc36 = DAT_14ca0cc36 + '\x01';
  }
  return;
}



// FUNCTION 1460c78f4 FUN_1460c78f4 body=287 status=ok
// SIG undefined FUN_1460c78f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c78f4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0ce08) {
    FUN_144b3d300(&DAT_14ca0ce08);
    if (DAT_14ca0ce08 == -1) {
      FUN_1460c7a14();
      FUN_140db5666(&DAT_14ca0cd60,2,&DAT_14ca0ccf8,
                    L"TMobileBasePassPSFMobileDirectionalLightCSMAndSHIndirectPolicyLOCAL_LIGHTS_ENABLED"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_147240b96,
                    FUN_147240b6e,FUN_1417706a6,&LAB_147240b6a,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0cd60 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de85b3);
      _Init_thread_footer(&DAT_14ca0ce08);
    }
  }
  return &DAT_14ca0cd60;
}



// FUNCTION 1460c7a14 FUN_1460c7a14 body=205 status=ok
// SIG undefined FUN_1460c7a14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c7a14(void)

{
  if ((DAT_14ca0cd5f & 2) == 0) {
    DAT_14ca0cd5f = DAT_14ca0cd5f | 2;
    _DAT_14ca0cd00 =
         L"TMobileBasePassPSFMobileDirectionalLightCSMAndSHIndirectPolicyLOCAL_LIGHTS_ENABLED";
    _DAT_14ca0cd18 = FUN_146826540;
    _DAT_14ca0cd20 = FUN_146825d77;
    _DAT_14ca0cd28 = FUN_146825fd6;
    _DAT_14ca0cd30 = FUN_1407e02ea;
    _DAT_14ca0cd38 = FUN_146826273;
    _DAT_14ca0cd10 = FUN_147240b22;
    _DAT_14ca0cd50 = 0xffffffff00000118;
    _DAT_14ca0cd58 = 8;
    DAT_14ca0cd5c = 0;
    _DAT_14ca0cd40 = &LAB_147240b66;
    FUN_1460c7ae2();
    FUN_1407e00cc(&DAT_14ca0ccf8);
    return;
  }
  return;
}



// FUNCTION 1460c7ae2 FUN_1460c7ae2 body=133 status=ok
// SIG undefined FUN_1460c7ae2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c7ae2(void)

{
  _DAT_14ca10bf0 = L"BASE";
  DAT_14ca10c1a = 4;
  FUN_145ce96c2();
  _DAT_14ca10c00 = DAT_14ca0cd08;
  _DAT_14ca10bf8 = &DAT_14ca109d0;
  _DAT_14ca10c08 = &LAB_14682652b;
  DAT_14ca0cd08 = &DAT_14ca10bf0;
  DAT_14ca0cd5d = DAT_14ca0cd5d + '\x01';
  _DAT_14ca10c10 = 0x100000000;
  if (DAT_14ca10a34 != '\0') {
    DAT_14ca0cd5e = DAT_14ca0cd5e + '\x01';
  }
  return;
}



// FUNCTION 1460c7b68 FUN_1460c7b68 body=287 status=ok
// SIG undefined FUN_1460c7b68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c7b68(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0cf30) {
    FUN_144b3d300(&DAT_14ca0cf30);
    if (DAT_14ca0cf30 == -1) {
      FUN_1460c7c88();
      FUN_140db5666(&DAT_14ca0ce88,2,&DAT_14ca0ce20,
                    L"TMobileBasePassPSFMobileDirectionalLightCSMAndSHIndirectPolicyLOCAL_LIGHTS_ENABLEDThinTranslGrey"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_147240c6e,
                    FUN_147240c46,FUN_14177072a,&LAB_147240c42,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0ce88 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de85bf);
      _Init_thread_footer(&DAT_14ca0cf30);
    }
  }
  return &DAT_14ca0ce88;
}



// FUNCTION 1460c7c88 FUN_1460c7c88 body=205 status=ok
// SIG undefined FUN_1460c7c88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c7c88(void)

{
  if ((DAT_14ca0ce87 & 2) == 0) {
    DAT_14ca0ce87 = DAT_14ca0ce87 | 2;
    _DAT_14ca0ce28 =
         L"TMobileBasePassPSFMobileDirectionalLightCSMAndSHIndirectPolicyLOCAL_LIGHTS_ENABLEDThinTranslGrey"
    ;
    _DAT_14ca0ce40 = FUN_146826540;
    _DAT_14ca0ce48 = FUN_146825d77;
    _DAT_14ca0ce50 = FUN_146825fd6;
    _DAT_14ca0ce58 = FUN_1407e02ea;
    _DAT_14ca0ce60 = FUN_146826273;
    _DAT_14ca0ce38 = FUN_147240bfa;
    _DAT_14ca0ce78 = 0xffffffff00000118;
    _DAT_14ca0ce80 = 8;
    DAT_14ca0ce84 = 0;
    _DAT_14ca0ce68 = &LAB_147240c3e;
    FUN_1460c7d56();
    FUN_1407e00cc(&DAT_14ca0ce20);
    return;
  }
  return;
}



// FUNCTION 1460c7d56 FUN_1460c7d56 body=133 status=ok
// SIG undefined FUN_1460c7d56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c7d56(void)

{
  _DAT_14ca10c20 = L"BASE";
  DAT_14ca10c4a = 4;
  FUN_145ce96c2();
  _DAT_14ca10c30 = DAT_14ca0ce30;
  _DAT_14ca10c28 = &DAT_14ca109d0;
  _DAT_14ca10c38 = &LAB_14682652b;
  DAT_14ca0ce30 = &DAT_14ca10c20;
  DAT_14ca0ce85 = DAT_14ca0ce85 + '\x01';
  _DAT_14ca10c40 = 0x100000000;
  if (DAT_14ca10a34 != '\0') {
    DAT_14ca0ce86 = DAT_14ca0ce86 + '\x01';
  }
  return;
}



// FUNCTION 1460c7ddc FUN_1460c7ddc body=287 status=ok
// SIG undefined FUN_1460c7ddc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c7ddc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0d058) {
    FUN_144b3d300(&DAT_14ca0d058);
    if (DAT_14ca0d058 == -1) {
      FUN_1460c7efc();
      FUN_140db5666(&DAT_14ca0cfb0,2,&DAT_14ca0cf48,
                    L"TMobileBasePassPSFMobileDirectionalLightCSMAndSHIndirectPolicyLOCAL_LIGHTS_BUFFER"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_147240d46,
                    FUN_147240d1e,FUN_1417707dc,&LAB_147240d1a,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0cfb0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de85cb);
      _Init_thread_footer(&DAT_14ca0d058);
    }
  }
  return &DAT_14ca0cfb0;
}



// FUNCTION 1460c7efc FUN_1460c7efc body=205 status=ok
// SIG undefined FUN_1460c7efc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c7efc(void)

{
  if ((DAT_14ca0cfaf & 2) == 0) {
    DAT_14ca0cfaf = DAT_14ca0cfaf | 2;
    _DAT_14ca0cf50 =
         L"TMobileBasePassPSFMobileDirectionalLightCSMAndSHIndirectPolicyLOCAL_LIGHTS_BUFFER";
    _DAT_14ca0cf68 = FUN_146826540;
    _DAT_14ca0cf70 = FUN_146825d77;
    _DAT_14ca0cf78 = FUN_146825fd6;
    _DAT_14ca0cf80 = FUN_1407e02ea;
    _DAT_14ca0cf88 = FUN_146826273;
    _DAT_14ca0cf60 = FUN_147240cd2;
    _DAT_14ca0cfa0 = 0xffffffff00000118;
    _DAT_14ca0cfa8 = 8;
    DAT_14ca0cfac = 0;
    _DAT_14ca0cf90 = &LAB_147240d16;
    FUN_1460c7fca();
    FUN_1407e00cc(&DAT_14ca0cf48);
    return;
  }
  return;
}



// FUNCTION 1460c7fca FUN_1460c7fca body=133 status=ok
// SIG undefined FUN_1460c7fca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c7fca(void)

{
  _DAT_14ca10c50 = L"BASE";
  DAT_14ca10c7a = 4;
  FUN_145ce96c2();
  _DAT_14ca10c60 = DAT_14ca0cf58;
  _DAT_14ca10c58 = &DAT_14ca109d0;
  _DAT_14ca10c68 = &LAB_14682652b;
  DAT_14ca0cf58 = &DAT_14ca10c50;
  DAT_14ca0cfad = DAT_14ca0cfad + '\x01';
  _DAT_14ca10c70 = 0x100000000;
  if (DAT_14ca10a34 != '\0') {
    DAT_14ca0cfae = DAT_14ca0cfae + '\x01';
  }
  return;
}



// FUNCTION 1460c8050 FUN_1460c8050 body=287 status=ok
// SIG undefined FUN_1460c8050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c8050(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0d180) {
    FUN_144b3d300(&DAT_14ca0d180);
    if (DAT_14ca0d180 == -1) {
      FUN_1460c8170();
      FUN_140db5666(&DAT_14ca0d0d8,2,&DAT_14ca0d070,
                    L"TMobileBasePassPSFMobileDirectionalLightCSMAndSHIndirectPolicyLOCAL_LIGHTS_BUFFERThinTranslGrey"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_147240e1e,
                    FUN_147240df6,FUN_141770860,&LAB_147240df2,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0d0d8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de85d7);
      _Init_thread_footer(&DAT_14ca0d180);
    }
  }
  return &DAT_14ca0d0d8;
}



// FUNCTION 1460c8170 FUN_1460c8170 body=205 status=ok
// SIG undefined FUN_1460c8170(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c8170(void)

{
  if ((DAT_14ca0d0d7 & 2) == 0) {
    DAT_14ca0d0d7 = DAT_14ca0d0d7 | 2;
    _DAT_14ca0d078 =
         L"TMobileBasePassPSFMobileDirectionalLightCSMAndSHIndirectPolicyLOCAL_LIGHTS_BUFFERThinTranslGrey"
    ;
    _DAT_14ca0d090 = FUN_146826540;
    _DAT_14ca0d098 = FUN_146825d77;
    _DAT_14ca0d0a0 = FUN_146825fd6;
    _DAT_14ca0d0a8 = FUN_1407e02ea;
    _DAT_14ca0d0b0 = FUN_146826273;
    _DAT_14ca0d088 = FUN_147240daa;
    _DAT_14ca0d0c8 = 0xffffffff00000118;
    _DAT_14ca0d0d0 = 8;
    DAT_14ca0d0d4 = 0;
    _DAT_14ca0d0b8 = &LAB_147240dee;
    FUN_1460c823e();
    FUN_1407e00cc(&DAT_14ca0d070);
    return;
  }
  return;
}



// FUNCTION 1460c823e FUN_1460c823e body=133 status=ok
// SIG undefined FUN_1460c823e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c823e(void)

{
  _DAT_14ca10c80 = L"BASE";
  DAT_14ca10caa = 4;
  FUN_145ce96c2();
  _DAT_14ca10c90 = DAT_14ca0d080;
  _DAT_14ca10c88 = &DAT_14ca109d0;
  _DAT_14ca10c98 = &LAB_14682652b;
  DAT_14ca0d080 = &DAT_14ca10c80;
  DAT_14ca0d0d5 = DAT_14ca0d0d5 + '\x01';
  _DAT_14ca10ca0 = 0x100000000;
  if (DAT_14ca10a34 != '\0') {
    DAT_14ca0d0d6 = DAT_14ca0d0d6 + '\x01';
  }
  return;
}



// FUNCTION 1460c82c4 FUN_1460c82c4 body=287 status=ok
// SIG undefined FUN_1460c82c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c82c4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0d4f8) {
    FUN_144b3d300(&DAT_14ca0d4f8);
    if (DAT_14ca0d4f8 == -1) {
      FUN_1460c83e4();
      FUN_140db5666(&DAT_14ca0d450,2,&DAT_14ca0d3e8,
                    L"TMobileBasePassPSFMobileDirectionalLightAndCSMPolicyLOCAL_LIGHTS_DISABLEDThinTranslGrey"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_147241092,
                    FUN_14724106a,FUN_14177094c,&LAB_147241066,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0d450 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de8621);
      _Init_thread_footer(&DAT_14ca0d4f8);
    }
  }
  return &DAT_14ca0d450;
}



// FUNCTION 1460c83e4 FUN_1460c83e4 body=205 status=ok
// SIG undefined FUN_1460c83e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c83e4(void)

{
  if ((DAT_14ca0d44f & 2) == 0) {
    DAT_14ca0d44f = DAT_14ca0d44f | 2;
    _DAT_14ca0d3f0 =
         L"TMobileBasePassPSFMobileDirectionalLightAndCSMPolicyLOCAL_LIGHTS_DISABLEDThinTranslGrey";
    _DAT_14ca0d408 = FUN_146826540;
    _DAT_14ca0d410 = FUN_146825d77;
    _DAT_14ca0d418 = FUN_146825fd6;
    _DAT_14ca0d420 = FUN_1407e02ea;
    _DAT_14ca0d428 = FUN_146826273;
    _DAT_14ca0d400 = FUN_14724101e;
    _DAT_14ca0d440 = 0xffffffff00000118;
    _DAT_14ca0d448 = 8;
    DAT_14ca0d44c = 0;
    _DAT_14ca0d430 = &LAB_147241062;
    FUN_1460c84b2();
    FUN_1407e00cc(&DAT_14ca0d3e8);
    return;
  }
  return;
}



// FUNCTION 1460c84b2 FUN_1460c84b2 body=133 status=ok
// SIG undefined FUN_1460c84b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c84b2(void)

{
  _DAT_14ca11060 = L"BASE";
  DAT_14ca1108a = 4;
  FUN_145ce9d8a();
  _DAT_14ca11070 = DAT_14ca0d3f8;
  _DAT_14ca11068 = &DAT_14ca10e70;
  _DAT_14ca11078 = &LAB_14682652b;
  DAT_14ca0d3f8 = &DAT_14ca11060;
  DAT_14ca0d44d = DAT_14ca0d44d + '\x01';
  _DAT_14ca11080 = 0x100000000;
  if (DAT_14ca10ed4 != '\0') {
    DAT_14ca0d44e = DAT_14ca0d44e + '\x01';
  }
  return;
}



// FUNCTION 1460c8538 FUN_1460c8538 body=287 status=ok
// SIG undefined FUN_1460c8538(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c8538(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0d620) {
    FUN_144b3d300(&DAT_14ca0d620);
    if (DAT_14ca0d620 == -1) {
      FUN_1460c8658();
      FUN_140db5666(&DAT_14ca0d578,2,&DAT_14ca0d510,
                    L"TMobileBasePassPSFMobileDirectionalLightAndCSMPolicyLOCAL_LIGHTS_ENABLED",
                    L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14724116a,
                    FUN_147241142,FUN_1417709b0,&LAB_14724113e,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0d578 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de862d);
      _Init_thread_footer(&DAT_14ca0d620);
    }
  }
  return &DAT_14ca0d578;
}



// FUNCTION 1460c8658 FUN_1460c8658 body=205 status=ok
// SIG undefined FUN_1460c8658(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c8658(void)

{
  if ((DAT_14ca0d577 & 2) == 0) {
    DAT_14ca0d577 = DAT_14ca0d577 | 2;
    _DAT_14ca0d518 = L"TMobileBasePassPSFMobileDirectionalLightAndCSMPolicyLOCAL_LIGHTS_ENABLED";
    _DAT_14ca0d530 = FUN_146826540;
    _DAT_14ca0d538 = FUN_146825d77;
    _DAT_14ca0d540 = FUN_146825fd6;
    _DAT_14ca0d548 = FUN_1407e02ea;
    _DAT_14ca0d550 = FUN_146826273;
    _DAT_14ca0d528 = FUN_1472410f6;
    _DAT_14ca0d568 = 0xffffffff00000118;
    _DAT_14ca0d570 = 8;
    DAT_14ca0d574 = 0;
    _DAT_14ca0d558 = &LAB_14724113a;
    FUN_1460c8726();
    FUN_1407e00cc(&DAT_14ca0d510);
    return;
  }
  return;
}



// FUNCTION 1460c8726 FUN_1460c8726 body=133 status=ok
// SIG undefined FUN_1460c8726(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c8726(void)

{
  _DAT_14ca11090 = L"BASE";
  DAT_14ca110ba = 4;
  FUN_145ce9d8a();
  _DAT_14ca110a0 = DAT_14ca0d520;
  _DAT_14ca11098 = &DAT_14ca10e70;
  _DAT_14ca110a8 = &LAB_14682652b;
  DAT_14ca0d520 = &DAT_14ca11090;
  DAT_14ca0d575 = DAT_14ca0d575 + '\x01';
  _DAT_14ca110b0 = 0x100000000;
  if (DAT_14ca10ed4 != '\0') {
    DAT_14ca0d576 = DAT_14ca0d576 + '\x01';
  }
  return;
}



// FUNCTION 1460c87ac FUN_1460c87ac body=287 status=ok
// SIG undefined FUN_1460c87ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c87ac(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0d748) {
    FUN_144b3d300(&DAT_14ca0d748);
    if (DAT_14ca0d748 == -1) {
      FUN_1460c88cc();
      FUN_140db5666(&DAT_14ca0d6a0,2,&DAT_14ca0d638,
                    L"TMobileBasePassPSFMobileDirectionalLightAndCSMPolicyLOCAL_LIGHTS_ENABLEDThinTranslGrey"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_147241242,
                    FUN_14724121a,FUN_141770a34,&LAB_147241216,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0d6a0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de8639);
      _Init_thread_footer(&DAT_14ca0d748);
    }
  }
  return &DAT_14ca0d6a0;
}



// FUNCTION 1460c88cc FUN_1460c88cc body=205 status=ok
// SIG undefined FUN_1460c88cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c88cc(void)

{
  if ((DAT_14ca0d69f & 2) == 0) {
    DAT_14ca0d69f = DAT_14ca0d69f | 2;
    _DAT_14ca0d640 =
         L"TMobileBasePassPSFMobileDirectionalLightAndCSMPolicyLOCAL_LIGHTS_ENABLEDThinTranslGrey";
    _DAT_14ca0d658 = FUN_146826540;
    _DAT_14ca0d660 = FUN_146825d77;
    _DAT_14ca0d668 = FUN_146825fd6;
    _DAT_14ca0d670 = FUN_1407e02ea;
    _DAT_14ca0d678 = FUN_146826273;
    _DAT_14ca0d650 = FUN_1472411ce;
    _DAT_14ca0d690 = 0xffffffff00000118;
    _DAT_14ca0d698 = 8;
    DAT_14ca0d69c = 0;
    _DAT_14ca0d680 = &LAB_147241212;
    FUN_1460c899a();
    FUN_1407e00cc(&DAT_14ca0d638);
    return;
  }
  return;
}



// FUNCTION 1460c899a FUN_1460c899a body=133 status=ok
// SIG undefined FUN_1460c899a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c899a(void)

{
  _DAT_14ca110c0 = L"BASE";
  DAT_14ca110ea = 4;
  FUN_145ce9d8a();
  _DAT_14ca110d0 = DAT_14ca0d648;
  _DAT_14ca110c8 = &DAT_14ca10e70;
  _DAT_14ca110d8 = &LAB_14682652b;
  DAT_14ca0d648 = &DAT_14ca110c0;
  DAT_14ca0d69d = DAT_14ca0d69d + '\x01';
  _DAT_14ca110e0 = 0x100000000;
  if (DAT_14ca10ed4 != '\0') {
    DAT_14ca0d69e = DAT_14ca0d69e + '\x01';
  }
  return;
}



// FUNCTION 1460c8a20 FUN_1460c8a20 body=287 status=ok
// SIG undefined FUN_1460c8a20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c8a20(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0d870) {
    FUN_144b3d300(&DAT_14ca0d870);
    if (DAT_14ca0d870 == -1) {
      FUN_1460c8b40();
      FUN_140db5666(&DAT_14ca0d7c8,2,&DAT_14ca0d760,
                    L"TMobileBasePassPSFMobileDirectionalLightAndCSMPolicyLOCAL_LIGHTS_BUFFER",
                    L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14724131a,
                    FUN_1472412f2,FUN_141770ae6,&LAB_1472412ee,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0d7c8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de8645);
      _Init_thread_footer(&DAT_14ca0d870);
    }
  }
  return &DAT_14ca0d7c8;
}



// FUNCTION 1460c8b40 FUN_1460c8b40 body=205 status=ok
// SIG undefined FUN_1460c8b40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c8b40(void)

{
  if ((DAT_14ca0d7c7 & 2) == 0) {
    DAT_14ca0d7c7 = DAT_14ca0d7c7 | 2;
    _DAT_14ca0d768 = L"TMobileBasePassPSFMobileDirectionalLightAndCSMPolicyLOCAL_LIGHTS_BUFFER";
    _DAT_14ca0d780 = FUN_146826540;
    _DAT_14ca0d788 = FUN_146825d77;
    _DAT_14ca0d790 = FUN_146825fd6;
    _DAT_14ca0d798 = FUN_1407e02ea;
    _DAT_14ca0d7a0 = FUN_146826273;
    _DAT_14ca0d778 = FUN_1472412a6;
    _DAT_14ca0d7b8 = 0xffffffff00000118;
    _DAT_14ca0d7c0 = 8;
    DAT_14ca0d7c4 = 0;
    _DAT_14ca0d7a8 = &LAB_1472412ea;
    FUN_1460c8c0e();
    FUN_1407e00cc(&DAT_14ca0d760);
    return;
  }
  return;
}



// FUNCTION 1460c8c0e FUN_1460c8c0e body=133 status=ok
// SIG undefined FUN_1460c8c0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c8c0e(void)

{
  _DAT_14ca110f0 = L"BASE";
  DAT_14ca1111a = 4;
  FUN_145ce9d8a();
  _DAT_14ca11100 = DAT_14ca0d770;
  _DAT_14ca110f8 = &DAT_14ca10e70;
  _DAT_14ca11108 = &LAB_14682652b;
  DAT_14ca0d770 = &DAT_14ca110f0;
  DAT_14ca0d7c5 = DAT_14ca0d7c5 + '\x01';
  _DAT_14ca11110 = 0x100000000;
  if (DAT_14ca10ed4 != '\0') {
    DAT_14ca0d7c6 = DAT_14ca0d7c6 + '\x01';
  }
  return;
}



// FUNCTION 1460c8c94 FUN_1460c8c94 body=287 status=ok
// SIG undefined FUN_1460c8c94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c8c94(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0d998) {
    FUN_144b3d300(&DAT_14ca0d998);
    if (DAT_14ca0d998 == -1) {
      FUN_1460c8db4();
      FUN_140db5666(&DAT_14ca0d8f0,2,&DAT_14ca0d888,
                    L"TMobileBasePassPSFMobileDirectionalLightAndCSMPolicyLOCAL_LIGHTS_BUFFERThinTranslGrey"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_1472413f2,
                    FUN_1472413ca,FUN_141770b6a,&LAB_1472413c6,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0d8f0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de8651);
      _Init_thread_footer(&DAT_14ca0d998);
    }
  }
  return &DAT_14ca0d8f0;
}



// FUNCTION 1460c8db4 FUN_1460c8db4 body=205 status=ok
// SIG undefined FUN_1460c8db4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c8db4(void)

{
  if ((DAT_14ca0d8ef & 2) == 0) {
    DAT_14ca0d8ef = DAT_14ca0d8ef | 2;
    _DAT_14ca0d890 =
         L"TMobileBasePassPSFMobileDirectionalLightAndCSMPolicyLOCAL_LIGHTS_BUFFERThinTranslGrey";
    _DAT_14ca0d8a8 = FUN_146826540;
    _DAT_14ca0d8b0 = FUN_146825d77;
    _DAT_14ca0d8b8 = FUN_146825fd6;
    _DAT_14ca0d8c0 = FUN_1407e02ea;
    _DAT_14ca0d8c8 = FUN_146826273;
    _DAT_14ca0d8a0 = FUN_14724137e;
    _DAT_14ca0d8e0 = 0xffffffff00000118;
    _DAT_14ca0d8e8 = 8;
    DAT_14ca0d8ec = 0;
    _DAT_14ca0d8d0 = &LAB_1472413c2;
    FUN_1460c8e82();
    FUN_1407e00cc(&DAT_14ca0d888);
    return;
  }
  return;
}



// FUNCTION 1460c8e82 FUN_1460c8e82 body=133 status=ok
// SIG undefined FUN_1460c8e82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c8e82(void)

{
  _DAT_14ca11120 = L"BASE";
  DAT_14ca1114a = 4;
  FUN_145ce9d8a();
  _DAT_14ca11130 = DAT_14ca0d898;
  _DAT_14ca11128 = &DAT_14ca10e70;
  _DAT_14ca11138 = &LAB_14682652b;
  DAT_14ca0d898 = &DAT_14ca11120;
  DAT_14ca0d8ed = DAT_14ca0d8ed + '\x01';
  _DAT_14ca11140 = 0x100000000;
  if (DAT_14ca10ed4 != '\0') {
    DAT_14ca0d8ee = DAT_14ca0d8ee + '\x01';
  }
  return;
}



// FUNCTION 1460c8f08 FUN_1460c8f08 body=287 status=ok
// SIG undefined FUN_1460c8f08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c8f08(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3b0e8) {
    FUN_144b3d300(&DAT_14ca3b0e8);
    if (DAT_14ca3b0e8 == -1) {
      FUN_1460c9028();
      FUN_140db5666(&DAT_14ca3b040,2,&DAT_14ca3afd8,L"FTrivialMaterialCHS",
                    L"/Engine/Private/RayTracing/RayTracingMaterialDefaultHitShaders.usf",
                    L"closesthit=OpaqueShadowCHS",8,1,FUN_1472b73ce,FUN_1472b73a6,FUN_141775910,
                    &LAB_1472b73a2,&LAB_1472b739c,&LAB_1472b737c,0x110,0);
      _DAT_14ca3b040 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a809);
      _Init_thread_footer(&DAT_14ca3b0e8);
    }
  }
  return &DAT_14ca3b040;
}



// FUNCTION 1460c9028 FUN_1460c9028 body=205 status=ok
// SIG undefined FUN_1460c9028(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c9028(void)

{
  if ((DAT_14ca3b03f & 2) == 0) {
    DAT_14ca3b03f = DAT_14ca3b03f | 2;
    _DAT_14ca3afe0 = L"FTrivialMaterialCHS";
    _DAT_14ca3aff8 = FUN_146826540;
    _DAT_14ca3b000 = FUN_146825d77;
    _DAT_14ca3b008 = FUN_146825fd6;
    _DAT_14ca3b010 = FUN_1407e02ea;
    _DAT_14ca3b018 = FUN_146826273;
    _DAT_14ca3aff0 = FUN_1472b7342;
    _DAT_14ca3b030 = 0xffffffff00000110;
    _DAT_14ca3b038 = 8;
    DAT_14ca3b03c = 0;
    _DAT_14ca3b020 = &LAB_1472b7378;
    FUN_1460c90f6();
    FUN_1407e00cc(&DAT_14ca3afd8);
    return;
  }
  return;
}



// FUNCTION 1460c90f6 FUN_1460c90f6 body=133 status=ok
// SIG undefined FUN_1460c90f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c90f6(void)

{
  _DAT_14ca3fa08 = L"BASE";
  DAT_14ca3fa32 = 4;
  FUN_1411baada();
  _DAT_14ca3fa18 = DAT_14ca3afe8;
  _DAT_14ca3fa10 = &DAT_14ca3fa38;
  _DAT_14ca3fa20 = &LAB_14682652b;
  DAT_14ca3afe8 = &DAT_14ca3fa08;
  DAT_14ca3b03d = DAT_14ca3b03d + '\x01';
  _DAT_14ca3fa28 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3b03e = DAT_14ca3b03e + '\x01';
  }
  return;
}



// FUNCTION 1460c917c FUN_1460c917c body=287 status=ok
// SIG undefined FUN_1460c917c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c917c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3b210) {
    FUN_144b3d300(&DAT_14ca3b210);
    if (DAT_14ca3b210 == -1) {
      FUN_1460c929c();
      FUN_140db5666(&DAT_14ca3b168,2,&DAT_14ca3b100,L"TMaterialCHSFNoLightMapPolicy",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS",8,1,FUN_1472b74aa,FUN_1472b7482,FUN_141775944,
                    &LAB_1472b747e,&LAB_1472b7478,&LAB_1472b7458,0x110,0);
      _DAT_14ca3b168 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a815);
      _Init_thread_footer(&DAT_14ca3b210);
    }
  }
  return &DAT_14ca3b168;
}



// FUNCTION 1460c929c FUN_1460c929c body=205 status=ok
// SIG undefined FUN_1460c929c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c929c(void)

{
  if ((DAT_14ca3b167 & 2) == 0) {
    DAT_14ca3b167 = DAT_14ca3b167 | 2;
    _DAT_14ca3b108 = L"TMaterialCHSFNoLightMapPolicy";
    _DAT_14ca3b120 = FUN_146826540;
    _DAT_14ca3b128 = FUN_146825d77;
    _DAT_14ca3b130 = FUN_146825fd6;
    _DAT_14ca3b138 = FUN_1407e02ea;
    _DAT_14ca3b140 = FUN_146826273;
    _DAT_14ca3b118 = FUN_1472b741e;
    _DAT_14ca3b158 = 0xffffffff00000110;
    _DAT_14ca3b160 = 8;
    DAT_14ca3b164 = 0;
    _DAT_14ca3b148 = &LAB_1472b7454;
    FUN_1460c936a();
    FUN_1407e00cc(&DAT_14ca3b100);
    return;
  }
  return;
}



// FUNCTION 1460c936a FUN_1460c936a body=133 status=ok
// SIG undefined FUN_1460c936a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c936a(void)

{
  _DAT_14ca3fb00 = L"BASE";
  DAT_14ca3fb2a = 4;
  FUN_1411baada();
  _DAT_14ca3fb10 = DAT_14ca3b110;
  _DAT_14ca3fb08 = &DAT_14ca3fa38;
  _DAT_14ca3fb18 = &LAB_14682652b;
  DAT_14ca3b110 = &DAT_14ca3fb00;
  DAT_14ca3b165 = DAT_14ca3b165 + '\x01';
  _DAT_14ca3fb20 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3b166 = DAT_14ca3b166 + '\x01';
  }
  return;
}



// FUNCTION 1460c93f0 FUN_1460c93f0 body=287 status=ok
// SIG undefined FUN_1460c93f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c93f0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3b338) {
    FUN_144b3d300(&DAT_14ca3b338);
    if (DAT_14ca3b338 == -1) {
      FUN_1460c9510();
      FUN_140db5666(&DAT_14ca3b290,2,&DAT_14ca3b228,L"TMaterialCHSFNoLightMapPolicyFAnyHitShader",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS anyhit=MaterialAHS",8,1,FUN_1472b7586,FUN_1472b755e,
                    FUN_141775ba0,&LAB_1472b755a,&LAB_1472b7554,&LAB_1472b7534,0x110,0);
      _DAT_14ca3b290 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a821);
      _Init_thread_footer(&DAT_14ca3b338);
    }
  }
  return &DAT_14ca3b290;
}



// FUNCTION 1460c9510 FUN_1460c9510 body=205 status=ok
// SIG undefined FUN_1460c9510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c9510(void)

{
  if ((DAT_14ca3b28f & 2) == 0) {
    DAT_14ca3b28f = DAT_14ca3b28f | 2;
    _DAT_14ca3b230 = L"TMaterialCHSFNoLightMapPolicyFAnyHitShader";
    _DAT_14ca3b248 = FUN_146826540;
    _DAT_14ca3b250 = FUN_146825d77;
    _DAT_14ca3b258 = FUN_146825fd6;
    _DAT_14ca3b260 = FUN_1407e02ea;
    _DAT_14ca3b268 = FUN_146826273;
    _DAT_14ca3b240 = FUN_1472b74fa;
    _DAT_14ca3b280 = 0xffffffff00000110;
    _DAT_14ca3b288 = 8;
    DAT_14ca3b28c = 0;
    _DAT_14ca3b270 = &LAB_1472b7530;
    FUN_1460c95de();
    FUN_1407e00cc(&DAT_14ca3b228);
    return;
  }
  return;
}



// FUNCTION 1460c95de FUN_1460c95de body=133 status=ok
// SIG undefined FUN_1460c95de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c95de(void)

{
  _DAT_14ca3fb50 = L"BASE";
  DAT_14ca3fb7a = 4;
  FUN_1411baada();
  _DAT_14ca3fb60 = DAT_14ca3b238;
  _DAT_14ca3fb58 = &DAT_14ca3fa38;
  _DAT_14ca3fb68 = &LAB_14682652b;
  DAT_14ca3b238 = &DAT_14ca3fb50;
  DAT_14ca3b28d = DAT_14ca3b28d + '\x01';
  _DAT_14ca3fb70 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3b28e = DAT_14ca3b28e + '\x01';
  }
  return;
}



// FUNCTION 1460c9664 FUN_1460c9664 body=287 status=ok
// SIG undefined FUN_1460c9664(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c9664(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3b460) {
    FUN_144b3d300(&DAT_14ca3b460);
    if (DAT_14ca3b460 == -1) {
      FUN_1460c9784();
      FUN_140db5666(&DAT_14ca3b3b8,2,&DAT_14ca3b350,L"TMaterialCHSLodFNoLightMapPolicy",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS",8,1,FUN_1472b7662,FUN_1472b763a,FUN_141775df6,
                    &LAB_1472b7636,&LAB_1472b7630,&LAB_1472b7610,0x110,0);
      _DAT_14ca3b3b8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a82d);
      _Init_thread_footer(&DAT_14ca3b460);
    }
  }
  return &DAT_14ca3b3b8;
}



// FUNCTION 1460c9784 FUN_1460c9784 body=205 status=ok
// SIG undefined FUN_1460c9784(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c9784(void)

{
  if ((DAT_14ca3b3b7 & 2) == 0) {
    DAT_14ca3b3b7 = DAT_14ca3b3b7 | 2;
    _DAT_14ca3b358 = L"TMaterialCHSLodFNoLightMapPolicy";
    _DAT_14ca3b370 = FUN_146826540;
    _DAT_14ca3b378 = FUN_146825d77;
    _DAT_14ca3b380 = FUN_146825fd6;
    _DAT_14ca3b388 = FUN_1407e02ea;
    _DAT_14ca3b390 = FUN_146826273;
    _DAT_14ca3b368 = FUN_1472b75d6;
    _DAT_14ca3b3a8 = 0xffffffff00000110;
    _DAT_14ca3b3b0 = 8;
    DAT_14ca3b3b4 = 0;
    _DAT_14ca3b398 = &LAB_1472b760c;
    FUN_1460c9852();
    FUN_1407e00cc(&DAT_14ca3b350);
    return;
  }
  return;
}



// FUNCTION 1460c9852 FUN_1460c9852 body=133 status=ok
// SIG undefined FUN_1460c9852(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c9852(void)

{
  _DAT_14ca3fba0 = L"BASE";
  DAT_14ca3fbca = 4;
  FUN_1411baada();
  _DAT_14ca3fbb0 = DAT_14ca3b360;
  _DAT_14ca3fba8 = &DAT_14ca3fa38;
  _DAT_14ca3fbb8 = &LAB_14682652b;
  DAT_14ca3b360 = &DAT_14ca3fba0;
  DAT_14ca3b3b5 = DAT_14ca3b3b5 + '\x01';
  _DAT_14ca3fbc0 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3b3b6 = DAT_14ca3b3b6 + '\x01';
  }
  return;
}



// FUNCTION 1460c98d8 FUN_1460c98d8 body=287 status=ok
// SIG undefined FUN_1460c98d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c98d8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3b588) {
    FUN_144b3d300(&DAT_14ca3b588);
    if (DAT_14ca3b588 == -1) {
      FUN_1460c99f8();
      FUN_140db5666(&DAT_14ca3b4e0,2,&DAT_14ca3b478,L"TMaterialCHSLodFNoLightMapPolicyFAnyHitShader"
                    ,L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS anyhit=MaterialAHS",8,1,FUN_1472b773e,FUN_1472b7716,
                    FUN_141776052,&LAB_1472b7712,&LAB_1472b770c,&LAB_1472b76ec,0x110,0);
      _DAT_14ca3b4e0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a839);
      _Init_thread_footer(&DAT_14ca3b588);
    }
  }
  return &DAT_14ca3b4e0;
}



// FUNCTION 1460c99f8 FUN_1460c99f8 body=205 status=ok
// SIG undefined FUN_1460c99f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c99f8(void)

{
  if ((DAT_14ca3b4df & 2) == 0) {
    DAT_14ca3b4df = DAT_14ca3b4df | 2;
    _DAT_14ca3b480 = L"TMaterialCHSLodFNoLightMapPolicyFAnyHitShader";
    _DAT_14ca3b498 = FUN_146826540;
    _DAT_14ca3b4a0 = FUN_146825d77;
    _DAT_14ca3b4a8 = FUN_146825fd6;
    _DAT_14ca3b4b0 = FUN_1407e02ea;
    _DAT_14ca3b4b8 = FUN_146826273;
    _DAT_14ca3b490 = FUN_1472b76b2;
    _DAT_14ca3b4d0 = 0xffffffff00000110;
    _DAT_14ca3b4d8 = 8;
    DAT_14ca3b4dc = 0;
    _DAT_14ca3b4c0 = &LAB_1472b76e8;
    FUN_1460c9ac6();
    FUN_1407e00cc(&DAT_14ca3b478);
    return;
  }
  return;
}



// FUNCTION 1460c9ac6 FUN_1460c9ac6 body=133 status=ok
// SIG undefined FUN_1460c9ac6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c9ac6(void)

{
  _DAT_14ca3fbf0 = L"BASE";
  DAT_14ca3fc1a = 4;
  FUN_1411baada();
  _DAT_14ca3fc00 = DAT_14ca3b488;
  _DAT_14ca3fbf8 = &DAT_14ca3fa38;
  _DAT_14ca3fc08 = &LAB_14682652b;
  DAT_14ca3b488 = &DAT_14ca3fbf0;
  DAT_14ca3b4dd = DAT_14ca3b4dd + '\x01';
  _DAT_14ca3fc10 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3b4de = DAT_14ca3b4de + '\x01';
  }
  return;
}



// FUNCTION 1460c9b4c FUN_1460c9b4c body=287 status=ok
// SIG undefined FUN_1460c9b4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c9b4c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3b6b0) {
    FUN_144b3d300(&DAT_14ca3b6b0);
    if (DAT_14ca3b6b0 == -1) {
      FUN_1460c9c6c();
      FUN_140db5666(&DAT_14ca3b608,2,&DAT_14ca3b5a0,L"TMaterialCHS_IS_FNoLightMapPolicy",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS intersection=MaterialIS",8,1,FUN_1472b781a,
                    FUN_1472b77f2,FUN_1417762a8,&LAB_1472b77ee,&LAB_1472b77e8,&LAB_1472b77c8,0x110,0
                   );
      _DAT_14ca3b608 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a845);
      _Init_thread_footer(&DAT_14ca3b6b0);
    }
  }
  return &DAT_14ca3b608;
}



// FUNCTION 1460c9c6c FUN_1460c9c6c body=205 status=ok
// SIG undefined FUN_1460c9c6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c9c6c(void)

{
  if ((DAT_14ca3b607 & 2) == 0) {
    DAT_14ca3b607 = DAT_14ca3b607 | 2;
    _DAT_14ca3b5a8 = L"TMaterialCHS_IS_FNoLightMapPolicy";
    _DAT_14ca3b5c0 = FUN_146826540;
    _DAT_14ca3b5c8 = FUN_146825d77;
    _DAT_14ca3b5d0 = FUN_146825fd6;
    _DAT_14ca3b5d8 = FUN_1407e02ea;
    _DAT_14ca3b5e0 = FUN_146826273;
    _DAT_14ca3b5b8 = FUN_1472b778e;
    _DAT_14ca3b5f8 = 0xffffffff00000110;
    _DAT_14ca3b600 = 8;
    DAT_14ca3b604 = 0;
    _DAT_14ca3b5e8 = &LAB_1472b77c4;
    FUN_1460c9d3a();
    FUN_1407e00cc(&DAT_14ca3b5a0);
    return;
  }
  return;
}



// FUNCTION 1460c9d3a FUN_1460c9d3a body=133 status=ok
// SIG undefined FUN_1460c9d3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c9d3a(void)

{
  _DAT_14ca3fc40 = L"BASE";
  DAT_14ca3fc6a = 4;
  FUN_1411baada();
  _DAT_14ca3fc50 = DAT_14ca3b5b0;
  _DAT_14ca3fc48 = &DAT_14ca3fa38;
  _DAT_14ca3fc58 = &LAB_14682652b;
  DAT_14ca3b5b0 = &DAT_14ca3fc40;
  DAT_14ca3b605 = DAT_14ca3b605 + '\x01';
  _DAT_14ca3fc60 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3b606 = DAT_14ca3b606 + '\x01';
  }
  return;
}



// FUNCTION 1460c9dc0 FUN_1460c9dc0 body=287 status=ok
// SIG undefined FUN_1460c9dc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460c9dc0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3b7d8) {
    FUN_144b3d300(&DAT_14ca3b7d8);
    if (DAT_14ca3b7d8 == -1) {
      FUN_1460c9ee0();
      FUN_140db5666(&DAT_14ca3b730,2,&DAT_14ca3b6c8,
                    L"TMaterialCHS_IS_FNoLightMapPolicyFAnyHitShader",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS anyhit=MaterialAHS intersection=MaterialIS",8,1,
                    FUN_1472b78f6,FUN_1472b78ce,FUN_141776504,&LAB_1472b78ca,&LAB_1472b78c4,
                    &LAB_1472b78a4,0x110,0);
      _DAT_14ca3b730 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a851);
      _Init_thread_footer(&DAT_14ca3b7d8);
    }
  }
  return &DAT_14ca3b730;
}



// FUNCTION 1460c9ee0 FUN_1460c9ee0 body=205 status=ok
// SIG undefined FUN_1460c9ee0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c9ee0(void)

{
  if ((DAT_14ca3b72f & 2) == 0) {
    DAT_14ca3b72f = DAT_14ca3b72f | 2;
    _DAT_14ca3b6d0 = L"TMaterialCHS_IS_FNoLightMapPolicyFAnyHitShader";
    _DAT_14ca3b6e8 = FUN_146826540;
    _DAT_14ca3b6f0 = FUN_146825d77;
    _DAT_14ca3b6f8 = FUN_146825fd6;
    _DAT_14ca3b700 = FUN_1407e02ea;
    _DAT_14ca3b708 = FUN_146826273;
    _DAT_14ca3b6e0 = FUN_1472b786a;
    _DAT_14ca3b720 = 0xffffffff00000110;
    _DAT_14ca3b728 = 8;
    DAT_14ca3b72c = 0;
    _DAT_14ca3b710 = &LAB_1472b78a0;
    FUN_1460c9fae();
    FUN_1407e00cc(&DAT_14ca3b6c8);
    return;
  }
  return;
}



// FUNCTION 1460c9fae FUN_1460c9fae body=133 status=ok
// SIG undefined FUN_1460c9fae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460c9fae(void)

{
  _DAT_14ca3fc90 = L"BASE";
  DAT_14ca3fcba = 4;
  FUN_1411baada();
  _DAT_14ca3fca0 = DAT_14ca3b6d8;
  _DAT_14ca3fc98 = &DAT_14ca3fa38;
  _DAT_14ca3fca8 = &LAB_14682652b;
  DAT_14ca3b6d8 = &DAT_14ca3fc90;
  DAT_14ca3b72d = DAT_14ca3b72d + '\x01';
  _DAT_14ca3fcb0 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3b72e = DAT_14ca3b72e + '\x01';
  }
  return;
}



// FUNCTION 1460ca034 FUN_1460ca034 body=287 status=ok
// SIG undefined FUN_1460ca034(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ca034(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3b900) {
    FUN_144b3d300(&DAT_14ca3b900);
    if (DAT_14ca3b900 == -1) {
      FUN_1460ca154();
      FUN_140db5666(&DAT_14ca3b858,2,&DAT_14ca3b7f0,L"TMaterialCHS_IS_LodFNoLightMapPolicy",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS intersection=MaterialIS",8,1,FUN_1472b79d2,
                    FUN_1472b79aa,FUN_14177675a,&LAB_1472b79a6,&LAB_1472b79a0,&LAB_1472b7980,0x110,0
                   );
      _DAT_14ca3b858 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a85d);
      _Init_thread_footer(&DAT_14ca3b900);
    }
  }
  return &DAT_14ca3b858;
}



// FUNCTION 1460ca154 FUN_1460ca154 body=205 status=ok
// SIG undefined FUN_1460ca154(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ca154(void)

{
  if ((DAT_14ca3b857 & 2) == 0) {
    DAT_14ca3b857 = DAT_14ca3b857 | 2;
    _DAT_14ca3b7f8 = L"TMaterialCHS_IS_LodFNoLightMapPolicy";
    _DAT_14ca3b810 = FUN_146826540;
    _DAT_14ca3b818 = FUN_146825d77;
    _DAT_14ca3b820 = FUN_146825fd6;
    _DAT_14ca3b828 = FUN_1407e02ea;
    _DAT_14ca3b830 = FUN_146826273;
    _DAT_14ca3b808 = FUN_1472b7946;
    _DAT_14ca3b848 = 0xffffffff00000110;
    _DAT_14ca3b850 = 8;
    DAT_14ca3b854 = 0;
    _DAT_14ca3b838 = &LAB_1472b797c;
    FUN_1460ca222();
    FUN_1407e00cc(&DAT_14ca3b7f0);
    return;
  }
  return;
}



// FUNCTION 1460ca222 FUN_1460ca222 body=133 status=ok
// SIG undefined FUN_1460ca222(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ca222(void)

{
  _DAT_14ca3fce0 = L"BASE";
  DAT_14ca3fd0a = 4;
  FUN_1411baada();
  _DAT_14ca3fcf0 = DAT_14ca3b800;
  _DAT_14ca3fce8 = &DAT_14ca3fa38;
  _DAT_14ca3fcf8 = &LAB_14682652b;
  DAT_14ca3b800 = &DAT_14ca3fce0;
  DAT_14ca3b855 = DAT_14ca3b855 + '\x01';
  _DAT_14ca3fd00 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3b856 = DAT_14ca3b856 + '\x01';
  }
  return;
}



// FUNCTION 1460ca2a8 FUN_1460ca2a8 body=287 status=ok
// SIG undefined FUN_1460ca2a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ca2a8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3ba28) {
    FUN_144b3d300(&DAT_14ca3ba28);
    if (DAT_14ca3ba28 == -1) {
      FUN_1460ca3c8();
      FUN_140db5666(&DAT_14ca3b980,2,&DAT_14ca3b918,
                    L"TMaterialCHS_IS_LodFNoLightMapPolicyFAnyHitShader",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS anyhit=MaterialAHS intersection=MaterialIS",8,1,
                    FUN_1472b7aae,FUN_1472b7a86,FUN_1417769b6,&LAB_1472b7a82,&LAB_1472b7a7c,
                    &LAB_1472b7a5c,0x110,0);
      _DAT_14ca3b980 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a869);
      _Init_thread_footer(&DAT_14ca3ba28);
    }
  }
  return &DAT_14ca3b980;
}



// FUNCTION 1460ca3c8 FUN_1460ca3c8 body=205 status=ok
// SIG undefined FUN_1460ca3c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ca3c8(void)

{
  if ((DAT_14ca3b97f & 2) == 0) {
    DAT_14ca3b97f = DAT_14ca3b97f | 2;
    _DAT_14ca3b920 = L"TMaterialCHS_IS_LodFNoLightMapPolicyFAnyHitShader";
    _DAT_14ca3b938 = FUN_146826540;
    _DAT_14ca3b940 = FUN_146825d77;
    _DAT_14ca3b948 = FUN_146825fd6;
    _DAT_14ca3b950 = FUN_1407e02ea;
    _DAT_14ca3b958 = FUN_146826273;
    _DAT_14ca3b930 = FUN_1472b7a22;
    _DAT_14ca3b970 = 0xffffffff00000110;
    _DAT_14ca3b978 = 8;
    DAT_14ca3b97c = 0;
    _DAT_14ca3b960 = &LAB_1472b7a58;
    FUN_1460ca496();
    FUN_1407e00cc(&DAT_14ca3b918);
    return;
  }
  return;
}



// FUNCTION 1460ca496 FUN_1460ca496 body=133 status=ok
// SIG undefined FUN_1460ca496(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ca496(void)

{
  _DAT_14ca3fd30 = L"BASE";
  DAT_14ca3fd5a = 4;
  FUN_1411baada();
  _DAT_14ca3fd40 = DAT_14ca3b928;
  _DAT_14ca3fd38 = &DAT_14ca3fa38;
  _DAT_14ca3fd48 = &LAB_14682652b;
  DAT_14ca3b928 = &DAT_14ca3fd30;
  DAT_14ca3b97d = DAT_14ca3b97d + '\x01';
  _DAT_14ca3fd50 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3b97e = DAT_14ca3b97e + '\x01';
  }
  return;
}



// FUNCTION 1460ca51c FUN_1460ca51c body=287 status=ok
// SIG undefined FUN_1460ca51c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ca51c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3bb50) {
    FUN_144b3d300(&DAT_14ca3bb50);
    if (DAT_14ca3bb50 == -1) {
      FUN_1460ca63c();
      FUN_140db5666(&DAT_14ca3baa8,2,&DAT_14ca3ba40,
                    L"TMaterialCHSFPrecomputedVolumetricLightmapLightingPolicy",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS",8,1,FUN_1472b7b8a,FUN_1472b7b62,FUN_141776c0c,
                    &LAB_1472b7b5e,&LAB_1472b7b58,&LAB_1472b7b38,0x110,0);
      _DAT_14ca3baa8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a875);
      _Init_thread_footer(&DAT_14ca3bb50);
    }
  }
  return &DAT_14ca3baa8;
}



// FUNCTION 1460ca63c FUN_1460ca63c body=205 status=ok
// SIG undefined FUN_1460ca63c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ca63c(void)

{
  if ((DAT_14ca3baa7 & 2) == 0) {
    DAT_14ca3baa7 = DAT_14ca3baa7 | 2;
    _DAT_14ca3ba48 = L"TMaterialCHSFPrecomputedVolumetricLightmapLightingPolicy";
    _DAT_14ca3ba60 = FUN_146826540;
    _DAT_14ca3ba68 = FUN_146825d77;
    _DAT_14ca3ba70 = FUN_146825fd6;
    _DAT_14ca3ba78 = FUN_1407e02ea;
    _DAT_14ca3ba80 = FUN_146826273;
    _DAT_14ca3ba58 = FUN_1472b7afe;
    _DAT_14ca3ba98 = 0xffffffff00000110;
    _DAT_14ca3baa0 = 8;
    DAT_14ca3baa4 = 0;
    _DAT_14ca3ba88 = &LAB_1472b7b34;
    FUN_1460ca70a();
    FUN_1407e00cc(&DAT_14ca3ba40);
    return;
  }
  return;
}



// FUNCTION 1460ca70a FUN_1460ca70a body=133 status=ok
// SIG undefined FUN_1460ca70a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ca70a(void)

{
  _DAT_14ca3fd80 = L"BASE";
  DAT_14ca3fdaa = 4;
  FUN_1411baada();
  _DAT_14ca3fd90 = DAT_14ca3ba50;
  _DAT_14ca3fd88 = &DAT_14ca3fa38;
  _DAT_14ca3fd98 = &LAB_14682652b;
  DAT_14ca3ba50 = &DAT_14ca3fd80;
  DAT_14ca3baa5 = DAT_14ca3baa5 + '\x01';
  _DAT_14ca3fda0 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3baa6 = DAT_14ca3baa6 + '\x01';
  }
  return;
}



// FUNCTION 1460ca790 FUN_1460ca790 body=287 status=ok
// SIG undefined FUN_1460ca790(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ca790(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3bc78) {
    FUN_144b3d300(&DAT_14ca3bc78);
    if (DAT_14ca3bc78 == -1) {
      FUN_1460ca8b0();
      FUN_140db5666(&DAT_14ca3bbd0,2,&DAT_14ca3bb68,
                    L"TMaterialCHSFPrecomputedVolumetricLightmapLightingPolicyFAnyHitShader",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS anyhit=MaterialAHS",8,1,FUN_1472b7c66,FUN_1472b7c3e,
                    FUN_141776e6a,&LAB_1472b7c3a,&LAB_1472b7c34,&LAB_1472b7c14,0x110,0);
      _DAT_14ca3bbd0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a881);
      _Init_thread_footer(&DAT_14ca3bc78);
    }
  }
  return &DAT_14ca3bbd0;
}



// FUNCTION 1460ca8b0 FUN_1460ca8b0 body=205 status=ok
// SIG undefined FUN_1460ca8b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ca8b0(void)

{
  if ((DAT_14ca3bbcf & 2) == 0) {
    DAT_14ca3bbcf = DAT_14ca3bbcf | 2;
    _DAT_14ca3bb70 = L"TMaterialCHSFPrecomputedVolumetricLightmapLightingPolicyFAnyHitShader";
    _DAT_14ca3bb88 = FUN_146826540;
    _DAT_14ca3bb90 = FUN_146825d77;
    _DAT_14ca3bb98 = FUN_146825fd6;
    _DAT_14ca3bba0 = FUN_1407e02ea;
    _DAT_14ca3bba8 = FUN_146826273;
    _DAT_14ca3bb80 = FUN_1472b7bda;
    _DAT_14ca3bbc0 = 0xffffffff00000110;
    _DAT_14ca3bbc8 = 8;
    DAT_14ca3bbcc = 0;
    _DAT_14ca3bbb0 = &LAB_1472b7c10;
    FUN_1460ca97e();
    FUN_1407e00cc(&DAT_14ca3bb68);
    return;
  }
  return;
}



// FUNCTION 1460ca97e FUN_1460ca97e body=133 status=ok
// SIG undefined FUN_1460ca97e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ca97e(void)

{
  _DAT_14ca3fdd0 = L"BASE";
  DAT_14ca3fdfa = 4;
  FUN_1411baada();
  _DAT_14ca3fde0 = DAT_14ca3bb78;
  _DAT_14ca3fdd8 = &DAT_14ca3fa38;
  _DAT_14ca3fde8 = &LAB_14682652b;
  DAT_14ca3bb78 = &DAT_14ca3fdd0;
  DAT_14ca3bbcd = DAT_14ca3bbcd + '\x01';
  _DAT_14ca3fdf0 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3bbce = DAT_14ca3bbce + '\x01';
  }
  return;
}



// FUNCTION 1460caa04 FUN_1460caa04 body=287 status=ok
// SIG undefined FUN_1460caa04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460caa04(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3bda0) {
    FUN_144b3d300(&DAT_14ca3bda0);
    if (DAT_14ca3bda0 == -1) {
      FUN_1460cab24();
      FUN_140db5666(&DAT_14ca3bcf8,2,&DAT_14ca3bc90,
                    L"TMaterialCHSLodFPrecomputedVolumetricLightmapLightingPolicy",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS",8,1,FUN_1472b7d42,FUN_1472b7d1a,FUN_1417770c2,
                    &LAB_1472b7d16,&LAB_1472b7d10,&LAB_1472b7cf0,0x110,0);
      _DAT_14ca3bcf8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a88d);
      _Init_thread_footer(&DAT_14ca3bda0);
    }
  }
  return &DAT_14ca3bcf8;
}



// FUNCTION 1460cab24 FUN_1460cab24 body=205 status=ok
// SIG undefined FUN_1460cab24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cab24(void)

{
  if ((DAT_14ca3bcf7 & 2) == 0) {
    DAT_14ca3bcf7 = DAT_14ca3bcf7 | 2;
    _DAT_14ca3bc98 = L"TMaterialCHSLodFPrecomputedVolumetricLightmapLightingPolicy";
    _DAT_14ca3bcb0 = FUN_146826540;
    _DAT_14ca3bcb8 = FUN_146825d77;
    _DAT_14ca3bcc0 = FUN_146825fd6;
    _DAT_14ca3bcc8 = FUN_1407e02ea;
    _DAT_14ca3bcd0 = FUN_146826273;
    _DAT_14ca3bca8 = FUN_1472b7cb6;
    _DAT_14ca3bce8 = 0xffffffff00000110;
    _DAT_14ca3bcf0 = 8;
    DAT_14ca3bcf4 = 0;
    _DAT_14ca3bcd8 = &LAB_1472b7cec;
    FUN_1460cabf2();
    FUN_1407e00cc(&DAT_14ca3bc90);
    return;
  }
  return;
}



// FUNCTION 1460cabf2 FUN_1460cabf2 body=133 status=ok
// SIG undefined FUN_1460cabf2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cabf2(void)

{
  _DAT_14ca3fe20 = L"BASE";
  DAT_14ca3fe4a = 4;
  FUN_1411baada();
  _DAT_14ca3fe30 = DAT_14ca3bca0;
  _DAT_14ca3fe28 = &DAT_14ca3fa38;
  _DAT_14ca3fe38 = &LAB_14682652b;
  DAT_14ca3bca0 = &DAT_14ca3fe20;
  DAT_14ca3bcf5 = DAT_14ca3bcf5 + '\x01';
  _DAT_14ca3fe40 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3bcf6 = DAT_14ca3bcf6 + '\x01';
  }
  return;
}



// FUNCTION 1460cac78 FUN_1460cac78 body=287 status=ok
// SIG undefined FUN_1460cac78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460cac78(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3bec8) {
    FUN_144b3d300(&DAT_14ca3bec8);
    if (DAT_14ca3bec8 == -1) {
      FUN_1460cad98();
      FUN_140db5666(&DAT_14ca3be20,2,&DAT_14ca3bdb8,
                    L"TMaterialCHSLodFPrecomputedVolumetricLightmapLightingPolicyFAnyHitShader",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS anyhit=MaterialAHS",8,1,FUN_1472b7e1e,FUN_1472b7df6,
                    FUN_141777320,&LAB_1472b7df2,&LAB_1472b7dec,&LAB_1472b7dcc,0x110,0);
      _DAT_14ca3be20 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a899);
      _Init_thread_footer(&DAT_14ca3bec8);
    }
  }
  return &DAT_14ca3be20;
}



// FUNCTION 1460cad98 FUN_1460cad98 body=205 status=ok
// SIG undefined FUN_1460cad98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cad98(void)

{
  if ((DAT_14ca3be1f & 2) == 0) {
    DAT_14ca3be1f = DAT_14ca3be1f | 2;
    _DAT_14ca3bdc0 = L"TMaterialCHSLodFPrecomputedVolumetricLightmapLightingPolicyFAnyHitShader";
    _DAT_14ca3bdd8 = FUN_146826540;
    _DAT_14ca3bde0 = FUN_146825d77;
    _DAT_14ca3bde8 = FUN_146825fd6;
    _DAT_14ca3bdf0 = FUN_1407e02ea;
    _DAT_14ca3bdf8 = FUN_146826273;
    _DAT_14ca3bdd0 = FUN_1472b7d92;
    _DAT_14ca3be10 = 0xffffffff00000110;
    _DAT_14ca3be18 = 8;
    DAT_14ca3be1c = 0;
    _DAT_14ca3be00 = &LAB_1472b7dc8;
    FUN_1460cae66();
    FUN_1407e00cc(&DAT_14ca3bdb8);
    return;
  }
  return;
}



// FUNCTION 1460cae66 FUN_1460cae66 body=133 status=ok
// SIG undefined FUN_1460cae66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cae66(void)

{
  _DAT_14ca3fe70 = L"BASE";
  DAT_14ca3fe9a = 4;
  FUN_1411baada();
  _DAT_14ca3fe80 = DAT_14ca3bdc8;
  _DAT_14ca3fe78 = &DAT_14ca3fa38;
  _DAT_14ca3fe88 = &LAB_14682652b;
  DAT_14ca3bdc8 = &DAT_14ca3fe70;
  DAT_14ca3be1d = DAT_14ca3be1d + '\x01';
  _DAT_14ca3fe90 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3be1e = DAT_14ca3be1e + '\x01';
  }
  return;
}



// FUNCTION 1460caeec FUN_1460caeec body=287 status=ok
// SIG undefined FUN_1460caeec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460caeec(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3bff0) {
    FUN_144b3d300(&DAT_14ca3bff0);
    if (DAT_14ca3bff0 == -1) {
      FUN_1460cb00c();
      FUN_140db5666(&DAT_14ca3bf48,2,&DAT_14ca3bee0,
                    L"TMaterialCHS_IS_FPrecomputedVolumetricLightmapLightingPolicy",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS intersection=MaterialIS",8,1,FUN_1472b7efa,
                    FUN_1472b7ed2,FUN_141777578,&LAB_1472b7ece,&LAB_1472b7ec8,&LAB_1472b7ea8,0x110,0
                   );
      _DAT_14ca3bf48 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a8a5);
      _Init_thread_footer(&DAT_14ca3bff0);
    }
  }
  return &DAT_14ca3bf48;
}



// FUNCTION 1460cb00c FUN_1460cb00c body=205 status=ok
// SIG undefined FUN_1460cb00c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cb00c(void)

{
  if ((DAT_14ca3bf47 & 2) == 0) {
    DAT_14ca3bf47 = DAT_14ca3bf47 | 2;
    _DAT_14ca3bee8 = L"TMaterialCHS_IS_FPrecomputedVolumetricLightmapLightingPolicy";
    _DAT_14ca3bf00 = FUN_146826540;
    _DAT_14ca3bf08 = FUN_146825d77;
    _DAT_14ca3bf10 = FUN_146825fd6;
    _DAT_14ca3bf18 = FUN_1407e02ea;
    _DAT_14ca3bf20 = FUN_146826273;
    _DAT_14ca3bef8 = FUN_1472b7e6e;
    _DAT_14ca3bf38 = 0xffffffff00000110;
    _DAT_14ca3bf40 = 8;
    DAT_14ca3bf44 = 0;
    _DAT_14ca3bf28 = &LAB_1472b7ea4;
    FUN_1460cb0da();
    FUN_1407e00cc(&DAT_14ca3bee0);
    return;
  }
  return;
}



// FUNCTION 1460cb0da FUN_1460cb0da body=133 status=ok
// SIG undefined FUN_1460cb0da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cb0da(void)

{
  _DAT_14ca3fec0 = L"BASE";
  DAT_14ca3feea = 4;
  FUN_1411baada();
  _DAT_14ca3fed0 = DAT_14ca3bef0;
  _DAT_14ca3fec8 = &DAT_14ca3fa38;
  _DAT_14ca3fed8 = &LAB_14682652b;
  DAT_14ca3bef0 = &DAT_14ca3fec0;
  DAT_14ca3bf45 = DAT_14ca3bf45 + '\x01';
  _DAT_14ca3fee0 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3bf46 = DAT_14ca3bf46 + '\x01';
  }
  return;
}



// FUNCTION 1460cb160 FUN_1460cb160 body=287 status=ok
// SIG undefined FUN_1460cb160(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460cb160(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3c118) {
    FUN_144b3d300(&DAT_14ca3c118);
    if (DAT_14ca3c118 == -1) {
      FUN_1460cb280();
      FUN_140db5666(&DAT_14ca3c070,2,&DAT_14ca3c008,
                    L"TMaterialCHS_IS_FPrecomputedVolumetricLightmapLightingPolicyFAnyHitShader",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS anyhit=MaterialAHS intersection=MaterialIS",8,1,
                    FUN_1472b7fd6,FUN_1472b7fae,FUN_1417777d8,&LAB_1472b7faa,&LAB_1472b7fa4,
                    &LAB_1472b7f84,0x110,0);
      _DAT_14ca3c070 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a8b1);
      _Init_thread_footer(&DAT_14ca3c118);
    }
  }
  return &DAT_14ca3c070;
}



// FUNCTION 1460cb280 FUN_1460cb280 body=205 status=ok
// SIG undefined FUN_1460cb280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cb280(void)

{
  if ((DAT_14ca3c06f & 2) == 0) {
    DAT_14ca3c06f = DAT_14ca3c06f | 2;
    _DAT_14ca3c010 = L"TMaterialCHS_IS_FPrecomputedVolumetricLightmapLightingPolicyFAnyHitShader";
    _DAT_14ca3c028 = FUN_146826540;
    _DAT_14ca3c030 = FUN_146825d77;
    _DAT_14ca3c038 = FUN_146825fd6;
    _DAT_14ca3c040 = FUN_1407e02ea;
    _DAT_14ca3c048 = FUN_146826273;
    _DAT_14ca3c020 = FUN_1472b7f4a;
    _DAT_14ca3c060 = 0xffffffff00000110;
    _DAT_14ca3c068 = 8;
    DAT_14ca3c06c = 0;
    _DAT_14ca3c050 = &LAB_1472b7f80;
    FUN_1460cb34e();
    FUN_1407e00cc(&DAT_14ca3c008);
    return;
  }
  return;
}



// FUNCTION 1460cb34e FUN_1460cb34e body=133 status=ok
// SIG undefined FUN_1460cb34e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cb34e(void)

{
  _DAT_14ca3ff10 = L"BASE";
  DAT_14ca3ff3a = 4;
  FUN_1411baada();
  _DAT_14ca3ff20 = DAT_14ca3c018;
  _DAT_14ca3ff18 = &DAT_14ca3fa38;
  _DAT_14ca3ff28 = &LAB_14682652b;
  DAT_14ca3c018 = &DAT_14ca3ff10;
  DAT_14ca3c06d = DAT_14ca3c06d + '\x01';
  _DAT_14ca3ff30 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3c06e = DAT_14ca3c06e + '\x01';
  }
  return;
}



// FUNCTION 1460cb3d4 FUN_1460cb3d4 body=287 status=ok
// SIG undefined FUN_1460cb3d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460cb3d4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3c240) {
    FUN_144b3d300(&DAT_14ca3c240);
    if (DAT_14ca3c240 == -1) {
      FUN_1460cb4f4();
      FUN_140db5666(&DAT_14ca3c198,2,&DAT_14ca3c130,
                    L"TMaterialCHS_IS_LodFPrecomputedVolumetricLightmapLightingPolicy",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS intersection=MaterialIS",8,1,FUN_1472b80b2,
                    FUN_1472b808a,FUN_141777a30,&LAB_1472b8086,&LAB_1472b8080,&LAB_1472b8060,0x110,0
                   );
      _DAT_14ca3c198 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a8bd);
      _Init_thread_footer(&DAT_14ca3c240);
    }
  }
  return &DAT_14ca3c198;
}



// FUNCTION 1460cb4f4 FUN_1460cb4f4 body=205 status=ok
// SIG undefined FUN_1460cb4f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cb4f4(void)

{
  if ((DAT_14ca3c197 & 2) == 0) {
    DAT_14ca3c197 = DAT_14ca3c197 | 2;
    _DAT_14ca3c138 = L"TMaterialCHS_IS_LodFPrecomputedVolumetricLightmapLightingPolicy";
    _DAT_14ca3c150 = FUN_146826540;
    _DAT_14ca3c158 = FUN_146825d77;
    _DAT_14ca3c160 = FUN_146825fd6;
    _DAT_14ca3c168 = FUN_1407e02ea;
    _DAT_14ca3c170 = FUN_146826273;
    _DAT_14ca3c148 = FUN_1472b8026;
    _DAT_14ca3c188 = 0xffffffff00000110;
    _DAT_14ca3c190 = 8;
    DAT_14ca3c194 = 0;
    _DAT_14ca3c178 = &LAB_1472b805c;
    FUN_1460cb5c2();
    FUN_1407e00cc(&DAT_14ca3c130);
    return;
  }
  return;
}



// FUNCTION 1460cb5c2 FUN_1460cb5c2 body=133 status=ok
// SIG undefined FUN_1460cb5c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cb5c2(void)

{
  _DAT_14ca3ff60 = L"BASE";
  DAT_14ca3ff8a = 4;
  FUN_1411baada();
  _DAT_14ca3ff70 = DAT_14ca3c140;
  _DAT_14ca3ff68 = &DAT_14ca3fa38;
  _DAT_14ca3ff78 = &LAB_14682652b;
  DAT_14ca3c140 = &DAT_14ca3ff60;
  DAT_14ca3c195 = DAT_14ca3c195 + '\x01';
  _DAT_14ca3ff80 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3c196 = DAT_14ca3c196 + '\x01';
  }
  return;
}



// FUNCTION 1460cb648 FUN_1460cb648 body=287 status=ok
// SIG undefined FUN_1460cb648(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460cb648(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3c368) {
    FUN_144b3d300(&DAT_14ca3c368);
    if (DAT_14ca3c368 == -1) {
      FUN_1460cb768();
      FUN_140db5666(&DAT_14ca3c2c0,2,&DAT_14ca3c258,
                    L"TMaterialCHS_IS_LodFPrecomputedVolumetricLightmapLightingPolicyFAnyHitShader",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS anyhit=MaterialAHS intersection=MaterialIS",8,1,
                    FUN_1472b818e,FUN_1472b8166,FUN_141777c90,&LAB_1472b8162,&LAB_1472b815c,
                    &LAB_1472b813c,0x110,0);
      _DAT_14ca3c2c0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a8c9);
      _Init_thread_footer(&DAT_14ca3c368);
    }
  }
  return &DAT_14ca3c2c0;
}



// FUNCTION 1460cb768 FUN_1460cb768 body=205 status=ok
// SIG undefined FUN_1460cb768(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cb768(void)

{
  if ((DAT_14ca3c2bf & 2) == 0) {
    DAT_14ca3c2bf = DAT_14ca3c2bf | 2;
    _DAT_14ca3c260 = L"TMaterialCHS_IS_LodFPrecomputedVolumetricLightmapLightingPolicyFAnyHitShader"
    ;
    _DAT_14ca3c278 = FUN_146826540;
    _DAT_14ca3c280 = FUN_146825d77;
    _DAT_14ca3c288 = FUN_146825fd6;
    _DAT_14ca3c290 = FUN_1407e02ea;
    _DAT_14ca3c298 = FUN_146826273;
    _DAT_14ca3c270 = FUN_1472b8102;
    _DAT_14ca3c2b0 = 0xffffffff00000110;
    _DAT_14ca3c2b8 = 8;
    DAT_14ca3c2bc = 0;
    _DAT_14ca3c2a0 = &LAB_1472b8138;
    FUN_1460cb836();
    FUN_1407e00cc(&DAT_14ca3c258);
    return;
  }
  return;
}



// FUNCTION 1460cb836 FUN_1460cb836 body=133 status=ok
// SIG undefined FUN_1460cb836(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cb836(void)

{
  _DAT_14ca3ffb0 = L"BASE";
  DAT_14ca3ffda = 4;
  FUN_1411baada();
  _DAT_14ca3ffc0 = DAT_14ca3c268;
  _DAT_14ca3ffb8 = &DAT_14ca3fa38;
  _DAT_14ca3ffc8 = &LAB_14682652b;
  DAT_14ca3c268 = &DAT_14ca3ffb0;
  DAT_14ca3c2bd = DAT_14ca3c2bd + '\x01';
  _DAT_14ca3ffd0 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3c2be = DAT_14ca3c2be + '\x01';
  }
  return;
}



// FUNCTION 1460cb8bc FUN_1460cb8bc body=287 status=ok
// SIG undefined FUN_1460cb8bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460cb8bc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3c490) {
    FUN_144b3d300(&DAT_14ca3c490);
    if (DAT_14ca3c490 == -1) {
      FUN_1460cb9dc();
      FUN_140db5666(&DAT_14ca3c3e8,2,&DAT_14ca3c380,L"TMaterialCHSTLightMapPolicyLQ",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS",8,1,FUN_1472b826a,FUN_1472b8242,FUN_141777ee8,
                    &LAB_1472b823e,&LAB_1472b8238,&LAB_1472b8218,0x110,0);
      _DAT_14ca3c3e8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a8d5);
      _Init_thread_footer(&DAT_14ca3c490);
    }
  }
  return &DAT_14ca3c3e8;
}



// FUNCTION 1460cb9dc FUN_1460cb9dc body=205 status=ok
// SIG undefined FUN_1460cb9dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cb9dc(void)

{
  if ((DAT_14ca3c3e7 & 2) == 0) {
    DAT_14ca3c3e7 = DAT_14ca3c3e7 | 2;
    _DAT_14ca3c388 = L"TMaterialCHSTLightMapPolicyLQ";
    _DAT_14ca3c3a0 = FUN_146826540;
    _DAT_14ca3c3a8 = FUN_146825d77;
    _DAT_14ca3c3b0 = FUN_146825fd6;
    _DAT_14ca3c3b8 = FUN_1407e02ea;
    _DAT_14ca3c3c0 = FUN_146826273;
    _DAT_14ca3c398 = FUN_1472b81de;
    _DAT_14ca3c3d8 = 0xffffffff00000110;
    _DAT_14ca3c3e0 = 8;
    DAT_14ca3c3e4 = 0;
    _DAT_14ca3c3c8 = &LAB_1472b8214;
    FUN_1460cbaaa();
    FUN_1407e00cc(&DAT_14ca3c380);
    return;
  }
  return;
}



// FUNCTION 1460cbaaa FUN_1460cbaaa body=133 status=ok
// SIG undefined FUN_1460cbaaa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cbaaa(void)

{
  _DAT_14ca40000 = L"BASE";
  DAT_14ca4002a = 4;
  FUN_1411baada();
  _DAT_14ca40010 = DAT_14ca3c390;
  _DAT_14ca40008 = &DAT_14ca3fa38;
  _DAT_14ca40018 = &LAB_14682652b;
  DAT_14ca3c390 = &DAT_14ca40000;
  DAT_14ca3c3e5 = DAT_14ca3c3e5 + '\x01';
  _DAT_14ca40020 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3c3e6 = DAT_14ca3c3e6 + '\x01';
  }
  return;
}



// FUNCTION 1460cbb30 FUN_1460cbb30 body=287 status=ok
// SIG undefined FUN_1460cbb30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460cbb30(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3c5b8) {
    FUN_144b3d300(&DAT_14ca3c5b8);
    if (DAT_14ca3c5b8 == -1) {
      FUN_1460cbc50();
      FUN_140db5666(&DAT_14ca3c510,2,&DAT_14ca3c4a8,L"TMaterialCHSTLightMapPolicyLQFAnyHitShader",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS anyhit=MaterialAHS",8,1,FUN_1472b8346,FUN_1472b831e,
                    FUN_141778146,&LAB_1472b831a,&LAB_1472b8314,&LAB_1472b82f4,0x110,0);
      _DAT_14ca3c510 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a8e1);
      _Init_thread_footer(&DAT_14ca3c5b8);
    }
  }
  return &DAT_14ca3c510;
}



// FUNCTION 1460cbc50 FUN_1460cbc50 body=205 status=ok
// SIG undefined FUN_1460cbc50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cbc50(void)

{
  if ((DAT_14ca3c50f & 2) == 0) {
    DAT_14ca3c50f = DAT_14ca3c50f | 2;
    _DAT_14ca3c4b0 = L"TMaterialCHSTLightMapPolicyLQFAnyHitShader";
    _DAT_14ca3c4c8 = FUN_146826540;
    _DAT_14ca3c4d0 = FUN_146825d77;
    _DAT_14ca3c4d8 = FUN_146825fd6;
    _DAT_14ca3c4e0 = FUN_1407e02ea;
    _DAT_14ca3c4e8 = FUN_146826273;
    _DAT_14ca3c4c0 = FUN_1472b82ba;
    _DAT_14ca3c500 = 0xffffffff00000110;
    _DAT_14ca3c508 = 8;
    DAT_14ca3c50c = 0;
    _DAT_14ca3c4f0 = &LAB_1472b82f0;
    FUN_1460cbd1e();
    FUN_1407e00cc(&DAT_14ca3c4a8);
    return;
  }
  return;
}



// FUNCTION 1460cbd1e FUN_1460cbd1e body=133 status=ok
// SIG undefined FUN_1460cbd1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cbd1e(void)

{
  _DAT_14ca40050 = L"BASE";
  DAT_14ca4007a = 4;
  FUN_1411baada();
  _DAT_14ca40060 = DAT_14ca3c4b8;
  _DAT_14ca40058 = &DAT_14ca3fa38;
  _DAT_14ca40068 = &LAB_14682652b;
  DAT_14ca3c4b8 = &DAT_14ca40050;
  DAT_14ca3c50d = DAT_14ca3c50d + '\x01';
  _DAT_14ca40070 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3c50e = DAT_14ca3c50e + '\x01';
  }
  return;
}



// FUNCTION 1460cbda4 FUN_1460cbda4 body=287 status=ok
// SIG undefined FUN_1460cbda4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460cbda4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3c6e0) {
    FUN_144b3d300(&DAT_14ca3c6e0);
    if (DAT_14ca3c6e0 == -1) {
      FUN_1460cbec4();
      FUN_140db5666(&DAT_14ca3c638,2,&DAT_14ca3c5d0,L"TMaterialCHSLodTLightMapPolicyLQ",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS",8,1,FUN_1472b8422,FUN_1472b83fa,FUN_14177839e,
                    &LAB_1472b83f6,&LAB_1472b83f0,&LAB_1472b83d0,0x110,0);
      _DAT_14ca3c638 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a8ed);
      _Init_thread_footer(&DAT_14ca3c6e0);
    }
  }
  return &DAT_14ca3c638;
}



// FUNCTION 1460cbec4 FUN_1460cbec4 body=205 status=ok
// SIG undefined FUN_1460cbec4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cbec4(void)

{
  if ((DAT_14ca3c637 & 2) == 0) {
    DAT_14ca3c637 = DAT_14ca3c637 | 2;
    _DAT_14ca3c5d8 = L"TMaterialCHSLodTLightMapPolicyLQ";
    _DAT_14ca3c5f0 = FUN_146826540;
    _DAT_14ca3c5f8 = FUN_146825d77;
    _DAT_14ca3c600 = FUN_146825fd6;
    _DAT_14ca3c608 = FUN_1407e02ea;
    _DAT_14ca3c610 = FUN_146826273;
    _DAT_14ca3c5e8 = FUN_1472b8396;
    _DAT_14ca3c628 = 0xffffffff00000110;
    _DAT_14ca3c630 = 8;
    DAT_14ca3c634 = 0;
    _DAT_14ca3c618 = &LAB_1472b83cc;
    FUN_1460cbf92();
    FUN_1407e00cc(&DAT_14ca3c5d0);
    return;
  }
  return;
}



// FUNCTION 1460cbf92 FUN_1460cbf92 body=133 status=ok
// SIG undefined FUN_1460cbf92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cbf92(void)

{
  _DAT_14ca400a0 = L"BASE";
  DAT_14ca400ca = 4;
  FUN_1411baada();
  _DAT_14ca400b0 = DAT_14ca3c5e0;
  _DAT_14ca400a8 = &DAT_14ca3fa38;
  _DAT_14ca400b8 = &LAB_14682652b;
  DAT_14ca3c5e0 = &DAT_14ca400a0;
  DAT_14ca3c635 = DAT_14ca3c635 + '\x01';
  _DAT_14ca400c0 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3c636 = DAT_14ca3c636 + '\x01';
  }
  return;
}



// FUNCTION 1460cc018 FUN_1460cc018 body=287 status=ok
// SIG undefined FUN_1460cc018(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460cc018(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3c808) {
    FUN_144b3d300(&DAT_14ca3c808);
    if (DAT_14ca3c808 == -1) {
      FUN_1460cc138();
      FUN_140db5666(&DAT_14ca3c760,2,&DAT_14ca3c6f8,L"TMaterialCHSLodTLightMapPolicyLQFAnyHitShader"
                    ,L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS anyhit=MaterialAHS",8,1,FUN_1472b84fe,FUN_1472b84d6,
                    FUN_1417785fc,&LAB_1472b84d2,&LAB_1472b84cc,&LAB_1472b84ac,0x110,0);
      _DAT_14ca3c760 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a8f9);
      _Init_thread_footer(&DAT_14ca3c808);
    }
  }
  return &DAT_14ca3c760;
}



// FUNCTION 1460cc138 FUN_1460cc138 body=205 status=ok
// SIG undefined FUN_1460cc138(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cc138(void)

{
  if ((DAT_14ca3c75f & 2) == 0) {
    DAT_14ca3c75f = DAT_14ca3c75f | 2;
    _DAT_14ca3c700 = L"TMaterialCHSLodTLightMapPolicyLQFAnyHitShader";
    _DAT_14ca3c718 = FUN_146826540;
    _DAT_14ca3c720 = FUN_146825d77;
    _DAT_14ca3c728 = FUN_146825fd6;
    _DAT_14ca3c730 = FUN_1407e02ea;
    _DAT_14ca3c738 = FUN_146826273;
    _DAT_14ca3c710 = FUN_1472b8472;
    _DAT_14ca3c750 = 0xffffffff00000110;
    _DAT_14ca3c758 = 8;
    DAT_14ca3c75c = 0;
    _DAT_14ca3c740 = &LAB_1472b84a8;
    FUN_1460cc206();
    FUN_1407e00cc(&DAT_14ca3c6f8);
    return;
  }
  return;
}



// FUNCTION 1460cc206 FUN_1460cc206 body=133 status=ok
// SIG undefined FUN_1460cc206(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cc206(void)

{
  _DAT_14ca400f0 = L"BASE";
  DAT_14ca4011a = 4;
  FUN_1411baada();
  _DAT_14ca40100 = DAT_14ca3c708;
  _DAT_14ca400f8 = &DAT_14ca3fa38;
  _DAT_14ca40108 = &LAB_14682652b;
  DAT_14ca3c708 = &DAT_14ca400f0;
  DAT_14ca3c75d = DAT_14ca3c75d + '\x01';
  _DAT_14ca40110 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3c75e = DAT_14ca3c75e + '\x01';
  }
  return;
}



// FUNCTION 1460cc28c FUN_1460cc28c body=287 status=ok
// SIG undefined FUN_1460cc28c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460cc28c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3c930) {
    FUN_144b3d300(&DAT_14ca3c930);
    if (DAT_14ca3c930 == -1) {
      FUN_1460cc3ac();
      FUN_140db5666(&DAT_14ca3c888,2,&DAT_14ca3c820,L"TMaterialCHS_IS_TLightMapPolicyLQ",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS intersection=MaterialIS",8,1,FUN_1472b85da,
                    FUN_1472b85b2,FUN_141778854,&LAB_1472b85ae,&LAB_1472b85a8,&LAB_1472b8588,0x110,0
                   );
      _DAT_14ca3c888 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a905);
      _Init_thread_footer(&DAT_14ca3c930);
    }
  }
  return &DAT_14ca3c888;
}



// FUNCTION 1460cc3ac FUN_1460cc3ac body=205 status=ok
// SIG undefined FUN_1460cc3ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cc3ac(void)

{
  if ((DAT_14ca3c887 & 2) == 0) {
    DAT_14ca3c887 = DAT_14ca3c887 | 2;
    _DAT_14ca3c828 = L"TMaterialCHS_IS_TLightMapPolicyLQ";
    _DAT_14ca3c840 = FUN_146826540;
    _DAT_14ca3c848 = FUN_146825d77;
    _DAT_14ca3c850 = FUN_146825fd6;
    _DAT_14ca3c858 = FUN_1407e02ea;
    _DAT_14ca3c860 = FUN_146826273;
    _DAT_14ca3c838 = FUN_1472b854e;
    _DAT_14ca3c878 = 0xffffffff00000110;
    _DAT_14ca3c880 = 8;
    DAT_14ca3c884 = 0;
    _DAT_14ca3c868 = &LAB_1472b8584;
    FUN_1460cc47a();
    FUN_1407e00cc(&DAT_14ca3c820);
    return;
  }
  return;
}



// FUNCTION 1460cc47a FUN_1460cc47a body=133 status=ok
// SIG undefined FUN_1460cc47a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cc47a(void)

{
  _DAT_14ca40140 = L"BASE";
  DAT_14ca4016a = 4;
  FUN_1411baada();
  _DAT_14ca40150 = DAT_14ca3c830;
  _DAT_14ca40148 = &DAT_14ca3fa38;
  _DAT_14ca40158 = &LAB_14682652b;
  DAT_14ca3c830 = &DAT_14ca40140;
  DAT_14ca3c885 = DAT_14ca3c885 + '\x01';
  _DAT_14ca40160 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3c886 = DAT_14ca3c886 + '\x01';
  }
  return;
}



// FUNCTION 1460cc500 FUN_1460cc500 body=287 status=ok
// SIG undefined FUN_1460cc500(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460cc500(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3ca58) {
    FUN_144b3d300(&DAT_14ca3ca58);
    if (DAT_14ca3ca58 == -1) {
      FUN_1460cc620();
      FUN_140db5666(&DAT_14ca3c9b0,2,&DAT_14ca3c948,
                    L"TMaterialCHS_IS_TLightMapPolicyLQFAnyHitShader",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS anyhit=MaterialAHS intersection=MaterialIS",8,1,
                    FUN_1472b86b6,FUN_1472b868e,FUN_141778ab4,&LAB_1472b868a,&LAB_1472b8684,
                    &LAB_1472b8664,0x110,0);
      _DAT_14ca3c9b0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a911);
      _Init_thread_footer(&DAT_14ca3ca58);
    }
  }
  return &DAT_14ca3c9b0;
}



// FUNCTION 1460cc620 FUN_1460cc620 body=205 status=ok
// SIG undefined FUN_1460cc620(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cc620(void)

{
  if ((DAT_14ca3c9af & 2) == 0) {
    DAT_14ca3c9af = DAT_14ca3c9af | 2;
    _DAT_14ca3c950 = L"TMaterialCHS_IS_TLightMapPolicyLQFAnyHitShader";
    _DAT_14ca3c968 = FUN_146826540;
    _DAT_14ca3c970 = FUN_146825d77;
    _DAT_14ca3c978 = FUN_146825fd6;
    _DAT_14ca3c980 = FUN_1407e02ea;
    _DAT_14ca3c988 = FUN_146826273;
    _DAT_14ca3c960 = FUN_1472b862a;
    _DAT_14ca3c9a0 = 0xffffffff00000110;
    _DAT_14ca3c9a8 = 8;
    DAT_14ca3c9ac = 0;
    _DAT_14ca3c990 = &LAB_1472b8660;
    FUN_1460cc6ee();
    FUN_1407e00cc(&DAT_14ca3c948);
    return;
  }
  return;
}



// FUNCTION 1460cc6ee FUN_1460cc6ee body=133 status=ok
// SIG undefined FUN_1460cc6ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cc6ee(void)

{
  _DAT_14ca40190 = L"BASE";
  DAT_14ca401ba = 4;
  FUN_1411baada();
  _DAT_14ca401a0 = DAT_14ca3c958;
  _DAT_14ca40198 = &DAT_14ca3fa38;
  _DAT_14ca401a8 = &LAB_14682652b;
  DAT_14ca3c958 = &DAT_14ca40190;
  DAT_14ca3c9ad = DAT_14ca3c9ad + '\x01';
  _DAT_14ca401b0 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3c9ae = DAT_14ca3c9ae + '\x01';
  }
  return;
}



// FUNCTION 1460cc774 FUN_1460cc774 body=287 status=ok
// SIG undefined FUN_1460cc774(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460cc774(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3cb80) {
    FUN_144b3d300(&DAT_14ca3cb80);
    if (DAT_14ca3cb80 == -1) {
      FUN_1460cc894();
      FUN_140db5666(&DAT_14ca3cad8,2,&DAT_14ca3ca70,L"TMaterialCHS_IS_LodTLightMapPolicyLQ",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS intersection=MaterialIS",8,1,FUN_1472b8792,
                    FUN_1472b876a,FUN_141778d0c,&LAB_1472b8766,&LAB_1472b8760,&LAB_1472b8740,0x110,0
                   );
      _DAT_14ca3cad8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a91d);
      _Init_thread_footer(&DAT_14ca3cb80);
    }
  }
  return &DAT_14ca3cad8;
}



// FUNCTION 1460cc894 FUN_1460cc894 body=205 status=ok
// SIG undefined FUN_1460cc894(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cc894(void)

{
  if ((DAT_14ca3cad7 & 2) == 0) {
    DAT_14ca3cad7 = DAT_14ca3cad7 | 2;
    _DAT_14ca3ca78 = L"TMaterialCHS_IS_LodTLightMapPolicyLQ";
    _DAT_14ca3ca90 = FUN_146826540;
    _DAT_14ca3ca98 = FUN_146825d77;
    _DAT_14ca3caa0 = FUN_146825fd6;
    _DAT_14ca3caa8 = FUN_1407e02ea;
    _DAT_14ca3cab0 = FUN_146826273;
    _DAT_14ca3ca88 = FUN_1472b8706;
    _DAT_14ca3cac8 = 0xffffffff00000110;
    _DAT_14ca3cad0 = 8;
    DAT_14ca3cad4 = 0;
    _DAT_14ca3cab8 = &LAB_1472b873c;
    FUN_1460cc962();
    FUN_1407e00cc(&DAT_14ca3ca70);
    return;
  }
  return;
}



// FUNCTION 1460cc962 FUN_1460cc962 body=133 status=ok
// SIG undefined FUN_1460cc962(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cc962(void)

{
  _DAT_14ca401e0 = L"BASE";
  DAT_14ca4020a = 4;
  FUN_1411baada();
  _DAT_14ca401f0 = DAT_14ca3ca80;
  _DAT_14ca401e8 = &DAT_14ca3fa38;
  _DAT_14ca401f8 = &LAB_14682652b;
  DAT_14ca3ca80 = &DAT_14ca401e0;
  DAT_14ca3cad5 = DAT_14ca3cad5 + '\x01';
  _DAT_14ca40200 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3cad6 = DAT_14ca3cad6 + '\x01';
  }
  return;
}



// FUNCTION 1460cc9e8 FUN_1460cc9e8 body=287 status=ok
// SIG undefined FUN_1460cc9e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460cc9e8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3cca8) {
    FUN_144b3d300(&DAT_14ca3cca8);
    if (DAT_14ca3cca8 == -1) {
      FUN_1460ccb08();
      FUN_140db5666(&DAT_14ca3cc00,2,&DAT_14ca3cb98,
                    L"TMaterialCHS_IS_LodTLightMapPolicyLQFAnyHitShader",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS anyhit=MaterialAHS intersection=MaterialIS",8,1,
                    FUN_1472b886e,FUN_1472b8846,FUN_141778f6c,&LAB_1472b8842,&LAB_1472b883c,
                    &LAB_1472b881c,0x110,0);
      _DAT_14ca3cc00 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a929);
      _Init_thread_footer(&DAT_14ca3cca8);
    }
  }
  return &DAT_14ca3cc00;
}



// FUNCTION 1460ccb08 FUN_1460ccb08 body=205 status=ok
// SIG undefined FUN_1460ccb08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ccb08(void)

{
  if ((DAT_14ca3cbff & 2) == 0) {
    DAT_14ca3cbff = DAT_14ca3cbff | 2;
    _DAT_14ca3cba0 = L"TMaterialCHS_IS_LodTLightMapPolicyLQFAnyHitShader";
    _DAT_14ca3cbb8 = FUN_146826540;
    _DAT_14ca3cbc0 = FUN_146825d77;
    _DAT_14ca3cbc8 = FUN_146825fd6;
    _DAT_14ca3cbd0 = FUN_1407e02ea;
    _DAT_14ca3cbd8 = FUN_146826273;
    _DAT_14ca3cbb0 = FUN_1472b87e2;
    _DAT_14ca3cbf0 = 0xffffffff00000110;
    _DAT_14ca3cbf8 = 8;
    DAT_14ca3cbfc = 0;
    _DAT_14ca3cbe0 = &LAB_1472b8818;
    FUN_1460ccbd6();
    FUN_1407e00cc(&DAT_14ca3cb98);
    return;
  }
  return;
}



// FUNCTION 1460ccbd6 FUN_1460ccbd6 body=133 status=ok
// SIG undefined FUN_1460ccbd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ccbd6(void)

{
  _DAT_14ca40230 = L"BASE";
  DAT_14ca4025a = 4;
  FUN_1411baada();
  _DAT_14ca40240 = DAT_14ca3cba8;
  _DAT_14ca40238 = &DAT_14ca3fa38;
  _DAT_14ca40248 = &LAB_14682652b;
  DAT_14ca3cba8 = &DAT_14ca40230;
  DAT_14ca3cbfd = DAT_14ca3cbfd + '\x01';
  _DAT_14ca40250 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3cbfe = DAT_14ca3cbfe + '\x01';
  }
  return;
}



// FUNCTION 1460ccc5c FUN_1460ccc5c body=287 status=ok
// SIG undefined FUN_1460ccc5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ccc5c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3cdd0) {
    FUN_144b3d300(&DAT_14ca3cdd0);
    if (DAT_14ca3cdd0 == -1) {
      FUN_1460ccd7c();
      FUN_140db5666(&DAT_14ca3cd28,2,&DAT_14ca3ccc0,L"TMaterialCHSTLightMapPolicyHQ",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS",8,1,FUN_1472b894a,FUN_1472b8922,FUN_1417791c4,
                    &LAB_1472b891e,&LAB_1472b8918,&LAB_1472b88f8,0x110,0);
      _DAT_14ca3cd28 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a935);
      _Init_thread_footer(&DAT_14ca3cdd0);
    }
  }
  return &DAT_14ca3cd28;
}



// FUNCTION 1460ccd7c FUN_1460ccd7c body=205 status=ok
// SIG undefined FUN_1460ccd7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ccd7c(void)

{
  if ((DAT_14ca3cd27 & 2) == 0) {
    DAT_14ca3cd27 = DAT_14ca3cd27 | 2;
    _DAT_14ca3ccc8 = L"TMaterialCHSTLightMapPolicyHQ";
    _DAT_14ca3cce0 = FUN_146826540;
    _DAT_14ca3cce8 = FUN_146825d77;
    _DAT_14ca3ccf0 = FUN_146825fd6;
    _DAT_14ca3ccf8 = FUN_1407e02ea;
    _DAT_14ca3cd00 = FUN_146826273;
    _DAT_14ca3ccd8 = FUN_1472b88be;
    _DAT_14ca3cd18 = 0xffffffff00000110;
    _DAT_14ca3cd20 = 8;
    DAT_14ca3cd24 = 0;
    _DAT_14ca3cd08 = &LAB_1472b88f4;
    FUN_1460cce4a();
    FUN_1407e00cc(&DAT_14ca3ccc0);
    return;
  }
  return;
}



// FUNCTION 1460cce4a FUN_1460cce4a body=133 status=ok
// SIG undefined FUN_1460cce4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cce4a(void)

{
  _DAT_14ca40280 = L"BASE";
  DAT_14ca402aa = 4;
  FUN_1411baada();
  _DAT_14ca40290 = DAT_14ca3ccd0;
  _DAT_14ca40288 = &DAT_14ca3fa38;
  _DAT_14ca40298 = &LAB_14682652b;
  DAT_14ca3ccd0 = &DAT_14ca40280;
  DAT_14ca3cd25 = DAT_14ca3cd25 + '\x01';
  _DAT_14ca402a0 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3cd26 = DAT_14ca3cd26 + '\x01';
  }
  return;
}



// FUNCTION 1460cced0 FUN_1460cced0 body=287 status=ok
// SIG undefined FUN_1460cced0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460cced0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3cef8) {
    FUN_144b3d300(&DAT_14ca3cef8);
    if (DAT_14ca3cef8 == -1) {
      FUN_1460ccff0();
      FUN_140db5666(&DAT_14ca3ce50,2,&DAT_14ca3cde8,L"TMaterialCHSTLightMapPolicyHQFAnyHitShader",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS anyhit=MaterialAHS",8,1,FUN_1472b8a26,FUN_1472b89fe,
                    FUN_141779422,&LAB_1472b89fa,&LAB_1472b89f4,&LAB_1472b89d4,0x110,0);
      _DAT_14ca3ce50 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a941);
      _Init_thread_footer(&DAT_14ca3cef8);
    }
  }
  return &DAT_14ca3ce50;
}



// FUNCTION 1460ccff0 FUN_1460ccff0 body=205 status=ok
// SIG undefined FUN_1460ccff0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ccff0(void)

{
  if ((DAT_14ca3ce4f & 2) == 0) {
    DAT_14ca3ce4f = DAT_14ca3ce4f | 2;
    _DAT_14ca3cdf0 = L"TMaterialCHSTLightMapPolicyHQFAnyHitShader";
    _DAT_14ca3ce08 = FUN_146826540;
    _DAT_14ca3ce10 = FUN_146825d77;
    _DAT_14ca3ce18 = FUN_146825fd6;
    _DAT_14ca3ce20 = FUN_1407e02ea;
    _DAT_14ca3ce28 = FUN_146826273;
    _DAT_14ca3ce00 = FUN_1472b899a;
    _DAT_14ca3ce40 = 0xffffffff00000110;
    _DAT_14ca3ce48 = 8;
    DAT_14ca3ce4c = 0;
    _DAT_14ca3ce30 = &LAB_1472b89d0;
    FUN_1460cd0be();
    FUN_1407e00cc(&DAT_14ca3cde8);
    return;
  }
  return;
}



// FUNCTION 1460cd0be FUN_1460cd0be body=133 status=ok
// SIG undefined FUN_1460cd0be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cd0be(void)

{
  _DAT_14ca402d0 = L"BASE";
  DAT_14ca402fa = 4;
  FUN_1411baada();
  _DAT_14ca402e0 = DAT_14ca3cdf8;
  _DAT_14ca402d8 = &DAT_14ca3fa38;
  _DAT_14ca402e8 = &LAB_14682652b;
  DAT_14ca3cdf8 = &DAT_14ca402d0;
  DAT_14ca3ce4d = DAT_14ca3ce4d + '\x01';
  _DAT_14ca402f0 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3ce4e = DAT_14ca3ce4e + '\x01';
  }
  return;
}



// FUNCTION 1460cd144 FUN_1460cd144 body=287 status=ok
// SIG undefined FUN_1460cd144(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460cd144(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3d020) {
    FUN_144b3d300(&DAT_14ca3d020);
    if (DAT_14ca3d020 == -1) {
      FUN_1460cd264();
      FUN_140db5666(&DAT_14ca3cf78,2,&DAT_14ca3cf10,L"TMaterialCHSLodTLightMapPolicyHQ",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS",8,1,FUN_1472b8b02,FUN_1472b8ada,FUN_14177967a,
                    &LAB_1472b8ad6,&LAB_1472b8ad0,&LAB_1472b8ab0,0x110,0);
      _DAT_14ca3cf78 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a94d);
      _Init_thread_footer(&DAT_14ca3d020);
    }
  }
  return &DAT_14ca3cf78;
}



// FUNCTION 1460cd264 FUN_1460cd264 body=205 status=ok
// SIG undefined FUN_1460cd264(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cd264(void)

{
  if ((DAT_14ca3cf77 & 2) == 0) {
    DAT_14ca3cf77 = DAT_14ca3cf77 | 2;
    _DAT_14ca3cf18 = L"TMaterialCHSLodTLightMapPolicyHQ";
    _DAT_14ca3cf30 = FUN_146826540;
    _DAT_14ca3cf38 = FUN_146825d77;
    _DAT_14ca3cf40 = FUN_146825fd6;
    _DAT_14ca3cf48 = FUN_1407e02ea;
    _DAT_14ca3cf50 = FUN_146826273;
    _DAT_14ca3cf28 = FUN_1472b8a76;
    _DAT_14ca3cf68 = 0xffffffff00000110;
    _DAT_14ca3cf70 = 8;
    DAT_14ca3cf74 = 0;
    _DAT_14ca3cf58 = &LAB_1472b8aac;
    FUN_1460cd332();
    FUN_1407e00cc(&DAT_14ca3cf10);
    return;
  }
  return;
}



// FUNCTION 1460cd332 FUN_1460cd332 body=133 status=ok
// SIG undefined FUN_1460cd332(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cd332(void)

{
  _DAT_14ca40320 = L"BASE";
  DAT_14ca4034a = 4;
  FUN_1411baada();
  _DAT_14ca40330 = DAT_14ca3cf20;
  _DAT_14ca40328 = &DAT_14ca3fa38;
  _DAT_14ca40338 = &LAB_14682652b;
  DAT_14ca3cf20 = &DAT_14ca40320;
  DAT_14ca3cf75 = DAT_14ca3cf75 + '\x01';
  _DAT_14ca40340 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3cf76 = DAT_14ca3cf76 + '\x01';
  }
  return;
}



// FUNCTION 1460cd3b8 FUN_1460cd3b8 body=287 status=ok
// SIG undefined FUN_1460cd3b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460cd3b8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3d148) {
    FUN_144b3d300(&DAT_14ca3d148);
    if (DAT_14ca3d148 == -1) {
      FUN_1460cd4d8();
      FUN_140db5666(&DAT_14ca3d0a0,2,&DAT_14ca3d038,L"TMaterialCHSLodTLightMapPolicyHQFAnyHitShader"
                    ,L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS anyhit=MaterialAHS",8,1,FUN_1472b8bde,FUN_1472b8bb6,
                    FUN_1417798d8,&LAB_1472b8bb2,&LAB_1472b8bac,&LAB_1472b8b8c,0x110,0);
      _DAT_14ca3d0a0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a959);
      _Init_thread_footer(&DAT_14ca3d148);
    }
  }
  return &DAT_14ca3d0a0;
}



// FUNCTION 1460cd4d8 FUN_1460cd4d8 body=205 status=ok
// SIG undefined FUN_1460cd4d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cd4d8(void)

{
  if ((DAT_14ca3d09f & 2) == 0) {
    DAT_14ca3d09f = DAT_14ca3d09f | 2;
    _DAT_14ca3d040 = L"TMaterialCHSLodTLightMapPolicyHQFAnyHitShader";
    _DAT_14ca3d058 = FUN_146826540;
    _DAT_14ca3d060 = FUN_146825d77;
    _DAT_14ca3d068 = FUN_146825fd6;
    _DAT_14ca3d070 = FUN_1407e02ea;
    _DAT_14ca3d078 = FUN_146826273;
    _DAT_14ca3d050 = FUN_1472b8b52;
    _DAT_14ca3d090 = 0xffffffff00000110;
    _DAT_14ca3d098 = 8;
    DAT_14ca3d09c = 0;
    _DAT_14ca3d080 = &LAB_1472b8b88;
    FUN_1460cd5a6();
    FUN_1407e00cc(&DAT_14ca3d038);
    return;
  }
  return;
}



// FUNCTION 1460cd5a6 FUN_1460cd5a6 body=133 status=ok
// SIG undefined FUN_1460cd5a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cd5a6(void)

{
  _DAT_14ca40370 = L"BASE";
  DAT_14ca4039a = 4;
  FUN_1411baada();
  _DAT_14ca40380 = DAT_14ca3d048;
  _DAT_14ca40378 = &DAT_14ca3fa38;
  _DAT_14ca40388 = &LAB_14682652b;
  DAT_14ca3d048 = &DAT_14ca40370;
  DAT_14ca3d09d = DAT_14ca3d09d + '\x01';
  _DAT_14ca40390 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3d09e = DAT_14ca3d09e + '\x01';
  }
  return;
}



// FUNCTION 1460cd62c FUN_1460cd62c body=287 status=ok
// SIG undefined FUN_1460cd62c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460cd62c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3d270) {
    FUN_144b3d300(&DAT_14ca3d270);
    if (DAT_14ca3d270 == -1) {
      FUN_1460cd74c();
      FUN_140db5666(&DAT_14ca3d1c8,2,&DAT_14ca3d160,L"TMaterialCHS_IS_TLightMapPolicyHQ",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS intersection=MaterialIS",8,1,FUN_1472b8cba,
                    FUN_1472b8c92,FUN_141779b30,&LAB_1472b8c8e,&LAB_1472b8c88,&LAB_1472b8c68,0x110,0
                   );
      _DAT_14ca3d1c8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a965);
      _Init_thread_footer(&DAT_14ca3d270);
    }
  }
  return &DAT_14ca3d1c8;
}



// FUNCTION 1460cd74c FUN_1460cd74c body=205 status=ok
// SIG undefined FUN_1460cd74c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cd74c(void)

{
  if ((DAT_14ca3d1c7 & 2) == 0) {
    DAT_14ca3d1c7 = DAT_14ca3d1c7 | 2;
    _DAT_14ca3d168 = L"TMaterialCHS_IS_TLightMapPolicyHQ";
    _DAT_14ca3d180 = FUN_146826540;
    _DAT_14ca3d188 = FUN_146825d77;
    _DAT_14ca3d190 = FUN_146825fd6;
    _DAT_14ca3d198 = FUN_1407e02ea;
    _DAT_14ca3d1a0 = FUN_146826273;
    _DAT_14ca3d178 = FUN_1472b8c2e;
    _DAT_14ca3d1b8 = 0xffffffff00000110;
    _DAT_14ca3d1c0 = 8;
    DAT_14ca3d1c4 = 0;
    _DAT_14ca3d1a8 = &LAB_1472b8c64;
    FUN_1460cd81a();
    FUN_1407e00cc(&DAT_14ca3d160);
    return;
  }
  return;
}



// FUNCTION 1460cd81a FUN_1460cd81a body=133 status=ok
// SIG undefined FUN_1460cd81a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cd81a(void)

{
  _DAT_14ca403c0 = L"BASE";
  DAT_14ca403ea = 4;
  FUN_1411baada();
  _DAT_14ca403d0 = DAT_14ca3d170;
  _DAT_14ca403c8 = &DAT_14ca3fa38;
  _DAT_14ca403d8 = &LAB_14682652b;
  DAT_14ca3d170 = &DAT_14ca403c0;
  DAT_14ca3d1c5 = DAT_14ca3d1c5 + '\x01';
  _DAT_14ca403e0 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3d1c6 = DAT_14ca3d1c6 + '\x01';
  }
  return;
}



// FUNCTION 1460cd8a0 FUN_1460cd8a0 body=287 status=ok
// SIG undefined FUN_1460cd8a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460cd8a0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3d398) {
    FUN_144b3d300(&DAT_14ca3d398);
    if (DAT_14ca3d398 == -1) {
      FUN_1460cd9c0();
      FUN_140db5666(&DAT_14ca3d2f0,2,&DAT_14ca3d288,
                    L"TMaterialCHS_IS_TLightMapPolicyHQFAnyHitShader",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS anyhit=MaterialAHS intersection=MaterialIS",8,1,
                    FUN_1472b8d96,FUN_1472b8d6e,FUN_141779d90,&LAB_1472b8d6a,&LAB_1472b8d64,
                    &LAB_1472b8d44,0x110,0);
      _DAT_14ca3d2f0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a971);
      _Init_thread_footer(&DAT_14ca3d398);
    }
  }
  return &DAT_14ca3d2f0;
}



// FUNCTION 1460cd9c0 FUN_1460cd9c0 body=205 status=ok
// SIG undefined FUN_1460cd9c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cd9c0(void)

{
  if ((DAT_14ca3d2ef & 2) == 0) {
    DAT_14ca3d2ef = DAT_14ca3d2ef | 2;
    _DAT_14ca3d290 = L"TMaterialCHS_IS_TLightMapPolicyHQFAnyHitShader";
    _DAT_14ca3d2a8 = FUN_146826540;
    _DAT_14ca3d2b0 = FUN_146825d77;
    _DAT_14ca3d2b8 = FUN_146825fd6;
    _DAT_14ca3d2c0 = FUN_1407e02ea;
    _DAT_14ca3d2c8 = FUN_146826273;
    _DAT_14ca3d2a0 = FUN_1472b8d0a;
    _DAT_14ca3d2e0 = 0xffffffff00000110;
    _DAT_14ca3d2e8 = 8;
    DAT_14ca3d2ec = 0;
    _DAT_14ca3d2d0 = &LAB_1472b8d40;
    FUN_1460cda8e();
    FUN_1407e00cc(&DAT_14ca3d288);
    return;
  }
  return;
}



// FUNCTION 1460cda8e FUN_1460cda8e body=133 status=ok
// SIG undefined FUN_1460cda8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cda8e(void)

{
  _DAT_14ca40410 = L"BASE";
  DAT_14ca4043a = 4;
  FUN_1411baada();
  _DAT_14ca40420 = DAT_14ca3d298;
  _DAT_14ca40418 = &DAT_14ca3fa38;
  _DAT_14ca40428 = &LAB_14682652b;
  DAT_14ca3d298 = &DAT_14ca40410;
  DAT_14ca3d2ed = DAT_14ca3d2ed + '\x01';
  _DAT_14ca40430 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3d2ee = DAT_14ca3d2ee + '\x01';
  }
  return;
}



// FUNCTION 1460cdb14 FUN_1460cdb14 body=287 status=ok
// SIG undefined FUN_1460cdb14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460cdb14(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3d4c0) {
    FUN_144b3d300(&DAT_14ca3d4c0);
    if (DAT_14ca3d4c0 == -1) {
      FUN_1460cdc34();
      FUN_140db5666(&DAT_14ca3d418,2,&DAT_14ca3d3b0,L"TMaterialCHS_IS_LodTLightMapPolicyHQ",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS intersection=MaterialIS",8,1,FUN_1472b8e72,
                    FUN_1472b8e4a,FUN_141779fe8,&LAB_1472b8e46,&LAB_1472b8e40,&LAB_1472b8e20,0x110,0
                   );
      _DAT_14ca3d418 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a97d);
      _Init_thread_footer(&DAT_14ca3d4c0);
    }
  }
  return &DAT_14ca3d418;
}



// FUNCTION 1460cdc34 FUN_1460cdc34 body=205 status=ok
// SIG undefined FUN_1460cdc34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cdc34(void)

{
  if ((DAT_14ca3d417 & 2) == 0) {
    DAT_14ca3d417 = DAT_14ca3d417 | 2;
    _DAT_14ca3d3b8 = L"TMaterialCHS_IS_LodTLightMapPolicyHQ";
    _DAT_14ca3d3d0 = FUN_146826540;
    _DAT_14ca3d3d8 = FUN_146825d77;
    _DAT_14ca3d3e0 = FUN_146825fd6;
    _DAT_14ca3d3e8 = FUN_1407e02ea;
    _DAT_14ca3d3f0 = FUN_146826273;
    _DAT_14ca3d3c8 = FUN_1472b8de6;
    _DAT_14ca3d408 = 0xffffffff00000110;
    _DAT_14ca3d410 = 8;
    DAT_14ca3d414 = 0;
    _DAT_14ca3d3f8 = &LAB_1472b8e1c;
    FUN_1460cdd02();
    FUN_1407e00cc(&DAT_14ca3d3b0);
    return;
  }
  return;
}



// FUNCTION 1460cdd02 FUN_1460cdd02 body=133 status=ok
// SIG undefined FUN_1460cdd02(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cdd02(void)

{
  _DAT_14ca40460 = L"BASE";
  DAT_14ca4048a = 4;
  FUN_1411baada();
  _DAT_14ca40470 = DAT_14ca3d3c0;
  _DAT_14ca40468 = &DAT_14ca3fa38;
  _DAT_14ca40478 = &LAB_14682652b;
  DAT_14ca3d3c0 = &DAT_14ca40460;
  DAT_14ca3d415 = DAT_14ca3d415 + '\x01';
  _DAT_14ca40480 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3d416 = DAT_14ca3d416 + '\x01';
  }
  return;
}



// FUNCTION 1460cdd88 FUN_1460cdd88 body=287 status=ok
// SIG undefined FUN_1460cdd88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460cdd88(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3d5e8) {
    FUN_144b3d300(&DAT_14ca3d5e8);
    if (DAT_14ca3d5e8 == -1) {
      FUN_1460cdea8();
      FUN_140db5666(&DAT_14ca3d540,2,&DAT_14ca3d4d8,
                    L"TMaterialCHS_IS_LodTLightMapPolicyHQFAnyHitShader",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS anyhit=MaterialAHS intersection=MaterialIS",8,1,
                    FUN_1472b8f4e,FUN_1472b8f26,FUN_14177a248,&LAB_1472b8f22,&LAB_1472b8f1c,
                    &LAB_1472b8efc,0x110,0);
      _DAT_14ca3d540 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a989);
      _Init_thread_footer(&DAT_14ca3d5e8);
    }
  }
  return &DAT_14ca3d540;
}



// FUNCTION 1460cdea8 FUN_1460cdea8 body=205 status=ok
// SIG undefined FUN_1460cdea8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cdea8(void)

{
  if ((DAT_14ca3d53f & 2) == 0) {
    DAT_14ca3d53f = DAT_14ca3d53f | 2;
    _DAT_14ca3d4e0 = L"TMaterialCHS_IS_LodTLightMapPolicyHQFAnyHitShader";
    _DAT_14ca3d4f8 = FUN_146826540;
    _DAT_14ca3d500 = FUN_146825d77;
    _DAT_14ca3d508 = FUN_146825fd6;
    _DAT_14ca3d510 = FUN_1407e02ea;
    _DAT_14ca3d518 = FUN_146826273;
    _DAT_14ca3d4f0 = FUN_1472b8ec2;
    _DAT_14ca3d530 = 0xffffffff00000110;
    _DAT_14ca3d538 = 8;
    DAT_14ca3d53c = 0;
    _DAT_14ca3d520 = &LAB_1472b8ef8;
    FUN_1460cdf76();
    FUN_1407e00cc(&DAT_14ca3d4d8);
    return;
  }
  return;
}



// FUNCTION 1460cdf76 FUN_1460cdf76 body=133 status=ok
// SIG undefined FUN_1460cdf76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cdf76(void)

{
  _DAT_14ca404b0 = L"BASE";
  DAT_14ca404da = 4;
  FUN_1411baada();
  _DAT_14ca404c0 = DAT_14ca3d4e8;
  _DAT_14ca404b8 = &DAT_14ca3fa38;
  _DAT_14ca404c8 = &LAB_14682652b;
  DAT_14ca3d4e8 = &DAT_14ca404b0;
  DAT_14ca3d53d = DAT_14ca3d53d + '\x01';
  _DAT_14ca404d0 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3d53e = DAT_14ca3d53e + '\x01';
  }
  return;
}



// FUNCTION 1460cdffc FUN_1460cdffc body=287 status=ok
// SIG undefined FUN_1460cdffc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460cdffc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3d710) {
    FUN_144b3d300(&DAT_14ca3d710);
    if (DAT_14ca3d710 == -1) {
      FUN_1460ce11c();
      FUN_140db5666(&DAT_14ca3d668,2,&DAT_14ca3d600,
                    L"TMaterialCHSTDistanceFieldShadowsAndLightMapPolicyHQ",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS",8,1,FUN_1472b902a,FUN_1472b9002,FUN_14177a4a0,
                    &LAB_1472b8ffe,&LAB_1472b8ff8,&LAB_1472b8fd8,0x110,0);
      _DAT_14ca3d668 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a995);
      _Init_thread_footer(&DAT_14ca3d710);
    }
  }
  return &DAT_14ca3d668;
}



// FUNCTION 1460ce11c FUN_1460ce11c body=205 status=ok
// SIG undefined FUN_1460ce11c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ce11c(void)

{
  if ((DAT_14ca3d667 & 2) == 0) {
    DAT_14ca3d667 = DAT_14ca3d667 | 2;
    _DAT_14ca3d608 = L"TMaterialCHSTDistanceFieldShadowsAndLightMapPolicyHQ";
    _DAT_14ca3d620 = FUN_146826540;
    _DAT_14ca3d628 = FUN_146825d77;
    _DAT_14ca3d630 = FUN_146825fd6;
    _DAT_14ca3d638 = FUN_1407e02ea;
    _DAT_14ca3d640 = FUN_146826273;
    _DAT_14ca3d618 = FUN_1472b8f9e;
    _DAT_14ca3d658 = 0xffffffff00000110;
    _DAT_14ca3d660 = 8;
    DAT_14ca3d664 = 0;
    _DAT_14ca3d648 = &LAB_1472b8fd4;
    FUN_1460ce1ea();
    FUN_1407e00cc(&DAT_14ca3d600);
    return;
  }
  return;
}



// FUNCTION 1460ce1ea FUN_1460ce1ea body=133 status=ok
// SIG undefined FUN_1460ce1ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ce1ea(void)

{
  _DAT_14ca40500 = L"BASE";
  DAT_14ca4052a = 4;
  FUN_1411baada();
  _DAT_14ca40510 = DAT_14ca3d610;
  _DAT_14ca40508 = &DAT_14ca3fa38;
  _DAT_14ca40518 = &LAB_14682652b;
  DAT_14ca3d610 = &DAT_14ca40500;
  DAT_14ca3d665 = DAT_14ca3d665 + '\x01';
  _DAT_14ca40520 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3d666 = DAT_14ca3d666 + '\x01';
  }
  return;
}



// FUNCTION 1460ce270 FUN_1460ce270 body=287 status=ok
// SIG undefined FUN_1460ce270(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ce270(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3d838) {
    FUN_144b3d300(&DAT_14ca3d838);
    if (DAT_14ca3d838 == -1) {
      FUN_1460ce390();
      FUN_140db5666(&DAT_14ca3d790,2,&DAT_14ca3d728,
                    L"TMaterialCHSTDistanceFieldShadowsAndLightMapPolicyHQFAnyHitShader",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS anyhit=MaterialAHS",8,1,FUN_1472b9106,FUN_1472b90de,
                    FUN_14177a6fe,&LAB_1472b90da,&LAB_1472b90d4,&LAB_1472b90b4,0x110,0);
      _DAT_14ca3d790 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a9a1);
      _Init_thread_footer(&DAT_14ca3d838);
    }
  }
  return &DAT_14ca3d790;
}



// FUNCTION 1460ce390 FUN_1460ce390 body=205 status=ok
// SIG undefined FUN_1460ce390(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ce390(void)

{
  if ((DAT_14ca3d78f & 2) == 0) {
    DAT_14ca3d78f = DAT_14ca3d78f | 2;
    _DAT_14ca3d730 = L"TMaterialCHSTDistanceFieldShadowsAndLightMapPolicyHQFAnyHitShader";
    _DAT_14ca3d748 = FUN_146826540;
    _DAT_14ca3d750 = FUN_146825d77;
    _DAT_14ca3d758 = FUN_146825fd6;
    _DAT_14ca3d760 = FUN_1407e02ea;
    _DAT_14ca3d768 = FUN_146826273;
    _DAT_14ca3d740 = FUN_1472b907a;
    _DAT_14ca3d780 = 0xffffffff00000110;
    _DAT_14ca3d788 = 8;
    DAT_14ca3d78c = 0;
    _DAT_14ca3d770 = &LAB_1472b90b0;
    FUN_1460ce45e();
    FUN_1407e00cc(&DAT_14ca3d728);
    return;
  }
  return;
}



// FUNCTION 1460ce45e FUN_1460ce45e body=133 status=ok
// SIG undefined FUN_1460ce45e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ce45e(void)

{
  _DAT_14ca40550 = L"BASE";
  DAT_14ca4057a = 4;
  FUN_1411baada();
  _DAT_14ca40560 = DAT_14ca3d738;
  _DAT_14ca40558 = &DAT_14ca3fa38;
  _DAT_14ca40568 = &LAB_14682652b;
  DAT_14ca3d738 = &DAT_14ca40550;
  DAT_14ca3d78d = DAT_14ca3d78d + '\x01';
  _DAT_14ca40570 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3d78e = DAT_14ca3d78e + '\x01';
  }
  return;
}



// FUNCTION 1460ce4e4 FUN_1460ce4e4 body=287 status=ok
// SIG undefined FUN_1460ce4e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ce4e4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3d960) {
    FUN_144b3d300(&DAT_14ca3d960);
    if (DAT_14ca3d960 == -1) {
      FUN_1460ce604();
      FUN_140db5666(&DAT_14ca3d8b8,2,&DAT_14ca3d850,
                    L"TMaterialCHSLodTDistanceFieldShadowsAndLightMapPolicyHQ",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS",8,1,FUN_1472b91e2,FUN_1472b91ba,FUN_14177a956,
                    &LAB_1472b91b6,&LAB_1472b91b0,&LAB_1472b9190,0x110,0);
      _DAT_14ca3d8b8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a9ad);
      _Init_thread_footer(&DAT_14ca3d960);
    }
  }
  return &DAT_14ca3d8b8;
}



// FUNCTION 1460ce604 FUN_1460ce604 body=205 status=ok
// SIG undefined FUN_1460ce604(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ce604(void)

{
  if ((DAT_14ca3d8b7 & 2) == 0) {
    DAT_14ca3d8b7 = DAT_14ca3d8b7 | 2;
    _DAT_14ca3d858 = L"TMaterialCHSLodTDistanceFieldShadowsAndLightMapPolicyHQ";
    _DAT_14ca3d870 = FUN_146826540;
    _DAT_14ca3d878 = FUN_146825d77;
    _DAT_14ca3d880 = FUN_146825fd6;
    _DAT_14ca3d888 = FUN_1407e02ea;
    _DAT_14ca3d890 = FUN_146826273;
    _DAT_14ca3d868 = FUN_1472b9156;
    _DAT_14ca3d8a8 = 0xffffffff00000110;
    _DAT_14ca3d8b0 = 8;
    DAT_14ca3d8b4 = 0;
    _DAT_14ca3d898 = &LAB_1472b918c;
    FUN_1460ce6d2();
    FUN_1407e00cc(&DAT_14ca3d850);
    return;
  }
  return;
}



// FUNCTION 1460ce6d2 FUN_1460ce6d2 body=133 status=ok
// SIG undefined FUN_1460ce6d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ce6d2(void)

{
  _DAT_14ca405a0 = L"BASE";
  DAT_14ca405ca = 4;
  FUN_1411baada();
  _DAT_14ca405b0 = DAT_14ca3d860;
  _DAT_14ca405a8 = &DAT_14ca3fa38;
  _DAT_14ca405b8 = &LAB_14682652b;
  DAT_14ca3d860 = &DAT_14ca405a0;
  DAT_14ca3d8b5 = DAT_14ca3d8b5 + '\x01';
  _DAT_14ca405c0 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3d8b6 = DAT_14ca3d8b6 + '\x01';
  }
  return;
}



// FUNCTION 1460ce758 FUN_1460ce758 body=287 status=ok
// SIG undefined FUN_1460ce758(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ce758(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3da88) {
    FUN_144b3d300(&DAT_14ca3da88);
    if (DAT_14ca3da88 == -1) {
      FUN_1460ce878();
      FUN_140db5666(&DAT_14ca3d9e0,2,&DAT_14ca3d978,
                    L"TMaterialCHSLodTDistanceFieldShadowsAndLightMapPolicyHQFAnyHitShader",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS anyhit=MaterialAHS",8,1,FUN_1472b92be,FUN_1472b9296,
                    FUN_14177abb4,&LAB_1472b9292,&LAB_1472b928c,&LAB_1472b926c,0x110,0);
      _DAT_14ca3d9e0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a9b9);
      _Init_thread_footer(&DAT_14ca3da88);
    }
  }
  return &DAT_14ca3d9e0;
}



// FUNCTION 1460ce878 FUN_1460ce878 body=205 status=ok
// SIG undefined FUN_1460ce878(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ce878(void)

{
  if ((DAT_14ca3d9df & 2) == 0) {
    DAT_14ca3d9df = DAT_14ca3d9df | 2;
    _DAT_14ca3d980 = L"TMaterialCHSLodTDistanceFieldShadowsAndLightMapPolicyHQFAnyHitShader";
    _DAT_14ca3d998 = FUN_146826540;
    _DAT_14ca3d9a0 = FUN_146825d77;
    _DAT_14ca3d9a8 = FUN_146825fd6;
    _DAT_14ca3d9b0 = FUN_1407e02ea;
    _DAT_14ca3d9b8 = FUN_146826273;
    _DAT_14ca3d990 = FUN_1472b9232;
    _DAT_14ca3d9d0 = 0xffffffff00000110;
    _DAT_14ca3d9d8 = 8;
    DAT_14ca3d9dc = 0;
    _DAT_14ca3d9c0 = &LAB_1472b9268;
    FUN_1460ce946();
    FUN_1407e00cc(&DAT_14ca3d978);
    return;
  }
  return;
}



// FUNCTION 1460ce946 FUN_1460ce946 body=133 status=ok
// SIG undefined FUN_1460ce946(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ce946(void)

{
  _DAT_14ca405f0 = L"BASE";
  DAT_14ca4061a = 4;
  FUN_1411baada();
  _DAT_14ca40600 = DAT_14ca3d988;
  _DAT_14ca405f8 = &DAT_14ca3fa38;
  _DAT_14ca40608 = &LAB_14682652b;
  DAT_14ca3d988 = &DAT_14ca405f0;
  DAT_14ca3d9dd = DAT_14ca3d9dd + '\x01';
  _DAT_14ca40610 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3d9de = DAT_14ca3d9de + '\x01';
  }
  return;
}



// FUNCTION 1460ce9cc FUN_1460ce9cc body=287 status=ok
// SIG undefined FUN_1460ce9cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ce9cc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3dbb0) {
    FUN_144b3d300(&DAT_14ca3dbb0);
    if (DAT_14ca3dbb0 == -1) {
      FUN_1460ceaec();
      FUN_140db5666(&DAT_14ca3db08,2,&DAT_14ca3daa0,
                    L"TMaterialCHS_IS_TDistanceFieldShadowsAndLightMapPolicyHQ",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS intersection=MaterialIS",8,1,FUN_1472b939a,
                    FUN_1472b9372,FUN_14177ae0c,&LAB_1472b936e,&LAB_1472b9368,&LAB_1472b9348,0x110,0
                   );
      _DAT_14ca3db08 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a9c5);
      _Init_thread_footer(&DAT_14ca3dbb0);
    }
  }
  return &DAT_14ca3db08;
}



// FUNCTION 1460ceaec FUN_1460ceaec body=205 status=ok
// SIG undefined FUN_1460ceaec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ceaec(void)

{
  if ((DAT_14ca3db07 & 2) == 0) {
    DAT_14ca3db07 = DAT_14ca3db07 | 2;
    _DAT_14ca3daa8 = L"TMaterialCHS_IS_TDistanceFieldShadowsAndLightMapPolicyHQ";
    _DAT_14ca3dac0 = FUN_146826540;
    _DAT_14ca3dac8 = FUN_146825d77;
    _DAT_14ca3dad0 = FUN_146825fd6;
    _DAT_14ca3dad8 = FUN_1407e02ea;
    _DAT_14ca3dae0 = FUN_146826273;
    _DAT_14ca3dab8 = FUN_1472b930e;
    _DAT_14ca3daf8 = 0xffffffff00000110;
    _DAT_14ca3db00 = 8;
    DAT_14ca3db04 = 0;
    _DAT_14ca3dae8 = &LAB_1472b9344;
    FUN_1460cebba();
    FUN_1407e00cc(&DAT_14ca3daa0);
    return;
  }
  return;
}



// FUNCTION 1460cebba FUN_1460cebba body=133 status=ok
// SIG undefined FUN_1460cebba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cebba(void)

{
  _DAT_14ca40640 = L"BASE";
  DAT_14ca4066a = 4;
  FUN_1411baada();
  _DAT_14ca40650 = DAT_14ca3dab0;
  _DAT_14ca40648 = &DAT_14ca3fa38;
  _DAT_14ca40658 = &LAB_14682652b;
  DAT_14ca3dab0 = &DAT_14ca40640;
  DAT_14ca3db05 = DAT_14ca3db05 + '\x01';
  _DAT_14ca40660 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3db06 = DAT_14ca3db06 + '\x01';
  }
  return;
}



// FUNCTION 1460cec40 FUN_1460cec40 body=287 status=ok
// SIG undefined FUN_1460cec40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460cec40(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3dcd8) {
    FUN_144b3d300(&DAT_14ca3dcd8);
    if (DAT_14ca3dcd8 == -1) {
      FUN_1460ced60();
      FUN_140db5666(&DAT_14ca3dc30,2,&DAT_14ca3dbc8,
                    L"TMaterialCHS_IS_TDistanceFieldShadowsAndLightMapPolicyHQFAnyHitShader",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS anyhit=MaterialAHS intersection=MaterialIS",8,1,
                    FUN_1472b9476,FUN_1472b944e,FUN_14177b06c,&LAB_1472b944a,&LAB_1472b9444,
                    &LAB_1472b9424,0x110,0);
      _DAT_14ca3dc30 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a9d1);
      _Init_thread_footer(&DAT_14ca3dcd8);
    }
  }
  return &DAT_14ca3dc30;
}



// FUNCTION 1460ced60 FUN_1460ced60 body=205 status=ok
// SIG undefined FUN_1460ced60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ced60(void)

{
  if ((DAT_14ca3dc2f & 2) == 0) {
    DAT_14ca3dc2f = DAT_14ca3dc2f | 2;
    _DAT_14ca3dbd0 = L"TMaterialCHS_IS_TDistanceFieldShadowsAndLightMapPolicyHQFAnyHitShader";
    _DAT_14ca3dbe8 = FUN_146826540;
    _DAT_14ca3dbf0 = FUN_146825d77;
    _DAT_14ca3dbf8 = FUN_146825fd6;
    _DAT_14ca3dc00 = FUN_1407e02ea;
    _DAT_14ca3dc08 = FUN_146826273;
    _DAT_14ca3dbe0 = FUN_1472b93ea;
    _DAT_14ca3dc20 = 0xffffffff00000110;
    _DAT_14ca3dc28 = 8;
    DAT_14ca3dc2c = 0;
    _DAT_14ca3dc10 = &LAB_1472b9420;
    FUN_1460cee2e();
    FUN_1407e00cc(&DAT_14ca3dbc8);
    return;
  }
  return;
}



// FUNCTION 1460cee2e FUN_1460cee2e body=133 status=ok
// SIG undefined FUN_1460cee2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cee2e(void)

{
  _DAT_14ca40690 = L"BASE";
  DAT_14ca406ba = 4;
  FUN_1411baada();
  _DAT_14ca406a0 = DAT_14ca3dbd8;
  _DAT_14ca40698 = &DAT_14ca3fa38;
  _DAT_14ca406a8 = &LAB_14682652b;
  DAT_14ca3dbd8 = &DAT_14ca40690;
  DAT_14ca3dc2d = DAT_14ca3dc2d + '\x01';
  _DAT_14ca406b0 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3dc2e = DAT_14ca3dc2e + '\x01';
  }
  return;
}



// FUNCTION 1460ceeb4 FUN_1460ceeb4 body=287 status=ok
// SIG undefined FUN_1460ceeb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ceeb4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3de00) {
    FUN_144b3d300(&DAT_14ca3de00);
    if (DAT_14ca3de00 == -1) {
      FUN_1460cefd4();
      FUN_140db5666(&DAT_14ca3dd58,2,&DAT_14ca3dcf0,
                    L"TMaterialCHS_IS_LodTDistanceFieldShadowsAndLightMapPolicyHQ",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS intersection=MaterialIS",8,1,FUN_1472b9552,
                    FUN_1472b952a,FUN_14177b2c4,&LAB_1472b9526,&LAB_1472b9520,&LAB_1472b9500,0x110,0
                   );
      _DAT_14ca3dd58 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a9dd);
      _Init_thread_footer(&DAT_14ca3de00);
    }
  }
  return &DAT_14ca3dd58;
}



// FUNCTION 1460cefd4 FUN_1460cefd4 body=205 status=ok
// SIG undefined FUN_1460cefd4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cefd4(void)

{
  if ((DAT_14ca3dd57 & 2) == 0) {
    DAT_14ca3dd57 = DAT_14ca3dd57 | 2;
    _DAT_14ca3dcf8 = L"TMaterialCHS_IS_LodTDistanceFieldShadowsAndLightMapPolicyHQ";
    _DAT_14ca3dd10 = FUN_146826540;
    _DAT_14ca3dd18 = FUN_146825d77;
    _DAT_14ca3dd20 = FUN_146825fd6;
    _DAT_14ca3dd28 = FUN_1407e02ea;
    _DAT_14ca3dd30 = FUN_146826273;
    _DAT_14ca3dd08 = FUN_1472b94c6;
    _DAT_14ca3dd48 = 0xffffffff00000110;
    _DAT_14ca3dd50 = 8;
    DAT_14ca3dd54 = 0;
    _DAT_14ca3dd38 = &LAB_1472b94fc;
    FUN_1460cf0a2();
    FUN_1407e00cc(&DAT_14ca3dcf0);
    return;
  }
  return;
}



// FUNCTION 1460cf0a2 FUN_1460cf0a2 body=133 status=ok
// SIG undefined FUN_1460cf0a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cf0a2(void)

{
  _DAT_14ca406e0 = L"BASE";
  DAT_14ca4070a = 4;
  FUN_1411baada();
  _DAT_14ca406f0 = DAT_14ca3dd00;
  _DAT_14ca406e8 = &DAT_14ca3fa38;
  _DAT_14ca406f8 = &LAB_14682652b;
  DAT_14ca3dd00 = &DAT_14ca406e0;
  DAT_14ca3dd55 = DAT_14ca3dd55 + '\x01';
  _DAT_14ca40700 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3dd56 = DAT_14ca3dd56 + '\x01';
  }
  return;
}



// FUNCTION 1460cf128 FUN_1460cf128 body=287 status=ok
// SIG undefined FUN_1460cf128(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460cf128(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca3df28) {
    FUN_144b3d300(&DAT_14ca3df28);
    if (DAT_14ca3df28 == -1) {
      FUN_1460cf248();
      FUN_140db5666(&DAT_14ca3de80,2,&DAT_14ca3de18,
                    L"TMaterialCHS_IS_LodTDistanceFieldShadowsAndLightMapPolicyHQFAnyHitShader",
                    L"/Engine/Private/RayTracing/RayTracingMaterialHitShaders.usf",
                    L"closesthit=MaterialCHS anyhit=MaterialAHS intersection=MaterialIS",8,1,
                    FUN_1472b962e,FUN_1472b9606,FUN_14177b524,&LAB_1472b9602,&LAB_1472b95fc,
                    &LAB_1472b95dc,0x110,0);
      _DAT_14ca3de80 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142f6a9e9);
      _Init_thread_footer(&DAT_14ca3df28);
    }
  }
  return &DAT_14ca3de80;
}



// FUNCTION 1460cf248 FUN_1460cf248 body=205 status=ok
// SIG undefined FUN_1460cf248(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cf248(void)

{
  if ((DAT_14ca3de7f & 2) == 0) {
    DAT_14ca3de7f = DAT_14ca3de7f | 2;
    _DAT_14ca3de20 = L"TMaterialCHS_IS_LodTDistanceFieldShadowsAndLightMapPolicyHQFAnyHitShader";
    _DAT_14ca3de38 = FUN_146826540;
    _DAT_14ca3de40 = FUN_146825d77;
    _DAT_14ca3de48 = FUN_146825fd6;
    _DAT_14ca3de50 = FUN_1407e02ea;
    _DAT_14ca3de58 = FUN_146826273;
    _DAT_14ca3de30 = FUN_1472b95a2;
    _DAT_14ca3de70 = 0xffffffff00000110;
    _DAT_14ca3de78 = 8;
    DAT_14ca3de7c = 0;
    _DAT_14ca3de60 = &LAB_1472b95d8;
    FUN_1460cf316();
    FUN_1407e00cc(&DAT_14ca3de18);
    return;
  }
  return;
}



// FUNCTION 1460cf316 FUN_1460cf316 body=133 status=ok
// SIG undefined FUN_1460cf316(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cf316(void)

{
  _DAT_14ca40730 = L"BASE";
  DAT_14ca4075a = 4;
  FUN_1411baada();
  _DAT_14ca40740 = DAT_14ca3de28;
  _DAT_14ca40738 = &DAT_14ca3fa38;
  _DAT_14ca40748 = &LAB_14682652b;
  DAT_14ca3de28 = &DAT_14ca40730;
  DAT_14ca3de7d = DAT_14ca3de7d + '\x01';
  _DAT_14ca40750 = 0x100000000;
  if (DAT_14ca3fa9c != '\0') {
    DAT_14ca3de7e = DAT_14ca3de7e + '\x01';
  }
  return;
}



// FUNCTION 1460cf39c FUN_1460cf39c body=287 status=ok
// SIG undefined FUN_1460cf39c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460cf39c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca60c30) {
    FUN_144b3d300(&DAT_14ca60c30);
    if (DAT_14ca60c30 == -1) {
      FUN_1460cf4bc();
      FUN_140db5666(&DAT_14ca60b88,2,&DAT_14ca60b20,
                    L"TTranslucencyShadowDepthVS<TranslucencyShadowDepth_Standard>",
                    L"/Engine/Private/TranslucentShadowDepthShaders.usf",L"MainVS",0,1,FUN_147322060
                    ,FUN_147322038,&LAB_1430abb2c,&LAB_147322034,&LAB_14712ac0c,&LAB_14712ac08,0x108
                    ,0);
      _DAT_14ca60b88 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_1430abb56);
      _Init_thread_footer(&DAT_14ca60c30);
    }
  }
  return &DAT_14ca60b88;
}



// FUNCTION 1460cf4bc FUN_1460cf4bc body=205 status=ok
// SIG undefined FUN_1460cf4bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cf4bc(void)

{
  if ((DAT_14ca60b87 & 2) == 0) {
    DAT_14ca60b87 = DAT_14ca60b87 | 2;
    _DAT_14ca60b28 = L"TTranslucencyShadowDepthVS<TranslucencyShadowDepth_Standard>";
    _DAT_14ca60b40 = FUN_146826540;
    _DAT_14ca60b48 = FUN_146825d77;
    _DAT_14ca60b50 = FUN_146825fd6;
    _DAT_14ca60b58 = FUN_1407e02ea;
    _DAT_14ca60b60 = FUN_146826273;
    _DAT_14ca60b38 = FUN_147321ffa;
    _DAT_14ca60b78 = 0xffffffff00000108;
    _DAT_14ca60b80 = 8;
    DAT_14ca60b84 = 0;
    _DAT_14ca60b68 = &LAB_147322030;
    FUN_1460cf58a();
    FUN_1407e00cc(&DAT_14ca60b20);
    return;
  }
  return;
}



// FUNCTION 1460cf58a FUN_1460cf58a body=133 status=ok
// SIG undefined FUN_1460cf58a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cf58a(void)

{
  _DAT_14ca635a0 = L"BASE";
  DAT_14ca635ca = 4;
  FUN_145e247ba();
  _DAT_14ca635b0 = DAT_14ca60b30;
  _DAT_14ca635a8 = &DAT_14ca63508;
  _DAT_14ca635b8 = &LAB_14682652b;
  DAT_14ca60b30 = &DAT_14ca635a0;
  DAT_14ca60b85 = DAT_14ca60b85 + '\x01';
  _DAT_14ca635c0 = 0x100000000;
  if (DAT_14ca6356c != '\0') {
    DAT_14ca60b86 = DAT_14ca60b86 + '\x01';
  }
  return;
}



// FUNCTION 1460cf610 FUN_1460cf610 body=287 status=ok
// SIG undefined FUN_1460cf610(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460cf610(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca60e80) {
    FUN_144b3d300(&DAT_14ca60e80);
    if (DAT_14ca60e80 == -1) {
      FUN_1460cf730();
      FUN_140db5666(&DAT_14ca60dd8,2,&DAT_14ca60d70,
                    L"TTranslucencyShadowDepthPS<TranslucencyShadowDepth_Standard>",
                    L"/Engine/Private/TranslucentShadowDepthShaders.usf",L"MainOpacityPS",3,1,
                    FUN_147322234,FUN_1473221d6,&LAB_1430abb98,&LAB_1473221d2,&LAB_14712ac0c,
                    &LAB_14712ac08,0x110,0);
      _DAT_14ca60dd8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_1430abbc2);
      _Init_thread_footer(&DAT_14ca60e80);
    }
  }
  return &DAT_14ca60dd8;
}



// FUNCTION 1460cf730 FUN_1460cf730 body=205 status=ok
// SIG undefined FUN_1460cf730(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cf730(void)

{
  if ((DAT_14ca60dd7 & 2) == 0) {
    DAT_14ca60dd7 = DAT_14ca60dd7 | 2;
    _DAT_14ca60d78 = L"TTranslucencyShadowDepthPS<TranslucencyShadowDepth_Standard>";
    _DAT_14ca60d90 = FUN_146826540;
    _DAT_14ca60d98 = FUN_146825d77;
    _DAT_14ca60da0 = FUN_146825fd6;
    _DAT_14ca60da8 = FUN_1407e02ea;
    _DAT_14ca60db0 = FUN_146826273;
    _DAT_14ca60d88 = FUN_147322198;
    _DAT_14ca60dc8 = 0xffffffff00000110;
    _DAT_14ca60dd0 = 8;
    DAT_14ca60dd4 = 0;
    _DAT_14ca60db8 = &LAB_1473221ce;
    FUN_1460cf7fe();
    FUN_1407e00cc(&DAT_14ca60d70);
    return;
  }
  return;
}



// FUNCTION 1460cf7fe FUN_1460cf7fe body=133 status=ok
// SIG undefined FUN_1460cf7fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cf7fe(void)

{
  _DAT_14ca636c8 = L"BASE";
  DAT_14ca636f2 = 4;
  FUN_145ef009c();
  _DAT_14ca636d8 = DAT_14ca60d80;
  _DAT_14ca636d0 = &DAT_14ca63600;
  _DAT_14ca636e0 = &LAB_14682652b;
  DAT_14ca60d80 = &DAT_14ca636c8;
  DAT_14ca60dd5 = DAT_14ca60dd5 + '\x01';
  _DAT_14ca636e8 = 0x100000000;
  if (DAT_14ca63664 != '\0') {
    DAT_14ca60dd6 = DAT_14ca60dd6 + '\x01';
  }
  return;
}



// FUNCTION 1460cf884 FUN_1460cf884 body=287 status=ok
// SIG undefined FUN_1460cf884(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460cf884(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caac578) {
    FUN_144b3d300(&DAT_14caac578);
    if (DAT_14caac578 == -1) {
      FUN_1460cf9a4();
      FUN_140db5666(&DAT_14caac4d0,1,&DAT_14caac468,L"TSlateMaterialShaderPSColorFont",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_14750c82c,
                    FUN_14750c804,&LAB_1432b9574,&LAB_14750c800,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caac4d0 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_1432b957c);
      _Init_thread_footer(&DAT_14caac578);
    }
  }
  return &DAT_14caac4d0;
}



// FUNCTION 1460cf9a4 FUN_1460cf9a4 body=205 status=ok
// SIG undefined FUN_1460cf9a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cf9a4(void)

{
  if ((DAT_14caac4cf & 2) == 0) {
    DAT_14caac4cf = DAT_14caac4cf | 2;
    _DAT_14caac470 = L"TSlateMaterialShaderPSColorFont";
    _DAT_14caac488 = FUN_146826540;
    _DAT_14caac490 = FUN_146825d77;
    _DAT_14caac498 = FUN_146825fd6;
    _DAT_14caac4a0 = FUN_1407e02ea;
    _DAT_14caac4a8 = FUN_146826273;
    _DAT_14caac480 = FUN_14750c7c6;
    _DAT_14caac4c0 = 0xffffffff00000118;
    _DAT_14caac4c8 = 8;
    DAT_14caac4cc = 0;
    _DAT_14caac4b0 = &LAB_14750c7fc;
    FUN_1460cfa72();
    FUN_1407e00cc(&DAT_14caac468);
    return;
  }
  return;
}



// FUNCTION 1460cfa72 FUN_1460cfa72 body=133 status=ok
// SIG undefined FUN_1460cfa72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cfa72(void)

{
  _DAT_14cab0c60 = L"BASE";
  DAT_14cab0c8a = 4;
  FUN_1457312d6();
  _DAT_14cab0c70 = DAT_14caac478;
  _DAT_14cab0c68 = &DAT_14caabd08;
  _DAT_14cab0c78 = &LAB_14682652b;
  DAT_14caac478 = &DAT_14cab0c60;
  DAT_14caac4cd = DAT_14caac4cd + '\x01';
  _DAT_14cab0c80 = 0x100000000;
  if (DAT_14caabd6c != '\0') {
    DAT_14caac4ce = DAT_14caac4ce + '\x01';
  }
  return;
}



// FUNCTION 1460cfaf8 FUN_1460cfaf8 body=287 status=ok
// SIG undefined FUN_1460cfaf8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460cfaf8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caac7c8) {
    FUN_144b3d300(&DAT_14caac7c8);
    if (DAT_14caac7c8 == -1) {
      FUN_1460cfc18();
      FUN_140db5666(&DAT_14caac720,1,&DAT_14caac6b8,L"TSlateMaterialShaderPSSdfFont",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_14750c96c,
                    FUN_14750c944,&LAB_1432b959c,&LAB_14750c940,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caac720 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_1432b95a4);
      _Init_thread_footer(&DAT_14caac7c8);
    }
  }
  return &DAT_14caac720;
}



// FUNCTION 1460cfc18 FUN_1460cfc18 body=205 status=ok
// SIG undefined FUN_1460cfc18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cfc18(void)

{
  if ((DAT_14caac71f & 2) == 0) {
    DAT_14caac71f = DAT_14caac71f | 2;
    _DAT_14caac6c0 = L"TSlateMaterialShaderPSSdfFont";
    _DAT_14caac6d8 = FUN_146826540;
    _DAT_14caac6e0 = FUN_146825d77;
    _DAT_14caac6e8 = FUN_146825fd6;
    _DAT_14caac6f0 = FUN_1407e02ea;
    _DAT_14caac6f8 = FUN_146826273;
    _DAT_14caac6d0 = FUN_14750c906;
    _DAT_14caac710 = 0xffffffff00000118;
    _DAT_14caac718 = 8;
    DAT_14caac71c = 0;
    _DAT_14caac700 = &LAB_14750c93c;
    FUN_1460cfce6();
    FUN_1407e00cc(&DAT_14caac6b8);
    return;
  }
  return;
}



// FUNCTION 1460cfce6 FUN_1460cfce6 body=133 status=ok
// SIG undefined FUN_1460cfce6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cfce6(void)

{
  _DAT_14cab0cc0 = L"BASE";
  DAT_14cab0cea = 4;
  FUN_1457312d6();
  _DAT_14cab0cd0 = DAT_14caac6c8;
  _DAT_14cab0cc8 = &DAT_14caabd08;
  _DAT_14cab0cd8 = &LAB_14682652b;
  DAT_14caac6c8 = &DAT_14cab0cc0;
  DAT_14caac71d = DAT_14caac71d + '\x01';
  _DAT_14cab0ce0 = 0x100000000;
  if (DAT_14caabd6c != '\0') {
    DAT_14caac71e = DAT_14caac71e + '\x01';
  }
  return;
}



// FUNCTION 1460cfd6c FUN_1460cfd6c body=287 status=ok
// SIG undefined FUN_1460cfd6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460cfd6c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caac8f0) {
    FUN_144b3d300(&DAT_14caac8f0);
    if (DAT_14caac8f0 == -1) {
      FUN_1460cfe8c();
      FUN_140db5666(&DAT_14caac848,1,&DAT_14caac7e0,L"TSlateMaterialShaderPSMsdfFont",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_14750ca0c,
                    FUN_14750c9e4,&LAB_1432b95b0,&LAB_14750c9e0,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caac848 = &PTR_FUN_14a203b98;
      atexit((_func_5014 *)&LAB_1432b95b8);
      _Init_thread_footer(&DAT_14caac8f0);
    }
  }
  return &DAT_14caac848;
}



// FUNCTION 1460cfe8c FUN_1460cfe8c body=205 status=ok
// SIG undefined FUN_1460cfe8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cfe8c(void)

{
  if ((DAT_14caac847 & 2) == 0) {
    DAT_14caac847 = DAT_14caac847 | 2;
    _DAT_14caac7e8 = L"TSlateMaterialShaderPSMsdfFont";
    _DAT_14caac800 = FUN_146826540;
    _DAT_14caac808 = FUN_146825d77;
    _DAT_14caac810 = FUN_146825fd6;
    _DAT_14caac818 = FUN_1407e02ea;
    _DAT_14caac820 = FUN_146826273;
    _DAT_14caac7f8 = FUN_14750c9a6;
    _DAT_14caac838 = 0xffffffff00000118;
    _DAT_14caac840 = 8;
    DAT_14caac844 = 0;
    _DAT_14caac828 = &LAB_14750c9dc;
    FUN_1460cff5a();
    FUN_1407e00cc(&DAT_14caac7e0);
    return;
  }
  return;
}



// FUNCTION 1460cff5a FUN_1460cff5a body=133 status=ok
// SIG undefined FUN_1460cff5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460cff5a(void)

{
  _DAT_14cab0cf0 = L"BASE";
  DAT_14cab0d1a = 4;
  FUN_1457312d6();
  _DAT_14cab0d00 = DAT_14caac7f0;
  _DAT_14cab0cf8 = &DAT_14caabd08;
  _DAT_14cab0d08 = &LAB_14682652b;
  DAT_14caac7f0 = &DAT_14cab0cf0;
  DAT_14caac845 = DAT_14caac845 + '\x01';
  _DAT_14cab0d10 = 0x100000000;
  if (DAT_14caabd6c != '\0') {
    DAT_14caac846 = DAT_14caac846 + '\x01';
  }
  return;
}



// FUNCTION 1460cffe0 FUN_1460cffe0 body=397 status=ok
// SIG undefined FUN_1460cffe0(void)

void FUN_1460cffe0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong local_78;
  int local_70;
  longlong local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  longlong local_48;
  int local_40;
  longlong local_38;
  int local_30;
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((DAT_14c872bf2 == '\0') &&
     (((*(byte *)(param_2 + 0x152) == 1 || (*(byte *)(param_2 + 0x152) - 5 < 2)) &&
      (*(longlong *)(param_1 + 0x108) != 0)))) {
    FUN_1400021e4(param_1 + 0x108,&local_38);
    FUN_140002266(&local_48,L"%s: %s",L"mainmenustation");
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    uVar1 = FUN_140b74eb8();
    FUN_140056680(&local_68,uVar1);
    local_38 = local_68;
    local_30 = local_60 + -1;
    if (local_60 == 0) {
      local_30 = 0;
    }
    local_28 = L"LastGameSession";
    local_20 = 0xf;
    FUN_140bee87a(&local_58,&local_38,2);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    uVar1 = FUN_14054d1d4();
    puVar2 = local_58;
    if (local_50 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    local_78 = local_48;
    local_70 = local_40 + -1;
    if (local_40 == 0) {
      local_70 = 0;
    }
    local_88 = 0;
    FUN_1415d54ec(&local_78,puVar2,0,uVar1);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d016e FUN_1460d016e body=1401 status=ok
// SIG undefined FUN_1460d016e(void)

undefined8 FUN_1460d016e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x290,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14ba40830;
  FUN_1460d0832(plVar4 + 2,param_1);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xe8) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0xf0);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xf0) = 0;
LAB_1460d041e:
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
      if (plVar4 != (longlong *)0x0) goto LAB_1460d01f6;
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0xe8) = plVar4 + 2;
    plVar5 = *(longlong **)(param_1 + 0xf0);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    else {
      *(longlong **)(param_1 + 0xf0) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_1460d041e;
    }
LAB_1460d01f6:
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  plVar4 = (longlong *)FUN_14001cc68(0x578,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14ba40850;
  FUN_1460d0a86(plVar4 + 2,param_1);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xd8) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0xe0);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xe0) = 0;
LAB_1460d048b:
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
      if (plVar4 != (longlong *)0x0) goto LAB_1460d0263;
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0xd8) = plVar4 + 2;
    plVar5 = *(longlong **)(param_1 + 0xe0);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    else {
      *(longlong **)(param_1 + 0xe0) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_1460d048b;
    }
LAB_1460d0263:
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  plVar4 = (longlong *)FUN_14001cc68(0xf8,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14ba40b50;
  FUN_1460d06e8(plVar4 + 2,param_1);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xf8) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x100);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x100) = 0;
LAB_1460d04f8:
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
      if (plVar4 != (longlong *)0x0) goto LAB_1460d02d0;
    }
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0xf8) = plVar4 + 2;
    plVar5 = *(longlong **)(param_1 + 0x100);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x100) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_1460d04f8;
    }
LAB_1460d02d0:
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  plVar5 = (longlong *)FUN_14001cc68(0x2e0,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14ba40b70;
  plVar4 = plVar5 + 2;
  FUN_1460d0d84(plVar4,param_1);
  local_38 = plVar4;
  local_30 = plVar5;
  FUN_1460d0778(&local_38,plVar4);
  if (plVar5 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x108) = 0x10;
    plVar4 = *(longlong **)(param_1 + 0x110);
    if (plVar4 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x110) = 0;
LAB_1460d0565:
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x0001460d068a:
        if (iVar3 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x108) = plVar4;
    plVar4 = *(longlong **)(param_1 + 0x110);
    if (plVar5 == plVar4) {
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar4 = plVar5;
        goto joined_r0x0001460d068a;
      }
    }
    else {
      *(longlong **)(param_1 + 0x110) = plVar5;
      if (plVar4 != (longlong *)0x0) goto LAB_1460d0565;
    }
  }
  plVar4 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_30 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = (longlong *)FUN_14001cc68(0x170,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14ba40b90;
  FUN_1460d09be(plVar4 + 2,param_1);
  if (plVar4 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x118) = 0x10;
    plVar5 = *(longlong **)(param_1 + 0x120);
    if (plVar5 == (longlong *)0x0) goto LAB_1460d03d2;
    *(undefined8 *)(param_1 + 0x120) = 0;
LAB_1460d05a8:
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
    if (plVar4 == (longlong *)0x0) goto LAB_1460d03d2;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x118) = plVar4 + 2;
    plVar5 = *(longlong **)(param_1 + 0x120);
    if (plVar4 == plVar5) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x120) = plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_1460d05a8;
    }
  }
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_1460d03d2:
  *(undefined1 *)(param_1 + 0x128) = 1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d06e8 FUN_1460d06e8 body=143 status=ok
// SIG undefined FUN_1460d06e8(void)

void FUN_1460d06e8(undefined8 *param_1,undefined8 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 2;
  *param_1 = &PTR_FUN_14ba3c780;
  param_1[7] = param_2;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}



// FUNCTION 1460d0778 FUN_1460d0778 body=186 status=ok
// SIG undefined FUN_1460d0778(void)

void FUN_1460d0778(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x278) != 0) && (*(longlong *)(param_2 + 0x280) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x280) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x278) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x280);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x278) = param_2;
    if (*(longlong **)(param_2 + 0x280) == plVar2) goto LAB_1460d07c3;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x280);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x280) = plVar2;
      goto LAB_1460d07c3;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x280) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1460d07c3:
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
                    /* WARNING: Could not recover jumptable at 0x0001460d082e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1460d0832 FUN_1460d0832 body=197 status=ok
// SIG undefined FUN_1460d0832(void)

undefined8 * FUN_1460d0832(undefined8 *param_1,undefined8 param_2)

{
  FUN_1460d08f8();
  *param_1 = &PTR_FUN_14ba3c5e0;
  param_1[0x31] = param_2;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x264) = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  return param_1;
}



// FUNCTION 1460d08f8 FUN_1460d08f8 body=197 status=ok
// SIG undefined FUN_1460d08f8(void)

void FUN_1460d08f8(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_LAB_14ba41590;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 2;
  lVar2 = 0x34;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x14);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -4) = 2;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0x94);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 2;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x15] = 2;
  lVar2 = 0xc4;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x14);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -4) = 2;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0x124);
  lVar2 = 0x124;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x14);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -4) = 2;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0x184);
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 2;
  return;
}



// FUNCTION 1460d09be FUN_1460d09be body=200 status=ok
// SIG undefined FUN_1460d09be(void)

void FUN_1460d09be(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 0x1c;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x14);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -4) = 2;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0x7c);
  *param_1 = &PTR_FUN_14ba3d230;
  param_1[0xd] = param_2;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  return;
}



// FUNCTION 1460d0a86 FUN_1460d0a86 body=335 status=ok
// SIG undefined FUN_1460d0a86(void)

undefined8 * FUN_1460d0a86(undefined8 *param_1,undefined8 param_2)

{
  FUN_1460d0bd6();
  *param_1 = &PTR_FUN_14ba40870;
  param_1[0x70] = param_2;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3bc) = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x404) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x40c) = 0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0;
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = 0;
  param_1[0x97] = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4fc) = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x544) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54c) = 0;
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  return param_1;
}



// FUNCTION 1460d0bd6 FUN_1460d0bd6 body=429 status=ok
// SIG undefined FUN_1460d0bd6(void)

void FUN_1460d0bd6(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_LAB_14ba412b0;
  lVar2 = 0x1c;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x14);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -4) = 2;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0x7c);
  lVar2 = 0x7c;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x14);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -4) = 2;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0xdc);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
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
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x27] = 2;
  lVar2 = 0x154;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x14);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -4) = 2;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0x1b4);
  lVar2 = 0x1b4;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x14);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -4) = 2;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0x214);
  lVar2 = 0x214;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x14);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -4) = 2;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0x274);
  lVar2 = 0x274;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x14);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -4) = 2;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0x2d4);
  lVar2 = 0x2d4;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x14);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -4) = 2;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0x334);
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 2;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x344) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x34c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x354) = 0;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x364) = 0;
  *(undefined8 *)((longlong)param_1 + 0x36c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x374) = 0;
  param_1[0x6f] = 2;
  return;
}



// FUNCTION 1460d0d84 FUN_1460d0d84 body=605 status=ok
// SIG undefined FUN_1460d0d84(void)

undefined8 * FUN_1460d0d84(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  longlong local_68;
  longlong *local_60;
  uint local_58;
  undefined4 uStack_54;
  longlong *local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1460d0fec();
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *param_1 = &PTR_FUN_14ba3c8f0;
  param_1[0x51] = param_2;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  puVar5 = (undefined8 *)FUN_14001cc68(0x108,0x10);
  puVar5[1] = &DAT_100000001;
  *puVar5 = &PTR_FUN_14ba3a020;
  FUN_1460d1166(puVar5 + 2);
  param_1[0x54] = puVar5 + 2;
  param_1[0x55] = puVar5;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_78 = &DAT_14c872ce8;
  cVar4 = FUN_1449da20c(DAT_14c872ce0,L"OnlineSubsystemShift",L"MatchmakingSessionName");
  if (cVar4 == '\0') {
    FUN_1401a700c(&local_58,0x11f);
    uVar7 = (ulonglong)local_58;
  }
  else {
    iVar3 = (int)uStack_40 + -1;
    if ((int)uStack_40 == 0) {
      iVar3 = 0;
    }
    FUN_1446f82e2(&local_58,iVar3,local_48,1);
    uVar7 = CONCAT44(uStack_54,local_58);
  }
  param_1[0x57] = uVar7;
  plVar6 = (longlong *)FUN_140a68038(1);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_58);
    plVar6 = (longlong *)CONCAT44(uStack_54,local_58);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x458))(plVar6,&local_68);
      if (local_68 != 0) {
        if (local_60 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
        }
        plVar6 = (longlong *)param_1[0x55];
        param_1[0x54] = local_68;
        param_1[0x55] = local_60;
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
      }
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_60 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)local_60 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_60 + 0x10))(local_60);
          }
        }
      }
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_50 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d0fec FUN_1460d0fec body=378 status=ok
// SIG undefined FUN_1460d0fec(void)

void FUN_1460d0fec(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR__purecall_14ba3d3e0;
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
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x30] = 2;
  lVar2 = 0x19c;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x14);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -4) = 2;
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0x1fc);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0;
  param_1[0x4e] = 2;
  return;
}



// FUNCTION 1460d1166 FUN_1460d1166 body=298 status=ok
// SIG undefined FUN_1460d1166(void)

undefined8 * FUN_1460d1166(undefined8 *param_1)

{
  char cVar1;
  
  *param_1 = &PTR_FUN_14ba3a040;
  param_1[1] = 0x270f000036b1;
  param_1[2] = 0x40a00000ffffffff;
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 2;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1e] = 2;
  cVar1 = FUN_1414d73b6(DAT_14c872ce0,L"LANSession",L"LanAnnouncePort",param_1 + 1,&DAT_14c872ce8);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 1) = 0x36b1;
  }
  cVar1 = FUN_1414d73b6(DAT_14c872ce0,L"LANSession",L"LanGameUniqueId",
                        (undefined4 *)((longlong)param_1 + 0xc),&DAT_14c872ce8);
  if (cVar1 == '\0') {
    *(undefined4 *)((longlong)param_1 + 0xc) = 9999;
  }
  return param_1;
}



// FUNCTION 1460d1290 FUN_1460d1290 body=206 status=ok
// SIG undefined FUN_1460d1290(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460d1290(void)

{
  if ((DAT_14ca8963f & 2) == 0) {
    DAT_14ca8963f = DAT_14ca8963f | 2;
    _DAT_14ca895e0 = L"FCopyRectPS";
    _DAT_14ca895f8 = FUN_146826540;
    _DAT_14ca89600 = FUN_146825d77;
    _DAT_14ca89608 = FUN_146825fd6;
    _DAT_14ca89610 = FUN_1407e02ea;
    _DAT_14ca89618 = FUN_146826273;
    _DAT_14ca895f0 = FUN_14741963e;
    _DAT_14ca89630 = 0xffffffff000000e0;
    _DAT_14ca89638 = 8;
    DAT_14ca8963c = 0;
    _DAT_14ca89620 = &LAB_14741966a;
    FUN_1460d135e();
    FUN_1407e00cc(&DAT_14ca895d8);
  }
  return &DAT_14ca895d8;
}



// FUNCTION 1460d135e FUN_1460d135e body=133 status=ok
// SIG undefined FUN_1460d135e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460d135e(void)

{
  _DAT_14ca93ce0 = L"BASE";
  DAT_14ca93d0a = 4;
  FUN_140b35ae4();
  _DAT_14ca93cf0 = DAT_14ca895e8;
  _DAT_14ca93ce8 = &DAT_14ca8c6c8;
  _DAT_14ca93cf8 = &LAB_14682652b;
  DAT_14ca895e8 = &DAT_14ca93ce0;
  DAT_14ca8963d = DAT_14ca8963d + '\x01';
  _DAT_14ca93d00 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8963e = DAT_14ca8963e + '\x01';
  }
  return;
}



// FUNCTION 1460d13e4 FUN_1460d13e4 body=206 status=ok
// SIG undefined FUN_1460d13e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460d13e4(void)

{
  if ((DAT_14ca90b5f & 2) == 0) {
    DAT_14ca90b5f = DAT_14ca90b5f | 2;
    _DAT_14ca90b00 = L"TOneColorPixelShaderMRT";
    _DAT_14ca90b18 = FUN_146826540;
    _DAT_14ca90b20 = FUN_146825d77;
    _DAT_14ca90b28 = FUN_146825fd6;
    _DAT_14ca90b30 = FUN_1407e02ea;
    _DAT_14ca90b38 = FUN_146826273;
    _DAT_14ca90b10 = FUN_147421c14;
    _DAT_14ca90b50 = 0xffffffff000000e0;
    _DAT_14ca90b58 = 8;
    DAT_14ca90b5c = 0;
    _DAT_14ca90b40 = &LAB_147421c40;
    FUN_1460d14b2();
    FUN_1407e00cc(&DAT_14ca90af8);
  }
  return &DAT_14ca90af8;
}



// FUNCTION 1460d14b2 FUN_1460d14b2 body=133 status=ok
// SIG undefined FUN_1460d14b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460d14b2(void)

{
  _DAT_14ca94cf8 = L"BASE";
  DAT_14ca94d22 = 4;
  FUN_145ee4028();
  _DAT_14ca94d08 = DAT_14ca90b08;
  _DAT_14ca94d00 = &DAT_14ca909d0;
  _DAT_14ca94d10 = &LAB_14682652b;
  DAT_14ca90b08 = &DAT_14ca94cf8;
  DAT_14ca90b5d = DAT_14ca90b5d + '\x01';
  _DAT_14ca94d18 = 0x100000000;
  if (DAT_14ca90a34 != '\0') {
    DAT_14ca90b5e = DAT_14ca90b5e + '\x01';
  }
  return;
}



// FUNCTION 1460d1542 FUN_1460d1542 body=301 status=ok
// SIG undefined FUN_1460d1542(void)

undefined8 * FUN_1460d1542(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145833876();
  *param_1 = &PTR_FUN_14ad00c80;
  param_1[5] = 0;
  param_1[6] = &DAT_3f8000003f800000;
  param_1[7] = 0x3ecccccd3e4ccccd;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_145833896(param_1 + 0xb);
  FUN_1446f470e(&local_28,L"CameraStandIn",1);
  uVar1 = FUN_1458cbe84();
  local_40 = 1;
  local_48 = 1;
  lVar2 = FUN_14048696c(param_1,local_28,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar2);
  }
  param_1[10] = lVar2;
  FUN_1446f470e(&local_30,L"CameraShakePlayer",1);
  uVar1 = FUN_1459098d4();
  local_40 = 1;
  local_48 = 1;
  lVar2 = FUN_14048696c(param_1,local_30,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar2);
  }
  param_1[9] = lVar2;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d1678 FUN_1460d1678 body=305 status=ok
// SIG undefined FUN_1460d1678(void)

undefined8 * FUN_1460d1678(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14aedc6b0;
  param_1[5] = &PTR_FUN_14aedca50;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 2;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
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
  param_1[0x1b] = 2;
  *(undefined2 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)((longlong)param_1 + 0xfa) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x1e] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined2 *)(param_1 + 0x35) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x30] = &DAT_200000002;
  return param_1;
}



// FUNCTION 1460d17b4 FUN_1460d17b4 body=302 status=ok
// SIG undefined FUN_1460d17b4(void)

longlong * FUN_1460d17b4(longlong *param_1)

{
  FUN_14480568a();
  *param_1 = (longlong)&PTR_FUN_14b2ed090;
  param_1[5] = (longlong)&PTR_FUN_14b2eda90;
  param_1[6] = (longlong)&PTR_LAB_14b2edad0;
  param_1[0x55] = (longlong)&PTR_FUN_14b2edb20;
  param_1[0x56] = (longlong)&PTR_FUN_14b2edba0;
  param_1[0x57] = (longlong)&PTR_FUN_14b2edbb0;
  param_1[200] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfd;
  *(byte *)((longlong)param_1 + 0x1f9) = *(byte *)((longlong)param_1 + 0x1f9) | 8;
  *(undefined1 *)((longlong)param_1 + 0x1fb) = 2;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb81858) {
    FUN_144b3d300(&DAT_14cb81858);
    if (DAT_14cb81858 == -1) {
      FUN_1446f470e(&DAT_14cb81850,L"HazardOverlap",1);
      _Init_thread_footer(&DAT_14cb81858);
    }
  }
  (**(code **)(*param_1 + 0x728))(param_1,DAT_14cb81850,1);
  *(byte *)((longlong)param_1 + 0x2d6) = *(byte *)((longlong)param_1 + 0x2d6) & 0xfd;
  *(byte *)((longlong)param_1 + 0x2de) = *(byte *)((longlong)param_1 + 0x2de) | 0x10;
  if ((*(byte *)((longlong)param_1 + 0x2d3) & 8) == 0) {
    *(byte *)((longlong)param_1 + 0x2d3) = *(byte *)((longlong)param_1 + 0x2d3) | 8;
    (**(code **)(*param_1 + 0x958))(param_1);
  }
  *(undefined4 *)(param_1 + 0xc4) = 0xff00ff00;
  return param_1;
}



// FUNCTION 1460d18e2 FUN_1460d18e2 body=68 status=ok
// SIG undefined FUN_1460d18e2(void)

void FUN_1460d18e2(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x120);
  memset(_Dst,0,0x120);
  FUN_1460d1926(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 1460d1926 FUN_1460d1926 body=244 status=ok
// SIG undefined FUN_1460d1926(void)

undefined8 * FUN_1460d1926(undefined8 *param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8a1f10;
  FUN_144a5dc74(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 1;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  FUN_140056680(&local_30,L"down_state_prompt_give_up");
  param_1[0x21] = local_30;
  *(undefined4 *)(param_1 + 0x22) = local_28;
  *(undefined4 *)((longlong)param_1 + 0x114) = local_24;
  *(undefined4 *)(param_1 + 0x23) = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d1a1c FUN_1460d1a1c body=40 status=ok
// SIG undefined FUN_1460d1a1c(void)

undefined8 FUN_1460d1a1c(undefined8 param_1,int param_2)

{
  FUN_1460d1a44();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1460d1a44 FUN_1460d1a44 body=273 status=ok
// SIG undefined FUN_1460d1a44(void)

void FUN_1460d1a44(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14bd85f20;
  param_1[5] = &PTR_FUN_14bd862f0;
  param_1[0x13] = &PTR_FUN_14bd86310;
  puVar3 = (undefined8 *)param_1[0x98];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0x97];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  plVar4 = (longlong *)param_1[0x93];
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
  plVar4 = (longlong *)param_1[0x91];
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
  plVar4 = (longlong *)param_1[0x8f];
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
  FUN_1457e5b52(param_1 + 0x74);
  FUN_141082778(param_1 + 0x30);
  FUN_145865dac(param_1);
  return;
}



// FUNCTION 1460d1b56 FUN_1460d1b56 body=377 status=ok
// SIG undefined FUN_1460d1b56(void)

void FUN_1460d1b56(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  lVar4 = FUN_14001cc68(0x250,0x10);
  FUN_1460d1cd0(lVar4);
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a5a9b40;
  plVar5[2] = lVar4;
  if ((lVar4 == 0) ||
     (((*(longlong *)(lVar4 + 0x20) != 0 && (*(longlong *)(lVar4 + 0x28) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar4 + 0x28) + 8))))) goto LAB_1460d1bf0;
  if (plVar5 == (longlong *)0x0) {
    *(longlong *)(lVar4 + 0x20) = lVar4;
    plVar6 = *(longlong **)(lVar4 + 0x28);
    if (plVar6 == (longlong *)0x0) goto LAB_1460d1bf0;
LAB_1460d1c65:
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    *(longlong **)(lVar4 + 0x28) = plVar5;
    if (plVar5 == (longlong *)0x0) goto LAB_1460d1bf0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(longlong *)(lVar4 + 0x20) = lVar4;
    if (*(longlong **)(lVar4 + 0x28) != plVar5) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(lVar4 + 0x28);
      if (plVar6 != (longlong *)0x0) goto LAB_1460d1c65;
      *(longlong **)(lVar4 + 0x28) = plVar5;
    }
  }
  LOCK();
  plVar6 = plVar5 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_1460d1bf0:
  plVar6 = DAT_14cabd110;
  DAT_14cabd108 = lVar4;
  if (plVar5 == DAT_14cabd110) {
    if (plVar5 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) {
      return;
    }
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar6 = plVar5;
  }
  else {
    if (DAT_14cabd110 == (longlong *)0x0) {
      DAT_14cabd110 = plVar5;
      return;
    }
    LOCK();
    plVar1 = DAT_14cabd110 + 1;
    DAT_14cabd110 = plVar5;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) {
      return;
    }
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 != 0) {
    return;
  }
  (**(code **)(*plVar6 + 0x10))(plVar6);
  return;
}



// FUNCTION 1460d1cd0 FUN_1460d1cd0 body=715 status=ok
// SIG undefined FUN_1460d1cd0(void)

undefined8 * FUN_1460d1cd0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined4 local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined2 *)(param_1 + 1) = 0x100;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14a5a8e40;
  param_1[2] = &PTR_FUN_14a5a8e70;
  param_1[3] = &PTR_LAB_14a5a8fb0;
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
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 1;
  *(undefined4 *)((longlong)param_1 + 0xac) = 1;
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb2) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb3) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0xbf800000;
  *(undefined2 *)((longlong)param_1 + 0xdc) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0xde) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe2) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 2;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 2;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 2;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1da) = 1;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3c));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x3c),4000);
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0;
  *(undefined8 *)((longlong)param_1 + 0x239) = 0;
  *(undefined8 *)((longlong)param_1 + 0x241) = 0;
  if (DAT_14c867b50 != 3) {
    FUN_1446efa72(&DAT_14c867b48,0,3,0x10);
    DAT_14c867b50 = 3;
  }
  puVar1 = DAT_14c867b48;
  *DAT_14c867b48 = &DAT_149efe500;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  puVar1[2] = lVar5;
  *puVar1 = &PTR_FUN_14a5a9b90;
  puVar1[3] = param_1;
  puVar1[4] = &LAB_140048d98;
  *(undefined4 *)(puVar1 + 5) = 0x10;
  local_48 = &LAB_145914a9a;
  local_40 = 0x10;
  FUN_1460d1f9c(local_38,param_1);
  uVar4 = FUN_14118da1c();
  bVar3 = FUN_14054d46e(uVar4,L"NoMovies");
  DAT_14cabd100 = (uint)bVar3;
  uVar4 = FUN_14118da1c();
  bVar3 = FUN_14054d46e(uVar4,L"NoStartupMovies");
  DAT_14cabd104 = (uint)bVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d1f9c FUN_1460d1f9c body=225 status=ok
// SIG undefined FUN_1460d1f9c(void)

undefined8 FUN_1460d1f9c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_14a5a9c70;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_40[2] = lVar4;
  *local_40 = &PTR_FUN_14a5a9c00;
  local_40[3] = param_2;
  local_40[4] = uVar2;
  *(undefined4 *)(local_40 + 5) = uVar1;
  FUN_1460d207e(param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d207e FUN_1460d207e body=233 status=ok
// SIG undefined FUN_1460d207e(void)

undefined8 * FUN_1460d207e(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14c8672f8,1);
      uVar5 = 0;
      if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      uVar3 = DAT_14c867300;
      lVar6 = (longlong)(int)DAT_14c867300;
      DAT_14c867300 = DAT_14c867300 + 1;
      if (DAT_14c867304 < DAT_14c867300) {
        FUN_1447a71f6(&DAT_14c8672f8,uVar3);
      }
      lVar2 = DAT_14c8672f8;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14c8672f8 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d2178 FUN_1460d2178 body=205 status=ok
// SIG undefined FUN_1460d2178(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460d2178(void)

{
  if ((DAT_14ca13c27 & 2) == 0) {
    DAT_14ca13c27 = DAT_14ca13c27 | 2;
    _DAT_14ca13bc8 = L"FEmitSceneStencilPS_DisableEdgeDetection";
    _DAT_14ca13be0 = FUN_146826540;
    _DAT_14ca13be8 = FUN_146825d77;
    _DAT_14ca13bf0 = FUN_146825fd6;
    _DAT_14ca13bf8 = FUN_1407e02ea;
    _DAT_14ca13c00 = FUN_146826273;
    _DAT_14ca13bd8 = FUN_1472512f0;
    _DAT_14ca13c18 = 0xffffffff000000e0;
    _DAT_14ca13c20 = 8;
    DAT_14ca13c24 = 0;
    _DAT_14ca13c08 = &LAB_14725131c;
    FUN_1460d2246();
    FUN_1407e00cc(&DAT_14ca13bc0);
    return;
  }
  return;
}



// FUNCTION 1460d2246 FUN_1460d2246 body=133 status=ok
// SIG undefined FUN_1460d2246(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460d2246(void)

{
  _DAT_14ca18d28 = L"BASE";
  DAT_14ca18d52 = 4;
  FUN_145cb9316();
  _DAT_14ca18d38 = DAT_14ca13bd0;
  _DAT_14ca18d30 = &DAT_14ca13a98;
  _DAT_14ca18d40 = &LAB_14682652b;
  DAT_14ca13bd0 = &DAT_14ca18d28;
  DAT_14ca13c25 = DAT_14ca13c25 + '\x01';
  _DAT_14ca18d48 = 0x100000000;
  if (DAT_14ca13afc != '\0') {
    DAT_14ca13c26 = DAT_14ca13c26 + '\x01';
  }
  return;
}



// FUNCTION 1460d22cc FUN_1460d22cc body=205 status=ok
// SIG undefined FUN_1460d22cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460d22cc(void)

{
  if ((DAT_14ca13d4f & 2) == 0) {
    DAT_14ca13d4f = DAT_14ca13d4f | 2;
    _DAT_14ca13cf0 = L"FEmitSceneStencilPS_DisableInkHighlight";
    _DAT_14ca13d08 = FUN_146826540;
    _DAT_14ca13d10 = FUN_146825d77;
    _DAT_14ca13d18 = FUN_146825fd6;
    _DAT_14ca13d20 = FUN_1407e02ea;
    _DAT_14ca13d28 = FUN_146826273;
    _DAT_14ca13d00 = FUN_1472513d6;
    _DAT_14ca13d40 = 0xffffffff000000e0;
    _DAT_14ca13d48 = 8;
    DAT_14ca13d4c = 0;
    _DAT_14ca13d30 = &LAB_147251402;
    FUN_1460d239a();
    FUN_1407e00cc(&DAT_14ca13ce8);
    return;
  }
  return;
}



// FUNCTION 1460d239a FUN_1460d239a body=133 status=ok
// SIG undefined FUN_1460d239a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460d239a(void)

{
  _DAT_14ca18d58 = L"BASE";
  DAT_14ca18d82 = 4;
  FUN_145cb9316();
  _DAT_14ca18d68 = DAT_14ca13cf8;
  _DAT_14ca18d60 = &DAT_14ca13a98;
  _DAT_14ca18d70 = &LAB_14682652b;
  DAT_14ca13cf8 = &DAT_14ca18d58;
  DAT_14ca13d4d = DAT_14ca13d4d + '\x01';
  _DAT_14ca18d78 = 0x100000000;
  if (DAT_14ca13afc != '\0') {
    DAT_14ca13d4e = DAT_14ca13d4e + '\x01';
  }
  return;
}



// FUNCTION 1460d2420 FUN_1460d2420 body=205 status=ok
// SIG undefined FUN_1460d2420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460d2420(void)

{
  if ((DAT_14ca13e77 & 2) == 0) {
    DAT_14ca13e77 = DAT_14ca13e77 | 2;
    _DAT_14ca13e18 = L"FEmitSceneStencilPS_SecondaryDecals";
    _DAT_14ca13e30 = FUN_146826540;
    _DAT_14ca13e38 = FUN_146825d77;
    _DAT_14ca13e40 = FUN_146825fd6;
    _DAT_14ca13e48 = FUN_1407e02ea;
    _DAT_14ca13e50 = FUN_146826273;
    _DAT_14ca13e28 = FUN_1472514bc;
    _DAT_14ca13e68 = 0xffffffff000000e0;
    _DAT_14ca13e70 = 8;
    DAT_14ca13e74 = 0;
    _DAT_14ca13e58 = &LAB_1472514e8;
    FUN_1460d24ee();
    FUN_1407e00cc(&DAT_14ca13e10);
    return;
  }
  return;
}



// FUNCTION 1460d24ee FUN_1460d24ee body=133 status=ok
// SIG undefined FUN_1460d24ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460d24ee(void)

{
  _DAT_14ca18d88 = L"BASE";
  DAT_14ca18db2 = 4;
  FUN_145cb9316();
  _DAT_14ca18d98 = DAT_14ca13e20;
  _DAT_14ca18d90 = &DAT_14ca13a98;
  _DAT_14ca18da0 = &LAB_14682652b;
  DAT_14ca13e20 = &DAT_14ca18d88;
  DAT_14ca13e75 = DAT_14ca13e75 + '\x01';
  _DAT_14ca18da8 = 0x100000000;
  if (DAT_14ca13afc != '\0') {
    DAT_14ca13e76 = DAT_14ca13e76 + '\x01';
  }
  return;
}



// FUNCTION 1460d2574 FUN_1460d2574 body=304 status=ok
// SIG undefined FUN_1460d2574(void)

void FUN_1460d2574(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
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
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 400));
  plVar1 = (longlong *)(param_1 + 0x140);
  lVar2 = param_1 + 0x150;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x168) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar3 = *(int *)(param_1 + 0x168);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar3) || (uStack_50 != lVar2)) {
    do {
      FUN_1412ab70c(*(undefined8 *)(*local_80 + 0x10 + (longlong)iStack_64 * 0x28),param_2,1);
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar2 || iStack_64 != iVar3));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 400));
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d26a6 FUN_1460d26a6 body=197 status=ok
// SIG undefined FUN_1460d26a6(void)

void FUN_1460d26a6(void)

{
  undefined8 uVar1;
  DWORD DVar2;
  longlong lVar3;
  
  if (DAT_14c8962b0 != (HANDLE)0x0) {
    SetEvent(DAT_14c8962c0);
    DVar2 = WaitForSingleObject(DAT_14c8962b0,1000);
    if (DVar2 == 0) {
      CloseHandle(DAT_14c8962b0);
    }
    DAT_14c8962b0 = (HANDLE)0x0;
  }
  uVar1 = FUN_1460d276c();
  FUN_140457ffc(uVar1,&DAT_14c8962a8);
  lVar3 = 0;
  do {
    CloseHandle(*(HANDLE *)((longlong)&DAT_14c8962b8 + lVar3));
    *(undefined8 *)((longlong)&DAT_14c8962b8 + lVar3) = 0;
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x10);
  CloseHandle(DAT_14c8962c8);
  DAT_14c8962c8 = (HANDLE)0x0;
  if (DAT_14c8962e8 != (HANDLE)0x0) {
    CloseHandle(DAT_14c8962e8);
  }
  DAT_14c8962e8 = (HANDLE)0x0;
  return;
}



// FUNCTION 1460d276c FUN_1460d276c body=117 status=ok
// SIG undefined FUN_1460d276c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1460d276c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c867158) {
    FUN_144b3d300(&DAT_14c867158);
    if (DAT_14c867158 == -1) {
      DAT_14c867140 = 0;
      _DAT_14c867148 = 0;
      _DAT_14c867150 = 2;
      atexit(FUN_14277ea58);
      _Init_thread_footer(&DAT_14c867158);
    }
  }
  return &DAT_14c867140;
}



// FUNCTION 1460d27e2 FUN_1460d27e2 body=290 status=ok
// SIG undefined FUN_1460d27e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460d27e2(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8bc50) {
    FUN_144b3d300(&DAT_14ca8bc50);
    if (DAT_14ca8bc50 == -1) {
      uVar1 = FUN_144a8221e();
      FUN_1460d2904();
      FUN_140db5666(&DAT_14ca8bba8,0,&DAT_14ca8bb40,L"FGenerateMipsVS",
                    L"/Engine/Private/ComputeGenerateMips.usf",L"MainVS",0,1,FUN_14741bdae,
                    FUN_14741bd54,&LAB_14741bd50,&LAB_14741bd4c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    uVar1);
      _DAT_14ca8bba8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f2e1b);
      _Init_thread_footer(&DAT_14ca8bc50);
    }
  }
  return &DAT_14ca8bba8;
}



// FUNCTION 1460d2904 FUN_1460d2904 body=205 status=ok
// SIG undefined FUN_1460d2904(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460d2904(void)

{
  if ((DAT_14ca8bba7 & 2) == 0) {
    DAT_14ca8bba7 = DAT_14ca8bba7 | 2;
    _DAT_14ca8bb48 = L"FGenerateMipsVS";
    _DAT_14ca8bb60 = FUN_146826540;
    _DAT_14ca8bb68 = FUN_146825d77;
    _DAT_14ca8bb70 = FUN_146825fd6;
    _DAT_14ca8bb78 = FUN_1407e02ea;
    _DAT_14ca8bb80 = FUN_146826273;
    _DAT_14ca8bb58 = FUN_14741bd1c;
    _DAT_14ca8bb98 = 0xffffffff000000e0;
    _DAT_14ca8bba0 = 8;
    DAT_14ca8bba4 = 0;
    _DAT_14ca8bb88 = &LAB_14741bd48;
    FUN_1460d29d2();
    FUN_1407e00cc(&DAT_14ca8bb40);
    return;
  }
  return;
}



// FUNCTION 1460d29d2 FUN_1460d29d2 body=133 status=ok
// SIG undefined FUN_1460d29d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460d29d2(void)

{
  _DAT_14ca942e0 = L"BASE";
  DAT_14ca9430a = 4;
  FUN_140b35ae4();
  _DAT_14ca942f0 = DAT_14ca8bb50;
  _DAT_14ca942e8 = &DAT_14ca8c6c8;
  _DAT_14ca942f8 = &LAB_14682652b;
  DAT_14ca8bb50 = &DAT_14ca942e0;
  DAT_14ca8bba5 = DAT_14ca8bba5 + '\x01';
  _DAT_14ca94300 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8bba6 = DAT_14ca8bba6 + '\x01';
  }
  return;
}



// FUNCTION 1460d2a58 FUN_1460d2a58 body=132 status=ok
// SIG undefined FUN_1460d2a58(void)

bool FUN_1460d2a58(longlong param_1)

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
    FUN_1400841de(param_1 + 0x18,&local_28);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d2ade FUN_1460d2ade body=180 status=ok
// SIG undefined FUN_1460d2ade(void)

void FUN_1460d2ade(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1458517e8(&DAT_14cb109f0,&local_20,FUN_145aa0e1e);
  DAT_14cab4200 = local_20;
  FUN_14576a192(&DAT_14cb10a20,&local_20,FUN_140e3e7bc);
  DAT_14cab4208 = local_20;
  uVar1 = FUN_140b631de();
  FUN_14123f5ce(uVar1,&local_20,FUN_14179ff5a);
  DAT_14cab4210 = local_20;
  FUN_140457ffc(&DAT_14c872cf8,param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d2b93 FUN_1460d2b93 body=92 status=ok
// SIG undefined FUN_1460d2b93(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460d2b93(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  undefined *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  _DAT_14cb463a0 = 0;
  uVar1 = FUN_1458e058e();
  local_18 = &DAT_14cb463a0;
  FUN_1460d2bf0(uVar1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d2bf0 FUN_1460d2bf0 body=220 status=ok
// SIG undefined FUN_1460d2bf0(void)

undefined8 FUN_1460d2bf0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14ae6bb50;
  local_38[3] = *param_3;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d2ccd FUN_1460d2ccd body=92 status=ok
// SIG undefined FUN_1460d2ccd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460d2ccd(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  undefined *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  _DAT_14cb463a8 = 0;
  uVar1 = FUN_1458e058e();
  local_18 = &DAT_14cb463a8;
  FUN_1460d2d2a(uVar1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d2d2a FUN_1460d2d2a body=220 status=ok
// SIG undefined FUN_1460d2d2a(void)

undefined8 FUN_1460d2d2a(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14ae6bbc0;
  local_38[3] = *param_3;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d2e08 FUN_1460d2e08 body=216 status=ok
// SIG undefined FUN_1460d2e08(void)

void FUN_1460d2e08(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar7 = *param_2;
  if (lVar7 != 0) {
    local_38 = (longlong *)param_2[1];
    if (local_38 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_38 + 1) = (int)local_38[1] + 1;
      UNLOCK();
    }
    local_30 = &local_40;
    local_40 = lVar7;
    iVar5 = FUN_1460d2ee2(param_1 + 9);
    plVar3 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if ((0 < iVar5) && ((longlong)(int)param_1[1] != 0)) {
      lVar7 = *param_1;
      lVar6 = (longlong)(int)param_1[1] * 0x38;
      do {
        lVar6 = lVar6 + -0x38;
        cVar4 = FUN_1410d3d16(lVar7,param_2);
        if (cVar4 != '\0') break;
        lVar7 = lVar7 + 0x38;
      } while (lVar6 != 0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460d2ee2 FUN_1460d2ee2 body=254 status=ok
// SIG undefined FUN_1460d2ee2(void)

int FUN_1460d2ee2(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  iVar12 = 0;
  if (lVar13 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar12 = 0;
    bVar8 = *plVar2 == *(longlong *)*param_2;
    iVar9 = 0;
    do {
      lVar6 = (longlong)iVar9;
      iVar4 = iVar9 + 1;
      if (iVar9 + 1 < iVar1) {
        iVar4 = iVar1;
      }
      plVar5 = plVar2 + lVar6 * 2 + 2;
      iVar10 = iVar9;
      lVar7 = lVar6;
      do {
        lVar7 = lVar7 + 1;
        iVar11 = iVar4;
        if (lVar13 <= lVar7) break;
        lVar3 = *plVar5;
        iVar10 = iVar10 + 1;
        plVar5 = plVar5 + 2;
        iVar11 = iVar10;
      } while (bVar8 == (lVar3 == *(longlong *)*param_2));
      iVar4 = iVar11 - iVar9;
      if (bVar8 == false) {
        if (iVar12 != iVar9) {
          memmove(plVar2 + (longlong)iVar12 * 2,plVar2 + lVar6 * 2,(longlong)iVar4 << 4);
        }
        iVar12 = iVar12 + iVar4;
      }
      else {
        FUN_14127b1cd(plVar2 + lVar6 * 2,iVar4);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar9 = iVar11;
    } while (lVar7 < lVar13);
    *(int *)(param_1 + 1) = iVar12;
    iVar12 = iVar1 - iVar12;
  }
  return iVar12;
}



// FUNCTION 1460d2ff8 FUN_1460d2ff8 body=512 status=ok
// SIG undefined FUN_1460d2ff8(void)

undefined8 * FUN_1460d2ff8(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong local_68;
  longlong *local_60;
  int local_58;
  undefined1 local_4c [4];
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14a9280a0;
  plVar3 = (longlong *)FUN_14001cc68(0x120,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149e18df0;
  plVar5 = plVar3 + 2;
  FUN_1460d32a4(plVar5);
  local_48 = plVar5;
  plStack_40 = plVar3;
  FUN_1460d3204(&local_48,plVar5);
  plVar5 = plStack_40;
  param_1[5] = local_48;
  param_1[6] = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_40 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  local_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  FUN_1401031ac(param_1,0,&local_48);
  plVar5 = local_48;
  if ((int)plStack_40 == 0) {
    plVar5 = (longlong *)&DAT_149dfb77a;
  }
  FUN_1446f470e(param_1 + 7,plVar5,1);
  if (local_48 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_1460d31fe(param_1[5],param_1);
  FUN_1460d31fa(param_1[5],(*(uint *)(param_1 + 1) & 0x1400) == 0);
  uVar4 = param_1[5];
  local_48 = (longlong *)param_1[3];
  FUN_1400021e4(&local_48,&local_60);
  local_48 = local_60;
  iVar2 = local_58 + -1;
  if (local_58 == 0) {
    iVar2 = 0;
  }
  plStack_40 = (longlong *)CONCAT44(plStack_40._4_4_,iVar2);
  FUN_1446e940c(local_4c,&local_48);
  FUN_1460d3374(uVar4,local_4c);
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    uVar4 = FUN_145dc9a66();
    FUN_147b061b4(uVar4,param_1);
    uVar4 = FUN_146067e0c();
    local_70 = param_1[5];
    local_68 = param_1[6];
    if (local_68 != 0) {
      LOCK();
      *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      UNLOCK();
    }
    FUN_1467ce9de(uVar4,param_1[7],&local_70);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1460d31fa FUN_1460d31fa body=4 status=ok
// SIG undefined FUN_1460d31fa(void)

void FUN_1460d31fa(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x18) = param_2;
  return;
}



// FUNCTION 1460d31fe FUN_1460d31fe body=5 status=ok
// SIG undefined FUN_1460d31fe(void)

void FUN_1460d31fe(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}



// FUNCTION 1460d3204 FUN_1460d3204 body=159 status=ok
// SIG undefined FUN_1460d3204(void)

void FUN_1460d3204(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_1460d3241;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_1460d3241;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1460d3241:
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
                    /* WARNING: Could not recover jumptable at 0x0001460d329f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1460d32a4 FUN_1460d32a4 body=208 status=ok
// SIG undefined FUN_1460d32a4(void)

undefined8 * FUN_1460d32a4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xe),4000);
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1d),4000);
  return param_1;
}



// FUNCTION 1460d3374 FUN_1460d3374 body=987 status=ok
// SIG undefined FUN_1460d3374(void)

void FUN_1460d3374(undefined8 *param_1,int *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  void *_Src;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  void *pvVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  uint *local_d8;
  longlong *local_d0;
  undefined4 local_c4;
  ulonglong local_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe));
  if (*(int *)((longlong)param_1 + 0x1c) != *param_2) {
    *(int *)((longlong)param_1 + 0x1c) = *param_2;
    plVar1 = param_1 + 4;
    plVar2 = param_1 + 6;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    iVar13 = 0;
    local_60 = plVar2;
    if (*(int *)(param_1 + 9) != 0) {
      FUN_1449c0562(&local_68);
      iVar13 = *(int *)(param_1 + 9);
    }
    local_78 = local_58;
    uVar9 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_88 = local_68;
    local_80 = local_60;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar10 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar13) || (local_78 = uVar9, local_60 != plVar2)) {
      do {
        local_78 = uVar9;
        local_d8 = (uint *)*local_90;
        lVar14 = (longlong)iVar10 * 0x20;
        puVar7 = *(undefined8 **)((longlong)local_d8 + 8 + lVar14);
        local_d0 = *(longlong **)((longlong)local_d8 + 0x10 + lVar14);
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
          UNLOCK();
        }
        plVar8 = (longlong *)puVar7[1];
        *puVar7 = 0;
        puVar7[1] = 0;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          piVar3 = (int *)((longlong)plVar8 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar8 + 0x10))();
          }
        }
        local_d8 = (uint *)((longlong)local_d8 + lVar14);
        local_c0 = (ulonglong)*(uint *)((longlong)param_1 + 0x1c);
        pvVar12 = (void *)(ulonglong)*local_d8;
        local_a0 = (void *)0x0;
        local_98 = *(int *)(puVar7 + 3);
        lVar14 = (longlong)local_98;
        _Src = (void *)puVar7[2];
        local_e0 = pvVar12;
        if (lVar14 == 0) {
          local_94 = 0;
        }
        else {
          FUN_1446dd670(&local_a0,local_98,0);
          pvVar12 = memcpy(local_a0,_Src,lVar14 * 2);
        }
        plStack_b0 = (longlong *)param_1[1];
        if (plStack_b0 == (longlong *)0x0) {
LAB_1460d3549:
          local_b8 = 0;
          plStack_b0 = (longlong *)0x0;
          local_c4 = (undefined4)CONCAT71((int7)((ulonglong)pvVar12 >> 8),1);
        }
        else {
          pvVar12 = (void *)(ulonglong)*(uint *)(plStack_b0 + 1);
          do {
            uVar11 = (uint)pvVar12;
            if (uVar11 == 0) goto LAB_1460d3549;
            LOCK();
            uVar6 = *(uint *)(plStack_b0 + 1);
            if (uVar11 == uVar6) {
              *(uint *)(plStack_b0 + 1) = uVar11 + 1;
            }
            else {
              pvVar12 = (void *)(ulonglong)uVar6;
            }
            UNLOCK();
          } while (uVar11 != uVar6);
          local_b8 = *param_1;
          LOCK();
          *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
          UNLOCK();
          local_c4 = 0;
        }
        plVar8 = plStack_b0;
        FUN_1467cd5d4(&local_68,&local_b8,&local_a0,((longlong)local_e0 << 0x20) + local_c0);
        plVar4 = local_60;
        if (local_60 == (longlong *)0x0) {
          *(undefined8 *)(local_d8 + 2) = local_68;
          local_e0 = *(longlong **)(local_d8 + 4);
          if (local_e0 != (longlong *)0x0) {
            local_d8[4] = 0;
            local_d8[5] = 0;
LAB_1460d361f:
            plVar5 = local_e0;
            LOCK();
            plVar4 = local_e0 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*local_e0)(local_e0);
              LOCK();
              piVar3 = (int *)((longlong)plVar5 + 0xc);
              *piVar3 = *piVar3 + -1;
              iVar10 = *piVar3;
              UNLOCK();
joined_r0x0001460d365b:
              if (iVar10 == 0) {
                (**(code **)(*local_e0 + 0x10))();
              }
            }
          }
        }
        else {
          LOCK();
          *(int *)(local_60 + 1) = (int)local_60[1] + 1;
          UNLOCK();
          *(undefined8 *)(local_d8 + 2) = local_68;
          local_e0 = *(longlong **)(local_d8 + 4);
          if (local_60 == local_e0) {
            LOCK();
            plVar5 = local_60 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar3 = (int *)((longlong)plVar4 + 0xc);
              *piVar3 = *piVar3 + -1;
              iVar10 = *piVar3;
              UNLOCK();
              local_e0 = plVar4;
              goto joined_r0x0001460d365b;
            }
          }
          else {
            *(longlong **)(local_d8 + 4) = local_60;
            if (local_e0 != (longlong *)0x0) goto LAB_1460d361f;
          }
        }
        plVar4 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_60 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar3 = (int *)((longlong)plVar4 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        if ((char)local_c4 == '\0') {
          LOCK();
          plVar4 = plVar8 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar3 = (int *)((longlong)plVar8 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        plVar8 = local_d0;
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_d0 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar3 = (int *)((longlong)plVar8 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*local_d0 + 0x10))();
            }
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar10 = local_78._4_4_;
        uVar9 = local_78;
      } while (((local_78._4_4_ != iVar13) || (local_80 != plVar2)) || (local_90 != plVar1));
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe));
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d3750 FUN_1460d3750 body=42 status=ok
// SIG undefined FUN_1460d3750(void)

void FUN_1460d3750(undefined8 param_1)

{
  FUN_1405f1eac();
  FUN_1415d6758(param_1);
  FUN_145a11174(param_1);
  FUN_1460d377a(param_1);
  return;
}



// FUNCTION 1460d377a FUN_1460d377a body=448 status=ok
// SIG undefined FUN_1460d377a(void)

void FUN_1460d377a(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  uint *puVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [64];
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  if ((longlong)*(int *)(param_1 + 0x6d0) != 0) {
    puVar4 = *(uint **)(param_1 + 0x6c8);
    puVar1 = puVar4 + (longlong)*(int *)(param_1 + 0x6d0) * 10;
    do {
      if (*(int *)(param_1 + 0x6e0) != *(int *)(param_1 + 0x70c)) {
        lVar2 = *(longlong *)(param_1 + 0x718);
        if (*(longlong *)(param_1 + 0x718) == 0) {
          lVar2 = param_1 + 0x710;
        }
        iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x720) - 1U & *puVar4) * 4);
        if (iVar3 != -1) {
          do {
            if (*(uint *)(*(longlong *)(param_1 + 0x6d8) + (longlong)iVar3 * 0x30) == *puVar4)
            goto LAB_1460d38fa;
            iVar3 = *(int *)((longlong)iVar3 * 0x30 + *(longlong *)(param_1 + 0x6d8) + 0x28);
          } while (iVar3 != -1);
        }
      }
      FUN_14620caba(param_1,puVar4);
LAB_1460d38fa:
      FUN_140128f82(&local_88,local_d8,puVar4,0);
      puVar4 = puVar4 + 10;
    } while (puVar4 != puVar1);
  }
  FUN_1460d399a(param_1 + 0x6d8,local_d8,&local_88);
  FUN_1460d393c(param_1 + 0x6d8,local_d8);
  local_90 = 0;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_1402d9776(local_d8);
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1402d9776(&local_88);
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1460d393c FUN_1460d393c body=93 status=ok
// SIG undefined FUN_1460d393c(void)

longlong FUN_1460d393c(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_145a0dcb8(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 1460d399a FUN_1460d399a body=633 status=ok
// SIG undefined FUN_1460d399a(void)

undefined8 * FUN_1460d399a(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar2 = ((int)param_3[1] - *(int *)((longlong)param_3 + 0x34)) +
          ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar2);
    }
    FUN_140129366(param_2,uVar2);
    iVar1 = 1;
    if (3 < uVar2) {
      uVar2 = (uVar2 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar1)) {
      *(int *)(param_2 + 9) = iVar1;
      FUN_140129534(param_2);
    }
  }
  local_50 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      FUN_140128f82(param_2,&local_58,(longlong)iStack_64 * 0x30 + *local_80,0);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  local_50 = param_3 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  if ((int)param_3[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_3;
  if (iStack_44 < (int)local_50[3]) {
    do {
      FUN_140128f82(param_2,&local_58,(longlong)iStack_64 * 0x30 + *local_80,0);
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1460d3c16 FUN_1460d3c16 body=170 status=ok
// SIG undefined FUN_1460d3c16(void)

void FUN_1460d3c16(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_d8 [44];
  undefined4 local_ac;
  undefined1 local_a8 [136];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_20 = 0x1100000000;
  local_ac = 0;
  (**(code **)(*param_1 + 0x30))(param_1,local_a8);
  lVar4 = FUN_14486d71a(local_a8);
  lVar3 = param_1[2];
  if (lVar3 != lVar4) {
    param_1[2] = lVar4;
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
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d3cc2 FUN_1460d3cc2 body=458 status=ok
// SIG undefined FUN_1460d3cc2(void)

void FUN_1460d3cc2(longlong param_1,longlong param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *param_3;
  iVar3 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar3 + 1U) {
    FUN_14738ac8a(param_2,iVar3);
  }
  *(ulonglong *)(param_2 + (longlong)iVar3 * 8) = (ulonglong)((uVar2 & 0xff) << 8) | 0x5000040000;
  uVar2 = *param_3;
  *param_3 = uVar2 + 0x10;
  iVar3 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar3 + 1U) {
    FUN_14738ac8a(param_2,iVar3);
  }
  *(ulonglong *)(param_2 + (longlong)iVar3 * 8) =
       (ulonglong)((uVar2 + 0x10 & 0xff) << 8) | 0x5001030000;
  uVar2 = *param_3;
  *param_3 = uVar2 + 0x10;
  iVar3 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar3 + 1U) {
    FUN_14738ac8a(param_2,iVar3);
  }
  *(ulonglong *)(param_2 + (longlong)iVar3 * 8) =
       (ulonglong)((uVar2 + 0x10 & 0xff) << 8) | 0x5002040000;
  uVar2 = *param_3;
  *param_3 = uVar2 + 0x10;
  iVar3 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar3 + 1U) {
    FUN_14738ac8a(param_2,iVar3);
  }
  *(ulonglong *)(param_2 + (longlong)iVar3 * 8) =
       (ulonglong)((uVar2 + 0x10 & 0xff) << 8) | 0x5004040000;
  uVar2 = *param_3;
  *param_3 = uVar2 + 0x10;
  iVar3 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar3 + 1U) {
    FUN_14738ac8a(param_2,iVar3);
  }
  *(ulonglong *)(param_2 + (longlong)iVar3 * 8) =
       (ulonglong)((uVar2 + 0x10 & 0xff) << 8) | 0x5003040000;
  *param_3 = *param_3 + 0x10;
  bVar1 = *(byte *)(param_1 + 0x18);
  iVar3 = *(int *)(param_2 + 0x88);
  *(uint *)(param_2 + 0x88) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x8c) < iVar3 + 1U) {
    FUN_14738ac8a(param_2,iVar3);
  }
  *(ulonglong *)(param_2 + (longlong)iVar3 * 8) = (ulonglong)bVar1 << 0x24 | 0x5040001;
  return;
}



// FUNCTION 1460d3e8c FUN_1460d3e8c body=129 status=ok
// SIG undefined FUN_1460d3e8c(void)

undefined8 * FUN_1460d3e8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b525c10;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_1460d3f0e(param_1 + 0xc,0);
  FUN_1460d3f0e(param_1 + 0x4e,1);
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  return param_1;
}



// FUNCTION 1460d3f0e FUN_1460d3f0e body=500 status=ok
// SIG undefined FUN_1460d3f0e(void)

undefined8 * FUN_1460d3f0e(undefined8 *param_1,undefined1 param_2)

{
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
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = 2;
  *param_1 = &PTR_FUN_14b525a20;
  param_1[0xd] = &PTR_FUN_14b5259c0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_144a787a6(param_1 + 0xe,&DAT_14cb99c10);
  FUN_144a787a6(param_1 + 0x10,&DAT_14cb99c10);
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x13] = &PTR_FUN_14b5259c0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  FUN_144a787a6(param_1 + 0x14,&DAT_14cb99c20);
  FUN_144a787a6(param_1 + 0x16,&DAT_14cb99c20);
  *(undefined1 *)(param_1 + 0x18) = 2;
  param_1[0x19] = &PTR_FUN_14b5259c0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_144a787a6(param_1 + 0x1a,&DAT_14cb99c30);
  FUN_144a787a6(param_1 + 0x1c,&DAT_14cb99c30);
  *(undefined1 *)(param_1 + 0x1e) = 3;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x165) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  *(undefined1 *)((longlong)param_1 + 0x16d) = param_2;
  return param_1;
}



// FUNCTION 1460d410e FUN_1460d410e body=697 status=ok
// SIG undefined FUN_1460d410e(void)

undefined8 * FUN_1460d410e(undefined8 *param_1)

{
  FUN_14064ffa8();
  *param_1 = &PTR_FUN_14b79ddf0;
  param_1[0x72] = &PTR_FUN_14b79e460;
  param_1[0x73] = &PTR_FUN_14b79e480;
  param_1[0x74] = &PTR_FUN_14b79e4b0;
  param_1[0x75] = &PTR_FUN_14b79e4c0;
  param_1[0x76] = &PTR_FUN_14b79e530;
  param_1[0x77] = &PTR_FUN_14b79e560;
  param_1[0x78] = &PTR_FUN_14b79e590;
  param_1[0x7f] = &PTR_FUN_14b79e640;
  param_1[0x80] = &PTR_FUN_14b79e6b0;
  param_1[0x81] = &PTR_FUN_14b79e720;
  param_1[0x82] = &PTR_FUN_14b79e750;
  param_1[0x83] = &PTR_FUN_14b79e790;
  param_1[0x84] = &PTR_FUN_14b79e830;
  param_1[0x85] = &PTR_FUN_14b79e850;
  param_1[0x89] = &PTR_FUN_14b79e870;
  param_1[0x8a] = &PTR_FUN_14b79e930;
  param_1[0x8b] = &PTR_FUN_14b79e9b0;
  param_1[0x8c] = &PTR_FUN_14b79ea00;
  param_1[0x8d] = &PTR_FUN_14b79ea40;
  param_1[0x8e] = &PTR_FUN_14b79ea60;
  param_1[0x8f] = &PTR_FUN_14b79ea80;
  param_1[0x90] = &PTR_FUN_14b79eaa0;
  param_1[0x91] = &PTR_FUN_14b79eac0;
  param_1[0x92] = &PTR_FUN_14b79eae0;
  param_1[0x93] = &PTR_FUN_14b79eb00;
  param_1[0x94] = &PTR_FUN_14b79eb20;
  param_1[0x95] = &PTR_FUN_14b79eb40;
  param_1[0x96] = &PTR_FUN_14b79eb60;
  param_1[0x34b] = &PTR_FUN_14b79eb80;
  param_1[0x352] = &PTR_FUN_14b79eb90;
  param_1[0x353] = &PTR_FUN_14b79ebd0;
  param_1[0x354] = &PTR_FUN_14b79ec10;
  param_1[0x355] = &PTR_FUN_14b79ec60;
  param_1[0x356] = &PTR_FUN_14b79ec90;
  param_1[0x359] = &PTR_FUN_14b79ecd0;
  param_1[0x35a] = &PTR_FUN_14b79ece0;
  param_1[0x35b] = &PTR_FUN_14b79ed10;
  param_1[0x35c] = &PTR_FUN_14b79edb0;
  param_1[0x4c5] = 0;
  param_1[0x4c3] = 0;
  param_1[0x4c4] = 0;
  param_1[0x4c1] = 0;
  param_1[0x4c2] = 0;
  param_1[0x4bf] = 0;
  param_1[0x4c0] = 0;
  *(undefined4 *)(param_1 + 0x4c6) = 2;
  param_1[0x4d1] = 0;
  *(undefined4 *)(param_1 + 0x4d2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2634) = 0;
  *(undefined8 *)((longlong)param_1 + 0x263c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2644) = 0;
  *(undefined8 *)((longlong)param_1 + 0x264c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2654) = 0;
  *(undefined8 *)((longlong)param_1 + 0x265c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2664) = 0;
  *(undefined8 *)((longlong)param_1 + 0x266c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2674) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2694) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x269c) = 0;
  param_1[0x4d5] = 0;
  *(undefined4 *)(param_1 + 0x4d6) = 0;
  param_1[0x4d7] = 0;
  param_1[0x4d8] = 0;
  return param_1;
}



// FUNCTION 1460d43c8 FUN_1460d43c8 body=188 status=ok
// SIG undefined FUN_1460d43c8(void)

int * FUN_1460d43c8(longlong *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar2 * 0x14);
        if (*piVar1 == *param_3) {
          if (piVar1 != (int *)0x0) goto LAB_1460d4418;
          break;
        }
        iVar2 = piVar1[3];
      } while (iVar2 != -1);
    }
  }
  local_28 = param_3;
  FUN_1460d4486(param_1,&local_1c,param_2);
  piVar1 = (int *)(*param_1 + (longlong)local_1c * 0x14);
LAB_1460d4418:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return piVar1 + 1;
}



// FUNCTION 1460d4486 FUN_1460d4486 body=272 status=ok
// SIG undefined FUN_1460d4486(void)

undefined4 * FUN_1460d4486(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1460d4622(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 1) = 0xffffffff;
  local_40[3] = 0xffffffff;
  cVar1 = FUN_1460d4598(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_40[4] = param_3;
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      local_40[3] = *(undefined4 *)
                     (lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4);
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1460d470a(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460d4598 FUN_1460d4598 body=137 status=ok
// SIG undefined FUN_1460d4598(void)

undefined8 FUN_1460d4598(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
          FUN_14692839a(param_1,*param_4);
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



// FUNCTION 1460d4622 FUN_1460d4622 body=231 status=ok
// SIG undefined FUN_1460d4622(void)

int * FUN_1460d4622(longlong *param_1,int *param_2)

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



// FUNCTION 1460d470a FUN_1460d470a body=428 status=ok
// SIG undefined FUN_1460d470a(void)

void FUN_1460d470a(longlong *param_1)

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



// FUNCTION 1460d48b8 FUN_1460d48b8 body=332 status=ok
// SIG undefined FUN_1460d48b8(void)

void FUN_1460d48b8(longlong *param_1,uint *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  
  if ((~*param_2 & 0x3000000) == 0) {
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_141518130(param_1,iVar1);
    }
    lVar2 = *param_1;
    puVar6 = param_2;
    puVar8 = (undefined8 *)(lVar2 + (longlong)iVar1 * 0xa0);
    for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar8 = *(undefined8 *)puVar6;
      puVar6 = puVar6 + 2;
      puVar8 = puVar8 + 1;
    }
    lVar2 = lVar2 + (longlong)iVar1 * 0xa0;
    *(uint *)(lVar2 + 0x48) = param_2[0x12];
    *(undefined8 *)(lVar2 + 0x70) = 0;
    *(undefined4 *)(lVar2 + 0x78) = 0;
    *(undefined8 *)(lVar2 + 0x50) = 0;
    *(undefined8 *)(lVar2 + 0x58) = 0;
    *(undefined8 *)(lVar2 + 0x7c) = 0xffffffff00000080;
    *(undefined4 *)(lVar2 + 0x84) = 0;
    *(undefined8 *)(lVar2 + 0x90) = 0;
    *(undefined4 *)(lVar2 + 0x98) = 0;
    FUN_14058acb2((undefined8 *)(lVar2 + 0x50),param_2 + 0x14);
    FUN_1415d68b8(param_1,param_2);
    return;
  }
  if ((*param_2 >> 0x18 & 1) == 0) {
    plVar5 = param_1 + 4;
    uVar7 = (ulonglong)(int)param_1[5];
    uVar3 = (int)param_1[5] + 1;
    *(uint *)(param_1 + 5) = uVar3;
    if (uVar3 <= *(uint *)((longlong)param_1 + 0x2c)) goto LAB_1460d499e;
  }
  else {
    plVar5 = param_1 + 2;
    uVar7 = (ulonglong)(int)param_1[3];
    uVar3 = (int)param_1[3] + 1;
    *(uint *)(param_1 + 3) = uVar3;
    if (uVar3 <= *(uint *)((longlong)param_1 + 0x1c)) goto LAB_1460d499e;
  }
  FUN_141518130(plVar5,uVar7 & 0xffffffff);
LAB_1460d499e:
  lVar2 = *plVar5;
  puVar6 = param_2;
  puVar8 = (undefined8 *)(lVar2 + uVar7 * 0xa0);
  for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar8 = *(undefined8 *)puVar6;
    puVar6 = puVar6 + 2;
    puVar8 = puVar8 + 1;
  }
  lVar2 = lVar2 + uVar7 * 0xa0;
  *(uint *)(lVar2 + 0x48) = param_2[0x12];
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined4 *)(lVar2 + 0x78) = 0;
  *(undefined8 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x58) = 0;
  *(undefined8 *)(lVar2 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)(lVar2 + 0x84) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined4 *)(lVar2 + 0x98) = 0;
  FUN_14058acb2((undefined8 *)(lVar2 + 0x50),param_2 + 0x14);
  return;
}



// FUNCTION 1460d4a04 FUN_1460d4a04 body=292 status=ok
// SIG undefined FUN_1460d4a04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460d4a04(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8bb28) {
    FUN_144b3d300(&DAT_14ca8bb28);
    if (DAT_14ca8bb28 == -1) {
      FUN_145a5e5ac();
      FUN_1460d4b28();
      FUN_140db5666(&DAT_14ca8ba80,0,&DAT_14ca8ba18,L"FGenerateMipsCS",
                    L"/Engine/Private/ComputeGenerateMips.usf",L"MainCS",5,4,FUN_14741bc92,
                    FUN_14741bc32,&LAB_14741bc2e,&LAB_14741bc2a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca91638);
      _DAT_14ca8ba80 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f2e0f);
      _Init_thread_footer(&DAT_14ca8bb28);
    }
  }
  return &DAT_14ca8ba80;
}



// FUNCTION 1460d4b28 FUN_1460d4b28 body=205 status=ok
// SIG undefined FUN_1460d4b28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460d4b28(void)

{
  if ((DAT_14ca8ba7f & 2) == 0) {
    DAT_14ca8ba7f = DAT_14ca8ba7f | 2;
    _DAT_14ca8ba20 = L"FGenerateMipsCS";
    _DAT_14ca8ba38 = FUN_146826540;
    _DAT_14ca8ba40 = FUN_146825d77;
    _DAT_14ca8ba48 = FUN_146825fd6;
    _DAT_14ca8ba50 = FUN_1407e02ea;
    _DAT_14ca8ba58 = FUN_146826273;
    _DAT_14ca8ba30 = FUN_14741bbfa;
    _DAT_14ca8ba70 = 0xffffffff000000e0;
    _DAT_14ca8ba78 = 8;
    DAT_14ca8ba7c = 0;
    _DAT_14ca8ba60 = &LAB_14741bc26;
    FUN_1460d4bf6();
    FUN_1407e00cc(&DAT_14ca8ba18);
    return;
  }
  return;
}



// FUNCTION 1460d4bf6 FUN_1460d4bf6 body=133 status=ok
// SIG undefined FUN_1460d4bf6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460d4bf6(void)

{
  _DAT_14ca942b0 = L"BASE";
  DAT_14ca942da = 4;
  FUN_140b35ae4();
  _DAT_14ca942c0 = DAT_14ca8ba28;
  _DAT_14ca942b8 = &DAT_14ca8c6c8;
  _DAT_14ca942c8 = &LAB_14682652b;
  DAT_14ca8ba28 = &DAT_14ca942b0;
  DAT_14ca8ba7d = DAT_14ca8ba7d + '\x01';
  _DAT_14ca942d0 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8ba7e = DAT_14ca8ba7e + '\x01';
  }
  return;
}



// FUNCTION 1460d4c84 FUN_1460d4c84 body=307 status=ok
// SIG undefined FUN_1460d4c84(void)

undefined8 * FUN_1460d4c84(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14ae19580;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(uint *)((longlong)param_1 + 0x6c) = *(uint *)((longlong)param_1 + 0x6c) & 0xffffffc0 | 0x13;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe9) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined2 *)(param_1 + 0x23) = 0xffff;
  *(undefined2 *)(param_1 + 0x24) = 0xffff;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0xffffffff;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  return param_1;
}



// FUNCTION 1460d4dc2 FUN_1460d4dc2 body=304 status=ok
// SIG undefined FUN_1460d4dc2(void)

undefined8 * FUN_1460d4dc2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_144a0768c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 2;
  *param_1 = &PTR_FUN_14aea7170;
  param_1[5] = &PTR_FUN_14aea7410;
  param_1[0xc] = 0;
  param_1[0xe] = &PTR_LAB_14aeb5620;
  param_1[0xf] = &LAB_14841be6c;
  param_1[10] = &LAB_14841be3a;
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14aeb5620;
  param_1[0x17] = &LAB_14841be70;
  param_1[0x12] = &LAB_14841be3a;
  param_1[0x1c] = 0;
  param_1[0x1e] = &PTR_LAB_14aeb5640;
  param_1[0x1f] = &LAB_14841be74;
  param_1[0x1a] = &LAB_14841be56;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = DAT_14c8463f8;
  param_1[0x26] = DAT_14c8463f0;
  param_1[0x27] = uVar1;
  uVar1 = DAT_14c8463f8;
  param_1[0x2a] = DAT_14c8463f0;
  param_1[0x2b] = uVar1;
  uVar1 = DAT_14c8463f8;
  param_1[0x28] = DAT_14c8463f0;
  param_1[0x29] = uVar1;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x3ff00000;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0x3ff0000000000000;
  param_1[0x41] = 0x3ff0000000000000;
  param_1[0x42] = 0x3ff0000000000000;
  param_1[0x43] = 0;
  return param_1;
}



// FUNCTION 1460d4f12 FUN_1460d4f12 body=307 status=ok
// SIG undefined FUN_1460d4f12(void)

undefined8 * FUN_1460d4f12(undefined8 *param_1)

{
  FUN_1459a8af2();
  *param_1 = &PTR_FUN_14b930980;
  param_1[0x72] = &PTR_FUN_14b931080;
  param_1[0x73] = &PTR_FUN_14b931100;
  param_1[0x74] = &PTR_FUN_14b931170;
  param_1[0x75] = &PTR_FUN_14b931198;
  param_1[0x76] = &PTR_FUN_14b9311b0;
  param_1[0xa4] = &PTR_FUN_14b9311e0;
  param_1[0xa5] = &PTR_FUN_14b931230;
  param_1[0xa6] = &PTR_FUN_14b931260;
  param_1[0xa7] = &PTR_FUN_14b931290;
  param_1[0xa8] = &PTR_FUN_14b9312a8;
  param_1[0x118] = &PTR_FUN_14b9312c0;
  param_1[0x119] = &PTR_FUN_14b9312f0;
  param_1[0x11a] = &PTR_FUN_14b9313b0;
  param_1[0x11b] = &PTR_FUN_14b9314a0;
  param_1[0x11c] = &PTR_FUN_14b9314d0;
  param_1[0x11d] = &PTR_FUN_14b931510;
  *(undefined4 *)((longlong)param_1 + 0xbf4) = 0;
  *(undefined1 *)(param_1 + 0x17f) = 0;
  *(undefined1 *)(param_1 + 0x17e) = 0;
  param_1[0x17c] = 0;
  param_1[0x17d] = 0;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xf9 | 2;
  *(byte *)((longlong)param_1 + 0xa34) = *(byte *)((longlong)param_1 + 0xa34) & 0xfb;
  return param_1;
}


