// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1460a0774 FUN_1460a0774 body=284 status=ok
// SIG undefined FUN_1460a0774(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a0774(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8b188) {
    FUN_144b3d300(&DAT_14ca8b188);
    if (DAT_14ca8b188 == -1) {
      FUN_1460a0890();
      FUN_140db5666(&DAT_14ca8b0e0,0,&DAT_14ca8b078,L"FCopyTextureCS_Texture3D_Texture2D_Int324",
                    L"/Engine/Private/CopyTextureShaders.usf",L"CopyTextureCS",5,1,FUN_14741b236,
                    FUN_14741b20e,&LAB_14741b1f6,&LAB_14741b1f2,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca8b0e0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f22e0);
      _Init_thread_footer(&DAT_14ca8b188);
    }
  }
  return &DAT_14ca8b0e0;
}



// FUNCTION 1460a0890 FUN_1460a0890 body=205 status=ok
// SIG undefined FUN_1460a0890(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a0890(void)

{
  if ((DAT_14ca8b0df & 2) == 0) {
    DAT_14ca8b0df = DAT_14ca8b0df | 2;
    _DAT_14ca8b080 = L"FCopyTextureCS_Texture3D_Texture2D_Int324";
    _DAT_14ca8b098 = FUN_146826540;
    _DAT_14ca8b0a0 = FUN_146825d77;
    _DAT_14ca8b0a8 = FUN_146825fd6;
    _DAT_14ca8b0b0 = FUN_1407e02ea;
    _DAT_14ca8b0b8 = FUN_146826273;
    _DAT_14ca8b090 = FUN_14741b1c2;
    _DAT_14ca8b0d0 = 0xffffffff00000100;
    _DAT_14ca8b0d8 = 8;
    DAT_14ca8b0dc = 0;
    _DAT_14ca8b0c0 = &LAB_14741b1ee;
    FUN_1460a095e();
    FUN_1407e00cc(&DAT_14ca8b078);
    return;
  }
  return;
}



// FUNCTION 1460a095e FUN_1460a095e body=133 status=ok
// SIG undefined FUN_1460a095e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a095e(void)

{
  _DAT_14ca94130 = L"BASE";
  DAT_14ca9415a = 4;
  FUN_14134bf06();
  _DAT_14ca94140 = DAT_14ca8b088;
  _DAT_14ca94138 = &DAT_14ca89a10;
  _DAT_14ca94148 = &LAB_14682652b;
  DAT_14ca8b088 = &DAT_14ca94130;
  DAT_14ca8b0dd = DAT_14ca8b0dd + '\x01';
  _DAT_14ca94150 = 0x100000000;
  if (DAT_14ca89a74 != '\0') {
    DAT_14ca8b0de = DAT_14ca8b0de + '\x01';
  }
  return;
}



// FUNCTION 1460a09e4 FUN_1460a09e4 body=284 status=ok
// SIG undefined FUN_1460a09e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a09e4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8b2b0) {
    FUN_144b3d300(&DAT_14ca8b2b0);
    if (DAT_14ca8b2b0 == -1) {
      FUN_1460a0b00();
      FUN_140db5666(&DAT_14ca8b208,0,&DAT_14ca8b1a0,L"FCopyTextureCS_Texture3D_Texture2D_Uint324",
                    L"/Engine/Private/CopyTextureShaders.usf",L"CopyTextureCS",5,1,FUN_14741b344,
                    FUN_14741b31c,&LAB_14741b304,&LAB_14741b300,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca8b208 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f22ec);
      _Init_thread_footer(&DAT_14ca8b2b0);
    }
  }
  return &DAT_14ca8b208;
}



// FUNCTION 1460a0b00 FUN_1460a0b00 body=205 status=ok
// SIG undefined FUN_1460a0b00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a0b00(void)

{
  if ((DAT_14ca8b207 & 2) == 0) {
    DAT_14ca8b207 = DAT_14ca8b207 | 2;
    _DAT_14ca8b1a8 = L"FCopyTextureCS_Texture3D_Texture2D_Uint324";
    _DAT_14ca8b1c0 = FUN_146826540;
    _DAT_14ca8b1c8 = FUN_146825d77;
    _DAT_14ca8b1d0 = FUN_146825fd6;
    _DAT_14ca8b1d8 = FUN_1407e02ea;
    _DAT_14ca8b1e0 = FUN_146826273;
    _DAT_14ca8b1b8 = FUN_14741b2d0;
    _DAT_14ca8b1f8 = 0xffffffff00000100;
    _DAT_14ca8b200 = 8;
    DAT_14ca8b204 = 0;
    _DAT_14ca8b1e8 = &LAB_14741b2fc;
    FUN_1460a0bce();
    FUN_1407e00cc(&DAT_14ca8b1a0);
    return;
  }
  return;
}



// FUNCTION 1460a0bce FUN_1460a0bce body=133 status=ok
// SIG undefined FUN_1460a0bce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a0bce(void)

{
  _DAT_14ca94160 = L"BASE";
  DAT_14ca9418a = 4;
  FUN_14134bf06();
  _DAT_14ca94170 = DAT_14ca8b1b0;
  _DAT_14ca94168 = &DAT_14ca89a10;
  _DAT_14ca94178 = &LAB_14682652b;
  DAT_14ca8b1b0 = &DAT_14ca94160;
  DAT_14ca8b205 = DAT_14ca8b205 + '\x01';
  _DAT_14ca94180 = 0x100000000;
  if (DAT_14ca89a74 != '\0') {
    DAT_14ca8b206 = DAT_14ca8b206 + '\x01';
  }
  return;
}



// FUNCTION 1460a0c54 FUN_1460a0c54 body=284 status=ok
// SIG undefined FUN_1460a0c54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a0c54(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8b3d8) {
    FUN_144b3d300(&DAT_14ca8b3d8);
    if (DAT_14ca8b3d8 == -1) {
      FUN_1460a0d70();
      FUN_140db5666(&DAT_14ca8b330,0,&DAT_14ca8b2c8,
                    L"FCopyTextureCS_Texture3D_Texture2DArray_Float4",
                    L"/Engine/Private/CopyTextureShaders.usf",L"CopyTextureCS",5,1,FUN_14741b452,
                    FUN_14741b42a,&LAB_14741b412,&LAB_14741b40e,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca8b330 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f22f8);
      _Init_thread_footer(&DAT_14ca8b3d8);
    }
  }
  return &DAT_14ca8b330;
}



// FUNCTION 1460a0d70 FUN_1460a0d70 body=205 status=ok
// SIG undefined FUN_1460a0d70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a0d70(void)

{
  if ((DAT_14ca8b32f & 2) == 0) {
    DAT_14ca8b32f = DAT_14ca8b32f | 2;
    _DAT_14ca8b2d0 = L"FCopyTextureCS_Texture3D_Texture2DArray_Float4";
    _DAT_14ca8b2e8 = FUN_146826540;
    _DAT_14ca8b2f0 = FUN_146825d77;
    _DAT_14ca8b2f8 = FUN_146825fd6;
    _DAT_14ca8b300 = FUN_1407e02ea;
    _DAT_14ca8b308 = FUN_146826273;
    _DAT_14ca8b2e0 = FUN_14741b3de;
    _DAT_14ca8b320 = 0xffffffff00000100;
    _DAT_14ca8b328 = 8;
    DAT_14ca8b32c = 0;
    _DAT_14ca8b310 = &LAB_14741b40a;
    FUN_1460a0e3e();
    FUN_1407e00cc(&DAT_14ca8b2c8);
    return;
  }
  return;
}



// FUNCTION 1460a0e3e FUN_1460a0e3e body=133 status=ok
// SIG undefined FUN_1460a0e3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a0e3e(void)

{
  _DAT_14ca94190 = L"BASE";
  DAT_14ca941ba = 4;
  FUN_14134bf06();
  _DAT_14ca941a0 = DAT_14ca8b2d8;
  _DAT_14ca94198 = &DAT_14ca89a10;
  _DAT_14ca941a8 = &LAB_14682652b;
  DAT_14ca8b2d8 = &DAT_14ca94190;
  DAT_14ca8b32d = DAT_14ca8b32d + '\x01';
  _DAT_14ca941b0 = 0x100000000;
  if (DAT_14ca89a74 != '\0') {
    DAT_14ca8b32e = DAT_14ca8b32e + '\x01';
  }
  return;
}



// FUNCTION 1460a0ec4 FUN_1460a0ec4 body=284 status=ok
// SIG undefined FUN_1460a0ec4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a0ec4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8b500) {
    FUN_144b3d300(&DAT_14ca8b500);
    if (DAT_14ca8b500 == -1) {
      FUN_1460a0fe0();
      FUN_140db5666(&DAT_14ca8b458,0,&DAT_14ca8b3f0,
                    L"FCopyTextureCS_Texture3D_Texture2DArray_Int324",
                    L"/Engine/Private/CopyTextureShaders.usf",L"CopyTextureCS",5,1,FUN_14741b560,
                    FUN_14741b538,&LAB_14741b520,&LAB_14741b51c,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca8b458 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f2304);
      _Init_thread_footer(&DAT_14ca8b500);
    }
  }
  return &DAT_14ca8b458;
}



// FUNCTION 1460a0fe0 FUN_1460a0fe0 body=205 status=ok
// SIG undefined FUN_1460a0fe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a0fe0(void)

{
  if ((DAT_14ca8b457 & 2) == 0) {
    DAT_14ca8b457 = DAT_14ca8b457 | 2;
    _DAT_14ca8b3f8 = L"FCopyTextureCS_Texture3D_Texture2DArray_Int324";
    _DAT_14ca8b410 = FUN_146826540;
    _DAT_14ca8b418 = FUN_146825d77;
    _DAT_14ca8b420 = FUN_146825fd6;
    _DAT_14ca8b428 = FUN_1407e02ea;
    _DAT_14ca8b430 = FUN_146826273;
    _DAT_14ca8b408 = FUN_14741b4ec;
    _DAT_14ca8b448 = 0xffffffff00000100;
    _DAT_14ca8b450 = 8;
    DAT_14ca8b454 = 0;
    _DAT_14ca8b438 = &LAB_14741b518;
    FUN_1460a10ae();
    FUN_1407e00cc(&DAT_14ca8b3f0);
    return;
  }
  return;
}



// FUNCTION 1460a10ae FUN_1460a10ae body=133 status=ok
// SIG undefined FUN_1460a10ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a10ae(void)

{
  _DAT_14ca941c0 = L"BASE";
  DAT_14ca941ea = 4;
  FUN_14134bf06();
  _DAT_14ca941d0 = DAT_14ca8b400;
  _DAT_14ca941c8 = &DAT_14ca89a10;
  _DAT_14ca941d8 = &LAB_14682652b;
  DAT_14ca8b400 = &DAT_14ca941c0;
  DAT_14ca8b455 = DAT_14ca8b455 + '\x01';
  _DAT_14ca941e0 = 0x100000000;
  if (DAT_14ca89a74 != '\0') {
    DAT_14ca8b456 = DAT_14ca8b456 + '\x01';
  }
  return;
}



// FUNCTION 1460a1134 FUN_1460a1134 body=284 status=ok
// SIG undefined FUN_1460a1134(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a1134(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8b628) {
    FUN_144b3d300(&DAT_14ca8b628);
    if (DAT_14ca8b628 == -1) {
      FUN_1460a1250();
      FUN_140db5666(&DAT_14ca8b580,0,&DAT_14ca8b518,
                    L"FCopyTextureCS_Texture3D_Texture2DArray_Uint324",
                    L"/Engine/Private/CopyTextureShaders.usf",L"CopyTextureCS",5,1,FUN_14741b66e,
                    FUN_14741b646,&LAB_14741b62e,&LAB_14741b62a,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca8b580 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f2310);
      _Init_thread_footer(&DAT_14ca8b628);
    }
  }
  return &DAT_14ca8b580;
}



// FUNCTION 1460a1250 FUN_1460a1250 body=205 status=ok
// SIG undefined FUN_1460a1250(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a1250(void)

{
  if ((DAT_14ca8b57f & 2) == 0) {
    DAT_14ca8b57f = DAT_14ca8b57f | 2;
    _DAT_14ca8b520 = L"FCopyTextureCS_Texture3D_Texture2DArray_Uint324";
    _DAT_14ca8b538 = FUN_146826540;
    _DAT_14ca8b540 = FUN_146825d77;
    _DAT_14ca8b548 = FUN_146825fd6;
    _DAT_14ca8b550 = FUN_1407e02ea;
    _DAT_14ca8b558 = FUN_146826273;
    _DAT_14ca8b530 = FUN_14741b5fa;
    _DAT_14ca8b570 = 0xffffffff00000100;
    _DAT_14ca8b578 = 8;
    DAT_14ca8b57c = 0;
    _DAT_14ca8b560 = &LAB_14741b626;
    FUN_1460a131e();
    FUN_1407e00cc(&DAT_14ca8b518);
    return;
  }
  return;
}



// FUNCTION 1460a131e FUN_1460a131e body=133 status=ok
// SIG undefined FUN_1460a131e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a131e(void)

{
  _DAT_14ca941f0 = L"BASE";
  DAT_14ca9421a = 4;
  FUN_14134bf06();
  _DAT_14ca94200 = DAT_14ca8b528;
  _DAT_14ca941f8 = &DAT_14ca89a10;
  _DAT_14ca94208 = &LAB_14682652b;
  DAT_14ca8b528 = &DAT_14ca941f0;
  DAT_14ca8b57d = DAT_14ca8b57d + '\x01';
  _DAT_14ca94210 = 0x100000000;
  if (DAT_14ca89a74 != '\0') {
    DAT_14ca8b57e = DAT_14ca8b57e + '\x01';
  }
  return;
}



// FUNCTION 1460a13a4 FUN_1460a13a4 body=284 status=ok
// SIG undefined FUN_1460a13a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a13a4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8b750) {
    FUN_144b3d300(&DAT_14ca8b750);
    if (DAT_14ca8b750 == -1) {
      FUN_1460a14c0();
      FUN_140db5666(&DAT_14ca8b6a8,0,&DAT_14ca8b640,L"FCopyTextureCS_Texture3D_Texture3D_Float4",
                    L"/Engine/Private/CopyTextureShaders.usf",L"CopyTextureCS",5,1,FUN_14741b77c,
                    FUN_14741b754,&LAB_14741b73c,&LAB_14741b738,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca8b6a8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f231c);
      _Init_thread_footer(&DAT_14ca8b750);
    }
  }
  return &DAT_14ca8b6a8;
}



// FUNCTION 1460a14c0 FUN_1460a14c0 body=205 status=ok
// SIG undefined FUN_1460a14c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a14c0(void)

{
  if ((DAT_14ca8b6a7 & 2) == 0) {
    DAT_14ca8b6a7 = DAT_14ca8b6a7 | 2;
    _DAT_14ca8b648 = L"FCopyTextureCS_Texture3D_Texture3D_Float4";
    _DAT_14ca8b660 = FUN_146826540;
    _DAT_14ca8b668 = FUN_146825d77;
    _DAT_14ca8b670 = FUN_146825fd6;
    _DAT_14ca8b678 = FUN_1407e02ea;
    _DAT_14ca8b680 = FUN_146826273;
    _DAT_14ca8b658 = FUN_14741b708;
    _DAT_14ca8b698 = 0xffffffff00000100;
    _DAT_14ca8b6a0 = 8;
    DAT_14ca8b6a4 = 0;
    _DAT_14ca8b688 = &LAB_14741b734;
    FUN_1460a158e();
    FUN_1407e00cc(&DAT_14ca8b640);
    return;
  }
  return;
}



// FUNCTION 1460a158e FUN_1460a158e body=133 status=ok
// SIG undefined FUN_1460a158e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a158e(void)

{
  _DAT_14ca94220 = L"BASE";
  DAT_14ca9424a = 4;
  FUN_14134bf06();
  _DAT_14ca94230 = DAT_14ca8b650;
  _DAT_14ca94228 = &DAT_14ca89a10;
  _DAT_14ca94238 = &LAB_14682652b;
  DAT_14ca8b650 = &DAT_14ca94220;
  DAT_14ca8b6a5 = DAT_14ca8b6a5 + '\x01';
  _DAT_14ca94240 = 0x100000000;
  if (DAT_14ca89a74 != '\0') {
    DAT_14ca8b6a6 = DAT_14ca8b6a6 + '\x01';
  }
  return;
}



// FUNCTION 1460a1614 FUN_1460a1614 body=284 status=ok
// SIG undefined FUN_1460a1614(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a1614(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8b878) {
    FUN_144b3d300(&DAT_14ca8b878);
    if (DAT_14ca8b878 == -1) {
      FUN_1460a1730();
      FUN_140db5666(&DAT_14ca8b7d0,0,&DAT_14ca8b768,L"FCopyTextureCS_Texture3D_Texture3D_Int324",
                    L"/Engine/Private/CopyTextureShaders.usf",L"CopyTextureCS",5,1,FUN_14741b88a,
                    FUN_14741b862,&LAB_14741b84a,&LAB_14741b846,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca8b7d0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f2328);
      _Init_thread_footer(&DAT_14ca8b878);
    }
  }
  return &DAT_14ca8b7d0;
}



// FUNCTION 1460a1730 FUN_1460a1730 body=205 status=ok
// SIG undefined FUN_1460a1730(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a1730(void)

{
  if ((DAT_14ca8b7cf & 2) == 0) {
    DAT_14ca8b7cf = DAT_14ca8b7cf | 2;
    _DAT_14ca8b770 = L"FCopyTextureCS_Texture3D_Texture3D_Int324";
    _DAT_14ca8b788 = FUN_146826540;
    _DAT_14ca8b790 = FUN_146825d77;
    _DAT_14ca8b798 = FUN_146825fd6;
    _DAT_14ca8b7a0 = FUN_1407e02ea;
    _DAT_14ca8b7a8 = FUN_146826273;
    _DAT_14ca8b780 = FUN_14741b816;
    _DAT_14ca8b7c0 = 0xffffffff00000100;
    _DAT_14ca8b7c8 = 8;
    DAT_14ca8b7cc = 0;
    _DAT_14ca8b7b0 = &LAB_14741b842;
    FUN_1460a17fe();
    FUN_1407e00cc(&DAT_14ca8b768);
    return;
  }
  return;
}



// FUNCTION 1460a17fe FUN_1460a17fe body=133 status=ok
// SIG undefined FUN_1460a17fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a17fe(void)

{
  _DAT_14ca94250 = L"BASE";
  DAT_14ca9427a = 4;
  FUN_14134bf06();
  _DAT_14ca94260 = DAT_14ca8b778;
  _DAT_14ca94258 = &DAT_14ca89a10;
  _DAT_14ca94268 = &LAB_14682652b;
  DAT_14ca8b778 = &DAT_14ca94250;
  DAT_14ca8b7cd = DAT_14ca8b7cd + '\x01';
  _DAT_14ca94270 = 0x100000000;
  if (DAT_14ca89a74 != '\0') {
    DAT_14ca8b7ce = DAT_14ca8b7ce + '\x01';
  }
  return;
}



// FUNCTION 1460a1884 FUN_1460a1884 body=284 status=ok
// SIG undefined FUN_1460a1884(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a1884(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8b9a0) {
    FUN_144b3d300(&DAT_14ca8b9a0);
    if (DAT_14ca8b9a0 == -1) {
      FUN_1460a19a0();
      FUN_140db5666(&DAT_14ca8b8f8,0,&DAT_14ca8b890,L"FCopyTextureCS_Texture3D_Texture3D_Uint324",
                    L"/Engine/Private/CopyTextureShaders.usf",L"CopyTextureCS",5,1,FUN_14741b998,
                    FUN_14741b970,&LAB_14741b958,&LAB_14741b954,&LAB_14712ac0c,&LAB_14712ac08,0x100,
                    0);
      _DAT_14ca8b8f8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f2334);
      _Init_thread_footer(&DAT_14ca8b9a0);
    }
  }
  return &DAT_14ca8b8f8;
}



// FUNCTION 1460a19a0 FUN_1460a19a0 body=205 status=ok
// SIG undefined FUN_1460a19a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a19a0(void)

{
  if ((DAT_14ca8b8f7 & 2) == 0) {
    DAT_14ca8b8f7 = DAT_14ca8b8f7 | 2;
    _DAT_14ca8b898 = L"FCopyTextureCS_Texture3D_Texture3D_Uint324";
    _DAT_14ca8b8b0 = FUN_146826540;
    _DAT_14ca8b8b8 = FUN_146825d77;
    _DAT_14ca8b8c0 = FUN_146825fd6;
    _DAT_14ca8b8c8 = FUN_1407e02ea;
    _DAT_14ca8b8d0 = FUN_146826273;
    _DAT_14ca8b8a8 = FUN_14741b924;
    _DAT_14ca8b8e8 = 0xffffffff00000100;
    _DAT_14ca8b8f0 = 8;
    DAT_14ca8b8f4 = 0;
    _DAT_14ca8b8d8 = &LAB_14741b950;
    FUN_1460a1a6e();
    FUN_1407e00cc(&DAT_14ca8b890);
    return;
  }
  return;
}



// FUNCTION 1460a1a6e FUN_1460a1a6e body=133 status=ok
// SIG undefined FUN_1460a1a6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a1a6e(void)

{
  _DAT_14ca94280 = L"BASE";
  DAT_14ca942aa = 4;
  FUN_14134bf06();
  _DAT_14ca94290 = DAT_14ca8b8a0;
  _DAT_14ca94288 = &DAT_14ca89a10;
  _DAT_14ca94298 = &LAB_14682652b;
  DAT_14ca8b8a0 = &DAT_14ca94280;
  DAT_14ca8b8f5 = DAT_14ca8b8f5 + '\x01';
  _DAT_14ca942a0 = 0x100000000;
  if (DAT_14ca89a74 != '\0') {
    DAT_14ca8b8f6 = DAT_14ca8b8f6 + '\x01';
  }
  return;
}



// FUNCTION 1460a1af4 FUN_1460a1af4 body=284 status=ok
// SIG undefined FUN_1460a1af4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a1af4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8cda0) {
    FUN_144b3d300(&DAT_14ca8cda0);
    if (DAT_14ca8cda0 == -1) {
      FUN_1460a1c10();
      FUN_140db5666(&DAT_14ca8ccf8,0,&DAT_14ca8cc90,L"FLongGPUTaskPS",
                    L"/Engine/Private/OneColorShader.usf",L"MainLongGPUTask",3,1,FUN_14741cf26,
                    FUN_14741cefe,&LAB_14741cefa,&LAB_14741cef6,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca8ccf8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f6088);
      _Init_thread_footer(&DAT_14ca8cda0);
    }
  }
  return &DAT_14ca8ccf8;
}



// FUNCTION 1460a1c10 FUN_1460a1c10 body=205 status=ok
// SIG undefined FUN_1460a1c10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a1c10(void)

{
  if ((DAT_14ca8ccf7 & 2) == 0) {
    DAT_14ca8ccf7 = DAT_14ca8ccf7 | 2;
    _DAT_14ca8cc98 = L"FLongGPUTaskPS";
    _DAT_14ca8ccb0 = FUN_146826540;
    _DAT_14ca8ccb8 = FUN_146825d77;
    _DAT_14ca8ccc0 = FUN_146825fd6;
    _DAT_14ca8ccc8 = FUN_1407e02ea;
    _DAT_14ca8ccd0 = FUN_146826273;
    _DAT_14ca8cca8 = FUN_14741cec6;
    _DAT_14ca8cce8 = 0xffffffff000000e0;
    _DAT_14ca8ccf0 = 8;
    DAT_14ca8ccf4 = 0;
    _DAT_14ca8ccd8 = &LAB_14741cef2;
    FUN_1460a1cde();
    FUN_1407e00cc(&DAT_14ca8cc90);
    return;
  }
  return;
}



// FUNCTION 1460a1cde FUN_1460a1cde body=133 status=ok
// SIG undefined FUN_1460a1cde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a1cde(void)

{
  _DAT_14ca94518 = L"BASE";
  DAT_14ca94542 = 4;
  FUN_140b35ae4();
  _DAT_14ca94528 = DAT_14ca8cca0;
  _DAT_14ca94520 = &DAT_14ca8c6c8;
  _DAT_14ca94530 = &LAB_14682652b;
  DAT_14ca8cca0 = &DAT_14ca94518;
  DAT_14ca8ccf5 = DAT_14ca8ccf5 + '\x01';
  _DAT_14ca94538 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8ccf6 = DAT_14ca8ccf6 + '\x01';
  }
  return;
}



// FUNCTION 1460a1d64 FUN_1460a1d64 body=284 status=ok
// SIG undefined FUN_1460a1d64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a1d64(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8d5f0) {
    FUN_144b3d300(&DAT_14ca8d5f0);
    if (DAT_14ca8d5f0 == -1) {
      FUN_1460a1e80();
      FUN_140db5666(&DAT_14ca8d548,0,&DAT_14ca8d4e0,L"FAYUVConvertPS",
                    L"/Engine/Private/MediaShaders.usf",L"AYUVConvertPS",3,1,FUN_14741d170,
                    FUN_14741d148,&LAB_14741d144,&LAB_14741d140,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca8d548 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f7135);
      _Init_thread_footer(&DAT_14ca8d5f0);
    }
  }
  return &DAT_14ca8d548;
}



// FUNCTION 1460a1e80 FUN_1460a1e80 body=205 status=ok
// SIG undefined FUN_1460a1e80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a1e80(void)

{
  if ((DAT_14ca8d547 & 2) == 0) {
    DAT_14ca8d547 = DAT_14ca8d547 | 2;
    _DAT_14ca8d4e8 = L"FAYUVConvertPS";
    _DAT_14ca8d500 = FUN_146826540;
    _DAT_14ca8d508 = FUN_146825d77;
    _DAT_14ca8d510 = FUN_146825fd6;
    _DAT_14ca8d518 = FUN_1407e02ea;
    _DAT_14ca8d520 = FUN_146826273;
    _DAT_14ca8d4f8 = FUN_14741d110;
    _DAT_14ca8d538 = 0xffffffff000000e0;
    _DAT_14ca8d540 = 8;
    DAT_14ca8d544 = 0;
    _DAT_14ca8d528 = &LAB_14741d13c;
    FUN_1460a1f4e();
    FUN_1407e00cc(&DAT_14ca8d4e0);
    return;
  }
  return;
}



// FUNCTION 1460a1f4e FUN_1460a1f4e body=133 status=ok
// SIG undefined FUN_1460a1f4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a1f4e(void)

{
  _DAT_14ca94578 = L"BASE";
  DAT_14ca945a2 = 4;
  FUN_140b35ae4();
  _DAT_14ca94588 = DAT_14ca8d4f0;
  _DAT_14ca94580 = &DAT_14ca8c6c8;
  _DAT_14ca94590 = &LAB_14682652b;
  DAT_14ca8d4f0 = &DAT_14ca94578;
  DAT_14ca8d545 = DAT_14ca8d545 + '\x01';
  _DAT_14ca94598 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8d546 = DAT_14ca8d546 + '\x01';
  }
  return;
}



// FUNCTION 1460a1fd4 FUN_1460a1fd4 body=284 status=ok
// SIG undefined FUN_1460a1fd4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a1fd4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8dcf0) {
    FUN_144b3d300(&DAT_14ca8dcf0);
    if (DAT_14ca8dcf0 == -1) {
      FUN_1460a20f0();
      FUN_140db5666(&DAT_14ca8dc48,0,&DAT_14ca8dbe0,L"FNV21ConvertPS",
                    L"/Engine/Private/MediaShaders.usf",L"NV21ConvertPS",3,1,FUN_14741dcf2,
                    FUN_14741dcca,&LAB_14741dcc6,&LAB_14741dcc2,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca8dc48 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f7472);
      _Init_thread_footer(&DAT_14ca8dcf0);
    }
  }
  return &DAT_14ca8dc48;
}



// FUNCTION 1460a20f0 FUN_1460a20f0 body=205 status=ok
// SIG undefined FUN_1460a20f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a20f0(void)

{
  if ((DAT_14ca8dc47 & 2) == 0) {
    DAT_14ca8dc47 = DAT_14ca8dc47 | 2;
    _DAT_14ca8dbe8 = L"FNV21ConvertPS";
    _DAT_14ca8dc00 = FUN_146826540;
    _DAT_14ca8dc08 = FUN_146825d77;
    _DAT_14ca8dc10 = FUN_146825fd6;
    _DAT_14ca8dc18 = FUN_1407e02ea;
    _DAT_14ca8dc20 = FUN_146826273;
    _DAT_14ca8dbf8 = FUN_14741dc92;
    _DAT_14ca8dc38 = 0xffffffff000000e0;
    _DAT_14ca8dc40 = 8;
    DAT_14ca8dc44 = 0;
    _DAT_14ca8dc28 = &LAB_14741dcbe;
    FUN_1460a21be();
    FUN_1407e00cc(&DAT_14ca8dbe0);
    return;
  }
  return;
}



// FUNCTION 1460a21be FUN_1460a21be body=133 status=ok
// SIG undefined FUN_1460a21be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a21be(void)

{
  _DAT_14ca94638 = L"BASE";
  DAT_14ca94662 = 4;
  FUN_140b35ae4();
  _DAT_14ca94648 = DAT_14ca8dbf0;
  _DAT_14ca94640 = &DAT_14ca8c6c8;
  _DAT_14ca94650 = &LAB_14682652b;
  DAT_14ca8dbf0 = &DAT_14ca94638;
  DAT_14ca8dc45 = DAT_14ca8dc45 + '\x01';
  _DAT_14ca94658 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8dc46 = DAT_14ca8dc46 + '\x01';
  }
  return;
}



// FUNCTION 1460a2244 FUN_1460a2244 body=284 status=ok
// SIG undefined FUN_1460a2244(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a2244(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8deb0) {
    FUN_144b3d300(&DAT_14ca8deb0);
    if (DAT_14ca8deb0 == -1) {
      FUN_1460a2360();
      FUN_140db5666(&DAT_14ca8de08,0,&DAT_14ca8dda0,L"FP010ConvertPS",
                    L"/Engine/Private/MediaShaders.usf",L"P010ConvertPS",3,1,FUN_14741ddde,
                    FUN_14741ddb6,&LAB_14741ddb2,&LAB_14741ddae,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca8de08 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f748a);
      _Init_thread_footer(&DAT_14ca8deb0);
    }
  }
  return &DAT_14ca8de08;
}



// FUNCTION 1460a2360 FUN_1460a2360 body=205 status=ok
// SIG undefined FUN_1460a2360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a2360(void)

{
  if ((DAT_14ca8de07 & 2) == 0) {
    DAT_14ca8de07 = DAT_14ca8de07 | 2;
    _DAT_14ca8dda8 = L"FP010ConvertPS";
    _DAT_14ca8ddc0 = FUN_146826540;
    _DAT_14ca8ddc8 = FUN_146825d77;
    _DAT_14ca8ddd0 = FUN_146825fd6;
    _DAT_14ca8ddd8 = FUN_1407e02ea;
    _DAT_14ca8dde0 = FUN_146826273;
    _DAT_14ca8ddb8 = FUN_14741dd7e;
    _DAT_14ca8ddf8 = 0xffffffff000000e0;
    _DAT_14ca8de00 = 8;
    DAT_14ca8de04 = 0;
    _DAT_14ca8dde8 = &LAB_14741ddaa;
    FUN_1460a242e();
    FUN_1407e00cc(&DAT_14ca8dda0);
    return;
  }
  return;
}



// FUNCTION 1460a242e FUN_1460a242e body=133 status=ok
// SIG undefined FUN_1460a242e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a242e(void)

{
  _DAT_14ca94668 = L"BASE";
  DAT_14ca94692 = 4;
  FUN_140b35ae4();
  _DAT_14ca94678 = DAT_14ca8ddb0;
  _DAT_14ca94670 = &DAT_14ca8c6c8;
  _DAT_14ca94680 = &LAB_14682652b;
  DAT_14ca8ddb0 = &DAT_14ca94668;
  DAT_14ca8de05 = DAT_14ca8de05 + '\x01';
  _DAT_14ca94688 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8de06 = DAT_14ca8de06 + '\x01';
  }
  return;
}



// FUNCTION 1460a24b4 FUN_1460a24b4 body=284 status=ok
// SIG undefined FUN_1460a24b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a24b4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8e070) {
    FUN_144b3d300(&DAT_14ca8e070);
    if (DAT_14ca8e070 == -1) {
      FUN_1460a25d0();
      FUN_140db5666(&DAT_14ca8dfc8,0,&DAT_14ca8df60,L"FP010ConvertAsUINT16sPS",
                    L"/Engine/Private/MediaShaders.usf",L"P010ConvertAsUINT16sPS",3,1,FUN_14741e17c,
                    FUN_14741e154,&LAB_14741e150,&LAB_14741e14c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca8dfc8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f7596);
      _Init_thread_footer(&DAT_14ca8e070);
    }
  }
  return &DAT_14ca8dfc8;
}



// FUNCTION 1460a25d0 FUN_1460a25d0 body=205 status=ok
// SIG undefined FUN_1460a25d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a25d0(void)

{
  if ((DAT_14ca8dfc7 & 2) == 0) {
    DAT_14ca8dfc7 = DAT_14ca8dfc7 | 2;
    _DAT_14ca8df68 = L"FP010ConvertAsUINT16sPS";
    _DAT_14ca8df80 = FUN_146826540;
    _DAT_14ca8df88 = FUN_146825d77;
    _DAT_14ca8df90 = FUN_146825fd6;
    _DAT_14ca8df98 = FUN_1407e02ea;
    _DAT_14ca8dfa0 = FUN_146826273;
    _DAT_14ca8df78 = FUN_14741e11c;
    _DAT_14ca8dfb8 = 0xffffffff000000e0;
    _DAT_14ca8dfc0 = 8;
    DAT_14ca8dfc4 = 0;
    _DAT_14ca8dfa8 = &LAB_14741e148;
    FUN_1460a269e();
    FUN_1407e00cc(&DAT_14ca8df60);
    return;
  }
  return;
}



// FUNCTION 1460a269e FUN_1460a269e body=133 status=ok
// SIG undefined FUN_1460a269e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a269e(void)

{
  _DAT_14ca94698 = L"BASE";
  DAT_14ca946c2 = 4;
  FUN_140b35ae4();
  _DAT_14ca946a8 = DAT_14ca8df70;
  _DAT_14ca946a0 = &DAT_14ca8c6c8;
  _DAT_14ca946b0 = &LAB_14682652b;
  DAT_14ca8df70 = &DAT_14ca94698;
  DAT_14ca8dfc5 = DAT_14ca8dfc5 + '\x01';
  _DAT_14ca946b8 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8dfc6 = DAT_14ca8dfc6 + '\x01';
  }
  return;
}



// FUNCTION 1460a2724 FUN_1460a2724 body=284 status=ok
// SIG undefined FUN_1460a2724(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a2724(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8e230) {
    FUN_144b3d300(&DAT_14ca8e230);
    if (DAT_14ca8e230 == -1) {
      FUN_1460a2840();
      FUN_140db5666(&DAT_14ca8e188,0,&DAT_14ca8e120,L"FP010_2101010ConvertPS",
                    L"/Engine/Private/MediaShaders.usf",L"P010_2101010ConvertPS",3,1,FUN_14741e4ea,
                    FUN_14741e4c2,&LAB_14741e4be,&LAB_14741e4ba,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca8e188 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f76a2);
      _Init_thread_footer(&DAT_14ca8e230);
    }
  }
  return &DAT_14ca8e188;
}



// FUNCTION 1460a2840 FUN_1460a2840 body=205 status=ok
// SIG undefined FUN_1460a2840(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a2840(void)

{
  if ((DAT_14ca8e187 & 2) == 0) {
    DAT_14ca8e187 = DAT_14ca8e187 | 2;
    _DAT_14ca8e128 = L"FP010_2101010ConvertPS";
    _DAT_14ca8e140 = FUN_146826540;
    _DAT_14ca8e148 = FUN_146825d77;
    _DAT_14ca8e150 = FUN_146825fd6;
    _DAT_14ca8e158 = FUN_1407e02ea;
    _DAT_14ca8e160 = FUN_146826273;
    _DAT_14ca8e138 = FUN_14741e48a;
    _DAT_14ca8e178 = 0xffffffff000000e0;
    _DAT_14ca8e180 = 8;
    DAT_14ca8e184 = 0;
    _DAT_14ca8e168 = &LAB_14741e4b6;
    FUN_1460a290e();
    FUN_1407e00cc(&DAT_14ca8e120);
    return;
  }
  return;
}



// FUNCTION 1460a290e FUN_1460a290e body=133 status=ok
// SIG undefined FUN_1460a290e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a290e(void)

{
  _DAT_14ca946c8 = L"BASE";
  DAT_14ca946f2 = 4;
  FUN_140b35ae4();
  _DAT_14ca946d8 = DAT_14ca8e130;
  _DAT_14ca946d0 = &DAT_14ca8c6c8;
  _DAT_14ca946e0 = &LAB_14682652b;
  DAT_14ca8e130 = &DAT_14ca946c8;
  DAT_14ca8e185 = DAT_14ca8e185 + '\x01';
  _DAT_14ca946e8 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8e186 = DAT_14ca8e186 + '\x01';
  }
  return;
}



// FUNCTION 1460a2994 FUN_1460a2994 body=284 status=ok
// SIG undefined FUN_1460a2994(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a2994(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8e898) {
    FUN_144b3d300(&DAT_14ca8e898);
    if (DAT_14ca8e898 == -1) {
      FUN_1460a2ab0();
      FUN_140db5666(&DAT_14ca8e7f0,0,&DAT_14ca8e788,L"FYCbCrConvertPS_4x4Matrix",
                    L"/Engine/Private/MediaShaders.usf",L"YCbCrConvertPS_4x4Matrix",3,1,
                    FUN_14741ed96,FUN_14741ed6e,&LAB_14741ed6a,&LAB_14741ed66,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,0);
      _DAT_14ca8e7f0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f78de);
      _Init_thread_footer(&DAT_14ca8e898);
    }
  }
  return &DAT_14ca8e7f0;
}



// FUNCTION 1460a2ab0 FUN_1460a2ab0 body=205 status=ok
// SIG undefined FUN_1460a2ab0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a2ab0(void)

{
  if ((DAT_14ca8e7ef & 2) == 0) {
    DAT_14ca8e7ef = DAT_14ca8e7ef | 2;
    _DAT_14ca8e790 = L"FYCbCrConvertPS_4x4Matrix";
    _DAT_14ca8e7a8 = FUN_146826540;
    _DAT_14ca8e7b0 = FUN_146825d77;
    _DAT_14ca8e7b8 = FUN_146825fd6;
    _DAT_14ca8e7c0 = FUN_1407e02ea;
    _DAT_14ca8e7c8 = FUN_146826273;
    _DAT_14ca8e7a0 = FUN_14741ed36;
    _DAT_14ca8e7e0 = 0xffffffff000000e0;
    _DAT_14ca8e7e8 = 8;
    DAT_14ca8e7ec = 0;
    _DAT_14ca8e7d0 = &LAB_14741ed62;
    FUN_1460a2b7e();
    FUN_1407e00cc(&DAT_14ca8e788);
    return;
  }
  return;
}



// FUNCTION 1460a2b7e FUN_1460a2b7e body=133 status=ok
// SIG undefined FUN_1460a2b7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a2b7e(void)

{
  _DAT_14ca94788 = L"BASE";
  DAT_14ca947b2 = 4;
  FUN_145ed5d56();
  _DAT_14ca94798 = DAT_14ca8e798;
  _DAT_14ca94790 = &DAT_14ca8e660;
  _DAT_14ca947a0 = &LAB_14682652b;
  DAT_14ca8e798 = &DAT_14ca94788;
  DAT_14ca8e7ed = DAT_14ca8e7ed + '\x01';
  _DAT_14ca947a8 = 0x100000000;
  if (DAT_14ca8e6c4 != '\0') {
    DAT_14ca8e7ee = DAT_14ca8e7ee + '\x01';
  }
  return;
}



// FUNCTION 1460a2c04 FUN_1460a2c04 body=284 status=ok
// SIG undefined FUN_1460a2c04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a2c04(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8ea58) {
    FUN_144b3d300(&DAT_14ca8ea58);
    if (DAT_14ca8ea58 == -1) {
      FUN_1460a2d20();
      FUN_140db5666(&DAT_14ca8e9b0,0,&DAT_14ca8e948,L"FUYVYConvertPS",
                    L"/Engine/Private/MediaShaders.usf",L"UYVYConvertPS",3,1,FUN_14741ee82,
                    FUN_14741ee5a,&LAB_14741ee56,&LAB_14741ee52,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca8e9b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f78f6);
      _Init_thread_footer(&DAT_14ca8ea58);
    }
  }
  return &DAT_14ca8e9b0;
}



// FUNCTION 1460a2d20 FUN_1460a2d20 body=205 status=ok
// SIG undefined FUN_1460a2d20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a2d20(void)

{
  if ((DAT_14ca8e9af & 2) == 0) {
    DAT_14ca8e9af = DAT_14ca8e9af | 2;
    _DAT_14ca8e950 = L"FUYVYConvertPS";
    _DAT_14ca8e968 = FUN_146826540;
    _DAT_14ca8e970 = FUN_146825d77;
    _DAT_14ca8e978 = FUN_146825fd6;
    _DAT_14ca8e980 = FUN_1407e02ea;
    _DAT_14ca8e988 = FUN_146826273;
    _DAT_14ca8e960 = FUN_14741ee22;
    _DAT_14ca8e9a0 = 0xffffffff000000e0;
    _DAT_14ca8e9a8 = 8;
    DAT_14ca8e9ac = 0;
    _DAT_14ca8e990 = &LAB_14741ee4e;
    FUN_1460a2dee();
    FUN_1407e00cc(&DAT_14ca8e948);
    return;
  }
  return;
}



// FUNCTION 1460a2dee FUN_1460a2dee body=133 status=ok
// SIG undefined FUN_1460a2dee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a2dee(void)

{
  _DAT_14ca947b8 = L"BASE";
  DAT_14ca947e2 = 4;
  FUN_140b35ae4();
  _DAT_14ca947c8 = DAT_14ca8e958;
  _DAT_14ca947c0 = &DAT_14ca8c6c8;
  _DAT_14ca947d0 = &LAB_14682652b;
  DAT_14ca8e958 = &DAT_14ca947b8;
  DAT_14ca8e9ad = DAT_14ca8e9ad + '\x01';
  _DAT_14ca947d8 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8e9ae = DAT_14ca8e9ae + '\x01';
  }
  return;
}



// FUNCTION 1460a2e74 FUN_1460a2e74 body=284 status=ok
// SIG undefined FUN_1460a2e74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a2e74(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8f698) {
    FUN_144b3d300(&DAT_14ca8f698);
    if (DAT_14ca8f698 == -1) {
      FUN_1460a2f90();
      FUN_140db5666(&DAT_14ca8f5f0,0,&DAT_14ca8f588,L"FYVYUConvertPS",
                    L"/Engine/Private/MediaShaders.usf",L"YVYUConvertPS",3,1,FUN_1474205d4,
                    FUN_1474205ac,&LAB_1474205a8,&LAB_1474205a4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca8f5f0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f7f56);
      _Init_thread_footer(&DAT_14ca8f698);
    }
  }
  return &DAT_14ca8f5f0;
}



// FUNCTION 1460a2f90 FUN_1460a2f90 body=205 status=ok
// SIG undefined FUN_1460a2f90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a2f90(void)

{
  if ((DAT_14ca8f5ef & 2) == 0) {
    DAT_14ca8f5ef = DAT_14ca8f5ef | 2;
    _DAT_14ca8f590 = L"FYVYUConvertPS";
    _DAT_14ca8f5a8 = FUN_146826540;
    _DAT_14ca8f5b0 = FUN_146825d77;
    _DAT_14ca8f5b8 = FUN_146825fd6;
    _DAT_14ca8f5c0 = FUN_1407e02ea;
    _DAT_14ca8f5c8 = FUN_146826273;
    _DAT_14ca8f5a0 = FUN_147420574;
    _DAT_14ca8f5e0 = 0xffffffff000000e0;
    _DAT_14ca8f5e8 = 8;
    DAT_14ca8f5ec = 0;
    _DAT_14ca8f5d0 = &LAB_1474205a0;
    FUN_1460a305e();
    FUN_1407e00cc(&DAT_14ca8f588);
    return;
  }
  return;
}



// FUNCTION 1460a305e FUN_1460a305e body=133 status=ok
// SIG undefined FUN_1460a305e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a305e(void)

{
  _DAT_14ca94908 = L"BASE";
  DAT_14ca94932 = 4;
  FUN_140b35ae4();
  _DAT_14ca94918 = DAT_14ca8f598;
  _DAT_14ca94910 = &DAT_14ca8c6c8;
  _DAT_14ca94920 = &LAB_14682652b;
  DAT_14ca8f598 = &DAT_14ca94908;
  DAT_14ca8f5ed = DAT_14ca8f5ed + '\x01';
  _DAT_14ca94928 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8f5ee = DAT_14ca8f5ee + '\x01';
  }
  return;
}



// FUNCTION 1460a30e4 FUN_1460a30e4 body=284 status=ok
// SIG undefined FUN_1460a30e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a30e4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8f858) {
    FUN_144b3d300(&DAT_14ca8f858);
    if (DAT_14ca8f858 == -1) {
      FUN_1460a3200();
      FUN_140db5666(&DAT_14ca8f7b0,0,&DAT_14ca8f748,L"FRGB8toY8ConvertPS",
                    L"/Engine/Private/MediaShaders.usf",L"RGB8toY8ConvertPS",3,1,FUN_1474206c0,
                    FUN_147420698,&LAB_147420694,&LAB_147420690,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca8f7b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f7f6e);
      _Init_thread_footer(&DAT_14ca8f858);
    }
  }
  return &DAT_14ca8f7b0;
}



// FUNCTION 1460a3200 FUN_1460a3200 body=205 status=ok
// SIG undefined FUN_1460a3200(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a3200(void)

{
  if ((DAT_14ca8f7af & 2) == 0) {
    DAT_14ca8f7af = DAT_14ca8f7af | 2;
    _DAT_14ca8f750 = L"FRGB8toY8ConvertPS";
    _DAT_14ca8f768 = FUN_146826540;
    _DAT_14ca8f770 = FUN_146825d77;
    _DAT_14ca8f778 = FUN_146825fd6;
    _DAT_14ca8f780 = FUN_1407e02ea;
    _DAT_14ca8f788 = FUN_146826273;
    _DAT_14ca8f760 = FUN_147420660;
    _DAT_14ca8f7a0 = 0xffffffff000000e0;
    _DAT_14ca8f7a8 = 8;
    DAT_14ca8f7ac = 0;
    _DAT_14ca8f790 = &LAB_14742068c;
    FUN_1460a32ce();
    FUN_1407e00cc(&DAT_14ca8f748);
    return;
  }
  return;
}



// FUNCTION 1460a32ce FUN_1460a32ce body=133 status=ok
// SIG undefined FUN_1460a32ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a32ce(void)

{
  _DAT_14ca94938 = L"BASE";
  DAT_14ca94962 = 4;
  FUN_140b35ae4();
  _DAT_14ca94948 = DAT_14ca8f758;
  _DAT_14ca94940 = &DAT_14ca8c6c8;
  _DAT_14ca94950 = &LAB_14682652b;
  DAT_14ca8f758 = &DAT_14ca94938;
  DAT_14ca8f7ad = DAT_14ca8f7ad + '\x01';
  _DAT_14ca94958 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8f7ae = DAT_14ca8f7ae + '\x01';
  }
  return;
}



// FUNCTION 1460a3354 FUN_1460a3354 body=284 status=ok
// SIG undefined FUN_1460a3354(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a3354(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca90078) {
    FUN_144b3d300(&DAT_14ca90078);
    if (DAT_14ca90078 == -1) {
      FUN_1460a3470();
      FUN_140db5666(&DAT_14ca8ffd0,0,&DAT_14ca8ff68,L"FOculusVertexShader",
                    L"/Engine/Private/OculusShaders.usf",L"MainVertexShader",0,1,FUN_1474211d8,
                    FUN_1474211b0,&LAB_1474211ac,&LAB_1474211a8,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca8ffd0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f81b6);
      _Init_thread_footer(&DAT_14ca90078);
    }
  }
  return &DAT_14ca8ffd0;
}



// FUNCTION 1460a3470 FUN_1460a3470 body=205 status=ok
// SIG undefined FUN_1460a3470(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a3470(void)

{
  if ((DAT_14ca8ffcf & 2) == 0) {
    DAT_14ca8ffcf = DAT_14ca8ffcf | 2;
    _DAT_14ca8ff70 = L"FOculusVertexShader";
    _DAT_14ca8ff88 = FUN_146826540;
    _DAT_14ca8ff90 = FUN_146825d77;
    _DAT_14ca8ff98 = FUN_146825fd6;
    _DAT_14ca8ffa0 = FUN_1407e02ea;
    _DAT_14ca8ffa8 = FUN_146826273;
    _DAT_14ca8ff80 = FUN_147421178;
    _DAT_14ca8ffc0 = 0xffffffff000000e0;
    _DAT_14ca8ffc8 = 8;
    DAT_14ca8ffcc = 0;
    _DAT_14ca8ffb0 = &LAB_1474211a4;
    FUN_1460a353e();
    FUN_1407e00cc(&DAT_14ca8ff68);
    return;
  }
  return;
}



// FUNCTION 1460a353e FUN_1460a353e body=133 status=ok
// SIG undefined FUN_1460a353e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a353e(void)

{
  _DAT_14ca94a58 = L"BASE";
  DAT_14ca94a82 = 4;
  FUN_140b35ae4();
  _DAT_14ca94a68 = DAT_14ca8ff78;
  _DAT_14ca94a60 = &DAT_14ca8c6c8;
  _DAT_14ca94a70 = &LAB_14682652b;
  DAT_14ca8ff78 = &DAT_14ca94a58;
  DAT_14ca8ffcd = DAT_14ca8ffcd + '\x01';
  _DAT_14ca94a78 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8ffce = DAT_14ca8ffce + '\x01';
  }
  return;
}



// FUNCTION 1460a35c4 FUN_1460a35c4 body=284 status=ok
// SIG undefined FUN_1460a35c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a35c4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca901a0) {
    FUN_144b3d300(&DAT_14ca901a0);
    if (DAT_14ca901a0 == -1) {
      FUN_1460a36e0();
      FUN_140db5666(&DAT_14ca900f8,0,&DAT_14ca90090,L"FOculusWhiteShader",
                    L"/Engine/Private/OculusShaders.usf",L"MainWhiteShader",3,1,FUN_1474212c4,
                    FUN_14742129c,&LAB_147421298,&LAB_147421294,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca900f8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f81c2);
      _Init_thread_footer(&DAT_14ca901a0);
    }
  }
  return &DAT_14ca900f8;
}



// FUNCTION 1460a36e0 FUN_1460a36e0 body=205 status=ok
// SIG undefined FUN_1460a36e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a36e0(void)

{
  if ((DAT_14ca900f7 & 2) == 0) {
    DAT_14ca900f7 = DAT_14ca900f7 | 2;
    _DAT_14ca90098 = L"FOculusWhiteShader";
    _DAT_14ca900b0 = FUN_146826540;
    _DAT_14ca900b8 = FUN_146825d77;
    _DAT_14ca900c0 = FUN_146825fd6;
    _DAT_14ca900c8 = FUN_1407e02ea;
    _DAT_14ca900d0 = FUN_146826273;
    _DAT_14ca900a8 = FUN_147421264;
    _DAT_14ca900e8 = 0xffffffff000000e0;
    _DAT_14ca900f0 = 8;
    DAT_14ca900f4 = 0;
    _DAT_14ca900d8 = &LAB_147421290;
    FUN_1460a37ae();
    FUN_1407e00cc(&DAT_14ca90090);
    return;
  }
  return;
}



// FUNCTION 1460a37ae FUN_1460a37ae body=133 status=ok
// SIG undefined FUN_1460a37ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a37ae(void)

{
  _DAT_14ca94a88 = L"BASE";
  DAT_14ca94ab2 = 4;
  FUN_140b35ae4();
  _DAT_14ca94a98 = DAT_14ca900a0;
  _DAT_14ca94a90 = &DAT_14ca8c6c8;
  _DAT_14ca94aa0 = &LAB_14682652b;
  DAT_14ca900a0 = &DAT_14ca94a88;
  DAT_14ca900f5 = DAT_14ca900f5 + '\x01';
  _DAT_14ca94aa8 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca900f6 = DAT_14ca900f6 + '\x01';
  }
  return;
}



// FUNCTION 1460a3834 FUN_1460a3834 body=284 status=ok
// SIG undefined FUN_1460a3834(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a3834(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca902c8) {
    FUN_144b3d300(&DAT_14ca902c8);
    if (DAT_14ca902c8 == -1) {
      FUN_1460a3950();
      FUN_140db5666(&DAT_14ca90220,0,&DAT_14ca901b8,L"FOculusBlackShader",
                    L"/Engine/Private/OculusShaders.usf",L"MainBlackShader",3,1,FUN_1474213b0,
                    FUN_147421388,&LAB_147421384,&LAB_147421380,&LAB_14712ac0c,&LAB_14712ac08,0xe0,0
                   );
      _DAT_14ca90220 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f81ce);
      _Init_thread_footer(&DAT_14ca902c8);
    }
  }
  return &DAT_14ca90220;
}



// FUNCTION 1460a3950 FUN_1460a3950 body=205 status=ok
// SIG undefined FUN_1460a3950(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a3950(void)

{
  if ((DAT_14ca9021f & 2) == 0) {
    DAT_14ca9021f = DAT_14ca9021f | 2;
    _DAT_14ca901c0 = L"FOculusBlackShader";
    _DAT_14ca901d8 = FUN_146826540;
    _DAT_14ca901e0 = FUN_146825d77;
    _DAT_14ca901e8 = FUN_146825fd6;
    _DAT_14ca901f0 = FUN_1407e02ea;
    _DAT_14ca901f8 = FUN_146826273;
    _DAT_14ca901d0 = FUN_147421350;
    _DAT_14ca90210 = 0xffffffff000000e0;
    _DAT_14ca90218 = 8;
    DAT_14ca9021c = 0;
    _DAT_14ca90200 = &LAB_14742137c;
    FUN_1460a3a1e();
    FUN_1407e00cc(&DAT_14ca901b8);
    return;
  }
  return;
}



// FUNCTION 1460a3a1e FUN_1460a3a1e body=133 status=ok
// SIG undefined FUN_1460a3a1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a3a1e(void)

{
  _DAT_14ca94ab8 = L"BASE";
  DAT_14ca94ae2 = 4;
  FUN_140b35ae4();
  _DAT_14ca94ac8 = DAT_14ca901c8;
  _DAT_14ca94ac0 = &DAT_14ca8c6c8;
  _DAT_14ca94ad0 = &LAB_14682652b;
  DAT_14ca901c8 = &DAT_14ca94ab8;
  DAT_14ca9021d = DAT_14ca9021d + '\x01';
  _DAT_14ca94ad8 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca9021e = DAT_14ca9021e + '\x01';
  }
  return;
}



// FUNCTION 1460a3aa4 FUN_1460a3aa4 body=284 status=ok
// SIG undefined FUN_1460a3aa4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a3aa4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caad688) {
    FUN_144b3d300(&DAT_14caad688);
    if (DAT_14caad688 == -1) {
      FUN_1460a3bc0();
      FUN_140db5666(&DAT_14caad5e0,0,&DAT_14caad578,L"FSlateDebugOverdrawPS",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"DebugOverdrawMain",3,1,
                    FUN_14750f010,FUN_14750efe8,&LAB_14750efe4,&LAB_14750efe0,&LAB_14712ac0c,
                    &LAB_14712ac08,0x118,0);
      _DAT_14caad5e0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c5f9b);
      _Init_thread_footer(&DAT_14caad688);
    }
  }
  return &DAT_14caad5e0;
}



// FUNCTION 1460a3bc0 FUN_1460a3bc0 body=205 status=ok
// SIG undefined FUN_1460a3bc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a3bc0(void)

{
  if ((DAT_14caad5df & 2) == 0) {
    DAT_14caad5df = DAT_14caad5df | 2;
    _DAT_14caad580 = L"FSlateDebugOverdrawPS";
    _DAT_14caad598 = FUN_146826540;
    _DAT_14caad5a0 = FUN_146825d77;
    _DAT_14caad5a8 = FUN_146825fd6;
    _DAT_14caad5b0 = FUN_1407e02ea;
    _DAT_14caad5b8 = FUN_146826273;
    _DAT_14caad590 = FUN_14750efb2;
    _DAT_14caad5d0 = 0xffffffff00000118;
    _DAT_14caad5d8 = 8;
    DAT_14caad5dc = 0;
    _DAT_14caad5c0 = &LAB_14750efdc;
    FUN_1460a3c8e();
    FUN_1407e00cc(&DAT_14caad578);
    return;
  }
  return;
}



// FUNCTION 1460a3c8e FUN_1460a3c8e body=133 status=ok
// SIG undefined FUN_1460a3c8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a3c8e(void)

{
  _DAT_14cab0f00 = L"BASE";
  DAT_14cab0f2a = 4;
  FUN_1413f4858();
  _DAT_14cab0f10 = DAT_14caad588;
  _DAT_14cab0f08 = &DAT_14caad3e0;
  _DAT_14cab0f18 = &LAB_14682652b;
  DAT_14caad588 = &DAT_14cab0f00;
  DAT_14caad5dd = DAT_14caad5dd + '\x01';
  _DAT_14cab0f20 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caad5de = DAT_14caad5de + '\x01';
  }
  return;
}



// FUNCTION 1460a3d14 FUN_1460a3d14 body=284 status=ok
// SIG undefined FUN_1460a3d14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a3d14(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caadea0) {
    FUN_144b3d300(&DAT_14caadea0);
    if (DAT_14caadea0 == -1) {
      FUN_1460a3e30();
      FUN_140db5666(&DAT_14caaddf8,0,&DAT_14caadd90,L"TSlateElementPSDefaulttruetruetruefalseA",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_14750f53e,
                    FUN_14750f516,&LAB_14750f512,&LAB_14750f50e,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caaddf8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c5fef);
      _Init_thread_footer(&DAT_14caadea0);
    }
  }
  return &DAT_14caaddf8;
}



// FUNCTION 1460a3e30 FUN_1460a3e30 body=205 status=ok
// SIG undefined FUN_1460a3e30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a3e30(void)

{
  if ((DAT_14caaddf7 & 2) == 0) {
    DAT_14caaddf7 = DAT_14caaddf7 | 2;
    _DAT_14caadd98 = L"TSlateElementPSDefaulttruetruetruefalseA";
    _DAT_14caaddb0 = FUN_146826540;
    _DAT_14caaddb8 = FUN_146825d77;
    _DAT_14caaddc0 = FUN_146825fd6;
    _DAT_14caaddc8 = FUN_1407e02ea;
    _DAT_14caaddd0 = FUN_146826273;
    _DAT_14caadda8 = FUN_14750f4e0;
    _DAT_14caadde8 = 0xffffffff00000118;
    _DAT_14caaddf0 = 8;
    DAT_14caaddf4 = 0;
    _DAT_14caaddd8 = &LAB_14750f50a;
    FUN_1460a3efe();
    FUN_1407e00cc(&DAT_14caadd90);
    return;
  }
  return;
}



// FUNCTION 1460a3efe FUN_1460a3efe body=133 status=ok
// SIG undefined FUN_1460a3efe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a3efe(void)

{
  _DAT_14cab1050 = L"BASE";
  DAT_14cab107a = 4;
  FUN_1413f4858();
  _DAT_14cab1060 = DAT_14caadda0;
  _DAT_14cab1058 = &DAT_14caad3e0;
  _DAT_14cab1068 = &LAB_14682652b;
  DAT_14caadda0 = &DAT_14cab1050;
  DAT_14caaddf5 = DAT_14caaddf5 + '\x01';
  _DAT_14cab1070 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caaddf6 = DAT_14caaddf6 + '\x01';
  }
  return;
}



// FUNCTION 1460a3f84 FUN_1460a3f84 body=284 status=ok
// SIG undefined FUN_1460a3f84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a3f84(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caadfc8) {
    FUN_144b3d300(&DAT_14caadfc8);
    if (DAT_14caadfc8 == -1) {
      FUN_1460a40a0();
      FUN_140db5666(&DAT_14caadf20,0,&DAT_14caadeb8,L"TSlateElementPSDefaulttruetruetruetrueA",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_14750f5e8,
                    FUN_14750f5c0,&LAB_14750f5bc,&LAB_14750f5b8,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caadf20 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c5ffb);
      _Init_thread_footer(&DAT_14caadfc8);
    }
  }
  return &DAT_14caadf20;
}



// FUNCTION 1460a40a0 FUN_1460a40a0 body=205 status=ok
// SIG undefined FUN_1460a40a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a40a0(void)

{
  if ((DAT_14caadf1f & 2) == 0) {
    DAT_14caadf1f = DAT_14caadf1f | 2;
    _DAT_14caadec0 = L"TSlateElementPSDefaulttruetruetruetrueA";
    _DAT_14caaded8 = FUN_146826540;
    _DAT_14caadee0 = FUN_146825d77;
    _DAT_14caadee8 = FUN_146825fd6;
    _DAT_14caadef0 = FUN_1407e02ea;
    _DAT_14caadef8 = FUN_146826273;
    _DAT_14caaded0 = FUN_14750f58a;
    _DAT_14caadf10 = 0xffffffff00000118;
    _DAT_14caadf18 = 8;
    DAT_14caadf1c = 0;
    _DAT_14caadf00 = &LAB_14750f5b4;
    FUN_1460a416e();
    FUN_1407e00cc(&DAT_14caadeb8);
    return;
  }
  return;
}



// FUNCTION 1460a416e FUN_1460a416e body=133 status=ok
// SIG undefined FUN_1460a416e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a416e(void)

{
  _DAT_14cab1080 = L"BASE";
  DAT_14cab10aa = 4;
  FUN_1413f4858();
  _DAT_14cab1090 = DAT_14caadec8;
  _DAT_14cab1088 = &DAT_14caad3e0;
  _DAT_14cab1098 = &LAB_14682652b;
  DAT_14caadec8 = &DAT_14cab1080;
  DAT_14caadf1d = DAT_14caadf1d + '\x01';
  _DAT_14cab10a0 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caadf1e = DAT_14caadf1e + '\x01';
  }
  return;
}



// FUNCTION 1460a41f4 FUN_1460a41f4 body=284 status=ok
// SIG undefined FUN_1460a41f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a41f4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caae0f0) {
    FUN_144b3d300(&DAT_14caae0f0);
    if (DAT_14caae0f0 == -1) {
      FUN_1460a4310();
      FUN_140db5666(&DAT_14caae048,0,&DAT_14caadfe0,L"TSlateElementPSBordertruetruefalsefalseA",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_14750f692,
                    FUN_14750f66a,&LAB_14750f666,&LAB_14750f662,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caae048 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c6007);
      _Init_thread_footer(&DAT_14caae0f0);
    }
  }
  return &DAT_14caae048;
}



// FUNCTION 1460a4310 FUN_1460a4310 body=205 status=ok
// SIG undefined FUN_1460a4310(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a4310(void)

{
  if ((DAT_14caae047 & 2) == 0) {
    DAT_14caae047 = DAT_14caae047 | 2;
    _DAT_14caadfe8 = L"TSlateElementPSBordertruetruefalsefalseA";
    _DAT_14caae000 = FUN_146826540;
    _DAT_14caae008 = FUN_146825d77;
    _DAT_14caae010 = FUN_146825fd6;
    _DAT_14caae018 = FUN_1407e02ea;
    _DAT_14caae020 = FUN_146826273;
    _DAT_14caadff8 = FUN_14750f634;
    _DAT_14caae038 = 0xffffffff00000118;
    _DAT_14caae040 = 8;
    DAT_14caae044 = 0;
    _DAT_14caae028 = &LAB_14750f65e;
    FUN_1460a43de();
    FUN_1407e00cc(&DAT_14caadfe0);
    return;
  }
  return;
}



// FUNCTION 1460a43de FUN_1460a43de body=133 status=ok
// SIG undefined FUN_1460a43de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a43de(void)

{
  _DAT_14cab10b0 = L"BASE";
  DAT_14cab10da = 4;
  FUN_1413f4858();
  _DAT_14cab10c0 = DAT_14caadff0;
  _DAT_14cab10b8 = &DAT_14caad3e0;
  _DAT_14cab10c8 = &LAB_14682652b;
  DAT_14caadff0 = &DAT_14cab10b0;
  DAT_14caae045 = DAT_14caae045 + '\x01';
  _DAT_14cab10d0 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caae046 = DAT_14caae046 + '\x01';
  }
  return;
}



// FUNCTION 1460a4464 FUN_1460a4464 body=284 status=ok
// SIG undefined FUN_1460a4464(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a4464(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caae218) {
    FUN_144b3d300(&DAT_14caae218);
    if (DAT_14caae218 == -1) {
      FUN_1460a4580();
      FUN_140db5666(&DAT_14caae170,0,&DAT_14caae108,L"TSlateElementPSDefaultfalsefalsetruefalseA",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_14750f73c,
                    FUN_14750f714,&LAB_14750f710,&LAB_14750f70c,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caae170 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c6013);
      _Init_thread_footer(&DAT_14caae218);
    }
  }
  return &DAT_14caae170;
}



// FUNCTION 1460a4580 FUN_1460a4580 body=205 status=ok
// SIG undefined FUN_1460a4580(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a4580(void)

{
  if ((DAT_14caae16f & 2) == 0) {
    DAT_14caae16f = DAT_14caae16f | 2;
    _DAT_14caae110 = L"TSlateElementPSDefaultfalsefalsetruefalseA";
    _DAT_14caae128 = FUN_146826540;
    _DAT_14caae130 = FUN_146825d77;
    _DAT_14caae138 = FUN_146825fd6;
    _DAT_14caae140 = FUN_1407e02ea;
    _DAT_14caae148 = FUN_146826273;
    _DAT_14caae120 = FUN_14750f6de;
    _DAT_14caae160 = 0xffffffff00000118;
    _DAT_14caae168 = 8;
    DAT_14caae16c = 0;
    _DAT_14caae150 = &LAB_14750f708;
    FUN_1460a464e();
    FUN_1407e00cc(&DAT_14caae108);
    return;
  }
  return;
}



// FUNCTION 1460a464e FUN_1460a464e body=133 status=ok
// SIG undefined FUN_1460a464e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a464e(void)

{
  _DAT_14cab10e0 = L"BASE";
  DAT_14cab110a = 4;
  FUN_1413f4858();
  _DAT_14cab10f0 = DAT_14caae118;
  _DAT_14cab10e8 = &DAT_14caad3e0;
  _DAT_14cab10f8 = &LAB_14682652b;
  DAT_14caae118 = &DAT_14cab10e0;
  DAT_14caae16d = DAT_14caae16d + '\x01';
  _DAT_14cab1100 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caae16e = DAT_14caae16e + '\x01';
  }
  return;
}



// FUNCTION 1460a46d4 FUN_1460a46d4 body=284 status=ok
// SIG undefined FUN_1460a46d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a46d4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caae340) {
    FUN_144b3d300(&DAT_14caae340);
    if (DAT_14caae340 == -1) {
      FUN_1460a47f0();
      FUN_140db5666(&DAT_14caae298,0,&DAT_14caae230,L"TSlateElementPSDefaultfalsefalsetruetrueA",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_14750f7e6,
                    FUN_14750f7be,&LAB_14750f7ba,&LAB_14750f7b6,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caae298 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c601f);
      _Init_thread_footer(&DAT_14caae340);
    }
  }
  return &DAT_14caae298;
}



// FUNCTION 1460a47f0 FUN_1460a47f0 body=205 status=ok
// SIG undefined FUN_1460a47f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a47f0(void)

{
  if ((DAT_14caae297 & 2) == 0) {
    DAT_14caae297 = DAT_14caae297 | 2;
    _DAT_14caae238 = L"TSlateElementPSDefaultfalsefalsetruetrueA";
    _DAT_14caae250 = FUN_146826540;
    _DAT_14caae258 = FUN_146825d77;
    _DAT_14caae260 = FUN_146825fd6;
    _DAT_14caae268 = FUN_1407e02ea;
    _DAT_14caae270 = FUN_146826273;
    _DAT_14caae248 = FUN_14750f788;
    _DAT_14caae288 = 0xffffffff00000118;
    _DAT_14caae290 = 8;
    DAT_14caae294 = 0;
    _DAT_14caae278 = &LAB_14750f7b2;
    FUN_1460a48be();
    FUN_1407e00cc(&DAT_14caae230);
    return;
  }
  return;
}



// FUNCTION 1460a48be FUN_1460a48be body=133 status=ok
// SIG undefined FUN_1460a48be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a48be(void)

{
  _DAT_14cab1110 = L"BASE";
  DAT_14cab113a = 4;
  FUN_1413f4858();
  _DAT_14cab1120 = DAT_14caae240;
  _DAT_14cab1118 = &DAT_14caad3e0;
  _DAT_14cab1128 = &LAB_14682652b;
  DAT_14caae240 = &DAT_14cab1110;
  DAT_14caae295 = DAT_14caae295 + '\x01';
  _DAT_14cab1130 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caae296 = DAT_14caae296 + '\x01';
  }
  return;
}



// FUNCTION 1460a4944 FUN_1460a4944 body=284 status=ok
// SIG undefined FUN_1460a4944(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a4944(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caae468) {
    FUN_144b3d300(&DAT_14caae468);
    if (DAT_14caae468 == -1) {
      FUN_1460a4a60();
      FUN_140db5666(&DAT_14caae3c0,0,&DAT_14caae358,L"TSlateElementPSBorderfalsefalsefalsefalseA",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_14750f890,
                    FUN_14750f868,&LAB_14750f864,&LAB_14750f860,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caae3c0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c602b);
      _Init_thread_footer(&DAT_14caae468);
    }
  }
  return &DAT_14caae3c0;
}



// FUNCTION 1460a4a60 FUN_1460a4a60 body=205 status=ok
// SIG undefined FUN_1460a4a60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a4a60(void)

{
  if ((DAT_14caae3bf & 2) == 0) {
    DAT_14caae3bf = DAT_14caae3bf | 2;
    _DAT_14caae360 = L"TSlateElementPSBorderfalsefalsefalsefalseA";
    _DAT_14caae378 = FUN_146826540;
    _DAT_14caae380 = FUN_146825d77;
    _DAT_14caae388 = FUN_146825fd6;
    _DAT_14caae390 = FUN_1407e02ea;
    _DAT_14caae398 = FUN_146826273;
    _DAT_14caae370 = FUN_14750f832;
    _DAT_14caae3b0 = 0xffffffff00000118;
    _DAT_14caae3b8 = 8;
    DAT_14caae3bc = 0;
    _DAT_14caae3a0 = &LAB_14750f85c;
    FUN_1460a4b2e();
    FUN_1407e00cc(&DAT_14caae358);
    return;
  }
  return;
}



// FUNCTION 1460a4b2e FUN_1460a4b2e body=133 status=ok
// SIG undefined FUN_1460a4b2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a4b2e(void)

{
  _DAT_14cab1140 = L"BASE";
  DAT_14cab116a = 4;
  FUN_1413f4858();
  _DAT_14cab1150 = DAT_14caae368;
  _DAT_14cab1148 = &DAT_14caad3e0;
  _DAT_14cab1158 = &LAB_14682652b;
  DAT_14caae368 = &DAT_14cab1140;
  DAT_14caae3bd = DAT_14caae3bd + '\x01';
  _DAT_14cab1160 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caae3be = DAT_14caae3be + '\x01';
  }
  return;
}



// FUNCTION 1460a4bb4 FUN_1460a4bb4 body=284 status=ok
// SIG undefined FUN_1460a4bb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a4bb4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caae590) {
    FUN_144b3d300(&DAT_14caae590);
    if (DAT_14caae590 == -1) {
      FUN_1460a4cd0();
      FUN_140db5666(&DAT_14caae4e8,0,&DAT_14caae480,L"TSlateElementPSDefaulttruefalsetruefalseA",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_14750f93a,
                    FUN_14750f912,&LAB_14750f90e,&LAB_14750f90a,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caae4e8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c6037);
      _Init_thread_footer(&DAT_14caae590);
    }
  }
  return &DAT_14caae4e8;
}



// FUNCTION 1460a4cd0 FUN_1460a4cd0 body=205 status=ok
// SIG undefined FUN_1460a4cd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a4cd0(void)

{
  if ((DAT_14caae4e7 & 2) == 0) {
    DAT_14caae4e7 = DAT_14caae4e7 | 2;
    _DAT_14caae488 = L"TSlateElementPSDefaulttruefalsetruefalseA";
    _DAT_14caae4a0 = FUN_146826540;
    _DAT_14caae4a8 = FUN_146825d77;
    _DAT_14caae4b0 = FUN_146825fd6;
    _DAT_14caae4b8 = FUN_1407e02ea;
    _DAT_14caae4c0 = FUN_146826273;
    _DAT_14caae498 = FUN_14750f8dc;
    _DAT_14caae4d8 = 0xffffffff00000118;
    _DAT_14caae4e0 = 8;
    DAT_14caae4e4 = 0;
    _DAT_14caae4c8 = &LAB_14750f906;
    FUN_1460a4d9e();
    FUN_1407e00cc(&DAT_14caae480);
    return;
  }
  return;
}



// FUNCTION 1460a4d9e FUN_1460a4d9e body=133 status=ok
// SIG undefined FUN_1460a4d9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a4d9e(void)

{
  _DAT_14cab1170 = L"BASE";
  DAT_14cab119a = 4;
  FUN_1413f4858();
  _DAT_14cab1180 = DAT_14caae490;
  _DAT_14cab1178 = &DAT_14caad3e0;
  _DAT_14cab1188 = &LAB_14682652b;
  DAT_14caae490 = &DAT_14cab1170;
  DAT_14caae4e5 = DAT_14caae4e5 + '\x01';
  _DAT_14cab1190 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caae4e6 = DAT_14caae4e6 + '\x01';
  }
  return;
}



// FUNCTION 1460a4e24 FUN_1460a4e24 body=284 status=ok
// SIG undefined FUN_1460a4e24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a4e24(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caae6b8) {
    FUN_144b3d300(&DAT_14caae6b8);
    if (DAT_14caae6b8 == -1) {
      FUN_1460a4f40();
      FUN_140db5666(&DAT_14caae610,0,&DAT_14caae5a8,L"TSlateElementPSDefaulttruefalsetruetrueA",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_14750f9e4,
                    FUN_14750f9bc,&LAB_14750f9b8,&LAB_14750f9b4,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caae610 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c6043);
      _Init_thread_footer(&DAT_14caae6b8);
    }
  }
  return &DAT_14caae610;
}



// FUNCTION 1460a4f40 FUN_1460a4f40 body=205 status=ok
// SIG undefined FUN_1460a4f40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a4f40(void)

{
  if ((DAT_14caae60f & 2) == 0) {
    DAT_14caae60f = DAT_14caae60f | 2;
    _DAT_14caae5b0 = L"TSlateElementPSDefaulttruefalsetruetrueA";
    _DAT_14caae5c8 = FUN_146826540;
    _DAT_14caae5d0 = FUN_146825d77;
    _DAT_14caae5d8 = FUN_146825fd6;
    _DAT_14caae5e0 = FUN_1407e02ea;
    _DAT_14caae5e8 = FUN_146826273;
    _DAT_14caae5c0 = FUN_14750f986;
    _DAT_14caae600 = 0xffffffff00000118;
    _DAT_14caae608 = 8;
    DAT_14caae60c = 0;
    _DAT_14caae5f0 = &LAB_14750f9b0;
    FUN_1460a500e();
    FUN_1407e00cc(&DAT_14caae5a8);
    return;
  }
  return;
}



// FUNCTION 1460a500e FUN_1460a500e body=133 status=ok
// SIG undefined FUN_1460a500e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a500e(void)

{
  _DAT_14cab11a0 = L"BASE";
  DAT_14cab11ca = 4;
  FUN_1413f4858();
  _DAT_14cab11b0 = DAT_14caae5b8;
  _DAT_14cab11a8 = &DAT_14caad3e0;
  _DAT_14cab11b8 = &LAB_14682652b;
  DAT_14caae5b8 = &DAT_14cab11a0;
  DAT_14caae60d = DAT_14caae60d + '\x01';
  _DAT_14cab11c0 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caae60e = DAT_14caae60e + '\x01';
  }
  return;
}



// FUNCTION 1460a5094 FUN_1460a5094 body=284 status=ok
// SIG undefined FUN_1460a5094(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a5094(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caae7e0) {
    FUN_144b3d300(&DAT_14caae7e0);
    if (DAT_14caae7e0 == -1) {
      FUN_1460a51b0();
      FUN_140db5666(&DAT_14caae738,0,&DAT_14caae6d0,L"TSlateElementPSBordertruefalsefalsefalseA",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_14750fa8e,
                    FUN_14750fa66,&LAB_14750fa62,&LAB_14750fa5e,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caae738 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c604f);
      _Init_thread_footer(&DAT_14caae7e0);
    }
  }
  return &DAT_14caae738;
}



// FUNCTION 1460a51b0 FUN_1460a51b0 body=205 status=ok
// SIG undefined FUN_1460a51b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a51b0(void)

{
  if ((DAT_14caae737 & 2) == 0) {
    DAT_14caae737 = DAT_14caae737 | 2;
    _DAT_14caae6d8 = L"TSlateElementPSBordertruefalsefalsefalseA";
    _DAT_14caae6f0 = FUN_146826540;
    _DAT_14caae6f8 = FUN_146825d77;
    _DAT_14caae700 = FUN_146825fd6;
    _DAT_14caae708 = FUN_1407e02ea;
    _DAT_14caae710 = FUN_146826273;
    _DAT_14caae6e8 = FUN_14750fa30;
    _DAT_14caae728 = 0xffffffff00000118;
    _DAT_14caae730 = 8;
    DAT_14caae734 = 0;
    _DAT_14caae718 = &LAB_14750fa5a;
    FUN_1460a527e();
    FUN_1407e00cc(&DAT_14caae6d0);
    return;
  }
  return;
}



// FUNCTION 1460a527e FUN_1460a527e body=133 status=ok
// SIG undefined FUN_1460a527e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a527e(void)

{
  _DAT_14cab11d0 = L"BASE";
  DAT_14cab11fa = 4;
  FUN_1413f4858();
  _DAT_14cab11e0 = DAT_14caae6e0;
  _DAT_14cab11d8 = &DAT_14caad3e0;
  _DAT_14cab11e8 = &LAB_14682652b;
  DAT_14caae6e0 = &DAT_14cab11d0;
  DAT_14caae735 = DAT_14caae735 + '\x01';
  _DAT_14cab11f0 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caae736 = DAT_14caae736 + '\x01';
  }
  return;
}



// FUNCTION 1460a5304 FUN_1460a5304 body=284 status=ok
// SIG undefined FUN_1460a5304(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a5304(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caae908) {
    FUN_144b3d300(&DAT_14caae908);
    if (DAT_14caae908 == -1) {
      FUN_1460a5420();
      FUN_140db5666(&DAT_14caae860,0,&DAT_14caae7f8,L"TSlateElementPSDefaulttruetruefalsefalseA",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_14750fb38,
                    FUN_14750fb10,&LAB_14750fb0c,&LAB_14750fb08,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caae860 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c605b);
      _Init_thread_footer(&DAT_14caae908);
    }
  }
  return &DAT_14caae860;
}



// FUNCTION 1460a5420 FUN_1460a5420 body=205 status=ok
// SIG undefined FUN_1460a5420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a5420(void)

{
  if ((DAT_14caae85f & 2) == 0) {
    DAT_14caae85f = DAT_14caae85f | 2;
    _DAT_14caae800 = L"TSlateElementPSDefaulttruetruefalsefalseA";
    _DAT_14caae818 = FUN_146826540;
    _DAT_14caae820 = FUN_146825d77;
    _DAT_14caae828 = FUN_146825fd6;
    _DAT_14caae830 = FUN_1407e02ea;
    _DAT_14caae838 = FUN_146826273;
    _DAT_14caae810 = FUN_14750fada;
    _DAT_14caae850 = 0xffffffff00000118;
    _DAT_14caae858 = 8;
    DAT_14caae85c = 0;
    _DAT_14caae840 = &LAB_14750fb04;
    FUN_1460a54ee();
    FUN_1407e00cc(&DAT_14caae7f8);
    return;
  }
  return;
}



// FUNCTION 1460a54ee FUN_1460a54ee body=133 status=ok
// SIG undefined FUN_1460a54ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a54ee(void)

{
  _DAT_14cab1200 = L"BASE";
  DAT_14cab122a = 4;
  FUN_1413f4858();
  _DAT_14cab1210 = DAT_14caae808;
  _DAT_14cab1208 = &DAT_14caad3e0;
  _DAT_14cab1218 = &LAB_14682652b;
  DAT_14caae808 = &DAT_14cab1200;
  DAT_14caae85d = DAT_14caae85d + '\x01';
  _DAT_14cab1220 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caae85e = DAT_14caae85e + '\x01';
  }
  return;
}



// FUNCTION 1460a5574 FUN_1460a5574 body=284 status=ok
// SIG undefined FUN_1460a5574(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a5574(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaea30) {
    FUN_144b3d300(&DAT_14caaea30);
    if (DAT_14caaea30 == -1) {
      FUN_1460a5690();
      FUN_140db5666(&DAT_14caae988,0,&DAT_14caae920,L"TSlateElementPSDefaulttruetruefalsetrueA",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_14750fbe2,
                    FUN_14750fbba,&LAB_14750fbb6,&LAB_14750fbb2,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caae988 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c6067);
      _Init_thread_footer(&DAT_14caaea30);
    }
  }
  return &DAT_14caae988;
}



// FUNCTION 1460a5690 FUN_1460a5690 body=205 status=ok
// SIG undefined FUN_1460a5690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a5690(void)

{
  if ((DAT_14caae987 & 2) == 0) {
    DAT_14caae987 = DAT_14caae987 | 2;
    _DAT_14caae928 = L"TSlateElementPSDefaulttruetruefalsetrueA";
    _DAT_14caae940 = FUN_146826540;
    _DAT_14caae948 = FUN_146825d77;
    _DAT_14caae950 = FUN_146825fd6;
    _DAT_14caae958 = FUN_1407e02ea;
    _DAT_14caae960 = FUN_146826273;
    _DAT_14caae938 = FUN_14750fb84;
    _DAT_14caae978 = 0xffffffff00000118;
    _DAT_14caae980 = 8;
    DAT_14caae984 = 0;
    _DAT_14caae968 = &LAB_14750fbae;
    FUN_1460a575e();
    FUN_1407e00cc(&DAT_14caae920);
    return;
  }
  return;
}



// FUNCTION 1460a575e FUN_1460a575e body=133 status=ok
// SIG undefined FUN_1460a575e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a575e(void)

{
  _DAT_14cab1230 = L"BASE";
  DAT_14cab125a = 4;
  FUN_1413f4858();
  _DAT_14cab1240 = DAT_14caae930;
  _DAT_14cab1238 = &DAT_14caad3e0;
  _DAT_14cab1248 = &LAB_14682652b;
  DAT_14caae930 = &DAT_14cab1230;
  DAT_14caae985 = DAT_14caae985 + '\x01';
  _DAT_14cab1250 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caae986 = DAT_14caae986 + '\x01';
  }
  return;
}



// FUNCTION 1460a57e4 FUN_1460a57e4 body=284 status=ok
// SIG undefined FUN_1460a57e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a57e4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaeb58) {
    FUN_144b3d300(&DAT_14caaeb58);
    if (DAT_14caaeb58 == -1) {
      FUN_1460a5900();
      FUN_140db5666(&DAT_14caaeab0,0,&DAT_14caaea48,L"TSlateElementPSDefaulttruefalsefalsefalseA",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_14750fc8c,
                    FUN_14750fc64,&LAB_14750fc60,&LAB_14750fc5c,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caaeab0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c6073);
      _Init_thread_footer(&DAT_14caaeb58);
    }
  }
  return &DAT_14caaeab0;
}



// FUNCTION 1460a5900 FUN_1460a5900 body=205 status=ok
// SIG undefined FUN_1460a5900(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a5900(void)

{
  if ((DAT_14caaeaaf & 2) == 0) {
    DAT_14caaeaaf = DAT_14caaeaaf | 2;
    _DAT_14caaea50 = L"TSlateElementPSDefaulttruefalsefalsefalseA";
    _DAT_14caaea68 = FUN_146826540;
    _DAT_14caaea70 = FUN_146825d77;
    _DAT_14caaea78 = FUN_146825fd6;
    _DAT_14caaea80 = FUN_1407e02ea;
    _DAT_14caaea88 = FUN_146826273;
    _DAT_14caaea60 = FUN_14750fc2e;
    _DAT_14caaeaa0 = 0xffffffff00000118;
    _DAT_14caaeaa8 = 8;
    DAT_14caaeaac = 0;
    _DAT_14caaea90 = &LAB_14750fc58;
    FUN_1460a59ce();
    FUN_1407e00cc(&DAT_14caaea48);
    return;
  }
  return;
}



// FUNCTION 1460a59ce FUN_1460a59ce body=133 status=ok
// SIG undefined FUN_1460a59ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a59ce(void)

{
  _DAT_14cab1260 = L"BASE";
  DAT_14cab128a = 4;
  FUN_1413f4858();
  _DAT_14cab1270 = DAT_14caaea58;
  _DAT_14cab1268 = &DAT_14caad3e0;
  _DAT_14cab1278 = &LAB_14682652b;
  DAT_14caaea58 = &DAT_14cab1260;
  DAT_14caaeaad = DAT_14caaeaad + '\x01';
  _DAT_14cab1280 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caaeaae = DAT_14caaeaae + '\x01';
  }
  return;
}



// FUNCTION 1460a5a54 FUN_1460a5a54 body=284 status=ok
// SIG undefined FUN_1460a5a54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a5a54(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaec80) {
    FUN_144b3d300(&DAT_14caaec80);
    if (DAT_14caaec80 == -1) {
      FUN_1460a5b70();
      FUN_140db5666(&DAT_14caaebd8,0,&DAT_14caaeb70,L"TSlateElementPSDefaulttruefalsefalsetrueA",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_14750fd36,
                    FUN_14750fd0e,&LAB_14750fd0a,&LAB_14750fd06,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caaebd8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c607f);
      _Init_thread_footer(&DAT_14caaec80);
    }
  }
  return &DAT_14caaebd8;
}



// FUNCTION 1460a5b70 FUN_1460a5b70 body=205 status=ok
// SIG undefined FUN_1460a5b70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a5b70(void)

{
  if ((DAT_14caaebd7 & 2) == 0) {
    DAT_14caaebd7 = DAT_14caaebd7 | 2;
    _DAT_14caaeb78 = L"TSlateElementPSDefaulttruefalsefalsetrueA";
    _DAT_14caaeb90 = FUN_146826540;
    _DAT_14caaeb98 = FUN_146825d77;
    _DAT_14caaeba0 = FUN_146825fd6;
    _DAT_14caaeba8 = FUN_1407e02ea;
    _DAT_14caaebb0 = FUN_146826273;
    _DAT_14caaeb88 = FUN_14750fcd8;
    _DAT_14caaebc8 = 0xffffffff00000118;
    _DAT_14caaebd0 = 8;
    DAT_14caaebd4 = 0;
    _DAT_14caaebb8 = &LAB_14750fd02;
    FUN_1460a5c3e();
    FUN_1407e00cc(&DAT_14caaeb70);
    return;
  }
  return;
}



// FUNCTION 1460a5c3e FUN_1460a5c3e body=133 status=ok
// SIG undefined FUN_1460a5c3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a5c3e(void)

{
  _DAT_14cab1290 = L"BASE";
  DAT_14cab12ba = 4;
  FUN_1413f4858();
  _DAT_14cab12a0 = DAT_14caaeb80;
  _DAT_14cab1298 = &DAT_14caad3e0;
  _DAT_14cab12a8 = &LAB_14682652b;
  DAT_14caaeb80 = &DAT_14cab1290;
  DAT_14caaebd5 = DAT_14caaebd5 + '\x01';
  _DAT_14cab12b0 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caaebd6 = DAT_14caaebd6 + '\x01';
  }
  return;
}



// FUNCTION 1460a5cc4 FUN_1460a5cc4 body=284 status=ok
// SIG undefined FUN_1460a5cc4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a5cc4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaf120) {
    FUN_144b3d300(&DAT_14caaf120);
    if (DAT_14caaf120 == -1) {
      FUN_1460a5de0();
      FUN_140db5666(&DAT_14caaf078,0,&DAT_14caaf010,L"TSlateElementPSDefaultfalsefalsefalsetrueA",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_14750ffde,
                    FUN_14750ffb6,&LAB_14750ffb2,&LAB_14750ffae,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caaf078 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c60af);
      _Init_thread_footer(&DAT_14caaf120);
    }
  }
  return &DAT_14caaf078;
}



// FUNCTION 1460a5de0 FUN_1460a5de0 body=205 status=ok
// SIG undefined FUN_1460a5de0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a5de0(void)

{
  if ((DAT_14caaf077 & 2) == 0) {
    DAT_14caaf077 = DAT_14caaf077 | 2;
    _DAT_14caaf018 = L"TSlateElementPSDefaultfalsefalsefalsetrueA";
    _DAT_14caaf030 = FUN_146826540;
    _DAT_14caaf038 = FUN_146825d77;
    _DAT_14caaf040 = FUN_146825fd6;
    _DAT_14caaf048 = FUN_1407e02ea;
    _DAT_14caaf050 = FUN_146826273;
    _DAT_14caaf028 = FUN_14750ff80;
    _DAT_14caaf068 = 0xffffffff00000118;
    _DAT_14caaf070 = 8;
    DAT_14caaf074 = 0;
    _DAT_14caaf058 = &LAB_14750ffaa;
    FUN_1460a5eae();
    FUN_1407e00cc(&DAT_14caaf010);
    return;
  }
  return;
}



// FUNCTION 1460a5eae FUN_1460a5eae body=133 status=ok
// SIG undefined FUN_1460a5eae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a5eae(void)

{
  _DAT_14cab1350 = L"BASE";
  DAT_14cab137a = 4;
  FUN_1413f4858();
  _DAT_14cab1360 = DAT_14caaf020;
  _DAT_14cab1358 = &DAT_14caad3e0;
  _DAT_14cab1368 = &LAB_14682652b;
  DAT_14caaf020 = &DAT_14cab1350;
  DAT_14caaf075 = DAT_14caaf075 + '\x01';
  _DAT_14cab1370 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caaf076 = DAT_14caaf076 + '\x01';
  }
  return;
}



// FUNCTION 1460a5f34 FUN_1460a5f34 body=284 status=ok
// SIG undefined FUN_1460a5f34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a5f34(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaf370) {
    FUN_144b3d300(&DAT_14caaf370);
    if (DAT_14caaf370 == -1) {
      FUN_1460a6050();
      FUN_140db5666(&DAT_14caaf2c8,0,&DAT_14caaf260,
                    L"TSlateElementPSGrayscaleFonttruetruefalsefalseA",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_147510132,
                    FUN_14751010a,&LAB_147510106,&LAB_147510102,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caaf2c8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c60c7);
      _Init_thread_footer(&DAT_14caaf370);
    }
  }
  return &DAT_14caaf2c8;
}



// FUNCTION 1460a6050 FUN_1460a6050 body=205 status=ok
// SIG undefined FUN_1460a6050(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a6050(void)

{
  if ((DAT_14caaf2c7 & 2) == 0) {
    DAT_14caaf2c7 = DAT_14caaf2c7 | 2;
    _DAT_14caaf268 = L"TSlateElementPSGrayscaleFonttruetruefalsefalseA";
    _DAT_14caaf280 = FUN_146826540;
    _DAT_14caaf288 = FUN_146825d77;
    _DAT_14caaf290 = FUN_146825fd6;
    _DAT_14caaf298 = FUN_1407e02ea;
    _DAT_14caaf2a0 = FUN_146826273;
    _DAT_14caaf278 = FUN_1475100d4;
    _DAT_14caaf2b8 = 0xffffffff00000118;
    _DAT_14caaf2c0 = 8;
    DAT_14caaf2c4 = 0;
    _DAT_14caaf2a8 = &LAB_1475100fe;
    FUN_1460a611e();
    FUN_1407e00cc(&DAT_14caaf260);
    return;
  }
  return;
}



// FUNCTION 1460a611e FUN_1460a611e body=133 status=ok
// SIG undefined FUN_1460a611e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a611e(void)

{
  _DAT_14cab13b0 = L"BASE";
  DAT_14cab13da = 4;
  FUN_1413f4858();
  _DAT_14cab13c0 = DAT_14caaf270;
  _DAT_14cab13b8 = &DAT_14caad3e0;
  _DAT_14cab13c8 = &LAB_14682652b;
  DAT_14caaf270 = &DAT_14cab13b0;
  DAT_14caaf2c5 = DAT_14caaf2c5 + '\x01';
  _DAT_14cab13d0 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caaf2c6 = DAT_14caaf2c6 + '\x01';
  }
  return;
}



// FUNCTION 1460a61a4 FUN_1460a61a4 body=284 status=ok
// SIG undefined FUN_1460a61a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a61a4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaf5c0) {
    FUN_144b3d300(&DAT_14caaf5c0);
    if (DAT_14caaf5c0 == -1) {
      FUN_1460a62c0();
      FUN_140db5666(&DAT_14caaf518,0,&DAT_14caaf4b0,L"TSlateElementPSColorFonttruetruefalsefalseA",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_147510286,
                    FUN_14751025e,&LAB_14751025a,&LAB_147510256,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caaf518 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c60df);
      _Init_thread_footer(&DAT_14caaf5c0);
    }
  }
  return &DAT_14caaf518;
}



// FUNCTION 1460a62c0 FUN_1460a62c0 body=205 status=ok
// SIG undefined FUN_1460a62c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a62c0(void)

{
  if ((DAT_14caaf517 & 2) == 0) {
    DAT_14caaf517 = DAT_14caaf517 | 2;
    _DAT_14caaf4b8 = L"TSlateElementPSColorFonttruetruefalsefalseA";
    _DAT_14caaf4d0 = FUN_146826540;
    _DAT_14caaf4d8 = FUN_146825d77;
    _DAT_14caaf4e0 = FUN_146825fd6;
    _DAT_14caaf4e8 = FUN_1407e02ea;
    _DAT_14caaf4f0 = FUN_146826273;
    _DAT_14caaf4c8 = FUN_147510228;
    _DAT_14caaf508 = 0xffffffff00000118;
    _DAT_14caaf510 = 8;
    DAT_14caaf514 = 0;
    _DAT_14caaf4f8 = &LAB_147510252;
    FUN_1460a638e();
    FUN_1407e00cc(&DAT_14caaf4b0);
    return;
  }
  return;
}



// FUNCTION 1460a638e FUN_1460a638e body=133 status=ok
// SIG undefined FUN_1460a638e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a638e(void)

{
  _DAT_14cab1410 = L"BASE";
  DAT_14cab143a = 4;
  FUN_1413f4858();
  _DAT_14cab1420 = DAT_14caaf4c0;
  _DAT_14cab1418 = &DAT_14caad3e0;
  _DAT_14cab1428 = &LAB_14682652b;
  DAT_14caaf4c0 = &DAT_14cab1410;
  DAT_14caaf515 = DAT_14caaf515 + '\x01';
  _DAT_14cab1430 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caaf516 = DAT_14caaf516 + '\x01';
  }
  return;
}



// FUNCTION 1460a6414 FUN_1460a6414 body=284 status=ok
// SIG undefined FUN_1460a6414(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a6414(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaf810) {
    FUN_144b3d300(&DAT_14caaf810);
    if (DAT_14caaf810 == -1) {
      FUN_1460a6530();
      FUN_140db5666(&DAT_14caaf768,0,&DAT_14caaf700,L"TSlateElementPSLineSegmenttruetruefalsefalseA"
                    ,L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_1475103da,
                    FUN_1475103b2,&LAB_1475103ae,&LAB_1475103aa,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caaf768 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c60f7);
      _Init_thread_footer(&DAT_14caaf810);
    }
  }
  return &DAT_14caaf768;
}



// FUNCTION 1460a6530 FUN_1460a6530 body=205 status=ok
// SIG undefined FUN_1460a6530(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a6530(void)

{
  if ((DAT_14caaf767 & 2) == 0) {
    DAT_14caaf767 = DAT_14caaf767 | 2;
    _DAT_14caaf708 = L"TSlateElementPSLineSegmenttruetruefalsefalseA";
    _DAT_14caaf720 = FUN_146826540;
    _DAT_14caaf728 = FUN_146825d77;
    _DAT_14caaf730 = FUN_146825fd6;
    _DAT_14caaf738 = FUN_1407e02ea;
    _DAT_14caaf740 = FUN_146826273;
    _DAT_14caaf718 = FUN_14751037c;
    _DAT_14caaf758 = 0xffffffff00000118;
    _DAT_14caaf760 = 8;
    DAT_14caaf764 = 0;
    _DAT_14caaf748 = &LAB_1475103a6;
    FUN_1460a65fe();
    FUN_1407e00cc(&DAT_14caaf700);
    return;
  }
  return;
}



// FUNCTION 1460a65fe FUN_1460a65fe body=133 status=ok
// SIG undefined FUN_1460a65fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a65fe(void)

{
  _DAT_14cab1470 = L"BASE";
  DAT_14cab149a = 4;
  FUN_1413f4858();
  _DAT_14cab1480 = DAT_14caaf710;
  _DAT_14cab1478 = &DAT_14caad3e0;
  _DAT_14cab1488 = &LAB_14682652b;
  DAT_14caaf710 = &DAT_14cab1470;
  DAT_14caaf765 = DAT_14caaf765 + '\x01';
  _DAT_14cab1490 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caaf766 = DAT_14caaf766 + '\x01';
  }
  return;
}



// FUNCTION 1460a6684 FUN_1460a6684 body=284 status=ok
// SIG undefined FUN_1460a6684(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a6684(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caafa60) {
    FUN_144b3d300(&DAT_14caafa60);
    if (DAT_14caafa60 == -1) {
      FUN_1460a67a0();
      FUN_140db5666(&DAT_14caaf9b8,0,&DAT_14caaf950,L"TSlateElementPSRoundedBoxtruetruefalsefalseA",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_14751052e,
                    FUN_147510506,&LAB_147510502,&LAB_1475104fe,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caaf9b8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c610f);
      _Init_thread_footer(&DAT_14caafa60);
    }
  }
  return &DAT_14caaf9b8;
}



// FUNCTION 1460a67a0 FUN_1460a67a0 body=205 status=ok
// SIG undefined FUN_1460a67a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a67a0(void)

{
  if ((DAT_14caaf9b7 & 2) == 0) {
    DAT_14caaf9b7 = DAT_14caaf9b7 | 2;
    _DAT_14caaf958 = L"TSlateElementPSRoundedBoxtruetruefalsefalseA";
    _DAT_14caaf970 = FUN_146826540;
    _DAT_14caaf978 = FUN_146825d77;
    _DAT_14caaf980 = FUN_146825fd6;
    _DAT_14caaf988 = FUN_1407e02ea;
    _DAT_14caaf990 = FUN_146826273;
    _DAT_14caaf968 = FUN_1475104d0;
    _DAT_14caaf9a8 = 0xffffffff00000118;
    _DAT_14caaf9b0 = 8;
    DAT_14caaf9b4 = 0;
    _DAT_14caaf998 = &LAB_1475104fa;
    FUN_1460a686e();
    FUN_1407e00cc(&DAT_14caaf950);
    return;
  }
  return;
}



// FUNCTION 1460a686e FUN_1460a686e body=133 status=ok
// SIG undefined FUN_1460a686e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a686e(void)

{
  _DAT_14cab14d0 = L"BASE";
  DAT_14cab14fa = 4;
  FUN_1413f4858();
  _DAT_14cab14e0 = DAT_14caaf960;
  _DAT_14cab14d8 = &DAT_14caad3e0;
  _DAT_14cab14e8 = &LAB_14682652b;
  DAT_14caaf960 = &DAT_14cab14d0;
  DAT_14caaf9b5 = DAT_14caaf9b5 + '\x01';
  _DAT_14cab14f0 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caaf9b6 = DAT_14caaf9b6 + '\x01';
  }
  return;
}



// FUNCTION 1460a68f4 FUN_1460a68f4 body=284 status=ok
// SIG undefined FUN_1460a68f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a68f4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caafcb0) {
    FUN_144b3d300(&DAT_14caafcb0);
    if (DAT_14caafcb0 == -1) {
      FUN_1460a6a10();
      FUN_140db5666(&DAT_14caafc08,0,&DAT_14caafba0,L"TSlateElementPSSdfFonttruetruefalsefalseA",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_147510682,
                    FUN_14751065a,&LAB_147510656,&LAB_147510652,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caafc08 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c6127);
      _Init_thread_footer(&DAT_14caafcb0);
    }
  }
  return &DAT_14caafc08;
}



// FUNCTION 1460a6a10 FUN_1460a6a10 body=205 status=ok
// SIG undefined FUN_1460a6a10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a6a10(void)

{
  if ((DAT_14caafc07 & 2) == 0) {
    DAT_14caafc07 = DAT_14caafc07 | 2;
    _DAT_14caafba8 = L"TSlateElementPSSdfFonttruetruefalsefalseA";
    _DAT_14caafbc0 = FUN_146826540;
    _DAT_14caafbc8 = FUN_146825d77;
    _DAT_14caafbd0 = FUN_146825fd6;
    _DAT_14caafbd8 = FUN_1407e02ea;
    _DAT_14caafbe0 = FUN_146826273;
    _DAT_14caafbb8 = FUN_147510624;
    _DAT_14caafbf8 = 0xffffffff00000118;
    _DAT_14caafc00 = 8;
    DAT_14caafc04 = 0;
    _DAT_14caafbe8 = &LAB_14751064e;
    FUN_1460a6ade();
    FUN_1407e00cc(&DAT_14caafba0);
    return;
  }
  return;
}



// FUNCTION 1460a6ade FUN_1460a6ade body=133 status=ok
// SIG undefined FUN_1460a6ade(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a6ade(void)

{
  _DAT_14cab1530 = L"BASE";
  DAT_14cab155a = 4;
  FUN_1413f4858();
  _DAT_14cab1540 = DAT_14caafbb0;
  _DAT_14cab1538 = &DAT_14caad3e0;
  _DAT_14cab1548 = &LAB_14682652b;
  DAT_14caafbb0 = &DAT_14cab1530;
  DAT_14caafc05 = DAT_14caafc05 + '\x01';
  _DAT_14cab1550 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caafc06 = DAT_14caafc06 + '\x01';
  }
  return;
}



// FUNCTION 1460a6b64 FUN_1460a6b64 body=284 status=ok
// SIG undefined FUN_1460a6b64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a6b64(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caaff00) {
    FUN_144b3d300(&DAT_14caaff00);
    if (DAT_14caaff00 == -1) {
      FUN_1460a6c80();
      FUN_140db5666(&DAT_14caafe58,0,&DAT_14caafdf0,L"TSlateElementPSMsdfFonttruetruefalsefalseA",
                    L"/Engine/Private/SlateElementPixelShader.usf",L"Main",3,1,FUN_1475107d6,
                    FUN_1475107ae,&LAB_1475107aa,&LAB_1475107a6,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14caafe58 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432c613f);
      _Init_thread_footer(&DAT_14caaff00);
    }
  }
  return &DAT_14caafe58;
}



// FUNCTION 1460a6c80 FUN_1460a6c80 body=205 status=ok
// SIG undefined FUN_1460a6c80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a6c80(void)

{
  if ((DAT_14caafe57 & 2) == 0) {
    DAT_14caafe57 = DAT_14caafe57 | 2;
    _DAT_14caafdf8 = L"TSlateElementPSMsdfFonttruetruefalsefalseA";
    _DAT_14caafe10 = FUN_146826540;
    _DAT_14caafe18 = FUN_146825d77;
    _DAT_14caafe20 = FUN_146825fd6;
    _DAT_14caafe28 = FUN_1407e02ea;
    _DAT_14caafe30 = FUN_146826273;
    _DAT_14caafe08 = FUN_147510778;
    _DAT_14caafe48 = 0xffffffff00000118;
    _DAT_14caafe50 = 8;
    DAT_14caafe54 = 0;
    _DAT_14caafe38 = &LAB_1475107a2;
    FUN_1460a6d4e();
    FUN_1407e00cc(&DAT_14caafdf0);
    return;
  }
  return;
}



// FUNCTION 1460a6d4e FUN_1460a6d4e body=133 status=ok
// SIG undefined FUN_1460a6d4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a6d4e(void)

{
  _DAT_14cab1590 = L"BASE";
  DAT_14cab15ba = 4;
  FUN_1413f4858();
  _DAT_14cab15a0 = DAT_14caafe00;
  _DAT_14cab1598 = &DAT_14caad3e0;
  _DAT_14cab15a8 = &LAB_14682652b;
  DAT_14caafe00 = &DAT_14cab1590;
  DAT_14caafe55 = DAT_14caafe55 + '\x01';
  _DAT_14cab15b0 = 0x100000000;
  if (DAT_14caad444 != '\0') {
    DAT_14caafe56 = DAT_14caafe56 + '\x01';
  }
  return;
}



// FUNCTION 1460a6dd4 FUN_1460a6dd4 body=284 status=ok
// SIG undefined FUN_1460a6dd4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a6dd4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cade808) {
    FUN_144b3d300(&DAT_14cade808);
    if (DAT_14cade808 == -1) {
      FUN_1460a6ef0();
      FUN_140db5666(&DAT_14cade760,0,&DAT_14cade6f8,
                    L"TGPUSkinCacheCS<(0 * 32 + 0 * 16 + 0 * 4 + 0)>",
                    L"/Engine/Private/GpuSkinCacheComputeShader.usf",L"SkinCacheUpdateBatchCS",5,1,
                    FUN_147ad8e6c,FUN_147ad8e44,&LAB_1463d08ba,&LAB_147ad8e40,&LAB_14712ac0c,
                    &LAB_14712ac08,0x160,0);
      _DAT_14cade760 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143512141);
      _Init_thread_footer(&DAT_14cade808);
    }
  }
  return &DAT_14cade760;
}



// FUNCTION 1460a6ef0 FUN_1460a6ef0 body=205 status=ok
// SIG undefined FUN_1460a6ef0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a6ef0(void)

{
  if ((DAT_14cade75f & 2) == 0) {
    DAT_14cade75f = DAT_14cade75f | 2;
    _DAT_14cade700 = L"TGPUSkinCacheCS<(0 * 32 + 0 * 16 + 0 * 4 + 0)>";
    _DAT_14cade718 = FUN_146826540;
    _DAT_14cade720 = FUN_146825d77;
    _DAT_14cade728 = FUN_146825fd6;
    _DAT_14cade730 = FUN_1407e02ea;
    _DAT_14cade738 = FUN_146826273;
    _DAT_14cade710 = FUN_147ad8e12;
    _DAT_14cade750 = 0xffffffff00000160;
    _DAT_14cade758 = 8;
    DAT_14cade75c = 0;
    _DAT_14cade740 = &LAB_147ad8e3c;
    FUN_1460a6fbe();
    FUN_1407e00cc(&DAT_14cade6f8);
    return;
  }
  return;
}



// FUNCTION 1460a6fbe FUN_1460a6fbe body=133 status=ok
// SIG undefined FUN_1460a6fbe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a6fbe(void)

{
  _DAT_14cae25b0 = L"BASE";
  DAT_14cae25da = 4;
  FUN_14149c7e8();
  _DAT_14cae25c0 = DAT_14cade708;
  _DAT_14cae25b8 = &DAT_14cae25e0;
  _DAT_14cae25c8 = &LAB_14682652b;
  DAT_14cade708 = &DAT_14cae25b0;
  DAT_14cade75d = DAT_14cade75d + '\x01';
  _DAT_14cae25d0 = 0x100000000;
  if (DAT_14cae2644 != '\0') {
    DAT_14cade75e = DAT_14cade75e + '\x01';
  }
  return;
}



// FUNCTION 1460a7044 FUN_1460a7044 body=284 status=ok
// SIG undefined FUN_1460a7044(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a7044(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cade930) {
    FUN_144b3d300(&DAT_14cade930);
    if (DAT_14cade930 == -1) {
      FUN_1460a7160();
      FUN_140db5666(&DAT_14cade888,0,&DAT_14cade820,
                    L"TGPUSkinCacheCS<(0 * 32 + 0 * 16 + 0 * 4 + 1)>",
                    L"/Engine/Private/GpuSkinCacheComputeShader.usf",L"SkinCacheUpdateBatchCS",5,1,
                    FUN_147ad8f40,FUN_147ad8f18,&LAB_1463d08c2,&LAB_147ad8f14,&LAB_14712ac0c,
                    &LAB_14712ac08,0x160,0);
      _DAT_14cade888 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14351214d);
      _Init_thread_footer(&DAT_14cade930);
    }
  }
  return &DAT_14cade888;
}



// FUNCTION 1460a7160 FUN_1460a7160 body=205 status=ok
// SIG undefined FUN_1460a7160(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a7160(void)

{
  if ((DAT_14cade887 & 2) == 0) {
    DAT_14cade887 = DAT_14cade887 | 2;
    _DAT_14cade828 = L"TGPUSkinCacheCS<(0 * 32 + 0 * 16 + 0 * 4 + 1)>";
    _DAT_14cade840 = FUN_146826540;
    _DAT_14cade848 = FUN_146825d77;
    _DAT_14cade850 = FUN_146825fd6;
    _DAT_14cade858 = FUN_1407e02ea;
    _DAT_14cade860 = FUN_146826273;
    _DAT_14cade838 = FUN_147ad8ee6;
    _DAT_14cade878 = 0xffffffff00000160;
    _DAT_14cade880 = 8;
    DAT_14cade884 = 0;
    _DAT_14cade868 = &LAB_147ad8f10;
    FUN_1460a722e();
    FUN_1407e00cc(&DAT_14cade820);
    return;
  }
  return;
}



// FUNCTION 1460a722e FUN_1460a722e body=133 status=ok
// SIG undefined FUN_1460a722e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a722e(void)

{
  _DAT_14cae2b28 = L"BASE";
  DAT_14cae2b52 = 4;
  FUN_14149c7e8();
  _DAT_14cae2b38 = DAT_14cade830;
  _DAT_14cae2b30 = &DAT_14cae25e0;
  _DAT_14cae2b40 = &LAB_14682652b;
  DAT_14cade830 = &DAT_14cae2b28;
  DAT_14cade885 = DAT_14cade885 + '\x01';
  _DAT_14cae2b48 = 0x100000000;
  if (DAT_14cae2644 != '\0') {
    DAT_14cade886 = DAT_14cade886 + '\x01';
  }
  return;
}



// FUNCTION 1460a72b4 FUN_1460a72b4 body=284 status=ok
// SIG undefined FUN_1460a72b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a72b4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadea58) {
    FUN_144b3d300(&DAT_14cadea58);
    if (DAT_14cadea58 == -1) {
      FUN_1460a73d0();
      FUN_140db5666(&DAT_14cade9b0,0,&DAT_14cade948,
                    L"TGPUSkinCacheCS<(0 * 32 + 0 * 16 + 0 * 4 + 2)>",
                    L"/Engine/Private/GpuSkinCacheComputeShader.usf",L"SkinCacheUpdateBatchCS",5,1,
                    FUN_147ad9014,FUN_147ad8fec,&LAB_1463d08ca,&LAB_147ad8fe8,&LAB_14712ac0c,
                    &LAB_14712ac08,0x160,0);
      _DAT_14cade9b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143512159);
      _Init_thread_footer(&DAT_14cadea58);
    }
  }
  return &DAT_14cade9b0;
}



// FUNCTION 1460a73d0 FUN_1460a73d0 body=205 status=ok
// SIG undefined FUN_1460a73d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a73d0(void)

{
  if ((DAT_14cade9af & 2) == 0) {
    DAT_14cade9af = DAT_14cade9af | 2;
    _DAT_14cade950 = L"TGPUSkinCacheCS<(0 * 32 + 0 * 16 + 0 * 4 + 2)>";
    _DAT_14cade968 = FUN_146826540;
    _DAT_14cade970 = FUN_146825d77;
    _DAT_14cade978 = FUN_146825fd6;
    _DAT_14cade980 = FUN_1407e02ea;
    _DAT_14cade988 = FUN_146826273;
    _DAT_14cade960 = FUN_147ad8fba;
    _DAT_14cade9a0 = 0xffffffff00000160;
    _DAT_14cade9a8 = 8;
    DAT_14cade9ac = 0;
    _DAT_14cade990 = &LAB_147ad8fe4;
    FUN_1460a749e();
    FUN_1407e00cc(&DAT_14cade948);
    return;
  }
  return;
}



// FUNCTION 1460a749e FUN_1460a749e body=133 status=ok
// SIG undefined FUN_1460a749e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a749e(void)

{
  _DAT_14cae2b58 = L"BASE";
  DAT_14cae2b82 = 4;
  FUN_14149c7e8();
  _DAT_14cae2b68 = DAT_14cade958;
  _DAT_14cae2b60 = &DAT_14cae25e0;
  _DAT_14cae2b70 = &LAB_14682652b;
  DAT_14cade958 = &DAT_14cae2b58;
  DAT_14cade9ad = DAT_14cade9ad + '\x01';
  _DAT_14cae2b78 = 0x100000000;
  if (DAT_14cae2644 != '\0') {
    DAT_14cade9ae = DAT_14cade9ae + '\x01';
  }
  return;
}



// FUNCTION 1460a7524 FUN_1460a7524 body=284 status=ok
// SIG undefined FUN_1460a7524(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a7524(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadeb80) {
    FUN_144b3d300(&DAT_14cadeb80);
    if (DAT_14cadeb80 == -1) {
      FUN_1460a7640();
      FUN_140db5666(&DAT_14cadead8,0,&DAT_14cadea70,
                    L"TGPUSkinCacheCS<(0 * 32 + 0 * 16 + 1 * 4 + 0)>",
                    L"/Engine/Private/GpuSkinCacheComputeShader.usf",L"SkinCacheUpdateBatchCS",5,1,
                    FUN_147ad90e8,FUN_147ad90c0,&LAB_1463d08d2,&LAB_147ad90bc,&LAB_14712ac0c,
                    &LAB_14712ac08,0x160,0);
      _DAT_14cadead8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143512165);
      _Init_thread_footer(&DAT_14cadeb80);
    }
  }
  return &DAT_14cadead8;
}



// FUNCTION 1460a7640 FUN_1460a7640 body=205 status=ok
// SIG undefined FUN_1460a7640(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a7640(void)

{
  if ((DAT_14cadead7 & 2) == 0) {
    DAT_14cadead7 = DAT_14cadead7 | 2;
    _DAT_14cadea78 = L"TGPUSkinCacheCS<(0 * 32 + 0 * 16 + 1 * 4 + 0)>";
    _DAT_14cadea90 = FUN_146826540;
    _DAT_14cadea98 = FUN_146825d77;
    _DAT_14cadeaa0 = FUN_146825fd6;
    _DAT_14cadeaa8 = FUN_1407e02ea;
    _DAT_14cadeab0 = FUN_146826273;
    _DAT_14cadea88 = FUN_147ad908e;
    _DAT_14cadeac8 = 0xffffffff00000160;
    _DAT_14cadead0 = 8;
    DAT_14cadead4 = 0;
    _DAT_14cadeab8 = &LAB_147ad90b8;
    FUN_1460a770e();
    FUN_1407e00cc(&DAT_14cadea70);
    return;
  }
  return;
}



// FUNCTION 1460a770e FUN_1460a770e body=133 status=ok
// SIG undefined FUN_1460a770e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a770e(void)

{
  _DAT_14cae2b88 = L"BASE";
  DAT_14cae2bb2 = 4;
  FUN_14149c7e8();
  _DAT_14cae2b98 = DAT_14cadea80;
  _DAT_14cae2b90 = &DAT_14cae25e0;
  _DAT_14cae2ba0 = &LAB_14682652b;
  DAT_14cadea80 = &DAT_14cae2b88;
  DAT_14cadead5 = DAT_14cadead5 + '\x01';
  _DAT_14cae2ba8 = 0x100000000;
  if (DAT_14cae2644 != '\0') {
    DAT_14cadead6 = DAT_14cadead6 + '\x01';
  }
  return;
}



// FUNCTION 1460a7794 FUN_1460a7794 body=284 status=ok
// SIG undefined FUN_1460a7794(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a7794(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadeca8) {
    FUN_144b3d300(&DAT_14cadeca8);
    if (DAT_14cadeca8 == -1) {
      FUN_1460a78b0();
      FUN_140db5666(&DAT_14cadec00,0,&DAT_14cadeb98,
                    L"TGPUSkinCacheCS<(0 * 32 + 0 * 16 + 1 * 4 + 1)>",
                    L"/Engine/Private/GpuSkinCacheComputeShader.usf",L"SkinCacheUpdateBatchCS",5,1,
                    FUN_147ad91bc,FUN_147ad9194,&LAB_1463d08da,&LAB_147ad9190,&LAB_14712ac0c,
                    &LAB_14712ac08,0x160,0);
      _DAT_14cadec00 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143512171);
      _Init_thread_footer(&DAT_14cadeca8);
    }
  }
  return &DAT_14cadec00;
}



// FUNCTION 1460a78b0 FUN_1460a78b0 body=205 status=ok
// SIG undefined FUN_1460a78b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a78b0(void)

{
  if ((DAT_14cadebff & 2) == 0) {
    DAT_14cadebff = DAT_14cadebff | 2;
    _DAT_14cadeba0 = L"TGPUSkinCacheCS<(0 * 32 + 0 * 16 + 1 * 4 + 1)>";
    _DAT_14cadebb8 = FUN_146826540;
    _DAT_14cadebc0 = FUN_146825d77;
    _DAT_14cadebc8 = FUN_146825fd6;
    _DAT_14cadebd0 = FUN_1407e02ea;
    _DAT_14cadebd8 = FUN_146826273;
    _DAT_14cadebb0 = FUN_147ad9162;
    _DAT_14cadebf0 = 0xffffffff00000160;
    _DAT_14cadebf8 = 8;
    DAT_14cadebfc = 0;
    _DAT_14cadebe0 = &LAB_147ad918c;
    FUN_1460a797e();
    FUN_1407e00cc(&DAT_14cadeb98);
    return;
  }
  return;
}



// FUNCTION 1460a797e FUN_1460a797e body=133 status=ok
// SIG undefined FUN_1460a797e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a797e(void)

{
  _DAT_14cae2bb8 = L"BASE";
  DAT_14cae2be2 = 4;
  FUN_14149c7e8();
  _DAT_14cae2bc8 = DAT_14cadeba8;
  _DAT_14cae2bc0 = &DAT_14cae25e0;
  _DAT_14cae2bd0 = &LAB_14682652b;
  DAT_14cadeba8 = &DAT_14cae2bb8;
  DAT_14cadebfd = DAT_14cadebfd + '\x01';
  _DAT_14cae2bd8 = 0x100000000;
  if (DAT_14cae2644 != '\0') {
    DAT_14cadebfe = DAT_14cadebfe + '\x01';
  }
  return;
}



// FUNCTION 1460a7a04 FUN_1460a7a04 body=284 status=ok
// SIG undefined FUN_1460a7a04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a7a04(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadedd0) {
    FUN_144b3d300(&DAT_14cadedd0);
    if (DAT_14cadedd0 == -1) {
      FUN_1460a7b20();
      FUN_140db5666(&DAT_14caded28,0,&DAT_14cadecc0,
                    L"TGPUSkinCacheCS<(0 * 32 + 0 * 16 + 1 * 4 + 2)>",
                    L"/Engine/Private/GpuSkinCacheComputeShader.usf",L"SkinCacheUpdateBatchCS",5,1,
                    FUN_147ad9290,FUN_147ad9268,&LAB_1463d08e2,&LAB_147ad9264,&LAB_14712ac0c,
                    &LAB_14712ac08,0x160,0);
      _DAT_14caded28 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14351217d);
      _Init_thread_footer(&DAT_14cadedd0);
    }
  }
  return &DAT_14caded28;
}



// FUNCTION 1460a7b20 FUN_1460a7b20 body=205 status=ok
// SIG undefined FUN_1460a7b20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a7b20(void)

{
  if ((DAT_14caded27 & 2) == 0) {
    DAT_14caded27 = DAT_14caded27 | 2;
    _DAT_14cadecc8 = L"TGPUSkinCacheCS<(0 * 32 + 0 * 16 + 1 * 4 + 2)>";
    _DAT_14cadece0 = FUN_146826540;
    _DAT_14cadece8 = FUN_146825d77;
    _DAT_14cadecf0 = FUN_146825fd6;
    _DAT_14cadecf8 = FUN_1407e02ea;
    _DAT_14caded00 = FUN_146826273;
    _DAT_14cadecd8 = FUN_147ad9236;
    _DAT_14caded18 = 0xffffffff00000160;
    _DAT_14caded20 = 8;
    DAT_14caded24 = 0;
    _DAT_14caded08 = &LAB_147ad9260;
    FUN_1460a7bee();
    FUN_1407e00cc(&DAT_14cadecc0);
    return;
  }
  return;
}



// FUNCTION 1460a7bee FUN_1460a7bee body=133 status=ok
// SIG undefined FUN_1460a7bee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a7bee(void)

{
  _DAT_14cae2be8 = L"BASE";
  DAT_14cae2c12 = 4;
  FUN_14149c7e8();
  _DAT_14cae2bf8 = DAT_14cadecd0;
  _DAT_14cae2bf0 = &DAT_14cae25e0;
  _DAT_14cae2c00 = &LAB_14682652b;
  DAT_14cadecd0 = &DAT_14cae2be8;
  DAT_14caded25 = DAT_14caded25 + '\x01';
  _DAT_14cae2c08 = 0x100000000;
  if (DAT_14cae2644 != '\0') {
    DAT_14caded26 = DAT_14caded26 + '\x01';
  }
  return;
}



// FUNCTION 1460a7c74 FUN_1460a7c74 body=284 status=ok
// SIG undefined FUN_1460a7c74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a7c74(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadeef8) {
    FUN_144b3d300(&DAT_14cadeef8);
    if (DAT_14cadeef8 == -1) {
      FUN_1460a7d90();
      FUN_140db5666(&DAT_14cadee50,0,&DAT_14cadede8,
                    L"TGPUSkinCacheCS<(0 * 32 + 1 * 16 + 0 * 4 + 0)>",
                    L"/Engine/Private/GpuSkinCacheComputeShader.usf",L"SkinCacheUpdateBatchCS",5,1,
                    FUN_147ad9364,FUN_147ad933c,&LAB_1463d08ea,&LAB_147ad9338,&LAB_14712ac0c,
                    &LAB_14712ac08,0x160,0);
      _DAT_14cadee50 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143512189);
      _Init_thread_footer(&DAT_14cadeef8);
    }
  }
  return &DAT_14cadee50;
}



// FUNCTION 1460a7d90 FUN_1460a7d90 body=205 status=ok
// SIG undefined FUN_1460a7d90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a7d90(void)

{
  if ((DAT_14cadee4f & 2) == 0) {
    DAT_14cadee4f = DAT_14cadee4f | 2;
    _DAT_14cadedf0 = L"TGPUSkinCacheCS<(0 * 32 + 1 * 16 + 0 * 4 + 0)>";
    _DAT_14cadee08 = FUN_146826540;
    _DAT_14cadee10 = FUN_146825d77;
    _DAT_14cadee18 = FUN_146825fd6;
    _DAT_14cadee20 = FUN_1407e02ea;
    _DAT_14cadee28 = FUN_146826273;
    _DAT_14cadee00 = FUN_147ad930a;
    _DAT_14cadee40 = 0xffffffff00000160;
    _DAT_14cadee48 = 8;
    DAT_14cadee4c = 0;
    _DAT_14cadee30 = &LAB_147ad9334;
    FUN_1460a7e5e();
    FUN_1407e00cc(&DAT_14cadede8);
    return;
  }
  return;
}



// FUNCTION 1460a7e5e FUN_1460a7e5e body=133 status=ok
// SIG undefined FUN_1460a7e5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a7e5e(void)

{
  _DAT_14cae2c18 = L"BASE";
  DAT_14cae2c42 = 4;
  FUN_14149c7e8();
  _DAT_14cae2c28 = DAT_14cadedf8;
  _DAT_14cae2c20 = &DAT_14cae25e0;
  _DAT_14cae2c30 = &LAB_14682652b;
  DAT_14cadedf8 = &DAT_14cae2c18;
  DAT_14cadee4d = DAT_14cadee4d + '\x01';
  _DAT_14cae2c38 = 0x100000000;
  if (DAT_14cae2644 != '\0') {
    DAT_14cadee4e = DAT_14cadee4e + '\x01';
  }
  return;
}



// FUNCTION 1460a7ee4 FUN_1460a7ee4 body=284 status=ok
// SIG undefined FUN_1460a7ee4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a7ee4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadf020) {
    FUN_144b3d300(&DAT_14cadf020);
    if (DAT_14cadf020 == -1) {
      FUN_1460a8000();
      FUN_140db5666(&DAT_14cadef78,0,&DAT_14cadef10,
                    L"TGPUSkinCacheCS<(0 * 32 + 1 * 16 + 0 * 4 + 1)>",
                    L"/Engine/Private/GpuSkinCacheComputeShader.usf",L"SkinCacheUpdateBatchCS",5,1,
                    FUN_147ad9438,FUN_147ad9410,&LAB_1463d08f2,&LAB_147ad940c,&LAB_14712ac0c,
                    &LAB_14712ac08,0x160,0);
      _DAT_14cadef78 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143512195);
      _Init_thread_footer(&DAT_14cadf020);
    }
  }
  return &DAT_14cadef78;
}



// FUNCTION 1460a8000 FUN_1460a8000 body=205 status=ok
// SIG undefined FUN_1460a8000(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a8000(void)

{
  if ((DAT_14cadef77 & 2) == 0) {
    DAT_14cadef77 = DAT_14cadef77 | 2;
    _DAT_14cadef18 = L"TGPUSkinCacheCS<(0 * 32 + 1 * 16 + 0 * 4 + 1)>";
    _DAT_14cadef30 = FUN_146826540;
    _DAT_14cadef38 = FUN_146825d77;
    _DAT_14cadef40 = FUN_146825fd6;
    _DAT_14cadef48 = FUN_1407e02ea;
    _DAT_14cadef50 = FUN_146826273;
    _DAT_14cadef28 = FUN_147ad93de;
    _DAT_14cadef68 = 0xffffffff00000160;
    _DAT_14cadef70 = 8;
    DAT_14cadef74 = 0;
    _DAT_14cadef58 = &LAB_147ad9408;
    FUN_1460a80ce();
    FUN_1407e00cc(&DAT_14cadef10);
    return;
  }
  return;
}



// FUNCTION 1460a80ce FUN_1460a80ce body=133 status=ok
// SIG undefined FUN_1460a80ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a80ce(void)

{
  _DAT_14cae2c48 = L"BASE";
  DAT_14cae2c72 = 4;
  FUN_14149c7e8();
  _DAT_14cae2c58 = DAT_14cadef20;
  _DAT_14cae2c50 = &DAT_14cae25e0;
  _DAT_14cae2c60 = &LAB_14682652b;
  DAT_14cadef20 = &DAT_14cae2c48;
  DAT_14cadef75 = DAT_14cadef75 + '\x01';
  _DAT_14cae2c68 = 0x100000000;
  if (DAT_14cae2644 != '\0') {
    DAT_14cadef76 = DAT_14cadef76 + '\x01';
  }
  return;
}



// FUNCTION 1460a8154 FUN_1460a8154 body=284 status=ok
// SIG undefined FUN_1460a8154(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a8154(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadf148) {
    FUN_144b3d300(&DAT_14cadf148);
    if (DAT_14cadf148 == -1) {
      FUN_1460a8270();
      FUN_140db5666(&DAT_14cadf0a0,0,&DAT_14cadf038,
                    L"TGPUSkinCacheCS<(0 * 32 + 1 * 16 + 0 * 4 + 2)>",
                    L"/Engine/Private/GpuSkinCacheComputeShader.usf",L"SkinCacheUpdateBatchCS",5,1,
                    FUN_147ad950c,FUN_147ad94e4,&LAB_1463d08fa,&LAB_147ad94e0,&LAB_14712ac0c,
                    &LAB_14712ac08,0x160,0);
      _DAT_14cadf0a0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1435121a1);
      _Init_thread_footer(&DAT_14cadf148);
    }
  }
  return &DAT_14cadf0a0;
}



// FUNCTION 1460a8270 FUN_1460a8270 body=205 status=ok
// SIG undefined FUN_1460a8270(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a8270(void)

{
  if ((DAT_14cadf09f & 2) == 0) {
    DAT_14cadf09f = DAT_14cadf09f | 2;
    _DAT_14cadf040 = L"TGPUSkinCacheCS<(0 * 32 + 1 * 16 + 0 * 4 + 2)>";
    _DAT_14cadf058 = FUN_146826540;
    _DAT_14cadf060 = FUN_146825d77;
    _DAT_14cadf068 = FUN_146825fd6;
    _DAT_14cadf070 = FUN_1407e02ea;
    _DAT_14cadf078 = FUN_146826273;
    _DAT_14cadf050 = FUN_147ad94b2;
    _DAT_14cadf090 = 0xffffffff00000160;
    _DAT_14cadf098 = 8;
    DAT_14cadf09c = 0;
    _DAT_14cadf080 = &LAB_147ad94dc;
    FUN_1460a833e();
    FUN_1407e00cc(&DAT_14cadf038);
    return;
  }
  return;
}



// FUNCTION 1460a833e FUN_1460a833e body=133 status=ok
// SIG undefined FUN_1460a833e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a833e(void)

{
  _DAT_14cae2c78 = L"BASE";
  DAT_14cae2ca2 = 4;
  FUN_14149c7e8();
  _DAT_14cae2c88 = DAT_14cadf048;
  _DAT_14cae2c80 = &DAT_14cae25e0;
  _DAT_14cae2c90 = &LAB_14682652b;
  DAT_14cadf048 = &DAT_14cae2c78;
  DAT_14cadf09d = DAT_14cadf09d + '\x01';
  _DAT_14cae2c98 = 0x100000000;
  if (DAT_14cae2644 != '\0') {
    DAT_14cadf09e = DAT_14cadf09e + '\x01';
  }
  return;
}



// FUNCTION 1460a83c4 FUN_1460a83c4 body=284 status=ok
// SIG undefined FUN_1460a83c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a83c4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadf270) {
    FUN_144b3d300(&DAT_14cadf270);
    if (DAT_14cadf270 == -1) {
      FUN_1460a84e0();
      FUN_140db5666(&DAT_14cadf1c8,0,&DAT_14cadf160,
                    L"TGPUSkinCacheCS<(0 * 32 + 1 * 16 + 1 * 4 + 0)>",
                    L"/Engine/Private/GpuSkinCacheComputeShader.usf",L"SkinCacheUpdateBatchCS",5,1,
                    FUN_147ad95e0,FUN_147ad95b8,&LAB_1463d0902,&LAB_147ad95b4,&LAB_14712ac0c,
                    &LAB_14712ac08,0x160,0);
      _DAT_14cadf1c8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1435121ad);
      _Init_thread_footer(&DAT_14cadf270);
    }
  }
  return &DAT_14cadf1c8;
}



// FUNCTION 1460a84e0 FUN_1460a84e0 body=205 status=ok
// SIG undefined FUN_1460a84e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a84e0(void)

{
  if ((DAT_14cadf1c7 & 2) == 0) {
    DAT_14cadf1c7 = DAT_14cadf1c7 | 2;
    _DAT_14cadf168 = L"TGPUSkinCacheCS<(0 * 32 + 1 * 16 + 1 * 4 + 0)>";
    _DAT_14cadf180 = FUN_146826540;
    _DAT_14cadf188 = FUN_146825d77;
    _DAT_14cadf190 = FUN_146825fd6;
    _DAT_14cadf198 = FUN_1407e02ea;
    _DAT_14cadf1a0 = FUN_146826273;
    _DAT_14cadf178 = FUN_147ad9586;
    _DAT_14cadf1b8 = 0xffffffff00000160;
    _DAT_14cadf1c0 = 8;
    DAT_14cadf1c4 = 0;
    _DAT_14cadf1a8 = &LAB_147ad95b0;
    FUN_1460a85ae();
    FUN_1407e00cc(&DAT_14cadf160);
    return;
  }
  return;
}



// FUNCTION 1460a85ae FUN_1460a85ae body=133 status=ok
// SIG undefined FUN_1460a85ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a85ae(void)

{
  _DAT_14cae2ca8 = L"BASE";
  DAT_14cae2cd2 = 4;
  FUN_14149c7e8();
  _DAT_14cae2cb8 = DAT_14cadf170;
  _DAT_14cae2cb0 = &DAT_14cae25e0;
  _DAT_14cae2cc0 = &LAB_14682652b;
  DAT_14cadf170 = &DAT_14cae2ca8;
  DAT_14cadf1c5 = DAT_14cadf1c5 + '\x01';
  _DAT_14cae2cc8 = 0x100000000;
  if (DAT_14cae2644 != '\0') {
    DAT_14cadf1c6 = DAT_14cadf1c6 + '\x01';
  }
  return;
}



// FUNCTION 1460a8634 FUN_1460a8634 body=284 status=ok
// SIG undefined FUN_1460a8634(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a8634(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadf398) {
    FUN_144b3d300(&DAT_14cadf398);
    if (DAT_14cadf398 == -1) {
      FUN_1460a8750();
      FUN_140db5666(&DAT_14cadf2f0,0,&DAT_14cadf288,
                    L"TGPUSkinCacheCS<(0 * 32 + 1 * 16 + 1 * 4 + 1)>",
                    L"/Engine/Private/GpuSkinCacheComputeShader.usf",L"SkinCacheUpdateBatchCS",5,1,
                    FUN_147ad96b4,FUN_147ad968c,&LAB_1463d090a,&LAB_147ad9688,&LAB_14712ac0c,
                    &LAB_14712ac08,0x160,0);
      _DAT_14cadf2f0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1435121b9);
      _Init_thread_footer(&DAT_14cadf398);
    }
  }
  return &DAT_14cadf2f0;
}



// FUNCTION 1460a8750 FUN_1460a8750 body=205 status=ok
// SIG undefined FUN_1460a8750(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a8750(void)

{
  if ((DAT_14cadf2ef & 2) == 0) {
    DAT_14cadf2ef = DAT_14cadf2ef | 2;
    _DAT_14cadf290 = L"TGPUSkinCacheCS<(0 * 32 + 1 * 16 + 1 * 4 + 1)>";
    _DAT_14cadf2a8 = FUN_146826540;
    _DAT_14cadf2b0 = FUN_146825d77;
    _DAT_14cadf2b8 = FUN_146825fd6;
    _DAT_14cadf2c0 = FUN_1407e02ea;
    _DAT_14cadf2c8 = FUN_146826273;
    _DAT_14cadf2a0 = FUN_147ad965a;
    _DAT_14cadf2e0 = 0xffffffff00000160;
    _DAT_14cadf2e8 = 8;
    DAT_14cadf2ec = 0;
    _DAT_14cadf2d0 = &LAB_147ad9684;
    FUN_1460a881e();
    FUN_1407e00cc(&DAT_14cadf288);
    return;
  }
  return;
}



// FUNCTION 1460a881e FUN_1460a881e body=133 status=ok
// SIG undefined FUN_1460a881e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a881e(void)

{
  _DAT_14cae2cd8 = L"BASE";
  DAT_14cae2d02 = 4;
  FUN_14149c7e8();
  _DAT_14cae2ce8 = DAT_14cadf298;
  _DAT_14cae2ce0 = &DAT_14cae25e0;
  _DAT_14cae2cf0 = &LAB_14682652b;
  DAT_14cadf298 = &DAT_14cae2cd8;
  DAT_14cadf2ed = DAT_14cadf2ed + '\x01';
  _DAT_14cae2cf8 = 0x100000000;
  if (DAT_14cae2644 != '\0') {
    DAT_14cadf2ee = DAT_14cadf2ee + '\x01';
  }
  return;
}



// FUNCTION 1460a88a4 FUN_1460a88a4 body=284 status=ok
// SIG undefined FUN_1460a88a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a88a4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadf4c0) {
    FUN_144b3d300(&DAT_14cadf4c0);
    if (DAT_14cadf4c0 == -1) {
      FUN_1460a89c0();
      FUN_140db5666(&DAT_14cadf418,0,&DAT_14cadf3b0,
                    L"TGPUSkinCacheCS<(0 * 32 + 1 * 16 + 1 * 4 + 2)>",
                    L"/Engine/Private/GpuSkinCacheComputeShader.usf",L"SkinCacheUpdateBatchCS",5,1,
                    FUN_147ad9788,FUN_147ad9760,&LAB_1463d0912,&LAB_147ad975c,&LAB_14712ac0c,
                    &LAB_14712ac08,0x160,0);
      _DAT_14cadf418 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1435121c5);
      _Init_thread_footer(&DAT_14cadf4c0);
    }
  }
  return &DAT_14cadf418;
}



// FUNCTION 1460a89c0 FUN_1460a89c0 body=205 status=ok
// SIG undefined FUN_1460a89c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a89c0(void)

{
  if ((DAT_14cadf417 & 2) == 0) {
    DAT_14cadf417 = DAT_14cadf417 | 2;
    _DAT_14cadf3b8 = L"TGPUSkinCacheCS<(0 * 32 + 1 * 16 + 1 * 4 + 2)>";
    _DAT_14cadf3d0 = FUN_146826540;
    _DAT_14cadf3d8 = FUN_146825d77;
    _DAT_14cadf3e0 = FUN_146825fd6;
    _DAT_14cadf3e8 = FUN_1407e02ea;
    _DAT_14cadf3f0 = FUN_146826273;
    _DAT_14cadf3c8 = FUN_147ad972e;
    _DAT_14cadf408 = 0xffffffff00000160;
    _DAT_14cadf410 = 8;
    DAT_14cadf414 = 0;
    _DAT_14cadf3f8 = &LAB_147ad9758;
    FUN_1460a8a8e();
    FUN_1407e00cc(&DAT_14cadf3b0);
    return;
  }
  return;
}



// FUNCTION 1460a8a8e FUN_1460a8a8e body=133 status=ok
// SIG undefined FUN_1460a8a8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a8a8e(void)

{
  _DAT_14cae2d08 = L"BASE";
  DAT_14cae2d32 = 4;
  FUN_14149c7e8();
  _DAT_14cae2d18 = DAT_14cadf3c0;
  _DAT_14cae2d10 = &DAT_14cae25e0;
  _DAT_14cae2d20 = &LAB_14682652b;
  DAT_14cadf3c0 = &DAT_14cae2d08;
  DAT_14cadf415 = DAT_14cadf415 + '\x01';
  _DAT_14cae2d28 = 0x100000000;
  if (DAT_14cae2644 != '\0') {
    DAT_14cadf416 = DAT_14cadf416 + '\x01';
  }
  return;
}



// FUNCTION 1460a8b14 FUN_1460a8b14 body=284 status=ok
// SIG undefined FUN_1460a8b14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a8b14(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadf5e8) {
    FUN_144b3d300(&DAT_14cadf5e8);
    if (DAT_14cadf5e8 == -1) {
      FUN_1460a8c30();
      FUN_140db5666(&DAT_14cadf540,0,&DAT_14cadf4d8,
                    L"TGPUSkinCacheCS<(1 * 32 + 0 * 16 + 0 * 4 + 0)>",
                    L"/Engine/Private/GpuSkinCacheComputeShader.usf",L"SkinCacheUpdateBatchCS",5,1,
                    FUN_147ad985c,FUN_147ad9834,&LAB_1463d091a,&LAB_147ad9830,&LAB_14712ac0c,
                    &LAB_14712ac08,0x160,0);
      _DAT_14cadf540 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1435121d1);
      _Init_thread_footer(&DAT_14cadf5e8);
    }
  }
  return &DAT_14cadf540;
}



// FUNCTION 1460a8c30 FUN_1460a8c30 body=205 status=ok
// SIG undefined FUN_1460a8c30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a8c30(void)

{
  if ((DAT_14cadf53f & 2) == 0) {
    DAT_14cadf53f = DAT_14cadf53f | 2;
    _DAT_14cadf4e0 = L"TGPUSkinCacheCS<(1 * 32 + 0 * 16 + 0 * 4 + 0)>";
    _DAT_14cadf4f8 = FUN_146826540;
    _DAT_14cadf500 = FUN_146825d77;
    _DAT_14cadf508 = FUN_146825fd6;
    _DAT_14cadf510 = FUN_1407e02ea;
    _DAT_14cadf518 = FUN_146826273;
    _DAT_14cadf4f0 = FUN_147ad9802;
    _DAT_14cadf530 = 0xffffffff00000160;
    _DAT_14cadf538 = 8;
    DAT_14cadf53c = 0;
    _DAT_14cadf520 = &LAB_147ad982c;
    FUN_1460a8cfe();
    FUN_1407e00cc(&DAT_14cadf4d8);
    return;
  }
  return;
}



// FUNCTION 1460a8cfe FUN_1460a8cfe body=133 status=ok
// SIG undefined FUN_1460a8cfe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a8cfe(void)

{
  _DAT_14cae2d38 = L"BASE";
  DAT_14cae2d62 = 4;
  FUN_14149c7e8();
  _DAT_14cae2d48 = DAT_14cadf4e8;
  _DAT_14cae2d40 = &DAT_14cae25e0;
  _DAT_14cae2d50 = &LAB_14682652b;
  DAT_14cadf4e8 = &DAT_14cae2d38;
  DAT_14cadf53d = DAT_14cadf53d + '\x01';
  _DAT_14cae2d58 = 0x100000000;
  if (DAT_14cae2644 != '\0') {
    DAT_14cadf53e = DAT_14cadf53e + '\x01';
  }
  return;
}



// FUNCTION 1460a8d84 FUN_1460a8d84 body=284 status=ok
// SIG undefined FUN_1460a8d84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a8d84(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadf710) {
    FUN_144b3d300(&DAT_14cadf710);
    if (DAT_14cadf710 == -1) {
      FUN_1460a8ea0();
      FUN_140db5666(&DAT_14cadf668,0,&DAT_14cadf600,
                    L"TGPUSkinCacheCS<(1 * 32 + 0 * 16 + 0 * 4 + 1)>",
                    L"/Engine/Private/GpuSkinCacheComputeShader.usf",L"SkinCacheUpdateBatchCS",5,1,
                    FUN_147ad9930,FUN_147ad9908,&LAB_1463d0922,&LAB_147ad9904,&LAB_14712ac0c,
                    &LAB_14712ac08,0x160,0);
      _DAT_14cadf668 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1435121dd);
      _Init_thread_footer(&DAT_14cadf710);
    }
  }
  return &DAT_14cadf668;
}



// FUNCTION 1460a8ea0 FUN_1460a8ea0 body=205 status=ok
// SIG undefined FUN_1460a8ea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a8ea0(void)

{
  if ((DAT_14cadf667 & 2) == 0) {
    DAT_14cadf667 = DAT_14cadf667 | 2;
    _DAT_14cadf608 = L"TGPUSkinCacheCS<(1 * 32 + 0 * 16 + 0 * 4 + 1)>";
    _DAT_14cadf620 = FUN_146826540;
    _DAT_14cadf628 = FUN_146825d77;
    _DAT_14cadf630 = FUN_146825fd6;
    _DAT_14cadf638 = FUN_1407e02ea;
    _DAT_14cadf640 = FUN_146826273;
    _DAT_14cadf618 = FUN_147ad98d6;
    _DAT_14cadf658 = 0xffffffff00000160;
    _DAT_14cadf660 = 8;
    DAT_14cadf664 = 0;
    _DAT_14cadf648 = &LAB_147ad9900;
    FUN_1460a8f6e();
    FUN_1407e00cc(&DAT_14cadf600);
    return;
  }
  return;
}



// FUNCTION 1460a8f6e FUN_1460a8f6e body=133 status=ok
// SIG undefined FUN_1460a8f6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a8f6e(void)

{
  _DAT_14cae2d68 = L"BASE";
  DAT_14cae2d92 = 4;
  FUN_14149c7e8();
  _DAT_14cae2d78 = DAT_14cadf610;
  _DAT_14cae2d70 = &DAT_14cae25e0;
  _DAT_14cae2d80 = &LAB_14682652b;
  DAT_14cadf610 = &DAT_14cae2d68;
  DAT_14cadf665 = DAT_14cadf665 + '\x01';
  _DAT_14cae2d88 = 0x100000000;
  if (DAT_14cae2644 != '\0') {
    DAT_14cadf666 = DAT_14cadf666 + '\x01';
  }
  return;
}



// FUNCTION 1460a8ff4 FUN_1460a8ff4 body=284 status=ok
// SIG undefined FUN_1460a8ff4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a8ff4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadf838) {
    FUN_144b3d300(&DAT_14cadf838);
    if (DAT_14cadf838 == -1) {
      FUN_1460a9110();
      FUN_140db5666(&DAT_14cadf790,0,&DAT_14cadf728,
                    L"TGPUSkinCacheCS<(1 * 32 + 0 * 16 + 0 * 4 + 2)>",
                    L"/Engine/Private/GpuSkinCacheComputeShader.usf",L"SkinCacheUpdateBatchCS",5,1,
                    FUN_147ad9a04,FUN_147ad99dc,&LAB_1463d092a,&LAB_147ad99d8,&LAB_14712ac0c,
                    &LAB_14712ac08,0x160,0);
      _DAT_14cadf790 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1435121e9);
      _Init_thread_footer(&DAT_14cadf838);
    }
  }
  return &DAT_14cadf790;
}



// FUNCTION 1460a9110 FUN_1460a9110 body=205 status=ok
// SIG undefined FUN_1460a9110(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a9110(void)

{
  if ((DAT_14cadf78f & 2) == 0) {
    DAT_14cadf78f = DAT_14cadf78f | 2;
    _DAT_14cadf730 = L"TGPUSkinCacheCS<(1 * 32 + 0 * 16 + 0 * 4 + 2)>";
    _DAT_14cadf748 = FUN_146826540;
    _DAT_14cadf750 = FUN_146825d77;
    _DAT_14cadf758 = FUN_146825fd6;
    _DAT_14cadf760 = FUN_1407e02ea;
    _DAT_14cadf768 = FUN_146826273;
    _DAT_14cadf740 = FUN_147ad99aa;
    _DAT_14cadf780 = 0xffffffff00000160;
    _DAT_14cadf788 = 8;
    DAT_14cadf78c = 0;
    _DAT_14cadf770 = &LAB_147ad99d4;
    FUN_1460a91de();
    FUN_1407e00cc(&DAT_14cadf728);
    return;
  }
  return;
}



// FUNCTION 1460a91de FUN_1460a91de body=133 status=ok
// SIG undefined FUN_1460a91de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a91de(void)

{
  _DAT_14cae2d98 = L"BASE";
  DAT_14cae2dc2 = 4;
  FUN_14149c7e8();
  _DAT_14cae2da8 = DAT_14cadf738;
  _DAT_14cae2da0 = &DAT_14cae25e0;
  _DAT_14cae2db0 = &LAB_14682652b;
  DAT_14cadf738 = &DAT_14cae2d98;
  DAT_14cadf78d = DAT_14cadf78d + '\x01';
  _DAT_14cae2db8 = 0x100000000;
  if (DAT_14cae2644 != '\0') {
    DAT_14cadf78e = DAT_14cadf78e + '\x01';
  }
  return;
}



// FUNCTION 1460a9264 FUN_1460a9264 body=284 status=ok
// SIG undefined FUN_1460a9264(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a9264(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadf960) {
    FUN_144b3d300(&DAT_14cadf960);
    if (DAT_14cadf960 == -1) {
      FUN_1460a9380();
      FUN_140db5666(&DAT_14cadf8b8,0,&DAT_14cadf850,
                    L"TGPUSkinCacheCS<(1 * 32 + 0 * 16 + 1 * 4 + 0)>",
                    L"/Engine/Private/GpuSkinCacheComputeShader.usf",L"SkinCacheUpdateBatchCS",5,1,
                    FUN_147ad9ad8,FUN_147ad9ab0,&LAB_1463d0932,&LAB_147ad9aac,&LAB_14712ac0c,
                    &LAB_14712ac08,0x160,0);
      _DAT_14cadf8b8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1435121f5);
      _Init_thread_footer(&DAT_14cadf960);
    }
  }
  return &DAT_14cadf8b8;
}



// FUNCTION 1460a9380 FUN_1460a9380 body=205 status=ok
// SIG undefined FUN_1460a9380(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a9380(void)

{
  if ((DAT_14cadf8b7 & 2) == 0) {
    DAT_14cadf8b7 = DAT_14cadf8b7 | 2;
    _DAT_14cadf858 = L"TGPUSkinCacheCS<(1 * 32 + 0 * 16 + 1 * 4 + 0)>";
    _DAT_14cadf870 = FUN_146826540;
    _DAT_14cadf878 = FUN_146825d77;
    _DAT_14cadf880 = FUN_146825fd6;
    _DAT_14cadf888 = FUN_1407e02ea;
    _DAT_14cadf890 = FUN_146826273;
    _DAT_14cadf868 = FUN_147ad9a7e;
    _DAT_14cadf8a8 = 0xffffffff00000160;
    _DAT_14cadf8b0 = 8;
    DAT_14cadf8b4 = 0;
    _DAT_14cadf898 = &LAB_147ad9aa8;
    FUN_1460a944e();
    FUN_1407e00cc(&DAT_14cadf850);
    return;
  }
  return;
}



// FUNCTION 1460a944e FUN_1460a944e body=133 status=ok
// SIG undefined FUN_1460a944e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a944e(void)

{
  _DAT_14cae2dc8 = L"BASE";
  DAT_14cae2df2 = 4;
  FUN_14149c7e8();
  _DAT_14cae2dd8 = DAT_14cadf860;
  _DAT_14cae2dd0 = &DAT_14cae25e0;
  _DAT_14cae2de0 = &LAB_14682652b;
  DAT_14cadf860 = &DAT_14cae2dc8;
  DAT_14cadf8b5 = DAT_14cadf8b5 + '\x01';
  _DAT_14cae2de8 = 0x100000000;
  if (DAT_14cae2644 != '\0') {
    DAT_14cadf8b6 = DAT_14cadf8b6 + '\x01';
  }
  return;
}



// FUNCTION 1460a94d4 FUN_1460a94d4 body=284 status=ok
// SIG undefined FUN_1460a94d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a94d4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadfa88) {
    FUN_144b3d300(&DAT_14cadfa88);
    if (DAT_14cadfa88 == -1) {
      FUN_1460a95f0();
      FUN_140db5666(&DAT_14cadf9e0,0,&DAT_14cadf978,
                    L"TGPUSkinCacheCS<(1 * 32 + 0 * 16 + 1 * 4 + 1)>",
                    L"/Engine/Private/GpuSkinCacheComputeShader.usf",L"SkinCacheUpdateBatchCS",5,1,
                    FUN_147ad9bac,FUN_147ad9b84,&LAB_1463d093a,&LAB_147ad9b80,&LAB_14712ac0c,
                    &LAB_14712ac08,0x160,0);
      _DAT_14cadf9e0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143512201);
      _Init_thread_footer(&DAT_14cadfa88);
    }
  }
  return &DAT_14cadf9e0;
}



// FUNCTION 1460a95f0 FUN_1460a95f0 body=205 status=ok
// SIG undefined FUN_1460a95f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a95f0(void)

{
  if ((DAT_14cadf9df & 2) == 0) {
    DAT_14cadf9df = DAT_14cadf9df | 2;
    _DAT_14cadf980 = L"TGPUSkinCacheCS<(1 * 32 + 0 * 16 + 1 * 4 + 1)>";
    _DAT_14cadf998 = FUN_146826540;
    _DAT_14cadf9a0 = FUN_146825d77;
    _DAT_14cadf9a8 = FUN_146825fd6;
    _DAT_14cadf9b0 = FUN_1407e02ea;
    _DAT_14cadf9b8 = FUN_146826273;
    _DAT_14cadf990 = FUN_147ad9b52;
    _DAT_14cadf9d0 = 0xffffffff00000160;
    _DAT_14cadf9d8 = 8;
    DAT_14cadf9dc = 0;
    _DAT_14cadf9c0 = &LAB_147ad9b7c;
    FUN_1460a96be();
    FUN_1407e00cc(&DAT_14cadf978);
    return;
  }
  return;
}



// FUNCTION 1460a96be FUN_1460a96be body=133 status=ok
// SIG undefined FUN_1460a96be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a96be(void)

{
  _DAT_14cae2df8 = L"BASE";
  DAT_14cae2e22 = 4;
  FUN_14149c7e8();
  _DAT_14cae2e08 = DAT_14cadf988;
  _DAT_14cae2e00 = &DAT_14cae25e0;
  _DAT_14cae2e10 = &LAB_14682652b;
  DAT_14cadf988 = &DAT_14cae2df8;
  DAT_14cadf9dd = DAT_14cadf9dd + '\x01';
  _DAT_14cae2e18 = 0x100000000;
  if (DAT_14cae2644 != '\0') {
    DAT_14cadf9de = DAT_14cadf9de + '\x01';
  }
  return;
}



// FUNCTION 1460a9744 FUN_1460a9744 body=284 status=ok
// SIG undefined FUN_1460a9744(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a9744(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadfbb0) {
    FUN_144b3d300(&DAT_14cadfbb0);
    if (DAT_14cadfbb0 == -1) {
      FUN_1460a9860();
      FUN_140db5666(&DAT_14cadfb08,0,&DAT_14cadfaa0,
                    L"TGPUSkinCacheCS<(1 * 32 + 0 * 16 + 1 * 4 + 2)>",
                    L"/Engine/Private/GpuSkinCacheComputeShader.usf",L"SkinCacheUpdateBatchCS",5,1,
                    FUN_147ad9c80,FUN_147ad9c58,&LAB_1463d0942,&LAB_147ad9c54,&LAB_14712ac0c,
                    &LAB_14712ac08,0x160,0);
      _DAT_14cadfb08 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14351220d);
      _Init_thread_footer(&DAT_14cadfbb0);
    }
  }
  return &DAT_14cadfb08;
}



// FUNCTION 1460a9860 FUN_1460a9860 body=205 status=ok
// SIG undefined FUN_1460a9860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a9860(void)

{
  if ((DAT_14cadfb07 & 2) == 0) {
    DAT_14cadfb07 = DAT_14cadfb07 | 2;
    _DAT_14cadfaa8 = L"TGPUSkinCacheCS<(1 * 32 + 0 * 16 + 1 * 4 + 2)>";
    _DAT_14cadfac0 = FUN_146826540;
    _DAT_14cadfac8 = FUN_146825d77;
    _DAT_14cadfad0 = FUN_146825fd6;
    _DAT_14cadfad8 = FUN_1407e02ea;
    _DAT_14cadfae0 = FUN_146826273;
    _DAT_14cadfab8 = FUN_147ad9c26;
    _DAT_14cadfaf8 = 0xffffffff00000160;
    _DAT_14cadfb00 = 8;
    DAT_14cadfb04 = 0;
    _DAT_14cadfae8 = &LAB_147ad9c50;
    FUN_1460a992e();
    FUN_1407e00cc(&DAT_14cadfaa0);
    return;
  }
  return;
}



// FUNCTION 1460a992e FUN_1460a992e body=133 status=ok
// SIG undefined FUN_1460a992e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a992e(void)

{
  _DAT_14cae2e28 = L"BASE";
  DAT_14cae2e52 = 4;
  FUN_14149c7e8();
  _DAT_14cae2e38 = DAT_14cadfab0;
  _DAT_14cae2e30 = &DAT_14cae25e0;
  _DAT_14cae2e40 = &LAB_14682652b;
  DAT_14cadfab0 = &DAT_14cae2e28;
  DAT_14cadfb05 = DAT_14cadfb05 + '\x01';
  _DAT_14cae2e48 = 0x100000000;
  if (DAT_14cae2644 != '\0') {
    DAT_14cadfb06 = DAT_14cadfb06 + '\x01';
  }
  return;
}



// FUNCTION 1460a99b4 FUN_1460a99b4 body=284 status=ok
// SIG undefined FUN_1460a99b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a99b4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadfcd8) {
    FUN_144b3d300(&DAT_14cadfcd8);
    if (DAT_14cadfcd8 == -1) {
      FUN_1460a9ad0();
      FUN_140db5666(&DAT_14cadfc30,0,&DAT_14cadfbc8,
                    L"TGPUSkinCacheCS<(1 * 32 + 1 * 16 + 0 * 4 + 0)>",
                    L"/Engine/Private/GpuSkinCacheComputeShader.usf",L"SkinCacheUpdateBatchCS",5,1,
                    FUN_147ad9d54,FUN_147ad9d2c,&LAB_1463d094a,&LAB_147ad9d28,&LAB_14712ac0c,
                    &LAB_14712ac08,0x160,0);
      _DAT_14cadfc30 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143512219);
      _Init_thread_footer(&DAT_14cadfcd8);
    }
  }
  return &DAT_14cadfc30;
}



// FUNCTION 1460a9ad0 FUN_1460a9ad0 body=205 status=ok
// SIG undefined FUN_1460a9ad0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a9ad0(void)

{
  if ((DAT_14cadfc2f & 2) == 0) {
    DAT_14cadfc2f = DAT_14cadfc2f | 2;
    _DAT_14cadfbd0 = L"TGPUSkinCacheCS<(1 * 32 + 1 * 16 + 0 * 4 + 0)>";
    _DAT_14cadfbe8 = FUN_146826540;
    _DAT_14cadfbf0 = FUN_146825d77;
    _DAT_14cadfbf8 = FUN_146825fd6;
    _DAT_14cadfc00 = FUN_1407e02ea;
    _DAT_14cadfc08 = FUN_146826273;
    _DAT_14cadfbe0 = FUN_147ad9cfa;
    _DAT_14cadfc20 = 0xffffffff00000160;
    _DAT_14cadfc28 = 8;
    DAT_14cadfc2c = 0;
    _DAT_14cadfc10 = &LAB_147ad9d24;
    FUN_1460a9b9e();
    FUN_1407e00cc(&DAT_14cadfbc8);
    return;
  }
  return;
}



// FUNCTION 1460a9b9e FUN_1460a9b9e body=133 status=ok
// SIG undefined FUN_1460a9b9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a9b9e(void)

{
  _DAT_14cae2e58 = L"BASE";
  DAT_14cae2e82 = 4;
  FUN_14149c7e8();
  _DAT_14cae2e68 = DAT_14cadfbd8;
  _DAT_14cae2e60 = &DAT_14cae25e0;
  _DAT_14cae2e70 = &LAB_14682652b;
  DAT_14cadfbd8 = &DAT_14cae2e58;
  DAT_14cadfc2d = DAT_14cadfc2d + '\x01';
  _DAT_14cae2e78 = 0x100000000;
  if (DAT_14cae2644 != '\0') {
    DAT_14cadfc2e = DAT_14cadfc2e + '\x01';
  }
  return;
}



// FUNCTION 1460a9c24 FUN_1460a9c24 body=284 status=ok
// SIG undefined FUN_1460a9c24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a9c24(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadfe00) {
    FUN_144b3d300(&DAT_14cadfe00);
    if (DAT_14cadfe00 == -1) {
      FUN_1460a9d40();
      FUN_140db5666(&DAT_14cadfd58,0,&DAT_14cadfcf0,
                    L"TGPUSkinCacheCS<(1 * 32 + 1 * 16 + 0 * 4 + 1)>",
                    L"/Engine/Private/GpuSkinCacheComputeShader.usf",L"SkinCacheUpdateBatchCS",5,1,
                    FUN_147ad9e28,FUN_147ad9e00,&LAB_1463d0952,&LAB_147ad9dfc,&LAB_14712ac0c,
                    &LAB_14712ac08,0x160,0);
      _DAT_14cadfd58 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143512225);
      _Init_thread_footer(&DAT_14cadfe00);
    }
  }
  return &DAT_14cadfd58;
}



// FUNCTION 1460a9d40 FUN_1460a9d40 body=205 status=ok
// SIG undefined FUN_1460a9d40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a9d40(void)

{
  if ((DAT_14cadfd57 & 2) == 0) {
    DAT_14cadfd57 = DAT_14cadfd57 | 2;
    _DAT_14cadfcf8 = L"TGPUSkinCacheCS<(1 * 32 + 1 * 16 + 0 * 4 + 1)>";
    _DAT_14cadfd10 = FUN_146826540;
    _DAT_14cadfd18 = FUN_146825d77;
    _DAT_14cadfd20 = FUN_146825fd6;
    _DAT_14cadfd28 = FUN_1407e02ea;
    _DAT_14cadfd30 = FUN_146826273;
    _DAT_14cadfd08 = FUN_147ad9dce;
    _DAT_14cadfd48 = 0xffffffff00000160;
    _DAT_14cadfd50 = 8;
    DAT_14cadfd54 = 0;
    _DAT_14cadfd38 = &LAB_147ad9df8;
    FUN_1460a9e0e();
    FUN_1407e00cc(&DAT_14cadfcf0);
    return;
  }
  return;
}



// FUNCTION 1460a9e0e FUN_1460a9e0e body=133 status=ok
// SIG undefined FUN_1460a9e0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a9e0e(void)

{
  _DAT_14cae2e88 = L"BASE";
  DAT_14cae2eb2 = 4;
  FUN_14149c7e8();
  _DAT_14cae2e98 = DAT_14cadfd00;
  _DAT_14cae2e90 = &DAT_14cae25e0;
  _DAT_14cae2ea0 = &LAB_14682652b;
  DAT_14cadfd00 = &DAT_14cae2e88;
  DAT_14cadfd55 = DAT_14cadfd55 + '\x01';
  _DAT_14cae2ea8 = 0x100000000;
  if (DAT_14cae2644 != '\0') {
    DAT_14cadfd56 = DAT_14cadfd56 + '\x01';
  }
  return;
}



// FUNCTION 1460a9e94 FUN_1460a9e94 body=284 status=ok
// SIG undefined FUN_1460a9e94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460a9e94(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cadff28) {
    FUN_144b3d300(&DAT_14cadff28);
    if (DAT_14cadff28 == -1) {
      FUN_1460a9fb0();
      FUN_140db5666(&DAT_14cadfe80,0,&DAT_14cadfe18,
                    L"TGPUSkinCacheCS<(1 * 32 + 1 * 16 + 0 * 4 + 2)>",
                    L"/Engine/Private/GpuSkinCacheComputeShader.usf",L"SkinCacheUpdateBatchCS",5,1,
                    FUN_147ad9efc,FUN_147ad9ed4,&LAB_1463d095a,&LAB_147ad9ed0,&LAB_14712ac0c,
                    &LAB_14712ac08,0x160,0);
      _DAT_14cadfe80 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143512231);
      _Init_thread_footer(&DAT_14cadff28);
    }
  }
  return &DAT_14cadfe80;
}



// FUNCTION 1460a9fb0 FUN_1460a9fb0 body=205 status=ok
// SIG undefined FUN_1460a9fb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460a9fb0(void)

{
  if ((DAT_14cadfe7f & 2) == 0) {
    DAT_14cadfe7f = DAT_14cadfe7f | 2;
    _DAT_14cadfe20 = L"TGPUSkinCacheCS<(1 * 32 + 1 * 16 + 0 * 4 + 2)>";
    _DAT_14cadfe38 = FUN_146826540;
    _DAT_14cadfe40 = FUN_146825d77;
    _DAT_14cadfe48 = FUN_146825fd6;
    _DAT_14cadfe50 = FUN_1407e02ea;
    _DAT_14cadfe58 = FUN_146826273;
    _DAT_14cadfe30 = FUN_147ad9ea2;
    _DAT_14cadfe70 = 0xffffffff00000160;
    _DAT_14cadfe78 = 8;
    DAT_14cadfe7c = 0;
    _DAT_14cadfe60 = &LAB_147ad9ecc;
    FUN_1460aa07e();
    FUN_1407e00cc(&DAT_14cadfe18);
    return;
  }
  return;
}



// FUNCTION 1460aa07e FUN_1460aa07e body=133 status=ok
// SIG undefined FUN_1460aa07e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460aa07e(void)

{
  _DAT_14cae2eb8 = L"BASE";
  DAT_14cae2ee2 = 4;
  FUN_14149c7e8();
  _DAT_14cae2ec8 = DAT_14cadfe28;
  _DAT_14cae2ec0 = &DAT_14cae25e0;
  _DAT_14cae2ed0 = &LAB_14682652b;
  DAT_14cadfe28 = &DAT_14cae2eb8;
  DAT_14cadfe7d = DAT_14cadfe7d + '\x01';
  _DAT_14cae2ed8 = 0x100000000;
  if (DAT_14cae2644 != '\0') {
    DAT_14cadfe7e = DAT_14cadfe7e + '\x01';
  }
  return;
}



// FUNCTION 1460aa104 FUN_1460aa104 body=284 status=ok
// SIG undefined FUN_1460aa104(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460aa104(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae0050) {
    FUN_144b3d300(&DAT_14cae0050);
    if (DAT_14cae0050 == -1) {
      FUN_1460aa220();
      FUN_140db5666(&DAT_14cadffa8,0,&DAT_14cadff40,
                    L"TGPUSkinCacheCS<(1 * 32 + 1 * 16 + 1 * 4 + 0)>",
                    L"/Engine/Private/GpuSkinCacheComputeShader.usf",L"SkinCacheUpdateBatchCS",5,1,
                    FUN_147ad9fd0,FUN_147ad9fa8,&LAB_1463d0962,&LAB_147ad9fa4,&LAB_14712ac0c,
                    &LAB_14712ac08,0x160,0);
      _DAT_14cadffa8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14351223d);
      _Init_thread_footer(&DAT_14cae0050);
    }
  }
  return &DAT_14cadffa8;
}



// FUNCTION 1460aa220 FUN_1460aa220 body=205 status=ok
// SIG undefined FUN_1460aa220(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460aa220(void)

{
  if ((DAT_14cadffa7 & 2) == 0) {
    DAT_14cadffa7 = DAT_14cadffa7 | 2;
    _DAT_14cadff48 = L"TGPUSkinCacheCS<(1 * 32 + 1 * 16 + 1 * 4 + 0)>";
    _DAT_14cadff60 = FUN_146826540;
    _DAT_14cadff68 = FUN_146825d77;
    _DAT_14cadff70 = FUN_146825fd6;
    _DAT_14cadff78 = FUN_1407e02ea;
    _DAT_14cadff80 = FUN_146826273;
    _DAT_14cadff58 = FUN_147ad9f76;
    _DAT_14cadff98 = 0xffffffff00000160;
    _DAT_14cadffa0 = 8;
    DAT_14cadffa4 = 0;
    _DAT_14cadff88 = &LAB_147ad9fa0;
    FUN_1460aa2ee();
    FUN_1407e00cc(&DAT_14cadff40);
    return;
  }
  return;
}



// FUNCTION 1460aa2ee FUN_1460aa2ee body=133 status=ok
// SIG undefined FUN_1460aa2ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460aa2ee(void)

{
  _DAT_14cae2ee8 = L"BASE";
  DAT_14cae2f12 = 4;
  FUN_14149c7e8();
  _DAT_14cae2ef8 = DAT_14cadff50;
  _DAT_14cae2ef0 = &DAT_14cae25e0;
  _DAT_14cae2f00 = &LAB_14682652b;
  DAT_14cadff50 = &DAT_14cae2ee8;
  DAT_14cadffa5 = DAT_14cadffa5 + '\x01';
  _DAT_14cae2f08 = 0x100000000;
  if (DAT_14cae2644 != '\0') {
    DAT_14cadffa6 = DAT_14cadffa6 + '\x01';
  }
  return;
}



// FUNCTION 1460aa374 FUN_1460aa374 body=284 status=ok
// SIG undefined FUN_1460aa374(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460aa374(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae0178) {
    FUN_144b3d300(&DAT_14cae0178);
    if (DAT_14cae0178 == -1) {
      FUN_1460aa490();
      FUN_140db5666(&DAT_14cae00d0,0,&DAT_14cae0068,
                    L"TGPUSkinCacheCS<(1 * 32 + 1 * 16 + 1 * 4 + 1)>",
                    L"/Engine/Private/GpuSkinCacheComputeShader.usf",L"SkinCacheUpdateBatchCS",5,1,
                    FUN_147ada0a4,FUN_147ada07c,&LAB_1463d096a,&LAB_147ada078,&LAB_14712ac0c,
                    &LAB_14712ac08,0x160,0);
      _DAT_14cae00d0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143512249);
      _Init_thread_footer(&DAT_14cae0178);
    }
  }
  return &DAT_14cae00d0;
}



// FUNCTION 1460aa490 FUN_1460aa490 body=205 status=ok
// SIG undefined FUN_1460aa490(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460aa490(void)

{
  if ((DAT_14cae00cf & 2) == 0) {
    DAT_14cae00cf = DAT_14cae00cf | 2;
    _DAT_14cae0070 = L"TGPUSkinCacheCS<(1 * 32 + 1 * 16 + 1 * 4 + 1)>";
    _DAT_14cae0088 = FUN_146826540;
    _DAT_14cae0090 = FUN_146825d77;
    _DAT_14cae0098 = FUN_146825fd6;
    _DAT_14cae00a0 = FUN_1407e02ea;
    _DAT_14cae00a8 = FUN_146826273;
    _DAT_14cae0080 = FUN_147ada04a;
    _DAT_14cae00c0 = 0xffffffff00000160;
    _DAT_14cae00c8 = 8;
    DAT_14cae00cc = 0;
    _DAT_14cae00b0 = &LAB_147ada074;
    FUN_1460aa55e();
    FUN_1407e00cc(&DAT_14cae0068);
    return;
  }
  return;
}



// FUNCTION 1460aa55e FUN_1460aa55e body=133 status=ok
// SIG undefined FUN_1460aa55e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460aa55e(void)

{
  _DAT_14cae2f18 = L"BASE";
  DAT_14cae2f42 = 4;
  FUN_14149c7e8();
  _DAT_14cae2f28 = DAT_14cae0078;
  _DAT_14cae2f20 = &DAT_14cae25e0;
  _DAT_14cae2f30 = &LAB_14682652b;
  DAT_14cae0078 = &DAT_14cae2f18;
  DAT_14cae00cd = DAT_14cae00cd + '\x01';
  _DAT_14cae2f38 = 0x100000000;
  if (DAT_14cae2644 != '\0') {
    DAT_14cae00ce = DAT_14cae00ce + '\x01';
  }
  return;
}



// FUNCTION 1460aa5e4 FUN_1460aa5e4 body=284 status=ok
// SIG undefined FUN_1460aa5e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460aa5e4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae02a0) {
    FUN_144b3d300(&DAT_14cae02a0);
    if (DAT_14cae02a0 == -1) {
      FUN_1460aa700();
      FUN_140db5666(&DAT_14cae01f8,0,&DAT_14cae0190,
                    L"TGPUSkinCacheCS<(1 * 32 + 1 * 16 + 1 * 4 + 2)>",
                    L"/Engine/Private/GpuSkinCacheComputeShader.usf",L"SkinCacheUpdateBatchCS",5,1,
                    FUN_147ada178,FUN_147ada150,&LAB_1463d0972,&LAB_147ada14c,&LAB_14712ac0c,
                    &LAB_14712ac08,0x160,0);
      _DAT_14cae01f8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143512255);
      _Init_thread_footer(&DAT_14cae02a0);
    }
  }
  return &DAT_14cae01f8;
}



// FUNCTION 1460aa700 FUN_1460aa700 body=205 status=ok
// SIG undefined FUN_1460aa700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460aa700(void)

{
  if ((DAT_14cae01f7 & 2) == 0) {
    DAT_14cae01f7 = DAT_14cae01f7 | 2;
    _DAT_14cae0198 = L"TGPUSkinCacheCS<(1 * 32 + 1 * 16 + 1 * 4 + 2)>";
    _DAT_14cae01b0 = FUN_146826540;
    _DAT_14cae01b8 = FUN_146825d77;
    _DAT_14cae01c0 = FUN_146825fd6;
    _DAT_14cae01c8 = FUN_1407e02ea;
    _DAT_14cae01d0 = FUN_146826273;
    _DAT_14cae01a8 = FUN_147ada11e;
    _DAT_14cae01e8 = 0xffffffff00000160;
    _DAT_14cae01f0 = 8;
    DAT_14cae01f4 = 0;
    _DAT_14cae01d8 = &LAB_147ada148;
    FUN_1460aa7ce();
    FUN_1407e00cc(&DAT_14cae0190);
    return;
  }
  return;
}



// FUNCTION 1460aa7ce FUN_1460aa7ce body=133 status=ok
// SIG undefined FUN_1460aa7ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460aa7ce(void)

{
  _DAT_14cae2f48 = L"BASE";
  DAT_14cae2f72 = 4;
  FUN_14149c7e8();
  _DAT_14cae2f58 = DAT_14cae01a0;
  _DAT_14cae2f50 = &DAT_14cae25e0;
  _DAT_14cae2f60 = &LAB_14682652b;
  DAT_14cae01a0 = &DAT_14cae2f48;
  DAT_14cae01f5 = DAT_14cae01f5 + '\x01';
  _DAT_14cae2f68 = 0x100000000;
  if (DAT_14cae2644 != '\0') {
    DAT_14cae01f6 = DAT_14cae01f6 + '\x01';
  }
  return;
}



// FUNCTION 1460aa854 FUN_1460aa854 body=284 status=ok
// SIG undefined FUN_1460aa854(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460aa854(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae03c8) {
    FUN_144b3d300(&DAT_14cae03c8);
    if (DAT_14cae03c8 == -1) {
      FUN_1460aa970();
      FUN_140db5666(&DAT_14cae0320,0,&DAT_14cae02b8,
                    L"TGPUSkinCacheCS<(0 * 32 + 0 * 16 + 2 * 4 + 0)>",
                    L"/Engine/Private/GpuSkinCacheComputeShader.usf",L"SkinCacheUpdateBatchCS",5,1,
                    FUN_147ada24c,FUN_147ada224,&LAB_1463d097a,&LAB_147ada220,&LAB_14712ac0c,
                    &LAB_14712ac08,0x160,0);
      _DAT_14cae0320 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143512261);
      _Init_thread_footer(&DAT_14cae03c8);
    }
  }
  return &DAT_14cae0320;
}



// FUNCTION 1460aa970 FUN_1460aa970 body=205 status=ok
// SIG undefined FUN_1460aa970(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460aa970(void)

{
  if ((DAT_14cae031f & 2) == 0) {
    DAT_14cae031f = DAT_14cae031f | 2;
    _DAT_14cae02c0 = L"TGPUSkinCacheCS<(0 * 32 + 0 * 16 + 2 * 4 + 0)>";
    _DAT_14cae02d8 = FUN_146826540;
    _DAT_14cae02e0 = FUN_146825d77;
    _DAT_14cae02e8 = FUN_146825fd6;
    _DAT_14cae02f0 = FUN_1407e02ea;
    _DAT_14cae02f8 = FUN_146826273;
    _DAT_14cae02d0 = FUN_147ada1f2;
    _DAT_14cae0310 = 0xffffffff00000160;
    _DAT_14cae0318 = 8;
    DAT_14cae031c = 0;
    _DAT_14cae0300 = &LAB_147ada21c;
    FUN_1460aaa3e();
    FUN_1407e00cc(&DAT_14cae02b8);
    return;
  }
  return;
}



// FUNCTION 1460aaa3e FUN_1460aaa3e body=133 status=ok
// SIG undefined FUN_1460aaa3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460aaa3e(void)

{
  _DAT_14cae2f78 = L"BASE";
  DAT_14cae2fa2 = 4;
  FUN_14149c7e8();
  _DAT_14cae2f88 = DAT_14cae02c8;
  _DAT_14cae2f80 = &DAT_14cae25e0;
  _DAT_14cae2f90 = &LAB_14682652b;
  DAT_14cae02c8 = &DAT_14cae2f78;
  DAT_14cae031d = DAT_14cae031d + '\x01';
  _DAT_14cae2f98 = 0x100000000;
  if (DAT_14cae2644 != '\0') {
    DAT_14cae031e = DAT_14cae031e + '\x01';
  }
  return;
}



// FUNCTION 1460aaac4 FUN_1460aaac4 body=284 status=ok
// SIG undefined FUN_1460aaac4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460aaac4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae04f0) {
    FUN_144b3d300(&DAT_14cae04f0);
    if (DAT_14cae04f0 == -1) {
      FUN_1460aabe0();
      FUN_140db5666(&DAT_14cae0448,0,&DAT_14cae03e0,
                    L"TGPUSkinCacheCS<(0 * 32 + 0 * 16 + 2 * 4 + 1)>",
                    L"/Engine/Private/GpuSkinCacheComputeShader.usf",L"SkinCacheUpdateBatchCS",5,1,
                    FUN_147ada320,FUN_147ada2f8,&LAB_1463d0982,&LAB_147ada2f4,&LAB_14712ac0c,
                    &LAB_14712ac08,0x160,0);
      _DAT_14cae0448 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14351226d);
      _Init_thread_footer(&DAT_14cae04f0);
    }
  }
  return &DAT_14cae0448;
}



// FUNCTION 1460aabe0 FUN_1460aabe0 body=205 status=ok
// SIG undefined FUN_1460aabe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460aabe0(void)

{
  if ((DAT_14cae0447 & 2) == 0) {
    DAT_14cae0447 = DAT_14cae0447 | 2;
    _DAT_14cae03e8 = L"TGPUSkinCacheCS<(0 * 32 + 0 * 16 + 2 * 4 + 1)>";
    _DAT_14cae0400 = FUN_146826540;
    _DAT_14cae0408 = FUN_146825d77;
    _DAT_14cae0410 = FUN_146825fd6;
    _DAT_14cae0418 = FUN_1407e02ea;
    _DAT_14cae0420 = FUN_146826273;
    _DAT_14cae03f8 = FUN_147ada2c6;
    _DAT_14cae0438 = 0xffffffff00000160;
    _DAT_14cae0440 = 8;
    DAT_14cae0444 = 0;
    _DAT_14cae0428 = &LAB_147ada2f0;
    FUN_1460aacae();
    FUN_1407e00cc(&DAT_14cae03e0);
    return;
  }
  return;
}



// FUNCTION 1460aacae FUN_1460aacae body=133 status=ok
// SIG undefined FUN_1460aacae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460aacae(void)

{
  _DAT_14cae2fa8 = L"BASE";
  DAT_14cae2fd2 = 4;
  FUN_14149c7e8();
  _DAT_14cae2fb8 = DAT_14cae03f0;
  _DAT_14cae2fb0 = &DAT_14cae25e0;
  _DAT_14cae2fc0 = &LAB_14682652b;
  DAT_14cae03f0 = &DAT_14cae2fa8;
  DAT_14cae0445 = DAT_14cae0445 + '\x01';
  _DAT_14cae2fc8 = 0x100000000;
  if (DAT_14cae2644 != '\0') {
    DAT_14cae0446 = DAT_14cae0446 + '\x01';
  }
  return;
}



// FUNCTION 1460aad34 FUN_1460aad34 body=284 status=ok
// SIG undefined FUN_1460aad34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460aad34(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae0618) {
    FUN_144b3d300(&DAT_14cae0618);
    if (DAT_14cae0618 == -1) {
      FUN_1460aae50();
      FUN_140db5666(&DAT_14cae0570,0,&DAT_14cae0508,
                    L"TGPUSkinCacheCS<(0 * 32 + 0 * 16 + 2 * 4 + 2)>",
                    L"/Engine/Private/GpuSkinCacheComputeShader.usf",L"SkinCacheUpdateBatchCS",5,1,
                    FUN_147ada3f4,FUN_147ada3cc,&LAB_1463d098a,&LAB_147ada3c8,&LAB_14712ac0c,
                    &LAB_14712ac08,0x160,0);
      _DAT_14cae0570 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143512279);
      _Init_thread_footer(&DAT_14cae0618);
    }
  }
  return &DAT_14cae0570;
}



// FUNCTION 1460aae50 FUN_1460aae50 body=205 status=ok
// SIG undefined FUN_1460aae50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460aae50(void)

{
  if ((DAT_14cae056f & 2) == 0) {
    DAT_14cae056f = DAT_14cae056f | 2;
    _DAT_14cae0510 = L"TGPUSkinCacheCS<(0 * 32 + 0 * 16 + 2 * 4 + 2)>";
    _DAT_14cae0528 = FUN_146826540;
    _DAT_14cae0530 = FUN_146825d77;
    _DAT_14cae0538 = FUN_146825fd6;
    _DAT_14cae0540 = FUN_1407e02ea;
    _DAT_14cae0548 = FUN_146826273;
    _DAT_14cae0520 = FUN_147ada39a;
    _DAT_14cae0560 = 0xffffffff00000160;
    _DAT_14cae0568 = 8;
    DAT_14cae056c = 0;
    _DAT_14cae0550 = &LAB_147ada3c4;
    FUN_1460aaf1e();
    FUN_1407e00cc(&DAT_14cae0508);
    return;
  }
  return;
}



// FUNCTION 1460aaf1e FUN_1460aaf1e body=133 status=ok
// SIG undefined FUN_1460aaf1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460aaf1e(void)

{
  _DAT_14cae2fd8 = L"BASE";
  DAT_14cae3002 = 4;
  FUN_14149c7e8();
  _DAT_14cae2fe8 = DAT_14cae0518;
  _DAT_14cae2fe0 = &DAT_14cae25e0;
  _DAT_14cae2ff0 = &LAB_14682652b;
  DAT_14cae0518 = &DAT_14cae2fd8;
  DAT_14cae056d = DAT_14cae056d + '\x01';
  _DAT_14cae2ff8 = 0x100000000;
  if (DAT_14cae2644 != '\0') {
    DAT_14cae056e = DAT_14cae056e + '\x01';
  }
  return;
}



// FUNCTION 1460aafa4 FUN_1460aafa4 body=284 status=ok
// SIG undefined FUN_1460aafa4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460aafa4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae0868) {
    FUN_144b3d300(&DAT_14cae0868);
    if (DAT_14cae0868 == -1) {
      FUN_1460ab0c0();
      FUN_140db5666(&DAT_14cae07c0,0,&DAT_14cae0758,L"FRecomputeTangentsPerTrianglePassCS<1>",
                    L"/Engine/Private/RecomputeTangentsPerTrianglePass.usf",L"MainCS",5,1,
                    FUN_147ada570,FUN_147ada548,&LAB_1463d099a,&LAB_147ada544,&LAB_14712ac0c,
                    &LAB_14712ac08,0x130,0);
      _DAT_14cae07c0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143512291);
      _Init_thread_footer(&DAT_14cae0868);
    }
  }
  return &DAT_14cae07c0;
}



// FUNCTION 1460ab0c0 FUN_1460ab0c0 body=205 status=ok
// SIG undefined FUN_1460ab0c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ab0c0(void)

{
  if ((DAT_14cae07bf & 2) == 0) {
    DAT_14cae07bf = DAT_14cae07bf | 2;
    _DAT_14cae0760 = L"FRecomputeTangentsPerTrianglePassCS<1>";
    _DAT_14cae0778 = FUN_146826540;
    _DAT_14cae0780 = FUN_146825d77;
    _DAT_14cae0788 = FUN_146825fd6;
    _DAT_14cae0790 = FUN_1407e02ea;
    _DAT_14cae0798 = FUN_146826273;
    _DAT_14cae0770 = FUN_147ada516;
    _DAT_14cae07b0 = 0xffffffff00000130;
    _DAT_14cae07b8 = 8;
    DAT_14cae07bc = 0;
    _DAT_14cae07a0 = &LAB_147ada540;
    FUN_1460ab18e();
    FUN_1407e00cc(&DAT_14cae0758);
    return;
  }
  return;
}



// FUNCTION 1460ab18e FUN_1460ab18e body=133 status=ok
// SIG undefined FUN_1460ab18e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ab18e(void)

{
  _DAT_14cae33a0 = L"BASE";
  DAT_14cae33ca = 4;
  FUN_145cdaf0e();
  _DAT_14cae33b0 = DAT_14cae0768;
  _DAT_14cae33a8 = &DAT_14cae3038;
  _DAT_14cae33b8 = &LAB_14682652b;
  DAT_14cae0768 = &DAT_14cae33a0;
  DAT_14cae07bd = DAT_14cae07bd + '\x01';
  _DAT_14cae33c0 = 0x100000000;
  if (DAT_14cae309c != '\0') {
    DAT_14cae07be = DAT_14cae07be + '\x01';
  }
  return;
}



// FUNCTION 1460ab214 FUN_1460ab214 body=284 status=ok
// SIG undefined FUN_1460ab214(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ab214(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae0990) {
    FUN_144b3d300(&DAT_14cae0990);
    if (DAT_14cae0990 == -1) {
      FUN_1460ab330();
      FUN_140db5666(&DAT_14cae08e8,0,&DAT_14cae0880,L"FRecomputeTangentsPerTrianglePassCS<2>",
                    L"/Engine/Private/RecomputeTangentsPerTrianglePass.usf",L"MainCS",5,1,
                    FUN_147ada618,FUN_147ada5f0,&LAB_1463d09a2,&LAB_147ada5ec,&LAB_14712ac0c,
                    &LAB_14712ac08,0x130,0);
      _DAT_14cae08e8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14351229d);
      _Init_thread_footer(&DAT_14cae0990);
    }
  }
  return &DAT_14cae08e8;
}



// FUNCTION 1460ab330 FUN_1460ab330 body=205 status=ok
// SIG undefined FUN_1460ab330(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ab330(void)

{
  if ((DAT_14cae08e7 & 2) == 0) {
    DAT_14cae08e7 = DAT_14cae08e7 | 2;
    _DAT_14cae0888 = L"FRecomputeTangentsPerTrianglePassCS<2>";
    _DAT_14cae08a0 = FUN_146826540;
    _DAT_14cae08a8 = FUN_146825d77;
    _DAT_14cae08b0 = FUN_146825fd6;
    _DAT_14cae08b8 = FUN_1407e02ea;
    _DAT_14cae08c0 = FUN_146826273;
    _DAT_14cae0898 = FUN_147ada5be;
    _DAT_14cae08d8 = 0xffffffff00000130;
    _DAT_14cae08e0 = 8;
    DAT_14cae08e4 = 0;
    _DAT_14cae08c8 = &LAB_147ada5e8;
    FUN_1460ab3fe();
    FUN_1407e00cc(&DAT_14cae0880);
    return;
  }
  return;
}



// FUNCTION 1460ab3fe FUN_1460ab3fe body=133 status=ok
// SIG undefined FUN_1460ab3fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ab3fe(void)

{
  _DAT_14cae33d0 = L"BASE";
  DAT_14cae33fa = 4;
  FUN_145cdaf0e();
  _DAT_14cae33e0 = DAT_14cae0890;
  _DAT_14cae33d8 = &DAT_14cae3038;
  _DAT_14cae33e8 = &LAB_14682652b;
  DAT_14cae0890 = &DAT_14cae33d0;
  DAT_14cae08e5 = DAT_14cae08e5 + '\x01';
  _DAT_14cae33f0 = 0x100000000;
  if (DAT_14cae309c != '\0') {
    DAT_14cae08e6 = DAT_14cae08e6 + '\x01';
  }
  return;
}



// FUNCTION 1460ab484 FUN_1460ab484 body=284 status=ok
// SIG undefined FUN_1460ab484(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ab484(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae0ab8) {
    FUN_144b3d300(&DAT_14cae0ab8);
    if (DAT_14cae0ab8 == -1) {
      FUN_1460ab5a0();
      FUN_140db5666(&DAT_14cae0a10,0,&DAT_14cae09a8,L"FRecomputeTangentsPerTrianglePassCS<3>",
                    L"/Engine/Private/RecomputeTangentsPerTrianglePass.usf",L"MainCS",5,1,
                    FUN_147ada6c0,FUN_147ada698,&LAB_1463d09aa,&LAB_147ada694,&LAB_14712ac0c,
                    &LAB_14712ac08,0x130,0);
      _DAT_14cae0a10 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1435122a9);
      _Init_thread_footer(&DAT_14cae0ab8);
    }
  }
  return &DAT_14cae0a10;
}



// FUNCTION 1460ab5a0 FUN_1460ab5a0 body=205 status=ok
// SIG undefined FUN_1460ab5a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ab5a0(void)

{
  if ((DAT_14cae0a0f & 2) == 0) {
    DAT_14cae0a0f = DAT_14cae0a0f | 2;
    _DAT_14cae09b0 = L"FRecomputeTangentsPerTrianglePassCS<3>";
    _DAT_14cae09c8 = FUN_146826540;
    _DAT_14cae09d0 = FUN_146825d77;
    _DAT_14cae09d8 = FUN_146825fd6;
    _DAT_14cae09e0 = FUN_1407e02ea;
    _DAT_14cae09e8 = FUN_146826273;
    _DAT_14cae09c0 = FUN_147ada666;
    _DAT_14cae0a00 = 0xffffffff00000130;
    _DAT_14cae0a08 = 8;
    DAT_14cae0a0c = 0;
    _DAT_14cae09f0 = &LAB_147ada690;
    FUN_1460ab66e();
    FUN_1407e00cc(&DAT_14cae09a8);
    return;
  }
  return;
}



// FUNCTION 1460ab66e FUN_1460ab66e body=133 status=ok
// SIG undefined FUN_1460ab66e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ab66e(void)

{
  _DAT_14cae3400 = L"BASE";
  DAT_14cae342a = 4;
  FUN_145cdaf0e();
  _DAT_14cae3410 = DAT_14cae09b8;
  _DAT_14cae3408 = &DAT_14cae3038;
  _DAT_14cae3418 = &LAB_14682652b;
  DAT_14cae09b8 = &DAT_14cae3400;
  DAT_14cae0a0d = DAT_14cae0a0d + '\x01';
  _DAT_14cae3420 = 0x100000000;
  if (DAT_14cae309c != '\0') {
    DAT_14cae0a0e = DAT_14cae0a0e + '\x01';
  }
  return;
}



// FUNCTION 1460ab6f4 FUN_1460ab6f4 body=284 status=ok
// SIG undefined FUN_1460ab6f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ab6f4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae0d08) {
    FUN_144b3d300(&DAT_14cae0d08);
    if (DAT_14cae0d08 == -1) {
      FUN_1460ab810();
      FUN_140db5666(&DAT_14cae0c60,0,&DAT_14cae0bf8,L"FRecomputeTangentsPerVertexPassCS<1>",
                    L"/Engine/Private/RecomputeTangentsPerVertexPass.usf",L"MainCS",5,1,
                    FUN_147ada802,FUN_147ada7da,&LAB_1463d09ba,&LAB_147ada7d6,&LAB_14712ac0c,
                    &LAB_14712ac08,0x110,0);
      _DAT_14cae0c60 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1435122c1);
      _Init_thread_footer(&DAT_14cae0d08);
    }
  }
  return &DAT_14cae0c60;
}



// FUNCTION 1460ab810 FUN_1460ab810 body=205 status=ok
// SIG undefined FUN_1460ab810(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ab810(void)

{
  if ((DAT_14cae0c5f & 2) == 0) {
    DAT_14cae0c5f = DAT_14cae0c5f | 2;
    _DAT_14cae0c00 = L"FRecomputeTangentsPerVertexPassCS<1>";
    _DAT_14cae0c18 = FUN_146826540;
    _DAT_14cae0c20 = FUN_146825d77;
    _DAT_14cae0c28 = FUN_146825fd6;
    _DAT_14cae0c30 = FUN_1407e02ea;
    _DAT_14cae0c38 = FUN_146826273;
    _DAT_14cae0c10 = FUN_147ada7a8;
    _DAT_14cae0c50 = 0xffffffff00000110;
    _DAT_14cae0c58 = 8;
    DAT_14cae0c5c = 0;
    _DAT_14cae0c40 = &LAB_147ada7d2;
    FUN_1460ab8de();
    FUN_1407e00cc(&DAT_14cae0bf8);
    return;
  }
  return;
}



// FUNCTION 1460ab8de FUN_1460ab8de body=133 status=ok
// SIG undefined FUN_1460ab8de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ab8de(void)

{
  _DAT_14cae36a8 = L"BASE";
  DAT_14cae36d2 = 4;
  FUN_145d511a2();
  _DAT_14cae36b8 = DAT_14cae0c08;
  _DAT_14cae36b0 = &DAT_14cae3460;
  _DAT_14cae36c0 = &LAB_14682652b;
  DAT_14cae0c08 = &DAT_14cae36a8;
  DAT_14cae0c5d = DAT_14cae0c5d + '\x01';
  _DAT_14cae36c8 = 0x100000000;
  if (DAT_14cae34c4 != '\0') {
    DAT_14cae0c5e = DAT_14cae0c5e + '\x01';
  }
  return;
}



// FUNCTION 1460ab964 FUN_1460ab964 body=284 status=ok
// SIG undefined FUN_1460ab964(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ab964(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb037a8) {
    FUN_144b3d300(&DAT_14cb037a8);
    if (DAT_14cb037a8 == -1) {
      FUN_1460aba80();
      FUN_140db5666(&DAT_14cb03700,0,&DAT_14cb03698,L"FScreenFromSlice0PS",
                    L"/Engine/Private/ScreenPixelShader.usf",L"Main",3,1,FUN_147cf11b8,FUN_147cf1190
                    ,FUN_1463fe404,&LAB_147cf118c,&LAB_14712ac0c,&LAB_14712ac08,0xe8,0);
      _DAT_14cb03700 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1436a4ea5);
      _Init_thread_footer(&DAT_14cb037a8);
    }
  }
  return &DAT_14cb03700;
}



// FUNCTION 1460aba80 FUN_1460aba80 body=205 status=ok
// SIG undefined FUN_1460aba80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460aba80(void)

{
  if ((DAT_14cb036ff & 2) == 0) {
    DAT_14cb036ff = DAT_14cb036ff | 2;
    _DAT_14cb036a0 = L"FScreenFromSlice0PS";
    _DAT_14cb036b8 = FUN_146826540;
    _DAT_14cb036c0 = FUN_146825d77;
    _DAT_14cb036c8 = FUN_146825fd6;
    _DAT_14cb036d0 = FUN_1407e02ea;
    _DAT_14cb036d8 = FUN_146826273;
    _DAT_14cb036b0 = FUN_147cf115e;
    _DAT_14cb036f0 = 0xffffffff000000e8;
    _DAT_14cb036f8 = 8;
    DAT_14cb036fc = 0;
    _DAT_14cb036e0 = &LAB_147cf1188;
    FUN_1460abb4e();
    FUN_1407e00cc(&DAT_14cb03698);
    return;
  }
  return;
}



// FUNCTION 1460abb4e FUN_1460abb4e body=133 status=ok
// SIG undefined FUN_1460abb4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460abb4e(void)

{
  _DAT_14cb051d8 = L"BASE";
  DAT_14cb05202 = 4;
  FUN_145db0da6();
  _DAT_14cb051e8 = DAT_14cb036a8;
  _DAT_14cb051e0 = &DAT_14cb03570;
  _DAT_14cb051f0 = &LAB_14682652b;
  DAT_14cb036a8 = &DAT_14cb051d8;
  DAT_14cb036fd = DAT_14cb036fd + '\x01';
  _DAT_14cb051f8 = 0x100000000;
  if (DAT_14cb035d4 != '\0') {
    DAT_14cb036fe = DAT_14cb036fe + '\x01';
  }
  return;
}



// FUNCTION 1460abbd4 FUN_1460abbd4 body=284 status=ok
// SIG undefined FUN_1460abbd4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460abbd4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0a2f8) {
    FUN_144b3d300(&DAT_14cb0a2f8);
    if (DAT_14cb0a2f8 == -1) {
      FUN_1460abcf0();
      FUN_140db5666(&DAT_14cb0a250,0,&DAT_14cb0a1e8,L"FStereoLayerPS_External",
                    L"/Engine/Private/StereoLayerShader.usf",L"MainPS_TextureExternal",3,1,
                    FUN_147d5d78c,FUN_147d5d75e,&LAB_147d5d75a,&LAB_147d5d756,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf0,0);
      _DAT_14cb0a250 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14371ada3);
      _Init_thread_footer(&DAT_14cb0a2f8);
    }
  }
  return &DAT_14cb0a250;
}



// FUNCTION 1460abcf0 FUN_1460abcf0 body=205 status=ok
// SIG undefined FUN_1460abcf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460abcf0(void)

{
  if ((DAT_14cb0a24f & 2) == 0) {
    DAT_14cb0a24f = DAT_14cb0a24f | 2;
    _DAT_14cb0a1f0 = L"FStereoLayerPS_External";
    _DAT_14cb0a208 = FUN_146826540;
    _DAT_14cb0a210 = FUN_146825d77;
    _DAT_14cb0a218 = FUN_146825fd6;
    _DAT_14cb0a220 = FUN_1407e02ea;
    _DAT_14cb0a228 = FUN_146826273;
    _DAT_14cb0a200 = FUN_147d5d728;
    _DAT_14cb0a240 = 0xffffffff000000f0;
    _DAT_14cb0a248 = 8;
    DAT_14cb0a24c = 0;
    _DAT_14cb0a230 = &LAB_147d5d752;
    FUN_1460abdbe();
    FUN_1407e00cc(&DAT_14cb0a1e8);
    return;
  }
  return;
}



// FUNCTION 1460abdbe FUN_1460abdbe body=133 status=ok
// SIG undefined FUN_1460abdbe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460abdbe(void)

{
  _DAT_14cb0a888 = L"BASE";
  DAT_14cb0a8b2 = 4;
  FUN_145e05f70();
  _DAT_14cb0a898 = DAT_14cb0a1f8;
  _DAT_14cb0a890 = &DAT_14cb09f28;
  _DAT_14cb0a8a0 = &LAB_14682652b;
  DAT_14cb0a1f8 = &DAT_14cb0a888;
  DAT_14cb0a24d = DAT_14cb0a24d + '\x01';
  _DAT_14cb0a8a8 = 0x100000000;
  if (DAT_14cb09f8c != '\0') {
    DAT_14cb0a24e = DAT_14cb0a24e + '\x01';
  }
  return;
}



// FUNCTION 1460abe44 FUN_1460abe44 body=284 status=ok
// SIG undefined FUN_1460abe44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460abe44(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0d7d0) {
    FUN_144b3d300(&DAT_14cb0d7d0);
    if (DAT_14cb0d7d0 == -1) {
      FUN_1460abf60();
      FUN_140db5666(&DAT_14cb0d728,0,&DAT_14cb0d6c0,L"FUpdateTexture2DSubresourceCS_Int32",
                    L"/Engine/Private/UpdateTextureShaders.usf",L"TUpdateTexture2DSubresourceCS",5,1
                    ,FUN_147d8a39c,FUN_147d8a374,&LAB_147d8a35c,&LAB_147d8a358,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf8,0);
      _DAT_14cb0d728 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14376c9ac);
      _Init_thread_footer(&DAT_14cb0d7d0);
    }
  }
  return &DAT_14cb0d728;
}



// FUNCTION 1460abf60 FUN_1460abf60 body=205 status=ok
// SIG undefined FUN_1460abf60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460abf60(void)

{
  if ((DAT_14cb0d727 & 2) == 0) {
    DAT_14cb0d727 = DAT_14cb0d727 | 2;
    _DAT_14cb0d6c8 = L"FUpdateTexture2DSubresourceCS_Int32";
    _DAT_14cb0d6e0 = FUN_146826540;
    _DAT_14cb0d6e8 = FUN_146825d77;
    _DAT_14cb0d6f0 = FUN_146825fd6;
    _DAT_14cb0d6f8 = FUN_1407e02ea;
    _DAT_14cb0d700 = FUN_146826273;
    _DAT_14cb0d6d8 = FUN_147d8a32a;
    _DAT_14cb0d718 = 0xffffffff000000f8;
    _DAT_14cb0d720 = 8;
    DAT_14cb0d724 = 0;
    _DAT_14cb0d708 = &LAB_147d8a354;
    FUN_1460ac02e();
    FUN_1407e00cc(&DAT_14cb0d6c0);
    return;
  }
  return;
}



// FUNCTION 1460ac02e FUN_1460ac02e body=133 status=ok
// SIG undefined FUN_1460ac02e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ac02e(void)

{
  _DAT_14cb0eee8 = L"BASE";
  DAT_14cb0ef12 = 4;
  FUN_145d5a994();
  _DAT_14cb0eef8 = DAT_14cb0d6d0;
  _DAT_14cb0eef0 = &DAT_14cb0d400;
  _DAT_14cb0ef00 = &LAB_14682652b;
  DAT_14cb0d6d0 = &DAT_14cb0eee8;
  DAT_14cb0d725 = DAT_14cb0d725 + '\x01';
  _DAT_14cb0ef08 = 0x100000000;
  if (DAT_14cb0d464 != '\0') {
    DAT_14cb0d726 = DAT_14cb0d726 + '\x01';
  }
  return;
}



// FUNCTION 1460ac0b4 FUN_1460ac0b4 body=284 status=ok
// SIG undefined FUN_1460ac0b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ac0b4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0d8f8) {
    FUN_144b3d300(&DAT_14cb0d8f8);
    if (DAT_14cb0d8f8 == -1) {
      FUN_1460ac1d0();
      FUN_140db5666(&DAT_14cb0d850,0,&DAT_14cb0d7e8,L"FUpdateTexture2DSubresourceCS_Uint32",
                    L"/Engine/Private/UpdateTextureShaders.usf",L"TUpdateTexture2DSubresourceCS",5,1
                    ,FUN_147d8a44a,FUN_147d8a422,&LAB_147d8a40a,&LAB_147d8a406,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf8,0);
      _DAT_14cb0d850 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14376c9b8);
      _Init_thread_footer(&DAT_14cb0d8f8);
    }
  }
  return &DAT_14cb0d850;
}



// FUNCTION 1460ac1d0 FUN_1460ac1d0 body=205 status=ok
// SIG undefined FUN_1460ac1d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ac1d0(void)

{
  if ((DAT_14cb0d84f & 2) == 0) {
    DAT_14cb0d84f = DAT_14cb0d84f | 2;
    _DAT_14cb0d7f0 = L"FUpdateTexture2DSubresourceCS_Uint32";
    _DAT_14cb0d808 = FUN_146826540;
    _DAT_14cb0d810 = FUN_146825d77;
    _DAT_14cb0d818 = FUN_146825fd6;
    _DAT_14cb0d820 = FUN_1407e02ea;
    _DAT_14cb0d828 = FUN_146826273;
    _DAT_14cb0d800 = FUN_147d8a3d8;
    _DAT_14cb0d840 = 0xffffffff000000f8;
    _DAT_14cb0d848 = 8;
    DAT_14cb0d84c = 0;
    _DAT_14cb0d830 = &LAB_147d8a402;
    FUN_1460ac29e();
    FUN_1407e00cc(&DAT_14cb0d7e8);
    return;
  }
  return;
}



// FUNCTION 1460ac29e FUN_1460ac29e body=133 status=ok
// SIG undefined FUN_1460ac29e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ac29e(void)

{
  _DAT_14cb0ef18 = L"BASE";
  DAT_14cb0ef42 = 4;
  FUN_145d5a994();
  _DAT_14cb0ef28 = DAT_14cb0d7f8;
  _DAT_14cb0ef20 = &DAT_14cb0d400;
  _DAT_14cb0ef30 = &LAB_14682652b;
  DAT_14cb0d7f8 = &DAT_14cb0ef18;
  DAT_14cb0d84d = DAT_14cb0d84d + '\x01';
  _DAT_14cb0ef38 = 0x100000000;
  if (DAT_14cb0d464 != '\0') {
    DAT_14cb0d84e = DAT_14cb0d84e + '\x01';
  }
  return;
}



// FUNCTION 1460ac324 FUN_1460ac324 body=284 status=ok
// SIG undefined FUN_1460ac324(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ac324(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8ec78) {
    FUN_144b3d300(&DAT_14cb8ec78);
    if (DAT_14cb8ec78 == -1) {
      FUN_1460ac440();
      FUN_140db5666(&DAT_14cb8ebd0,0,&DAT_14cb8eb68,L"FRenoirPathPS",
                    L"/Plugin/CoherentRenderingPlugin/Private/CohPathPS.usf",L"PathPS",3,1,
                    FUN_1489c091e,FUN_1489c08f6,&LAB_1489c08f2,&LAB_1489c08ee,&LAB_14712ac0c,
                    &LAB_14712ac08,0x110,0);
      _DAT_14cb8ebd0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143e7846e);
      _Init_thread_footer(&DAT_14cb8ec78);
    }
  }
  return &DAT_14cb8ebd0;
}



// FUNCTION 1460ac440 FUN_1460ac440 body=205 status=ok
// SIG undefined FUN_1460ac440(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ac440(void)

{
  if ((DAT_14cb8ebcf & 2) == 0) {
    DAT_14cb8ebcf = DAT_14cb8ebcf | 2;
    _DAT_14cb8eb70 = L"FRenoirPathPS";
    _DAT_14cb8eb88 = FUN_146826540;
    _DAT_14cb8eb90 = FUN_146825d77;
    _DAT_14cb8eb98 = FUN_146825fd6;
    _DAT_14cb8eba0 = FUN_1407e02ea;
    _DAT_14cb8eba8 = FUN_146826273;
    _DAT_14cb8eb80 = FUN_1489c08c0;
    _DAT_14cb8ebc0 = 0xffffffff00000110;
    _DAT_14cb8ebc8 = 8;
    DAT_14cb8ebcc = 0;
    _DAT_14cb8ebb0 = &LAB_1489c08ea;
    FUN_1460ac50e();
    FUN_1407e00cc(&DAT_14cb8eb68);
    return;
  }
  return;
}



// FUNCTION 1460ac50e FUN_1460ac50e body=133 status=ok
// SIG undefined FUN_1460ac50e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ac50e(void)

{
  _DAT_14cb8ff10 = L"BASE";
  DAT_14cb8ff3a = 4;
  FUN_1459cac6e();
  _DAT_14cb8ff20 = DAT_14cb8eb78;
  _DAT_14cb8ff18 = &DAT_14cb8fd58;
  _DAT_14cb8ff28 = &LAB_14682652b;
  DAT_14cb8eb78 = &DAT_14cb8ff10;
  DAT_14cb8ebcd = DAT_14cb8ebcd + '\x01';
  _DAT_14cb8ff30 = 0x100000000;
  if (DAT_14cb8fdbc != '\0') {
    DAT_14cb8ebce = DAT_14cb8ebce + '\x01';
  }
  return;
}



// FUNCTION 1460ac594 FUN_1460ac594 body=284 status=ok
// SIG undefined FUN_1460ac594(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ac594(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8f930) {
    FUN_144b3d300(&DAT_14cb8f930);
    if (DAT_14cb8f930 == -1) {
      FUN_1460ac6b0();
      FUN_140db5666(&DAT_14cb8f888,0,&DAT_14cb8f820,L"FRenoirClippingPS",
                    L"/Plugin/CoherentRenderingPlugin/Private/CohClipMaskPS.usf",L"ClipMaskPS",3,1,
                    FUN_1489c107e,FUN_1489c1056,&LAB_1489c1052,&LAB_1489c104e,&LAB_14712ac0c,
                    &LAB_14712ac08,0x110,0);
      _DAT_14cb8f888 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143e784f2);
      _Init_thread_footer(&DAT_14cb8f930);
    }
  }
  return &DAT_14cb8f888;
}



// FUNCTION 1460ac6b0 FUN_1460ac6b0 body=205 status=ok
// SIG undefined FUN_1460ac6b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ac6b0(void)

{
  if ((DAT_14cb8f887 & 2) == 0) {
    DAT_14cb8f887 = DAT_14cb8f887 | 2;
    _DAT_14cb8f828 = L"FRenoirClippingPS";
    _DAT_14cb8f840 = FUN_146826540;
    _DAT_14cb8f848 = FUN_146825d77;
    _DAT_14cb8f850 = FUN_146825fd6;
    _DAT_14cb8f858 = FUN_1407e02ea;
    _DAT_14cb8f860 = FUN_146826273;
    _DAT_14cb8f838 = FUN_1489c1020;
    _DAT_14cb8f878 = 0xffffffff00000110;
    _DAT_14cb8f880 = 8;
    DAT_14cb8f884 = 0;
    _DAT_14cb8f868 = &LAB_1489c104a;
    FUN_1460ac77e();
    FUN_1407e00cc(&DAT_14cb8f820);
    return;
  }
  return;
}



// FUNCTION 1460ac77e FUN_1460ac77e body=133 status=ok
// SIG undefined FUN_1460ac77e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ac77e(void)

{
  _DAT_14cb90120 = L"BASE";
  DAT_14cb9014a = 4;
  FUN_1459cac6e();
  _DAT_14cb90130 = DAT_14cb8f830;
  _DAT_14cb90128 = &DAT_14cb8fd58;
  _DAT_14cb90138 = &LAB_14682652b;
  DAT_14cb8f830 = &DAT_14cb90120;
  DAT_14cb8f885 = DAT_14cb8f885 + '\x01';
  _DAT_14cb90140 = 0x100000000;
  if (DAT_14cb8fdbc != '\0') {
    DAT_14cb8f886 = DAT_14cb8f886 + '\x01';
  }
  return;
}



// FUNCTION 1460ac804 FUN_1460ac804 body=284 status=ok
// SIG undefined FUN_1460ac804(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460ac804(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8fa58) {
    FUN_144b3d300(&DAT_14cb8fa58);
    if (DAT_14cb8fa58 == -1) {
      FUN_1460ac920();
      FUN_140db5666(&DAT_14cb8f9b0,0,&DAT_14cb8f948,L"FRenoirFillPathAtlasVS",
                    L"/Plugin/CoherentRenderingPlugin/Private/CohFillPathAtlasVS.usf",
                    L"FillPathAtlasVS",0,1,FUN_1489c1152,FUN_1489c10f4,&LAB_1489c10f0,&LAB_1489c10ec
                    ,&LAB_14712ac0c,&LAB_14712ac08,0xe8,0);
      _DAT_14cb8f9b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143e784fe);
      _Init_thread_footer(&DAT_14cb8fa58);
    }
  }
  return &DAT_14cb8f9b0;
}



// FUNCTION 1460ac920 FUN_1460ac920 body=205 status=ok
// SIG undefined FUN_1460ac920(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ac920(void)

{
  if ((DAT_14cb8f9af & 2) == 0) {
    DAT_14cb8f9af = DAT_14cb8f9af | 2;
    _DAT_14cb8f950 = L"FRenoirFillPathAtlasVS";
    _DAT_14cb8f968 = FUN_146826540;
    _DAT_14cb8f970 = FUN_146825d77;
    _DAT_14cb8f978 = FUN_146825fd6;
    _DAT_14cb8f980 = FUN_1407e02ea;
    _DAT_14cb8f988 = FUN_146826273;
    _DAT_14cb8f960 = FUN_1489c10be;
    _DAT_14cb8f9a0 = 0xffffffff000000e8;
    _DAT_14cb8f9a8 = 8;
    DAT_14cb8f9ac = 0;
    _DAT_14cb8f990 = &LAB_1489c10e8;
    FUN_1460ac9ee();
    FUN_1407e00cc(&DAT_14cb8f948);
    return;
  }
  return;
}



// FUNCTION 1460ac9ee FUN_1460ac9ee body=133 status=ok
// SIG undefined FUN_1460ac9ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460ac9ee(void)

{
  _DAT_14cb90150 = L"BASE";
  DAT_14cb9017a = 4;
  FUN_145c7a2e6();
  _DAT_14cb90160 = DAT_14cb8f958;
  _DAT_14cb90158 = &DAT_14cb8fc60;
  _DAT_14cb90168 = &LAB_14682652b;
  DAT_14cb8f958 = &DAT_14cb90150;
  DAT_14cb8f9ad = DAT_14cb8f9ad + '\x01';
  _DAT_14cb90170 = 0x100000000;
  if (DAT_14cb8fcc4 != '\0') {
    DAT_14cb8f9ae = DAT_14cb8f9ae + '\x01';
  }
  return;
}



// FUNCTION 1460aca74 FUN_1460aca74 body=284 status=ok
// SIG undefined FUN_1460aca74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1460aca74(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8fb80) {
    FUN_144b3d300(&DAT_14cb8fb80);
    if (DAT_14cb8fb80 == -1) {
      FUN_1460acb90();
      FUN_140db5666(&DAT_14cb8fad8,0,&DAT_14cb8fa70,L"FRenoirFillPathAtlasPS",
                    L"/Plugin/CoherentRenderingPlugin/Private/CohNullPS.usf",L"NullPS",3,1,
                    FUN_1489c11ec,FUN_1489c11c4,&LAB_1489c11c0,&LAB_1489c11bc,&LAB_14712ac0c,
                    &LAB_14712ac08,0x110,0);
      _DAT_14cb8fad8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143e7850a);
      _Init_thread_footer(&DAT_14cb8fb80);
    }
  }
  return &DAT_14cb8fad8;
}



// FUNCTION 1460acb90 FUN_1460acb90 body=205 status=ok
// SIG undefined FUN_1460acb90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460acb90(void)

{
  if ((DAT_14cb8fad7 & 2) == 0) {
    DAT_14cb8fad7 = DAT_14cb8fad7 | 2;
    _DAT_14cb8fa78 = L"FRenoirFillPathAtlasPS";
    _DAT_14cb8fa90 = FUN_146826540;
    _DAT_14cb8fa98 = FUN_146825d77;
    _DAT_14cb8faa0 = FUN_146825fd6;
    _DAT_14cb8faa8 = FUN_1407e02ea;
    _DAT_14cb8fab0 = FUN_146826273;
    _DAT_14cb8fa88 = FUN_1489c118e;
    _DAT_14cb8fac8 = 0xffffffff00000110;
    _DAT_14cb8fad0 = 8;
    DAT_14cb8fad4 = 0;
    _DAT_14cb8fab8 = &LAB_1489c11b8;
    FUN_1460acc5e();
    FUN_1407e00cc(&DAT_14cb8fa70);
    return;
  }
  return;
}



// FUNCTION 1460acc5e FUN_1460acc5e body=133 status=ok
// SIG undefined FUN_1460acc5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1460acc5e(void)

{
  _DAT_14cb90180 = L"BASE";
  DAT_14cb901aa = 4;
  FUN_1459cac6e();
  _DAT_14cb90190 = DAT_14cb8fa80;
  _DAT_14cb90188 = &DAT_14cb8fd58;
  _DAT_14cb90198 = &LAB_14682652b;
  DAT_14cb8fa80 = &DAT_14cb90180;
  DAT_14cb8fad5 = DAT_14cb8fad5 + '\x01';
  _DAT_14cb901a0 = 0x100000000;
  if (DAT_14cb8fdbc != '\0') {
    DAT_14cb8fad6 = DAT_14cb8fad6 + '\x01';
  }
  return;
}



// FUNCTION 1460acce4 FUN_1460acce4 body=113 status=ok
// SIG undefined FUN_1460acce4(void)

void FUN_1460acce4(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  code *local_28;
  undefined4 local_20;
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)FUN_1448c2e86();
  (**(code **)(*plVar1 + 0x28))(plVar1,DAT_14ca855e0,param_1 + 0x10);
  local_28 = FUN_145bcd98c;
  local_20 = 0;
  FUN_1460acd56(local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460acd56 FUN_1460acd56 body=196 status=ok
// SIG undefined FUN_1460acd56(void)

undefined8 FUN_1460acd56(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14bcdd850;
  puVar3[3] = param_2;
  puVar3[4] = uVar2;
  *(undefined4 *)(puVar3 + 5) = uVar1;
  FUN_1448b6402(&DAT_14c872cf8,param_1,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460ace1c FUN_1460ace1c body=171 status=ok
// SIG undefined FUN_1460ace1c(void)

bool FUN_1460ace1c(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

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
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
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



// FUNCTION 1460acec8 FUN_1460acec8 body=456 status=ok
// SIG undefined FUN_1460acec8(void)

void FUN_1460acec8(undefined8 param_1,undefined4 param_2,undefined8 *param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  void *_Src;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *local_a0;
  void **local_98;
  undefined8 *local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1459ca5e2(param_1,&local_a8,param_2);
  if (local_a8 != 0) {
    FUN_1460ad092(local_a8 + 0x58,param_3);
    if (param_4 != '\0') {
      FUN_14131d034(param_1,&local_b8,param_3);
      if (*(char *)(local_b8 + 0x100) == '\x01') {
        plVar2 = *(longlong **)(local_a8 + 0x38);
        local_88 = (void *)0x0;
        local_80 = *(int *)(param_3 + 1);
        lVar3 = (longlong)local_80;
        _Src = (void *)*param_3;
        if (lVar3 == 0) {
          local_7c = 0;
        }
        else {
          FUN_1446dd670(&local_88,local_80,0);
          memcpy(local_88,_Src,lVar3 * 2);
        }
        local_90 = &local_78;
        local_58 = 0;
        local_50 = 0;
        local_78 = 0;
        uStack_70 = 0;
        local_4c = 0xffffffff00000080;
        local_44 = 0;
        local_38 = 0;
        local_30 = 0;
        local_98 = &local_88;
        FUN_1415d42fa(&local_78);
        (**(code **)(*plVar2 + 0x1b0))(plVar2,&local_78);
        local_30 = 0;
        if (local_38 != 0) {
          FUN_1400020a8();
        }
        FUN_1408910a4(&local_78);
        if (local_88 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_b0 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar1 = (int *)((longlong)local_b0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_b0 + 0x10))(local_b0);
          }
        }
      }
    }
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_a0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)local_a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_a0 + 0x10))(local_a0);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1460ad092 FUN_1460ad092 body=264 status=ok
// SIG undefined FUN_1460ad092(void)

void FUN_1460ad092(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = (int)param_2[1];
    if (iVar2 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    iVar2 = FUN_144a49b4a(iVar1,puVar4);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      iVar1 = (int)param_2[1];
LAB_1460ad104:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar2 * 0x28);
      if ((int)plVar3[1] == iVar1) {
        if (1 < iVar1) {
          lVar8 = 0;
          do {
            uVar5 = *(ushort *)(*plVar3 + lVar8);
            uVar6 = (ulonglong)uVar5;
            uVar7 = *(ushort *)(*param_2 + lVar8);
            if (uVar5 == uVar7) {
              if (uVar5 == 0) break;
            }
            else {
              if (0x7f < (uVar7 | uVar5)) goto LAB_1460ad15d;
              uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
              uVar9 = (ulonglong)uVar7;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[uVar9]) goto LAB_1460ad15d;
            }
            lVar8 = lVar8 + 2;
          } while( true );
        }
        goto LAB_1460ad163;
      }
      if ((int)plVar3[1] + iVar1 == 1) goto LAB_1460ad163;
      goto LAB_1460ad180;
    }
  }
  return;
LAB_1460ad15d:
  if (uVar5 == uVar7) {
LAB_1460ad163:
    FUN_1460ad19a(param_1);
    return;
  }
LAB_1460ad180:
  iVar2 = (int)plVar3[4];
  if (iVar2 == -1) {
    return;
  }
  goto LAB_1460ad104;
}



// FUNCTION 1460ad19a FUN_1460ad19a body=116 status=ok
// SIG undefined FUN_1460ad19a(void)

void FUN_1460ad19a(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x28;
  lVar5 = (longlong)*(int *)(lVar1 + 0x24);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x28 + 0x20);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x20);
  FUN_1460ad20e((longlong)param_2 * 0x28 + *param_1);
  FUN_1460ad25a(param_1,param_2);
  return;
}



// FUNCTION 1460ad20e FUN_1460ad20e body=76 status=ok
// SIG undefined FUN_1460ad20e(void)

void FUN_1460ad20e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}


