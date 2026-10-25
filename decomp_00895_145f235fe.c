// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145f235fe FUN_145f235fe body=216 status=ok
// SIG undefined FUN_145f235fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f235fe(void)

{
  _DAT_14ca57ff0 = L"LightPosition";
  DAT_14ca5801a = FUN_140850cc5();
  _DAT_14ca57ff8 = FUN_140ec6960();
  _DAT_14ca58008 = &LAB_14682652b;
  _DAT_14ca58010 = 0x10000013c;
  _DAT_14ca58018 = 0;
  _DAT_14ca58000 = DAT_14ca51170;
  DAT_14ca51170 = &DAT_14ca57ff0;
  _DAT_14ca57fc0 = L"ShadowSharpen";
  DAT_14ca57fea = FUN_140850cc5();
  _DAT_14ca57fc8 = FUN_140ec6960();
  _DAT_14ca57fd8 = &LAB_14682652b;
  _DAT_14ca57fe0 = 0x100000136;
  _DAT_14ca57fe8 = 0;
  _DAT_14ca57fd0 = DAT_14ca51170;
  DAT_14ca51170 = &DAT_14ca57fc0;
  return;
}



// FUNCTION 145f236d6 FUN_145f236d6 body=284 status=ok
// SIG undefined FUN_145f236d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f236d6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca514c0) {
    FUN_144b3d300(&DAT_14ca514c0);
    if (DAT_14ca514c0 == -1) {
      FUN_145f237f2();
      FUN_140db5666(&DAT_14ca51418,0,&DAT_14ca513b0,L"FShadowProjectionPS1truetruefalse",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472efd18,
                    FUN_1472efcf0,&LAB_1472efcaa,&LAB_1472efca6,&LAB_14712ac0c,&LAB_14712ac08,0x148,
                    0);
      _DAT_14ca51418 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049b92);
      _Init_thread_footer(&DAT_14ca514c0);
    }
  }
  return &DAT_14ca51418;
}



// FUNCTION 145f237f2 FUN_145f237f2 body=210 status=ok
// SIG undefined FUN_145f237f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f237f2(void)

{
  if ((DAT_14ca51417 & 2) == 0) {
    DAT_14ca51417 = DAT_14ca51417 | 2;
    _DAT_14ca513b8 = L"FShadowProjectionPS1truetruefalse";
    _DAT_14ca513d0 = FUN_146826540;
    _DAT_14ca513d8 = FUN_146825d77;
    _DAT_14ca513e0 = FUN_146825fd6;
    _DAT_14ca513e8 = FUN_1407e02ea;
    _DAT_14ca513f0 = FUN_146826273;
    _DAT_14ca513c8 = FUN_1472efc76;
    _DAT_14ca51408 = 0xffffffff00000148;
    _DAT_14ca51410 = 8;
    DAT_14ca51414 = 0;
    _DAT_14ca513f8 = &LAB_1472efca2;
    FUN_145f238c4();
    FUN_145f239b8();
    FUN_1407e00cc(&DAT_14ca513b0);
    return;
  }
  return;
}



// FUNCTION 145f238c4 FUN_145f238c4 body=121 status=ok
// SIG undefined FUN_145f238c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f238c4(void)

{
  FUN_145f2393e();
  _DAT_14ca58140 = L"ProjectionParameters";
  DAT_14ca5816a = FUN_140850cc5();
  _DAT_14ca58148 = FUN_14142e7bc();
  _DAT_14ca58158 = &LAB_14682652b;
  _DAT_14ca58160 = 0x1000000e0;
  _DAT_14ca58168 = 0;
  _DAT_14ca58150 = DAT_14ca513c0;
  DAT_14ca513c0 = &DAT_14ca58140;
  return;
}



// FUNCTION 145f2393e FUN_145f2393e body=121 status=ok
// SIG undefined FUN_145f2393e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2393e(void)

{
  FUN_145f23a3e();
  _DAT_14ca58170 = L"ShadowFadeFraction";
  DAT_14ca5819a = FUN_140850cc5();
  _DAT_14ca58178 = FUN_140ec6960();
  _DAT_14ca58188 = &LAB_14682652b;
  _DAT_14ca58190 = 0x100000130;
  _DAT_14ca58198 = 0;
  _DAT_14ca58180 = DAT_14ca513c0;
  DAT_14ca513c0 = &DAT_14ca58170;
  return;
}



// FUNCTION 145f239b8 FUN_145f239b8 body=133 status=ok
// SIG undefined FUN_145f239b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f239b8(void)

{
  _DAT_14ca58200 = L"BASE";
  DAT_14ca5822a = 4;
  FUN_1411c95a0();
  _DAT_14ca58210 = DAT_14ca513c0;
  _DAT_14ca58208 = &DAT_14ca4ff98;
  _DAT_14ca58218 = &LAB_14682652b;
  DAT_14ca513c0 = &DAT_14ca58200;
  DAT_14ca51415 = DAT_14ca51415 + '\x01';
  _DAT_14ca58220 = 0x100000000;
  if (DAT_14ca4fffc != '\0') {
    DAT_14ca51416 = DAT_14ca51416 + '\x01';
  }
  return;
}



// FUNCTION 145f23a3e FUN_145f23a3e body=216 status=ok
// SIG undefined FUN_145f23a3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f23a3e(void)

{
  _DAT_14ca581d0 = L"LightPosition";
  DAT_14ca581fa = FUN_140850cc5();
  _DAT_14ca581d8 = FUN_140ec6960();
  _DAT_14ca581e8 = &LAB_14682652b;
  _DAT_14ca581f0 = 0x10000013c;
  _DAT_14ca581f8 = 0;
  _DAT_14ca581e0 = DAT_14ca513c0;
  DAT_14ca513c0 = &DAT_14ca581d0;
  _DAT_14ca581a0 = L"ShadowSharpen";
  DAT_14ca581ca = FUN_140850cc5();
  _DAT_14ca581a8 = FUN_140ec6960();
  _DAT_14ca581b8 = &LAB_14682652b;
  _DAT_14ca581c0 = 0x100000136;
  _DAT_14ca581c8 = 0;
  _DAT_14ca581b0 = DAT_14ca513c0;
  DAT_14ca513c0 = &DAT_14ca581a0;
  return;
}



// FUNCTION 145f23b16 FUN_145f23b16 body=284 status=ok
// SIG undefined FUN_145f23b16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f23b16(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca515e8) {
    FUN_144b3d300(&DAT_14ca515e8);
    if (DAT_14ca515e8 == -1) {
      FUN_145f23c32();
      FUN_140db5666(&DAT_14ca51540,0,&DAT_14ca514d8,L"FShadowProjectionPS2truetruefalse",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472efe78,
                    FUN_1472efe50,&LAB_1472efe0a,&LAB_1472efe06,&LAB_14712ac0c,&LAB_14712ac08,0x148,
                    0);
      _DAT_14ca51540 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049b9e);
      _Init_thread_footer(&DAT_14ca515e8);
    }
  }
  return &DAT_14ca51540;
}



// FUNCTION 145f23c32 FUN_145f23c32 body=210 status=ok
// SIG undefined FUN_145f23c32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f23c32(void)

{
  if ((DAT_14ca5153f & 2) == 0) {
    DAT_14ca5153f = DAT_14ca5153f | 2;
    _DAT_14ca514e0 = L"FShadowProjectionPS2truetruefalse";
    _DAT_14ca514f8 = FUN_146826540;
    _DAT_14ca51500 = FUN_146825d77;
    _DAT_14ca51508 = FUN_146825fd6;
    _DAT_14ca51510 = FUN_1407e02ea;
    _DAT_14ca51518 = FUN_146826273;
    _DAT_14ca514f0 = FUN_1472efdd6;
    _DAT_14ca51530 = 0xffffffff00000148;
    _DAT_14ca51538 = 8;
    DAT_14ca5153c = 0;
    _DAT_14ca51520 = &LAB_1472efe02;
    FUN_145f23d04();
    FUN_145f23df8();
    FUN_1407e00cc(&DAT_14ca514d8);
    return;
  }
  return;
}



// FUNCTION 145f23d04 FUN_145f23d04 body=121 status=ok
// SIG undefined FUN_145f23d04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f23d04(void)

{
  FUN_145f23d7e();
  _DAT_14ca58230 = L"ProjectionParameters";
  DAT_14ca5825a = FUN_140850cc5();
  _DAT_14ca58238 = FUN_14142e7bc();
  _DAT_14ca58248 = &LAB_14682652b;
  _DAT_14ca58250 = 0x1000000e0;
  _DAT_14ca58258 = 0;
  _DAT_14ca58240 = DAT_14ca514e8;
  DAT_14ca514e8 = &DAT_14ca58230;
  return;
}



// FUNCTION 145f23d7e FUN_145f23d7e body=121 status=ok
// SIG undefined FUN_145f23d7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f23d7e(void)

{
  FUN_145f23e7e();
  _DAT_14ca58260 = L"ShadowFadeFraction";
  DAT_14ca5828a = FUN_140850cc5();
  _DAT_14ca58268 = FUN_140ec6960();
  _DAT_14ca58278 = &LAB_14682652b;
  _DAT_14ca58280 = 0x100000130;
  _DAT_14ca58288 = 0;
  _DAT_14ca58270 = DAT_14ca514e8;
  DAT_14ca514e8 = &DAT_14ca58260;
  return;
}



// FUNCTION 145f23df8 FUN_145f23df8 body=133 status=ok
// SIG undefined FUN_145f23df8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f23df8(void)

{
  _DAT_14ca582f0 = L"BASE";
  DAT_14ca5831a = 4;
  FUN_1411c95a0();
  _DAT_14ca58300 = DAT_14ca514e8;
  _DAT_14ca582f8 = &DAT_14ca4ff98;
  _DAT_14ca58308 = &LAB_14682652b;
  DAT_14ca514e8 = &DAT_14ca582f0;
  DAT_14ca5153d = DAT_14ca5153d + '\x01';
  _DAT_14ca58310 = 0x100000000;
  if (DAT_14ca4fffc != '\0') {
    DAT_14ca5153e = DAT_14ca5153e + '\x01';
  }
  return;
}



// FUNCTION 145f23e7e FUN_145f23e7e body=216 status=ok
// SIG undefined FUN_145f23e7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f23e7e(void)

{
  _DAT_14ca582c0 = L"LightPosition";
  DAT_14ca582ea = FUN_140850cc5();
  _DAT_14ca582c8 = FUN_140ec6960();
  _DAT_14ca582d8 = &LAB_14682652b;
  _DAT_14ca582e0 = 0x10000013c;
  _DAT_14ca582e8 = 0;
  _DAT_14ca582d0 = DAT_14ca514e8;
  DAT_14ca514e8 = &DAT_14ca582c0;
  _DAT_14ca58290 = L"ShadowSharpen";
  DAT_14ca582ba = FUN_140850cc5();
  _DAT_14ca58298 = FUN_140ec6960();
  _DAT_14ca582a8 = &LAB_14682652b;
  _DAT_14ca582b0 = 0x100000136;
  _DAT_14ca582b8 = 0;
  _DAT_14ca582a0 = DAT_14ca514e8;
  DAT_14ca514e8 = &DAT_14ca58290;
  return;
}



// FUNCTION 145f23f56 FUN_145f23f56 body=284 status=ok
// SIG undefined FUN_145f23f56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f23f56(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca51710) {
    FUN_144b3d300(&DAT_14ca51710);
    if (DAT_14ca51710 == -1) {
      FUN_145f24072();
      FUN_140db5666(&DAT_14ca51668,0,&DAT_14ca51600,L"FShadowProjectionPS3truetruefalse",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472effd8,
                    FUN_1472effb0,&LAB_1472eff6a,&LAB_1472eff66,&LAB_14712ac0c,&LAB_14712ac08,0x148,
                    0);
      _DAT_14ca51668 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049baa);
      _Init_thread_footer(&DAT_14ca51710);
    }
  }
  return &DAT_14ca51668;
}



// FUNCTION 145f24072 FUN_145f24072 body=210 status=ok
// SIG undefined FUN_145f24072(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f24072(void)

{
  if ((DAT_14ca51667 & 2) == 0) {
    DAT_14ca51667 = DAT_14ca51667 | 2;
    _DAT_14ca51608 = L"FShadowProjectionPS3truetruefalse";
    _DAT_14ca51620 = FUN_146826540;
    _DAT_14ca51628 = FUN_146825d77;
    _DAT_14ca51630 = FUN_146825fd6;
    _DAT_14ca51638 = FUN_1407e02ea;
    _DAT_14ca51640 = FUN_146826273;
    _DAT_14ca51618 = FUN_1472eff36;
    _DAT_14ca51658 = 0xffffffff00000148;
    _DAT_14ca51660 = 8;
    DAT_14ca51664 = 0;
    _DAT_14ca51648 = &LAB_1472eff62;
    FUN_145f24144();
    FUN_145f24238();
    FUN_1407e00cc(&DAT_14ca51600);
    return;
  }
  return;
}



// FUNCTION 145f24144 FUN_145f24144 body=121 status=ok
// SIG undefined FUN_145f24144(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f24144(void)

{
  FUN_145f241be();
  _DAT_14ca58320 = L"ProjectionParameters";
  DAT_14ca5834a = FUN_140850cc5();
  _DAT_14ca58328 = FUN_14142e7bc();
  _DAT_14ca58338 = &LAB_14682652b;
  _DAT_14ca58340 = 0x1000000e0;
  _DAT_14ca58348 = 0;
  _DAT_14ca58330 = DAT_14ca51610;
  DAT_14ca51610 = &DAT_14ca58320;
  return;
}



// FUNCTION 145f241be FUN_145f241be body=121 status=ok
// SIG undefined FUN_145f241be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f241be(void)

{
  FUN_145f242be();
  _DAT_14ca58350 = L"ShadowFadeFraction";
  DAT_14ca5837a = FUN_140850cc5();
  _DAT_14ca58358 = FUN_140ec6960();
  _DAT_14ca58368 = &LAB_14682652b;
  _DAT_14ca58370 = 0x100000130;
  _DAT_14ca58378 = 0;
  _DAT_14ca58360 = DAT_14ca51610;
  DAT_14ca51610 = &DAT_14ca58350;
  return;
}



// FUNCTION 145f24238 FUN_145f24238 body=133 status=ok
// SIG undefined FUN_145f24238(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f24238(void)

{
  _DAT_14ca583e0 = L"BASE";
  DAT_14ca5840a = 4;
  FUN_1411c95a0();
  _DAT_14ca583f0 = DAT_14ca51610;
  _DAT_14ca583e8 = &DAT_14ca4ff98;
  _DAT_14ca583f8 = &LAB_14682652b;
  DAT_14ca51610 = &DAT_14ca583e0;
  DAT_14ca51665 = DAT_14ca51665 + '\x01';
  _DAT_14ca58400 = 0x100000000;
  if (DAT_14ca4fffc != '\0') {
    DAT_14ca51666 = DAT_14ca51666 + '\x01';
  }
  return;
}



// FUNCTION 145f242be FUN_145f242be body=216 status=ok
// SIG undefined FUN_145f242be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f242be(void)

{
  _DAT_14ca583b0 = L"LightPosition";
  DAT_14ca583da = FUN_140850cc5();
  _DAT_14ca583b8 = FUN_140ec6960();
  _DAT_14ca583c8 = &LAB_14682652b;
  _DAT_14ca583d0 = 0x10000013c;
  _DAT_14ca583d8 = 0;
  _DAT_14ca583c0 = DAT_14ca51610;
  DAT_14ca51610 = &DAT_14ca583b0;
  _DAT_14ca58380 = L"ShadowSharpen";
  DAT_14ca583aa = FUN_140850cc5();
  _DAT_14ca58388 = FUN_140ec6960();
  _DAT_14ca58398 = &LAB_14682652b;
  _DAT_14ca583a0 = 0x100000136;
  _DAT_14ca583a8 = 0;
  _DAT_14ca58390 = DAT_14ca51610;
  DAT_14ca51610 = &DAT_14ca58380;
  return;
}



// FUNCTION 145f24396 FUN_145f24396 body=284 status=ok
// SIG undefined FUN_145f24396(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f24396(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca51838) {
    FUN_144b3d300(&DAT_14ca51838);
    if (DAT_14ca51838 == -1) {
      FUN_145f244b2();
      FUN_140db5666(&DAT_14ca51790,0,&DAT_14ca51728,L"FShadowProjectionPS4truetruefalse",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472f0138,
                    FUN_1472f0110,&LAB_1472f00ca,&LAB_1472f00c6,&LAB_14712ac0c,&LAB_14712ac08,0x148,
                    0);
      _DAT_14ca51790 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049bb6);
      _Init_thread_footer(&DAT_14ca51838);
    }
  }
  return &DAT_14ca51790;
}



// FUNCTION 145f244b2 FUN_145f244b2 body=210 status=ok
// SIG undefined FUN_145f244b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f244b2(void)

{
  if ((DAT_14ca5178f & 2) == 0) {
    DAT_14ca5178f = DAT_14ca5178f | 2;
    _DAT_14ca51730 = L"FShadowProjectionPS4truetruefalse";
    _DAT_14ca51748 = FUN_146826540;
    _DAT_14ca51750 = FUN_146825d77;
    _DAT_14ca51758 = FUN_146825fd6;
    _DAT_14ca51760 = FUN_1407e02ea;
    _DAT_14ca51768 = FUN_146826273;
    _DAT_14ca51740 = FUN_1472f0096;
    _DAT_14ca51780 = 0xffffffff00000148;
    _DAT_14ca51788 = 8;
    DAT_14ca5178c = 0;
    _DAT_14ca51770 = &LAB_1472f00c2;
    FUN_145f24584();
    FUN_145f24678();
    FUN_1407e00cc(&DAT_14ca51728);
    return;
  }
  return;
}



// FUNCTION 145f24584 FUN_145f24584 body=121 status=ok
// SIG undefined FUN_145f24584(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f24584(void)

{
  FUN_145f245fe();
  _DAT_14ca58410 = L"ProjectionParameters";
  DAT_14ca5843a = FUN_140850cc5();
  _DAT_14ca58418 = FUN_14142e7bc();
  _DAT_14ca58428 = &LAB_14682652b;
  _DAT_14ca58430 = 0x1000000e0;
  _DAT_14ca58438 = 0;
  _DAT_14ca58420 = DAT_14ca51738;
  DAT_14ca51738 = &DAT_14ca58410;
  return;
}



// FUNCTION 145f245fe FUN_145f245fe body=121 status=ok
// SIG undefined FUN_145f245fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f245fe(void)

{
  FUN_145f246fe();
  _DAT_14ca58440 = L"ShadowFadeFraction";
  DAT_14ca5846a = FUN_140850cc5();
  _DAT_14ca58448 = FUN_140ec6960();
  _DAT_14ca58458 = &LAB_14682652b;
  _DAT_14ca58460 = 0x100000130;
  _DAT_14ca58468 = 0;
  _DAT_14ca58450 = DAT_14ca51738;
  DAT_14ca51738 = &DAT_14ca58440;
  return;
}



// FUNCTION 145f24678 FUN_145f24678 body=133 status=ok
// SIG undefined FUN_145f24678(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f24678(void)

{
  _DAT_14ca584d0 = L"BASE";
  DAT_14ca584fa = 4;
  FUN_1411c95a0();
  _DAT_14ca584e0 = DAT_14ca51738;
  _DAT_14ca584d8 = &DAT_14ca4ff98;
  _DAT_14ca584e8 = &LAB_14682652b;
  DAT_14ca51738 = &DAT_14ca584d0;
  DAT_14ca5178d = DAT_14ca5178d + '\x01';
  _DAT_14ca584f0 = 0x100000000;
  if (DAT_14ca4fffc != '\0') {
    DAT_14ca5178e = DAT_14ca5178e + '\x01';
  }
  return;
}



// FUNCTION 145f246fe FUN_145f246fe body=216 status=ok
// SIG undefined FUN_145f246fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f246fe(void)

{
  _DAT_14ca584a0 = L"LightPosition";
  DAT_14ca584ca = FUN_140850cc5();
  _DAT_14ca584a8 = FUN_140ec6960();
  _DAT_14ca584b8 = &LAB_14682652b;
  _DAT_14ca584c0 = 0x10000013c;
  _DAT_14ca584c8 = 0;
  _DAT_14ca584b0 = DAT_14ca51738;
  DAT_14ca51738 = &DAT_14ca584a0;
  _DAT_14ca58470 = L"ShadowSharpen";
  DAT_14ca5849a = FUN_140850cc5();
  _DAT_14ca58478 = FUN_140ec6960();
  _DAT_14ca58488 = &LAB_14682652b;
  _DAT_14ca58490 = 0x100000136;
  _DAT_14ca58498 = 0;
  _DAT_14ca58480 = DAT_14ca51738;
  DAT_14ca51738 = &DAT_14ca58470;
  return;
}



// FUNCTION 145f247d6 FUN_145f247d6 body=284 status=ok
// SIG undefined FUN_145f247d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f247d6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca51960) {
    FUN_144b3d300(&DAT_14ca51960);
    if (DAT_14ca51960 == -1) {
      FUN_145f248f2();
      FUN_140db5666(&DAT_14ca518b8,0,&DAT_14ca51850,L"FShadowProjectionPS5truetruefalse",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472f0298,
                    FUN_1472f0270,&LAB_1472f022a,&LAB_1472f0226,&LAB_14712ac0c,&LAB_14712ac08,0x148,
                    0);
      _DAT_14ca518b8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049bc2);
      _Init_thread_footer(&DAT_14ca51960);
    }
  }
  return &DAT_14ca518b8;
}



// FUNCTION 145f248f2 FUN_145f248f2 body=210 status=ok
// SIG undefined FUN_145f248f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f248f2(void)

{
  if ((DAT_14ca518b7 & 2) == 0) {
    DAT_14ca518b7 = DAT_14ca518b7 | 2;
    _DAT_14ca51858 = L"FShadowProjectionPS5truetruefalse";
    _DAT_14ca51870 = FUN_146826540;
    _DAT_14ca51878 = FUN_146825d77;
    _DAT_14ca51880 = FUN_146825fd6;
    _DAT_14ca51888 = FUN_1407e02ea;
    _DAT_14ca51890 = FUN_146826273;
    _DAT_14ca51868 = FUN_1472f01f6;
    _DAT_14ca518a8 = 0xffffffff00000148;
    _DAT_14ca518b0 = 8;
    DAT_14ca518b4 = 0;
    _DAT_14ca51898 = &LAB_1472f0222;
    FUN_145f249c4();
    FUN_145f24ab8();
    FUN_1407e00cc(&DAT_14ca51850);
    return;
  }
  return;
}



// FUNCTION 145f249c4 FUN_145f249c4 body=121 status=ok
// SIG undefined FUN_145f249c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f249c4(void)

{
  FUN_145f24a3e();
  _DAT_14ca58500 = L"ProjectionParameters";
  DAT_14ca5852a = FUN_140850cc5();
  _DAT_14ca58508 = FUN_14142e7bc();
  _DAT_14ca58518 = &LAB_14682652b;
  _DAT_14ca58520 = 0x1000000e0;
  _DAT_14ca58528 = 0;
  _DAT_14ca58510 = DAT_14ca51860;
  DAT_14ca51860 = &DAT_14ca58500;
  return;
}



// FUNCTION 145f24a3e FUN_145f24a3e body=121 status=ok
// SIG undefined FUN_145f24a3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f24a3e(void)

{
  FUN_145f24b3e();
  _DAT_14ca58530 = L"ShadowFadeFraction";
  DAT_14ca5855a = FUN_140850cc5();
  _DAT_14ca58538 = FUN_140ec6960();
  _DAT_14ca58548 = &LAB_14682652b;
  _DAT_14ca58550 = 0x100000130;
  _DAT_14ca58558 = 0;
  _DAT_14ca58540 = DAT_14ca51860;
  DAT_14ca51860 = &DAT_14ca58530;
  return;
}



// FUNCTION 145f24ab8 FUN_145f24ab8 body=133 status=ok
// SIG undefined FUN_145f24ab8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f24ab8(void)

{
  _DAT_14ca585c0 = L"BASE";
  DAT_14ca585ea = 4;
  FUN_1411c95a0();
  _DAT_14ca585d0 = DAT_14ca51860;
  _DAT_14ca585c8 = &DAT_14ca4ff98;
  _DAT_14ca585d8 = &LAB_14682652b;
  DAT_14ca51860 = &DAT_14ca585c0;
  DAT_14ca518b5 = DAT_14ca518b5 + '\x01';
  _DAT_14ca585e0 = 0x100000000;
  if (DAT_14ca4fffc != '\0') {
    DAT_14ca518b6 = DAT_14ca518b6 + '\x01';
  }
  return;
}



// FUNCTION 145f24b3e FUN_145f24b3e body=216 status=ok
// SIG undefined FUN_145f24b3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f24b3e(void)

{
  _DAT_14ca58590 = L"LightPosition";
  DAT_14ca585ba = FUN_140850cc5();
  _DAT_14ca58598 = FUN_140ec6960();
  _DAT_14ca585a8 = &LAB_14682652b;
  _DAT_14ca585b0 = 0x10000013c;
  _DAT_14ca585b8 = 0;
  _DAT_14ca585a0 = DAT_14ca51860;
  DAT_14ca51860 = &DAT_14ca58590;
  _DAT_14ca58560 = L"ShadowSharpen";
  DAT_14ca5858a = FUN_140850cc5();
  _DAT_14ca58568 = FUN_140ec6960();
  _DAT_14ca58578 = &LAB_14682652b;
  _DAT_14ca58580 = 0x100000136;
  _DAT_14ca58588 = 0;
  _DAT_14ca58570 = DAT_14ca51860;
  DAT_14ca51860 = &DAT_14ca58560;
  return;
}



// FUNCTION 145f24c16 FUN_145f24c16 body=284 status=ok
// SIG undefined FUN_145f24c16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f24c16(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca51a88) {
    FUN_144b3d300(&DAT_14ca51a88);
    if (DAT_14ca51a88 == -1) {
      FUN_145f24d32();
      FUN_140db5666(&DAT_14ca519e0,0,&DAT_14ca51978,L"FShadowProjectionPS1falsefalsetrue",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472f03f8,
                    FUN_1472f03d0,&LAB_1472f038a,&LAB_1472f0386,&LAB_14712ac0c,&LAB_14712ac08,0x148,
                    0);
      _DAT_14ca519e0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049bce);
      _Init_thread_footer(&DAT_14ca51a88);
    }
  }
  return &DAT_14ca519e0;
}



// FUNCTION 145f24d32 FUN_145f24d32 body=210 status=ok
// SIG undefined FUN_145f24d32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f24d32(void)

{
  if ((DAT_14ca519df & 2) == 0) {
    DAT_14ca519df = DAT_14ca519df | 2;
    _DAT_14ca51980 = L"FShadowProjectionPS1falsefalsetrue";
    _DAT_14ca51998 = FUN_146826540;
    _DAT_14ca519a0 = FUN_146825d77;
    _DAT_14ca519a8 = FUN_146825fd6;
    _DAT_14ca519b0 = FUN_1407e02ea;
    _DAT_14ca519b8 = FUN_146826273;
    _DAT_14ca51990 = FUN_1472f0356;
    _DAT_14ca519d0 = 0xffffffff00000148;
    _DAT_14ca519d8 = 8;
    DAT_14ca519dc = 0;
    _DAT_14ca519c0 = &LAB_1472f0382;
    FUN_145f24e04();
    FUN_145f24ef8();
    FUN_1407e00cc(&DAT_14ca51978);
    return;
  }
  return;
}



// FUNCTION 145f24e04 FUN_145f24e04 body=121 status=ok
// SIG undefined FUN_145f24e04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f24e04(void)

{
  FUN_145f24e7e();
  _DAT_14ca585f0 = L"ProjectionParameters";
  DAT_14ca5861a = FUN_140850cc5();
  _DAT_14ca585f8 = FUN_14142e7bc();
  _DAT_14ca58608 = &LAB_14682652b;
  _DAT_14ca58610 = 0x1000000e0;
  _DAT_14ca58618 = 0;
  _DAT_14ca58600 = DAT_14ca51988;
  DAT_14ca51988 = &DAT_14ca585f0;
  return;
}



// FUNCTION 145f24e7e FUN_145f24e7e body=121 status=ok
// SIG undefined FUN_145f24e7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f24e7e(void)

{
  FUN_145f24f7e();
  _DAT_14ca58620 = L"ShadowFadeFraction";
  DAT_14ca5864a = FUN_140850cc5();
  _DAT_14ca58628 = FUN_140ec6960();
  _DAT_14ca58638 = &LAB_14682652b;
  _DAT_14ca58640 = 0x100000130;
  _DAT_14ca58648 = 0;
  _DAT_14ca58630 = DAT_14ca51988;
  DAT_14ca51988 = &DAT_14ca58620;
  return;
}



// FUNCTION 145f24ef8 FUN_145f24ef8 body=133 status=ok
// SIG undefined FUN_145f24ef8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f24ef8(void)

{
  _DAT_14ca586b0 = L"BASE";
  DAT_14ca586da = 4;
  FUN_1411c95a0();
  _DAT_14ca586c0 = DAT_14ca51988;
  _DAT_14ca586b8 = &DAT_14ca4ff98;
  _DAT_14ca586c8 = &LAB_14682652b;
  DAT_14ca51988 = &DAT_14ca586b0;
  DAT_14ca519dd = DAT_14ca519dd + '\x01';
  _DAT_14ca586d0 = 0x100000000;
  if (DAT_14ca4fffc != '\0') {
    DAT_14ca519de = DAT_14ca519de + '\x01';
  }
  return;
}



// FUNCTION 145f24f7e FUN_145f24f7e body=216 status=ok
// SIG undefined FUN_145f24f7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f24f7e(void)

{
  _DAT_14ca58680 = L"LightPosition";
  DAT_14ca586aa = FUN_140850cc5();
  _DAT_14ca58688 = FUN_140ec6960();
  _DAT_14ca58698 = &LAB_14682652b;
  _DAT_14ca586a0 = 0x10000013c;
  _DAT_14ca586a8 = 0;
  _DAT_14ca58690 = DAT_14ca51988;
  DAT_14ca51988 = &DAT_14ca58680;
  _DAT_14ca58650 = L"ShadowSharpen";
  DAT_14ca5867a = FUN_140850cc5();
  _DAT_14ca58658 = FUN_140ec6960();
  _DAT_14ca58668 = &LAB_14682652b;
  _DAT_14ca58670 = 0x100000136;
  _DAT_14ca58678 = 0;
  _DAT_14ca58660 = DAT_14ca51988;
  DAT_14ca51988 = &DAT_14ca58650;
  return;
}



// FUNCTION 145f25056 FUN_145f25056 body=284 status=ok
// SIG undefined FUN_145f25056(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f25056(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca51bb0) {
    FUN_144b3d300(&DAT_14ca51bb0);
    if (DAT_14ca51bb0 == -1) {
      FUN_145f25172();
      FUN_140db5666(&DAT_14ca51b08,0,&DAT_14ca51aa0,L"FShadowProjectionPS2falsefalsetrue",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472f0558,
                    FUN_1472f0530,&LAB_1472f04ea,&LAB_1472f04e6,&LAB_14712ac0c,&LAB_14712ac08,0x148,
                    0);
      _DAT_14ca51b08 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049bda);
      _Init_thread_footer(&DAT_14ca51bb0);
    }
  }
  return &DAT_14ca51b08;
}



// FUNCTION 145f25172 FUN_145f25172 body=210 status=ok
// SIG undefined FUN_145f25172(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f25172(void)

{
  if ((DAT_14ca51b07 & 2) == 0) {
    DAT_14ca51b07 = DAT_14ca51b07 | 2;
    _DAT_14ca51aa8 = L"FShadowProjectionPS2falsefalsetrue";
    _DAT_14ca51ac0 = FUN_146826540;
    _DAT_14ca51ac8 = FUN_146825d77;
    _DAT_14ca51ad0 = FUN_146825fd6;
    _DAT_14ca51ad8 = FUN_1407e02ea;
    _DAT_14ca51ae0 = FUN_146826273;
    _DAT_14ca51ab8 = FUN_1472f04b6;
    _DAT_14ca51af8 = 0xffffffff00000148;
    _DAT_14ca51b00 = 8;
    DAT_14ca51b04 = 0;
    _DAT_14ca51ae8 = &LAB_1472f04e2;
    FUN_145f25244();
    FUN_145f25338();
    FUN_1407e00cc(&DAT_14ca51aa0);
    return;
  }
  return;
}



// FUNCTION 145f25244 FUN_145f25244 body=121 status=ok
// SIG undefined FUN_145f25244(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f25244(void)

{
  FUN_145f252be();
  _DAT_14ca586e0 = L"ProjectionParameters";
  DAT_14ca5870a = FUN_140850cc5();
  _DAT_14ca586e8 = FUN_14142e7bc();
  _DAT_14ca586f8 = &LAB_14682652b;
  _DAT_14ca58700 = 0x1000000e0;
  _DAT_14ca58708 = 0;
  _DAT_14ca586f0 = DAT_14ca51ab0;
  DAT_14ca51ab0 = &DAT_14ca586e0;
  return;
}



// FUNCTION 145f252be FUN_145f252be body=121 status=ok
// SIG undefined FUN_145f252be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f252be(void)

{
  FUN_145f253be();
  _DAT_14ca58710 = L"ShadowFadeFraction";
  DAT_14ca5873a = FUN_140850cc5();
  _DAT_14ca58718 = FUN_140ec6960();
  _DAT_14ca58728 = &LAB_14682652b;
  _DAT_14ca58730 = 0x100000130;
  _DAT_14ca58738 = 0;
  _DAT_14ca58720 = DAT_14ca51ab0;
  DAT_14ca51ab0 = &DAT_14ca58710;
  return;
}



// FUNCTION 145f25338 FUN_145f25338 body=133 status=ok
// SIG undefined FUN_145f25338(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f25338(void)

{
  _DAT_14ca587a0 = L"BASE";
  DAT_14ca587ca = 4;
  FUN_1411c95a0();
  _DAT_14ca587b0 = DAT_14ca51ab0;
  _DAT_14ca587a8 = &DAT_14ca4ff98;
  _DAT_14ca587b8 = &LAB_14682652b;
  DAT_14ca51ab0 = &DAT_14ca587a0;
  DAT_14ca51b05 = DAT_14ca51b05 + '\x01';
  _DAT_14ca587c0 = 0x100000000;
  if (DAT_14ca4fffc != '\0') {
    DAT_14ca51b06 = DAT_14ca51b06 + '\x01';
  }
  return;
}



// FUNCTION 145f253be FUN_145f253be body=216 status=ok
// SIG undefined FUN_145f253be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f253be(void)

{
  _DAT_14ca58770 = L"LightPosition";
  DAT_14ca5879a = FUN_140850cc5();
  _DAT_14ca58778 = FUN_140ec6960();
  _DAT_14ca58788 = &LAB_14682652b;
  _DAT_14ca58790 = 0x10000013c;
  _DAT_14ca58798 = 0;
  _DAT_14ca58780 = DAT_14ca51ab0;
  DAT_14ca51ab0 = &DAT_14ca58770;
  _DAT_14ca58740 = L"ShadowSharpen";
  DAT_14ca5876a = FUN_140850cc5();
  _DAT_14ca58748 = FUN_140ec6960();
  _DAT_14ca58758 = &LAB_14682652b;
  _DAT_14ca58760 = 0x100000136;
  _DAT_14ca58768 = 0;
  _DAT_14ca58750 = DAT_14ca51ab0;
  DAT_14ca51ab0 = &DAT_14ca58740;
  return;
}



// FUNCTION 145f25496 FUN_145f25496 body=284 status=ok
// SIG undefined FUN_145f25496(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f25496(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca51cd8) {
    FUN_144b3d300(&DAT_14ca51cd8);
    if (DAT_14ca51cd8 == -1) {
      FUN_145f255b2();
      FUN_140db5666(&DAT_14ca51c30,0,&DAT_14ca51bc8,L"FShadowProjectionPS3falsefalsetrue",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472f06b8,
                    FUN_1472f0690,&LAB_1472f064a,&LAB_1472f0646,&LAB_14712ac0c,&LAB_14712ac08,0x148,
                    0);
      _DAT_14ca51c30 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049be6);
      _Init_thread_footer(&DAT_14ca51cd8);
    }
  }
  return &DAT_14ca51c30;
}



// FUNCTION 145f255b2 FUN_145f255b2 body=210 status=ok
// SIG undefined FUN_145f255b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f255b2(void)

{
  if ((DAT_14ca51c2f & 2) == 0) {
    DAT_14ca51c2f = DAT_14ca51c2f | 2;
    _DAT_14ca51bd0 = L"FShadowProjectionPS3falsefalsetrue";
    _DAT_14ca51be8 = FUN_146826540;
    _DAT_14ca51bf0 = FUN_146825d77;
    _DAT_14ca51bf8 = FUN_146825fd6;
    _DAT_14ca51c00 = FUN_1407e02ea;
    _DAT_14ca51c08 = FUN_146826273;
    _DAT_14ca51be0 = FUN_1472f0616;
    _DAT_14ca51c20 = 0xffffffff00000148;
    _DAT_14ca51c28 = 8;
    DAT_14ca51c2c = 0;
    _DAT_14ca51c10 = &LAB_1472f0642;
    FUN_145f25684();
    FUN_145f25778();
    FUN_1407e00cc(&DAT_14ca51bc8);
    return;
  }
  return;
}



// FUNCTION 145f25684 FUN_145f25684 body=121 status=ok
// SIG undefined FUN_145f25684(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f25684(void)

{
  FUN_145f256fe();
  _DAT_14ca587d0 = L"ProjectionParameters";
  DAT_14ca587fa = FUN_140850cc5();
  _DAT_14ca587d8 = FUN_14142e7bc();
  _DAT_14ca587e8 = &LAB_14682652b;
  _DAT_14ca587f0 = 0x1000000e0;
  _DAT_14ca587f8 = 0;
  _DAT_14ca587e0 = DAT_14ca51bd8;
  DAT_14ca51bd8 = &DAT_14ca587d0;
  return;
}



// FUNCTION 145f256fe FUN_145f256fe body=121 status=ok
// SIG undefined FUN_145f256fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f256fe(void)

{
  FUN_145f257fe();
  _DAT_14ca58800 = L"ShadowFadeFraction";
  DAT_14ca5882a = FUN_140850cc5();
  _DAT_14ca58808 = FUN_140ec6960();
  _DAT_14ca58818 = &LAB_14682652b;
  _DAT_14ca58820 = 0x100000130;
  _DAT_14ca58828 = 0;
  _DAT_14ca58810 = DAT_14ca51bd8;
  DAT_14ca51bd8 = &DAT_14ca58800;
  return;
}



// FUNCTION 145f25778 FUN_145f25778 body=133 status=ok
// SIG undefined FUN_145f25778(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f25778(void)

{
  _DAT_14ca58890 = L"BASE";
  DAT_14ca588ba = 4;
  FUN_1411c95a0();
  _DAT_14ca588a0 = DAT_14ca51bd8;
  _DAT_14ca58898 = &DAT_14ca4ff98;
  _DAT_14ca588a8 = &LAB_14682652b;
  DAT_14ca51bd8 = &DAT_14ca58890;
  DAT_14ca51c2d = DAT_14ca51c2d + '\x01';
  _DAT_14ca588b0 = 0x100000000;
  if (DAT_14ca4fffc != '\0') {
    DAT_14ca51c2e = DAT_14ca51c2e + '\x01';
  }
  return;
}



// FUNCTION 145f257fe FUN_145f257fe body=216 status=ok
// SIG undefined FUN_145f257fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f257fe(void)

{
  _DAT_14ca58860 = L"LightPosition";
  DAT_14ca5888a = FUN_140850cc5();
  _DAT_14ca58868 = FUN_140ec6960();
  _DAT_14ca58878 = &LAB_14682652b;
  _DAT_14ca58880 = 0x10000013c;
  _DAT_14ca58888 = 0;
  _DAT_14ca58870 = DAT_14ca51bd8;
  DAT_14ca51bd8 = &DAT_14ca58860;
  _DAT_14ca58830 = L"ShadowSharpen";
  DAT_14ca5885a = FUN_140850cc5();
  _DAT_14ca58838 = FUN_140ec6960();
  _DAT_14ca58848 = &LAB_14682652b;
  _DAT_14ca58850 = 0x100000136;
  _DAT_14ca58858 = 0;
  _DAT_14ca58840 = DAT_14ca51bd8;
  DAT_14ca51bd8 = &DAT_14ca58830;
  return;
}



// FUNCTION 145f258d6 FUN_145f258d6 body=284 status=ok
// SIG undefined FUN_145f258d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f258d6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca51e00) {
    FUN_144b3d300(&DAT_14ca51e00);
    if (DAT_14ca51e00 == -1) {
      FUN_145f259f2();
      FUN_140db5666(&DAT_14ca51d58,0,&DAT_14ca51cf0,L"FShadowProjectionPS4falsefalsetrue",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472f0818,
                    FUN_1472f07f0,&LAB_1472f07aa,&LAB_1472f07a6,&LAB_14712ac0c,&LAB_14712ac08,0x148,
                    0);
      _DAT_14ca51d58 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049bf2);
      _Init_thread_footer(&DAT_14ca51e00);
    }
  }
  return &DAT_14ca51d58;
}



// FUNCTION 145f259f2 FUN_145f259f2 body=210 status=ok
// SIG undefined FUN_145f259f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f259f2(void)

{
  if ((DAT_14ca51d57 & 2) == 0) {
    DAT_14ca51d57 = DAT_14ca51d57 | 2;
    _DAT_14ca51cf8 = L"FShadowProjectionPS4falsefalsetrue";
    _DAT_14ca51d10 = FUN_146826540;
    _DAT_14ca51d18 = FUN_146825d77;
    _DAT_14ca51d20 = FUN_146825fd6;
    _DAT_14ca51d28 = FUN_1407e02ea;
    _DAT_14ca51d30 = FUN_146826273;
    _DAT_14ca51d08 = FUN_1472f0776;
    _DAT_14ca51d48 = 0xffffffff00000148;
    _DAT_14ca51d50 = 8;
    DAT_14ca51d54 = 0;
    _DAT_14ca51d38 = &LAB_1472f07a2;
    FUN_145f25ac4();
    FUN_145f25bb8();
    FUN_1407e00cc(&DAT_14ca51cf0);
    return;
  }
  return;
}



// FUNCTION 145f25ac4 FUN_145f25ac4 body=121 status=ok
// SIG undefined FUN_145f25ac4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f25ac4(void)

{
  FUN_145f25b3e();
  _DAT_14ca588c0 = L"ProjectionParameters";
  DAT_14ca588ea = FUN_140850cc5();
  _DAT_14ca588c8 = FUN_14142e7bc();
  _DAT_14ca588d8 = &LAB_14682652b;
  _DAT_14ca588e0 = 0x1000000e0;
  _DAT_14ca588e8 = 0;
  _DAT_14ca588d0 = DAT_14ca51d00;
  DAT_14ca51d00 = &DAT_14ca588c0;
  return;
}



// FUNCTION 145f25b3e FUN_145f25b3e body=121 status=ok
// SIG undefined FUN_145f25b3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f25b3e(void)

{
  FUN_145f25c3e();
  _DAT_14ca588f0 = L"ShadowFadeFraction";
  DAT_14ca5891a = FUN_140850cc5();
  _DAT_14ca588f8 = FUN_140ec6960();
  _DAT_14ca58908 = &LAB_14682652b;
  _DAT_14ca58910 = 0x100000130;
  _DAT_14ca58918 = 0;
  _DAT_14ca58900 = DAT_14ca51d00;
  DAT_14ca51d00 = &DAT_14ca588f0;
  return;
}



// FUNCTION 145f25bb8 FUN_145f25bb8 body=133 status=ok
// SIG undefined FUN_145f25bb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f25bb8(void)

{
  _DAT_14ca58980 = L"BASE";
  DAT_14ca589aa = 4;
  FUN_1411c95a0();
  _DAT_14ca58990 = DAT_14ca51d00;
  _DAT_14ca58988 = &DAT_14ca4ff98;
  _DAT_14ca58998 = &LAB_14682652b;
  DAT_14ca51d00 = &DAT_14ca58980;
  DAT_14ca51d55 = DAT_14ca51d55 + '\x01';
  _DAT_14ca589a0 = 0x100000000;
  if (DAT_14ca4fffc != '\0') {
    DAT_14ca51d56 = DAT_14ca51d56 + '\x01';
  }
  return;
}



// FUNCTION 145f25c3e FUN_145f25c3e body=216 status=ok
// SIG undefined FUN_145f25c3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f25c3e(void)

{
  _DAT_14ca58950 = L"LightPosition";
  DAT_14ca5897a = FUN_140850cc5();
  _DAT_14ca58958 = FUN_140ec6960();
  _DAT_14ca58968 = &LAB_14682652b;
  _DAT_14ca58970 = 0x10000013c;
  _DAT_14ca58978 = 0;
  _DAT_14ca58960 = DAT_14ca51d00;
  DAT_14ca51d00 = &DAT_14ca58950;
  _DAT_14ca58920 = L"ShadowSharpen";
  DAT_14ca5894a = FUN_140850cc5();
  _DAT_14ca58928 = FUN_140ec6960();
  _DAT_14ca58938 = &LAB_14682652b;
  _DAT_14ca58940 = 0x100000136;
  _DAT_14ca58948 = 0;
  _DAT_14ca58930 = DAT_14ca51d00;
  DAT_14ca51d00 = &DAT_14ca58920;
  return;
}



// FUNCTION 145f25d16 FUN_145f25d16 body=284 status=ok
// SIG undefined FUN_145f25d16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f25d16(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca51f28) {
    FUN_144b3d300(&DAT_14ca51f28);
    if (DAT_14ca51f28 == -1) {
      FUN_145f25e32();
      FUN_140db5666(&DAT_14ca51e80,0,&DAT_14ca51e18,L"FShadowProjectionPS5falsefalsetrue",
                    L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,4,FUN_1472f0978,
                    FUN_1472f0950,&LAB_1472f090a,&LAB_1472f0906,&LAB_14712ac0c,&LAB_14712ac08,0x148,
                    0);
      _DAT_14ca51e80 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143049bfe);
      _Init_thread_footer(&DAT_14ca51f28);
    }
  }
  return &DAT_14ca51e80;
}



// FUNCTION 145f25e32 FUN_145f25e32 body=210 status=ok
// SIG undefined FUN_145f25e32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f25e32(void)

{
  if ((DAT_14ca51e7f & 2) == 0) {
    DAT_14ca51e7f = DAT_14ca51e7f | 2;
    _DAT_14ca51e20 = L"FShadowProjectionPS5falsefalsetrue";
    _DAT_14ca51e38 = FUN_146826540;
    _DAT_14ca51e40 = FUN_146825d77;
    _DAT_14ca51e48 = FUN_146825fd6;
    _DAT_14ca51e50 = FUN_1407e02ea;
    _DAT_14ca51e58 = FUN_146826273;
    _DAT_14ca51e30 = FUN_1472f08d6;
    _DAT_14ca51e70 = 0xffffffff00000148;
    _DAT_14ca51e78 = 8;
    DAT_14ca51e7c = 0;
    _DAT_14ca51e60 = &LAB_1472f0902;
    FUN_145f25f04();
    FUN_145f25ff8();
    FUN_1407e00cc(&DAT_14ca51e18);
    return;
  }
  return;
}



// FUNCTION 145f25f04 FUN_145f25f04 body=121 status=ok
// SIG undefined FUN_145f25f04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f25f04(void)

{
  FUN_145f25f7e();
  _DAT_14ca589b0 = L"ProjectionParameters";
  DAT_14ca589da = FUN_140850cc5();
  _DAT_14ca589b8 = FUN_14142e7bc();
  _DAT_14ca589c8 = &LAB_14682652b;
  _DAT_14ca589d0 = 0x1000000e0;
  _DAT_14ca589d8 = 0;
  _DAT_14ca589c0 = DAT_14ca51e28;
  DAT_14ca51e28 = &DAT_14ca589b0;
  return;
}



// FUNCTION 145f25f7e FUN_145f25f7e body=121 status=ok
// SIG undefined FUN_145f25f7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f25f7e(void)

{
  FUN_145f2607e();
  _DAT_14ca589e0 = L"ShadowFadeFraction";
  DAT_14ca58a0a = FUN_140850cc5();
  _DAT_14ca589e8 = FUN_140ec6960();
  _DAT_14ca589f8 = &LAB_14682652b;
  _DAT_14ca58a00 = 0x100000130;
  _DAT_14ca58a08 = 0;
  _DAT_14ca589f0 = DAT_14ca51e28;
  DAT_14ca51e28 = &DAT_14ca589e0;
  return;
}



// FUNCTION 145f25ff8 FUN_145f25ff8 body=133 status=ok
// SIG undefined FUN_145f25ff8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f25ff8(void)

{
  _DAT_14ca58a70 = L"BASE";
  DAT_14ca58a9a = 4;
  FUN_1411c95a0();
  _DAT_14ca58a80 = DAT_14ca51e28;
  _DAT_14ca58a78 = &DAT_14ca4ff98;
  _DAT_14ca58a88 = &LAB_14682652b;
  DAT_14ca51e28 = &DAT_14ca58a70;
  DAT_14ca51e7d = DAT_14ca51e7d + '\x01';
  _DAT_14ca58a90 = 0x100000000;
  if (DAT_14ca4fffc != '\0') {
    DAT_14ca51e7e = DAT_14ca51e7e + '\x01';
  }
  return;
}



// FUNCTION 145f2607e FUN_145f2607e body=216 status=ok
// SIG undefined FUN_145f2607e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2607e(void)

{
  _DAT_14ca58a40 = L"LightPosition";
  DAT_14ca58a6a = FUN_140850cc5();
  _DAT_14ca58a48 = FUN_140ec6960();
  _DAT_14ca58a58 = &LAB_14682652b;
  _DAT_14ca58a60 = 0x10000013c;
  _DAT_14ca58a68 = 0;
  _DAT_14ca58a50 = DAT_14ca51e28;
  DAT_14ca51e28 = &DAT_14ca58a40;
  _DAT_14ca58a10 = L"ShadowSharpen";
  DAT_14ca58a3a = FUN_140850cc5();
  _DAT_14ca58a18 = FUN_140ec6960();
  _DAT_14ca58a28 = &LAB_14682652b;
  _DAT_14ca58a30 = 0x100000136;
  _DAT_14ca58a38 = 0;
  _DAT_14ca58a20 = DAT_14ca51e28;
  DAT_14ca51e28 = &DAT_14ca58a10;
  return;
}



// FUNCTION 145f26156 FUN_145f26156 body=205 status=ok
// SIG undefined FUN_145f26156(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f26156(void)

{
  if ((DAT_14ca6597f & 2) == 0) {
    DAT_14ca6597f = DAT_14ca6597f | 2;
    _DAT_14ca65920 = L"FMergeStaticPhysicalPagesIndirectCS";
    _DAT_14ca65938 = FUN_146826540;
    _DAT_14ca65940 = FUN_146825d77;
    _DAT_14ca65948 = FUN_146825fd6;
    _DAT_14ca65950 = FUN_1407e02ea;
    _DAT_14ca65958 = FUN_146826273;
    _DAT_14ca65930 = FUN_14732bd8a;
    _DAT_14ca65970 = 0xffffffff000000e0;
    _DAT_14ca65978 = 8;
    DAT_14ca6597c = 0;
    _DAT_14ca65960 = &LAB_14732bdb4;
    FUN_145f26224();
    FUN_1407e00cc(&DAT_14ca65918);
    return;
  }
  return;
}



// FUNCTION 145f26224 FUN_145f26224 body=123 status=ok
// SIG undefined FUN_145f26224(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f26224(void)

{
  _DAT_14ca68de0 = L"BASE";
  DAT_14ca68e0a = 4;
  _DAT_14ca68de8 = FUN_140b35ae4();
  _DAT_14ca68df0 = DAT_14ca65928;
  _DAT_14ca68df8 = &LAB_14682652b;
  DAT_14ca65928 = &DAT_14ca68de0;
  DAT_14ca6597d = DAT_14ca6597d + '\x01';
  _DAT_14ca68e00 = 0x100000000;
  if (*(char *)(_DAT_14ca68de8 + 100) != '\0') {
    DAT_14ca6597e = DAT_14ca6597e + '\x01';
  }
  return;
}



// FUNCTION 145f262a0 FUN_145f262a0 body=226 status=ok
// SIG undefined FUN_145f262a0(void)

longlong * FUN_145f262a0(longlong *param_1)

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
  pcVar13 = FUN_146311e2e;
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



// FUNCTION 145f26384 FUN_145f26384 body=138 status=ok
// SIG undefined FUN_145f26384(void)

code * FUN_145f26384(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PhysicalPagesToMerge";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer< uint >";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000553;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f26498;
}



// FUNCTION 145f2640e FUN_145f2640e body=138 status=ok
// SIG undefined FUN_145f2640e(void)

code * FUN_145f2640e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutPhysicalPagePool";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000554;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f26384;
}



// FUNCTION 145f26498 FUN_145f26498 body=140 status=ok
// SIG undefined FUN_145f26498(void)

undefined1 * FUN_145f26498(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x552;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca64298;
  return &LAB_14732fcae;
}



// FUNCTION 145f26530 FUN_145f26530 body=205 status=ok
// SIG undefined FUN_145f26530(void)

undefined8 * FUN_145f26530(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140553f2a();
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_14a4d17e0;
  *(undefined1 *)((longlong)param_1 + 0x32) = 2;
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_18 = param_1[2];
    if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_20 = FUN_145920956();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    FUN_140909372(&local_20,&local_18);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f26606 FUN_145f26606 body=209 status=ok
// SIG undefined FUN_145f26606(void)

undefined8 * FUN_145f26606(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_1406ee02c();
  *param_1 = &PTR_FUN_14b19aff0;
  param_1[0x72] = &PTR_FUN_14b19b628;
  param_1[0x73] = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 2;
  uVar2 = DAT_14cb84b18;
  uVar3 = FUN_140c3b394();
  lVar4 = FUN_14048696c(param_1,uVar2,uVar3,uVar3,1,0);
  if (lVar4 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar4);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x73] = lVar4;
  *(undefined4 *)(lVar4 + 0x620) = 1;
  lVar4 = param_1[0x73];
  if ((bVar1 & 1) != 0) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = param_1[0x73];
    }
  }
  param_1[0x39] = lVar4;
  return param_1;
}



// FUNCTION 145f266de FUN_145f266de body=169 status=ok
// SIG undefined FUN_145f266de(void)

void FUN_145f266de(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  longlong lVar5;
  
  FUN_1403d8a98();
  iVar1 = *(int *)(param_1 + 0x398);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x390);
    lVar5 = 0;
    bVar4 = DAT_14c950c29;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if ((plVar3 != (longlong *)0x0 & bVar4) == 1) {
        FUN_1456cec3c(plVar3);
LAB_145f26760:
        (**(code **)(*plVar3 + 0x2d8))(plVar3);
        bVar4 = DAT_14c950c29;
      }
      else if (plVar3 != (longlong *)0x0) goto LAB_145f26760;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  *(undefined4 *)(param_1 + 0x398) = 0;
  if (*(int *)(param_1 + 0x39c) != 0) {
    FUN_145f26788(param_1 + 0x390);
    return;
  }
  return;
}



// FUNCTION 145f26788 FUN_145f26788 body=48 status=ok
// SIG undefined FUN_145f26788(void)

void FUN_145f26788(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 145f267b8 FUN_145f267b8 body=37 status=ok
// SIG undefined FUN_145f267b8(void)

void FUN_145f267b8(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x120);
  FUN_145f267de(param_2);
  return;
}



// FUNCTION 145f267de FUN_145f267de body=180 status=ok
// SIG undefined FUN_145f267de(void)

undefined8 * FUN_145f267de(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = &PTR_FUN_14b77f140;
  param_1[4] = 0;
  param_1[5] = 0;
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
  FUN_144928b90(param_1 + 0x10,0);
  FUN_144a7a8f6(param_1 + 0x17);
  FUN_144a7a8f6((longlong)param_1 + 0xc4);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf1) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x20] = DAT_14c8464e0;
  param_1[0x21] = uVar1;
  param_1[0x22] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  return param_1;
}



// FUNCTION 145f2689e FUN_145f2689e body=205 status=ok
// SIG undefined FUN_145f2689e(void)

undefined8 * FUN_145f2689e(undefined8 *param_1)

{
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14bc5c130;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_144a5dc74(param_1 + 7);
  FUN_144a5dc74(param_1 + 9);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_140056680(local_60,L"Variant");
  FUN_140233b1a(local_50,local_60);
  FUN_140008f88(param_1 + 9,local_50);
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f2696c FUN_145f2696c body=40 status=ok
// SIG undefined FUN_145f2696c(void)

undefined8 FUN_145f2696c(undefined8 param_1,int param_2)

{
  FUN_145f26994();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145f26994 FUN_145f26994 body=177 status=ok
// SIG undefined FUN_145f26994(void)

void FUN_145f26994(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc84410;
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bc7e840;
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_140fed55c(param_1);
  return;
}



// FUNCTION 145f26a4e FUN_145f26a4e body=209 status=ok
// SIG undefined FUN_145f26a4e(void)

undefined8 * FUN_145f26a4e(undefined8 *param_1)

{
  FUN_14585467a();
  *param_1 = &PTR_FUN_14bd85f20;
  param_1[5] = &PTR_FUN_14bd862f0;
  param_1[0x13] = &PTR_FUN_14bd86310;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 1;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  FUN_1411b354a(param_1 + 0x30,0,0,0,0);
  FUN_1457e37e0(param_1 + 0x74);
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  return param_1;
}



// FUNCTION 145f26b20 FUN_145f26b20 body=289 status=ok
// SIG undefined FUN_145f26b20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f26b20(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfa9f0) {
    FUN_144b3d300(&DAT_14cbfa9f0);
    if (DAT_14cbfa9f0 == -1) {
      FUN_145f26d8c();
      FUN_145f26c42();
      FUN_140db5666(&DAT_14cbfa948,0,&DAT_14cbfa8e0,L"FHairClusterCullCS",
                    L"/Engine/Private/HairStrands/HairStrandsClusterCulling.usf",L"Main",5,5,
                    FUN_149097940,FUN_1490978e0,&LAB_14667c7a4,&LAB_1490978dc,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cbfc858);
      _DAT_14cbfa948 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14443dcce);
      _Init_thread_footer(&DAT_14cbfa9f0);
    }
  }
  return &DAT_14cbfa948;
}



// FUNCTION 145f26c42 FUN_145f26c42 body=205 status=ok
// SIG undefined FUN_145f26c42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f26c42(void)

{
  if ((DAT_14cbfa947 & 2) == 0) {
    DAT_14cbfa947 = DAT_14cbfa947 | 2;
    _DAT_14cbfa8e8 = L"FHairClusterCullCS";
    _DAT_14cbfa900 = FUN_146826540;
    _DAT_14cbfa908 = FUN_146825d77;
    _DAT_14cbfa910 = FUN_146825fd6;
    _DAT_14cbfa918 = FUN_1407e02ea;
    _DAT_14cbfa920 = FUN_146826273;
    _DAT_14cbfa8f8 = FUN_1490978ae;
    _DAT_14cbfa938 = 0xffffffff000000e0;
    _DAT_14cbfa940 = 8;
    DAT_14cbfa944 = 0;
    _DAT_14cbfa928 = &LAB_1490978d8;
    FUN_145f26d10();
    FUN_1407e00cc(&DAT_14cbfa8e0);
    return;
  }
  return;
}



// FUNCTION 145f26d10 FUN_145f26d10 body=123 status=ok
// SIG undefined FUN_145f26d10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f26d10(void)

{
  _DAT_14cbfd558 = L"BASE";
  DAT_14cbfd582 = 4;
  _DAT_14cbfd560 = FUN_140b35ae4();
  _DAT_14cbfd568 = DAT_14cbfa8f0;
  _DAT_14cbfd570 = &LAB_14682652b;
  DAT_14cbfa8f0 = &DAT_14cbfd558;
  DAT_14cbfa945 = DAT_14cbfa945 + '\x01';
  _DAT_14cbfd578 = 0x100000000;
  if (*(char *)(_DAT_14cbfd560 + 100) != '\0') {
    DAT_14cbfa946 = DAT_14cbfa946 + '\x01';
  }
  return;
}



// FUNCTION 145f26d8c FUN_145f26d8c body=261 status=ok
// SIG undefined FUN_145f26d8c(void)

void FUN_145f26d8c(void)

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
              0x110) < DAT_14cbfc8d8) {
    FUN_144b3d300(&DAT_14cbfc8d8);
    if (DAT_14cbfc8d8 == -1) {
      FUN_145f26e92(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xa0;
      local_58 = 0x18;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfc858,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144449406);
      _Init_thread_footer(&DAT_14cbfc8d8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f26e92 FUN_145f26e92 body=226 status=ok
// SIG undefined FUN_145f26e92(void)

longlong * FUN_145f26e92(longlong *param_1)

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
  pcVar13 = FUN_14667ce8e;
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



// FUNCTION 145f26f76 FUN_145f26f76 body=138 status=ok
// SIG undefined FUN_145f26f76(void)

code * FUN_145f26f76(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CurveToClusterIdBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000021;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f2708a;
}



// FUNCTION 145f27000 FUN_145f27000 body=138 status=ok
// SIG undefined FUN_145f27000(void)

code * FUN_145f27000(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutCulledCurveBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a74b8;
}



// FUNCTION 145f2708a FUN_145f2708a body=138 status=ok
// SIG undefined FUN_145f2708a(void)

code * FUN_145f2708a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CurveBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a7656;
}



// FUNCTION 145f27114 FUN_145f27114 body=289 status=ok
// SIG undefined FUN_145f27114(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f27114(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfaf48) {
    FUN_144b3d300(&DAT_14cbfaf48);
    if (DAT_14cbfaf48 == -1) {
      FUN_145f27380();
      FUN_145f27236();
      FUN_140db5666(&DAT_14cbfaea0,0,&DAT_14cbfae38,L"FDeformGuideCS",
                    L"/Engine/Private/HairStrands/HairStrandsGuideDeform.usf",L"MainCS",5,5,
                    FUN_14909a0c0,FUN_14909a060,&LAB_14667c89e,&LAB_14909a05c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cbfca78);
      _DAT_14cbfaea0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14443ec98);
      _Init_thread_footer(&DAT_14cbfaf48);
    }
  }
  return &DAT_14cbfaea0;
}



// FUNCTION 145f27236 FUN_145f27236 body=205 status=ok
// SIG undefined FUN_145f27236(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f27236(void)

{
  if ((DAT_14cbfae9f & 2) == 0) {
    DAT_14cbfae9f = DAT_14cbfae9f | 2;
    _DAT_14cbfae40 = L"FDeformGuideCS";
    _DAT_14cbfae58 = FUN_146826540;
    _DAT_14cbfae60 = FUN_146825d77;
    _DAT_14cbfae68 = FUN_146825fd6;
    _DAT_14cbfae70 = FUN_1407e02ea;
    _DAT_14cbfae78 = FUN_146826273;
    _DAT_14cbfae50 = FUN_14909a02e;
    _DAT_14cbfae90 = 0xffffffff000000e0;
    _DAT_14cbfae98 = 8;
    DAT_14cbfae9c = 0;
    _DAT_14cbfae80 = &LAB_14909a058;
    FUN_145f27304();
    FUN_1407e00cc(&DAT_14cbfae38);
    return;
  }
  return;
}



// FUNCTION 145f27304 FUN_145f27304 body=123 status=ok
// SIG undefined FUN_145f27304(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f27304(void)

{
  _DAT_14cbfd618 = L"BASE";
  DAT_14cbfd642 = 4;
  _DAT_14cbfd620 = FUN_140b35ae4();
  _DAT_14cbfd628 = DAT_14cbfae48;
  _DAT_14cbfd630 = &LAB_14682652b;
  DAT_14cbfae48 = &DAT_14cbfd618;
  DAT_14cbfae9d = DAT_14cbfae9d + '\x01';
  _DAT_14cbfd638 = 0x100000000;
  if (*(char *)(_DAT_14cbfd620 + 100) != '\0') {
    DAT_14cbfae9e = DAT_14cbfae9e + '\x01';
  }
  return;
}



// FUNCTION 145f27380 FUN_145f27380 body=261 status=ok
// SIG undefined FUN_145f27380(void)

void FUN_145f27380(void)

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
              0x110) < DAT_14cbfcaf8) {
    FUN_144b3d300(&DAT_14cbfcaf8);
    if (DAT_14cbfcaf8 == -1) {
      FUN_145f27486(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x80;
      local_58 = 0x14a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfca78,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144449436);
      _Init_thread_footer(&DAT_14cbfcaf8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f27486 FUN_145f27486 body=226 status=ok
// SIG undefined FUN_145f27486(void)

longlong * FUN_145f27486(longlong *param_1)

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
  pcVar13 = FUN_14667d2d6;
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



// FUNCTION 145f2756a FUN_145f2756a body=138 status=ok
// SIG undefined FUN_145f2756a(void)

code * FUN_145f2756a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SimDeformedOffsetBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000156;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a8340;
}



// FUNCTION 145f275f4 FUN_145f275f4 body=138 status=ok
// SIG undefined FUN_145f275f4(void)

code * FUN_145f275f4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SampleCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x600000015a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14667d35e;
}



// FUNCTION 145f2767e FUN_145f2767e body=138 status=ok
// SIG undefined FUN_145f2767e(void)

code * FUN_145f2767e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SimDeformedPositionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000150;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a84de;
}



// FUNCTION 145f27708 FUN_145f27708 body=292 status=ok
// SIG undefined FUN_145f27708(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f27708(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b6fc8) {
    FUN_144b3d300(&DAT_14c9b6fc8);
    if (DAT_14c9b6fc8 == -1) {
      FUN_145f27976();
      FUN_145f2782c();
      FUN_140db5666(&DAT_14c9b6f20,0,&DAT_14c9b6eb8,L"FAmbientOcclusionSmoothCS",
                    L"/Engine/Private/PostProcessAmbientOcclusion.usf",L"MainSSAOSmoothCS",5,1,
                    FUN_147134eea,FUN_147134e8a,&LAB_147134e72,&LAB_147134e6e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9b84f8);
      _DAT_14c9b6f20 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142b8b8d6);
      _Init_thread_footer(&DAT_14c9b6fc8);
    }
  }
  return &DAT_14c9b6f20;
}



// FUNCTION 145f2782c FUN_145f2782c body=205 status=ok
// SIG undefined FUN_145f2782c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2782c(void)

{
  if ((DAT_14c9b6f1f & 2) == 0) {
    DAT_14c9b6f1f = DAT_14c9b6f1f | 2;
    _DAT_14c9b6ec0 = L"FAmbientOcclusionSmoothCS";
    _DAT_14c9b6ed8 = FUN_146826540;
    _DAT_14c9b6ee0 = FUN_146825d77;
    _DAT_14c9b6ee8 = FUN_146825fd6;
    _DAT_14c9b6ef0 = FUN_1407e02ea;
    _DAT_14c9b6ef8 = FUN_146826273;
    _DAT_14c9b6ed0 = FUN_147134e40;
    _DAT_14c9b6f10 = 0xffffffff000000e0;
    _DAT_14c9b6f18 = 8;
    DAT_14c9b6f1c = 0;
    _DAT_14c9b6f00 = &LAB_147134e6a;
    FUN_145f278fa();
    FUN_1407e00cc(&DAT_14c9b6eb8);
    return;
  }
  return;
}



// FUNCTION 145f278fa FUN_145f278fa body=123 status=ok
// SIG undefined FUN_145f278fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f278fa(void)

{
  _DAT_14c9c00b0 = L"BASE";
  DAT_14c9c00da = 4;
  _DAT_14c9c00b8 = FUN_140b35ae4();
  _DAT_14c9c00c0 = DAT_14c9b6ec8;
  _DAT_14c9c00c8 = &LAB_14682652b;
  DAT_14c9b6ec8 = &DAT_14c9c00b0;
  DAT_14c9b6f1d = DAT_14c9b6f1d + '\x01';
  _DAT_14c9c00d0 = 0x100000000;
  if (*(char *)(_DAT_14c9c00b8 + 100) != '\0') {
    DAT_14c9b6f1e = DAT_14c9b6f1e + '\x01';
  }
  return;
}



// FUNCTION 145f27976 FUN_145f27976 body=261 status=ok
// SIG undefined FUN_145f27976(void)

void FUN_145f27976(void)

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
              0x110) < DAT_14c9b8578) {
    FUN_144b3d300(&DAT_14c9b8578);
    if (DAT_14c9b8578 == -1) {
      FUN_145f27a7c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xa0;
      local_58 = 0x265;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9b84f8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b908e9);
      _Init_thread_footer(&DAT_14c9b8578);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f27a7c FUN_145f27a7c body=226 status=ok
// SIG undefined FUN_145f27a7c(void)

longlong * FUN_145f27a7c(longlong *param_1)

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
  pcVar13 = FUN_1462b8c06;
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



// FUNCTION 145f27b60 FUN_145f27b60 body=136 status=ok
// SIG undefined FUN_145f27b60(void)

undefined1 * FUN_145f27b60(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"SSAOSmoothOutputViewport";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x266;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_14713ab38;
}



// FUNCTION 145f27be8 FUN_145f27be8 body=138 status=ok
// SIG undefined FUN_145f27be8(void)

code * FUN_145f27be8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SSAOSmoothInputSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x880000026a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f27c72;
}



// FUNCTION 145f27c72 FUN_145f27c72 body=138 status=ok
// SIG undefined FUN_145f27c72(void)

code * FUN_145f27c72(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SSAOSmoothInputTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000269;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14713aaae;
}



// FUNCTION 145f27cfc FUN_145f27cfc body=292 status=ok
// SIG undefined FUN_145f27cfc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f27cfc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c1620) {
    FUN_144b3d300(&DAT_14c9c1620);
    if (DAT_14c9c1620 == -1) {
      FUN_145f27f6a();
      FUN_145f27e20();
      FUN_140db5666(&DAT_14c9c1578,0,&DAT_14c9c1510,L"FPostProcessEdgeDetectionPSApplytrue",
                    L"/Engine/Private/PostProcessEdgeDetection.usf",L"PixelShaderMainCombine",3,1,
                    FUN_1471448fe,FUN_14714489e,&LAB_147144886,&LAB_147144882,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9c40a0);
      _DAT_14c9c1578 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ba1a0b);
      _Init_thread_footer(&DAT_14c9c1620);
    }
  }
  return &DAT_14c9c1578;
}



// FUNCTION 145f27e20 FUN_145f27e20 body=205 status=ok
// SIG undefined FUN_145f27e20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f27e20(void)

{
  if ((DAT_14c9c1577 & 2) == 0) {
    DAT_14c9c1577 = DAT_14c9c1577 | 2;
    _DAT_14c9c1518 = L"FPostProcessEdgeDetectionPSApplytrue";
    _DAT_14c9c1530 = FUN_146826540;
    _DAT_14c9c1538 = FUN_146825d77;
    _DAT_14c9c1540 = FUN_146825fd6;
    _DAT_14c9c1548 = FUN_1407e02ea;
    _DAT_14c9c1550 = FUN_146826273;
    _DAT_14c9c1528 = FUN_147144854;
    _DAT_14c9c1568 = 0xffffffff000000e0;
    _DAT_14c9c1570 = 8;
    DAT_14c9c1574 = 0;
    _DAT_14c9c1558 = &LAB_14714487e;
    FUN_145f27eee();
    FUN_1407e00cc(&DAT_14c9c1510);
    return;
  }
  return;
}



// FUNCTION 145f27eee FUN_145f27eee body=123 status=ok
// SIG undefined FUN_145f27eee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f27eee(void)

{
  _DAT_14c9c4070 = L"BASE";
  DAT_14c9c409a = 4;
  _DAT_14c9c4078 = FUN_140b35ae4();
  _DAT_14c9c4080 = DAT_14c9c1520;
  _DAT_14c9c4088 = &LAB_14682652b;
  DAT_14c9c1520 = &DAT_14c9c4070;
  DAT_14c9c1575 = DAT_14c9c1575 + '\x01';
  _DAT_14c9c4090 = 0x100000000;
  if (*(char *)(_DAT_14c9c4078 + 100) != '\0') {
    DAT_14c9c1576 = DAT_14c9c1576 + '\x01';
  }
  return;
}



// FUNCTION 145f27f6a FUN_145f27f6a body=261 status=ok
// SIG undefined FUN_145f27f6a(void)

void FUN_145f27f6a(void)

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
              0x110) < DAT_14c9c4120) {
    FUN_144b3d300(&DAT_14c9c4120);
    if (DAT_14c9c4120 == -1) {
      FUN_145f28070(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0xc4;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c40a0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142bc2a07);
      _Init_thread_footer(&DAT_14c9c4120);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f28070 FUN_145f28070 body=226 status=ok
// SIG undefined FUN_145f28070(void)

longlong * FUN_145f28070(longlong *param_1)

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
  pcVar13 = FUN_1462bccbe;
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



// FUNCTION 145f28154 FUN_145f28154 body=136 status=ok
// SIG undefined FUN_145f28154(void)

code * FUN_145f28154(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EdgeVelocityTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000c8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147149f80;
}



// FUNCTION 145f281dc FUN_145f281dc body=138 status=ok
// SIG undefined FUN_145f281dc(void)

code * FUN_145f281dc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EdgeTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000000c9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f28154;
}



// FUNCTION 145f28266 FUN_145f28266 body=138 status=ok
// SIG undefined FUN_145f28266(void)

code * FUN_145f28266(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EdgeDerivativeParameters";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000000cb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147149ef6;
}



// FUNCTION 145f282f0 FUN_145f282f0 body=205 status=ok
// SIG undefined FUN_145f282f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f282f0(void)

{
  if ((DAT_14c9c61a7 & 2) == 0) {
    DAT_14c9c61a7 = DAT_14c9c61a7 | 2;
    _DAT_14c9c6148 = L"FCullObjectsForViewCS";
    _DAT_14c9c6160 = FUN_146826540;
    _DAT_14c9c6168 = FUN_146825d77;
    _DAT_14c9c6170 = FUN_146825fd6;
    _DAT_14c9c6178 = FUN_1407e02ea;
    _DAT_14c9c6180 = FUN_146826273;
    _DAT_14c9c6158 = FUN_14714ec02;
    _DAT_14c9c6198 = 0xffffffff000000e0;
    _DAT_14c9c61a0 = 8;
    DAT_14c9c61a4 = 0;
    _DAT_14c9c6188 = &LAB_14714ec2c;
    FUN_145f283be();
    FUN_1407e00cc(&DAT_14c9c6140);
    return;
  }
  return;
}



// FUNCTION 145f283be FUN_145f283be body=123 status=ok
// SIG undefined FUN_145f283be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f283be(void)

{
  _DAT_14c9c94b0 = L"BASE";
  DAT_14c9c94da = 4;
  _DAT_14c9c94b8 = FUN_140b35ae4();
  _DAT_14c9c94c0 = DAT_14c9c6150;
  _DAT_14c9c94c8 = &LAB_14682652b;
  DAT_14c9c6150 = &DAT_14c9c94b0;
  DAT_14c9c61a5 = DAT_14c9c61a5 + '\x01';
  _DAT_14c9c94d0 = 0x100000000;
  if (*(char *)(_DAT_14c9c94b8 + 100) != '\0') {
    DAT_14c9c61a6 = DAT_14c9c61a6 + '\x01';
  }
  return;
}



// FUNCTION 145f2843a FUN_145f2843a body=226 status=ok
// SIG undefined FUN_145f2843a(void)

longlong * FUN_145f2843a(longlong *param_1)

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
  pcVar13 = FUN_1462bed94;
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



// FUNCTION 145f2851e FUN_145f2851e body=136 status=ok
// SIG undefined FUN_145f2851e(void)

code * FUN_145f2851e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumConvexHullPlanes";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000033;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462bee1c;
}



// FUNCTION 145f285a6 FUN_145f285a6 body=138 status=ok
// SIG undefined FUN_145f285a6(void)

code * FUN_145f285a6(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd000000035;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147151a76;
}



// FUNCTION 145f28630 FUN_145f28630 body=144 status=ok
// SIG undefined FUN_145f28630(void)

code * FUN_145f28630(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"ObjectBufferParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FDistanceFieldObjectBufferParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000030;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462beeac;
}



// FUNCTION 145f286c0 FUN_145f286c0 body=292 status=ok
// SIG undefined FUN_145f286c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f286c0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d03a0) {
    FUN_144b3d300(&DAT_14c9d03a0);
    if (DAT_14c9d03a0 == -1) {
      FUN_145f2892e();
      FUN_145f287e4();
      FUN_140db5666(&DAT_14c9d02f8,0,&DAT_14c9d0290,L"FHairVisibilityComposeSamplePS",
                    L"/Engine/Private/HairStrands/HairStrandsComposition.usf",L"ComposeSamplePS",3,2
                    ,FUN_14716a720,FUN_14716a6c0,FUN_1462c5c5a,&LAB_14716a6bc,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9d3a58);
      _DAT_14c9d02f8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c32a0d);
      _Init_thread_footer(&DAT_14c9d03a0);
    }
  }
  return &DAT_14c9d02f8;
}



// FUNCTION 145f287e4 FUN_145f287e4 body=205 status=ok
// SIG undefined FUN_145f287e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f287e4(void)

{
  if ((DAT_14c9d02f7 & 2) == 0) {
    DAT_14c9d02f7 = DAT_14c9d02f7 | 2;
    _DAT_14c9d0298 = L"FHairVisibilityComposeSamplePS";
    _DAT_14c9d02b0 = FUN_146826540;
    _DAT_14c9d02b8 = FUN_146825d77;
    _DAT_14c9d02c0 = FUN_146825fd6;
    _DAT_14c9d02c8 = FUN_1407e02ea;
    _DAT_14c9d02d0 = FUN_146826273;
    _DAT_14c9d02a8 = FUN_14716a68c;
    _DAT_14c9d02e8 = 0xffffffff000000e0;
    _DAT_14c9d02f0 = 8;
    DAT_14c9d02f4 = 0;
    _DAT_14c9d02d8 = &LAB_14716a6b8;
    FUN_145f288b2();
    FUN_1407e00cc(&DAT_14c9d0290);
    return;
  }
  return;
}



// FUNCTION 145f288b2 FUN_145f288b2 body=123 status=ok
// SIG undefined FUN_145f288b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f288b2(void)

{
  _DAT_14c9d4cf8 = L"BASE";
  DAT_14c9d4d22 = 4;
  _DAT_14c9d4d00 = FUN_140b35ae4();
  _DAT_14c9d4d08 = DAT_14c9d02a0;
  _DAT_14c9d4d10 = &LAB_14682652b;
  DAT_14c9d02a0 = &DAT_14c9d4cf8;
  DAT_14c9d02f5 = DAT_14c9d02f5 + '\x01';
  _DAT_14c9d4d18 = 0x100000000;
  if (*(char *)(_DAT_14c9d4d00 + 100) != '\0') {
    DAT_14c9d02f6 = DAT_14c9d02f6 + '\x01';
  }
  return;
}



// FUNCTION 145f2892e FUN_145f2892e body=261 status=ok
// SIG undefined FUN_145f2892e(void)

void FUN_145f2892e(void)

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
              0x110) < DAT_14c9d3ad8) {
    FUN_144b3d300(&DAT_14c9d3ad8);
    if (DAT_14c9d3ad8 == -1) {
      FUN_145f28a34(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 400;
      local_58 = 0x122;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d3a58,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c46ddd);
      _Init_thread_footer(&DAT_14c9d3ad8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f28a34 FUN_145f28a34 body=226 status=ok
// SIG undefined FUN_145f28a34(void)

longlong * FUN_145f28a34(longlong *param_1)

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
  pcVar13 = FUN_1462c6872;
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



// FUNCTION 145f28b18 FUN_145f28b18 body=136 status=ok
// SIG undefined FUN_145f28b18(void)

code * FUN_145f28b18(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HairLightingSampleBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000129;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c698a;
}



// FUNCTION 145f28ba0 FUN_145f28ba0 body=138 status=ok
// SIG undefined FUN_145f28ba0(void)

code * FUN_145f28ba0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HairDOFDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x680000012a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f28b18;
}



// FUNCTION 145f28c2a FUN_145f28c2a body=138 status=ok
// SIG undefined FUN_145f28c2a(void)

code * FUN_145f28c2a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutMetaTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x700000012b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f28ba0;
}



// FUNCTION 145f28cb4 FUN_145f28cb4 body=292 status=ok
// SIG undefined FUN_145f28cb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f28cb4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d0b18) {
    FUN_144b3d300(&DAT_14c9d0b18);
    if (DAT_14c9d0b18 == -1) {
      FUN_145f28f22();
      FUN_145f28dd8();
      FUN_140db5666(&DAT_14c9d0a70,0,&DAT_14c9d0a08,L"FHairDebugShadowCullingCS",
                    L"/Engine/Private/HairStrands/HairStrandsDebug.usf",L"MainCS",5,1,FUN_14716b344,
                    FUN_14716b2e4,&LAB_14595f2b0,&LAB_14716b2e0,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9d3d88);
      _DAT_14c9d0a70 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c33acd);
      _Init_thread_footer(&DAT_14c9d0b18);
    }
  }
  return &DAT_14c9d0a70;
}



// FUNCTION 145f28dd8 FUN_145f28dd8 body=205 status=ok
// SIG undefined FUN_145f28dd8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f28dd8(void)

{
  if ((DAT_14c9d0a6f & 2) == 0) {
    DAT_14c9d0a6f = DAT_14c9d0a6f | 2;
    _DAT_14c9d0a10 = L"FHairDebugShadowCullingCS";
    _DAT_14c9d0a28 = FUN_146826540;
    _DAT_14c9d0a30 = FUN_146825d77;
    _DAT_14c9d0a38 = FUN_146825fd6;
    _DAT_14c9d0a40 = FUN_1407e02ea;
    _DAT_14c9d0a48 = FUN_146826273;
    _DAT_14c9d0a20 = FUN_14716b2b0;
    _DAT_14c9d0a60 = 0xffffffff000000e0;
    _DAT_14c9d0a68 = 8;
    DAT_14c9d0a6c = 0;
    _DAT_14c9d0a50 = &LAB_14716b2dc;
    FUN_145f28ea6();
    FUN_1407e00cc(&DAT_14c9d0a08);
    return;
  }
  return;
}



// FUNCTION 145f28ea6 FUN_145f28ea6 body=123 status=ok
// SIG undefined FUN_145f28ea6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f28ea6(void)

{
  _DAT_14c9d4e18 = L"BASE";
  DAT_14c9d4e42 = 4;
  _DAT_14c9d4e20 = FUN_140b35ae4();
  _DAT_14c9d4e28 = DAT_14c9d0a18;
  _DAT_14c9d4e30 = &LAB_14682652b;
  DAT_14c9d0a18 = &DAT_14c9d4e18;
  DAT_14c9d0a6d = DAT_14c9d0a6d + '\x01';
  _DAT_14c9d4e38 = 0x100000000;
  if (*(char *)(_DAT_14c9d4e20 + 100) != '\0') {
    DAT_14c9d0a6e = DAT_14c9d0a6e + '\x01';
  }
  return;
}



// FUNCTION 145f28f22 FUN_145f28f22 body=261 status=ok
// SIG undefined FUN_145f28f22(void)

void FUN_145f28f22(void)

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
              0x110) < DAT_14c9d3e08) {
    FUN_144b3d300(&DAT_14c9d3e08);
    if (DAT_14c9d3e08 == -1) {
      FUN_145f29028(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0x15a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d3d88,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c49483);
      _Init_thread_footer(&DAT_14c9d3e08);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f29028 FUN_145f29028 body=226 status=ok
// SIG undefined FUN_145f29028(void)

longlong * FUN_145f29028(longlong *param_1)

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
  pcVar13 = FUN_1462c7022;
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



// FUNCTION 145f2910c FUN_145f2910c body=132 status=ok
// SIG undefined FUN_145f2910c(void)

undefined1 * FUN_145f2910c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147170ec6;
}



// FUNCTION 145f29190 FUN_145f29190 body=136 status=ok
// SIG undefined FUN_145f29190(void)

code * FUN_145f29190(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceBoundInLightSpace";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf800000162;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147170b8a;
}



// FUNCTION 145f29218 FUN_145f29218 body=144 status=ok
// SIG undefined FUN_145f29218(void)

code * FUN_145f29218(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x11000000164;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_147170b00;
}



// FUNCTION 145f292a8 FUN_145f292a8 body=292 status=ok
// SIG undefined FUN_145f292a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f292a8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d1fd8) {
    FUN_144b3d300(&DAT_14c9d1fd8);
    if (DAT_14c9d1fd8 == -1) {
      FUN_145f29516();
      FUN_145f293cc();
      FUN_140db5666(&DAT_14c9d1f30,0,&DAT_14c9d1ec8,L"FHairStrandsForwardRasterBinningCS",
                    L"/Engine/Private/HairStrands/HairStrandsForwardRaster.usf",L"BinningCS",5,2,
                    FUN_14716c718,FUN_14716c6b8,&LAB_14581e926,&LAB_14716c6a8,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9d48b0);
      _DAT_14c9d1f30 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c39e9e);
      _Init_thread_footer(&DAT_14c9d1fd8);
    }
  }
  return &DAT_14c9d1f30;
}



// FUNCTION 145f293cc FUN_145f293cc body=205 status=ok
// SIG undefined FUN_145f293cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f293cc(void)

{
  if ((DAT_14c9d1f2f & 2) == 0) {
    DAT_14c9d1f2f = DAT_14c9d1f2f | 2;
    _DAT_14c9d1ed0 = L"FHairStrandsForwardRasterBinningCS";
    _DAT_14c9d1ee8 = FUN_146826540;
    _DAT_14c9d1ef0 = FUN_146825d77;
    _DAT_14c9d1ef8 = FUN_146825fd6;
    _DAT_14c9d1f00 = FUN_1407e02ea;
    _DAT_14c9d1f08 = FUN_146826273;
    _DAT_14c9d1ee0 = FUN_14716c678;
    _DAT_14c9d1f20 = 0xffffffff000000e0;
    _DAT_14c9d1f28 = 8;
    DAT_14c9d1f2c = 0;
    _DAT_14c9d1f10 = &LAB_14716c6a4;
    FUN_145f2949a();
    FUN_1407e00cc(&DAT_14c9d1ec8);
    return;
  }
  return;
}



// FUNCTION 145f2949a FUN_145f2949a body=123 status=ok
// SIG undefined FUN_145f2949a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2949a(void)

{
  _DAT_14c9d5148 = L"BASE";
  DAT_14c9d5172 = 4;
  _DAT_14c9d5150 = FUN_140b35ae4();
  _DAT_14c9d5158 = DAT_14c9d1ed8;
  _DAT_14c9d5160 = &LAB_14682652b;
  DAT_14c9d1ed8 = &DAT_14c9d5148;
  DAT_14c9d1f2d = DAT_14c9d1f2d + '\x01';
  _DAT_14c9d5168 = 0x100000000;
  if (*(char *)(_DAT_14c9d5150 + 100) != '\0') {
    DAT_14c9d1f2e = DAT_14c9d1f2e + '\x01';
  }
  return;
}



// FUNCTION 145f29516 FUN_145f29516 body=261 status=ok
// SIG undefined FUN_145f29516(void)

void FUN_145f29516(void)

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
              0x110) < DAT_14c9d4930) {
    FUN_144b3d300(&DAT_14c9d4930);
    if (DAT_14c9d4930 == -1) {
      FUN_145f2961c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xf0;
      local_58 = 0x7f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d48b0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4e2e2);
      _Init_thread_footer(&DAT_14c9d4930);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f2961c FUN_145f2961c body=226 status=ok
// SIG undefined FUN_145f2961c(void)

longlong * FUN_145f2961c(longlong *param_1)

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
  pcVar13 = FUN_1462c9542;
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



// FUNCTION 145f29700 FUN_145f29700 body=136 status=ok
// SIG undefined FUN_145f29700(void)

code * FUN_145f29700(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutVisTileArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8800000088;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147176f5a;
}



// FUNCTION 145f29788 FUN_145f29788 body=138 status=ok
// SIG undefined FUN_145f29788(void)

code * FUN_145f29788(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutVisTileBinningGridMinZ";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2DArray";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000085;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f29812;
}



// FUNCTION 145f29812 FUN_145f29812 body=138 status=ok
// SIG undefined FUN_145f29812(void)

code * FUN_145f29812(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutVisTileBinningGrid";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2DArray";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6800000084;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14717706e;
}



// FUNCTION 145f2989c FUN_145f2989c body=292 status=ok
// SIG undefined FUN_145f2989c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f2989c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d60e0) {
    FUN_144b3d300(&DAT_14c9d60e0);
    if (DAT_14c9d60e0 == -1) {
      FUN_145f29b0a();
      FUN_145f299c0();
      FUN_140db5666(&DAT_14c9d6038,0,&DAT_14c9d5fd0,L"FHairStrandsTileCopyArgsPassCS",
                    L"/Engine/Private/HairStrands/HairStrandsVisibilityTile.usf",L"MainCS",5,1,
                    FUN_14717e8ac,FUN_14717e84c,&LAB_1462ca388,&LAB_14717e848,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9d9f10);
      _DAT_14c9d6038 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c5ea2f);
      _Init_thread_footer(&DAT_14c9d60e0);
    }
  }
  return &DAT_14c9d6038;
}



// FUNCTION 145f299c0 FUN_145f299c0 body=205 status=ok
// SIG undefined FUN_145f299c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f299c0(void)

{
  if ((DAT_14c9d6037 & 2) == 0) {
    DAT_14c9d6037 = DAT_14c9d6037 | 2;
    _DAT_14c9d5fd8 = L"FHairStrandsTileCopyArgsPassCS";
    _DAT_14c9d5ff0 = FUN_146826540;
    _DAT_14c9d5ff8 = FUN_146825d77;
    _DAT_14c9d6000 = FUN_146825fd6;
    _DAT_14c9d6008 = FUN_1407e02ea;
    _DAT_14c9d6010 = FUN_146826273;
    _DAT_14c9d5fe8 = FUN_14717e81a;
    _DAT_14c9d6028 = 0xffffffff000000e0;
    _DAT_14c9d6030 = 8;
    DAT_14c9d6034 = 0;
    _DAT_14c9d6018 = &LAB_14717e844;
    FUN_145f29a8e();
    FUN_1407e00cc(&DAT_14c9d5fd0);
    return;
  }
  return;
}



// FUNCTION 145f29a8e FUN_145f29a8e body=123 status=ok
// SIG undefined FUN_145f29a8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f29a8e(void)

{
  _DAT_14c9db828 = L"BASE";
  DAT_14c9db852 = 4;
  _DAT_14c9db830 = FUN_140b35ae4();
  _DAT_14c9db838 = DAT_14c9d5fe0;
  _DAT_14c9db840 = &LAB_14682652b;
  DAT_14c9d5fe0 = &DAT_14c9db828;
  DAT_14c9d6035 = DAT_14c9d6035 + '\x01';
  _DAT_14c9db848 = 0x100000000;
  if (*(char *)(_DAT_14c9db830 + 100) != '\0') {
    DAT_14c9d6036 = DAT_14c9d6036 + '\x01';
  }
  return;
}



// FUNCTION 145f29b0a FUN_145f29b0a body=261 status=ok
// SIG undefined FUN_145f29b0a(void)

void FUN_145f29b0a(void)

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
              0x110) < DAT_14c9d9f90) {
    FUN_144b3d300(&DAT_14c9d9f90);
    if (DAT_14c9d9f90 == -1) {
      FUN_145f29c10(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x45;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d9f10,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c6fad3);
      _Init_thread_footer(&DAT_14c9d9f90);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f29c10 FUN_145f29c10 body=226 status=ok
// SIG undefined FUN_145f29c10(void)

longlong * FUN_145f29c10(longlong *param_1)

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
  pcVar13 = FUN_1462caa1e;
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



// FUNCTION 145f29cf4 FUN_145f29cf4 body=136 status=ok
// SIG undefined FUN_145f29cf4(void)

code * FUN_145f29cf4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TileCountBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000004b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147187404;
}



// FUNCTION 145f29d7c FUN_145f29d7c body=138 status=ok
// SIG undefined FUN_145f29d7c(void)

undefined1 * FUN_145f29d7c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x46;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1471875a2;
}



// FUNCTION 145f29e06 FUN_145f29e06 body=138 status=ok
// SIG undefined FUN_145f29e06(void)

code * FUN_145f29e06(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bRectPrimitive";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c00000049;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718748e;
}



// FUNCTION 145f29e90 FUN_145f29e90 body=292 status=ok
// SIG undefined FUN_145f29e90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f29e90(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d6d20) {
    FUN_144b3d300(&DAT_14c9d6d20);
    if (DAT_14c9d6d20 == -1) {
      FUN_145f2a0fe();
      FUN_145f29fb4();
      FUN_140db5666(&DAT_14c9d6c78,0,&DAT_14c9d6c10,L"FHairStrandsDeepShadowMaskPS",
                    L"/Engine/Private/HairStrands/HairStrandsDeepShadowMask.usf",L"MainPS",3,5,
                    FUN_14717f1da,FUN_14717f17a,&LAB_1462ca3f0,&LAB_14717f176,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9da3d8);
      _DAT_14c9d6c78 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c60d61);
      _Init_thread_footer(&DAT_14c9d6d20);
    }
  }
  return &DAT_14c9d6c78;
}



// FUNCTION 145f29fb4 FUN_145f29fb4 body=205 status=ok
// SIG undefined FUN_145f29fb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f29fb4(void)

{
  if ((DAT_14c9d6c77 & 2) == 0) {
    DAT_14c9d6c77 = DAT_14c9d6c77 | 2;
    _DAT_14c9d6c18 = L"FHairStrandsDeepShadowMaskPS";
    _DAT_14c9d6c30 = FUN_146826540;
    _DAT_14c9d6c38 = FUN_146825d77;
    _DAT_14c9d6c40 = FUN_146825fd6;
    _DAT_14c9d6c48 = FUN_1407e02ea;
    _DAT_14c9d6c50 = FUN_146826273;
    _DAT_14c9d6c28 = FUN_14717f148;
    _DAT_14c9d6c68 = 0xffffffff000000e0;
    _DAT_14c9d6c70 = 8;
    DAT_14c9d6c74 = 0;
    _DAT_14c9d6c58 = &LAB_14717f172;
    FUN_145f2a082();
    FUN_1407e00cc(&DAT_14c9d6c10);
    return;
  }
  return;
}



// FUNCTION 145f2a082 FUN_145f2a082 body=123 status=ok
// SIG undefined FUN_145f2a082(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2a082(void)

{
  _DAT_14c9dba08 = L"BASE";
  DAT_14c9dba32 = 4;
  _DAT_14c9dba10 = FUN_140b35ae4();
  _DAT_14c9dba18 = DAT_14c9d6c20;
  _DAT_14c9dba20 = &LAB_14682652b;
  DAT_14c9d6c20 = &DAT_14c9dba08;
  DAT_14c9d6c75 = DAT_14c9d6c75 + '\x01';
  _DAT_14c9dba28 = 0x100000000;
  if (*(char *)(_DAT_14c9dba10 + 100) != '\0') {
    DAT_14c9d6c76 = DAT_14c9d6c76 + '\x01';
  }
  return;
}



// FUNCTION 145f2a0fe FUN_145f2a0fe body=261 status=ok
// SIG undefined FUN_145f2a0fe(void)

void FUN_145f2a0fe(void)

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
              0x110) < DAT_14c9da458) {
    FUN_144b3d300(&DAT_14c9da458);
    if (DAT_14c9da458 == -1) {
      FUN_14159a0ec(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1b0;
      local_58 = 600;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9da3d8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c707d1);
      _Init_thread_footer(&DAT_14c9da458);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f2a204 FUN_145f2a204 body=136 status=ok
// SIG undefined FUN_145f2a204(void)

code * FUN_145f2a204(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LinearSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000026a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718972e;
}



// FUNCTION 145f2a28c FUN_145f2a28c body=138 status=ok
// SIG undefined FUN_145f2a28c(void)

code * FUN_145f2a28c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DeepShadow_DepthBiasScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000025c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147189d1c;
}



// FUNCTION 145f2a316 FUN_145f2a316 body=138 status=ok
// SIG undefined FUN_145f2a316(void)

undefined1 * FUN_145f2a316(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x259;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_147189da6;
}



// FUNCTION 145f2a3a0 FUN_145f2a3a0 body=292 status=ok
// SIG undefined FUN_145f2a3a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f2a3a0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d95c8) {
    FUN_144b3d300(&DAT_14c9d95c8);
    if (DAT_14c9d95c8 == -1) {
      FUN_145f2a60e();
      FUN_145f2a4c4();
      FUN_140db5666(&DAT_14c9d9520,0,&DAT_14c9d94b8,L"FVisiblityRasterComputeRasterizeMultiSampleCS"
                    ,L"/Engine/Private/HairStrands/HairStrandsVisibilityRasterCompute.usf",
                    L"RasterMultiSampleCS",5,8,FUN_147185548,FUN_1471854e8,&LAB_141764c12,
                    &LAB_1471854e4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9db0b8);
      _DAT_14c9d9520 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c661b1);
      _Init_thread_footer(&DAT_14c9d95c8);
    }
  }
  return &DAT_14c9d9520;
}



// FUNCTION 145f2a4c4 FUN_145f2a4c4 body=205 status=ok
// SIG undefined FUN_145f2a4c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2a4c4(void)

{
  if ((DAT_14c9d951f & 2) == 0) {
    DAT_14c9d951f = DAT_14c9d951f | 2;
    _DAT_14c9d94c0 = L"FVisiblityRasterComputeRasterizeMultiSampleCS";
    _DAT_14c9d94d8 = FUN_146826540;
    _DAT_14c9d94e0 = FUN_146825d77;
    _DAT_14c9d94e8 = FUN_146825fd6;
    _DAT_14c9d94f0 = FUN_1407e02ea;
    _DAT_14c9d94f8 = FUN_146826273;
    _DAT_14c9d94d0 = FUN_1471854b6;
    _DAT_14c9d9510 = 0xffffffff000000e0;
    _DAT_14c9d9518 = 8;
    DAT_14c9d951c = 0;
    _DAT_14c9d9500 = &LAB_1471854e0;
    FUN_145f2a592();
    FUN_1407e00cc(&DAT_14c9d94b8);
    return;
  }
  return;
}



// FUNCTION 145f2a592 FUN_145f2a592 body=123 status=ok
// SIG undefined FUN_145f2a592(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2a592(void)

{
  _DAT_14c9dc2d8 = L"BASE";
  DAT_14c9dc302 = 4;
  _DAT_14c9dc2e0 = FUN_140b35ae4();
  _DAT_14c9dc2e8 = DAT_14c9d94c8;
  _DAT_14c9dc2f0 = &LAB_14682652b;
  DAT_14c9d94c8 = &DAT_14c9dc2d8;
  DAT_14c9d951d = DAT_14c9d951d + '\x01';
  _DAT_14c9dc2f8 = 0x100000000;
  if (*(char *)(_DAT_14c9dc2e0 + 100) != '\0') {
    DAT_14c9d951e = DAT_14c9d951e + '\x01';
  }
  return;
}



// FUNCTION 145f2a60e FUN_145f2a60e body=261 status=ok
// SIG undefined FUN_145f2a60e(void)

void FUN_145f2a60e(void)

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
              0x110) < DAT_14c9db138) {
    FUN_144b3d300(&DAT_14c9db138);
    if (DAT_14c9db138 == -1) {
      FUN_145f2a714(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x250;
      local_58 = 0xd50;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9db0b8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c71d8d);
      _Init_thread_footer(&DAT_14c9db138);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f2a714 FUN_145f2a714 body=226 status=ok
// SIG undefined FUN_145f2a714(void)

longlong * FUN_145f2a714(longlong *param_1)

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
  pcVar13 = FUN_1462cd6b4;
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



// FUNCTION 145f2a7f8 FUN_145f2a7f8 body=136 status=ok
// SIG undefined FUN_145f2a7f8(void)

code * FUN_145f2a7f8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VisTileData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x22000000d59;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718edd0;
}



// FUNCTION 145f2a880 FUN_145f2a880 body=138 status=ok
// SIG undefined FUN_145f2a880(void)

code * FUN_145f2a880(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutPrimMatTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2DArray";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x23800000d5c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718ecbc;
}



// FUNCTION 145f2a90a FUN_145f2a90a body=138 status=ok
// SIG undefined FUN_145f2a90a(void)

code * FUN_145f2a90a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MacroGroupId";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000d52;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462cd7d2;
}



// FUNCTION 145f2a994 FUN_145f2a994 body=292 status=ok
// SIG undefined FUN_145f2a994(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f2a994(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d9de0) {
    FUN_144b3d300(&DAT_14c9d9de0);
    if (DAT_14c9d9de0 == -1) {
      FUN_145f2ac02();
      FUN_145f2aab8();
      FUN_140db5666(&DAT_14c9d9d38,0,&DAT_14c9d9cd0,L"FHairStrandsPositionChangedCS",
                    L"/Engine/Private/HairStrands/HairStrandsRaytracingGeometry.usf",L"MainCS",5,1,
                    FUN_147185ab2,FUN_147185a52,&LAB_1462ca4d6,&LAB_147185a4e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9db470);
      _DAT_14c9d9d38 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c66205);
      _Init_thread_footer(&DAT_14c9d9de0);
    }
  }
  return &DAT_14c9d9d38;
}



// FUNCTION 145f2aab8 FUN_145f2aab8 body=205 status=ok
// SIG undefined FUN_145f2aab8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2aab8(void)

{
  if ((DAT_14c9d9d37 & 2) == 0) {
    DAT_14c9d9d37 = DAT_14c9d9d37 | 2;
    _DAT_14c9d9cd8 = L"FHairStrandsPositionChangedCS";
    _DAT_14c9d9cf0 = FUN_146826540;
    _DAT_14c9d9cf8 = FUN_146825d77;
    _DAT_14c9d9d00 = FUN_146825fd6;
    _DAT_14c9d9d08 = FUN_1407e02ea;
    _DAT_14c9d9d10 = FUN_146826273;
    _DAT_14c9d9ce8 = FUN_147185a20;
    _DAT_14c9d9d28 = 0xffffffff000000e0;
    _DAT_14c9d9d30 = 8;
    DAT_14c9d9d34 = 0;
    _DAT_14c9d9d18 = &LAB_147185a4a;
    FUN_145f2ab86();
    FUN_1407e00cc(&DAT_14c9d9cd0);
    return;
  }
  return;
}



// FUNCTION 145f2ab86 FUN_145f2ab86 body=123 status=ok
// SIG undefined FUN_145f2ab86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2ab86(void)

{
  _DAT_14c9dc428 = L"BASE";
  DAT_14c9dc452 = 4;
  _DAT_14c9dc430 = FUN_140b35ae4();
  _DAT_14c9dc438 = DAT_14c9d9ce0;
  _DAT_14c9dc440 = &LAB_14682652b;
  DAT_14c9d9ce0 = &DAT_14c9dc428;
  DAT_14c9d9d35 = DAT_14c9d9d35 + '\x01';
  _DAT_14c9dc448 = 0x100000000;
  if (*(char *)(_DAT_14c9dc430 + 100) != '\0') {
    DAT_14c9d9d36 = DAT_14c9d9d36 + '\x01';
  }
  return;
}



// FUNCTION 145f2ac02 FUN_145f2ac02 body=261 status=ok
// SIG undefined FUN_145f2ac02(void)

void FUN_145f2ac02(void)

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
              0x110) < DAT_14c9db4f0) {
    FUN_144b3d300(&DAT_14c9db4f0);
    if (DAT_14c9db4f0 == -1) {
      FUN_145f2ad08(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0x10c9;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9db470,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c71de1);
      _Init_thread_footer(&DAT_14c9db4f0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f2ad08 FUN_145f2ad08 body=226 status=ok
// SIG undefined FUN_145f2ad08(void)

longlong * FUN_145f2ad08(longlong *param_1)

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
  pcVar13 = FUN_1462ce088;
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



// FUNCTION 145f2adec FUN_145f2adec body=136 status=ok
// SIG undefined FUN_145f2adec(void)

code * FUN_145f2adec(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PrevPositionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000010d2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718ff94;
}



// FUNCTION 145f2ae74 FUN_145f2ae74 body=138 status=ok
// SIG undefined FUN_145f2ae74(void)

code * FUN_145f2ae74(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PointCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000010cb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471902d0;
}



// FUNCTION 145f2aefe FUN_145f2aefe body=138 status=ok
// SIG undefined FUN_145f2aefe(void)

code * FUN_145f2aefe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InvalidationPrintCounter";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000010d5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718fe80;
}



// FUNCTION 145f2af88 FUN_145f2af88 body=292 status=ok
// SIG undefined FUN_145f2af88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f2af88(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9dc8e8) {
    FUN_144b3d300(&DAT_14c9dc8e8);
    if (DAT_14c9dc8e8 == -1) {
      FUN_145f2b1f6();
      FUN_145f2b0ac();
      FUN_140db5666(&DAT_14c9dc840,0,&DAT_14c9dc7d8,L"FVirtualVoxelInjectOpaqueCS",
                    L"/Engine/Private/HairStrands/HairStrandsVoxelRasterCompute.usf",L"MainCS",5,1,
                    FUN_1471986e2,FUN_147198682,&LAB_1462ce310,&LAB_14719867e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9dff60);
      _DAT_14c9dc840 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c861e0);
      _Init_thread_footer(&DAT_14c9dc8e8);
    }
  }
  return &DAT_14c9dc840;
}



// FUNCTION 145f2b0ac FUN_145f2b0ac body=205 status=ok
// SIG undefined FUN_145f2b0ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2b0ac(void)

{
  if ((DAT_14c9dc83f & 2) == 0) {
    DAT_14c9dc83f = DAT_14c9dc83f | 2;
    _DAT_14c9dc7e0 = L"FVirtualVoxelInjectOpaqueCS";
    _DAT_14c9dc7f8 = FUN_146826540;
    _DAT_14c9dc800 = FUN_146825d77;
    _DAT_14c9dc808 = FUN_146825fd6;
    _DAT_14c9dc810 = FUN_1407e02ea;
    _DAT_14c9dc818 = FUN_146826273;
    _DAT_14c9dc7f0 = FUN_147198650;
    _DAT_14c9dc830 = 0xffffffff000000e0;
    _DAT_14c9dc838 = 8;
    DAT_14c9dc83c = 0;
    _DAT_14c9dc820 = &LAB_14719867a;
    FUN_145f2b17a();
    FUN_1407e00cc(&DAT_14c9dc7d8);
    return;
  }
  return;
}



// FUNCTION 145f2b17a FUN_145f2b17a body=123 status=ok
// SIG undefined FUN_145f2b17a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2b17a(void)

{
  _DAT_14c9e1480 = L"BASE";
  DAT_14c9e14aa = 4;
  _DAT_14c9e1488 = FUN_140b35ae4();
  _DAT_14c9e1490 = DAT_14c9dc7e8;
  _DAT_14c9e1498 = &LAB_14682652b;
  DAT_14c9dc7e8 = &DAT_14c9e1480;
  DAT_14c9dc83d = DAT_14c9dc83d + '\x01';
  _DAT_14c9e14a0 = 0x100000000;
  if (*(char *)(_DAT_14c9e1488 + 100) != '\0') {
    DAT_14c9dc83e = DAT_14c9dc83e + '\x01';
  }
  return;
}



// FUNCTION 145f2b1f6 FUN_145f2b1f6 body=261 status=ok
// SIG undefined FUN_145f2b1f6(void)

void FUN_145f2b1f6(void)

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
              0x110) < DAT_14c9dffe0) {
    FUN_144b3d300(&DAT_14c9dffe0);
    if (DAT_14c9dffe0 == -1) {
      FUN_145f2b2fc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x170;
      local_58 = 0xa8;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9dff60,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c9e6a7);
      _Init_thread_footer(&DAT_14c9dffe0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f2b2fc FUN_145f2b2fc body=226 status=ok
// SIG undefined FUN_145f2b2fc(void)

longlong * FUN_145f2b2fc(longlong *param_1)

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
  pcVar13 = FUN_1462ce6be;
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



// FUNCTION 145f2b3e0 FUN_145f2b3e0 body=136 status=ok
// SIG undefined FUN_145f2b3e0(void)

code * FUN_145f2b3e0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VoxelBiasCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x140000000ad;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f2b4f2;
}



// FUNCTION 145f2b468 FUN_145f2b468 body=138 status=ok
// SIG undefined FUN_145f2b468(void)

code * FUN_145f2b468(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectDispatchArgs";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x148000000af;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a0a0a;
}



// FUNCTION 145f2b4f2 FUN_145f2b4f2 body=138 status=ok
// SIG undefined FUN_145f2b4f2(void)

code * FUN_145f2b4f2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneDepthResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x138000000ac;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a0a94;
}



// FUNCTION 145f2b57c FUN_145f2b57c body=292 status=ok
// SIG undefined FUN_145f2b57c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f2b57c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9dceb0) {
    FUN_144b3d300(&DAT_14c9dceb0);
    if (DAT_14c9dceb0 == -1) {
      FUN_145f2b7ea();
      FUN_145f2b6a0();
      FUN_140db5666(&DAT_14c9dce08,0,&DAT_14c9dcda0,L"FVoxelAddIndirectBufferCS",
                    L"/Engine/Private/HairStrands/HairStrandsVoxelRasterCompute.usf",
                    L"AddIndirectBufferCS",5,1,FUN_147198ac0,FUN_147198a60,&LAB_1462ce342,
                    &LAB_147198a5c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e0208);
      _DAT_14c9dce08 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c8621c);
      _Init_thread_footer(&DAT_14c9dceb0);
    }
  }
  return &DAT_14c9dce08;
}



// FUNCTION 145f2b6a0 FUN_145f2b6a0 body=205 status=ok
// SIG undefined FUN_145f2b6a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2b6a0(void)

{
  if ((DAT_14c9dce07 & 2) == 0) {
    DAT_14c9dce07 = DAT_14c9dce07 | 2;
    _DAT_14c9dcda8 = L"FVoxelAddIndirectBufferCS";
    _DAT_14c9dcdc0 = FUN_146826540;
    _DAT_14c9dcdc8 = FUN_146825d77;
    _DAT_14c9dcdd0 = FUN_146825fd6;
    _DAT_14c9dcdd8 = FUN_1407e02ea;
    _DAT_14c9dcde0 = FUN_146826273;
    _DAT_14c9dcdb8 = FUN_147198a2e;
    _DAT_14c9dcdf8 = 0xffffffff000000e0;
    _DAT_14c9dce00 = 8;
    DAT_14c9dce04 = 0;
    _DAT_14c9dcde8 = &LAB_147198a58;
    FUN_145f2b76e();
    FUN_1407e00cc(&DAT_14c9dcda0);
    return;
  }
  return;
}



// FUNCTION 145f2b76e FUN_145f2b76e body=123 status=ok
// SIG undefined FUN_145f2b76e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2b76e(void)

{
  _DAT_14c9e1570 = L"BASE";
  DAT_14c9e159a = 4;
  _DAT_14c9e1578 = FUN_140b35ae4();
  _DAT_14c9e1580 = DAT_14c9dcdb0;
  _DAT_14c9e1588 = &LAB_14682652b;
  DAT_14c9dcdb0 = &DAT_14c9e1570;
  DAT_14c9dce05 = DAT_14c9dce05 + '\x01';
  _DAT_14c9e1590 = 0x100000000;
  if (*(char *)(_DAT_14c9e1578 + 100) != '\0') {
    DAT_14c9dce06 = DAT_14c9dce06 + '\x01';
  }
  return;
}



// FUNCTION 145f2b7ea FUN_145f2b7ea body=261 status=ok
// SIG undefined FUN_145f2b7ea(void)

void FUN_145f2b7ea(void)

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
              0x110) < DAT_14c9e0288) {
    FUN_144b3d300(&DAT_14c9e0288);
    if (DAT_14c9e0288 == -1) {
      FUN_145f2b8f0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x180;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e0208,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c9e6e3);
      _Init_thread_footer(&DAT_14c9e0288);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f2b8f0 FUN_145f2b8f0 body=226 status=ok
// SIG undefined FUN_145f2b8f0(void)

longlong * FUN_145f2b8f0(longlong *param_1)

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
  pcVar13 = FUN_1462cec20;
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



// FUNCTION 145f2b9d4 FUN_145f2b9d4 body=136 status=ok
// SIG undefined FUN_145f2b9d4(void)

code * FUN_145f2b9d4(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000182;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a1e84;
}



// FUNCTION 145f2ba5c FUN_145f2ba5c body=138 status=ok
// SIG undefined FUN_145f2ba5c(void)

code * FUN_145f2ba5c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000183;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f2b9d4;
}



// FUNCTION 145f2bae6 FUN_145f2bae6 body=138 status=ok
// SIG undefined FUN_145f2bae6(void)

code * FUN_145f2bae6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageIndexGlobalCounter";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000185;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a1dfa;
}



// FUNCTION 145f2bb70 FUN_145f2bb70 body=292 status=ok
// SIG undefined FUN_145f2bb70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f2bb70(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9dd228) {
    FUN_144b3d300(&DAT_14c9dd228);
    if (DAT_14c9dd228 == -1) {
      FUN_145f2bdde();
      FUN_145f2bc94();
      FUN_140db5666(&DAT_14c9dd180,0,&DAT_14c9dd118,L"FVoxelRasterComputeCS",
                    L"/Engine/Private/HairStrands/HairStrandsVoxelRasterCompute.usf",L"MainCS",5,2,
                    FUN_147198d12,FUN_147198cb2,&LAB_1462ce360,&LAB_147198cae,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9e03a0);
      _DAT_14c9dd180 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c86240);
      _Init_thread_footer(&DAT_14c9dd228);
    }
  }
  return &DAT_14c9dd180;
}



// FUNCTION 145f2bc94 FUN_145f2bc94 body=205 status=ok
// SIG undefined FUN_145f2bc94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2bc94(void)

{
  if ((DAT_14c9dd17f & 2) == 0) {
    DAT_14c9dd17f = DAT_14c9dd17f | 2;
    _DAT_14c9dd120 = L"FVoxelRasterComputeCS";
    _DAT_14c9dd138 = FUN_146826540;
    _DAT_14c9dd140 = FUN_146825d77;
    _DAT_14c9dd148 = FUN_146825fd6;
    _DAT_14c9dd150 = FUN_1407e02ea;
    _DAT_14c9dd158 = FUN_146826273;
    _DAT_14c9dd130 = FUN_147198c80;
    _DAT_14c9dd170 = 0xffffffff000000e0;
    _DAT_14c9dd178 = 8;
    DAT_14c9dd17c = 0;
    _DAT_14c9dd160 = &LAB_147198caa;
    FUN_145f2bd62();
    FUN_1407e00cc(&DAT_14c9dd118);
    return;
  }
  return;
}



// FUNCTION 145f2bd62 FUN_145f2bd62 body=123 status=ok
// SIG undefined FUN_145f2bd62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2bd62(void)

{
  _DAT_14c9e1600 = L"BASE";
  DAT_14c9e162a = 4;
  _DAT_14c9e1608 = FUN_140b35ae4();
  _DAT_14c9e1610 = DAT_14c9dd128;
  _DAT_14c9e1618 = &LAB_14682652b;
  DAT_14c9dd128 = &DAT_14c9e1600;
  DAT_14c9dd17d = DAT_14c9dd17d + '\x01';
  _DAT_14c9e1620 = 0x100000000;
  if (*(char *)(_DAT_14c9e1608 + 100) != '\0') {
    DAT_14c9dd17e = DAT_14c9dd17e + '\x01';
  }
  return;
}



// FUNCTION 145f2bdde FUN_145f2bdde body=261 status=ok
// SIG undefined FUN_145f2bdde(void)

void FUN_145f2bdde(void)

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
              0x110) < DAT_14c9e0420) {
    FUN_144b3d300(&DAT_14c9e0420);
    if (DAT_14c9e0420 == -1) {
      FUN_145f2bee4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x280;
      local_58 = 0x41b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e03a0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c9e707);
      _Init_thread_footer(&DAT_14c9e0420);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f2bee4 FUN_145f2bee4 body=226 status=ok
// SIG undefined FUN_145f2bee4(void)

longlong * FUN_145f2bee4(longlong *param_1)

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
  pcVar13 = FUN_1462cedbe;
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



// FUNCTION 145f2bfc8 FUN_145f2bfc8 body=136 status=ok
// SIG undefined FUN_145f2bfc8(void)

code * FUN_145f2bfc8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FrameIdMod8";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd80000041f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471a21c6;
}



// FUNCTION 145f2c050 FUN_145f2c050 body=138 status=ok
// SIG undefined FUN_145f2c050(void)

code * FUN_145f2c050(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutPageTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x27000000421;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462cee46;
}



// FUNCTION 145f2c0da FUN_145f2c0da body=138 status=ok
// SIG undefined FUN_145f2c0da(void)

code * FUN_145f2c0da(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MacroGroupId";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd00000041d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462ceed6;
}



// FUNCTION 145f2c164 FUN_145f2c164 body=292 status=ok
// SIG undefined FUN_145f2c164(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f2c164(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9df638) {
    FUN_144b3d300(&DAT_14c9df638);
    if (DAT_14c9df638 == -1) {
      FUN_145f2c3d2();
      FUN_145f2c288();
      FUN_140db5666(&DAT_14c9df590,0,&DAT_14c9df528,L"FScreenTileClassificationCS",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesLiveShadingGlobalPipeline.usf"
                    ,L"ScreenTileClassificationCS",5,1,FUN_14719c74a,FUN_14719c6ea,&LAB_14719c6ae,
                    &LAB_14719c6aa,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e0f58);
      _DAT_14c9df590 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c9b92c);
      _Init_thread_footer(&DAT_14c9df638);
    }
  }
  return &DAT_14c9df590;
}



// FUNCTION 145f2c288 FUN_145f2c288 body=205 status=ok
// SIG undefined FUN_145f2c288(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2c288(void)

{
  if ((DAT_14c9df58f & 2) == 0) {
    DAT_14c9df58f = DAT_14c9df58f | 2;
    _DAT_14c9df530 = L"FScreenTileClassificationCS";
    _DAT_14c9df548 = FUN_146826540;
    _DAT_14c9df550 = FUN_146825d77;
    _DAT_14c9df558 = FUN_146825fd6;
    _DAT_14c9df560 = FUN_1407e02ea;
    _DAT_14c9df568 = FUN_146826273;
    _DAT_14c9df540 = FUN_14719c67c;
    _DAT_14c9df580 = 0xffffffff000000e0;
    _DAT_14c9df588 = 8;
    DAT_14c9df58c = 0;
    _DAT_14c9df570 = &LAB_14719c6a6;
    FUN_145f2c356();
    FUN_1407e00cc(&DAT_14c9df528);
    return;
  }
  return;
}



// FUNCTION 145f2c356 FUN_145f2c356 body=123 status=ok
// SIG undefined FUN_145f2c356(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2c356(void)

{
  _DAT_14c9e1b98 = L"BASE";
  DAT_14c9e1bc2 = 4;
  _DAT_14c9e1ba0 = FUN_140b35ae4();
  _DAT_14c9e1ba8 = DAT_14c9df538;
  _DAT_14c9e1bb0 = &LAB_14682652b;
  DAT_14c9df538 = &DAT_14c9e1b98;
  DAT_14c9df58d = DAT_14c9df58d + '\x01';
  _DAT_14c9e1bb8 = 0x100000000;
  if (*(char *)(_DAT_14c9e1ba0 + 100) != '\0') {
    DAT_14c9df58e = DAT_14c9df58e + '\x01';
  }
  return;
}



// FUNCTION 145f2c3d2 FUN_145f2c3d2 body=261 status=ok
// SIG undefined FUN_145f2c3d2(void)

void FUN_145f2c3d2(void)

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
              0x110) < DAT_14c9e0fd8) {
    FUN_144b3d300(&DAT_14c9e0fd8);
    if (DAT_14c9e0fd8 == -1) {
      FUN_145f2c4d8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0x375;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e0f58,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ca0ed5);
      _Init_thread_footer(&DAT_14c9e0fd8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f2c4d8 FUN_145f2c4d8 body=226 status=ok
// SIG undefined FUN_145f2c4d8(void)

longlong * FUN_145f2c4d8(longlong *param_1)

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
  pcVar13 = FUN_1462d00cc;
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



// FUNCTION 145f2c5bc FUN_145f2c5bc body=136 status=ok
// SIG undefined FUN_145f2c5bc(void)

code * FUN_145f2c5bc(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10c00000381;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471aabfa;
}



// FUNCTION 145f2c644 FUN_145f2c644 body=138 status=ok
// SIG undefined FUN_145f2c644(void)

code * FUN_145f2c644(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LocalToWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x700000037b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462d0154;
}



// FUNCTION 145f2c6ce FUN_145f2c6ce body=138 status=ok
// SIG undefined FUN_145f2c6ce(void)

code * FUN_145f2c6ce(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DownsampleFactor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11c00000385;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471aab70;
}



// FUNCTION 145f2c758 FUN_145f2c758 body=292 status=ok
// SIG undefined FUN_145f2c758(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f2c758(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e23e8) {
    FUN_144b3d300(&DAT_14c9e23e8);
    if (DAT_14c9e23e8 == -1) {
      FUN_145f2c9c6();
      FUN_145f2c87c();
      FUN_140db5666(&DAT_14c9e2340,0,&DAT_14c9e22d8,L"FAllocateSparseVoxelsToRefine",
                    L"/Engine/Private/HeterogeneousVolumes/HeterogeneousVolumesSparseVoxelPipeline.usf"
                    ,L"AllocateSparseVoxelsToRefine",5,1,FUN_1471b5e42,FUN_1471b5de2,&LAB_1471b5da6,
                    &LAB_1471b5da2,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e5b18);
      _DAT_14c9e2340 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cab255);
      _Init_thread_footer(&DAT_14c9e23e8);
    }
  }
  return &DAT_14c9e2340;
}



// FUNCTION 145f2c87c FUN_145f2c87c body=205 status=ok
// SIG undefined FUN_145f2c87c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2c87c(void)

{
  if ((DAT_14c9e233f & 2) == 0) {
    DAT_14c9e233f = DAT_14c9e233f | 2;
    _DAT_14c9e22e0 = L"FAllocateSparseVoxelsToRefine";
    _DAT_14c9e22f8 = FUN_146826540;
    _DAT_14c9e2300 = FUN_146825d77;
    _DAT_14c9e2308 = FUN_146825fd6;
    _DAT_14c9e2310 = FUN_1407e02ea;
    _DAT_14c9e2318 = FUN_146826273;
    _DAT_14c9e22f0 = FUN_1471b5d74;
    _DAT_14c9e2330 = 0xffffffff000000e0;
    _DAT_14c9e2338 = 8;
    DAT_14c9e233c = 0;
    _DAT_14c9e2320 = &LAB_1471b5d9e;
    FUN_145f2c94a();
    FUN_1407e00cc(&DAT_14c9e22d8);
    return;
  }
  return;
}



// FUNCTION 145f2c94a FUN_145f2c94a body=123 status=ok
// SIG undefined FUN_145f2c94a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2c94a(void)

{
  _DAT_14c9e6c20 = L"BASE";
  DAT_14c9e6c4a = 4;
  _DAT_14c9e6c28 = FUN_140b35ae4();
  _DAT_14c9e6c30 = DAT_14c9e22e8;
  _DAT_14c9e6c38 = &LAB_14682652b;
  DAT_14c9e22e8 = &DAT_14c9e6c20;
  DAT_14c9e233d = DAT_14c9e233d + '\x01';
  _DAT_14c9e6c40 = 0x100000000;
  if (*(char *)(_DAT_14c9e6c28 + 100) != '\0') {
    DAT_14c9e233e = DAT_14c9e233e + '\x01';
  }
  return;
}



// FUNCTION 145f2c9c6 FUN_145f2c9c6 body=261 status=ok
// SIG undefined FUN_145f2c9c6(void)

void FUN_145f2c9c6(void)

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
              0x110) < DAT_14c9e5b98) {
    FUN_144b3d300(&DAT_14c9e5b98);
    if (DAT_14c9e5b98 == -1) {
      FUN_145f2cacc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x97;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e5b18,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cccf16);
      _Init_thread_footer(&DAT_14c9e5b98);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f2cacc FUN_145f2cacc body=226 status=ok
// SIG undefined FUN_145f2cacc(void)

longlong * FUN_145f2cacc(longlong *param_1)

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
  pcVar13 = FUN_1462d177a;
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



// FUNCTION 145f2cbb0 FUN_145f2cbb0 body=136 status=ok
// SIG undefined FUN_145f2cbb0(void)

code * FUN_145f2cbb0(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c0000009c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f2ccc2;
}



// FUNCTION 145f2cc38 FUN_145f2cc38 body=138 status=ok
// SIG undefined FUN_145f2cc38(void)

code * FUN_145f2cc38(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000009a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471bf4e0;
}



// FUNCTION 145f2ccc2 FUN_145f2ccc2 body=138 status=ok
// SIG undefined FUN_145f2ccc2(void)

code * FUN_145f2ccc2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VoxelMinResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000009b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f2cc38;
}



// FUNCTION 145f2cd4c FUN_145f2cd4c body=292 status=ok
// SIG undefined FUN_145f2cd4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f2cd4c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e3ea8) {
    FUN_144b3d300(&DAT_14c9e3ea8);
    if (DAT_14c9e3ea8 == -1) {
      FUN_145f2cfba();
      FUN_145f2ce70();
      FUN_140db5666(&DAT_14c9e3e00,0,&DAT_14c9e3d98,L"FIESAtlasAddTextureCS",
                    L"/Engine/Private/IESAtlas.usf",L"MainCS",5,1,FUN_1471ba21c,FUN_1471ba1bc,
                    &LAB_1471ba19e,&LAB_1471ba19a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e64a8)
      ;
      _DAT_14c9e3e00 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cbd4cf);
      _Init_thread_footer(&DAT_14c9e3ea8);
    }
  }
  return &DAT_14c9e3e00;
}



// FUNCTION 145f2ce70 FUN_145f2ce70 body=205 status=ok
// SIG undefined FUN_145f2ce70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2ce70(void)

{
  if ((DAT_14c9e3dff & 2) == 0) {
    DAT_14c9e3dff = DAT_14c9e3dff | 2;
    _DAT_14c9e3da0 = L"FIESAtlasAddTextureCS";
    _DAT_14c9e3db8 = FUN_146826540;
    _DAT_14c9e3dc0 = FUN_146825d77;
    _DAT_14c9e3dc8 = FUN_146825fd6;
    _DAT_14c9e3dd0 = FUN_1407e02ea;
    _DAT_14c9e3dd8 = FUN_146826273;
    _DAT_14c9e3db0 = FUN_1471ba16c;
    _DAT_14c9e3df0 = 0xffffffff000000e0;
    _DAT_14c9e3df8 = 8;
    DAT_14c9e3dfc = 0;
    _DAT_14c9e3de0 = &LAB_1471ba196;
    FUN_145f2cf3e();
    FUN_1407e00cc(&DAT_14c9e3d98);
    return;
  }
  return;
}



// FUNCTION 145f2cf3e FUN_145f2cf3e body=123 status=ok
// SIG undefined FUN_145f2cf3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2cf3e(void)

{
  _DAT_14c9e6f80 = L"BASE";
  DAT_14c9e6faa = 4;
  _DAT_14c9e6f88 = FUN_140b35ae4();
  _DAT_14c9e6f90 = DAT_14c9e3da8;
  _DAT_14c9e6f98 = &LAB_14682652b;
  DAT_14c9e3da8 = &DAT_14c9e6f80;
  DAT_14c9e3dfd = DAT_14c9e3dfd + '\x01';
  _DAT_14c9e6fa0 = 0x100000000;
  if (*(char *)(_DAT_14c9e6f88 + 100) != '\0') {
    DAT_14c9e3dfe = DAT_14c9e3dfe + '\x01';
  }
  return;
}



// FUNCTION 145f2cfba FUN_145f2cfba body=261 status=ok
// SIG undefined FUN_145f2cfba(void)

void FUN_145f2cfba(void)

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
              0x110) < DAT_14c9e6528) {
    FUN_144b3d300(&DAT_14c9e6528);
    if (DAT_14c9e6528 == -1) {
      FUN_145f2d0c0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0xd2;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e64a8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cccfee);
      _Init_thread_footer(&DAT_14c9e6528);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f2d0c0 FUN_145f2d0c0 body=226 status=ok
// SIG undefined FUN_145f2d0c0(void)

longlong * FUN_145f2d0c0(longlong *param_1)

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
  pcVar13 = FUN_1462d2d04;
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



// FUNCTION 145f2d1a4 FUN_145f2d1a4 body=136 status=ok
// SIG undefined FUN_145f2d1a4(void)

code * FUN_145f2d1a4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000000d5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 8;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f2d22c;
}



// FUNCTION 145f2d22c FUN_145f2d22c body=138 status=ok
// SIG undefined FUN_145f2d22c(void)

code * FUN_145f2d22c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InSliceIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000000d4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 8;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c4a64;
}



// FUNCTION 145f2d2b6 FUN_145f2d2b6 body=138 status=ok
// SIG undefined FUN_145f2d2b6(void)

code * FUN_145f2d2b6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AtlasResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000000d6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f2d1a4;
}



// FUNCTION 145f2d340 FUN_145f2d340 body=292 status=ok
// SIG undefined FUN_145f2d340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f2d340(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e4108) {
    FUN_144b3d300(&DAT_14c9e4108);
    if (DAT_14c9e4108 == -1) {
      FUN_145f2d5ae();
      FUN_145f2d464();
      FUN_140db5666(&DAT_14c9e4060,0,&DAT_14c9e3ff8,L"FCopyCubemapToIlluminanceMeterCubemapPS",
                    L"/Engine/Private/ReflectionEnvironmentShaders.usf",
                    L"CopyCubemapToIlluminanceMeterCubemapPS",3,1,FUN_1471ba7c2,FUN_1471ba762,
                    &LAB_1471ba75e,&LAB_1471ba75a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e65b8)
      ;
      _DAT_14c9e4060 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cbda9d);
      _Init_thread_footer(&DAT_14c9e4108);
    }
  }
  return &DAT_14c9e4060;
}



// FUNCTION 145f2d464 FUN_145f2d464 body=205 status=ok
// SIG undefined FUN_145f2d464(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2d464(void)

{
  if ((DAT_14c9e405f & 2) == 0) {
    DAT_14c9e405f = DAT_14c9e405f | 2;
    _DAT_14c9e4000 = L"FCopyCubemapToIlluminanceMeterCubemapPS";
    _DAT_14c9e4018 = FUN_146826540;
    _DAT_14c9e4020 = FUN_146825d77;
    _DAT_14c9e4028 = FUN_146825fd6;
    _DAT_14c9e4030 = FUN_1407e02ea;
    _DAT_14c9e4038 = FUN_146826273;
    _DAT_14c9e4010 = FUN_1471ba72c;
    _DAT_14c9e4050 = 0xffffffff000000e0;
    _DAT_14c9e4058 = 8;
    DAT_14c9e405c = 0;
    _DAT_14c9e4040 = &LAB_1471ba756;
    FUN_145f2d532();
    FUN_1407e00cc(&DAT_14c9e3ff8);
    return;
  }
  return;
}



// FUNCTION 145f2d532 FUN_145f2d532 body=123 status=ok
// SIG undefined FUN_145f2d532(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2d532(void)

{
  _DAT_14c9e6fe0 = L"BASE";
  DAT_14c9e700a = 4;
  _DAT_14c9e6fe8 = FUN_140b35ae4();
  _DAT_14c9e6ff0 = DAT_14c9e4008;
  _DAT_14c9e6ff8 = &LAB_14682652b;
  DAT_14c9e4008 = &DAT_14c9e6fe0;
  DAT_14c9e405d = DAT_14c9e405d + '\x01';
  _DAT_14c9e7000 = 0x100000000;
  if (*(char *)(_DAT_14c9e6fe8 + 100) != '\0') {
    DAT_14c9e405e = DAT_14c9e405e + '\x01';
  }
  return;
}



// FUNCTION 145f2d5ae FUN_145f2d5ae body=261 status=ok
// SIG undefined FUN_145f2d5ae(void)

void FUN_145f2d5ae(void)

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
              0x110) < DAT_14c9e6638) {
    FUN_144b3d300(&DAT_14c9e6638);
    if (DAT_14c9e6638 == -1) {
      FUN_145f2d6b4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0x1a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e65b8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ccd8ad);
      _Init_thread_footer(&DAT_14c9e6638);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f2d6b4 FUN_145f2d6b4 body=226 status=ok
// SIG undefined FUN_145f2d6b4(void)

longlong * FUN_145f2d6b4(longlong *param_1)

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
  pcVar13 = FUN_1462d2e14;
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



// FUNCTION 145f2d798 FUN_145f2d798 body=136 status=ok
// SIG undefined FUN_145f2d798(void)

code * FUN_145f2d798(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SourceCubemapTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"TextureCube";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000001c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f2d8aa;
}



// FUNCTION 145f2d820 FUN_145f2d820 body=138 status=ok
// SIG undefined FUN_145f2d820(void)

code * FUN_145f2d820(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SvPositionToUVScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000001e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c5322;
}



// FUNCTION 145f2d8aa FUN_145f2d8aa body=138 status=ok
// SIG undefined FUN_145f2d8aa(void)

undefined1 * FUN_145f2d8aa(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1b;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1471c53ac;
}



// FUNCTION 145f2d934 FUN_145f2d934 body=292 status=ok
// SIG undefined FUN_145f2d934(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f2d934(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e77e8) {
    FUN_144b3d300(&DAT_14c9e77e8);
    if (DAT_14c9e77e8 == -1) {
      FUN_145f2dba2();
      FUN_145f2da58();
      FUN_140db5666(&DAT_14c9e7740,0,&DAT_14c9e76d8,L"FInstanceCullingOcclusionQueryVS",
                    L"/Engine/Private/InstanceCulling/InstanceCullingOcclusionQuery.usf",L"MainVS",0
                    ,2,FUN_1471d03f8,FUN_1471d0398,&LAB_1471d0380,&LAB_1471d037c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9e9cf0);
      _DAT_14c9e7740 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cdba70);
      _Init_thread_footer(&DAT_14c9e77e8);
    }
  }
  return &DAT_14c9e7740;
}



// FUNCTION 145f2da58 FUN_145f2da58 body=205 status=ok
// SIG undefined FUN_145f2da58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2da58(void)

{
  if ((DAT_14c9e773f & 2) == 0) {
    DAT_14c9e773f = DAT_14c9e773f | 2;
    _DAT_14c9e76e0 = L"FInstanceCullingOcclusionQueryVS";
    _DAT_14c9e76f8 = FUN_146826540;
    _DAT_14c9e7700 = FUN_146825d77;
    _DAT_14c9e7708 = FUN_146825fd6;
    _DAT_14c9e7710 = FUN_1407e02ea;
    _DAT_14c9e7718 = FUN_146826273;
    _DAT_14c9e76f0 = FUN_1471d034e;
    _DAT_14c9e7730 = 0xffffffff000000e0;
    _DAT_14c9e7738 = 8;
    DAT_14c9e773c = 0;
    _DAT_14c9e7720 = &LAB_1471d0378;
    FUN_145f2db26();
    FUN_1407e00cc(&DAT_14c9e76d8);
    return;
  }
  return;
}



// FUNCTION 145f2db26 FUN_145f2db26 body=123 status=ok
// SIG undefined FUN_145f2db26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2db26(void)

{
  _DAT_14c9eaf28 = L"BASE";
  DAT_14c9eaf52 = 4;
  _DAT_14c9eaf30 = FUN_140b35ae4();
  _DAT_14c9eaf38 = DAT_14c9e76e8;
  _DAT_14c9eaf40 = &LAB_14682652b;
  DAT_14c9e76e8 = &DAT_14c9eaf28;
  DAT_14c9e773d = DAT_14c9e773d + '\x01';
  _DAT_14c9eaf48 = 0x100000000;
  if (*(char *)(_DAT_14c9eaf30 + 100) != '\0') {
    DAT_14c9e773e = DAT_14c9e773e + '\x01';
  }
  return;
}



// FUNCTION 145f2dba2 FUN_145f2dba2 body=261 status=ok
// SIG undefined FUN_145f2dba2(void)

void FUN_145f2dba2(void)

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
              0x110) < DAT_14c9e9d70) {
    FUN_144b3d300(&DAT_14c9e9d70);
    if (DAT_14c9e9d70 == -1) {
      FUN_145f2dca8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x80;
      local_58 = 0x98;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e9cf0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf42a1);
      _Init_thread_footer(&DAT_14c9e9d70);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f2dca8 FUN_145f2dca8 body=226 status=ok
// SIG undefined FUN_145f2dca8(void)

longlong * FUN_145f2dca8(longlong *param_1)

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
  pcVar13 = FUN_1462d4c50;
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



// FUNCTION 145f2dd8c FUN_145f2dd8c body=136 status=ok
// SIG undefined FUN_145f2dd8c(void)

code * FUN_145f2dd8c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HZBSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x58000000a2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d36fa;
}



// FUNCTION 145f2de14 FUN_145f2de14 body=138 status=ok
// SIG undefined FUN_145f2de14(void)

code * FUN_145f2de14(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceIdBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint32>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000009e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471d380e;
}



// FUNCTION 145f2de9e FUN_145f2de9e body=138 status=ok
// SIG undefined FUN_145f2de9e(void)

code * FUN_145f2de9e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HZBSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000000a3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f2dd8c;
}



// FUNCTION 145f2df28 FUN_145f2df28 body=292 status=ok
// SIG undefined FUN_145f2df28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f2df28(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f26b8) {
    FUN_144b3d300(&DAT_14c9f26b8);
    if (DAT_14c9f26b8 == -1) {
      FUN_145f2e196();
      FUN_145f2e04c();
      FUN_140db5666(&DAT_14c9f2610,0,&DAT_14c9f25a8,L"FSplatRadianceCacheIntoAtlasCS",
                    L"/Engine/Private/Lumen/LumenRadianceCacheHardwareRayTracing.usf",
                    L"SplatRadianceCacheIntoAtlasCS",5,2,FUN_1471ec3fe,FUN_1471ec39e,&LAB_1462db3ca,
                    &LAB_1471ec39a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f5f30);
      _DAT_14c9f2610 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d33094);
      _Init_thread_footer(&DAT_14c9f26b8);
    }
  }
  return &DAT_14c9f2610;
}



// FUNCTION 145f2e04c FUN_145f2e04c body=205 status=ok
// SIG undefined FUN_145f2e04c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2e04c(void)

{
  if ((DAT_14c9f260f & 2) == 0) {
    DAT_14c9f260f = DAT_14c9f260f | 2;
    _DAT_14c9f25b0 = L"FSplatRadianceCacheIntoAtlasCS";
    _DAT_14c9f25c8 = FUN_146826540;
    _DAT_14c9f25d0 = FUN_146825d77;
    _DAT_14c9f25d8 = FUN_146825fd6;
    _DAT_14c9f25e0 = FUN_1407e02ea;
    _DAT_14c9f25e8 = FUN_146826273;
    _DAT_14c9f25c0 = FUN_1471ec36c;
    _DAT_14c9f2600 = 0xffffffff000000e0;
    _DAT_14c9f2608 = 8;
    DAT_14c9f260c = 0;
    _DAT_14c9f25f0 = &LAB_1471ec396;
    FUN_145f2e11a();
    FUN_1407e00cc(&DAT_14c9f25a8);
    return;
  }
  return;
}



// FUNCTION 145f2e11a FUN_145f2e11a body=123 status=ok
// SIG undefined FUN_145f2e11a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2e11a(void)

{
  _DAT_14c9f7940 = L"BASE";
  DAT_14c9f796a = 4;
  _DAT_14c9f7948 = FUN_140b35ae4();
  _DAT_14c9f7950 = DAT_14c9f25b8;
  _DAT_14c9f7958 = &LAB_14682652b;
  DAT_14c9f25b8 = &DAT_14c9f7940;
  DAT_14c9f260d = DAT_14c9f260d + '\x01';
  _DAT_14c9f7960 = 0x100000000;
  if (*(char *)(_DAT_14c9f7948 + 100) != '\0') {
    DAT_14c9f260e = DAT_14c9f260e + '\x01';
  }
  return;
}



// FUNCTION 145f2e196 FUN_145f2e196 body=261 status=ok
// SIG undefined FUN_145f2e196(void)

void FUN_145f2e196(void)

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
              0x110) < DAT_14c9f5fb0) {
    FUN_144b3d300(&DAT_14c9f5fb0);
    if (DAT_14c9f5fb0 == -1) {
      FUN_145f2e29c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1d0;
      local_58 = 0xe4;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f5f30,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d57b07);
      _Init_thread_footer(&DAT_14c9f5fb0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f2e29c FUN_145f2e29c body=226 status=ok
// SIG undefined FUN_145f2e29c(void)

longlong * FUN_145f2e29c(longlong *param_1)

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
  pcVar13 = FUN_1462dbf74;
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



// FUNCTION 145f2e380 FUN_145f2e380 body=136 status=ok
// SIG undefined FUN_145f2e380(void)

code * FUN_145f2e380(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWDepthProbeAtlasTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000e6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f3362;
}



// FUNCTION 145f2e408 FUN_145f2e408 body=138 status=ok
// SIG undefined FUN_145f2e408(void)

code * FUN_145f2e408(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TraceRadianceTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b8000000e9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f2e492;
}



// FUNCTION 145f2e492 FUN_145f2e492 body=138 status=ok
// SIG undefined FUN_145f2e492(void)

code * FUN_145f2e492(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TraceHitTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b0000000e8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462dbffc;
}



// FUNCTION 145f2e51c FUN_145f2e51c body=205 status=ok
// SIG undefined FUN_145f2e51c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2e51c(void)

{
  if ((DAT_14c9f3eaf & 2) == 0) {
    DAT_14c9f3eaf = DAT_14c9f3eaf | 2;
    _DAT_14c9f3e50 = L"FReflectionTileClassificationBuildListsCS";
    _DAT_14c9f3e68 = FUN_146826540;
    _DAT_14c9f3e70 = FUN_146825d77;
    _DAT_14c9f3e78 = FUN_146825fd6;
    _DAT_14c9f3e80 = FUN_1407e02ea;
    _DAT_14c9f3e88 = FUN_146826273;
    _DAT_14c9f3e60 = FUN_1471ef48c;
    _DAT_14c9f3ea0 = 0xffffffff000000e0;
    _DAT_14c9f3ea8 = 8;
    DAT_14c9f3eac = 0;
    _DAT_14c9f3e90 = &LAB_1471ef4b6;
    FUN_145f2e5ea();
    FUN_1407e00cc(&DAT_14c9f3e48);
    return;
  }
  return;
}



// FUNCTION 145f2e5ea FUN_145f2e5ea body=123 status=ok
// SIG undefined FUN_145f2e5ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2e5ea(void)

{
  _DAT_14c9f7cf8 = L"BASE";
  DAT_14c9f7d22 = 4;
  _DAT_14c9f7d00 = FUN_140b35ae4();
  _DAT_14c9f7d08 = DAT_14c9f3e58;
  _DAT_14c9f7d10 = &LAB_14682652b;
  DAT_14c9f3e58 = &DAT_14c9f7cf8;
  DAT_14c9f3ead = DAT_14c9f3ead + '\x01';
  _DAT_14c9f7d18 = 0x100000000;
  if (*(char *)(_DAT_14c9f7d00 + 100) != '\0') {
    DAT_14c9f3eae = DAT_14c9f3eae + '\x01';
  }
  return;
}



// FUNCTION 145f2e666 FUN_145f2e666 body=226 status=ok
// SIG undefined FUN_145f2e666(void)

longlong * FUN_145f2e666(longlong *param_1)

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
  pcVar13 = FUN_1462ddcec;
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



// FUNCTION 145f2e74a FUN_145f2e74a body=138 status=ok
// SIG undefined FUN_145f2e74a(void)

code * FUN_145f2e74a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ResolveTileUsed";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DArray<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000001ab;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f2e7d4;
}



// FUNCTION 145f2e7d4 FUN_145f2e7d4 body=138 status=ok
// SIG undefined FUN_145f2e7d4(void)

code * FUN_145f2e7d4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWReflectionTileData";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000001aa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f7ee0;
}



// FUNCTION 145f2e85e FUN_145f2e85e body=142 status=ok
// SIG undefined FUN_145f2e85e(void)

code * FUN_145f2e85e(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x40000001ad;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462dde06;
}



// FUNCTION 145f2e8ec FUN_145f2e8ec body=205 status=ok
// SIG undefined FUN_145f2e8ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2e8ec(void)

{
  if ((DAT_14c9f3fd7 & 2) == 0) {
    DAT_14c9f3fd7 = DAT_14c9f3fd7 | 2;
    _DAT_14c9f3f78 = L"FReflectionGenerateRaysCS";
    _DAT_14c9f3f90 = FUN_146826540;
    _DAT_14c9f3f98 = FUN_146825d77;
    _DAT_14c9f3fa0 = FUN_146825fd6;
    _DAT_14c9f3fa8 = FUN_1407e02ea;
    _DAT_14c9f3fb0 = FUN_146826273;
    _DAT_14c9f3f88 = FUN_1471ef552;
    _DAT_14c9f3fc8 = 0xffffffff000000e0;
    _DAT_14c9f3fd0 = 8;
    DAT_14c9f3fd4 = 0;
    _DAT_14c9f3fb8 = &LAB_1471ef57c;
    FUN_145f2e9ba();
    FUN_1407e00cc(&DAT_14c9f3f70);
    return;
  }
  return;
}



// FUNCTION 145f2e9ba FUN_145f2e9ba body=123 status=ok
// SIG undefined FUN_145f2e9ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f2e9ba(void)

{
  _DAT_14c9f7d28 = L"BASE";
  DAT_14c9f7d52 = 4;
  _DAT_14c9f7d30 = FUN_140b35ae4();
  _DAT_14c9f7d38 = DAT_14c9f3f80;
  _DAT_14c9f7d40 = &LAB_14682652b;
  DAT_14c9f3f80 = &DAT_14c9f7d28;
  DAT_14c9f3fd5 = DAT_14c9f3fd5 + '\x01';
  _DAT_14c9f7d48 = 0x100000000;
  if (*(char *)(_DAT_14c9f7d30 + 100) != '\0') {
    DAT_14c9f3fd6 = DAT_14c9f3fd6 + '\x01';
  }
  return;
}


