// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145ce6904 FUN_145ce6904 body=68 status=ok
// SIG undefined FUN_145ce6904(void)

void FUN_145ce6904(undefined8 param_1)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(800);
  memset(_Dst,0,800);
  FUN_145ce6948(_Dst);
  FUN_140de79e2(param_1,_Dst);
  return;
}



// FUNCTION 145ce6948 FUN_145ce6948 body=198 status=ok
// SIG undefined FUN_145ce6948(void)

undefined8 * FUN_145ce6948(undefined8 *param_1)

{
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8b7070;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xba) = 0;
  FUN_140056680(param_1 + 0x19,&DAT_149dfb77a);
  FUN_1413f03d2(param_1 + 0x1b);
  FUN_14124e07a(param_1 + 0x2e);
  FUN_14124e07a(param_1 + 0x3e);
  FUN_14124e07a(param_1 + 0x4e);
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x304) = 0;
  *(undefined1 *)(param_1 + 0x61) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined2 *)(param_1 + 0x62) = 0;
  *(undefined1 *)((longlong)param_1 + 0x314) = 1;
  *(undefined4 *)(param_1 + 99) = 0;
  return param_1;
}



// FUNCTION 145ce6a0e FUN_145ce6a0e body=40 status=ok
// SIG undefined FUN_145ce6a0e(void)

undefined8 FUN_145ce6a0e(undefined8 param_1,int param_2)

{
  FUN_145ce6a36();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ce6a36 FUN_145ce6a36 body=93 status=ok
// SIG undefined FUN_145ce6a36(void)

void FUN_145ce6a36(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc15a40;
  if (param_1[0x12] != 0) {
    FUN_140113f3a();
    param_1[0x12] = 0;
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ce6a94 FUN_145ce6a94 body=40 status=ok
// SIG undefined FUN_145ce6a94(void)

undefined8 FUN_145ce6a94(undefined8 param_1,int param_2)

{
  FUN_145ce6abc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ce6abc FUN_145ce6abc body=93 status=ok
// SIG undefined FUN_145ce6abc(void)

void FUN_145ce6abc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc396c0;
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
  FUN_140fed60e(param_1);
  return;
}



// FUNCTION 145ce6b24 FUN_145ce6b24 body=122 status=ok
// SIG undefined FUN_145ce6b24(void)

undefined8 * FUN_145ce6b24(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_140f8b11c();
  *param_1 = &PTR_FUN_14bd53460;
  param_1[7] = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14bd58c40;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x19) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x21) = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x4c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x54) = 0;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar2) && (param_1[5] = puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 145ce6b9e FUN_145ce6b9e body=287 status=ok
// SIG undefined FUN_145ce6b9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ce6b9e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca09b28) {
    FUN_144b3d300(&DAT_14ca09b28);
    if (DAT_14ca09b28 == -1) {
      FUN_145ce6cbe();
      FUN_140db5666(&DAT_14ca09a80,2,&DAT_14ca09a18,
                    L"TMobileBasePassPSFNoLightMapPolicyLOCAL_LIGHTS_DISABLED",
                    L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14723e6ee,
                    FUN_14723e6c6,FUN_14176f3c4,&LAB_14723e6c2,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca09a80 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de82c0);
      _Init_thread_footer(&DAT_14ca09b28);
    }
  }
  return &DAT_14ca09a80;
}



// FUNCTION 145ce6cbe FUN_145ce6cbe body=205 status=ok
// SIG undefined FUN_145ce6cbe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce6cbe(void)

{
  if ((DAT_14ca09a7f & 2) == 0) {
    DAT_14ca09a7f = DAT_14ca09a7f | 2;
    _DAT_14ca09a20 = L"TMobileBasePassPSFNoLightMapPolicyLOCAL_LIGHTS_DISABLED";
    _DAT_14ca09a38 = FUN_146826540;
    _DAT_14ca09a40 = FUN_146825d77;
    _DAT_14ca09a48 = FUN_146825fd6;
    _DAT_14ca09a50 = FUN_1407e02ea;
    _DAT_14ca09a58 = FUN_146826273;
    _DAT_14ca09a30 = FUN_14723e67a;
    _DAT_14ca09a70 = 0xffffffff00000118;
    _DAT_14ca09a78 = 8;
    DAT_14ca09a7c = 0;
    _DAT_14ca09a60 = &LAB_14723e6be;
    FUN_145ce6d8c();
    FUN_1407e00cc(&DAT_14ca09a18);
    return;
  }
  return;
}



// FUNCTION 145ce6d8c FUN_145ce6d8c body=133 status=ok
// SIG undefined FUN_145ce6d8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce6d8c(void)

{
  _DAT_14ca0ede0 = L"BASE";
  DAT_14ca0ee0a = 4;
  FUN_145ce6e12();
  _DAT_14ca0edf0 = DAT_14ca09a28;
  _DAT_14ca0ede8 = &DAT_14ca0ee10;
  _DAT_14ca0edf8 = &LAB_14682652b;
  DAT_14ca09a28 = &DAT_14ca0ede0;
  DAT_14ca09a7d = DAT_14ca09a7d + '\x01';
  _DAT_14ca0ee00 = 0x100000000;
  if (DAT_14ca0ee74 != '\0') {
    DAT_14ca09a7e = DAT_14ca09a7e + '\x01';
  }
  return;
}



// FUNCTION 145ce6e12 FUN_145ce6e12 body=200 status=ok
// SIG undefined FUN_145ce6e12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce6e12(void)

{
  if ((DAT_14ca0ee77 & 2) != 0) {
    return;
  }
  DAT_14ca0ee77 = DAT_14ca0ee77 | 2;
  _DAT_14ca0ee18 = L"TMobileBasePassPSBaseType";
  _DAT_14ca0ee30 = FUN_146826540;
  _DAT_14ca0ee38 = FUN_146825d77;
  _DAT_14ca0ee40 = FUN_146825fd6;
  _DAT_14ca0ee48 = FUN_1407e02ea;
  _DAT_14ca0ee50 = FUN_146826273;
  _DAT_14ca0ee28 = FUN_14724b8c4;
  _DAT_14ca0ee68 = 0xffffffff00000118;
  _DAT_14ca0ee70 = 8;
  DAT_14ca0ee74 = 0;
  _DAT_14ca0ee58 = &LAB_14724b908;
  FUN_145ce6eda();
  FUN_1407e00cc(&DAT_14ca0ee10);
  return;
}



// FUNCTION 145ce6eda FUN_145ce6eda body=133 status=ok
// SIG undefined FUN_145ce6eda(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce6eda(void)

{
  _DAT_14ca0ee78 = L"BASE";
  DAT_14ca0eea2 = 4;
  FUN_145ce6f60();
  _DAT_14ca0ee88 = DAT_14ca0ee20;
  _DAT_14ca0ee80 = &DAT_14ca0eea8;
  _DAT_14ca0ee90 = &LAB_14682652b;
  DAT_14ca0ee20 = &DAT_14ca0ee78;
  DAT_14ca0ee75 = DAT_14ca0ee75 + '\x01';
  _DAT_14ca0ee98 = 0x100000000;
  if (DAT_14ca0ef0c != '\0') {
    DAT_14ca0ee76 = DAT_14ca0ee76 + '\x01';
  }
  return;
}



// FUNCTION 145ce6f60 FUN_145ce6f60 body=210 status=ok
// SIG undefined FUN_145ce6f60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce6f60(void)

{
  if ((DAT_14ca0ef0f & 2) == 0) {
    DAT_14ca0ef0f = DAT_14ca0ef0f | 2;
    _DAT_14ca0eeb0 = L"TMobileBasePassPSPolicyParamType";
    _DAT_14ca0eec8 = FUN_146826540;
    _DAT_14ca0eed0 = FUN_146825d77;
    _DAT_14ca0eed8 = FUN_146825fd6;
    _DAT_14ca0eee0 = FUN_1407e02ea;
    _DAT_14ca0eee8 = FUN_146826273;
    _DAT_14ca0eec0 = FUN_14724b90c;
    _DAT_14ca0ef00 = 0xffffffff00000118;
    _DAT_14ca0ef08 = 8;
    DAT_14ca0ef0c = 0;
    _DAT_14ca0eef0 = &LAB_14724b950;
    FUN_145ce7032();
    FUN_145ce7184();
    FUN_1407e00cc(&DAT_14ca0eea8);
    return;
  }
  return;
}



// FUNCTION 145ce7032 FUN_145ce7032 body=121 status=ok
// SIG undefined FUN_145ce7032(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce7032(void)

{
  FUN_145ce70ac();
  _DAT_14ca0ef10 = L"MobileDirectionLightBufferParam";
  DAT_14ca0ef3a = FUN_140850cc5();
  _DAT_14ca0ef18 = FUN_14106a12a();
  _DAT_14ca0ef28 = &LAB_14682652b;
  _DAT_14ca0ef30 = 0x10000010e;
  _DAT_14ca0ef38 = 0;
  _DAT_14ca0ef20 = DAT_14ca0eeb8;
  DAT_14ca0eeb8 = &DAT_14ca0ef10;
  return;
}



// FUNCTION 145ce70ac FUN_145ce70ac body=216 status=ok
// SIG undefined FUN_145ce70ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce70ac(void)

{
  _DAT_14ca0ef70 = L"UseCSMParameter";
  DAT_14ca0ef9a = FUN_140850cc5();
  _DAT_14ca0ef78 = FUN_140ec6960();
  _DAT_14ca0ef88 = &LAB_14682652b;
  _DAT_14ca0ef90 = 0x100000112;
  _DAT_14ca0ef98 = 0;
  _DAT_14ca0ef80 = DAT_14ca0eeb8;
  DAT_14ca0eeb8 = &DAT_14ca0ef70;
  _DAT_14ca0ef40 = L"ReflectionParameter";
  DAT_14ca0ef6a = FUN_140850cc5();
  _DAT_14ca0ef48 = FUN_14106a12a();
  _DAT_14ca0ef58 = &LAB_14682652b;
  _DAT_14ca0ef60 = 0x100000110;
  _DAT_14ca0ef68 = 0;
  _DAT_14ca0ef50 = DAT_14ca0eeb8;
  DAT_14ca0eeb8 = &DAT_14ca0ef40;
  return;
}



// FUNCTION 145ce7184 FUN_145ce7184 body=225 status=ok
// SIG undefined FUN_145ce7184(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce7184(void)

{
  _DAT_14ca0efa0 = L"BASE";
  DAT_14ca0efca = 4;
  _DAT_14ca0efa8 = FUN_1411cad6c();
  _DAT_14ca0efb0 = DAT_14ca0eeb8;
  _DAT_14ca0efb8 = &LAB_14682652b;
  DAT_14ca0eeb8 = &DAT_14ca0efa0;
  DAT_14ca0ef0d = DAT_14ca0ef0d + '\x01';
  _DAT_14ca0efc0 = &DAT_100000108;
  if (*(char *)(_DAT_14ca0efa8 + 100) != '\0') {
    DAT_14ca0ef0e = DAT_14ca0ef0e + '\x01';
  }
  _DAT_14ca0efd0 = L"BASE";
  DAT_14ca0effa = 4;
  _DAT_14ca0efd8 = FUN_141092e92();
  _DAT_14ca0efe0 = DAT_14ca0eeb8;
  _DAT_14ca0efe8 = &LAB_14682652b;
  DAT_14ca0eeb8 = &DAT_14ca0efd0;
  DAT_14ca0ef0d = DAT_14ca0ef0d + '\x01';
  _DAT_14ca0eff0 = 0x100000000;
  if (*(char *)(_DAT_14ca0efd8 + 100) != '\0') {
    DAT_14ca0ef0e = DAT_14ca0ef0e + '\x01';
  }
  return;
}



// FUNCTION 145ce7266 FUN_145ce7266 body=287 status=ok
// SIG undefined FUN_145ce7266(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ce7266(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0a340) {
    FUN_144b3d300(&DAT_14ca0a340);
    if (DAT_14ca0a340 == -1) {
      FUN_145ce7386();
      FUN_140db5666(&DAT_14ca0a298,2,&DAT_14ca0a230,
                    L"TMobileBasePassPSTLightMapPolicyLQLOCAL_LIGHTS_DISABLED",
                    L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14723ecc2,
                    FUN_14723ec9a,FUN_14176f6d6,&LAB_14723ec96,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0a298 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de8339);
      _Init_thread_footer(&DAT_14ca0a340);
    }
  }
  return &DAT_14ca0a298;
}



// FUNCTION 145ce7386 FUN_145ce7386 body=205 status=ok
// SIG undefined FUN_145ce7386(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce7386(void)

{
  if ((DAT_14ca0a297 & 2) == 0) {
    DAT_14ca0a297 = DAT_14ca0a297 | 2;
    _DAT_14ca0a238 = L"TMobileBasePassPSTLightMapPolicyLQLOCAL_LIGHTS_DISABLED";
    _DAT_14ca0a250 = FUN_146826540;
    _DAT_14ca0a258 = FUN_146825d77;
    _DAT_14ca0a260 = FUN_146825fd6;
    _DAT_14ca0a268 = FUN_1407e02ea;
    _DAT_14ca0a270 = FUN_146826273;
    _DAT_14ca0a248 = FUN_14723ec4e;
    _DAT_14ca0a288 = 0xffffffff00000118;
    _DAT_14ca0a290 = 8;
    DAT_14ca0a294 = 0;
    _DAT_14ca0a278 = &LAB_14723ec92;
    FUN_145ce7454();
    FUN_1407e00cc(&DAT_14ca0a230);
    return;
  }
  return;
}



// FUNCTION 145ce7454 FUN_145ce7454 body=133 status=ok
// SIG undefined FUN_145ce7454(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce7454(void)

{
  _DAT_14ca0f280 = L"BASE";
  DAT_14ca0f2aa = 4;
  FUN_145ce74da();
  _DAT_14ca0f290 = DAT_14ca0a240;
  _DAT_14ca0f288 = &DAT_14ca0f2b0;
  _DAT_14ca0f298 = &LAB_14682652b;
  DAT_14ca0a240 = &DAT_14ca0f280;
  DAT_14ca0a295 = DAT_14ca0a295 + '\x01';
  _DAT_14ca0f2a0 = 0x100000000;
  if (DAT_14ca0f314 != '\0') {
    DAT_14ca0a296 = DAT_14ca0a296 + '\x01';
  }
  return;
}



// FUNCTION 145ce74da FUN_145ce74da body=200 status=ok
// SIG undefined FUN_145ce74da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce74da(void)

{
  if ((DAT_14ca0f317 & 2) != 0) {
    return;
  }
  DAT_14ca0f317 = DAT_14ca0f317 | 2;
  _DAT_14ca0f2b8 = L"TMobileBasePassPSBaseType";
  _DAT_14ca0f2d0 = FUN_146826540;
  _DAT_14ca0f2d8 = FUN_146825d77;
  _DAT_14ca0f2e0 = FUN_146825fd6;
  _DAT_14ca0f2e8 = FUN_1407e02ea;
  _DAT_14ca0f2f0 = FUN_146826273;
  _DAT_14ca0f2c8 = FUN_14724bbbc;
  _DAT_14ca0f308 = 0xffffffff00000118;
  _DAT_14ca0f310 = 8;
  DAT_14ca0f314 = 0;
  _DAT_14ca0f2f8 = &LAB_14724bc00;
  FUN_145ce75a2();
  FUN_1407e00cc(&DAT_14ca0f2b0);
  return;
}



// FUNCTION 145ce75a2 FUN_145ce75a2 body=133 status=ok
// SIG undefined FUN_145ce75a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce75a2(void)

{
  _DAT_14ca0f318 = L"BASE";
  DAT_14ca0f342 = 4;
  FUN_145ce7628();
  _DAT_14ca0f328 = DAT_14ca0f2c0;
  _DAT_14ca0f320 = &DAT_14ca0f348;
  _DAT_14ca0f330 = &LAB_14682652b;
  DAT_14ca0f2c0 = &DAT_14ca0f318;
  DAT_14ca0f315 = DAT_14ca0f315 + '\x01';
  _DAT_14ca0f338 = 0x100000000;
  if (DAT_14ca0f3ac != '\0') {
    DAT_14ca0f316 = DAT_14ca0f316 + '\x01';
  }
  return;
}



// FUNCTION 145ce7628 FUN_145ce7628 body=210 status=ok
// SIG undefined FUN_145ce7628(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce7628(void)

{
  if ((DAT_14ca0f3af & 2) == 0) {
    DAT_14ca0f3af = DAT_14ca0f3af | 2;
    _DAT_14ca0f350 = L"TMobileBasePassPSPolicyParamType";
    _DAT_14ca0f368 = FUN_146826540;
    _DAT_14ca0f370 = FUN_146825d77;
    _DAT_14ca0f378 = FUN_146825fd6;
    _DAT_14ca0f380 = FUN_1407e02ea;
    _DAT_14ca0f388 = FUN_146826273;
    _DAT_14ca0f360 = FUN_14724bc04;
    _DAT_14ca0f3a0 = 0xffffffff00000118;
    _DAT_14ca0f3a8 = 8;
    DAT_14ca0f3ac = 0;
    _DAT_14ca0f390 = &LAB_14724bc48;
    FUN_145ce76fa();
    FUN_145ce784c();
    FUN_1407e00cc(&DAT_14ca0f348);
    return;
  }
  return;
}



// FUNCTION 145ce76fa FUN_145ce76fa body=121 status=ok
// SIG undefined FUN_145ce76fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce76fa(void)

{
  FUN_145ce7774();
  _DAT_14ca0f3b0 = L"MobileDirectionLightBufferParam";
  DAT_14ca0f3da = FUN_140850cc5();
  _DAT_14ca0f3b8 = FUN_14106a12a();
  _DAT_14ca0f3c8 = &LAB_14682652b;
  _DAT_14ca0f3d0 = 0x10000010e;
  _DAT_14ca0f3d8 = 0;
  _DAT_14ca0f3c0 = DAT_14ca0f358;
  DAT_14ca0f358 = &DAT_14ca0f3b0;
  return;
}



// FUNCTION 145ce7774 FUN_145ce7774 body=216 status=ok
// SIG undefined FUN_145ce7774(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce7774(void)

{
  _DAT_14ca0f410 = L"UseCSMParameter";
  DAT_14ca0f43a = FUN_140850cc5();
  _DAT_14ca0f418 = FUN_140ec6960();
  _DAT_14ca0f428 = &LAB_14682652b;
  _DAT_14ca0f430 = 0x100000112;
  _DAT_14ca0f438 = 0;
  _DAT_14ca0f420 = DAT_14ca0f358;
  DAT_14ca0f358 = &DAT_14ca0f410;
  _DAT_14ca0f3e0 = L"ReflectionParameter";
  DAT_14ca0f40a = FUN_140850cc5();
  _DAT_14ca0f3e8 = FUN_14106a12a();
  _DAT_14ca0f3f8 = &LAB_14682652b;
  _DAT_14ca0f400 = 0x100000110;
  _DAT_14ca0f408 = 0;
  _DAT_14ca0f3f0 = DAT_14ca0f358;
  DAT_14ca0f358 = &DAT_14ca0f3e0;
  return;
}



// FUNCTION 145ce784c FUN_145ce784c body=225 status=ok
// SIG undefined FUN_145ce784c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce784c(void)

{
  _DAT_14ca0f440 = L"BASE";
  DAT_14ca0f46a = 4;
  _DAT_14ca0f448 = FUN_1411cad6c();
  _DAT_14ca0f450 = DAT_14ca0f358;
  _DAT_14ca0f458 = &LAB_14682652b;
  DAT_14ca0f358 = &DAT_14ca0f440;
  DAT_14ca0f3ad = DAT_14ca0f3ad + '\x01';
  _DAT_14ca0f460 = &DAT_100000108;
  if (*(char *)(_DAT_14ca0f448 + 100) != '\0') {
    DAT_14ca0f3ae = DAT_14ca0f3ae + '\x01';
  }
  _DAT_14ca0f470 = L"BASE";
  DAT_14ca0f49a = 4;
  _DAT_14ca0f478 = FUN_141092e92();
  _DAT_14ca0f480 = DAT_14ca0f358;
  _DAT_14ca0f488 = &LAB_14682652b;
  DAT_14ca0f358 = &DAT_14ca0f470;
  DAT_14ca0f3ad = DAT_14ca0f3ad + '\x01';
  _DAT_14ca0f490 = 0x100000000;
  if (*(char *)(_DAT_14ca0f478 + 100) != '\0') {
    DAT_14ca0f3ae = DAT_14ca0f3ae + '\x01';
  }
  return;
}



// FUNCTION 145ce792e FUN_145ce792e body=287 status=ok
// SIG undefined FUN_145ce792e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ce792e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0ab58) {
    FUN_144b3d300(&DAT_14ca0ab58);
    if (DAT_14ca0ab58 == -1) {
      FUN_145ce7a4e();
      FUN_140db5666(&DAT_14ca0aab0,2,&DAT_14ca0aa48,
                    L"TMobileBasePassPSFMobileDistanceFieldShadowsAndLQLightMapPolicyLOCAL_LIGHTS_DISABLED"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14723f296,
                    FUN_14723f26e,FUN_14176f9e0,&LAB_14723f26a,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0aab0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de83b3);
      _Init_thread_footer(&DAT_14ca0ab58);
    }
  }
  return &DAT_14ca0aab0;
}



// FUNCTION 145ce7a4e FUN_145ce7a4e body=205 status=ok
// SIG undefined FUN_145ce7a4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce7a4e(void)

{
  if ((DAT_14ca0aaaf & 2) == 0) {
    DAT_14ca0aaaf = DAT_14ca0aaaf | 2;
    _DAT_14ca0aa50 =
         L"TMobileBasePassPSFMobileDistanceFieldShadowsAndLQLightMapPolicyLOCAL_LIGHTS_DISABLED";
    _DAT_14ca0aa68 = FUN_146826540;
    _DAT_14ca0aa70 = FUN_146825d77;
    _DAT_14ca0aa78 = FUN_146825fd6;
    _DAT_14ca0aa80 = FUN_1407e02ea;
    _DAT_14ca0aa88 = FUN_146826273;
    _DAT_14ca0aa60 = FUN_14723f222;
    _DAT_14ca0aaa0 = 0xffffffff00000118;
    _DAT_14ca0aaa8 = 8;
    DAT_14ca0aaac = 0;
    _DAT_14ca0aa90 = &LAB_14723f266;
    FUN_145ce7b1c();
    FUN_1407e00cc(&DAT_14ca0aa48);
    return;
  }
  return;
}



// FUNCTION 145ce7b1c FUN_145ce7b1c body=133 status=ok
// SIG undefined FUN_145ce7b1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce7b1c(void)

{
  _DAT_14ca0f720 = L"BASE";
  DAT_14ca0f74a = 4;
  FUN_145ce7ba2();
  _DAT_14ca0f730 = DAT_14ca0aa58;
  _DAT_14ca0f728 = &DAT_14ca0f750;
  _DAT_14ca0f738 = &LAB_14682652b;
  DAT_14ca0aa58 = &DAT_14ca0f720;
  DAT_14ca0aaad = DAT_14ca0aaad + '\x01';
  _DAT_14ca0f740 = 0x100000000;
  if (DAT_14ca0f7b4 != '\0') {
    DAT_14ca0aaae = DAT_14ca0aaae + '\x01';
  }
  return;
}



// FUNCTION 145ce7ba2 FUN_145ce7ba2 body=200 status=ok
// SIG undefined FUN_145ce7ba2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce7ba2(void)

{
  if ((DAT_14ca0f7b7 & 2) != 0) {
    return;
  }
  DAT_14ca0f7b7 = DAT_14ca0f7b7 | 2;
  _DAT_14ca0f758 = L"TMobileBasePassPSBaseType";
  _DAT_14ca0f770 = FUN_146826540;
  _DAT_14ca0f778 = FUN_146825d77;
  _DAT_14ca0f780 = FUN_146825fd6;
  _DAT_14ca0f788 = FUN_1407e02ea;
  _DAT_14ca0f790 = FUN_146826273;
  _DAT_14ca0f768 = FUN_14724beb4;
  _DAT_14ca0f7a8 = 0xffffffff00000118;
  _DAT_14ca0f7b0 = 8;
  DAT_14ca0f7b4 = 0;
  _DAT_14ca0f798 = &LAB_14724bef8;
  FUN_145ce7c6a();
  FUN_1407e00cc(&DAT_14ca0f750);
  return;
}



// FUNCTION 145ce7c6a FUN_145ce7c6a body=133 status=ok
// SIG undefined FUN_145ce7c6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce7c6a(void)

{
  _DAT_14ca0f7b8 = L"BASE";
  DAT_14ca0f7e2 = 4;
  FUN_145ce7cf0();
  _DAT_14ca0f7c8 = DAT_14ca0f760;
  _DAT_14ca0f7c0 = &DAT_14ca0f7e8;
  _DAT_14ca0f7d0 = &LAB_14682652b;
  DAT_14ca0f760 = &DAT_14ca0f7b8;
  DAT_14ca0f7b5 = DAT_14ca0f7b5 + '\x01';
  _DAT_14ca0f7d8 = 0x100000000;
  if (DAT_14ca0f84c != '\0') {
    DAT_14ca0f7b6 = DAT_14ca0f7b6 + '\x01';
  }
  return;
}



// FUNCTION 145ce7cf0 FUN_145ce7cf0 body=210 status=ok
// SIG undefined FUN_145ce7cf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce7cf0(void)

{
  if ((DAT_14ca0f84f & 2) == 0) {
    DAT_14ca0f84f = DAT_14ca0f84f | 2;
    _DAT_14ca0f7f0 = L"TMobileBasePassPSPolicyParamType";
    _DAT_14ca0f808 = FUN_146826540;
    _DAT_14ca0f810 = FUN_146825d77;
    _DAT_14ca0f818 = FUN_146825fd6;
    _DAT_14ca0f820 = FUN_1407e02ea;
    _DAT_14ca0f828 = FUN_146826273;
    _DAT_14ca0f800 = FUN_14724befc;
    _DAT_14ca0f840 = 0xffffffff00000118;
    _DAT_14ca0f848 = 8;
    DAT_14ca0f84c = 0;
    _DAT_14ca0f830 = &LAB_14724bf40;
    FUN_145ce7dc2();
    FUN_145ce7f14();
    FUN_1407e00cc(&DAT_14ca0f7e8);
    return;
  }
  return;
}



// FUNCTION 145ce7dc2 FUN_145ce7dc2 body=121 status=ok
// SIG undefined FUN_145ce7dc2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce7dc2(void)

{
  FUN_145ce7e3c();
  _DAT_14ca0f850 = L"MobileDirectionLightBufferParam";
  DAT_14ca0f87a = FUN_140850cc5();
  _DAT_14ca0f858 = FUN_14106a12a();
  _DAT_14ca0f868 = &LAB_14682652b;
  _DAT_14ca0f870 = 0x10000010e;
  _DAT_14ca0f878 = 0;
  _DAT_14ca0f860 = DAT_14ca0f7f8;
  DAT_14ca0f7f8 = &DAT_14ca0f850;
  return;
}



// FUNCTION 145ce7e3c FUN_145ce7e3c body=216 status=ok
// SIG undefined FUN_145ce7e3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce7e3c(void)

{
  _DAT_14ca0f8b0 = L"UseCSMParameter";
  DAT_14ca0f8da = FUN_140850cc5();
  _DAT_14ca0f8b8 = FUN_140ec6960();
  _DAT_14ca0f8c8 = &LAB_14682652b;
  _DAT_14ca0f8d0 = 0x100000112;
  _DAT_14ca0f8d8 = 0;
  _DAT_14ca0f8c0 = DAT_14ca0f7f8;
  DAT_14ca0f7f8 = &DAT_14ca0f8b0;
  _DAT_14ca0f880 = L"ReflectionParameter";
  DAT_14ca0f8aa = FUN_140850cc5();
  _DAT_14ca0f888 = FUN_14106a12a();
  _DAT_14ca0f898 = &LAB_14682652b;
  _DAT_14ca0f8a0 = 0x100000110;
  _DAT_14ca0f8a8 = 0;
  _DAT_14ca0f890 = DAT_14ca0f7f8;
  DAT_14ca0f7f8 = &DAT_14ca0f880;
  return;
}



// FUNCTION 145ce7f14 FUN_145ce7f14 body=225 status=ok
// SIG undefined FUN_145ce7f14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce7f14(void)

{
  _DAT_14ca0f8e0 = L"BASE";
  DAT_14ca0f90a = 4;
  _DAT_14ca0f8e8 = FUN_1411cad6c();
  _DAT_14ca0f8f0 = DAT_14ca0f7f8;
  _DAT_14ca0f8f8 = &LAB_14682652b;
  DAT_14ca0f7f8 = &DAT_14ca0f8e0;
  DAT_14ca0f84d = DAT_14ca0f84d + '\x01';
  _DAT_14ca0f900 = &DAT_100000108;
  if (*(char *)(_DAT_14ca0f8e8 + 100) != '\0') {
    DAT_14ca0f84e = DAT_14ca0f84e + '\x01';
  }
  _DAT_14ca0f910 = L"BASE";
  DAT_14ca0f93a = 4;
  _DAT_14ca0f918 = FUN_141092e92();
  _DAT_14ca0f920 = DAT_14ca0f7f8;
  _DAT_14ca0f928 = &LAB_14682652b;
  DAT_14ca0f7f8 = &DAT_14ca0f910;
  DAT_14ca0f84d = DAT_14ca0f84d + '\x01';
  _DAT_14ca0f930 = 0x100000000;
  if (*(char *)(_DAT_14ca0f918 + 100) != '\0') {
    DAT_14ca0f84e = DAT_14ca0f84e + '\x01';
  }
  return;
}



// FUNCTION 145ce7ff6 FUN_145ce7ff6 body=287 status=ok
// SIG undefined FUN_145ce7ff6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ce7ff6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0b370) {
    FUN_144b3d300(&DAT_14ca0b370);
    if (DAT_14ca0b370 == -1) {
      FUN_145ce8116();
      FUN_140db5666(&DAT_14ca0b2c8,2,&DAT_14ca0b260,
                    L"TMobileBasePassPSFMobileDistanceFieldShadowsLightMapAndCSMLightingPolicyLOCAL_LIGHTS_DISABLED"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14723f86a,
                    FUN_14723f842,FUN_14176fcea,&LAB_14723f83e,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0b2c8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de842d);
      _Init_thread_footer(&DAT_14ca0b370);
    }
  }
  return &DAT_14ca0b2c8;
}



// FUNCTION 145ce8116 FUN_145ce8116 body=205 status=ok
// SIG undefined FUN_145ce8116(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce8116(void)

{
  if ((DAT_14ca0b2c7 & 2) == 0) {
    DAT_14ca0b2c7 = DAT_14ca0b2c7 | 2;
    _DAT_14ca0b268 =
         L"TMobileBasePassPSFMobileDistanceFieldShadowsLightMapAndCSMLightingPolicyLOCAL_LIGHTS_DISABLED"
    ;
    _DAT_14ca0b280 = FUN_146826540;
    _DAT_14ca0b288 = FUN_146825d77;
    _DAT_14ca0b290 = FUN_146825fd6;
    _DAT_14ca0b298 = FUN_1407e02ea;
    _DAT_14ca0b2a0 = FUN_146826273;
    _DAT_14ca0b278 = FUN_14723f7f6;
    _DAT_14ca0b2b8 = 0xffffffff00000118;
    _DAT_14ca0b2c0 = 8;
    DAT_14ca0b2c4 = 0;
    _DAT_14ca0b2a8 = &LAB_14723f83a;
    FUN_145ce81e4();
    FUN_1407e00cc(&DAT_14ca0b260);
    return;
  }
  return;
}



// FUNCTION 145ce81e4 FUN_145ce81e4 body=133 status=ok
// SIG undefined FUN_145ce81e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce81e4(void)

{
  _DAT_14ca0fbc0 = L"BASE";
  DAT_14ca0fbea = 4;
  FUN_145ce826a();
  _DAT_14ca0fbd0 = DAT_14ca0b270;
  _DAT_14ca0fbc8 = &DAT_14ca0fbf0;
  _DAT_14ca0fbd8 = &LAB_14682652b;
  DAT_14ca0b270 = &DAT_14ca0fbc0;
  DAT_14ca0b2c5 = DAT_14ca0b2c5 + '\x01';
  _DAT_14ca0fbe0 = 0x100000000;
  if (DAT_14ca0fc54 != '\0') {
    DAT_14ca0b2c6 = DAT_14ca0b2c6 + '\x01';
  }
  return;
}



// FUNCTION 145ce826a FUN_145ce826a body=200 status=ok
// SIG undefined FUN_145ce826a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce826a(void)

{
  if ((DAT_14ca0fc57 & 2) != 0) {
    return;
  }
  DAT_14ca0fc57 = DAT_14ca0fc57 | 2;
  _DAT_14ca0fbf8 = L"TMobileBasePassPSBaseType";
  _DAT_14ca0fc10 = FUN_146826540;
  _DAT_14ca0fc18 = FUN_146825d77;
  _DAT_14ca0fc20 = FUN_146825fd6;
  _DAT_14ca0fc28 = FUN_1407e02ea;
  _DAT_14ca0fc30 = FUN_146826273;
  _DAT_14ca0fc08 = FUN_14724c1ac;
  _DAT_14ca0fc48 = 0xffffffff00000118;
  _DAT_14ca0fc50 = 8;
  DAT_14ca0fc54 = 0;
  _DAT_14ca0fc38 = &LAB_14724c1f0;
  FUN_145ce8332();
  FUN_1407e00cc(&DAT_14ca0fbf0);
  return;
}



// FUNCTION 145ce8332 FUN_145ce8332 body=133 status=ok
// SIG undefined FUN_145ce8332(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce8332(void)

{
  _DAT_14ca0fc58 = L"BASE";
  DAT_14ca0fc82 = 4;
  FUN_145ce83b8();
  _DAT_14ca0fc68 = DAT_14ca0fc00;
  _DAT_14ca0fc60 = &DAT_14ca0fc88;
  _DAT_14ca0fc70 = &LAB_14682652b;
  DAT_14ca0fc00 = &DAT_14ca0fc58;
  DAT_14ca0fc55 = DAT_14ca0fc55 + '\x01';
  _DAT_14ca0fc78 = 0x100000000;
  if (DAT_14ca0fcec != '\0') {
    DAT_14ca0fc56 = DAT_14ca0fc56 + '\x01';
  }
  return;
}



// FUNCTION 145ce83b8 FUN_145ce83b8 body=210 status=ok
// SIG undefined FUN_145ce83b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce83b8(void)

{
  if ((DAT_14ca0fcef & 2) == 0) {
    DAT_14ca0fcef = DAT_14ca0fcef | 2;
    _DAT_14ca0fc90 = L"TMobileBasePassPSPolicyParamType";
    _DAT_14ca0fca8 = FUN_146826540;
    _DAT_14ca0fcb0 = FUN_146825d77;
    _DAT_14ca0fcb8 = FUN_146825fd6;
    _DAT_14ca0fcc0 = FUN_1407e02ea;
    _DAT_14ca0fcc8 = FUN_146826273;
    _DAT_14ca0fca0 = FUN_14724c1f4;
    _DAT_14ca0fce0 = 0xffffffff00000118;
    _DAT_14ca0fce8 = 8;
    DAT_14ca0fcec = 0;
    _DAT_14ca0fcd0 = &LAB_14724c238;
    FUN_145ce848a();
    FUN_145ce85dc();
    FUN_1407e00cc(&DAT_14ca0fc88);
    return;
  }
  return;
}



// FUNCTION 145ce848a FUN_145ce848a body=121 status=ok
// SIG undefined FUN_145ce848a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce848a(void)

{
  FUN_145ce8504();
  _DAT_14ca0fcf0 = L"MobileDirectionLightBufferParam";
  DAT_14ca0fd1a = FUN_140850cc5();
  _DAT_14ca0fcf8 = FUN_14106a12a();
  _DAT_14ca0fd08 = &LAB_14682652b;
  _DAT_14ca0fd10 = 0x10000010e;
  _DAT_14ca0fd18 = 0;
  _DAT_14ca0fd00 = DAT_14ca0fc98;
  DAT_14ca0fc98 = &DAT_14ca0fcf0;
  return;
}



// FUNCTION 145ce8504 FUN_145ce8504 body=216 status=ok
// SIG undefined FUN_145ce8504(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce8504(void)

{
  _DAT_14ca0fd50 = L"UseCSMParameter";
  DAT_14ca0fd7a = FUN_140850cc5();
  _DAT_14ca0fd58 = FUN_140ec6960();
  _DAT_14ca0fd68 = &LAB_14682652b;
  _DAT_14ca0fd70 = 0x100000112;
  _DAT_14ca0fd78 = 0;
  _DAT_14ca0fd60 = DAT_14ca0fc98;
  DAT_14ca0fc98 = &DAT_14ca0fd50;
  _DAT_14ca0fd20 = L"ReflectionParameter";
  DAT_14ca0fd4a = FUN_140850cc5();
  _DAT_14ca0fd28 = FUN_14106a12a();
  _DAT_14ca0fd38 = &LAB_14682652b;
  _DAT_14ca0fd40 = 0x100000110;
  _DAT_14ca0fd48 = 0;
  _DAT_14ca0fd30 = DAT_14ca0fc98;
  DAT_14ca0fc98 = &DAT_14ca0fd20;
  return;
}



// FUNCTION 145ce85dc FUN_145ce85dc body=225 status=ok
// SIG undefined FUN_145ce85dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce85dc(void)

{
  _DAT_14ca0fd80 = L"BASE";
  DAT_14ca0fdaa = 4;
  _DAT_14ca0fd88 = FUN_1411cad6c();
  _DAT_14ca0fd90 = DAT_14ca0fc98;
  _DAT_14ca0fd98 = &LAB_14682652b;
  DAT_14ca0fc98 = &DAT_14ca0fd80;
  DAT_14ca0fced = DAT_14ca0fced + '\x01';
  _DAT_14ca0fda0 = &DAT_100000108;
  if (*(char *)(_DAT_14ca0fd88 + 100) != '\0') {
    DAT_14ca0fcee = DAT_14ca0fcee + '\x01';
  }
  _DAT_14ca0fdb0 = L"BASE";
  DAT_14ca0fdda = 4;
  _DAT_14ca0fdb8 = FUN_141092e92();
  _DAT_14ca0fdc0 = DAT_14ca0fc98;
  _DAT_14ca0fdc8 = &LAB_14682652b;
  DAT_14ca0fc98 = &DAT_14ca0fdb0;
  DAT_14ca0fced = DAT_14ca0fced + '\x01';
  _DAT_14ca0fdd0 = 0x100000000;
  if (*(char *)(_DAT_14ca0fdb8 + 100) != '\0') {
    DAT_14ca0fcee = DAT_14ca0fcee + '\x01';
  }
  return;
}



// FUNCTION 145ce86be FUN_145ce86be body=287 status=ok
// SIG undefined FUN_145ce86be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ce86be(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0bb88) {
    FUN_144b3d300(&DAT_14ca0bb88);
    if (DAT_14ca0bb88 == -1) {
      FUN_145ce87de();
      FUN_140db5666(&DAT_14ca0bae0,2,&DAT_14ca0ba78,
                    L"TMobileBasePassPSFMobileDirectionalLightCSMAndLightMapPolicyLOCAL_LIGHTS_DISABLED"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_14723fe3e,
                    FUN_14723fe16,FUN_14176fff4,&LAB_14723fe12,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0bae0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de84a7);
      _Init_thread_footer(&DAT_14ca0bb88);
    }
  }
  return &DAT_14ca0bae0;
}



// FUNCTION 145ce87de FUN_145ce87de body=205 status=ok
// SIG undefined FUN_145ce87de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce87de(void)

{
  if ((DAT_14ca0badf & 2) == 0) {
    DAT_14ca0badf = DAT_14ca0badf | 2;
    _DAT_14ca0ba80 =
         L"TMobileBasePassPSFMobileDirectionalLightCSMAndLightMapPolicyLOCAL_LIGHTS_DISABLED";
    _DAT_14ca0ba98 = FUN_146826540;
    _DAT_14ca0baa0 = FUN_146825d77;
    _DAT_14ca0baa8 = FUN_146825fd6;
    _DAT_14ca0bab0 = FUN_1407e02ea;
    _DAT_14ca0bab8 = FUN_146826273;
    _DAT_14ca0ba90 = FUN_14723fdca;
    _DAT_14ca0bad0 = 0xffffffff00000118;
    _DAT_14ca0bad8 = 8;
    DAT_14ca0badc = 0;
    _DAT_14ca0bac0 = &LAB_14723fe0e;
    FUN_145ce88ac();
    FUN_1407e00cc(&DAT_14ca0ba78);
    return;
  }
  return;
}



// FUNCTION 145ce88ac FUN_145ce88ac body=133 status=ok
// SIG undefined FUN_145ce88ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce88ac(void)

{
  _DAT_14ca10060 = L"BASE";
  DAT_14ca1008a = 4;
  FUN_145ce8932();
  _DAT_14ca10070 = DAT_14ca0ba88;
  _DAT_14ca10068 = &DAT_14ca10090;
  _DAT_14ca10078 = &LAB_14682652b;
  DAT_14ca0ba88 = &DAT_14ca10060;
  DAT_14ca0badd = DAT_14ca0badd + '\x01';
  _DAT_14ca10080 = 0x100000000;
  if (DAT_14ca100f4 != '\0') {
    DAT_14ca0bade = DAT_14ca0bade + '\x01';
  }
  return;
}



// FUNCTION 145ce8932 FUN_145ce8932 body=200 status=ok
// SIG undefined FUN_145ce8932(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce8932(void)

{
  if ((DAT_14ca100f7 & 2) != 0) {
    return;
  }
  DAT_14ca100f7 = DAT_14ca100f7 | 2;
  _DAT_14ca10098 = L"TMobileBasePassPSBaseType";
  _DAT_14ca100b0 = FUN_146826540;
  _DAT_14ca100b8 = FUN_146825d77;
  _DAT_14ca100c0 = FUN_146825fd6;
  _DAT_14ca100c8 = FUN_1407e02ea;
  _DAT_14ca100d0 = FUN_146826273;
  _DAT_14ca100a8 = FUN_14724c4a4;
  _DAT_14ca100e8 = 0xffffffff00000118;
  _DAT_14ca100f0 = 8;
  DAT_14ca100f4 = 0;
  _DAT_14ca100d8 = &LAB_14724c4e8;
  FUN_145ce89fa();
  FUN_1407e00cc(&DAT_14ca10090);
  return;
}



// FUNCTION 145ce89fa FUN_145ce89fa body=133 status=ok
// SIG undefined FUN_145ce89fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce89fa(void)

{
  _DAT_14ca100f8 = L"BASE";
  DAT_14ca10122 = 4;
  FUN_145ce8a80();
  _DAT_14ca10108 = DAT_14ca100a0;
  _DAT_14ca10100 = &DAT_14ca10128;
  _DAT_14ca10110 = &LAB_14682652b;
  DAT_14ca100a0 = &DAT_14ca100f8;
  DAT_14ca100f5 = DAT_14ca100f5 + '\x01';
  _DAT_14ca10118 = 0x100000000;
  if (DAT_14ca1018c != '\0') {
    DAT_14ca100f6 = DAT_14ca100f6 + '\x01';
  }
  return;
}



// FUNCTION 145ce8a80 FUN_145ce8a80 body=210 status=ok
// SIG undefined FUN_145ce8a80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce8a80(void)

{
  if ((DAT_14ca1018f & 2) == 0) {
    DAT_14ca1018f = DAT_14ca1018f | 2;
    _DAT_14ca10130 = L"TMobileBasePassPSPolicyParamType";
    _DAT_14ca10148 = FUN_146826540;
    _DAT_14ca10150 = FUN_146825d77;
    _DAT_14ca10158 = FUN_146825fd6;
    _DAT_14ca10160 = FUN_1407e02ea;
    _DAT_14ca10168 = FUN_146826273;
    _DAT_14ca10140 = FUN_14724c4ec;
    _DAT_14ca10180 = 0xffffffff00000118;
    _DAT_14ca10188 = 8;
    DAT_14ca1018c = 0;
    _DAT_14ca10170 = &LAB_14724c530;
    FUN_145ce8b52();
    FUN_145ce8ca4();
    FUN_1407e00cc(&DAT_14ca10128);
    return;
  }
  return;
}



// FUNCTION 145ce8b52 FUN_145ce8b52 body=121 status=ok
// SIG undefined FUN_145ce8b52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce8b52(void)

{
  FUN_145ce8bcc();
  _DAT_14ca10190 = L"MobileDirectionLightBufferParam";
  DAT_14ca101ba = FUN_140850cc5();
  _DAT_14ca10198 = FUN_14106a12a();
  _DAT_14ca101a8 = &LAB_14682652b;
  _DAT_14ca101b0 = 0x10000010e;
  _DAT_14ca101b8 = 0;
  _DAT_14ca101a0 = DAT_14ca10138;
  DAT_14ca10138 = &DAT_14ca10190;
  return;
}



// FUNCTION 145ce8bcc FUN_145ce8bcc body=216 status=ok
// SIG undefined FUN_145ce8bcc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce8bcc(void)

{
  _DAT_14ca101f0 = L"UseCSMParameter";
  DAT_14ca1021a = FUN_140850cc5();
  _DAT_14ca101f8 = FUN_140ec6960();
  _DAT_14ca10208 = &LAB_14682652b;
  _DAT_14ca10210 = 0x100000112;
  _DAT_14ca10218 = 0;
  _DAT_14ca10200 = DAT_14ca10138;
  DAT_14ca10138 = &DAT_14ca101f0;
  _DAT_14ca101c0 = L"ReflectionParameter";
  DAT_14ca101ea = FUN_140850cc5();
  _DAT_14ca101c8 = FUN_14106a12a();
  _DAT_14ca101d8 = &LAB_14682652b;
  _DAT_14ca101e0 = 0x100000110;
  _DAT_14ca101e8 = 0;
  _DAT_14ca101d0 = DAT_14ca10138;
  DAT_14ca10138 = &DAT_14ca101c0;
  return;
}



// FUNCTION 145ce8ca4 FUN_145ce8ca4 body=225 status=ok
// SIG undefined FUN_145ce8ca4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce8ca4(void)

{
  _DAT_14ca10220 = L"BASE";
  DAT_14ca1024a = 4;
  _DAT_14ca10228 = FUN_1411cad6c();
  _DAT_14ca10230 = DAT_14ca10138;
  _DAT_14ca10238 = &LAB_14682652b;
  DAT_14ca10138 = &DAT_14ca10220;
  DAT_14ca1018d = DAT_14ca1018d + '\x01';
  _DAT_14ca10240 = &DAT_100000108;
  if (*(char *)(_DAT_14ca10228 + 100) != '\0') {
    DAT_14ca1018e = DAT_14ca1018e + '\x01';
  }
  _DAT_14ca10250 = L"BASE";
  DAT_14ca1027a = 4;
  _DAT_14ca10258 = FUN_141092e92();
  _DAT_14ca10260 = DAT_14ca10138;
  _DAT_14ca10268 = &LAB_14682652b;
  DAT_14ca10138 = &DAT_14ca10250;
  DAT_14ca1018d = DAT_14ca1018d + '\x01';
  _DAT_14ca10270 = 0x100000000;
  if (*(char *)(_DAT_14ca10258 + 100) != '\0') {
    DAT_14ca1018e = DAT_14ca1018e + '\x01';
  }
  return;
}



// FUNCTION 145ce8d86 FUN_145ce8d86 body=287 status=ok
// SIG undefined FUN_145ce8d86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ce8d86(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0c3a0) {
    FUN_144b3d300(&DAT_14ca0c3a0);
    if (DAT_14ca0c3a0 == -1) {
      FUN_145ce8ea6();
      FUN_140db5666(&DAT_14ca0c2f8,2,&DAT_14ca0c290,
                    L"TMobileBasePassPSFMobileDirectionalLightAndSHIndirectPolicyLOCAL_LIGHTS_DISABLED"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_147240412,
                    FUN_1472403ea,FUN_1417702fe,&LAB_1472403e6,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0c2f8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de8521);
      _Init_thread_footer(&DAT_14ca0c3a0);
    }
  }
  return &DAT_14ca0c2f8;
}



// FUNCTION 145ce8ea6 FUN_145ce8ea6 body=205 status=ok
// SIG undefined FUN_145ce8ea6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce8ea6(void)

{
  if ((DAT_14ca0c2f7 & 2) == 0) {
    DAT_14ca0c2f7 = DAT_14ca0c2f7 | 2;
    _DAT_14ca0c298 =
         L"TMobileBasePassPSFMobileDirectionalLightAndSHIndirectPolicyLOCAL_LIGHTS_DISABLED";
    _DAT_14ca0c2b0 = FUN_146826540;
    _DAT_14ca0c2b8 = FUN_146825d77;
    _DAT_14ca0c2c0 = FUN_146825fd6;
    _DAT_14ca0c2c8 = FUN_1407e02ea;
    _DAT_14ca0c2d0 = FUN_146826273;
    _DAT_14ca0c2a8 = FUN_14724039e;
    _DAT_14ca0c2e8 = 0xffffffff00000118;
    _DAT_14ca0c2f0 = 8;
    DAT_14ca0c2f4 = 0;
    _DAT_14ca0c2d8 = &LAB_1472403e2;
    FUN_145ce8f74();
    FUN_1407e00cc(&DAT_14ca0c290);
    return;
  }
  return;
}



// FUNCTION 145ce8f74 FUN_145ce8f74 body=133 status=ok
// SIG undefined FUN_145ce8f74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce8f74(void)

{
  _DAT_14ca10500 = L"BASE";
  DAT_14ca1052a = 4;
  FUN_145ce8ffa();
  _DAT_14ca10510 = DAT_14ca0c2a0;
  _DAT_14ca10508 = &DAT_14ca10530;
  _DAT_14ca10518 = &LAB_14682652b;
  DAT_14ca0c2a0 = &DAT_14ca10500;
  DAT_14ca0c2f5 = DAT_14ca0c2f5 + '\x01';
  _DAT_14ca10520 = 0x100000000;
  if (DAT_14ca10594 != '\0') {
    DAT_14ca0c2f6 = DAT_14ca0c2f6 + '\x01';
  }
  return;
}



// FUNCTION 145ce8ffa FUN_145ce8ffa body=200 status=ok
// SIG undefined FUN_145ce8ffa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce8ffa(void)

{
  if ((DAT_14ca10597 & 2) != 0) {
    return;
  }
  DAT_14ca10597 = DAT_14ca10597 | 2;
  _DAT_14ca10538 = L"TMobileBasePassPSBaseType";
  _DAT_14ca10550 = FUN_146826540;
  _DAT_14ca10558 = FUN_146825d77;
  _DAT_14ca10560 = FUN_146825fd6;
  _DAT_14ca10568 = FUN_1407e02ea;
  _DAT_14ca10570 = FUN_146826273;
  _DAT_14ca10548 = FUN_14724c79c;
  _DAT_14ca10588 = 0xffffffff00000118;
  _DAT_14ca10590 = 8;
  DAT_14ca10594 = 0;
  _DAT_14ca10578 = &LAB_14724c7e0;
  FUN_145ce90c2();
  FUN_1407e00cc(&DAT_14ca10530);
  return;
}



// FUNCTION 145ce90c2 FUN_145ce90c2 body=133 status=ok
// SIG undefined FUN_145ce90c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce90c2(void)

{
  _DAT_14ca10598 = L"BASE";
  DAT_14ca105c2 = 4;
  FUN_145ce9148();
  _DAT_14ca105a8 = DAT_14ca10540;
  _DAT_14ca105a0 = &DAT_14ca105c8;
  _DAT_14ca105b0 = &LAB_14682652b;
  DAT_14ca10540 = &DAT_14ca10598;
  DAT_14ca10595 = DAT_14ca10595 + '\x01';
  _DAT_14ca105b8 = 0x100000000;
  if (DAT_14ca1062c != '\0') {
    DAT_14ca10596 = DAT_14ca10596 + '\x01';
  }
  return;
}



// FUNCTION 145ce9148 FUN_145ce9148 body=210 status=ok
// SIG undefined FUN_145ce9148(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce9148(void)

{
  if ((DAT_14ca1062f & 2) == 0) {
    DAT_14ca1062f = DAT_14ca1062f | 2;
    _DAT_14ca105d0 = L"TMobileBasePassPSPolicyParamType";
    _DAT_14ca105e8 = FUN_146826540;
    _DAT_14ca105f0 = FUN_146825d77;
    _DAT_14ca105f8 = FUN_146825fd6;
    _DAT_14ca10600 = FUN_1407e02ea;
    _DAT_14ca10608 = FUN_146826273;
    _DAT_14ca105e0 = FUN_14724c7e4;
    _DAT_14ca10620 = 0xffffffff00000118;
    _DAT_14ca10628 = 8;
    DAT_14ca1062c = 0;
    _DAT_14ca10610 = &LAB_14724c828;
    FUN_145ce921a();
    FUN_145ce936c();
    FUN_1407e00cc(&DAT_14ca105c8);
    return;
  }
  return;
}



// FUNCTION 145ce921a FUN_145ce921a body=121 status=ok
// SIG undefined FUN_145ce921a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce921a(void)

{
  FUN_145ce9294();
  _DAT_14ca10630 = L"MobileDirectionLightBufferParam";
  DAT_14ca1065a = FUN_140850cc5();
  _DAT_14ca10638 = FUN_14106a12a();
  _DAT_14ca10648 = &LAB_14682652b;
  _DAT_14ca10650 = 0x10000010e;
  _DAT_14ca10658 = 0;
  _DAT_14ca10640 = DAT_14ca105d8;
  DAT_14ca105d8 = &DAT_14ca10630;
  return;
}



// FUNCTION 145ce9294 FUN_145ce9294 body=216 status=ok
// SIG undefined FUN_145ce9294(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce9294(void)

{
  _DAT_14ca10690 = L"UseCSMParameter";
  DAT_14ca106ba = FUN_140850cc5();
  _DAT_14ca10698 = FUN_140ec6960();
  _DAT_14ca106a8 = &LAB_14682652b;
  _DAT_14ca106b0 = 0x100000112;
  _DAT_14ca106b8 = 0;
  _DAT_14ca106a0 = DAT_14ca105d8;
  DAT_14ca105d8 = &DAT_14ca10690;
  _DAT_14ca10660 = L"ReflectionParameter";
  DAT_14ca1068a = FUN_140850cc5();
  _DAT_14ca10668 = FUN_14106a12a();
  _DAT_14ca10678 = &LAB_14682652b;
  _DAT_14ca10680 = 0x100000110;
  _DAT_14ca10688 = 0;
  _DAT_14ca10670 = DAT_14ca105d8;
  DAT_14ca105d8 = &DAT_14ca10660;
  return;
}



// FUNCTION 145ce936c FUN_145ce936c body=225 status=ok
// SIG undefined FUN_145ce936c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce936c(void)

{
  _DAT_14ca106c0 = L"BASE";
  DAT_14ca106ea = 4;
  _DAT_14ca106c8 = FUN_1411cad6c();
  _DAT_14ca106d0 = DAT_14ca105d8;
  _DAT_14ca106d8 = &LAB_14682652b;
  DAT_14ca105d8 = &DAT_14ca106c0;
  DAT_14ca1062d = DAT_14ca1062d + '\x01';
  _DAT_14ca106e0 = &DAT_100000108;
  if (*(char *)(_DAT_14ca106c8 + 100) != '\0') {
    DAT_14ca1062e = DAT_14ca1062e + '\x01';
  }
  _DAT_14ca106f0 = L"BASE";
  DAT_14ca1071a = 4;
  _DAT_14ca106f8 = FUN_141092e92();
  _DAT_14ca10700 = DAT_14ca105d8;
  _DAT_14ca10708 = &LAB_14682652b;
  DAT_14ca105d8 = &DAT_14ca106f0;
  DAT_14ca1062d = DAT_14ca1062d + '\x01';
  _DAT_14ca10710 = 0x100000000;
  if (*(char *)(_DAT_14ca106f8 + 100) != '\0') {
    DAT_14ca1062e = DAT_14ca1062e + '\x01';
  }
  return;
}



// FUNCTION 145ce944e FUN_145ce944e body=287 status=ok
// SIG undefined FUN_145ce944e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ce944e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0cbb8) {
    FUN_144b3d300(&DAT_14ca0cbb8);
    if (DAT_14ca0cbb8 == -1) {
      FUN_145ce956e();
      FUN_140db5666(&DAT_14ca0cb10,2,&DAT_14ca0caa8,
                    L"TMobileBasePassPSFMobileDirectionalLightCSMAndSHIndirectPolicyLOCAL_LIGHTS_DISABLED"
                    ,L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_1472409e6,
                    FUN_1472409be,FUN_141770608,&LAB_1472409ba,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0cb10 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de859b);
      _Init_thread_footer(&DAT_14ca0cbb8);
    }
  }
  return &DAT_14ca0cb10;
}



// FUNCTION 145ce956e FUN_145ce956e body=205 status=ok
// SIG undefined FUN_145ce956e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce956e(void)

{
  if ((DAT_14ca0cb0f & 2) == 0) {
    DAT_14ca0cb0f = DAT_14ca0cb0f | 2;
    _DAT_14ca0cab0 =
         L"TMobileBasePassPSFMobileDirectionalLightCSMAndSHIndirectPolicyLOCAL_LIGHTS_DISABLED";
    _DAT_14ca0cac8 = FUN_146826540;
    _DAT_14ca0cad0 = FUN_146825d77;
    _DAT_14ca0cad8 = FUN_146825fd6;
    _DAT_14ca0cae0 = FUN_1407e02ea;
    _DAT_14ca0cae8 = FUN_146826273;
    _DAT_14ca0cac0 = FUN_147240972;
    _DAT_14ca0cb00 = 0xffffffff00000118;
    _DAT_14ca0cb08 = 8;
    DAT_14ca0cb0c = 0;
    _DAT_14ca0caf0 = &LAB_1472409b6;
    FUN_145ce963c();
    FUN_1407e00cc(&DAT_14ca0caa8);
    return;
  }
  return;
}



// FUNCTION 145ce963c FUN_145ce963c body=133 status=ok
// SIG undefined FUN_145ce963c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce963c(void)

{
  _DAT_14ca109a0 = L"BASE";
  DAT_14ca109ca = 4;
  FUN_145ce96c2();
  _DAT_14ca109b0 = DAT_14ca0cab8;
  _DAT_14ca109a8 = &DAT_14ca109d0;
  _DAT_14ca109b8 = &LAB_14682652b;
  DAT_14ca0cab8 = &DAT_14ca109a0;
  DAT_14ca0cb0d = DAT_14ca0cb0d + '\x01';
  _DAT_14ca109c0 = 0x100000000;
  if (DAT_14ca10a34 != '\0') {
    DAT_14ca0cb0e = DAT_14ca0cb0e + '\x01';
  }
  return;
}



// FUNCTION 145ce96c2 FUN_145ce96c2 body=200 status=ok
// SIG undefined FUN_145ce96c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce96c2(void)

{
  if ((DAT_14ca10a37 & 2) != 0) {
    return;
  }
  DAT_14ca10a37 = DAT_14ca10a37 | 2;
  _DAT_14ca109d8 = L"TMobileBasePassPSBaseType";
  _DAT_14ca109f0 = FUN_146826540;
  _DAT_14ca109f8 = FUN_146825d77;
  _DAT_14ca10a00 = FUN_146825fd6;
  _DAT_14ca10a08 = FUN_1407e02ea;
  _DAT_14ca10a10 = FUN_146826273;
  _DAT_14ca109e8 = FUN_14724ca94;
  _DAT_14ca10a28 = 0xffffffff00000118;
  _DAT_14ca10a30 = 8;
  DAT_14ca10a34 = 0;
  _DAT_14ca10a18 = &LAB_14724cad8;
  FUN_145ce978a();
  FUN_1407e00cc(&DAT_14ca109d0);
  return;
}



// FUNCTION 145ce978a FUN_145ce978a body=133 status=ok
// SIG undefined FUN_145ce978a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce978a(void)

{
  _DAT_14ca10a38 = L"BASE";
  DAT_14ca10a62 = 4;
  FUN_145ce9810();
  _DAT_14ca10a48 = DAT_14ca109e0;
  _DAT_14ca10a40 = &DAT_14ca10a68;
  _DAT_14ca10a50 = &LAB_14682652b;
  DAT_14ca109e0 = &DAT_14ca10a38;
  DAT_14ca10a35 = DAT_14ca10a35 + '\x01';
  _DAT_14ca10a58 = 0x100000000;
  if (DAT_14ca10acc != '\0') {
    DAT_14ca10a36 = DAT_14ca10a36 + '\x01';
  }
  return;
}



// FUNCTION 145ce9810 FUN_145ce9810 body=210 status=ok
// SIG undefined FUN_145ce9810(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce9810(void)

{
  if ((DAT_14ca10acf & 2) == 0) {
    DAT_14ca10acf = DAT_14ca10acf | 2;
    _DAT_14ca10a70 = L"TMobileBasePassPSPolicyParamType";
    _DAT_14ca10a88 = FUN_146826540;
    _DAT_14ca10a90 = FUN_146825d77;
    _DAT_14ca10a98 = FUN_146825fd6;
    _DAT_14ca10aa0 = FUN_1407e02ea;
    _DAT_14ca10aa8 = FUN_146826273;
    _DAT_14ca10a80 = FUN_14724cadc;
    _DAT_14ca10ac0 = 0xffffffff00000118;
    _DAT_14ca10ac8 = 8;
    DAT_14ca10acc = 0;
    _DAT_14ca10ab0 = &LAB_14724cb20;
    FUN_145ce98e2();
    FUN_145ce9a34();
    FUN_1407e00cc(&DAT_14ca10a68);
    return;
  }
  return;
}



// FUNCTION 145ce98e2 FUN_145ce98e2 body=121 status=ok
// SIG undefined FUN_145ce98e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce98e2(void)

{
  FUN_145ce995c();
  _DAT_14ca10ad0 = L"MobileDirectionLightBufferParam";
  DAT_14ca10afa = FUN_140850cc5();
  _DAT_14ca10ad8 = FUN_14106a12a();
  _DAT_14ca10ae8 = &LAB_14682652b;
  _DAT_14ca10af0 = 0x10000010e;
  _DAT_14ca10af8 = 0;
  _DAT_14ca10ae0 = DAT_14ca10a78;
  DAT_14ca10a78 = &DAT_14ca10ad0;
  return;
}



// FUNCTION 145ce995c FUN_145ce995c body=216 status=ok
// SIG undefined FUN_145ce995c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce995c(void)

{
  _DAT_14ca10b30 = L"UseCSMParameter";
  DAT_14ca10b5a = FUN_140850cc5();
  _DAT_14ca10b38 = FUN_140ec6960();
  _DAT_14ca10b48 = &LAB_14682652b;
  _DAT_14ca10b50 = 0x100000112;
  _DAT_14ca10b58 = 0;
  _DAT_14ca10b40 = DAT_14ca10a78;
  DAT_14ca10a78 = &DAT_14ca10b30;
  _DAT_14ca10b00 = L"ReflectionParameter";
  DAT_14ca10b2a = FUN_140850cc5();
  _DAT_14ca10b08 = FUN_14106a12a();
  _DAT_14ca10b18 = &LAB_14682652b;
  _DAT_14ca10b20 = 0x100000110;
  _DAT_14ca10b28 = 0;
  _DAT_14ca10b10 = DAT_14ca10a78;
  DAT_14ca10a78 = &DAT_14ca10b00;
  return;
}



// FUNCTION 145ce9a34 FUN_145ce9a34 body=225 status=ok
// SIG undefined FUN_145ce9a34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce9a34(void)

{
  _DAT_14ca10b60 = L"BASE";
  DAT_14ca10b8a = 4;
  _DAT_14ca10b68 = FUN_1411cad6c();
  _DAT_14ca10b70 = DAT_14ca10a78;
  _DAT_14ca10b78 = &LAB_14682652b;
  DAT_14ca10a78 = &DAT_14ca10b60;
  DAT_14ca10acd = DAT_14ca10acd + '\x01';
  _DAT_14ca10b80 = &DAT_100000108;
  if (*(char *)(_DAT_14ca10b68 + 100) != '\0') {
    DAT_14ca10ace = DAT_14ca10ace + '\x01';
  }
  _DAT_14ca10b90 = L"BASE";
  DAT_14ca10bba = 4;
  _DAT_14ca10b98 = FUN_141092e92();
  _DAT_14ca10ba0 = DAT_14ca10a78;
  _DAT_14ca10ba8 = &LAB_14682652b;
  DAT_14ca10a78 = &DAT_14ca10b90;
  DAT_14ca10acd = DAT_14ca10acd + '\x01';
  _DAT_14ca10bb0 = 0x100000000;
  if (*(char *)(_DAT_14ca10b98 + 100) != '\0') {
    DAT_14ca10ace = DAT_14ca10ace + '\x01';
  }
  return;
}



// FUNCTION 145ce9b16 FUN_145ce9b16 body=287 status=ok
// SIG undefined FUN_145ce9b16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ce9b16(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca0d3d0) {
    FUN_144b3d300(&DAT_14ca0d3d0);
    if (DAT_14ca0d3d0 == -1) {
      FUN_145ce9c36();
      FUN_140db5666(&DAT_14ca0d328,2,&DAT_14ca0d2c0,
                    L"TMobileBasePassPSFMobileDirectionalLightAndCSMPolicyLOCAL_LIGHTS_DISABLED",
                    L"/Engine/Private/MobileBasePassPixelShader.usf",L"Main",3,1,FUN_147240fba,
                    FUN_147240f92,FUN_141770912,&LAB_147240f8e,&LAB_14712ac0c,&LAB_14712ac08,0x118,0
                   );
      _DAT_14ca0d328 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142de8615);
      _Init_thread_footer(&DAT_14ca0d3d0);
    }
  }
  return &DAT_14ca0d328;
}



// FUNCTION 145ce9c36 FUN_145ce9c36 body=205 status=ok
// SIG undefined FUN_145ce9c36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce9c36(void)

{
  if ((DAT_14ca0d327 & 2) == 0) {
    DAT_14ca0d327 = DAT_14ca0d327 | 2;
    _DAT_14ca0d2c8 = L"TMobileBasePassPSFMobileDirectionalLightAndCSMPolicyLOCAL_LIGHTS_DISABLED";
    _DAT_14ca0d2e0 = FUN_146826540;
    _DAT_14ca0d2e8 = FUN_146825d77;
    _DAT_14ca0d2f0 = FUN_146825fd6;
    _DAT_14ca0d2f8 = FUN_1407e02ea;
    _DAT_14ca0d300 = FUN_146826273;
    _DAT_14ca0d2d8 = FUN_147240f46;
    _DAT_14ca0d318 = 0xffffffff00000118;
    _DAT_14ca0d320 = 8;
    DAT_14ca0d324 = 0;
    _DAT_14ca0d308 = &LAB_147240f8a;
    FUN_145ce9d04();
    FUN_1407e00cc(&DAT_14ca0d2c0);
    return;
  }
  return;
}



// FUNCTION 145ce9d04 FUN_145ce9d04 body=133 status=ok
// SIG undefined FUN_145ce9d04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce9d04(void)

{
  _DAT_14ca10e40 = L"BASE";
  DAT_14ca10e6a = 4;
  FUN_145ce9d8a();
  _DAT_14ca10e50 = DAT_14ca0d2d0;
  _DAT_14ca10e48 = &DAT_14ca10e70;
  _DAT_14ca10e58 = &LAB_14682652b;
  DAT_14ca0d2d0 = &DAT_14ca10e40;
  DAT_14ca0d325 = DAT_14ca0d325 + '\x01';
  _DAT_14ca10e60 = 0x100000000;
  if (DAT_14ca10ed4 != '\0') {
    DAT_14ca0d326 = DAT_14ca0d326 + '\x01';
  }
  return;
}



// FUNCTION 145ce9d8a FUN_145ce9d8a body=200 status=ok
// SIG undefined FUN_145ce9d8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce9d8a(void)

{
  if ((DAT_14ca10ed7 & 2) != 0) {
    return;
  }
  DAT_14ca10ed7 = DAT_14ca10ed7 | 2;
  _DAT_14ca10e78 = L"TMobileBasePassPSBaseType";
  _DAT_14ca10e90 = FUN_146826540;
  _DAT_14ca10e98 = FUN_146825d77;
  _DAT_14ca10ea0 = FUN_146825fd6;
  _DAT_14ca10ea8 = FUN_1407e02ea;
  _DAT_14ca10eb0 = FUN_146826273;
  _DAT_14ca10e88 = FUN_14724cd8c;
  _DAT_14ca10ec8 = 0xffffffff00000118;
  _DAT_14ca10ed0 = 8;
  DAT_14ca10ed4 = 0;
  _DAT_14ca10eb8 = &LAB_14724cdd0;
  FUN_145ce9e52();
  FUN_1407e00cc(&DAT_14ca10e70);
  return;
}



// FUNCTION 145ce9e52 FUN_145ce9e52 body=133 status=ok
// SIG undefined FUN_145ce9e52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce9e52(void)

{
  _DAT_14ca10ed8 = L"BASE";
  DAT_14ca10f02 = 4;
  FUN_145ce9ed8();
  _DAT_14ca10ee8 = DAT_14ca10e80;
  _DAT_14ca10ee0 = &DAT_14ca10f08;
  _DAT_14ca10ef0 = &LAB_14682652b;
  DAT_14ca10e80 = &DAT_14ca10ed8;
  DAT_14ca10ed5 = DAT_14ca10ed5 + '\x01';
  _DAT_14ca10ef8 = 0x100000000;
  if (DAT_14ca10f6c != '\0') {
    DAT_14ca10ed6 = DAT_14ca10ed6 + '\x01';
  }
  return;
}



// FUNCTION 145ce9ed8 FUN_145ce9ed8 body=210 status=ok
// SIG undefined FUN_145ce9ed8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce9ed8(void)

{
  if ((DAT_14ca10f6f & 2) == 0) {
    DAT_14ca10f6f = DAT_14ca10f6f | 2;
    _DAT_14ca10f10 = L"TMobileBasePassPSPolicyParamType";
    _DAT_14ca10f28 = FUN_146826540;
    _DAT_14ca10f30 = FUN_146825d77;
    _DAT_14ca10f38 = FUN_146825fd6;
    _DAT_14ca10f40 = FUN_1407e02ea;
    _DAT_14ca10f48 = FUN_146826273;
    _DAT_14ca10f20 = FUN_14724cdd4;
    _DAT_14ca10f60 = 0xffffffff00000118;
    _DAT_14ca10f68 = 8;
    DAT_14ca10f6c = 0;
    _DAT_14ca10f50 = &LAB_14724ce18;
    FUN_145ce9faa();
    FUN_145cea0fc();
    FUN_1407e00cc(&DAT_14ca10f08);
    return;
  }
  return;
}



// FUNCTION 145ce9faa FUN_145ce9faa body=121 status=ok
// SIG undefined FUN_145ce9faa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ce9faa(void)

{
  FUN_145cea024();
  _DAT_14ca10f70 = L"MobileDirectionLightBufferParam";
  DAT_14ca10f9a = FUN_140850cc5();
  _DAT_14ca10f78 = FUN_14106a12a();
  _DAT_14ca10f88 = &LAB_14682652b;
  _DAT_14ca10f90 = 0x10000010e;
  _DAT_14ca10f98 = 0;
  _DAT_14ca10f80 = DAT_14ca10f18;
  DAT_14ca10f18 = &DAT_14ca10f70;
  return;
}



// FUNCTION 145cea024 FUN_145cea024 body=216 status=ok
// SIG undefined FUN_145cea024(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cea024(void)

{
  _DAT_14ca10fd0 = L"UseCSMParameter";
  DAT_14ca10ffa = FUN_140850cc5();
  _DAT_14ca10fd8 = FUN_140ec6960();
  _DAT_14ca10fe8 = &LAB_14682652b;
  _DAT_14ca10ff0 = 0x100000112;
  _DAT_14ca10ff8 = 0;
  _DAT_14ca10fe0 = DAT_14ca10f18;
  DAT_14ca10f18 = &DAT_14ca10fd0;
  _DAT_14ca10fa0 = L"ReflectionParameter";
  DAT_14ca10fca = FUN_140850cc5();
  _DAT_14ca10fa8 = FUN_14106a12a();
  _DAT_14ca10fb8 = &LAB_14682652b;
  _DAT_14ca10fc0 = 0x100000110;
  _DAT_14ca10fc8 = 0;
  _DAT_14ca10fb0 = DAT_14ca10f18;
  DAT_14ca10f18 = &DAT_14ca10fa0;
  return;
}



// FUNCTION 145cea0fc FUN_145cea0fc body=225 status=ok
// SIG undefined FUN_145cea0fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cea0fc(void)

{
  _DAT_14ca11000 = L"BASE";
  DAT_14ca1102a = 4;
  _DAT_14ca11008 = FUN_1411cad6c();
  _DAT_14ca11010 = DAT_14ca10f18;
  _DAT_14ca11018 = &LAB_14682652b;
  DAT_14ca10f18 = &DAT_14ca11000;
  DAT_14ca10f6d = DAT_14ca10f6d + '\x01';
  _DAT_14ca11020 = &DAT_100000108;
  if (*(char *)(_DAT_14ca11008 + 100) != '\0') {
    DAT_14ca10f6e = DAT_14ca10f6e + '\x01';
  }
  _DAT_14ca11030 = L"BASE";
  DAT_14ca1105a = 4;
  _DAT_14ca11038 = FUN_141092e92();
  _DAT_14ca11040 = DAT_14ca10f18;
  _DAT_14ca11048 = &LAB_14682652b;
  DAT_14ca10f18 = &DAT_14ca11030;
  DAT_14ca10f6d = DAT_14ca10f6d + '\x01';
  _DAT_14ca11050 = 0x100000000;
  if (*(char *)(_DAT_14ca11038 + 100) != '\0') {
    DAT_14ca10f6e = DAT_14ca10f6e + '\x01';
  }
  return;
}



// FUNCTION 145cea1e6 FUN_145cea1e6 body=1790 status=ok
// SIG undefined FUN_145cea1e6(void)

undefined8 * FUN_145cea1e6(undefined8 *param_1)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_b8 [47];
  undefined1 local_89;
  ulonglong local_88;
  undefined8 local_80;
  longlong lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  byte local_60;
  undefined1 *local_58;
  ulonglong *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar3 = FUN_14007ca06();
  FUN_140da6ea8(param_1,uVar3);
  *param_1 = &PTR_FUN_14a4500b0;
  plVar1 = param_1 + 7;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  local_88 = local_88 & 0xffffffffffffff00;
  local_80 = 0;
  lStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_89 = 1;
  local_58 = &local_89;
  local_50 = &local_88;
  bVar2 = FUN_145cea8e6(plVar1,local_44);
  if (lStack_78 != 0) {
    FUN_1400020a8();
    bVar2 = local_60;
  }
  local_88 = local_88 & 0xffffffffffffff00;
  local_80 = 0;
  lStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = bVar2 & 0xfe;
  local_89 = 2;
  local_58 = &local_89;
  local_50 = &local_88;
  FUN_145cea8e6(plVar1,local_44);
  if (lStack_78 != 0) {
    FUN_1400020a8();
  }
  local_88 = local_88 & 0xffffffffffffff00;
  local_80 = 0;
  lStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = local_60 & 0xfe;
  local_89 = 4;
  local_58 = &local_89;
  local_50 = &local_88;
  FUN_145cea8e6(plVar1,local_44);
  if (lStack_78 != 0) {
    FUN_1400020a8();
  }
  local_88 = local_88 & 0xffffffffffffff00;
  local_80 = 0;
  lStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = local_60 & 0xfe;
  local_89 = 8;
  local_58 = &local_89;
  local_50 = &local_88;
  FUN_145cea8e6(plVar1,local_44);
  if (lStack_78 != 0) {
    FUN_1400020a8();
  }
  local_88 = local_88 & 0xffffffffffffff00;
  local_80 = 0;
  lStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = local_60 & 0xfe;
  local_89 = 0x10;
  local_58 = &local_89;
  local_50 = &local_88;
  FUN_145cea8e6(plVar1,local_44);
  if (lStack_78 != 0) {
    FUN_1400020a8();
  }
  lVar7 = DAT_14caad288;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar4 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar4 = (ulonglong)(bVar2 ^ 1);
  }
  if (*(int *)(param_1 + 8) == *(int *)((longlong)param_1 + 0x6c)) {
LAB_145cea754:
    lVar6 = 0;
  }
  else {
    puVar5 = param_1 + 0xe;
    if ((undefined8 *)param_1[0xf] != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)param_1[0xf];
    }
    iVar8 = *(int *)((longlong)puVar5 + (ulonglong)(~*(uint *)(param_1 + 0x10) & 1) * 4);
    if (iVar8 == -1) goto LAB_145cea754;
    do {
      lVar6 = *plVar1 + (longlong)iVar8 * 0x40;
      if (*(char *)(*plVar1 + (longlong)iVar8 * 0x40) == '\x01') break;
      iVar8 = *(int *)(lVar6 + 0x38);
      lVar6 = 0;
    } while (iVar8 != -1);
  }
  *(byte *)(lVar6 + 8) = *(byte *)(lVar6 + 8) & 0xfe | *(byte *)(lVar7 + uVar4 * 4) & 1;
  FUN_1400b22c2(&local_88,"/Engine/EngineResources/SlatePost0_RT.SlatePost0_RT");
  if (*(int *)(param_1 + 8) == *(int *)((longlong)param_1 + 0x6c)) {
LAB_145cea75b:
    lVar7 = 0;
  }
  else {
    puVar5 = param_1 + 0xe;
    if ((undefined8 *)param_1[0xf] != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)param_1[0xf];
    }
    iVar8 = *(int *)((longlong)puVar5 + (ulonglong)(~*(uint *)(param_1 + 0x10) & 1) * 4);
    if (iVar8 == -1) goto LAB_145cea75b;
    do {
      lVar7 = *plVar1 + (longlong)iVar8 * 0x40;
      if (*(char *)(*plVar1 + (longlong)iVar8 * 0x40) == '\x01') break;
      iVar8 = *(int *)(lVar7 + 0x38);
      lVar7 = 0;
    } while (iVar8 != -1);
  }
  if ((ulonglong *)(lVar7 + 0x18) == &local_88) {
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar7 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(ulonglong *)(lVar7 + 0x18) = local_88;
    local_88 = 0;
    *(undefined4 *)(lVar7 + 0x20) = (undefined4)local_80;
    *(undefined4 *)(lVar7 + 0x24) = local_80._4_4_;
  }
  FUN_1400b22c2(&local_88,"/Engine/EngineResources/SlatePost1_RT.SlatePost1_RT");
  if (*(int *)(param_1 + 8) == *(int *)((longlong)param_1 + 0x6c)) {
LAB_145cea763:
    lVar7 = 0;
  }
  else {
    puVar5 = param_1 + 0xe;
    if ((undefined8 *)param_1[0xf] != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)param_1[0xf];
    }
    iVar8 = *(int *)((longlong)puVar5 + (ulonglong)(*(int *)(param_1 + 0x10) - 1U & 2) * 4);
    if (iVar8 == -1) goto LAB_145cea763;
    do {
      lVar7 = *plVar1 + (longlong)iVar8 * 0x40;
      if (*(char *)(*plVar1 + (longlong)iVar8 * 0x40) == '\x02') break;
      iVar8 = *(int *)(lVar7 + 0x38);
      lVar7 = 0;
    } while (iVar8 != -1);
  }
  if ((ulonglong *)(lVar7 + 0x18) == &local_88) {
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar7 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(ulonglong *)(lVar7 + 0x18) = local_88;
    local_88 = 0;
    *(undefined4 *)(lVar7 + 0x20) = (undefined4)local_80;
    *(undefined4 *)(lVar7 + 0x24) = local_80._4_4_;
  }
  FUN_1400b22c2(&local_88,"/Engine/EngineResources/SlatePost2_RT.SlatePost2_RT");
  if (*(int *)(param_1 + 8) == *(int *)((longlong)param_1 + 0x6c)) {
LAB_145cea76b:
    lVar7 = 0;
  }
  else {
    puVar5 = param_1 + 0xe;
    if ((undefined8 *)param_1[0xf] != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)param_1[0xf];
    }
    iVar8 = *(int *)((longlong)puVar5 + (ulonglong)(*(int *)(param_1 + 0x10) - 1U & 4) * 4);
    if (iVar8 == -1) goto LAB_145cea76b;
    do {
      lVar7 = *plVar1 + (longlong)iVar8 * 0x40;
      if (*(char *)(*plVar1 + (longlong)iVar8 * 0x40) == '\x04') break;
      iVar8 = *(int *)(lVar7 + 0x38);
      lVar7 = 0;
    } while (iVar8 != -1);
  }
  if ((ulonglong *)(lVar7 + 0x18) == &local_88) {
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar7 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(ulonglong *)(lVar7 + 0x18) = local_88;
    local_88 = 0;
    *(undefined4 *)(lVar7 + 0x20) = (undefined4)local_80;
    *(undefined4 *)(lVar7 + 0x24) = local_80._4_4_;
  }
  FUN_1400b22c2(&local_88,"/Engine/EngineResources/SlatePost3_RT.SlatePost3_RT");
  if (*(int *)(param_1 + 8) == *(int *)((longlong)param_1 + 0x6c)) {
LAB_145cea773:
    lVar7 = 0;
  }
  else {
    puVar5 = param_1 + 0xe;
    if ((undefined8 *)param_1[0xf] != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)param_1[0xf];
    }
    iVar8 = *(int *)((longlong)puVar5 + (ulonglong)(*(int *)(param_1 + 0x10) - 1U & 8) * 4);
    if (iVar8 == -1) goto LAB_145cea773;
    do {
      lVar7 = *plVar1 + (longlong)iVar8 * 0x40;
      if (*(char *)(*plVar1 + (longlong)iVar8 * 0x40) == '\b') break;
      iVar8 = *(int *)(lVar7 + 0x38);
      lVar7 = 0;
    } while (iVar8 != -1);
  }
  if ((ulonglong *)(lVar7 + 0x18) == &local_88) {
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar7 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(ulonglong *)(lVar7 + 0x18) = local_88;
    local_88 = 0;
    *(undefined4 *)(lVar7 + 0x20) = (undefined4)local_80;
    *(undefined4 *)(lVar7 + 0x24) = local_80._4_4_;
  }
  FUN_1400b22c2(&local_88,"/Engine/EngineResources/SlatePost4_RT.SlatePost4_RT");
  if (*(int *)(param_1 + 8) != *(int *)((longlong)param_1 + 0x6c)) {
    puVar5 = param_1 + 0xe;
    if ((undefined8 *)param_1[0xf] != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)param_1[0xf];
    }
    iVar8 = *(int *)((longlong)puVar5 + (ulonglong)(*(int *)(param_1 + 0x10) - 1U & 0x10) * 4);
    if (iVar8 != -1) {
      do {
        lVar7 = *plVar1 + (longlong)iVar8 * 0x40;
        if (*(char *)(*plVar1 + (longlong)iVar8 * 0x40) == '\x10') break;
        iVar8 = *(int *)(lVar7 + 0x38);
        lVar7 = 0;
      } while (iVar8 != -1);
      goto LAB_145cea6f4;
    }
  }
  lVar7 = 0;
LAB_145cea6f4:
  if ((ulonglong *)(lVar7 + 0x18) == &local_88) {
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar7 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(ulonglong *)(lVar7 + 0x18) = local_88;
    *(undefined4 *)(lVar7 + 0x20) = (undefined4)local_80;
    *(undefined4 *)(lVar7 + 0x24) = local_80._4_4_;
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145cea8e6 FUN_145cea8e6 body=278 status=ok
// SIG undefined FUN_145cea8e6(void)

undefined4 * FUN_145cea8e6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  byte *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145ceab4a(param_1,local_48);
  uVar2 = param_3[1];
  *local_40 = *(byte *)*param_3;
  FUN_145cea9fe(local_40 + 8,uVar2);
  local_40[0x38] = 0xff;
  local_40[0x39] = 0xff;
  local_40[0x3a] = 0xff;
  local_40[0x3b] = 0xff;
  local_4c = local_48[0];
  bVar1 = *local_40;
  cVar4 = FUN_145ceaa98(param_1,bVar1,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & (uint)bVar1;
      *(uint *)(local_40 + 0x3c) = uVar6;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x38) =
           *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar6) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar6) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_14152a758(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cea9fe FUN_145cea9fe body=153 status=ok
// SIG undefined FUN_145cea9fe(void)

byte * FUN_145cea9fe(byte *param_1,byte *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  *param_1 = *param_1 & 0xfe | *param_2 & 1;
  lVar1 = *(longlong *)(param_2 + 8);
  *(longlong *)(param_1 + 8) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  bVar2 = DAT_14c950c29;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  lVar1 = *(longlong *)(param_2 + 0x20);
  *(longlong *)(param_1 + 0x20) = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_14689c22e();
  }
  param_1[0x28] = param_1[0x28] & 0xfe | param_2[0x28] & 1;
  return param_1;
}



// FUNCTION 145ceaa98 FUN_145ceaa98 body=177 status=ok
// SIG undefined FUN_145ceaa98(void)

undefined8 FUN_145ceaa98(longlong *param_1,uint param_2,char *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong *plVar14;
  int iVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar15 * 0x40);
        if (*(char *)(*param_1 + (longlong)iVar15 * 0x40) == *param_3) {
          if (*(longlong *)(puVar1 + 6) != 0) {
            FUN_1400020a8();
          }
          uVar2 = *(undefined4 *)param_3;
          uVar3 = *(undefined4 *)(param_3 + 4);
          uVar4 = *(undefined4 *)(param_3 + 8);
          uVar5 = *(undefined4 *)(param_3 + 0xc);
          uVar6 = *(undefined4 *)(param_3 + 0x10);
          uVar7 = *(undefined4 *)(param_3 + 0x14);
          uVar8 = *(undefined4 *)(param_3 + 0x18);
          uVar9 = *(undefined4 *)(param_3 + 0x1c);
          uVar10 = *(undefined4 *)(param_3 + 0x20);
          uVar11 = *(undefined4 *)(param_3 + 0x24);
          uVar12 = *(undefined4 *)(param_3 + 0x28);
          uVar13 = *(undefined4 *)(param_3 + 0x2c);
          *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(param_3 + 0x30);
          puVar1[8] = uVar10;
          puVar1[9] = uVar11;
          puVar1[10] = uVar12;
          puVar1[0xb] = uVar13;
          puVar1[4] = uVar6;
          puVar1[5] = uVar7;
          puVar1[6] = uVar8;
          puVar1[7] = uVar9;
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          puVar1[2] = uVar4;
          puVar1[3] = uVar5;
          FUN_147514f92(param_1,*param_4);
          *param_4 = iVar15;
          return 1;
        }
        iVar15 = puVar1[0xe];
      } while (iVar15 != -1);
    }
  }
  return 0;
}



// FUNCTION 145ceab4a FUN_145ceab4a body=230 status=ok
// SIG undefined FUN_145ceab4a(void)

int * FUN_145ceab4a(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 145ceac30 FUN_145ceac30 body=73 status=ok
// SIG undefined FUN_145ceac30(void)

void FUN_145ceac30(longlong param_1)

{
  FUN_140457ffc(&DAT_14cae3bf0,param_1);
  FUN_140457ffc(&DAT_14cae3c08,param_1);
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_145ceac7a(param_1 + 0x30);
  }
  FUN_145ceacaa(param_1);
  return;
}



// FUNCTION 145ceac7a FUN_145ceac7a body=48 status=ok
// SIG undefined FUN_145ceac7a(void)

void FUN_145ceac7a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 145ceacaa FUN_145ceacaa body=104 status=ok
// SIG undefined FUN_145ceacaa(void)

void FUN_145ceacaa(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = (longlong *)(param_1 + 0x48);
  puVar3 = *(undefined8 **)(param_1 + 0x48);
  if (puVar3 != (undefined8 *)0x0) {
    do {
      FUN_14152a900(param_1,*puVar3);
      puVar3 = (undefined8 *)puVar3[1];
    } while (puVar3 != (undefined8 *)0x0);
    lVar2 = *plVar1;
    while (lVar2 != 0) {
      lVar2 = *(longlong *)(lVar2 + 8);
      FUN_1400020a8();
      *plVar1 = lVar2;
    }
  }
  *plVar1 = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
                    /* WARNING: Could not recover jumptable at 0x000145cead0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x40) + 8))(param_1 + 0x40,0);
  return;
}



// FUNCTION 145cead12 FUN_145cead12 body=310 status=ok
// SIG undefined FUN_145cead12(void)

void FUN_145cead12(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_38 = 0;
  uStack_30 = 0;
  FUN_140e6158c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = (undefined4)local_38;
  uStack_44 = local_38._4_4_;
  uStack_40 = (undefined4)uStack_30;
  uStack_3c = uStack_30._4_4_;
  local_60 = local_28;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_58 = (undefined4)uStack_20;
  uStack_54 = uStack_20._4_4_;
  uStack_50 = (undefined4)local_18;
  uStack_4c = local_18._4_4_;
  FUN_145ceae4a(&local_60,&local_48);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ceae4a FUN_145ceae4a body=124 status=ok
// SIG undefined FUN_145ceae4a(void)

void FUN_145ceae4a(undefined8 param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145ceaed8(param_1,&local_28);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(local_28 + 0x170) = *param_2;
  *(undefined4 *)(local_28 + 0x174) = uVar2;
  *(undefined4 *)(local_28 + 0x178) = uVar3;
  *(undefined4 *)(local_28 + 0x17c) = uVar4;
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ceaed8 FUN_145ceaed8 body=144 status=ok
// SIG undefined FUN_145ceaed8(void)

undefined8 * FUN_145ceaed8(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140df5234(param_1,&local_28);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ceaf76 FUN_145ceaf76 body=388 status=ok
// SIG undefined FUN_145ceaf76(void)

undefined8 * FUN_145ceaf76(undefined8 *param_1)

{
  byte bVar1;
  undefined1 auStack_48 [32];
  int local_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1458b005c();
  *param_1 = &PTR_FUN_14b4bdbd0;
  param_1[0x72] = &PTR_LAB_14b4be270;
  *(undefined2 *)((longlong)param_1 + 0x3c4) = 0;
  *(undefined4 *)(param_1 + 0x79) = 0x400;
  param_1[0x7e] = 0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x404) = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0;
  param_1[0x8e] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x95) = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  FUN_1446f470e(&local_28,L"BeaconDriverHost",1);
  param_1[0x2e] = CONCAT44(uStack_24,local_28);
  local_28 = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  bVar1 = FUN_141369f9a(&DAT_14c846b20,L"BeaconPort=",&local_28);
  if ((local_28 != 0 & bVar1) == 1) {
    *(int *)(param_1 + 0x78) = local_28;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ceb0fc FUN_145ceb0fc body=45 status=ok
// SIG undefined FUN_145ceb0fc(void)

longlong FUN_145ceb0fc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10;
  FUN_145ceb12a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ceb12a FUN_145ceb12a body=212 status=ok
// SIG undefined FUN_145ceb12a(void)

void FUN_145ceb12a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14befdc40;
  param_1[1] = &PTR_LAB_14befdc70;
  param_1[2] = &PTR_FUN_14befdce0;
  plVar3 = (longlong *)param_1[0x17];
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
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_145ceb1fe(param_1 + 0xc);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  plVar3 = (longlong *)param_1[6];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[4];
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
  FUN_1410c966c(param_1);
  return;
}



// FUNCTION 145ceb1fe FUN_145ceb1fe body=53 status=ok
// SIG undefined FUN_145ceb1fe(void)

void FUN_145ceb1fe(longlong *param_1)

{
  FUN_145ceb234();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ceb234 FUN_145ceb234 body=90 status=ok
// SIG undefined FUN_145ceb234(void)

void FUN_145ceb234(longlong param_1)

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



// FUNCTION 145ceb28e FUN_145ceb28e body=152 status=ok
// SIG undefined FUN_145ceb28e(void)

void FUN_145ceb28e(void)

{
  undefined8 *puVar1;
  
  DAT_14c992a30 = (undefined8 *)0x0;
  DAT_14c992a38 = 6;
  FUN_145ceb326(&DAT_14c992a30,6,0);
  puVar1 = DAT_14c992a30;
  *DAT_14c992a30 = 0xbff0000000000000;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0xbff0000000000000;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0xbff0000000000000;
  puVar1[9] = 0x3ff0000000000000;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0x3ff0000000000000;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0x3ff0000000000000;
  atexit((_func_5014 *)&LAB_142989314);
  return;
}



// FUNCTION 145ceb326 FUN_145ceb326 body=115 status=ok
// SIG undefined FUN_145ceb326(void)

void FUN_145ceb326(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145ceb39a FUN_145ceb39a body=37 status=ok
// SIG undefined FUN_145ceb39a(void)

void FUN_145ceb39a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xb0);
  FUN_145ceb3c0(param_2);
  return;
}



// FUNCTION 145ceb3c0 FUN_145ceb3c0 body=229 status=ok
// SIG undefined FUN_145ceb3c0(void)

undefined8 * FUN_145ceb3c0(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(param_1 + 1);
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_14b0a4ff0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0xf00000d0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0x4060000000000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x4068000000000000;
  *(undefined4 *)(param_1 + 0xe) = 0x3f000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  FUN_1446ddc76(local_28,"SpawnAnims.AIChosenStance",1);
  FUN_1447683ea(param_1 + 0x15,local_28,0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ceb4a6 FUN_145ceb4a6 body=40 status=ok
// SIG undefined FUN_145ceb4a6(void)

undefined8 FUN_145ceb4a6(undefined8 param_1,int param_2)

{
  FUN_145ceb4ce();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ceb4ce FUN_145ceb4ce body=227 status=ok
// SIG undefined FUN_145ceb4ce(void)

void FUN_145ceb4ce(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b2e2480;
  param_1[5] = &PTR_FUN_14b2e2ee0;
  param_1[6] = &PTR_LAB_14b2e2f20;
  param_1[0x55] = &PTR_FUN_14b2e2f70;
  param_1[0x56] = &PTR_FUN_14b2e2ff0;
  param_1[0x57] = &PTR_FUN_14b2e3000;
  param_1[0xc4] = &PTR_FUN_14b2e3030;
  param_1[0xff] = &PTR_FUN_14b2e3040;
  param_1[0x108] = &PTR_FUN_14b2e3050;
  param_1[0x109] = &PTR_FUN_14b2e30f0;
  if (param_1[0x17b] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x17a];
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
  FUN_14076ba26(param_1 + 0x12a);
  FUN_14028f33c(param_1);
  return;
}



// FUNCTION 145ceb5b2 FUN_145ceb5b2 body=45 status=ok
// SIG undefined FUN_145ceb5b2(void)

undefined8 FUN_145ceb5b2(undefined8 param_1,int param_2)

{
  FUN_145ceb5e0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1d8);
  }
  return param_1;
}



// FUNCTION 145ceb5e0 FUN_145ceb5e0 body=122 status=ok
// SIG undefined FUN_145ceb5e0(void)

void FUN_145ceb5e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0cf0f0;
  FUN_144a2da94(param_1 + 0x33);
  FUN_144a2da94(param_1 + 0x2c);
  FUN_144a2da94(param_1 + 0x25);
  FUN_144a2da94(param_1 + 0x1e);
  FUN_144a2da94(param_1 + 0x17);
  FUN_144a2da94(param_1 + 0x10);
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_144a2da94(param_1 + 7);
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 145ceb65a FUN_145ceb65a body=40 status=ok
// SIG undefined FUN_145ceb65a(void)

undefined8 FUN_145ceb65a(undefined8 param_1,int param_2)

{
  FUN_145ceb682();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ceb682 FUN_145ceb682 body=133 status=ok
// SIG undefined FUN_145ceb682(void)

void FUN_145ceb682(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b45a080;
  FUN_145ceb707(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_145ceb738(param_1 + 9);
  FUN_145ceb76d(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ceb707 FUN_145ceb707 body=49 status=ok
// SIG undefined FUN_145ceb707(void)

void FUN_145ceb707(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145ceb738 FUN_145ceb738 body=53 status=ok
// SIG undefined FUN_145ceb738(void)

void FUN_145ceb738(longlong *param_1)

{
  FUN_145ceb7a4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ceb76d FUN_145ceb76d body=54 status=ok
// SIG undefined FUN_145ceb76d(void)

void FUN_145ceb76d(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140cc83f7(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 145ceb7a4 FUN_145ceb7a4 body=338 status=ok
// SIG undefined FUN_145ceb7a4(void)

void FUN_145ceb7a4(longlong *param_1)

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
      FUN_140cc83f7(*(undefined8 *)(lVar2 + 8 + lVar3 * 0x28),
                    *(undefined4 *)(lVar2 + 0x10 + lVar3 * 0x28));
      if (*(longlong *)(lVar2 + 8 + lVar3 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ceb8f8 FUN_145ceb8f8 body=148 status=ok
// SIG undefined FUN_145ceb8f8(void)

void FUN_145ceb8f8(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145ceb98e(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ceb98e FUN_145ceb98e body=18 status=ok
// SIG undefined FUN_145ceb98e(void)

void FUN_145ceb98e(longlong param_1)

{
  if (param_1 != 0) {
    FUN_145c7c2ca(param_1 + 0x4ea0);
    return;
  }
  return;
}



// FUNCTION 145ceb9a0 FUN_145ceb9a0 body=80 status=ok
// SIG undefined FUN_145ceb9a0(void)

void FUN_145ceb9a0(undefined8 param_1)

{
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_14152a98e();
  local_11 = 0;
  FUN_140755a72(param_1,"Event_SetIsOzone");
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ceb9f2 FUN_145ceb9f2 body=196 status=ok
// SIG undefined FUN_145ceb9f2(void)

void FUN_145ceb9f2(int param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  
  if (DAT_14cb98910 != DAT_14cb9893c) {
    puVar2 = &DAT_14cb98940;
    if (DAT_14cb98948 != (undefined *)0x0) {
      puVar2 = DAT_14cb98948;
    }
    for (iVar1 = *(int *)(puVar2 + ((longlong)param_1 & (longlong)DAT_14cb98950 - 1U) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x20 + DAT_14cb98908 + 0x18)) {
      if (*(int *)(DAT_14cb98908 + (longlong)iVar1 * 0x20) == param_1) {
        puVar2 = &DAT_14cb98940;
        if (DAT_14cb98948 != (undefined *)0x0) {
          puVar2 = DAT_14cb98948;
        }
        lVar5 = (longlong)*(int *)(DAT_14cb98908 + 0x1c + (longlong)iVar1 * 0x20);
        iVar3 = *(int *)(puVar2 + lVar5 * 4);
        if (iVar3 == iVar1) {
          piVar4 = (int *)(puVar2 + lVar5 * 4);
        }
        else {
          do {
            piVar4 = (int *)(DAT_14cb98908 + (longlong)iVar3 * 0x20 + 0x18);
            iVar3 = *piVar4;
          } while (iVar3 != iVar1);
        }
        *piVar4 = *(int *)(DAT_14cb98908 + (longlong)iVar1 * 0x20 + 0x18);
        FUN_145cebab6();
        return;
      }
    }
  }
  return;
}



// FUNCTION 145cebab6 FUN_145cebab6 body=68 status=ok
// SIG undefined FUN_145cebab6(void)

void FUN_145cebab6(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = DAT_14cb98908;
  lVar2 = (longlong)param_1 * 0x20;
  FUN_145da91ec(*(undefined8 *)(DAT_14cb98908 + 8 + lVar2),
                *(undefined4 *)(DAT_14cb98908 + 0x10 + lVar2));
  if (*(longlong *)(lVar1 + 8 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_145cebafa(param_1);
  return;
}



// FUNCTION 145cebafa FUN_145cebafa body=137 status=ok
// SIG undefined FUN_145cebafa(void)

void FUN_145cebafa(int param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  undefined *puVar4;
  
  lVar2 = DAT_14cb98908;
  if (DAT_14cb9893c != 0) {
    *(int *)(DAT_14cb98908 + (longlong)DAT_14cb98938 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar3 = -1;
  if (0 < DAT_14cb9893c) {
    iVar3 = DAT_14cb98938;
  }
  *(int *)(lVar2 + (longlong)param_1 * 0x20 + 4) = iVar3;
  DAT_14cb9893c = DAT_14cb9893c + 1;
  puVar4 = &DAT_14cb98918;
  if (DAT_14cb98928 != (undefined *)0x0) {
    puVar4 = DAT_14cb98928;
  }
  iVar3 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar3 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb98938 = param_1;
  *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar3 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 145cebb84 FUN_145cebb84 body=505 status=ok
// SIG undefined FUN_145cebb84(void)

void FUN_145cebb84(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 unaff_RBX;
  undefined7 uVar4;
  bool bVar5;
  undefined1 auStack_d8 [36];
  int local_b4;
  undefined8 local_b0;
  undefined1 local_a8 [40];
  undefined1 local_80 [40];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_b0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  local_b4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b4);
  }
  uVar2 = local_b0;
  iVar1 = local_b4;
  bVar5 = local_b4 != 0;
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1447a97f4(local_80,&local_58);
  cVar3 = (**(code **)(*param_1 + 0xa08))(param_1,local_80,uVar2,CONCAT71(uVar4,bVar5) & 0xffffffff)
  ;
  uVar2 = local_b0;
  if (cVar3 == '\0') {
    FUN_1468998ea(L"ServerPerformSpecificMelee_Validate");
  }
  else {
    FUN_1447a97f4(local_a8,&local_58);
    (**(code **)(*param_1 + 0xa10))(param_1,local_a8,uVar2,CONCAT71(uVar4,iVar1 != 0) & 0xffffffff);
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cebd7e FUN_145cebd7e body=27 status=ok
// SIG undefined FUN_145cebd7e(void)

undefined1 FUN_145cebd7e(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  return 1;
}



// FUNCTION 145cebd9a FUN_145cebd9a body=161 status=ok
// SIG undefined FUN_145cebd9a(void)

void FUN_145cebd9a(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [40];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_1449ce97a();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x700))(param_1);
  }
  FUN_1447f69b6(param_1 + 0xa5e);
  FUN_1447a97f4(local_58,param_2);
  FUN_14152abda(param_1 + 0x1034,local_58,param_3,param_4);
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cebe3c FUN_145cebe3c body=138 status=ok
// SIG undefined FUN_145cebe3c(void)

void FUN_145cebe3c(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 *local_40;
  undefined8 local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_14005ac26();
  lVar2 = FUN_14577e4bc();
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x2198));
  local_40 = &local_44;
  local_44 = uVar1;
  local_38 = param_2;
  FUN_145cebec8(lVar2 + 0x2148,local_2c);
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x2198));
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cebec8 FUN_145cebec8 body=279 status=ok
// SIG undefined FUN_145cebec8(void)

undefined4 * FUN_145cebec8(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145cec16c(param_1,local_48);
  FUN_145cebfe0(param_3,local_40);
  local_40[8] = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = *local_40;
  cVar2 = FUN_145cec0c8(param_1,uVar4,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[9] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[8] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_145cec254(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cebfe0 FUN_145cebfe0 body=115 status=ok
// SIG undefined FUN_145cebfe0(void)

undefined4 * FUN_145cebfe0(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)param_1[1];
  *param_2 = *(undefined4 *)*param_1;
  *(undefined8 *)(param_2 + 2) = *puVar2;
  *(undefined8 *)(param_2 + 4) = 0;
  iVar1 = *(int *)(puVar2 + 2);
  _Src = (void *)puVar2[1];
  param_2[6] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_2[7] = 0;
  }
  else {
    FUN_145cec054(param_2 + 4,iVar1,0);
    memcpy(*(void **)(param_2 + 4),_Src,(longlong)iVar1 * 0x14);
  }
  return param_2;
}



// FUNCTION 145cec054 FUN_145cec054 body=115 status=ok
// SIG undefined FUN_145cec054(void)

void FUN_145cec054(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x14,4);
    iVar2 = (int)(uVar1 / 0x14);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x14,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145cec0c8 FUN_145cec0c8 body=164 status=ok
// SIG undefined FUN_145cec0c8(void)

undefined8 FUN_145cec0c8(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar10 * 0x28);
        if (*piVar1 == *param_3) {
          if (*(longlong *)(piVar1 + 4) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[5];
          iVar7 = param_3[6];
          iVar8 = param_3[7];
          piVar1[4] = param_3[4];
          piVar1[5] = iVar6;
          piVar1[6] = iVar7;
          piVar1[7] = iVar8;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_148206912(param_1,*param_4);
          *param_4 = iVar10;
          return 1;
        }
        iVar10 = piVar1[8];
      } while (iVar10 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 145cec16c FUN_145cec16c body=231 status=ok
// SIG undefined FUN_145cec16c(void)

int * FUN_145cec16c(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 145cec254 FUN_145cec254 body=428 status=ok
// SIG undefined FUN_145cec254(void)

void FUN_145cec254(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x28);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x24 + lVar6 * 0x28) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar6 * 0x28) =
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



// FUNCTION 145cec402 FUN_145cec402 body=38 status=ok
// SIG undefined FUN_145cec402(void)

undefined8 FUN_145cec402(undefined8 param_1,int param_2)

{
  FUN_145cec428();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cec428 FUN_145cec428 body=213 status=ok
// SIG undefined FUN_145cec428(void)

void FUN_145cec428(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149edb358;
  FUN_14152ad0f(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x14];
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
  FUN_145cec569(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_145cec533(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145cec4fe(param_1 + 5);
  return;
}



// FUNCTION 145cec4fe FUN_145cec4fe body=53 status=ok
// SIG undefined FUN_145cec4fe(void)

void FUN_145cec4fe(longlong *param_1)

{
  FUN_145cec5a0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cec533 FUN_145cec533 body=54 status=ok
// SIG undefined FUN_145cec533(void)

void FUN_145cec533(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 145cec569 FUN_145cec569 body=55 status=ok
// SIG undefined FUN_145cec569(void)

void FUN_145cec569(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 145cec5a0 FUN_145cec5a0 body=341 status=ok
// SIG undefined FUN_145cec5a0(void)

void FUN_145cec5a0(longlong *param_1)

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
      FUN_1469723aa(*(undefined8 *)(*local_68 + 0x18 + (longlong)iStack_4c * 0x28));
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



// FUNCTION 145cec6f6 FUN_145cec6f6 body=49 status=ok
// SIG undefined FUN_145cec6f6(void)

void FUN_145cec6f6(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145cec744(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000145cec70b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  uVar2 = FUN_1414015aa(&DAT_14c9a2040);
  FUN_145b073e8(uVar2);
  return;
}



// FUNCTION 145cec728 FUN_145cec728 body=28 status=ok
// SIG undefined FUN_145cec728(void)

void FUN_145cec728(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414015aa(&DAT_14c9a2040);
  FUN_145b073e8(uVar1);
  return;
}



// FUNCTION 145cec744 FUN_145cec744 body=191 status=ok
// SIG undefined FUN_145cec744(void)

longlong FUN_145cec744(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_14604106e();
  lVar3 = *param_1;
  if (DAT_14c9a2060 != DAT_14c9a208c) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14c9a2090;
    if (DAT_14c9a2098 != (undefined *)0x0) {
      puVar7 = DAT_14c9a2098;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14c9a20a0 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14c9a2058 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14c9a2050;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 145cec804 FUN_145cec804 body=71 status=ok
// SIG undefined FUN_145cec804(void)

void FUN_145cec804(undefined8 param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = DAT_14ca84b20;
  if (DAT_14ca84b20 != 0) {
    DAT_14ca84b20 = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_145cec84c(param_1);
  return;
}



// FUNCTION 145cec84c FUN_145cec84c body=63 status=ok
// SIG undefined FUN_145cec84c(void)

void FUN_145cec84c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14047a8f2(param_1);
  return;
}



// FUNCTION 145cec88c FUN_145cec88c body=24 status=ok
// SIG undefined FUN_145cec88c(void)

void FUN_145cec88c(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145cec8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145cec8a4 FUN_145cec8a4 body=38 status=ok
// SIG undefined FUN_145cec8a4(void)

undefined8 FUN_145cec8a4(undefined8 param_1,int param_2)

{
  FUN_145cec8ca();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cec8ca FUN_145cec8ca body=79 status=ok
// SIG undefined FUN_145cec8ca(void)

void FUN_145cec8ca(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b416000;
  FUN_145cec919(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145cec915. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145cec919 FUN_145cec919 body=60 status=ok
// SIG undefined FUN_145cec919(void)

void FUN_145cec919(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      FUN_1488ef3fc(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145cec960 FUN_145cec960 body=123 status=ok
// SIG undefined FUN_145cec960(void)

undefined8 * FUN_145cec960(undefined8 *param_1)

{
  FUN_140e2f36c();
  *param_1 = &PTR_FUN_14b571c10;
  param_1[5] = &PTR_LAB_14b5720d0;
  param_1[0x2d] = &PTR_LAB_14b572110;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x2ec) = 1;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0xbff0000000000000;
  *(undefined4 *)(param_1 + 0x61) = 0;
  return param_1;
}



// FUNCTION 145cec9db FUN_145cec9db body=46 status=ok
// SIG undefined FUN_145cec9db(void)

void FUN_145cec9db(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_145ceca0a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b594e10;
  puVar1[5] = &PTR_FUN_14b595130;
  return;
}



// FUNCTION 145ceca0a FUN_145ceca0a body=88 status=ok
// SIG undefined FUN_145ceca0a(void)

undefined8 * FUN_145ceca0a(undefined8 *param_1)

{
  FUN_141494e4e();
  *param_1 = &PTR_FUN_14a548360;
  param_1[5] = &PTR_FUN_14a548680;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(byte *)((longlong)param_1 + 0xd9) = *(byte *)((longlong)param_1 + 0xd9) & 0xfe;
  FUN_140e2f50a(param_1,0);
  *(undefined1 *)((longlong)param_1 + 0x181) = 0;
  return param_1;
}



// FUNCTION 145ceca6c FUN_145ceca6c body=125 status=ok
// SIG undefined FUN_145ceca6c(void)

void FUN_145ceca6c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b99c4e0;
  param_1[4] = &PTR_FUN_14b99c520;
  plVar3 = (longlong *)param_1[0x16];
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
  *param_1 = &PTR_FUN_14b99c530;
  param_1[4] = &PTR_LAB_14b99c570;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2f66a(param_1);
  return;
}



// FUNCTION 145cecaf4 FUN_145cecaf4 body=125 status=ok
// SIG undefined FUN_145cecaf4(void)

void FUN_145cecaf4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b99df80;
  param_1[4] = &PTR_FUN_14b99dfc0;
  plVar3 = (longlong *)param_1[0x16];
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
  *param_1 = &PTR_FUN_14b99dfd0;
  param_1[4] = &PTR_LAB_14b99e010;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140d2f66a(param_1);
  return;
}



// FUNCTION 145cecb72 FUN_145cecb72 body=38 status=ok
// SIG undefined FUN_145cecb72(void)

undefined8 FUN_145cecb72(undefined8 param_1,int param_2)

{
  FUN_145cecb98();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cecb98 FUN_145cecb98 body=96 status=ok
// SIG undefined FUN_145cecb98(void)

void FUN_145cecb98(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba447b0;
  FUN_145cca029(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[4];
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
                    /* WARNING: Could not recover jumptable at 0x000145cecbe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145cecc00 FUN_145cecc00 body=128 status=ok
// SIG undefined FUN_145cecc00(void)

undefined8 * FUN_145cecc00(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_14007ca06();
  FUN_145c2210c(param_1,uVar1);
  *param_1 = &PTR_FUN_14bcb3cc0;
  param_1[7] = &PTR_LAB_14bcb3fb0;
  param_1[8] = &PTR_LAB_14bcb3fd0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x120);
  *puVar2 = FUN_145e44161;
  memset(puVar2 + 1,0,0x118);
  FUN_145cecc80(puVar2 + 2);
  param_1[9] = puVar2 + 2;
  return param_1;
}



// FUNCTION 145cecc80 FUN_145cecc80 body=132 status=ok
// SIG undefined FUN_145cecc80(void)

void FUN_145cecc80(undefined8 *param_1)

{
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
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
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  return;
}



// FUNCTION 145cecd04 FUN_145cecd04 body=42 status=ok
// SIG undefined FUN_145cecd04(void)

void FUN_145cecd04(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_145cecd2e(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 145cecd2e FUN_145cecd2e body=83 status=ok
// SIG undefined FUN_145cecd2e(void)

void FUN_145cecd2e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_145cecd82(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145cecd82(param_1);
  return;
}



// FUNCTION 145cecd82 FUN_145cecd82 body=53 status=ok
// SIG undefined FUN_145cecd82(void)

void FUN_145cecd82(longlong *param_1)

{
  FUN_14152ad40();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cecdb8 FUN_145cecdb8 body=56 status=ok
// SIG undefined FUN_145cecdb8(void)

void FUN_145cecdb8(longlong param_1)

{
  FUN_1403d8a98();
  if (DAT_14cb913f0 == param_1) {
    FUN_145cecdf0(DAT_14cb90c48 + 0x38);
    FUN_145cece34();
    return;
  }
  return;
}



// FUNCTION 145cecdf0 FUN_145cecdf0 body=67 status=ok
// SIG undefined FUN_145cecdf0(void)

void FUN_145cecdf0(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145cecf08(param_1);
    FUN_145df69a0(param_1,0);
    return;
  }
  FUN_145df69a0(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1489d5ab4(param_1);
  return;
}



// FUNCTION 145cece34 FUN_145cece34 body=167 status=ok
// SIG undefined FUN_145cece34(void)

void FUN_145cece34(void)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb90f30);
  FUN_1447a1747(DAT_14cb90ef8,DAT_14cb90f00);
  DAT_14cb90f00 = 0;
  if (DAT_14cb90f04 != 0) {
    FUN_1408be2c4(&DAT_14cb90ef8,0);
  }
  DAT_14cb90f10 = 0;
  if (DAT_14cb90f14 != 0) {
    FUN_14480809c(&DAT_14cb90f08,0);
  }
  FUN_145cecedb(DAT_14cb90f18,DAT_14cb90f20);
  DAT_14cb90f20 = 0;
  if (DAT_14cb90f24 != 0) {
    FUN_1489e9efc();
  }
                    /* WARNING: Could not recover jumptable at 0x000145cecead. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb90f30);
  return;
}



// FUNCTION 145cecedb FUN_145cecedb body=45 status=ok
// SIG undefined FUN_145cecedb(void)

void FUN_145cecedb(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 145cecf08 FUN_145cecf08 body=335 status=ok
// SIG undefined FUN_145cecf08(void)

void FUN_145cecf08(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 145ced058 FUN_145ced058 body=129 status=ok
// SIG undefined FUN_145ced058(void)

void FUN_145ced058(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_14116599c();
    }
    lVar2 = FUN_1400f6f32(lVar2);
    if (((lVar2 != 0) && (lVar3 != 0)) && (*(longlong *)(lVar2 + 0x68) != 0)) {
      uVar1 = FUN_140def96c(*(longlong *)(lVar2 + 0x68),param_2 + 0x18);
      FUN_145ced0da(lVar3,param_4,uVar1);
      return;
    }
  }
  return;
}



// FUNCTION 145ced0da FUN_145ced0da body=150 status=ok
// SIG undefined FUN_145ced0da(void)

void FUN_145ced0da(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x2e0))(param_1,&local_30);
  if (local_30 != (longlong *)0x0) {
    if (((byte *)*param_2 != (byte *)0x0) && ((*(byte *)*param_2 & 3) != 0)) {
      (**(code **)(*local_30 + 8))(local_30,param_2);
    }
    FUN_14152af2e(param_1,param_3,&local_30);
    if (local_30 != (longlong *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ced172 FUN_145ced172 body=205 status=ok
// SIG undefined FUN_145ced172(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ced172(void)

{
  if ((DAT_14c9f2aff & 2) == 0) {
    DAT_14c9f2aff = DAT_14c9f2aff | 2;
    _DAT_14c9f2aa0 = L"FLumenRadiosityIndirectArgsCS";
    _DAT_14c9f2ab8 = FUN_146826540;
    _DAT_14c9f2ac0 = FUN_146825d77;
    _DAT_14c9f2ac8 = FUN_146825fd6;
    _DAT_14c9f2ad0 = FUN_1407e02ea;
    _DAT_14c9f2ad8 = FUN_146826273;
    _DAT_14c9f2ab0 = FUN_1471ed136;
    _DAT_14c9f2af0 = 0xffffffff000000e0;
    _DAT_14c9f2af8 = 8;
    DAT_14c9f2afc = 0;
    _DAT_14c9f2ae0 = &LAB_1471ed160;
    FUN_145ced240();
    FUN_1407e00cc(&DAT_14c9f2a98);
    return;
  }
  return;
}



// FUNCTION 145ced240 FUN_145ced240 body=123 status=ok
// SIG undefined FUN_145ced240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ced240(void)

{
  _DAT_14c9f79d0 = L"BASE";
  DAT_14c9f79fa = 4;
  _DAT_14c9f79d8 = FUN_140b35ae4();
  _DAT_14c9f79e0 = DAT_14c9f2aa8;
  _DAT_14c9f79e8 = &LAB_14682652b;
  DAT_14c9f2aa8 = &DAT_14c9f79d0;
  DAT_14c9f2afd = DAT_14c9f2afd + '\x01';
  _DAT_14c9f79f0 = 0x100000000;
  if (*(char *)(_DAT_14c9f79d8 + 100) != '\0') {
    DAT_14c9f2afe = DAT_14c9f2afe + '\x01';
  }
  return;
}



// FUNCTION 145ced2bc FUN_145ced2bc body=226 status=ok
// SIG undefined FUN_145ced2bc(void)

longlong * FUN_145ced2bc(longlong *param_1)

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
  pcVar13 = FUN_1462dc348;
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



// FUNCTION 145ced3a4 FUN_145ced3a4 body=132 status=ok
// SIG undefined FUN_145ced3a4(void)

undefined1 * FUN_145ced3a4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWIndirectArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145ced3a0;
}



// FUNCTION 145ced428 FUN_145ced428 body=146 status=ok
// SIG undefined FUN_145ced428(void)

code * FUN_145ced428(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145ced4ba();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RadiosityTexelTraceParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLumenRadiosityTexelTraceParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000014e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9f6150;
  return FUN_145ced3a4;
}



// FUNCTION 145ced4ba FUN_145ced4ba body=258 status=ok
// SIG undefined FUN_145ced4ba(void)

void FUN_145ced4ba(void)

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
              0x110) < DAT_14c9f61d0) {
    FUN_144b3d300(&DAT_14c9f61d0);
    if (DAT_14c9f61d0 == -1) {
      FUN_14152b212(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FLumenRadiosityTexelTraceParameters";
      local_38 = 0;
      local_50 = 0x80;
      local_58 = 0x132;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f6150,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d580f1);
      _Init_thread_footer(&DAT_14c9f61d0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ced5be FUN_145ced5be body=138 status=ok
// SIG undefined FUN_145ced5be(void)

code * FUN_145ced5be(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ProbeOcclusionStrength";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3c0000013d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f431c;
}



// FUNCTION 145ced648 FUN_145ced648 body=138 status=ok
// SIG undefined FUN_145ced648(void)

code * FUN_145ced648(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ProbeSpacingInRadiosityTexelsDivideShift";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c00000139;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f4430;
}



// FUNCTION 145ced6d2 FUN_145ced6d2 body=138 status=ok
// SIG undefined FUN_145ced6d2(void)

code * FUN_145ced6d2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RadiosityTileSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000013a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ced648;
}



// FUNCTION 145ced75c FUN_145ced75c body=38 status=ok
// SIG undefined FUN_145ced75c(void)

undefined8 FUN_145ced75c(undefined8 param_1,int param_2)

{
  FUN_14152b2f6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ced782 FUN_145ced782 body=40 status=ok
// SIG undefined FUN_145ced782(void)

undefined8 FUN_145ced782(undefined8 param_1,int param_2)

{
  FUN_145ced7aa();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ced7aa FUN_145ced7aa body=846 status=ok
// SIG undefined FUN_145ced7aa(void)

void FUN_145ced7aa(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14af166b0;
  FUN_145cedbcc(param_1 + 0x94);
  FUN_145cedaf8(param_1[0x91],*(undefined4 *)(param_1 + 0x92));
  if (param_1[0x91] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x88] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x87) = 0;
  if (param_1[0x86] != 0) {
    FUN_1400020a8();
  }
  FUN_140345f8a(param_1 + 0x7e);
  lVar1 = 0x3b8;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x388);
  lVar1 = 0x370;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x340);
  lVar1 = 0x328;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x2f8);
  lVar1 = 0x2e0;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x2b0);
  FUN_145cedb56(param_1 + 0x52);
  FUN_145cedb56(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0x4b) = 0;
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  FUN_140345f8a(param_1 + 0x42);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_140345f8a(param_1 + 0x37);
  *(undefined4 *)(param_1 + 0x35) = 0;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_140345f8a(param_1 + 0x2c);
  FUN_145cedaf8(param_1[0x29],*(undefined4 *)(param_1 + 0x2a));
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_145cedb20(param_1 + 0x1e);
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_145cedb20(param_1 + 0x12);
  FUN_145cedc08(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_145cedb96(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cedaf8 FUN_145cedaf8 body=40 status=ok
// SIG undefined FUN_145cedaf8(void)

void FUN_145cedaf8(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145cedb56(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 145cedb20 FUN_145cedb20 body=53 status=ok
// SIG undefined FUN_145cedb20(void)

void FUN_145cedb20(longlong *param_1)

{
  FUN_145cedc56();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cedb56 FUN_145cedb56 body=64 status=ok
// SIG undefined FUN_145cedb56(void)

void FUN_145cedb56(longlong *param_1)

{
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



// FUNCTION 145cedb96 FUN_145cedb96 body=54 status=ok
// SIG undefined FUN_145cedb96(void)

void FUN_145cedb96(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 145cedbcc FUN_145cedbcc body=60 status=ok
// SIG undefined FUN_145cedbcc(void)

void FUN_145cedbcc(longlong *param_1)

{
  FUN_1458dc1c8(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cedc08 FUN_145cedc08 body=77 status=ok
// SIG undefined FUN_145cedc08(void)

void FUN_145cedc08(longlong param_1,int param_2)

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



// FUNCTION 145cedc56 FUN_145cedc56 body=378 status=ok
// SIG undefined FUN_145cedc56(void)

void FUN_145cedc56(longlong *param_1)

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
      plVar4 = *(longlong **)(*local_70 + 0x18 + (longlong)iStack_54 * 0x28);
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
    FUN_140549ad6(param_1,0);
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



// FUNCTION 145ceddd2 FUN_145ceddd2 body=160 status=ok
// SIG undefined FUN_145ceddd2(void)

void FUN_145ceddd2(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xfb8))(param_1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cede74 FUN_145cede74 body=108 status=ok
// SIG undefined FUN_145cede74(void)

void FUN_145cede74(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x448) != 0) {
    lVar3 = FUN_140183ac4();
    lVar1 = *(longlong *)(param_1 + 0x448);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       (((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)))) {
      FUN_145cedee0(lVar1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 145cedee0 FUN_145cedee0 body=36 status=ok
// SIG undefined FUN_145cedee0(void)

void FUN_145cedee0(longlong param_1,undefined8 *param_2)

{
  FUN_145cedf04(param_1 + 0x3a58,*param_2);
  FUN_1404775ec(param_1);
  return;
}



// FUNCTION 145cedf04 FUN_145cedf04 body=132 status=ok
// SIG undefined FUN_145cedf04(void)

void FUN_145cedf04(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x3c) == param_2) {
          FUN_14571301e(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x3c + *param_1 + 0x34);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 145cedf88 FUN_145cedf88 body=45 status=ok
// SIG undefined FUN_145cedf88(void)

longlong FUN_145cedf88(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_145cedfb6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cedfb6 FUN_145cedfb6 body=168 status=ok
// SIG undefined FUN_145cedfb6(void)

void FUN_145cedfb6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a158810;
  param_1[1] = &PTR_FUN_14a158840;
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_145cee05e(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[3];
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
  FUN_1410c966c(param_1);
  return;
}



// FUNCTION 145cee05e FUN_145cee05e body=56 status=ok
// SIG undefined FUN_145cee05e(void)

void FUN_145cee05e(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145cee096 FUN_145cee096 body=137 status=ok
// SIG undefined FUN_145cee096(void)

void FUN_145cee096(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 4) {
    *(undefined4 *)(param_1 + 1) = 4;
    uVar2 = 4 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_145cee120(param_1,iVar1);
    }
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    do {
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      puVar3 = puVar3 + 2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    return;
  }
  if (iVar1 == 4) {
    return;
  }
  FUN_147cd4940(param_1,iVar1 + -4);
  FUN_147cd4990(param_1);
  return;
}



// FUNCTION 145cee120 FUN_145cee120 body=132 status=ok
// SIG undefined FUN_145cee120(void)

void FUN_145cee120(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145cee1ac FUN_145cee1ac body=529 status=ok
// SIG undefined FUN_145cee1ac(void)

undefined8 * FUN_145cee1ac(undefined8 *param_1)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140eb1504();
  *param_1 = &PTR_FUN_14b976df0;
  *(undefined4 *)(param_1 + 0xc) = 0x40400000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0xf00000d0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0xf00000d0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xf00000d0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xf00000d0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xf00000d0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0xf00000d0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = L"/Script/OakGame.GrenadeBehavior_PayloadSpring";
  local_30 = 0x2d;
  FUN_14475bf92(&local_58);
  _Src = local_48;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_1 + 0x14) = local_58._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_50._4_4_;
  ppvVar1 = (void **)(param_1 + 4);
  if (ppvVar1 != &local_48) {
    iVar2 = (int)uStack_40;
    lVar3 = (longlong)(int)uStack_40;
    *(int *)(param_1 + 5) = (int)uStack_40;
    if ((int)uStack_40 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_40 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar1,_Src,lVar3 * 2);
      }
    }
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) & 0xf8 | 4;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cee3be FUN_145cee3be body=43 status=ok
// SIG undefined FUN_145cee3be(void)

undefined8 FUN_145cee3be(undefined8 param_1,int param_2)

{
  FUN_145cee3ea();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x220);
  }
  return param_1;
}



// FUNCTION 145cee3ea FUN_145cee3ea body=186 status=ok
// SIG undefined FUN_145cee3ea(void)

void FUN_145cee3ea(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8adad0;
  FUN_140fe7f98(param_1 + 0x30);
  FUN_140d4710a(param_1 + 0x20);
  FUN_1447a1747(param_1[0x1e],*(undefined4 *)(param_1 + 0x1f));
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_145cee4a4(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145cee4a4 FUN_145cee4a4 body=40 status=ok
// SIG undefined FUN_145cee4a4(void)

void FUN_145cee4a4(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148c7d71a(param_1);
    param_1 = param_1 + 0x60;
  }
  return;
}



// FUNCTION 145cee4cc FUN_145cee4cc body=95 status=ok
// SIG undefined FUN_145cee4cc(void)

void FUN_145cee4cc(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 145cee52c FUN_145cee52c body=205 status=ok
// SIG undefined FUN_145cee52c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cee52c(void)

{
  if ((DAT_14ca5075f & 2) != 0) {
    return;
  }
  DAT_14ca5075f = DAT_14ca5075f | 2;
  _DAT_14ca50700 = L"FShadowProjectionPS5falsefalsefalse";
  _DAT_14ca50718 = FUN_146826540;
  _DAT_14ca50720 = FUN_146825d77;
  _DAT_14ca50728 = FUN_146825fd6;
  _DAT_14ca50730 = FUN_1407e02ea;
  _DAT_14ca50738 = FUN_146826273;
  _DAT_14ca50710 = FUN_1472eed32;
  _DAT_14ca50750 = 0xffffffff00000148;
  _DAT_14ca50758 = 8;
  DAT_14ca5075c = 0;
  _DAT_14ca50740 = &LAB_1472eed5e;
  FUN_145cee5fa();
  FUN_145cee6ee();
  FUN_1407e00cc(&DAT_14ca506f8);
  return;
}



// FUNCTION 145cee5fa FUN_145cee5fa body=121 status=ok
// SIG undefined FUN_145cee5fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cee5fa(void)

{
  FUN_145cee674();
  _DAT_14ca576f0 = L"ProjectionParameters";
  DAT_14ca5771a = FUN_140850cc5();
  _DAT_14ca576f8 = FUN_14142e7bc();
  _DAT_14ca57708 = &LAB_14682652b;
  _DAT_14ca57710 = 0x1000000e0;
  _DAT_14ca57718 = 0;
  _DAT_14ca57700 = DAT_14ca50708;
  DAT_14ca50708 = &DAT_14ca576f0;
  return;
}



// FUNCTION 145cee674 FUN_145cee674 body=121 status=ok
// SIG undefined FUN_145cee674(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cee674(void)

{
  FUN_145cee774();
  _DAT_14ca57720 = L"ShadowFadeFraction";
  DAT_14ca5774a = FUN_140850cc5();
  _DAT_14ca57728 = FUN_140ec6960();
  _DAT_14ca57738 = &LAB_14682652b;
  _DAT_14ca57740 = 0x100000130;
  _DAT_14ca57748 = 0;
  _DAT_14ca57730 = DAT_14ca50708;
  DAT_14ca50708 = &DAT_14ca57720;
  return;
}



// FUNCTION 145cee6ee FUN_145cee6ee body=133 status=ok
// SIG undefined FUN_145cee6ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cee6ee(void)

{
  _DAT_14ca577b0 = L"BASE";
  DAT_14ca577da = 4;
  FUN_1411c95a0();
  _DAT_14ca577c0 = DAT_14ca50708;
  _DAT_14ca577b8 = &DAT_14ca4ff98;
  _DAT_14ca577c8 = &LAB_14682652b;
  DAT_14ca50708 = &DAT_14ca577b0;
  DAT_14ca5075d = DAT_14ca5075d + '\x01';
  _DAT_14ca577d0 = 0x100000000;
  if (DAT_14ca4fffc != '\0') {
    DAT_14ca5075e = DAT_14ca5075e + '\x01';
  }
  return;
}



// FUNCTION 145cee774 FUN_145cee774 body=216 status=ok
// SIG undefined FUN_145cee774(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cee774(void)

{
  _DAT_14ca57780 = L"LightPosition";
  DAT_14ca577aa = FUN_140850cc5();
  _DAT_14ca57788 = FUN_140ec6960();
  _DAT_14ca57798 = &LAB_14682652b;
  _DAT_14ca577a0 = 0x10000013c;
  _DAT_14ca577a8 = 0;
  _DAT_14ca57790 = DAT_14ca50708;
  DAT_14ca50708 = &DAT_14ca57780;
  _DAT_14ca57750 = L"ShadowSharpen";
  DAT_14ca5777a = FUN_140850cc5();
  _DAT_14ca57758 = FUN_140ec6960();
  _DAT_14ca57768 = &LAB_14682652b;
  _DAT_14ca57770 = 0x100000136;
  _DAT_14ca57778 = 0;
  _DAT_14ca57760 = DAT_14ca50708;
  DAT_14ca50708 = &DAT_14ca57750;
  return;
}



// FUNCTION 145cee84c FUN_145cee84c body=79 status=ok
// SIG undefined FUN_145cee84c(void)

void FUN_145cee84c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    plVar3 = *(longlong **)(param_1 + 0x38);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145cee890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 145cee8a6 FUN_145cee8a6 body=79 status=ok
// SIG undefined FUN_145cee8a6(void)

void FUN_145cee8a6(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_145cee8f6(param_1 + 0x28);
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145cee8f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145cee8f6 FUN_145cee8f6 body=53 status=ok
// SIG undefined FUN_145cee8f6(void)

void FUN_145cee8f6(longlong *param_1)

{
  FUN_145cee92c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cee92c FUN_145cee92c body=318 status=ok
// SIG undefined FUN_145cee92c(void)

void FUN_145cee92c(longlong *param_1)

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
      FUN_145f97cf4(*local_68 + (longlong)iStack_4c * 0x70 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140875b54(param_1,0);
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



// FUNCTION 145ceea6c FUN_145ceea6c body=158 status=ok
// SIG undefined FUN_145ceea6c(void)

void FUN_145ceea6c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14152b6d4(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ceeb0c FUN_145ceeb0c body=113 status=ok
// SIG undefined FUN_145ceeb0c(void)

void FUN_145ceeb0c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1e0);
  FUN_145ceeb7e(param_2);
  *param_2 = &PTR_FUN_14b6341b0;
  *(undefined4 *)(param_2 + 0x32) = 0x41200000;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  *(undefined4 *)(param_2 + 0x39) = 0xf00000d0;
  param_2[0x3a] = 0;
  *(undefined4 *)(param_2 + 0x3b) = 0x3f800000;
  return;
}



// FUNCTION 145ceeb7e FUN_145ceeb7e body=223 status=ok
// SIG undefined FUN_145ceeb7e(void)

undefined8 * FUN_145ceeb7e(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14b42ad00;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  param_1[4] = local_48._0_8_;
  *(uchar (*) [8])(param_1 + 5) = local_48.Data4;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 10;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 10;
  memset(param_1 + 0x12,0,0x100);
  *param_1 = &PTR_FUN_14b9995d0;
  lVar1 = FUN_14592c742();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[10] = lVar1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ceec5e FUN_145ceec5e body=440 status=ok
// SIG undefined FUN_145ceec5e(void)

longlong * FUN_145ceec5e(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_a8 [44];
  undefined4 local_7c;
  undefined8 *local_78;
  ulonglong uStack_70;
  undefined **local_68;
  undefined8 local_60;
  longlong local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0;
  param_2[1] = 0;
  if ((*(longlong *)(param_1 + -0x410) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + -0x410) + 0x360) == 0)) goto LAB_145ceedde;
  lVar3 = FUN_1400f6f32();
  if ((lVar3 == 0) ||
     ((lVar3 = *(longlong *)(lVar3 + 0x68), lVar3 == 0 ||
      (lVar2 = *(longlong *)(param_1 + -0x3f8), lVar2 == 0)))) goto LAB_145ceedde;
  lVar4 = FUN_140b6d0be();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30)) goto LAB_145ceedde;
  if (*(longlong *)(lVar2 + 0x598) == 0) {
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
LAB_145ceee13:
    uVar5 = 0;
  }
  else {
    FUN_14101ca58(*(longlong *)(lVar2 + 0x598),&local_78);
    if ((longlong)(int)uStack_70 == 0) goto LAB_145ceee13;
    puVar7 = local_78 + (longlong)(int)uStack_70 * 7;
    puVar6 = local_78;
    do {
      local_68 = &PTR_FUN_14a184370;
      local_60 = *puVar6;
      local_58 = puVar6[1];
      if (local_58 != 0) {
        LOCK();
        *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
        UNLOCK();
      }
      local_50 = 0;
      FUN_140b6e764(lVar3,&local_7c,&local_68);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_145ceee18(param_2,iVar1);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = local_7c;
      local_68 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_50])(&local_60);
      puVar6 = puVar6 + 7;
    } while (puVar6 != puVar7);
    uVar5 = uStack_70 & 0xffffffff;
  }
  FUN_14101c9fb(local_78,uVar5);
  if (local_78 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_145ceedde:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ceee18 FUN_145ceee18 body=132 status=ok
// SIG undefined FUN_145ceee18(void)

void FUN_145ceee18(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 2,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145ceee9c FUN_145ceee9c body=292 status=ok
// SIG undefined FUN_145ceee9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145ceee9c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1fd68) {
    FUN_144b3d300(&DAT_14ca1fd68);
    if (DAT_14ca1fd68 == -1) {
      FUN_145cef10a();
      FUN_145ceefc0();
      FUN_140db5666(&DAT_14ca1fcc0,0,&DAT_14ca1fc58,L"FTemporalReprojectionAlignCS",
                    L"/Engine/Private/PathTracing/PathTracingSpatialTemporalDenoising.usf",
                    L"ReprojectionAlignCS",5,3,FUN_147276fe2,FUN_147276f82,&LAB_1462f51de,
                    &LAB_147276f7e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca222b0);
      _DAT_14ca1fcc0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e8327c);
      _Init_thread_footer(&DAT_14ca1fd68);
    }
  }
  return &DAT_14ca1fcc0;
}



// FUNCTION 145ceefc0 FUN_145ceefc0 body=205 status=ok
// SIG undefined FUN_145ceefc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ceefc0(void)

{
  if ((DAT_14ca1fcbf & 2) == 0) {
    DAT_14ca1fcbf = DAT_14ca1fcbf | 2;
    _DAT_14ca1fc60 = L"FTemporalReprojectionAlignCS";
    _DAT_14ca1fc78 = FUN_146826540;
    _DAT_14ca1fc80 = FUN_146825d77;
    _DAT_14ca1fc88 = FUN_146825fd6;
    _DAT_14ca1fc90 = FUN_1407e02ea;
    _DAT_14ca1fc98 = FUN_146826273;
    _DAT_14ca1fc70 = FUN_147276f4e;
    _DAT_14ca1fcb0 = 0xffffffff000000e0;
    _DAT_14ca1fcb8 = 8;
    DAT_14ca1fcbc = 0;
    _DAT_14ca1fca0 = &LAB_147276f7a;
    FUN_145cef08e();
    FUN_1407e00cc(&DAT_14ca1fc58);
    return;
  }
  return;
}



// FUNCTION 145cef08e FUN_145cef08e body=123 status=ok
// SIG undefined FUN_145cef08e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145cef08e(void)

{
  _DAT_14ca24e08 = L"BASE";
  DAT_14ca24e32 = 4;
  _DAT_14ca24e10 = FUN_140b35ae4();
  _DAT_14ca24e18 = DAT_14ca1fc68;
  _DAT_14ca24e20 = &LAB_14682652b;
  DAT_14ca1fc68 = &DAT_14ca24e08;
  DAT_14ca1fcbd = DAT_14ca1fcbd + '\x01';
  _DAT_14ca24e28 = 0x100000000;
  if (*(char *)(_DAT_14ca24e10 + 100) != '\0') {
    DAT_14ca1fcbe = DAT_14ca1fcbe + '\x01';
  }
  return;
}



// FUNCTION 145cef10a FUN_145cef10a body=261 status=ok
// SIG undefined FUN_145cef10a(void)

void FUN_145cef10a(void)

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
              0x110) < DAT_14ca22330) {
    FUN_144b3d300(&DAT_14ca22330);
    if (DAT_14ca22330 == -1) {
      FUN_145cef210(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xf0;
      local_58 = 0x2bf;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca222b0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e95e03);
      _Init_thread_footer(&DAT_14ca22330);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cef210 FUN_145cef210 body=226 status=ok
// SIG undefined FUN_145cef210(void)

longlong * FUN_145cef210(longlong *param_1)

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
  pcVar13 = FUN_1462f6c2e;
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



// FUNCTION 145cef2f8 FUN_145cef2f8 body=138 status=ok
// SIG undefined FUN_145cef2f8(void)

undefined1 * FUN_145cef2f8(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca22338;
  return &LAB_145cef2f4;
}



// FUNCTION 145cef382 FUN_145cef382 body=258 status=ok
// SIG undefined FUN_145cef382(void)

void FUN_145cef382(void)

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
              0x110) < DAT_14ca223b8) {
    FUN_144b3d300(&DAT_14ca223b8);
    if (DAT_14ca223b8 == -1) {
      FUN_145cef510(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FDenoisingCommonParameters";
      local_38 = 0;
      local_50 = 0xa0;
      local_58 = 0x2ab;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca22338,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e95e0f);
      _Init_thread_footer(&DAT_14ca223b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cef486 FUN_145cef486 body=138 status=ok
// SIG undefined FUN_145cef486(void)

code * FUN_145cef486(undefined8 param_1,longlong *param_2)

{
  int iVar1;
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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa0000002c1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145cef2f8;
}



// FUNCTION 145cef510 FUN_145cef510 body=226 status=ok
// SIG undefined FUN_145cef510(void)

longlong * FUN_145cef510(longlong *param_1)

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
  pcVar13 = FUN_1462f6cb6;
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



// FUNCTION 145cef5f4 FUN_145cef5f4 body=138 status=ok
// SIG undefined FUN_145cef5f4(void)

code * FUN_145cef5f4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PatchCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x88000002b0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462f6d3e;
}



// FUNCTION 145cef67e FUN_145cef67e body=138 status=ok
// SIG undefined FUN_145cef67e(void)

code * FUN_145cef67e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PatchId";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x90000002b4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14727ee50;
}



// FUNCTION 145cef708 FUN_145cef708 body=144 status=ok
// SIG undefined FUN_145cef708(void)

code * FUN_145cef708(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000002ae;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462f6dc6;
}



// FUNCTION 145cef798 FUN_145cef798 body=930 status=ok
// SIG undefined FUN_145cef798(void)

longlong FUN_145cef798(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  longlong local_58;
  longlong *plStack_50;
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar9 = (longlong *)(param_1 + 0x140);
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  uVar5 = FUN_145cefb3b(param_2);
  iVar6 = FUN_145cefbbe(plVar9,uVar5,param_2);
  if (iVar6 == -1) {
    lVar7 = FUN_14001cc68(0x1d0,0x10);
    FUN_14152b7ec(lVar7,param_1,param_1 + 0x130,param_2);
    plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_14b527620;
    plVar8[2] = lVar7;
    if ((lVar7 != 0) &&
       (((*(longlong *)(lVar7 + 200) == 0 || (*(longlong *)(lVar7 + 0xd0) == 0)) ||
        (*(int *)(*(longlong *)(lVar7 + 0xd0) + 8) < 1)))) {
      if (plVar8 == (longlong *)0x0) {
        *(longlong *)(lVar7 + 200) = lVar7;
        plVar10 = *(longlong **)(lVar7 + 0xd0);
        if (plVar10 != (longlong *)0x0) {
LAB_145cefaa6:
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))();
          }
          *(longlong **)(lVar7 + 0xd0) = plVar8;
          if (plVar8 != (longlong *)0x0) goto LAB_145cef88d;
        }
      }
      else {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        *(longlong *)(lVar7 + 200) = lVar7;
        if (*(longlong **)(lVar7 + 0xd0) != plVar8) {
          LOCK();
          *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
          UNLOCK();
          plVar10 = *(longlong **)(lVar7 + 0xd0);
          if (plVar10 != (longlong *)0x0) goto LAB_145cefaa6;
          *(longlong **)(lVar7 + 0xd0) = plVar8;
        }
LAB_145cef88d:
        LOCK();
        plVar10 = plVar8 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
    }
    plVar10 = plStack_50;
    local_58 = lVar7;
    if (plVar8 == plStack_50) {
      plVar4 = plStack_50;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar8 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar6 = *piVar1;
          UNLOCK();
          plVar10 = plVar8;
          goto joined_r0x000145cefa40;
        }
      }
    }
    else {
      plVar4 = plVar8;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_50 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          puVar3 = (undefined8 *)*plStack_50;
          plStack_50 = plVar8;
          (*(code *)*puVar3)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar6 = *piVar1;
          UNLOCK();
joined_r0x000145cefa40:
          plVar4 = plStack_50;
          if (iVar6 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            plVar4 = plStack_50;
          }
        }
      }
    }
    plStack_50 = plVar4;
    lVar12 = local_58 + 0x38;
    local_48 = (undefined8 *)0x0;
    local_40._0_4_ = 0;
    FUN_1446efa72(&local_48,0,2,0x10);
    local_40 = (longlong *)CONCAT44(local_40._4_4_,2);
    *local_48 = &PTR_LAB_14b5276b0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_48[2] = lVar11;
    *local_48 = &PTR_FUN_14b527640;
    local_48[3] = param_1;
    FUN_145cefd90(lVar12,local_60,&local_48);
    FUN_1449db362(&local_48);
    local_40 = &local_58;
    local_48 = param_2;
    FUN_145cefe76(plVar9,local_60,&local_48);
    plVar9 = plStack_50;
LAB_145cef96a:
    plStack_50 = plVar9;
    lVar7 = local_58;
    plVar9 = plStack_50;
    if (plStack_50 == (longlong *)0x0) goto LAB_145cef9db;
  }
  else {
    uVar5 = FUN_145cefb3b(param_2);
    iVar6 = FUN_145cefbbe(plVar9,uVar5,param_2);
    plVar8 = plStack_50;
    if (iVar6 == -1) {
      lVar7 = 0;
    }
    else {
      lVar7 = (longlong)iVar6 * 0x78 + *plVar9;
    }
    plVar9 = (longlong *)(lVar7 + 0x60);
    if (lVar7 == 0) {
      plVar9 = (longlong *)0x0;
    }
    lVar7 = *plVar9;
    plVar9 = (longlong *)plVar9[1];
    if (plVar9 == (longlong *)0x0) goto LAB_145cef9db;
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    local_58 = lVar7;
    if (plStack_50 != (longlong *)0x0) {
      LOCK();
      plVar10 = plStack_50 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        puVar3 = (undefined8 *)*plStack_50;
        plStack_50 = plVar9;
        (*(code *)*puVar3)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        plVar9 = plStack_50;
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          plVar9 = plStack_50;
        }
      }
      goto LAB_145cef96a;
    }
  }
  plStack_50 = plVar9;
  plVar8 = plStack_50;
  lVar7 = local_58;
  LOCK();
  plVar9 = plStack_50 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plStack_50)(plStack_50);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
LAB_145cef9db:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cefb3b FUN_145cefb3b body=131 status=ok
// SIG undefined FUN_145cefb3b(void)

uint FUN_145cefb3b(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  
  iVar4 = *(int *)(param_1 + 3);
  puVar7 = &DAT_149dfb77a;
  puVar5 = &DAT_149dfb77a;
  if (iVar4 != 0) {
    puVar5 = (undefined2 *)param_1[2];
  }
  iVar6 = 0;
  iVar1 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar1 = iVar6;
  }
  iVar1 = FUN_144a49b4a(iVar1,puVar5);
  puVar5 = &DAT_149dfb77a;
  iVar4 = iVar6;
  if (*(int *)(param_1 + 5) != 0) {
    puVar5 = (undefined2 *)param_1[4];
    iVar4 = *(int *)(param_1 + 5) + -1;
  }
  uVar2 = FUN_144a49b4a(iVar4,puVar5);
  if (*(int *)(param_1 + 1) != 0) {
    puVar7 = (undefined2 *)*param_1;
    iVar6 = *(int *)(param_1 + 1) + -1;
  }
  uVar3 = FUN_144a49b4a(iVar6,puVar7);
  return (uint)*(byte *)(param_1 + 8) ^ (uVar3 ^ (uVar2 ^ iVar1 * 0x18d) * 0x18d) * 0x18d;
}



// FUNCTION 145cefbbe FUN_145cefbbe body=109 status=ok
// SIG undefined FUN_145cefbbe(void)

int FUN_145cefbbe(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        cVar2 = FUN_145cefc2c(lVar1 + (longlong)iVar4 * 0x78,param_3);
        if (cVar2 != '\0') {
          return iVar4;
        }
        iVar4 = *(int *)(lVar1 + 0x70 + (longlong)iVar4 * 0x78);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 145cefc2c FUN_145cefc2c body=355 status=ok
// SIG undefined FUN_145cefc2c(void)

undefined8 FUN_145cefc2c(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ushort uVar9;
  
  if ((char)param_1[8] == (char)param_2[8]) {
    iVar4 = (int)param_1[3];
    if (iVar4 == (int)param_2[3]) {
      if (1 < iVar4) {
        lVar7 = 0;
        while( true ) {
          uVar9 = *(ushort *)(param_1[2] + lVar7);
          uVar1 = (ulonglong)uVar9;
          uVar5 = *(ushort *)(param_2[2] + lVar7);
          if (uVar9 != uVar5) break;
          if (uVar9 == 0) goto LAB_145cefca7;
LAB_145cefc6e:
          lVar7 = lVar7 + 2;
        }
        if ((uVar5 | uVar9) < 0x80) {
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar1];
          uVar6 = (ulonglong)uVar5;
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar6]) goto LAB_145cefc6e;
        }
        if (uVar9 != uVar5) goto LAB_145cefc97;
      }
    }
    else if ((int)param_2[3] + iVar4 != 1) goto LAB_145cefc97;
LAB_145cefca7:
    iVar4 = (int)param_1[5];
    if (iVar4 == (int)param_2[5]) {
      if (1 < iVar4) {
        lVar7 = 0;
        while( true ) {
          uVar9 = *(ushort *)(param_1[4] + lVar7);
          uVar1 = (ulonglong)uVar9;
          uVar5 = *(ushort *)(param_2[4] + lVar7);
          if (uVar9 != uVar5) break;
          if (uVar9 == 0) goto LAB_145cefd0c;
LAB_145cefce3:
          lVar7 = lVar7 + 2;
        }
        if ((uVar5 | uVar9) < 0x80) {
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar1];
          uVar6 = (ulonglong)uVar5;
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar6]) goto LAB_145cefce3;
        }
        if (uVar9 != uVar5) goto LAB_145cefc97;
      }
    }
    else if ((int)param_2[5] + iVar4 != 1) goto LAB_145cefc97;
LAB_145cefd0c:
    uVar3 = *(uint *)(param_1 + 1);
    uVar1 = (ulonglong)uVar3;
    if (uVar3 == (uint)param_2[1]) {
      if ((int)uVar3 < 2) {
        return CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
      }
      uVar1 = *param_2;
      lVar7 = 0;
      while( true ) {
        uVar9 = *(ushort *)(*param_1 + lVar7);
        uVar3 = (uint)uVar9;
        uVar5 = *(ushort *)(uVar1 + lVar7);
        uVar8 = (uint)uVar5;
        if (uVar9 != uVar5) {
          if ((uVar5 | uVar9) < 0x80) {
            uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar9];
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar5];
            if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar5]) goto LAB_145cefd41;
          }
          iVar4 = uVar3 - uVar8;
          goto LAB_145cefd6e;
        }
        if (uVar9 == 0) break;
LAB_145cefd41:
        lVar7 = lVar7 + 2;
      }
      iVar4 = 0;
    }
    else {
      iVar4 = (uint)param_2[1] + uVar3 + -1;
    }
LAB_145cefd6e:
    uVar2 = CONCAT71((int7)(uVar1 >> 8),iVar4 == 0);
  }
  else {
LAB_145cefc97:
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 145cefd90 FUN_145cefd90 body=216 status=ok
// SIG undefined FUN_145cefd90(void)

undefined8 * FUN_145cefd90(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cefe76 FUN_145cefe76 body=312 status=ok
// SIG undefined FUN_145cefe76(void)

undefined4 * FUN_145cefe76(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145cf001a(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  FUN_1413ebcfe(local_38,*param_3);
  *(undefined8 *)(local_38 + 0x60) = *puVar1;
  lVar8 = puVar1[1];
  *(longlong *)(local_38 + 0x68) = lVar8;
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(local_38 + 0x70) = 0xffffffff;
  local_44 = local_40[0];
  uVar4 = FUN_145cefb3b(local_38);
  cVar3 = FUN_145ceffb0(param_1,uVar4,local_38,&local_44);
  uVar2 = local_44;
  if (cVar3 == '\0') {
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
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)(local_38 + 0x74) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 0x70) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_145cf00fe(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ceffb0 FUN_145ceffb0 body=105 status=ok
// SIG undefined FUN_145ceffb0(void)

undefined8 FUN_145ceffb0(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  int iVar1;
  void *_Dst;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_145cefbbe(), iVar1 != -1)) {
    _Dst = (void *)((longlong)iVar1 * 0x78 + *param_1);
    FUN_145e216be(_Dst);
    memmove(_Dst,param_3,0x70);
    FUN_145e216fe(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 145cf001a FUN_145cf001a body=227 status=ok
// SIG undefined FUN_145cf001a(void)

int * FUN_145cf001a(longlong *param_1,int *param_2)

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
      FUN_1410fd1ac(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x78);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x78) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x78 + *param_1;
  return param_2;
}



// FUNCTION 145cf00fe FUN_145cf00fe body=450 status=ok
// SIG undefined FUN_145cf00fe(void)

void FUN_145cf00fe(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x78;
        iVar6 = FUN_145cefb3b(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x74 + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x70 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145cf02c2 FUN_145cf02c2 body=269 status=ok
// SIG undefined FUN_145cf02c2(void)

undefined4 * FUN_145cf02c2(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145cf0780(param_1,local_48);
  FUN_145cf043a(param_4,local_40);
  *(undefined4 *)(local_40 + 0x60) = 0xffffffff;
  cVar1 = FUN_145cf03d0(param_1,param_3,local_40,local_48);
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
      *(uint *)(local_40 + 100) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x60) =
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
      FUN_145cf0a16(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf03d0 FUN_145cf03d0 body=105 status=ok
// SIG undefined FUN_145cf03d0(void)

undefined8 FUN_145cf03d0(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  int iVar1;
  void *_Dst;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_1408f471e(), iVar1 != -1)) {
    _Dst = (void *)((longlong)iVar1 * 0x68 + *param_1);
    FUN_145858590(_Dst);
    memmove(_Dst,param_3,0x60);
    FUN_148fa2c96(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 145cf043a FUN_145cf043a body=144 status=ok
// SIG undefined FUN_145cf043a(void)

undefined8 FUN_145cf043a(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_40 = 0x8000000000;
  local_38 = 0xffffffff;
  FUN_145cf0502(param_2,*param_1,&local_68);
  uStack_20 = uStack_20 & 0xffffffff00000000;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_145cf04cc(&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf04cc FUN_145cf04cc body=53 status=ok
// SIG undefined FUN_145cf04cc(void)

void FUN_145cf04cc(longlong *param_1)

{
  FUN_145cf05e6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cf0502 FUN_145cf0502 body=101 status=ok
// SIG undefined FUN_145cf0502(void)

undefined8 * FUN_145cf0502(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  FUN_145cf0568(param_1 + 2,param_3);
  return param_1;
}



// FUNCTION 145cf0568 FUN_145cf0568 body=125 status=ok
// SIG undefined FUN_145cf0568(void)

undefined8 * FUN_145cf0568(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_145cf0864();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 145cf05e6 FUN_145cf05e6 body=309 status=ok
// SIG undefined FUN_145cf05e6(void)

void FUN_145cf05e6(longlong *param_1)

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
      FUN_145cf071c((longlong)iStack_4c * 0x28 + *local_68);
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf071c FUN_145cf071c body=100 status=ok
// SIG undefined FUN_145cf071c(void)

void FUN_145cf071c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x000145cf0774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145cf0780 FUN_145cf0780 body=227 status=ok
// SIG undefined FUN_145cf0780(void)

int * FUN_145cf0780(longlong *param_1,int *param_2)

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
      FUN_1406a7630(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x68);
    *(int *)(param_1 + 6) = iVar3;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x68) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x68 + *param_1;
  return param_2;
}



// FUNCTION 145cf0864 FUN_145cf0864 body=433 status=ok
// SIG undefined FUN_145cf0864(void)

longlong * FUN_145cf0864(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar7 = 0;
    local_48 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, local_48 != plVar1)) {
      do {
        do {
          local_60 = uVar5;
          FUN_145cf071c((longlong)iVar6 * 0x28 + *local_78);
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
          FUN_1449c0562(&local_70);
          iVar6 = local_60._4_4_;
          uVar5 = local_60;
        } while (local_60._4_4_ != iVar7);
      } while ((local_68 != plVar1) || (local_78 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145cf0a16 FUN_145cf0a16 body=485 status=ok
// SIG undefined FUN_145cf0a16(void)

void FUN_145cf0a16(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x68;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 100 + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x60 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145cf0c08 FUN_145cf0c08 body=124 status=ok
// SIG undefined FUN_145cf0c08(void)

undefined8 * FUN_145cf0c08(undefined8 *param_1)

{
  FUN_14077009c();
  *param_1 = &PTR_FUN_14a6224e0;
  param_1[6] = &PTR_FUN_14a622780;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
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
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  return param_1;
}



// FUNCTION 145cf0c84 FUN_145cf0c84 body=62 status=ok
// SIG undefined FUN_145cf0c84(void)

undefined8 * FUN_145cf0c84(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a9d1bd0;
  FUN_145cf0cc2(param_1 + 8);
  FUN_145a2c120(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cf0cc2 FUN_145cf0cc2 body=73 status=ok
// SIG undefined FUN_145cf0cc2(void)

void FUN_145cf0cc2(longlong *param_1)

{
  FUN_1401b9894(param_1 + 6);
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



// FUNCTION 145cf0d16 FUN_145cf0d16 body=115 status=ok
// SIG undefined FUN_145cf0d16(void)

undefined8 * FUN_145cf0d16(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_14130963a();
  *param_1 = &PTR_FUN_14ad84dc0;
  param_1[7] = &PTR_FUN_14ad85200;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
  FUN_145cf0d8a(puVar2,param_1);
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar2) && (param_1[5] = puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 145cf0d8a FUN_145cf0d8a body=144 status=ok
// SIG undefined FUN_145cf0d8a(void)

undefined8 * FUN_145cf0d8a(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14ad88400;
  FUN_14485c47a(param_1 + 2);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 0x40);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  return param_1;
}



// FUNCTION 145cf0e26 FUN_145cf0e26 body=124 status=ok
// SIG undefined FUN_145cf0e26(void)

undefined8 * FUN_145cf0e26(undefined8 *param_1)

{
  FUN_14480568a();
  *param_1 = &PTR_FUN_14b073ac0;
  param_1[5] = &PTR_FUN_14b0744c0;
  param_1[6] = &PTR_LAB_14b074500;
  param_1[0x55] = &PTR_FUN_14b074550;
  param_1[0x56] = &PTR_FUN_14b0745d0;
  param_1[0x57] = &PTR_FUN_14b0745e0;
  param_1[199] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  *(byte *)((longlong)param_1 + 0x2d5) = *(byte *)((longlong)param_1 + 0x2d5) & 0xdf;
  return param_1;
}



// FUNCTION 145cf0ea2 FUN_145cf0ea2 body=40 status=ok
// SIG undefined FUN_145cf0ea2(void)

undefined8 FUN_145cf0ea2(undefined8 param_1,int param_2)

{
  FUN_145cf0eca();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cf0eca FUN_145cf0eca body=95 status=ok
// SIG undefined FUN_145cf0eca(void)

void FUN_145cf0eca(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b542500;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145cf0f2a FUN_145cf0f2a body=40 status=ok
// SIG undefined FUN_145cf0f2a(void)

undefined8 FUN_145cf0f2a(undefined8 param_1,int param_2)

{
  FUN_145cf0f52();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145cf0f52 FUN_145cf0f52 body=187 status=ok
// SIG undefined FUN_145cf0f52(void)

void FUN_145cf0f52(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc1e8a0;
  param_1[5] = &PTR_FUN_14bc1ed20;
  param_1[6] = &PTR_LAB_14bc1ed60;
  FUN_144760e21(param_1[0x34],*(undefined4 *)(param_1 + 0x35));
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)param_1 + 0x19d) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x19d) = 0;
  }
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_145cf100e(param_1 + 0x24);
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 145cf100e FUN_145cf100e body=55 status=ok
// SIG undefined FUN_145cf100e(void)

void FUN_145cf100e(longlong *param_1)

{
  FUN_145cf1046(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145cf1046 FUN_145cf1046 body=123 status=ok
// SIG undefined FUN_145cf1046(void)

void FUN_145cf1046(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}


