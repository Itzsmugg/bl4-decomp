// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142e8a016 FUN_142e8a016 body=576 status=ok
// SIG undefined FUN_142e8a016(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142e8a016(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca24220) {
    FUN_144b3d300(&DAT_14ca24220);
    if (DAT_14ca24220 == -1) {
      FUN_142ea029a();
      if ((DAT_14ca24317 & 2) == 0) {
        DAT_14ca24317 = DAT_14ca24317 | 2;
        _DAT_14ca242b8 = L"FDiaphragmDOFHybridScatterVS";
        _DAT_14ca242d0 = FUN_146826540;
        _DAT_14ca242d8 = FUN_146825d77;
        _DAT_14ca242e0 = FUN_146825fd6;
        _DAT_14ca242e8 = FUN_1407e02ea;
        _DAT_14ca242f0 = FUN_146826273;
        _DAT_14ca242c8 = FUN_142ea0aca;
        _DAT_14ca24308 = 0xffffffff000000e0;
        _DAT_14ca24310 = 8;
        DAT_14ca24314 = 0;
        _DAT_14ca242f8 = &LAB_142ea0af6;
        _DAT_14ca24318 = L"BASE";
        DAT_14ca24342 = 4;
        _DAT_14ca24320 = FUN_140b35ae4();
        _DAT_14ca24328 = DAT_14ca242c0;
        _DAT_14ca24330 = &LAB_14682652b;
        DAT_14ca242c0 = &DAT_14ca24318;
        DAT_14ca24315 = DAT_14ca24315 + '\x01';
        _DAT_14ca24338 = 0x100000000;
        if (*(char *)(_DAT_14ca24320 + 100) != '\0') {
          DAT_14ca24316 = DAT_14ca24316 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca242b0);
      }
      FUN_140db5666(&DAT_14ca24178,0,&DAT_14ca242b0,L"FDiaphragmDOFHybridScatterVS",
                    L"/Engine/Private/DiaphragmDOF/DOFHybridScatterVertexShader.usf",
                    L"ScatterMainVS",0,1,FUN_142ea0204,FUN_142ea01a4,&LAB_142ea0182,&LAB_142ea017e,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca24228);
      _DAT_14ca24178 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ea028e);
      _Init_thread_footer(&DAT_14ca24220);
    }
  }
  return &DAT_14ca24178;
}



// FUNCTION 142e8a256 FUN_142e8a256 body=576 status=ok
// SIG undefined FUN_142e8a256(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142e8a256(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca243f0) {
    FUN_144b3d300(&DAT_14ca243f0);
    if (DAT_14ca243f0 == -1) {
      FUN_142ea029a();
      if ((DAT_14ca2445f & 2) == 0) {
        DAT_14ca2445f = DAT_14ca2445f | 2;
        _DAT_14ca24400 = L"FDiaphragmDOFHybridScatterPS";
        _DAT_14ca24418 = FUN_146826540;
        _DAT_14ca24420 = FUN_146825d77;
        _DAT_14ca24428 = FUN_146825fd6;
        _DAT_14ca24430 = FUN_1407e02ea;
        _DAT_14ca24438 = FUN_146826273;
        _DAT_14ca24410 = FUN_142ea0c64;
        _DAT_14ca24450 = 0xffffffff000000e0;
        _DAT_14ca24458 = 8;
        DAT_14ca2445c = 0;
        _DAT_14ca24440 = &LAB_142ea0c90;
        _DAT_14ca24460 = L"BASE";
        DAT_14ca2448a = 4;
        _DAT_14ca24468 = FUN_140b35ae4();
        _DAT_14ca24470 = DAT_14ca24408;
        _DAT_14ca24478 = &LAB_14682652b;
        DAT_14ca24408 = &DAT_14ca24460;
        DAT_14ca2445d = DAT_14ca2445d + '\x01';
        _DAT_14ca24480 = 0x100000000;
        if (*(char *)(_DAT_14ca24468 + 100) != '\0') {
          DAT_14ca2445e = DAT_14ca2445e + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca243f8);
      }
      FUN_140db5666(&DAT_14ca24348,0,&DAT_14ca243f8,L"FDiaphragmDOFHybridScatterPS",
                    L"/Engine/Private/DiaphragmDOF/DOFHybridScatterPixelShader.usf",L"ScatterMainPS"
                    ,3,0x14,FUN_142ea0bce,FUN_142ea0b6e,&LAB_142ea0afe,&LAB_142ea0afa,&LAB_14712ac0c
                    ,&LAB_14712ac08,0xe0,&DAT_14ca24228);
      _DAT_14ca24348 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ea0c58);
      _Init_thread_footer(&DAT_14ca243f0);
    }
  }
  return &DAT_14ca24348;
}



// FUNCTION 142e8a496 FUN_142e8a496 body=576 status=ok
// SIG undefined FUN_142e8a496(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142e8a496(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca24538) {
    FUN_144b3d300(&DAT_14ca24538);
    if (DAT_14ca24538 == -1) {
      FUN_142ea0e14();
      if ((DAT_14ca2462f & 2) == 0) {
        DAT_14ca2462f = DAT_14ca2462f | 2;
        _DAT_14ca245d0 = L"FDiaphragmDOFRecombineCS";
        _DAT_14ca245e8 = FUN_146826540;
        _DAT_14ca245f0 = FUN_146825d77;
        _DAT_14ca245f8 = FUN_146825fd6;
        _DAT_14ca24600 = FUN_1407e02ea;
        _DAT_14ca24608 = FUN_146826273;
        _DAT_14ca245e0 = FUN_142ea1d54;
        _DAT_14ca24620 = 0xffffffff000000e0;
        _DAT_14ca24628 = 8;
        DAT_14ca2462c = 0;
        _DAT_14ca24610 = &LAB_142ea1d80;
        _DAT_14ca24630 = L"BASE";
        DAT_14ca2465a = 4;
        _DAT_14ca24638 = FUN_140b35ae4();
        _DAT_14ca24640 = DAT_14ca245d8;
        _DAT_14ca24648 = &LAB_14682652b;
        DAT_14ca245d8 = &DAT_14ca24630;
        DAT_14ca2462d = DAT_14ca2462d + '\x01';
        _DAT_14ca24650 = 0x100000000;
        if (*(char *)(_DAT_14ca24638 + 100) != '\0') {
          DAT_14ca2462e = DAT_14ca2462e + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca245c8);
      }
      FUN_140db5666(&DAT_14ca24490,0,&DAT_14ca245c8,L"FDiaphragmDOFRecombineCS",
                    L"/Engine/Private/DiaphragmDOF/DOFRecombine.usf",L"RecombineMainCS",5,0x5a,
                    FUN_142ea0d7e,FUN_142ea0d1e,&LAB_142ea0c98,&LAB_142ea0c94,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca24540);
      _DAT_14ca24490 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ea0e08);
      _Init_thread_footer(&DAT_14ca24538);
    }
  }
  return &DAT_14ca24490;
}



// FUNCTION 142e8a6d6 FUN_142e8a6d6 body=24100 status=ok
// SIG undefined FUN_142e8a6d6(void)

bool FUN_142e8a6d6(ulonglong param_1,longlong *param_2,longlong param_3,undefined8 *param_4,
                  longlong param_5,ulonglong *param_6)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  double dVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  uint5 uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  byte bVar12;
  byte bVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  uint *puVar20;
  int *piVar21;
  longlong lVar22;
  undefined8 *puVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  undefined1 uVar27;
  uint uVar28;
  uint uVar29;
  ulonglong uVar30;
  bool bVar31;
  int iVar32;
  undefined4 uVar33;
  undefined8 *puVar34;
  undefined6 uVar35;
  byte bVar36;
  byte bVar37;
  longlong lVar38;
  ulonglong uVar39;
  undefined8 uVar40;
  longlong *plVar41;
  ulonglong uVar42;
  undefined8 *puVar43;
  uint *puVar44;
  byte *pbVar45;
  undefined2 uVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  byte bVar49;
  undefined8 *puVar50;
  int iVar51;
  undefined4 uVar52;
  int *piVar53;
  float fVar54;
  float fVar55;
  float extraout_XMM0_Da;
  undefined4 uVar56;
  uint extraout_XMM0_Db;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined4 uVar61;
  float fVar62;
  float fVar63;
  undefined4 uVar64;
  float fVar65;
  undefined4 uVar66;
  undefined1 auStack_598 [32];
  uint **local_578;
  undefined8 *local_570;
  undefined4 local_568;
  ulonglong local_560;
  undefined1 local_551;
  ulonglong *local_550;
  undefined1 local_541;
  undefined8 *local_540;
  undefined1 local_534;
  undefined1 local_533;
  undefined1 local_532;
  undefined1 local_531;
  ulonglong local_530;
  longlong local_528;
  ulonglong local_520;
  undefined8 *local_518;
  ulonglong local_510;
  undefined4 local_504;
  int *local_500;
  ulonglong local_4f8;
  undefined4 local_4f0;
  byte local_4eb;
  byte local_4ea;
  byte local_4e9;
  undefined8 local_4e8;
  undefined1 *local_4e0;
  ulonglong local_4d8;
  ulonglong local_4d0;
  longlong local_4c8;
  int *local_4c0;
  undefined8 *local_4b8;
  undefined2 local_4ac;
  undefined2 local_4aa;
  ulonglong local_4a8;
  undefined8 *local_4a0;
  ulonglong local_498;
  longlong *local_490;
  uint local_488;
  undefined4 local_484;
  int local_480;
  int local_47c;
  int local_478;
  uint local_474;
  longlong local_470;
  undefined8 *local_468;
  undefined8 *local_460;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  float local_43c;
  float local_438;
  float local_434;
  float local_430;
  int local_42c;
  ulonglong local_428;
  ulonglong local_420;
  longlong *local_418;
  uint local_40c;
  ulonglong local_408;
  ulonglong local_400;
  ulonglong local_3f8;
  ulonglong local_3f0;
  float local_3e8;
  uint uStack_3e4;
  uint uStack_3e0;
  uint uStack_3dc;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  int local_3b8;
  char local_3b4;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 *local_398;
  undefined8 *local_390;
  int *local_388;
  undefined8 *local_380;
  uint **local_378;
  longlong local_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  uint *local_348;
  ulonglong uStack_340;
  undefined1 *local_338;
  longlong local_330;
  int local_328;
  int local_324;
  undefined4 local_320;
  int local_31c;
  int local_318;
  undefined4 local_314;
  ulonglong local_310;
  ulonglong local_308;
  ulonglong uStack_300;
  uint *local_2f8;
  ulonglong uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 *local_2d8;
  ulonglong uStack_2d0;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  int local_2b0;
  int local_2ac;
  float local_2a8;
  float local_2a4;
  undefined8 local_2a0;
  undefined8 local_298;
  int local_290;
  uint local_28c;
  undefined8 local_288;
  uint local_280;
  uint local_27c;
  undefined8 local_278;
  int local_270;
  int local_26c;
  int local_268;
  longlong local_260;
  longlong lStack_258;
  undefined8 *local_250;
  ulonglong uStack_248;
  uint local_23c [3];
  uint local_230;
  undefined1 local_220 [20];
  float local_20c;
  float local_1f4;
  undefined4 local_1ec;
  float local_1e8;
  byte local_1da;
  byte local_1d9;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  uint local_1b0;
  undefined2 uStack_1ac;
  undefined2 uStack_1aa;
  undefined2 uStack_1a8;
  undefined1 uStack_1a6;
  undefined2 uStack_1a5;
  undefined1 uStack_1a3;
  undefined2 uStack_1a2;
  undefined8 *local_1a0;
  int *local_198;
  ulonglong *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  uint uStack_140;
  undefined2 uStack_13c;
  undefined2 uStack_13a;
  undefined8 local_138;
  undefined1 *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  uint uStack_108;
  undefined2 uStack_104;
  undefined2 uStack_102;
  undefined2 local_100;
  undefined1 local_fe;
  undefined2 local_fd;
  undefined1 local_fb;
  ulonglong local_f0;
  
  plVar41 = DAT_14ca27dc8;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_598;
  cVar14 = *(char *)((longlong)param_4 + 0x93);
  local_560 = param_1;
  local_460 = param_4;
  local_418 = param_2;
  if (*(code **)(*DAT_14ca27dc8 + 0xa8) == FUN_144aa0162) {
    iVar15 = FUN_140052f36(DAT_14ca27dc8);
    if (iVar15 == 0) {
      pbVar45 = (byte *)(plVar41 + 0xb);
    }
    else {
      pbVar45 = (byte *)plVar41[10];
    }
    local_1d9 = *pbVar45;
  }
  else {
    local_1d9 = (**(code **)(*DAT_14ca27dc8 + 0xa8))(DAT_14ca27dc8);
  }
  plVar41 = DAT_14ca27dc8;
  lVar38 = (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2) * 0x3c;
  local_540 = (undefined8 *)
              CONCAT44(local_540._4_4_,
                       (&DAT_14ca814c8)
                       [(ulonglong)
                        *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2) * 0xf
                       ]);
  iVar15 = 5 - (uint)(((&DAT_14ca814c8)
                       [(ulonglong)
                        *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2) * 0xf
                       ] & 4) == 0);
  if (*(int *)(DAT_14ca21280 + 4) < iVar15) {
    iVar15 = *(int *)(DAT_14ca21280 + 4);
  }
  local_47c = 3;
  if (3 < iVar15) {
    local_47c = iVar15;
  }
  local_474 = *(uint *)(DAT_14ca21268 + 4);
  if (2 < local_474) {
    local_474 = 0;
  }
  uVar29 = *(uint *)(DAT_14ca21328 + 4);
  uVar25 = 2;
  if ((int)uVar29 < 2) {
    uVar25 = uVar29;
  }
  local_3f0 = (ulonglong)uVar25;
  if ((int)uVar25 < 1) {
    local_3f0 = 0;
  }
  local_520 = CONCAT44(local_520._4_4_,*(int *)(DAT_14ca21220 + 4));
  fVar60 = 1.0;
  local_468 = (undefined8 *)CONCAT44(local_468._4_4_,uVar29);
  if (0 < (int)uVar29) {
    fVar60 = *(float *)(DAT_14ca21340 + 4) * 0.5;
  }
  fVar65 = *(float *)(DAT_14ca212f8 + 4);
  fVar63 = *(float *)(DAT_14ca212e0 + 4);
  iVar15 = *(int *)(DAT_14ca21298 + 4);
  local_42c = *(int *)(DAT_14ca212b0 + 4);
  local_480 = *(int *)(DAT_14ca21238 + 4);
  uVar25 = (uint)(1 < *(int *)(DAT_14ca21220 + 4));
  iVar51 = uVar25 + 1;
  local_528 = param_3;
  if ((cVar14 == '\x1a') && (local_1d9 == 0 && ((int)uVar29 < 1 && local_480 == 0))) {
    if (*(code **)(*DAT_14ca27dc8 + 0xa8) == FUN_144aa0162) {
      iVar16 = FUN_140052f36(DAT_14ca27dc8);
      if (iVar16 == 0) {
        plVar41 = plVar41 + 0xb;
      }
      else {
        plVar41 = (longlong *)plVar41[10];
      }
      cVar14 = (char)*plVar41;
    }
    else {
      cVar14 = (**(code **)(*DAT_14ca27dc8 + 0xa8))(DAT_14ca27dc8);
    }
    if (cVar14 != '\0') goto LAB_142e8a93e;
    local_1da = (*(byte *)((longlong)&DAT_14ca814c8 + lVar38 + 1) & 8) >> 3;
  }
  else {
LAB_142e8a93e:
    local_1da = 0;
  }
  lVar22 = local_528;
  uVar47 = *(ulonglong *)(local_528 + 0x3108);
  FUN_1405bdb5e(local_220,local_528);
  FUN_142eb135e(local_23c,lVar22);
  local_250 = (undefined8 *)0x0;
  uStack_248 = 0;
  local_260 = 0;
  lStack_258 = 0;
  local_290 = (*(int *)(lVar22 + 0x3024) == 1) + 5;
  iVar24 = (int)((ulonglong)*(undefined8 *)(lVar22 + 0x3100) >> 0x20);
  iVar26 = (int)((ulonglong)*(undefined8 *)(lVar22 + 0x30f8) >> 0x20);
  iVar32 = (int)*(undefined8 *)(lVar22 + 0x3100);
  iVar18 = (int)*(undefined8 *)(lVar22 + 0x30f8);
  local_26c = iVar24;
  iVar16 = iVar26;
  local_270 = iVar32;
  iVar17 = iVar18;
  if (*(int *)(lVar22 + 0x3024) == 1) {
    fVar55 = *(float *)(*(longlong *)(lVar22 + 8) + 0x110);
    fVar54 = (float)(*(int *)(lVar22 + 0x4e4) - *(int *)(lVar22 + 0x4dc)) * fVar55 *
             *(float *)(lVar22 + 0x45c);
    local_26c = -((int)ROUND(-0.5 - (fVar54 + fVar54)) >> 1);
    fVar55 = (float)(*(int *)(lVar22 + 0x4e0) - *(int *)(lVar22 + 0x4d8)) * fVar55 *
             *(float *)(lVar22 + 0x45c);
    local_270 = -((int)ROUND(-0.5 - (fVar55 + fVar55)) >> 1);
    iVar16 = 0;
    iVar17 = 0;
  }
  local_26c = local_26c - iVar16;
  local_270 = local_270 - iVar17;
  if (1.0 <= fVar65) {
    fVar65 = 1.0;
  }
  if (fVar63 <= 3.0) {
    fVar63 = 3.0;
  }
  local_280 = iVar32 - iVar18;
  local_3f8 = (ulonglong)local_280;
  local_27c = iVar24 - iVar26;
  local_420 = (ulonglong)local_27c;
  local_288 = DAT_14c967818;
  local_278 = DAT_14c967818;
  local_28c = (uint)(byte)(2 - (*(int *)(DAT_14ca21358 + 4) == 0));
  iVar17 = (int)(iVar51 + local_280 + -1) / iVar51;
  local_298 = CONCAT44((int)(local_27c + iVar51 + -1) / iVar51,iVar17);
  local_2a0 = local_298;
  iVar16 = iVar17;
  if (uVar47 != 0 && (*(int *)(lVar22 + 0x3020) - 2U & 0xfffffffd) == 0) {
    uVar39 = (longlong)(int)((local_270 + uVar25) - (int)DAT_14c967818) / (longlong)iVar51;
    iVar16 = (int)uVar39;
    local_298 = uVar39 & 0xffffffff |
                (longlong)(int)((local_26c + uVar25) - (int)((ulonglong)DAT_14c967818 >> 0x20)) /
                (longlong)iVar51 << 0x20;
  }
  local_2a4 = (float)iVar16;
  local_2a8 = (float)iVar17;
  if (local_20c <= local_1e8) {
    local_20c = local_1e8;
  }
  if (local_1f4 <= local_20c) {
    local_20c = local_1f4;
  }
  fVar57 = local_20c * local_2a8;
  local_498 = uVar47;
  local_268 = iVar51;
  uVar19 = FUN_14023cd2e(local_220,DAT_14c75b140);
  fVar54 = ABS(extraout_XMM0_Da);
  local_4a0 = (undefined8 *)CONCAT71(local_4a0._1_7_,iVar15 != 0);
  fVar55 = fVar57;
  if (fVar57 <= fVar54) {
    fVar55 = fVar54;
  }
  local_518 = (undefined8 *)CONCAT71((int7)((ulonglong)uVar19 >> 8),local_42c != 0);
  uVar47 = *(ulonglong *)((longlong)local_460 + 0x84);
  uVar29 = (uint)(uVar47 >> 0x20);
  local_2ac = (int)(uVar25 + uVar29) / iVar51;
  uVar28 = (uint)uVar47;
  local_2b0 = (int)(uVar25 + uVar28) / iVar51;
  uVar25 = (local_230 & 1) + 1;
  if (local_23c[0] == 0) {
    uVar25 = 0;
  }
  if (fVar55 < fVar60) {
    *param_6 = (ulonglong)local_460;
    goto LAB_142e8fc0b;
  }
  local_470 = CONCAT44(local_470._4_4_,*(undefined4 *)((longlong)&DAT_14ca814d0 + lVar38 + 4));
  if (((ulonglong)local_540 & 4) == 0) {
    local_478 = *(int *)(DAT_14ca212c8 + 4);
    local_484 = 0;
LAB_142e8ad28:
    local_4f0 = 0;
  }
  else {
    local_484 = (undefined4)
                CONCAT71((int7)((ulonglong)DAT_14ca21250 >> 8),*(int *)(DAT_14ca21250 + 4) == 1);
    local_478 = *(int *)(DAT_14ca212c8 + 4);
    if ((int)local_468 < 1) goto LAB_142e8ad28;
    local_4f0 = (undefined4)
                CONCAT71((int7)((ulonglong)DAT_14ca21310 >> 8),*(int *)(DAT_14ca21310 + 4) != 0);
  }
  bVar12 = *(byte *)((longlong)local_460 + 0x92);
  uVar27 = *(undefined1 *)((longlong)local_460 + 0x94);
  uVar46 = *(undefined2 *)((longlong)local_460 + 0x8c);
  uVar4 = *(undefined2 *)((longlong)local_460 + 0x8e);
  local_551 = *(undefined1 *)(local_460 + 0x12);
  local_540 = (undefined8 *)CONCAT44(local_540._4_4_,*(undefined4 *)(local_460 + 0xd));
  uVar33 = *(undefined4 *)((longlong)local_460 + 0x6c);
  puVar23 = local_460 + 0xe;
  uVar66 = *(undefined4 *)puVar23;
  uVar61 = *(undefined4 *)((longlong)local_460 + 0x74);
  uVar6 = *puVar23;
  uVar5 = *puVar23;
  uVar40 = *puVar23;
  uVar19 = *puVar23;
  uVar64 = *(undefined4 *)(local_460 + 0xf);
  local_4e8 = CONCAT44(local_4e8._4_4_,*(undefined4 *)(local_460 + 0x10));
  local_510 = CONCAT71(local_510._1_7_,*(undefined1 *)((longlong)local_460 + 0x95));
  local_4d8 = CONCAT44(local_4d8._4_4_,*(undefined4 *)((longlong)local_460 + 0x7c));
  uVar39 = local_460[0xc] & 0xfffffffff7ddeffc | 0x20000;
  local_530 = (longlong)((ulonglong)(uint)((int)uVar28 >> 0x1f) << 0x20 | uVar47 & 0xffffffff) /
              (longlong)iVar51 & 0xffffffff;
  uVar47 = (ulonglong)(uint)((int)uVar29 >> 0x1f) << 0x20 | uVar47 >> 0x20;
  local_4f8 = (longlong)uVar47 / (longlong)iVar51 & 0xffffffff;
  local_4c0 = (int *)(DAT_14ca4af68 | uVar39);
  local_2c8 = 0;
  uStack_2c0._0_1_ = 1;
  local_4eb = fVar63 < fVar57;
  local_4ea = 0.0 < fVar65;
  local_4e9 = fVar63 < fVar54;
  local_488 = uVar25;
  local_43c = fVar63;
  local_438 = fVar57;
  local_430 = fVar60;
  local_3e8 = fVar54;
  uStack_3e4 = extraout_XMM0_Db & 0x7fffffff;
  uStack_3e0 = extraout_XMM0_Dc & 0x7fffffff;
  uStack_3dc = extraout_XMM0_Dd & 0x7fffffff;
  lVar38 = FUN_1447e4f80(fVar54,(longlong)uVar47 % (longlong)iVar51 & 0xffffffff);
  uVar10 = local_138;
  uVar11 = local_551;
  cVar14 = '\x02';
  if (*(char *)(lVar38 + 0x41) != '\x03') {
    cVar14 = *(char *)(lVar38 + 0x41);
  }
  local_2c8 = *(undefined8 *)(local_528 + 0x18);
  uStack_2c0 = CONCAT31(uStack_2c0._1_3_,cVar14);
  local_2d8 = (undefined8 *)0x0;
  uStack_2d0 = 0;
  local_2e8 = (undefined8 *)0x0;
  uStack_2e0 = 0;
  local_4b8 = (undefined8 *)CONCAT71(local_4b8._1_7_,bVar12);
  local_138._0_3_ = (uint3)bVar12 << 0x10;
  local_138._0_4_ = CONCAT13(10,(int3)local_138);
  local_500 = (int *)CONCAT71(local_500._1_7_,uVar27);
  local_138._0_5_ = CONCAT14(uVar27,(undefined4)local_138);
  local_4d0 = CONCAT62(local_4d0._2_6_,uVar46);
  local_4e0 = (undefined1 *)CONCAT62(local_4e0._2_6_,uVar4);
  uVar52 = (undefined4)local_4e8;
  uVar8 = (uint5)(undefined5)local_138 >> 0x10;
  local_138._0_2_ = CONCAT11(1,local_551);
  uStack_160 = (int *)CONCAT44(uVar33,(int)local_540);
  local_148._0_4_ = (undefined4)local_4e8;
  local_138._6_2_ = SUB82(uVar10,6);
  local_138._0_6_ = CONCAT15((undefined1)local_510,CONCAT32((int3)uVar8,(undefined2)local_138));
  local_148._4_4_ = DAT_14ca84e40;
  if ((int)uVar28 < (int)DAT_14ca84e40) {
    local_148._4_4_ = uVar28;
  }
  if ((int)local_148._4_4_ < 2) {
    local_148._4_4_ = 1;
  }
  local_150._4_4_ = (undefined4)local_4d8;
  uStack_140 = DAT_14ca84e40;
  if ((int)uVar29 < (int)DAT_14ca84e40) {
    uStack_140 = uVar29;
  }
  if ((int)uStack_140 < 2) {
    uStack_140 = 1;
  }
  puVar1 = (ulonglong *)(local_560 + 0x70);
  puVar50 = (undefined8 *)(*(longlong *)(local_560 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar23 = puVar50 + 0x24;
  local_550 = puVar1;
  local_168 = (ulonglong *)uVar39;
  local_158 = (undefined *)uVar19;
  local_150._0_4_ = uVar64;
  uStack_13c = uVar46;
  uStack_13a = uVar4;
  if (*(undefined8 **)(local_560 + 0x78) < puVar23) {
    FUN_140023dd8(puVar1,0x128);
    puVar50 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar23 = puVar50 + 0x24;
  }
  local_4c8 = local_560 + 0x178;
  *(undefined8 **)(local_560 + 0x70) = puVar23;
  FUN_1456bbb8c(puVar50,L"DOF.FullResSetup",&local_168,0);
  uVar47 = local_3f8;
  iVar15 = *(int *)(local_560 + 0x180);
  *(uint *)(local_560 + 0x180) = iVar15 + 1U;
  if (*(uint *)(local_560 + 0x184) < iVar15 + 1U) {
    FUN_14472c0f6(local_4c8,iVar15);
  }
  uVar19 = local_138;
  piVar21 = local_4c0;
  puVar1 = local_550;
  *(undefined8 **)(*(longlong *)(local_560 + 0x178) + (longlong)iVar15 * 8) = puVar50;
  *(int *)((longlong)puVar50 + 0x9c) = *(int *)(local_560 + 0x180) + -1;
  bVar12 = (byte)local_4b8;
  local_138._0_3_ = (uint3)(byte)local_4b8 << 0x10;
  local_138._0_4_ = CONCAT13(0x15,(int3)local_138);
  local_138._0_5_ = CONCAT14(local_500._0_1_,(undefined4)local_138);
  uStack_13c = (undefined2)local_4d0;
  uStack_13a = local_4e0._0_2_;
  uVar8 = (uint5)(undefined5)local_138 >> 0x10;
  local_138._0_2_ = CONCAT11(1,uVar11);
  uStack_160 = (int *)CONCAT44(uVar33,(int)local_540);
  local_148._0_4_ = uVar52;
  local_148._4_4_ = DAT_14ca84e40;
  if ((int)uVar28 < (int)DAT_14ca84e40) {
    local_148._4_4_ = uVar28;
  }
  if ((int)local_148._4_4_ < 2) {
    local_148._4_4_ = 1;
  }
  local_138._6_2_ = SUB82(uVar19,6);
  local_138._0_6_ = CONCAT15((undefined1)local_510,CONCAT32((int3)uVar8,(undefined2)local_138));
  uStack_140 = DAT_14ca84e40;
  if ((int)uVar29 < (int)DAT_14ca84e40) {
    uStack_140 = uVar29;
  }
  local_150._4_4_ = (undefined4)local_4d8;
  if ((int)uStack_140 < 2) {
    uStack_140 = 1;
  }
  uVar42 = *(longlong *)(local_560 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar30 = uVar42 + 0x120;
  local_168 = (ulonglong *)uVar39;
  local_158 = (undefined *)uVar40;
  local_150._0_4_ = uVar64;
  if (*(ulonglong *)(local_560 + 0x78) < uVar30) {
    FUN_140023dd8(local_550,0x128);
    uVar42 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar30 = uVar42 + 0x120;
  }
  *(ulonglong *)(local_560 + 0x70) = uVar30;
  FUN_1456bbb8c(uVar42,L"DOF.FullResSetup",&local_168,0);
  puVar23 = local_460;
  iVar51 = *(int *)(local_560 + 0x180);
  *(uint *)(local_560 + 0x180) = iVar51 + 1U;
  if (*(uint *)(local_560 + 0x184) < iVar51 + 1U) {
    FUN_14472c0f6(local_4c8,iVar51);
  }
  uVar19 = local_138;
  puVar1 = local_550;
  *(ulonglong *)(*(longlong *)(local_560 + 0x178) + (longlong)iVar51 * 8) = uVar42;
  *(int *)(uVar42 + 0x9c) = *(int *)(local_560 + 0x180) + -1;
  local_138._0_3_ = (uint3)bVar12 << 0x10;
  local_168 = (ulonglong *)piVar21;
  local_138._0_4_ = CONCAT13(10,(int3)local_138);
  uVar27 = local_500._0_1_;
  local_138._0_5_ = CONCAT14(local_500._0_1_,(undefined4)local_138);
  uStack_13c = (undefined2)local_4d0;
  uStack_13a = local_4e0._0_2_;
  uVar8 = (uint5)(undefined5)local_138 >> 0x10;
  local_138._0_2_ = CONCAT11(1,uVar11);
  uStack_160 = (int *)CONCAT44(uVar33,(int)local_540);
  local_148._0_4_ = (undefined4)local_4e8;
  local_148._4_4_ = DAT_14ca84e40;
  if ((int)(uint)local_530 < (int)DAT_14ca84e40) {
    local_148._4_4_ = (uint)local_530;
  }
  if ((int)local_148._4_4_ < 2) {
    local_148._4_4_ = 1;
  }
  local_138._6_2_ = SUB82(uVar19,6);
  local_138._0_6_ = CONCAT15((undefined1)local_510,CONCAT32((int3)uVar8,(undefined2)local_138));
  uStack_140 = DAT_14ca84e40;
  if ((int)(uint)local_4f8 < (int)DAT_14ca84e40) {
    uStack_140 = (uint)local_4f8;
  }
  local_150._4_4_ = (undefined4)local_4d8;
  if ((int)uStack_140 < 2) {
    uStack_140 = 1;
  }
  puVar43 = (undefined8 *)(*(longlong *)(local_560 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar34 = puVar43 + 0x24;
  local_2d8 = puVar50;
  uStack_2d0 = uVar42;
  local_158 = (undefined *)uVar5;
  local_150._0_4_ = uVar64;
  if (*(undefined8 **)(local_560 + 0x78) < puVar34) {
    FUN_140023dd8(local_550,0x128);
    puVar43 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar34 = puVar43 + 0x24;
  }
  *(undefined8 **)(local_560 + 0x70) = puVar34;
  FUN_1456bbb8c(puVar43,L"DOF.HalfResSetup",&local_168,0);
  iVar51 = *(int *)(local_560 + 0x180);
  *(uint *)(local_560 + 0x180) = iVar51 + 1U;
  if (*(uint *)(local_560 + 0x184) < iVar51 + 1U) {
    FUN_14472c0f6(local_4c8,iVar51);
  }
  uVar19 = local_138;
  puVar1 = local_550;
  *(undefined8 **)(*(longlong *)(local_560 + 0x178) + (longlong)iVar51 * 8) = puVar43;
  *(int *)((longlong)puVar43 + 0x9c) = *(int *)(local_560 + 0x180) + -1;
  local_138._0_3_ = (uint3)bVar12 << 0x10;
  local_168 = (ulonglong *)piVar21;
  local_138._0_4_ = CONCAT13(0x15,(int3)local_138);
  local_138._0_5_ = CONCAT14(uVar27,(undefined4)local_138);
  uStack_13c = (undefined2)local_4d0;
  uStack_13a = local_4e0._0_2_;
  uVar8 = (uint5)(undefined5)local_138 >> 0x10;
  local_138._0_2_ = CONCAT11(1,uVar11);
  uStack_160 = (int *)CONCAT44(uVar33,(int)local_540);
  local_148._0_4_ = (undefined4)local_4e8;
  local_148._4_4_ = DAT_14ca84e40;
  if ((int)(uint)local_530 < (int)DAT_14ca84e40) {
    local_148._4_4_ = (uint)local_530;
  }
  if ((int)local_148._4_4_ < 2) {
    local_148._4_4_ = 1;
  }
  local_138._6_2_ = SUB82(uVar19,6);
  local_138._0_6_ = CONCAT15((undefined1)local_510,CONCAT32((int3)uVar8,(undefined2)local_138));
  uStack_140 = DAT_14ca84e40;
  if ((int)(uint)local_4f8 < (int)DAT_14ca84e40) {
    uStack_140 = (uint)local_4f8;
  }
  local_150._4_4_ = (undefined4)local_4d8;
  if ((int)uStack_140 < 2) {
    uStack_140 = 1;
  }
  uVar30 = *(longlong *)(local_560 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar39 = uVar30 + 0x120;
  local_158 = (undefined *)uVar6;
  local_150._0_4_ = uVar64;
  if (*(ulonglong *)(local_560 + 0x78) < uVar39) {
    FUN_140023dd8(local_550,0x128);
    uVar30 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar39 = uVar30 + 0x120;
  }
  *(ulonglong *)(local_560 + 0x70) = uVar39;
  FUN_1456bbb8c(uVar30,L"DOF.HalfResSetup",&local_168,0);
  iVar51 = *(int *)(local_560 + 0x180);
  *(uint *)(local_560 + 0x180) = iVar51 + 1U;
  if (*(uint *)(local_560 + 0x184) < iVar51 + 1U) {
    FUN_14472c0f6(local_4c8,iVar51);
  }
  puVar1 = local_550;
  *(ulonglong *)(*(longlong *)(local_560 + 0x178) + (longlong)iVar51 * 8) = uVar30;
  *(int *)(uVar30 + 0x9c) = *(int *)(local_560 + 0x180) + -1;
  local_428 = CONCAT44(local_428._4_4_,(uint)local_1d9);
  if (((int)local_468 < 1) || ((local_1d9 & 1) != 0)) {
    iVar51 = 8;
    if ((int)local_520 < 2) {
      uVar29 = 2;
      iVar51 = 8;
      goto LAB_142e8b49b;
    }
    local_4a8 = local_2a0;
    uVar47 = local_2a0 >> 0x20;
    uVar29 = 4;
    uVar52 = 0;
  }
  else {
    iVar51 = (uint)(1 < (int)local_520) * 8 + 8;
    uVar29 = (uint)((int)local_520 < 2) * 2;
LAB_142e8b49b:
    uVar52 = (undefined4)CONCAT71((int7)(int3)((uint)iVar15 >> 8),1);
    local_4a8 = uVar47;
    uVar47 = local_420;
  }
  puVar34 = (undefined8 *)(*(longlong *)(local_560 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar50 = puVar34 + 0x14;
  local_2e8 = puVar43;
  uStack_2e0 = uVar30;
  if (*(undefined8 **)(local_560 + 0x78) < puVar50) {
    FUN_140023dd8(local_550,0xb0);
    puVar34 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar50 = puVar34 + 0x14;
  }
  *(undefined8 **)(local_560 + 0x70) = puVar50;
  *puVar34 = &PTR_FUN_14a2b28f0;
  puVar50 = puVar34 + 2;
  puVar34[2] = 0;
  *(undefined1 *)(puVar34 + 3) = 1;
  local_490 = (longlong *)(local_560 + 0x98);
  puVar34[5] = 0;
  puVar34[6] = 0;
  puVar34[0xc] = 0;
  puVar34[0xd] = 0;
  puVar34[0xf] = 0;
  puVar34[0x10] = 0;
  puVar34[0x11] = 0;
  puVar34[0x12] = 0;
  puVar34[0x13] = 0;
  iVar15 = *(int *)(local_560 + 0xa0);
  *(uint *)(local_560 + 0xa0) = iVar15 + 1U;
  if (*(uint *)(local_560 + 0xa4) < iVar15 + 1U) {
    FUN_1448cfae8(local_490,iVar15);
  }
  *(undefined8 **)(*(longlong *)(local_560 + 0x98) + (longlong)iVar15 * 8) = puVar34;
  *(undefined4 *)puVar50 = (undefined4)local_2c8;
  *(undefined4 *)((longlong)puVar34 + 0x14) = local_2c8._4_4_;
  *(undefined4 *)(puVar34 + 3) = uStack_2c0;
  *(undefined4 *)((longlong)puVar34 + 0x1c) = uStack_2bc;
  uVar56 = FUN_142e904fb((undefined4)local_2c8,puVar34 + 4,local_220,local_2a4);
  puVar34[0xc] = DAT_14c967818;
  puVar34[0xd] = local_4a8 & 0xffffffff | uVar47 << 0x20;
  puVar34[0xf] = puVar23;
  puVar34[0x10] = *local_418;
  local_504 = uVar52;
  if ((char)uVar52 == '\0') {
    local_2d8 = puVar23;
  }
  else if (local_1d9 == 1) {
    uVar56 = FUN_142e90680(&local_168,local_560,&local_2d8,0);
    puVar34[0x11] = uStack_160;
    local_2d8 = puVar23;
  }
  else {
    uVar56 = FUN_142e90680(&local_168,local_560,&local_2d8,0);
    puVar34[0x11] = local_168;
  }
  uVar39 = local_560;
  if (1 < (int)local_520) {
    FUN_142e90680(&local_168,local_560,&local_2e8,0);
    puVar34[0x12] = local_168;
    uVar56 = FUN_142e90680(&local_168,uVar39,&local_2e8,0);
    puVar34[0x13] = uStack_160;
  }
  iVar15 = (int)local_4a8 + iVar51 + -1;
  uVar19 = *(undefined8 *)(local_528 + 0x13818);
  uVar29 = uVar29 | (uint)local_428;
  FUN_142e88bd6(uVar56,(longlong)iVar15 % (longlong)iVar51 & 0xffffffff);
  FUN_1448e935e(uVar19,&local_168,&DAT_14ca22bd8,uVar29);
  FUN_142e88bd6();
  uVar19 = uStack_160;
  uVar39 = (ulonglong)local_168;
  FUN_142e9904e();
  local_168 = (ulonglong *)0x0;
  uStack_160 = (int *)0x0;
  FUN_1448f70da(uVar39,&DAT_14ca22c88,puVar50,&local_168);
  FUN_140069376(local_560);
  puVar1 = local_550;
  uVar35 = (undefined6)((ulonglong)puVar34 >> 0x10);
  uVar52 = (undefined4)CONCAT62(uVar35,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar52 = (undefined4)CONCAT62(uVar35,4);
  }
  puVar34 = (undefined8 *)(*(longlong *)(local_560 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar23 = puVar34 + 0x3d;
  if (*(undefined8 **)(local_560 + 0x78) < puVar23) {
    FUN_140023dd8(local_550,0x1f0);
    puVar34 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar23 = puVar34 + 0x3d;
  }
  *local_550 = (ulonglong)puVar23;
  uStack_160 = (int *)DAT_14ca22cd0;
  if (DAT_14ca22cd0 != 0) {
    LOCK();
    *(int *)(DAT_14ca22cd0 + 8) = *(int *)(DAT_14ca22cd0 + 8) + 1;
    UNLOCK();
  }
  local_158 = &DAT_14ca22c88;
  local_578 = (uint **)CONCAT71(local_578._1_7_,2);
  local_168 = puVar50;
  FUN_140068f1a(puVar34,&local_1d8,&local_168,uVar52);
  *puVar34 = &PTR_FUN_14a2b2900;
  puVar34[0x37] = &DAT_14ca22c88;
  puVar34[0x38] = puVar50;
  puVar34[0x39] = uVar39;
  puVar34[0x3a] = uVar19;
  *(int *)(puVar34 + 0x3b) = iVar15 / iVar51;
  *(int *)((longlong)puVar34 + 0x1dc) = (iVar51 + (int)uVar47 + -1) / iVar51;
  *(undefined4 *)(puVar34 + 0x3c) = 1;
  local_4a8 = local_560 + 0x168;
  iVar15 = *(int *)(local_560 + 0x170);
  *(uint *)(local_560 + 0x170) = iVar15 + 1U;
  if (*(uint *)(local_560 + 0x174) < iVar15 + 1U) {
    FUN_14470e57a(local_4a8,iVar15);
  }
  *(undefined8 **)(*(longlong *)(local_560 + 0x168) + (longlong)iVar15 * 8) = puVar34;
  *(int *)((longlong)puVar34 + 0x2c) = *(int *)(local_560 + 0x170) + -1;
  FUN_140069100(local_560,puVar34);
  local_533 = local_500._0_1_;
  local_531 = (undefined1)local_510;
  if (((char)local_504 == '\0') || (local_1d9 == 1)) {
    local_2d8 = local_460;
  }
  uVar52 = (int)local_540;
  if ((int)local_520 < 2) {
    local_2e8 = local_2d8;
    uStack_2e0 = uStack_2d0;
  }
  uVar47 = (local_4f8 << 0x20) + local_530;
  local_408 = uVar47;
  local_44c = uVar61;
  local_448 = uVar64;
  local_454 = uVar33;
  local_450 = uVar66;
  if ((*(int *)(local_528 + 0x3020) - 2U & 0xfffffffd) == 0 && local_498 != 0) {
    local_260 = *local_418;
    lStack_258 = local_418[0xb];
    local_250 = local_2e8;
    uStack_248 = uStack_2e0;
    local_570 = (undefined8 *)(local_498 + 0x13e8);
    local_578 = (uint **)(local_528 + 0x132b8);
    FUN_1401f4547(&local_168,local_560);
    local_2e8 = local_168;
    uStack_2e0 = (ulonglong)uStack_160;
    if (uStack_160 == (int *)0x0) {
      local_504 = CONCAT31(local_504._1_3_,0x15);
      local_541 = 1;
      local_534 = (byte)local_4b8;
      local_4ac = (undefined2)local_4d0;
      local_4aa = local_4e0._0_2_;
      local_444 = (undefined4)local_4e8;
      local_440 = (undefined4)local_4d8;
    }
    else {
      local_4c0 = *(int **)((longlong)uStack_160 + 0x60);
      local_504 = CONCAT31(local_504._1_3_,*(undefined1 *)((longlong)uStack_160 + 0x93));
      local_533 = *(undefined1 *)((longlong)uStack_160 + 0x94);
      local_551 = *(undefined1 *)((longlong)uStack_160 + 0x90);
      local_541 = *(undefined1 *)((longlong)uStack_160 + 0x91);
      uVar52 = *(undefined4 *)((longlong)uStack_160 + 0x68);
      local_531 = *(undefined1 *)((longlong)uStack_160 + 0x95);
      local_408 = *(ulonglong *)((longlong)uStack_160 + 0x84);
      local_44c = *(undefined4 *)((longlong)uStack_160 + 0x74);
      local_448 = *(undefined4 *)((longlong)uStack_160 + 0x78);
      local_454 = *(undefined4 *)((longlong)uStack_160 + 0x6c);
      local_450 = *(undefined4 *)((longlong)uStack_160 + 0x70);
      local_534 = *(undefined1 *)((longlong)uStack_160 + 0x92);
      local_4ac = *(undefined2 *)((longlong)uStack_160 + 0x8c);
      local_4aa = *(undefined2 *)((longlong)uStack_160 + 0x8e);
      local_444 = *(undefined4 *)((longlong)uStack_160 + 0x80);
      local_440 = *(undefined4 *)((longlong)uStack_160 + 0x7c);
    }
    local_4b8 = (undefined8 *)CONCAT71(local_4b8._1_7_,*(undefined1 *)((longlong)local_168 + 0x92));
    local_498 = CONCAT71(local_498._1_7_,*(undefined1 *)((longlong)local_168 + 0x93));
    uVar47 = *(ulonglong *)((longlong)local_168 + 0x84);
    local_530 = CONCAT71(local_530._1_7_,*(undefined1 *)((longlong)local_168 + 0x91));
    uVar33 = *(undefined4 *)((longlong)local_168 + 0x6c);
    uVar66 = *(undefined4 *)(local_168 + 0xe);
    uVar61 = *(undefined4 *)((longlong)local_168 + 0x74);
    uVar64 = *(undefined4 *)(local_168 + 0xf);
    local_510 = CONCAT71(local_510._1_7_,*(undefined1 *)((longlong)local_168 + 0x95));
    local_4d0 = CONCAT62(local_4d0._2_6_,*(undefined2 *)((longlong)local_168 + 0x8c));
    local_4e0 = (undefined1 *)CONCAT62(local_4e0._2_6_,*(undefined2 *)((longlong)local_168 + 0x8e));
    local_4e8 = CONCAT44(local_4e8._4_4_,*(undefined4 *)(local_168 + 0x10));
    local_4d8 = CONCAT44(local_4d8._4_4_,*(undefined4 *)((longlong)local_168 + 0x7c));
    uVar39 = uVar47;
    uVar27 = *(undefined1 *)((longlong)local_168 + 0x94);
    uVar56 = *(undefined4 *)(local_168 + 0xd);
    uVar11 = *(undefined1 *)(local_168 + 0x12);
    local_532 = local_551;
    piVar21 = (int *)local_168[0xc];
    local_458 = uVar52;
    local_400 = (ulonglong)local_4c0;
  }
  else {
    uVar39 = *(ulonglong *)((longlong)local_2e8 + 0x84);
    local_504 = CONCAT31(local_504._1_3_,0x15);
    local_498 = CONCAT71(local_498._1_7_,10);
    local_530 = CONCAT71(local_530._1_7_,1);
    local_400 = (ulonglong)local_4c0;
    local_458 = (int)local_540;
    local_440 = (undefined4)local_4d8;
    local_444 = (undefined4)local_4e8;
    local_4ac = (undefined2)local_4d0;
    local_4aa = local_4e0._0_2_;
    local_532 = local_551;
    local_541 = 1;
    local_534 = (byte)local_4b8;
    uVar27 = local_500._0_1_;
    uVar56 = (int)local_540;
    uVar11 = local_551;
    piVar21 = local_4c0;
  }
  local_4c0 = piVar21;
  local_551 = uVar11;
  puVar1 = local_550;
  local_500 = (int *)CONCAT71(local_500._1_7_,uVar27);
  local_2f8 = (uint *)0x0;
  uStack_2f0 = 0;
  local_150._4_4_ = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  iVar15 = (int)uVar39;
  iVar51 = iVar15 + 0xe;
  if (-1 < iVar15 + 7) {
    iVar51 = iVar15 + 7;
  }
  local_148._4_4_ = iVar51 >> 3;
  iVar51 = (int)(uVar39 >> 0x20);
  iVar16 = iVar51 + 0xe;
  if (-1 < iVar51 + 7) {
    iVar16 = iVar51 + 7;
  }
  uStack_140 = iVar16 >> 3;
  uStack_160 = (int *)CONCAT44(DAT_14ca8508c,DAT_14ca85088);
  local_158 = (undefined *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
  local_150._0_4_ = DAT_14ca85098;
  local_168 = (ulonglong *)&DAT_00020008;
  uStack_13c = 1;
  uStack_13a = 1;
  local_148._0_4_ = 0;
  local_138 = (undefined8 *)CONCAT26(local_138._6_2_,0xff000f000101);
  local_128 = (float *)CONCAT44(DAT_14ca8508c,DAT_14ca85088);
  uStack_120 = (float *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
  local_fe = 0;
  local_130 = &DAT_00020008;
  local_fd = 10;
  uStack_104 = 1;
  uStack_102 = 1;
  local_100 = 0x101;
  local_110._0_4_ = 0;
  local_fb = 0xff;
  local_118 = (undefined1 *)CONCAT44(local_150._4_4_,DAT_14ca85098);
  local_3a8 = (uint *)0x0;
  uStack_3a0 = (byte *)0x0;
  uStack_1a6 = 0;
  uStack_1a5 = 0xf;
  uStack_1a3 = 0xff;
  local_1d8 = (undefined8 *)&DAT_00020008;
  uStack_1ac = 1;
  uStack_1aa = 1;
  uStack_1a8 = 0x101;
  uStack_1d0 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
  uStack_1c8 = (undefined8 *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
  uVar29 = local_148._4_4_;
  if ((int)DAT_14ca84e40 <= (int)local_148._4_4_) {
    uVar29 = DAT_14ca84e40;
  }
  if ((int)uVar29 < 2) {
    uVar29 = 1;
  }
  local_1b0 = uStack_140;
  if ((int)DAT_14ca84e40 <= (int)uStack_140) {
    local_1b0 = DAT_14ca84e40;
  }
  local_1c0 = (undefined8 *)CONCAT44(local_150._4_4_,DAT_14ca85098);
  if ((int)local_1b0 < 2) {
    local_1b0 = 1;
  }
  local_1b8 = (float *)((ulonglong)uVar29 << 0x20);
  puVar44 = (uint *)(*(longlong *)(local_560 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar20 = puVar44 + 0x48;
  local_110._4_4_ = local_148._4_4_;
  uStack_108 = uStack_140;
  if (*(uint **)(local_560 + 0x78) < puVar20) {
    FUN_140023dd8(local_550,0x128);
    puVar44 = (uint *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar20 = puVar44 + 0x48;
  }
  *(uint **)(local_560 + 0x70) = puVar20;
  FUN_1456bbb8c(puVar44,L"DOF.FlattenFgdCoc",&local_1d8,0);
  iVar16 = *(int *)(local_560 + 0x180);
  *(uint *)(local_560 + 0x180) = iVar16 + 1U;
  if (*(uint *)(local_560 + 0x184) < iVar16 + 1U) {
    FUN_14472c0f6(local_4c8,iVar16);
  }
  puVar1 = local_550;
  *(uint **)(*(longlong *)(local_560 + 0x178) + (longlong)iVar16 * 8) = puVar44;
  puVar44[0x27] = *(int *)(local_560 + 0x180) - 1;
  uStack_1a6 = local_fe;
  local_1d8 = (undefined8 *)local_130;
  uStack_1a5 = local_fd;
  uStack_1ac = uStack_104;
  uStack_1aa = uStack_102;
  uStack_1a8 = local_100;
  uStack_1d0 = (ulonglong)local_128;
  uStack_1c8 = (undefined8 *)uStack_120;
  uStack_1a3 = local_fb;
  uVar29 = DAT_14ca84e40;
  if ((int)local_110._4_4_ < (int)DAT_14ca84e40) {
    uVar29 = local_110._4_4_;
  }
  if ((int)uVar29 < 2) {
    uVar29 = 1;
  }
  local_1b0 = DAT_14ca84e40;
  if ((int)uStack_108 < (int)DAT_14ca84e40) {
    local_1b0 = uStack_108;
  }
  local_1c0 = (undefined8 *)local_118;
  if ((int)local_1b0 < 2) {
    local_1b0 = 1;
  }
  local_1b8 = (float *)CONCAT44(uVar29,(undefined4)local_110);
  uVar30 = *(longlong *)(local_560 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar39 = uVar30 + 0x120;
  if (*(ulonglong *)(local_560 + 0x78) < uVar39) {
    FUN_140023dd8(local_550,0x128);
    uVar30 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar39 = uVar30 + 0x120;
  }
  *(ulonglong *)(local_560 + 0x70) = uVar39;
  FUN_1456bbb8c(uVar30,L"DOF.FlattenBgdCoc",&local_1d8,0);
  iVar16 = *(int *)(local_560 + 0x180);
  *(uint *)(local_560 + 0x180) = iVar16 + 1U;
  if (*(uint *)(local_560 + 0x184) < iVar16 + 1U) {
    FUN_14472c0f6(local_4c8,iVar16);
  }
  puVar1 = local_550;
  local_540 = (undefined8 *)CONCAT44(local_540._4_4_,uVar56);
  *(ulonglong *)(*(longlong *)(local_560 + 0x178) + (longlong)iVar16 * 8) = uVar30;
  *(int *)(uVar30 + 0x9c) = *(int *)(local_560 + 0x180) + -1;
  puVar50 = (undefined8 *)(*(longlong *)(local_560 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar23 = puVar50 + 0xc;
  local_4f8 = uVar47;
  local_3a8 = puVar44;
  uStack_3a0 = (byte *)uVar30;
  if (*(undefined8 **)(local_560 + 0x78) < puVar23) {
    FUN_140023dd8(local_550,0x70);
    puVar50 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar23 = puVar50 + 0xc;
  }
  *(undefined8 **)(local_560 + 0x70) = puVar23;
  *puVar50 = &PTR_FUN_14a2b2918;
  puVar23 = puVar50 + 2;
  puVar50[6] = 0;
  puVar50[2] = 0;
  puVar50[3] = 0;
  *(undefined1 *)(puVar50 + 7) = 1;
  puVar50[8] = 0;
  puVar50[9] = 0;
  puVar50[10] = 0;
  puVar50[0xb] = 0;
  iVar16 = *(int *)(local_560 + 0xa0);
  *(uint *)(local_560 + 0xa0) = iVar16 + 1U;
  if (*(uint *)(local_560 + 0xa4) < iVar16 + 1U) {
    FUN_1448cfae8(local_490,iVar16);
  }
  uVar47 = local_560;
  *(undefined8 **)(*(longlong *)(local_560 + 0x98) + (longlong)iVar16 * 8) = puVar50;
  puVar50[6] = local_2c8;
  puVar50[7] = CONCAT44(uStack_2bc,uStack_2c0);
  puVar50[2] = 0;
  puVar50[3] = local_2a0;
  *(float *)(puVar50 + 4) = (float)(int)local_298 / (float)((int)local_2a0 * iVar15);
  *(float *)((longlong)puVar50 + 0x24) = (float)local_298._4_4_ / (float)(local_2a0._4_4_ * iVar51);
  *(float *)(puVar50 + 5) = ((float)(int)local_298 + -1.0) / (float)iVar15;
  *(float *)((longlong)puVar50 + 0x2c) = ((float)local_298._4_4_ + -1.0) / (float)iVar51;
  *(undefined4 *)(puVar50 + 8) = (undefined4)local_2e8;
  *(undefined4 *)((longlong)puVar50 + 0x44) = local_2e8._4_4_;
  *(undefined4 *)(puVar50 + 9) = (undefined4)uStack_2e0;
  *(undefined4 *)((longlong)puVar50 + 0x4c) = uStack_2e0._4_4_;
  FUN_142e90889(&local_1d8,(float)iVar15,&local_3a8);
  *(undefined4 *)(puVar50 + 10) = (undefined4)local_1d8;
  *(undefined4 *)((longlong)puVar50 + 0x54) = local_1d8._4_4_;
  *(undefined4 *)(puVar50 + 0xb) = (undefined4)uStack_1d0;
  *(undefined4 *)((longlong)puVar50 + 0x5c) = uStack_1d0._4_4_;
  uVar19 = *(undefined8 *)(local_528 + 0x13818);
  bVar12 = (local_2a0._4_4_ != local_298._4_4_ || (int)local_298 != (int)local_2a0) * '\x02' |
           local_1d9;
  FUN_142e88e16();
  FUN_1448e935e(uVar19,&local_1d8,&DAT_14ca22eb8,bVar12);
  FUN_142e88e16();
  uVar19 = uStack_1d0;
  puVar9 = (undefined1 *)local_1d8;
  iVar15 = local_2a0._4_4_ + 0xe;
  if (-1 < local_2a0._4_4_ + 7) {
    iVar15 = local_2a0._4_4_ + 7;
  }
  iVar51 = (int)local_2a0 + 0xe;
  if (-1 < (int)local_2a0 + 7) {
    iVar51 = (int)local_2a0 + 7;
  }
  FUN_142e9a226();
  local_1d8 = (undefined8 *)0x0;
  uStack_1d0 = 0;
  FUN_1448f70da(puVar9,&DAT_14ca22f68,puVar23,&local_1d8);
  FUN_140069376(uVar47);
  puVar1 = local_550;
  uVar35 = (undefined6)((ulonglong)(puVar50 + 10) >> 0x10);
  uVar47 = CONCAT62(uVar35,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar47 = CONCAT62(uVar35,4);
  }
  puVar34 = (undefined8 *)(*(longlong *)(local_560 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar50 = puVar34 + 0x3d;
  if (*(undefined8 **)(local_560 + 0x78) < puVar50) {
    FUN_140023dd8(local_550,0x1f0);
    puVar34 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar50 = puVar34 + 0x3d;
  }
  *local_550 = (ulonglong)puVar50;
  uStack_1d0 = DAT_14ca22fb0;
  if (DAT_14ca22fb0 != 0) {
    LOCK();
    *(int *)(DAT_14ca22fb0 + 8) = *(int *)(DAT_14ca22fb0 + 8) + 1;
    UNLOCK();
  }
  local_470 = CONCAT44(local_470._4_4_,(uint)local_470 >> 0xc);
  uStack_1c8 = (undefined8 *)&DAT_14ca22f68;
  local_578 = (uint **)CONCAT71(local_578._1_7_,2);
  local_1d8 = puVar23;
  FUN_140068f1a(puVar34,&local_348,&local_1d8,uVar47 & 0xffffffff);
  *puVar34 = &PTR_FUN_14a2b2920;
  puVar34[0x37] = &DAT_14ca22f68;
  puVar34[0x38] = puVar23;
  puVar34[0x39] = puVar9;
  puVar34[0x3a] = uVar19;
  *(int *)(puVar34 + 0x3b) = iVar51 >> 3;
  *(int *)((longlong)puVar34 + 0x1dc) = iVar15 >> 3;
  *(undefined4 *)(puVar34 + 0x3c) = 1;
  iVar15 = *(int *)(local_560 + 0x170);
  *(uint *)(local_560 + 0x170) = iVar15 + 1U;
  if (*(uint *)(local_560 + 0x174) < iVar15 + 1U) {
    FUN_14470e57a(local_4a8,iVar15);
  }
  iVar51 = local_47c;
  uVar47 = local_560;
  bVar12 = (byte)local_470 & 1;
  dVar7 = (double)local_47c;
  *(undefined8 **)(*(longlong *)(local_560 + 0x168) + (longlong)iVar15 * 8) = puVar34;
  *(int *)((longlong)puVar34 + 0x2c) = *(int *)(local_560 + 0x170) + -1;
  FUN_140069100(local_560,puVar34);
  fVar60 = 1.0 / ((float)iVar51 + 0.5) + 1.0;
  local_310 = CONCAT44(local_310._4_4_,fVar60);
  iVar51 = (int)local_2a0 + 7;
  iVar15 = (int)(local_2a0 >> 0x20);
  iVar16 = iVar15 + 7;
  iVar15 = iVar15 + 0xe;
  if (-1 < iVar16) {
    iVar15 = iVar16;
  }
  iVar15 = iVar15 >> 3;
  iVar16 = (int)local_2a0 + 0xe;
  if (-1 < iVar51) {
    iVar16 = iVar51;
  }
  iVar16 = iVar16 >> 3;
  local_1c0 = &local_368;
  local_368 = CONCAT44(iVar15,iVar16);
  iVar51 = iVar15 + 0xe;
  if (-1 < iVar15 + 7) {
    iVar51 = iVar15 + 7;
  }
  iVar15 = iVar16 + 0xe;
  if (-1 < iVar16 + 7) {
    iVar15 = iVar16 + 7;
  }
  local_198 = (int *)&local_358;
  local_358 = CONCAT44(iVar51 >> 3,iVar15 >> 3);
  uStack_350 = CONCAT44(uStack_350._4_4_,1);
  local_1d8 = &local_168;
  uStack_1d0 = uVar47;
  uStack_1c8 = &local_2c8;
  local_1b8 = &local_2a8;
  local_1b0 = (uint)&local_2a4;
  uStack_1ac = (undefined2)((ulonglong)&local_2a4 >> 0x20);
  uStack_1aa = (undefined2)((ulonglong)&local_2a4 >> 0x30);
  uStack_1a8 = SUB82(&local_310,0);
  uStack_1a6 = (undefined1)((ulonglong)&local_310 >> 0x10);
  uStack_1a5 = (undefined2)((ulonglong)&local_310 >> 0x18);
  uStack_1a3 = (undefined1)((ulonglong)&local_310 >> 0x28);
  uStack_1a2 = (undefined2)((ulonglong)&local_310 >> 0x30);
  local_1a0 = (undefined8 *)local_528;
  fVar60 = fVar60 * fVar55 * 0.125;
  uVar29 = (int)ROUND(-0.5 - (fVar60 + fVar60)) >> 1;
  iVar51 = -uVar29;
  iVar15 = 3;
  if (iVar51 < 3) {
    iVar15 = iVar51;
  }
  local_188 = CONCAT44(local_188._4_4_,1);
  local_178._0_4_ = iVar15;
  if ((int)uVar29 < -3) {
    bVar31 = true;
    lVar38 = 1;
    piVar21 = (int *)((longlong)&local_178 + 4);
    piVar53 = (int *)((longlong)&local_188 + 4);
    do {
      lVar22 = lVar38;
      iVar16 = iVar15 + 1;
      iVar17 = iVar51 / iVar16;
      if (2 < iVar17) {
        iVar17 = 3;
      }
      *piVar21 = iVar17;
      iVar18 = (int)((~uVar29 - iVar15) + local_178._4_4_) / local_178._4_4_;
      if (iVar18 < iVar16) {
        iVar16 = iVar18;
      }
      *piVar53 = iVar16;
      if (!bVar31) break;
      iVar15 = iVar16 * iVar17 + iVar15;
      bVar31 = false;
      lVar38 = 2;
      piVar21 = (int *)&uStack_170;
      piVar53 = (int *)&uStack_180;
    } while (iVar15 < iVar51);
    local_348 = local_3a8;
    uStack_340 = (ulonglong)uStack_3a0;
    lVar38 = 0;
    do {
      local_568 = *(undefined4 *)((longlong)&local_188 + lVar38 * 4);
      local_308 = 0;
      uStack_300 = 0;
      local_570 = (undefined8 *)
                  CONCAT44(local_570._4_4_,*(undefined4 *)((longlong)&local_178 + lVar38 * 4));
      local_578 = (uint **)&local_308;
      FUN_142e90a6e(&local_1d8,&local_3c8,1,&local_348);
      iVar15 = local_480;
      local_348 = local_3c8;
      uStack_340 = uStack_3c0;
      lVar38 = lVar38 + 1;
    } while (lVar22 + 1 != lVar38);
    local_2f8 = local_3a8;
    uStack_2f0 = (ulonglong)uStack_3a0;
    lVar38 = 0;
    do {
      local_568 = *(undefined4 *)((longlong)&local_188 + lVar38 * 4);
      local_570 = (undefined8 *)
                  CONCAT44(local_570._4_4_,*(undefined4 *)((longlong)&local_178 + lVar38 * 4));
      local_578 = &local_348;
      FUN_142e90a6e(&local_1d8,&local_3c8,2,&local_2f8);
      local_2f8 = local_3c8;
      uStack_2f0 = uStack_3c0;
      lVar38 = lVar38 + 1;
    } while (lVar22 + 1 != lVar38);
    bVar49 = (byte)local_4a0;
  }
  else {
    local_578 = (uint **)&local_3c8;
    local_3c8 = (uint *)0x0;
    uStack_3c0 = 0;
    local_570 = (undefined8 *)CONCAT44(local_570._4_4_,iVar15);
    local_568 = 1;
    FUN_142e90a6e(&local_1d8,&local_348,0,&local_3a8);
    local_2f8 = local_348;
    uStack_2f0 = uStack_340;
    iVar15 = local_480;
    bVar49 = (byte)local_4a0;
  }
  uVar47 = local_4f8;
  local_308 = 0;
  uStack_300 = 0;
  local_310 = 0;
  uVar30 = local_4f8 >> 0x20;
  dVar7 = log(((double)fVar55 * 0.5) / dVar7);
  plVar41 = DAT_14ca27dc8;
  uVar39 = -(((longlong)ROUND(-0.5 - (dVar7 * 1.4426950408889634 + dVar7 * 1.4426950408889634)) >> 1
             ) - (ulonglong)(iVar15 == 0));
  local_520 = 2;
  if (2 < (longlong)uVar39) {
    local_520 = uVar39;
  }
  local_434 = fVar55;
  if (*(code **)(*DAT_14ca27dc8 + 0xa8) == FUN_144aa0162) {
    iVar15 = FUN_140052f36(DAT_14ca27dc8);
    if (iVar15 == 0) {
      pbVar45 = (byte *)(plVar41 + 0xb);
    }
    else {
      pbVar45 = (byte *)plVar41[10];
    }
    bVar37 = *pbVar45;
  }
  else {
    bVar37 = (**(code **)(*DAT_14ca27dc8 + 0xa8))(DAT_14ca27dc8);
  }
  uVar19 = local_138;
  puVar1 = local_550;
  bVar36 = (byte)local_518;
  uVar39 = (ulonglong)local_518 >> 8;
  iVar51 = 1 << ((char)local_520 - 1U & 0x1f);
  uVar42 = (ulonglong)local_4c0 & 0xffffffffffdfffff | DAT_14ca4af70;
  iVar15 = 8;
  if (8 < iVar51) {
    iVar15 = iVar51;
  }
  iVar51 = iVar15 + (int)local_4f8 + -1;
  uVar29 = iVar51 - iVar51 % iVar15;
  iVar51 = (int)(uVar47 >> 0x20);
  iVar16 = iVar15 + iVar51 + -1;
  uVar25 = iVar16 - iVar16 % iVar15;
  local_40c = (uint)(byte)local_498;
  bVar13 = 0x1a;
  if (local_1da == 0) {
    bVar13 = (byte)local_498;
  }
  cVar14 = '\x15';
  if (local_1da == 0) {
    cVar14 = (char)local_504;
  }
  local_148._4_4_ = DAT_14ca84e40;
  if ((int)uVar29 < (int)DAT_14ca84e40) {
    local_148._4_4_ = uVar29;
  }
  if ((int)local_148._4_4_ < 2) {
    local_148._4_4_ = 1;
  }
  uStack_140 = DAT_14ca84e40;
  if ((int)uVar25 < (int)DAT_14ca84e40) {
    uStack_140 = uVar25;
  }
  if ((int)uStack_140 < 2) {
    uStack_140 = 1;
  }
  fVar63 = (float)(int)local_4f8;
  fVar60 = (float)iVar51;
  fVar65 = (float)(-(uint)(0.0 < fVar65) & (uint)(fVar65 * 0.25)) * fVar63 * fVar60 + -21.0;
  uStack_13c = (undefined2)local_4d0;
  uStack_13a = local_4e0._0_2_;
  local_138._0_2_ = CONCAT11((undefined1)local_530,(char)local_520);
  uStack_160 = (int *)CONCAT44(uVar33,(int)local_540);
  local_158 = (undefined *)CONCAT44(uVar61,uVar66);
  local_148._0_4_ = (undefined4)local_4e8;
  local_138._6_2_ = SUB82(uVar19,6);
  local_138._0_6_ =
       CONCAT15((undefined1)local_510,
                CONCAT32(CONCAT12(local_500._0_1_,CONCAT11(bVar13,(byte)local_4b8)),
                         (undefined2)local_138));
  local_150._4_4_ = (undefined4)local_4d8;
  uVar48 = *(longlong *)(local_560 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar47 = uVar48 + 0x120;
  local_428 = uVar30;
  local_168 = (ulonglong *)uVar42;
  local_150._0_4_ = uVar64;
  if (*(ulonglong *)(local_560 + 0x78) < uVar47) {
    FUN_140023dd8(local_550,0x128);
    uVar48 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar47 = uVar48 + 0x120;
  }
  if (fVar65 <= 21.0) {
    fVar65 = 21.0;
  }
  local_498 = (ulonglong)(bVar37 ^ 1);
  bVar37 = bVar36 & bVar12 & local_4ea;
  bVar12 = bVar49 & bVar12 & local_4ea;
  *(ulonglong *)(local_560 + 0x70) = uVar47;
  FUN_1456bbb8c(uVar48,L"DOF.Reduce",&local_168,0);
  iVar15 = *(int *)(local_560 + 0x180);
  *(uint *)(local_560 + 0x180) = iVar15 + 1U;
  if (*(uint *)(local_560 + 0x184) < iVar15 + 1U) {
    FUN_14472c0f6(local_4c8,iVar15);
  }
  uVar19 = local_138;
  puVar1 = local_550;
  local_470 = (longlong)fVar65;
  local_518 = (undefined8 *)CONCAT71((int7)uVar39,bVar37 & local_4eb);
  local_4a0 = (undefined8 *)CONCAT71(local_4a0._1_7_,bVar12 & local_4e9);
  *(ulonglong *)(*(longlong *)(local_560 + 0x178) + (longlong)iVar15 * 8) = uVar48;
  *(int *)(uVar48 + 0x9c) = *(int *)(local_560 + 0x180) + -1;
  uVar27 = (byte)local_4b8;
  if (cVar14 == '\0') {
    uVar39 = 0;
    lVar38 = local_528;
    uVar47 = local_4f8;
  }
  else {
    uStack_13c = (undefined2)local_4d0;
    uStack_13a = local_4e0._0_2_;
    local_138._0_2_ = CONCAT11((undefined1)local_530,(char)local_520);
    uStack_160 = (int *)CONCAT44(uVar33,(int)local_540);
    local_158 = (undefined *)CONCAT44(uVar61,uVar66);
    local_148._0_4_ = (undefined4)local_4e8;
    if ((int)DAT_14ca84e40 <= (int)uVar29) {
      uVar29 = DAT_14ca84e40;
    }
    local_148._4_4_ = uVar29;
    if ((int)uVar29 < 2) {
      local_148._4_4_ = 1;
    }
    local_138._6_2_ = SUB82(uVar19,6);
    local_138._0_6_ =
         CONCAT15((undefined1)local_510,
                  CONCAT32(CONCAT12(local_500._0_1_,CONCAT11(cVar14,(byte)local_4b8)),
                           (undefined2)local_138));
    uStack_140 = DAT_14ca84e40;
    if ((int)uVar25 < (int)DAT_14ca84e40) {
      uStack_140 = uVar25;
    }
    local_150._4_4_ = (undefined4)local_4d8;
    if ((int)uStack_140 < 2) {
      uStack_140 = 1;
    }
    uVar39 = *(longlong *)(local_560 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar47 = uVar39 + 0x120;
    local_168 = (ulonglong *)uVar42;
    local_150._0_4_ = uVar64;
    if (*(ulonglong *)(local_560 + 0x78) < uVar47) {
      FUN_140023dd8(local_550,0x128);
      uVar39 = *puVar1 + 7 & 0xfffffffffffffff8;
      uVar47 = uVar39 + 0x120;
    }
    *(ulonglong *)(local_560 + 0x70) = uVar47;
    FUN_1456bbb8c(uVar39,L"DOF.Reduce",&local_168,0);
    uVar47 = local_4f8;
    lVar38 = local_528;
    iVar15 = *(int *)(local_560 + 0x180);
    *(uint *)(local_560 + 0x180) = iVar15 + 1U;
    if (*(uint *)(local_560 + 0x184) < iVar15 + 1U) {
      FUN_14472c0f6(local_4c8,iVar15);
    }
    *(ulonglong *)(*(longlong *)(local_560 + 0x178) + (longlong)iVar15 * 8) = uVar39;
    *(int *)(uVar39 + 0x9c) = *(int *)(local_560 + 0x180) + -1;
  }
  uVar19 = local_138;
  puVar1 = local_550;
  local_498 = CONCAT44(local_498._4_4_,(int)local_498 * 2 + 2);
  bVar12 = (byte)local_518;
  local_1d8 = (undefined8 *)0x0;
  uStack_1d0 = 0;
  local_4b8 = (undefined8 *)CONCAT71(local_4b8._1_7_,(byte)local_4a0 | bVar12);
  local_308 = uVar48;
  uStack_300 = uVar39;
  if (((byte)local_4a0 | bVar12) == 1) {
    local_148._4_4_ = (int)(((uint)(uVar47 >> 0x1f) & 1) + (int)uVar47) >> 1;
    uStack_140 = (int)(((uint)(local_428 >> 0x1f) & 1) + (int)local_428) >> 1;
    uVar29 = 0x1a;
    if ((local_1d9 & 1) != 0) {
      uVar29 = local_40c;
    }
    if (local_1da == 0) {
      uVar29 = local_40c;
    }
    local_168 = (ulonglong *)local_4c0;
    uStack_13c = (undefined2)local_4d0;
    uStack_13a = local_4e0._0_2_;
    local_138._0_2_ = CONCAT11((undefined1)local_530,local_551);
    uStack_160 = (int *)CONCAT44(uVar33,(int)local_540);
    local_158 = (undefined *)CONCAT44(uVar61,uVar66);
    local_148._0_4_ = (undefined4)local_4e8;
    if ((int)DAT_14ca84e40 <= (int)local_148._4_4_) {
      local_148._4_4_ = DAT_14ca84e40;
    }
    if ((int)local_148._4_4_ < 2) {
      local_148._4_4_ = 1;
    }
    if ((int)DAT_14ca84e40 <= (int)uStack_140) {
      uStack_140 = DAT_14ca84e40;
    }
    local_138._6_2_ = SUB82(uVar19,6);
    local_138._0_6_ =
         CONCAT15((undefined1)local_510,
                  CONCAT32(CONCAT12(local_500._0_1_,CONCAT11((char)uVar29,uVar27)),
                           (undefined2)local_138));
    local_150._4_4_ = (undefined4)local_4d8;
    if ((int)uStack_140 < 2) {
      uStack_140 = 1;
    }
    uVar39 = *(longlong *)(local_560 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar47 = uVar39 + 0x120;
    local_150._0_4_ = uVar64;
    if (*(ulonglong *)(local_560 + 0x78) < uVar47) {
      FUN_140023dd8(local_550,0x128);
      uVar39 = *puVar1 + 7 & 0xfffffffffffffff8;
      uVar47 = uVar39 + 0x120;
    }
    *(ulonglong *)(local_560 + 0x70) = uVar47;
    FUN_1456bbb8c(uVar39,L"DOF.Downsample",&local_168,0);
    iVar15 = *(int *)(local_560 + 0x180);
    *(uint *)(local_560 + 0x180) = iVar15 + 1U;
    if (*(uint *)(local_560 + 0x184) < iVar15 + 1U) {
      FUN_14472c0f6(local_4c8,iVar15);
    }
    uVar19 = local_138;
    fVar57 = local_3e8;
    fVar54 = local_438;
    fVar65 = local_43c;
    puVar1 = local_550;
    *(ulonglong *)(*(longlong *)(local_560 + 0x178) + (longlong)iVar15 * 8) = uVar39;
    *(int *)(uVar39 + 0x9c) = *(int *)(local_560 + 0x180) + -1;
    if ((char)local_504 == '\0') {
      uVar47 = 0;
    }
    else {
      local_148._4_4_ = (int)(((uint)(local_408 >> 0x1f) & 1) + (int)local_408) >> 1;
      uStack_140 = (int)(local_408 >> 0x20) / 2;
      local_168 = (ulonglong *)local_400;
      uStack_13c = local_4ac;
      uStack_13a = local_4aa;
      local_138._0_2_ = CONCAT11(local_541,local_532);
      uStack_160 = (int *)CONCAT44(local_454,local_458);
      local_158 = (undefined *)CONCAT44(local_44c,local_450);
      local_150._0_4_ = local_448;
      local_148._0_4_ = local_444;
      if ((int)DAT_14ca84e40 <= (int)local_148._4_4_) {
        local_148._4_4_ = DAT_14ca84e40;
      }
      if ((int)local_148._4_4_ < 2) {
        local_148._4_4_ = 1;
      }
      local_138._6_2_ = SUB82(uVar19,6);
      local_138._0_6_ =
           CONCAT15(local_531,
                    CONCAT32(CONCAT12(local_533,CONCAT11((char)local_504,local_534)),
                             (undefined2)local_138));
      if ((int)DAT_14ca84e40 <= (int)uStack_140) {
        uStack_140 = DAT_14ca84e40;
      }
      local_150._4_4_ = local_440;
      if ((int)uStack_140 < 2) {
        uStack_140 = 1;
      }
      uVar47 = *(longlong *)(local_560 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar30 = uVar47 + 0x120;
      if (*(ulonglong *)(local_560 + 0x78) < uVar30) {
        FUN_140023dd8(local_550,0x128);
        uVar47 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar30 = uVar47 + 0x120;
      }
      *(ulonglong *)(local_560 + 0x70) = uVar30;
      FUN_1456bbb8c(uVar47,L"DOF.Downsample",&local_168,0);
      iVar15 = *(int *)(local_560 + 0x180);
      *(uint *)(local_560 + 0x180) = iVar15 + 1U;
      if (*(uint *)(local_560 + 0x184) < iVar15 + 1U) {
        FUN_14472c0f6(local_4c8,iVar15);
      }
      *(ulonglong *)(*(longlong *)(local_560 + 0x178) + (longlong)iVar15 * 8) = uVar47;
      *(int *)(uVar47 + 0x9c) = *(int *)(local_560 + 0x180) + -1;
    }
    puVar1 = local_550;
    iVar15 = (int)local_298;
    iVar51 = (int)(local_298 >> 0x20);
    local_540 = (undefined8 *)CONCAT44(local_540._4_4_,(uint)local_1d9);
    puVar50 = (undefined8 *)(*(longlong *)(local_560 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar23 = puVar50 + 0xe;
    local_1d8 = (undefined8 *)uVar39;
    uStack_1d0 = uVar47;
    if (*(undefined8 **)(local_560 + 0x78) < puVar23) {
      FUN_140023dd8(local_550,0x80);
      puVar50 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar23 = puVar50 + 0xe;
    }
    iVar16 = (iVar51 - (iVar51 + 1 >> 0x1f)) + 1 >> 1;
    iVar51 = (iVar15 - (iVar15 + 1 >> 0x1f)) + 1 >> 1;
    *(undefined8 **)(local_560 + 0x70) = puVar23;
    *puVar50 = &PTR_FUN_14a2b2938;
    puVar23 = puVar50 + 2;
    puVar50[6] = 0;
    puVar50[7] = 0x3f80000000000000;
    puVar50[2] = 0;
    puVar50[3] = 0;
    puVar50[8] = 0;
    puVar50[9] = 0;
    puVar50[10] = 0;
    *(undefined1 *)(puVar50 + 0xb) = 1;
    puVar50[0xc] = 0;
    puVar50[0xd] = 0;
    iVar15 = *(int *)(local_560 + 0xa0);
    *(uint *)(local_560 + 0xa0) = iVar15 + 1U;
    if (*(uint *)(local_560 + 0xa4) < iVar15 + 1U) {
      FUN_1448cfae8(local_490,iVar15);
    }
    uVar47 = local_560;
    *(undefined8 **)(*(longlong *)(local_560 + 0x98) + (longlong)iVar15 * 8) = puVar50;
    puVar50[10] = local_2c8;
    puVar50[0xb] = CONCAT44(uStack_2bc,uStack_2c0);
    puVar50[2] = 0;
    puVar50[3] = CONCAT44(iVar16,iVar51);
    *(float *)(puVar50 + 4) = ((float)(int)local_298 + -0.5) / fVar63;
    *(float *)((longlong)puVar50 + 0x24) = ((float)local_298._4_4_ + -0.5) / fVar60;
    *(float *)(puVar50 + 5) = local_2a8 / local_2a4;
    *(float *)(puVar50 + 6) = fVar63;
    *(float *)((longlong)puVar50 + 0x34) = fVar60;
    *(float *)(puVar50 + 7) = 1.0 / fVar63;
    *(float *)((longlong)puVar50 + 0x3c) = 1.0 / fVar60;
    *(undefined4 *)(puVar50 + 8) = (undefined4)local_2e8;
    *(undefined4 *)((longlong)puVar50 + 0x44) = local_2e8._4_4_;
    *(undefined4 *)(puVar50 + 9) = (undefined4)uStack_2e0;
    *(undefined4 *)((longlong)puVar50 + 0x4c) = uStack_2e0._4_4_;
    FUN_142e90680(&local_168,1.0 / fVar63,&local_1d8,0);
    *(float *)(puVar50 + 0xc) = (float)local_168;
    *(float *)((longlong)puVar50 + 100) = local_168._4_4_;
    *(float *)(puVar50 + 0xd) = (float)uStack_160;
    *(float *)((longlong)puVar50 + 0x6c) = uStack_160._4_4_;
    uVar19 = *(undefined8 *)(local_528 + 0x13818);
    FUN_142e89296();
    FUN_1448e935e(uVar19,&local_168,&DAT_14ca233f0,(ulonglong)local_540 & 0xffffffff);
    FUN_142e89296();
    uVar19 = uStack_160;
    uVar39 = (ulonglong)local_168;
    iVar15 = iVar16 + 0xe;
    if (-1 < iVar16 + 7) {
      iVar15 = iVar16 + 7;
    }
    iVar16 = iVar51 + 0xe;
    if (-1 < iVar51 + 7) {
      iVar16 = iVar51 + 7;
    }
    FUN_142e9b8fc();
    local_168 = (ulonglong *)0x0;
    uStack_160 = (int *)0x0;
    FUN_1448f70da(uVar39,&DAT_14ca234a0,puVar23,&local_168);
    FUN_140069376(uVar47);
    puVar1 = local_550;
    uVar35 = (undefined6)((ulonglong)&local_168 >> 0x10);
    uVar47 = CONCAT62(uVar35,2);
    if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
       ((DAT_14c760ddc == 2 && ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))))) {
      uVar47 = CONCAT62(uVar35,4);
    }
    puVar34 = (undefined8 *)(*(longlong *)(local_560 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar50 = puVar34 + 0x3d;
    if (*(undefined8 **)(local_560 + 0x78) < puVar50) {
      FUN_140023dd8(local_550,0x1f0);
      puVar34 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar50 = puVar34 + 0x3d;
    }
    *local_550 = (ulonglong)puVar50;
    uStack_160 = (int *)DAT_14ca234e8;
    if (DAT_14ca234e8 != 0) {
      LOCK();
      *(int *)(DAT_14ca234e8 + 8) = *(int *)(DAT_14ca234e8 + 8) + 1;
      UNLOCK();
    }
    local_158 = &DAT_14ca234a0;
    local_578 = (uint **)CONCAT71(local_578._1_7_,2);
    local_168 = puVar23;
    FUN_140068f1a(puVar34,&local_3a8,&local_168,uVar47 & 0xffffffff);
    *puVar34 = &PTR_FUN_14a2b2940;
    puVar34[0x37] = &DAT_14ca234a0;
    puVar34[0x38] = puVar23;
    puVar34[0x39] = uVar39;
    puVar34[0x3a] = uVar19;
    *(int *)(puVar34 + 0x3b) = iVar16 >> 3;
    *(int *)((longlong)puVar34 + 0x1dc) = iVar15 >> 3;
    *(undefined4 *)(puVar34 + 0x3c) = 1;
    iVar15 = *(int *)(local_560 + 0x170);
    *(uint *)(local_560 + 0x170) = iVar15 + 1U;
    if (*(uint *)(local_560 + 0x174) < iVar15 + 1U) {
      FUN_14470e57a(local_4a8,iVar15);
    }
    *(undefined8 **)(*(longlong *)(local_560 + 0x168) + (longlong)iVar15 * 8) = puVar34;
    *(int *)((longlong)puVar34 + 0x2c) = *(int *)(local_560 + 0x170) + -1;
    FUN_140069100(local_560,puVar34);
    lVar38 = local_528;
    puVar1 = local_550;
    uStack_160 = (int *)CONCAT44(uStack_160._4_4_,0x4189);
    uVar29 = 0x14;
    if (DAT_14ca84e48 < 0x14) {
      uVar29 = DAT_14ca84e48;
    }
    local_158 = (undefined *)0x0;
    local_168 = (ulonglong *)CONCAT44(2 - (uint)(DAT_14ca84e48 < 2),uVar29 + (uVar29 == 0));
    uVar39 = *(longlong *)(local_560 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar47 = uVar39 + 0x150;
    if (*(ulonglong *)(local_560 + 0x78) < uVar47) {
      FUN_140023dd8(local_550,0x160);
      uVar39 = *puVar1 + 0xf & 0xfffffffffffffff0;
      uVar47 = uVar39 + 0x150;
    }
    lVar22 = local_560 + 0x188;
    *(ulonglong *)(local_560 + 0x70) = uVar47;
    FUN_1456bd266(uVar39,L"DOFIndirectDrawParameters",&local_168,0);
    iVar15 = *(int *)(local_560 + 400);
    *(uint *)(local_560 + 400) = iVar15 + 1U;
    if (*(uint *)(local_560 + 0x194) < iVar15 + 1U) {
      FUN_144737178(lVar22,iVar15);
    }
    puVar1 = local_550;
    *(ulonglong *)(*(longlong *)(local_560 + 0x188) + (longlong)iVar15 * 8) = uVar39;
    *(int *)(uVar39 + 0x7c) = *(int *)(local_560 + 400) + -1;
    uVar29 = (int)local_470 * 5;
    bVar49 = (byte)local_4a0;
    local_310 = uVar39;
    if ((byte)local_4a0 == 0) {
      local_500 = (int *)0x0;
    }
    else {
      uVar25 = 0x10;
      if (DAT_14ca84e48 < 0x10) {
        uVar25 = DAT_14ca84e48;
      }
      uStack_160 = (int *)CONCAT44(uStack_160._4_4_,0x10109);
      uVar28 = DAT_14ca84e48;
      if (uVar29 < DAT_14ca84e48) {
        uVar28 = uVar29;
      }
      local_158 = (undefined *)0x0;
      local_168 = (ulonglong *)CONCAT44(uVar28 + (uVar28 == 0),uVar25 + (uVar25 == 0));
      piVar53 = (int *)(*(longlong *)(local_560 + 0x70) + 0xfU & 0xfffffffffffffff0);
      piVar21 = piVar53 + 0x54;
      if (*(int **)(local_560 + 0x78) < piVar21) {
        FUN_140023dd8(local_550,0x160);
        piVar53 = (int *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        piVar21 = piVar53 + 0x54;
      }
      *(int **)(local_560 + 0x70) = piVar21;
      FUN_1456bd266(piVar53,L"DOF.ForegroundDrawList",&local_168,0);
      iVar15 = *(int *)(local_560 + 400);
      *(uint *)(local_560 + 400) = iVar15 + 1U;
      if (*(uint *)(local_560 + 0x194) < iVar15 + 1U) {
        FUN_144737178(lVar22,iVar15);
      }
      *(int **)(*(longlong *)(local_560 + 0x188) + (longlong)iVar15 * 8) = piVar53;
      piVar53[0x1f] = *(int *)(local_560 + 400) + -1;
      local_500 = piVar53;
    }
    puVar1 = local_550;
    if ((char)local_518 == '\0') {
      local_4c0 = (int *)0x0;
      bVar12 = 0;
    }
    else {
      uVar25 = 0x10;
      if (DAT_14ca84e48 < 0x10) {
        uVar25 = DAT_14ca84e48;
      }
      uStack_160 = (int *)CONCAT44(uStack_160._4_4_,0x10109);
      uVar28 = DAT_14ca84e48;
      if (uVar29 < DAT_14ca84e48) {
        uVar28 = uVar29;
      }
      local_158 = (undefined *)0x0;
      local_168 = (ulonglong *)CONCAT44(uVar28 + (uVar28 == 0),uVar25 + (uVar25 == 0));
      piVar53 = (int *)(*(longlong *)(local_560 + 0x70) + 0xfU & 0xfffffffffffffff0);
      piVar21 = piVar53 + 0x54;
      if (*(int **)(local_560 + 0x78) < piVar21) {
        FUN_140023dd8(local_550,0x160);
        piVar53 = (int *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        piVar21 = piVar53 + 0x54;
      }
      *(int **)(local_560 + 0x70) = piVar21;
      FUN_1456bd266(piVar53,L"DOF.BackgroundDrawList",&local_168,0);
      iVar15 = *(int *)(local_560 + 400);
      *(uint *)(local_560 + 400) = iVar15 + 1U;
      if (*(uint *)(local_560 + 0x194) < iVar15 + 1U) {
        FUN_144737178(lVar22,iVar15);
      }
      *(int **)(*(longlong *)(local_560 + 0x188) + (longlong)iVar15 * 8) = piVar53;
      piVar53[0x1f] = *(int *)(local_560 + 400) + -1;
      bVar12 = (byte)local_518;
      local_4c0 = piVar53;
    }
  }
  else {
    local_4c0 = (int *)0x0;
    local_500 = (int *)0x0;
    fVar65 = local_43c;
    fVar54 = local_438;
    fVar57 = local_3e8;
    bVar49 = (byte)local_4a0;
  }
  uVar39 = local_298;
  puVar1 = local_550;
  uVar47 = local_498;
  if ((int)local_520 < (int)local_498) {
    uVar47 = local_520;
  }
  local_540 = (undefined8 *)(uVar47 & 0xffffffff);
  uVar30 = (ulonglong)uStack_3a0 >> 0x18;
  local_3a8 = (uint *)CONCAT71(local_3a8._1_7_,local_1d9);
  local_3a8 = (uint *)CONCAT44((int)uVar47,(undefined4)local_3a8);
  uStack_3a0._0_3_ = CONCAT12(local_1da,CONCAT11(bVar12,bVar49));
  uStack_3a0 = (byte *)(CONCAT53((int5)uVar30,(int3)uStack_3a0) & 0xffffffff00ffffff);
  puVar50 = (undefined8 *)(*(longlong *)(local_560 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar23 = puVar50 + 0x20;
  if (*(undefined8 **)(local_560 + 0x78) < puVar23) {
    FUN_140023dd8(local_550,0x110);
    puVar50 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar23 = puVar50 + 0x20;
  }
  *(undefined8 **)(local_560 + 0x70) = puVar23;
  *puVar50 = &PTR_FUN_14a2b2958;
  puVar50[8] = 0;
  puVar50[10] = 0;
  puVar50[2] = 0;
  puVar50[3] = 0;
  *(undefined1 *)(puVar50 + 0xb) = 1;
  puVar50[0xc] = 0;
  puVar50[0xd] = 0x3f80000000000000;
  puVar50[0xe] = 0;
  puVar50[0xf] = 0;
  *(undefined8 *)((longlong)puVar50 + 0x7c) = 0;
  *(undefined8 *)((longlong)puVar50 + 0x84) = 0;
  *(undefined4 *)((longlong)puVar50 + 0x8c) = 0x3f800000;
  puVar50[0x12] = 0;
  puVar50[0x13] = 0;
  puVar50[0x14] = 0;
  puVar50[0x15] = 0;
  puVar50[0x16] = 0;
  puVar50[0x17] = 0;
  puVar50[0x18] = 0;
  puVar50[0x19] = 0;
  puVar50[0x1a] = 0;
  puVar50[0x1b] = 0;
  puVar50[0x1c] = 0;
  puVar50[0x1d] = 0;
  puVar50[0x1e] = 0;
  iVar15 = *(int *)(local_560 + 0xa0);
  *(uint *)(local_560 + 0xa0) = iVar15 + 1U;
  if (*(uint *)(local_560 + 0xa4) < iVar15 + 1U) {
    FUN_1448cfae8(local_490,iVar15);
  }
  *(undefined8 **)(*local_490 + (longlong)iVar15 * 8) = puVar50;
  puVar50[2] = 0;
  puVar50[3] = uVar39;
  *(float *)(puVar50 + 4) = ((float)(int)local_298 + -0.5) / fVar63;
  *(float *)((longlong)puVar50 + 0x24) = ((float)local_298._4_4_ + -0.5) / fVar60;
  *(int *)(puVar50 + 5) = (int)local_470;
  *(float *)((longlong)puVar50 + 0x2c) = local_2a8 / local_2a4;
  *(float *)(puVar50 + 6) = fVar65;
  *(undefined4 *)((longlong)puVar50 + 0x34) = *(undefined4 *)(DAT_14ca21370 + 4);
  *(undefined4 *)(puVar50 + 7) = local_1ec;
  plVar41 = *(longlong **)(lVar38 + 0x30d8);
  if ((plVar41 == (longlong *)0x0) || ((*(byte *)(plVar41 + 1) & 2) == 0)) {
    local_168 = (ulonglong *)&DAT_3f8000003f800000;
    uStack_160 = (int *)&DAT_3f8000003f800000;
    local_570 = &local_168;
    local_578 = (uint **)CONCAT44(local_578._4_4_,1);
    lVar38 = FUN_1449cc94d(local_560,&DAT_14ca63c48,&DAT_14ca63c78,0x10);
  }
  else {
    if (*(code **)(*plVar41 + 0x80) == (code *)&LAB_144b15db6) {
      local_168 = (ulonglong *)plVar41[(ulonglong)*(uint *)(plVar41 + 0xcd) + 0xd1];
    }
    else {
      local_168 = (ulonglong *)(**(code **)(*plVar41 + 0x80))();
    }
    if (local_168 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_168 + 1) = *(int *)(local_168 + 1) + 1;
      UNLOCK();
    }
    lVar38 = FUN_144735dd8(local_560,&local_168,1);
    if (local_168 != (undefined8 *)0x0) {
      LOCK();
      piVar21 = (int *)(local_168 + 1);
      *piVar21 = *piVar21 + -1;
      UNLOCK();
      if (*piVar21 == 0) {
        (**(code **)*local_168)(local_168,1);
      }
    }
  }
  puVar1 = local_550;
  cVar14 = *(char *)(lVar38 + 0x68);
  puVar34 = (undefined8 *)(*(longlong *)(local_560 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar23 = puVar34 + 9;
  if (*(undefined8 **)(local_560 + 0x78) < puVar23) {
    FUN_140023dd8(local_550,0x50);
    puVar34 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar23 = puVar34 + 9;
  }
  local_530 = local_560 + 0x198;
  *(undefined8 **)(local_560 + 0x70) = puVar23;
  puVar34[1] = *(undefined8 *)(lVar38 + 8);
  puVar34[2] = 0;
  *(undefined1 *)(puVar34 + 3) = 3;
  *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
  *puVar34 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar34 + 5) = cVar14 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar34 + 0x2c) = 0xffffffff00000000;
  puVar34[7] = 0;
  puVar34[8] = lVar38;
  iVar15 = *(int *)(local_560 + 0x1a0);
  *(uint *)(local_560 + 0x1a0) = iVar15 + 1U;
  if (*(uint *)(local_560 + 0x1a4) < iVar15 + 1U) {
    FUN_1447568fc(local_530,iVar15);
  }
  uVar47 = local_560;
  local_510 = uVar39;
  *(undefined8 **)(*(longlong *)(local_560 + 0x198) + (longlong)iVar15 * 8) = puVar34;
  *(int *)((longlong)puVar34 + 0x1c) = *(int *)(local_560 + 0x1a0) + -1;
  puVar50[8] = puVar34;
  puVar50[10] = local_2c8;
  puVar50[0xb] = CONCAT44(uStack_2bc,uStack_2c0);
  *(float *)(puVar50 + 0xc) = fVar63;
  *(float *)((longlong)puVar50 + 100) = fVar60;
  *(float *)(puVar50 + 0xd) = 1.0 / fVar63;
  *(float *)((longlong)puVar50 + 0x6c) = 1.0 / fVar60;
  FUN_142e912fa(&local_168,1.0 / fVar63,&local_2e8,0);
  puVar50[0xe] = local_168;
  puVar50[0xf] = uStack_160;
  *(float *)(puVar50 + 0x10) = (float)((int)(((uint)(local_4f8 >> 0x1f) & 1) + (int)local_4f8) >> 1)
  ;
  *(float *)((longlong)puVar50 + 0x84) =
       (float)((int)(((uint)(local_428 >> 0x1f) & 1) + (int)local_428) >> 1);
  *(float *)(puVar50 + 0x11) = 2.0 / fVar63;
  *(float *)((longlong)puVar50 + 0x8c) = 2.0 / fVar60;
  *(undefined4 *)(puVar50 + 0x12) = (undefined4)local_1d8;
  *(undefined4 *)((longlong)puVar50 + 0x94) = local_1d8._4_4_;
  *(undefined4 *)(puVar50 + 0x13) = (undefined4)uStack_1d0;
  *(undefined4 *)((longlong)puVar50 + 0x9c) = uStack_1d0._4_4_;
  if (0 < (int)local_520) {
    uVar30 = 1;
    if (1 < (int)local_540) {
      uVar30 = (ulonglong)local_540 & 0xffffffff;
    }
    puVar23 = puVar50 + 0x14;
    uVar42 = 0;
    do {
      FUN_142e90680(&local_168,uVar47,&local_308,uVar42 & 0xffffffff);
      *(float *)puVar23 = (float)local_168;
      *(float *)((longlong)puVar23 + 4) = local_168._4_4_;
      *(float *)(puVar23 + 1) = (float)uStack_160;
      *(float *)((longlong)puVar23 + 0xc) = uStack_160._4_4_;
      uVar42 = uVar42 + 1;
      puVar23 = puVar23 + 2;
    } while (uVar30 != uVar42);
  }
  uVar47 = local_310;
  puVar1 = local_550;
  iVar15 = (int)local_510;
  if ((byte)local_4b8 != '\0') {
    cVar14 = *(char *)(local_310 + 0x68);
    puVar34 = (undefined8 *)(*(longlong *)(local_560 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar23 = puVar34 + 8;
    if (*(undefined8 **)(local_560 + 0x78) < puVar23) {
      FUN_140023dd8(local_550,0x48);
      puVar34 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar23 = puVar34 + 8;
    }
    *(undefined8 **)(local_560 + 0x70) = puVar23;
    puVar34[1] = *(undefined8 *)(uVar47 + 8);
    puVar34[2] = 0;
    *(undefined1 *)(puVar34 + 3) = 2;
    *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar34 + 5) = 0;
    *puVar34 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar34 + 6) = cVar14 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar34 + 0x31) = 0;
    puVar34[7] = uVar47;
    iVar51 = *(int *)(local_560 + 0x1a0);
    *(uint *)(local_560 + 0x1a0) = iVar51 + 1U;
    if (*(uint *)(local_560 + 0x1a4) < iVar51 + 1U) {
      FUN_1447568fc(local_530,iVar51);
    }
    piVar53 = local_4c0;
    piVar21 = local_500;
    puVar1 = local_550;
    *(undefined8 **)(*(longlong *)(local_560 + 0x198) + (longlong)iVar51 * 8) = puVar34;
    *(int *)((longlong)puVar34 + 0x1c) = *(int *)(local_560 + 0x1a0) + -1;
    puVar50[0x1c] = puVar34;
    if (local_500 != (int *)0x0) {
      iVar15 = local_500[0x1a];
      puVar34 = (undefined8 *)(*(longlong *)(local_560 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar23 = puVar34 + 8;
      if (*(undefined8 **)(local_560 + 0x78) < puVar23) {
        FUN_140023dd8(local_550,0x48);
        puVar34 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar23 = puVar34 + 8;
      }
      *(undefined8 **)(local_560 + 0x70) = puVar23;
      puVar34[1] = *(undefined8 *)(piVar21 + 2);
      puVar34[2] = 0;
      *(undefined1 *)(puVar34 + 3) = 2;
      *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar34 + 5) = 0;
      *puVar34 = &PTR_FUN_14a1fb3e8;
      *(byte *)(puVar34 + 6) = (char)iVar15 >> 7 & 0x1c;
      *(undefined2 *)((longlong)puVar34 + 0x31) = 0;
      puVar34[7] = piVar21;
      iVar15 = *(int *)(local_560 + 0x1a0);
      *(uint *)(local_560 + 0x1a0) = iVar15 + 1U;
      if (*(uint *)(local_560 + 0x1a4) < iVar15 + 1U) {
        FUN_1447568fc(local_530,iVar15);
      }
      *(undefined8 **)(*(longlong *)(local_560 + 0x198) + (longlong)iVar15 * 8) = puVar34;
      *(int *)((longlong)puVar34 + 0x1c) = *(int *)(local_560 + 0x1a0) + -1;
      puVar50[0x1d] = puVar34;
      iVar15 = (int)local_510;
    }
    puVar1 = local_550;
    if (piVar53 != (int *)0x0) {
      iVar51 = piVar53[0x1a];
      puVar34 = (undefined8 *)(*(longlong *)(local_560 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar23 = puVar34 + 8;
      if (*(undefined8 **)(local_560 + 0x78) < puVar23) {
        FUN_140023dd8(local_550,0x48);
        iVar15 = (int)local_510;
        puVar34 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar23 = puVar34 + 8;
      }
      *(undefined8 **)(local_560 + 0x70) = puVar23;
      puVar34[1] = *(undefined8 *)(piVar53 + 2);
      puVar34[2] = 0;
      *(undefined1 *)(puVar34 + 3) = 2;
      *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar34 + 5) = 0;
      *puVar34 = &PTR_FUN_14a1fb3e8;
      *(byte *)(puVar34 + 6) = (char)iVar51 >> 7 & 0x1c;
      *(undefined2 *)((longlong)puVar34 + 0x31) = 0;
      puVar34[7] = piVar53;
      iVar51 = *(int *)(local_560 + 0x1a0);
      *(uint *)(local_560 + 0x1a0) = iVar51 + 1U;
      if (*(uint *)(local_560 + 0x1a4) < iVar51 + 1U) {
        FUN_1447568fc(local_530,iVar51);
      }
      *(undefined8 **)(*(longlong *)(local_560 + 0x198) + (longlong)iVar51 * 8) = puVar34;
      *(int *)((longlong)puVar34 + 0x1c) = *(int *)(local_560 + 0x1a0) + -1;
      puVar50[0x1e] = puVar34;
    }
    FUN_1405bfba3(local_560,puVar50[0x1c],0,2);
  }
  FUN_142e91538(&local_168,*(undefined8 *)(local_528 + 0x13818),&local_3a8);
  iVar51 = (int)(uVar39 >> 0x20);
  iVar16 = iVar51 + 7;
  local_318 = iVar51 + 0xe;
  if (-1 < iVar16) {
    local_318 = iVar16;
  }
  local_318 = local_318 >> 3;
  local_31c = iVar15 + 0xe;
  if (-1 < iVar15 + 7) {
    local_31c = iVar15 + 7;
  }
  local_31c = local_31c >> 3;
  local_578 = (uint **)&local_31c;
  local_314 = 1;
  FUN_142e915d5(local_560,&local_348,&local_168,puVar50 + 2);
  puVar23 = local_540;
  if ((int)local_498 < (int)local_520) {
    do {
      plVar41 = DAT_14ca27dc8;
      if (*(code **)(*DAT_14ca27dc8 + 0xa8) == FUN_144aa0162) {
        iVar15 = FUN_140052f36(DAT_14ca27dc8);
        if (iVar15 == 0) {
          pbVar45 = (byte *)(plVar41 + 0xb);
        }
        else {
          pbVar45 = (byte *)plVar41[10];
        }
        bVar12 = *pbVar45;
      }
      else {
        bVar12 = (**(code **)(*DAT_14ca27dc8 + 0xa8))(DAT_14ca27dc8);
      }
      puVar1 = local_550;
      uVar25 = (int)local_520 - (int)puVar23;
      local_4d0 = CONCAT44(local_4d0._4_4_,uVar25);
      uVar29 = bVar12 ^ 3;
      if ((int)uVar25 < (int)(bVar12 ^ 3)) {
        uVar29 = uVar25;
      }
      local_4f8 = (ulonglong)uVar29;
      iVar51 = (int)puVar23 + -1;
      iVar15 = *(int *)(local_308 + 0x84);
      local_4e0 = (undefined1 *)CONCAT44(local_4e0._4_4_,iVar51);
      uVar25 = 1 << ((byte)iVar51 & 0x1f);
      iVar51 = *(int *)(local_308 + 0x88);
      uVar47 = (longlong)(int)((int)(local_298 >> 0x20) + uVar25 + -1) / (longlong)(int)uVar25;
      uVar30 = uVar47 & 0xffffffff;
      uVar42 = (longlong)(int)((int)local_298 + uVar25 + -1) / (longlong)(int)uVar25 & 0xffffffff;
      uVar39 = (ulonglong)uStack_3a0 >> 0x20;
      local_3a8 = (uint *)CONCAT71(local_3a8._1_7_,local_1d9);
      local_3a8 = (uint *)CONCAT44(uVar29 + 1,(undefined4)local_3a8);
      uStack_3a0._0_3_ = (uint3)local_1da << 0x10;
      uStack_3a0._0_4_ = CONCAT13(1,(int3)uStack_3a0);
      uStack_3a0 = (byte *)CONCAT44((int)uVar39,(undefined4)uStack_3a0);
      puVar34 = (undefined8 *)(*(longlong *)(local_560 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar50 = puVar34 + 0x20;
      if (*(undefined8 **)(local_560 + 0x78) < puVar50) {
        FUN_140023dd8(local_550,0x110);
        puVar34 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        puVar50 = puVar34 + 0x20;
      }
      *(undefined8 **)(local_560 + 0x70) = puVar50;
      *puVar34 = &PTR_FUN_14a2b2958;
      puVar34[8] = 0;
      puVar34[10] = 0;
      puVar34[2] = 0;
      puVar34[3] = 0;
      *(undefined1 *)(puVar34 + 0xb) = 1;
      puVar34[0xc] = 0;
      puVar34[0xd] = 0x3f80000000000000;
      puVar34[0xe] = 0;
      puVar34[0xf] = 0;
      *(undefined8 *)((longlong)puVar34 + 0x7c) = 0;
      *(undefined8 *)((longlong)puVar34 + 0x84) = 0;
      *(undefined4 *)((longlong)puVar34 + 0x8c) = 0x3f800000;
      puVar34[0x12] = 0;
      puVar34[0x13] = 0;
      puVar34[0x14] = 0;
      puVar34[0x15] = 0;
      puVar34[0x16] = 0;
      puVar34[0x17] = 0;
      puVar34[0x18] = 0;
      puVar34[0x19] = 0;
      puVar34[0x1a] = 0;
      puVar34[0x1b] = 0;
      puVar34[0x1c] = 0;
      puVar34[0x1d] = 0;
      puVar34[0x1e] = 0;
      iVar16 = *(int *)(local_560 + 0xa0);
      *(uint *)(local_560 + 0xa0) = iVar16 + 1U;
      if (*(uint *)(local_560 + 0xa4) < iVar16 + 1U) {
        local_4e8 = (ulonglong)uVar25;
        FUN_1448cfae8(local_490,iVar16);
        uVar25 = (uint)local_4e8;
      }
      *(undefined8 **)(*local_490 + (longlong)iVar16 * 8) = puVar34;
      puVar34[2] = 0;
      puVar34[3] = uVar47 << 0x20 | uVar42;
      fVar60 = (float)iVar51;
      fVar65 = (float)iVar15;
      *(float *)(puVar34 + 4) = ((float)(int)local_298 + -0.5) / fVar65;
      *(float *)((longlong)puVar34 + 0x24) = ((float)local_298._4_4_ + -0.5) / fVar60;
      plVar41 = *(longlong **)(local_528 + 0x30d8);
      local_540 = puVar23;
      local_510 = uVar30;
      local_4d8 = uVar42;
      if ((plVar41 == (longlong *)0x0) || ((*(byte *)(plVar41 + 1) & 2) == 0)) {
        local_168 = (ulonglong *)&DAT_3f8000003f800000;
        uStack_160 = (int *)&DAT_3f8000003f800000;
        local_578 = (uint **)CONCAT44(local_578._4_4_,1);
        local_570 = &local_168;
        lVar38 = FUN_1449cc94d(local_560,&DAT_14ca63c48,&DAT_14ca63c78,0x10);
      }
      else {
        if (*(code **)(*plVar41 + 0x80) == (code *)&LAB_144b15db6) {
          local_168 = (ulonglong *)plVar41[(ulonglong)*(uint *)(plVar41 + 0xcd) + 0xd1];
        }
        else {
          local_168 = (ulonglong *)(**(code **)(*plVar41 + 0x80))();
        }
        if (local_168 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(local_168 + 1) = *(int *)(local_168 + 1) + 1;
          UNLOCK();
        }
        lVar38 = FUN_144735dd8(local_560,&local_168,1);
        if (local_168 != (undefined8 *)0x0) {
          LOCK();
          piVar21 = (int *)(local_168 + 1);
          *piVar21 = *piVar21 + -1;
          UNLOCK();
          if (*piVar21 == 0) {
            (**(code **)*local_168)(local_168,1);
          }
        }
      }
      puVar1 = local_550;
      cVar14 = *(char *)(lVar38 + 0x68);
      puVar50 = (undefined8 *)(*(longlong *)(local_560 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar23 = puVar50 + 9;
      if (*(undefined8 **)(local_560 + 0x78) < puVar23) {
        FUN_140023dd8(local_550,0x50);
        puVar50 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar23 = puVar50 + 9;
      }
      *(undefined8 **)(local_560 + 0x70) = puVar23;
      puVar50[1] = *(undefined8 *)(lVar38 + 8);
      puVar50[2] = 0;
      *(undefined1 *)(puVar50 + 3) = 3;
      *(undefined8 *)((longlong)puVar50 + 0x1c) = 0xffffffffffffffff;
      *puVar50 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar50 + 5) = cVar14 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar50 + 0x2c) = 0xffffffff00000000;
      puVar50[7] = 0;
      puVar50[8] = lVar38;
      iVar15 = *(int *)(local_560 + 0x1a0);
      *(uint *)(local_560 + 0x1a0) = iVar15 + 1U;
      if (*(uint *)(local_560 + 0x1a4) < iVar15 + 1U) {
        FUN_1447568fc(local_530,iVar15);
      }
      uVar47 = local_560;
      *(undefined8 **)(*(longlong *)(local_560 + 0x198) + (longlong)iVar15 * 8) = puVar50;
      *(int *)((longlong)puVar50 + 0x1c) = *(int *)(local_560 + 0x1a0) + -1;
      puVar34[8] = puVar50;
      fVar63 = (float)(int)uVar25;
      puVar34[10] = local_2c8;
      puVar34[0xb] = CONCAT44(uStack_2bc,uStack_2c0);
      *(float *)(puVar34 + 0xc) = fVar65 / fVar63;
      *(float *)((longlong)puVar34 + 100) = fVar60 / fVar63;
      *(float *)(puVar34 + 0xd) = fVar63 / fVar65;
      *(float *)((longlong)puVar34 + 0x6c) = fVar63 / fVar60;
      FUN_142e912fa(&local_168,local_560,&local_308,(ulonglong)local_4e0 & 0xffffffff);
      *(float *)(puVar34 + 0xe) = (float)local_168;
      *(float *)((longlong)puVar34 + 0x74) = local_168._4_4_;
      *(float *)(puVar34 + 0xf) = (float)uStack_160;
      *(float *)((longlong)puVar34 + 0x7c) = uStack_160._4_4_;
      if (0 < (int)local_4d0) {
        uVar39 = 1;
        if (1 < (int)local_4f8) {
          uVar39 = local_4f8 & 0xffffffff;
        }
        uVar30 = (ulonglong)local_540 & 0xffffffff;
        lVar38 = 0;
        do {
          FUN_142e90680(&local_168,uVar47,&local_308,uVar30);
          puVar2 = (undefined4 *)((longlong)puVar34 + lVar38 + 0xb0);
          *puVar2 = (float)local_168;
          puVar2[1] = local_168._4_4_;
          puVar2[2] = (float)uStack_160;
          puVar2[3] = uStack_160._4_4_;
          lVar38 = lVar38 + 0x10;
          uVar30 = CONCAT71((int7)(uVar30 >> 8),(char)uVar30 + '\x01');
        } while (uVar39 * 0x10 != lVar38);
      }
      FUN_142e91538(&local_168,*(undefined8 *)(local_528 + 0x13818),&local_3a8);
      iVar15 = (int)local_510 + 7;
      local_324 = (int)local_510 + 0xe;
      if (-1 < iVar15) {
        local_324 = iVar15;
      }
      local_324 = local_324 >> 3;
      iVar15 = (int)local_4d8 + 7;
      local_328 = (int)local_4d8 + 0xe;
      if (-1 < iVar15) {
        local_328 = iVar15;
      }
      local_328 = local_328 >> 3;
      local_320 = 1;
      local_578 = (uint **)&local_328;
      FUN_142e915d5(uVar47,&local_348,&local_168,puVar34 + 2);
      uVar29 = (int)local_4f8 + (int)local_540;
      puVar23 = (undefined8 *)(ulonglong)uVar29;
    } while ((int)uVar29 < (int)local_520);
  }
  puVar1 = local_550;
  if ((byte)local_4b8 != '\0') {
    puVar50 = (undefined8 *)(*(longlong *)(local_560 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar23 = puVar50 + 6;
    if (*(undefined8 **)(local_560 + 0x78) < puVar23) {
      FUN_140023dd8(local_550,0x40);
      puVar50 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar23 = puVar50 + 6;
    }
    *(undefined8 **)(local_560 + 0x70) = puVar23;
    *puVar50 = &PTR_FUN_14a2b2978;
    puVar50[3] = 0;
    puVar50[4] = 0;
    puVar50[5] = 0;
    iVar15 = *(int *)(local_560 + 0xa0);
    *(uint *)(local_560 + 0xa0) = iVar15 + 1U;
    if (*(uint *)(local_560 + 0xa4) < iVar15 + 1U) {
      FUN_1448cfae8(local_490,iVar15);
    }
    uVar47 = local_310;
    puVar1 = local_550;
    *(undefined8 **)(*(longlong *)(local_560 + 0x98) + (longlong)iVar15 * 8) = puVar50;
    *(int *)(puVar50 + 2) = (int)local_470;
    cVar14 = *(char *)(local_310 + 0x68);
    puVar34 = (undefined8 *)(*(longlong *)(local_560 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar23 = puVar34 + 8;
    if (*(undefined8 **)(local_560 + 0x78) < puVar23) {
      FUN_140023dd8(local_550,0x48);
      puVar34 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar23 = puVar34 + 8;
    }
    *(undefined8 **)(local_560 + 0x70) = puVar23;
    puVar34[1] = *(undefined8 *)(uVar47 + 8);
    puVar34[2] = 0;
    *(undefined1 *)(puVar34 + 3) = 2;
    *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar34 + 5) = 0;
    *puVar34 = &PTR_FUN_14a1fb3e8;
    *(byte *)(puVar34 + 6) = cVar14 >> 7 & 0x1c;
    *(undefined2 *)((longlong)puVar34 + 0x31) = 0;
    puVar34[7] = uVar47;
    iVar15 = *(int *)(local_560 + 0x1a0);
    *(uint *)(local_560 + 0x1a0) = iVar15 + 1U;
    if (*(uint *)(local_560 + 0x1a4) < iVar15 + 1U) {
      FUN_1447568fc(local_530,iVar15);
    }
    piVar53 = local_4c0;
    piVar21 = local_500;
    lVar38 = local_528;
    puVar1 = local_550;
    *(undefined8 **)(*(longlong *)(local_560 + 0x198) + (longlong)iVar15 * 8) = puVar34;
    *(int *)((longlong)puVar34 + 0x1c) = *(int *)(local_560 + 0x1a0) + -1;
    puVar50[3] = puVar34;
    if (local_500 != (int *)0x0) {
      iVar15 = local_500[0x1a];
      puVar34 = (undefined8 *)(*(longlong *)(local_560 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar23 = puVar34 + 8;
      if (*(undefined8 **)(local_560 + 0x78) < puVar23) {
        FUN_140023dd8(local_550,0x48);
        puVar34 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar23 = puVar34 + 8;
      }
      *(undefined8 **)(local_560 + 0x70) = puVar23;
      puVar34[1] = *(undefined8 *)(piVar21 + 2);
      puVar34[2] = 0;
      *(undefined1 *)(puVar34 + 3) = 2;
      *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar34 + 5) = 0;
      *puVar34 = &PTR_FUN_14a1fb3e8;
      *(byte *)(puVar34 + 6) = (char)iVar15 >> 7 & 0x1c;
      *(undefined2 *)((longlong)puVar34 + 0x31) = 0;
      puVar34[7] = piVar21;
      iVar15 = *(int *)(local_560 + 0x1a0);
      *(uint *)(local_560 + 0x1a0) = iVar15 + 1U;
      if (*(uint *)(local_560 + 0x1a4) < iVar15 + 1U) {
        FUN_1447568fc(local_530,iVar15);
      }
      *(undefined8 **)(*(longlong *)(local_560 + 0x198) + (longlong)iVar15 * 8) = puVar34;
      *(int *)((longlong)puVar34 + 0x1c) = *(int *)(local_560 + 0x1a0) + -1;
      puVar50[4] = puVar34;
    }
    puVar1 = local_550;
    cVar14 = (char)local_518;
    puVar23 = puVar50 + 2;
    if (piVar53 != (int *)0x0) {
      iVar15 = piVar53[0x1a];
      puVar43 = (undefined8 *)(*(longlong *)(local_560 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar34 = puVar43 + 8;
      if (*(undefined8 **)(local_560 + 0x78) < puVar34) {
        FUN_140023dd8(local_550,0x48);
        puVar43 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar34 = puVar43 + 8;
      }
      *(undefined8 **)(local_560 + 0x70) = puVar34;
      puVar43[1] = *(undefined8 *)(piVar53 + 2);
      puVar43[2] = 0;
      *(undefined1 *)(puVar43 + 3) = 2;
      *(undefined8 *)((longlong)puVar43 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar43 + 5) = 0;
      *puVar43 = &PTR_FUN_14a1fb3e8;
      *(byte *)(puVar43 + 6) = (char)iVar15 >> 7 & 0x1c;
      *(undefined2 *)((longlong)puVar43 + 0x31) = 0;
      puVar43[7] = piVar53;
      iVar15 = *(int *)(local_560 + 0x1a0);
      *(uint *)(local_560 + 0x1a0) = iVar15 + 1U;
      if (*(uint *)(local_560 + 0x1a4) < iVar15 + 1U) {
        FUN_1447568fc(local_530,iVar15);
      }
      cVar14 = (char)local_518;
      *(undefined8 **)(*(longlong *)(local_560 + 0x198) + (longlong)iVar15 * 8) = puVar43;
      *(int *)((longlong)puVar43 + 0x1c) = *(int *)(local_560 + 0x1a0) + -1;
      puVar50[5] = puVar43;
      lVar38 = local_528;
    }
    uVar47 = local_560;
    uVar19 = *(undefined8 *)(lVar38 + 0x13818);
    cVar14 = cVar14 * '\x02' + (byte)local_4a0;
    FUN_142e89716();
    FUN_1448e935e(uVar19,&local_168,&DAT_14ca238a0,cVar14);
    FUN_142e89716();
    puVar9 = (undefined1 *)uStack_160;
    puVar50 = local_168;
    FUN_142e9d338();
    local_168 = (ulonglong *)0x0;
    uStack_160 = (int *)0x0;
    FUN_1448f70da(puVar50,&DAT_14ca23950,puVar23,&local_168);
    FUN_140069376(uVar47);
    puVar1 = local_550;
    uVar33 = 2;
    if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
       ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
      uVar33 = 4;
    }
    puVar43 = (undefined8 *)(*(longlong *)(local_560 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar34 = puVar43 + 0x3d;
    if (*(undefined8 **)(local_560 + 0x78) < puVar34) {
      FUN_140023dd8(local_550,0x1f0);
      puVar43 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar34 = puVar43 + 0x3d;
    }
    *local_550 = (ulonglong)puVar34;
    uStack_160 = (int *)DAT_14ca23998;
    if (DAT_14ca23998 != 0) {
      LOCK();
      *(int *)(DAT_14ca23998 + 8) = *(int *)(DAT_14ca23998 + 8) + 1;
      UNLOCK();
    }
    local_158 = &DAT_14ca23950;
    local_578 = (uint **)CONCAT71(local_578._1_7_,2);
    local_168 = puVar23;
    FUN_140068f1a(puVar43,&local_3a8,&local_168,uVar33);
    *puVar43 = &PTR_FUN_14a2b2980;
    puVar43[0x37] = &DAT_14ca23950;
    puVar43[0x38] = puVar23;
    puVar43[0x39] = puVar50;
    puVar43[0x3a] = puVar9;
    puVar43[0x3b] = &DAT_100000002;
    *(undefined4 *)(puVar43 + 0x3c) = 1;
    iVar15 = *(int *)(local_560 + 0x170);
    *(uint *)(local_560 + 0x170) = iVar15 + 1U;
    if (*(uint *)(local_560 + 0x174) < iVar15 + 1U) {
      FUN_14470e57a(local_4a8,iVar15);
    }
    *(undefined8 **)(*(longlong *)(local_560 + 0x168) + (longlong)iVar15 * 8) = puVar43;
    *(int *)((longlong)puVar43 + 0x2c) = *(int *)(local_560 + 0x170) + -1;
    FUN_140069100(local_560,puVar43);
  }
  local_348 = local_23c;
  uStack_340 = local_560;
  local_338 = local_220;
  local_330 = local_528;
  local_358 = 0;
  uStack_350 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_368 = 0;
  uStack_360 = 0;
  local_168 = &local_308;
  local_158 = (undefined *)local_560;
  uStack_3a0 = &local_1d9;
  local_148._0_4_ = SUB84(&local_298,0);
  uVar33 = (undefined4)local_148;
  uStack_140 = (uint)&local_1da;
  uStack_13c = (undefined2)((ulonglong)&local_1da >> 0x20);
  uStack_13a = (undefined2)((ulonglong)&local_1da >> 0x30);
  local_130 = (undefined1 *)local_528;
  local_128 = &local_2a8;
  uStack_120 = &local_2a4;
  local_380 = &local_2c8;
  local_378 = &local_2f8;
  uStack_108 = (uint)local_378;
  uStack_104 = (undefined2)((ulonglong)local_378 >> 0x20);
  uStack_102 = (undefined2)((ulonglong)local_378 >> 0x30);
  local_3a8 = (uint *)local_560;
  local_370 = local_528;
  local_398 = &local_298;
  local_390 = &local_2a0;
  local_388 = &local_2b0;
  uStack_160 = &local_2b0;
  local_138 = &local_2a0;
  local_118 = local_338;
  local_150 = uStack_3a0;
  local_148 = &local_298;
  local_110 = local_380;
  if ((char)local_484 == '\0') {
    uVar19 = 0;
  }
  else {
    uVar19 = FUN_142e917aa(&local_348,2);
  }
  local_3b0 = 0;
  if ((local_478 != 1 & ((byte)local_4f0 ^ 1)) == 0) {
    local_3b0 = FUN_142e917aa(&local_348,0);
  }
  local_1d8 = &local_3b0;
  uStack_1d0 = local_528;
  local_1b8 = (float *)local_23c;
  uStack_1ac = (undefined2)((ulonglong)&local_298 >> 0x20);
  uStack_1aa = (undefined2)((ulonglong)&local_298 >> 0x30);
  uStack_1a8 = SUB82(local_220,0);
  uStack_1a6 = (undefined1)((ulonglong)local_220 >> 0x10);
  uStack_1a5 = (undefined2)((ulonglong)local_220 >> 0x18);
  uStack_1a3 = (undefined1)((ulonglong)local_220 >> 0x28);
  uStack_1a2 = (undefined2)((ulonglong)local_220 >> 0x30);
  local_1a0 = &local_2c8;
  local_190 = &local_310;
  uStack_1c8 = (undefined8 *)local_560;
  local_1c0 = &local_2a0;
  local_1b0 = uVar33;
  local_198 = &local_2b0;
  if (1.0 < fVar57) {
    local_3c8 = (uint *)&DAT_100000000;
    uStack_3c0._4_4_ = 0;
    local_3b8 = local_47c;
    local_3b4 = (byte)local_4a0;
    if ((char)local_484 != '\0') {
      uStack_3c0._4_4_ = local_488;
    }
    uStack_3c0 = CONCAT44(uStack_3c0._4_4_,local_474);
    if (local_480 == 0) {
      local_3c8 = (uint *)0x0;
    }
    local_578 = (uint **)&local_3d0;
    local_3d0 = 0;
    FUN_142e91d0c(&local_168,&local_3c8,uVar19,&local_358);
    FUN_142e92e38(&local_3a8,&local_3c8);
    if ((byte)local_4a0 != '\0') {
      local_578 = (uint **)local_500;
      FUN_142e93658(&local_1d8,&local_3c8,&local_358,local_3d0);
    }
  }
  if (0 < (int)local_468) {
    local_3b4 = 0;
    local_3c8 = (uint *)&DAT_100000001;
    uStack_3c0 = (ulonglong)local_474;
    local_3b8 = local_47c;
    local_3d0 = 0;
    local_578 = (uint **)&local_3d0;
    FUN_142e91d0c(&local_168,&local_3c8,0,&local_178);
    uStack_3c0 = 0;
    local_3b4 = '\0';
    local_3c8 = (uint *)&DAT_100000004;
    if ((char)local_4f0 != '\0') {
      uStack_3c0 = (ulonglong)local_488 << 0x20;
    }
    local_3b8 = 3;
    local_3d0 = 0;
    uVar40 = 0;
    if ((char)local_4f0 != '\0') {
      uVar40 = local_3b0;
    }
    local_578 = (uint **)&local_3d0;
    FUN_142e91d0c(&local_168,&local_3c8,uVar40,&local_368);
  }
  puVar23 = local_460;
  if (1.0 < fVar54) {
    uStack_3c0._4_4_ = 0;
    local_3b8 = local_47c;
    cVar14 = (char)local_518;
    if ((char)local_484 != '\0') {
      uStack_3c0._4_4_ = local_488;
    }
    uStack_3c0 = CONCAT44(uStack_3c0._4_4_,local_474);
    uVar29 = local_480 == 2 | 2;
    if (cVar14 == '\0') {
      uVar29 = 0;
    }
    if (local_42c != 2) {
      uVar29 = 0;
    }
    local_3c8 = (uint *)CONCAT44(uVar29,2);
    local_578 = (uint **)&local_3d0;
    local_3d0 = 0;
    local_3b4 = cVar14;
    FUN_142e91d0c(&local_168,&local_3c8,uVar19,&local_188);
    FUN_142e92e38(&local_3a8,&local_3c8,&local_188);
    if (cVar14 != '\0') {
      local_578 = (uint **)local_4c0;
      FUN_142e93658(&local_1d8,&local_3c8,&local_188,local_3d0);
    }
  }
  puVar1 = local_550;
  uStack_160 = (int *)puVar23[0xd];
  local_158 = (undefined *)puVar23[0xe];
  local_150._0_4_ = *(undefined4 *)(puVar23 + 0xf);
  local_168 = (ulonglong *)(puVar23[0xc] & 0xfffffffff7fdeffc | 0x20001);
  uStack_13c = (undefined2)*(undefined4 *)((longlong)puVar23 + 0x8c);
  uStack_13a = (undefined2)((uint)*(undefined4 *)((longlong)puVar23 + 0x8c) >> 0x10);
  local_138._0_2_ = CONCAT11(1,*(undefined1 *)(puVar23 + 0x12));
  local_138 = (undefined8 *)
              CONCAT62(CONCAT24(local_138._6_2_,*(undefined4 *)((longlong)puVar23 + 0x92)),
                       (undefined2)local_138);
  uVar29 = (uint)*(undefined8 *)((longlong)puVar23 + 0x84);
  local_148._4_4_ = DAT_14ca84e40;
  if ((int)uVar29 < (int)DAT_14ca84e40) {
    local_148._4_4_ = uVar29;
  }
  if ((int)local_148._4_4_ < 2) {
    local_148._4_4_ = 1;
  }
  uVar29 = (uint)((ulonglong)*(undefined8 *)((longlong)puVar23 + 0x84) >> 0x20);
  uStack_140 = DAT_14ca84e40;
  if ((int)uVar29 < (int)DAT_14ca84e40) {
    uStack_140 = uVar29;
  }
  local_150._4_4_ = (uint)*(undefined8 *)((longlong)puVar23 + 0x7c);
  local_148._0_4_ = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar23 + 0x7c) >> 0x20);
  if ((int)uStack_140 < 2) {
    uStack_140 = 1;
  }
  uVar39 = *(longlong *)(local_560 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar47 = uVar39 + 0x120;
  if (*(ulonglong *)(local_560 + 0x78) < uVar47) {
    FUN_140023dd8(local_550,0x128);
    uVar39 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar47 = uVar39 + 0x120;
  }
  *(ulonglong *)(local_560 + 0x70) = uVar47;
  FUN_1456bbb8c(uVar39,L"DOF.Recombine",&local_168,0);
  iVar15 = *(int *)(local_560 + 0x180);
  *(uint *)(local_560 + 0x180) = iVar15 + 1U;
  if (*(uint *)(local_560 + 0x184) < iVar15 + 1U) {
    FUN_14472c0f6(local_4c8,iVar15);
  }
  *(ulonglong *)(*(longlong *)(local_560 + 0x178) + (longlong)iVar15 * 8) = uVar39;
  *(int *)(uVar39 + 0x9c) = *(int *)(local_560 + 0x180) + -1;
  if ((*(int *)(param_5 + 4) < *(int *)(param_5 + 0xc)) &&
     (*(int *)(param_5 + 8) < *(int *)(param_5 + 0x10))) {
    uVar19 = *(undefined8 *)(param_5 + 4);
    local_4e0 = *(undefined1 **)(param_5 + 0xc);
    lVar38 = *(longlong *)(param_5 + 0x18);
    uVar40 = *(undefined8 *)(lVar38 + 0x84);
    local_4e8 = CONCAT44(local_4e8._4_4_,
                         (uint)((int)((ulonglong)local_4e0 >> 0x20) -
                                (int)((ulonglong)uVar19 >> 0x20) != (int)local_420 ||
                               (int)local_4e0 - (int)uVar19 != (int)local_3f8));
  }
  else {
    local_4e0 = &DAT_100000001;
    lVar38 = *(longlong *)(param_5 + 0x18);
    uVar40 = 0;
    uVar19 = 0;
    local_4e8 = (ulonglong)local_4e8._4_4_ << 0x20;
  }
  iVar15 = (uint)(1.0 < fVar54 || fVar57 <= 1.0) * 2;
  iVar51 = 3;
  if (fVar54 <= 1.0) {
    iVar51 = iVar15;
  }
  uVar5 = *(undefined8 *)(local_528 + 0x30f8);
  uVar6 = *(undefined8 *)(local_528 + 0x3100);
  if (fVar57 <= 1.0) {
    iVar51 = iVar15;
  }
  local_510 = CONCAT44(local_510._4_4_,iVar51);
  uVar29 = 0;
  if ((char)local_4f0 != '\0') {
    uVar29 = local_488;
  }
  local_4d0 = (ulonglong)uVar29;
  local_4d8 = (ulonglong)local_1d9;
  lVar22 = *(longlong *)(param_5 + 0x20);
  local_4f8 = uVar39;
  if (lVar22 == 0 || lVar38 == 0) {
    lVar22 = FUN_14476842e(local_560,&DAT_14ca63b30,L"BlackAlphaOneDummy",2);
  }
  lVar38 = *(longlong *)(param_5 + 0x40);
  local_520 = lVar22;
  if (lVar38 == 0 || *(longlong *)(param_5 + 0x38) == 0) {
    lVar38 = FUN_14476842e(local_560,&DAT_14ca63ba0,L"MaxFP16Depth",2);
  }
  lVar22 = *(longlong *)(param_5 + 0x30);
  if (lVar22 == 0 || *(longlong *)(param_5 + 0x28) == 0) {
    lVar22 = FUN_14476842e(local_560,&DAT_14ca63b20,L"WhiteDummy",2);
  }
  puVar1 = local_550;
  puVar50 = (undefined8 *)(*(longlong *)(local_560 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar23 = puVar50 + 0x2e;
  local_500 = (int *)lVar22;
  if (*(undefined8 **)(local_560 + 0x78) < puVar23) {
    FUN_140023dd8(local_550,0x180);
    puVar50 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar23 = puVar50 + 0x2e;
  }
  *(undefined8 **)(local_560 + 0x70) = puVar23;
  *puVar50 = &PTR_FUN_14a2b2998;
  local_540 = puVar50 + 2;
  puVar50[2] = 0;
  *(undefined1 *)(puVar50 + 3) = 1;
  puVar50[5] = 0;
  puVar50[6] = 0;
  puVar50[0xc] = 0;
  puVar50[0xd] = 0;
  *(undefined8 *)((longlong)puVar50 + 0x6c) = 0;
  *(undefined8 *)((longlong)puVar50 + 0x74) = 0;
  *(undefined4 *)((longlong)puVar50 + 0x7c) = 0x3f800000;
  puVar50[0x14] = 0;
  puVar50[0x15] = 0x3f80000000000000;
  puVar50[0x20] = 0;
  puVar50[0x21] = 0x3f80000000000000;
  puVar50[0x17] = 0;
  puVar50[0x18] = 0;
  puVar50[0x19] = 0;
  puVar50[0x1a] = 0;
  puVar50[0x1b] = 0;
  puVar50[0x1c] = 0;
  puVar50[0x1d] = 0;
  puVar50[0x1e] = 0;
  local_4b8 = puVar50 + 0x22;
  local_468 = puVar50 + 0x24;
  local_518 = puVar50 + 0x26;
  local_4a0 = puVar50 + 0x28;
  puVar50[0x22] = 0;
  puVar50[0x23] = 0;
  puVar50[0x24] = 0;
  puVar50[0x25] = 0;
  puVar50[0x26] = 0;
  puVar50[0x27] = 0;
  puVar50[0x28] = 0;
  puVar50[0x29] = 0;
  puVar50[0x2b] = 0;
  puVar50[0x2c] = 0;
  iVar15 = *(int *)(local_560 + 0xa0);
  *(uint *)(local_560 + 0xa0) = iVar15 + 1U;
  if (*(uint *)(local_560 + 0xa4) < iVar15 + 1U) {
    FUN_1448cfae8(local_490,iVar15);
  }
  *(undefined8 **)(*(longlong *)(local_560 + 0x98) + (longlong)iVar15 * 8) = puVar50;
  *(undefined4 *)local_540 = (undefined4)local_2c8;
  *(undefined4 *)((longlong)local_540 + 4) = local_2c8._4_4_;
  *(undefined4 *)(local_540 + 1) = uStack_2c0;
  *(undefined4 *)((longlong)local_540 + 0xc) = uStack_2bc;
  FUN_142e904fb((undefined4)local_2c8,puVar50 + 4,local_220,(float)(int)local_2a0);
  puVar50[0xc] = uVar5;
  iVar16 = (int)((ulonglong)uVar6 >> 0x20) - (int)((ulonglong)uVar5 >> 0x20);
  puVar50[0xd] = uVar6;
  fVar58 = 1.0 / (float)iVar16;
  iVar17 = (int)uVar6 - (int)uVar5;
  fVar62 = 1.0 / (float)iVar17;
  *(float *)(puVar50 + 0xe) = (float)iVar17;
  *(float *)((longlong)puVar50 + 0x74) = (float)iVar16;
  *(float *)(puVar50 + 0xf) = fVar62;
  *(float *)((longlong)puVar50 + 0x7c) = fVar58;
  dVar7 = *(double *)(local_528 + 0x125a8);
  dVar3 = *(double *)(local_528 + 0x125a0);
  iVar15 = *(int *)(local_460 + 0x11);
  iVar51 = *(int *)((longlong)local_460 + 0x84);
  local_1d8 = (undefined8 *)DAT_14c967818;
  uStack_1d0 = local_2a0;
  local_578 = (uint **)CONCAT44(local_578._4_4_,3);
  FUN_14473d930(&local_168,&local_2b0,&local_1d8,1);
  fVar60 = local_430;
  fVar55 = local_434;
  puVar1 = local_550;
  fVar65 = DAT_14ca4ca80 + 0.5;
  fVar63 = DAT_14ca4ca7c + 0.5;
  fVar59 = fVar58 * DAT_14ca4ca78;
  *(float *)(puVar50 + 0x10) = fVar62 * DAT_14ca4ca74 * (float)local_168;
  *(float *)((longlong)puVar50 + 0x84) = fVar59 * local_168._4_4_;
  *(float *)(puVar50 + 0x11) =
       (fVar63 * fVar62 * (float)local_168 + (float)uStack_160) -
       (1.0 / (float)iVar51) * (float)dVar3;
  *(float *)((longlong)puVar50 + 0x8c) =
       (fVar65 * fVar58 * local_168._4_4_ + uStack_160._4_4_) - (1.0 / (float)iVar15) * (float)dVar7
  ;
  fVar65 = (float)local_2ac;
  fVar63 = (float)local_2b0;
  *(float *)(puVar50 + 0x12) = ((float)(int)local_2a0 + -0.5) / fVar63;
  *(float *)((longlong)puVar50 + 0x94) = ((float)local_2a0._4_4_ + -0.5) / fVar65;
  *(float *)((longlong)puVar50 + 0xb4) = (float)(int)local_2a0 / local_2a4;
  *(float *)(puVar50 + 0x14) = ((float)(int)uVar19 + 0.5) / (float)(int)uVar40;
  fVar58 = (float)(int)((ulonglong)uVar40 >> 0x20);
  *(float *)((longlong)puVar50 + 0xa4) = ((float)(int)((ulonglong)uVar19 >> 0x20) + 0.5) / fVar58;
  *(float *)(puVar50 + 0x15) = ((float)(int)local_4e0 + -0.5) / (float)(int)uVar40;
  *(float *)((longlong)puVar50 + 0xac) =
       ((float)(int)((ulonglong)local_4e0 >> 0x20) + -0.5) / fVar58;
  *(undefined4 *)(puVar50 + 0x16) = (undefined4)local_4e8;
  puVar50[0x18] = local_2d8;
  puVar50[0x19] = *local_418;
  puVar50[0x1a] = uStack_2d0;
  puVar50[0x1b] = local_520;
  puVar50[0x1c] = local_500;
  *(float *)(puVar50 + 0x20) = fVar63;
  *(float *)((longlong)puVar50 + 0x104) = fVar65;
  *(float *)(puVar50 + 0x21) = 1.0 / fVar63;
  *(float *)((longlong)puVar50 + 0x10c) = 1.0 / fVar65;
  *local_4b8 = local_358;
  local_4b8[1] = uStack_350;
  *local_468 = local_178;
  local_468[1] = uStack_170;
  *local_518 = local_368;
  local_518[1] = uStack_360;
  *(undefined4 *)local_4a0 = (undefined4)local_188;
  *(undefined4 *)((longlong)local_4a0 + 4) = local_188._4_4_;
  *(int *)(local_4a0 + 1) = (int)uStack_180;
  *(undefined4 *)((longlong)local_4a0 + 0xc) = uStack_180._4_4_;
  lVar22 = *local_418;
  if ((*(char *)(lVar22 + 0x92) == '\x04') || (*(char *)(lVar22 + 0x92) == '\x01')) {
    uVar46 = *(undefined2 *)(lVar22 + 0x8e);
  }
  else {
    uVar46 = 0;
  }
  uVar27 = *(undefined1 *)(lVar22 + 0x90);
  puVar34 = (undefined8 *)(*(longlong *)(local_560 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar23 = puVar34 + 8;
  if (*(undefined8 **)(local_560 + 0x78) < puVar23) {
    FUN_140023dd8(local_550,0x48);
    puVar34 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar23 = puVar34 + 8;
  }
  *(undefined8 **)(local_560 + 0x70) = puVar23;
  puVar34[1] = *(undefined8 *)(lVar22 + 8);
  puVar34[2] = 0;
  *(undefined1 *)(puVar34 + 3) = 1;
  *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
  *puVar34 = &PTR_FUN_14a203858;
  *(undefined2 *)(puVar34 + 5) = 0;
  *(undefined1 *)((longlong)puVar34 + 0x2a) = uVar27;
  *(undefined1 *)((longlong)puVar34 + 0x2b) = 0;
  *(undefined2 *)((longlong)puVar34 + 0x2c) = 0;
  *(undefined2 *)((longlong)puVar34 + 0x2e) = uVar46;
  *(undefined1 *)(puVar34 + 6) = 2;
  *(undefined1 *)((longlong)puVar34 + 0x32) = 0;
  puVar34[7] = lVar22;
  iVar15 = *(int *)(local_560 + 0x1a0);
  *(uint *)(local_560 + 0x1a0) = iVar15 + 1U;
  if (*(uint *)(local_560 + 0x1a4) < iVar15 + 1U) {
    FUN_1447568fc(local_530,iVar15);
  }
  uVar47 = local_4f8;
  puVar1 = local_550;
  *(undefined8 **)(*(longlong *)(local_560 + 0x198) + (longlong)iVar15 * 8) = puVar34;
  *(int *)((longlong)puVar34 + 0x1c) = *(int *)(local_560 + 0x1a0) + -1;
  puVar50[0x1e] = puVar34;
  if ((*(char *)(lVar38 + 0x92) == '\x04') || (*(char *)(lVar38 + 0x92) == '\x01')) {
    uVar46 = *(undefined2 *)(lVar38 + 0x8e);
  }
  else {
    uVar46 = 0;
  }
  uVar27 = *(undefined1 *)(lVar38 + 0x90);
  puVar34 = (undefined8 *)(*(longlong *)(local_560 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar23 = puVar34 + 8;
  if (*(undefined8 **)(local_560 + 0x78) < puVar23) {
    FUN_140023dd8(local_550,0x48);
    puVar34 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar23 = puVar34 + 8;
  }
  *(undefined8 **)(local_560 + 0x70) = puVar23;
  puVar34[1] = *(undefined8 *)(lVar38 + 8);
  puVar34[2] = 0;
  *(undefined1 *)(puVar34 + 3) = 1;
  *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
  *puVar34 = &PTR_FUN_14a203858;
  *(undefined2 *)(puVar34 + 5) = 0;
  *(undefined1 *)((longlong)puVar34 + 0x2a) = uVar27;
  *(undefined1 *)((longlong)puVar34 + 0x2b) = 0;
  *(undefined2 *)((longlong)puVar34 + 0x2c) = 0;
  *(undefined2 *)((longlong)puVar34 + 0x2e) = uVar46;
  *(undefined1 *)(puVar34 + 6) = 2;
  *(undefined1 *)((longlong)puVar34 + 0x32) = 0;
  puVar34[7] = lVar38;
  iVar15 = *(int *)(local_560 + 0x1a0);
  *(uint *)(local_560 + 0x1a0) = iVar15 + 1U;
  if (*(uint *)(local_560 + 0x1a4) < iVar15 + 1U) {
    FUN_1447568fc(local_530,iVar15);
  }
  *(undefined8 **)(*(longlong *)(local_560 + 0x198) + (longlong)iVar15 * 8) = puVar34;
  *(int *)((longlong)puVar34 + 0x1c) = *(int *)(local_560 + 0x1a0) + -1;
  puVar50[0x1d] = puVar34;
  iVar15 = *(int *)(local_520 + 0x88);
  *(float *)(puVar50 + 0x2a) = 1.0 / (float)*(int *)(local_520 + 0x84);
  *(float *)((longlong)puVar50 + 0x154) = 1.0 / (float)iVar15;
  if ((fVar57 <= 1.0) && (fVar54 <= 1.0)) {
    uVar19 = FUN_14473c272(local_560,&DAT_14ca63b28,0);
    puVar50[0x28] = uVar19;
    uVar19 = FUN_14473c272(local_560,&DAT_14ca63b28,0);
    puVar50[0x29] = uVar19;
  }
  if ((char)local_4f0 != '\0') {
    uVar19 = FUN_142e917aa(&local_348,1);
    puVar50[0x17] = uVar19;
  }
  puVar1 = local_550;
  uVar27 = *(undefined1 *)(uVar47 + 0x94);
  puVar34 = (undefined8 *)(*(longlong *)(local_560 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar23 = puVar34 + 9;
  if (*(undefined8 **)(local_560 + 0x78) < puVar23) {
    FUN_140023dd8(local_550,0x50);
    puVar34 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar23 = puVar34 + 9;
  }
  *(undefined8 **)(local_560 + 0x70) = puVar23;
  puVar34[1] = *(undefined8 *)(uVar47 + 8);
  puVar34[2] = 0;
  *(undefined1 *)(puVar34 + 3) = 0;
  *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar34 + 5) = 0;
  *puVar34 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar34 + 6) = uVar27;
  *(undefined1 *)(puVar34 + 7) = 0;
  *(undefined4 *)((longlong)puVar34 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar34 + 0x35) = 0;
  puVar34[8] = uVar47;
  iVar15 = *(int *)(local_560 + 0x1a0);
  *(uint *)(local_560 + 0x1a0) = iVar15 + 1U;
  if (*(uint *)(local_560 + 0x1a4) < iVar15 + 1U) {
    FUN_1447568fc(local_530,iVar15);
  }
  puVar1 = local_550;
  *(undefined8 **)(*(longlong *)(local_560 + 0x198) + (longlong)iVar15 * 8) = puVar34;
  *(int *)((longlong)puVar34 + 0x1c) = *(int *)(local_560 + 0x1a0) + -1;
  puVar50[0x2b] = puVar34;
  local_150._0_4_ = DAT_14ca85098;
  uStack_160 = (int *)CONCAT44(DAT_14ca8508c,DAT_14ca85088);
  local_158 = (undefined *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
  local_150._4_4_ = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_168 = (ulonglong *)&DAT_00020008;
  uStack_13c = 1;
  uStack_13a = 1;
  local_148._0_4_ = 0;
  local_138 = (undefined8 *)CONCAT26(local_138._6_2_,0xff000a000101);
  uVar29 = (uint)*(undefined8 *)((longlong)local_460 + 0x84);
  local_148._4_4_ = DAT_14ca84e40;
  if ((int)uVar29 < (int)DAT_14ca84e40) {
    local_148._4_4_ = uVar29;
  }
  if ((int)local_148._4_4_ < 2) {
    local_148._4_4_ = 1;
  }
  uVar29 = (uint)((ulonglong)*(undefined8 *)((longlong)local_460 + 0x84) >> 0x20);
  uStack_140 = DAT_14ca84e40;
  if ((int)uVar29 < (int)DAT_14ca84e40) {
    uStack_140 = uVar29;
  }
  if ((int)uStack_140 < 2) {
    uStack_140 = 1;
  }
  uVar39 = *(longlong *)(local_560 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar47 = uVar39 + 0x120;
  if (*(ulonglong *)(local_560 + 0x78) < uVar47) {
    FUN_140023dd8(local_550,0x128);
    uVar39 = *puVar1 + 7 & 0xfffffffffffffff8;
    uVar47 = uVar39 + 0x120;
  }
  *(ulonglong *)(local_560 + 0x70) = uVar47;
  FUN_1456bbb8c(uVar39,L"Debug.DOF.Recombine",&local_168,0);
  iVar15 = *(int *)(local_560 + 0x180);
  *(uint *)(local_560 + 0x180) = iVar15 + 1U;
  if (*(uint *)(local_560 + 0x184) < iVar15 + 1U) {
    FUN_14472c0f6(local_4c8,iVar15);
  }
  puVar1 = local_550;
  *(ulonglong *)(*(longlong *)(local_560 + 0x178) + (longlong)iVar15 * 8) = uVar39;
  *(int *)(uVar39 + 0x9c) = *(int *)(local_560 + 0x180) + -1;
  uVar27 = *(undefined1 *)(uVar39 + 0x94);
  puVar34 = (undefined8 *)(*(longlong *)(local_560 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar23 = puVar34 + 9;
  if (*(undefined8 **)(local_560 + 0x78) < puVar23) {
    FUN_140023dd8(local_550,0x50);
    puVar34 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar23 = puVar34 + 9;
  }
  *(undefined8 **)(local_560 + 0x70) = puVar23;
  puVar34[1] = *(undefined8 *)(uVar39 + 8);
  puVar34[2] = 0;
  *(undefined1 *)(puVar34 + 3) = 0;
  *(undefined8 *)((longlong)puVar34 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar34 + 5) = 0;
  *puVar34 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar34 + 6) = uVar27;
  *(undefined1 *)(puVar34 + 7) = 0;
  *(undefined4 *)((longlong)puVar34 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar34 + 0x35) = 0;
  puVar34[8] = uVar39;
  iVar15 = *(int *)(local_560 + 0x1a0);
  *(uint *)(local_560 + 0x1a0) = iVar15 + 1U;
  if (*(uint *)(local_560 + 0x1a4) < iVar15 + 1U) {
    FUN_1447568fc(local_530,iVar15);
  }
  uVar47 = local_560;
  *(undefined8 **)(*(longlong *)(local_560 + 0x198) + (longlong)iVar15 * 8) = puVar34;
  *(int *)((longlong)puVar34 + 0x1c) = *(int *)(local_560 + 0x1a0) + -1;
  puVar50[0x2c] = puVar34;
  uVar19 = *(undefined8 *)(local_528 + 0x13818);
  iVar51 = ((int)local_4d0 + (int)local_3f0 * 3) * 5 + (int)local_510;
  iVar15 = (int)local_4d8;
  FUN_142e8a496();
  FUN_1448e935e(uVar19,&local_168,&DAT_14ca24490,iVar15 + iVar51 * 2);
  FUN_142e8a496();
  uVar19 = uStack_160;
  puVar9 = (undefined1 *)local_168;
  iVar15 = iVar16 + 0xe;
  if (-1 < iVar16 + 7) {
    iVar15 = iVar16 + 7;
  }
  iVar51 = iVar17 + 0xe;
  if (-1 < iVar17 + 7) {
    iVar51 = iVar17 + 7;
  }
  FUN_142ea0e14();
  local_168 = (ulonglong *)0x0;
  uStack_160 = (int *)0x0;
  FUN_1448f70da(puVar9,&DAT_14ca24540,local_540,&local_168);
  FUN_140069376(uVar47);
  puVar1 = local_550;
  uVar35 = (undefined6)((ulonglong)puVar50 >> 0x10);
  uVar33 = (undefined4)CONCAT62(uVar35,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar33 = (undefined4)CONCAT62(uVar35,4);
  }
  puVar50 = (undefined8 *)(*(longlong *)(local_560 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar23 = puVar50 + 0x3d;
  if (*(undefined8 **)(local_560 + 0x78) < puVar23) {
    FUN_140023dd8(local_550,0x1f0);
    puVar50 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar23 = puVar50 + 0x3d;
  }
  *local_550 = (ulonglong)puVar23;
  local_168 = local_540;
  uStack_160 = (int *)DAT_14ca24588;
  if (DAT_14ca24588 != 0) {
    LOCK();
    *(int *)(DAT_14ca24588 + 8) = *(int *)(DAT_14ca24588 + 8) + 1;
    UNLOCK();
  }
  local_158 = &DAT_14ca24540;
  local_578 = (uint **)CONCAT71(local_578._1_7_,2);
  FUN_140068f1a(puVar50,&local_1d8,&local_168,uVar33);
  *puVar50 = &PTR_FUN_14a2b29a0;
  puVar50[0x37] = &DAT_14ca24540;
  puVar50[0x38] = local_540;
  puVar50[0x39] = puVar9;
  puVar50[0x3a] = uVar19;
  *(int *)(puVar50 + 0x3b) = iVar51 >> 3;
  *(int *)((longlong)puVar50 + 0x1dc) = iVar15 >> 3;
  *(undefined4 *)(puVar50 + 0x3c) = 1;
  iVar15 = *(int *)(local_560 + 0x170);
  *(uint *)(local_560 + 0x170) = iVar15 + 1U;
  if (*(uint *)(local_560 + 0x174) < iVar15 + 1U) {
    FUN_14470e57a(local_4a8,iVar15);
  }
  *(undefined8 **)(*(longlong *)(local_560 + 0x168) + (longlong)iVar15 * 8) = puVar50;
  *(int *)((longlong)puVar50 + 0x2c) = *(int *)(local_560 + 0x170) + -1;
  FUN_140069100(local_560,puVar50);
  *param_6 = local_4f8;
LAB_142e8fc0b:
  if ((local_f0 ^ (ulonglong)auStack_598) == DAT_14c707940) {
    return fVar60 <= fVar55;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e904fb FUN_142e904fb body=388 status=ok
// SIG undefined FUN_142e904fb(void)

void FUN_142e904fb(longlong param_1,float *param_2,longlong param_3,float param_4)

{
  float fVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = *(float *)(param_3 + 0x14) * param_4;
  param_2[1] = *(float *)(param_3 + 0x1c) * param_4;
  param_2[6] = (float)(uint)*(byte *)(param_3 + 0x18);
  param_2[7] = *(float *)(param_3 + 0x28) * param_4;
  param_2[8] = *(float *)(param_3 + 0x2c) * param_4;
  fVar1 = *(float *)(param_3 + 0x34);
  param_2[9] = fVar1;
  param_2[10] = 1.0 / fVar1;
  param_2[0xb] = param_4 * *(float *)(param_3 + 0x38);
  param_2[0xc] = *(float *)(param_3 + 0x3c);
  if (*(longlong *)(param_3 + 0x20) == 0) {
    if (DAT_14c760a84 == -1) {
      FUN_145fdab76(local_30,L"FRDGSystemTextures",L".\\Runtime/Renderer/Private/SystemTextures.cpp"
                    ,0x66);
      DAT_14c760a84 = FUN_145d12cf0(local_30);
      if (local_30[0] != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    if ((DAT_14c760a84 < *(int *)(param_1 + 0x130)) &&
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x128) + (longlong)DAT_14c760a84 * 8),
       lVar3 != 0)) {
      lVar3 = lVar3 + 8;
    }
    else {
      lVar3 = 0;
    }
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(lVar3 + 8);
  }
  else {
    FUN_1447ec05f(local_30,*(longlong *)(param_3 + 0x20),L"DynamicRadiusOffsetLUT");
    uVar2 = FUN_14473c272(param_1,local_30,0);
    *(undefined8 *)(param_2 + 2) = uVar2;
    if (local_30[0] != (longlong *)0x0) {
      (**(code **)(*local_30[0] + 0x38))();
    }
  }
  *(undefined8 *)(param_2 + 4) = DAT_14ca214c8;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e90680 FUN_142e90680 body=521 status=ok
// SIG undefined FUN_142e90680(void)

undefined8 *
FUN_142e90680(undefined8 *param_1,longlong param_2,longlong *param_3,undefined1 param_4)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = *param_3;
  uVar1 = *(undefined1 *)(lVar3 + 0x94);
  plVar5 = (longlong *)(param_2 + 0x70);
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar6 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
    FUN_140023dd8(plVar5,0x50);
    puVar6 = (undefined8 *)(*plVar5 + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar4;
  puVar6[1] = *(undefined8 *)(lVar3 + 8);
  puVar6[2] = 0;
  *(undefined1 *)(puVar6 + 3) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar6 + 5) = 0;
  *puVar6 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar6 + 6) = uVar1;
  *(undefined1 *)((longlong)puVar6 + 0x31) = param_4;
  *(undefined4 *)((longlong)puVar6 + 0x32) = 0;
  *(undefined1 *)((longlong)puVar6 + 0x36) = 0;
  *(undefined1 *)(puVar6 + 7) = 0;
  puVar6[8] = lVar3;
  iVar2 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
    FUN_1447568fc(param_2 + 0x198,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar6;
  *(int *)((longlong)puVar6 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  *param_1 = puVar6;
  lVar3 = param_3[1];
  if (lVar3 != 0) {
    uVar1 = *(undefined1 *)(lVar3 + 0x94);
    puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar6 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
      FUN_140023dd8(plVar5,0x50);
      puVar6 = (undefined8 *)(*plVar5 + 7U & 0xfffffffffffffff8);
      puVar4 = puVar6 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar4;
    puVar6[1] = *(undefined8 *)(lVar3 + 8);
    puVar6[2] = 0;
    *(undefined1 *)(puVar6 + 3) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar6 + 5) = 0;
    *puVar6 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar6 + 6) = uVar1;
    *(undefined1 *)((longlong)puVar6 + 0x31) = param_4;
    *(undefined4 *)((longlong)puVar6 + 0x32) = 0;
    *(undefined1 *)((longlong)puVar6 + 0x36) = 0;
    *(undefined1 *)(puVar6 + 7) = 0;
    puVar6[8] = lVar3;
    iVar2 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar2);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar6;
    *(int *)((longlong)puVar6 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    param_1[1] = puVar6;
  }
  return param_1;
}



// FUNCTION 142e90889 FUN_142e90889 body=485 status=ok
// SIG undefined FUN_142e90889(void)

undefined8 * FUN_142e90889(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar4 = *param_3;
  uVar2 = *(undefined1 *)(lVar4 + 0x94);
  plVar1 = (longlong *)(param_2 + 0x70);
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar6 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar5) {
    FUN_140023dd8(plVar1,0x50);
    puVar6 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar5;
  puVar6[1] = *(undefined8 *)(lVar4 + 8);
  puVar6[2] = 0;
  *(undefined1 *)(puVar6 + 3) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar6 + 5) = 0;
  *puVar6 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar6 + 6) = uVar2;
  *(undefined1 *)(puVar6 + 7) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar6 + 0x35) = 0;
  puVar6[8] = lVar4;
  iVar3 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(param_2 + 0x198,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar3 * 8) = puVar6;
  *(int *)((longlong)puVar6 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  *param_1 = puVar6;
  lVar4 = param_3[1];
  uVar2 = *(undefined1 *)(lVar4 + 0x94);
  puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar6 + 9;
  if (*(undefined8 **)(param_2 + 0x78) < puVar5) {
    FUN_140023dd8(plVar1,0x50);
    puVar6 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 9;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar5;
  puVar6[1] = *(undefined8 *)(lVar4 + 8);
  puVar6[2] = 0;
  *(undefined1 *)(puVar6 + 3) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar6 + 5) = 0;
  *puVar6 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar6 + 6) = uVar2;
  *(undefined1 *)(puVar6 + 7) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar6 + 0x35) = 0;
  puVar6[8] = lVar4;
  iVar3 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(param_2 + 0x198,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar3 * 8) = puVar6;
  *(int *)((longlong)puVar6 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  param_1[1] = puVar6;
  return param_1;
}



// FUNCTION 142e90a6e FUN_142e90a6e body=2187 status=ok
// SIG undefined FUN_142e90a6e(void)

ulonglong *
FUN_142e90a6e(longlong *param_1,ulonglong *param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 *param_5,int param_6,int param_7)

{
  ulonglong *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined8 *puVar14;
  ulonglong uVar15;
  float fVar16;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined1 local_13a;
  undefined1 local_139;
  undefined1 local_138;
  undefined1 local_137;
  undefined1 local_136;
  undefined1 local_135;
  undefined2 local_134;
  undefined2 local_132;
  ulonglong *local_130;
  undefined8 *local_128;
  wchar_t *local_120;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  wchar_t *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined1 local_d9;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_a4;
  int local_a0;
  undefined2 local_9c;
  undefined2 local_9a;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  undefined1 local_94;
  undefined1 local_93;
  ulonglong local_90;
  undefined6 uVar13;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_168;
  puVar11 = (undefined8 *)*param_1;
  local_96 = *(undefined1 *)((longlong)puVar11 + 0x32);
  local_100 = *puVar11;
  local_13a = *(undefined1 *)((longlong)puVar11 + 0x34);
  local_9c = *(undefined2 *)((longlong)puVar11 + 0x2c);
  local_9a = *(undefined2 *)((longlong)puVar11 + 0x2e);
  local_98 = *(undefined1 *)(puVar11 + 6);
  local_97 = *(undefined1 *)((longlong)puVar11 + 0x31);
  uStack_c0 = puVar11[1];
  local_b8 = (undefined *)puVar11[2];
  local_b0 = *(undefined4 *)(puVar11 + 3);
  local_a8 = *(undefined4 *)(puVar11 + 4);
  local_93 = *(undefined1 *)((longlong)puVar11 + 0x35);
  local_ac = *(undefined4 *)((longlong)puVar11 + 0x1c);
  if ((int)param_3 == 1) {
    local_120 = L"DOF.DilateMaxBgdCoc";
    local_108 = L"DOF.DilateMinFgdCoc";
    local_128 = (undefined8 *)CONCAT71(local_128._1_7_,0x15);
    local_95 = 0x15;
  }
  else {
    local_95 = *(undefined1 *)((longlong)puVar11 + 0x33);
    local_128 = (undefined8 *)CONCAT71(local_128._1_7_,*(undefined1 *)((longlong)puVar11 + 0x6b));
    local_120 = L"DOF.DilateBgdCoc";
    local_108 = L"DOF.DilateFgdCoc";
  }
  local_136 = *(undefined1 *)((longlong)puVar11 + 0x6a);
  local_f8 = puVar11[7];
  local_135 = *(undefined1 *)((longlong)puVar11 + 0x6c);
  uVar4 = *(undefined8 *)((longlong)puVar11 + 0x5c);
  local_137 = *(undefined1 *)(puVar11 + 0xd);
  local_138 = *(undefined1 *)((longlong)puVar11 + 0x69);
  uVar12 = *(undefined4 *)((longlong)puVar11 + 0x44);
  uVar7 = puVar11[9];
  uVar3 = *(undefined4 *)(puVar11 + 10);
  local_139 = *(undefined1 *)((longlong)puVar11 + 0x6d);
  local_132 = *(undefined2 *)((longlong)puVar11 + 100);
  local_134 = *(undefined2 *)((longlong)puVar11 + 0x66);
  local_114 = *(undefined4 *)(puVar11 + 8);
  local_110 = *(undefined4 *)(puVar11 + 0xb);
  local_10c = *(undefined4 *)((longlong)puVar11 + 0x54);
  lVar5 = param_1[1];
  iVar9 = (int)*(undefined8 *)((longlong)puVar11 + 0x24);
  local_a4 = DAT_14ca84e40;
  if (iVar9 < DAT_14ca84e40) {
    local_a4 = iVar9;
  }
  if (local_a4 < 2) {
    local_a4 = 1;
  }
  iVar9 = (int)((ulonglong)*(undefined8 *)((longlong)puVar11 + 0x24) >> 0x20);
  local_a0 = DAT_14ca84e40;
  if (iVar9 < DAT_14ca84e40) {
    local_a0 = iVar9;
  }
  *param_2 = 0;
  param_2[1] = 0;
  if (local_a0 < 2) {
    local_a0 = 1;
  }
  plVar2 = (longlong *)(lVar5 + 0x70);
  uVar15 = *(longlong *)(lVar5 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar10 = uVar15 + 0x120;
  local_130 = param_2;
  local_f0 = param_4;
  local_e8 = param_3;
  local_c8 = (undefined8 *)local_100;
  local_94 = local_13a;
  if (*(ulonglong *)(lVar5 + 0x78) < uVar10) {
    FUN_140023dd8(plVar2,0x128);
    uVar15 = *plVar2 + 7U & 0xfffffffffffffff8;
    uVar10 = uVar15 + 0x120;
  }
  *(ulonglong *)(lVar5 + 0x70) = uVar10;
  FUN_1456bbb8c(uVar15,local_108,&local_c8,0);
  iVar9 = *(int *)(lVar5 + 0x180);
  *(uint *)(lVar5 + 0x180) = iVar9 + 1U;
  if (*(uint *)(lVar5 + 0x184) < iVar9 + 1U) {
    FUN_14472c0f6(lVar5 + 0x178,iVar9);
  }
  *(ulonglong *)(*(longlong *)(lVar5 + 0x178) + (longlong)iVar9 * 8) = uVar15;
  *(int *)(uVar15 + 0x9c) = *(int *)(lVar5 + 0x180) + -1;
  *local_130 = uVar15;
  local_96 = local_136;
  local_c8 = (undefined8 *)local_f8;
  local_95 = local_128._0_1_;
  local_94 = local_135;
  local_9c = local_132;
  local_9a = local_134;
  local_98 = local_137;
  local_97 = local_138;
  uStack_c0 = CONCAT44(uVar12,local_114);
  local_a8 = local_110;
  local_93 = local_139;
  iVar9 = (int)uVar4;
  local_a4 = DAT_14ca84e40;
  if (iVar9 < DAT_14ca84e40) {
    local_a4 = iVar9;
  }
  if (local_a4 < 2) {
    local_a4 = 1;
  }
  iVar9 = (int)((ulonglong)uVar4 >> 0x20);
  local_a0 = DAT_14ca84e40;
  if (iVar9 < DAT_14ca84e40) {
    local_a0 = iVar9;
  }
  local_ac = local_10c;
  if (local_a0 < 2) {
    local_a0 = 1;
  }
  uVar15 = *(longlong *)(lVar5 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar10 = uVar15 + 0x120;
  local_b8 = (undefined *)uVar7;
  local_b0 = uVar3;
  if (*(ulonglong *)(lVar5 + 0x78) < uVar10) {
    FUN_140023dd8(plVar2,0x128);
    uVar15 = *plVar2 + 7U & 0xfffffffffffffff8;
    uVar10 = uVar15 + 0x120;
  }
  *(ulonglong *)(lVar5 + 0x70) = uVar10;
  FUN_1456bbb8c(uVar15,local_120,&local_c8,0);
  iVar9 = *(int *)(lVar5 + 0x180);
  *(uint *)(lVar5 + 0x180) = iVar9 + 1U;
  if (*(uint *)(lVar5 + 0x184) < iVar9 + 1U) {
    FUN_14472c0f6(lVar5 + 0x178,iVar9);
  }
  *(ulonglong *)(*(longlong *)(lVar5 + 0x178) + (longlong)iVar9 * 8) = uVar15;
  *(int *)(uVar15 + 0x9c) = *(int *)(lVar5 + 0x180) + -1;
  local_130[1] = uVar15;
  lVar5 = param_1[1];
  puVar14 = (undefined8 *)(*(longlong *)(lVar5 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar11 = puVar14 + 0xe;
  if (*(undefined8 **)(lVar5 + 0x78) < puVar11) {
    FUN_140023dd8((longlong *)(lVar5 + 0x70),0x80);
    puVar14 = (undefined8 *)(*(longlong *)(lVar5 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar11 = puVar14 + 0xe;
  }
  *(undefined8 **)(lVar5 + 0x70) = puVar11;
  *puVar14 = &PTR_FUN_14a2b1dc0;
  local_120 = (wchar_t *)(puVar14 + 2);
  puVar14[6] = 0;
  puVar14[2] = 0;
  puVar14[3] = 0;
  *(undefined1 *)(puVar14 + 7) = 1;
  local_128 = puVar14 + 0xc;
  puVar14[8] = 0;
  puVar14[9] = 0;
  puVar14[10] = 0;
  puVar14[0xb] = 0;
  puVar14[0xc] = 0;
  puVar14[0xd] = 0;
  iVar9 = *(int *)(lVar5 + 0xa0);
  *(uint *)(lVar5 + 0xa0) = iVar9 + 1U;
  if (*(uint *)(lVar5 + 0xa4) < iVar9 + 1U) {
    FUN_1448cfae8((longlong *)(lVar5 + 0x98),iVar9);
  }
  *(undefined8 **)(*(longlong *)(lVar5 + 0x98) + (longlong)iVar9 * 8) = puVar14;
  uVar4 = ((undefined8 *)param_1[2])[1];
  puVar14[6] = *(undefined8 *)param_1[2];
  puVar14[7] = uVar4;
  uVar4 = *(undefined8 *)param_1[3];
  puVar14[2] = 0;
  puVar14[3] = uVar4;
  *(int *)(puVar14 + 4) = param_7;
  *(float *)((longlong)puVar14 + 0x24) = (float)param_7;
  fVar16 = (*(float *)param_1[4] / *(float *)param_1[5]) * *(float *)param_1[6];
  *(float *)(puVar14 + 5) = fVar16;
  *(float *)((longlong)puVar14 + 0x2c) = 1.0 / fVar16;
  uVar4 = local_f0[1];
  puVar14[8] = *local_f0;
  puVar14[9] = uVar4;
  uVar12 = param_5[1];
  uVar3 = param_5[2];
  uVar6 = param_5[3];
  *(undefined4 *)(puVar14 + 10) = *param_5;
  *(undefined4 *)((longlong)puVar14 + 0x54) = uVar12;
  *(undefined4 *)(puVar14 + 0xb) = uVar3;
  *(undefined4 *)((longlong)puVar14 + 0x5c) = uVar6;
  FUN_142e90889(&local_c8,param_1[1],local_130);
  *(undefined4 *)local_128 = (undefined4)local_c8;
  *(undefined4 *)((longlong)local_128 + 4) = local_c8._4_4_;
  *(undefined4 *)(local_128 + 1) = (undefined4)uStack_c0;
  *(undefined4 *)((longlong)local_128 + 0xc) = uStack_c0._4_4_;
  uVar4 = *(undefined8 *)(param_1[7] + 0x13818);
  iVar9 = (int)local_e8;
  FUN_142e89056();
  FUN_1448e935e(uVar4,&local_c8,&DAT_14ca23198,param_6 + iVar9 * 3 + -1);
  FUN_142e89056();
  uVar7 = uStack_c0;
  uVar4 = local_c8;
  local_d0 = *(undefined4 *)((undefined8 *)param_1[8] + 1);
  local_d8 = *(undefined8 *)param_1[8];
  lVar5 = param_1[1];
  FUN_142e9ae28();
  pwVar8 = local_120;
  local_c8 = (undefined8 *)0x0;
  uStack_c0 = 0;
  FUN_1448f70da(uVar4,&DAT_14ca23248,local_120,&local_c8);
  FUN_140069376(lVar5);
  uVar13 = (undefined6)((ulonglong)(puVar14 + 6) >> 0x10);
  uVar12 = (undefined4)CONCAT62(uVar13,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar12 = (undefined4)CONCAT62(uVar13,4);
  }
  puVar1 = (ulonglong *)(lVar5 + 0x70);
  puVar14 = (undefined8 *)(*(longlong *)(lVar5 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar14 + 0x3d;
  if (*(undefined8 **)(lVar5 + 0x78) < puVar11) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar14 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar11;
  local_c8 = (undefined8 *)pwVar8;
  uStack_c0 = DAT_14ca23290;
  if (DAT_14ca23290 != 0) {
    LOCK();
    *(int *)(DAT_14ca23290 + 8) = *(int *)(DAT_14ca23290 + 8) + 1;
    UNLOCK();
  }
  local_b8 = &DAT_14ca23248;
  local_148 = 2;
  FUN_140068f1a(puVar14,&local_d9,&local_c8,uVar12);
  *puVar14 = &PTR_FUN_14a2b1dd0;
  puVar14[0x37] = &DAT_14ca23248;
  puVar14[0x38] = pwVar8;
  puVar14[0x39] = uVar4;
  puVar14[0x3a] = uVar7;
  puVar14[0x3b] = local_d8;
  *(undefined4 *)(puVar14 + 0x3c) = local_d0;
  iVar9 = *(int *)(lVar5 + 0x170);
  *(uint *)(lVar5 + 0x170) = iVar9 + 1U;
  if (*(uint *)(lVar5 + 0x174) < iVar9 + 1U) {
    FUN_14470e57a(lVar5 + 0x168,iVar9);
  }
  *(undefined8 **)(*(longlong *)(lVar5 + 0x168) + (longlong)iVar9 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x2c) = *(int *)(lVar5 + 0x170) + -1;
  FUN_140069100(lVar5,puVar14);
  if ((local_90 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return local_130;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e912fa FUN_142e912fa body=574 status=ok
// SIG undefined FUN_142e912fa(void)

undefined8 *
FUN_142e912fa(undefined8 *param_1,longlong param_2,longlong *param_3,undefined1 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined2 uVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = *param_3;
  if ((*(char *)(lVar3 + 0x92) == '\x04') || (*(char *)(lVar3 + 0x92) == '\x01')) {
    uVar6 = *(undefined2 *)(lVar3 + 0x8e);
  }
  else {
    uVar6 = 0;
  }
  plVar1 = (longlong *)(param_2 + 0x70);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar5 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
    FUN_140023dd8(plVar1,0x48);
    puVar5 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 8;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar4;
  puVar5[1] = *(undefined8 *)(lVar3 + 8);
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 1;
  *(undefined8 *)((longlong)puVar5 + 0x1c) = 0xffffffffffffffff;
  *puVar5 = &PTR_FUN_14a203858;
  *(undefined1 *)(puVar5 + 5) = 0;
  *(undefined1 *)((longlong)puVar5 + 0x29) = param_4;
  *(undefined4 *)((longlong)puVar5 + 0x2a) = 1;
  *(undefined2 *)((longlong)puVar5 + 0x2e) = uVar6;
  *(undefined1 *)(puVar5 + 6) = 0;
  *(undefined1 *)((longlong)puVar5 + 0x32) = 0;
  puVar5[7] = lVar3;
  iVar2 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
    FUN_1447568fc(param_2 + 0x198,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar5;
  *(int *)((longlong)puVar5 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  *param_1 = puVar5;
  lVar3 = param_3[1];
  if (lVar3 != 0) {
    if ((*(char *)(lVar3 + 0x92) == '\x04') || (*(char *)(lVar3 + 0x92) == '\x01')) {
      uVar6 = *(undefined2 *)(lVar3 + 0x8e);
    }
    else {
      uVar6 = 0;
    }
    puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
      FUN_140023dd8(plVar1,0x48);
      puVar5 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar4 = puVar5 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar4;
    puVar5[1] = *(undefined8 *)(lVar3 + 8);
    puVar5[2] = 0;
    *(undefined1 *)(puVar5 + 3) = 1;
    *(undefined8 *)((longlong)puVar5 + 0x1c) = 0xffffffffffffffff;
    *puVar5 = &PTR_FUN_14a203858;
    *(undefined1 *)(puVar5 + 5) = 0;
    *(undefined1 *)((longlong)puVar5 + 0x29) = param_4;
    *(undefined4 *)((longlong)puVar5 + 0x2a) = 1;
    *(undefined2 *)((longlong)puVar5 + 0x2e) = uVar6;
    *(undefined1 *)(puVar5 + 6) = 0;
    *(undefined1 *)((longlong)puVar5 + 0x32) = 0;
    puVar5[7] = lVar3;
    iVar2 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar2);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar5;
    *(int *)((longlong)puVar5 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    param_1[1] = puVar5;
  }
  return param_1;
}



// FUNCTION 142e91538 FUN_142e91538 body=156 status=ok
// SIG undefined FUN_142e91538(void)

undefined4 * FUN_142e91538(undefined4 *param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar1 = *param_3;
  bVar2 = param_3[8];
  bVar3 = param_3[9];
  bVar4 = param_3[10];
  bVar5 = param_3[0xb];
  iVar6 = *(int *)(param_3 + 4);
  FUN_142e894d6();
  FUN_1448e935e(param_2,&local_38,&DAT_14ca23648,
                (uint)bVar1 +
                (((uint)bVar2 + (uint)bVar3 * 2 + (uint)bVar4 * 4 + (uint)bVar5 * 8) * 3 + iVar6) *
                2 + -4);
  FUN_142e894d6();
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e915d5 FUN_142e915d5 body=467 status=ok
// SIG undefined FUN_142e915d5(void)

void FUN_142e915d5(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 unaff_RBP;
  undefined8 *puVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong lStack_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar5;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_142e9c400();
  local_70 = *(undefined4 *)(param_5 + 1);
  local_78 = *param_5;
  local_58 = 0;
  lStack_50 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca236f8,param_4);
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  FUN_140069376(param_1);
  uVar5 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar4 = (undefined4)CONCAT62(uVar5,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar4 = (undefined4)CONCAT62(uVar5,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar6 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar3) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar6 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar6 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar3;
  lStack_50 = DAT_14ca23740;
  if (DAT_14ca23740 != 0) {
    LOCK();
    *(int *)(DAT_14ca23740 + 8) = *(int *)(DAT_14ca23740 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca236f8;
  local_88 = 2;
  local_58 = param_4;
  FUN_140068f1a(puVar6,param_2,&local_58,uVar4);
  *puVar6 = &PTR_FUN_14a2b2960;
  puVar6[0x37] = &DAT_14ca236f8;
  puVar6[0x38] = param_4;
  *(undefined4 *)(puVar6 + 0x39) = local_68;
  *(undefined4 *)((longlong)puVar6 + 0x1cc) = uStack_64;
  *(undefined4 *)(puVar6 + 0x3a) = uStack_60;
  *(undefined4 *)((longlong)puVar6 + 0x1d4) = uStack_5c;
  *(undefined4 *)(puVar6 + 0x3c) = local_70;
  puVar6[0x3b] = local_78;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar6;
  *(int *)((longlong)puVar6 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar6);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e917aa FUN_142e917aa body=1377 status=ok
// SIG undefined FUN_142e917aa(void)

ulonglong FUN_142e917aa(longlong *param_1,uint param_2)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  int local_90;
  undefined1 local_89;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined2 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)*param_1 == 0) {
    uVar11 = 0;
  }
  else {
    local_70 = DAT_14ca85098;
    local_55 = 0x15;
    if (param_2 == 2) {
      local_55 = 0xf;
    }
    uStack_80 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
    uStack_78 = (undefined *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
    local_6c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    lVar5 = param_1[1];
    iVar4 = *(int *)(&DAT_14a2b1de8 + (ulonglong)param_2 * 4);
    local_56 = 0;
    local_88 = (undefined8 *)&DAT_00020008;
    local_54 = 0xff00;
    local_5c = 0x10001;
    local_58 = 0x101;
    local_68 = 0;
    iVar9 = 0x20;
    if (DAT_14ca84e40 < 0x20) {
      iVar9 = DAT_14ca84e40;
    }
    local_64 = 1;
    if (1 < iVar9) {
      local_64 = iVar9;
    }
    uVar11 = *(longlong *)(lVar5 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar7 = uVar11 + 0x120;
    local_60 = local_64;
    if (*(ulonglong *)(lVar5 + 0x78) < uVar7) {
      FUN_140023dd8((longlong *)(lVar5 + 0x70),0x128);
      uVar11 = *(longlong *)(lVar5 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar7 = uVar11 + 0x120;
    }
    *(ulonglong *)(lVar5 + 0x70) = uVar7;
    FUN_1456bbb8c(uVar11,&DAT_14a2b1de8 + iVar4,&local_88,0);
    iVar4 = *(int *)(lVar5 + 0x180);
    *(uint *)(lVar5 + 0x180) = iVar4 + 1U;
    if (*(uint *)(lVar5 + 0x184) < iVar4 + 1U) {
      FUN_14472c0f6(lVar5 + 0x178,iVar4);
    }
    *(ulonglong *)(*(longlong *)(lVar5 + 0x178) + (longlong)iVar4 * 8) = uVar11;
    *(int *)(uVar11 + 0x9c) = *(int *)(lVar5 + 0x180) + -1;
    lVar5 = param_1[1];
    local_90 = *(int *)*param_1;
    puVar13 = (undefined8 *)(*(longlong *)(lVar5 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar8 = puVar13 + 8;
    if (*(undefined8 **)(lVar5 + 0x78) < puVar8) {
      FUN_140023dd8((longlong *)(lVar5 + 0x70),0x50);
      puVar13 = (undefined8 *)(*(longlong *)(lVar5 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar8 = puVar13 + 8;
    }
    *(undefined8 **)(lVar5 + 0x70) = puVar8;
    *puVar13 = &PTR_FUN_14a2b1e70;
    puVar13[6] = 0;
    iVar4 = *(int *)(lVar5 + 0xa0);
    *(uint *)(lVar5 + 0xa0) = iVar4 + 1U;
    if (*(uint *)(lVar5 + 0xa4) < iVar4 + 1U) {
      FUN_1448cfae8((longlong *)(lVar5 + 0x98),iVar4);
    }
    *(undefined8 **)(*(longlong *)(lVar5 + 0x98) + (longlong)iVar4 * 8) = puVar13;
    *(undefined4 *)(puVar13 + 2) = *(undefined4 *)(*param_1 + 0xc);
    *(undefined4 *)((longlong)puVar13 + 0x14) = *(undefined4 *)(*param_1 + 0x10);
    *(undefined4 *)(puVar13 + 3) = *(undefined4 *)(*param_1 + 4);
    *(undefined4 *)((longlong)puVar13 + 0x1c) = *(undefined4 *)(*param_1 + 8);
    *(undefined4 *)(puVar13 + 4) = *(undefined4 *)(*param_1 + 0x14);
    *(undefined4 *)((longlong)puVar13 + 0x24) = *(undefined4 *)(*param_1 + 0x18);
    *(undefined4 *)(puVar13 + 5) = *(undefined4 *)(param_1[2] + 0x34);
    *(float *)((longlong)puVar13 + 0x2c) = 1.0 / *(float *)(param_1[2] + 0x34);
    lVar5 = param_1[1];
    uVar3 = *(undefined1 *)(uVar11 + 0x94);
    puVar10 = (undefined8 *)(*(longlong *)(lVar5 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar10 + 9;
    if (*(undefined8 **)(lVar5 + 0x78) < puVar8) {
      FUN_140023dd8((longlong *)(lVar5 + 0x70),0x50);
      puVar10 = (undefined8 *)(*(longlong *)(lVar5 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar10 + 9;
    }
    puVar2 = puVar13 + 2;
    *(undefined8 **)(lVar5 + 0x70) = puVar8;
    puVar10[1] = *(undefined8 *)(uVar11 + 8);
    puVar10[2] = 0;
    *(undefined1 *)(puVar10 + 3) = 0;
    *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar10 + 5) = 0;
    *puVar10 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar10 + 6) = uVar3;
    *(undefined1 *)(puVar10 + 7) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar10 + 0x35) = 0;
    puVar10[8] = uVar11;
    iVar4 = *(int *)(lVar5 + 0x1a0);
    *(uint *)(lVar5 + 0x1a0) = iVar4 + 1U;
    if (*(uint *)(lVar5 + 0x1a4) < iVar4 + 1U) {
      FUN_1447568fc(lVar5 + 0x198,iVar4);
    }
    bVar14 = local_90 == 2;
    *(undefined8 **)(*(longlong *)(lVar5 + 0x198) + (longlong)iVar4 * 8) = puVar10;
    *(int *)((longlong)puVar10 + 0x1c) = *(int *)(lVar5 + 0x1a0) + -1;
    puVar13[6] = puVar10;
    uVar6 = *(undefined8 *)(param_1[3] + 0x13818);
    FUN_142e89956();
    FUN_1448e935e(uVar6,&local_88,&DAT_14ca23a70,(uint)bVar14 + param_2 * 2);
    FUN_142e89956();
    uVar6 = uStack_80;
    puVar8 = local_88;
    lVar5 = param_1[1];
    FUN_142e9d862();
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    FUN_1448f70da(puVar8,&DAT_14ca23b20,puVar2,&local_88);
    FUN_140069376(lVar5);
    uVar12 = 2;
    if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
       ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
      uVar12 = 4;
    }
    puVar1 = (ulonglong *)(lVar5 + 0x70);
    puVar10 = (undefined8 *)(*(longlong *)(lVar5 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar13 = puVar10 + 0x3d;
    if (*(undefined8 **)(lVar5 + 0x78) < puVar13) {
      FUN_140023dd8(puVar1,0x1f0);
      puVar10 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar10 + 0x3d;
    }
    *puVar1 = (ulonglong)puVar13;
    uStack_80 = DAT_14ca23b68;
    if (DAT_14ca23b68 != 0) {
      LOCK();
      *(int *)(DAT_14ca23b68 + 8) = *(int *)(DAT_14ca23b68 + 8) + 1;
      UNLOCK();
    }
    uStack_78 = &DAT_14ca23b20;
    local_98 = 2;
    local_88 = puVar2;
    FUN_140068f1a(puVar10,&local_89,&local_88,uVar12);
    *puVar10 = &PTR_FUN_14a2b1e80;
    puVar10[0x37] = &DAT_14ca23b20;
    puVar10[0x38] = puVar2;
    puVar10[0x39] = puVar8;
    puVar10[0x3a] = uVar6;
    puVar10[0x3b] = 0x400000004;
    *(undefined4 *)(puVar10 + 0x3c) = 1;
    iVar4 = *(int *)(lVar5 + 0x170);
    *(uint *)(lVar5 + 0x170) = iVar4 + 1U;
    if (*(uint *)(lVar5 + 0x174) < iVar4 + 1U) {
      FUN_14470e57a(lVar5 + 0x168,iVar4);
    }
    *(undefined8 **)(*(longlong *)(lVar5 + 0x168) + (longlong)iVar4 * 8) = puVar10;
    *(int *)((longlong)puVar10 + 0x2c) = *(int *)(lVar5 + 0x170) + -1;
    FUN_140069100(lVar5,puVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e91d0c FUN_142e91d0c body=4395 status=ok
// SIG undefined FUN_142e91d0c(void)

void FUN_142e91d0c(longlong *param_1,uint *param_2,undefined8 param_3,ulonglong *param_4,
                  ulonglong *param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  undefined1 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  int iVar14;
  undefined1 *puVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  wchar_t *pwVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  float local_148;
  float local_144;
  uint local_140;
  int local_13c;
  undefined *local_138;
  ulonglong local_130;
  undefined1 *local_128;
  undefined8 *local_120;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  ulonglong local_100;
  ulonglong *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined1 local_c9;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  int local_a4;
  int local_a0;
  undefined4 local_9c;
  undefined2 local_98;
  undefined4 local_96;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar9 = *(longlong *)*param_1;
  local_130 = CONCAT62(local_130._2_6_,*(undefined2 *)(lVar9 + 0x8c));
  local_9c = *(undefined4 *)(lVar9 + 0x8c);
  local_140 = CONCAT22(local_140._2_2_,*(undefined2 *)(lVar9 + 0x8e));
  uVar4 = *(undefined4 *)(lVar9 + 0x6c);
  uStack_c0 = *(undefined8 *)(lVar9 + 0x68);
  puVar19 = (undefined8 *)(lVar9 + 0x70);
  uVar22 = *puVar19;
  uVar11 = *puVar19;
  local_b8 = (undefined *)*puVar19;
  uVar5 = *(undefined4 *)(lVar9 + 0x78);
  local_13c = *(undefined4 *)(lVar9 + 0x80);
  local_ac = *(undefined4 *)(lVar9 + 0x7c);
  uVar21 = *(ulonglong *)(lVar9 + 0x60) | 0x20000;
  if ((ulonglong)*param_2 < 5) {
    local_138 = (&PTR_u_DOF_GatherForeground_14a2b3320)[*param_2];
  }
  else {
    local_138 = (undefined *)0x0;
  }
  local_128 = (undefined1 *)CONCAT44(local_128._4_4_,param_2[1]);
  local_c8 = (undefined8 *)(*(ulonglong *)(lVar9 + 0x60) | 0x20001);
  if (param_2[2] != 0) {
    local_c8 = (undefined8 *)uVar21;
  }
  if ((char)param_2[5] == '\0') {
    local_c8 = (undefined8 *)uVar21;
  }
  lVar10 = param_1[2];
  local_120 = (undefined8 *)CONCAT71(local_120._1_7_,*(undefined1 *)(lVar9 + 0x92));
  iVar17 = (int)*(undefined8 *)param_1[1];
  local_a4 = DAT_14ca84e40;
  if (iVar17 < DAT_14ca84e40) {
    local_a4 = iVar17;
  }
  if (local_a4 < 2) {
    local_a4 = 1;
  }
  iVar18 = (int)((ulonglong)*(undefined8 *)param_1[1] >> 0x20);
  local_a0 = DAT_14ca84e40;
  if (iVar18 < DAT_14ca84e40) {
    local_a0 = iVar18;
  }
  if (local_a0 < 2) {
    local_a0 = 1;
  }
  local_96._0_2_ = CONCAT11(10,*(undefined1 *)(lVar9 + 0x92));
  local_148 = (float)CONCAT31(local_148._1_3_,*(undefined1 *)(lVar9 + 0x94));
  local_96._0_3_ = CONCAT12(*(undefined1 *)(lVar9 + 0x94),(undefined2)local_96);
  local_110 = CONCAT71(local_110._1_7_,*(undefined1 *)(lVar9 + 0x91));
  local_98 = CONCAT11(*(undefined1 *)(lVar9 + 0x91),1);
  local_118 = CONCAT44(local_118._4_4_,*(undefined4 *)(lVar9 + 0x68));
  local_108 = CONCAT71(local_108._1_7_,*(undefined1 *)(lVar9 + 0x95));
  local_96 = CONCAT13(*(undefined1 *)(lVar9 + 0x95),(undefined3)local_96);
  local_100 = CONCAT44(local_100._4_4_,local_ac);
  uVar23 = *(longlong *)(lVar10 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar20 = uVar23 + 0x120;
  local_f8 = param_4;
  local_d8 = param_3;
  local_b0 = uVar5;
  local_a8 = local_13c;
  if (*(ulonglong *)(lVar10 + 0x78) < uVar20) {
    FUN_140023dd8((longlong *)(lVar10 + 0x70),0x128);
    uVar23 = *(longlong *)(lVar10 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar20 = uVar23 + 0x120;
  }
  *(ulonglong *)(lVar10 + 0x70) = uVar20;
  FUN_1456bbb8c(uVar23,local_138,&local_c8,0);
  iVar8 = *(int *)(lVar10 + 0x180);
  *(uint *)(lVar10 + 0x180) = iVar8 + 1U;
  if (*(uint *)(lVar10 + 0x184) < iVar8 + 1U) {
    FUN_14472c0f6(lVar10 + 0x178,iVar8);
  }
  *(ulonglong *)(*(longlong *)(lVar10 + 0x178) + (longlong)iVar8 * 8) = uVar23;
  *(int *)(uVar23 + 0x9c) = *(int *)(lVar10 + 0x180) + -1;
  *local_f8 = uVar23;
  if (*(char *)param_1[3] == '\x01') {
    lVar9 = param_1[2];
    local_96._0_2_ = CONCAT11(0x15,local_120._0_1_);
    local_96._0_3_ = CONCAT12(local_148._0_1_,(undefined2)local_96);
    local_9c = CONCAT22((undefined2)local_140,(undefined2)local_130);
    local_98 = CONCAT11((undefined1)local_110,1);
    uStack_c0 = CONCAT44(uVar4,(int)local_118);
    local_a8 = local_13c;
    local_a4 = DAT_14ca84e40;
    if (iVar17 < DAT_14ca84e40) {
      local_a4 = iVar17;
    }
    if (local_a4 < 2) {
      local_a4 = 1;
    }
    local_96 = CONCAT13((undefined1)local_108,(undefined3)local_96);
    local_a0 = DAT_14ca84e40;
    if (iVar18 < DAT_14ca84e40) {
      local_a0 = iVar18;
    }
    local_ac = (undefined4)local_100;
    if (local_a0 < 2) {
      local_a0 = 1;
    }
    uVar23 = *(longlong *)(lVar9 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar20 = uVar23 + 0x120;
    local_c8 = (undefined8 *)uVar21;
    local_b8 = (undefined *)uVar11;
    local_b0 = uVar5;
    if (*(ulonglong *)(lVar9 + 0x78) < uVar20) {
      FUN_140023dd8((longlong *)(lVar9 + 0x70),0x128);
      uVar23 = *(longlong *)(lVar9 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar20 = uVar23 + 0x120;
    }
    *(ulonglong *)(lVar9 + 0x70) = uVar20;
    FUN_1456bbb8c(uVar23,local_138,&local_c8,0);
    iVar8 = *(int *)(lVar9 + 0x180);
    *(uint *)(lVar9 + 0x180) = iVar8 + 1U;
    if (*(uint *)(lVar9 + 0x184) < iVar8 + 1U) {
      FUN_14472c0f6(lVar9 + 0x178,iVar8);
    }
    *(ulonglong *)(*(longlong *)(lVar9 + 0x178) + (longlong)iVar8 * 8) = uVar23;
    *(int *)(uVar23 + 0x9c) = *(int *)(lVar9 + 0x180) + -1;
    local_f8[1] = uVar23;
  }
  uVar16 = (uint)local_128 & 0xfffffffe;
  local_128 = (undefined1 *)((ulonglong)local_128 & 0xfffffffffffffffe);
  if (uVar16 == 2) {
    pwVar26 = (wchar_t *)0x0;
    if (*param_2 == 2) {
      pwVar26 = L"DOF.ScatterOcclusionBackground";
    }
    lVar9 = param_1[2];
    local_96._0_2_ = CONCAT11(0xf,local_120._0_1_);
    local_96._0_3_ = CONCAT12(local_148._0_1_,(undefined2)local_96);
    local_9c = CONCAT22((undefined2)local_140,(undefined2)local_130);
    local_98 = CONCAT11((undefined1)local_110,1);
    uStack_c0 = CONCAT44(uVar4,(int)local_118);
    local_a8 = local_13c;
    local_a4 = DAT_14ca84e40;
    if (iVar17 < DAT_14ca84e40) {
      local_a4 = iVar17;
    }
    if (local_a4 < 2) {
      local_a4 = 1;
    }
    local_96 = CONCAT13((undefined1)local_108,(undefined3)local_96);
    local_a0 = DAT_14ca84e40;
    if (iVar18 < DAT_14ca84e40) {
      local_a0 = iVar18;
    }
    local_ac = (undefined4)local_100;
    if (local_a0 < 2) {
      local_a0 = 1;
    }
    uVar23 = *(longlong *)(lVar9 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar20 = uVar23 + 0x120;
    local_c8 = (undefined8 *)uVar21;
    local_b8 = (undefined *)uVar22;
    local_b0 = uVar5;
    if (*(ulonglong *)(lVar9 + 0x78) < uVar20) {
      FUN_140023dd8((longlong *)(lVar9 + 0x70),0x128);
      uVar23 = *(longlong *)(lVar9 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar20 = uVar23 + 0x120;
    }
    *(ulonglong *)(lVar9 + 0x70) = uVar20;
    FUN_1456bbb8c(uVar23,pwVar26,&local_c8,0);
    iVar17 = *(int *)(lVar9 + 0x180);
    *(uint *)(lVar9 + 0x180) = iVar17 + 1U;
    if (*(uint *)(lVar9 + 0x184) < iVar17 + 1U) {
      FUN_14472c0f6(lVar9 + 0x178,iVar17);
    }
    *(ulonglong *)(*(longlong *)(lVar9 + 0x178) + (longlong)iVar17 * 8) = uVar23;
    *(int *)(uVar23 + 0x9c) = *(int *)(lVar9 + 0x180) + -1;
    *param_5 = uVar23;
  }
  local_130 = (ulonglong)*param_2;
  local_140 = 2;
  if (param_2[3] != 1) {
    local_140 = param_2[3];
  }
  uVar21 = DAT_14ca21378 >> 0x20;
  local_118 = DAT_14ca21378;
  local_144 = (float)DAT_14ca21378;
  uVar20 = uVar21;
  local_148 = local_144;
  if (local_130 < 5) {
    fVar28 = (float)*(int *)param_1[4] / (float)*(int *)param_1[6];
    fVar27 = fVar28 + fVar28;
    switch(local_130) {
    case 0:
      fVar28 = fVar27 + -1.0;
      local_144 = 1.0 / (fVar28 - fVar27);
      local_148 = 1.0 / (fVar27 - fVar28);
      uVar21 = (ulonglong)(uint)(fVar28 * local_144);
      uVar20 = (ulonglong)(uint)(-local_148 * fVar28);
      break;
    case 1:
      local_144 = 1.0 / ((fVar27 + 1.0) - fVar27);
      uVar21 = (ulonglong)(uint)(-local_144 * fVar27);
      break;
    case 2:
      local_148 = 1.0 / (fVar27 - (fVar27 + -1.0));
      uVar21 = (ulonglong)(uint)(-local_148 * (fVar27 + -1.0));
      uVar20 = uVar21;
      local_144 = local_148;
      break;
    case 3:
      goto switchD_142e922f7_caseD_3;
    case 4:
      local_148 = 1.0 / (fVar27 - (fVar28 + fVar27));
      uVar20 = (ulonglong)(uint)(-local_148 * (fVar28 + fVar27));
    }
  }
  else {
switchD_142e922f7_caseD_3:
  }
  local_13c = *(int *)(*(longlong *)*param_1 + 0x84);
  iVar17 = *(int *)(*(longlong *)*param_1 + 0x88);
  local_138 = (undefined *)(ulonglong)*(byte *)param_1[3];
  local_108 = (ulonglong)param_2[1];
  local_100 = (ulonglong)param_2[4];
  local_110 = (ulonglong)*(byte *)param_1[5];
  lVar9 = param_1[2];
  puVar24 = (undefined8 *)(*(longlong *)(lVar9 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar19 = puVar24 + 0x20;
  if (*(undefined8 **)(lVar9 + 0x78) < puVar19) {
    FUN_140023dd8((longlong *)(lVar9 + 0x70),0x110);
    puVar24 = (undefined8 *)(*(longlong *)(lVar9 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar19 = puVar24 + 0x20;
  }
  *(undefined8 **)(lVar9 + 0x70) = puVar19;
  *puVar24 = &PTR_FUN_14a2b1fa0;
  *(undefined4 *)(puVar24 + 2) = 0;
  *(undefined4 *)((longlong)puVar24 + 0x14) = 0;
  *(undefined4 *)(puVar24 + 3) = 0;
  *(undefined4 *)((longlong)puVar24 + 0x1c) = 0x3f800000;
  local_f0 = puVar24 + 0x10;
  puVar24[0x10] = 0;
  puVar24[4] = 0;
  puVar24[5] = 0;
  *(undefined1 *)(puVar24 + 0x11) = 1;
  *(undefined4 *)(puVar24 + 0x12) = 0;
  *(undefined4 *)((longlong)puVar24 + 0x94) = 0;
  *(undefined4 *)(puVar24 + 0x13) = 0;
  *(undefined4 *)((longlong)puVar24 + 0x9c) = 0x3f800000;
  local_e8 = puVar24 + 0x16;
  local_e0 = puVar24 + 0x18;
  local_120 = puVar24 + 0x1c;
  puVar24[0x16] = 0;
  puVar24[0x17] = 0;
  puVar24[0x18] = 0;
  puVar24[0x19] = 0;
  puVar24[0x1a] = 0;
  puVar24[0x1c] = 0;
  puVar24[0x1d] = 0;
  puVar24[0x1e] = 0;
  puVar24[0x1f] = 0;
  iVar18 = *(int *)(lVar9 + 0xa0);
  *(uint *)(lVar9 + 0xa0) = iVar18 + 1U;
  if (*(uint *)(lVar9 + 0xa4) < iVar18 + 1U) {
    FUN_1448cfae8((longlong *)(lVar9 + 0x98),iVar18);
  }
  iVar14 = local_13c;
  *(undefined8 **)(*(longlong *)(lVar9 + 0x98) + (longlong)iVar18 * 8) = puVar24;
  fVar27 = (float)((int *)param_1[6])[1];
  fVar28 = (float)*(int *)param_1[6];
  *(float *)(puVar24 + 2) = fVar28;
  *(float *)((longlong)puVar24 + 0x14) = fVar27;
  *(float *)(puVar24 + 3) = 1.0 / fVar28;
  *(float *)((longlong)puVar24 + 0x1c) = 1.0 / fVar27;
  uVar11 = *(undefined8 *)param_1[6];
  puVar24[4] = 0;
  puVar24[5] = uVar11;
  dVar6 = *(double *)(param_1[7] + 0x125a8);
  *(float *)(puVar24 + 6) = (float)*(double *)(param_1[7] + 0x125a0);
  *(float *)((longlong)puVar24 + 0x34) = (float)dVar6;
  iVar18 = ((int *)param_1[4])[1];
  iVar8 = ((int *)param_1[6])[1];
  *(float *)(puVar24 + 7) = (float)*(int *)param_1[4] / (float)(*(int *)param_1[6] * local_13c);
  *(float *)((longlong)puVar24 + 0x3c) = (float)iVar18 / (float)(iVar8 * iVar17);
  puVar24[8] = (ulonglong)(uint)local_144 | uVar21 << 0x20;
  puVar24[9] = local_118;
  puVar24[10] = (ulonglong)(uint)local_148 | uVar20 << 0x20;
  iVar18 = ((int *)param_1[6])[1];
  iVar8 = ((int *)param_1[4])[1];
  *(float *)(puVar24 + 0xb) = (float)(*(int *)param_1[6] * local_13c) / (float)*(int *)param_1[4];
  *(float *)((longlong)puVar24 + 0x5c) = (float)(iVar18 * iVar17) / (float)iVar8;
  fVar27 = logf((float)*(int *)param_1[4] / (float)*(int *)param_1[6]);
  *(float *)(puVar24 + 0xc) = fVar27 * 1.442695;
  fVar27 = 3.0 / (*(float *)param_1[8] / *(float *)param_1[9]);
  *(float *)((longlong)puVar24 + 100) = fVar27;
  *(undefined4 *)(puVar24 + 0xd) = *(undefined4 *)(param_1[10] + 0x34);
  *(float *)((longlong)puVar24 + 0x6c) = 1.0 / *(float *)(param_1[10] + 0x34);
  *(float *)(puVar24 + 0xe) = fVar27 + -1.0;
  *(float *)((longlong)puVar24 + 0x74) = 3.0 / (*(float *)param_1[8] / *(float *)param_1[9]);
  uVar11 = ((undefined8 *)param_1[0xb])[1];
  *local_f0 = *(undefined8 *)param_1[0xb];
  local_f0[1] = uVar11;
  *(float *)(puVar24 + 0x12) = (float)iVar14;
  *(float *)((longlong)puVar24 + 0x94) = (float)iVar17;
  *(float *)(puVar24 + 0x13) = 1.0 / (float)iVar14;
  *(float *)((longlong)puVar24 + 0x9c) = 1.0 / (float)iVar17;
  iVar17 = ((int *)param_1[4])[1];
  *(float *)(puVar24 + 0x14) = (float)*(int *)param_1[4];
  *(float *)((longlong)puVar24 + 0xa4) = (float)iVar17;
  uVar11 = ((undefined8 *)*param_1)[1];
  *local_e8 = *(undefined8 *)*param_1;
  local_e8[1] = uVar11;
  puVar12 = (undefined4 *)param_1[0xc];
  uVar4 = puVar12[1];
  uVar5 = puVar12[2];
  uVar13 = puVar12[3];
  *(undefined4 *)local_e0 = *puVar12;
  *(undefined4 *)((longlong)local_e0 + 4) = uVar4;
  *(undefined4 *)(local_e0 + 1) = uVar5;
  *(undefined4 *)((longlong)local_e0 + 0xc) = uVar13;
  puVar24[0x1a] = local_d8;
  FUN_142ea282b(&local_c8,param_1[2],local_f8);
  *(undefined4 *)local_120 = (undefined4)local_c8;
  *(undefined4 *)((longlong)local_120 + 4) = local_c8._4_4_;
  *(undefined4 *)(local_120 + 1) = (undefined4)uStack_c0;
  *(undefined4 *)((longlong)local_120 + 0xc) = uStack_c0._4_4_;
  if ((uint)local_128 == 2) {
    lVar9 = param_1[2];
    uVar21 = *param_5;
    uVar7 = *(undefined1 *)(uVar21 + 0x94);
    puVar25 = (undefined8 *)(*(longlong *)(lVar9 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar19 = puVar25 + 9;
    if (*(undefined8 **)(lVar9 + 0x78) < puVar19) {
      FUN_140023dd8((longlong *)(lVar9 + 0x70),0x50);
      puVar25 = (undefined8 *)(*(longlong *)(lVar9 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar19 = puVar25 + 9;
    }
    *(undefined8 **)(lVar9 + 0x70) = puVar19;
    puVar25[1] = *(undefined8 *)(uVar21 + 8);
    puVar25[2] = 0;
    *(undefined1 *)(puVar25 + 3) = 0;
    *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar25 + 5) = 0;
    *puVar25 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar25 + 6) = uVar7;
    *(undefined1 *)(puVar25 + 7) = 0;
    *(undefined4 *)((longlong)puVar25 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar25 + 0x35) = 0;
    puVar25[8] = uVar21;
    iVar17 = *(int *)(lVar9 + 0x1a0);
    *(uint *)(lVar9 + 0x1a0) = iVar17 + 1U;
    if (*(uint *)(lVar9 + 0x1a4) < iVar17 + 1U) {
      FUN_1447568fc(lVar9 + 0x198,iVar17);
    }
    *(undefined8 **)(*(longlong *)(lVar9 + 0x198) + (longlong)iVar17 * 8) = puVar25;
    *(int *)((longlong)puVar25 + 0x1c) = *(int *)(lVar9 + 0x1a0) + -1;
    puVar24[0x1e] = puVar25;
  }
  lVar9 = param_1[2];
  local_ac = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_96 = 0xff000a00;
  local_c8 = (undefined8 *)&DAT_00020008;
  local_9c = 0x10001;
  local_98 = 0x101;
  uStack_c0 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
  local_b8 = (undefined *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
  local_b0 = DAT_14ca85098;
  local_a8 = 0;
  iVar17 = (int)*(undefined8 *)param_1[1];
  local_a4 = DAT_14ca84e40;
  if (iVar17 < DAT_14ca84e40) {
    local_a4 = iVar17;
  }
  if (local_a4 < 2) {
    local_a4 = 1;
  }
  iVar17 = (int)((ulonglong)*(undefined8 *)param_1[1] >> 0x20);
  local_a0 = DAT_14ca84e40;
  if (iVar17 < DAT_14ca84e40) {
    local_a0 = iVar17;
  }
  if (local_a0 < 2) {
    local_a0 = 1;
  }
  plVar1 = (longlong *)(lVar9 + 0x70);
  uVar20 = *(longlong *)(lVar9 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar21 = uVar20 + 0x120;
  if (*(ulonglong *)(lVar9 + 0x78) < uVar21) {
    FUN_140023dd8(plVar1,0x128);
    uVar20 = *plVar1 + 7U & 0xfffffffffffffff8;
    uVar21 = uVar20 + 0x120;
  }
  *(ulonglong *)(lVar9 + 0x70) = uVar21;
  FUN_1456bbb8c(uVar20,L"Debug.DOF.Gather",&local_c8,0);
  iVar17 = *(int *)(lVar9 + 0x180);
  *(uint *)(lVar9 + 0x180) = iVar17 + 1U;
  if (*(uint *)(lVar9 + 0x184) < iVar17 + 1U) {
    FUN_14472c0f6(lVar9 + 0x178,iVar17);
  }
  *(ulonglong *)(*(longlong *)(lVar9 + 0x178) + (longlong)iVar17 * 8) = uVar20;
  *(int *)(uVar20 + 0x9c) = *(int *)(lVar9 + 0x180) + -1;
  uVar7 = *(undefined1 *)(uVar20 + 0x94);
  puVar25 = (undefined8 *)(*(longlong *)(lVar9 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar19 = puVar25 + 9;
  if (*(undefined8 **)(lVar9 + 0x78) < puVar19) {
    FUN_140023dd8(plVar1,0x50);
    puVar25 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar19 = puVar25 + 9;
  }
  puVar2 = puVar24 + 2;
  *(undefined8 **)(lVar9 + 0x70) = puVar19;
  puVar25[1] = *(undefined8 *)(uVar20 + 8);
  puVar25[2] = 0;
  *(undefined1 *)(puVar25 + 3) = 0;
  *(undefined8 *)((longlong)puVar25 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar25 + 5) = 0;
  *puVar25 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar25 + 6) = uVar7;
  *(undefined1 *)(puVar25 + 7) = 0;
  *(undefined4 *)((longlong)puVar25 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar25 + 0x35) = 0;
  puVar25[8] = uVar20;
  iVar17 = *(int *)(lVar9 + 0x1a0);
  *(uint *)(lVar9 + 0x1a0) = iVar17 + 1U;
  if (*(uint *)(lVar9 + 0x1a4) < iVar17 + 1U) {
    FUN_1447568fc(lVar9 + 0x198,iVar17);
  }
  *(undefined8 **)(*(longlong *)(lVar9 + 0x198) + (longlong)iVar17 * 8) = puVar25;
  *(int *)((longlong)puVar25 + 0x1c) = *(int *)(lVar9 + 0x1a0) + -1;
  puVar24[0x1f] = puVar25;
  uVar11 = *(undefined8 *)(param_1[7] + 0x13818);
  iVar18 = ((int)local_100 + (((int)local_108 + (int)local_110 * 4) * 3 + local_140) * 3) * 5 +
           (int)local_130;
  iVar17 = (int)local_138;
  FUN_142e89b96();
  FUN_1448e935e(uVar11,&local_c8,&DAT_14ca23c40,iVar17 + iVar18 * 2 + -0x1e);
  FUN_142e89b96();
  uVar11 = uStack_c0;
  puVar15 = (undefined1 *)local_c8;
  iVar18 = *(int *)param_1[6];
  iVar8 = ((int *)param_1[6])[1];
  iVar17 = iVar8 + 7;
  iVar8 = iVar8 + 0xe;
  if (-1 < iVar17) {
    iVar8 = iVar17;
  }
  iVar17 = iVar18 + 7;
  iVar18 = iVar18 + 0xe;
  if (-1 < iVar17) {
    iVar18 = iVar17;
  }
  lVar9 = param_1[2];
  FUN_142e9e286();
  local_c8 = (undefined8 *)0x0;
  uStack_c0 = 0;
  FUN_1448f70da(puVar15,&DAT_14ca23cf0,puVar2,&local_c8);
  FUN_140069376(lVar9);
  uVar22 = 2;
  local_128 = puVar15;
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar22 = 4;
  }
  puVar3 = (ulonglong *)(lVar9 + 0x70);
  puVar24 = (undefined8 *)(*(longlong *)(lVar9 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar19 = puVar24 + 0x3d;
  if (*(undefined8 **)(lVar9 + 0x78) < puVar19) {
    FUN_140023dd8(puVar3,0x1f0);
    puVar24 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar24 + 0x3d;
  }
  *puVar3 = (ulonglong)puVar19;
  uStack_c0 = DAT_14ca23d38;
  if (DAT_14ca23d38 != 0) {
    LOCK();
    *(int *)(DAT_14ca23d38 + 8) = *(int *)(DAT_14ca23d38 + 8) + 1;
    UNLOCK();
  }
  local_b8 = &DAT_14ca23cf0;
  local_158 = 2;
  local_c8 = puVar2;
  FUN_140068f1a(puVar24,&local_c9,&local_c8,uVar22);
  *puVar24 = &PTR_FUN_14a2b1fb0;
  puVar24[0x37] = &DAT_14ca23cf0;
  puVar24[0x38] = puVar2;
  puVar24[0x39] = local_128;
  puVar24[0x3a] = uVar11;
  *(int *)(puVar24 + 0x3b) = iVar18 >> 3;
  *(int *)((longlong)puVar24 + 0x1dc) = iVar8 >> 3;
  *(undefined4 *)(puVar24 + 0x3c) = 1;
  iVar17 = *(int *)(lVar9 + 0x170);
  *(uint *)(lVar9 + 0x170) = iVar17 + 1U;
  if (*(uint *)(lVar9 + 0x174) < iVar17 + 1U) {
    FUN_14470e57a(lVar9 + 0x168,iVar17);
  }
  *(undefined8 **)(*(longlong *)(lVar9 + 0x168) + (longlong)iVar17 * 8) = puVar24;
  *(int *)((longlong)puVar24 + 0x2c) = *(int *)(lVar9 + 0x170) + -1;
  FUN_140069100(lVar9,puVar24);
  if ((local_90 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142e92e38 FUN_142e92e38 body=2079 status=ok
// SIG undefined FUN_142e92e38(void)

void FUN_142e92e38(longlong *param_1,int *param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined8 *local_d0;
  int local_c8;
  int local_c4;
  longlong *local_c0;
  ulonglong *local_b8;
  undefined1 local_a9;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  ulonglong local_7c;
  int local_74;
  int local_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined4 local_66;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2[2] != 0) {
    local_a8 = 0;
    uStack_a0 = 0;
    lVar7 = *param_3;
    local_66 = *(undefined4 *)(lVar7 + 0x92);
    local_6c = *(undefined4 *)(lVar7 + 0x8c);
    local_68 = *(undefined2 *)(lVar7 + 0x90);
    uStack_90 = *(ulonglong *)(lVar7 + 0x68);
    uStack_88 = *(undefined **)(lVar7 + 0x70);
    uStack_80 = *(undefined4 *)(lVar7 + 0x78);
    local_7c = *(undefined8 *)(lVar7 + 0x7c);
    local_98 = (undefined8 *)((ulonglong)*(byte *)(param_2 + 5) | *(ulonglong *)(lVar7 + 0x60));
    lVar8 = *param_1;
    uVar9 = *(undefined8 *)(lVar7 + 8);
    iVar14 = (int)*(undefined8 *)(lVar7 + 0x84);
    local_74 = DAT_14ca84e40;
    if (iVar14 < DAT_14ca84e40) {
      local_74 = iVar14;
    }
    if (local_74 < 2) {
      local_74 = 1;
    }
    iVar14 = (int)((ulonglong)*(undefined8 *)(lVar7 + 0x84) >> 0x20);
    local_70 = DAT_14ca84e40;
    if (iVar14 < DAT_14ca84e40) {
      local_70 = iVar14;
    }
    if (local_70 < 2) {
      local_70 = 1;
    }
    uVar21 = *(longlong *)(lVar8 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar16 = uVar21 + 0x120;
    if (*(ulonglong *)(lVar8 + 0x78) < uVar16) {
      FUN_140023dd8((longlong *)(lVar8 + 0x70),0x128);
      uVar21 = *(longlong *)(lVar8 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar16 = uVar21 + 0x120;
    }
    *(ulonglong *)(lVar8 + 0x70) = uVar16;
    FUN_1456bbb8c(uVar21,uVar9,&local_98,0);
    iVar14 = *(int *)(lVar8 + 0x180);
    *(uint *)(lVar8 + 0x180) = iVar14 + 1U;
    if (*(uint *)(lVar8 + 0x184) < iVar14 + 1U) {
      FUN_14472c0f6(lVar8 + 0x178,iVar14);
    }
    *(ulonglong *)(*(longlong *)(lVar8 + 0x178) + (longlong)iVar14 * 8) = uVar21;
    *(int *)(uVar21 + 0x9c) = *(int *)(lVar8 + 0x180) + -1;
    lVar7 = param_3[1];
    local_c0 = param_3;
    local_a8 = uVar21;
    if (lVar7 != 0) {
      uStack_a0 = FUN_14472bf7a(*param_1,lVar7 + 0x60,*(undefined8 *)(lVar7 + 8),0);
    }
    lVar7 = *param_1;
    local_d0 = (undefined8 *)(ulonglong)*(byte *)param_1[1];
    local_c4 = *param_2;
    iVar14 = *(int *)param_1[2];
    local_c8 = param_2[2];
    iVar15 = *(int *)param_1[3];
    puVar20 = (undefined8 *)(*(longlong *)(lVar7 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar17 = puVar20 + 0x14;
    if (*(undefined8 **)(lVar7 + 0x78) < puVar17) {
      FUN_140023dd8((longlong *)(lVar7 + 0x70),0xb0);
      puVar20 = (undefined8 *)(*(longlong *)(lVar7 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar17 = puVar20 + 0x14;
    }
    *(undefined8 **)(lVar7 + 0x70) = puVar17;
    *puVar20 = &PTR_FUN_14a2b1ff8;
    puVar20[8] = 0;
    puVar20[2] = 0;
    puVar20[3] = 0;
    *(undefined1 *)(puVar20 + 9) = 1;
    *(undefined4 *)(puVar20 + 10) = 0;
    *(undefined4 *)((longlong)puVar20 + 0x54) = 0;
    *(undefined4 *)(puVar20 + 0xb) = 0;
    *(undefined4 *)((longlong)puVar20 + 0x5c) = 0x3f800000;
    local_b8 = puVar20 + 0x10;
    puVar20[0xc] = 0;
    puVar20[0xd] = 0;
    puVar20[0xe] = 0;
    puVar20[0xf] = 0;
    puVar20[0x10] = 0;
    puVar20[0x11] = 0;
    puVar20[0x12] = 0;
    iVar5 = *(int *)(lVar7 + 0xa0);
    *(uint *)(lVar7 + 0xa0) = iVar5 + 1U;
    if (*(uint *)(lVar7 + 0xa4) < iVar5 + 1U) {
      FUN_1448cfae8((longlong *)(lVar7 + 0x98),iVar5);
    }
    *(undefined8 **)(*(longlong *)(lVar7 + 0x98) + (longlong)iVar5 * 8) = puVar20;
    uVar9 = *(undefined8 *)param_1[3];
    puVar20[2] = 0;
    puVar20[3] = uVar9;
    iVar5 = ((int *)param_1[3])[1];
    iVar6 = ((int *)param_1[4])[1];
    *(float *)(puVar20 + 4) = ((float)*(int *)param_1[3] + -0.5) / (float)*(int *)param_1[4];
    *(float *)((longlong)puVar20 + 0x24) = ((float)iVar5 + -0.5) / (float)iVar6;
    *(float *)(puVar20 + 6) = ((float)iVar14 * 3.0) / (float)iVar15 + -1.0;
    uVar9 = ((undefined8 *)param_1[5])[1];
    puVar20[8] = *(undefined8 *)param_1[5];
    puVar20[9] = uVar9;
    fVar22 = (float)((int *)param_1[4])[1];
    fVar23 = (float)*(int *)param_1[4];
    *(float *)(puVar20 + 10) = fVar23;
    *(float *)((longlong)puVar20 + 0x54) = fVar22;
    *(float *)(puVar20 + 0xb) = 1.0 / fVar23;
    *(float *)((longlong)puVar20 + 0x5c) = 1.0 / fVar22;
    lVar7 = local_c0[1];
    puVar20[0xc] = *local_c0;
    puVar20[0xd] = lVar7;
    puVar10 = (undefined4 *)param_1[6];
    uVar11 = puVar10[1];
    uVar12 = puVar10[2];
    uVar13 = puVar10[3];
    *(undefined4 *)(puVar20 + 0xe) = *puVar10;
    *(undefined4 *)((longlong)puVar20 + 0x74) = uVar11;
    *(undefined4 *)(puVar20 + 0xf) = uVar12;
    *(undefined4 *)((longlong)puVar20 + 0x7c) = uVar13;
    FUN_142ea282b(&local_98,*param_1,&local_a8);
    *local_b8 = (ulonglong)local_98;
    local_b8[1] = uStack_90;
    lVar7 = *param_1;
    local_66 = 0xff000a00;
    local_98 = (undefined8 *)&DAT_00020008;
    local_6c = 0x10001;
    local_68 = 0x101;
    uStack_90 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
    uStack_88 = (undefined *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
    uStack_80 = DAT_14ca85098;
    local_7c = (ulonglong)(uint)~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    iVar14 = (int)*(undefined8 *)param_1[4];
    local_74 = DAT_14ca84e40;
    if (iVar14 < DAT_14ca84e40) {
      local_74 = iVar14;
    }
    if (local_74 < 2) {
      local_74 = 1;
    }
    iVar14 = (int)((ulonglong)*(undefined8 *)param_1[4] >> 0x20);
    local_70 = DAT_14ca84e40;
    if (iVar14 < DAT_14ca84e40) {
      local_70 = iVar14;
    }
    if (local_70 < 2) {
      local_70 = 1;
    }
    plVar1 = (longlong *)(lVar7 + 0x70);
    uVar21 = *(longlong *)(lVar7 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar16 = uVar21 + 0x120;
    if (*(ulonglong *)(lVar7 + 0x78) < uVar16) {
      FUN_140023dd8(plVar1,0x128);
      uVar21 = *plVar1 + 7U & 0xfffffffffffffff8;
      uVar16 = uVar21 + 0x120;
    }
    *(ulonglong *)(lVar7 + 0x70) = uVar16;
    FUN_1456bbb8c(uVar21,L"Debug.DOF.PostFilter",&local_98,0);
    iVar14 = *(int *)(lVar7 + 0x180);
    *(uint *)(lVar7 + 0x180) = iVar14 + 1U;
    if (*(uint *)(lVar7 + 0x184) < iVar14 + 1U) {
      FUN_14472c0f6(lVar7 + 0x178,iVar14);
    }
    *(ulonglong *)(*(longlong *)(lVar7 + 0x178) + (longlong)iVar14 * 8) = uVar21;
    *(int *)(uVar21 + 0x9c) = *(int *)(lVar7 + 0x180) + -1;
    uVar4 = *(undefined1 *)(uVar21 + 0x94);
    puVar18 = (undefined8 *)(*(longlong *)(lVar7 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar17 = puVar18 + 9;
    if (*(undefined8 **)(lVar7 + 0x78) < puVar17) {
      FUN_140023dd8(plVar1,0x50);
      puVar18 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar17 = puVar18 + 9;
    }
    puVar3 = puVar20 + 2;
    *(undefined8 **)(lVar7 + 0x70) = puVar17;
    puVar18[1] = *(undefined8 *)(uVar21 + 8);
    puVar18[2] = 0;
    *(undefined1 *)(puVar18 + 3) = 0;
    *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar18 + 5) = 0;
    *puVar18 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar18 + 6) = uVar4;
    *(undefined1 *)(puVar18 + 7) = 0;
    *(undefined4 *)((longlong)puVar18 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar18 + 0x35) = 0;
    puVar18[8] = uVar21;
    iVar14 = *(int *)(lVar7 + 0x1a0);
    *(uint *)(lVar7 + 0x1a0) = iVar14 + 1U;
    if (*(uint *)(lVar7 + 0x1a4) < iVar14 + 1U) {
      FUN_1447568fc(lVar7 + 0x198,iVar14);
    }
    *(undefined8 **)(*(longlong *)(lVar7 + 0x198) + (longlong)iVar14 * 8) = puVar18;
    *(int *)((longlong)puVar18 + 0x1c) = *(int *)(lVar7 + 0x1a0) + -1;
    puVar20[0x12] = puVar18;
    uVar9 = *(undefined8 *)(param_1[7] + 0x13818);
    iVar15 = ((uint)(local_c8 == 2) * 3 + local_c8) * 5 + local_c4;
    iVar14 = (int)local_d0;
    FUN_142e89dd6();
    FUN_1448e935e(uVar9,&local_98,&DAT_14ca23f20,iVar14 + iVar15 * 2);
    FUN_142e89dd6();
    uVar9 = uStack_90;
    puVar17 = local_98;
    iVar15 = *(int *)param_1[3];
    iVar5 = ((int *)param_1[3])[1];
    iVar14 = iVar5 + 7;
    iVar5 = iVar5 + 0xe;
    if (-1 < iVar14) {
      iVar5 = iVar14;
    }
    iVar14 = iVar15 + 7;
    iVar15 = iVar15 + 0xe;
    if (-1 < iVar14) {
      iVar15 = iVar14;
    }
    lVar7 = *param_1;
    FUN_142e9f7be();
    local_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    FUN_1448f70da(puVar17,&DAT_14ca23fd0,puVar3,&local_98);
    FUN_140069376(lVar7);
    uVar19 = 2;
    local_d0 = puVar17;
    if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
       ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
      uVar19 = 4;
    }
    puVar2 = (ulonglong *)(lVar7 + 0x70);
    puVar20 = (undefined8 *)(*(longlong *)(lVar7 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar17 = puVar20 + 0x3d;
    if (*(undefined8 **)(lVar7 + 0x78) < puVar17) {
      FUN_140023dd8(puVar2,0x1f0);
      puVar20 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar20 + 0x3d;
    }
    *puVar2 = (ulonglong)puVar17;
    uStack_90 = DAT_14ca24018;
    if (DAT_14ca24018 != 0) {
      LOCK();
      *(int *)(DAT_14ca24018 + 8) = *(int *)(DAT_14ca24018 + 8) + 1;
      UNLOCK();
    }
    uStack_88 = &DAT_14ca23fd0;
    local_d8 = 2;
    local_98 = puVar3;
    FUN_140068f1a(puVar20,&local_a9,&local_98,uVar19);
    plVar1 = local_c0;
    *puVar20 = &PTR_FUN_14a2b2000;
    puVar20[0x37] = &DAT_14ca23fd0;
    puVar20[0x38] = puVar3;
    puVar20[0x39] = local_d0;
    puVar20[0x3a] = uVar9;
    *(int *)(puVar20 + 0x3b) = iVar15 >> 3;
    *(int *)((longlong)puVar20 + 0x1dc) = iVar5 >> 3;
    *(undefined4 *)(puVar20 + 0x3c) = 1;
    iVar14 = *(int *)(lVar7 + 0x170);
    *(uint *)(lVar7 + 0x170) = iVar14 + 1U;
    if (*(uint *)(lVar7 + 0x174) < iVar14 + 1U) {
      FUN_14470e57a(lVar7 + 0x168,iVar14);
    }
    *(undefined8 **)(*(longlong *)(lVar7 + 0x168) + (longlong)iVar14 * 8) = puVar20;
    *(int *)((longlong)puVar20 + 0x2c) = *(int *)(lVar7 + 0x170) + -1;
    FUN_140069100(lVar7,puVar20);
    *(undefined4 *)plVar1 = (undefined4)local_a8;
    *(undefined4 *)((longlong)plVar1 + 4) = local_a8._4_4_;
    *(undefined4 *)(plVar1 + 1) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)plVar1 + 0xc) = uStack_a0._4_4_;
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142e93658 FUN_142e93658 body=1483 status=ok
// SIG undefined FUN_142e93658(void)

void FUN_142e93658(undefined8 *param_1,int *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5)

{
  ulonglong *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_bc;
  longlong local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 **local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar3 = *param_2;
  local_bc = 0;
  lVar4 = *(longlong *)*param_1;
  iVar6 = (uint)(lVar4 != 0) * 2;
  if (iVar3 != 2) {
    iVar6 = iVar3;
  }
  uVar5 = *(undefined8 *)(param_1[1] + 0x13818);
  local_b8 = param_4;
  local_b0 = param_3;
  FUN_142e8a016();
  FUN_1448e935e(uVar5,&local_68,&DAT_14ca24178,0);
  FUN_142e8a016();
  local_98 = local_68;
  local_90 = local_60;
  uVar5 = *(undefined8 *)(param_1[1] + 0x13818);
  FUN_142e8a256();
  FUN_1448e935e(uVar5,&local_68,&DAT_14ca24348,
                ((uint)(lVar4 != 0) + (uint)(param_4 != 0) * 2) * 5 + iVar6);
  FUN_142e8a256();
  local_a8 = local_68;
  local_a0 = local_60;
  lVar4 = param_1[2];
  puVar1 = (ulonglong *)(lVar4 + 0x70);
  puVar11 = (undefined8 *)(*(longlong *)(lVar4 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar8 = puVar11 + 0x30;
  if (*(undefined8 **)(lVar4 + 0x78) < puVar8) {
    FUN_140023dd8(puVar1,400);
    puVar11 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar8 = puVar11 + 0x30;
  }
  local_bc = CONCAT31((int3)((uint)local_bc >> 8),iVar3 != 0);
  *puVar1 = (ulonglong)puVar8;
  *puVar11 = &PTR_FUN_14a2b2018;
  puVar8 = puVar11 + 2;
  puVar11[2] = 0;
  puVar11[3] = 0x3f80000000000000;
  puVar11[6] = 0;
  *(undefined1 *)(puVar11 + 7) = 1;
  puVar11[8] = 0;
  puVar11[9] = 0x3f80000000000000;
  *(undefined1 (*) [16])(puVar11 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar11 + 0xc) = (undefined1  [16])0x0;
  *(undefined4 *)(puVar11 + 0xe) = 4;
  lVar9 = 0x92;
  do {
    *(undefined1 (*) [16])((longlong)puVar11 + lVar9 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)puVar11 + lVar9 + -2) = 0xffff0000;
    lVar9 = lVar9 + 0x18;
  } while (lVar9 != 0x152);
  *(undefined4 *)((longlong)puVar11 + 0x154) = 0;
  *(undefined1 (*) [16])(puVar11 + 0x28) = (undefined1  [16])0x0;
  *(undefined2 *)(puVar11 + 0x2a) = 0;
  *(undefined4 *)(puVar11 + 0x2b) = 0xffffffff;
  *(undefined4 *)((longlong)puVar11 + 0x15c) = 0xffffffff;
  *(undefined4 *)(puVar11 + 0x2c) = 0xffffffff;
  *(undefined4 *)((longlong)puVar11 + 0x164) = 0xffffffff;
  *(undefined4 *)(puVar11 + 0x2d) = 0;
  *(undefined2 *)((longlong)puVar11 + 0x16c) = 0;
  puVar11[0x2e] = 0;
  iVar3 = *(int *)(lVar4 + 0xa0);
  *(uint *)(lVar4 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(lVar4 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8((longlong *)(lVar4 + 0x98),iVar3);
  }
  *(undefined8 **)(*(longlong *)(lVar4 + 0x98) + (longlong)iVar3 * 8) = puVar11;
  fVar13 = (float)((int *)param_1[3])[1];
  fVar14 = (float)*(int *)param_1[3];
  *(float *)(puVar11 + 2) = fVar14;
  *(float *)((longlong)puVar11 + 0x14) = fVar13;
  *(float *)(puVar11 + 3) = 1.0 / fVar14;
  *(float *)((longlong)puVar11 + 0x1c) = 1.0 / fVar13;
  *(undefined4 *)(puVar11 + 4) = *(undefined4 *)(param_1[4] + 4);
  *(float *)((longlong)puVar11 + 0x24) = (float)*(int *)param_1[3] / (float)*(int *)param_1[5];
  *(undefined4 *)(puVar11 + 5) = *(undefined4 *)(param_1[6] + 0x34);
  *(float *)((longlong)puVar11 + 0x2c) = 1.0 / *(float *)(param_1[6] + 0x34);
  uVar5 = ((undefined8 *)param_1[7])[1];
  puVar11[6] = *(undefined8 *)param_1[7];
  puVar11[7] = uVar5;
  puVar11[0xb] = *(undefined8 *)*param_1;
  fVar13 = (float)((int *)param_1[8])[1];
  fVar14 = (float)*(int *)param_1[8];
  *(float *)(puVar11 + 8) = fVar14;
  *(float *)((longlong)puVar11 + 0x44) = fVar13;
  *(float *)(puVar11 + 9) = 1.0 / fVar14;
  *(float *)((longlong)puVar11 + 0x4c) = 1.0 / fVar13;
  puVar11[10] = local_b8;
  puVar11[0xd] = *(undefined8 *)param_1[9];
  *(undefined4 *)(puVar11 + 0xe) = 4;
  lVar4 = param_1[2];
  cVar2 = *(char *)(param_5 + 0x68);
  puVar12 = (undefined8 *)(*(longlong *)(lVar4 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar12 + 9;
  if (*(undefined8 **)(lVar4 + 0x78) < puVar10) {
    FUN_140023dd8((longlong *)(lVar4 + 0x70),0x50);
    puVar12 = (undefined8 *)(*(longlong *)(lVar4 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar12 + 9;
  }
  puVar7 = local_98;
  *(undefined8 **)(lVar4 + 0x70) = puVar10;
  puVar12[1] = *(undefined8 *)(param_5 + 8);
  puVar12[2] = 0;
  *(undefined1 *)(puVar12 + 3) = 3;
  *(undefined8 *)((longlong)puVar12 + 0x1c) = 0xffffffffffffffff;
  *puVar12 = &PTR_FUN_14a1fb168;
  *(byte *)(puVar12 + 5) = cVar2 >> 7 & 0x1c;
  *(undefined8 *)((longlong)puVar12 + 0x2c) = 0xffffffff00000000;
  puVar12[7] = 0;
  puVar12[8] = param_5;
  iVar3 = *(int *)(lVar4 + 0x1a0);
  *(uint *)(lVar4 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(lVar4 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(lVar4 + 0x198,iVar3);
  }
  *(undefined8 **)(*(longlong *)(lVar4 + 0x198) + (longlong)iVar3 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x1c) = *(int *)(lVar4 + 0x1a0) + -1;
  puVar11[0xc] = puVar12;
  puVar11[0x10] = *local_b0;
  puVar11[0x11] = 0;
  *(undefined4 *)(puVar11 + 0x12) = 0xffff0001;
  FUN_142ea029a();
  puVar10 = local_a8;
  local_68 = puVar7;
  local_60 = local_a8;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = &local_68;
  local_80 = 2;
  FUN_1448fd31d(&local_88,&DAT_14ca24228,puVar8);
  lVar4 = param_1[2];
  uVar5 = *(undefined8 *)param_1[3];
  FUN_142ea029a();
  FUN_140069376(lVar4);
  puVar1 = (ulonglong *)(lVar4 + 0x70);
  puVar12 = (undefined8 *)(*(longlong *)(lVar4 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar12 + 0x3e;
  if (*(undefined8 **)(lVar4 + 0x78) < puVar11) {
    FUN_140023dd8(puVar1,0x1f8);
    puVar12 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar12 + 0x3e;
  }
  *puVar1 = (ulonglong)puVar11;
  local_60 = (undefined8 *)DAT_14ca24270;
  if (DAT_14ca24270 != 0) {
    LOCK();
    *(int *)(DAT_14ca24270 + 8) = *(int *)(DAT_14ca24270 + 8) + 1;
    UNLOCK();
  }
  local_58 = &DAT_14ca24228;
  local_c8 = 2;
  local_68 = puVar8;
  FUN_140068f1a(puVar12,&local_78,&local_68,1);
  *puVar12 = &PTR_FUN_14a2b2020;
  puVar12[0x37] = puVar8;
  puVar12[0x38] = puVar7;
  puVar12[0x39] = local_90;
  puVar12[0x3a] = puVar10;
  puVar12[0x3b] = local_a0;
  puVar12[0x3c] = uVar5;
  *(undefined4 *)(puVar12 + 0x3d) = local_bc;
  iVar3 = *(int *)(lVar4 + 0x170);
  *(uint *)(lVar4 + 0x170) = iVar3 + 1U;
  if (*(uint *)(lVar4 + 0x174) < iVar3 + 1U) {
    FUN_14470e57a(lVar4 + 0x168,iVar3);
  }
  *(undefined8 **)(*(longlong *)(lVar4 + 0x168) + (longlong)iVar3 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x2c) = *(int *)(lVar4 + 0x170) + -1;
  FUN_140069100(lVar4,puVar12);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e93c54 FUN_142e93c54 body=1395 status=ok
// SIG undefined FUN_142e93c54(void)

void FUN_142e93c54(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  byte bVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar4 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10) + 0x24);
  local_58 = *(undefined8 *)(param_1 + 0x30);
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_50 = 0;
  uStack_48 = 0;
  iVar6 = *(int *)(param_1 + 0x20) * iVar4;
  local_98 = CONCAT44(iVar4,iVar6);
  uStack_90 = CONCAT44(uStack_90._4_4_,0x8108);
  if (iVar6 == 0) {
    FUN_14570b4be(param_2,&local_88,0x8108);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_88;
    local_b8 = (undefined8 *)CONCAT44(local_b8._4_4_,8);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 8;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (undefined8 *)CONCAT44(local_b8._4_4_,8);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 8;
  }
  lVar12 = local_a0;
  plVar11 = (longlong *)(param_1 + 0x10);
  if (plVar11 == &local_a0) {
LAB_142e93e16:
    lVar12 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar10 = *(byte *)(local_a0 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar12;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar10 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar13 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar13) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar13 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar13) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
    }
    lVar12 = *plVar11;
  }
  else {
    lVar5 = *plVar11;
    *plVar11 = local_a0;
    local_a0 = 0;
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar10 = *(byte *)(lVar5 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar10 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar13 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar13) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar13 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar13) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
      goto LAB_142e93e16;
    }
  }
  bVar10 = (iVar4 == 2) * '\x04' + 0x1c;
  if ((lVar12 == 0) || ((*(byte *)(lVar12 + 0x28) & 0x10) == 0)) {
    local_98._0_2_ = CONCAT11(bVar10,1);
    local_98._0_3_ = CONCAT12(1,(short)local_98);
  }
  else {
    local_98._0_3_ = 0x40001;
  }
  local_98 = (ulonglong)(uint3)local_98;
  uStack_90 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_a0,param_2);
  plVar11 = (longlong *)(param_1 + 0x40);
  if (plVar11 == &local_a0) {
LAB_142e93f53:
    lVar12 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar12;
          plVar11 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar11;
              LOCK();
              bVar13 = plVar11 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar13) {
                plVar11 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar13 = plVar9 != DAT_14ca843c8;
              plVar11 = plVar8;
              if (bVar13) {
                plVar9 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
    }
  }
  else {
    lVar12 = *plVar11;
    *plVar11 = local_a0;
    local_a0 = 0;
    if (lVar12 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar12 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar12 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar12 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar12;
          plVar11 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar11;
              LOCK();
              bVar13 = plVar11 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar13) {
                plVar11 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar13 = plVar9 != DAT_14ca843c8;
              plVar11 = plVar8;
              if (bVar13) {
                plVar9 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
      goto LAB_142e93f53;
    }
  }
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
  if ((lVar12 == 0) || ((*(byte *)(lVar12 + 0x28) & 0x10) == 0)) {
    local_98._0_2_ = (ushort)bVar10 << 8;
    local_98._0_3_ = CONCAT12(1,(short)local_98);
  }
  else {
    local_98._0_3_ = 0x40000;
  }
  local_98 = (ulonglong)(uint3)local_98;
  uStack_90 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  plVar11 = (longlong *)(param_1 + 0x38);
  if (plVar11 != &local_a0) {
    lVar12 = *plVar11;
    *plVar11 = local_a0;
    local_a0 = 0;
    if (lVar12 == 0) goto LAB_142e940e8;
    LOCK();
    puVar1 = (uint *)(lVar12 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar12 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar10 = *(byte *)(lVar12 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar12;
        plVar11 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar10 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar11;
            LOCK();
            bVar13 = plVar11 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar13) {
              plVar11 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar13);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar13 = plVar9 != DAT_14ca843c8;
            plVar11 = plVar8;
            if (bVar13) {
              plVar9 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar13);
        }
      }
    }
  }
  lVar12 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a0 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar10 = *(byte *)(local_a0 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar12;
        plVar11 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar10 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar11;
            LOCK();
            bVar13 = plVar11 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar13) {
              plVar11 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar13);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar13 = plVar9 != DAT_14ca843c8;
            plVar11 = plVar8;
            if (bVar13) {
              plVar9 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar13);
        }
      }
    }
  }
LAB_142e940e8:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142e941f8 FUN_142e941f8 body=31 status=ok
// SIG undefined FUN_142e941f8(void)

undefined8 FUN_142e941f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e94218 FUN_142e94218 body=38 status=ok
// SIG undefined FUN_142e94218(void)

undefined8 FUN_142e94218(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e9423e FUN_142e9423e body=1390 status=ok
// SIG undefined FUN_142e9423e(void)

void FUN_142e9423e(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  void *pvVar13;
  undefined8 *_Dst;
  longlong lVar14;
  size_t _Size;
  undefined8 *puVar15;
  longlong lVar16;
  undefined1 *_Src_00;
  ulonglong uVar17;
  void *_Dst_00;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong local_d8;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined1 local_a8 [4];
  undefined8 local_a4;
  undefined4 local_9c;
  undefined1 local_90;
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar15 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar15 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar15;
  param_2[6] = (ulonglong)(puVar15 + 1);
  puVar15[1] = 0;
  *puVar15 = &PTR_FUN_14a1fb978;
  puVar15[3] = 0;
  *(int *)(puVar15 + 4) = (int)local_b0;
  if ((longlong)(int)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar15 + 0x24) = 8;
  }
  else {
    puVar12 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar12 = &local_c0;
    }
    FUN_1446fe144(puVar15 + 2,(int)local_b0,0);
    _Dst = (undefined8 *)puVar15[3];
    if ((undefined8 *)puVar15[3] == (undefined8 *)0x0) {
      _Dst = puVar15 + 2;
    }
    memcpy(_Dst,puVar12,(longlong)(int)local_b0);
  }
  puVar15[0xd] = 0;
  *(int *)(puVar15 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar15 + 0x74) = 8;
  }
  else {
    _Src_00 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src_00 = local_a8;
    }
    FUN_1446fe1b8(puVar15 + 5,local_60,0);
    puVar12 = (undefined8 *)puVar15[0xd];
    if ((undefined8 *)puVar15[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar15 + 5;
    }
    memcpy(puVar12,_Src_00,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar15 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar15 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar15 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar15 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b0 = *(undefined8 *)(param_1 + 0x1e0);
  local_c0 = 0xffffffffffffffff;
  local_b8 = 0xffffffff;
  local_a8[0] = 2;
  local_a4 = 0x40000000008;
  local_9c = 0;
  local_90 = 0;
  local_c8 = 1;
  uVar10 = 0;
  local_d0 = &local_c0;
  FUN_144760590(param_2,&local_d0,0);
  uVar3 = *(undefined4 *)(param_1 + 0x1d0);
  uVar4 = *(undefined4 *)(param_1 + 0x1d4);
  uVar5 = *(undefined4 *)(param_1 + 0x1d8);
  uVar8 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_14159789e();
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar14 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar16 + 0x50) + lVar14 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar16,lVar14,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar15 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar15 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar15;
  param_2[6] = (ulonglong)(puVar15 + 1);
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_14a37d340;
  puVar15[2] = uVar11;
  local_e8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c0),&DAT_14ca215e0);
  puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar15 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x28);
    puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar15 + 4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar15;
  param_2[6] = (ulonglong)(puVar15 + 1);
  puVar15[1] = 0;
  *puVar15 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar15 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar15 + 0x14) = uVar4;
  *(undefined4 *)(puVar15 + 3) = uVar5;
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    local_d8 = 0;
  }
  else {
    lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar14 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    local_d8 = *(longlong *)(*(longlong *)(lVar16 + 0x50) + lVar14 * 8);
    if (local_d8 == 0) {
      local_d8 = FUN_1400bafc2(lVar16,lVar14,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar16 = *(longlong *)(param_1 + 0x1c0);
    uVar10 = *(ulonglong *)(lVar16 + 0x10);
    uVar17 = lVar16 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar17 = uVar10;
    }
    iVar6 = *(int *)(lVar16 + 0x18);
    if ((longlong)iVar6 != 0) {
      lVar16 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar17 + 3 + lVar16);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar17 + 2 + lVar16);
          iVar7 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar7 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar7 + 1U) {
            FUN_1447477d8(puVar1,iVar7);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar7 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar7 * 4) = 1;
        }
        lVar16 = lVar16 + 4;
      } while ((longlong)iVar6 * 4 != lVar16);
    }
    uVar10 = param_2[0x13];
    lVar16 = (longlong)(int)uVar10;
    if (0 < lVar16) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar15 + 5;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x30);
          puVar15 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar15 + 5;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar15;
        param_2[6] = (ulonglong)(puVar15 + 1);
        _Dst_00 = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst_00 + lVar16 * 4);
        _Size = lVar16 * 4;
        if ((void *)param_2[1] < pvVar13) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst_00 = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst_00 + _Size);
        }
        *param_2 = (ulonglong)pvVar13;
        memcpy(_Dst_00,_Src,_Size);
        puVar15[1] = 0;
        *puVar15 = &PTR_FUN_14a1fbc38;
        puVar15[2] = local_d8;
        puVar15[3] = _Dst_00;
        *(int *)(puVar15 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142e947ae FUN_142e947ae body=31 status=ok
// SIG undefined FUN_142e947ae(void)

undefined8 FUN_142e947ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e947ce FUN_142e947ce body=1324 status=ok
// SIG undefined FUN_142e947ce(void)

void FUN_142e947ce(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142e94cfc FUN_142e94cfc body=31 status=ok
// SIG undefined FUN_142e94cfc(void)

undefined8 FUN_142e94cfc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e94d1c FUN_142e94d1c body=38 status=ok
// SIG undefined FUN_142e94d1c(void)

undefined8 FUN_142e94d1c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142e94d42 FUN_142e94d42 body=1422 status=ok
// SIG undefined FUN_142e94d42(void)

void FUN_142e94d42(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  void *pvVar12;
  undefined8 *_Dst;
  ulonglong *puVar13;
  longlong lVar14;
  size_t _Size;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  void *_Dst_00;
  undefined1 *_Src_00;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  ulonglong *local_e0;
  longlong local_d8;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined1 local_a8 [4];
  undefined8 local_a4;
  undefined4 local_9c;
  undefined1 local_90;
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar16 + 0x11;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x90);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar16 + 0x11;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar16;
  param_2[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_FUN_14a1fb978;
  puVar16[3] = 0;
  *(int *)(puVar16 + 4) = (int)local_b0;
  if ((longlong)(int)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x24) = 8;
  }
  else {
    puVar11 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar11 = &local_c0;
    }
    FUN_1446fe144(puVar16 + 2,(int)local_b0,0);
    _Dst = (undefined8 *)puVar16[3];
    if ((undefined8 *)puVar16[3] == (undefined8 *)0x0) {
      _Dst = puVar16 + 2;
    }
    memcpy(_Dst,puVar11,(longlong)(int)local_b0);
  }
  puVar16[0xd] = 0;
  *(int *)(puVar16 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x74) = 8;
  }
  else {
    _Src_00 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src_00 = local_a8;
    }
    FUN_1446fe1b8(puVar16 + 5,local_60,0);
    puVar11 = (undefined8 *)puVar16[0xd];
    if ((undefined8 *)puVar16[0xd] == (undefined8 *)0x0) {
      puVar11 = puVar16 + 5;
    }
    memcpy(puVar11,_Src_00,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar16 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar16 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar16 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar16 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1d0);
  uVar3 = *(undefined4 *)(param_1 + 0x1d4);
  uVar4 = *(undefined4 *)(param_1 + 0x1d8);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_141592600();
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    uVar9 = 0;
  }
  else {
    lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar14 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar17 + 0x50) + lVar14 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar17,lVar14,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar16 + 3;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x20);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar16 + 3;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar16;
  param_2[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_14a37d340;
  puVar16[2] = uVar10;
  local_e8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c0),&DAT_14ca216f0);
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar16 + 4;
  if ((undefined8 *)param_2[1] < puVar11) {
    FUN_140023dd8(param_2,0x28);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar16 + 4;
  }
  *param_2 = (ulonglong)puVar11;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar16;
  param_2[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar16 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar16 + 0x14) = uVar3;
  *(undefined4 *)(puVar16 + 3) = uVar4;
  if (*(longlong *)(param_1 + 0x1c0) == 0) {
    local_d8 = 0;
  }
  else {
    lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x1c8) + 8);
    lVar14 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c0) + 0xd4);
    local_d8 = *(longlong *)(*(longlong *)(lVar17 + 0x50) + lVar14 * 8);
    if (local_d8 == 0) {
      local_d8 = FUN_1400bafc2(lVar17,lVar14,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    local_e0 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(local_e0,0);
    }
    lVar17 = *(longlong *)(param_1 + 0x1c0);
    uVar9 = *(ulonglong *)(lVar17 + 0x10);
    uVar15 = lVar17 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar15 = uVar9;
    }
    iVar5 = *(int *)(lVar17 + 0x18);
    puVar13 = local_e0;
    if ((longlong)iVar5 != 0) {
      lVar17 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar15 + 3 + lVar17);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar15 + 2 + lVar17);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar13,iVar6);
            puVar13 = local_e0;
          }
          uVar9 = *puVar13;
          *(ushort *)(uVar9 + (longlong)iVar6 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar17 = lVar17 + 4;
      } while ((longlong)iVar5 * 4 != lVar17);
    }
    uVar9 = param_2[0x13];
    lVar17 = (longlong)(int)uVar9;
    if (0 < lVar17) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar13;
        puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar11 = puVar16 + 5;
        if ((undefined8 *)param_2[1] < puVar11) {
          FUN_140023dd8(param_2,0x30);
          puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar16 + 5;
        }
        *param_2 = (ulonglong)puVar11;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar16;
        param_2[6] = (ulonglong)(puVar16 + 1);
        _Dst_00 = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar12 = (void *)(lVar17 * 4 + (longlong)_Dst_00);
        _Size = lVar17 * 4;
        if ((void *)param_2[1] < pvVar12) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst_00 = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar12 = (void *)((longlong)_Dst_00 + _Size);
        }
        *param_2 = (ulonglong)pvVar12;
        memcpy(_Dst_00,_Src,_Size);
        puVar16[1] = 0;
        *puVar16 = &PTR_FUN_14a1fbc38;
        puVar16[2] = local_d8;
        puVar16[3] = _Dst_00;
        *(int *)(puVar16 + 4) = (int)uVar9;
        puVar13 = local_e0;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar13,0);
      }
    }
  }
  local_b0 = *(undefined8 *)(param_1 + 0x1e0);
  local_c0 = 0xffffffffffffffff;
  local_b8 = 0xffffffff;
  local_a8[0] = 2;
  local_a4 = 0x800000400;
  local_9c = 0;
  local_90 = 0;
  local_d0 = &local_c0;
  local_c8 = 1;
  FUN_144760590(param_2,&local_d0,0);
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142e952d2 FUN_142e952d2 body=481 status=ok
// SIG undefined FUN_142e952d2(void)

void FUN_142e952d2(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_147279c92(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e954b4 FUN_142e954b4 body=232 status=ok
// SIG undefined FUN_142e954b4(void)

void FUN_142e954b4(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142e9559c FUN_142e9559c body=81 status=ok
// SIG undefined FUN_142e9559c(void)

void FUN_142e9559c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_147279d35(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142e955ee FUN_142e955ee body=481 status=ok
// SIG undefined FUN_142e955ee(void)

void FUN_142e955ee(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_14727a124(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e957d0 FUN_142e957d0 body=232 status=ok
// SIG undefined FUN_142e957d0(void)

void FUN_142e957d0(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142e958b8 FUN_142e958b8 body=81 status=ok
// SIG undefined FUN_142e958b8(void)

void FUN_142e958b8(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_14727a1c7(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142e9590a FUN_142e9590a body=481 status=ok
// SIG undefined FUN_142e9590a(void)

void FUN_142e9590a(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_14727a5b6(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e95aec FUN_142e95aec body=232 status=ok
// SIG undefined FUN_142e95aec(void)

void FUN_142e95aec(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142e95bd4 FUN_142e95bd4 body=81 status=ok
// SIG undefined FUN_142e95bd4(void)

void FUN_142e95bd4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_14727a659(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142e95cfe FUN_142e95cfe body=243 status=ok
// SIG undefined FUN_142e95cfe(void)

longlong * FUN_142e95cfe(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145e35ca8();
  local_30 = 1;
  local_38 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14ca1e6e8);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142e95e93 FUN_142e95e93 body=655 status=ok
// SIG undefined FUN_142e95e93(void)

void FUN_142e95e93(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_98 [32];
  int *local_78;
  undefined1 local_65;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x70);
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar5 = puVar9 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(plVar1,0x50);
    puVar9 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar5 = puVar9 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  *puVar9 = &PTR_FUN_14a2af810;
  puVar9[2] = 0;
  puVar9[4] = 0;
  *(undefined1 *)(puVar9 + 5) = 1;
  iVar3 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar9;
  uVar2 = *(undefined1 *)(param_3 + 0x94);
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar10 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(plVar1,0x50);
    puVar10 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar10 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  puVar10[1] = *(undefined8 *)(param_3 + 8);
  puVar10[2] = 0;
  *(undefined1 *)(puVar10 + 3) = 0;
  *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar10 + 5) = 0;
  *puVar10 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar10 + 6) = uVar2;
  *(undefined1 *)(puVar10 + 7) = 0;
  *(undefined4 *)((longlong)puVar10 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar10 + 0x35) = 0;
  puVar10[8] = param_3;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar10;
  *(int *)((longlong)puVar10 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar9[2] = puVar10;
  lVar6 = FUN_1447e4f80();
  cVar7 = '\x02';
  if (*(char *)(lVar6 + 0x41) != '\x03') {
    cVar7 = *(char *)(lVar6 + 0x41);
  }
  puVar9[4] = *(undefined8 *)(param_2 + 0x18);
  *(char *)(puVar9 + 5) = cVar7;
  *(float *)(puVar9 + 6) = (float)*(int *)(param_3 + 0x84);
  *(float *)((longlong)puVar9 + 0x34) = (float)*(int *)(param_3 + 0x88);
  uVar4 = *(undefined8 *)(param_2 + 0x13818);
  FUN_145e8f5d6();
  FUN_1448e935e(uVar4,local_58,&DAT_14ca20600,0);
  FUN_145e8f5d6();
  iVar8 = *(int *)(param_2 + 0x3104) - *(int *)(param_2 + 0x30fc);
  iVar3 = iVar8 + 7;
  local_60 = iVar8 + 0xe;
  if (-1 < iVar3) {
    local_60 = iVar3;
  }
  local_60 = local_60 >> 3;
  iVar8 = *(int *)(param_2 + 0x3100) - *(int *)(param_2 + 0x30f8);
  iVar3 = iVar8 + 7;
  local_64 = iVar8 + 0xe;
  if (-1 < iVar3) {
    local_64 = iVar3;
  }
  local_64 = local_64 >> 3;
  local_78 = &local_64;
  local_5c = 1;
  FUN_14727f76a(param_1,&local_65,local_58,puVar9 + 2);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e96124 FUN_142e96124 body=481 status=ok
// SIG undefined FUN_142e96124(void)

void FUN_142e96124(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_14727f9e2(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e96306 FUN_142e96306 body=232 status=ok
// SIG undefined FUN_142e96306(void)

void FUN_142e96306(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142e963ee FUN_142e963ee body=81 status=ok
// SIG undefined FUN_142e963ee(void)

void FUN_142e963ee(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_14727fa85(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142e96440 FUN_142e96440 body=481 status=ok
// SIG undefined FUN_142e96440(void)

void FUN_142e96440(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_14727fe74(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e96622 FUN_142e96622 body=232 status=ok
// SIG undefined FUN_142e96622(void)

void FUN_142e96622(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142e9670a FUN_142e9670a body=81 status=ok
// SIG undefined FUN_142e9670a(void)

void FUN_142e9670a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_14727ff17(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142e9675b FUN_142e9675b body=138 status=ok
// SIG undefined FUN_142e9675b(void)

undefined8 FUN_142e9675b(int param_1)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined4 extraout_var;
  ulonglong uVar7;
  
  lVar2 = DAT_14ca1fb00;
  if ((*(int *)(DAT_14ca1fbf0 + 4) == 1) && (param_1 <= *(int *)(DAT_14ca1fbd8 + 4))) {
    uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    uVar5 = (ulonglong)uVar1;
    if ((uVar1 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (uVar1 == 2)))) {
      uVar7 = 0;
    }
    else if (uVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      uVar5 = CONCAT44(extraout_var,DVar4);
      uVar7 = (ulonglong)(DVar3 != DVar4);
    }
    else {
      uVar7 = 1;
    }
    uVar6 = CONCAT71((int7)(uVar5 >> 8),*(int *)(lVar2 + uVar7 * 4) != 0);
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 142e967e5 FUN_142e967e5 body=1610 status=ok
// SIG undefined FUN_142e967e5(void)

void FUN_142e967e5(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  longlong param_5,longlong param_6)

{
  ulonglong *puVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined2 uVar10;
  uint uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined1 auStack_c8 [32];
  int *local_a8;
  undefined4 local_9c;
  longlong local_98;
  ulonglong *local_90;
  longlong local_88;
  undefined8 *local_80;
  longlong local_78;
  undefined8 *local_70;
  undefined1 local_65;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_9c = *(undefined4 *)(param_3 + 0x1d4);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar7 = puVar14 + 0x20;
  local_98 = param_3;
  local_90 = puVar1;
  local_78 = param_2;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(puVar1,0x110);
    puVar14 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar7 = puVar14 + 0x20;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar7;
  *puVar14 = &PTR_FUN_14a2afd20;
  puVar14[2] = 0;
  *(undefined1 *)(puVar14 + 3) = 1;
  puVar14[0x12] = 0;
  puVar14[0x16] = 0;
  puVar14[0x17] = 0;
  puVar14[0x18] = 0;
  puVar14[0x19] = 0;
  puVar14[0x1a] = 0;
  puVar14[0x1b] = 0;
  puVar14[0x1c] = 0;
  puVar14[0x1d] = 0;
  puVar14[0x1e] = 0;
  puVar14[0x1f] = 0;
  iVar4 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar4);
  }
  puVar1 = local_90;
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 8) = puVar14;
  lVar8 = param_4[2];
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar12 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(local_90,0x48);
    puVar12 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 8;
  }
  *local_90 = (ulonglong)puVar7;
  puVar12[1] = *(undefined8 *)(lVar8 + 8);
  puVar12[2] = 0;
  *(undefined1 *)(puVar12 + 3) = 1;
  *(undefined8 *)((longlong)puVar12 + 0x1c) = 0xffffffffffffffff;
  *puVar12 = &PTR_FUN_14a203858;
  puVar12[5] = *param_4;
  *(undefined1 *)(puVar12 + 6) = *(undefined1 *)(param_4 + 1);
  cVar2 = *(char *)((longlong)param_4 + 10);
  *(char *)((longlong)puVar12 + 0x32) = cVar2;
  if (cVar2 == '\x01') {
    *(undefined1 *)((longlong)puVar12 + 0x31) = *(undefined1 *)((longlong)param_4 + 9);
  }
  local_88 = param_1 + 0x198;
  puVar12[7] = param_4[2];
  iVar4 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(local_88,iVar4);
  }
  puVar1 = local_90;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar14[0x16] = puVar12;
  if ((*(char *)(param_5 + 0x92) == '\x04') || (*(char *)(param_5 + 0x92) == '\x01')) {
    uVar10 = *(undefined2 *)(param_5 + 0x8e);
  }
  else {
    uVar10 = 0;
  }
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar12 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(local_90,0x48);
    puVar12 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar7;
  puVar12[1] = *(undefined8 *)(param_5 + 8);
  puVar12[2] = 0;
  *(undefined1 *)(puVar12 + 3) = 1;
  *(undefined8 *)((longlong)puVar12 + 0x1c) = 0xffffffffffffffff;
  *puVar12 = &PTR_FUN_14a203858;
  *(undefined1 *)(puVar12 + 5) = 0;
  *(char *)((longlong)puVar12 + 0x29) = (char)local_9c;
  *(undefined4 *)((longlong)puVar12 + 0x2a) = 1;
  *(undefined2 *)((longlong)puVar12 + 0x2e) = uVar10;
  *(undefined1 *)(puVar12 + 6) = 0;
  *(undefined1 *)((longlong)puVar12 + 0x32) = 0;
  puVar12[7] = param_5;
  iVar4 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(local_88,iVar4);
  }
  puVar1 = local_90;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar14[0x17] = puVar12;
  if ((*(char *)(param_6 + 0x92) == '\x04') || (*(char *)(param_6 + 0x92) == '\x01')) {
    uVar10 = *(undefined2 *)(param_6 + 0x8e);
  }
  else {
    uVar10 = 0;
  }
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar12 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(local_90,0x48);
    puVar12 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar7;
  puVar12[1] = *(undefined8 *)(param_6 + 8);
  puVar12[2] = 0;
  *(undefined1 *)(puVar12 + 3) = 1;
  *(undefined8 *)((longlong)puVar12 + 0x1c) = 0xffffffffffffffff;
  *puVar12 = &PTR_FUN_14a203858;
  *(undefined1 *)(puVar12 + 5) = 0;
  *(char *)((longlong)puVar12 + 0x29) = (char)local_9c;
  *(undefined4 *)((longlong)puVar12 + 0x2a) = 1;
  *(undefined2 *)((longlong)puVar12 + 0x2e) = uVar10;
  *(undefined1 *)(puVar12 + 6) = 0;
  *(undefined1 *)((longlong)puVar12 + 0x32) = 0;
  puVar12[7] = param_6;
  iVar4 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(local_88,iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar14[0x18] = puVar12;
  local_80 = puVar14 + 2;
  local_70 = param_4;
  memcpy(puVar14 + 2,(void *)(local_98 + 0x140),0x98);
  lVar13 = 0;
  lVar8 = local_98;
  uVar9 = local_9c;
  do {
    puVar1 = local_90;
    lVar5 = *(longlong *)(lVar8 + 0x108 + lVar13 * 8);
    uVar3 = *(undefined1 *)(lVar5 + 0x94);
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar12 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
      FUN_140023dd8(local_90,0x50);
      puVar12 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar12 + 9;
      lVar8 = local_98;
      uVar9 = local_9c;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar7;
    puVar12[1] = *(undefined8 *)(lVar5 + 8);
    puVar12[2] = 0;
    *(undefined1 *)(puVar12 + 3) = 0;
    *(undefined8 *)((longlong)puVar12 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar12 + 5) = 0;
    *puVar12 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar12 + 6) = uVar3;
    *(char *)((longlong)puVar12 + 0x31) = (char)uVar9;
    *(undefined4 *)((longlong)puVar12 + 0x32) = 0;
    *(undefined1 *)((longlong)puVar12 + 0x36) = 0;
    *(undefined1 *)(puVar12 + 7) = 0;
    puVar12[8] = lVar5;
    iVar4 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
      FUN_1447568fc(local_88,iVar4);
      lVar8 = local_98;
      uVar9 = local_9c;
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar12;
    *(int *)((longlong)puVar12 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar14[lVar13 + 0x19] = puVar12;
    lVar13 = lVar13 + 1;
  } while (lVar13 != 7);
  uVar11 = 2;
  if (*(uint *)(DAT_14ca1fc20 + 4) < 2) {
    uVar11 = *(uint *)(DAT_14ca1fc20 + 4);
  }
  uVar6 = *(undefined8 *)(local_78 + 0x13818);
  FUN_145ceee9c();
  FUN_1448e935e(uVar6,local_58,&DAT_14ca1fcc0,uVar11);
  FUN_145ceee9c();
  iVar4 = *(int *)(lVar8 + 0x24) + 7;
  local_60 = *(int *)(lVar8 + 0x24) + 0xe;
  if (-1 < iVar4) {
    local_60 = iVar4;
  }
  local_60 = local_60 >> 3;
  iVar4 = *(int *)(lVar8 + 0x20) + 7;
  local_64 = *(int *)(lVar8 + 0x20) + 0xe;
  if (-1 < iVar4) {
    local_64 = iVar4;
  }
  local_64 = local_64 >> 3;
  local_a8 = &local_64;
  local_5c = 7;
  FUN_1472806f7(param_1,&local_65,local_58,local_80);
  if (*(char *)((longlong)local_70 + 10) == '\x01') {
    *(undefined1 *)((longlong)local_70 + 10) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e96e30 FUN_142e96e30 body=1211 status=ok
// SIG undefined FUN_142e96e30(void)

void FUN_142e96e30(longlong param_1,longlong param_2,longlong param_3)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  wchar_t **ppwVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  bool bVar12;
  wchar_t wVar13;
  undefined1 auStack_138 [32];
  int *local_118;
  undefined1 local_105;
  int local_104;
  longlong *local_100;
  int local_f8;
  int local_f4;
  longlong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  longlong local_d0;
  void *local_c8;
  longlong local_c0;
  undefined1 local_b5;
  int local_b4;
  int local_b0;
  undefined4 local_ac;
  undefined1 local_a8 [16];
  wchar_t *local_98;
  undefined8 local_90;
  undefined8 local_88;
  wchar_t *local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_c0 = param_2;
  local_e0 = FUN_14472bf7a(param_1,param_3 + 0x38,L"PathTracing.EstimateMotion.TempBuffer",0);
  local_104 = *(int *)(param_3 + 0x1d4);
  local_f8 = 3;
  if (local_104 != 0) {
    local_f8 = (local_104 == 2) + 1;
  }
  local_100 = (longlong *)(param_1 + 0x70);
  local_d0 = param_1 + 0x98;
  local_f0 = param_1 + 0x198;
  local_c8 = (void *)(param_3 + 0x140);
  lVar9 = 0;
  local_e8 = param_3;
  do {
    local_90 = *(undefined8 *)(local_e8 + 0x108 + lVar9 * 8);
    local_98 = L"PathTracing::Denoising::Blur0";
    local_88 = local_e0;
    local_80 = L"PathTracing::Denoising::Blur1";
    local_78 = local_e0;
    local_70 = local_90;
    iVar6 = 0;
    local_d8 = lVar9;
    do {
      ppwVar7 = &local_98;
      bVar5 = true;
      local_f4 = iVar6;
      do {
        bVar12 = bVar5;
        plVar4 = local_100;
        pwVar1 = ppwVar7[1];
        pwVar2 = ppwVar7[2];
        if (((char)pwVar1[0x49] == '\x04') || ((char)pwVar1[0x49] == '\x01')) {
          wVar13 = pwVar1[0x47];
        }
        else {
          wVar13 = L'\0';
        }
        local_105 = (undefined1)pwVar2[0x4a];
        puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar8 = puVar11 + 0x18;
        if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
          FUN_140023dd8(local_100,0xd0);
          puVar11 = (undefined8 *)(*plVar4 + 0xfU & 0xfffffffffffffff0);
          puVar8 = puVar11 + 0x18;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar8;
        *puVar11 = &PTR_FUN_14a2afe10;
        puVar11[2] = 0;
        *(undefined1 *)(puVar11 + 3) = 1;
        puVar11[0x12] = 0;
        puVar11[0x16] = 0;
        puVar11[0x17] = 0;
        iVar6 = *(int *)(param_1 + 0xa0);
        *(uint *)(param_1 + 0xa0) = iVar6 + 1U;
        if (*(uint *)(param_1 + 0xa4) < iVar6 + 1U) {
          FUN_1448cfae8(local_d0,iVar6);
        }
        plVar4 = local_100;
        *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar6 * 8) = puVar11;
        puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar10 + 8;
        if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
          FUN_140023dd8(local_100,0x48);
          puVar10 = (undefined8 *)(*plVar4 + 7U & 0xfffffffffffffff8);
          puVar8 = puVar10 + 8;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar8;
        puVar10[1] = *(undefined8 *)(pwVar1 + 4);
        puVar10[2] = 0;
        *(undefined1 *)(puVar10 + 3) = 1;
        *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
        *puVar10 = &PTR_FUN_14a203858;
        *(undefined1 *)(puVar10 + 5) = 0;
        *(char *)((longlong)puVar10 + 0x29) = (char)local_104;
        *(undefined4 *)((longlong)puVar10 + 0x2a) = 1;
        *(wchar_t *)((longlong)puVar10 + 0x2e) = wVar13;
        *(undefined1 *)(puVar10 + 6) = 0;
        *(undefined1 *)((longlong)puVar10 + 0x32) = 0;
        puVar10[7] = pwVar1;
        iVar6 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar6 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar6 + 1U) {
          FUN_1447568fc(local_f0,iVar6);
        }
        plVar4 = local_100;
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar6 * 8) = puVar10;
        *(int *)((longlong)puVar10 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar11[0x16] = puVar10;
        puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar10 + 9;
        if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
          FUN_140023dd8(local_100,0x50);
          puVar10 = (undefined8 *)(*plVar4 + 7U & 0xfffffffffffffff8);
          puVar8 = puVar10 + 9;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar8;
        puVar10[1] = *(undefined8 *)(pwVar2 + 4);
        puVar10[2] = 0;
        *(undefined1 *)(puVar10 + 3) = 0;
        *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar10 + 5) = 0;
        *puVar10 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(puVar10 + 6) = local_105;
        *(char *)((longlong)puVar10 + 0x31) = (char)local_104;
        *(undefined4 *)((longlong)puVar10 + 0x32) = 0;
        *(undefined1 *)((longlong)puVar10 + 0x36) = 0;
        *(undefined1 *)(puVar10 + 7) = 0;
        puVar10[8] = pwVar2;
        iVar6 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar6 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar6 + 1U) {
          FUN_1447568fc(local_f0,iVar6);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar6 * 8) = puVar10;
        *(int *)((longlong)puVar10 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar11[0x17] = puVar10;
        memcpy(puVar11 + 2,local_c8,0x98);
        uVar3 = *(undefined8 *)(local_c0 + 0x13818);
        FUN_145ea0820();
        FUN_1448e935e(uVar3,local_a8,&DAT_14ca1fde8,0);
        FUN_145ea0820();
        iVar6 = *(int *)(local_e8 + 0x24) + 7;
        local_b0 = *(int *)(local_e8 + 0x24) + 0xe;
        if (-1 < iVar6) {
          local_b0 = iVar6;
        }
        local_b0 = local_b0 >> 3;
        iVar6 = *(int *)(local_e8 + 0x20) + 7;
        local_b4 = *(int *)(local_e8 + 0x20) + 0xe;
        if (-1 < iVar6) {
          local_b4 = iVar6;
        }
        local_b4 = local_b4 >> 3;
        local_ac = 1;
        local_118 = &local_b4;
        FUN_147280b89(param_1,&local_b5,local_a8);
        ppwVar7 = &local_80;
        bVar5 = false;
      } while (bVar12);
      iVar6 = local_f4 + 1;
    } while (iVar6 != local_f8);
    lVar9 = local_d8 + 1;
  } while (lVar9 != 7);
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e972ec FUN_142e972ec body=1574 status=ok
// SIG undefined FUN_142e972ec(void)

void FUN_142e972ec(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  longlong param_5)

{
  ulonglong *puVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined2 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  byte bVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_d8 [32];
  int *local_b8;
  uint local_a4;
  longlong local_a0;
  ulonglong *local_98;
  longlong local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  longlong local_70;
  undefined1 local_65;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a4 = *(uint *)(param_3 + 0x1d4);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar10 = puVar14 + 0x20;
  local_a0 = param_3;
  local_98 = puVar1;
  local_70 = param_2;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(puVar1,0x110);
    puVar14 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar10 = puVar14 + 0x20;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  *puVar14 = &PTR_FUN_14a2afe38;
  puVar14[2] = 0;
  *(undefined1 *)(puVar14 + 3) = 1;
  puVar14[0x12] = 0;
  puVar14[0x16] = 0;
  puVar14[0x17] = 0;
  puVar14[0x18] = 0;
  puVar14[0x19] = 0;
  puVar14[0x1a] = 0;
  puVar14[0x1b] = 0;
  puVar14[0x1c] = 0;
  puVar14[0x1d] = 0;
  puVar14[0x1e] = 0;
  iVar4 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
  local_88 = param_4;
  if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar4);
  }
  local_78 = puVar14 + 2;
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 8) = puVar14;
  local_90 = param_1 + 0x198;
  lVar18 = 0;
  lVar16 = local_a0;
  uVar11 = local_a4;
  local_80 = puVar14;
  do {
    puVar1 = local_98;
    lVar5 = *(longlong *)(lVar16 + 0x108 + lVar18 * 8);
    if ((*(char *)(lVar5 + 0x92) == '\x04') || (*(char *)(lVar5 + 0x92) == '\x01')) {
      uVar13 = *(undefined2 *)(lVar5 + 0x8e);
    }
    else {
      uVar13 = 0;
    }
    puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar15 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
      FUN_140023dd8(local_98,0x48);
      puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar15 + 8;
      lVar16 = local_a0;
      uVar11 = local_a4;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar10;
    puVar15[1] = *(undefined8 *)(lVar5 + 8);
    puVar15[2] = 0;
    *(undefined1 *)(puVar15 + 3) = 1;
    *(undefined8 *)((longlong)puVar15 + 0x1c) = 0xffffffffffffffff;
    *puVar15 = &PTR_FUN_14a203858;
    *(undefined1 *)(puVar15 + 5) = 0;
    *(char *)((longlong)puVar15 + 0x29) = (char)uVar11;
    *(undefined4 *)((longlong)puVar15 + 0x2a) = 1;
    *(undefined2 *)((longlong)puVar15 + 0x2e) = uVar13;
    *(undefined1 *)(puVar15 + 6) = 0;
    *(undefined1 *)((longlong)puVar15 + 0x32) = 0;
    puVar15[7] = lVar5;
    iVar4 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
      FUN_1447568fc(local_90,iVar4);
      lVar16 = local_a0;
      uVar11 = local_a4;
    }
    puVar10 = local_88;
    puVar1 = local_98;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar15;
    *(int *)((longlong)puVar15 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar14[lVar18 + 0x16] = puVar15;
    lVar18 = lVar18 + 1;
  } while (lVar18 != 7);
  lVar18 = local_88[2];
  puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar14 = puVar15 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar14) {
    FUN_140023dd8(local_98,0x48);
    puVar15 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar15 + 8;
    lVar16 = local_a0;
    uVar11 = local_a4;
  }
  puVar7 = local_80;
  *local_98 = (ulonglong)puVar14;
  puVar15[1] = *(undefined8 *)(lVar18 + 8);
  puVar15[2] = 0;
  *(undefined1 *)(puVar15 + 3) = 1;
  *(undefined8 *)((longlong)puVar15 + 0x1c) = 0xffffffffffffffff;
  *puVar15 = &PTR_FUN_14a203858;
  puVar15[5] = *puVar10;
  *(undefined1 *)(puVar15 + 6) = *(undefined1 *)(puVar10 + 1);
  cVar2 = *(char *)((longlong)puVar10 + 10);
  *(char *)((longlong)puVar15 + 0x32) = cVar2;
  if (cVar2 == '\x01') {
    *(undefined1 *)((longlong)puVar15 + 0x31) = *(undefined1 *)((longlong)puVar10 + 9);
  }
  puVar15[7] = puVar10[2];
  iVar4 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(local_90,iVar4);
    lVar16 = local_a0;
    uVar11 = local_a4;
  }
  puVar1 = local_98;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar15;
  *(int *)((longlong)puVar15 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar7[0x1d] = puVar15;
  uVar3 = *(undefined1 *)(param_5 + 0x94);
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar14 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar10) {
    FUN_140023dd8(local_98,0x50);
    puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar14 + 9;
    lVar16 = local_a0;
    uVar11 = local_a4;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar10;
  puVar14[1] = *(undefined8 *)(param_5 + 8);
  puVar14[2] = 0;
  *(undefined1 *)(puVar14 + 3) = 0;
  *(undefined8 *)((longlong)puVar14 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar14 + 5) = 0;
  *puVar14 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar14 + 6) = uVar3;
  *(char *)((longlong)puVar14 + 0x31) = (char)uVar11;
  *(undefined4 *)((longlong)puVar14 + 0x32) = 0;
  *(undefined1 *)((longlong)puVar14 + 0x36) = 0;
  *(undefined1 *)(puVar14 + 7) = 0;
  puVar14[8] = param_5;
  iVar4 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
    FUN_1447568fc(local_90,iVar4);
    lVar16 = local_a0;
  }
  puVar10 = local_78;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar7[0x1e] = puVar14;
  memcpy(local_78,(void *)(lVar16 + 0x140),0x98);
  lVar16 = DAT_14ca1fb00;
  bVar17 = 0;
  if ((uVar11 == 0) && (bVar17 = 0, *(int *)(DAT_14ca1fc38 + 4) != 0)) {
    iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if ((iVar4 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar4 == 2)))) {
      uVar12 = 0;
    }
    else if (iVar4 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      uVar12 = (ulonglong)(DVar8 != DVar9);
      uVar11 = local_a4;
    }
    else {
      uVar12 = 1;
    }
    bVar17 = (*(int *)(lVar16 + uVar12 * 4) != 0) * '\x02';
  }
  lVar16 = DAT_14ca1fb00;
  bVar19 = false;
  if (uVar11 <= *(uint *)(DAT_14ca1fbd8 + 4)) {
    iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
      uVar12 = 0;
    }
    else if (iVar4 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      uVar12 = (ulonglong)(DVar8 != DVar9);
    }
    else {
      uVar12 = 1;
    }
    bVar19 = *(int *)(lVar16 + uVar12 * 4) != 0;
  }
  uVar6 = *(undefined8 *)(local_70 + 0x13818);
  FUN_145e8e586();
  FUN_1448e935e(uVar6,local_58,&DAT_14ca1ff10,bVar19 | bVar17);
  FUN_145e8e586();
  iVar4 = *(int *)(local_a0 + 0x24) + 7;
  local_60 = *(int *)(local_a0 + 0x24) + 0xe;
  if (-1 < iVar4) {
    local_60 = iVar4;
  }
  local_60 = local_60 >> 3;
  iVar4 = *(int *)(local_a0 + 0x20) + 7;
  local_64 = *(int *)(local_a0 + 0x20) + 0xe;
  if (-1 < iVar4) {
    local_64 = iVar4;
  }
  local_64 = local_64 >> 3;
  local_b8 = &local_64;
  local_5c = 1;
  FUN_14728101b(param_1,&local_65,local_58,puVar10);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e97914 FUN_142e97914 body=481 status=ok
// SIG undefined FUN_142e97914(void)

void FUN_142e97914(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_147280970(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e97af6 FUN_142e97af6 body=232 status=ok
// SIG undefined FUN_142e97af6(void)

void FUN_142e97af6(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142e97bde FUN_142e97bde body=81 status=ok
// SIG undefined FUN_142e97bde(void)

void FUN_142e97bde(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_147280a13(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142e97c30 FUN_142e97c30 body=481 status=ok
// SIG undefined FUN_142e97c30(void)

void FUN_142e97c30(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_147280e02(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e97e12 FUN_142e97e12 body=232 status=ok
// SIG undefined FUN_142e97e12(void)

void FUN_142e97e12(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142e97efa FUN_142e97efa body=81 status=ok
// SIG undefined FUN_142e97efa(void)

void FUN_142e97efa(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_147280ea5(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142e97f4c FUN_142e97f4c body=481 status=ok
// SIG undefined FUN_142e97f4c(void)

void FUN_142e97f4c(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_147281294(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e9812e FUN_142e9812e body=232 status=ok
// SIG undefined FUN_142e9812e(void)

void FUN_142e9812e(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142e98216 FUN_142e98216 body=81 status=ok
// SIG undefined FUN_142e98216(void)

void FUN_142e98216(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_147281337(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142e98268 FUN_142e98268 body=481 status=ok
// SIG undefined FUN_142e98268(void)

void FUN_142e98268(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_147281674(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e9844a FUN_142e9844a body=232 status=ok
// SIG undefined FUN_142e9844a(void)

void FUN_142e9844a(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142e98532 FUN_142e98532 body=81 status=ok
// SIG undefined FUN_142e98532(void)

void FUN_142e98532(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_147281717(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142e98584 FUN_142e98584 body=481 status=ok
// SIG undefined FUN_142e98584(void)

void FUN_142e98584(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_147281a54(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e98766 FUN_142e98766 body=232 status=ok
// SIG undefined FUN_142e98766(void)

void FUN_142e98766(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142e9884e FUN_142e9884e body=81 status=ok
// SIG undefined FUN_142e9884e(void)

void FUN_142e9884e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_147281af7(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142e988a0 FUN_142e988a0 body=481 status=ok
// SIG undefined FUN_142e988a0(void)

void FUN_142e988a0(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_147281e34(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e98a82 FUN_142e98a82 body=232 status=ok
// SIG undefined FUN_142e98a82(void)

void FUN_142e98a82(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 142e98b6a FUN_142e98b6a body=81 status=ok
// SIG undefined FUN_142e98b6a(void)

void FUN_142e98b6a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_147281ed7(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142e98be0 FUN_142e98be0 body=818 status=ok
// SIG undefined FUN_142e98be0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142e98be0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined1 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  uint local_6c;
  undefined4 local_68;
  undefined1 local_64 [8];
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined2 local_55;
  undefined1 local_53;
  undefined4 local_50;
  wchar_t *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a4 = 0x1010101;
  local_a0 = 0;
  local_98 = 0x7f7fffff;
  local_94 = 0;
  local_8c = 0;
  lVar4 = FUN_1405d51a2();
  lVar7 = *(longlong *)(param_1 + 0x18);
  if (lVar7 != lVar4) {
    *(longlong *)(param_1 + 0x18) = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    if (lVar7 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar7 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar7 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar7 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar7;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar9;
              LOCK();
              bVar10 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar5;
              if (bVar10) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar5;
              if (bVar10) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
  }
  bVar3 = (byte)DAT_14c760da4 & 0x1f;
  (**(code **)(*(longlong *)(param_1 + 0x48) + 0x28))(param_1 + 0x48,local_64);
  local_56 = 0;
  local_88 = 9;
  local_55 = 10;
  local_5c = 0x10001;
  local_58 = 0x101;
  local_80 = DAT_14ca83a30;
  local_7c = _DAT_14ca83a34;
  uStack_74 = _DAT_14ca83a3c;
  local_68 = 0;
  local_53 = 0xff;
  local_50 = 0x70;
  local_48 = L"FPlanarReflectionRenderTarget";
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_6c = ~(-1 << bVar3);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_b0,&DAT_14ca85100,&local_88);
  lVar7 = local_b0;
  plVar9 = (longlong *)(param_1 + 0x10);
  if (plVar9 != &local_b0) {
    lVar4 = *plVar9;
    *plVar9 = local_b0;
    local_b0 = 0;
    if (lVar4 == 0) goto LAB_142e98dbb;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar4;
        plVar8 = DAT_14ca843c0;
        plVar5 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar10 = plVar8 != DAT_14ca843c0;
            plVar5 = plVar6;
            if (bVar10) {
              plVar8 = DAT_14ca843c0;
              plVar5 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar5;
            UNLOCK();
          } while (bVar10);
        }
        else {
          do {
            *plVar6 = (longlong)plVar5;
            LOCK();
            bVar10 = plVar5 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar10) {
              plVar5 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar10);
        }
      }
    }
  }
  lVar7 = *plVar9;
LAB_142e98dbb:
  lVar4 = *(longlong *)(param_1 + 0x50);
  if (lVar4 != lVar7) {
    *(longlong *)(param_1 + 0x50) = lVar7;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar4 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = lVar4;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar5 = (longlong)plVar9;
              LOCK();
              bVar10 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar5;
              if (bVar10) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar5 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar5;
              if (bVar10) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
  }
  lVar7 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_b0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_b0 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_b0 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar7;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar9;
            LOCK();
            bVar10 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar5;
            if (bVar10) {
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar10);
        }
        else {
          do {
            *plVar5 = (longlong)plVar8;
            LOCK();
            bVar10 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar5;
            if (bVar10) {
              plVar8 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar10);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142e98f58 FUN_142e98f58 body=96 status=ok
// SIG undefined FUN_142e98f58(void)

undefined8 FUN_142e98f58(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142e9904e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca22c88,1);
  return uVar3;
}



// FUNCTION 142e98fb8 FUN_142e98fb8 body=138 status=ok
// SIG undefined FUN_142e98fb8(void)

void * FUN_142e98fb8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142e9904e FUN_142e9904e body=445 status=ok
// SIG undefined FUN_142e9904e(void)

void FUN_142e9904e(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca22d08) {
    FUN_144b3d300(&DAT_14ca22d08);
    if (DAT_14ca22d08 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142e99218;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x90;
      local_88 = 0x2e9;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca22c88,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e9920c);
      _Init_thread_footer(&DAT_14ca22d08);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e99218 FUN_142e99218 body=136 status=ok
// SIG undefined FUN_142e99218(void)

code * FUN_142e99218(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Output2";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x88000002f5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e992a0;
}



// FUNCTION 142e992a0 FUN_142e992a0 body=136 status=ok
// SIG undefined FUN_142e992a0(void)

code * FUN_142e992a0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Output1";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000002f4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e99328;
}



// FUNCTION 142e99328 FUN_142e99328 body=136 status=ok
// SIG undefined FUN_142e99328(void)

code * FUN_142e99328(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Output0";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x78000002f3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e993b0;
}



// FUNCTION 142e993b0 FUN_142e993b0 body=136 status=ok
// SIG undefined FUN_142e993b0(void)

code * FUN_142e993b0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70000002f1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e99438;
}



// FUNCTION 142e99438 FUN_142e99438 body=136 status=ok
// SIG undefined FUN_142e99438(void)

code * FUN_142e99438(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColorTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x68000002f0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e994c0;
}



// FUNCTION 142e994c0 FUN_142e994c0 body=136 status=ok
// SIG undefined FUN_142e994c0(void)

code * FUN_142e994c0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CocRadiusBasis";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000002ee;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e99548;
}



// FUNCTION 142e99548 FUN_142e99548 body=136 status=ok
// SIG undefined FUN_142e99548(void)

code * FUN_142e99548(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewportRect";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000002ed;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e995d0;
}



// FUNCTION 142e995d0 FUN_142e995d0 body=144 status=ok
// SIG undefined FUN_142e995d0(void)

code * FUN_142e995d0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e99660();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CocModel";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFCocModelShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000002eb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca22d10;
  return FUN_142e9981e;
}



// FUNCTION 142e99660 FUN_142e99660 body=445 status=ok
// SIG undefined FUN_142e99660(void)

void FUN_142e99660(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca22d90) {
    FUN_144b3d300(&DAT_14ca22d90);
    if (DAT_14ca22d90 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142e998b4;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FDOFCocModelShaderParameters";
      local_68 = 0;
      local_80 = 0x40;
      local_88 = 0x280;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca22d10,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e998a8);
      _Init_thread_footer(&DAT_14ca22d90);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e9981e FUN_142e9981e body=138 status=ok
// SIG undefined FUN_142e9981e(void)

undefined1 * FUN_142e9981e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e99e8a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CommonParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFCommonShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2ea;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca22d98;
  return &LAB_142e9a048;
}



// FUNCTION 142e998b4 FUN_142e998b4 body=136 status=ok
// SIG undefined FUN_142e998b4(void)

code * FUN_142e998b4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DepthBlurExponent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000028b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9993c;
}



// FUNCTION 142e9993c FUN_142e9993c body=136 status=ok
// SIG undefined FUN_142e9993c(void)

code * FUN_142e9993c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DepthBlurRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c0000028a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e999c4;
}



// FUNCTION 142e999c4 FUN_142e999c4 body=136 status=ok
// SIG undefined FUN_142e999c4(void)

code * FUN_142e999c4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CocInvSqueeze";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000289;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e99a4c;
}



// FUNCTION 142e99a4c FUN_142e99a4c body=136 status=ok
// SIG undefined FUN_142e99a4c(void)

code * FUN_142e99a4c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CocSqueeze";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2400000288;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e99ad4;
}



// FUNCTION 142e99ad4 FUN_142e99ad4 body=136 status=ok
// SIG undefined FUN_142e99ad4(void)

code * FUN_142e99ad4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CocMaxRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000287;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e99b5c;
}



// FUNCTION 142e99b5c FUN_142e99b5c body=136 status=ok
// SIG undefined FUN_142e99b5c(void)

code * FUN_142e99b5c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CocMinRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c00000286;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e99be4;
}



// FUNCTION 142e99be4 FUN_142e99be4 body=136 status=ok
// SIG undefined FUN_142e99be4(void)

code * FUN_142e99be4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bCocEnableDynamicRadiusOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000285;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e99c6c;
}



// FUNCTION 142e99c6c FUN_142e99c6c body=136 status=ok
// SIG undefined FUN_142e99c6c(void)

code * FUN_142e99c6c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DynamicRadiusOffsetLUTSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000284;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e99cf4;
}



// FUNCTION 142e99cf4 FUN_142e99cf4 body=136 status=ok
// SIG undefined FUN_142e99cf4(void)

code * FUN_142e99cf4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DynamicRadiusOffsetLUT";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000283;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e99d7c;
}



// FUNCTION 142e99d7c FUN_142e99d7c body=136 status=ok
// SIG undefined FUN_142e99d7c(void)

code * FUN_142e99d7c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CocInFocusRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000282;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e99e04;
}



// FUNCTION 142e99e04 FUN_142e99e04 body=130 status=ok
// SIG undefined FUN_142e99e04(void)

undefined1 * FUN_142e99e04(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CocInfinityRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x281;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142e99e86;
}



// FUNCTION 142e99e8a FUN_142e99e8a body=445 status=ok
// SIG undefined FUN_142e99e8a(void)

void FUN_142e99e8a(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca22e18) {
    FUN_144b3d300(&DAT_14ca22e18);
    if (DAT_14ca22e18 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142e9a058;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FDOFCommonShaderParameters";
      local_68 = 0;
      local_80 = 0x10;
      local_88 = 0x27b;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca22d98,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e9a04b);
      _Init_thread_footer(&DAT_14ca22e18);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e9a058 FUN_142e9a058 body=136 status=ok
// SIG undefined FUN_142e9a058(void)

undefined1 * FUN_142e9a058(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x27c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_142e9a0e0;
}



// FUNCTION 142e9a0e4 FUN_142e9a0e4 body=44 status=ok
// SIG undefined FUN_142e9a0e4(void)

void FUN_142e9a0e4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142e9a130 FUN_142e9a130 body=96 status=ok
// SIG undefined FUN_142e9a130(void)

undefined8 FUN_142e9a130(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142e9a226();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca22f68,1);
  return uVar3;
}



// FUNCTION 142e9a190 FUN_142e9a190 body=138 status=ok
// SIG undefined FUN_142e9a190(void)

void * FUN_142e9a190(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142e9a226 FUN_142e9a226 body=445 status=ok
// SIG undefined FUN_142e9a226(void)

void FUN_142e9a226(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca22fe8) {
    FUN_144b3d300(&DAT_14ca22fe8);
    if (DAT_14ca22fe8 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142e9a3f0;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x50;
      local_88 = 0x302;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca22f68,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e9a3e4);
      _Init_thread_footer(&DAT_14ca22fe8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e9a3f0 FUN_142e9a3f0 body=144 status=ok
// SIG undefined FUN_142e9a3f0(void)

code * FUN_142e9a3f0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e9a480();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TileOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFTileClassificationUAVs";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000309;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca22ff0;
  return FUN_142e9a63e;
}



// FUNCTION 142e9a480 FUN_142e9a480 body=445 status=ok
// SIG undefined FUN_142e9a480(void)

void FUN_142e9a480(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca23070) {
    FUN_144b3d300(&DAT_14ca23070);
    if (DAT_14ca23070 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142e9a6da;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FDOFTileClassificationUAVs";
      local_68 = 0;
      local_80 = 0x10;
      local_88 = 0x265;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca22ff0,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e9a6ce);
      _Init_thread_footer(&DAT_14ca23070);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e9a63e FUN_142e9a63e body=144 status=ok
// SIG undefined FUN_142e9a63e(void)

code * FUN_142e9a63e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e9a7e8();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GatherInput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFGatherInputTextures";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000308;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca23078;
  return FUN_142e9a9a6;
}



// FUNCTION 142e9a6da FUN_142e9a6da body=136 status=ok
// SIG undefined FUN_142e9a6da(void)

code * FUN_142e9a6da(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Background";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000267;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9a762;
}



// FUNCTION 142e9a762 FUN_142e9a762 body=130 status=ok
// SIG undefined FUN_142e9a762(void)

undefined1 * FUN_142e9a762(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Foreground";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x266;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142e9a7e4;
}



// FUNCTION 142e9a7e8 FUN_142e9a7e8 body=445 status=ok
// SIG undefined FUN_142e9a7e8(void)

void FUN_142e9a7e8(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca230f8) {
    FUN_144b3d300(&DAT_14ca230f8);
    if (DAT_14ca230f8 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142e9aa42;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FDOFGatherInputTextures";
      local_68 = 0;
      local_80 = 0x10;
      local_88 = 0x202;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca23078,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e9aa36);
      _Init_thread_footer(&DAT_14ca230f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e9a9a6 FUN_142e9a9a6 body=144 status=ok
// SIG undefined FUN_142e9a9a6(void)

code * FUN_142e9a9a6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e99e8a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CommonParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFCommonShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000307;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca22d98;
  return FUN_142e9ab50;
}



// FUNCTION 142e9aa42 FUN_142e9aa42 body=136 status=ok
// SIG undefined FUN_142e9aa42(void)

code * FUN_142e9aa42(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SeparateCoc";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000204;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9aaca;
}



// FUNCTION 142e9aaca FUN_142e9aaca body=130 status=ok
// SIG undefined FUN_142e9aaca(void)

undefined1 * FUN_142e9aaca(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColor";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x203;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142e9ab4c;
}



// FUNCTION 142e9ab50 FUN_142e9ab50 body=136 status=ok
// SIG undefined FUN_142e9ab50(void)

code * FUN_142e9ab50(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxBufferUV";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000305;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9abd8;
}



// FUNCTION 142e9abd8 FUN_142e9abd8 body=136 status=ok
// SIG undefined FUN_142e9abd8(void)

code * FUN_142e9abd8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ThreadIdToBufferUV";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000304;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9ac60;
}



// FUNCTION 142e9ac60 FUN_142e9ac60 body=130 status=ok
// SIG undefined FUN_142e9ac60(void)

undefined1 * FUN_142e9ac60(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewportRect";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x303;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142e9ace2;
}



// FUNCTION 142e9ace6 FUN_142e9ace6 body=44 status=ok
// SIG undefined FUN_142e9ace6(void)

void FUN_142e9ace6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142e9ad32 FUN_142e9ad32 body=96 status=ok
// SIG undefined FUN_142e9ad32(void)

undefined8 FUN_142e9ad32(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142e9ae28();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca23248,1);
  return uVar3;
}



// FUNCTION 142e9ad92 FUN_142e9ad92 body=138 status=ok
// SIG undefined FUN_142e9ad92(void)

void * FUN_142e9ad92(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142e9ae28 FUN_142e9ae28 body=445 status=ok
// SIG undefined FUN_142e9ae28(void)

void FUN_142e9ae28(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca232c8) {
    FUN_144b3d300(&DAT_14ca232c8);
    if (DAT_14ca232c8 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142e9aff2;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x60;
      local_88 = 0x319;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca23248,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e9afe6);
      _Init_thread_footer(&DAT_14ca232c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e9aff2 FUN_142e9aff2 body=144 status=ok
// SIG undefined FUN_142e9aff2(void)

code * FUN_142e9aff2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e9a480();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TileOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFTileClassificationUAVs";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000323;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca22ff0;
  return FUN_142e9b082;
}



// FUNCTION 142e9b082 FUN_142e9b082 body=144 status=ok
// SIG undefined FUN_142e9b082(void)

code * FUN_142e9b082(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e9b112();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DilatedTileMinMax";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFTileClassificationTextures";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000322;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca232d0;
  return FUN_142e9b2d0;
}



// FUNCTION 142e9b112 FUN_142e9b112 body=445 status=ok
// SIG undefined FUN_142e9b112(void)

void FUN_142e9b112(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca23350) {
    FUN_144b3d300(&DAT_14ca23350);
    if (DAT_14ca23350 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142e9b36c;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FDOFTileClassificationTextures";
      local_68 = 0;
      local_80 = 0x10;
      local_88 = 0x260;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca232d0,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e9b360);
      _Init_thread_footer(&DAT_14ca23350);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e9b2d0 FUN_142e9b2d0 body=144 status=ok
// SIG undefined FUN_142e9b2d0(void)

code * FUN_142e9b2d0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e9b112();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TileInput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFTileClassificationTextures";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000321;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca232d0;
  return FUN_142e9b47a;
}



// FUNCTION 142e9b36c FUN_142e9b36c body=136 status=ok
// SIG undefined FUN_142e9b36c(void)

code * FUN_142e9b36c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Background";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000262;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9b3f4;
}



// FUNCTION 142e9b3f4 FUN_142e9b3f4 body=130 status=ok
// SIG undefined FUN_142e9b3f4(void)

undefined1 * FUN_142e9b3f4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Foreground";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x261;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142e9b476;
}



// FUNCTION 142e9b47a FUN_142e9b47a body=144 status=ok
// SIG undefined FUN_142e9b47a(void)

code * FUN_142e9b47a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e99e8a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CommonParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFCommonShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000320;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca22d98;
  return FUN_142e9b50a;
}



// FUNCTION 142e9b50a FUN_142e9b50a body=136 status=ok
// SIG undefined FUN_142e9b50a(void)

code * FUN_142e9b50a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BucketDistanceToCocRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c0000031e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9b592;
}



// FUNCTION 142e9b592 FUN_142e9b592 body=136 status=ok
// SIG undefined FUN_142e9b592(void)

code * FUN_142e9b592(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CocRadiusToBucketDistanceUpperBound";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000031d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9b61a;
}



// FUNCTION 142e9b61a FUN_142e9b61a body=136 status=ok
// SIG undefined FUN_142e9b61a(void)

code * FUN_142e9b61a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"fSampleOffsetMultipler";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x140000031c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9b6a2;
}



// FUNCTION 142e9b6a2 FUN_142e9b6a2 body=136 status=ok
// SIG undefined FUN_142e9b6a2(void)

code * FUN_142e9b6a2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SampleOffsetMultipler";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000031b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9b72a;
}



// FUNCTION 142e9b72a FUN_142e9b72a body=130 status=ok
// SIG undefined FUN_142e9b72a(void)

undefined1 * FUN_142e9b72a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewportRect";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x31a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142e9b7ac;
}



// FUNCTION 142e9b7b0 FUN_142e9b7b0 body=44 status=ok
// SIG undefined FUN_142e9b7b0(void)

void FUN_142e9b7b0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142e9b806 FUN_142e9b806 body=96 status=ok
// SIG undefined FUN_142e9b806(void)

undefined8 FUN_142e9b806(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142e9b8fc();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca234a0,1);
  return uVar3;
}



// FUNCTION 142e9b866 FUN_142e9b866 body=138 status=ok
// SIG undefined FUN_142e9b866(void)

void * FUN_142e9b866(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142e9b8fc FUN_142e9b8fc body=445 status=ok
// SIG undefined FUN_142e9b8fc(void)

void FUN_142e9b8fc(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca23520) {
    FUN_144b3d300(&DAT_14ca23520);
    if (DAT_14ca23520 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142e9bac6;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x60;
      local_88 = 0x337;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca234a0,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e9baba);
      _Init_thread_footer(&DAT_14ca23520);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e9bac6 FUN_142e9bac6 body=144 status=ok
// SIG undefined FUN_142e9bac6(void)

code * FUN_142e9bac6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e9bb56();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutDownsampledGatherInput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFGatherInputUAVs";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000340;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca23528;
  return FUN_142e9bd14;
}



// FUNCTION 142e9bb56 FUN_142e9bb56 body=445 status=ok
// SIG undefined FUN_142e9bb56(void)

void FUN_142e9bb56(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca235a8) {
    FUN_144b3d300(&DAT_14ca235a8);
    if (DAT_14ca235a8 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142e9bdb0;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FDOFGatherInputUAVs";
      local_68 = 0;
      local_80 = 0x10;
      local_88 = 0x20c;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca23528,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e9bda4);
      _Init_thread_footer(&DAT_14ca235a8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e9bd14 FUN_142e9bd14 body=144 status=ok
// SIG undefined FUN_142e9bd14(void)

code * FUN_142e9bd14(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e99e8a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CommonParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFCommonShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000033f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca22d98;
  return FUN_142e9bebe;
}



// FUNCTION 142e9bdb0 FUN_142e9bdb0 body=136 status=ok
// SIG undefined FUN_142e9bdb0(void)

code * FUN_142e9bdb0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SeparateCoc";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000020e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9be38;
}



// FUNCTION 142e9be38 FUN_142e9be38 body=130 status=ok
// SIG undefined FUN_142e9be38(void)

undefined1 * FUN_142e9be38(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColor";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142e9beba;
}



// FUNCTION 142e9bebe FUN_142e9bebe body=144 status=ok
// SIG undefined FUN_142e9bebe(void)

code * FUN_142e9bebe(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e9a7e8();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GatherInput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFGatherInputTextures";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000033d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca23078;
  return FUN_142e9bf4e;
}



// FUNCTION 142e9bf4e FUN_142e9bf4e body=136 status=ok
// SIG undefined FUN_142e9bf4e(void)

code * FUN_142e9bf4e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GatherInputSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000033c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9bfd6;
}



// FUNCTION 142e9bfd6 FUN_142e9bfd6 body=136 status=ok
// SIG undefined FUN_142e9bfd6(void)

code * FUN_142e9bfd6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutputCocRadiusMultiplier";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000033a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9c05e;
}



// FUNCTION 142e9c05e FUN_142e9c05e body=136 status=ok
// SIG undefined FUN_142e9c05e(void)

code * FUN_142e9c05e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxBufferUV";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000339;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9c0e6;
}



// FUNCTION 142e9c0e6 FUN_142e9c0e6 body=130 status=ok
// SIG undefined FUN_142e9c0e6(void)

undefined1 * FUN_142e9c0e6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewportRect";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x338;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142e9c168;
}



// FUNCTION 142e9c16c FUN_142e9c16c body=44 status=ok
// SIG undefined FUN_142e9c16c(void)

void FUN_142e9c16c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142e9c1a0 FUN_142e9c1a0 body=361 status=ok
// SIG undefined FUN_142e9c1a0(void)

undefined8 FUN_142e9c1a0(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  
  plVar8 = DAT_14ca27dc8;
  uVar2 = *(uint *)(param_1 + 2);
  iVar6 = ((int)uVar2 / 2) % 3;
  uVar7 = (int)uVar2 / 6 & 0x80000001;
  uVar10 = (int)uVar2 / 0xc & 0x80000001;
  uVar9 = (uint)((uVar2 & 0x80000001) != 1) * 2 + 2;
  if (((int)uVar2 / 0x30 & 0x80000001U) == 1) {
    if (uVar7 == 1) {
      return 0;
    }
    if (uVar10 == 1) {
      return 0;
    }
    if ((int)uVar9 <= iVar6) {
      return 0;
    }
  }
  else if (uVar9 < iVar6 + 2U) {
    return 0;
  }
  if (((int)uVar2 / 0x18 & 0x80000001U) == 1) {
    uVar1 = *param_1;
    if (*(code **)(*DAT_14ca27dc8 + 0xa8) == FUN_144aa0162) {
      iVar6 = FUN_140052f36(DAT_14ca27dc8);
      if (iVar6 == 0) {
        plVar8 = plVar8 + 0xb;
      }
      else {
        plVar8 = (longlong *)plVar8[10];
      }
      cVar3 = (char)*plVar8;
    }
    else {
      cVar3 = (**(code **)(*DAT_14ca27dc8 + 0xa8))(DAT_14ca27dc8);
    }
    if (cVar3 != '\0') {
      return 0;
    }
    if ((*(byte *)((longlong)&DAT_14ca814c8 + (ulonglong)uVar1 * 0x3c + 1) & 8) == 0) {
      return 0;
    }
  }
  lVar4 = (ulonglong)*param_1 * 0x3c;
  if ((uVar7 == 1 || uVar10 == 1) &&
     ((*(uint *)((longlong)&DAT_14ca814d0 + lVar4 + 4) & 0x1000) == 0)) {
    return 0;
  }
  uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),
                   *(undefined1 *)((longlong)&DAT_14ca814c8 + lVar4 + 1)) & 0xffffffffffffff04;
  return CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 >> 2);
}



// FUNCTION 142e9c30a FUN_142e9c30a body=96 status=ok
// SIG undefined FUN_142e9c30a(void)

undefined8 FUN_142e9c30a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142e9c400();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca236f8,1);
  return uVar3;
}



// FUNCTION 142e9c36a FUN_142e9c36a body=138 status=ok
// SIG undefined FUN_142e9c36a(void)

void * FUN_142e9c36a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142e9c400 FUN_142e9c400 body=445 status=ok
// SIG undefined FUN_142e9c400(void)

void FUN_142e9c400(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca23778) {
    FUN_144b3d300(&DAT_14ca23778);
    if (DAT_14ca23778 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142e9c5ca;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0xf0;
      local_88 = 0x38c;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca236f8,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e9c5be);
      _Init_thread_footer(&DAT_14ca23778);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e9c5ca FUN_142e9c5ca body=136 status=ok
// SIG undefined FUN_142e9c5ca(void)

code * FUN_142e9c5ca(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutBackgroundScatterDrawList";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe0000003a1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9c652;
}



// FUNCTION 142e9c652 FUN_142e9c652 body=136 status=ok
// SIG undefined FUN_142e9c652(void)

code * FUN_142e9c652(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutForegroundScatterDrawList";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd8000003a0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9c6da;
}



// FUNCTION 142e9c6da FUN_142e9c6da body=136 status=ok
// SIG undefined FUN_142e9c6da(void)

code * FUN_142e9c6da(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutScatterDrawIndirectParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd00000039f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9c762;
}



// FUNCTION 142e9c762 FUN_142e9c762 body=144 status=ok
// SIG undefined FUN_142e9c762(void)

code * FUN_142e9c762(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e9bb56();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutputMips";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFGatherInputUAVs";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x900000039e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 4;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca23528;
  return FUN_142e9c7f2;
}



// FUNCTION 142e9c7f2 FUN_142e9c7f2 body=144 status=ok
// SIG undefined FUN_142e9c7f2(void)

code * FUN_142e9c7f2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e9a7e8();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"QuarterResGatherInput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFGatherInputTextures";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000039c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca23078;
  return FUN_142e9c882;
}



// FUNCTION 142e9c882 FUN_142e9c882 body=136 status=ok
// SIG undefined FUN_142e9c882(void)

code * FUN_142e9c882(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"QuarterResGatherInputSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x700000039b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9c90a;
}



// FUNCTION 142e9c90a FUN_142e9c90a body=581 status=ok
// SIG undefined FUN_142e9c90a(void)

code * FUN_142e9c90a(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca23800) {
    FUN_144b3d300(&DAT_14ca23800);
    if (DAT_14ca23800 == -1) {
      uVar12 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar9 = FUN_142e9cbe4;
      do {
        pcVar9 = (code *)(*pcVar9)(uVar12,&local_58);
        uVar12 = extraout_XMM0_Da;
      } while (pcVar9 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar11 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar11 = lVar11 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar4 = *(undefined8 *)(local_58 + lVar11);
          uVar5 = ((undefined8 *)(local_58 + lVar11))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar11);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar11);
          uVar8 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar8;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          *(undefined8 *)(local_58 + lVar10) = uVar4;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar5;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar11);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar11);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar11) = local_48;
          ((undefined8 *)(local_58 + lVar11))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FDOFGatherInputSRVs";
      local_68 = 0;
      local_80 = 0x10;
      local_88 = 0x207;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca23780,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e9cbd8);
      _Init_thread_footer(&DAT_14ca23800);
    }
  }
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_140870184(param_2,iVar3);
  }
  lVar11 = *param_2;
  lVar10 = (longlong)iVar3 * 0x30;
  *(wchar_t **)(lVar11 + lVar10) = L"GatherInput";
  *(wchar_t **)(lVar11 + 8 + lVar10) = L"FDOFGatherInputSRVs";
  *(undefined8 *)(lVar11 + 0x10 + lVar10) = 0x6000000399;
  *(undefined2 *)(lVar11 + 0x18 + lVar10) = 0x14;
  *(undefined1 **)(lVar11 + 0x1c + lVar10) = &DAT_100000001;
  *(undefined4 *)(lVar11 + 0x24 + lVar10) = 0;
  *(undefined **)(lVar11 + 0x28 + lVar10) = &DAT_14ca23780;
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return FUN_142e9cb50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e9cb50 FUN_142e9cb50 body=136 status=ok
// SIG undefined FUN_142e9cb50(void)

code * FUN_142e9cb50(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GatherInputSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000398;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9ccf2;
}



// FUNCTION 142e9cbe4 FUN_142e9cbe4 body=136 status=ok
// SIG undefined FUN_142e9cbe4(void)

code * FUN_142e9cbe4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SeparateCoc";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000209;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9cc6c;
}



// FUNCTION 142e9cc6c FUN_142e9cc6c body=130 status=ok
// SIG undefined FUN_142e9cc6c(void)

undefined1 * FUN_142e9cc6c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColor";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x208;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142e9ccee;
}



// FUNCTION 142e9ccf2 FUN_142e9ccf2 body=144 status=ok
// SIG undefined FUN_142e9ccf2(void)

code * FUN_142e9ccf2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e99e8a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CommonParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFCommonShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000396;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca22d98;
  return FUN_142e9cd82;
}



// FUNCTION 142e9cd82 FUN_142e9cd82 body=136 status=ok
// SIG undefined FUN_142e9cd82(void)

code * FUN_142e9cd82(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000395;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9ce0a;
}



// FUNCTION 142e9ce0a FUN_142e9ce0a body=136 status=ok
// SIG undefined FUN_142e9ce0a(void)

code * FUN_142e9ce0a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CocSqueeze";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000393;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9ce92;
}



// FUNCTION 142e9ce92 FUN_142e9ce92 body=136 status=ok
// SIG undefined FUN_142e9ce92(void)

code * FUN_142e9ce92(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NeighborCompareMaxColor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2400000392;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9cf1a;
}



// FUNCTION 142e9cf1a FUN_142e9cf1a body=136 status=ok
// SIG undefined FUN_142e9cf1a(void)

code * FUN_142e9cf1a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MinScatteringCocRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000391;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9cfa2;
}



// FUNCTION 142e9cfa2 FUN_142e9cfa2 body=136 status=ok
// SIG undefined FUN_142e9cfa2(void)

code * FUN_142e9cfa2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PreProcessingToProcessingCocRadiusFactor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c00000390;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9d02a;
}



// FUNCTION 142e9d02a FUN_142e9d02a body=136 status=ok
// SIG undefined FUN_142e9d02a(void)

code * FUN_142e9d02a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxScatteringGroupCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000038f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9d0b2;
}



// FUNCTION 142e9d0b2 FUN_142e9d0b2 body=136 status=ok
// SIG undefined FUN_142e9d0b2(void)

code * FUN_142e9d0b2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxInputBufferUV";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000038e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9d13a;
}



// FUNCTION 142e9d13a FUN_142e9d13a body=130 status=ok
// SIG undefined FUN_142e9d13a(void)

undefined1 * FUN_142e9d13a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewportRect";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x38d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142e9d1bc;
}



// FUNCTION 142e9d1c0 FUN_142e9d1c0 body=44 status=ok
// SIG undefined FUN_142e9d1c0(void)

void FUN_142e9d1c0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142e9d242 FUN_142e9d242 body=96 status=ok
// SIG undefined FUN_142e9d242(void)

undefined8 FUN_142e9d242(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142e9d338();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca23950,1);
  return uVar3;
}



// FUNCTION 142e9d2a2 FUN_142e9d2a2 body=138 status=ok
// SIG undefined FUN_142e9d2a2(void)

void * FUN_142e9d2a2(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142e9d338 FUN_142e9d338 body=445 status=ok
// SIG undefined FUN_142e9d338(void)

void FUN_142e9d338(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca239d0) {
    FUN_144b3d300(&DAT_14ca239d0);
    if (DAT_14ca239d0 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142e9d502;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x20;
      local_88 = 0x3c1;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca23950,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e9d4f6);
      _Init_thread_footer(&DAT_14ca239d0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e9d502 FUN_142e9d502 body=136 status=ok
// SIG undefined FUN_142e9d502(void)

code * FUN_142e9d502(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutBackgroundScatterDrawList";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000003c6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9d58a;
}



// FUNCTION 142e9d58a FUN_142e9d58a body=136 status=ok
// SIG undefined FUN_142e9d58a(void)

code * FUN_142e9d58a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutForegroundScatterDrawList";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000003c5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9d612;
}



// FUNCTION 142e9d612 FUN_142e9d612 body=136 status=ok
// SIG undefined FUN_142e9d612(void)

code * FUN_142e9d612(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutScatterDrawIndirectParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000003c4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9d69a;
}



// FUNCTION 142e9d69a FUN_142e9d69a body=130 status=ok
// SIG undefined FUN_142e9d69a(void)

undefined1 * FUN_142e9d69a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxScatteringGroupCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3c2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142e9d71c;
}



// FUNCTION 142e9d720 FUN_142e9d720 body=44 status=ok
// SIG undefined FUN_142e9d720(void)

void FUN_142e9d720(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142e9d76c FUN_142e9d76c body=96 status=ok
// SIG undefined FUN_142e9d76c(void)

undefined8 FUN_142e9d76c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142e9d862();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca23b20,1);
  return uVar3;
}



// FUNCTION 142e9d7cc FUN_142e9d7cc body=138 status=ok
// SIG undefined FUN_142e9d7cc(void)

void * FUN_142e9d7cc(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142e9d862 FUN_142e9d862 body=445 status=ok
// SIG undefined FUN_142e9d862(void)

void FUN_142e9d862(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca23ba0) {
    FUN_144b3d300(&DAT_14ca23ba0);
    if (DAT_14ca23ba0 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142e9da2c;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x30;
      local_88 = 0x3d4;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca23b20,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e9da20);
      _Init_thread_footer(&DAT_14ca23ba0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e9da2c FUN_142e9da2c body=136 status=ok
// SIG undefined FUN_142e9da2c(void)

code * FUN_142e9da2c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BokehLUTOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000003de;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9dab4;
}



// FUNCTION 142e9dab4 FUN_142e9dab4 body=136 status=ok
// SIG undefined FUN_142e9dab4(void)

code * FUN_142e9dab4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CocInvSqueeze";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c000003dc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9db3c;
}



// FUNCTION 142e9db3c FUN_142e9db3c body=136 status=ok
// SIG undefined FUN_142e9db3c(void)

code * FUN_142e9db3c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CocSqueeze";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000003db;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9dbc4;
}



// FUNCTION 142e9dbc4 FUN_142e9dbc4 body=136 status=ok
// SIG undefined FUN_142e9dbc4(void)

code * FUN_142e9dbc4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DiaphragmBladeCenterOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14000003da;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9dc4c;
}



// FUNCTION 142e9dc4c FUN_142e9dc4c body=136 status=ok
// SIG undefined FUN_142e9dc4c(void)

code * FUN_142e9dc4c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DiaphragmBladeRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000003d9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9dcd4;
}



// FUNCTION 142e9dcd4 FUN_142e9dcd4 body=136 status=ok
// SIG undefined FUN_142e9dcd4(void)

code * FUN_142e9dcd4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CocRadiusToIncircleRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000003d8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9dd5c;
}



// FUNCTION 142e9dd5c FUN_142e9dd5c body=136 status=ok
// SIG undefined FUN_142e9dd5c(void)

code * FUN_142e9dd5c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CocRadiusToCircumscribedRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000003d7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9dde4;
}



// FUNCTION 142e9dde4 FUN_142e9dde4 body=136 status=ok
// SIG undefined FUN_142e9dde4(void)

code * FUN_142e9dde4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DiaphragmRotation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000003d6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9de6c;
}



// FUNCTION 142e9de6c FUN_142e9de6c body=130 status=ok
// SIG undefined FUN_142e9de6c(void)

undefined1 * FUN_142e9de6c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BladeCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3d5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142e9deee;
}



// FUNCTION 142e9def2 FUN_142e9def2 body=44 status=ok
// SIG undefined FUN_142e9def2(void)

void FUN_142e9def2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142e9df26 FUN_142e9df26 body=617 status=ok
// SIG undefined FUN_142e9df26(void)

/* WARNING: Type propagation algorithm not settling */

uint FUN_142e9df26(ushort *param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  uint uVar11;
  
  plVar10 = DAT_14ca27dc8;
  iVar1 = *(int *)(param_1 + 2);
  iVar7 = (iVar1 / 0x1e) % 3;
  iVar5 = iVar1 / 0x5a + (iVar1 >> 0x1f);
  iVar4 = -(iVar1 >> 0x1f);
  uVar8 = iVar5 + iVar4;
  uVar2 = iVar5 + iVar4 + 3;
  if (-1 < (int)uVar8) {
    uVar2 = uVar8;
  }
  if (iVar7 == 1) {
    return 0;
  }
  iVar4 = (iVar1 / 10) % 3;
  uVar6 = (ulonglong)*param_1;
  if (5 - ((*(byte *)(&DAT_14ca814c8 + uVar6 * 0xf) & 4) == 0) < iVar4 + 3U) {
    return 0;
  }
  uVar11 = iVar1 / 0x168 & 0x80000001;
  if (uVar11 == 1) {
    if (*(code **)(*DAT_14ca27dc8 + 0xa8) == FUN_144aa0162) {
      iVar5 = FUN_140052f36(DAT_14ca27dc8);
      if (iVar5 == 0) {
        plVar10 = plVar10 + 0xb;
      }
      else {
        plVar10 = (longlong *)plVar10[10];
      }
      cVar3 = (char)*plVar10;
    }
    else {
      cVar3 = (**(code **)(*DAT_14ca27dc8 + 0xa8))(DAT_14ca27dc8);
    }
    if (cVar3 != '\0') {
      return 0;
    }
    if ((*(byte *)((longlong)&DAT_14ca814c8 + uVar6 * 0x3c + 1) & 8) == 0) {
      return 0;
    }
    uVar6 = (ulonglong)*param_1;
  }
  uVar9 = uVar8 - (uVar2 & 0xfffffffc);
  if ((uVar9 == 2) && ((*(uint *)((longlong)&DAT_14ca814d0 + uVar6 * 0x3c + 4) & 0x1000) == 0)) {
    return 0;
  }
  if ((iVar7 != 0) && (((&DAT_14ca814c8)[uVar6 * 0xf] & 4) == 0)) {
    return 0;
  }
  switch((iVar1 / 2) % 5) {
  case 0:
    if (uVar9 == 2) {
      return 0;
    }
    break;
  case 1:
    goto joined_r0x000142e9e118;
  case 2:
    if (uVar9 == 1) {
      return 0;
    }
    break;
  case 3:
    goto LAB_142e9e0aa;
  case 4:
    iVar7 = iVar4;
joined_r0x000142e9e118:
    if (((uVar9 < 4) && (uVar9 != 1)) || (iVar7 != 0 || uVar11 == 1)) {
LAB_142e9e0aa:
      return 0;
    }
  default:
    goto switchD_142e9e0fd_default;
  }
  uVar9 = 0;
  if (uVar8 == (uVar2 & 0xfffffffc) || uVar11 != 1) {
switchD_142e9e0fd_default:
    uVar9 = (uint)(&DAT_14ca814c8)[uVar6 * 0xf] >> 10 & 1;
  }
  return uVar9;
}



// FUNCTION 142e9e190 FUN_142e9e190 body=96 status=ok
// SIG undefined FUN_142e9e190(void)

undefined8 FUN_142e9e190(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142e9e286();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca23cf0,1);
  return uVar3;
}



// FUNCTION 142e9e1f0 FUN_142e9e1f0 body=138 status=ok
// SIG undefined FUN_142e9e1f0(void)

void * FUN_142e9e1f0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142e9e286 FUN_142e9e286 body=445 status=ok
// SIG undefined FUN_142e9e286(void)

void FUN_142e9e286(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca23d70) {
    FUN_144b3d300(&DAT_14ca23d70);
    if (DAT_14ca23d70 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142e9e450;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0xf0;
      local_88 = 0x469;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca23cf0,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e9e444);
      _Init_thread_footer(&DAT_14ca23d70);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e9e450 FUN_142e9e450 body=136 status=ok
// SIG undefined FUN_142e9e450(void)

code * FUN_142e9e450(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DebugOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe800000483;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9e4d8;
}



// FUNCTION 142e9e4d8 FUN_142e9e4d8 body=136 status=ok
// SIG undefined FUN_142e9e4d8(void)

code * FUN_142e9e4d8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScatterOcclusionOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe000000482;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9e560;
}



// FUNCTION 142e9e560 FUN_142e9e560 body=144 status=ok
// SIG undefined FUN_142e9e560(void)

code * FUN_142e9e560(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e9e5f0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ConvolutionOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFConvolutionUAVs";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd000000481;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca23d78;
  return FUN_142e9e7ae;
}



// FUNCTION 142e9e5f0 FUN_142e9e5f0 body=445 status=ok
// SIG undefined FUN_142e9e5f0(void)

void FUN_142e9e5f0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca23df8) {
    FUN_144b3d300(&DAT_14ca23df8);
    if (DAT_14ca23df8 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142e9e842;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FDOFConvolutionUAVs";
      local_68 = 0;
      local_80 = 0x10;
      local_88 = 0x23e;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca23d78,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e9e836);
      _Init_thread_footer(&DAT_14ca23df8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e9e7ae FUN_142e9e7ae body=136 status=ok
// SIG undefined FUN_142e9e7ae(void)

code * FUN_142e9e7ae(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BokehLUT";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000047f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9e950;
}



// FUNCTION 142e9e842 FUN_142e9e842 body=136 status=ok
// SIG undefined FUN_142e9e842(void)

code * FUN_142e9e842(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SeparateAlpha";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000240;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9e8ca;
}



// FUNCTION 142e9e8ca FUN_142e9e8ca body=130 status=ok
// SIG undefined FUN_142e9e8ca(void)

undefined1 * FUN_142e9e8ca(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColor";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x23f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142e9e94c;
}



// FUNCTION 142e9e950 FUN_142e9e950 body=144 status=ok
// SIG undefined FUN_142e9e950(void)

code * FUN_142e9e950(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e9b112();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TileClassification";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFTileClassificationTextures";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb00000047e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca232d0;
  return FUN_142e9e9e0;
}



// FUNCTION 142e9e9e0 FUN_142e9e9e0 body=144 status=ok
// SIG undefined FUN_142e9e9e0(void)

code * FUN_142e9e9e0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e9a7e8();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GatherInput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFGatherInputTextures";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa00000047c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca23078;
  return FUN_142e9ea70;
}



// FUNCTION 142e9ea70 FUN_142e9ea70 body=136 status=ok
// SIG undefined FUN_142e9ea70(void)

code * FUN_142e9ea70(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GatherInputViewportSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x900000047b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9eaf8;
}



// FUNCTION 142e9eaf8 FUN_142e9eaf8 body=136 status=ok
// SIG undefined FUN_142e9eaf8(void)

code * FUN_142e9eaf8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GatherInputSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000047a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9eb80;
}



// FUNCTION 142e9eb80 FUN_142e9eb80 body=144 status=ok
// SIG undefined FUN_142e9eb80(void)

code * FUN_142e9eb80(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e99e8a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CommonParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFCommonShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000478;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca22d98;
  return FUN_142e9ec10;
}



// FUNCTION 142e9ec10 FUN_142e9ec10 body=144 status=ok
// SIG undefined FUN_142e9ec10(void)

code * FUN_142e9ec10(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e9eca0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TileDecisionParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFTileDecisionParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000477;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca23e00;
  return FUN_142e9ee5e;
}



// FUNCTION 142e9eca0 FUN_142e9eca0 body=445 status=ok
// SIG undefined FUN_142e9eca0(void)

void FUN_142e9eca0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca23e80) {
    FUN_144b3d300(&DAT_14ca23e80);
    if (DAT_14ca23e80 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142e9eef2;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FDOFTileDecisionParameters";
      local_68 = 0;
      local_80 = 0x10;
      local_88 = 0x2ad;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca23e00,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e9eee6);
      _Init_thread_footer(&DAT_14ca23e80);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e9ee5e FUN_142e9ee5e body=136 status=ok
// SIG undefined FUN_142e9ee5e(void)

code * FUN_142e9ee5e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CocInvSqueeze";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5c00000475;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9f000;
}



// FUNCTION 142e9eef2 FUN_142e9eef2 body=136 status=ok
// SIG undefined FUN_142e9eef2(void)

code * FUN_142e9eef2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SlightOutOfFocusRadiusBoundary";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000002af;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9ef7a;
}



// FUNCTION 142e9ef7a FUN_142e9ef7a body=130 status=ok
// SIG undefined FUN_142e9ef7a(void)

undefined1 * FUN_142e9ef7a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MinGatherRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2ae;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142e9effc;
}



// FUNCTION 142e9f000 FUN_142e9f000 body=136 status=ok
// SIG undefined FUN_142e9f000(void)

code * FUN_142e9f000(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CocSqueeze";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000474;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9f088;
}



// FUNCTION 142e9f088 FUN_142e9f088 body=136 status=ok
// SIG undefined FUN_142e9f088(void)

code * FUN_142e9f088(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxRecombineAbsCocRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5400000473;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9f110;
}



// FUNCTION 142e9f110 FUN_142e9f110 body=136 status=ok
// SIG undefined FUN_142e9f110(void)

code * FUN_142e9f110(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MipBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000472;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9f198;
}



// FUNCTION 142e9f198 FUN_142e9f198 body=136 status=ok
// SIG undefined FUN_142e9f198(void)

code * FUN_142e9f198(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputBufferUVToOutputPixel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000471;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9f220;
}



// FUNCTION 142e9f220 FUN_142e9f220 body=136 status=ok
// SIG undefined FUN_142e9f220(void)

code * FUN_142e9f220(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ConsiderAbsCocRadiusAffineTransformation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000470;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9f2a8;
}



// FUNCTION 142e9f2a8 FUN_142e9f2a8 body=136 status=ok
// SIG undefined FUN_142e9f2a8(void)

code * FUN_142e9f2a8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ConsiderCocRadiusAffineTransformation1";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000046f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9f330;
}



// FUNCTION 142e9f330 FUN_142e9f330 body=136 status=ok
// SIG undefined FUN_142e9f330(void)

code * FUN_142e9f330(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ConsiderCocRadiusAffineTransformation0";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000046e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9f3b8;
}



// FUNCTION 142e9f3b8 FUN_142e9f3b8 body=136 status=ok
// SIG undefined FUN_142e9f3b8(void)

code * FUN_142e9f3b8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DispatchThreadIdToInputBufferUV";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000046d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9f440;
}



// FUNCTION 142e9f440 FUN_142e9f440 body=136 status=ok
// SIG undefined FUN_142e9f440(void)

code * FUN_142e9f440(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TemporalJitterPixels";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000046c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9f4c8;
}



// FUNCTION 142e9f4c8 FUN_142e9f4c8 body=136 status=ok
// SIG undefined FUN_142e9f4c8(void)

code * FUN_142e9f4c8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewportRect";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000046b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9f550;
}



// FUNCTION 142e9f550 FUN_142e9f550 body=130 status=ok
// SIG undefined FUN_142e9f550(void)

undefined1 * FUN_142e9f550(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewportSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x46a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142e9f5d2;
}



// FUNCTION 142e9f5d6 FUN_142e9f5d6 body=44 status=ok
// SIG undefined FUN_142e9f5d6(void)

void FUN_142e9f5d6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142e9f6c8 FUN_142e9f6c8 body=96 status=ok
// SIG undefined FUN_142e9f6c8(void)

undefined8 FUN_142e9f6c8(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142e9f7be();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca23fd0,1);
  return uVar3;
}



// FUNCTION 142e9f728 FUN_142e9f728 body=138 status=ok
// SIG undefined FUN_142e9f728(void)

void * FUN_142e9f728(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142e9f7be FUN_142e9f7be body=445 status=ok
// SIG undefined FUN_142e9f7be(void)

void FUN_142e9f7be(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca24050) {
    FUN_144b3d300(&DAT_14ca24050);
    if (DAT_14ca24050 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142e9f988;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x90;
      local_88 = 0x4a7;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca23fd0,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e9f97c);
      _Init_thread_footer(&DAT_14ca24050);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e9f988 FUN_142e9f988 body=136 status=ok
// SIG undefined FUN_142e9f988(void)

code * FUN_142e9f988(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DebugOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000004b3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9fa10;
}



// FUNCTION 142e9fa10 FUN_142e9fa10 body=144 status=ok
// SIG undefined FUN_142e9fa10(void)

code * FUN_142e9fa10(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e9e5f0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ConvolutionOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFConvolutionUAVs";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70000004b2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca23d78;
  return FUN_142e9faa0;
}



// FUNCTION 142e9faa0 FUN_142e9faa0 body=144 status=ok
// SIG undefined FUN_142e9faa0(void)

code * FUN_142e9faa0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e9b112();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TileClassification";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFTileClassificationTextures";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000004b1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca232d0;
  return FUN_142e9fb30;
}



// FUNCTION 142e9fb30 FUN_142e9fb30 body=144 status=ok
// SIG undefined FUN_142e9fb30(void)

code * FUN_142e9fb30(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e9fbc0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ConvolutionInput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFConvolutionTextures";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000004af;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca24058;
  return FUN_142e9fd7e;
}



// FUNCTION 142e9fbc0 FUN_142e9fbc0 body=445 status=ok
// SIG undefined FUN_142e9fbc0(void)

void FUN_142e9fbc0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca240d8) {
    FUN_144b3d300(&DAT_14ca240d8);
    if (DAT_14ca240d8 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142e9fe12;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FDOFConvolutionTextures";
      local_68 = 0;
      local_80 = 0x10;
      local_88 = 0x239;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca24058,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e9fe06);
      _Init_thread_footer(&DAT_14ca240d8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142e9fd7e FUN_142e9fd7e body=136 status=ok
// SIG undefined FUN_142e9fd7e(void)

code * FUN_142e9fd7e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ConvolutionInputSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000004ae;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9ff20;
}



// FUNCTION 142e9fe12 FUN_142e9fe12 body=136 status=ok
// SIG undefined FUN_142e9fe12(void)

code * FUN_142e9fe12(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SeparateAlpha";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000023b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142e9fe9a;
}



// FUNCTION 142e9fe9a FUN_142e9fe9a body=130 status=ok
// SIG undefined FUN_142e9fe9a(void)

undefined1 * FUN_142e9fe9a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColor";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x23a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142e9ff1c;
}



// FUNCTION 142e9ff20 FUN_142e9ff20 body=144 status=ok
// SIG undefined FUN_142e9ff20(void)

code * FUN_142e9ff20(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e99e8a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CommonParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFCommonShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000004ac;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca22d98;
  return FUN_142e9ffb0;
}



// FUNCTION 142e9ffb0 FUN_142e9ffb0 body=144 status=ok
// SIG undefined FUN_142e9ffb0(void)

code * FUN_142e9ffb0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e9eca0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TileDecisionParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFTileDecisionParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000004ab;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca23e00;
  return FUN_142ea0040;
}



// FUNCTION 142ea0040 FUN_142ea0040 body=136 status=ok
// SIG undefined FUN_142ea0040(void)

code * FUN_142ea0040(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxInputBufferUV";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000004a9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ea00c8;
}



// FUNCTION 142ea00c8 FUN_142ea00c8 body=130 status=ok
// SIG undefined FUN_142ea00c8(void)

undefined1 * FUN_142ea00c8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewportRect";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4a8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142ea014a;
}



// FUNCTION 142ea014e FUN_142ea014e body=44 status=ok
// SIG undefined FUN_142ea014e(void)

void FUN_142ea014e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142ea01a4 FUN_142ea01a4 body=96 status=ok
// SIG undefined FUN_142ea01a4(void)

undefined8 FUN_142ea01a4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142ea029a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca24228,1);
  return uVar3;
}



// FUNCTION 142ea0204 FUN_142ea0204 body=138 status=ok
// SIG undefined FUN_142ea0204(void)

void * FUN_142ea0204(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142ea029a FUN_142ea029a body=445 status=ok
// SIG undefined FUN_142ea029a(void)

void FUN_142ea029a(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca242a8) {
    FUN_144b3d300(&DAT_14ca242a8);
    if (DAT_14ca242a8 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142ea0464;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FDOFHybridScatterParameters";
      local_68 = 0;
      local_80 = 0x170;
      local_88 = 0x4b7;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca24228,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ea0458);
      _Init_thread_footer(&DAT_14ca242a8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ea0464 FUN_142ea0464 body=136 status=ok
// SIG undefined FUN_142ea0464(void)

code * FUN_142ea0464(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70000004c8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ea04ec;
}



// FUNCTION 142ea04ec FUN_142ea04ec body=136 status=ok
// SIG undefined FUN_142ea04ec(void)

code * FUN_142ea04ec(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectDrawParameter";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x58000004c6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xf;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ea0574;
}



// FUNCTION 142ea0574 FUN_142ea0574 body=136 status=ok
// SIG undefined FUN_142ea0574(void)

code * FUN_142ea0574(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScatterDrawList";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000004c5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ea05fc;
}



// FUNCTION 142ea05fc FUN_142ea05fc body=136 status=ok
// SIG undefined FUN_142ea05fc(void)

code * FUN_142ea05fc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BokehLUT";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000004c3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ea0684;
}



// FUNCTION 142ea0684 FUN_142ea0684 body=136 status=ok
// SIG undefined FUN_142ea0684(void)

code * FUN_142ea0684(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScatterOcclusion";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000004c1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ea070c;
}



// FUNCTION 142ea070c FUN_142ea070c body=136 status=ok
// SIG undefined FUN_142ea070c(void)

code * FUN_142ea070c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScatterOcclusionSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000004c0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ea0794;
}



// FUNCTION 142ea0794 FUN_142ea0794 body=144 status=ok
// SIG undefined FUN_142ea0794(void)

code * FUN_142ea0794(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142e99e8a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CommonParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDOFCommonShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000004be;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca22d98;
  return FUN_142ea0824;
}



// FUNCTION 142ea0824 FUN_142ea0824 body=136 status=ok
// SIG undefined FUN_142ea0824(void)

code * FUN_142ea0824(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CocInvSqueeze";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c000004bc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ea08ac;
}



// FUNCTION 142ea08ac FUN_142ea08ac body=136 status=ok
// SIG undefined FUN_142ea08ac(void)

code * FUN_142ea08ac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CocSqueeze";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000004bb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ea0934;
}



// FUNCTION 142ea0934 FUN_142ea0934 body=136 status=ok
// SIG undefined FUN_142ea0934(void)

code * FUN_142ea0934(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScatteringScaling";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14000004ba;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ea09bc;
}



// FUNCTION 142ea09bc FUN_142ea09bc body=136 status=ok
// SIG undefined FUN_142ea09bc(void)

code * FUN_142ea09bc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CocRadiusToCircumscribedRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000004b9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ea0a44;
}



// FUNCTION 142ea0a44 FUN_142ea0a44 body=130 status=ok
// SIG undefined FUN_142ea0a44(void)

undefined1 * FUN_142ea0a44(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewportSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4b8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142ea0ac6;
}



// FUNCTION 142ea0aca FUN_142ea0aca body=44 status=ok
// SIG undefined FUN_142ea0aca(void)

void FUN_142ea0aca(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142ea0b6e FUN_142ea0b6e body=96 status=ok
// SIG undefined FUN_142ea0b6e(void)

undefined8 FUN_142ea0b6e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142ea029a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca24228,1);
  return uVar3;
}



// FUNCTION 142ea0bce FUN_142ea0bce body=138 status=ok
// SIG undefined FUN_142ea0bce(void)

void * FUN_142ea0bce(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142ea0c64 FUN_142ea0c64 body=44 status=ok
// SIG undefined FUN_142ea0c64(void)

void FUN_142ea0c64(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}


