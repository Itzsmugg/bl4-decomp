// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1404aad12 FUN_1404aad12 body=7211 status=ok
// SIG undefined FUN_1404aad12(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404aad12(longlong param_1,double *param_2,code *param_3,double *param_4,double param_5,
                  int *param_6)

{
  undefined8 *puVar1;
  bool bVar2;
  code *pcVar3;
  code ***pppcVar4;
  undefined1 *puVar5;
  code *pcVar6;
  uint uVar7;
  longlong lVar8;
  double *pdVar9;
  ulonglong uVar10;
  code **ppcVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  double dVar15;
  code *pcVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  code *pcVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  ulonglong uVar35;
  undefined8 *puVar36;
  undefined4 uVar37;
  undefined1 auStack_5e8 [32];
  code **local_5c8;
  code **local_5c0;
  code **local_5b8;
  double *local_5b0;
  code **local_5a8;
  undefined8 *local_5a0;
  code **local_598;
  code **local_590;
  double local_580;
  code *local_578;
  code **local_570;
  code **local_568;
  undefined1 *local_560;
  undefined1 local_558 [16];
  undefined1 local_548 [16];
  undefined1 local_538 [16];
  double local_528;
  undefined8 uStack_520;
  undefined1 local_518 [16];
  undefined1 local_508 [16];
  undefined8 local_4f8;
  double dStack_4f0;
  undefined1 local_4e8 [16];
  undefined1 local_4d8 [16];
  double local_4c8;
  ulonglong uStack_4c0;
  code *local_4b8;
  undefined8 uStack_4b0;
  double local_4a8;
  undefined8 uStack_4a0;
  undefined1 local_498 [16];
  double local_488;
  double dStack_480;
  undefined1 local_478 [16];
  double local_468;
  double dStack_460;
  double local_458;
  double dStack_450;
  code *local_448;
  ulonglong uStack_440;
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  double local_3e8;
  double local_3e0;
  double local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  code *local_3b8;
  double *local_3b0;
  undefined1 local_3a8 [8];
  code *local_3a0;
  undefined1 local_398 [16];
  double local_388;
  double local_380;
  double dStack_378;
  double local_370;
  undefined8 local_368;
  code *local_358;
  undefined8 *puStack_350;
  double local_348;
  code *local_338;
  code ***pppcStack_330;
  double local_328;
  double local_320;
  double dStack_318;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  code *local_2f0;
  longlong local_2e8;
  undefined8 uStack_2e0;
  longlong local_2d8;
  undefined8 uStack_2d0;
  code *local_2c8;
  double dStack_2c0;
  double local_2b8;
  undefined8 local_2b0;
  code **local_2a8;
  undefined1 *local_2a0;
  code **local_298;
  code **ppcStack_290;
  undefined1 *local_288;
  code *local_280;
  code *local_278;
  undefined1 local_270 [16];
  double local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  code *local_238;
  double adStack_230 [11];
  code *local_1d8;
  double adStack_1d0 [5];
  undefined8 local_1a8;
  code *local_178;
  double adStack_170 [11];
  double local_118 [4];
  uint local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_5e8;
  dVar26 = -*param_4;
  dStack_4f0 = -param_4[1];
  dVar15 = param_4[2] * -1.0;
  dVar17 = param_4[3] * 1.0;
  dVar34 = *param_2;
  dVar20 = param_2[1];
  dVar22 = param_2[2];
  dVar25 = param_2[3];
  dVar23 = param_4[1];
  dVar21 = param_4[1];
  dVar32 = dVar20 * dVar15 * -1.0 + ((dVar34 * dVar17 - *param_4 * dVar25 * 1.0) - dVar22 * dVar23);
  dVar27 = dVar34 * dVar15 * 1.0 + ((dVar20 * dVar17 - *param_4 * dVar22 * -1.0) - dVar25 * dVar21);
  dVar24 = param_2[6] - param_4[6];
  dVar23 = dVar25 * dVar15 * 1.0 + dVar23 * dVar34 + (dVar17 * dVar22 - *param_4 * dVar20 * 1.0);
  dVar34 = dVar22 * dVar15 * -1.0 + dVar21 * dVar20 + (dVar17 * dVar25 - *param_4 * dVar34 * -1.0);
  dVar20 = param_2[4] - param_4[4];
  dVar21 = param_2[5] - param_4[5];
  dVar25 = dStack_4f0 * dVar24 - dVar21 * dVar15;
  dVar25 = dVar25 + dVar25;
  dVar30 = dVar26 * dVar21 - dVar20 * dStack_4f0;
  dVar30 = dVar30 + dVar30;
  dVar22 = dVar15 * dVar20 - dVar24 * dVar26;
  dVar22 = dVar22 + dVar22;
  local_4f8 = (dVar26 * dVar22 - dVar25 * dStack_4f0) + dVar17 * dVar30 + dVar24;
  dVar21 = (dVar15 * dVar25 - dVar30 * dVar26) + dVar17 * dVar22 + dVar21;
  dVar20 = (dStack_4f0 * dVar30 - dVar22 * dVar15) + dVar17 * dVar25 + dVar20;
  dVar22 = *(double *)(param_1 + 0x38);
  dVar25 = *(double *)(param_1 + 0x40);
  dVar24 = dVar25 * dVar32 - dVar27 * dVar22;
  dVar28 = *(double *)(param_1 + 0x48) * dVar27 - dVar23 * dVar25;
  dVar30 = dVar22 * dVar23 - *(double *)(param_1 + 0x48) * dVar32;
  dVar28 = dVar28 + dVar28;
  dVar30 = dVar30 + dVar30;
  dVar24 = dVar24 + dVar24;
  dVar15 = *(double *)(param_1 + 0x20);
  dVar17 = *(double *)(param_1 + 0x28);
  dVar26 = dVar17 * dVar32 - dVar27 * dVar15;
  dVar29 = *(double *)(param_1 + 0x30) * dVar27 - dVar23 * dVar17;
  dVar33 = dVar15 * dVar23 - dVar32 * *(double *)(param_1 + 0x30);
  dVar29 = dVar29 + dVar29;
  dVar33 = dVar33 + dVar33;
  dVar26 = dVar26 + dVar26;
  local_580 = *(double *)(param_1 + 0x10);
  local_370 = dVar24 * dVar34 + *(double *)(param_1 + 0x48) + (dVar30 * dVar32 - dVar28 * dVar27);
  local_368 = *(undefined8 *)(param_1 + 0x50);
  local_380 = (dVar24 * dVar27 - dVar30 * dVar23) + dVar34 * dVar28 + dVar22;
  dStack_378 = (dVar23 * dVar28 - dVar32 * dVar24) + dVar34 * dVar30 + dVar25;
  local_538._8_4_ = SUB84(dVar27,0);
  local_538._0_8_ = dVar32;
  local_538._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
  local_548._8_4_ = SUB84(dVar34,0);
  local_548._0_8_ = dVar23;
  local_548._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  local_508._8_4_ = SUB84(dVar21,0);
  local_508._0_8_ = dVar20;
  local_508._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  dVar21 = (dVar23 * dVar29 - dVar32 * dVar26) + dVar34 * dVar33 + dVar17 + dVar21;
  local_388 = dVar26 * dVar34 + *(double *)(param_1 + 0x30) + (dVar33 * dVar32 - dVar29 * dVar27) +
              local_4f8;
  local_3b0 = (double *)local_398;
  local_398._8_4_ = SUB84(dVar21,0);
  local_398._0_8_ = (dVar26 * dVar27 - dVar33 * dVar23) + dVar34 * dVar29 + dVar15 + dVar20;
  local_398._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  local_558._0_8_ = local_368;
  local_3a0 = (code *)0x0;
  local_3a8._4_4_ = -1;
  local_3a8._0_4_ = 0xffffffff;
  local_3d0 = 0xbff0000000000000;
  local_3c8 = 0;
  uStack_3c0 = 0;
  local_570 = (code **)(double)_DAT_14c75f068;
  local_568 = (code **)(double)DAT_14c75f06c;
  local_578 = param_3;
  local_3b8 = param_3;
  if (DAT_14c992dd0 != '\x01') {
    local_f8 = 0;
    local_278 = (code *)0x0;
    local_2a8 = &local_280;
    local_280 = (code *)0x0;
    local_2b0 = &local_3b0;
    local_2a0 = local_3a8;
    local_248 = 0;
    local_258 = 0;
    uStack_250 = 0;
    dVar23 = -1.0;
    puVar36 = (undefined8 *)&DAT_8000000000000000;
    pcVar31 = (code *)0x3ff0000000000000;
    iVar13 = 0x1e;
    ppcVar11 = &local_1d8;
    dVar27 = -0.0;
    dVar21 = 0.0;
    dVar34 = 0.0;
    dVar32 = 3.4028234663852886e+38;
    local_298 = &local_3b8;
    ppcStack_290 = &local_278;
    local_288 = local_3a8 + 4;
LAB_1404ab257:
    local_260 = -dVar34;
    local_270._8_4_ = SUB84(dVar21,0);
    local_270._0_8_ = -dVar23;
    local_270._12_4_ = (uint)((ulonglong)dVar21 >> 0x20) ^ 0x80000000;
    local_5c8 = &local_278;
    local_5c0 = (code **)(local_3a8 + 4);
    FUN_1449c37f8(&local_3b8,&local_2c8,local_270,0);
    pcVar6 = local_278;
    pcVar3 = local_280;
    dVar20 = dVar34 * local_3b0[5] + dVar23 * local_3b0[3] + dVar21 * local_3b0[4];
    if (0.0 <= dVar20) {
      dVar15 = local_3b0[6];
      dVar25 = local_3b0[5] * dVar15 + local_3b0[2];
      dVar22 = local_3b0[4] * dVar15 + local_3b0[1];
      pcVar16 = (code *)(local_3b0[3] * dVar15 + *local_3b0);
    }
    else {
      pcVar16 = (code *)*local_3b0;
      dVar22 = local_3b0[1];
      dVar25 = local_3b0[2];
    }
    local_3a8._0_4_ = ZEXT14(0.0 <= dVar20);
    dVar20 = dVar34 * dVar34 + dVar23 * dVar23 + dVar21 * dVar21;
    if (2.2250738585072014e-308 < dVar20) {
      dVar20 = SQRT(dVar20);
      dVar25 = dVar25 + (dVar34 / dVar20) * 0.0;
      dVar22 = dVar22 + (dVar21 / dVar20) * 0.0;
      pcVar16 = (code *)((double)pcVar16 + (dVar23 / dVar20) * 0.0);
    }
    lVar8 = (longlong)(int)(uint)local_258;
    (&local_1d8)[lVar8 * 3] = local_2c8;
    adStack_1d0[lVar8 * 3] = dStack_2c0;
    adStack_1d0[lVar8 * 3 + 1] = local_2b8;
    (&local_178)[lVar8 * 3] = pcVar16;
    adStack_170[lVar8 * 3] = dVar22;
    adStack_170[lVar8 * 3 + 1] = dVar25;
    *(uint *)((longlong)&local_258 + lVar8 * 4 + 4) = (uint)local_258;
    local_258 = CONCAT44(local_258._4_4_,(uint)local_258 + 1);
    (&local_238)[lVar8 * 3] = (code *)((double)local_2c8 - (double)pcVar16);
    adStack_230[lVar8 * 3] = dStack_2c0 - dVar22;
    adStack_230[lVar8 * 3 + 1] = local_2b8 - dVar25;
    local_5c8 = ppcVar11;
    local_5c0 = &local_178;
    FUN_1449162b1(local_270,&local_238,&local_258,local_118);
    dVar20 = SQRT(local_260 * local_260 +
                  (double)local_270._0_8_ * (double)local_270._0_8_ +
                  (double)local_270._8_8_ * (double)local_270._8_8_);
    if ((double)local_570 <= dVar20) goto code_r0x0001404ab493;
    local_f8 = (uint)local_258;
    local_2d8 = 0;
    uStack_2d0 = 0;
    local_2e8 = 0;
    uStack_2e0 = 0;
    FUN_140268ec4(&local_2d8,8);
    FUN_140268ec4(&local_2e8,8);
    uVar18 = SUB84(local_580,0);
    uVar19 = (undefined4)((ulonglong)local_580 >> 0x20);
    if (0 < (int)(uint)local_258) {
      lVar8 = 0;
      do {
        uVar10 = uStack_2d0;
        lVar12 = (longlong)(int)uStack_2d0;
        uVar7 = (int)uStack_2d0 + 1;
        uStack_2d0 = CONCAT44(uStack_2d0._4_4_,uVar7);
        if (uStack_2d0._4_4_ < uVar7) {
          FUN_14026a4e8(&local_2d8,uVar10 & 0xffffffff);
        }
        uVar10 = uStack_2e0;
        *(code **)(local_2d8 + 0x10 + lVar12 * 0x18) = ppcVar11[2];
        pcVar16 = ppcVar11[1];
        puVar1 = (undefined8 *)(local_2d8 + lVar12 * 0x18);
        *puVar1 = *ppcVar11;
        puVar1[1] = pcVar16;
        lVar12 = (longlong)(int)uStack_2e0;
        uVar7 = (int)uStack_2e0 + 1;
        uStack_2e0 = CONCAT44(uStack_2e0._4_4_,uVar7);
        if (uStack_2e0._4_4_ < uVar7) {
          FUN_14026a4e8(&local_2e8,uVar10 & 0xffffffff);
        }
        *(code **)(local_2e8 + 0x10 + lVar12 * 0x18) = ppcVar11[0xe];
        pcVar16 = ppcVar11[0xd];
        puVar1 = (undefined8 *)(local_2e8 + lVar12 * 0x18);
        *puVar1 = ppcVar11[0xc];
        puVar1[1] = pcVar16;
        lVar8 = lVar8 + 1;
        ppcVar11 = ppcVar11 + 3;
      } while (lVar8 < (int)(uint)local_258);
    }
    pppcStack_330 = &local_298;
    local_338 = FUN_141727342;
    puStack_350 = &local_2b0;
    local_358 = FUN_142995c6c;
    local_5a8 = local_568;
    local_5b0 = &local_308;
    local_5b8 = &local_2c8;
    local_5c8 = &local_2f0;
    local_5c0 = (code **)local_270;
    uVar7 = FUN_144918d86(&local_2d8);
    if (uVar7 < 2) {
      local_3a0 = pcVar6;
      if ((double)pcVar6 <= (double)pcVar3) {
        local_3a0 = pcVar3;
      }
      local_348 = local_260;
      local_358 = (code *)local_270._0_8_;
      puStack_350 = (undefined8 *)local_270._8_8_;
      pcVar3 = (code *)((double)local_2f0 + 0.0);
      local_320 = (double)local_2c8 + (double)local_270._0_8_ * 0.0;
      dStack_318 = dStack_2c0 + (double)local_270._8_8_ * 0.0;
      local_310 = local_2b8 + local_260 * 0.0;
      local_338 = (code *)(local_308 - (double)local_270._0_8_ * 0.0);
      pppcStack_330 = (code ***)(local_300 - (double)local_270._8_8_ * 0.0);
      local_328 = local_2f8 - local_260 * 0.0;
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if (uVar7 == 3) {
        dVar20 = -(double)local_2f0;
        dVar27 = local_260;
        pcVar31 = (code *)local_270._0_8_;
        puVar36 = (undefined8 *)local_270._8_8_;
      }
      uVar18 = SUB84(local_580,0);
      uVar19 = (undefined4)((ulonglong)local_580 >> 0x20);
    }
    if (local_2e8 != 0) {
      FUN_1400020a8();
    }
    if (local_2d8 != 0) {
      FUN_1400020a8();
    }
    if (bVar2) {
      goto LAB_1404ab532;
    }
    goto LAB_1404ab662;
  }
  local_5a0 = &local_3d0;
  local_5a8 = &local_3a0;
  local_5b0 = (double *)local_3a8;
  local_5b8 = (code **)(local_3a8 + 4);
  local_5c0 = &local_358;
  local_5c8 = &local_338;
  local_598 = local_570;
  local_590 = local_568;
  FUN_146d01f5e(&local_3b8,&local_3b0,&local_1d8,&local_320);
  uVar18 = SUB84(local_580,0);
  uVar19 = (undefined4)((ulonglong)local_580 >> 0x20);
  pcVar3 = local_1d8;
LAB_1404ab662:
  dVar21 = local_328;
  pppcVar4 = pppcStack_330;
  pcVar31 = local_338;
  puVar36 = puStack_350;
  if ((local_3a8._4_4_ != -1) &&
     (dVar23 = -(double)pcVar3 - (double)CONCAT44(uVar19,uVar18), dVar23 <= param_5)) {
    uVar19 = SUB84(pppcStack_330,0);
    uVar37 = (undefined4)((ulonglong)pppcStack_330 >> 0x20);
    uVar10 = DAT_149931e80;
    uVar35 = DAT_149931e80._8_8_;
    local_4a8 = local_348;
    uStack_4a0 = 0;
    dVar27 = (double)((ulonglong)local_348 ^ uVar10);
    uVar18 = DAT_149931e80._8_4_;
    uVar7 = DAT_149931e80._12_4_;
    dVar32 = (double)((ulonglong)puStack_350 ^ uVar10);
    local_4b8 = local_358;
    uStack_4b0 = 0;
    dVar25 = (double)((ulonglong)local_358 ^ uVar10);
    dVar20 = dStack_378 * dVar32;
    dVar22 = local_380 * dVar25;
    dVar34 = local_370 * dVar27;
    local_408 = local_320;
    dStack_400 = dStack_318;
    local_3f8 = local_310;
    local_5c8 = (code **)CONCAT44(local_5c8._4_4_,local_3a8._4_4_);
    local_3e8 = dVar25;
    local_3e0 = dVar32;
    local_3d8 = dVar27;
    iVar13 = FUN_1409cb266(local_578,&local_408,&local_3e8,0);
    if (iVar13 != -1) {
      local_528 = dVar21 - local_580 * local_4a8;
      uStack_520 = 0;
      local_428._8_8_ = 0;
      local_428._0_8_ = puVar36;
      local_4e8._8_4_ = uVar19;
      local_4e8._0_8_ = (double)pppcVar4 - local_580 * (double)puVar36;
      local_4e8._12_4_ = uVar37;
      dVar15 = local_580 * (double)local_4b8;
      dVar34 = dVar34 + dVar22 + dVar20;
      FUN_1404c21ca(local_578,iVar13,&local_298,local_270);
      puVar5 = local_288;
      ppcVar11 = local_298;
      dVar20 = local_528;
      dVar21 = local_580;
      local_570 = ppcStack_290;
      dVar22 = ABS((double)local_288 * dVar27 +
                   (double)local_298 * dVar25 + (double)ppcStack_290 * dVar32 + 1.0);
      local_4d8._8_4_ = uVar19;
      local_4d8._0_8_ = (double)pcVar31 - dVar15;
      local_4d8._12_4_ = uVar37;
      local_438._0_8_ = (double)_DAT_14c75f018;
      if (0.01 <= ABS(dVar34)) {
        local_518._8_8_ = 0;
        local_518._0_8_ = dVar22;
        dVar34 = (double)local_538._0_8_;
        dVar25 = (double)local_538._8_8_;
        dVar32 = (double)local_548._0_8_;
        dVar27 = (double)local_548._8_8_;
        uVar18 = (undefined4)local_4f8;
        uVar19 = local_4f8._4_4_;
        dVar15 = (double)local_508._0_8_;
        dVar17 = (double)local_508._8_8_;
        if ((dVar22 <= (double)_DAT_14c75f018) &&
           (dVar22 = (double)local_288 * local_370 +
                     (double)local_298 * local_380 + (double)ppcStack_290 * dStack_378,
           ABS(dVar22) < 0.707)) {
          local_560 = local_288;
          dVar24 = (double)local_288 - local_370 * dVar22;
          dVar30 = (double)ppcStack_290 - dStack_378 * dVar22;
          local_568 = local_298;
          dVar26 = (double)local_298 - local_380 * dVar22;
          dVar22 = 1.0 / SQRT(dVar24 * dVar24 + dVar26 * dVar26 + dVar30 * dVar30);
          adStack_1d0[1] = local_388 - dVar24 * dVar22 * local_580;
          local_1d8 = (code *)((double)local_398._0_8_ - dVar22 * dVar26 * local_580);
          adStack_1d0[0] = (double)local_398._8_8_ - dVar30 * dVar22 * local_580;
          adStack_1d0[2] = local_380;
          adStack_1d0[3] = dStack_378;
          adStack_1d0[4] = local_370;
          local_1a8 = local_558._0_8_;
          local_5c0 = (code **)&local_2b0;
          local_2b0 = (double **)((ulonglong)local_2b0._4_4_ << 0x20);
          local_5c8 = &local_238;
          FUN_1404b2d23(local_578,&local_1d8,iVar13,&local_298);
          if (0 < (longlong)(int)local_2b0) {
            local_580 = dVar21 * (double)_DAT_14c75f01c * dVar21 * (double)_DAT_14c75f01c;
            local_4c8 = local_260;
            local_448 = (code *)local_270._0_8_;
            local_458 = (double)local_270._8_8_;
            local_468 = -dVar34;
            dStack_460 = -dVar25;
            dStack_410 = dVar32 * -1.0;
            local_488 = dVar27 * 1.0;
            local_498._8_8_ = local_488;
            local_498._0_8_ = local_468;
            local_478._8_4_ = SUB84(local_488,0);
            local_478._0_8_ = dStack_410;
            local_478._12_4_ = (int)((ulonglong)local_488 >> 0x20);
            lVar8 = 0;
            do {
              dVar24 = *(double *)((longlong)&local_238 + lVar8);
              dVar21 = *(double *)((longlong)adStack_230 + lVar8 + 8);
              dVar22 = *(double *)((longlong)adStack_230 + lVar8);
              if (local_580 <
                  (dVar21 - dVar20) * (dVar21 - dVar20) +
                  (dVar24 - (double)local_4d8._0_8_) * (dVar24 - (double)local_4d8._0_8_) +
                  (dVar22 - (double)local_4e8._0_8_) * (dVar22 - (double)local_4e8._0_8_)) {
                dVar32 = (dVar21 - local_260) * (double)local_560 +
                         (dVar24 - (double)local_270._0_8_) * (double)local_568 +
                         (dVar22 - (double)local_270._8_8_) * (double)local_570;
                local_578 = (code *)(dVar21 - dVar32 * (double)local_560);
                dVar25 = dVar22 - (double)local_570 * dVar32;
                local_558._0_8_ = dVar25;
                dVar30 = dVar24 - (double)local_568 * dVar32;
                dVar15 = dVar24 - (double)local_508._0_8_;
                dVar17 = *(double *)((longlong)adStack_230 + lVar8) - (double)local_508._8_8_;
                dVar20 = dVar21 - local_4f8;
                dVar32 = dVar17 * local_468 - dStack_460 * dVar15;
                dVar27 = dVar20 * dStack_460 - dStack_410 * dVar17;
                dVar34 = dVar15 * dStack_410 - dVar20 * local_468;
                dVar27 = dVar27 + dVar27;
                dVar34 = dVar34 + dVar34;
                dVar32 = dVar32 + dVar32;
                lVar12 = (longlong)*param_6;
                *param_6 = *param_6 + 1;
                *(double *)(param_6 + lVar12 * 0x16 + 2) =
                     (dVar32 * dStack_460 - dVar34 * dStack_410) + local_488 * dVar27 + dVar15;
                *(double *)((longlong)(param_6 + lVar12 * 0x16 + 2) + 8) =
                     (dStack_410 * dVar27 - local_468 * dVar32) + local_488 * dVar34 + dVar17;
                *(double *)(param_6 + lVar12 * 0x16 + 6) =
                     dVar32 * local_488 + dVar20 + (dVar34 * local_468 - dVar27 * dStack_460);
                *(double *)(param_6 + lVar12 * 0x16 + 8) = dVar30;
                *(double *)(param_6 + lVar12 * 0x16 + 10) = dVar25;
                *(code **)(param_6 + lVar12 * 0x16 + 0xc) = local_578;
                *(code ***)(param_6 + lVar12 * 0x16 + 0xe) = local_298;
                *(code ***)((longlong)(param_6 + lVar12 * 0x16 + 0xe) + 8) = ppcStack_290;
                *(undefined1 **)(param_6 + lVar12 * 0x16 + 0x12) = local_288;
                *(double *)(param_6 + lVar12 * 0x16 + 0x14) =
                     (dVar21 - (double)local_578) * (double)local_560 +
                     (dVar24 - dVar30) * (double)local_568 + (dVar22 - dVar25) * (double)local_570;
                param_6[lVar12 * 0x16 + 0x16] = -1;
                *(undefined1 *)(param_6 + lVar12 * 0x16 + 0x17) = 1;
                uVar18 = (undefined4)local_4f8;
                uVar19 = local_4f8._4_4_;
                dVar15 = (double)local_508._0_8_;
                dVar17 = (double)local_508._8_8_;
                dVar32 = (double)local_548._0_8_;
                dVar27 = (double)local_548._8_8_;
                dVar20 = local_528;
                dVar34 = (double)local_538._0_8_;
                dVar25 = (double)local_538._8_8_;
              }
              lVar8 = lVar8 + 0x18;
              dStack_480 = local_488;
              local_418 = dStack_460;
            } while ((longlong)(int)local_2b0 * 0x18 != lVar8);
          }
        }
      }
      else {
        dVar27 = dVar27 - dVar34 * local_370;
        dVar32 = dVar32 - dStack_378 * dVar34;
        local_4c8 = dVar25 - local_380 * dVar34;
        dVar21 = dVar27 * dVar27 + local_4c8 * local_4c8 + dVar32 * dVar32;
        if ((dVar21 != 1.0) || (NAN(dVar21))) {
          if (dVar21 < 9.99999993922529e-09) {
            uVar35 = 0;
            uVar18 = 0;
            uVar7 = 0;
            dVar27 = DAT_14c8464f0;
            dVar32 = DAT_14c8464e8;
            local_4c8 = DAT_14c8464e0;
          }
          else {
            dVar21 = 1.0 / SQRT(dVar21);
            dVar27 = dVar27 * dVar21;
            dVar32 = dVar32 * dVar21;
            local_4c8 = local_4c8 * dVar21;
          }
        }
        local_558._8_4_ = uVar18;
        local_558._0_8_ = dVar27;
        local_558._12_4_ = uVar7;
        dVar27 = -dVar27;
        local_518._8_4_ = uVar18;
        local_518._0_8_ = dVar32;
        local_518._12_4_ = uVar7;
        dVar32 = -dVar32;
        pcVar31 = (code *)-local_4c8;
        local_5c0 = (code **)&local_2b0;
        local_2b0 = (double **)((ulonglong)local_2b0._4_4_ << 0x20);
        local_5c8 = &local_1d8;
        uStack_4c0 = uVar35;
        local_238 = pcVar31;
        adStack_230[0] = dVar32;
        adStack_230[1] = dVar27;
        FUN_1404b2d23(local_578,local_398,iVar13);
        if ((0 < (int)local_2b0) &&
           (dVar21 = dVar27 * (double)puVar5 +
                     (double)pcVar31 * (double)ppcVar11 + (double)local_570 * dVar32,
           9.999999747378752e-05 < ABS(dVar21))) {
          local_4b8 = (code *)(1.0 / dVar21);
          local_4d8._0_8_ = local_260;
          local_4e8._0_8_ = local_270._0_8_;
          local_528 = (double)local_270._8_8_;
          local_468 = -(double)local_538._8_8_;
          local_428._8_4_ = uVar18;
          local_428._0_8_ = dVar27;
          local_428._12_4_ = uVar7 ^ 0x80000000;
          dStack_460 = (double)local_548._0_8_ * -1.0;
          dStack_450 = (double)local_548._8_8_ * 1.0;
          local_438._8_4_ = SUB84(dStack_450,0);
          local_438._0_8_ = dStack_450;
          local_438._12_4_ = (int)((ulonglong)dStack_450 >> 0x20);
          local_458 = -(double)local_538._0_8_;
          local_538._0_8_ = -(double)local_538._0_8_;
          local_538._8_8_ = local_468;
          local_548._8_8_ = dStack_450;
          local_548._0_8_ = dStack_460;
          dVar21 = local_580 * (double)local_558._0_8_;
          local_478._0_8_ = dVar21;
          local_488 = local_580 * local_518._0_8_;
          local_580 = local_580 * local_4c8;
          lVar8 = 0;
          local_560 = puVar5;
          local_498._8_4_ = uVar18;
          local_498._0_8_ = dVar32;
          local_498._12_4_ = uVar7 ^ 0x80000000;
          local_568 = ppcVar11;
          do {
            dVar26 = *(double *)((longlong)adStack_1d0 + lVar8 + 8) + dVar21;
            dVar25 = *(double *)((longlong)adStack_1d0 + lVar8) + local_488;
            dVar22 = *(double *)((longlong)&local_1d8 + lVar8) + local_580;
            dVar24 = ((local_260 - dVar26) * (double)puVar5 +
                     ((double)local_270._0_8_ - dVar22) * (double)ppcVar11 +
                     ((double)local_270._8_8_ - dVar25) * (double)local_570) * (double)local_4b8;
            dVar15 = dVar22 - (double)local_508._0_8_;
            dVar17 = dVar25 - (double)local_508._8_8_;
            dVar30 = dVar26 - local_4f8;
            local_578 = (code *)(dVar26 - (double)local_558._0_8_ * dVar24);
            dVar23 = dVar17 * (double)local_538._0_8_ - local_468 * dVar15;
            dVar34 = dVar30 * local_468 - dStack_460 * dVar17;
            dVar20 = dVar15 * dStack_460 - dVar30 * local_458;
            local_4a8 = dVar25 - local_518._0_8_ * dVar24;
            uStack_4a0 = 0;
            dVar34 = dVar34 + dVar34;
            dVar20 = dVar20 + dVar20;
            dVar23 = dVar23 + dVar23;
            dVar24 = dVar22 - dVar24 * local_4c8;
            lVar12 = (longlong)*param_6;
            *param_6 = *param_6 + 1;
            *(double *)(param_6 + lVar12 * 0x16 + 2) =
                 (dVar23 * local_468 - dVar20 * dStack_460) + dStack_450 * dVar34 + dVar15;
            *(double *)((longlong)(param_6 + lVar12 * 0x16 + 2) + 8) =
                 (dStack_460 * dVar34 - local_458 * dVar23) +
                 (double)local_438._8_8_ * dVar20 + dVar17;
            *(double *)(param_6 + lVar12 * 0x16 + 6) =
                 dVar23 * dStack_450 + dVar30 +
                 (dVar20 * (double)local_538._0_8_ - dVar34 * local_468);
            *(double *)(param_6 + lVar12 * 0x16 + 8) = dVar24;
            *(double *)(param_6 + lVar12 * 0x16 + 10) = local_4a8;
            *(code **)(param_6 + lVar12 * 0x16 + 0xc) = local_578;
            *(code **)(param_6 + lVar12 * 0x16 + 0xe) = local_238;
            *(double *)((longlong)(param_6 + lVar12 * 0x16 + 0xe) + 8) = adStack_230[0];
            *(double *)(param_6 + lVar12 * 0x16 + 0x12) = adStack_230[1];
            *(double *)(param_6 + lVar12 * 0x16 + 0x14) =
                 (dVar26 - (double)local_578) * dVar27 +
                 (dVar22 - dVar24) * (double)pcVar31 + (dVar25 - local_4a8) * dVar32;
            param_6[lVar12 * 0x16 + 0x16] = -1;
            *(undefined1 *)(param_6 + lVar12 * 0x16 + 0x17) = 3;
            lVar8 = lVar8 + 0x18;
            local_448 = pcVar31;
            uStack_440 = uVar35 ^ 0x8000000000000000;
          } while (((ulonglong)local_2b0 & 0xffffffff) * 0x18 != lVar8);
          goto LAB_1404ab68c;
        }
        local_518._8_8_ = 0;
        local_518._0_8_ = dVar22;
        uVar18 = (undefined4)local_4f8;
        uVar19 = local_4f8._4_4_;
        dVar15 = (double)local_508._0_8_;
        dVar17 = (double)local_508._8_8_;
        dVar32 = (double)local_548._0_8_;
        dVar27 = (double)local_548._8_8_;
        dVar20 = local_528;
        dVar34 = (double)local_538._0_8_;
        dVar25 = (double)local_538._8_8_;
      }
      dVar15 = (double)local_4d8._0_8_ - dVar15;
      dVar17 = (double)local_4e8._0_8_ - dVar17;
      dVar20 = dVar20 - (double)CONCAT44(uVar19,uVar18);
      dVar30 = -dVar34;
      dVar25 = -dVar25;
      dVar32 = dVar32 * -1.0;
      dVar27 = dVar27 * 1.0;
      dVar24 = dVar15 * dVar32 - dVar30 * dVar20;
      dVar21 = dVar17 * dVar30 - dVar25 * dVar15;
      dVar22 = dVar20 * dVar25 - dVar32 * dVar17;
      dVar22 = dVar22 + dVar22;
      dVar24 = dVar24 + dVar24;
      dVar21 = dVar21 + dVar21;
      lVar8 = (longlong)*param_6;
      *(double *)(param_6 + lVar8 * 0x16 + 2) =
           (dVar21 * dVar25 - dVar24 * dVar32) + dVar27 * dVar22 + dVar15;
      *(double *)((longlong)(param_6 + lVar8 * 0x16 + 2) + 8) =
           dVar34 * dVar21 + dVar32 * dVar22 + dVar27 * dVar24 + dVar17;
      *(double *)(param_6 + lVar8 * 0x16 + 6) =
           dVar27 * dVar21 + dVar20 + (dVar24 * dVar30 - dVar22 * dVar25);
      *(double *)(param_6 + lVar8 * 0x16 + 8) = local_320;
      *(double *)((longlong)(param_6 + lVar8 * 0x16 + 8) + 8) = dStack_318;
      *(double *)(param_6 + lVar8 * 0x16 + 0xc) = local_310;
      *(code **)(param_6 + lVar8 * 0x16 + 0xe) = local_4b8;
      *(undefined8 *)(param_6 + lVar8 * 0x16 + 0x10) = local_428._0_8_;
      *(double *)(param_6 + lVar8 * 0x16 + 0x12) = local_4a8;
      *(double *)(param_6 + lVar8 * 0x16 + 0x14) = dVar23;
      param_6[lVar8 * 0x16 + 0x16] = -1;
      *(char *)(param_6 + lVar8 * 0x16 + 0x17) =
           ((double)local_438._0_8_ < (double)local_518._0_8_) + '\x01';
      *param_6 = *param_6 + 1;
    }
  }
LAB_1404ab68c:
  if ((local_f0 ^ (ulonglong)auStack_5e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001404ab493:
  bVar2 = dVar32 <= dVar20;
  dVar34 = 1.0 / dVar20;
  dVar23 = (double)local_270._0_8_ * dVar34;
  dVar21 = (double)local_270._8_8_ * dVar34;
  dVar34 = local_260 * dVar34;
  dVar27 = -dVar34;
  puVar36 = (undefined8 *)-dVar21;
  pcVar31 = (code *)-dVar23;
  bVar14 = iVar13 == 0;
  iVar13 = iVar13 + -1;
  dVar32 = dVar20;
  if (bVar14 || bVar2) goto LAB_1404ab51d;
  goto LAB_1404ab257;
LAB_1404ab51d:
  local_f8 = (uint)local_258;
  uVar18 = SUB84(local_580,0);
  uVar19 = (undefined4)((ulonglong)local_580 >> 0x20);
LAB_1404ab532:
  dVar23 = 0.0;
  dVar21 = 0.0;
  local_328 = 0.0;
  local_320 = 0.0;
  dStack_318 = 0.0;
  local_310 = 0.0;
  if (0 < (int)(uint)local_258) {
    pdVar9 = adStack_170 + 1;
    uVar10 = 0;
    local_328 = 0.0;
    do {
      dVar32 = local_118[uVar10];
      local_310 = local_310 + pdVar9[-0xc] * dVar32;
      dStack_318 = dStack_318 + pdVar9[-0xd] * dVar32;
      local_320 = local_320 + pdVar9[-0xe] * dVar32;
      local_328 = local_328 + *pdVar9 * dVar32;
      dVar21 = dVar21 + pdVar9[-1] * dVar32;
      dVar23 = dVar23 + dVar32 * pdVar9[-2];
      uVar10 = uVar10 + 1;
      pdVar9 = pdVar9 + 3;
    } while ((uint)local_258 != uVar10);
  }
  pcVar3 = (code *)(0.0 - dVar20);
  local_310 = local_310 + dVar27 * 0.0;
  dStack_318 = dStack_318 + (double)puVar36 * 0.0;
  local_320 = local_320 + (double)pcVar31 * 0.0;
  local_328 = local_328 - dVar27 * 0.0;
  pppcStack_330 = (code ***)(dVar21 - (double)puVar36 * 0.0);
  local_338 = (code *)(dVar23 - (double)pcVar31 * 0.0);
  local_358 = pcVar31;
  puStack_350 = puVar36;
  local_348 = dVar27;
  goto LAB_1404ab662;
}



// FUNCTION 1404ac93e FUN_1404ac93e body=7101 status=ok
// SIG undefined FUN_1404ac93e(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404ac93e(longlong param_1,double *param_2,longlong param_3,double *param_4,double param_5,
                  int *param_6)

{
  undefined4 *puVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  double *pdVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  code **ppcVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  double dVar37;
  code *pcVar38;
  double dVar39;
  double ***pppdVar40;
  ulonglong uVar41;
  code *pcVar42;
  undefined4 uVar43;
  undefined1 auStack_5e8 [32];
  code **local_5c8;
  code **local_5c0;
  int *local_5b8;
  uint *local_5b0;
  double *local_5a8;
  undefined8 *local_5a0;
  double local_598;
  double *local_590;
  double local_588;
  double local_580;
  double *local_578;
  double local_570;
  undefined1 local_568 [16];
  undefined1 local_558 [16];
  undefined1 local_548 [16];
  double local_538;
  double dStack_530;
  code *local_528;
  undefined8 *puStack_520;
  double local_518;
  undefined8 *puStack_510;
  double local_508;
  undefined8 uStack_500;
  undefined1 local_4f8 [16];
  undefined1 local_4e8 [16];
  double local_4d8;
  double dStack_4d0;
  double local_4c8;
  double dStack_4c0;
  undefined1 local_4b8 [16];
  double ***local_4a8;
  ulonglong uStack_4a0;
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  code *local_468;
  ulonglong uStack_460;
  double ***local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  double local_418;
  double dStack_410;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  double local_3f8;
  double local_3e8;
  double local_3e0;
  double local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  longlong local_3b8;
  double *local_3b0;
  uint local_3a8;
  int local_3a4;
  double local_3a0;
  undefined1 local_398 [16];
  double local_388;
  double local_380;
  double dStack_378;
  double local_370;
  undefined8 local_368;
  code *local_358;
  double ***pppdStack_350;
  code *local_348;
  code *local_338;
  undefined8 *puStack_330;
  double local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  double local_310;
  uint local_308 [4];
  double local_2f8;
  code *local_2f0;
  longlong local_2e8;
  undefined8 uStack_2e0;
  longlong local_2d8;
  undefined8 uStack_2d0;
  double **local_2c8;
  double *local_2c0;
  uint *local_2b8;
  undefined8 local_2b0;
  double *local_2a8;
  int *local_2a0;
  double local_298;
  double local_290;
  undefined8 local_288;
  uint uStack_280;
  uint uStack_27c;
  double *local_278;
  code *local_270;
  double ***pppdStack_268;
  code *local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined1 local_238 [12];
  int iStack_22c;
  code *local_228 [10];
  code *local_1d8;
  double adStack_1d0 [5];
  undefined8 local_1a8;
  code *local_178;
  double adStack_170 [11];
  double local_118 [4];
  uint local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_5e8;
  dVar30 = -*param_4;
  dStack_530 = -param_4[1];
  dVar23 = param_4[2] * -1.0;
  dVar25 = param_4[3] * 1.0;
  dVar31 = *param_2;
  dVar22 = param_2[1];
  dVar27 = param_2[2];
  dVar34 = param_2[3];
  dVar21 = param_4[1];
  dVar20 = param_4[1];
  dVar26 = dVar22 * dVar23 * -1.0 + ((dVar31 * dVar25 - *param_4 * dVar34 * 1.0) - dVar27 * dVar21);
  dVar39 = dVar31 * dVar23 * 1.0 + ((dVar22 * dVar25 - *param_4 * dVar27 * -1.0) - dVar34 * dVar20);
  dVar24 = param_2[6] - param_4[6];
  dVar28 = dVar34 * dVar23 * 1.0 + dVar21 * dVar31 + (dVar25 * dVar27 - *param_4 * dVar22 * 1.0);
  dVar31 = dVar27 * dVar23 * -1.0 + dVar20 * dVar22 + (dVar25 * dVar34 - *param_4 * dVar31 * -1.0);
  dVar20 = param_2[4] - param_4[4];
  dVar21 = param_2[5] - param_4[5];
  dVar27 = dStack_530 * dVar24 - dVar21 * dVar23;
  dVar27 = dVar27 + dVar27;
  dVar34 = dVar30 * dVar21 - dVar20 * dStack_530;
  dVar34 = dVar34 + dVar34;
  dVar22 = dVar23 * dVar20 - dVar24 * dVar30;
  dVar22 = dVar22 + dVar22;
  local_538 = (dVar30 * dVar22 - dVar27 * dStack_530) + dVar25 * dVar34 + dVar24;
  dVar21 = (dVar23 * dVar27 - dVar34 * dVar30) + dVar25 * dVar22 + dVar21;
  dVar23 = (dStack_530 * dVar34 - dVar22 * dVar23) + dVar25 * dVar27 + dVar20;
  dVar25 = *(double *)(param_1 + 0x38);
  dVar22 = *(double *)(param_1 + 0x40);
  dVar20 = dVar22 * dVar26 - dVar39 * dVar25;
  dVar32 = *(double *)(param_1 + 0x48) * dVar39 - dVar28 * dVar22;
  dVar24 = dVar25 * dVar28 - *(double *)(param_1 + 0x48) * dVar26;
  dVar32 = dVar32 + dVar32;
  dVar24 = dVar24 + dVar24;
  dVar20 = dVar20 + dVar20;
  dVar27 = *(double *)(param_1 + 0x20);
  dVar34 = *(double *)(param_1 + 0x28);
  dVar30 = dVar34 * dVar26 - dVar39 * dVar27;
  dVar33 = *(double *)(param_1 + 0x30) * dVar39 - dVar28 * dVar34;
  dVar37 = dVar27 * dVar28 - dVar26 * *(double *)(param_1 + 0x30);
  dVar33 = dVar33 + dVar33;
  dVar37 = dVar37 + dVar37;
  dVar30 = dVar30 + dVar30;
  local_588 = *(double *)(param_1 + 0x10);
  local_548._8_4_ = SUB84(dVar39,0);
  local_548._0_8_ = dVar26;
  local_548._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
  local_558._8_4_ = SUB84(dVar31,0);
  local_558._0_8_ = dVar28;
  local_558._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
  local_438._8_4_ = SUB84(dVar21,0);
  local_438._0_8_ = dVar23;
  local_438._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  dVar21 = (dVar28 * dVar33 - dVar26 * dVar30) + dVar31 * dVar37 + dVar34 + dVar21;
  local_3b0 = (double *)local_398;
  local_398._8_4_ = SUB84(dVar21,0);
  local_398._0_8_ = (dVar30 * dVar39 - dVar37 * dVar28) + dVar31 * dVar33 + dVar27 + dVar23;
  local_398._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  local_388 = dVar30 * dVar31 + *(double *)(param_1 + 0x30) + (dVar37 * dVar26 - dVar33 * dVar39) +
              local_538;
  local_380 = (dVar20 * dVar39 - dVar24 * dVar28) + dVar31 * dVar32 + dVar25;
  dStack_378 = (dVar28 * dVar32 - dVar26 * dVar20) + dVar31 * dVar24 + dVar22;
  local_370 = dVar20 * dVar31 + *(double *)(param_1 + 0x48) + (dVar24 * dVar26 - dVar32 * dVar39);
  local_568._0_8_ = *(undefined8 *)(param_1 + 0x50);
  local_368 = *(undefined8 *)(param_1 + 0x50);
  local_3a0 = 0.0;
  local_3a4 = -1;
  local_3a8 = 0xffffffff;
  local_3d0 = 0xbff0000000000000;
  local_3c8 = 0;
  uStack_3c0 = 0;
  local_580 = (double)_DAT_14c75f068;
  local_578 = (double *)(double)DAT_14c75f06c;
  local_3b8 = param_3;
  if (DAT_14c992dd0 != '\x01') {
    local_f8 = 0;
    local_290 = 0.0;
    local_298 = 0.0;
    local_2b0 = (code *)&local_3b8;
    local_2a8 = &local_290;
    local_2a0 = &local_3a4;
    local_2c8 = &local_3b0;
    local_2c0 = &local_298;
    local_2b8 = &local_3a8;
    local_248 = 0;
    local_258 = 0;
    uStack_250 = 0;
    dVar20 = -1.0;
    uVar35 = 0;
    uVar36 = 0x80000000;
    uVar10 = 0;
    uVar43 = 0x3ff00000;
    iVar15 = 1;
    ppcVar17 = &local_1d8;
    pcVar42 = (code *)0x8000000000000000;
    auVar19 = ZEXT816(0);
    dVar23 = 0.0;
    dVar21 = 3.4028234663852886e+38;
LAB_1404ace89:
    dVar26 = local_290;
    dVar25 = local_298;
    dVar39 = auVar19._0_8_;
    local_288._0_4_ = SUB84(dVar20,0) ^ (uint)DAT_149931e80;
    local_288._4_4_ = (uint)((ulonglong)dVar20 >> 0x20) ^ DAT_149931e80._4_4_;
    uStack_280 = auVar19._0_4_ ^ DAT_149931e80._8_4_;
    uStack_27c = auVar19._4_4_ ^ DAT_149931e80._12_4_;
    local_278 = (double *)((ulonglong)dVar23 ^ DAT_149931e80);
    lVar13 = 0;
    do {
      bVar4 = (double)(&local_288)[lVar13] == 0.0;
      bVar18 = 0.0 < (double)(&local_288)[lVar13];
      lVar16 = local_3b8 + 0x38;
      if (!bVar18 && !bVar4) {
        lVar16 = local_3b8 + 0x20;
      }
      (&local_270)[lVar13] = *(code **)(lVar16 + lVar13 * 8);
      local_308[lVar13] = (uint)(bVar18 || bVar4);
      lVar13 = lVar13 + 1;
    } while (lVar13 != 3);
    local_3a4 = local_308[1] * 2 + local_308[0] + local_308[2] * 4;
    dVar28 = dVar23 * local_3b0[5] + dVar20 * local_3b0[3] + dVar39 * local_3b0[4];
    if (0.0 <= dVar28) {
      dVar22 = local_3b0[6];
      dVar31 = local_3b0[5] * dVar22 + local_3b0[2];
      pcVar3 = (code *)(local_3b0[4] * dVar22 + local_3b0[1]);
      pcVar38 = (code *)(local_3b0[3] * dVar22 + *local_3b0);
    }
    else {
      pcVar38 = (code *)*local_3b0;
      pcVar3 = (code *)local_3b0[1];
      dVar31 = local_3b0[2];
    }
    local_3a8 = (uint)(0.0 <= dVar28);
    dVar28 = dVar23 * dVar23 + dVar20 * dVar20 + dVar39 * dVar39;
    if (2.2250738585072014e-308 < dVar28) {
      dVar28 = SQRT(dVar28);
      dVar31 = dVar31 + (dVar23 / dVar28) * 0.0;
      pcVar3 = (code *)((double)pcVar3 + (dVar39 / dVar28) * 0.0);
      pcVar38 = (code *)((double)pcVar38 + (dVar20 / dVar28) * 0.0);
    }
    lVar13 = (longlong)(int)(uint)local_258;
    (&local_1d8)[lVar13 * 3] = local_270;
    adStack_1d0[lVar13 * 3] = (double)pppdStack_268;
    adStack_1d0[lVar13 * 3 + 1] = (double)local_260;
    (&local_178)[lVar13 * 3] = pcVar38;
    adStack_170[lVar13 * 3] = (double)pcVar3;
    adStack_170[lVar13 * 3 + 1] = dVar31;
    *(uint *)((longlong)&local_258 + lVar13 * 4 + 4) = (uint)local_258;
    local_258 = CONCAT44(local_258._4_4_,(uint)local_258 + 1);
    *(double *)(local_238 + lVar13 * 0x18) = (double)local_270 - (double)pcVar38;
    *(double *)(local_238 + lVar13 * 0x18 + 8) = (double)pppdStack_268 - (double)pcVar3;
    local_228[lVar13 * 3] = (code *)((double)local_260 - dVar31);
    local_5c8 = ppcVar17;
    local_5c0 = &local_178;
    FUN_1449162b1(&local_270,local_238,&local_258,local_118);
    dVar39 = SQRT((double)local_260 * (double)local_260 +
                  (double)local_270 * (double)local_270 +
                  (double)pppdStack_268 * (double)pppdStack_268);
    if (local_580 <= dVar39) goto code_r0x0001404ad0f8;
    local_f8 = (uint)local_258;
    local_2d8 = 0;
    uStack_2d0 = 0;
    local_2e8 = 0;
    uStack_2e0 = 0;
    FUN_140268ec4(&local_2d8,8);
    FUN_140268ec4(&local_2e8,8);
    if (0 < (int)(uint)local_258) {
      lVar13 = 0;
      do {
        uVar14 = uStack_2d0;
        lVar16 = (longlong)(int)uStack_2d0;
        uVar11 = (int)uStack_2d0 + 1;
        uStack_2d0 = CONCAT44(uStack_2d0._4_4_,uVar11);
        if (uStack_2d0._4_4_ < uVar11) {
          FUN_14026a4e8(&local_2d8,uVar14 & 0xffffffff);
        }
        uVar14 = uStack_2e0;
        *(code **)(local_2d8 + 0x10 + lVar16 * 0x18) = ppcVar17[2];
        uVar7 = *(undefined4 *)((longlong)ppcVar17 + 4);
        uVar8 = *(undefined4 *)(ppcVar17 + 1);
        uVar9 = *(undefined4 *)((longlong)ppcVar17 + 0xc);
        puVar1 = (undefined4 *)(local_2d8 + lVar16 * 0x18);
        *puVar1 = *(undefined4 *)ppcVar17;
        puVar1[1] = uVar7;
        puVar1[2] = uVar8;
        puVar1[3] = uVar9;
        lVar16 = (longlong)(int)uStack_2e0;
        uVar11 = (int)uStack_2e0 + 1;
        uStack_2e0 = CONCAT44(uStack_2e0._4_4_,uVar11);
        if (uStack_2e0._4_4_ < uVar11) {
          FUN_14026a4e8(&local_2e8,uVar14 & 0xffffffff);
        }
        *(code **)(local_2e8 + 0x10 + lVar16 * 0x18) = ppcVar17[0xe];
        uVar7 = *(undefined4 *)((longlong)ppcVar17 + 100);
        uVar8 = *(undefined4 *)(ppcVar17 + 0xd);
        uVar9 = *(undefined4 *)((longlong)ppcVar17 + 0x6c);
        puVar1 = (undefined4 *)(local_2e8 + lVar16 * 0x18);
        *puVar1 = *(undefined4 *)(ppcVar17 + 0xc);
        puVar1[1] = uVar7;
        puVar1[2] = uVar8;
        puVar1[3] = uVar9;
        lVar13 = lVar13 + 1;
        ppcVar17 = ppcVar17 + 3;
      } while (lVar13 < (int)(uint)local_258);
    }
    puStack_330 = &local_2b0;
    local_338 = FUN_142995d9a;
    pppdStack_350 = &local_2c8;
    local_358 = FUN_142995e58;
    local_5a8 = local_578;
    local_5b0 = local_308;
    local_5b8 = (int *)&local_288;
    local_5c8 = &local_2f0;
    local_5c0 = &local_270;
    uVar11 = FUN_144918d86(&local_2d8);
    if (uVar11 < 2) {
      local_3a0 = dVar26;
      if (dVar26 <= dVar25) {
        local_3a0 = dVar25;
      }
      local_348 = local_260;
      local_358 = local_270;
      pppdStack_350 = pppdStack_268;
      pcVar3 = (code *)((double)local_2f0 + 0.0);
      local_320 = (double)CONCAT44(local_288._4_4_,(uint)local_288) + (double)local_270 * 0.0;
      uStack_318 = (double)CONCAT44(uStack_27c,uStack_280) + (double)pppdStack_268 * 0.0;
      local_310 = (double)local_278 + (double)local_260 * 0.0;
      local_338 = (code *)((double)CONCAT44(local_308[1],local_308[0]) - (double)local_270 * 0.0);
      puStack_330 = (undefined8 *)
                    ((double)CONCAT44(local_308[3],local_308[2]) - (double)pppdStack_268 * 0.0);
      local_328 = local_2f8 - (double)local_260 * 0.0;
      bVar4 = false;
    }
    else {
      bVar4 = true;
      if (uVar11 == 3) {
        uVar10 = SUB84(local_270,0);
        uVar43 = (undefined4)((ulonglong)local_270 >> 0x20);
        uVar35 = SUB84(pppdStack_268,0);
        uVar36 = (undefined4)((ulonglong)pppdStack_268 >> 0x20);
        dVar39 = -(double)local_2f0;
        pcVar42 = local_260;
      }
    }
    if (local_2e8 != 0) {
      FUN_1400020a8();
    }
    if (local_2d8 != 0) {
      FUN_1400020a8();
    }
    if (bVar4) {
      goto LAB_1404ad194;
    }
    goto LAB_1404ad2c2;
  }
  local_5a0 = &local_3d0;
  local_5a8 = &local_3a0;
  local_5b0 = &local_3a8;
  local_5b8 = &local_3a4;
  local_5c0 = &local_358;
  local_5c8 = &local_338;
  local_598 = local_580;
  local_590 = local_578;
  FUN_146d0285a(&local_3b8,&local_3b0,&local_1d8,&local_320);
  pcVar3 = local_1d8;
LAB_1404ad2c2:
  dVar20 = local_538;
  if (local_3a4 != -1) {
    uVar14 = DAT_149931e80;
    uVar35 = DAT_149931e80._8_4_;
    uVar36 = DAT_149931e80._12_4_;
    dVar21 = (double)((ulonglong)pcVar3 ^ uVar14) - local_588;
    if (dVar21 <= param_5) {
      uVar5 = DAT_149931e80._8_8_;
      dVar27 = (double)((ulonglong)local_348 ^ uVar14);
      dVar22 = (double)((ulonglong)pppdStack_350 ^ uVar14);
      dVar25 = (double)((ulonglong)local_358 ^ uVar14);
      local_448 = local_348;
      uStack_440 = 0;
      local_508 = local_328 - local_588 * (double)local_348;
      uStack_500 = 0;
      local_458 = pppdStack_350;
      uStack_450 = 0;
      local_528 = (code *)((double)puStack_330 - local_588 * (double)pppdStack_350);
      puStack_520 = puStack_330;
      local_468 = local_358;
      uStack_460 = 0;
      local_518 = (double)local_338 - local_588 * (double)local_358;
      puStack_510 = puStack_330;
      dVar31 = local_370 * dVar27 + local_380 * dVar25 + dStack_378 * dVar22;
      local_408 = (undefined4)local_320;
      uStack_404 = local_320._4_4_;
      uStack_400 = (undefined4)uStack_318;
      uStack_3fc = uStack_318._4_4_;
      local_3f8 = local_310;
      local_5c8 = (code **)CONCAT44(local_5c8._4_4_,local_3a4);
      local_3e8 = dVar25;
      local_3e0 = dVar22;
      local_3d8 = dVar27;
      uVar10 = FUN_1404ae4fc(param_3,&local_408,&local_3e8,0);
      FUN_1404b254c(param_3,uVar10,&local_288,&local_270);
      auVar19 = local_548;
      dVar39 = local_588;
      local_580 = (double)CONCAT44(local_288._4_4_,(uint)local_288);
      local_570 = (double)CONCAT44(uStack_27c,uStack_280);
      local_578 = local_278;
      dVar26 = ABS((double)local_278 * dVar27 + local_580 * dVar25 + local_570 * dVar22 + 1.0);
      local_478._0_8_ = (double)_DAT_14c75f018;
      dVar28 = (double)local_548._0_8_;
      dVar23 = (double)local_548._8_8_;
      if (ABS(dVar31) < 0.01) {
        local_568._0_8_ = dVar27 - dVar31 * local_370;
        pppdVar40 = (double ***)(dVar22 - dStack_378 * dVar31);
        dVar25 = dVar25 - local_380 * dVar31;
        local_568._8_8_ = uVar5;
        dVar20 = (double)local_568._0_8_ * (double)local_568._0_8_ +
                 dVar25 * dVar25 + (double)pppdVar40 * (double)pppdVar40;
        uVar41 = uVar5;
        if ((dVar20 != 1.0) || (NAN(dVar20))) {
          if (dVar20 < 9.99999993922529e-09) {
            uVar35 = 0;
            uVar36 = 0;
            local_568._8_8_ = 0;
            local_568._0_8_ = DAT_14c8464f0;
            dVar25 = DAT_14c8464e0;
            pppdVar40 = DAT_14c8464e8;
            uVar41 = 0;
          }
          else {
            dVar20 = 1.0 / SQRT(dVar20);
            local_568._8_4_ = uVar35;
            local_568._0_8_ = (double)local_568._0_8_ * dVar20;
            local_568._12_4_ = uVar36;
            dVar25 = dVar25 * dVar20;
            pppdVar40 = (double ***)((double)pppdVar40 * dVar20);
          }
        }
        pcVar42 = (code *)(local_568._0_8_ ^ uVar14);
        uVar29 = local_568._8_8_ ^ uVar5;
        dVar27 = (double)((ulonglong)pppdVar40 ^ uVar14);
        dVar39 = (double)(uVar14 ^ (ulonglong)dVar25);
        uVar14 = uVar5 ^ CONCAT44(uVar36,uVar35);
        local_238._8_4_ = SUB84(dVar27,0);
        local_238._0_8_ = dVar39;
        iStack_22c = (int)((ulonglong)dVar27 >> 0x20);
        local_5c0 = (code **)&local_2b0;
        local_2b0 = (code *)((ulonglong)local_2b0._4_4_ << 0x20);
        local_5c8 = &local_1d8;
        local_228[0] = pcVar42;
        FUN_1404ae805(param_3,local_398,uVar10);
        dVar20 = local_538;
        dVar31 = (double)local_558._0_8_;
        dVar22 = (double)local_558._8_8_;
        if ((0 < (int)local_2b0) &&
           (dVar34 = (double)pcVar42 * (double)local_578 + dVar39 * local_580 + local_570 * dVar27,
           9.999999747378752e-05 < ABS(dVar34))) {
          local_518 = 1.0 / dVar34;
          local_528 = local_260;
          local_448 = local_270;
          local_458 = pppdStack_268;
          local_548._0_8_ = -dVar28;
          local_548._8_8_ = -dVar23;
          local_558._0_8_ = (double)local_558._0_8_ * -1.0;
          local_558._8_8_ = (double)local_558._8_8_ * 1.0;
          uVar10 = (undefined4)((ulonglong)local_558._8_8_ >> 0x20);
          local_478._8_4_ = (int)local_558._8_8_;
          local_478._0_8_ = local_558._8_8_;
          local_478._12_4_ = uVar10;
          local_498._8_4_ = (int)local_558._8_8_;
          local_498._0_8_ = local_548._0_8_;
          local_498._12_4_ = uVar10;
          local_4b8._8_4_ = (int)local_558._0_8_;
          local_4b8._0_8_ = local_548._8_8_;
          local_4b8._12_4_ = (int)((ulonglong)local_558._0_8_ >> 0x20);
          local_4c8 = local_588 * (double)local_568._0_8_;
          local_4d8 = local_588 * (double)pppdVar40;
          local_588 = local_588 * dVar25;
          lVar13 = 0;
          local_4e8._8_8_ = uVar41 ^ uVar5;
          local_4e8._0_8_ = dVar27;
          local_4f8._8_4_ = uVar35;
          local_4f8._0_8_ = dVar25;
          local_4f8._12_4_ = uVar36;
          local_488._8_4_ = (int)uVar14;
          local_488._0_8_ = dVar39;
          local_488._12_4_ = (int)(uVar14 >> 0x20);
          do {
            dVar34 = *(double *)((longlong)adStack_1d0 + lVar13 + 8) + local_4c8;
            dVar26 = *(double *)((longlong)adStack_1d0 + lVar13) + local_4d8;
            dVar30 = *(double *)((longlong)&local_1d8 + lVar13) + local_588;
            dVar23 = (((double)local_260 - dVar34) * (double)local_578 +
                     ((double)local_270 - dVar30) * local_580 +
                     ((double)pppdStack_268 - dVar26) * local_570) * local_518;
            dVar20 = dVar30 - (double)local_438._0_8_;
            dVar21 = dVar26 - (double)local_438._8_8_;
            dVar24 = dVar34 - local_538;
            local_508 = dVar34 - (double)local_568._0_8_ * dVar23;
            dVar28 = dVar21 * (double)local_548._0_8_ - (double)local_548._8_8_ * dVar20;
            dVar31 = dVar24 * (double)local_548._8_8_ - (double)local_4b8._8_8_ * dVar21;
            dVar22 = dVar20 * (double)local_558._0_8_ - dVar24 * (double)local_548._0_8_;
            dVar32 = dVar26 - (double)pppdVar40 * dVar23;
            dVar31 = dVar31 + dVar31;
            dVar22 = dVar22 + dVar22;
            dVar28 = dVar28 + dVar28;
            dVar23 = dVar30 - dVar23 * dVar25;
            dVar21 = ((double)local_558._0_8_ * dVar31 - (double)local_548._0_8_ * dVar28) +
                     (double)local_478._8_8_ * dVar22 + dVar21;
            lVar16 = (longlong)*param_6;
            *param_6 = *param_6 + 1;
            auVar6._8_4_ = SUB84(dVar21,0);
            auVar6._0_8_ = (dVar28 * (double)local_548._8_8_ - dVar22 * (double)local_4b8._8_8_) +
                           (double)local_558._8_8_ * dVar31 + dVar20;
            auVar6._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
            *(undefined1 (*) [16])(param_6 + lVar16 * 0x16 + 2) = auVar6;
            *(double *)(param_6 + lVar16 * 0x16 + 6) =
                 dVar28 * (double)local_558._8_8_ + dVar24 +
                 (dVar22 * (double)local_548._0_8_ - dVar31 * (double)local_548._8_8_);
            *(double *)(param_6 + lVar16 * 0x16 + 8) = dVar23;
            *(double *)(param_6 + lVar16 * 0x16 + 10) = dVar32;
            *(double *)(param_6 + lVar16 * 0x16 + 0xc) = local_508;
            piVar2 = param_6 + lVar16 * 0x16 + 0xe;
            *piVar2 = local_238._0_4_;
            piVar2[1] = local_238._4_4_;
            piVar2[2] = local_238._8_4_;
            piVar2[3] = iStack_22c;
            *(code **)(param_6 + lVar16 * 0x16 + 0x12) = local_228[0];
            *(double *)(param_6 + lVar16 * 0x16 + 0x14) =
                 (dVar34 - local_508) * (double)pcVar42 +
                 (dVar30 - dVar23) * dVar39 + (dVar26 - dVar32) * dVar27;
            param_6[lVar16 * 0x16 + 0x16] = -1;
            *(undefined1 *)(param_6 + lVar16 * 0x16 + 0x17) = 3;
            lVar13 = lVar13 + 0x18;
            local_4a8 = pppdVar40;
            uStack_4a0 = uVar41;
            local_468 = pcVar42;
            uStack_460 = uVar29;
          } while (((ulonglong)local_2b0 & 0xffffffff) * 0x18 != lVar13);
          goto LAB_1404ae08d;
        }
      }
      else {
        dVar31 = (double)local_558._0_8_;
        dVar22 = (double)local_558._8_8_;
        if ((dVar26 <= (double)_DAT_14c75f018) &&
           (dVar25 = (double)local_278 * local_370 + local_580 * local_380 + local_570 * dStack_378,
           ABS(dVar25) < 0.707)) {
          dVar34 = (double)local_278 - local_370 * dVar25;
          dVar27 = local_570 - dStack_378 * dVar25;
          dVar25 = local_580 - local_380 * dVar25;
          dVar24 = 1.0 / SQRT(dVar34 * dVar34 + dVar25 * dVar25 + dVar27 * dVar27);
          adStack_1d0[1] = local_388 - dVar34 * dVar24 * local_588;
          local_1d8 = (code *)((double)local_398._0_8_ - dVar24 * dVar25 * local_588);
          adStack_1d0[0] = (double)local_398._8_8_ - dVar27 * dVar24 * local_588;
          adStack_1d0[2] = local_380;
          adStack_1d0[3] = dStack_378;
          adStack_1d0[4] = local_370;
          local_1a8 = local_568._0_8_;
          local_5c0 = (code **)&local_2b0;
          local_2b0 = (code *)((ulonglong)local_2b0._4_4_ << 0x20);
          local_5c8 = (code **)local_238;
          FUN_1404ae805(param_3,&local_1d8,uVar10,&local_288);
          if (0 < (longlong)(int)local_2b0) {
            local_588 = dVar39 * (double)_DAT_14c75f01c * dVar39 * (double)_DAT_14c75f01c;
            local_488._0_8_ = local_260;
            local_498._0_8_ = local_270;
            local_4a8 = pppdStack_268;
            local_418 = -dVar28;
            dVar25 = -dVar23;
            local_4c8 = dVar31 * -1.0;
            local_4d8 = dVar22 * 1.0;
            local_4b8._8_4_ = auVar19._8_4_;
            local_4b8._0_8_ = local_418;
            local_4b8._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
            local_428._8_4_ = SUB84(local_4c8,0);
            local_428._0_8_ = dVar25;
            local_428._12_4_ = (int)((ulonglong)local_4c8 >> 0x20);
            lVar13 = 0;
            local_4e8._8_4_ = uVar35;
            local_4e8._0_8_ = dVar21;
            local_4e8._12_4_ = uVar36;
            local_4f8._8_8_ = 0;
            local_4f8._0_8_ = dVar26;
            do {
              dVar22 = *(double *)(local_238 + lVar13);
              dVar39 = *(double *)((longlong)local_228 + lVar13);
              dVar31 = *(double *)(local_238 + lVar13 + 8);
              if (local_588 <
                  (dVar39 - local_508) * (dVar39 - local_508) +
                  (dVar22 - local_518) * (dVar22 - local_518) +
                  (dVar31 - (double)local_528) * (dVar31 - (double)local_528)) {
                dVar23 = (dVar39 - (double)local_260) * (double)local_578 +
                         (dVar22 - (double)local_270) * local_580 +
                         (dVar31 - (double)pppdStack_268) * local_570;
                dVar20 = dVar39 - dVar23 * (double)local_578;
                local_568._0_8_ = dVar20;
                dVar34 = dVar31 - local_570 * dVar23;
                dVar24 = dVar22 - local_580 * dVar23;
                dVar32 = dVar22 - (double)local_438._0_8_;
                dVar33 = *(double *)(local_238 + lVar13 + 8) - (double)local_438._8_8_;
                dVar30 = dVar39 - local_538;
                dVar23 = dVar33 * local_418 - dVar25 * dVar32;
                dVar28 = dVar30 * (double)local_4b8._8_8_ - (double)local_428._8_8_ * dVar33;
                dVar27 = dVar32 * local_4c8 - dVar30 * local_418;
                dVar28 = dVar28 + dVar28;
                dVar27 = dVar27 + dVar27;
                dVar23 = dVar23 + dVar23;
                lVar16 = (longlong)*param_6;
                *param_6 = *param_6 + 1;
                *(double *)(param_6 + lVar16 * 0x16 + 2) =
                     (dVar23 * (double)local_4b8._8_8_ - dVar27 * (double)local_428._8_8_) +
                     local_4d8 * dVar28 + dVar32;
                *(double *)((longlong)(param_6 + lVar16 * 0x16 + 2) + 8) =
                     (local_4c8 * dVar28 - local_418 * dVar23) + local_4d8 * dVar27 + dVar33;
                *(double *)(param_6 + lVar16 * 0x16 + 6) =
                     dVar23 * local_4d8 + dVar30 + (dVar27 * local_418 - dVar28 * dVar25);
                *(double *)(param_6 + lVar16 * 0x16 + 8) = dVar24;
                *(double *)(param_6 + lVar16 * 0x16 + 10) = dVar34;
                *(double *)(param_6 + lVar16 * 0x16 + 0xc) = dVar20;
                *(ulonglong *)(param_6 + lVar16 * 0x16 + 0xe) =
                     CONCAT44(local_288._4_4_,(uint)local_288);
                *(ulonglong *)(param_6 + lVar16 * 0x16 + 0xe + 2) = CONCAT44(uStack_27c,uStack_280);
                *(double **)(param_6 + lVar16 * 0x16 + 0x12) = local_278;
                *(double *)(param_6 + lVar16 * 0x16 + 0x14) =
                     (dVar39 - dVar20) * (double)local_578 +
                     (dVar22 - dVar24) * local_580 + (dVar31 - dVar34) * local_570;
                param_6[lVar16 * 0x16 + 0x16] = -1;
                *(undefined1 *)(param_6 + lVar16 * 0x16 + 0x17) = 1;
                dVar28 = (double)local_548._0_8_;
                dVar23 = (double)local_548._8_8_;
                dVar20 = local_538;
              }
              lVar13 = lVar13 + 0x18;
              dVar31 = (double)local_558._0_8_;
              dVar22 = (double)local_558._8_8_;
              dStack_4d0 = local_4d8;
              dStack_4c0 = local_4d8;
              dStack_410 = local_4d8;
            } while ((longlong)(int)local_2b0 * 0x18 != lVar13);
          }
        }
      }
      dVar24 = local_518 - (double)local_438._0_8_;
      dVar30 = (double)local_528 - (double)local_438._8_8_;
      dVar20 = local_508 - dVar20;
      dVar25 = -dVar28;
      dVar23 = -dVar23;
      dVar31 = dVar31 * -1.0;
      dVar22 = dVar22 * 1.0;
      dVar34 = dVar24 * dVar31 - dVar25 * dVar20;
      dVar39 = dVar30 * dVar25 - dVar23 * dVar24;
      dVar27 = dVar20 * dVar23 - dVar31 * dVar30;
      dVar27 = dVar27 + dVar27;
      dVar34 = dVar34 + dVar34;
      dVar39 = dVar39 + dVar39;
      lVar13 = (longlong)*param_6;
      *(double *)(param_6 + lVar13 * 0x16 + 2) =
           (dVar39 * dVar23 - dVar34 * dVar31) + dVar22 * dVar27 + dVar24;
      *(double *)((longlong)(param_6 + lVar13 * 0x16 + 2) + 8) =
           dVar28 * dVar39 + dVar31 * dVar27 + dVar22 * dVar34 + dVar30;
      *(double *)(param_6 + lVar13 * 0x16 + 6) =
           dVar22 * dVar39 + dVar20 + (dVar34 * dVar25 - dVar27 * dVar23);
      *(double *)(param_6 + lVar13 * 0x16 + 8) = local_320;
      *(double *)((longlong)(param_6 + lVar13 * 0x16 + 8) + 8) = uStack_318;
      *(double *)(param_6 + lVar13 * 0x16 + 0xc) = local_310;
      *(code **)(param_6 + lVar13 * 0x16 + 0xe) = local_468;
      *(double ****)(param_6 + lVar13 * 0x16 + 0x10) = local_458;
      param_6[lVar13 * 0x16 + 0x12] = (int)local_448;
      (param_6 + lVar13 * 0x16 + 0x12)[1] = local_448._4_4_;
      *(double *)(param_6 + lVar13 * 0x16 + 0x14) = dVar21;
      param_6[lVar13 * 0x16 + 0x16] = -1;
      *(char *)(param_6 + lVar13 * 0x16 + 0x17) = ((double)local_478._0_8_ < dVar26) + '\x01';
      *param_6 = *param_6 + 1;
    }
  }
LAB_1404ae08d:
  if ((local_f0 ^ (ulonglong)auStack_5e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001404ad0f8:
  bVar4 = dVar21 <= dVar39;
  dVar23 = 1.0 / dVar39;
  dVar20 = (double)local_270 * dVar23;
  auVar19._0_8_ = (double)pppdStack_268 * dVar23;
  auVar19._8_8_ = 0;
  dVar23 = (double)local_260 * dVar23;
  uVar14 = DAT_149931e80;
  pcVar42 = (code *)((ulonglong)dVar23 ^ uVar14);
  uVar35 = (undefined4)((ulonglong)auVar19._0_8_ ^ uVar14);
  uVar36 = (undefined4)(((ulonglong)auVar19._0_8_ ^ uVar14) >> 0x20);
  uVar10 = (undefined4)((ulonglong)dVar20 ^ uVar14);
  uVar43 = (undefined4)(((ulonglong)dVar20 ^ uVar14) >> 0x20);
  bVar18 = iVar15 == 0x1f;
  iVar15 = iVar15 + 1;
  dVar21 = dVar39;
  if (bVar18 || bVar4) goto LAB_1404ad186;
  goto LAB_1404ace89;
LAB_1404ad186:
  local_f8 = (uint)local_258;
LAB_1404ad194:
  dVar23 = 0.0;
  dVar21 = 0.0;
  dVar20 = 0.0;
  dVar28 = 0.0;
  dVar26 = 0.0;
  dVar25 = 0.0;
  local_310 = 0.0;
  uStack_318 = 0.0;
  local_320 = 0.0;
  local_328 = 0.0;
  if (0 < (int)(uint)local_258) {
    pdVar12 = adStack_170 + 1;
    uVar14 = 0;
    do {
      dVar31 = local_118[uVar14];
      dVar25 = dVar25 + pdVar12[-0xc] * dVar31;
      dVar26 = dVar26 + pdVar12[-0xd] * dVar31;
      dVar28 = dVar28 + pdVar12[-0xe] * dVar31;
      dVar20 = dVar20 + *pdVar12 * dVar31;
      dVar21 = dVar21 + pdVar12[-1] * dVar31;
      dVar23 = dVar23 + dVar31 * pdVar12[-2];
      uVar14 = uVar14 + 1;
      pdVar12 = pdVar12 + 3;
      local_310 = dVar25;
      uStack_318 = dVar26;
      local_320 = dVar28;
      local_328 = dVar20;
    } while ((uint)local_258 != uVar14);
  }
  dVar25 = (double)CONCAT44(uVar36,uVar35) * 0.0;
  dVar20 = (double)CONCAT44(uVar43,uVar10) * 0.0;
  local_310 = local_310 + (double)pcVar42 * 0.0;
  uStack_318 = uStack_318 + dVar25;
  local_320 = local_320 + dVar20;
  local_328 = local_328 - (double)pcVar42 * 0.0;
  puStack_330 = (undefined8 *)(dVar21 - dVar25);
  local_338 = (code *)(dVar23 - dVar20);
  local_358 = (code *)CONCAT44(uVar43,uVar10);
  pppdStack_350 = (double ***)CONCAT44(uVar36,uVar35);
  pcVar3 = (code *)(0.0 - dVar39);
  local_348 = pcVar42;
  goto LAB_1404ad2c2;
}



// FUNCTION 1404ae4fc FUN_1404ae4fc body=409 status=ok
// SIG undefined FUN_1404ae4fc(void)

ulonglong FUN_1404ae4fc(undefined8 param_1,undefined8 param_2,double *param_3,double param_4,
                       int param_5)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_b8 [32];
  int local_98;
  uint *local_90;
  undefined8 *local_88;
  undefined8 local_78;
  uint local_70;
  int local_6c [3];
  ulonglong local_60;
  
  iVar2 = DAT_14c992a38;
  lVar4 = (longlong)param_5;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_4 <= (double)DAT_14c75f040) {
    param_4 = (double)DAT_14c75f040;
  }
  local_70 = 0xffffffff;
  local_78 = 0x3ff0000000000000;
  local_6c[0] = (int)*(short *)(DAT_14c992a80 + lVar4 * 8);
  local_6c[1] = (int)*(short *)(DAT_14c992a80 + 2 + lVar4 * 8);
  local_6c[2] = (int)*(short *)(DAT_14c992a80 + 4 + lVar4 * 8);
  sVar1 = *(short *)(DAT_14c992a80 + 6 + lVar4 * 8);
  if ((longlong)sVar1 < 4) {
    if (0 < sVar1) {
      lVar4 = 0;
      do {
        local_98 = local_6c[lVar4];
        local_90 = &local_70;
        local_88 = &local_78;
        FUN_1404ae696(param_1,param_2,param_3,param_4);
        lVar4 = lVar4 + 1;
      } while (sVar1 != lVar4);
    }
  }
  else if (0 < DAT_14c992a38) {
    iVar7 = 0;
    do {
      local_98 = iVar7;
      local_90 = &local_70;
      local_88 = &local_78;
      FUN_1404ae696(param_1,param_2,param_3,param_4);
      iVar7 = iVar7 + 1;
    } while (iVar2 != iVar7);
  }
  uVar5 = (ulonglong)local_70;
  if (local_70 == 0xffffffff) {
    uVar3 = (ABS(param_3[1]) <= ABS(param_3[2])) + 1;
    uVar6 = 0;
    if (ABS(*param_3) <= ABS(param_3[2])) {
      uVar6 = uVar3;
    }
    if (ABS(*param_3) <= ABS(param_3[1])) {
      uVar6 = uVar3;
    }
    uVar5 = (ulonglong)(uVar6 + 3);
    if (0.0 < param_3[uVar6] || param_3[uVar6] == 0.0) {
      uVar5 = (ulonglong)uVar6;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1404ae696 FUN_1404ae696 body=367 status=ok
// SIG undefined FUN_1404ae696(void)

void FUN_1404ae696(longlong param_1,double *param_2,double *param_3,double param_4,int param_5,
                  int *param_6,double *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  lVar4 = (longlong)param_5;
  dVar7 = *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30);
  dVar6 = *(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28);
  dVar3 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
  dVar5 = *(double *)(DAT_14c992a30 + 0x10 + lVar4 * 0x18);
  dVar1 = *(double *)(DAT_14c992a30 + lVar4 * 0x18);
  dVar2 = *(double *)(DAT_14c992a30 + 8 + lVar4 * 0x18);
  if (((ABS((param_2[2] - (dVar7 * dVar5 * 0.5 + dVar7 * 0.5 + *(double *)(param_1 + 0x30))) * dVar5
            + (*param_2 - (dVar3 * dVar1 * 0.5 + dVar3 * 0.5 + *(double *)(param_1 + 0x20))) * dVar1
              + (param_2[1] - (dVar6 * dVar2 * 0.5 + dVar6 * 0.5 + *(double *)(param_1 + 0x28))) *
                dVar2) <= param_4) &&
      (dVar5 = dVar5 * param_3[2] + dVar1 * *param_3 + dVar2 * param_3[1],
      dVar5 <= -9.99999993922529e-09)) && (dVar5 < *param_7)) {
    *param_7 = dVar5;
    *param_6 = param_5;
  }
  return;
}



// FUNCTION 1404ae805 FUN_1404ae805 body=1282 status=ok
// SIG undefined FUN_1404ae805(void)

void FUN_1404ae805(longlong param_1,double *param_2,int param_3,double *param_4,double *param_5,
                  int *param_6)

{
  double dVar1;
  short sVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double local_d0;
  
  *param_6 = 2;
  param_5[2] = param_2[2];
  dVar1 = param_2[1];
  *param_5 = *param_2;
  param_5[1] = dVar1;
  dVar1 = param_2[6];
  local_d0 = param_2[5] * dVar1 + param_2[2];
  dVar19 = param_2[4] * dVar1 + param_2[1];
  dVar1 = dVar1 * param_2[3] + *param_2;
  param_5[3] = dVar1;
  param_5[4] = dVar19;
  param_5[5] = local_d0;
  lVar10 = (longlong)param_3;
  sVar2 = *(short *)(DAT_14c992a40 + 2 + lVar10 * 4);
  if ((0 < sVar2) && (1 < *param_6)) {
    dVar16 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
    lVar11 = (longlong)
             *(short *)(DAT_14c992a50 + -4 +
                       ((longlong)*(short *)(DAT_14c992a40 + lVar10 * 4) + (longlong)(int)sVar2) * 6
                       );
    dVar4 = *(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28);
    dVar20 = *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30);
    lVar12 = 0;
    lVar13 = DAT_14c992a20;
    lVar14 = DAT_14c992a50;
    lVar15 = DAT_14c992a40;
    dVar16 = dVar16 * *(double *)(DAT_14c992a20 + lVar11 * 0x18) * 0.5 +
             dVar16 * 0.5 + *(double *)(param_1 + 0x20);
    dVar4 = dVar4 * *(double *)(DAT_14c992a20 + 8 + lVar11 * 0x18) * 0.5 +
            dVar4 * 0.5 + *(double *)(param_1 + 0x28);
    dVar20 = dVar20 * *(double *)(DAT_14c992a20 + 0x10 + lVar11 * 0x18) * 0.5 +
             dVar20 * 0.5 + *(double *)(param_1 + 0x30);
    while( true ) {
      lVar11 = (longlong)*(short *)(lVar14 + 2 + (*(short *)(lVar15 + lVar10 * 4) + lVar12) * 6);
      dVar3 = *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30);
      dVar5 = *(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28);
      dVar17 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
      dVar3 = dVar3 * *(double *)(lVar13 + 0x10 + lVar11 * 0x18) * 0.5 +
              dVar3 * 0.5 + *(double *)(param_1 + 0x30);
      dVar5 = dVar5 * *(double *)(lVar13 + 8 + lVar11 * 0x18) * 0.5 +
              dVar5 * 0.5 + *(double *)(param_1 + 0x28);
      dVar18 = dVar17 * *(double *)(lVar13 + lVar11 * 0x18) * 0.5 +
               dVar17 * 0.5 + *(double *)(param_1 + 0x20);
      dVar17 = *param_4 * (dVar4 - dVar5) - (dVar16 - dVar18) * param_4[1];
      dVar16 = (dVar16 - dVar18) * param_4[2] - (dVar20 - dVar3) * *param_4;
      dVar4 = param_4[1] * (dVar20 - dVar3) - (dVar4 - dVar5) * param_4[2];
      dVar20 = dVar17 * dVar17 + dVar4 * dVar4 + dVar16 * dVar16;
      if (((dVar20 != 1.0) || (dVar7 = dVar17, dVar8 = dVar16, dVar9 = dVar4, NAN(dVar20))) &&
         (dVar7 = DAT_14c8464f0, dVar8 = DAT_14c8464e8, dVar9 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar20)) {
        dVar20 = 1.0 / SQRT(dVar20);
        dVar7 = dVar17 * dVar20;
        dVar8 = dVar16 * dVar20;
        dVar9 = dVar4 * dVar20;
      }
      dVar20 = param_5[2];
      dVar4 = *param_5;
      dVar16 = param_5[1];
      dVar6 = (dVar20 - dVar3) * dVar7 + (dVar4 - dVar18) * dVar9 + (dVar16 - dVar5) * dVar8;
      dVar17 = (local_d0 - dVar3) * dVar7 + (dVar1 - dVar18) * dVar9 + (dVar19 - dVar5) * dVar8;
      if ((0.01 < dVar17) && (0.01 < dVar6)) break;
      if ((0.01 <= dVar17) || (dVar6 <= 0.01)) {
        if ((0.01 < dVar17) && (dVar6 < 0.01)) {
          dVar6 = dVar6 / (dVar6 - dVar17);
          local_d0 = (local_d0 - dVar20) * dVar6 + dVar20;
          dVar19 = (dVar19 - dVar16) * dVar6 + dVar16;
          dVar1 = (dVar1 - dVar4) * dVar6 + dVar4;
          param_5[3] = dVar1;
          param_5[4] = dVar19;
          param_5[5] = local_d0;
        }
      }
      else {
        dVar17 = dVar17 / (dVar17 - dVar6);
        *param_5 = (dVar4 - dVar1) * dVar17 + dVar1;
        param_5[1] = (dVar16 - dVar19) * dVar17 + dVar19;
        param_5[2] = (dVar20 - local_d0) * dVar17 + local_d0;
        lVar13 = DAT_14c992a20;
        lVar14 = DAT_14c992a50;
        lVar15 = DAT_14c992a40;
      }
      lVar12 = lVar12 + 1;
      if ((int)sVar2 <= (int)lVar12) {
        return;
      }
      dVar16 = dVar18;
      dVar4 = dVar5;
      dVar20 = dVar3;
      if (*param_6 < 2) {
        return;
      }
    }
    *param_6 = 0;
  }
  return;
}



// FUNCTION 1404aed08 FUN_1404aed08 body=68 status=ok
// SIG undefined FUN_1404aed08(void)

void FUN_1404aed08(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  FUN_1404aedb0();
  uVar1 = *(uint *)(param_1 + 0x28);
  if ((uVar1 & 4) != 0) {
    FUN_146d5a64c(param_1);
    uVar1 = *(uint *)(param_1 + 0x28);
  }
  if ((uVar1 & 8) != 0) {
    FUN_146d5ab22(param_1);
  }
  FUN_1404af68e(param_1,param_3);
  return;
}



// FUNCTION 1404aed4c FUN_1404aed4c body=100 status=ok
// SIG undefined FUN_1404aed4c(void)

void FUN_1404aed4c(undefined8 param_1,longlong param_2,int param_3,undefined4 param_4,
                  undefined8 param_5)

{
  if (DAT_14c75f054 == 1) {
    FUN_1449c6f44(param_1,(longlong)param_3 * 0x78 + *(longlong *)(param_2 + 0x30));
    return;
  }
  if (DAT_14c75f054 == 2) {
    FUN_146d41cb9(param_1,param_2,param_4,param_4,param_5);
    *(byte *)(param_2 + 0x28) = *(byte *)(param_2 + 0x28) & 0xfd;
    return;
  }
  FUN_146cba588(param_1,(longlong)param_3 * 0x78 + *(longlong *)(param_2 + 0x30));
  return;
}



// FUNCTION 1404aedb0 FUN_1404aedb0 body=152 status=ok
// SIG undefined FUN_1404aedb0(void)

void FUN_1404aedb0(double *param_1)

{
  double dVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (0 < *(int *)(param_1 + 9)) {
    lVar2 = 0xc;
    uVar3 = 0;
    do {
      dVar1 = param_1[10];
      if ((((ulonglong)param_1[5] & 1) == 0) ||
         (-param_1[2] <= (double)*(float *)((longlong)dVar1 + lVar2))) {
        if ((((ulonglong)param_1[5] & 2) != 0) &&
           ((double)*(float *)((longlong)dVar1 + lVar2) < *param_1)) {
          FUN_1404b0e58(param_1,uVar3 & 0xffffffff);
        }
      }
      else {
        *(undefined1 *)((longlong)dVar1 + 4 + lVar2) = 0;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x18;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 9));
  }
  FUN_1404aee48(param_1);
  return;
}



// FUNCTION 1404aee48 FUN_1404aee48 body=230 status=ok
// SIG undefined FUN_1404aee48(void)

void FUN_1404aee48(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  char *pcVar15;
  ulonglong uVar16;
  
  uVar4 = *(uint *)(param_1 + 0x48);
  uVar16 = 0;
  if (0 < (longlong)(int)uVar4) {
    uVar13 = 0;
    do {
      uVar14 = (ulonglong)uVar13;
      if (*(char *)(*(longlong *)(param_1 + 0x50) + 0x10 + uVar14 * 0x18) == '\0') {
        uVar9 = uVar13 + 1;
        if ((int)(uVar13 + 1) < (int)uVar4) {
          uVar9 = uVar4;
        }
        pcVar15 = (char *)(*(longlong *)(param_1 + 0x50) + uVar14 * 0x18 + 0x28);
        do {
          uVar14 = uVar14 + 1;
          uVar8 = uVar9;
          if ((ulonglong)(longlong)(int)uVar4 <= uVar14) break;
          uVar13 = uVar13 + 1;
          cVar3 = *pcVar15;
          pcVar15 = pcVar15 + 0x18;
          uVar8 = uVar13;
        } while (cVar3 != '\x01');
        uVar13 = uVar8;
        if (uVar13 == uVar4) break;
        uVar14 = (ulonglong)uVar13;
      }
      if (uVar16 != uVar14) {
        puVar11 = (undefined8 *)(uVar14 * 0x58 + *(longlong *)(param_1 + 0x40));
        puVar12 = (undefined8 *)(uVar16 * 0x58 + *(longlong *)(param_1 + 0x40));
        for (lVar10 = 0xb; lVar10 != 0; lVar10 = lVar10 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        }
        lVar10 = *(longlong *)(param_1 + 0x50);
        *(undefined8 *)(lVar10 + 0x10 + uVar16 * 0x18) =
             *(undefined8 *)(lVar10 + 0x10 + uVar14 * 0x18);
        puVar1 = (undefined4 *)(lVar10 + uVar14 * 0x18);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        puVar2 = (undefined4 *)(lVar10 + uVar16 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
      }
      uVar16 = uVar16 + 1;
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)uVar4);
  }
  FUN_1404aef2e(param_1 + 0x40,uVar16 & 0xffffffff,0);
  FUN_1404aefa0(param_1 + 0x50,uVar16 & 0xffffffff,0);
  return;
}



// FUNCTION 1404aef2e FUN_1404aef2e body=112 status=ok
// SIG undefined FUN_1404aef2e(void)

void FUN_1404aef2e(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146d3c1f6(param_1,iVar1);
    }
    FUN_146d674f9((longlong)iVar1 * 0x58 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146d67522(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1404aefa0 FUN_1404aefa0 body=118 status=ok
// SIG undefined FUN_1404aefa0(void)

void FUN_1404aefa0(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146d3c286(param_1,iVar1);
    }
    FUN_1404afe1c((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146d675c8(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1404af016 FUN_1404af016 body=236 status=ok
// SIG undefined FUN_1404af016(void)

void FUN_1404af016(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    *(undefined8 *)(param_1 + 0x94) = 0;
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      FUN_1400020a8();
    }
    *(undefined **)(param_1 + 0xa0) = &DAT_14c7585e0;
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    *(undefined8 *)(param_1 + 100) = 0;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      FUN_1400020a8();
    }
    *(undefined **)(param_1 + 0x70) = &DAT_14c7585e0;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1404af102 FUN_1404af102 body=451 status=ok
// SIG undefined FUN_1404af102(void)

int FUN_1404af102(longlong param_1,int param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  lVar3 = *(longlong *)(param_1 + 0x30);
  lVar10 = (longlong)param_2 * 0x78;
  uVar2 = *(uint *)(lVar3 + 100 + lVar10);
  uVar9 = *(uint *)(lVar3 + 0x68 + lVar10);
  uVar5 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
  uVar6 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = *(uint *)(param_1 + 0x94);
  lVar4 = *(longlong *)(param_1 + 0xa0);
  uVar6 = *(uint *)(lVar4 + (ulonglong)((uVar6 >> 0x10 ^ uVar6) & uVar5) * 4);
  uVar7 = 0;
  if (uVar6 != 0xffffffff) {
    do {
      if (*(uint *)(*(longlong *)(param_1 + 0xb0) + (longlong)(int)uVar6 * 0xc) == uVar2) {
        lVar1 = *(longlong *)(param_1 + 0xb0) + (longlong)(int)uVar6 * 0xc;
        uVar7 = 0;
        if (lVar1 != 0) {
          uVar7 = (uint)*(byte *)(lVar1 + 8);
        }
        goto LAB_1404af165;
      }
      uVar6 = *(uint *)(*(longlong *)(param_1 + 0xa8) + (ulonglong)uVar6 * 4);
    } while (uVar6 != 0xffffffff);
    uVar7 = 0;
  }
LAB_1404af165:
  uVar2 = *(uint *)(lVar3 + 0x6c + lVar10);
  uVar6 = (uVar9 >> 0x10 ^ uVar9) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = *(uint *)(lVar4 + (ulonglong)((uVar6 >> 0x10 ^ uVar6) & uVar5) * 4);
  uVar8 = 0;
  if (uVar6 != 0xffffffff) {
    do {
      if (*(uint *)(*(longlong *)(param_1 + 0xb0) + (longlong)(int)uVar6 * 0xc) == uVar9) {
        lVar1 = *(longlong *)(param_1 + 0xb0) + (longlong)(int)uVar6 * 0xc;
        uVar8 = 0;
        if (lVar1 != 0) {
          uVar8 = (uint)*(byte *)(lVar1 + 8);
        }
        break;
      }
      uVar6 = *(uint *)(*(longlong *)(param_1 + 0xa8) + (ulonglong)uVar6 * 4);
      uVar8 = 0;
    } while (uVar6 != 0xffffffff);
  }
  uVar9 = (uVar2 >> 0x10 ^ uVar2) * -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  uVar9 = *(uint *)(lVar4 + (ulonglong)((uVar9 >> 0x10 ^ uVar9) & uVar5) * 4);
  uVar5 = 0;
  if (uVar9 != 0xffffffff) {
    do {
      if (*(uint *)(*(longlong *)(param_1 + 0xb0) + (longlong)(int)uVar9 * 0xc) == uVar2) {
        lVar4 = *(longlong *)(param_1 + 0xb0) + (longlong)(int)uVar9 * 0xc;
        uVar5 = 0;
        if (lVar4 != 0) {
          uVar5 = (uint)*(byte *)(lVar4 + 8);
        }
        break;
      }
      uVar9 = *(uint *)(*(longlong *)(param_1 + 0xa8) + (ulonglong)uVar9 * 4);
      uVar5 = 0;
    } while (uVar9 != 0xffffffff);
  }
  return uVar7 + (int)*(char *)(lVar3 + 0x70 + lVar10) + uVar8 + uVar5;
}



// FUNCTION 1404af2c6 FUN_1404af2c6 body=407 status=ok
// SIG undefined FUN_1404af2c6(void)

void FUN_1404af2c6(longlong param_1,longlong *param_2)

{
  double *pdVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  *(undefined4 *)(param_1 + 0x16c) = 0xffffffff;
  if (*(int *)(param_1 + 0x5b4) < 0) {
    *(undefined4 *)(param_1 + 0x5b0) = 0;
    FUN_1404b2356(param_1 + 0x3f8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x5b0) = 0;
  }
  if (*(int *)(param_1 + 0x634) < 0) {
    *(undefined4 *)(param_1 + 0x630) = 0;
    FUN_146d72a40(param_1 + 0x5b8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x630) = 0;
  }
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(byte *)(param_1 + 0x374) = *(byte *)(param_1 + 0x374) & 0xcf;
  uVar2 = DAT_14c75f100;
  uVar4 = *(uint *)(param_2 + 1);
  if ((int)DAT_14c75f100 < (int)uVar4 && -1 < (int)DAT_14c75f100) {
    FUN_1429a4fc4(param_1,DAT_14c75f100,param_2);
    uVar4 = uVar2;
  }
  else if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0x5b4) < (int)uVar4) {
    FUN_1404b2356(param_1 + 0x3f8,uVar4);
  }
  if (uVar4 != 0) {
    uVar7 = 0xffffffff;
    uVar8 = 0x7fefffff;
    lVar5 = 0;
    do {
      pdVar1 = (double *)(*param_2 + 0x48 + lVar5);
      if (*pdVar1 <= (double)*(float *)(param_1 + 300) &&
          (double)*(float *)(param_1 + 300) != *pdVar1) {
        lVar6 = *param_2 + lVar5;
        uVar3 = FUN_1404af45e(param_1,lVar6);
        if (*(double *)(lVar6 + 0x48) <= (double)CONCAT44(uVar8,uVar7) &&
            (double)CONCAT44(uVar8,uVar7) != *(double *)(lVar6 + 0x48)) {
          *(undefined4 *)(param_1 + 0x16c) = uVar3;
          uVar7 = (undefined4)*(undefined8 *)(lVar6 + 0x48);
          uVar8 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x48) >> 0x20);
        }
      }
      lVar5 = lVar5 + 0x58;
    } while ((ulonglong)uVar4 * 0x58 - lVar5 != 0);
  }
  if (0 < *(int *)(param_1 + 0x5b0)) {
    lVar5 = param_1 + 0x3f8;
    if (*(longlong *)(param_1 + 0x5a8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x5a8);
    }
    if (*(int *)(lVar5 + 0x28) != *(int *)(param_1 + 0x338)) {
      *(int *)(param_1 + 0x338) = *(int *)(lVar5 + 0x28);
      *(byte *)(param_1 + 0x375) = *(byte *)(param_1 + 0x375) & 0xef;
    }
  }
  return;
}



// FUNCTION 1404af45e FUN_1404af45e body=459 status=ok
// SIG undefined FUN_1404af45e(void)

int FUN_1404af45e(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 uVar10;
  int iVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong lVar14;
  
  iVar11 = *(int *)(param_1 + 0x5b0);
  *(uint *)(param_1 + 0x5b0) = iVar11 + 1U;
  if (*(uint *)(param_1 + 0x5b4) < iVar11 + 1U) {
    FUN_146ce5792(param_1 + 0x3f8,iVar11);
  }
  lVar14 = param_1 + 0x3f8;
  if (*(longlong *)(param_1 + 0x5a8) != 0) {
    lVar14 = *(longlong *)(param_1 + 0x5a8);
  }
  dVar1 = param_2[2];
  dVar2 = param_2[1];
  dVar3 = param_2[5];
  dVar4 = param_2[4];
  dVar5 = param_2[3];
  dVar6 = param_2[8];
  dVar7 = param_2[7];
  lVar13 = (longlong)iVar11 * 0x6c;
  dVar8 = param_2[6];
  dVar9 = param_2[9];
  uVar12 = *(undefined4 *)(param_2 + 10);
  uVar10 = *(undefined1 *)((longlong)param_2 + 0x54);
  *(float *)(lVar14 + lVar13) = (float)*param_2;
  *(float *)(lVar14 + 4 + lVar13) = (float)dVar2;
  *(float *)(lVar14 + 8 + lVar13) = (float)dVar1;
  *(float *)(lVar14 + 0xc + lVar13) = (float)dVar5;
  *(float *)(lVar14 + 0x10 + lVar13) = (float)dVar4;
  *(float *)(lVar14 + 0x14 + lVar13) = (float)dVar3;
  *(float *)(lVar14 + 0x18 + lVar13) = (float)dVar8;
  *(float *)(lVar14 + 0x1c + lVar13) = (float)dVar7;
  *(float *)(lVar14 + 0x20 + lVar13) = (float)dVar6;
  *(float *)(lVar14 + 0x24 + lVar13) = (float)dVar9;
  *(undefined4 *)(lVar14 + 0x28 + lVar13) = uVar12;
  *(undefined1 *)(lVar14 + 0x2c + lVar13) = uVar10;
  dVar1 = param_2[2];
  dVar2 = param_2[1];
  *(float *)(lVar14 + 0x3c + lVar13) = (float)*param_2;
  *(float *)(lVar14 + 0x40 + lVar13) = (float)dVar2;
  *(float *)(lVar14 + 0x44 + lVar13) = (float)dVar1;
  dVar1 = param_2[5];
  dVar2 = param_2[4];
  *(float *)(lVar14 + 0x48 + lVar13) = (float)param_2[3];
  *(float *)(lVar14 + 0x4c + lVar13) = (float)dVar2;
  *(float *)(lVar14 + 0x50 + lVar13) = (float)dVar1;
  dVar1 = param_2[2];
  dVar2 = param_2[1];
  *(float *)(lVar14 + 0x54 + lVar13) = (float)*param_2;
  *(float *)(lVar14 + 0x58 + lVar13) = (float)dVar2;
  *(float *)(lVar14 + 0x5c + lVar13) = (float)dVar1;
  dVar1 = param_2[5];
  dVar2 = param_2[4];
  *(float *)(lVar14 + 0x60 + lVar13) = (float)param_2[3];
  *(float *)(lVar14 + 100 + lVar13) = (float)dVar2;
  *(float *)(lVar14 + 0x68 + lVar13) = (float)dVar1;
  *(undefined8 *)(lVar14 + 0x34 + lVar13) = 0;
  *(undefined1 *)(lVar14 + 0x30 + lVar13) = 0;
  return iVar11;
}



// FUNCTION 1404af629 FUN_1404af629 body=100 status=ok
// SIG undefined FUN_1404af629(void)

void FUN_1404af629(undefined8 param_1,longlong param_2,int param_3,undefined4 param_4,
                  undefined8 param_5)

{
  if (DAT_14c75f054 == 1) {
    FUN_1449c90bb(param_1,(longlong)param_3 * 0x78 + *(longlong *)(param_2 + 0x30));
    return;
  }
  if (DAT_14c75f054 == 2) {
    FUN_146d3de03(param_1,param_2,param_4,param_4,param_5);
    *(byte *)(param_2 + 0x28) = *(byte *)(param_2 + 0x28) & 0xfd;
    return;
  }
  FUN_146cbf627(param_1,(longlong)param_3 * 0x78 + *(longlong *)(param_2 + 0x30));
  return;
}



// FUNCTION 1404af68e FUN_1404af68e body=609 status=ok
// SIG undefined FUN_1404af68e(void)

void FUN_1404af68e(longlong param_1,double *param_2)

{
  double *pdVar1;
  longlong lVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  if (0 < *(int *)(param_1 + 0x48)) {
    lVar4 = 0x40;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x40);
      pdVar1 = (double *)(lVar2 + -0x28 + lVar4);
      dVar9 = *pdVar1 - param_2[4];
      dVar11 = pdVar1[1] - param_2[5];
      dVar6 = *(double *)(lVar2 + -0x18 + lVar4) - param_2[6];
      dVar3 = *param_2;
      dVar12 = -dVar3;
      dVar13 = -param_2[1];
      dVar7 = param_2[2] * -1.0;
      dVar8 = param_2[3] * 1.0;
      dVar15 = dVar9 * dVar7 - dVar12 * dVar6;
      dVar14 = dVar11 * dVar12 - dVar9 * dVar13;
      dVar10 = dVar6 * dVar13 - dVar11 * dVar7;
      dVar10 = dVar10 + dVar10;
      dVar15 = dVar15 + dVar15;
      dVar14 = dVar14 + dVar14;
      pdVar1 = (double *)(lVar2 + -0x28 + lVar4);
      *pdVar1 = (dVar14 * dVar13 - dVar15 * dVar7) + dVar8 * dVar10 + dVar9;
      pdVar1[1] = dVar3 * dVar14 + dVar7 * dVar10 + dVar8 * dVar15 + dVar11;
      *(double *)(lVar2 + -0x18 + lVar4) =
           dVar8 * dVar14 + dVar6 + (dVar15 * dVar12 - dVar10 * dVar13);
      pdVar1 = (double *)(lVar2 + -0x10 + lVar4);
      dVar15 = *pdVar1;
      dVar3 = pdVar1[1];
      dVar6 = *param_2;
      dVar9 = -dVar6;
      dVar11 = -param_2[1];
      dVar7 = param_2[2] * -1.0;
      dVar8 = param_2[3] * 1.0;
      dVar10 = dVar3 * dVar9 - dVar15 * dVar11;
      dVar12 = *(double *)(lVar2 + lVar4) * dVar11 - dVar3 * dVar7;
      dVar13 = dVar15 * dVar7 - dVar9 * *(double *)(lVar2 + lVar4);
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      dVar10 = dVar10 + dVar10;
      dVar14 = *(double *)(lVar2 + lVar4);
      pdVar1 = (double *)(lVar2 + -0x10 + lVar4);
      *pdVar1 = (dVar10 * dVar11 - dVar13 * dVar7) + dVar8 * dVar12 + dVar15;
      pdVar1[1] = dVar6 * dVar10 + dVar7 * dVar12 + dVar8 * dVar13 + dVar3;
      *(double *)(lVar2 + lVar4) = dVar8 * dVar10 + dVar14 + (dVar13 * dVar9 - dVar12 * dVar11);
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x58;
    } while (lVar5 < *(int *)(param_1 + 0x48));
  }
  return;
}



// FUNCTION 1404af8f0 FUN_1404af8f0 body=1256 status=ok
// SIG undefined FUN_1404af8f0(void)

void FUN_1404af8f0(double *param_1,int param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  char *pcVar2;
  float *pfVar3;
  int iVar4;
  double dVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  double *pdVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined1 uVar20;
  undefined8 *puVar21;
  uint uVar22;
  undefined4 *puVar23;
  float fVar24;
  undefined1 auStack_148 [32];
  int *local_128;
  int *local_120;
  double local_118;
  undefined1 local_101;
  ulonglong local_100;
  double *local_f8;
  double *local_f0;
  ulonglong local_e8;
  longlong local_e0;
  undefined8 *local_d8;
  uint local_d0;
  uint local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  int local_68;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((longlong)*(int *)(param_3 + 1) != 0) {
    local_e0 = (longlong)param_2 * 0x78;
    puVar23 = (undefined4 *)((longlong)param_1[6] + local_e0);
    puVar21 = (undefined8 *)*param_3;
    local_f8 = param_1 + 8;
    local_f0 = param_1 + 10;
    puVar9 = puVar21 + (longlong)*(int *)(param_3 + 1) * 0xb;
    do {
      iVar4 = *(int *)(param_1 + 9);
      if (iVar4 == *(int *)((longlong)param_1 + 0x4c)) break;
      local_118 = param_1[3];
      local_78 = *(undefined8 *)(puVar23 + 0x10);
      local_88 = *(undefined8 *)(puVar23 + 0xc);
      uStack_80 = *(undefined8 *)(puVar23 + 0xe);
      local_98 = *(undefined8 *)(puVar23 + 10);
      local_a8 = *(undefined8 *)(puVar23 + 6);
      uStack_a0 = *(undefined8 *)(puVar23 + 8);
      local_c8 = *puVar23;
      uStack_c4 = puVar23[1];
      uStack_c0 = puVar23[2];
      uStack_bc = puVar23[3];
      local_b8 = *(undefined8 *)(puVar23 + 4);
      local_128 = &local_64;
      local_120 = &local_68;
      local_d8 = puVar9;
      FUN_1404affdc(puVar21 + 3,&local_c8,&local_a8,&local_88);
      uVar22 = 0xffffffff;
      uVar16 = 0xffffffff;
      if ((longlong)local_64 != -1) {
        uVar16 = (ulonglong)(uint)puVar23[(longlong)local_64 + 0x19];
      }
      if ((longlong)local_68 != -1) {
        uVar22 = puVar23[(longlong)local_68 + 0x19];
      }
      pdVar10 = (double *)FUN_1404afe38(puVar23);
      fVar24 = (float)((double)puVar21[8] * pdVar10[2] +
                      (double)puVar21[6] * *pdVar10 + (double)puVar21[7] * pdVar10[1]);
      uVar20 = *param_1 < (double)fVar24;
      uVar15 = (uint)uVar16;
      if ((uVar15 == 0xffffffff) || (uVar22 == 0xffffffff)) {
        if ((uVar15 != 0xffffffff) && (uVar22 == 0xffffffff)) {
          uVar7 = ((uint)(uVar16 >> 0x10) ^ uVar15) * -0x7a143595;
          uVar8 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
          uVar8 = uVar8 >> 0x10 ^ uVar8;
          uVar7 = *(uint *)((longlong)param_1[0x14] +
                           (ulonglong)(*(uint *)((longlong)param_1 + 0x94) & uVar8) * 4);
          if (uVar7 != 0xffffffff) {
            dVar5 = param_1[0x16];
            do {
              if (*(uint *)((longlong)dVar5 + (longlong)(int)uVar7 * 0xc) == uVar15) {
                lVar11 = (longlong)dVar5 + (longlong)(int)uVar7 * 0xc;
                if (lVar11 != 0) {
                  if (*(char *)(lVar11 + 8) == '\0') {
                    lVar13 = (longlong)*(int *)(lVar11 + 4);
                    pfVar3 = (float *)((longlong)*local_f0 + 0xc + lVar13 * 0x18);
                    if (*pfVar3 <= fVar24 && fVar24 != *pfVar3) {
                      puVar1 = (ulonglong *)((longlong)*local_f0 + lVar13 * 0x18);
                      dVar5 = *local_f8;
                      puVar9 = puVar21;
                      puVar18 = (undefined8 *)((longlong)dVar5 + lVar13 * 0x58);
                      for (lVar14 = 0xb; lVar14 != 0; lVar14 = lVar14 + -1) {
                        *puVar18 = *puVar9;
                        puVar9 = puVar9 + 1;
                        puVar18 = puVar18 + 1;
                      }
                      *(undefined4 *)((longlong)dVar5 + 0x50 + lVar13 * 0x58) = puVar23[0x18];
                      *puVar1 = uVar16 | 0xffffffff00000000;
                      *(float *)((longlong)puVar1 + 0xc) = fVar24;
                      *(int *)(puVar1 + 1) = param_2;
                      *(undefined1 *)(lVar11 + 8) = uVar20;
                    }
                  }
                  goto LAB_1404afb79;
                }
                break;
              }
              uVar7 = *(uint *)((longlong)param_1[0x15] + (ulonglong)uVar7 * 4);
            } while (uVar7 != 0xffffffff);
          }
          uVar12 = (ulonglong)*(uint *)(param_1 + 0x17);
          uVar7 = *(uint *)(param_1 + 0x17) + 1;
          *(uint *)(param_1 + 0x17) = uVar7;
          if (*(uint *)((longlong)param_1 + 0xbc) < uVar7) {
            local_101 = uVar20;
            local_100 = uVar12;
            local_e8 = (ulonglong)uVar7;
            FUN_146d683c6(param_1 + 0x16,uVar12);
            uVar7 = (uint)local_e8;
            uVar12 = local_100;
            uVar20 = local_101;
          }
          lVar11 = (longlong)(int)(uint)uVar12;
          dVar5 = param_1[0x16];
          *(uint *)((longlong)dVar5 + lVar11 * 0xc) = uVar15;
          *(int *)((longlong)dVar5 + 4 + lVar11 * 0xc) = iVar4;
          *(undefined1 *)((longlong)dVar5 + 8 + lVar11 * 0xc) = uVar20;
          if (*(uint *)(param_1 + 0x13) <= (uint)uVar12) {
            uVar17 = (ulonglong)((uVar7 - 1) + (uint)(uVar7 == 0)) * 2 + 1;
            lVar11 = 0x3f;
            if (uVar17 != 0) {
              for (; uVar17 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            uVar19 = 1 << ((byte)lVar11 & 0x1f);
            uVar7 = 0x20;
            if (0x20 < uVar19) {
              uVar7 = uVar19;
            }
            local_100 = uVar12;
            FUN_1404b04e2(param_1 + 0x12,uVar7);
            uVar12 = local_100;
          }
          uVar17 = (ulonglong)(uVar8 & *(uint *)((longlong)param_1 + 0x94));
          *(undefined4 *)((longlong)param_1[0x15] + uVar12 * 4) =
               *(undefined4 *)((longlong)param_1[0x14] + uVar17 * 4);
          *(int *)((longlong)param_1[0x14] + uVar17 * 4) = (int)uVar12;
        }
      }
      else if (*param_1 < (double)fVar24) {
        pcVar2 = (char *)((longlong)param_1[6] + 0x70 + local_e0);
        *pcVar2 = *pcVar2 + '\x01';
        local_d0 = uVar22;
        if ((int)uVar15 < (int)uVar22) {
          local_d0 = uVar15;
        }
        local_cc = uVar22;
        if ((int)uVar22 < (int)uVar15) {
          local_cc = uVar15;
        }
        iVar6 = FUN_1404aff50(param_1,param_2,&local_d0);
        if (iVar6 != -1) {
          pcVar2 = (char *)((longlong)param_1[6] + 0x70 + (longlong)iVar6 * 0x78);
          *pcVar2 = *pcVar2 + '\x01';
        }
      }
      local_100 = CONCAT44(local_100._4_4_,param_2);
      iVar6 = *(int *)(param_1 + 9);
      *(uint *)(param_1 + 9) = iVar6 + 1U;
      if (*(uint *)((longlong)param_1 + 0x4c) < iVar6 + 1U) {
        FUN_146d3c1f6(local_f8,iVar6);
      }
      pdVar10 = local_f0;
      puVar9 = puVar21;
      puVar18 = (undefined8 *)((longlong)iVar6 * 0x58 + (longlong)*local_f8);
      for (lVar11 = 0xb; lVar11 != 0; lVar11 = lVar11 + -1) {
        *puVar18 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar18 = puVar18 + 1;
      }
      *(undefined4 *)((longlong)*local_f8 + 0x50 + (longlong)iVar4 * 0x58) = puVar23[0x18];
      FUN_1404afdda(local_f0);
      uVar12 = uVar16;
      if (uVar22 == 0xffffffff || (int)uVar15 < (int)uVar22) {
        uVar12 = (ulonglong)uVar22;
      }
      lVar11 = (longlong)iVar4 * 0x18;
      uVar17 = (ulonglong)uVar22;
      if (uVar22 == 0xffffffff || (int)uVar15 < (int)uVar22) {
        uVar17 = uVar16;
      }
      *(ulonglong *)((longlong)*pdVar10 + lVar11) = uVar17 | uVar12 << 0x20;
      *(float *)((longlong)*pdVar10 + 0xc + lVar11) = fVar24;
      *(int *)((longlong)*pdVar10 + 8 + lVar11) = (int)local_100;
      *(undefined1 *)((longlong)*pdVar10 + 0x10 + lVar11) = 1;
      param_2 = (int)local_100;
LAB_1404afb79:
      puVar21 = puVar21 + 0xb;
      puVar9 = local_d8;
    } while (puVar21 != local_d8);
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404afdda FUN_1404afdda body=66 status=ok
// SIG undefined FUN_1404afdda(void)

int FUN_1404afdda(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146d3c286(param_1,iVar1);
  }
  FUN_1404afe1c((longlong)iVar1 * 0x18 + *param_1,1);
  return iVar1;
}



// FUNCTION 1404afe1c FUN_1404afe1c body=27 status=ok
// SIG undefined FUN_1404afe1c(void)

void FUN_1404afe1c(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = 0xffffffff;
    *(undefined1 *)(param_1 + 2) = 0;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1404afe38 FUN_1404afe38 body=279 status=ok
// SIG undefined FUN_1404afe38(void)

double * FUN_1404afe38(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if ((param_1[9] == 1.79769313486232e+308) && (!NAN(param_1[9]))) {
    dVar5 = param_1[8] - param_1[2];
    dVar6 = param_1[7] - param_1[1];
    dVar7 = param_1[6] - *param_1;
    dVar2 = param_1[5] - param_1[2];
    dVar1 = param_1[4] - param_1[1];
    dVar3 = param_1[3] - *param_1;
    dVar4 = dVar3 * dVar6 - dVar7 * dVar1;
    dVar3 = dVar2 * dVar7 - dVar5 * dVar3;
    dVar2 = dVar1 * dVar5 - dVar2 * dVar6;
    dVar1 = dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3;
    if (((dVar1 != 1.0) || (dVar5 = dVar2, dVar6 = dVar4, dVar7 = dVar3, NAN(dVar1))) &&
       (dVar5 = DAT_14c8464e0, dVar6 = DAT_14c8464f0, dVar7 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar1)) {
      dVar1 = 1.0 / SQRT(dVar1);
      dVar5 = dVar2 * dVar1;
      dVar6 = dVar4 * dVar1;
      dVar7 = dVar3 * dVar1;
    }
    param_1[9] = dVar5;
    param_1[10] = dVar7;
    param_1[0xb] = dVar6;
  }
  return param_1 + 9;
}



// FUNCTION 1404aff50 FUN_1404aff50 body=140 status=ok
// SIG undefined FUN_1404aff50(void)

int FUN_1404aff50(longlong param_1,int param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar1 = *param_3;
  uVar2 = (uVar1 >> 0x21 ^ uVar1) * -0xae502812aa7333;
  lVar3 = (uVar2 >> 0x21 ^ uVar2) * -0x3b314601e57a13ad;
  uVar4 = *(uint *)(*(longlong *)(param_1 + 0x70) +
                   (ulonglong)
                   (((uint)((ulonglong)lVar3 >> 0x21) ^ (uint)lVar3) & *(uint *)(param_1 + 100)) * 4
                   );
  if (uVar4 != 0xffffffff) {
    do {
      if (*(ulonglong *)(*(longlong *)(param_1 + 0x80) + (longlong)(int)uVar4 * 0x10) == uVar1) {
        lVar3 = *(longlong *)(param_1 + 0x80) + (longlong)(int)uVar4 * 0x10;
        if (lVar3 == 0) {
          return -1;
        }
        if (*(int *)(lVar3 + 8) != param_2) {
          return *(int *)(lVar3 + 8);
        }
        return *(int *)(lVar3 + 0xc);
      }
      uVar4 = *(uint *)(*(longlong *)(param_1 + 0x78) + (ulonglong)uVar4 * 4);
    } while (uVar4 != 0xffffffff);
  }
  return -1;
}



// FUNCTION 1404affdc FUN_1404affdc body=845 status=ok
// SIG undefined FUN_1404affdc(void)

undefined8
FUN_1404affdc(double *param_1,double *param_2,double *param_3,double *param_4,undefined4 *param_5,
             undefined4 *param_6,double param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  *param_5 = 0xffffffff;
  *param_6 = 0xffffffff;
  dVar4 = param_4[2];
  dVar2 = param_2[2] - dVar4;
  dVar5 = *param_4;
  dVar10 = param_4[1];
  dVar3 = param_2[1] - dVar10;
  dVar9 = *param_2 - dVar5;
  dVar6 = param_3[2] - dVar4;
  dVar1 = param_3[1] - dVar10;
  dVar8 = *param_3 - dVar5;
  dVar11 = dVar2 * dVar2 + dVar9 * dVar9 + dVar3 * dVar3;
  dVar12 = dVar2 * dVar6 + dVar9 * dVar8 + dVar3 * dVar1;
  dVar7 = dVar6 * dVar6 + dVar8 * dVar8 + dVar1 * dVar1;
  dVar3 = dVar2 * (param_1[2] - dVar4) + dVar9 * (*param_1 - dVar5) + dVar3 * (param_1[1] - dVar10);
  dVar5 = (param_1[2] - dVar4) * dVar6 + (*param_1 - dVar5) * dVar8 + (param_1[1] - dVar10) * dVar1;
  dVar4 = dVar11 * dVar7 - dVar12 * dVar12;
  if (dVar4 <= 9.99999993922529e-09) {
    dVar10 = 0.0;
    if ((dVar11 <= 9.99999993922529e-09) ||
       (9.99999993922529e-09 < dVar7 &&
        ((0.0 <= dVar5 && dVar5 <= dVar7) && (dVar3 < 0.0 || dVar11 < dVar3)))) {
      if (9.99999993922529e-09 < dVar7) {
        dVar4 = dVar5 / dVar7;
        dVar10 = 1.0 - dVar4;
        dVar8 = 0.0;
        goto LAB_1404b0186;
      }
      dVar8 = 1.0;
    }
    else {
      dVar8 = dVar3 / dVar11;
      dVar10 = 1.0 - dVar8;
    }
    dVar4 = 0.0;
  }
  else {
    dVar4 = 1.0 / dVar4;
    dVar8 = (dVar7 * dVar3 + dVar5 * -dVar12) * dVar4;
    dVar4 = (dVar3 * -dVar12 + dVar11 * dVar5) * dVar4;
    dVar10 = (1.0 - dVar8) - dVar4;
  }
LAB_1404b0186:
  if (ABS(dVar8 + -1.0) <= param_7) {
    *param_5 = 0;
  }
  else if (ABS(dVar4 + -1.0) <= param_7) {
    *param_5 = 1;
  }
  else if (ABS(dVar10 + -1.0) <= param_7) {
    *param_5 = 2;
  }
  else if (ABS(dVar8) <= param_7) {
    *param_5 = 1;
    *param_6 = 2;
  }
  else if (ABS(dVar4) <= param_7) {
    *param_5 = 2;
    *param_6 = 0;
  }
  else {
    if (param_7 < ABS(dVar10)) {
      return 0;
    }
    *param_5 = 0;
    *param_6 = 1;
  }
  return 1;
}



// FUNCTION 1404b032a FUN_1404b032a body=83 status=ok
// SIG undefined FUN_1404b032a(void)

void FUN_1404b032a(longlong param_1,int param_2,undefined4 param_3)

{
  FUN_1404b03aa(param_1 + 0x30);
  FUN_1404b03d6(param_1 + 0x40,param_3);
  FUN_1404b037e(param_1 + 0x50,param_3);
  FUN_1404b0402(param_1 + 0x60,param_2 * 2);
  FUN_1404b0472(param_1 + 0x90,param_3);
  return;
}



// FUNCTION 1404b037e FUN_1404b037e body=42 status=ok
// SIG undefined FUN_1404b037e(void)

void FUN_1404b037e(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_1404b0b9a();
    return;
  }
  return;
}



// FUNCTION 1404b03aa FUN_1404b03aa body=42 status=ok
// SIG undefined FUN_1404b03aa(void)

void FUN_1404b03aa(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_1404b07be();
    return;
  }
  return;
}



// FUNCTION 1404b03d6 FUN_1404b03d6 body=42 status=ok
// SIG undefined FUN_1404b03d6(void)

void FUN_1404b03d6(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_1404b0906();
    return;
  }
  return;
}



// FUNCTION 1404b0402 FUN_1404b0402 body=67 status=ok
// SIG undefined FUN_1404b0402(void)

void FUN_1404b0402(int *param_1,ulonglong param_2)

{
  if (param_1[2] != 0) {
    memset(*(void **)(param_1 + 4),(int)CONCAT71((int7)(param_2 >> 8),0xff),
           (ulonglong)(uint)(*param_1 << 2));
  }
  FUN_1404b04e2(param_1,param_2 & 0xffffffff);
  FUN_1404b0446(param_1 + 8,param_2 & 0xffffffff);
  return;
}



// FUNCTION 1404b0446 FUN_1404b0446 body=42 status=ok
// SIG undefined FUN_1404b0446(void)

void FUN_1404b0446(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_1404b06dc();
    return;
  }
  return;
}



// FUNCTION 1404b0472 FUN_1404b0472 body=67 status=ok
// SIG undefined FUN_1404b0472(void)

void FUN_1404b0472(int *param_1,ulonglong param_2)

{
  if (param_1[2] != 0) {
    memset(*(void **)(param_1 + 4),(int)CONCAT71((int7)(param_2 >> 8),0xff),
           (ulonglong)(uint)(*param_1 << 2));
  }
  FUN_1404b04e2(param_1,param_2 & 0xffffffff);
  FUN_1404b04b6(param_1 + 8,param_2 & 0xffffffff);
  return;
}



// FUNCTION 1404b04b6 FUN_1404b04b6 body=42 status=ok
// SIG undefined FUN_1404b04b6(void)

void FUN_1404b04b6(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_1404b0a4e();
    return;
  }
  return;
}



// FUNCTION 1404b04e2 FUN_1404b04e2 body=230 status=ok
// SIG undefined FUN_1404b04e2(void)

void FUN_1404b04e2(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  void *_Dst;
  undefined8 uVar4;
  
  uVar1 = param_1[2];
  if (uVar1 != param_2) {
    if (param_2 == 0) {
      if (uVar1 != 0) {
        param_1[1] = 0;
        param_1[2] = 0;
        if (*(longlong *)(param_1 + 4) != 0) {
          FUN_1400020a8();
        }
        *(undefined **)(param_1 + 4) = &DAT_14c7585e0;
        if (*(longlong *)(param_1 + 6) != 0) {
          FUN_1400020a8();
        }
        param_1[6] = 0;
        param_1[7] = 0;
      }
    }
    else {
      if (uVar1 == 0) {
        uVar2 = *param_1;
        param_1[1] = uVar2 - 1 & 0xffff;
        uVar4 = 0;
        pvVar3 = (void *)FUN_14001cc68((ulonglong)uVar2 * 4 + (ulonglong)((ulonglong)uVar2 == 0),
                                       0x10);
        *(void **)(param_1 + 4) = pvVar3;
        memset(pvVar3,(int)CONCAT71((int7)((ulonglong)uVar4 >> 8),0xff),(ulonglong)(uVar2 * 4));
      }
      _Dst = (void *)FUN_14001cc68((ulonglong)param_2 << 2,0x10);
      pvVar3 = *(void **)(param_1 + 6);
      if (pvVar3 != (void *)0x0) {
        memcpy(_Dst,pvVar3,(ulonglong)(uVar1 << 2));
        FUN_1400020a8(pvVar3);
      }
      param_1[2] = param_2;
      *(void **)(param_1 + 6) = _Dst;
    }
  }
  return;
}



// FUNCTION 1404b05c8 FUN_1404b05c8 body=161 status=ok
// SIG undefined FUN_1404b05c8(void)

void FUN_1404b05c8(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  iVar1 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
    FUN_146d97efa((longlong *)(param_1 + 0x30),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  lVar4 = (longlong)iVar1 * 0x78;
  puVar5 = (undefined8 *)(lVar2 + lVar4);
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined8 *)(lVar2 + 0x48 + lVar4) = 0x7fefffffffffffff;
  *(undefined8 *)(lVar2 + 0x50 + lVar4) = 0x7fefffffffffffff;
  *(undefined8 *)(lVar2 + 0x58 + lVar4) = 0x7fefffffffffffff;
  *(undefined4 *)(lVar2 + 0x60 + lVar4) = param_3;
  *(undefined4 *)(lVar2 + 100 + lVar4) = param_4;
  *(undefined4 *)(lVar2 + 0x68 + lVar4) = param_5;
  *(undefined4 *)(lVar2 + 0x6c + lVar4) = param_6;
  *(undefined2 *)(lVar2 + 0x70 + lVar4) = 0xff00;
  *(undefined1 *)(lVar2 + 0x72 + lVar4) = 1;
  return;
}



// FUNCTION 1404b066a FUN_1404b066a body=113 status=ok
// SIG undefined FUN_1404b066a(void)

void FUN_1404b066a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar2 = 0x6c;
    uVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x30);
      FUN_1449c6dd2(param_1,uVar3 & 0xffffffff,*(undefined4 *)(lVar1 + -8 + lVar2),
                    *(undefined4 *)(lVar1 + -4 + lVar2));
      FUN_1449c6dd2(param_1,uVar3 & 0xffffffff,*(undefined4 *)(lVar1 + -4 + lVar2),
                    *(undefined4 *)(lVar1 + lVar2));
      FUN_1449c6dd2(param_1,uVar3 & 0xffffffff,*(undefined4 *)(lVar1 + lVar2),
                    *(undefined4 *)(lVar1 + -8 + lVar2));
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x78;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x38));
  }
  return;
}



// FUNCTION 1404b06dc FUN_1404b06dc body=226 status=ok
// SIG undefined FUN_1404b06dc(void)

void FUN_1404b06dc(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1404b07be FUN_1404b07be body=328 status=ok
// SIG undefined FUN_1404b07be(void)

void FUN_1404b07be(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x78;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1404b0828;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_1404b0828:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x78)) {
      uVar5 = uVar3 / 0x78 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x78,8);
  }
  return;
}



// FUNCTION 1404b0906 FUN_1404b0906 body=328 status=ok
// SIG undefined FUN_1404b0906(void)

void FUN_1404b0906(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x58;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1404b0970;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_1404b0970:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x58)) {
      uVar5 = uVar3 / 0x58 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x58,8);
  }
  return;
}



// FUNCTION 1404b0a4e FUN_1404b0a4e body=332 status=ok
// SIG undefined FUN_1404b0a4e(void)

void FUN_1404b0a4e(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0xc;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1404b0abc;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_1404b0abc:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0xc)) {
      uVar5 = uVar3 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0xc,4);
  }
  return;
}



// FUNCTION 1404b0b9a FUN_1404b0b9a body=332 status=ok
// SIG undefined FUN_1404b0b9a(void)

void FUN_1404b0b9a(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1404b0c08;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_1404b0c08:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x18)) {
      uVar5 = uVar3 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x18,8);
  }
  return;
}



// FUNCTION 1404b0ce6 FUN_1404b0ce6 body=269 status=ok
// SIG undefined FUN_1404b0ce6(void)

void FUN_1404b0ce6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1404b0df3 FUN_1404b0df3 body=100 status=ok
// SIG undefined FUN_1404b0df3(void)

void FUN_1404b0df3(undefined8 param_1,longlong param_2,int param_3,undefined4 param_4,
                  undefined8 param_5)

{
  if (DAT_14c75f054 == 1) {
    FUN_1404c02c0(param_1,(longlong)param_3 * 0x78 + *(longlong *)(param_2 + 0x30));
    return;
  }
  if (DAT_14c75f054 == 2) {
    FUN_146d3f5dd(param_1,param_2,param_4,param_4,param_5);
    *(byte *)(param_2 + 0x28) = *(byte *)(param_2 + 0x28) & 0xfd;
    return;
  }
  FUN_146cbdae1(param_1,(longlong)param_3 * 0x78 + *(longlong *)(param_2 + 0x30));
  return;
}



// FUNCTION 1404b0e58 FUN_1404b0e58 body=2941 status=ok
// SIG undefined FUN_1404b0e58(void)

void FUN_1404b0e58(longlong param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  double dVar15;
  int iVar16;
  char cVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  double *pdVar22;
  longlong lVar23;
  double *pdVar24;
  int iVar25;
  uint uVar26;
  double *pdVar27;
  int iVar28;
  longlong lVar29;
  longlong lVar30;
  double *pdVar31;
  double *pdVar32;
  double *pdVar33;
  double *pdVar34;
  double *pdVar35;
  longlong lVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  undefined4 uVar39;
  uint uVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  float fVar45;
  double dVar46;
  undefined1 auStack_178 [40];
  double *local_150;
  longlong local_148;
  double *local_140;
  double *local_138;
  int local_12c;
  double *local_128;
  double local_120;
  double local_118;
  double local_110;
  int *local_108;
  int local_100;
  int local_fc;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar20 = (longlong)param_2;
  local_150 = (double *)(lVar20 * 0x58 + *(longlong *)(param_1 + 0x40));
  lVar21 = *(longlong *)(param_1 + 0x50);
  uVar26 = *(uint *)(lVar21 + 8 + lVar20 * 0x18);
  pdVar35 = (double *)((longlong)(int)uVar26 * 0x78 + *(longlong *)(param_1 + 0x30));
  local_138 = (double *)FUN_1404afe38(pdVar35);
  iVar12 = *(int *)(lVar21 + lVar20 * 0x18);
  if (iVar12 != -1) {
    piVar1 = (int *)(lVar21 + lVar20 * 0x18);
    fVar2 = (float)piVar1[3];
    dVar42 = (double)fVar2;
    if (piVar1[1] == -1) {
      local_148 = param_1;
      if (DAT_14c75f094 == '\0') {
        if (0 < *(int *)(param_1 + 0x38)) {
          lVar21 = 0;
          uVar37 = 0;
          do {
            if (uVar26 != uVar37) {
              lVar20 = *(longlong *)(local_148 + 0x30);
              lVar23 = uVar37 * 0x78 + lVar20;
              pdVar35 = (double *)(lVar21 + lVar20);
              iVar12 = *piVar1;
              if (*(int *)(lVar20 + 100 + lVar21) == iVar12) {
                pdVar32 = (double *)(lVar23 + 8);
                pdVar31 = (double *)(lVar23 + 0x10);
                pdVar22 = (double *)(lVar23 + 0x20);
                pdVar33 = (double *)(lVar23 + 0x28);
                lVar36 = 0x40;
                lVar29 = 0x38;
                pdVar24 = (double *)(lVar23 + 0x30);
                pdVar27 = (double *)(lVar23 + 0x18);
                pdVar34 = pdVar35;
              }
              else if (*(int *)(lVar20 + 0x68 + lVar21) == iVar12) {
                pdVar34 = (double *)(lVar23 + 0x18);
                pdVar32 = (double *)(lVar23 + 0x20);
                pdVar31 = (double *)(lVar23 + 0x28);
                pdVar22 = (double *)(lVar23 + 0x38);
                pdVar33 = (double *)(lVar23 + 0x40);
                lVar36 = 0x10;
                lVar29 = 8;
                pdVar24 = pdVar35;
                pdVar27 = (double *)(lVar23 + 0x30);
              }
              else {
                if (*(int *)(lVar20 + 0x6c + lVar21) != iVar12) goto LAB_1404b1615;
                pdVar34 = (double *)(lVar23 + 0x30);
                pdVar32 = (double *)(lVar21 + lVar20 + 0x38);
                pdVar31 = (double *)(lVar21 + lVar20 + 0x40);
                pdVar22 = (double *)(lVar21 + lVar20 + 8);
                pdVar33 = (double *)(lVar21 + lVar20 + 0x10);
                pdVar24 = (double *)(lVar23 + 0x18);
                lVar36 = 0x28;
                lVar29 = 0x20;
                pdVar27 = pdVar35;
              }
              pdVar34 = (double *)*pdVar34;
              dVar43 = *pdVar32;
              dVar3 = *pdVar31;
              dVar4 = *pdVar33;
              dVar41 = *pdVar22;
              dVar46 = *pdVar27;
              dVar44 = *(double *)(lVar21 + lVar36 + lVar20);
              dVar5 = *(double *)(lVar21 + lVar29 + lVar20);
              dVar6 = *pdVar24;
              local_140 = pdVar34;
              pdVar35 = (double *)FUN_1404afe38();
              dVar4 = dVar4 - dVar3;
              dVar41 = dVar41 - dVar43;
              dVar46 = dVar46 - (double)pdVar34;
              dVar15 = local_150[6];
              dVar7 = local_150[7];
              dVar8 = local_150[8];
              dVar9 = *pdVar35;
              dVar10 = pdVar35[1];
              dVar11 = pdVar35[2];
              dVar4 = (dVar15 * dVar41 - dVar46 * dVar7) * dVar11 +
                      (dVar7 * dVar4 - dVar41 * dVar8) * dVar9 +
                      (dVar46 * dVar8 - dVar4 * dVar15) * dVar10;
              dVar44 = dVar44 - dVar3;
              dVar5 = dVar5 - dVar43;
              dVar43 = (dVar15 * dVar5 - (dVar6 - (double)local_140) * dVar7) * dVar11 +
                       (dVar7 * dVar44 - dVar5 * dVar8) * dVar9 +
                       (dVar8 * (dVar6 - (double)local_140) - dVar44 * dVar15) * dVar10;
              uVar38 = -(ulonglong)(0.0 < dVar4);
              dVar3 = (double)(uVar38 & 0x3ff0000000000000 |
                              ~uVar38 & (ulonglong)
                                        ((uint)(-(ulonglong)(dVar4 < 0.0) >> 0x20) & 0xbff00000) <<
                                        0x20);
              uVar38 = -(ulonglong)(0.0 < dVar43);
              dVar43 = (double)(uVar38 & 0x3ff0000000000000 |
                               (ulonglong)
                               (~(uint)(uVar38 >> 0x20) &
                               (uint)(-(ulonglong)(dVar43 < 0.0) >> 0x20) & 0xbff00000) << 0x20);
              if ((dVar3 == dVar43) && (!NAN(dVar3) && !NAN(dVar43))) {
                if (0.0 < dVar8 * ((*(double *)(lVar20 + 0x10 + lVar21) +
                                    *(double *)(lVar20 + 0x28 + lVar21) +
                                   *(double *)(lVar20 + 0x40 + lVar21)) / 3.0 - local_150[5]) +
                          dVar15 * ((*(double *)(lVar20 + lVar21) +
                                     *(double *)(lVar20 + 0x18 + lVar21) +
                                    *(double *)(lVar20 + 0x30 + lVar21)) / 3.0 - local_150[3]) +
                          dVar7 * ((*(double *)(lVar20 + 8 + lVar21) +
                                    *(double *)(lVar20 + 0x20 + lVar21) +
                                   *(double *)(lVar20 + 0x38 + lVar21)) / 3.0 - local_150[4])) {
                  dVar43 = (double)(float)(local_138[2] * dVar11 +
                                          *local_138 * dVar9 + local_138[1] * dVar10) - dVar42;
                  if (*(double *)(local_148 + 8) <= dVar43 && dVar43 != *(double *)(local_148 + 8))
                  {
                    *(undefined1 *)(piVar1 + 4) = 0;
                    break;
                  }
                  local_150[6] = dVar9;
                  local_150[7] = dVar10;
                  local_150[8] = dVar11;
                  dVar43 = local_150[9];
                  *local_150 = local_150[3] + dVar9 * dVar43;
                  local_150[1] = local_150[4] + dVar10 * dVar43;
                  local_150[2] = local_150[5] + dVar11 * dVar43;
                }
              }
            }
LAB_1404b1615:
            uVar37 = uVar37 + 1;
            lVar21 = lVar21 + 0x78;
          } while ((longlong)uVar37 < (longlong)*(int *)(local_148 + 0x38));
        }
      }
      else {
        local_108 = piVar1;
        if (*(int *)((longlong)pdVar35 + 100) == iVar12) {
          lVar21 = 0x10;
          lVar20 = 8;
          pdVar32 = pdVar35;
        }
        else if (*(int *)(pdVar35 + 0xd) == iVar12) {
          lVar21 = 0x28;
          lVar20 = 0x20;
          pdVar32 = pdVar35 + 3;
        }
        else {
          if (*(int *)((longlong)pdVar35 + 0x6c) != iVar12) goto LAB_1404b1088;
          lVar21 = 0x40;
          lVar20 = 0x38;
          pdVar32 = pdVar35 + 6;
        }
        if (0 < *(int *)(param_1 + 0x38)) {
          local_110 = *(double *)((longlong)pdVar35 + lVar21);
          local_118 = *(double *)((longlong)pdVar35 + lVar20);
          local_120 = *pdVar32;
          local_128 = local_150 + 6;
          lVar20 = 0;
          lVar21 = 0;
          do {
            lVar29 = local_148;
            lVar23 = *(longlong *)(param_1 + 0x30);
            lVar36 = lVar21 * 0x78 + lVar23;
            iVar13 = *(int *)(lVar23 + 100 + lVar20);
            iVar14 = *(int *)(lVar23 + 0x68 + lVar20);
            if (iVar13 == iVar12) {
              iVar19 = *(int *)(lVar23 + 0x6c + lVar20);
              iVar25 = iVar14;
              iVar16 = iVar19;
LAB_1404b1211:
              local_12c = iVar16;
              iVar16 = iVar25;
              iVar28 = iVar12;
              if (iVar25 != -1 && iVar25 <= iVar12) {
                iVar16 = iVar12;
                iVar28 = iVar25;
              }
              local_f8 = CONCAT44(iVar16,iVar28);
              local_100 = iVar12;
              if (iVar19 < iVar12) {
                local_100 = iVar19;
              }
              local_fc = iVar19;
              if (iVar19 <= iVar12) {
                local_fc = iVar12;
              }
              local_140 = (double *)(lVar23 + lVar20);
              cVar17 = FUN_1404b19d6(local_148,&local_f8);
              if ((cVar17 == '\0') || (cVar17 = FUN_1404b19d6(lVar29,&local_100), cVar17 == '\0')) {
                local_128[2] = local_138[2];
                dVar42 = local_138[1];
                *local_128 = *local_138;
                local_128[1] = dVar42;
                dVar42 = local_150[9];
                dVar43 = local_138[1];
                dVar3 = local_138[2];
                *local_150 = *local_138 * dVar42 + local_150[3];
                local_150[1] = dVar43 * dVar42 + local_150[4];
                local_150[2] = dVar42 * dVar3 + local_150[5];
                break;
              }
              pdVar35 = local_140;
              iVar28 = local_12c;
              if (iVar13 != iVar12) goto LAB_1404b11dc;
              pdVar31 = (double *)(lVar36 + 0x18);
              pdVar22 = (double *)(lVar36 + 0x20);
              pdVar32 = (double *)(lVar36 + 0x28);
              pdVar35 = (double *)(lVar36 + 0x30);
              lVar29 = 0x40;
              lVar30 = 0x38;
LAB_1404b12d7:
              param_1 = local_148;
              dVar42 = *pdVar32;
              dVar43 = *pdVar22;
              dVar3 = *pdVar31;
              dVar4 = *(double *)(lVar20 + lVar29 + lVar23);
              dVar41 = *(double *)(lVar20 + lVar30 + lVar23);
              dVar46 = *pdVar35;
              pdVar35 = (double *)FUN_1404afe38();
              dVar42 = dVar42 - local_110;
              dVar43 = dVar43 - local_118;
              dVar3 = dVar3 - local_120;
              dVar44 = *pdVar35;
              dVar5 = pdVar35[1];
              dVar6 = pdVar35[2];
              dVar15 = (dVar44 * dVar43 - dVar3 * dVar5) * local_150[8] +
                       (dVar5 * dVar42 - dVar43 * dVar6) * local_150[6] +
                       (dVar6 * dVar3 - dVar42 * dVar44) * local_150[7];
              if ((dVar42 * dVar42 + dVar3 * dVar3 + dVar43 * dVar43) * -1e-08 <=
                  ABS(dVar15) * dVar15) {
                dVar4 = local_110 - dVar4;
                dVar46 = local_120 - dVar46;
                dVar41 = local_118 - dVar41;
                dVar42 = local_150[8] * (dVar44 * dVar41 + -dVar5 * dVar46) +
                         local_150[6] * (dVar5 * dVar4 + dVar41 * -dVar6) +
                         (dVar46 * dVar6 + dVar4 * -dVar44) * local_150[7];
                if ((dVar4 * dVar4 + dVar46 * dVar46 + dVar41 * dVar41) * -1e-08 <=
                    ABS(dVar42) * dVar42) {
                  local_128[2] = pdVar35[2];
                  dVar42 = pdVar35[1];
                  *local_128 = *pdVar35;
                  local_128[1] = dVar42;
                  dVar42 = local_150[9];
                  dVar43 = pdVar35[1];
                  dVar3 = pdVar35[2];
                  *local_150 = *pdVar35 * dVar42 + local_150[3];
                  local_150[1] = dVar43 * dVar42 + local_150[4];
                  local_150[2] = dVar42 * dVar3 + local_150[5];
                  local_108[2] = (int)lVar21;
                  break;
                }
              }
            }
            else {
              iVar28 = *(int *)(lVar23 + 0x6c + lVar20);
              iVar19 = iVar13;
              iVar25 = iVar28;
              iVar16 = iVar28;
              if ((iVar14 == iVar12) ||
                 (pdVar35 = (double *)(lVar23 + lVar20), iVar19 = iVar14, iVar25 = iVar13,
                 iVar16 = iVar12, iVar28 == iVar12)) goto LAB_1404b1211;
LAB_1404b11dc:
              if (iVar14 == iVar12) {
                pdVar31 = (double *)(lVar36 + 0x30);
                pdVar22 = (double *)(lVar36 + 0x38);
                pdVar32 = (double *)(lVar36 + 0x40);
                lVar29 = 0x10;
                lVar30 = 8;
                goto LAB_1404b12d7;
              }
              param_1 = local_148;
              if (iVar28 == iVar12) {
                pdVar22 = (double *)(lVar23 + lVar20 + 8);
                pdVar32 = (double *)(lVar23 + lVar20 + 0x10);
                lVar29 = 0x28;
                lVar30 = 0x20;
                pdVar31 = pdVar35;
                pdVar35 = (double *)(lVar36 + 0x18);
                goto LAB_1404b12d7;
              }
            }
            lVar21 = lVar21 + 1;
            lVar20 = lVar20 + 0x78;
          } while (lVar21 < *(int *)(param_1 + 0x38));
        }
      }
    }
    else {
      local_f8 = *(undefined8 *)piVar1;
      uVar18 = FUN_1404aff50(param_1,uVar26);
      if (uVar18 != 0xffffffff) {
        pdVar35 = (double *)
                  FUN_1404afe38((longlong)(int)uVar18 * 0x78 + *(longlong *)(param_1 + 0x30));
        dVar43 = *pdVar35;
        dVar3 = pdVar35[1];
        dVar4 = *local_138;
        uVar39 = SUB84(dVar4,0);
        uVar40 = (uint)((ulonglong)dVar4 >> 0x20);
        dVar41 = local_138[1];
        dVar46 = pdVar35[2];
        dVar44 = local_138[2];
        fVar45 = (float)(dVar46 * dVar44 + dVar43 * dVar4 + dVar3 * dVar41);
        if (fVar2 < fVar45) {
          dVar4 = (double)fVar45 - dVar42;
          if (*(double *)(param_1 + 8) <= dVar4 && dVar4 != *(double *)(param_1 + 8)) {
            *(undefined1 *)(piVar1 + 4) = 0;
          }
          else {
            dVar4 = local_150[8] * dVar46 + local_150[6] * dVar43 + local_150[7] * dVar3;
            if (dVar4 <= dVar42) {
              if (fVar2 <= -1e-08) {
                dVar44 = -dVar44;
                dVar41 = -dVar41;
                uVar40 = uVar40 ^ 0x80000000;
              }
            }
            else {
              dVar41 = dVar3;
              dVar44 = dVar46;
              if (dVar4 <= -9.99999993922529e-09) {
                dVar44 = -dVar46;
                dVar41 = -dVar3;
                dVar43 = -dVar43;
              }
              uVar39 = SUB84(dVar43,0);
              uVar40 = (uint)((ulonglong)dVar43 >> 0x20);
              uVar26 = uVar18;
            }
            local_150[6] = (double)CONCAT44(uVar40,uVar39);
            local_150[7] = dVar41;
            local_150[8] = dVar44;
            dVar42 = local_150[9];
            *local_150 = (double)CONCAT44(uVar40,uVar39) * dVar42 + local_150[3];
            local_150[1] = dVar41 * dVar42 + local_150[4];
            local_150[2] = dVar44 * dVar42 + local_150[5];
            piVar1[2] = uVar26;
          }
        }
      }
    }
  }
LAB_1404b1088:
  if ((local_f0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404b19d6 FUN_1404b19d6 body=138 status=ok
// SIG undefined FUN_1404b19d6(void)

undefined8 FUN_1404b19d6(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *param_2;
  uVar3 = (uVar1 >> 0x21 ^ uVar1) * -0xae502812aa7333;
  lVar4 = (uVar3 >> 0x21 ^ uVar3) * -0x3b314601e57a13ad;
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x70) +
                   (ulonglong)
                   (((uint)((ulonglong)lVar4 >> 0x21) ^ (uint)lVar4) & *(uint *)(param_1 + 100)) * 4
                   );
  if (uVar2 != 0xffffffff) {
    do {
      if (*(ulonglong *)(*(longlong *)(param_1 + 0x80) + (longlong)(int)uVar2 * 0x10) == uVar1) {
        lVar4 = *(longlong *)(param_1 + 0x80) + (longlong)(int)uVar2 * 0x10;
        if (lVar4 == 0) {
          return 0;
        }
        if (*(int *)(lVar4 + 8) == -1) {
          return 0;
        }
        return CONCAT71((int7)(uVar1 >> 8),*(int *)(lVar4 + 0xc) != -1);
      }
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x78) + (ulonglong)uVar2 * 4);
    } while (uVar2 != 0xffffffff);
  }
  return 0;
}



// FUNCTION 1404b1a60 FUN_1404b1a60 body=116 status=ok
// SIG undefined FUN_1404b1a60(void)

void FUN_1404b1a60(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1404b1ad6(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_146d67e8e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1404b1ad6 FUN_1404b1ad6 body=87 status=ok
// SIG undefined FUN_1404b1ad6(void)

void FUN_1404b1ad6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar2 = 0x7fffffff;
    if ((int)uVar1 <= (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)(param_1 + 0xc) = uVar2;
    FUN_1404b1b2e();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1404b1b2e FUN_1404b1b2e body=379 status=ok
// SIG undefined FUN_1404b1b2e(void)

void FUN_1404b1b2e(undefined8 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  void *_Src;
  DWORD DVar3;
  uint uVar4;
  DWORD dwTlsIndex;
  DWORD DVar5;
  LPVOID lpTlsValue;
  void *_Dst;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_78 [40];
  int local_50;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_146815189(param_3,8);
    }
    _Src = (void *)*param_1;
    dwTlsIndex = DAT_14c7585d0;
    local_50 = param_2;
    if (DAT_14c7585d0 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar5 = 0xffffffff;
      LOCK();
      bVar10 = DAT_14c7585d0 != 0xffffffff;
      DVar3 = dwTlsIndex;
      if (bVar10) {
        DVar5 = DAT_14c7585d0;
        DVar3 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar3;
      UNLOCK();
      if (bVar10) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar5;
      }
    }
    lpTlsValue = TlsGetValue(dwTlsIndex);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_140036a08(&local_49);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(dwTlsIndex,lpTlsValue);
    }
    puVar2 = (ulonglong *)((longlong)lpTlsValue + 0x10);
    uVar4 = param_3 * 8;
    uVar8 = (ulonglong)(uVar4 < 0x10) << 3 | 0xfffffffffffffff0;
    uVar6 = (uint)(uVar4 >= 0x10) * 8;
    lVar1 = (ulonglong)uVar6 + 7;
    _Dst = (void *)(*(longlong *)((longlong)lpTlsValue + 0x10) + lVar1 & uVar8);
    uVar9 = (longlong)_Dst + (longlong)(int)uVar4;
    if (*(ulonglong *)((longlong)lpTlsValue + 0x18) < uVar9) {
      FUN_140023dd8(puVar2,uVar6 + 8 + uVar4);
      _Dst = (void *)(lVar1 + *puVar2 & uVar8);
      uVar9 = (longlong)(int)uVar4 + (longlong)_Dst;
    }
    *puVar2 = uVar9;
    *param_1 = _Dst;
    if (local_50 != 0 && _Src != (void *)0x0) {
      iVar7 = local_50;
      if (param_3 < local_50) {
        iVar7 = param_3;
      }
      memcpy(_Dst,_Src,(longlong)iVar7 << 3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404b1caa FUN_1404b1caa body=836 status=ok
// SIG undefined FUN_1404b1caa(void)

longlong *
FUN_1404b1caa(longlong *param_1,longlong param_2,int param_3,longlong param_4,double *param_5,
             longlong *param_6,longlong *param_7)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  double *pdVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_f8 [32];
  double *local_d8;
  double local_d0;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar7 = *(longlong **)(param_2 + 0x58);
  uVar17 = 0;
  if (plVar7 != (longlong *)0x0) {
    cVar6 = *(char *)(param_2 + 0x60);
    if (cVar6 == '\x01') {
      uVar17 = (uint)*(byte *)(*plVar7 + 1 + (longlong)param_3 * 2);
    }
    else if (cVar6 == '\x02') {
      uVar17 = (int)*(short *)(*plVar7 + 2 + (longlong)param_3 * 4);
    }
    else {
      uVar17 = 0;
      if (cVar6 == '\x03') {
        uVar17 = *(uint *)(*plVar7 + 4 + (longlong)param_3 * 8);
      }
    }
  }
  uVar11 = *(uint *)(param_6 + 1);
  if ((int)uVar17 < (int)*(uint *)(param_6 + 1)) {
    uVar11 = uVar17;
  }
  uVar12 = (ulonglong)uVar11;
  if (0 < (int)uVar11) {
    lVar13 = (longlong)param_3;
    lVar15 = 0x10;
    uVar16 = 0;
    do {
      plVar7 = *(longlong **)(param_2 + 0x58);
      uVar17 = 0xffffffff;
      if (plVar7 != (longlong *)0x0) {
        cVar6 = *(char *)(param_2 + 0x60);
        if (cVar6 == '\x01') {
          uVar17 = (uint)*(byte *)(plVar7[2] + 1 + (*(byte *)(*plVar7 + lVar13 * 2) + uVar16) * 3);
        }
        else if (cVar6 == '\x02') {
          uVar17 = (uint)*(short *)(plVar7[2] + 2 +
                                   (longlong)((int)*(short *)(*plVar7 + lVar13 * 4) + (int)uVar16) *
                                   6);
        }
        else if (cVar6 == '\x03') {
          uVar17 = *(uint *)(plVar7[2] + 4 +
                            ((longlong)*(int *)(*plVar7 + lVar13 * 8) + uVar16) * 0xc);
        }
      }
      lVar8 = *(longlong *)(param_2 + 0x30);
      lVar18 = (longlong)(int)uVar17;
      fVar1 = *(float *)(lVar8 + 8 + lVar18 * 0xc);
      fVar2 = *(float *)(lVar8 + 4 + lVar18 * 0xc);
      lVar9 = *param_6;
      *(double *)(lVar9 + -0x10 + lVar15) = (double)*(float *)(lVar8 + lVar18 * 0xc);
      *(double *)(lVar9 + -8 + lVar15) = (double)fVar2;
      *(double *)(lVar9 + lVar15) = (double)fVar1;
      uVar16 = uVar16 + 1;
      lVar15 = lVar15 + 0x18;
    } while (uVar12 != uVar16);
    if (uVar11 == 1) {
      uVar11 = 1;
    }
    else {
      uVar22 = (undefined4)*(undefined8 *)(param_4 + 0x40);
      uVar23 = (undefined4)((ulonglong)*(undefined8 *)(param_4 + 0x40) >> 0x20);
      uVar26 = (undefined4)*(undefined8 *)(param_4 + 0x38);
      uVar27 = (undefined4)((ulonglong)*(undefined8 *)(param_4 + 0x38) >> 0x20);
      pdVar14 = (double *)(param_4 + 0x10);
      uVar16 = 0;
      uVar24 = (int)*(undefined8 *)(param_4 + 0x30);
      uVar25 = (int)((ulonglong)*(undefined8 *)(param_4 + 0x30) >> 0x20);
      do {
        dVar20 = (double)CONCAT44(uVar27,uVar26);
        dVar21 = (double)CONCAT44(uVar23,uVar22);
        dVar3 = pdVar14[-2];
        dVar4 = pdVar14[-1];
        uVar26 = SUB84(dVar4,0);
        uVar27 = (undefined4)((ulonglong)dVar4 >> 0x20);
        dVar5 = *pdVar14;
        uVar22 = SUB84(dVar5,0);
        uVar23 = (undefined4)((ulonglong)dVar5 >> 0x20);
        dVar21 = dVar21 - dVar5;
        dVar20 = dVar20 - dVar4;
        dVar10 = (double)CONCAT44(uVar25,uVar24) - dVar3;
        dVar19 = *param_5 * dVar20 - dVar10 * param_5[1];
        dVar10 = dVar10 * param_5[2] - dVar21 * *param_5;
        dVar21 = param_5[1] * dVar21 - dVar20 * param_5[2];
        if (9.99999993922529e-09 < dVar19 * dVar19 + dVar21 * dVar21 + dVar10 * dVar10) {
          local_d0 = dVar5 * dVar19 + dVar3 * dVar21 + dVar4 * dVar10;
          local_d8 = &local_c0;
          local_c0 = dVar21;
          local_b8 = dVar10;
          local_b0 = dVar19;
          uVar12 = FUN_1449c8de9(*param_6,*param_7,uVar12 & 0xffffffff,(int)param_6[1]);
          lVar13 = *param_6;
          lVar15 = param_6[1];
          lVar8 = param_7[1];
          *param_6 = *param_7;
          param_6[1] = lVar8;
          local_a8._0_4_ = (undefined4)lVar13;
          local_a8._4_4_ = (undefined4)((ulonglong)lVar13 >> 0x20);
          uStack_a0._0_4_ = (undefined4)lVar15;
          uStack_a0._4_4_ = (undefined4)((ulonglong)lVar15 >> 0x20);
          *(undefined4 *)param_7 = (undefined4)local_a8;
          *(undefined4 *)((longlong)param_7 + 4) = local_a8._4_4_;
          *(undefined4 *)(param_7 + 1) = (undefined4)uStack_a0;
          *(undefined4 *)((longlong)param_7 + 0xc) = uStack_a0._4_4_;
          local_a8 = lVar13;
          uStack_a0 = lVar15;
        }
        uVar11 = (uint)uVar12;
        if (1 < uVar16) break;
        uVar16 = uVar16 + 1;
        pdVar14 = pdVar14 + 3;
        uVar24 = SUB84(dVar3,0);
        uVar25 = (int)((ulonglong)dVar3 >> 0x20);
      } while (1 < (int)uVar11);
    }
  }
  *param_1 = *param_6;
  *(uint *)(param_1 + 1) = uVar11;
  if ((local_90 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404b1fef FUN_1404b1fef body=870 status=ok
// SIG undefined FUN_1404b1fef(void)

longlong *
FUN_1404b1fef(longlong *param_1,undefined8 *param_2,longlong param_3,int param_4,double *param_5,
             longlong *param_6,longlong *param_7)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_f8 [32];
  double *local_d8;
  double local_d0;
  longlong *local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar2 = (undefined8 *)*param_6;
  puVar2[2] = param_2[2];
  uVar12 = param_2[1];
  *puVar2 = *param_2;
  puVar2[1] = uVar12;
  lVar3 = *param_6;
  *(undefined8 *)(lVar3 + 0x28) = param_2[5];
  uVar12 = param_2[4];
  *(undefined8 *)(lVar3 + 0x18) = param_2[3];
  *(undefined8 *)(lVar3 + 0x20) = uVar12;
  lVar3 = *param_6;
  *(undefined8 *)(lVar3 + 0x40) = param_2[8];
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar10 = *(undefined4 *)(param_2 + 7);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)(lVar3 + 0x34) = uVar9;
  *(undefined4 *)(lVar3 + 0x38) = uVar10;
  *(undefined4 *)(lVar3 + 0x3c) = uVar11;
  plVar4 = *(longlong **)(param_3 + 0x58);
  iVar14 = 3;
  local_c8 = param_1;
  if (plVar4 != (longlong *)0x0) {
    cVar1 = *(char *)(param_3 + 0x60);
    if (cVar1 == '\x01') {
      uVar19 = (ulonglong)*(byte *)(*plVar4 + 1 + (longlong)param_4 * 2);
      uVar16 = (uint)*(byte *)(plVar4[2] + -2 +
                              (*(byte *)(*plVar4 + (longlong)param_4 * 2) + uVar19) * 3);
    }
    else if (cVar1 == '\x02') {
      uVar19 = (ulonglong)*(short *)(*plVar4 + 2 + (longlong)param_4 * 4);
      uVar16 = (uint)*(short *)(plVar4[2] + -4 +
                               ((longlong)*(short *)(*plVar4 + (longlong)param_4 * 4) + uVar19) * 6)
      ;
    }
    else {
      if (cVar1 != '\x03') goto LAB_1404b225c;
      uVar19 = (ulonglong)*(int *)(*plVar4 + 4 + (longlong)param_4 * 8);
      uVar16 = *(uint *)(plVar4[2] + -8 +
                        ((longlong)*(int *)(*plVar4 + (longlong)param_4 * 8) + uVar19) * 0xc);
    }
    if (0 < (int)uVar19) {
      lVar15 = (longlong)(int)uVar16;
      lVar3 = *(longlong *)(param_3 + 0x30);
      lVar18 = (longlong)param_4;
      iVar14 = 3;
      lVar17 = 0;
      dVar22 = (double)*(float *)(lVar3 + 4 + lVar15 * 0xc);
      dVar20 = (double)*(float *)(lVar3 + 8 + lVar15 * 0xc);
      dVar5 = (double)*(float *)(lVar3 + lVar15 * 0xc);
      do {
        plVar4 = *(longlong **)(param_3 + 0x58);
        uVar16 = 0xffffffff;
        if (plVar4 != (longlong *)0x0) {
          cVar1 = *(char *)(param_3 + 0x60);
          if (cVar1 == '\x01') {
            uVar16 = (uint)*(byte *)(plVar4[2] + 1 +
                                    ((ulonglong)*(byte *)(*plVar4 + lVar18 * 2) + lVar17) * 3);
          }
          else if (cVar1 == '\x02') {
            uVar16 = (uint)*(short *)(plVar4[2] + 2 +
                                     (*(short *)(*plVar4 + lVar18 * 4) + lVar17) * 6);
          }
          else if (cVar1 == '\x03') {
            uVar16 = *(uint *)(plVar4[2] + 4 + (*(int *)(*plVar4 + lVar18 * 8) + lVar17) * 0xc);
          }
        }
        lVar3 = *(longlong *)(param_3 + 0x30);
        lVar15 = (longlong)(int)uVar16;
        dVar6 = (double)*(float *)(lVar3 + 8 + lVar15 * 0xc);
        dVar7 = (double)*(float *)(lVar3 + 4 + lVar15 * 0xc);
        dVar8 = (double)*(float *)(lVar3 + lVar15 * 0xc);
        dVar21 = *param_5 * (dVar22 - dVar7) - (dVar5 - dVar8) * param_5[1];
        dVar5 = (dVar5 - dVar8) * param_5[2] - (dVar20 - dVar6) * *param_5;
        dVar22 = param_5[1] * (dVar20 - dVar6) - (dVar22 - dVar7) * param_5[2];
        if (9.99999993922529e-09 < dVar21 * dVar21 + dVar22 * dVar22 + dVar5 * dVar5) {
          local_d0 = dVar6 * dVar21 + dVar8 * dVar22 + dVar5 * dVar7;
          local_d8 = &local_c0;
          local_c0 = dVar22;
          local_b8 = dVar5;
          local_b0 = dVar21;
          iVar14 = FUN_1449c8de9(*param_6,*param_7,iVar14,(int)param_6[1]);
          lVar3 = *param_6;
          lVar15 = param_6[1];
          lVar13 = param_7[1];
          *param_6 = *param_7;
          param_6[1] = lVar13;
          local_a8._0_4_ = (undefined4)lVar3;
          local_a8._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
          uStack_a0._0_4_ = (undefined4)lVar15;
          uStack_a0._4_4_ = (undefined4)((ulonglong)lVar15 >> 0x20);
          *(undefined4 *)param_7 = (undefined4)local_a8;
          *(undefined4 *)((longlong)param_7 + 4) = local_a8._4_4_;
          *(undefined4 *)(param_7 + 1) = (undefined4)uStack_a0;
          *(undefined4 *)((longlong)param_7 + 0xc) = uStack_a0._4_4_;
          local_a8 = lVar3;
          uStack_a0 = lVar15;
        }
        lVar17 = lVar17 + 1;
      } while (((int)lVar17 < (int)uVar19) &&
              (dVar22 = dVar7, dVar20 = dVar6, dVar5 = dVar8, 1 < iVar14));
    }
  }
LAB_1404b225c:
  *local_c8 = *param_6;
  *(int *)(local_c8 + 1) = iVar14;
  if ((local_90 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return local_c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404b2356 FUN_1404b2356 body=355 status=ok
// SIG undefined FUN_1404b2356(void)

void FUN_1404b2356(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else if (param_2 < 5) {
    uVar5 = 4;
  }
  else {
    uVar3 = (longlong)(int)param_2 * 0x6c;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1404b23c9;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0);
      }
    }
LAB_1404b23c9:
    uVar5 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 / 0x6c)) {
      uVar5 = uVar3 / 0x6c & 0xffffffff;
    }
  }
  if ((int)uVar5 == *(int *)(param_1 + 0x1bc)) {
    return;
  }
  *(int *)(param_1 + 0x1bc) = (int)uVar5;
  FUN_1404b24ba(param_1,*(undefined4 *)(param_1 + 0x1b8),uVar5,0x6c);
  return;
}



// FUNCTION 1404b24ba FUN_1404b24ba body=145 status=ok
// SIG undefined FUN_1404b24ba(void)

void FUN_1404b24ba(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x1b0);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x6c);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x1b0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x1b0),param_1,(longlong)param_2 * 0x6c);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x1b0,param_2,param_3,param_4);
  return;
}



// FUNCTION 1404b254c FUN_1404b254c body=234 status=ok
// SIG undefined FUN_1404b254c(void)

void FUN_1404b254c(longlong param_1,int param_2,undefined8 *param_3,double *param_4)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  
  lVar8 = DAT_14c992a30;
  lVar9 = (longlong)param_2;
  param_3[2] = *(undefined8 *)(DAT_14c992a30 + 0x10 + lVar9 * 0x18);
  puVar1 = (undefined8 *)(lVar8 + lVar9 * 0x18);
  uVar7 = puVar1[1];
  *param_3 = *puVar1;
  param_3[1] = uVar7;
  dVar2 = *(double *)(param_1 + 0x30);
  dVar6 = *(double *)(param_1 + 0x48) - dVar2;
  dVar3 = *(double *)(param_1 + 0x28);
  dVar10 = *(double *)(param_1 + 0x40) - dVar3;
  dVar11 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
  dVar4 = *(double *)(lVar8 + 0x10 + lVar9 * 0x18);
  dVar5 = *(double *)(lVar8 + 8 + lVar9 * 0x18);
  *param_4 = dVar11 * *(double *)(lVar8 + lVar9 * 0x18) * 0.5 +
             dVar11 * 0.5 + *(double *)(param_1 + 0x20);
  param_4[1] = dVar10 * dVar5 * 0.5 + dVar10 * 0.5 + dVar3;
  param_4[2] = dVar6 * dVar4 * 0.5 + dVar6 * 0.5 + dVar2;
  return;
}



// FUNCTION 1404b2636 FUN_1404b2636 body=772 status=ok
// SIG undefined FUN_1404b2636(void)

longlong *
FUN_1404b2636(longlong *param_1,longlong param_2,int param_3,longlong param_4,double *param_5,
             longlong *param_6,longlong *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  double *pdVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_e8 [32];
  double *local_c8;
  double local_c0;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar9 = (uint)*(short *)(DAT_14c992a40 + 2 + (longlong)param_3 * 4);
  uVar6 = *(uint *)(param_6 + 1);
  if ((int)uVar9 < (int)*(uint *)(param_6 + 1)) {
    uVar6 = uVar9;
  }
  uVar7 = (ulonglong)uVar6;
  if (0 < (int)uVar6) {
    lVar10 = 0x10;
    uVar11 = 0;
    do {
      lVar12 = (longlong)
               *(short *)(DAT_14c992a50 + 2 +
                         (longlong)
                         ((int)*(short *)(DAT_14c992a40 + (longlong)param_3 * 4) + (int)uVar11) * 6)
      ;
      dVar1 = *(double *)(param_2 + 0x30);
      dVar13 = *(double *)(param_2 + 0x48) - dVar1;
      dVar2 = *(double *)(param_2 + 0x28);
      dVar14 = *(double *)(param_2 + 0x40) - dVar2;
      dVar15 = *(double *)(param_2 + 0x38) - *(double *)(param_2 + 0x20);
      dVar3 = *(double *)(DAT_14c992a20 + 0x10 + lVar12 * 0x18);
      dVar4 = *(double *)(DAT_14c992a20 + 8 + lVar12 * 0x18);
      lVar5 = *param_6;
      *(double *)(lVar5 + -0x10 + lVar10) =
           dVar15 * *(double *)(DAT_14c992a20 + lVar12 * 0x18) * 0.5 +
           dVar15 * 0.5 + *(double *)(param_2 + 0x20);
      *(double *)(lVar5 + -8 + lVar10) = dVar14 * dVar4 * 0.5 + dVar14 * 0.5 + dVar2;
      *(double *)(lVar5 + lVar10) = dVar13 * dVar3 * 0.5 + dVar13 * 0.5 + dVar1;
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x18;
    } while (uVar7 != uVar11);
    if (uVar6 == 1) {
      uVar6 = 1;
    }
    else {
      uVar16 = (undefined4)*(undefined8 *)(param_4 + 0x40);
      uVar17 = (undefined4)((ulonglong)*(undefined8 *)(param_4 + 0x40) >> 0x20);
      uVar20 = (undefined4)*(undefined8 *)(param_4 + 0x38);
      uVar21 = (undefined4)((ulonglong)*(undefined8 *)(param_4 + 0x38) >> 0x20);
      pdVar8 = (double *)(param_4 + 0x10);
      uVar11 = 0;
      uVar18 = (int)*(undefined8 *)(param_4 + 0x30);
      uVar19 = (int)((ulonglong)*(undefined8 *)(param_4 + 0x30) >> 0x20);
      do {
        dVar14 = (double)CONCAT44(uVar21,uVar20);
        dVar13 = (double)CONCAT44(uVar17,uVar16);
        dVar1 = pdVar8[-2];
        dVar2 = pdVar8[-1];
        uVar20 = SUB84(dVar2,0);
        uVar21 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar3 = *pdVar8;
        uVar16 = SUB84(dVar3,0);
        uVar17 = (undefined4)((ulonglong)dVar3 >> 0x20);
        dVar13 = dVar13 - dVar3;
        dVar14 = dVar14 - dVar2;
        dVar4 = (double)CONCAT44(uVar19,uVar18) - dVar1;
        dVar15 = *param_5 * dVar14 - dVar4 * param_5[1];
        dVar4 = dVar4 * param_5[2] - dVar13 * *param_5;
        dVar13 = param_5[1] * dVar13 - dVar14 * param_5[2];
        if (9.99999993922529e-09 < dVar15 * dVar15 + dVar13 * dVar13 + dVar4 * dVar4) {
          local_c0 = dVar3 * dVar15 + dVar1 * dVar13 + dVar2 * dVar4;
          local_c8 = &local_b0;
          local_b0 = dVar13;
          local_a8 = dVar4;
          local_a0 = dVar15;
          uVar7 = FUN_1449c8de9(*param_6,*param_7,uVar7 & 0xffffffff,(int)param_6[1]);
          lVar10 = *param_6;
          lVar5 = param_6[1];
          lVar12 = param_7[1];
          *param_6 = *param_7;
          param_6[1] = lVar12;
          local_98._0_4_ = (undefined4)lVar10;
          local_98._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
          uStack_90._0_4_ = (undefined4)lVar5;
          uStack_90._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
          *(undefined4 *)param_7 = (undefined4)local_98;
          *(undefined4 *)((longlong)param_7 + 4) = local_98._4_4_;
          *(undefined4 *)(param_7 + 1) = (undefined4)uStack_90;
          *(undefined4 *)((longlong)param_7 + 0xc) = uStack_90._4_4_;
          local_98 = lVar10;
          uStack_90 = lVar5;
        }
        uVar6 = (uint)uVar7;
        if (1 < uVar11) break;
        uVar11 = uVar11 + 1;
        pdVar8 = pdVar8 + 3;
        uVar18 = SUB84(dVar1,0);
        uVar19 = (int)((ulonglong)dVar1 >> 0x20);
      } while (1 < (int)uVar6);
    }
  }
  *param_1 = *param_6;
  *(uint *)(param_1 + 1) = uVar6;
  if ((local_80 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404b293b FUN_1404b293b body=999 status=ok
// SIG undefined FUN_1404b293b(void)

longlong *
FUN_1404b293b(longlong *param_1,undefined8 *param_2,longlong param_3,int param_4,double *param_5,
             longlong *param_6,longlong *param_7)

{
  short sVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_138 [32];
  double *local_118;
  double local_110;
  longlong *local_108;
  double local_100;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  puVar2 = (undefined8 *)*param_6;
  puVar2[2] = param_2[2];
  uVar11 = param_2[1];
  *puVar2 = *param_2;
  puVar2[1] = uVar11;
  lVar19 = *param_6;
  *(undefined8 *)(lVar19 + 0x28) = param_2[5];
  uVar11 = param_2[4];
  *(undefined8 *)(lVar19 + 0x18) = param_2[3];
  *(undefined8 *)(lVar19 + 0x20) = uVar11;
  lVar19 = *param_6;
  *(undefined8 *)(lVar19 + 0x40) = param_2[8];
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar9 = *(undefined4 *)(param_2 + 7);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(lVar19 + 0x30) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)(lVar19 + 0x34) = uVar8;
  *(undefined4 *)(lVar19 + 0x38) = uVar9;
  *(undefined4 *)(lVar19 + 0x3c) = uVar10;
  lVar19 = (longlong)param_4;
  sVar1 = *(short *)(DAT_14c992a40 + 2 + lVar19 * 4);
  local_108 = param_1;
  if (sVar1 < 1) {
    iVar13 = 3;
  }
  else {
    dVar3 = *(double *)(param_3 + 0x38) - *(double *)(param_3 + 0x20);
    lVar14 = (longlong)
             *(short *)(DAT_14c992a50 + -4 +
                       ((longlong)*(short *)(DAT_14c992a40 + lVar19 * 4) + (longlong)(int)sVar1) * 6
                       );
    dVar21 = *(double *)(param_3 + 0x40) - *(double *)(param_3 + 0x28);
    dVar6 = *(double *)(param_3 + 0x48) - *(double *)(param_3 + 0x30);
    iVar13 = 3;
    lVar18 = 0;
    lVar15 = DAT_14c992a40;
    lVar16 = DAT_14c992a20;
    lVar17 = DAT_14c992a50;
    dVar3 = dVar3 * *(double *)(DAT_14c992a20 + lVar14 * 0x18) * 0.5 +
            dVar3 * 0.5 + *(double *)(param_3 + 0x20);
    dVar21 = dVar21 * *(double *)(DAT_14c992a20 + 8 + lVar14 * 0x18) * 0.5 +
             dVar21 * 0.5 + *(double *)(param_3 + 0x28);
    dVar6 = dVar6 * *(double *)(DAT_14c992a20 + 0x10 + lVar14 * 0x18) * 0.5 +
            dVar6 * 0.5 + *(double *)(param_3 + 0x30);
    do {
      lVar14 = (longlong)*(short *)(lVar17 + 2 + (*(short *)(lVar15 + lVar19 * 4) + lVar18) * 6);
      dVar7 = *(double *)(param_3 + 0x48) - *(double *)(param_3 + 0x30);
      dVar5 = *(double *)(param_3 + 0x40) - *(double *)(param_3 + 0x28);
      dVar4 = *(double *)(param_3 + 0x38) - *(double *)(param_3 + 0x20);
      dVar7 = dVar7 * *(double *)(lVar16 + 0x10 + lVar14 * 0x18) * 0.5 +
              dVar7 * 0.5 + *(double *)(param_3 + 0x30);
      dVar5 = dVar5 * *(double *)(lVar16 + 8 + lVar14 * 0x18) * 0.5 +
              dVar5 * 0.5 + *(double *)(param_3 + 0x28);
      dVar4 = dVar4 * *(double *)(lVar16 + lVar14 * 0x18) * 0.5 +
              dVar4 * 0.5 + *(double *)(param_3 + 0x20);
      dVar20 = *param_5 * (dVar21 - dVar5) - (dVar3 - dVar4) * param_5[1];
      dVar3 = (dVar3 - dVar4) * param_5[2] - (dVar6 - dVar7) * *param_5;
      dVar21 = param_5[1] * (dVar6 - dVar7) - (dVar21 - dVar5) * param_5[2];
      if (9.99999993922529e-09 < dVar20 * dVar20 + dVar21 * dVar21 + dVar3 * dVar3) {
        local_110 = dVar7 * dVar20 + dVar4 * dVar21 + dVar5 * dVar3;
        local_118 = &local_100;
        local_100 = dVar21;
        local_f8 = dVar3;
        local_f0 = dVar20;
        iVar13 = FUN_1449c8de9(*param_6,*param_7,iVar13,(int)param_6[1]);
        lVar14 = *param_6;
        lVar12 = param_6[1];
        lVar15 = param_7[1];
        *param_6 = *param_7;
        param_6[1] = lVar15;
        local_e8._0_4_ = (undefined4)lVar14;
        local_e8._4_4_ = (undefined4)((ulonglong)lVar14 >> 0x20);
        uStack_e0._0_4_ = (undefined4)lVar12;
        uStack_e0._4_4_ = (undefined4)((ulonglong)lVar12 >> 0x20);
        *(undefined4 *)param_7 = (undefined4)local_e8;
        *(undefined4 *)((longlong)param_7 + 4) = local_e8._4_4_;
        *(undefined4 *)(param_7 + 1) = (undefined4)uStack_e0;
        *(undefined4 *)((longlong)param_7 + 0xc) = uStack_e0._4_4_;
        lVar15 = DAT_14c992a40;
        lVar16 = DAT_14c992a20;
        lVar17 = DAT_14c992a50;
        local_e8 = lVar14;
        uStack_e0 = lVar12;
      }
      lVar18 = lVar18 + 1;
    } while (((int)lVar18 < (int)sVar1) &&
            (dVar3 = dVar4, dVar21 = dVar5, dVar6 = dVar7, 1 < iVar13));
  }
  *local_108 = *param_6;
  *(int *)(local_108 + 1) = iVar13;
  if ((local_d0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return local_108;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404b2d23 FUN_1404b2d23 body=1491 status=ok
// SIG undefined FUN_1404b2d23(void)

void FUN_1404b2d23(longlong param_1,double *param_2,int param_3,double *param_4,double *param_5,
                  int *param_6)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  ulonglong uVar21;
  double dVar22;
  double local_e8;
  double local_e0;
  
  *param_6 = 2;
  param_5[2] = param_2[2];
  dVar19 = param_2[1];
  *param_5 = *param_2;
  param_5[1] = dVar19;
  dVar19 = param_2[6];
  local_e0 = param_2[5] * dVar19 + param_2[2];
  local_e8 = param_2[4] * dVar19 + param_2[1];
  dVar19 = dVar19 * param_2[3] + *param_2;
  param_5[3] = dVar19;
  param_5[4] = local_e8;
  param_5[5] = local_e0;
  lVar2 = *(longlong *)(param_1 + 0x88);
  plVar3 = *(longlong **)(lVar2 + 0x58);
  if (plVar3 != (longlong *)0x0) {
    cVar1 = *(char *)(lVar2 + 0x60);
    if (cVar1 == '\x01') {
      uVar13 = (ulonglong)*(byte *)(*plVar3 + 1 + (longlong)param_3 * 2);
      uVar15 = (uint)*(byte *)(plVar3[2] + -2 +
                              (*(byte *)(*plVar3 + (longlong)param_3 * 2) + uVar13) * 3);
    }
    else if (cVar1 == '\x02') {
      uVar13 = (ulonglong)*(short *)(*plVar3 + 2 + (longlong)param_3 * 4);
      uVar15 = (uint)*(short *)(plVar3[2] + -4 +
                               ((longlong)*(short *)(*plVar3 + (longlong)param_3 * 4) + uVar13) * 6)
      ;
    }
    else {
      if (cVar1 != '\x03') {
        return;
      }
      uVar13 = (ulonglong)*(int *)(*plVar3 + 4 + (longlong)param_3 * 8);
      uVar15 = *(uint *)(plVar3[2] + -8 +
                        ((longlong)*(int *)(*plVar3 + (longlong)param_3 * 8) + uVar13) * 0xc);
    }
    if ((0 < (int)uVar13) && (1 < *param_6)) {
      uVar18 = -(ulonglong)(0.0 <= *(double *)(param_1 + 0x20));
      uVar21 = ~uVar18 & ((&DAT_149931160)[0.0 <= *(double *)(param_1 + 0x28)] ^ 0x8000000000000000)
               | uVar18 & (&DAT_149931160)[0.0 <= *(double *)(param_1 + 0x28)];
      uVar18 = -(ulonglong)(0.0 <= *(double *)(param_1 + 0x30));
      dVar20 = (double)(~uVar18 & (uVar21 ^ 0x8000000000000000) | uVar21 & uVar18);
      lVar14 = (longlong)(int)uVar15;
      lVar2 = *(longlong *)(lVar2 + 0x30);
      lVar16 = (longlong)param_3;
      lVar17 = 0;
      dVar4 = (double)*(float *)(lVar2 + lVar14 * 0xc) * *(double *)(param_1 + 0x20);
      dVar10 = *(double *)(param_1 + 0x28) * (double)*(float *)(lVar2 + 4 + lVar14 * 0xc);
      dVar8 = (double)*(float *)(lVar2 + 8 + lVar14 * 0xc) * *(double *)(param_1 + 0x30);
      while( true ) {
        lVar2 = *(longlong *)(param_1 + 0x88);
        plVar3 = *(longlong **)(lVar2 + 0x58);
        uVar15 = 0xffffffff;
        if (plVar3 != (longlong *)0x0) {
          cVar1 = *(char *)(lVar2 + 0x60);
          if (cVar1 == '\x01') {
            uVar15 = (uint)*(byte *)(plVar3[2] + 1 +
                                    ((ulonglong)*(byte *)(*plVar3 + lVar16 * 2) + lVar17) * 3);
          }
          else if (cVar1 == '\x02') {
            uVar15 = (uint)*(short *)(plVar3[2] + 2 +
                                     (*(short *)(*plVar3 + lVar16 * 4) + lVar17) * 6);
          }
          else if (cVar1 == '\x03') {
            uVar15 = *(uint *)(plVar3[2] + 4 + (*(int *)(*plVar3 + lVar16 * 8) + lVar17) * 0xc);
          }
        }
        lVar2 = *(longlong *)(lVar2 + 0x30);
        lVar14 = (longlong)(int)uVar15;
        dVar5 = (double)*(float *)(lVar2 + 8 + lVar14 * 0xc) * *(double *)(param_1 + 0x30);
        dVar22 = (double)*(float *)(lVar2 + 4 + lVar14 * 0xc) * *(double *)(param_1 + 0x28);
        dVar6 = (double)*(float *)(lVar2 + lVar14 * 0xc) * *(double *)(param_1 + 0x20);
        dVar9 = *param_4 * (dVar10 - dVar22) - (dVar4 - dVar6) * param_4[1];
        dVar7 = (dVar4 - dVar6) * param_4[2] - (dVar8 - dVar5) * *param_4;
        dVar10 = param_4[1] * (dVar8 - dVar5) - (dVar10 - dVar22) * param_4[2];
        dVar4 = dVar9 * dVar9 + dVar10 * dVar10 + dVar7 * dVar7;
        if (((dVar4 != 1.0) || (dVar8 = dVar9, dVar11 = dVar7, dVar12 = dVar10, NAN(dVar4))) &&
           (dVar8 = DAT_14c8464f0, dVar11 = DAT_14c8464e8, dVar12 = DAT_14c8464e0,
           9.99999993922529e-09 <= dVar4)) {
          dVar4 = 1.0 / SQRT(dVar4);
          dVar8 = dVar9 * dVar4;
          dVar11 = dVar7 * dVar4;
          dVar12 = dVar10 * dVar4;
        }
        dVar4 = param_5[2];
        dVar10 = *param_5;
        dVar7 = param_5[1];
        dVar9 = (dVar4 - dVar5) * dVar8 * dVar20 +
                (dVar10 - dVar6) * dVar12 * dVar20 + (dVar7 - dVar22) * dVar11 * dVar20;
        dVar8 = (local_e0 - dVar5) * dVar8 * dVar20 +
                (dVar19 - dVar6) * dVar12 * dVar20 + (local_e8 - dVar22) * dVar11 * dVar20;
        if ((0.01 < dVar8) && (0.01 < dVar9)) break;
        if ((0.01 <= dVar8) || (dVar9 <= 0.01)) {
          if ((0.01 < dVar8) && (dVar9 < 0.01)) {
            dVar9 = dVar9 / (dVar9 - dVar8);
            local_e0 = (local_e0 - dVar4) * dVar9 + dVar4;
            local_e8 = (local_e8 - dVar7) * dVar9 + dVar7;
            dVar19 = (dVar19 - dVar10) * dVar9 + dVar10;
            param_5[3] = dVar19;
            param_5[4] = local_e8;
            param_5[5] = local_e0;
          }
        }
        else {
          dVar8 = dVar8 / (dVar8 - dVar9);
          *param_5 = (dVar10 - dVar19) * dVar8 + dVar19;
          param_5[1] = (dVar7 - local_e8) * dVar8 + local_e8;
          param_5[2] = (dVar4 - local_e0) * dVar8 + local_e0;
        }
        lVar17 = lVar17 + 1;
        if ((int)uVar13 <= (int)lVar17) {
          return;
        }
        dVar4 = dVar6;
        dVar10 = dVar22;
        dVar8 = dVar5;
        if (*param_6 < 2) {
          return;
        }
      }
      *param_6 = 0;
    }
  }
  return;
}



// FUNCTION 1404b5d90 FUN_1404b5d90 body=172 status=ok
// SIG undefined FUN_1404b5d90(void)

longlong FUN_1404b5d90(longlong *param_1,longlong param_2,longlong param_3,double param_4,
                      double *param_5,int *param_6)

{
  double *pdVar1;
  double dVar2;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auStack_38 [36];
  uint local_14 [3];
  ulonglong local_8;
  double dVar3;
  double dVar4;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar5 = *param_1;
  lVar6 = 0;
  do {
    pdVar1 = (double *)(param_3 + lVar6 * 2);
    dVar2 = *pdVar1;
    dVar3 = *pdVar1;
    dVar4 = *pdVar1;
    if (dVar4 <= 0.0 && dVar3 != 0.0) {
      dVar7 = *(double *)(lVar5 + 0x20 + lVar6 * 2) + param_4;
    }
    else {
      dVar7 = *(double *)(lVar5 + 0x38 + lVar6 * 2) - param_4;
    }
    *(double *)(param_2 + lVar6 * 2) = dVar7;
    *(uint *)((longlong)local_14 + lVar6) = (uint)(NAN(dVar2) || (dVar4 > 0.0 || dVar3 == 0.0));
    lVar6 = lVar6 + 4;
  } while (lVar6 != 0xc);
  *param_6 = local_14[1] * 2 + local_14[0] + local_14[2] * 4;
  if (param_5 != (double *)0x0) {
    *param_5 = param_4 * 0.7320508075688772;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404b5e3e FUN_1404b5e3e body=921 status=ok
// SIG undefined FUN_1404b5e3e(void)

undefined8 *
FUN_1404b5e3e(longlong param_1,undefined8 *param_2,uint param_3,double *param_4,double *param_5,
             double *param_6)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_148 [40];
  undefined8 *local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  lVar2 = DAT_14c992a20;
  if (-1 < (int)param_3) {
    uVar7 = (ulonglong)param_3;
    sVar1 = *(short *)(DAT_14c992a40 + 2 + uVar7 * 4);
    if (0 < sVar1) {
      lVar4 = (longlong)
              *(short *)(DAT_14c992a50 + -4 +
                        ((longlong)*(short *)(DAT_14c992a40 + uVar7 * 4) + (longlong)(int)sVar1) * 6
                        );
      dVar8 = *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30);
      dVar9 = *(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28);
      dVar10 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
      local_d8 = dVar8 * *(double *)(DAT_14c992a20 + 0x10 + lVar4 * 0x18) * 0.5 +
                 dVar8 * 0.5 + *(double *)(param_1 + 0x30);
      dStack_e0 = dVar9 * *(double *)(DAT_14c992a20 + 8 + lVar4 * 0x18) * 0.5 +
                  dVar9 * 0.5 + *(double *)(param_1 + 0x28);
      local_e8 = dVar10 * *(double *)(DAT_14c992a20 + lVar4 * 0x18) * 0.5 +
                 dVar10 * 0.5 + *(double *)(param_1 + 0x20);
      uVar12 = 0;
      uVar13 = 0;
      dVar8 = 3.4028234663852886e+38;
      lVar5 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar14 = 0;
      uVar15 = 0;
      lVar4 = DAT_14c992a40;
      lVar6 = DAT_14c992a50;
      local_120 = param_2;
      do {
        lVar3 = (longlong)*(short *)(lVar6 + 2 + (*(short *)(lVar4 + uVar7 * 4) + lVar5) * 6);
        dVar9 = *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30);
        dVar10 = *(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28);
        dVar11 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
        local_f0 = dVar9 * *(double *)(lVar2 + 0x10 + lVar3 * 0x18) * 0.5 +
                   dVar9 * 0.5 + *(double *)(param_1 + 0x30);
        dStack_f8 = dVar10 * *(double *)(lVar2 + 8 + lVar3 * 0x18) * 0.5 +
                    dVar10 * 0.5 + *(double *)(param_1 + 0x28);
        local_100 = dVar11 * *(double *)(lVar2 + lVar3 * 0x18) * 0.5 +
                    dVar11 * 0.5 + *(double *)(param_1 + 0x20);
        FUN_1404b61d8(&local_118,&local_e8,&local_100,param_4);
        dVar9 = (local_108 - param_4[2]) * (local_108 - param_4[2]) +
                (local_118 - *param_4) * (local_118 - *param_4) +
                (local_110 - param_4[1]) * (local_110 - param_4[1]);
        if (dVar9 < dVar8) {
          param_5[2] = local_d8;
          *param_5 = local_e8;
          param_5[1] = dStack_e0;
          param_6[2] = local_f0;
          *param_6 = local_100;
          param_6[1] = dStack_f8;
          uVar14 = SUB84(local_108,0);
          uVar15 = (undefined4)((ulonglong)local_108 >> 0x20);
          uVar16 = SUB84(local_110,0);
          uVar17 = (undefined4)((ulonglong)local_110 >> 0x20);
          uVar12 = SUB84(local_118,0);
          uVar13 = (undefined4)((ulonglong)local_118 >> 0x20);
          lVar4 = DAT_14c992a40;
          lVar6 = DAT_14c992a50;
          dVar8 = dVar9;
        }
        local_d8 = local_f0;
        local_e8 = local_100;
        dStack_e0 = dStack_f8;
        lVar5 = lVar5 + 1;
      } while ((int)sVar1 != (int)lVar5);
      *local_120 = CONCAT44(uVar13,uVar12);
      local_120[1] = CONCAT44(uVar17,uVar16);
      local_120[2] = CONCAT44(uVar15,uVar14);
      param_2 = local_120;
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404b61d8 FUN_1404b61d8 body=240 status=ok
// SIG undefined FUN_1404b61d8(void)

double * FUN_1404b61d8(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar1 = param_2[2];
  dVar2 = param_2[1];
  dVar3 = *param_2;
  dVar6 = param_3[2] - dVar1;
  dVar7 = param_3[1] - dVar2;
  dVar4 = *param_3 - dVar3;
  dVar5 = -((dVar1 - param_4[2]) * dVar6 + (dVar3 - *param_4) * dVar4 + (dVar2 - param_4[1]) * dVar7
           ) / (dVar6 * dVar6 + dVar4 * dVar4 + dVar7 * dVar7);
  if (1.0 <= dVar5) {
    dVar5 = 1.0;
  }
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  *param_1 = dVar5 * dVar4 + dVar3;
  param_1[1] = dVar7 * dVar5 + dVar2;
  param_1[2] = dVar6 * dVar5 + dVar1;
  return param_1;
}



// FUNCTION 1404b62c8 FUN_1404b62c8 body=1984 status=ok
// SIG undefined FUN_1404b62c8(void)

longlong FUN_1404b62c8(longlong param_1,longlong param_2,double *param_3,int param_4,int param_5,
                      double *param_6,longlong param_7,longlong param_8,uint *param_9)

{
  double dVar1;
  double dVar2;
  short sVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  ulonglong uVar8;
  short sVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  double *pdVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  bool bVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  
  sVar3 = *(short *)(DAT_14c992a40 + 2 + (longlong)param_5 * 4);
  sVar9 = 0x20;
  if (sVar3 < 0x20) {
    sVar9 = sVar3;
  }
  uVar11 = (ulonglong)(uint)(int)sVar9;
  *param_9 = (int)sVar9;
  if (0 < sVar3) {
    pdVar13 = (double *)(param_7 + 0x10);
    lVar7 = 0;
    do {
      dVar19 = *(double *)(param_2 + 0x48) - *(double *)(param_2 + 0x30);
      lVar16 = (longlong)
               *(short *)(DAT_14c992a50 + 2 +
                         (longlong)
                         ((int)*(short *)(DAT_14c992a40 + (longlong)param_5 * 4) + (int)lVar7) * 6);
      dVar22 = *(double *)(param_2 + 0x40) - *(double *)(param_2 + 0x28);
      dVar27 = *(double *)(param_2 + 0x38) - *(double *)(param_2 + 0x20);
      dVar20 = dVar19 * *(double *)(DAT_14c992a20 + 0x10 + lVar16 * 0x18) * 0.5 +
               dVar19 * 0.5 + *(double *)(param_2 + 0x30);
      dVar23 = dVar22 * *(double *)(DAT_14c992a20 + 8 + lVar16 * 0x18) * 0.5 +
               dVar22 * 0.5 + *(double *)(param_2 + 0x28);
      dVar28 = dVar27 * *(double *)(DAT_14c992a20 + lVar16 * 0x18) * 0.5 +
               dVar27 * 0.5 + *(double *)(param_2 + 0x20);
      dVar25 = *param_3;
      dVar30 = param_3[1];
      dVar31 = param_3[2];
      dVar32 = dVar28 * dVar31 - dVar25 * dVar20;
      dVar24 = dVar23 * dVar25 - dVar30 * dVar28;
      dVar26 = dVar20 * dVar30 - dVar31 * dVar23;
      dVar22 = param_3[3];
      dVar19 = param_3[3];
      dVar26 = dVar26 + dVar26;
      dVar32 = dVar32 + dVar32;
      dVar24 = dVar24 + dVar24;
      dVar21 = param_3[5];
      dVar27 = param_3[6];
      pdVar13[-2] = (dVar24 * dVar30 - dVar32 * dVar31) + dVar22 * dVar26 + dVar28 + param_3[4];
      pdVar13[-1] = (dVar31 * dVar26 - dVar25 * dVar24) + dVar19 * dVar32 + dVar23 + dVar21;
      *pdVar13 = dVar24 * dVar22 + dVar20 + (dVar32 * dVar25 - dVar26 * dVar30) + dVar27;
      lVar7 = lVar7 + 1;
      uVar11 = (ulonglong)(int)*param_9;
      pdVar13 = pdVar13 + 3;
    } while (lVar7 < (longlong)uVar11);
  }
  if (1 < (uint)uVar11) {
    lVar7 = (longlong)param_4;
    sVar3 = *(short *)(DAT_14c992a40 + 2 + lVar7 * 4);
    if (0 < sVar3) {
      dVar19 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
      lVar14 = (longlong)
               *(short *)(DAT_14c992a50 + -4 +
                         ((longlong)*(short *)(DAT_14c992a40 + lVar7 * 4) + (longlong)(int)sVar3) *
                         6);
      dVar22 = *(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28);
      dVar27 = *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30);
      iVar12 = 0;
      lVar16 = param_8;
      lVar15 = param_7;
      dVar19 = dVar19 * *(double *)(DAT_14c992a20 + lVar14 * 0x18) * 0.5 +
               dVar19 * 0.5 + *(double *)(param_1 + 0x20);
      dVar22 = dVar22 * *(double *)(DAT_14c992a20 + 8 + lVar14 * 0x18) * 0.5 +
               dVar22 * 0.5 + *(double *)(param_1 + 0x28);
      dVar27 = dVar27 * *(double *)(DAT_14c992a20 + 0x10 + lVar14 * 0x18) * 0.5 +
               dVar27 * 0.5 + *(double *)(param_1 + 0x30);
      do {
        param_7 = lVar16;
        lVar16 = (longlong)
                 *(short *)(DAT_14c992a50 + 2 +
                           ((longlong)iVar12 + (longlong)*(short *)(DAT_14c992a40 + lVar7 * 4)) * 6)
        ;
        dVar30 = *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30);
        dVar25 = *(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28);
        dVar21 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
        dVar31 = dVar30 * *(double *)(DAT_14c992a20 + 0x10 + lVar16 * 0x18) * 0.5 +
                 dVar30 * 0.5 + *(double *)(param_1 + 0x30);
        dVar25 = dVar25 * *(double *)(DAT_14c992a20 + 8 + lVar16 * 0x18) * 0.5 +
                 dVar25 * 0.5 + *(double *)(param_1 + 0x28);
        dVar21 = dVar21 * *(double *)(DAT_14c992a20 + lVar16 * 0x18) * 0.5 +
                 dVar21 * 0.5 + *(double *)(param_1 + 0x20);
        dVar23 = *param_6 * (dVar22 - dVar25) - (dVar19 - dVar21) * param_6[1];
        dVar30 = (dVar19 - dVar21) * param_6[2] - (dVar27 - dVar31) * *param_6;
        dVar27 = param_6[1] * (dVar27 - dVar31) - (dVar22 - dVar25) * param_6[2];
        dVar24 = dVar23 * dVar23 + dVar27 * dVar27 + dVar30 * dVar30;
        dVar20 = SQRT(dVar24);
        dVar19 = 0.0;
        dVar22 = 0.0;
        if (9.999999747378752e-05 <= dVar24) {
          dVar22 = dVar23 / dVar20;
          dVar19 = dVar30 / dVar20;
        }
        dVar24 = (double)(-(ulonglong)(dVar24 < 9.999999747378752e-05) & 0x3ff0000000000000 |
                         ~-(ulonglong)(dVar24 < 9.999999747378752e-05) &
                         (ulonglong)(dVar27 / dVar20));
        dVar32 = dVar31 * dVar22 + dVar21 * dVar24 + dVar25 * dVar19;
        dVar23 = dVar32 * 9.99999993922529e-09 + dVar32;
        uVar8 = (ulonglong)((int)uVar11 - 1);
        dVar27 = *(double *)(lVar15 + 0x10 + uVar8 * 0x18);
        dVar30 = *(double *)(lVar15 + uVar8 * 0x18);
        dVar20 = *(double *)(lVar15 + 8 + uVar8 * 0x18);
        uVar8 = uVar11 & 0xffffffff;
        uVar11 = 0;
        lVar16 = 0;
        dVar26 = dVar27 * dVar22 + dVar24 * dVar30 + dVar20 * dVar19;
LAB_1404b6802:
        uVar10 = (uint)uVar11;
        dVar28 = *(double *)(lVar15 + lVar16);
        dVar1 = *(double *)(lVar15 + 8 + lVar16);
        dVar2 = *(double *)(lVar15 + 0x10 + lVar16);
        dVar29 = dVar2 * dVar22 + dVar28 * dVar24 + dVar19 * dVar1;
        if (dVar23 < dVar29) {
          if (dVar26 < dVar23) {
            dVar4 = dVar27;
            dVar5 = dVar30;
            dVar6 = dVar20;
            if (9.99999993922529e-09 <= ABS(dVar29 - dVar26)) {
              dVar26 = (dVar32 - dVar26) / (dVar29 - dVar26);
              dVar4 = dVar27 + (dVar2 - dVar27) * dVar26;
              dVar5 = dVar30 + (dVar28 - dVar30) * dVar26;
              dVar6 = dVar20 + (dVar1 - dVar20) * dVar26;
            }
            goto LAB_1404b685d;
          }
          goto LAB_1404b687a;
        }
        dVar4 = dVar2;
        dVar5 = dVar28;
        dVar6 = dVar1;
        if (dVar26 <= dVar23) {
LAB_1404b685d:
          uVar17 = (ulonglong)uVar10;
          uVar11 = (ulonglong)(uVar10 + 1);
          *(double *)(param_7 + uVar17 * 0x18) = dVar5;
          *(double *)(param_7 + 8 + uVar17 * 0x18) = dVar6;
          *(double *)(param_7 + 0x10 + uVar17 * 0x18) = dVar4;
LAB_1404b687a:
          if ((0x1f < (uint)uVar11) ||
             (bVar18 = uVar8 * 0x18 + -0x18 == lVar16, lVar16 = lVar16 + 0x18, dVar26 = dVar29,
             dVar30 = dVar28, dVar20 = dVar1, dVar27 = dVar2, bVar18)) goto LAB_1404b6a02;
          goto LAB_1404b6802;
        }
        if (9.99999993922529e-09 <= ABS(dVar29 - dVar26)) {
          dVar26 = (dVar32 - dVar26) / (dVar29 - dVar26);
          dVar27 = dVar27 + (dVar2 - dVar27) * dVar26;
          dVar20 = dVar20 + (dVar1 - dVar20) * dVar26;
          dVar30 = dVar30 + (dVar28 - dVar30) * dVar26;
        }
        *(double *)(param_7 + uVar11 * 0x18) = dVar30;
        *(double *)(param_7 + 8 + uVar11 * 0x18) = dVar20;
        *(double *)(param_7 + 0x10 + uVar11 * 0x18) = dVar27;
        if (uVar10 < 0x1f) {
          uVar10 = uVar10 + 1;
          goto LAB_1404b685d;
        }
        uVar11 = 0x20;
LAB_1404b6a02:
        *param_9 = (uint)uVar11;
        iVar12 = iVar12 + 1;
      } while ((iVar12 < sVar3) &&
              (lVar16 = lVar15, lVar15 = param_7, dVar19 = dVar21, dVar22 = dVar25, dVar27 = dVar31,
              1 < (uint)uVar11));
    }
  }
  return param_7;
}



// FUNCTION 1404b6a88 FUN_1404b6a88 body=6565 status=ok
// SIG undefined FUN_1404b6a88(void)

void FUN_1404b6a88(longlong param_1,double *param_2,double param_3,int *param_4)

{
  int *piVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 uVar15;
  byte bVar16;
  ulonglong uVar17;
  bool bVar18;
  longlong lVar19;
  int *piVar20;
  bool bVar21;
  byte bVar22;
  longlong lVar23;
  double *pdVar24;
  ulonglong uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined8 in_XMM2_Qb;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined4 uVar37;
  undefined1 auStack_568 [32];
  double *local_548;
  double *local_540;
  int *local_538;
  double *local_530;
  undefined8 local_528;
  int *local_520;
  double *local_518;
  double *local_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined1 local_4f8 [16];
  double local_4e0;
  double local_4d8;
  double local_4d0;
  undefined1 local_4c8 [16];
  undefined1 local_4b8 [16];
  undefined1 local_4a8 [16];
  double local_498;
  undefined8 uStack_490;
  double local_488;
  undefined8 uStack_480;
  undefined1 local_478 [16];
  double local_468;
  double local_460;
  double local_458;
  double local_450;
  double local_448;
  double local_440;
  double local_438;
  undefined8 uStack_430;
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  double local_408;
  undefined8 uStack_400;
  double local_3f8;
  undefined8 uStack_3f0;
  double local_3e8;
  undefined8 uStack_3e0;
  int local_3d0;
  undefined4 uStack_3cc;
  double *pdStack_3c8;
  double *local_3c0;
  double *local_3b8;
  double *local_3b0;
  undefined8 *local_3a8;
  double *local_3a0;
  double *local_398;
  double local_390;
  int *local_388;
  double local_380;
  double dStack_378;
  double local_370;
  double local_368;
  double local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  double local_348;
  double local_340;
  int *local_338;
  double local_330;
  double local_328;
  double dStack_320;
  double local_318;
  double adStack_308 [4];
  double adStack_2e8 [4];
  double adStack_2c8 [4];
  double adStack_2a8 [4];
  double adStack_288 [12];
  undefined8 uStack_228;
  undefined8 uStack_220;
  double local_218 [8];
  double adStack_1d8 [12];
  double local_178 [4];
  double local_158 [4];
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_568;
  local_318 = *(double *)(param_1 + 0x30);
  local_328 = *(double *)(param_1 + 0x20);
  dStack_320 = *(double *)(param_1 + 0x28);
  dVar27 = *(double *)(param_1 + 0x50);
  local_4d0 = *(double *)(param_1 + 0x48);
  local_4d8 = *(double *)(param_1 + 0x38);
  local_4e0 = *(double *)(param_1 + 0x40);
  local_418._8_8_ = 0;
  local_418._0_8_ = dVar27;
  local_330 = dVar27 * local_4d0 + *(double *)(param_1 + 0x30);
  local_520 = (int *)(dVar27 * local_4e0 + *(double *)(param_1 + 0x28));
  local_340 = dVar27 * local_4d8 + *(double *)(param_1 + 0x20);
  local_4a8._0_8_ = local_340;
  local_428._8_8_ = 0;
  local_428._0_8_ = local_330;
  dVar30 = param_2[2];
  local_488 = param_2[7];
  dVar32 = *param_2;
  dVar2 = param_2[1];
  local_510 = (double *)param_2[6];
  local_450 = param_2[5];
  dVar29 = local_450 - dVar30;
  local_458 = param_2[4];
  local_438 = local_458 - dVar2;
  local_460 = param_2[3];
  local_3e8 = local_460 - dVar32;
  dVar28 = local_3e8 * (local_488 - dVar2) - ((double)local_510 - dVar32) * local_438;
  local_518 = (double *)param_2[8];
  uStack_430 = 0;
  uStack_3e0 = 0;
  dVar35 = dVar29 * ((double)local_510 - dVar32) - ((double)local_518 - dVar30) * local_3e8;
  dVar6 = local_438 * ((double)local_518 - dVar30) - (local_488 - dVar2) * dVar29;
  dVar26 = dVar28 * dVar28 + dVar6 * dVar6 + dVar35 * dVar35;
  local_338 = local_520;
  if (1.0000000000000002e-10 < dVar26) {
    dVar26 = 1.0 / SQRT(dVar26);
    dVar6 = dVar6 * dVar26;
    dVar35 = dVar35 * dVar26;
    dVar28 = dVar28 * dVar26;
    local_4b8._8_8_ = 0;
    local_4b8._0_8_ = local_318;
    local_478._0_8_ = local_318 - dVar30;
    local_478._8_8_ = 0;
    dVar33 = (double)local_478._0_8_ * dVar28 +
             (local_328 - dVar32) * dVar6 + dVar35 * (dStack_320 - dVar2);
    dVar26 = local_330 - dVar30;
    local_4c8._8_8_ = 0;
    local_4c8._0_8_ = dVar26;
    uVar37 = (undefined4)((ulonglong)in_XMM2_Qb >> 0x20);
    dVar31 = dVar26 * dVar28 + (local_340 - dVar32) * dVar6 + ((double)local_520 - dVar2) * dVar35;
    local_508 = *(double **)(param_1 + 0x10);
    uStack_500 = 0;
    param_3 = param_3 + (double)local_508;
    uStack_400 = 0;
    uStack_3f0 = 0;
    local_448 = dStack_320;
    local_440 = local_328;
    local_408 = dVar6;
    local_3f8 = dVar28;
    local_358 = dVar6;
    uStack_350 = dVar35;
    local_348 = dVar28;
    if ((dVar31 <= param_3) || (dVar33 <= param_3)) {
      local_418._8_8_ = 0;
      local_418._0_8_ = dVar27 * 1e-05;
      dVar27 = -(dVar27 * 1e-05);
      local_4f8._8_4_ = 0;
      local_4f8._0_8_ = dVar27;
      local_4f8._12_4_ = 0x80000000;
      if (dVar27 <= (dVar31 + dVar33) * 0.5) {
        local_128 = (dVar32 - (double)local_510) * dVar35 - dVar6 * (dVar2 - local_488);
        uStack_490 = 0;
        local_130 = (dVar30 - (double)local_518) * dVar6 - dVar28 * (dVar32 - (double)local_510);
        local_138 = (dVar2 - local_488) * dVar28 - dVar35 * (dVar30 - (double)local_518);
        dVar27 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
        if (1.0000000000000002e-10 < dVar27) {
          dVar27 = 1.0 / SQRT(dVar27);
          local_138 = local_138 * dVar27;
          local_130 = local_130 * dVar27;
          local_128 = local_128 * dVar27;
        }
        local_158[0] = (double)local_478._0_8_ * local_128 +
                       (local_328 - dVar32) * local_138 + (dStack_320 - dVar2) * local_130;
        local_178[0] = dVar26 * local_128 +
                       (local_340 - dVar32) * local_138 + ((double)local_520 - dVar2) * local_130;
        local_478._8_8_ = 0;
        local_478._0_8_ = local_158[0];
        local_498 = dVar35;
        local_468 = dVar33;
        if ((local_158[0] <= param_3) || (local_178[0] <= param_3)) {
          local_110 = local_3e8 * dVar35 + -local_438 * dVar6;
          local_118 = dVar29 * dVar6 + -local_3e8 * dVar28;
          local_120 = local_438 * dVar28 + -dVar29 * dVar35;
          dVar27 = local_110 * local_110 + local_120 * local_120 + local_118 * local_118;
          if (1.0000000000000002e-10 < dVar27) {
            dVar27 = 1.0 / SQRT(dVar27);
            local_120 = local_120 * dVar27;
            local_118 = local_118 * dVar27;
            local_110 = local_110 * dVar27;
          }
          dVar27 = (local_318 - local_450) * local_110 +
                   (local_328 - local_460) * local_120 + (dStack_320 - local_458) * local_118;
          dVar30 = (local_330 - local_450) * local_110 +
                   (local_340 - local_460) * local_120 + ((double)local_520 - local_458) * local_118
          ;
          local_178[1] = dVar30;
          local_158[1] = dVar27;
          if ((dVar27 <= param_3) || (dVar30 <= param_3)) {
            local_f8 = ((double)local_510 - local_460) * dVar35 - dVar6 * (local_488 - local_458);
            local_100 = ((double)local_518 - local_450) * dVar6 -
                        dVar28 * ((double)local_510 - local_460);
            local_108 = (local_488 - local_458) * dVar28 - dVar35 * ((double)local_518 - local_450);
            dVar32 = local_f8 * local_f8 + local_108 * local_108 + local_100 * local_100;
            if (1.0000000000000002e-10 < dVar32) {
              dVar32 = 1.0 / SQRT(dVar32);
              local_108 = local_108 * dVar32;
              local_100 = local_100 * dVar32;
              local_f8 = local_f8 * dVar32;
            }
            local_158[2] = (local_318 - (double)local_518) * local_f8 +
                           (local_328 - (double)local_510) * local_108 +
                           (dStack_320 - local_488) * local_100;
            dVar32 = (local_330 - (double)local_518) * local_f8 +
                     (local_340 - (double)local_510) * local_108 +
                     ((double)local_520 - local_488) * local_100;
            local_438 = dVar31;
            local_178[2] = dVar32;
            if ((local_158[2] <= param_3) || (dVar32 <= param_3)) {
              local_4c8._8_8_ = 0;
              local_4c8._0_8_ = local_178[0];
              local_4b8._8_8_ = 0;
              local_4b8._0_8_ = local_158[2];
              local_488 = ABS(dVar33 - dVar31);
              uStack_480 = 0;
              local_4a8._8_4_ = (int)in_XMM2_Qb;
              local_4a8._0_8_ = param_3;
              local_4a8._12_4_ = uVar37;
              local_428._8_4_ = (int)in_XMM2_Qb;
              local_428._0_8_ = param_3 * param_3;
              local_428._12_4_ = uVar37;
              local_510 = param_2 + 3;
              local_518 = param_2 + 6;
              lVar23 = 2;
              lVar14 = 0;
              lVar19 = 2;
              pdVar24 = param_2;
              local_520 = param_4;
              do {
                lVar13 = lVar14;
                local_528 = 0x3f1a36e2e0000000;
                local_530 = &local_380;
                local_538 = &local_3d0;
                local_548 = &local_360;
                local_540 = &local_368;
                FUN_1404b842e(&local_328,&local_340,param_2 + lVar19 * 3,pdVar24);
                piVar12 = local_520;
                dVar26 = (double)local_3c0 - local_370;
                dVar29 = (double)pdStack_3c8 - dStack_378;
                dVar33 = (double)CONCAT44(uStack_3cc,local_3d0) - local_380;
                dVar2 = dVar26 * dVar26 + dVar33 * dVar33 + dVar29 * dVar29;
                if (-1e-05 <= local_158[lVar23 + 4] * dVar26 +
                              local_158[lVar23 + 2] * dVar33 + local_158[lVar23 + 3] * dVar29) {
                  dVar34 = dVar26 * dVar28 + dVar33 * dVar6 + dVar35 * dVar29;
                  dVar36 = (double)(~-(ulonglong)(dVar34 < -1e-05) & local_4a8._0_8_ |
                                   -(ulonglong)(dVar34 < -1e-05) & (ulonglong)local_508);
                  dVar31 = 1.0;
                  if (dVar36 * dVar36 < dVar2) goto LAB_1404b764a;
                }
                else {
                  dVar33 = -dVar33;
                  dVar31 = dVar35 * dVar29;
                  dVar29 = -dVar29;
                  dVar34 = (dVar33 * dVar6 - dVar31) - dVar26 * dVar28;
                  dVar31 = -1.0;
                  dVar26 = -dVar26;
                }
                adStack_1d8[lVar23] = dVar33;
                adStack_1d8[lVar23 + 1] = dVar29;
                adStack_1d8[lVar23 + 2] = dVar26;
                (&uStack_228)[lVar23] = local_380;
                (&uStack_220)[lVar23] = dStack_378;
                local_218[lVar23] = local_370;
                adStack_288[lVar23 + 2] = (double)CONCAT44(uStack_3cc,local_3d0);
                adStack_288[lVar23 + 3] = (double)pdStack_3c8;
                adStack_288[lVar23 + 4] = (double)local_3c0;
                adStack_288[lVar13] = local_368;
                adStack_2a8[lVar13] = local_360;
                adStack_2c8[lVar13] = dVar2;
                adStack_2e8[lVar13] = dVar31;
                adStack_308[lVar13] = dVar34;
                lVar23 = lVar23 + 3;
                pdVar24 = pdVar24 + 3;
                lVar14 = lVar13 + 1;
                lVar19 = lVar13;
              } while (lVar13 + 1 != 3);
              bVar4 = (double)local_418._0_8_ < dVar27;
              bVar5 = (double)local_418._0_8_ < (double)local_478._0_8_;
              dVar2 = local_4b8._0_8_;
              bVar3 = (double)local_418._0_8_ < dVar2;
              bVar7 = (double)local_4a8._0_8_ <= local_468;
              bVar8 = (double)local_418._0_8_ + local_438 <= local_468;
              if (!bVar8 && ((!bVar7 && !bVar3) && (!bVar5 && !bVar4))) {
                lVar14 = (longlong)*local_520;
                *local_520 = *local_520 + 1;
                *(double *)(local_520 + lVar14 * 0x16 + 2) = local_328 - (double)local_508 * dVar6;
                *(double *)(local_520 + lVar14 * 0x16 + 4) =
                     dStack_320 - (double)local_508 * local_498;
                *(double *)(local_520 + lVar14 * 0x16 + 6) = local_318 - (double)local_508 * dVar28;
                *(double *)(local_520 + lVar14 * 0x16 + 8) = local_328 - dVar6 * local_468;
                *(double *)(local_520 + lVar14 * 0x16 + 10) = dStack_320 - local_498 * local_468;
                *(double *)(local_520 + lVar14 * 0x16 + 0xc) = local_318 - dVar28 * local_468;
                *(double *)(local_520 + lVar14 * 0x16 + 0xe) = local_358;
                *(double *)((longlong)(local_520 + lVar14 * 0x16 + 0xe) + 8) = uStack_350;
                *(double *)(local_520 + lVar14 * 0x16 + 0x12) = local_348;
                *(double *)(local_520 + lVar14 * 0x16 + 0x14) = local_468 - (double)local_508;
                *(undefined1 *)(local_520 + lVar14 * 0x16 + 0x17) = 1;
                local_520[lVar14 * 0x16 + 0x16] = -1;
              }
              if (local_438 < local_468 + (double)local_418._0_8_ &&
                  ((double)local_4a8._0_8_ > local_438 &&
                  ((double)local_418._0_8_ >= dVar32 &&
                  ((double)local_418._0_8_ >= (double)local_4c8._0_8_ &&
                  (double)local_418._0_8_ >= dVar30)))) {
                lVar14 = (longlong)*local_520;
                *local_520 = *local_520 + 1;
                *(double *)(local_520 + lVar14 * 0x16 + 2) = local_340 - (double)local_508 * dVar6;
                *(double *)(local_520 + lVar14 * 0x16 + 4) =
                     (double)local_338 - (double)local_508 * local_498;
                *(double *)(local_520 + lVar14 * 0x16 + 6) = local_330 - (double)local_508 * dVar28;
                *(double *)(local_520 + lVar14 * 0x16 + 8) = local_340 - dVar6 * local_438;
                *(double *)(local_520 + lVar14 * 0x16 + 10) =
                     (double)local_338 - local_498 * local_438;
                *(double *)(local_520 + lVar14 * 0x16 + 0xc) = local_330 - dVar28 * local_438;
                piVar20 = local_520 + lVar14 * 0x16 + 0xe;
                *piVar20 = (int)local_358;
                piVar20[1] = local_358._4_4_;
                piVar20[2] = (int)uStack_350;
                piVar20[3] = uStack_350._4_4_;
                *(double *)(local_520 + lVar14 * 0x16 + 0x12) = local_348;
                *(double *)(local_520 + lVar14 * 0x16 + 0x14) = local_438 - (double)local_508;
                *(undefined1 *)(local_520 + lVar14 * 0x16 + 0x17) = 1;
                local_520[lVar14 * 0x16 + 0x16] = -1;
              }
              if (*local_520 != 2) {
                if (local_488 <= (double)local_418._0_8_) {
                  bVar16 = -(0.0 <= (double)local_478._0_8_) & -(0.0 <= (double)local_4c8._0_8_) &
                           ABS((double)local_478._0_8_ - (double)local_4c8._0_8_) <=
                           (double)local_418._0_8_;
                  bVar22 = -(0.0 <= dVar27 && 0.0 <= dVar30) &
                           ABS(dVar27 - dVar30) <= (double)local_418._0_8_;
                  bVar21 = (0.0 <= dVar2 && 0.0 <= dVar32) &&
                           ABS(dVar2 - dVar32) <= (double)local_418._0_8_;
                  if ((bVar21 || (bVar22 != 0 || bVar16 != 0)) &&
                     (bVar21 || (bVar22 != 0 || bVar16 != 0))) {
                    uVar25 = (ulonglong)(bVar22 ^ 1);
                    if (bVar16 != 0) {
                      uVar25 = 2;
                    }
                    uVar17 = (ulonglong)(bVar16 ^ 1);
                    if (bVar22 == 0 && bVar16 == 0) {
                      uVar17 = 2;
                    }
                    local_538 = local_520;
                    local_540 = (double *)local_428._0_8_;
                    local_548 = local_508;
                    FUN_146d0ec47(&local_328,&local_340,param_2 + uVar25 * 3,param_2 + uVar17 * 3);
                    goto LAB_1404b764a;
                  }
                }
                dVar26 = (double)local_418._0_8_ + (double)local_508;
                dVar35 = ABS(local_4d0 * dVar28 + local_4d8 * dVar6 + local_4e0 * local_498);
                bVar21 = dVar35 < 0.34;
                bVar18 = ((dVar32 <= dVar26 &&
                          ((double)local_4c8._0_8_ <= dVar26 && dVar30 <= dVar26)) &&
                         (local_468 + (double)local_418._0_8_ <= local_438 ||
                         ((double)local_4a8._0_8_ <= local_438 ||
                         ((double)local_418._0_8_ < dVar32 ||
                         ((double)local_418._0_8_ < (double)local_4c8._0_8_ ||
                         (double)local_418._0_8_ < dVar30))))) && bVar21;
                dVar30 = (double)local_4f8._0_8_;
                if ((((dVar2 <= dVar26 && ((double)local_478._0_8_ <= dVar26 && dVar27 <= dVar26))
                     && (bVar8 || ((bVar7 || bVar3) || (bVar5 || bVar4)))) && bVar21) || (bVar18)) {
                  dVar32 = local_4d8 * local_498 - dVar6 * local_4e0;
                  dVar33 = local_4d0 * dVar6 - dVar28 * local_4d8;
                  dVar29 = local_4e0 * dVar28 - local_498 * local_4d0;
                  dVar31 = dVar29 * local_4e0 - local_4d8 * dVar33;
                  dVar29 = dVar32 * local_4d8 - local_4d0 * dVar29;
                  dVar32 = dVar33 * local_4d0 - local_4e0 * dVar32;
                  dVar33 = dVar31 * dVar31 + dVar32 * dVar32 + dVar29 * dVar29;
                  if (1e-05 < dVar33) {
                    local_370 = 1.0 / SQRT(dVar33);
                    local_380 = dVar32 * local_370;
                    dStack_378 = dVar29 * local_370;
                    local_370 = dVar31 * local_370;
                    if (0.0 < dVar28 * local_370 + dVar6 * local_380 + local_498 * dStack_378) {
                      local_370 = -local_370;
                      local_380 = -local_380;
                      dStack_378 = -dStack_378;
                    }
                    local_3d0 = (int)local_508;
                    uStack_3cc = local_508._4_4_;
                    pdStack_3c8 = &local_380;
                    local_3b8 = local_510;
                    local_3b0 = local_518;
                    local_3a8 = &local_358;
                    local_398 = local_158 + 4;
                    local_390 = (double)local_418._0_8_;
                    local_388 = local_520;
                    local_3c0 = param_2;
                    local_3a0 = param_2;
                    if (((dVar2 <= dVar26 && ((double)local_478._0_8_ <= dVar26 && dVar27 <= dVar26)
                         ) && (bVar8 || ((bVar7 || bVar3) || (bVar5 || bVar4)))) && bVar21) {
                      FUN_1404b87d6(&local_3d0,&local_328);
                    }
                    if (bVar18) {
                      FUN_1404b87d6(&local_3d0,&local_340);
                    }
                    dVar30 = (double)local_4f8._0_8_;
                    if (*piVar12 == 2) goto LAB_1404b764a;
                  }
                }
                lVar23 = 2;
                lVar14 = 0;
                piVar20 = piVar12;
                lVar19 = 2;
                do {
                  lVar13 = lVar14;
                  dVar27 = adStack_1d8[lVar23];
                  dVar32 = adStack_1d8[lVar23 + 1];
                  dVar2 = adStack_1d8[lVar23 + 2];
                  dVar26 = adStack_288[lVar13];
                  dVar6 = adStack_2a8[lVar13];
                  dVar28 = adStack_2c8[lVar13];
                  dVar29 = adStack_2e8[lVar13];
                  if (((dVar30 < local_158[lVar13]) || (dVar30 < local_178[lVar13])) &&
                     (-1e-05 < adStack_308[lVar13] || adStack_308[lVar13] == -1e-05)) {
                    pdVar24 = param_2 + lVar19 * 3;
                    if (dVar28 <= 1.0000000000000002e-10) {
                      dVar2 = local_4d8 * (param_2[lVar23 + -1] - pdVar24[1]) -
                              (param_2[lVar23 + -2] - *pdVar24) * local_4e0;
                      dVar32 = (param_2[lVar23 + -2] - *pdVar24) * local_4d0 -
                               (param_2[lVar23] - pdVar24[2]) * local_4d8;
                      dVar27 = local_4e0 * (param_2[lVar23] - pdVar24[2]) -
                               (param_2[lVar23 + -1] - pdVar24[1]) * local_4d0;
                      dVar28 = dVar2 * dVar2 + dVar27 * dVar27 + dVar32 * dVar32;
                      if (1.0000000000000002e-10 < dVar28) {
                        dVar30 = 1.0 / SQRT(dVar28);
                        dVar27 = dVar27 * dVar30;
                        dVar32 = dVar32 * dVar30;
                        dVar2 = dVar2 * dVar30;
                        dVar30 = local_348 * dVar2 + local_358 * dVar27 + uStack_350 * dVar32;
                        dVar29 = 0.0;
                        if (dVar30 < 0.0) {
                          dVar2 = -dVar2;
                          dVar32 = -dVar32;
                        }
                        uVar25 = -(ulonglong)(dVar30 < 0.0);
                        dVar27 = (double)(~uVar25 & (ulonglong)dVar27 | (ulonglong)-dVar27 & uVar25)
                        ;
                        piVar20 = local_520;
                        dVar30 = (double)local_4f8._0_8_;
                        if (-1e-05 <= local_158[lVar23 + 4] * dVar2 +
                                      dVar27 * local_158[lVar23 + 2] +
                                      local_158[lVar23 + 3] * dVar32) goto LAB_1404b7c1d;
                      }
                    }
                    else {
                      if (dVar28 < 0.0) {
                        dVar28 = sqrt(dVar28);
                        dVar30 = (double)local_4f8._0_8_;
                      }
                      else {
                        dVar28 = SQRT(dVar28);
                      }
                      dVar2 = dVar2 / dVar28;
                      dVar32 = dVar32 / dVar28;
                      dVar27 = dVar27 / dVar28;
                      dVar29 = dVar29 * dVar28;
LAB_1404b7c1d:
                      if (dVar35 < 0.34 &&
                          ((0.0 < dVar26 && dVar26 < 1.0) && (dVar6 < 1.0 && 0.0 < dVar6))) {
                        dVar30 = adStack_288[lVar23 + 4] - dVar2 * (double)local_508;
                        dVar27 = adStack_288[lVar23 + 2] - dVar27 * (double)local_508;
                        dVar32 = adStack_288[lVar23 + 3] - dVar32 * (double)local_508;
                        dVar29 = (dVar30 - param_2[2]) * local_348 +
                                 (dVar27 - *param_2) * local_358 +
                                 (dVar32 - param_2[1]) * uStack_350;
                        lVar14 = (longlong)*piVar20;
                        *piVar20 = *piVar20 + 1;
                        *(double *)(piVar12 + lVar14 * 0x16 + 2) = dVar27;
                        *(double *)(piVar12 + lVar14 * 0x16 + 4) = dVar32;
                        *(double *)(piVar12 + lVar14 * 0x16 + 6) = dVar30;
                        *(double *)(piVar12 + lVar14 * 0x16 + 8) = dVar27 - local_358 * dVar29;
                        *(double *)(piVar12 + lVar14 * 0x16 + 10) = dVar32 - uStack_350 * dVar29;
                        *(double *)(piVar12 + lVar14 * 0x16 + 0xc) = dVar30 - local_348 * dVar29;
                        piVar1 = piVar12 + lVar14 * 0x16 + 0xe;
                        *piVar1 = (int)local_358;
                        piVar1[1] = local_358._4_4_;
                        piVar1[2] = (int)uStack_350;
                        piVar1[3] = uStack_350._4_4_;
                        *(double *)(piVar12 + lVar14 * 0x16 + 0x12) = local_348;
                        uVar15 = 1;
                        dVar30 = (double)local_4f8._0_8_;
                      }
                      else {
                        if (local_158[lVar23 + 4] * dVar2 +
                            local_158[lVar23 + 2] * dVar27 + local_158[lVar23 + 3] * dVar32 < -1e-05
                           ) goto LAB_1404b7d7e;
                        if ((dVar26 == 0.0) && (!NAN(dVar26))) {
                          lVar14 = 0;
                          if (lVar13 != 2) {
                            lVar14 = lVar13 + 1;
                          }
                          dVar30 = (double)local_4f8._0_8_;
                          if (((pdVar24[2] - param_2[lVar14 * 3 + 2]) * dVar2 +
                               (*pdVar24 - param_2[lVar14 * 3]) * dVar27 +
                               (pdVar24[1] - param_2[lVar14 * 3 + 1]) * dVar32 < -1e-05) ||
                             ((pdVar24[2] - param_2[lVar23]) * dVar2 +
                              (*pdVar24 - param_2[lVar23 + -2]) * dVar27 +
                              (pdVar24[1] - param_2[lVar23 + -1]) * dVar32 < -1e-05))
                          goto LAB_1404b7d7e;
                        }
                        if ((dVar26 == 1.0) && (!NAN(dVar26))) {
                          lVar14 = 0;
                          if (lVar13 != 2) {
                            lVar14 = lVar13 + 1;
                          }
                          dVar30 = (double)local_4f8._0_8_;
                          if (((param_2[lVar23] - pdVar24[2]) * dVar2 +
                               (param_2[lVar23 + -2] - *pdVar24) * dVar27 +
                               (param_2[lVar23 + -1] - pdVar24[1]) * dVar32 < -1e-05) ||
                             ((param_2[lVar23] - param_2[lVar14 * 3 + 2]) * dVar2 +
                              (param_2[lVar23 + -2] - param_2[lVar14 * 3]) * dVar27 +
                              (param_2[lVar23 + -1] - param_2[lVar14 * 3 + 1]) * dVar32 < -1e-05))
                          goto LAB_1404b7d7e;
                        }
                        lVar14 = (longlong)*piVar20;
                        *piVar20 = *piVar20 + 1;
                        dVar26 = adStack_288[lVar23 + 4];
                        dVar6 = adStack_288[lVar23 + 3];
                        *(double *)(piVar12 + lVar14 * 0x16 + 2) =
                             adStack_288[lVar23 + 2] - (double)local_508 * dVar27;
                        *(double *)(piVar12 + lVar14 * 0x16 + 4) =
                             dVar6 - (double)local_508 * dVar32;
                        *(double *)(piVar12 + lVar14 * 0x16 + 6) =
                             dVar26 - (double)local_508 * dVar2;
                        iVar9 = *(int *)((longlong)&uStack_228 + lVar23 * 8 + 4);
                        iVar10 = *(int *)(&uStack_220 + lVar23);
                        iVar11 = *(int *)((longlong)local_218 + lVar23 * 8 + -4);
                        piVar1 = piVar12 + lVar14 * 0x16 + 8;
                        *piVar1 = *(int *)(&uStack_228 + lVar23);
                        piVar1[1] = iVar9;
                        piVar1[2] = iVar10;
                        piVar1[3] = iVar11;
                        *(double *)(piVar12 + lVar14 * 0x16 + 0xc) = local_218[lVar23];
                        *(double *)(piVar12 + lVar14 * 0x16 + 0xe) = dVar27;
                        *(double *)(piVar12 + lVar14 * 0x16 + 0x10) = dVar32;
                        *(double *)(piVar12 + lVar14 * 0x16 + 0x12) = dVar2;
                        dVar29 = dVar29 - (double)local_508;
                        uVar15 = 2;
                      }
                      *(double *)(piVar12 + lVar14 * 0x16 + 0x14) = dVar29;
                      *(undefined1 *)(piVar12 + lVar14 * 0x16 + 0x17) = uVar15;
                      piVar12[lVar14 * 0x16 + 0x16] = -1;
                    }
                  }
LAB_1404b7d7e:
                  lVar23 = lVar23 + 3;
                  lVar14 = lVar13 + 1;
                  lVar19 = lVar13;
                } while (lVar13 + 1 != 3);
              }
            }
          }
        }
      }
    }
  }
LAB_1404b764a:
  if ((local_f0 ^ (ulonglong)auStack_568) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404b842e FUN_1404b842e body=936 status=ok
// SIG undefined FUN_1404b842e(void)

void FUN_1404b842e(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
                  double *param_6,double *param_7,double *param_8,double param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  param_9 = param_9 * param_9;
  dVar1 = param_1[2];
  dVar10 = param_2[2] - dVar1;
  dVar2 = *param_1;
  dVar3 = param_1[1];
  dVar14 = param_2[1] - dVar3;
  dVar13 = *param_2 - dVar2;
  dVar4 = param_3[2];
  dVar9 = param_4[2] - dVar4;
  dVar5 = *param_3;
  dVar6 = param_3[1];
  dVar12 = param_4[1] - dVar6;
  dVar11 = *param_4 - dVar5;
  dVar7 = dVar10 * dVar10 + dVar13 * dVar13 + dVar14 * dVar14;
  dVar8 = dVar10 * dVar9 + dVar13 * dVar11 + dVar14 * dVar12;
  *param_5 = 0.0;
  *param_6 = 0.0;
  if ((param_9 < dVar7) || (param_9 < dVar8)) {
    dVar1 = dVar1 - dVar4;
    dVar3 = dVar3 - dVar6;
    dVar2 = dVar2 - dVar5;
    dVar4 = dVar9 * dVar9 + dVar11 * dVar11 + dVar12 * dVar12;
    dVar5 = dVar9 * dVar1 + dVar11 * dVar2 + dVar12 * dVar3;
    if (dVar7 <= param_9) {
      dVar5 = dVar5 / dVar4;
      if (1.0 <= dVar5) {
        dVar5 = 1.0;
      }
      if (dVar5 <= 0.0) {
        dVar5 = 0.0;
      }
      *param_6 = dVar5;
    }
    else {
      dVar1 = dVar1 * dVar10 + dVar2 * dVar13 + dVar3 * dVar14;
      if (dVar4 <= param_9) {
        dVar7 = -dVar1 / dVar7;
        if (1.0 <= dVar7) {
          dVar7 = 1.0;
        }
        if (dVar7 <= 0.0) {
          dVar7 = 0.0;
        }
        *param_5 = dVar7;
      }
      else {
        dVar2 = dVar7 * dVar4 - dVar8 * dVar8;
        if ((dVar2 != 0.0) || (NAN(dVar2))) {
          dVar2 = (dVar8 * dVar5 - dVar4 * dVar1) / dVar2;
          if (1.0 <= dVar2) {
            dVar2 = 1.0;
          }
          if (dVar2 <= 0.0) {
            dVar2 = 0.0;
          }
          *param_5 = dVar2;
        }
        else {
          dVar2 = *param_5;
        }
        dVar4 = (dVar2 * dVar8 + dVar5) / dVar4;
        *param_6 = dVar4;
        if (dVar4 < 0.0) {
          dVar7 = -dVar1 / dVar7;
          if (1.0 <= dVar7) {
            dVar7 = 1.0;
          }
          if (dVar7 <= 0.0) {
            dVar7 = 0.0;
          }
          *param_5 = dVar7;
          *param_6 = 0.0;
        }
        else if (1.0 < dVar4) {
          dVar7 = (dVar8 - dVar1) / dVar7;
          if (1.0 <= dVar7) {
            dVar7 = 1.0;
          }
          if (dVar7 <= 0.0) {
            dVar7 = 0.0;
          }
          *param_5 = dVar7;
          *param_6 = 1.0;
        }
      }
    }
  }
  dVar1 = *param_5;
  dVar2 = param_1[2];
  dVar3 = param_1[1];
  *param_7 = dVar13 * dVar1 + *param_1;
  param_7[1] = dVar14 * dVar1 + dVar3;
  param_7[2] = dVar10 * dVar1 + dVar2;
  dVar1 = *param_6;
  dVar2 = param_3[2];
  dVar3 = param_3[1];
  *param_8 = dVar11 * dVar1 + *param_3;
  param_8[1] = dVar12 * dVar1 + dVar3;
  param_8[2] = dVar9 * dVar1 + dVar2;
  return;
}



// FUNCTION 1404b87d6 FUN_1404b87d6 body=456 status=ok
// SIG undefined FUN_1404b87d6(void)

void FUN_1404b87d6(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  double *pdVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  pdVar3 = (double *)param_1[1];
  dVar1 = *param_1;
  dVar9 = dVar1 * pdVar3[2] + param_2[2];
  dVar11 = pdVar3[1] * dVar1 + param_2[1];
  dVar10 = *pdVar3 * dVar1 + *param_2;
  pdVar3 = (double *)param_1[2];
  pdVar4 = (double *)param_1[7];
  dVar1 = param_1[8];
  if ((((dVar9 - pdVar3[2]) * pdVar4[2] +
        (dVar10 - *pdVar3) * *pdVar4 + (dVar11 - pdVar3[1]) * pdVar4[1] <= dVar1) &&
      (pdVar3 = (double *)param_1[3],
      (dVar9 - pdVar3[2]) * pdVar4[5] +
      (dVar10 - *pdVar3) * pdVar4[3] + (dVar11 - pdVar3[1]) * pdVar4[4] <= dVar1)) &&
     (pdVar3 = (double *)param_1[4],
     (dVar9 - pdVar3[2]) * pdVar4[8] +
     (dVar10 - *pdVar3) * pdVar4[6] + (dVar11 - pdVar3[1]) * pdVar4[7] <= dVar1)) {
    pdVar3 = (double *)param_1[5];
    pdVar4 = (double *)param_1[6];
    dVar12 = (dVar9 - pdVar4[2]) * pdVar3[2] +
             (dVar10 - *pdVar4) * *pdVar3 + (dVar11 - pdVar4[1]) * pdVar3[1];
    piVar5 = (int *)param_1[9];
    lVar8 = (longlong)*piVar5;
    *piVar5 = *piVar5 + 1;
    *(double *)(piVar5 + lVar8 * 0x16 + 2) = dVar10;
    *(double *)(piVar5 + lVar8 * 0x16 + 4) = dVar11;
    *(double *)(piVar5 + lVar8 * 0x16 + 6) = dVar9;
    pdVar3 = (double *)param_1[5];
    dVar1 = pdVar3[1];
    dVar2 = pdVar3[2];
    *(double *)(piVar5 + lVar8 * 0x16 + 8) = dVar10 - *pdVar3 * dVar12;
    *(double *)(piVar5 + lVar8 * 0x16 + 10) = dVar11 - dVar1 * dVar12;
    *(double *)(piVar5 + lVar8 * 0x16 + 0xc) = dVar9 - dVar2 * dVar12;
    puVar6 = (undefined8 *)param_1[5];
    *(undefined8 *)(piVar5 + lVar8 * 0x16 + 0x12) = puVar6[2];
    uVar7 = puVar6[1];
    *(undefined8 *)(piVar5 + lVar8 * 0x16 + 0xe) = *puVar6;
    *(undefined8 *)(piVar5 + lVar8 * 0x16 + 0xe + 2) = uVar7;
    *(double *)(piVar5 + lVar8 * 0x16 + 0x14) = dVar12;
    *(undefined1 *)(piVar5 + lVar8 * 0x16 + 0x17) = 1;
    piVar5[lVar8 * 0x16 + 0x16] = -1;
  }
  return;
}



// FUNCTION 1404b899e FUN_1404b899e body=1546 status=ok
// SIG undefined FUN_1404b899e(void)

void FUN_1404b899e(longlong param_1,double *param_2,double param_3,int *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  double dVar16;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM15_Da;
  undefined4 unaff_XMM15_Db;
  undefined1 auStack_2e8 [32];
  double *local_2c8;
  double *local_2c0;
  double local_2b0;
  double local_2a8;
  double *local_2a0;
  double local_298;
  double local_290;
  double local_288;
  undefined1 local_280 [16];
  double local_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined4 local_24c;
  double local_248 [16];
  double local_1c8 [12];
  double local_168 [12];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  ulonglong local_f0;
  
  dVar10 = (double)CONCAT44(unaff_XMM15_Db,unaff_XMM15_Da);
  dVar5 = (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
  dVar4 = (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  dVar8 = (param_2[2] + param_2[5] + param_2[8]) / 3.0 - *(double *)(param_1 + 0x30);
  dVar1 = *(double *)(param_1 + 0x20);
  dVar2 = *(double *)(param_1 + 0x28);
  dVar7 = (param_2[1] + param_2[4] + param_2[7]) / 3.0 - dVar2;
  dVar9 = (*param_2 + param_2[3] + param_2[6]) / 3.0 - dVar1;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  local_248[2] = -1.0;
  local_248[3] = -1.0;
  local_248[0] = -1.0;
  local_248[1] = -1.0;
  dVar16 = dVar9 * dVar9 + dVar7 * dVar7;
  dVar3 = dVar8 * dVar8 + dVar16;
  dVar6 = SQRT(dVar3);
  local_24c = 0xffffffff;
  local_2a8 = param_3;
  local_2a0 = param_2;
  if (0.001 < dVar6) {
    uVar15 = 0;
    dVar11 = 0.0;
    local_2b0 = *(double *)(param_1 + 0x30);
    do {
      dVar4 = -dVar8;
      dVar5 = -dVar7;
      dVar10 = -dVar9;
      local_280._8_4_ = SUB84(dVar7,0);
      local_280._0_8_ = dVar10;
      local_280._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      local_2c8 = (double *)0x0;
      local_2c0 = (double *)&local_24c;
      local_270 = dVar4;
      FUN_1404b8faa(&local_2a0,&local_268,local_280,0);
      dVar3 = (dVar8 * (local_258 - local_2b0) +
              dVar9 * (local_268 - dVar1) + dVar7 * (dStack_260 - dVar2)) / dVar6;
      if (dVar11 <= dVar3) {
        dVar11 = dVar3;
      }
      if (dVar6 - dVar11 < 0.001 || 0xf < uVar15) {
        if ((local_108 & 0xffffffff) != 0) {
          local_258 = 0.0;
          if ((int)local_108 < 1) {
            dStack_260 = 0.0;
            local_268 = 0.0;
            local_2b0 = 0.0;
            dVar2 = 0.0;
            dVar1 = 0.0;
          }
          else {
            uVar14 = 0;
            dStack_260 = 0.0;
            local_268 = 0.0;
            local_2b0 = 0.0;
            dVar2 = 0.0;
            dVar1 = 0.0;
            local_258 = 0.0;
            do {
              lVar12 = (longlong)*(int *)((longlong)&local_108 + uVar14 * 4 + 4);
              dVar3 = local_248[lVar12];
              local_268 = local_268 + local_1c8[lVar12 * 3] * dVar3;
              dStack_260 = dStack_260 + local_1c8[lVar12 * 3 + 1] * dVar3;
              local_258 = local_258 + local_1c8[lVar12 * 3 + 2] * dVar3;
              dVar1 = dVar1 + local_248[lVar12 * 3 + 4] * dVar3;
              dVar2 = dVar2 + local_248[lVar12 * 3 + 5] * dVar3;
              local_2b0 = local_2b0 + dVar3 * local_248[lVar12 * 3 + 6];
              uVar14 = uVar14 + 1;
            } while ((local_108 & 0xffffffff) != uVar14);
          }
        }
        dVar4 = dVar4 / dVar6;
        dVar5 = dVar5 / dVar6;
        dVar10 = dVar10 / dVar6;
        param_3 = local_268 + dVar10 * 0.0;
        dVar16 = dStack_260 + dVar5 * 0.0;
        dVar3 = local_258 + dVar4 * 0.0;
        dVar1 = dVar1 - dVar10 * 0.0;
        dVar2 = dVar2 - dVar5 * 0.0;
        local_2b0 = local_2b0 - dVar4 * 0.0;
        break;
      }
      uVar15 = uVar15 + 1;
      lVar12 = (longlong)(int)local_108;
      *(int *)((longlong)&local_108 + lVar12 * 4 + 4) = (int)local_108;
      iVar13 = (int)local_108 + 1;
      local_168[lVar12 * 3] = local_268 - dVar1;
      local_168[lVar12 * 3 + 1] = dStack_260 - dVar2;
      local_168[lVar12 * 3 + 2] = local_258 - local_2b0;
      local_1c8[lVar12 * 3] = local_268;
      local_1c8[lVar12 * 3 + 1] = dStack_260;
      local_1c8[lVar12 * 3 + 2] = local_258;
      local_248[lVar12 * 3 + 4] = dVar1;
      local_248[lVar12 * 3 + 5] = dVar2;
      local_248[lVar12 * 3 + 6] = local_2b0;
      local_108 = CONCAT44(local_108._4_4_,iVar13);
      local_2c0 = local_248 + 4;
      local_2c8 = local_1c8;
      param_3 = local_268;
      FUN_1449162b1(&local_298,local_168,&local_108,local_248);
      dVar16 = local_298 * local_298 + local_290 * local_290;
      dVar3 = local_288 * local_288 + dVar16;
      dVar6 = SQRT(dVar3);
      dVar8 = local_288;
      dVar7 = local_290;
      dVar9 = local_298;
    } while (0.001 < dVar6);
  }
  dVar7 = *(double *)(param_1 + 0x10);
  if (dVar6 - dVar7 < local_2a8) {
    lVar12 = (longlong)*param_4;
    (param_4 + lVar12 * 0x16 + 0x14)[0] = -1;
    (param_4 + lVar12 * 0x16 + 0x14)[1] = 0x7fefffff;
    param_4[lVar12 * 0x16 + 0x16] = -1;
    *(undefined1 *)(param_4 + lVar12 * 0x16 + 0x17) = 0;
    lVar12 = (longlong)*param_4;
    *param_4 = *param_4 + 1;
    *(double *)(param_4 + lVar12 * 0x16 + 2) = dVar1 - dVar10 * dVar7;
    *(double *)(param_4 + lVar12 * 0x16 + 4) = dVar2 - dVar5 * dVar7;
    *(double *)(param_4 + lVar12 * 0x16 + 6) = local_2b0 - dVar7 * dVar4;
    *(double *)(param_4 + lVar12 * 0x16 + 8) = param_3;
    *(double *)(param_4 + lVar12 * 0x16 + 10) = dVar16;
    *(double *)(param_4 + lVar12 * 0x16 + 0xc) = dVar3;
    *(double *)(param_4 + lVar12 * 0x16 + 0xe) = dVar10;
    *(double *)(param_4 + lVar12 * 0x16 + 0x10) = dVar5;
    *(double *)(param_4 + lVar12 * 0x16 + 0x12) = dVar4;
    *(double *)(param_4 + lVar12 * 0x16 + 0x14) = dVar6 - dVar7;
  }
  if ((local_f0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404b8faa FUN_1404b8faa body=605 status=ok
// SIG undefined FUN_1404b8faa(void)

void FUN_1404b8faa(undefined8 *param_1,double *param_2,double *param_3,double param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  pdVar1 = (double *)*param_1;
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar5 = param_3[2];
  dVar4 = pdVar1[2] * dVar5 + *pdVar1 * dVar2 + pdVar1[1] * dVar3;
  dVar6 = pdVar1[5] * dVar5 + pdVar1[3] * dVar2 + pdVar1[4] * dVar3;
  dVar2 = dVar5 * pdVar1[8] + dVar2 * pdVar1[6] + dVar3 * pdVar1[7];
  if ((dVar4 < dVar6) || (dVar4 < dVar2)) {
    if ((dVar6 < dVar4) || (dVar6 < dVar2)) {
      *param_6 = 2;
      if ((param_4 != 0.0) || (NAN(param_4))) {
        dVar2 = *param_3;
        dVar3 = param_3[1];
        dVar5 = param_3[2];
        dVar4 = 1.0 / SQRT(dVar5 * dVar5 + dVar2 * dVar2 + dVar3 * dVar3);
        dVar5 = dVar5 * dVar4 * param_4 + pdVar1[8];
        dVar3 = dVar3 * dVar4 * param_4 + pdVar1[7];
        dVar2 = dVar4 * dVar2 * param_4 + pdVar1[6];
        goto LAB_1404b9117;
      }
      pdVar1 = pdVar1 + 6;
    }
    else {
      *param_6 = 1;
      if ((param_4 != 0.0) || (NAN(param_4))) {
        dVar2 = *param_3;
        dVar3 = param_3[1];
        dVar5 = param_3[2];
        dVar4 = 1.0 / SQRT(dVar5 * dVar5 + dVar2 * dVar2 + dVar3 * dVar3);
        dVar5 = dVar5 * dVar4 * param_4 + pdVar1[5];
        dVar3 = dVar3 * dVar4 * param_4 + pdVar1[4];
        dVar2 = dVar4 * dVar2 * param_4 + pdVar1[3];
LAB_1404b9117:
        *param_2 = dVar2;
        param_2[1] = dVar3;
        param_2[2] = dVar5;
        return;
      }
      pdVar1 = pdVar1 + 3;
    }
  }
  else {
    *param_6 = 0;
    if ((param_4 != 0.0) || (NAN(param_4))) {
      dVar2 = *param_3;
      dVar3 = param_3[1];
      dVar5 = param_3[2];
      dVar4 = 1.0 / SQRT(dVar5 * dVar5 + dVar2 * dVar2 + dVar3 * dVar3);
      dVar5 = dVar5 * dVar4 * param_4 + pdVar1[2];
      dVar3 = dVar3 * dVar4 * param_4 + pdVar1[1];
      dVar2 = dVar4 * dVar2 * param_4 + *pdVar1;
      goto LAB_1404b9117;
    }
  }
  param_2[2] = pdVar1[2];
  dVar2 = pdVar1[1];
  *param_2 = *pdVar1;
  param_2[1] = dVar2;
  return;
}



// FUNCTION 1404b9207 FUN_1404b9207 body=100 status=ok
// SIG undefined FUN_1404b9207(void)

void FUN_1404b9207(undefined8 param_1,longlong param_2,int param_3,undefined4 param_4,
                  undefined8 param_5)

{
  if (DAT_14c75f054 == 1) {
    FUN_1404c8cfb(param_1,(longlong)param_3 * 0x78 + *(longlong *)(param_2 + 0x30));
    return;
  }
  if (DAT_14c75f054 == 2) {
    FUN_146d4096d(param_1,param_2,param_4,param_4,param_5);
    *(byte *)(param_2 + 0x28) = *(byte *)(param_2 + 0x28) & 0xfd;
    return;
  }
  FUN_146cbc0fe(param_1,(longlong)param_3 * 0x78 + *(longlong *)(param_2 + 0x30));
  return;
}



// FUNCTION 1404b926b FUN_1404b926b body=867 status=ok
// SIG undefined FUN_1404b926b(void)

void FUN_1404b926b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined4 local_78;
  undefined1 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined4 *)(param_6 + 0x16c) = 0xffffffff;
  if (*(int *)(param_6 + 0x5b4) < 0) {
    *(undefined4 *)(param_6 + 0x5b0) = 0;
    FUN_1404b2356(param_6 + 0x3f8,0);
  }
  else {
    *(undefined4 *)(param_6 + 0x5b0) = 0;
  }
  if (*(int *)(param_6 + 0x634) < 0) {
    *(undefined4 *)(param_6 + 0x630) = 0;
    FUN_146d72a40(param_6 + 0x5b8,0);
  }
  else {
    *(undefined4 *)(param_6 + 0x630) = 0;
  }
  *(undefined4 *)(param_6 + 0x230) = 0;
  *(byte *)(param_6 + 0x374) = *(byte *)(param_6 + 0x374) & 0xcf;
  local_d8 = param_4;
  FUN_1404bd6e3(&local_c8,param_1,param_2,param_3);
  if (((local_80 != 1.79769313486232e+308) || (NAN(local_80))) &&
     (local_80 < (double)*(float *)(param_6 + 300))) {
    iVar2 = *(int *)(param_6 + 0x5b0);
    *(uint *)(param_6 + 0x5b0) = iVar2 + 1U;
    if (*(uint *)(param_6 + 0x5b4) < iVar2 + 1U) {
      FUN_146ce5792(param_6 + 0x3f8,iVar2);
    }
    lVar3 = *(longlong *)(param_6 + 0x5a8);
    if (*(longlong *)(param_6 + 0x5a8) == 0) {
      lVar3 = param_6 + 0x3f8;
    }
    lVar4 = (longlong)iVar2 * 0x6c;
    *(float *)(lVar3 + lVar4) = (float)local_c8;
    *(float *)(lVar3 + 4 + lVar4) = (float)local_c0;
    *(float *)(lVar3 + 8 + lVar4) = (float)local_b8;
    *(float *)(lVar3 + 0xc + lVar4) = (float)local_b0;
    *(float *)(lVar3 + 0x10 + lVar4) = (float)local_a8;
    *(float *)(lVar3 + 0x14 + lVar4) = (float)local_a0;
    *(float *)(lVar3 + 0x18 + lVar4) = (float)local_98;
    *(float *)(lVar3 + 0x1c + lVar4) = (float)local_90;
    *(float *)(lVar3 + 0x20 + lVar4) = (float)local_88;
    *(float *)(lVar3 + 0x24 + lVar4) = (float)local_80;
    *(undefined4 *)(lVar3 + 0x28 + lVar4) = local_78;
    *(undefined1 *)(lVar3 + 0x2c + lVar4) = local_74;
    *(float *)(lVar3 + 0x3c + lVar4) = (float)local_c8;
    *(float *)(lVar3 + 0x40 + lVar4) = (float)local_c0;
    *(float *)(lVar3 + 0x44 + lVar4) = (float)local_b8;
    *(float *)(lVar3 + 0x48 + lVar4) = (float)local_b0;
    *(float *)(lVar3 + 0x4c + lVar4) = (float)local_a8;
    *(float *)(lVar3 + 0x50 + lVar4) = (float)local_a0;
    *(float *)(lVar3 + 0x54 + lVar4) = (float)local_c8;
    *(float *)(lVar3 + 0x58 + lVar4) = (float)local_c0;
    *(float *)(lVar3 + 0x5c + lVar4) = (float)local_b8;
    *(float *)(lVar3 + 0x60 + lVar4) = (float)local_b0;
    *(float *)(lVar3 + 100 + lVar4) = (float)local_a8;
    *(float *)(lVar3 + 0x68 + lVar4) = (float)local_a0;
    *(undefined8 *)(lVar3 + 0x34 + lVar4) = 0;
    *(undefined1 *)(lVar3 + 0x30 + lVar4) = 0;
    lVar3 = *(longlong *)(param_6 + 0x5a8);
    if (*(longlong *)(param_6 + 0x5a8) == 0) {
      lVar3 = param_6 + 0x3f8;
    }
    if ((longlong)*(int *)(param_6 + 0x16c) == -1) {
      fVar1 = INFINITY;
    }
    else {
      fVar1 = *(float *)(lVar3 + 0x24 + (longlong)*(int *)(param_6 + 0x16c) * 0x6c);
    }
    if (*(float *)(lVar3 + 0x24 + lVar4) < fVar1) {
      *(int *)(param_6 + 0x16c) = iVar2;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404b95cf FUN_1404b95cf body=5462 status=ok
// SIG undefined FUN_1404b95cf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404b95cf(longlong param_1,double *param_2,longlong param_3,double *param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  double *pdVar8;
  double *pdVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar46;
  undefined1 auVar45 [16];
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined1 auStack_468 [32];
  double *local_448;
  double *local_440;
  double *local_438;
  double *local_430;
  double *local_428;
  double *local_420;
  double local_418;
  double *local_410;
  double *local_408;
  double local_400;
  undefined1 local_3f8;
  double *local_3e8;
  double *local_3e0;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  double local_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  undefined1 local_338 [16];
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  double local_2a8;
  double dStack_2a0;
  double local_298;
  undefined8 uStack_290;
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double local_228;
  double dStack_220;
  double local_218;
  longlong local_208 [3];
  double local_1f0;
  undefined1 *local_1e8;
  undefined1 local_1d9;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  undefined1 local_128 [16];
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_468;
  *(undefined4 *)(param_6 + 0x16c) = 0xffffffff;
  if (*(int *)(param_6 + 0x5b4) < 0) {
    *(undefined4 *)(param_6 + 0x5b0) = 0;
    FUN_1404b2356(param_6 + 0x3f8,0);
  }
  else {
    *(undefined4 *)(param_6 + 0x5b0) = 0;
  }
  if (*(int *)(param_6 + 0x634) < 0) {
    *(undefined4 *)(param_6 + 0x630) = 0;
    FUN_146d72a40(param_6 + 0x5b8,0);
  }
  else {
    *(undefined4 *)(param_6 + 0x630) = 0;
  }
  *(undefined4 *)(param_6 + 0x230) = 0;
  *(byte *)(param_6 + 0x374) = *(byte *)(param_6 + 0x374) & 0xcf;
  dVar16 = *(double *)(param_1 + 0x50);
  dVar15 = *(double *)(param_1 + 0x30);
  dVar14 = *(double *)(param_1 + 0x20);
  dVar35 = *(double *)(param_1 + 0x28);
  dVar12 = (dVar16 * *(double *)(param_1 + 0x48) + dVar15) - dVar15;
  dVar29 = (dVar16 * *(double *)(param_1 + 0x40) + dVar35) - dVar35;
  dVar20 = (dVar16 * *(double *)(param_1 + 0x38) + dVar14) - dVar14;
  dVar27 = dVar12 * dVar12 + dVar20 * dVar20 + dVar29 * dVar29;
  dVar34 = SQRT(dVar27);
  dVar31 = 0.0;
  dVar30 = 0.0;
  dVar13 = 0.0;
  if (9.999999747378752e-05 <= dVar27) {
    dVar13 = dVar12 / dVar34;
    dVar30 = dVar29 / dVar34;
  }
  local_3a8 = *param_2;
  local_398 = param_2[1];
  dStack_390 = param_2[2];
  dStack_3a0 = param_2[3];
  local_388 = param_2[8];
  dStack_380 = param_2[9];
  local_278 = param_2[10];
  dStack_270 = param_2[0xb];
  dVar34 = (double)(-(ulonglong)(dVar27 < 9.999999747378752e-05) & 0x3ff0000000000000 |
                   ~-(ulonglong)(dVar27 < 9.999999747378752e-05) & (ulonglong)(dVar20 / dVar34)) *
           local_388;
  dVar30 = dVar30 * dStack_380;
  dVar13 = dVar13 * local_278;
  dVar12 = param_2[3];
  dVar20 = param_2[3];
  dVar29 = dVar30 * local_3a8 - local_398 * dVar34;
  dVar36 = dVar13 * local_398 - dStack_390 * dVar30;
  dVar27 = dVar34 * dStack_390 - local_3a8 * dVar13;
  dStack_300 = dStack_270 * 0.0 * dStack_3a0 - dStack_3a0 * dStack_270 * 0.0;
  dVar36 = dVar36 + dVar36;
  dVar27 = dVar27 + dVar27;
  dVar29 = dVar29 + dVar29;
  dStack_300 = dStack_300 + dStack_300;
  local_f8 = dVar29 * dVar12 + dVar13 + (dVar27 * local_3a8 - dVar36 * local_398);
  local_108 = (dVar29 * local_398 - dVar27 * dStack_390) + dVar12 * dVar36 + dVar34;
  dStack_100 = (dStack_390 * dVar36 - local_3a8 * dVar29) + dVar20 * dVar27 + dVar30;
  dVar30 = *(double *)(param_3 + 0x50);
  local_258 = *(double *)(param_3 + 0x40);
  uStack_250 = 0;
  local_268 = *(double *)(param_3 + 0x38);
  uStack_260 = 0;
  local_310 = *(double *)(param_3 + 0x28);
  local_318 = *(double *)(param_3 + 0x20);
  dVar29 = (dVar30 * local_258 + local_310) - local_310;
  dVar13 = (dVar30 * local_268 + local_318) - local_318;
  local_298 = *(double *)(param_3 + 0x48);
  uStack_290 = 0;
  local_320 = *(double *)(param_3 + 0x30);
  dVar34 = (dVar30 * local_298 + local_320) - local_320;
  dVar36 = dVar34 * dVar34 + dVar13 * dVar13 + dVar29 * dVar29;
  dVar47 = SQRT(dVar36);
  dVar27 = 0.0;
  if (9.999999747378752e-05 <= dVar36) {
    dVar27 = dVar34 / dVar47;
    dVar31 = dVar29 / dVar47;
  }
  local_2a8 = *param_4;
  local_2d8 = param_4[1];
  auVar1 = *(undefined1 (*) [16])(param_4 + 2);
  dStack_2d0 = auVar1._0_8_;
  local_2c8 = param_4[8];
  dStack_2c0 = param_4[9];
  local_2f8 = param_4[10];
  dStack_2f0 = param_4[0xb];
  dVar39 = (double)(-(ulonglong)(dVar36 < 9.999999747378752e-05) & 0x3ff0000000000000 |
                   ~-(ulonglong)(dVar36 < 9.999999747378752e-05) & (ulonglong)(dVar13 / dVar47)) *
           local_2c8;
  dVar31 = dVar31 * dStack_2c0;
  dVar27 = dVar27 * local_2f8;
  dVar13 = param_4[3];
  dVar29 = param_4[3];
  dVar34 = dVar31 * local_2a8 - local_2d8 * dVar39;
  dVar36 = dVar27 * local_2d8 - dStack_2d0 * dVar31;
  local_2b8._8_4_ = auVar1._8_4_;
  local_2b8._0_8_ = local_2a8;
  local_2b8._12_4_ = auVar1._12_4_;
  dVar47 = dVar39 * dStack_2d0 - local_2a8 * dVar27;
  dVar36 = dVar36 + dVar36;
  dVar47 = dVar47 + dVar47;
  dVar34 = dVar34 + dVar34;
  local_288._8_4_ = SUB84(dVar29,0);
  local_288._0_8_ = dVar13;
  local_288._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
  local_118 = dVar34 * dVar13 + dVar27 + (dVar47 * local_2a8 - dVar36 * local_2d8);
  dVar27 = (dVar34 * local_2d8 - dVar47 * dStack_2d0) + dVar13 * dVar36 + dVar39;
  dVar31 = (dStack_2d0 * dVar36 - local_2a8 * dVar34) + dVar29 * dVar47 + dVar31;
  uVar57 = (undefined4)((ulonglong)dVar31 >> 0x20);
  local_128._8_4_ = SUB84(dVar31,0);
  local_128._0_8_ = dVar27;
  local_128._12_4_ = uVar57;
  plVar5 = *(longlong **)(param_6 + 0xe0);
  if ((plVar5 == (longlong *)0x0) || (*(byte *)((longlong)plVar5 + 0xc) < 2)) {
    local_3d0 = 1.79769313486232e+308;
  }
  else {
    cVar3 = *(char *)(*(longlong *)(*plVar5 + 0x2c0) + 0xb + (longlong)(int)plVar5[1] * 0x10);
    if (cVar3 == '\x01' || cVar3 == '\x04') {
      uVar55 = (undefined4)*(undefined8 *)(param_1 + 0x10);
      uVar56 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
    }
    else {
      uVar55 = 0xffffffff;
      uVar56 = 0x7fefffff;
    }
    local_3d0 = (double)CONCAT44(uVar56,uVar55);
  }
  pdVar9 = (double *)(param_1 + 0x10);
  plVar5 = *(longlong **)(param_6 + 0xe8);
  if ((plVar5 == (longlong *)0x0) || (*(byte *)((longlong)plVar5 + 0xc) < 2)) {
    local_3d8 = 1.79769313486232e+308;
  }
  else {
    cVar3 = *(char *)(*(longlong *)(*plVar5 + 0x2c0) + 0xb + (longlong)(int)plVar5[1] * 0x10);
    if (cVar3 == '\x01' || cVar3 == '\x04') {
      uVar55 = (undefined4)*(undefined8 *)(param_3 + 0x10);
      uVar56 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x10) >> 0x20);
    }
    else {
      uVar55 = 0xffffffff;
      uVar56 = 0x7fefffff;
    }
    local_3d8 = (double)CONCAT44(uVar56,uVar55);
  }
  pdVar8 = (double *)(param_3 + 0x10);
  local_3e0 = (double *)(dVar16 * 0.5);
  local_3e8 = (double *)(dVar30 * 0.5);
  local_308 = local_f8 * local_118 + local_108 * dVar27 + dStack_100 * dVar31;
  local_2e8._8_4_ = SUB84(dVar31,0);
  local_2e8._0_8_ = dVar31;
  local_2e8._12_4_ = uVar57;
  if (local_308 < 0.0) {
    local_308 = -local_308;
    dStack_300 = -dStack_300;
    local_f8 = -local_f8;
    local_108 = -local_108;
    dStack_100 = -dStack_100;
  }
  dVar29 = dStack_100;
  dVar16 = local_388 * (*(double *)(param_1 + 0x38) * (double)local_3e0 + dVar14);
  dVar14 = dStack_380 * (*(double *)(param_1 + 0x40) * (double)local_3e0 + dVar35);
  dVar34 = (*(double *)(param_1 + 0x48) * (double)local_3e0 + dVar15) * local_278;
  dVar35 = dVar14 * local_3a8 - dVar16 * local_398;
  dVar39 = dVar34 * local_398 - dVar14 * dStack_390;
  dVar42 = dVar16 * dStack_390 - dVar34 * local_3a8;
  dVar30 = dStack_270 * 0.0 * dStack_3a0 - dStack_270 * 0.0 * dStack_3a0;
  dVar39 = dVar39 + dVar39;
  dVar42 = dVar42 + dVar42;
  dVar35 = dVar35 + dVar35;
  dVar30 = dVar30 + dVar30;
  local_348 = (dVar35 * local_398 - dVar42 * dStack_390) + dVar12 * dVar39 + dVar16 + param_2[4];
  local_378 = (dStack_390 * dVar39 - local_3a8 * dVar35) + dVar20 * dVar42 + dVar14 + param_2[5];
  dVar16 = local_2c8 * (local_268 * (double)local_3e8 + local_318);
  dVar15 = dStack_2c0 * (local_258 * (double)local_3e8 + local_310);
  dVar14 = (local_298 * (double)local_3e8 + local_320) * local_2f8;
  dVar20 = dVar15 * local_2a8 - dVar16 * local_2d8;
  dVar36 = dVar14 * local_2d8 - dVar15 * dStack_2d0;
  dVar47 = dVar16 * dStack_2d0 - dVar14 * local_2a8;
  dStack_3b0 = dStack_2f0 * 0.0 * auVar1._8_8_ - dStack_2f0 * 0.0 * (double)local_2b8._8_8_;
  dVar36 = dVar36 + dVar36;
  dVar47 = dVar47 + dVar47;
  dVar20 = dVar20 + dVar20;
  dStack_3b0 = dStack_3b0 + dStack_3b0;
  local_1a8 = dVar35 * dVar12 + dVar34 + (dVar42 * local_3a8 - dVar39 * local_398) + param_2[6];
  local_358 = (dVar20 * local_2d8 - dVar47 * dStack_2d0) + dVar13 * dVar36 + dVar16 + param_4[4];
  local_368 = (dStack_2d0 * dVar36 - local_2a8 * dVar20) + (double)local_288._8_8_ * dVar47 + dVar15
              + param_4[5];
  local_3b8 = dVar20 * dVar13 + dVar14 + (dVar47 * local_2a8 - dVar36 * local_2d8) + param_4[6];
  local_160 = local_3b8 - local_118 * (double)local_3e8;
  local_168 = local_368 - dVar31 * (double)local_3e8;
  local_170 = local_358 - dVar27 * (double)local_3e8;
  local_178 = local_118 * (double)local_3e8 + local_3b8;
  local_180 = dVar31 * (double)local_3e8 + local_368;
  local_188 = dVar27 * (double)local_3e8 + local_358;
  uVar57 = SUB84(dStack_100,0);
  uVar55 = (undefined4)((ulonglong)dStack_100 >> 0x20);
  local_3c0 = local_108;
  local_3c8 = local_f8;
  local_1a0 = local_348 - (double)local_3e0 * local_108;
  local_198 = local_378 - (double)local_3e0 * dStack_100;
  local_190 = local_1a8 - (double)local_3e0 * local_f8;
  local_1b8 = (double)local_3e0 * local_108 + local_348;
  local_1b0 = (double)local_3e0 * dStack_100 + local_378;
  local_338._8_4_ = SUB84(dVar30,0);
  local_338._0_8_ = local_1a8;
  local_338._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
  local_1a8 = (double)local_3e0 * local_f8 + local_1a8;
  local_440 = &local_158;
  local_448 = &local_140;
  dStack_370 = local_378;
  dStack_360 = local_368;
  dStack_350 = local_368;
  dStack_340 = local_378;
  dStack_2a0 = local_2d8;
  FUN_144a0d30e();
  dVar14 = local_148 - local_130;
  dVar20 = local_150 - local_138;
  dVar30 = local_158 - local_140;
  dVar31 = SQRT(dVar14 * dVar14 + dVar30 * dVar30 + dVar20 * dVar20);
  dVar16 = *pdVar9;
  dVar15 = *pdVar8;
  dVar35 = dVar31 - (dVar16 + dVar15);
  if (dVar35 <= (double)*(float *)(param_6 + 300)) {
    if (dVar31 <= 9.999999747378752e-05) {
      local_1c8 = *(double *)(&DAT_149931170 + (ulonglong)(local_3d8 < local_3d0) * 8);
      local_1d8 = 0.0;
      dStack_1d0 = 0.0;
    }
    else {
      local_1c8 = -dVar14 / dVar31;
      dStack_1d0 = -dVar20 / dVar31;
      local_1d8 = -dVar30 / dVar31;
    }
    if ((dVar35 != 1.79769313486232e+308) || (NAN(dVar35))) {
      local_3a8 = dVar29;
      dVar40 = (local_140 - dVar16 * local_1d8) - param_2[4];
      dVar41 = (local_138 - dVar16 * dStack_1d0) - param_2[5];
      dVar28 = (local_130 - dVar16 * local_1c8) - param_2[6];
      dVar29 = *param_2;
      auVar1 = *(undefined1 (*) [16])(param_2 + 8);
      dVar43 = -dVar29;
      dVar46 = -param_2[1];
      dVar42 = param_2[2] * -1.0;
      dVar23 = param_2[3] * 1.0;
      dVar37 = dVar40 * dVar42 - dVar43 * dVar28;
      dVar48 = dVar41 * dVar43 - dVar40 * dVar46;
      dVar52 = dVar28 * dVar46 - dVar41 * dVar42;
      dVar52 = dVar52 + dVar52;
      dVar37 = dVar37 + dVar37;
      dVar48 = dVar48 + dVar48;
      auVar17 = divpd(_DAT_149934d80,auVar1);
      dVar16 = param_2[10];
      dVar14 = (local_158 + dVar15 * local_1d8) - param_4[4];
      dVar30 = (local_150 + dStack_1d0 * dVar15) - param_4[5];
      dVar13 = (local_148 + dVar15 * local_1c8) - param_4[6];
      dVar34 = *param_4;
      dVar32 = param_4[2] * -1.0;
      dVar33 = param_4[3] * 1.0;
      local_398 = -dVar34;
      dStack_390 = -param_4[1];
      dVar27 = dVar30 * local_398 - dVar14 * dStack_390;
      dVar53 = dVar13 * dStack_390 - dVar30 * dVar32;
      dVar21 = dVar14 * dVar32 - dVar13 * local_398;
      dVar53 = dVar53 + dVar53;
      dVar21 = dVar21 + dVar21;
      dVar27 = dVar27 + dVar27;
      dVar15 = dVar21 * local_398;
      dVar31 = dVar27 * dStack_390;
      dVar49 = dVar53 * dStack_390;
      auVar2 = *(undefined1 (*) [16])(param_4 + 8);
      auVar45 = divpd(_DAT_149934d80,auVar2);
      dVar20 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar45._0_8_);
      dVar12 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar45._8_8_);
      dVar44 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                       (ulonglong)(1.0 / param_4[10]));
      dVar50 = dStack_1d0 * local_398 - dStack_390 * local_1d8;
      dVar54 = local_1c8 * dStack_390 - dVar32 * dStack_1d0;
      dVar36 = local_1d8 * dVar32 - local_1c8 * local_398;
      dVar54 = dVar54 + dVar54;
      dVar36 = dVar36 + dVar36;
      dVar50 = dVar50 + dVar50;
      dVar22 = dVar33 * dVar54 + local_1d8;
      dVar24 = dVar33 * dVar36 + dStack_1d0;
      dVar47 = dVar36 * local_398;
      dVar39 = dVar50 * dStack_390;
      dVar51 = dVar54 * dStack_390;
      dVar38 = dVar50 * dVar33 + local_1c8;
      iVar4 = *(int *)(param_6 + 0x5b0);
      *(uint *)(param_6 + 0x5b0) = iVar4 + 1U;
      local_388 = dVar35;
      if (*(uint *)(param_6 + 0x5b4) < iVar4 + 1U) {
        FUN_146ce5792(param_6 + 0x3f8,iVar4);
      }
      lVar6 = *(longlong *)(param_6 + 0x5a8);
      if (*(longlong *)(param_6 + 0x5a8) == 0) {
        lVar6 = param_6 + 0x3f8;
      }
      fVar10 = (float)((double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar16)) &
                               (ulonglong)(1.0 / dVar16)) *
                      (dVar23 * dVar48 + dVar28 + (dVar37 * dVar43 - dVar52 * dVar46)));
      fVar18 = (float)((double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) &
                               auVar17._0_8_) *
                      ((dVar48 * dVar46 - dVar37 * dVar42) + dVar23 * dVar52 + dVar40));
      fVar19 = (float)((double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) &
                               auVar17._8_8_) *
                      (dVar29 * dVar48 + dVar42 * dVar52 + dVar23 * dVar37 + dVar41));
      fVar11 = (float)((dVar27 * dVar33 + dVar13 + (dVar15 - dVar49)) * dVar44);
      fVar25 = (float)(((dVar31 - dVar21 * dVar32) + dVar33 * dVar53 + dVar14) * dVar20);
      fVar26 = (float)((dVar34 * dVar27 + dVar32 * dVar53 + dVar33 * dVar21 + dVar30) * dVar12);
      lVar7 = (longlong)iVar4 * 0x6c;
      *(float *)(lVar6 + lVar7) = fVar18;
      *(float *)(lVar6 + 4 + lVar7) = fVar19;
      *(float *)(lVar6 + 8 + lVar7) = fVar10;
      *(float *)(lVar6 + 0xc + lVar7) = fVar25;
      *(float *)(lVar6 + 0x10 + lVar7) = fVar26;
      *(float *)(lVar6 + 0x14 + lVar7) = fVar11;
      *(float *)(lVar6 + 0x18 + lVar7) = (float)(((dVar39 - dVar36 * dVar32) + dVar22) * dVar20);
      *(float *)(lVar6 + 0x1c + lVar7) =
           (float)((dVar34 * dVar50 + dVar32 * dVar54 + dVar24) * dVar12);
      *(float *)(lVar6 + 0x20 + lVar7) = (float)((dVar38 + (dVar47 - dVar51)) * dVar44);
      *(float *)(lVar6 + 0x24 + lVar7) = (float)local_388;
      *(undefined4 *)(lVar6 + 0x28 + lVar7) = 0xffffffff;
      *(undefined1 *)(lVar6 + 0x2c + lVar7) = 1;
      *(float *)(lVar6 + 0x3c + lVar7) = fVar18;
      *(float *)(lVar6 + 0x40 + lVar7) = fVar19;
      *(float *)(lVar6 + 0x44 + lVar7) = fVar10;
      *(float *)(lVar6 + 0x48 + lVar7) = fVar25;
      *(float *)(lVar6 + 0x4c + lVar7) = fVar26;
      *(float *)(lVar6 + 0x50 + lVar7) = fVar11;
      *(float *)(lVar6 + 0x54 + lVar7) = fVar18;
      *(float *)(lVar6 + 0x58 + lVar7) = fVar19;
      *(float *)(lVar6 + 0x5c + lVar7) = fVar10;
      *(float *)(lVar6 + 0x60 + lVar7) = fVar25;
      *(float *)(lVar6 + 100 + lVar7) = fVar26;
      *(float *)(lVar6 + 0x68 + lVar7) = fVar11;
      *(undefined8 *)(lVar6 + 0x34 + lVar7) = 0;
      *(undefined1 *)(lVar6 + 0x30 + lVar7) = 0;
      lVar6 = *(longlong *)(param_6 + 0x5a8);
      if (*(longlong *)(param_6 + 0x5a8) == 0) {
        lVar6 = param_6 + 0x3f8;
      }
      if ((longlong)*(int *)(param_6 + 0x16c) == -1) {
        fVar10 = INFINITY;
      }
      else {
        fVar10 = *(float *)(lVar6 + 0x24 + (longlong)*(int *)(param_6 + 0x16c) * 0x6c);
      }
      uVar57 = SUB84(local_3a8,0);
      uVar55 = (undefined4)((ulonglong)local_3a8 >> 0x20);
      dVar35 = local_388;
      if (*(float *)(lVar6 + 0x24 + lVar7) < fVar10) {
        *(int *)(param_6 + 0x16c) = iVar4;
      }
    }
    dVar15 = ((local_130 - (double)local_338._0_8_) * local_3c8 +
             (local_140 - local_348) * local_3c0 +
             (double)CONCAT44(uVar55,uVar57) * (local_138 - local_378)) / (double)local_3e0;
    dVar16 = ((local_148 - local_3b8) * local_118 +
             (local_158 - local_358) * (double)local_128._0_8_ +
             (local_150 - local_368) * (double)local_128._8_8_) / (double)local_3e8;
    if (((-0.8 <= dVar15) || (dVar16 <= 0.8)) && ((dVar15 <= 0.8 || (-0.8 <= dVar16)))) {
      if (local_308 <= (double)_DAT_14c75f030) {
        dVar14 = local_3d0;
        if (local_3d8 <= local_3d0) {
          dVar14 = local_3d8;
        }
        if (-(double)_DAT_14c75f034 * dVar14 <= dVar35) goto LAB_1404ba928;
      }
      local_208[0] = param_6;
      local_208[1] = 0x3fc999999999999a;
      local_208[2] = 0x3fd6666666666666;
      local_1e8 = &local_1d9;
      local_3f8 = local_3d8 < local_3d0;
      if ((bool)local_3f8) {
        local_418 = *pdVar9;
        local_440 = (double *)*pdVar8;
        local_238 = local_3b8;
        local_420 = local_3e0;
        local_428 = &local_108;
        local_448 = local_3e8;
        pdVar9 = (double *)local_128;
        local_438 = param_4;
        local_410 = param_2;
        local_248 = local_358;
        dStack_240 = dStack_350;
        local_228 = local_348;
        dStack_220 = dStack_340;
        local_218 = (double)local_338._0_8_;
      }
      else {
        local_418 = *pdVar8;
        local_228 = local_358;
        dStack_220 = dStack_350;
        local_218 = local_3b8;
        local_440 = (double *)*pdVar9;
        local_248 = local_348;
        dStack_240 = dStack_340;
        local_238 = (double)local_338._0_8_;
        local_420 = local_3e8;
        local_428 = (double *)local_128;
        local_448 = local_3e0;
        pdVar9 = &local_108;
        dVar16 = dVar15;
        local_438 = param_2;
        local_410 = param_4;
      }
      local_408 = &local_1d8;
      local_430 = &local_228;
      local_400 = local_308;
      local_1f0 = (double)_DAT_14c75f038;
      FUN_1404bcc1e(local_208,dVar16,&local_248,pdVar9);
    }
  }
LAB_1404ba928:
  if ((local_f0 ^ (ulonglong)auStack_468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404bab26 FUN_1404bab26 body=7169 status=ok
// SIG undefined FUN_1404bab26(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404bab26(longlong param_1,double *param_2,double param_3,double *param_4,double param_5,
                  int *param_6)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  code *pcVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong lVar9;
  double *pdVar10;
  ulonglong uVar11;
  longlong lVar12;
  code **ppcVar13;
  int iVar14;
  bool bVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double *pdVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  code *pcVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  double dVar32;
  double dVar33;
  code *pcVar34;
  undefined4 uVar35;
  uint uVar36;
  double dVar37;
  double ***pppdVar38;
  double dVar39;
  double dVar40;
  undefined1 auStack_5d8 [32];
  code **local_5b8;
  code **local_5b0;
  code **local_5a8;
  double *local_5a0;
  double *local_598;
  undefined8 *local_590;
  code *local_588;
  double *local_580;
  double local_570;
  double *local_568;
  code *local_560;
  undefined8 local_558;
  undefined8 uStack_550;
  double ***local_548;
  double local_540;
  undefined8 local_538;
  double dStack_530;
  double local_528;
  undefined8 *puStack_520;
  undefined1 local_518 [12];
  uint uStack_50c;
  double local_508;
  undefined8 uStack_500;
  double local_4f8;
  double dStack_4f0;
  double local_4e8;
  undefined4 uStack_4e0;
  uint uStack_4dc;
  undefined1 local_4d8 [16];
  double local_4c8;
  double local_4c0;
  double local_4b8;
  undefined8 *puStack_4b0;
  undefined1 local_4a8 [16];
  undefined8 local_498;
  double dStack_490;
  undefined1 local_488 [16];
  code *local_478;
  undefined8 uStack_470;
  undefined1 local_468 [16];
  undefined8 local_458;
  undefined8 uStack_450;
  double local_448;
  double dStack_440;
  double local_438;
  double dStack_430;
  undefined4 local_428;
  uint uStack_424;
  double dStack_420;
  undefined4 local_418;
  uint uStack_414;
  double dStack_410;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  double local_3f8;
  double local_3e8;
  double local_3e0;
  double local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  double local_3b8;
  double *local_3b0;
  undefined1 local_3a8 [8];
  double local_3a0;
  undefined1 local_398 [16];
  double local_388;
  double local_380;
  double dStack_378;
  double local_370;
  undefined8 local_368;
  code *local_358;
  double ***pppdStack_350;
  double *local_348;
  code *local_338;
  undefined8 *puStack_330;
  double local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  code *local_2f0;
  longlong local_2e8;
  undefined8 uStack_2e0;
  longlong local_2d8;
  undefined8 uStack_2d0;
  code *local_2c8;
  double dStack_2c0;
  double local_2b8;
  double **local_2b0;
  double *local_2a8;
  undefined1 *local_2a0;
  undefined8 local_298;
  double *local_290;
  undefined1 *local_288;
  double local_280;
  double local_278;
  code *local_270;
  double ***pppdStack_268;
  double *local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined1 local_238 [12];
  int iStack_22c;
  double local_228 [10];
  code *local_1d8;
  double adStack_1d0 [5];
  undefined8 local_1a8;
  code *local_178;
  double adStack_170 [11];
  double local_118 [4];
  uint local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_5d8;
  dVar25 = -*param_4;
  dStack_490 = -param_4[1];
  dVar33 = param_4[2] * -1.0;
  dVar37 = param_4[3] * 1.0;
  dVar20 = *param_2;
  dVar23 = param_2[1];
  dVar28 = param_2[2];
  dVar18 = param_2[3];
  dVar19 = param_4[1];
  dVar16 = param_4[1];
  dVar22 = dVar23 * dVar33 * -1.0 + ((dVar20 * dVar37 - *param_4 * dVar18 * 1.0) - dVar28 * dVar19);
  dVar21 = dVar20 * dVar33 * 1.0 + ((dVar23 * dVar37 - *param_4 * dVar28 * -1.0) - dVar18 * dVar16);
  dVar17 = param_2[6] - param_4[6];
  local_528 = dVar18 * dVar33 * 1.0 + dVar19 * dVar20 + (dVar37 * dVar28 - *param_4 * dVar23 * 1.0);
  puStack_520 = (undefined8 *)
                (dVar28 * dVar33 * -1.0 +
                dVar16 * dVar23 + (dVar37 * dVar18 - *param_4 * dVar20 * -1.0));
  dVar16 = param_2[4] - param_4[4];
  dVar19 = param_2[5] - param_4[5];
  dVar23 = dStack_490 * dVar17 - dVar19 * dVar33;
  dVar23 = dVar23 + dVar23;
  dVar28 = dVar25 * dVar19 - dVar16 * dStack_490;
  dVar28 = dVar28 + dVar28;
  dVar20 = dVar33 * dVar16 - dVar17 * dVar25;
  dVar20 = dVar20 + dVar20;
  local_498 = (dVar25 * dVar20 - dVar23 * dStack_490) + dVar37 * dVar28 + dVar17;
  dVar17 = (dVar33 * dVar23 - dVar28 * dVar25) + dVar37 * dVar20 + dVar19;
  dVar33 = (dStack_490 * dVar28 - dVar20 * dVar33) + dVar37 * dVar23 + dVar16;
  dVar37 = *(double *)(param_1 + 0x38);
  dVar20 = *(double *)(param_1 + 0x40);
  dVar16 = dVar20 * dVar22 - dVar21 * dVar37;
  dVar25 = *(double *)(param_1 + 0x48) * dVar21 - local_528 * dVar20;
  dVar18 = dVar37 * local_528 - *(double *)(param_1 + 0x48) * dVar22;
  dVar25 = dVar25 + dVar25;
  dVar18 = dVar18 + dVar18;
  dVar16 = dVar16 + dVar16;
  dVar23 = *(double *)(param_1 + 0x20);
  dVar28 = *(double *)(param_1 + 0x28);
  dVar19 = dVar28 * dVar22 - dVar21 * dVar23;
  dVar26 = *(double *)(param_1 + 0x30) * dVar21 - local_528 * dVar28;
  dVar32 = dVar23 * local_528 - dVar22 * *(double *)(param_1 + 0x30);
  dVar26 = dVar26 + dVar26;
  dVar32 = dVar32 + dVar32;
  dVar19 = dVar19 + dVar19;
  local_570 = *(double *)(param_1 + 0x10);
  local_370 = dVar16 * (double)puStack_520 + *(double *)(param_1 + 0x48) +
              (dVar18 * dVar22 - dVar25 * dVar21);
  local_368 = *(undefined8 *)(param_1 + 0x50);
  local_380 = (dVar16 * dVar21 - dVar18 * local_528) + (double)puStack_520 * dVar25 + dVar37;
  dStack_378 = (local_528 * dVar25 - dVar22 * dVar16) + (double)puStack_520 * dVar18 + dVar20;
  local_518._8_4_ = SUB84(dVar21,0);
  local_518._0_8_ = dVar22;
  uStack_50c = (int)((ulonglong)dVar21 >> 0x20);
  local_4d8._8_4_ = SUB84(dVar17,0);
  local_4d8._0_8_ = dVar33;
  local_4d8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  dVar17 = (local_528 * dVar26 - dVar22 * dVar19) + (double)puStack_520 * dVar32 + dVar28 + dVar17;
  local_388 = dVar19 * (double)puStack_520 + *(double *)(param_1 + 0x30) +
              (dVar32 * dVar22 - dVar26 * dVar21) + local_498;
  local_3b0 = (double *)local_398;
  local_398._8_4_ = SUB84(dVar17,0);
  local_398._0_8_ =
       (dVar19 * dVar21 - dVar32 * local_528) + (double)puStack_520 * dVar26 + dVar23 + dVar33;
  local_398._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  local_538._0_4_ = (undefined4)local_368;
  local_538._4_4_ = (undefined4)((ulonglong)local_368 >> 0x20);
  local_3a0 = 0.0;
  local_3a8._4_4_ = -1;
  local_3a8._0_4_ = 0xffffffff;
  local_3d0 = 0xbff0000000000000;
  local_3c8 = 0;
  uStack_3c0 = 0;
  local_560 = (code *)(double)_DAT_14c75f068;
  local_568 = (double *)(double)DAT_14c75f06c;
  local_558 = param_3;
  local_3b8 = param_3;
  if (DAT_14c992dd0 != '\x01') {
    local_f8 = 0;
    local_278 = 0.0;
    local_2a8 = &local_280;
    local_280 = 0.0;
    local_2b0 = &local_3b0;
    local_2a0 = local_3a8;
    local_248 = 0;
    local_258 = 0;
    uStack_250 = 0;
    dVar33 = -1.0;
    pppdVar38 = (double ***)&DAT_8000000000000000;
    pcVar29 = (code *)0x3ff0000000000000;
    iVar14 = 0x1e;
    ppcVar13 = &local_1d8;
    pdVar24 = (double *)&DAT_8000000000000000;
    dVar37 = 0.0;
    dVar16 = 0.0;
    dVar19 = 3.4028234663852886e+38;
    local_298 = &local_3b8;
    local_290 = &local_278;
    local_288 = local_3a8 + 4;
LAB_1404bb06a:
    local_260 = (double *)((ulonglong)dVar16 ^ 0x8000000000000000);
    local_270 = (code *)((ulonglong)dVar33 ^ 0x8000000000000000);
    pppdStack_268 = (double ***)((ulonglong)dVar37 ^ 0x8000000000000000);
    local_5b8 = (code **)&local_278;
    local_5b0 = (code **)(local_3a8 + 4);
    FUN_1449cbad8(&local_3b8,&local_2c8,&local_270,0);
    dVar22 = local_278;
    dVar17 = local_280;
    dVar21 = dVar16 * local_3b0[5] + dVar33 * local_3b0[3] + dVar37 * local_3b0[4];
    if (0.0 <= dVar21) {
      dVar28 = local_3b0[6];
      dVar23 = local_3b0[5] * dVar28 + local_3b0[2];
      dVar20 = local_3b0[4] * dVar28 + local_3b0[1];
      pcVar34 = (code *)(local_3b0[3] * dVar28 + *local_3b0);
    }
    else {
      pcVar34 = (code *)*local_3b0;
      dVar20 = local_3b0[1];
      dVar23 = local_3b0[2];
    }
    local_3a8._0_4_ = ZEXT14(0.0 <= dVar21);
    dVar21 = dVar16 * dVar16 + dVar33 * dVar33 + dVar37 * dVar37;
    if (2.2250738585072014e-308 < dVar21) {
      dVar21 = SQRT(dVar21);
      dVar23 = dVar23 + (dVar16 / dVar21) * 0.0;
      dVar20 = dVar20 + (dVar37 / dVar21) * 0.0;
      pcVar34 = (code *)((double)pcVar34 + (dVar33 / dVar21) * 0.0);
    }
    lVar9 = (longlong)(int)(uint)local_258;
    (&local_1d8)[lVar9 * 3] = local_2c8;
    adStack_1d0[lVar9 * 3] = dStack_2c0;
    adStack_1d0[lVar9 * 3 + 1] = local_2b8;
    (&local_178)[lVar9 * 3] = pcVar34;
    adStack_170[lVar9 * 3] = dVar20;
    adStack_170[lVar9 * 3 + 1] = dVar23;
    *(uint *)((longlong)&local_258 + lVar9 * 4 + 4) = (uint)local_258;
    local_258 = CONCAT44(local_258._4_4_,(uint)local_258 + 1);
    *(double *)(local_238 + lVar9 * 0x18) = (double)local_2c8 - (double)pcVar34;
    *(double *)(local_238 + lVar9 * 0x18 + 8) = dStack_2c0 - dVar20;
    local_228[lVar9 * 3] = local_2b8 - dVar23;
    local_5b8 = ppcVar13;
    local_5b0 = &local_178;
    FUN_1449162b1(&local_270,local_238,&local_258,local_118);
    pcVar34 = local_270;
    dVar21 = SQRT((double)local_260 * (double)local_260 +
                  (double)local_270 * (double)local_270 +
                  (double)pppdStack_268 * (double)pppdStack_268);
    if ((double)local_560 <= dVar21) goto code_r0x0001404bb2ab;
    local_f8 = (uint)local_258;
    local_2d8 = 0;
    uStack_2d0 = 0;
    local_2e8 = 0;
    uStack_2e0 = 0;
    FUN_140268ec4(&local_2d8,8);
    FUN_140268ec4(&local_2e8,8);
    dVar16 = local_570;
    if (0 < (int)(uint)local_258) {
      lVar9 = 0;
      do {
        uVar11 = uStack_2d0;
        lVar12 = (longlong)(int)uStack_2d0;
        uVar8 = (int)uStack_2d0 + 1;
        uStack_2d0 = CONCAT44(uStack_2d0._4_4_,uVar8);
        if (uStack_2d0._4_4_ < uVar8) {
          FUN_14026a4e8(&local_2d8,uVar11 & 0xffffffff);
        }
        uVar11 = uStack_2e0;
        *(code **)(local_2d8 + 0x10 + lVar12 * 0x18) = ppcVar13[2];
        uVar35 = *(undefined4 *)((longlong)ppcVar13 + 4);
        uVar30 = *(undefined4 *)(ppcVar13 + 1);
        uVar31 = *(undefined4 *)((longlong)ppcVar13 + 0xc);
        puVar1 = (undefined4 *)(local_2d8 + lVar12 * 0x18);
        *puVar1 = *(undefined4 *)ppcVar13;
        puVar1[1] = uVar35;
        puVar1[2] = uVar30;
        puVar1[3] = uVar31;
        lVar12 = (longlong)(int)uStack_2e0;
        uVar8 = (int)uStack_2e0 + 1;
        uStack_2e0 = CONCAT44(uStack_2e0._4_4_,uVar8);
        if (uStack_2e0._4_4_ < uVar8) {
          FUN_14026a4e8(&local_2e8,uVar11 & 0xffffffff);
        }
        *(code **)(local_2e8 + 0x10 + lVar12 * 0x18) = ppcVar13[0xe];
        uVar35 = *(undefined4 *)((longlong)ppcVar13 + 100);
        uVar30 = *(undefined4 *)(ppcVar13 + 0xd);
        uVar31 = *(undefined4 *)((longlong)ppcVar13 + 0x6c);
        puVar1 = (undefined4 *)(local_2e8 + lVar12 * 0x18);
        *puVar1 = *(undefined4 *)(ppcVar13 + 0xc);
        puVar1[1] = uVar35;
        puVar1[2] = uVar30;
        puVar1[3] = uVar31;
        lVar9 = lVar9 + 1;
        ppcVar13 = ppcVar13 + 3;
      } while (lVar9 < (int)(uint)local_258);
    }
    puStack_330 = &local_298;
    local_338 = FUN_1417272dc;
    pppdStack_350 = &local_2b0;
    local_358 = FUN_142995b3e;
    local_598 = local_568;
    local_5a0 = &local_308;
    local_5a8 = &local_2c8;
    local_5b8 = &local_2f0;
    local_5b0 = &local_270;
    uVar8 = FUN_144918d86(&local_2d8);
    dVar19 = local_558;
    if (uVar8 < 2) {
      local_3a0 = dVar22;
      if (dVar22 <= dVar17) {
        local_3a0 = dVar17;
      }
      local_348 = local_260;
      local_358 = local_270;
      pppdStack_350 = pppdStack_268;
      pcVar34 = (code *)((double)local_2f0 + 0.0);
      local_320 = (double)local_2c8 + (double)local_270 * 0.0;
      uStack_318 = dStack_2c0 + (double)pppdStack_268 * 0.0;
      local_310 = local_2b8 + (double)local_260 * 0.0;
      local_338 = (code *)(local_308 - (double)local_270 * 0.0);
      puStack_330 = (undefined8 *)(local_300 - (double)pppdStack_268 * 0.0);
      local_328 = local_2f8 - (double)local_260 * 0.0;
      bVar15 = false;
    }
    else {
      bVar15 = true;
      dVar16 = local_570;
      if (uVar8 == 3) {
        dVar21 = -(double)local_2f0;
        pdVar24 = local_260;
        pcVar29 = local_270;
        pppdVar38 = pppdStack_268;
      }
    }
    if (local_2e8 != 0) {
      FUN_1400020a8();
    }
    if (local_2d8 != 0) {
      FUN_1400020a8();
    }
    if (bVar15) {
      goto LAB_1404bb34f;
    }
    goto LAB_1404bb477;
  }
  local_590 = &local_3d0;
  local_598 = &local_3a0;
  local_5a0 = (double *)local_3a8;
  local_5a8 = (code **)(local_3a8 + 4);
  local_5b0 = &local_358;
  local_5b8 = &local_338;
  local_588 = local_560;
  local_580 = local_568;
  FUN_146d01662(&local_3b8,&local_3b0,&local_1d8,&local_320);
  dVar19 = local_558;
  pcVar34 = local_1d8;
  dVar16 = local_570;
LAB_1404bb477:
  dVar33 = local_328;
  puVar7 = puStack_330;
  pcVar6 = local_338;
  pdVar24 = local_348;
  pppdVar38 = pppdStack_350;
  pcVar29 = local_358;
  dVar37 = local_370;
  auVar3 = _DAT_149931e80;
  local_538 = (double)CONCAT44(local_538._4_4_,(undefined4)local_538);
  if (local_3a8._4_4_ != -1) {
    local_558 = -(double)pcVar34 - dVar16;
    uStack_550 = 0x8000000000000000;
    local_538 = (double)CONCAT44(local_538._4_4_,(undefined4)local_538);
    if (local_558 <= param_5) {
      uVar11 = DAT_149931e80;
      dVar17 = DAT_149931e80._8_8_;
      dVar21 = (double)((ulonglong)local_348 ^ uVar11);
      dVar22 = (double)((ulonglong)pppdStack_350 ^ uVar11);
      dVar20 = (double)((ulonglong)local_358 ^ uVar11);
      local_4e8 = local_380;
      local_570 = dStack_378;
      local_408 = (undefined4)local_320;
      uStack_404 = local_320._4_4_;
      uStack_400 = (undefined4)uStack_318;
      uStack_3fc = uStack_318._4_4_;
      local_3f8 = local_310;
      local_5b8 = (code **)CONCAT44(local_5b8._4_4_,local_3a8._4_4_);
      local_3e8 = dVar20;
      local_3e0 = dVar22;
      local_3d8 = dVar21;
      iVar14 = FUN_140a05dc3(dVar19,&local_408,&local_3e8,0);
      auVar5 = _local_518;
      puVar4 = puStack_520;
      dVar23 = local_528;
      local_538 = (double)CONCAT44(local_538._4_4_,(undefined4)local_538);
      if (iVar14 != -1) {
        local_458 = pdVar24;
        uStack_450 = 0;
        dVar33 = dVar33 - dVar16 * (double)pdVar24;
        dStack_4f0 = 0.0;
        local_468._8_8_ = 0;
        local_468._0_8_ = pppdVar38;
        local_4b8 = (double)puVar7 - dVar16 * (double)pppdVar38;
        puStack_4b0 = puVar7;
        local_478 = pcVar29;
        uStack_470 = 0;
        dVar28 = dVar37 * dVar21 + local_4e8 * dVar20 + local_570 * dVar22;
        lVar9 = *(longlong *)(*(longlong *)((longlong)dVar19 + 0x28) + 0x20);
        lVar12 = (longlong)iVar14;
        pdVar24 = (double *)(double)*(float *)(lVar9 + 0x14 + lVar12 * 0x18);
        pppdVar38 = (double ***)(double)*(float *)(lVar9 + 0x10 + lVar12 * 0x18);
        local_560 = (code *)(double)*(float *)(lVar9 + 0xc + lVar12 * 0x18);
        dVar25 = (double)*(float *)(lVar9 + 8 + lVar12 * 0x18);
        local_4c0 = (double)*(float *)(lVar9 + 4 + lVar12 * 0x18);
        local_4c8 = (double)*(float *)(lVar9 + lVar12 * 0x18);
        dVar18 = ABS((double)pdVar24 * dVar21 +
                     (double)local_560 * dVar20 + dVar22 * (double)pppdVar38 + 1.0);
        local_4a8._8_8_ = puVar7;
        local_4a8._0_8_ = (double)pcVar6 - dVar16 * (double)pcVar29;
        local_488._0_8_ = (double)_DAT_14c75f018;
        local_4f8 = dVar33;
        local_270 = local_560;
        pppdStack_268 = pppdVar38;
        local_260 = pdVar24;
        if (0.01 <= ABS(dVar28)) {
          uVar35 = (undefined4)local_498;
          uVar30 = local_498._4_4_;
          local_538 = (double)CONCAT44(local_538._4_4_,(undefined4)local_538);
          if ((dVar18 <= (double)_DAT_14c75f018) &&
             (dVar17 = (double)pdVar24 * dVar37 +
                       (double)local_560 * local_4e8 + local_570 * (double)pppdVar38,
             local_538 = (double)CONCAT44(local_538._4_4_,(undefined4)local_538),
             ABS(dVar17) < 0.707)) {
            uStack_500 = 0;
            dVar22 = (double)pdVar24 - dVar37 * dVar17;
            dVar21 = (double)pppdVar38 - local_570 * dVar17;
            dVar17 = (double)local_560 - local_4e8 * dVar17;
            dVar37 = 1.0 / SQRT(dVar22 * dVar22 + dVar17 * dVar17 + dVar21 * dVar21);
            adStack_1d0[1] = local_388 - dVar22 * dVar37 * dVar16;
            local_1d8 = (code *)((double)local_398._0_8_ - dVar37 * dVar17 * dVar16);
            adStack_1d0[0] = (double)local_398._8_8_ - dVar21 * dVar37 * dVar16;
            adStack_1d0[2] = local_380;
            adStack_1d0[3] = dStack_378;
            adStack_1d0[4] = local_370;
            local_1a8 = CONCAT44(local_538._4_4_,(undefined4)local_538);
            local_5b0 = (code **)&local_298;
            local_298 = (double *)((ulonglong)local_298._4_4_ << 0x20);
            local_5b8 = (code **)local_238;
            local_568 = pdVar24;
            local_548 = pppdVar38;
            local_540 = dVar25;
            local_508 = dVar18;
            FUN_1404bc728(dVar19,&local_1d8,iVar14,&local_270);
            if (0 < (longlong)(int)local_298) {
              local_570 = dVar16 * (double)_DAT_14c75f01c * dVar16 * (double)_DAT_14c75f01c;
              uStack_414 = local_518._4_4_ ^ 0x80000000;
              uStack_4dc = uStack_50c ^ 0x80000000;
              local_438 = local_528 * -1.0;
              local_448 = (double)puStack_520 * 1.0;
              local_418 = local_518._0_4_;
              local_4e8 = -local_518._0_8_;
              uStack_4e0 = local_518._8_4_;
              local_428 = local_518._8_4_;
              lVar9 = 0;
              do {
                dVar37 = *(double *)(local_238 + lVar9);
                dVar16 = *(double *)((longlong)local_228 + lVar9);
                dVar19 = *(double *)(local_238 + lVar9 + 8);
                if (local_570 <
                    (dVar16 - dVar33) * (dVar16 - dVar33) +
                    (dVar37 - (double)local_4a8._0_8_) * (dVar37 - (double)local_4a8._0_8_) +
                    (dVar19 - local_4b8) * (dVar19 - local_4b8)) {
                  dVar33 = (dVar16 - local_540) * (double)local_568 +
                           (dVar37 - local_4c8) * (double)local_560 +
                           (dVar19 - local_4c0) * (double)local_548;
                  local_538 = dVar16 - dVar33 * (double)local_568;
                  dVar26 = dVar19 - dVar33 * (double)local_548;
                  dVar17 = dVar37 - dVar33 * (double)local_560;
                  dVar18 = dVar37 - (double)local_4d8._0_8_;
                  dVar25 = *(double *)(local_238 + lVar9 + 8) - (double)local_4d8._8_8_;
                  dVar32 = dVar16 - (double)CONCAT44(uVar30,uVar35);
                  dVar23 = -local_518._8_8_;
                  dVar28 = -local_518._8_8_;
                  dVar22 = dVar25 * local_4e8 - dVar28 * dVar18;
                  dVar21 = dVar32 * dVar23 - local_438 * dVar25;
                  dVar33 = -local_518._0_8_;
                  dVar20 = dVar18 * local_438 - dVar32 * dVar33;
                  dVar21 = dVar21 + dVar21;
                  dVar20 = dVar20 + dVar20;
                  dVar22 = dVar22 + dVar22;
                  dVar33 = (local_438 * dVar21 - dVar33 * dVar22) + local_448 * dVar20 + dVar25;
                  lVar12 = (longlong)*param_6;
                  *param_6 = *param_6 + 1;
                  auVar3._8_4_ = SUB84(dVar33,0);
                  auVar3._0_8_ = (dVar22 * dVar23 - dVar20 * local_438) +
                                 local_448 * dVar21 + dVar18;
                  auVar3._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
                  *(undefined1 (*) [16])(param_6 + lVar12 * 0x16 + 2) = auVar3;
                  *(double *)(param_6 + lVar12 * 0x16 + 6) =
                       dVar22 * local_448 + dVar32 + (dVar20 * local_4e8 - dVar21 * dVar28);
                  *(double *)(param_6 + lVar12 * 0x16 + 8) = dVar17;
                  *(double *)(param_6 + lVar12 * 0x16 + 10) = dVar26;
                  *(double *)(param_6 + lVar12 * 0x16 + 0xc) = local_538;
                  *(code **)(param_6 + lVar12 * 0x16 + 0xe) = local_270;
                  *(double ****)((longlong)(param_6 + lVar12 * 0x16 + 0xe) + 8) = pppdStack_268;
                  *(double **)(param_6 + lVar12 * 0x16 + 0x12) = local_260;
                  *(double *)(param_6 + lVar12 * 0x16 + 0x14) =
                       (dVar16 - local_538) * (double)local_568 +
                       (dVar37 - dVar17) * (double)local_560 + (dVar19 - dVar26) * (double)local_548
                  ;
                  param_6[lVar12 * 0x16 + 0x16] = -1;
                  *(undefined1 *)(param_6 + lVar12 * 0x16 + 0x17) = 1;
                  uVar35 = (undefined4)local_498;
                  uVar30 = local_498._4_4_;
                  dVar33 = local_4f8;
                }
                lVar9 = lVar9 + 0x18;
                dStack_440 = local_448;
                dStack_430 = local_448;
                uStack_424 = uStack_4dc;
                dStack_420 = local_438;
                dStack_410 = local_448;
              } while ((longlong)(int)local_298 * 0x18 != lVar9);
            }
            dVar18 = local_508;
          }
        }
        else {
          uStack_500 = 0;
          dVar21 = dVar21 - dVar37 * dVar28;
          dVar22 = dVar22 - local_570 * dVar28;
          dVar20 = dVar20 - local_4e8 * dVar28;
          dVar33 = dVar21 * dVar21 + dVar20 * dVar20 + dVar22 * dVar22;
          uVar30 = auVar3._8_4_;
          uVar31 = auVar3._12_4_;
          uVar35 = local_518._8_4_;
          uVar8 = uStack_50c;
          if ((dVar33 != 1.0) || (NAN(dVar33))) {
            if (dVar33 < 9.99999993922529e-09) {
              uVar30 = 0;
              uVar31 = 0;
              dVar17 = 0.0;
              dVar21 = DAT_14c8464f0;
              dVar20 = DAT_14c8464e0;
              dVar22 = DAT_14c8464e8;
            }
            else {
              dVar33 = 1.0 / SQRT(dVar33);
              dVar21 = dVar21 * dVar33;
              dVar20 = dVar20 * dVar33;
              dVar22 = dVar22 * dVar33;
            }
          }
          uVar36 = (uint)((ulonglong)dVar17 >> 0x20);
          dVar33 = -dVar21;
          local_538._0_4_ = SUB84(dVar22,0);
          local_538._4_4_ = (undefined4)((ulonglong)dVar22 >> 0x20);
          dVar22 = -dVar22;
          dVar37 = -dVar20;
          local_238._8_4_ = (undefined4)local_538;
          local_238._0_8_ = dVar37;
          iStack_22c = (int)((ulonglong)dVar22 >> 0x20);
          local_5b0 = (code **)&local_298;
          local_298 = (double *)((ulonglong)local_298._4_4_ << 0x20);
          local_5b8 = &local_1d8;
          local_540 = dVar25;
          dStack_530 = dVar17;
          local_508 = dVar18;
          local_228[0] = dVar33;
          FUN_1404bc728(dVar19,local_398,iVar14);
          if ((0 < (int)local_298) &&
             (dVar19 = dVar33 * (double)pdVar24 +
                       dVar37 * (double)local_560 + (double)pppdVar38 * dVar22,
             9.999999747378752e-05 < ABS(dVar19))) {
            local_4e8 = 1.0 / dVar19;
            local_4b8 = auVar5._0_8_;
            local_518._0_8_ = -local_4b8;
            local_518 = CONCAT48(uVar35,local_518._0_8_);
            uStack_50c = uVar8 ^ 0x80000000;
            local_528 = dVar23 * -1.0;
            puStack_520 = (undefined8 *)((double)puVar4 * 1.0);
            local_4a8._8_4_ = (int)puStack_520;
            local_4a8._0_8_ = puStack_520;
            local_4a8._12_4_ = (int)((ulonglong)puStack_520 >> 0x20);
            local_4b8 = -local_4b8;
            local_4f8 = -auVar5._8_8_;
            local_468._8_4_ = SUB84(dVar17,0);
            local_468._0_8_ = dVar21;
            local_468._12_4_ = uVar36;
            local_458 = (double *)(dVar16 * dVar21);
            local_488._8_4_ = SUB84(dVar17,0);
            local_488._0_8_ = dVar33;
            local_488._12_4_ = uVar36 ^ 0x80000000;
            local_478 = (code *)(dVar16 * (double)CONCAT44(local_538._4_4_,(undefined4)local_538));
            local_570 = dVar16 * dVar20;
            lVar9 = 0;
            do {
              dVar25 = *(double *)((longlong)adStack_1d0 + lVar9 + 8) + (double)local_458;
              dVar26 = *(double *)((longlong)adStack_1d0 + lVar9) + (double)local_478;
              dVar18 = *(double *)((longlong)&local_1d8 + lVar9) + local_570;
              dVar16 = ((local_540 - dVar25) * (double)pdVar24 +
                       (local_4c8 - dVar18) * (double)local_560 +
                       (local_4c0 - dVar26) * (double)pppdVar38) * local_4e8;
              dVar32 = dVar18 - (double)local_4d8._0_8_;
              dVar27 = dVar26 - (double)local_4d8._8_8_;
              dVar19 = dVar25 - local_498;
              local_558 = dVar25 - dVar21 * dVar16;
              dVar39 = dVar27 * (double)local_518._0_8_ - local_4f8 * dVar32;
              dVar40 = dVar19 * stack0xfffffffffffffaf0 - local_528 * dVar27;
              dVar28 = dVar32 * local_528 - dVar19 * local_4b8;
              dVar23 = dVar26 - (double)CONCAT44(local_538._4_4_,(undefined4)local_538) * dVar16;
              dVar40 = dVar40 + dVar40;
              dVar28 = dVar28 + dVar28;
              dVar39 = dVar39 + dVar39;
              dVar16 = dVar18 - dVar16 * dVar20;
              lVar12 = (longlong)*param_6;
              *param_6 = *param_6 + 1;
              *(double *)(param_6 + lVar12 * 0x16 + 2) =
                   (dVar39 * stack0xfffffffffffffaf0 - dVar28 * local_528) +
                   (double)puStack_520 * dVar40 + dVar32;
              *(double *)((longlong)(param_6 + lVar12 * 0x16 + 2) + 8) =
                   (local_528 * dVar40 - local_4b8 * dVar39) +
                   (double)local_4a8._8_8_ * dVar28 + dVar27;
              *(double *)(param_6 + lVar12 * 0x16 + 6) =
                   dVar39 * (double)puStack_520 + dVar19 +
                   (dVar28 * (double)local_518._0_8_ - dVar40 * local_4f8);
              *(double *)(param_6 + lVar12 * 0x16 + 8) = dVar16;
              *(double *)(param_6 + lVar12 * 0x16 + 10) = dVar23;
              *(double *)(param_6 + lVar12 * 0x16 + 0xc) = local_558;
              piVar2 = param_6 + lVar12 * 0x16 + 0xe;
              *piVar2 = local_238._0_4_;
              piVar2[1] = local_238._4_4_;
              piVar2[2] = local_238._8_4_;
              piVar2[3] = iStack_22c;
              *(double *)(param_6 + lVar12 * 0x16 + 0x12) = local_228[0];
              *(double *)(param_6 + lVar12 * 0x16 + 0x14) =
                   (dVar25 - local_558) * dVar33 +
                   (dVar18 - dVar16) * dVar37 + (dVar26 - dVar23) * dVar22;
              param_6[lVar12 * 0x16 + 0x16] = -1;
              *(undefined1 *)(param_6 + lVar12 * 0x16 + 0x17) = 3;
              lVar9 = lVar9 + 0x18;
              local_568 = pdVar24;
              local_548 = pppdVar38;
              local_508 = dVar20;
              uStack_500 = CONCAT44(uVar31,uVar30);
              dStack_4f0 = local_528;
              puStack_4b0 = puStack_520;
              local_448 = dVar22;
              dStack_440 = -dVar17;
              local_438 = dVar37;
              dStack_430 = -(double)CONCAT44(uVar31,uVar30);
            } while (((ulonglong)local_298 & 0xffffffff) * 0x18 != lVar9);
            goto LAB_1404bb4ab;
          }
          uVar35 = (undefined4)local_498;
          uVar30 = local_498._4_4_;
          dVar33 = local_4f8;
          dVar18 = local_508;
        }
        dVar21 = (double)local_4a8._0_8_ - (double)local_4d8._0_8_;
        dVar20 = local_4b8 - (double)local_4d8._8_8_;
        dVar33 = dVar33 - (double)CONCAT44(uVar30,uVar35);
        dVar16 = -(double)local_518._0_8_;
        dVar19 = -stack0xfffffffffffffaf0;
        dVar23 = local_528 * -1.0;
        dVar28 = (double)puStack_520 * 1.0;
        dVar22 = dVar21 * dVar23 - dVar16 * dVar33;
        dVar37 = dVar20 * dVar16 - dVar19 * dVar21;
        dVar17 = dVar33 * dVar19 - dVar23 * dVar20;
        dVar17 = dVar17 + dVar17;
        dVar22 = dVar22 + dVar22;
        dVar37 = dVar37 + dVar37;
        lVar9 = (longlong)*param_6;
        *(double *)(param_6 + lVar9 * 0x16 + 2) =
             (dVar37 * dVar19 - dVar22 * dVar23) + dVar28 * dVar17 + dVar21;
        *(double *)((longlong)(param_6 + lVar9 * 0x16 + 2) + 8) =
             (double)local_518._0_8_ * dVar37 + dVar23 * dVar17 + dVar28 * dVar22 + dVar20;
        *(double *)(param_6 + lVar9 * 0x16 + 6) =
             dVar28 * dVar37 + dVar33 + (dVar22 * dVar16 - dVar17 * dVar19);
        *(double *)(param_6 + lVar9 * 0x16 + 8) = local_320;
        *(double *)((longlong)(param_6 + lVar9 * 0x16 + 8) + 8) = uStack_318;
        *(double *)(param_6 + lVar9 * 0x16 + 0xc) = local_310;
        *(code **)(param_6 + lVar9 * 0x16 + 0xe) = local_478;
        *(undefined8 *)(param_6 + lVar9 * 0x16 + 0x10) = local_468._0_8_;
        param_6[lVar9 * 0x16 + 0x12] = (int)local_458;
        (param_6 + lVar9 * 0x16 + 0x12)[1] = local_458._4_4_;
        *(ulonglong *)(param_6 + lVar9 * 0x16 + 0x14) =
             CONCAT44(local_558._4_4_,(undefined4)local_558);
        param_6[lVar9 * 0x16 + 0x16] = -1;
        *(char *)(param_6 + lVar9 * 0x16 + 0x17) = ((double)local_488._0_8_ < dVar18) + '\x01';
        *param_6 = *param_6 + 1;
      }
    }
  }
LAB_1404bb4ab:
  if ((local_f0 ^ (ulonglong)auStack_5d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001404bb2ab:
  bVar15 = iVar14 == 0;
  iVar14 = iVar14 + -1;
  dVar16 = 1.0 / dVar21;
  dVar33 = (double)local_270 * dVar16;
  dVar37 = (double)pppdStack_268 * dVar16;
  dVar16 = (double)local_260 * dVar16;
  pdVar24 = (double *)-dVar16;
  pppdVar38 = (double ***)-dVar37;
  pcVar29 = (code *)-dVar33;
  if ((dVar19 <= dVar21) || (dVar19 = dVar21, bVar15)) goto LAB_1404bb332;
  goto LAB_1404bb06a;
LAB_1404bb332:
  local_f8 = (uint)local_258;
  dVar19 = local_558;
  dVar16 = local_570;
LAB_1404bb34f:
  dVar22 = 0.0;
  dVar17 = 0.0;
  dVar37 = 0.0;
  local_320 = 0.0;
  uStack_318 = 0.0;
  local_310 = 0.0;
  dVar33 = 0.0;
  local_328 = 0.0;
  if (0 < (int)(uint)local_258) {
    pdVar10 = adStack_170 + 1;
    uVar11 = 0;
    local_310 = 0.0;
    do {
      dVar33 = local_118[uVar11];
      local_310 = local_310 + pdVar10[-0xc] * dVar33;
      uStack_318 = uStack_318 + pdVar10[-0xd] * dVar33;
      local_320 = local_320 + pdVar10[-0xe] * dVar33;
      dVar37 = dVar37 + *pdVar10 * dVar33;
      dVar17 = dVar17 + pdVar10[-1] * dVar33;
      dVar22 = dVar22 + dVar33 * pdVar10[-2];
      uVar11 = uVar11 + 1;
      pdVar10 = pdVar10 + 3;
      dVar33 = dVar22;
      local_328 = dVar37;
    } while ((uint)local_258 != uVar11);
  }
  local_310 = local_310 + (double)pdVar24 * 0.0;
  uStack_318 = uStack_318 + (double)pppdVar38 * 0.0;
  local_320 = local_320 + (double)pcVar29 * 0.0;
  local_328 = local_328 - (double)pdVar24 * 0.0;
  puStack_330 = (undefined8 *)(dVar17 - (double)pppdVar38 * 0.0);
  local_338 = (code *)(dVar33 - (double)pcVar29 * 0.0);
  pcVar34 = (code *)(0.0 - dVar21);
  local_358 = pcVar29;
  pppdStack_350 = pppdVar38;
  local_348 = pdVar24;
  goto LAB_1404bb477;
}



// FUNCTION 1404bc728 FUN_1404bc728 body=1270 status=ok
// SIG undefined FUN_1404bc728(void)

void FUN_1404bc728(longlong param_1,double *param_2,int param_3,double *param_4,double *param_5,
                  int *param_6)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double local_d0;
  
  *param_6 = 2;
  param_5[2] = param_2[2];
  dVar21 = param_2[1];
  *param_5 = *param_2;
  param_5[1] = dVar21;
  dVar21 = param_2[6];
  local_d0 = param_2[5] * dVar21 + param_2[2];
  dVar20 = param_2[4] * dVar21 + param_2[1];
  dVar21 = dVar21 * param_2[3] + *param_2;
  param_5[3] = dVar21;
  param_5[4] = dVar20;
  param_5[5] = local_d0;
  lVar2 = *(longlong *)(param_1 + 0x28);
  plVar3 = *(longlong **)(lVar2 + 0x58);
  if (plVar3 != (longlong *)0x0) {
    cVar1 = *(char *)(lVar2 + 0x60);
    if (cVar1 == '\x01') {
      uVar15 = (ulonglong)*(byte *)(*plVar3 + 1 + (longlong)param_3 * 2);
      uVar17 = (uint)*(byte *)(plVar3[2] + -2 +
                              (*(byte *)(*plVar3 + (longlong)param_3 * 2) + uVar15) * 3);
    }
    else if (cVar1 == '\x02') {
      uVar15 = (ulonglong)*(short *)(*plVar3 + 2 + (longlong)param_3 * 4);
      uVar17 = (uint)*(short *)(plVar3[2] + -4 +
                               ((longlong)*(short *)(*plVar3 + (longlong)param_3 * 4) + uVar15) * 6)
      ;
    }
    else {
      if (cVar1 != '\x03') {
        return;
      }
      uVar15 = (ulonglong)*(int *)(*plVar3 + 4 + (longlong)param_3 * 8);
      uVar17 = *(uint *)(plVar3[2] + -8 +
                        ((longlong)*(int *)(*plVar3 + (longlong)param_3 * 8) + uVar15) * 0xc);
    }
    if ((0 < (int)uVar15) && (1 < *param_6)) {
      lVar16 = (longlong)(int)uVar17;
      lVar2 = *(longlong *)(lVar2 + 0x30);
      lVar18 = (longlong)param_3;
      lVar19 = 0;
      dVar7 = (double)*(float *)(lVar2 + lVar16 * 0xc);
      dVar8 = (double)*(float *)(lVar2 + 4 + lVar16 * 0xc);
      dVar10 = (double)*(float *)(lVar2 + 8 + lVar16 * 0xc);
      while( true ) {
        lVar2 = *(longlong *)(param_1 + 0x28);
        plVar3 = *(longlong **)(lVar2 + 0x58);
        uVar17 = 0xffffffff;
        if (plVar3 != (longlong *)0x0) {
          cVar1 = *(char *)(lVar2 + 0x60);
          if (cVar1 == '\x01') {
            uVar17 = (uint)*(byte *)(plVar3[2] + 1 +
                                    ((ulonglong)*(byte *)(*plVar3 + lVar18 * 2) + lVar19) * 3);
          }
          else if (cVar1 == '\x02') {
            uVar17 = (uint)*(short *)(plVar3[2] + 2 +
                                     (*(short *)(*plVar3 + lVar18 * 4) + lVar19) * 6);
          }
          else if (cVar1 == '\x03') {
            uVar17 = *(uint *)(plVar3[2] + 4 + (*(int *)(*plVar3 + lVar18 * 8) + lVar19) * 0xc);
          }
        }
        lVar2 = *(longlong *)(lVar2 + 0x30);
        lVar16 = (longlong)(int)uVar17;
        dVar4 = (double)*(float *)(lVar2 + 8 + lVar16 * 0xc);
        dVar5 = (double)*(float *)(lVar2 + 4 + lVar16 * 0xc);
        dVar6 = (double)*(float *)(lVar2 + lVar16 * 0xc);
        dVar9 = *param_4 * (dVar8 - dVar5) - (dVar7 - dVar6) * param_4[1];
        dVar7 = (dVar7 - dVar6) * param_4[2] - (dVar10 - dVar4) * *param_4;
        dVar10 = param_4[1] * (dVar10 - dVar4) - (dVar8 - dVar5) * param_4[2];
        dVar8 = dVar9 * dVar9 + dVar10 * dVar10 + dVar7 * dVar7;
        if (((dVar8 != 1.0) || (dVar12 = dVar9, dVar13 = dVar7, dVar14 = dVar10, NAN(dVar8))) &&
           (dVar12 = DAT_14c8464f0, dVar13 = DAT_14c8464e8, dVar14 = DAT_14c8464e0,
           9.99999993922529e-09 <= dVar8)) {
          dVar8 = 1.0 / SQRT(dVar8);
          dVar12 = dVar9 * dVar8;
          dVar13 = dVar7 * dVar8;
          dVar14 = dVar10 * dVar8;
        }
        dVar7 = param_5[2];
        dVar8 = *param_5;
        dVar10 = param_5[1];
        dVar11 = (dVar7 - dVar4) * dVar12 + (dVar8 - dVar6) * dVar14 + (dVar10 - dVar5) * dVar13;
        dVar9 = (local_d0 - dVar4) * dVar12 + (dVar21 - dVar6) * dVar14 + (dVar20 - dVar5) * dVar13;
        if ((0.01 < dVar9) && (0.01 < dVar11)) break;
        if ((0.01 <= dVar9) || (dVar11 <= 0.01)) {
          if ((0.01 < dVar9) && (dVar11 < 0.01)) {
            dVar11 = dVar11 / (dVar11 - dVar9);
            local_d0 = (local_d0 - dVar7) * dVar11 + dVar7;
            dVar20 = (dVar20 - dVar10) * dVar11 + dVar10;
            dVar21 = (dVar21 - dVar8) * dVar11 + dVar8;
            param_5[3] = dVar21;
            param_5[4] = dVar20;
            param_5[5] = local_d0;
          }
        }
        else {
          dVar9 = dVar9 / (dVar9 - dVar11);
          *param_5 = (dVar8 - dVar21) * dVar9 + dVar21;
          param_5[1] = (dVar10 - dVar20) * dVar9 + dVar20;
          param_5[2] = (dVar7 - local_d0) * dVar9 + local_d0;
        }
        lVar19 = lVar19 + 1;
        if ((int)uVar15 <= (int)lVar19) {
          return;
        }
        dVar7 = dVar6;
        dVar8 = dVar5;
        dVar10 = dVar4;
        if (*param_6 < 2) {
          return;
        }
      }
      *param_6 = 0;
    }
  }
  return;
}



// FUNCTION 1404bcc1e FUN_1404bcc1e body=2414 status=ok
// SIG undefined FUN_1404bcc1e(void)

void FUN_1404bcc1e(longlong *param_1,double param_2,double *param_3,double *param_4,double param_5,
                  undefined8 param_6,undefined8 param_7,double *param_8,double *param_9,
                  double param_10,double param_11,undefined8 param_12,double *param_13,
                  double param_14,undefined1 param_15)

{
  double dVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  float fVar20;
  double dVar21;
  undefined1 auStack_208 [32];
  double local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  double *local_1d0;
  double *local_1c8;
  double local_1c0;
  double local_1b8;
  undefined8 local_1b0;
  undefined1 *local_1a8;
  double local_1a0;
  undefined1 local_198;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  undefined1 local_160 [16];
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined4 local_f8;
  undefined1 local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  dVar15 = *param_4;
  dVar1 = param_4[1];
  dVar21 = dVar15 * param_13[1] - *param_13 * dVar1;
  dVar2 = param_4[2];
  dVar19 = *param_13 * dVar2 - param_13[2] * dVar15;
  dVar6 = param_13[2] * dVar1 - param_13[1] * dVar2;
  dVar7 = dVar15 * dVar19 - dVar6 * dVar1;
  dVar9 = dVar2 * dVar6 - dVar21 * dVar15;
  dVar6 = dVar1 * dVar21 - dVar19 * dVar2;
  dVar19 = dVar7 * dVar7 + dVar6 * dVar6 + dVar9 * dVar9;
  if (0.12249999999999998 < dVar19) {
    local_160._0_8_ = 1.0 / SQRT(dVar19);
    local_150 = dVar7 * (double)local_160._0_8_;
    dVar9 = dVar9 * (double)local_160._0_8_;
    local_160._0_8_ = dVar6 * (double)local_160._0_8_;
    local_160._8_8_ = dVar9;
    local_180 = param_8[2];
    dVar6 = param_3[2];
    dVar7 = *param_8;
    dVar19 = param_8[1];
    local_170 = *param_3;
    dVar21 = param_3[1];
    if ((local_180 - dVar6) * local_150 +
        (dVar7 - local_170) * (double)local_160._0_8_ + (dVar19 - dVar21) * dVar9 < 0.0) {
      local_150 = -local_150;
      local_160._8_4_ = SUB84(dVar9,0);
      local_160._0_8_ = -(double)local_160._0_8_;
      local_160._12_4_ = (uint)((ulonglong)dVar9 >> 0x20) ^ 0x80000000;
    }
    local_188 = param_9[1];
    local_178 = param_9[2];
    dVar9 = *param_9;
    dVar5 = (param_5 + param_5) * param_14;
    dVar8 = (((local_180 - local_178 * param_10) - (dVar2 * param_5 + dVar6)) * local_178 +
            ((dVar7 - dVar9 * param_10) - (dVar15 * param_5 + local_170)) * dVar9 +
            ((dVar19 - local_188 * param_10) - (dVar1 * param_5 + dVar21)) * local_188) / dVar5;
    dVar14 = (param_11 / param_5) * (double)param_1[3];
    dVar5 = (((local_178 * param_10 + local_180) - (dVar6 - dVar2 * param_5)) * local_178 +
            ((dVar9 * param_10 + dVar7) - (local_170 - dVar15 * param_5)) * dVar9 +
            ((local_188 * param_10 + dVar19) - (dVar21 - dVar1 * param_5)) * local_188) / dVar5;
    dVar14 = (1.0 - dVar14) * param_14 + dVar14;
    dVar15 = -1.0;
    if (-1.0 <= dVar8) {
      dVar15 = dVar8;
    }
    if (dVar15 <= -dVar14) {
      dVar15 = -dVar14;
    }
    dVar1 = 1.0;
    if (dVar5 <= 1.0) {
      dVar1 = dVar5;
    }
    if (dVar14 <= dVar1) {
      dVar1 = dVar14;
    }
    local_168 = param_2;
    if (dVar15 < param_2 + -0.2) {
      lVar4 = *param_1;
      fVar12 = *(float *)(lVar4 + 300);
      local_198 = param_15;
      local_1a8 = local_160;
      local_1b0 = param_12;
      local_1b8 = param_11;
      local_1c0 = param_10;
      local_1c8 = param_9;
      local_1d0 = param_8;
      local_1d8 = param_7;
      local_1e0 = param_6;
      local_1e8 = param_5;
      local_1a0 = (double)fVar12;
      FUN_142997b92(&local_148,param_12,param_3,param_4);
      dVar15 = local_100;
      if (((local_100 != 1.79769313486232e+308) || (NAN(local_100))) && (local_100 < (double)fVar12)
         ) {
        iVar3 = *(int *)(lVar4 + 0x5b0);
        *(uint *)(lVar4 + 0x5b0) = iVar3 + 1U;
        if (*(uint *)(lVar4 + 0x5b4) < iVar3 + 1U) {
          FUN_146ce5792(lVar4 + 0x3f8,iVar3);
        }
        lVar10 = *(longlong *)(lVar4 + 0x5a8);
        if (*(longlong *)(lVar4 + 0x5a8) == 0) {
          lVar10 = lVar4 + 0x3f8;
        }
        fVar12 = (float)local_138;
        fVar16 = (float)local_140;
        fVar17 = (float)local_148;
        fVar13 = (float)local_120;
        fVar18 = (float)local_128;
        fVar20 = (float)local_130;
        lVar11 = (longlong)iVar3 * 0x6c;
        *(float *)(lVar10 + lVar11) = fVar17;
        *(float *)(lVar10 + 4 + lVar11) = fVar16;
        *(float *)(lVar10 + 8 + lVar11) = fVar12;
        *(float *)(lVar10 + 0xc + lVar11) = fVar20;
        *(float *)(lVar10 + 0x10 + lVar11) = fVar18;
        *(float *)(lVar10 + 0x14 + lVar11) = fVar13;
        *(float *)(lVar10 + 0x18 + lVar11) = (float)local_118;
        *(float *)(lVar10 + 0x1c + lVar11) = (float)local_110;
        *(float *)(lVar10 + 0x20 + lVar11) = (float)local_108;
        *(float *)(lVar10 + 0x24 + lVar11) = (float)dVar15;
        *(undefined4 *)(lVar10 + 0x28 + lVar11) = local_f8;
        *(undefined1 *)(lVar10 + 0x2c + lVar11) = local_f4;
        *(float *)(lVar10 + 0x3c + lVar11) = fVar17;
        *(float *)(lVar10 + 0x40 + lVar11) = fVar16;
        *(float *)(lVar10 + 0x44 + lVar11) = fVar12;
        *(float *)(lVar10 + 0x48 + lVar11) = fVar20;
        *(float *)(lVar10 + 0x4c + lVar11) = fVar18;
        *(float *)(lVar10 + 0x50 + lVar11) = fVar13;
        *(float *)(lVar10 + 0x54 + lVar11) = fVar17;
        *(float *)(lVar10 + 0x58 + lVar11) = fVar16;
        *(float *)(lVar10 + 0x5c + lVar11) = fVar12;
        *(float *)(lVar10 + 0x60 + lVar11) = fVar20;
        *(float *)(lVar10 + 100 + lVar11) = fVar18;
        *(float *)(lVar10 + 0x68 + lVar11) = fVar13;
        *(undefined8 *)(lVar10 + 0x34 + lVar11) = 0;
        *(undefined1 *)(lVar10 + 0x30 + lVar11) = 0;
        lVar10 = *(longlong *)(lVar4 + 0x5a8);
        if (*(longlong *)(lVar4 + 0x5a8) == 0) {
          lVar10 = lVar4 + 0x3f8;
        }
        if ((longlong)*(int *)(lVar4 + 0x16c) == -1) {
          fVar12 = INFINITY;
        }
        else {
          fVar12 = *(float *)(lVar10 + 0x24 + (longlong)*(int *)(lVar4 + 0x16c) * 0x6c);
        }
        if (*(float *)(lVar10 + 0x24 + lVar11) < fVar12) {
          *(int *)(lVar4 + 0x16c) = iVar3;
        }
      }
    }
    if (param_2 + 0.2 < dVar1) {
      lVar4 = *param_1;
      fVar12 = *(float *)(lVar4 + 300);
      local_198 = param_15;
      local_1a8 = local_160;
      local_1b0 = param_12;
      local_1b8 = param_11;
      local_1c0 = param_10;
      local_1c8 = param_9;
      local_1d0 = param_8;
      local_1d8 = param_7;
      local_1e0 = param_6;
      local_1e8 = param_5;
      local_1a0 = (double)fVar12;
      FUN_142997b92(&local_148,dVar1,param_3,param_4);
      if (((local_100 != 1.79769313486232e+308) || (NAN(local_100))) && (local_100 < (double)fVar12)
         ) {
        iVar3 = *(int *)(lVar4 + 0x5b0);
        *(uint *)(lVar4 + 0x5b0) = iVar3 + 1U;
        if (*(uint *)(lVar4 + 0x5b4) < iVar3 + 1U) {
          FUN_146ce5792(lVar4 + 0x3f8,iVar3);
        }
        lVar10 = *(longlong *)(lVar4 + 0x5a8);
        if (*(longlong *)(lVar4 + 0x5a8) == 0) {
          lVar10 = lVar4 + 0x3f8;
        }
        fVar12 = (float)local_138;
        fVar16 = (float)local_140;
        fVar17 = (float)local_148;
        fVar13 = (float)local_120;
        fVar18 = (float)local_128;
        fVar20 = (float)local_130;
        lVar11 = (longlong)iVar3 * 0x6c;
        *(float *)(lVar10 + lVar11) = fVar17;
        *(float *)(lVar10 + 4 + lVar11) = fVar16;
        *(float *)(lVar10 + 8 + lVar11) = fVar12;
        *(float *)(lVar10 + 0xc + lVar11) = fVar20;
        *(float *)(lVar10 + 0x10 + lVar11) = fVar18;
        *(float *)(lVar10 + 0x14 + lVar11) = fVar13;
        *(float *)(lVar10 + 0x18 + lVar11) = (float)local_118;
        *(float *)(lVar10 + 0x1c + lVar11) = (float)local_110;
        *(float *)(lVar10 + 0x20 + lVar11) = (float)local_108;
        *(float *)(lVar10 + 0x24 + lVar11) = (float)local_100;
        *(undefined4 *)(lVar10 + 0x28 + lVar11) = local_f8;
        *(undefined1 *)(lVar10 + 0x2c + lVar11) = local_f4;
        *(float *)(lVar10 + 0x3c + lVar11) = fVar17;
        *(float *)(lVar10 + 0x40 + lVar11) = fVar16;
        *(float *)(lVar10 + 0x44 + lVar11) = fVar12;
        *(float *)(lVar10 + 0x48 + lVar11) = fVar20;
        *(float *)(lVar10 + 0x4c + lVar11) = fVar18;
        *(float *)(lVar10 + 0x50 + lVar11) = fVar13;
        *(float *)(lVar10 + 0x54 + lVar11) = fVar17;
        *(float *)(lVar10 + 0x58 + lVar11) = fVar16;
        *(float *)(lVar10 + 0x5c + lVar11) = fVar12;
        *(float *)(lVar10 + 0x60 + lVar11) = fVar20;
        *(float *)(lVar10 + 100 + lVar11) = fVar18;
        *(float *)(lVar10 + 0x68 + lVar11) = fVar13;
        *(undefined8 *)(lVar10 + 0x34 + lVar11) = 0;
        *(undefined1 *)(lVar10 + 0x30 + lVar11) = 0;
        lVar10 = *(longlong *)(lVar4 + 0x5a8);
        if (*(longlong *)(lVar4 + 0x5a8) == 0) {
          lVar10 = lVar4 + 0x3f8;
        }
        if ((longlong)*(int *)(lVar4 + 0x16c) == -1) {
          fVar12 = INFINITY;
        }
        else {
          fVar12 = *(float *)(lVar10 + 0x24 + (longlong)*(int *)(lVar4 + 0x16c) * 0x6c);
        }
        if (*(float *)(lVar10 + 0x24 + lVar11) < fVar12) {
          *(int *)(lVar4 + 0x16c) = iVar3;
        }
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404bd58d FUN_1404bd58d body=170 status=ok
// SIG undefined FUN_1404bd58d(void)

void FUN_1404bd58d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  double local_80;
  undefined1 local_70 [88];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_6 + 0x374) & 4) != 0) {
    local_80 = (double)param_6;
    FUN_1404c6514(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  local_80 = (double)*(float *)(param_6 + 300);
  local_88 = param_4;
  FUN_1404c6887(local_70,param_1,param_2,param_3);
  FUN_146d0d32b(param_6,local_70);
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404bd638 FUN_1404bd638 body=170 status=ok
// SIG undefined FUN_1404bd638(void)

void FUN_1404bd638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_a8 [32];
  longlong local_88;
  double local_80;
  undefined1 local_70 [88];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_6 + 0x374) & 4) != 0) {
    local_88 = param_6;
    FUN_1404c7181(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  local_80 = (double)*(float *)(param_6 + 300);
  local_88 = param_4;
  FUN_146d4909f(local_70,param_1,param_2,param_3);
  FUN_146d0d32b(param_6,local_70);
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404bd6e3 FUN_1404bd6e3 body=1843 status=ok
// SIG undefined FUN_1404bd6e3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1404bd6e3(double *param_1,longlong param_2,double *param_3,undefined8 param_4,
                      double *param_5)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_158 [40];
  double local_130;
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  dVar12 = *(double *)(param_2 + 0x20) * param_3[8];
  dVar13 = *(double *)(param_2 + 0x28) * param_3[9];
  dVar7 = *(double *)(param_2 + 0x30) * param_3[10];
  dVar16 = *param_3;
  dVar21 = param_3[1];
  dVar8 = param_3[2];
  dVar1 = param_3[3];
  dVar15 = dVar13 * dVar16 - dVar12 * dVar21;
  dVar17 = dVar7 * dVar21 - dVar13 * dVar8;
  dVar18 = dVar12 * dVar8 - dVar16 * dVar7;
  dVar17 = dVar17 + dVar17;
  dVar18 = dVar18 + dVar18;
  dVar15 = dVar15 + dVar15;
  dVar14 = (dVar15 * dVar21 - dVar18 * dVar8) + dVar1 * dVar17 + dVar12 + param_3[4];
  dVar12 = (dVar8 * dVar17 - dVar16 * dVar15) + param_3[3] * dVar18 + dVar13 + param_3[5];
  dVar3 = dVar15 * dVar1 + dVar7 + (dVar18 * dVar16 - dVar17 * dVar21) + param_3[6];
  dVar17 = dVar14 - param_5[4];
  dVar20 = dVar12 - param_5[5];
  dVar8 = dVar3 - param_5[6];
  auVar2 = *(undefined1 (*) [16])(param_5 + 8);
  dVar18 = -*param_5;
  dVar15 = -param_5[1];
  dVar7 = param_5[2] * -1.0;
  dVar13 = param_5[3] * 1.0;
  dVar21 = dVar17 * dVar7 - dVar18 * dVar8;
  dVar1 = dVar20 * dVar18 - dVar15 * dVar17;
  dVar16 = dVar8 * dVar15 - dVar7 * dVar20;
  dVar16 = dVar16 + dVar16;
  dVar21 = dVar21 + dVar21;
  dVar1 = dVar1 + dVar1;
  auVar10 = divpd(_DAT_149934d80,auVar2);
  local_e8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar10._0_8_) *
             ((dVar1 * dVar15 - dVar21 * dVar7) + dVar13 * dVar16 + dVar17);
  dStack_e0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar10._8_8_) *
              (*param_5 * dVar1 + dVar7 * dVar16 + dVar13 * dVar21 + dVar20);
  local_d8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_5[10])) &
                     (ulonglong)(1.0 / param_5[10])) *
             (dVar13 * dVar1 + dVar8 + (dVar21 * dVar18 - dVar16 * dVar15));
  local_130 = (double)FUN_1404bde18(param_4,&local_e8,&local_108);
  local_118 = *param_5;
  dStack_110 = param_5[1];
  dVar21 = param_5[2];
  dVar8 = param_5[3];
  dVar16 = dStack_100 * local_118 - local_108 * dStack_110;
  dVar7 = local_f8 * dStack_110 - dStack_100 * dVar21;
  dVar15 = local_108 * dVar21 - local_118 * local_f8;
  dVar7 = dVar7 + dVar7;
  dVar15 = dVar15 + dVar15;
  dVar16 = dVar16 + dVar16;
  dVar1 = param_5[3];
  dVar19 = dVar16 * dVar1 + local_f8 + (dVar15 * local_118 - dVar7 * dStack_110);
  dVar18 = *(double *)(param_2 + 0x10);
  local_130 = local_130 - dVar18;
  dVar4 = (dVar16 * dStack_110 - dVar15 * dVar21) + dVar1 * dVar7 + local_108;
  dVar5 = (dVar21 * dVar7 - local_118 * dVar16) + param_5[3] * dVar15 + dStack_100;
  dVar3 = dVar3 - dVar18 * dVar19;
  dVar22 = dVar12 - dVar18 * dVar5;
  dVar14 = dVar14 - dVar18 * dVar4;
  local_128._8_4_ = SUB84(dVar12,0);
  local_128._0_8_ = dVar14;
  local_128._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  dVar16 = dVar3 - param_3[6];
  dVar6 = *param_3;
  dVar18 = -dVar6;
  dVar15 = -param_3[1];
  dVar9 = param_3[2] * -1.0;
  dVar11 = param_3[3] * 1.0;
  dVar17 = dVar14 - param_3[4];
  dVar20 = dVar22 - param_3[5];
  dVar13 = dVar17 * dVar9 - dVar18 * dVar16;
  dVar12 = dVar20 * dVar18 - dVar15 * dVar17;
  dVar7 = dVar16 * dVar15 - dVar9 * dVar20;
  dVar7 = dVar7 + dVar7;
  dVar13 = dVar13 + dVar13;
  dVar12 = dVar12 + dVar12;
  auVar2 = *(undefined1 (*) [16])(param_3 + 8);
  auVar10 = divpd(_DAT_149934d80,auVar2);
  dVar1 = param_3[10];
  *param_1 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar10._0_8_) *
             ((dVar12 * dVar15 - dVar13 * dVar9) + dVar11 * dVar7 + dVar17);
  param_1[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar10._8_8_) *
               (dVar6 * dVar12 + dVar9 * dVar7 + dVar11 * dVar13 + dVar20);
  param_1[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar1)) & (ulonglong)(1.0 / dVar1))
               * (dVar11 * dVar12 + dVar16 + (dVar13 * dVar18 - dVar7 * dVar15));
  dVar12 = (dVar14 - dVar4 * local_130) - param_5[4];
  dVar13 = (dVar22 - dVar5 * local_130) - param_5[5];
  dVar16 = (dVar3 - dVar19 * local_130) - param_5[6];
  dVar18 = -local_118;
  dVar15 = -dStack_110;
  dVar21 = dVar21 * -1.0;
  dVar8 = dVar8 * 1.0;
  dVar17 = dVar12 * dVar21 - dVar18 * dVar16;
  dVar7 = dVar13 * dVar18 - dVar15 * dVar12;
  dVar14 = dVar16 * dVar15 - dVar21 * dVar13;
  dVar14 = dVar14 + dVar14;
  dVar17 = dVar17 + dVar17;
  dVar7 = dVar7 + dVar7;
  auVar2 = *(undefined1 (*) [16])(param_5 + 8);
  auVar10 = divpd(_DAT_149934d80,auVar2);
  dVar1 = param_5[10];
  param_1[3] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar10._0_8_) *
               ((dVar7 * dVar15 - dVar17 * dVar21) + dVar8 * dVar14 + dVar12);
  param_1[4] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar10._8_8_) *
               (local_118 * dVar7 + dVar21 * dVar14 + dVar8 * dVar17 + dVar13);
  param_1[5] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar1)) & (ulonglong)(1.0 / dVar1))
               * (dVar8 * dVar7 + dVar16 + (dVar17 * dVar18 - dVar14 * dVar15));
  param_1[6] = local_108;
  param_1[7] = dStack_100;
  param_1[8] = local_f8;
  param_1[9] = local_130;
  if ((local_d0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404bde18 FUN_1404bde18 body=1006 status=ok
// SIG undefined FUN_1404bde18(void)

void FUN_1404bde18(longlong param_1,double *param_2,double *param_3)

{
  double *pdVar1;
  uint uVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_f8 [40];
  double local_d0 [6];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  dVar5 = param_2[2];
  local_d0[5] = dVar5 - *(double *)(param_1 + 0x48);
  dVar6 = *param_2;
  dVar7 = param_2[1];
  local_d0[4] = dVar7 - *(double *)(param_1 + 0x40);
  local_d0[3] = dVar6 - *(double *)(param_1 + 0x38);
  local_d0[2] = *(double *)(param_1 + 0x30) - dVar5;
  local_d0[1] = *(double *)(param_1 + 0x28) - dVar7;
  local_d0[0] = *(double *)(param_1 + 0x20) - dVar6;
  if (((((*(double *)(param_1 + 0x38) < dVar6) || (*(double *)(param_1 + 0x40) < dVar7)) ||
       (*(double *)(param_1 + 0x48) < dVar5)) ||
      ((dVar6 < *(double *)(param_1 + 0x20) || (dVar7 < *(double *)(param_1 + 0x28))))) ||
     (dVar5 < *(double *)(param_1 + 0x30))) {
    lVar3 = 0;
    do {
      dVar5 = local_d0[lVar3 + 3];
      if (dVar5 <= 0.0) {
        dVar5 = 0.0;
        if (0.0 < local_d0[lVar3]) {
          dVar5 = -local_d0[lVar3];
        }
      }
      param_3[lVar3] = dVar5;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 3);
    dVar5 = *param_3;
    dVar6 = param_3[1];
    dVar7 = param_3[2];
    dVar4 = dVar7 * dVar7 + dVar5 * dVar5 + dVar6 * dVar6;
    if (dVar4 < 9.999999747378752e-05) {
      *param_3 = 1.0;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      dVar4 = 0.0;
    }
    else {
      dVar4 = SQRT(dVar4);
      *param_3 = dVar5 / dVar4;
      param_3[1] = dVar6 / dVar4;
      param_3[2] = dVar7 / dVar4;
      if (9.999999747378752e-05 <= dVar4) goto LAB_1404bdfce;
    }
    lVar3 = 0;
    do {
      dVar5 = 1.0;
      if ((0.0 < param_3[lVar3]) || (dVar5 = -1.0, param_3[lVar3] < 0.0)) {
        param_3[lVar3] = dVar5;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 3);
    dVar5 = *param_3;
    dVar6 = param_3[1];
    dVar7 = param_3[2];
    dVar8 = dVar7 * dVar7 + dVar5 * dVar5 + dVar6 * dVar6;
    if (9.99999993922529e-09 < dVar8) {
      dVar8 = 1.0 / SQRT(dVar8);
      *param_3 = dVar5 * dVar8;
      param_3[1] = dVar6 * dVar8;
      param_3[2] = dVar7 * dVar8;
    }
    goto LAB_1404bdfce;
  }
  dVar5 = local_d0[2];
  if (local_d0[2] <= local_d0[5]) {
    dVar5 = local_d0[5];
  }
  dVar6 = local_d0[1];
  if (local_d0[1] <= local_d0[4]) {
    dVar6 = local_d0[4];
  }
  dVar7 = local_d0[0];
  if (local_d0[0] <= local_d0[3]) {
    dVar7 = local_d0[3];
  }
  dVar4 = dVar7;
  if (dVar7 <= dVar6) {
    dVar4 = dVar6;
  }
  uVar2 = 2;
  if (dVar5 < dVar4) {
    uVar2 = (uint)(dVar7 <= dVar6);
  }
  dVar6 = *(double *)((longlong)local_d0 + (ulonglong)(uVar2 * 8) + 0x18);
  pdVar1 = (double *)((longlong)local_d0 + (ulonglong)(uVar2 * 8));
  if (*pdVar1 <= dVar6 && dVar6 != *pdVar1) {
    if (uVar2 == 0) {
      dVar8 = 1.0;
      dVar6 = 0.0;
      dVar7 = 0.0;
    }
    else {
      if (uVar2 == 1) {
        dVar7 = 1.0;
        dVar6 = 0.0;
      }
      else {
        dVar7 = 0.0;
        dVar6 = 1.0;
      }
      dVar8 = 0.0;
    }
  }
  else {
    if (uVar2 == 1) {
      dVar7 = 1.0;
      dVar6 = 0.0;
LAB_1404be0aa:
      dVar8 = 0.0;
    }
    else {
      if (uVar2 != 0) {
        dVar7 = 0.0;
        dVar6 = 1.0;
        goto LAB_1404be0aa;
      }
      dVar8 = 1.0;
      dVar6 = 0.0;
      dVar7 = 0.0;
    }
    dVar6 = -dVar6;
    dVar7 = -dVar7;
    dVar8 = -dVar8;
  }
  if (dVar4 <= dVar5) {
    dVar4 = dVar5;
  }
  *param_3 = dVar8;
  param_3[1] = dVar7;
  param_3[2] = dVar6;
LAB_1404bdfce:
  if ((local_a0 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(dVar4);
}



// FUNCTION 1404be207 FUN_1404be207 body=7159 status=ok
// SIG undefined FUN_1404be207(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404be207(longlong param_1,double *param_2,double param_3,double *param_4,double param_5,
                  int *param_6)

{
  undefined4 *puVar1;
  int *piVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined1 auVar6 [16];
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  double ***pppdVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong lVar13;
  double *pdVar14;
  ulonglong uVar15;
  longlong lVar16;
  double ****ppppdVar17;
  int iVar18;
  bool bVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double ***pppdVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  code *pcVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  double dVar39;
  double dVar40;
  double ***pppdVar41;
  double dVar42;
  undefined1 auStack_5c8 [32];
  double ****local_5a8;
  code **local_5a0;
  double ****local_598;
  double *local_590;
  double *local_588;
  undefined8 *local_580;
  code *local_578;
  double *local_570;
  code *local_560;
  double local_558;
  double local_550;
  double *local_548;
  double local_540;
  undefined8 local_538;
  undefined8 uStack_530;
  double ***local_528;
  double local_520;
  undefined8 *local_518;
  undefined8 uStack_510;
  undefined1 local_508 [12];
  uint uStack_4fc;
  double local_4f8;
  double dStack_4f0;
  undefined1 local_4e8 [16];
  undefined8 local_4d8;
  double dStack_4d0;
  double local_4c8;
  double dStack_4c0;
  double local_4b8;
  double dStack_4b0;
  undefined1 local_4a8 [12];
  undefined4 uStack_49c;
  double local_498;
  double dStack_490;
  double local_488;
  double local_480;
  double local_478;
  undefined8 *puStack_470;
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  double ***local_448;
  double dStack_440;
  double local_438;
  undefined8 uStack_430;
  double local_428;
  double dStack_420;
  undefined1 local_418 [16];
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  double local_3f8;
  double local_3e8;
  double local_3e0;
  double local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  double local_3b8;
  double *local_3b0;
  undefined1 local_3a8 [8];
  double local_3a0;
  undefined1 local_398 [16];
  double local_388;
  double local_380;
  double dStack_378;
  double local_370;
  double local_368;
  code *local_358;
  double ***pppdStack_350;
  double local_348;
  double ***local_338;
  undefined8 *puStack_330;
  double local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  double local_310;
  double local_308;
  double local_300;
  double local_2f8;
  double ***local_2f0;
  longlong local_2e8;
  undefined8 uStack_2e0;
  longlong local_2d8;
  undefined8 uStack_2d0;
  double ***local_2c8;
  double dStack_2c0;
  double local_2b8;
  double **local_2b0;
  double *local_2a8;
  undefined1 *local_2a0;
  undefined8 local_298;
  double *local_290;
  undefined1 *local_288;
  double local_280;
  double local_278;
  code *local_270;
  double ***pppdStack_268;
  double local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined1 local_238 [12];
  int iStack_22c;
  double local_228 [10];
  double ***local_1d8;
  double adStack_1d0 [5];
  double local_1a8;
  code *local_178;
  double adStack_170 [11];
  double local_118 [4];
  uint local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_5c8;
  dVar32 = -*param_4;
  dStack_490 = -param_4[1];
  dVar30 = param_4[2] * -1.0;
  dVar40 = param_4[3] * 1.0;
  dVar25 = *param_2;
  dVar27 = param_2[1];
  dVar35 = param_2[2];
  dVar23 = param_2[3];
  dVar24 = param_4[1];
  dVar21 = param_4[1];
  dVar26 = dVar27 * dVar30 * -1.0 + ((dVar25 * dVar40 - *param_4 * dVar23 * 1.0) - dVar35 * dVar24);
  dVar20 = dVar25 * dVar30 * 1.0 + ((dVar27 * dVar40 - *param_4 * dVar35 * -1.0) - dVar23 * dVar21);
  dVar22 = param_2[6] - param_4[6];
  local_518 = (undefined8 *)
              (dVar23 * dVar30 * 1.0 + dVar24 * dVar25 + (dVar40 * dVar35 - *param_4 * dVar27 * 1.0)
              );
  uStack_510 = dVar35 * dVar30 * -1.0 +
               dVar21 * dVar27 + (dVar40 * dVar23 - *param_4 * dVar25 * -1.0);
  dVar21 = param_2[4] - param_4[4];
  dVar24 = param_2[5] - param_4[5];
  dVar27 = dStack_490 * dVar22 - dVar24 * dVar30;
  dVar27 = dVar27 + dVar27;
  dVar35 = dVar32 * dVar24 - dVar21 * dStack_490;
  dVar35 = dVar35 + dVar35;
  dVar25 = dVar30 * dVar21 - dVar22 * dVar32;
  dVar25 = dVar25 + dVar25;
  local_498 = (dVar32 * dVar25 - dVar27 * dStack_490) + dVar40 * dVar35 + dVar22;
  dVar22 = (dVar30 * dVar27 - dVar35 * dVar32) + dVar40 * dVar25 + dVar24;
  dVar30 = (dStack_490 * dVar35 - dVar25 * dVar30) + dVar40 * dVar27 + dVar21;
  dVar40 = *(double *)(param_1 + 0x38);
  dVar25 = *(double *)(param_1 + 0x40);
  dVar21 = dVar25 * dVar26 - dVar20 * dVar40;
  dVar32 = *(double *)(param_1 + 0x48) * dVar20 - (double)local_518 * dVar25;
  dVar23 = dVar40 * (double)local_518 - *(double *)(param_1 + 0x48) * dVar26;
  dVar32 = dVar32 + dVar32;
  dVar23 = dVar23 + dVar23;
  dVar21 = dVar21 + dVar21;
  dVar27 = *(double *)(param_1 + 0x20);
  dVar35 = *(double *)(param_1 + 0x28);
  dVar24 = dVar35 * dVar26 - dVar20 * dVar27;
  dVar33 = *(double *)(param_1 + 0x30) * dVar20 - (double)local_518 * dVar35;
  dVar39 = dVar27 * (double)local_518 - dVar26 * *(double *)(param_1 + 0x30);
  dVar33 = dVar33 + dVar33;
  dVar39 = dVar39 + dVar39;
  dVar24 = dVar24 + dVar24;
  local_558 = *(double *)(param_1 + 0x10);
  local_370 = dVar21 * uStack_510 + *(double *)(param_1 + 0x48) +
              (dVar23 * dVar26 - dVar32 * dVar20);
  local_540 = *(double *)(param_1 + 0x50);
  local_380 = (dVar21 * dVar20 - dVar23 * (double)local_518) + uStack_510 * dVar32 + dVar40;
  dStack_378 = ((double)local_518 * dVar32 - dVar26 * dVar21) + uStack_510 * dVar23 + dVar25;
  local_508._8_4_ = SUB84(dVar20,0);
  local_508._0_8_ = dVar26;
  uStack_4fc = (int)((ulonglong)dVar20 >> 0x20);
  local_4a8._8_4_ = SUB84(dVar22,0);
  local_4a8._0_8_ = dVar30;
  uStack_49c = (int)((ulonglong)dVar22 >> 0x20);
  dVar22 = ((double)local_518 * dVar33 - dVar26 * dVar24) + uStack_510 * dVar39 + dVar35 + dVar22;
  local_388 = dVar24 * uStack_510 + *(double *)(param_1 + 0x30) +
              (dVar39 * dVar26 - dVar33 * dVar20) + local_498;
  local_3b0 = (double *)local_398;
  local_398._8_4_ = SUB84(dVar22,0);
  local_398._0_8_ =
       (dVar24 * dVar20 - dVar39 * (double)local_518) + uStack_510 * dVar33 + dVar27 + dVar30;
  local_398._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  local_3a0 = 0.0;
  local_3a8._4_4_ = -1;
  local_3a8._0_4_ = 0xffffffff;
  local_3d0 = 0xbff0000000000000;
  local_3c8 = 0;
  uStack_3c0 = 0;
  local_560 = (code *)(double)_DAT_14c75f068;
  local_548 = (double *)(double)DAT_14c75f06c;
  local_538 = param_3;
  local_3b8 = param_3;
  local_368 = local_540;
  if (DAT_14c992dd0 != '\x01') {
    local_f8 = 0;
    local_278 = 0.0;
    local_2a8 = &local_280;
    local_280 = 0.0;
    local_2b0 = &local_3b0;
    local_2a0 = local_3a8;
    local_248 = 0;
    local_258 = 0;
    uStack_250 = 0;
    dVar22 = -1.0;
    pppdVar41 = (double ***)&DAT_8000000000000000;
    pcVar36 = (code *)0x3ff0000000000000;
    iVar18 = 0x1e;
    ppppdVar17 = &local_1d8;
    dVar30 = -0.0;
    dVar40 = 0.0;
    dVar21 = 0.0;
    dVar24 = 3.4028234663852886e+38;
    local_298 = &local_3b8;
    local_290 = &local_278;
    local_288 = local_3a8 + 4;
LAB_1404be74e:
    local_260 = -dVar21;
    local_270 = (code *)((ulonglong)dVar22 ^ 0x8000000000000000);
    pppdStack_268 = (double ***)((ulonglong)dVar40 ^ 0x8000000000000000);
    local_5a8 = (double ****)&local_278;
    local_5a0 = (code **)(local_3a8 + 4);
    FUN_1449cbc5a(&local_3b8,&local_2c8,&local_270,0);
    dVar20 = local_278;
    dVar26 = local_280;
    dVar25 = dVar21 * local_3b0[5] + dVar22 * local_3b0[3] + dVar40 * local_3b0[4];
    if (0.0 <= dVar25) {
      dVar23 = local_3b0[6];
      dVar35 = local_3b0[5] * dVar23 + local_3b0[2];
      dVar27 = local_3b0[4] * dVar23 + local_3b0[1];
      pcVar3 = (code *)(local_3b0[3] * dVar23 + *local_3b0);
    }
    else {
      pcVar3 = (code *)*local_3b0;
      dVar27 = local_3b0[1];
      dVar35 = local_3b0[2];
    }
    local_3a8._0_4_ = ZEXT14(0.0 <= dVar25);
    dVar25 = dVar21 * dVar21 + dVar22 * dVar22 + dVar40 * dVar40;
    if (2.2250738585072014e-308 < dVar25) {
      dVar25 = SQRT(dVar25);
      dVar35 = dVar35 + (dVar21 / dVar25) * 0.0;
      dVar27 = dVar27 + (dVar40 / dVar25) * 0.0;
      pcVar3 = (code *)((double)pcVar3 + (dVar22 / dVar25) * 0.0);
    }
    lVar13 = (longlong)(int)(uint)local_258;
    (&local_1d8)[lVar13 * 3] = local_2c8;
    adStack_1d0[lVar13 * 3] = dStack_2c0;
    adStack_1d0[lVar13 * 3 + 1] = local_2b8;
    (&local_178)[lVar13 * 3] = pcVar3;
    adStack_170[lVar13 * 3] = dVar27;
    adStack_170[lVar13 * 3 + 1] = dVar35;
    *(uint *)((longlong)&local_258 + lVar13 * 4 + 4) = (uint)local_258;
    local_258 = CONCAT44(local_258._4_4_,(uint)local_258 + 1);
    *(double *)(local_238 + lVar13 * 0x18) = (double)local_2c8 - (double)pcVar3;
    *(double *)(local_238 + lVar13 * 0x18 + 8) = dStack_2c0 - dVar27;
    local_228[lVar13 * 3] = local_2b8 - dVar35;
    local_5a8 = ppppdVar17;
    local_5a0 = &local_178;
    FUN_1449162b1(&local_270,local_238,&local_258,local_118);
    pppdVar28 = pppdStack_268;
    dVar25 = SQRT(local_260 * local_260 +
                  (double)local_270 * (double)local_270 +
                  (double)pppdStack_268 * (double)pppdStack_268);
    if ((double)local_560 <= dVar25) goto code_r0x0001404be98f;
    local_f8 = (uint)local_258;
    local_2d8 = 0;
    uStack_2d0 = 0;
    local_2e8 = 0;
    uStack_2e0 = 0;
    FUN_140268ec4(&local_2d8,8);
    FUN_140268ec4(&local_2e8,8);
    if (0 < (int)(uint)local_258) {
      lVar13 = 0;
      do {
        uVar15 = uStack_2d0;
        lVar16 = (longlong)(int)uStack_2d0;
        uVar12 = (int)uStack_2d0 + 1;
        uStack_2d0 = CONCAT44(uStack_2d0._4_4_,uVar12);
        if (uStack_2d0._4_4_ < uVar12) {
          FUN_14026a4e8(&local_2d8,uVar15 & 0xffffffff);
        }
        uVar15 = uStack_2e0;
        *(double ****)(local_2d8 + 0x10 + lVar16 * 0x18) = ppppdVar17[2];
        uVar37 = *(undefined4 *)((longlong)ppppdVar17 + 4);
        uVar38 = *(undefined4 *)(ppppdVar17 + 1);
        uVar5 = *(undefined4 *)((longlong)ppppdVar17 + 0xc);
        puVar1 = (undefined4 *)(local_2d8 + lVar16 * 0x18);
        *puVar1 = *(undefined4 *)ppppdVar17;
        puVar1[1] = uVar37;
        puVar1[2] = uVar38;
        puVar1[3] = uVar5;
        lVar16 = (longlong)(int)uStack_2e0;
        uVar12 = (int)uStack_2e0 + 1;
        uStack_2e0 = CONCAT44(uStack_2e0._4_4_,uVar12);
        if (uStack_2e0._4_4_ < uVar12) {
          FUN_14026a4e8(&local_2e8,uVar15 & 0xffffffff);
        }
        *(double ****)(local_2e8 + 0x10 + lVar16 * 0x18) = ppppdVar17[0xe];
        uVar37 = *(undefined4 *)((longlong)ppppdVar17 + 100);
        uVar38 = *(undefined4 *)(ppppdVar17 + 0xd);
        uVar5 = *(undefined4 *)((longlong)ppppdVar17 + 0x6c);
        puVar1 = (undefined4 *)(local_2e8 + lVar16 * 0x18);
        *puVar1 = *(undefined4 *)(ppppdVar17 + 0xc);
        puVar1[1] = uVar37;
        puVar1[2] = uVar38;
        puVar1[3] = uVar5;
        lVar13 = lVar13 + 1;
        ppppdVar17 = ppppdVar17 + 3;
      } while (lVar13 < (int)(uint)local_258);
    }
    puStack_330 = &local_298;
    local_338 = (double ***)FUN_141727276;
    pppdStack_350 = &local_2b0;
    local_358 = FUN_142995a10;
    local_588 = local_548;
    local_590 = &local_308;
    local_598 = &local_2c8;
    local_5a8 = &local_2f0;
    local_5a0 = &local_270;
    uVar12 = FUN_144918d86(&local_2d8);
    dVar21 = local_538;
    if (uVar12 < 2) {
      local_3a0 = dVar20;
      if (dVar20 <= dVar26) {
        local_3a0 = dVar26;
      }
      local_348 = local_260;
      local_358 = local_270;
      pppdStack_350 = pppdStack_268;
      pppdVar28 = (double ***)((double)local_2f0 + 0.0);
      local_320 = (double)local_2c8 + (double)local_270 * 0.0;
      uStack_318 = dStack_2c0 + (double)pppdStack_268 * 0.0;
      local_310 = local_2b8 + local_260 * 0.0;
      local_338 = (double ***)(local_308 - (double)local_270 * 0.0);
      puStack_330 = (undefined8 *)(local_300 - (double)pppdStack_268 * 0.0);
      local_328 = local_2f8 - local_260 * 0.0;
      bVar19 = false;
    }
    else {
      bVar19 = true;
      if (uVar12 == 3) {
        dVar25 = -(double)local_2f0;
        dVar30 = local_260;
        pcVar36 = local_270;
        pppdVar41 = pppdStack_268;
      }
    }
    if (local_2e8 != 0) {
      FUN_1400020a8();
    }
    if (local_2d8 != 0) {
      FUN_1400020a8();
    }
    if (bVar19) {
      goto LAB_1404bea2c;
    }
    goto LAB_1404beb54;
  }
  local_580 = &local_3d0;
  local_588 = &local_3a0;
  local_590 = (double *)local_3a8;
  local_598 = (double ****)(local_3a8 + 4);
  local_5a0 = &local_358;
  local_5a8 = &local_338;
  local_578 = local_560;
  local_570 = local_548;
  FUN_146d00c3d(&local_3b8,&local_3b0,&local_1d8,&local_320);
  dVar21 = local_538;
  pppdVar28 = local_1d8;
LAB_1404beb54:
  dVar22 = local_328;
  puVar11 = puStack_330;
  pppdVar10 = local_338;
  dVar40 = local_348;
  pppdVar41 = pppdStack_350;
  pcVar36 = local_358;
  dVar30 = local_370;
  dVar24 = dStack_378;
  auVar6 = _DAT_149931e80;
  if (local_3a8._4_4_ != -1) {
    local_538 = -(double)pppdVar28 - local_558;
    uStack_530 = 0x8000000000000000;
    if (local_538 <= param_5) {
      uVar15 = DAT_149931e80;
      dVar26 = DAT_149931e80._8_8_;
      dVar23 = (double)((ulonglong)local_348 ^ uVar15);
      dVar35 = (double)((ulonglong)pppdStack_350 ^ uVar15);
      dVar20 = (double)((ulonglong)local_358 ^ uVar15);
      local_4b8 = local_380;
      local_408 = (undefined4)local_320;
      uStack_404 = local_320._4_4_;
      uStack_400 = (undefined4)uStack_318;
      uStack_3fc = uStack_318._4_4_;
      local_3f8 = local_310;
      local_5a8 = (double ****)CONCAT44(local_5a8._4_4_,local_3a8._4_4_);
      local_3e8 = dVar20;
      local_3e0 = dVar35;
      local_3d8 = dVar23;
      iVar18 = FUN_144918249(dVar21,&local_408,&local_3e8,0);
      auVar8 = local_468;
      auVar4 = _local_508;
      dVar25 = uStack_510;
      puVar7 = local_518;
      dVar27 = local_558;
      if (iVar18 != -1) {
        local_438 = dVar40;
        uStack_430 = 0;
        local_4c8 = dVar22 - local_558 * dVar40;
        dStack_4c0 = 0.0;
        uVar37 = (undefined4)((ulonglong)puVar11 >> 0x20);
        local_448 = pppdVar41;
        dStack_440 = 0.0;
        dVar22 = (double)puVar11 - local_558 * (double)pppdVar41;
        local_4d8 = pcVar36;
        dStack_4d0 = 0.0;
        dVar40 = dVar30 * dVar23 + local_4b8 * dVar20 + dVar24 * dVar35;
        lVar13 = *(longlong *)((longlong)dVar21 + 0x20);
        lVar16 = (longlong)iVar18;
        dVar39 = (double)*(float *)(lVar13 + 0x14 + lVar16 * 0x18);
        pppdVar41 = (double ***)(double)*(float *)(lVar13 + 0x10 + lVar16 * 0x18);
        local_560 = (code *)(double)*(float *)(lVar13 + 0xc + lVar16 * 0x18);
        local_478 = (double)pppdVar10 - local_558 * (double)pcVar36;
        local_548 = (double *)(double)*(float *)(lVar13 + 8 + lVar16 * 0x18);
        local_480 = (double)*(float *)(lVar13 + 4 + lVar16 * 0x18);
        local_488 = (double)*(float *)(lVar13 + lVar16 * 0x18);
        dVar33 = ABS(dVar39 * dVar23 + (double)local_560 * dVar20 + dVar35 * (double)pppdVar41 + 1.0
                    );
        dVar32 = (double)_DAT_14c75f018;
        puStack_470 = puVar11;
        local_270 = local_560;
        pppdStack_268 = pppdVar41;
        local_260 = dVar39;
        if (ABS(dVar40) < 0.01) {
          pppdVar28 = (double ***)(dVar23 - dVar30 * dVar40);
          dVar35 = dVar35 - dVar24 * dVar40;
          dVar20 = dVar20 - local_4b8 * dVar40;
          uVar38 = auVar6._8_4_;
          uVar12 = auVar6._12_4_;
          dVar24 = (double)pppdVar28 * (double)pppdVar28 + dVar20 * dVar20 + dVar35 * dVar35;
          dStack_4f0 = 0.0;
          if ((dVar24 != 1.0) || (NAN(dVar24))) {
            if (dVar24 < 9.99999993922529e-09) {
              uVar38 = 0;
              uVar12 = 0;
              dVar26 = 0.0;
              pppdVar28 = DAT_14c8464f0;
              dVar35 = DAT_14c8464e8;
              dVar20 = DAT_14c8464e0;
            }
            else {
              dVar24 = 1.0 / SQRT(dVar24);
              pppdVar28 = (double ***)((double)pppdVar28 * dVar24);
              dVar35 = dVar35 * dVar24;
              dVar20 = dVar20 * dVar24;
            }
          }
          dVar30 = -(double)pppdVar28;
          dVar40 = -dVar35;
          local_468._12_4_ = uVar12;
          local_468._8_4_ = uVar38;
          uVar9 = local_468._8_8_;
          dVar24 = -dVar20;
          local_238._8_4_ = SUB84(dVar35,0);
          local_238._0_8_ = dVar24;
          iStack_22c = (int)((ulonglong)dVar40 >> 0x20);
          local_5a0 = (code **)&local_298;
          local_298 = (double *)((ulonglong)local_298._4_4_ << 0x20);
          local_5a8 = &local_1d8;
          local_550 = dVar32;
          local_4f8 = dVar33;
          local_468 = auVar8;
          local_228[0] = dVar30;
          FUN_1404bfdff(dVar21,local_398,iVar18);
          dVar21 = stack0xfffffffffffffb00;
          if ((0 < (int)local_298) &&
             (dVar25 = dVar30 * dVar39 + dVar24 * (double)local_560 + (double)pppdVar41 * dVar40,
             9.999999747378752e-05 < ABS(dVar25))) {
            local_540 = 1.0 / dVar25;
            puStack_470 = (undefined8 *)((double)local_518 * -1.0);
            dStack_4d0 = uStack_510 * 1.0;
            local_4d8 = (code *)-(double)local_508._0_8_;
            local_508._0_8_ = -(double)local_508._0_8_;
            uStack_4fc = uStack_4fc ^ 0x80000000;
            local_478 = -dVar21;
            local_438 = local_558 * (double)pppdVar28;
            local_550 = local_558 * dVar35;
            local_468._0_8_ = dVar20;
            local_468 = CONCAT88(uVar9,local_468._0_8_);
            local_558 = local_558 * dVar20;
            lVar13 = 0;
            local_4e8._8_4_ = SUB84(dVar26,0);
            local_4e8._0_8_ = dVar30;
            local_4e8._12_4_ = (uint)((ulonglong)dVar26 >> 0x20) ^ 0x80000000;
            local_458._8_4_ = uVar38;
            local_458._0_8_ = dVar24;
            local_458._12_4_ = uVar12 ^ 0x80000000;
            do {
              dVar33 = *(double *)((longlong)adStack_1d0 + lVar13 + 8) + local_438;
              dVar29 = *(double *)((longlong)adStack_1d0 + lVar13) + local_550;
              dVar32 = *(double *)((longlong)&local_1d8 + lVar13) + local_558;
              dVar21 = (((double)local_548 - dVar33) * dVar39 +
                       (local_488 - dVar32) * (double)local_560 +
                       (local_480 - dVar29) * (double)pppdVar41) * local_540;
              dVar31 = dVar32 - (double)local_4a8._0_8_;
              dVar34 = dVar29 - stack0xfffffffffffffb60;
              dVar22 = dVar33 - local_498;
              local_538 = dVar33 - (double)pppdVar28 * dVar21;
              dVar23 = dVar34 * (double)local_508._0_8_ - local_478 * dVar31;
              dVar42 = dVar22 * stack0xfffffffffffffb00 - (double)puStack_470 * dVar34;
              dVar27 = dVar31 * (double)puStack_470 - dVar22 * (double)local_4d8;
              dVar25 = dVar29 - dVar35 * dVar21;
              dVar42 = dVar42 + dVar42;
              dVar27 = dVar27 + dVar27;
              dVar23 = dVar23 + dVar23;
              dVar21 = dVar32 - dVar21 * dVar20;
              lVar16 = (longlong)*param_6;
              *param_6 = *param_6 + 1;
              *(double *)(param_6 + lVar16 * 0x16 + 2) =
                   (dVar23 * stack0xfffffffffffffb00 - dVar27 * (double)puStack_470) +
                   dStack_4d0 * dVar42 + dVar31;
              *(double *)((longlong)(param_6 + lVar16 * 0x16 + 2) + 8) =
                   ((double)puStack_470 * dVar42 - (double)local_4d8 * dVar23) +
                   dStack_4d0 * dVar27 + dVar34;
              *(double *)(param_6 + lVar16 * 0x16 + 6) =
                   dVar23 * dStack_4d0 + dVar22 +
                   (dVar27 * (double)local_508._0_8_ - dVar42 * local_478);
              *(double *)(param_6 + lVar16 * 0x16 + 8) = dVar21;
              *(double *)(param_6 + lVar16 * 0x16 + 10) = dVar25;
              *(double *)(param_6 + lVar16 * 0x16 + 0xc) = local_538;
              piVar2 = param_6 + lVar16 * 0x16 + 0xe;
              *piVar2 = local_238._0_4_;
              piVar2[1] = local_238._4_4_;
              piVar2[2] = local_238._8_4_;
              piVar2[3] = iStack_22c;
              *(double *)(param_6 + lVar16 * 0x16 + 0x12) = local_228[0];
              *(double *)(param_6 + lVar16 * 0x16 + 0x14) =
                   (dVar33 - local_538) * dVar30 +
                   (dVar32 - dVar21) * dVar24 + (dVar29 - dVar25) * dVar40;
              param_6[lVar16 * 0x16 + 0x16] = -1;
              *(undefined1 *)(param_6 + lVar16 * 0x16 + 0x17) = 3;
              lVar13 = lVar13 + 0x18;
              local_528 = pppdVar41;
              local_520 = dVar39;
              local_4f8 = dVar35;
              dStack_4f0 = dVar26;
              local_4c8 = dStack_4d0;
              dStack_4c0 = dStack_4d0;
              local_4b8 = dVar40;
              dStack_4b0 = -dVar26;
              local_448 = pppdVar28;
              dStack_440 = dVar26;
              local_518 = puStack_470;
              uStack_510 = dStack_4d0;
            } while (((ulonglong)local_298 & 0xffffffff) * 0x18 != lVar13);
            goto LAB_1404beb8e;
          }
          local_4e8._8_4_ = (int)puVar11;
          local_4e8._0_8_ = dVar22;
          local_4e8._12_4_ = uVar37;
          uVar37 = (undefined4)local_4d8;
          uVar38 = local_4d8._4_4_;
          dVar22 = (double)local_508._0_8_;
          dVar40 = stack0xfffffffffffffb00;
          dVar32 = local_550;
          dVar33 = local_4f8;
          pcVar36 = local_4d8;
          puVar7 = local_518;
          dVar25 = uStack_510;
        }
        else {
          local_4e8._8_4_ = (int)puVar11;
          local_4e8._0_8_ = dVar22;
          local_4e8._12_4_ = uVar37;
          dVar22 = (double)local_508._0_8_;
          dVar40 = stack0xfffffffffffffb00;
          auVar6._8_4_ = (undefined4)uStack_510;
          auVar6._0_8_ = local_518;
          auVar6._12_4_ = uStack_510._4_4_;
          local_4d8._0_4_ = SUB84(pcVar36,0);
          uVar37 = (undefined4)local_4d8;
          local_4d8._4_4_ = (undefined4)((ulonglong)pcVar36 >> 0x20);
          uVar38 = local_4d8._4_4_;
          if ((dVar33 <= dVar32) &&
             (dVar26 = dVar39 * dVar30 + (double)local_560 * local_4b8 + dVar24 * (double)pppdVar41,
             local_550 = dVar32, ABS(dVar26) < 0.707)) {
            dStack_4f0 = 0.0;
            dVar20 = dVar39 - dVar30 * dVar26;
            dVar24 = (double)pppdVar41 - dVar24 * dVar26;
            dVar26 = (double)local_560 - local_4b8 * dVar26;
            dVar30 = 1.0 / SQRT(dVar20 * dVar20 + dVar26 * dVar26 + dVar24 * dVar24);
            adStack_1d0[1] = local_388 - dVar20 * dVar30 * local_558;
            local_1d8 = (double ***)((double)local_398._0_8_ - dVar30 * dVar26 * local_558);
            adStack_1d0[0] = (double)local_398._8_8_ - dVar24 * dVar30 * local_558;
            adStack_1d0[2] = local_380;
            adStack_1d0[3] = dStack_378;
            adStack_1d0[4] = local_370;
            local_1a8 = local_540;
            local_5a0 = (code **)&local_298;
            local_298 = (double *)((ulonglong)local_298._4_4_ << 0x20);
            local_5a8 = (double ****)local_238;
            local_528 = pppdVar41;
            local_520 = dVar39;
            local_4f8 = dVar33;
            local_4d8 = pcVar36;
            FUN_1404bfdff(dVar21,&local_1d8,iVar18,&local_270);
            if (0 < (longlong)(int)local_298) {
              local_558 = dVar27 * (double)_DAT_14c75f01c * dVar27 * (double)_DAT_14c75f01c;
              local_4b8 = -dVar22;
              local_458._0_8_ = -dVar40;
              local_428 = (double)puVar7 * -1.0;
              dStack_4b0 = auVar6._8_8_ * 1.0;
              local_468._8_4_ = SUB84(dStack_4b0,0);
              local_468._0_8_ = dStack_4b0;
              local_468._12_4_ = (int)((ulonglong)dStack_4b0 >> 0x20);
              local_418._8_4_ = auVar4._8_4_;
              local_418._0_8_ = local_4b8;
              local_418._12_4_ = (int)((ulonglong)local_458._0_8_ >> 0x20);
              local_458._8_8_ = local_428;
              lVar13 = 0;
              do {
                dVar30 = *(double *)(local_238 + lVar13);
                dVar21 = *(double *)((longlong)local_228 + lVar13);
                dVar24 = *(double *)(local_238 + lVar13 + 8);
                if (local_558 <
                    (dVar21 - local_4c8) * (dVar21 - local_4c8) +
                    (dVar30 - local_478) * (dVar30 - local_478) +
                    (dVar24 - (double)local_4e8._0_8_) * (dVar24 - (double)local_4e8._0_8_)) {
                  dVar40 = (dVar21 - (double)local_548) * local_520 +
                           (dVar30 - local_488) * (double)local_560 +
                           (dVar24 - local_480) * (double)local_528;
                  local_540 = dVar21 - dVar40 * local_520;
                  dVar35 = dVar24 - dVar40 * (double)local_528;
                  dVar22 = dVar30 - dVar40 * (double)local_560;
                  dVar27 = dVar30 - (double)local_4a8._0_8_;
                  dVar40 = *(double *)(local_238 + lVar13 + 8) - stack0xfffffffffffffb60;
                  dVar23 = dVar21 - local_498;
                  dVar26 = dVar40 * local_4b8 - (double)local_458._0_8_ * dVar27;
                  dVar20 = dVar23 * (double)local_418._8_8_ - local_428 * dVar40;
                  dVar25 = dVar27 * local_428 - dVar23 * local_4b8;
                  dVar20 = dVar20 + dVar20;
                  dVar25 = dVar25 + dVar25;
                  dVar26 = dVar26 + dVar26;
                  dVar40 = (local_428 * dVar20 - local_4b8 * dVar26) +
                           (double)local_468._8_8_ * dVar25 + dVar40;
                  lVar16 = (longlong)*param_6;
                  *param_6 = *param_6 + 1;
                  auVar4._8_4_ = SUB84(dVar40,0);
                  auVar4._0_8_ = (dVar26 * (double)local_418._8_8_ - dVar25 * local_428) +
                                 dStack_4b0 * dVar20 + dVar27;
                  auVar4._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
                  *(undefined1 (*) [16])(param_6 + lVar16 * 0x16 + 2) = auVar4;
                  *(double *)(param_6 + lVar16 * 0x16 + 6) =
                       dVar26 * dStack_4b0 + dVar23 +
                       (dVar25 * local_4b8 - dVar20 * (double)local_458._0_8_);
                  *(double *)(param_6 + lVar16 * 0x16 + 8) = dVar22;
                  *(double *)(param_6 + lVar16 * 0x16 + 10) = dVar35;
                  *(double *)(param_6 + lVar16 * 0x16 + 0xc) = local_540;
                  *(code **)(param_6 + lVar16 * 0x16 + 0xe) = local_270;
                  *(double ****)((longlong)(param_6 + lVar16 * 0x16 + 0xe) + 8) = pppdStack_268;
                  *(double *)(param_6 + lVar16 * 0x16 + 0x12) = local_260;
                  *(double *)(param_6 + lVar16 * 0x16 + 0x14) =
                       (dVar21 - local_540) * local_520 +
                       (dVar30 - dVar22) * (double)local_560 + (dVar24 - dVar35) * (double)local_528
                  ;
                  param_6[lVar16 * 0x16 + 0x16] = -1;
                  *(undefined1 *)(param_6 + lVar16 * 0x16 + 0x17) = 1;
                  dVar22 = (double)local_508._0_8_;
                  dVar40 = stack0xfffffffffffffb00;
                  puVar7 = local_518;
                  dVar25 = uStack_510;
                }
                lVar13 = lVar13 + 0x18;
                uVar37 = (undefined4)local_4d8;
                uVar38 = local_4d8._4_4_;
                dStack_420 = dStack_4b0;
              } while ((longlong)(int)local_298 * 0x18 != lVar13);
            }
            dVar32 = local_550;
            dVar33 = local_4f8;
            pcVar36 = local_4d8;
          }
        }
        local_4d8 = pcVar36;
        dVar27 = local_478 - (double)CONCAT44(local_4a8._4_4_,local_4a8._0_4_);
        dVar35 = (double)local_4e8._0_8_ - (double)CONCAT44(uStack_49c,local_4a8._8_4_);
        dVar23 = local_4c8 - local_498;
        dVar21 = -dVar22;
        dVar40 = -dVar40;
        dVar30 = (double)puVar7 * -1.0;
        dVar25 = dVar25 * 1.0;
        dVar20 = dVar27 * dVar30 - dVar21 * dVar23;
        dVar24 = dVar35 * dVar21 - dVar40 * dVar27;
        dVar26 = dVar23 * dVar40 - dVar30 * dVar35;
        dVar26 = dVar26 + dVar26;
        dVar20 = dVar20 + dVar20;
        dVar24 = dVar24 + dVar24;
        lVar13 = (longlong)*param_6;
        *(double *)(param_6 + lVar13 * 0x16 + 2) =
             (dVar24 * dVar40 - dVar20 * dVar30) + dVar25 * dVar26 + dVar27;
        *(double *)((longlong)(param_6 + lVar13 * 0x16 + 2) + 8) =
             dVar22 * dVar24 + dVar30 * dVar26 + dVar25 * dVar20 + dVar35;
        *(double *)(param_6 + lVar13 * 0x16 + 6) =
             dVar25 * dVar24 + dVar23 + (dVar20 * dVar21 - dVar26 * dVar40);
        *(double *)(param_6 + lVar13 * 0x16 + 8) = local_320;
        *(double *)((longlong)(param_6 + lVar13 * 0x16 + 8) + 8) = uStack_318;
        *(double *)(param_6 + lVar13 * 0x16 + 0xc) = local_310;
        *(ulonglong *)(param_6 + lVar13 * 0x16 + 0xe) = CONCAT44(uVar38,uVar37);
        *(double ****)(param_6 + lVar13 * 0x16 + 0x10) = local_448;
        *(double *)(param_6 + lVar13 * 0x16 + 0x12) = local_438;
        param_6[lVar13 * 0x16 + 0x14] = (int)local_538;
        (param_6 + lVar13 * 0x16 + 0x14)[1] = local_538._4_4_;
        param_6[lVar13 * 0x16 + 0x16] = -1;
        *(char *)(param_6 + lVar13 * 0x16 + 0x17) = (dVar32 < dVar33) + '\x01';
        *param_6 = *param_6 + 1;
      }
    }
  }
LAB_1404beb8e:
  if ((local_f0 ^ (ulonglong)auStack_5c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001404be98f:
  bVar19 = iVar18 == 0;
  iVar18 = iVar18 + -1;
  dVar21 = 1.0 / dVar25;
  dVar22 = (double)local_270 * dVar21;
  dVar40 = (double)pppdStack_268 * dVar21;
  dVar21 = local_260 * dVar21;
  dVar30 = -dVar21;
  pppdVar41 = (double ***)-dVar40;
  pcVar36 = (code *)-dVar22;
  if ((dVar24 <= dVar25) || (dVar24 = dVar25, bVar19)) goto LAB_1404bea16;
  goto LAB_1404be74e;
LAB_1404bea16:
  local_f8 = (uint)local_258;
  dVar21 = local_538;
LAB_1404bea2c:
  dVar26 = 0.0;
  dVar22 = 0.0;
  dVar40 = 0.0;
  local_320 = 0.0;
  uStack_318 = 0.0;
  local_310 = 0.0;
  dVar24 = 0.0;
  local_328 = 0.0;
  if (0 < (int)(uint)local_258) {
    pdVar14 = adStack_170 + 1;
    uVar15 = 0;
    local_310 = 0.0;
    do {
      dVar24 = local_118[uVar15];
      local_310 = local_310 + pdVar14[-0xc] * dVar24;
      uStack_318 = uStack_318 + pdVar14[-0xd] * dVar24;
      local_320 = local_320 + pdVar14[-0xe] * dVar24;
      dVar40 = dVar40 + *pdVar14 * dVar24;
      dVar22 = dVar22 + pdVar14[-1] * dVar24;
      dVar26 = dVar26 + dVar24 * pdVar14[-2];
      uVar15 = uVar15 + 1;
      pdVar14 = pdVar14 + 3;
      dVar24 = dVar26;
      local_328 = dVar40;
    } while ((uint)local_258 != uVar15);
  }
  local_310 = local_310 + dVar30 * 0.0;
  uStack_318 = uStack_318 + (double)pppdVar41 * 0.0;
  local_320 = local_320 + (double)pcVar36 * 0.0;
  local_328 = local_328 - dVar30 * 0.0;
  puStack_330 = (undefined8 *)(dVar22 - (double)pppdVar41 * 0.0);
  local_338 = (double ***)(dVar24 - (double)pcVar36 * 0.0);
  pppdVar28 = (double ***)(0.0 - dVar25);
  local_358 = pcVar36;
  pppdStack_350 = pppdVar41;
  local_348 = dVar30;
  goto LAB_1404beb54;
}



// FUNCTION 1404bfdff FUN_1404bfdff body=1217 status=ok
// SIG undefined FUN_1404bfdff(void)

void FUN_1404bfdff(longlong param_1,double *param_2,int param_3,double *param_4,double *param_5,
                  int *param_6)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  *param_6 = 2;
  param_5[2] = param_2[2];
  dVar22 = param_2[1];
  *param_5 = *param_2;
  param_5[1] = dVar22;
  dVar22 = param_2[6];
  dVar20 = param_2[5] * dVar22 + param_2[2];
  dVar21 = param_2[4] * dVar22 + param_2[1];
  dVar22 = dVar22 * param_2[3] + *param_2;
  param_5[3] = dVar22;
  param_5[4] = dVar21;
  param_5[5] = dVar20;
  plVar2 = *(longlong **)(param_1 + 0x58);
  if (plVar2 != (longlong *)0x0) {
    cVar1 = *(char *)(param_1 + 0x60);
    if (cVar1 == '\x01') {
      uVar15 = (ulonglong)*(byte *)(*plVar2 + 1 + (longlong)param_3 * 2);
      uVar16 = (uint)*(byte *)(plVar2[2] + -2 +
                              (*(byte *)(*plVar2 + (longlong)param_3 * 2) + uVar15) * 3);
    }
    else if (cVar1 == '\x02') {
      uVar15 = (ulonglong)*(short *)(*plVar2 + 2 + (longlong)param_3 * 4);
      uVar16 = (uint)*(short *)(plVar2[2] + -4 +
                               ((longlong)*(short *)(*plVar2 + (longlong)param_3 * 4) + uVar15) * 6)
      ;
    }
    else {
      if (cVar1 != '\x03') {
        return;
      }
      uVar15 = (ulonglong)*(int *)(*plVar2 + 4 + (longlong)param_3 * 8);
      uVar16 = *(uint *)(plVar2[2] + -8 +
                        ((longlong)*(int *)(*plVar2 + (longlong)param_3 * 8) + uVar15) * 0xc);
    }
    if ((0 < (int)uVar15) && (1 < *param_6)) {
      lVar18 = (longlong)(int)uVar16;
      lVar3 = *(longlong *)(param_1 + 0x30);
      lVar17 = (longlong)param_3;
      lVar19 = 0;
      dVar7 = (double)*(float *)(lVar3 + lVar18 * 0xc);
      dVar8 = (double)*(float *)(lVar3 + 4 + lVar18 * 0xc);
      dVar10 = (double)*(float *)(lVar3 + 8 + lVar18 * 0xc);
      while( true ) {
        plVar2 = *(longlong **)(param_1 + 0x58);
        uVar16 = 0xffffffff;
        if (plVar2 != (longlong *)0x0) {
          cVar1 = *(char *)(param_1 + 0x60);
          if (cVar1 == '\x01') {
            uVar16 = (uint)*(byte *)(plVar2[2] + 1 +
                                    ((ulonglong)*(byte *)(*plVar2 + lVar17 * 2) + lVar19) * 3);
          }
          else if (cVar1 == '\x02') {
            uVar16 = (uint)*(short *)(plVar2[2] + 2 +
                                     (*(short *)(*plVar2 + lVar17 * 4) + lVar19) * 6);
          }
          else if (cVar1 == '\x03') {
            uVar16 = *(uint *)(plVar2[2] + 4 + (*(int *)(*plVar2 + lVar17 * 8) + lVar19) * 0xc);
          }
        }
        lVar3 = *(longlong *)(param_1 + 0x30);
        lVar18 = (longlong)(int)uVar16;
        dVar4 = (double)*(float *)(lVar3 + 8 + lVar18 * 0xc);
        dVar5 = (double)*(float *)(lVar3 + 4 + lVar18 * 0xc);
        dVar6 = (double)*(float *)(lVar3 + lVar18 * 0xc);
        dVar9 = *param_4 * (dVar8 - dVar5) - (dVar7 - dVar6) * param_4[1];
        dVar7 = (dVar7 - dVar6) * param_4[2] - (dVar10 - dVar4) * *param_4;
        dVar10 = param_4[1] * (dVar10 - dVar4) - (dVar8 - dVar5) * param_4[2];
        dVar8 = dVar9 * dVar9 + dVar10 * dVar10 + dVar7 * dVar7;
        if (((dVar8 != 1.0) || (dVar12 = dVar9, dVar13 = dVar7, dVar14 = dVar10, NAN(dVar8))) &&
           (dVar12 = DAT_14c8464f0, dVar13 = DAT_14c8464e8, dVar14 = DAT_14c8464e0,
           9.99999993922529e-09 <= dVar8)) {
          dVar8 = 1.0 / SQRT(dVar8);
          dVar12 = dVar9 * dVar8;
          dVar13 = dVar7 * dVar8;
          dVar14 = dVar10 * dVar8;
        }
        dVar7 = param_5[2];
        dVar8 = *param_5;
        dVar10 = param_5[1];
        dVar11 = (dVar7 - dVar4) * dVar12 + (dVar8 - dVar6) * dVar14 + (dVar10 - dVar5) * dVar13;
        dVar9 = (dVar20 - dVar4) * dVar12 + (dVar22 - dVar6) * dVar14 + (dVar21 - dVar5) * dVar13;
        if ((0.01 < dVar9) && (0.01 < dVar11)) break;
        if ((0.01 <= dVar9) || (dVar11 <= 0.01)) {
          if ((0.01 < dVar9) && (dVar11 < 0.01)) {
            dVar11 = dVar11 / (dVar11 - dVar9);
            dVar20 = (dVar20 - dVar7) * dVar11 + dVar7;
            dVar21 = (dVar21 - dVar10) * dVar11 + dVar10;
            dVar22 = (dVar22 - dVar8) * dVar11 + dVar8;
            param_5[3] = dVar22;
            param_5[4] = dVar21;
            param_5[5] = dVar20;
          }
        }
        else {
          dVar9 = dVar9 / (dVar9 - dVar11);
          *param_5 = (dVar8 - dVar22) * dVar9 + dVar22;
          param_5[1] = (dVar10 - dVar21) * dVar9 + dVar21;
          param_5[2] = (dVar7 - dVar20) * dVar9 + dVar20;
        }
        lVar19 = lVar19 + 1;
        if ((int)uVar15 <= (int)lVar19) {
          return;
        }
        dVar7 = dVar6;
        dVar8 = dVar5;
        dVar10 = dVar4;
        if (*param_6 < 2) {
          return;
        }
      }
      *param_6 = 0;
    }
  }
  return;
}



// FUNCTION 1404c02c0 FUN_1404c02c0 body=7945 status=ok
// SIG undefined FUN_1404c02c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404c02c0(longlong param_1,double *param_2,double param_3,int *param_4)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  undefined8 uVar6;
  bool bVar7;
  DWORD DVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  DWORD dwTlsIndex;
  DWORD DVar12;
  LPVOID lpTlsValue;
  longlong lVar13;
  double *pdVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 uVar19;
  int iVar20;
  bool bVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  double dVar38;
  double dVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  double dVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined1 auStack_a28 [32];
  double *local_a08;
  double **local_a00;
  double **local_9f8;
  int local_9e4;
  double local_9e0;
  double local_9d8;
  double local_9d0;
  undefined1 local_9c8 [16];
  double local_9b8;
  double local_9b0;
  double local_9a8;
  double *local_9a0;
  int *local_998;
  double local_990;
  longlong local_988;
  double local_980;
  double local_978;
  uint local_970;
  uint local_96c;
  double local_968;
  undefined8 uStack_960;
  double local_950;
  double local_948;
  double local_940;
  undefined1 local_938 [16];
  double local_928;
  ulonglong uStack_920;
  double local_918;
  undefined8 uStack_910;
  double local_908;
  undefined8 uStack_900;
  double local_8f0;
  double local_8e8;
  double local_8e0;
  double local_8d8;
  double local_8d0;
  double local_8c8;
  undefined8 uStack_8c0;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  undefined8 local_898;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined8 local_868;
  double local_858;
  uint uStack_850;
  undefined4 uStack_84c;
  double local_848;
  double dStack_840;
  double *local_838;
  undefined4 local_830;
  double *local_828;
  undefined4 local_820;
  double *local_818;
  undefined4 local_810;
  double *local_808;
  undefined4 local_800;
  double local_7f8;
  double dStack_7f0;
  double local_7e8;
  double local_7d8;
  double dStack_7d0;
  double local_7c8;
  double local_7b8;
  double dStack_7b0;
  double local_7a8;
  double local_798;
  double dStack_790;
  double local_788;
  longlong local_778;
  undefined8 uStack_770;
  undefined8 *local_760;
  undefined8 local_758;
  longlong local_750;
  char local_748;
  undefined8 local_740;
  double local_738;
  double dStack_730;
  double local_728;
  undefined4 local_720;
  undefined4 uStack_71c;
  double dStack_718;
  double local_710;
  undefined8 local_418;
  double local_410;
  double local_408;
  double local_400;
  double local_3f8;
  double local_3f0;
  double local_108 [3];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_a28;
  dVar38 = param_2[8];
  dVar44 = param_2[2];
  dVar33 = dVar38 - dVar44;
  dVar27 = param_2[7];
  dVar5 = *param_2;
  dVar26 = param_2[1];
  dVar32 = dVar27 - dVar26;
  local_9d8 = param_2[6];
  dVar39 = param_2[5];
  dVar25 = dVar39 - dVar44;
  dVar35 = param_2[4];
  dVar24 = dVar35 - dVar26;
  dVar34 = param_2[3];
  dVar28 = dVar34 - dVar5;
  dVar29 = dVar28 * dVar32 - (local_9d8 - dVar5) * dVar24;
  dVar28 = dVar25 * (local_9d8 - dVar5) - dVar33 * dVar28;
  dVar25 = dVar24 * dVar33 - dVar25 * dVar32;
  dVar33 = dVar29 * dVar29 + dVar25 * dVar25 + dVar28 * dVar28;
  if (((dVar33 != 1.0) || (local_738 = dVar25, local_728 = dVar29, dStack_730 = dVar28, NAN(dVar33))
      ) && (local_738 = DAT_14c8464e0, local_728 = DAT_14c8464f0, dStack_730 = DAT_14c8464e8,
           9.99999993922529e-09 <= dVar33)) {
    dVar33 = 1.0 / SQRT(dVar33);
    local_738 = dVar25 * dVar33;
    local_728 = dVar29 * dVar33;
    dStack_730 = dVar28 * dVar33;
  }
  dwTlsIndex = DAT_14c7585d0;
  local_9d0 = param_3;
  local_9a0 = param_2;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar12 = 0xffffffff;
    LOCK();
    bVar21 = DAT_14c7585d0 != 0xffffffff;
    DVar8 = dwTlsIndex;
    if (bVar21) {
      DVar12 = DAT_14c7585d0;
      DVar8 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar8;
    UNLOCK();
    if (bVar21) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar12;
    }
  }
  dVar33 = local_9d0;
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_418);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_760 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_758 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_750 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_748 = '\0';
  local_740 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_760;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  local_778 = 0;
  uStack_770 = 0;
  FUN_1404b1a60();
  lVar17 = *(longlong *)(param_1 + 0x88);
  if (*(int *)(lVar17 + 0x38) < 1) goto LAB_1404c138b;
  dVar38 = (dVar38 + dVar44 + dVar39) / 3.0;
  local_9b8 = (dVar27 + dVar26 + dVar35) / 3.0;
  local_9d8 = (local_9d8 + dVar5 + dVar34) / 3.0;
  lVar13 = 8;
  lVar15 = 0;
  dVar44 = -1.79769313486232e+308;
  dVar27 = 1.79769313486232e+308;
  do {
    lVar17 = *(longlong *)(lVar17 + 0x30);
    dVar26 = ((double)*(float *)(lVar17 + lVar13) * *(double *)(param_1 + 0x30) - dVar38) *
             local_728 +
             ((double)*(float *)(lVar17 + -8 + lVar13) * *(double *)(param_1 + 0x20) - local_9d8) *
             local_738 +
             ((double)*(float *)(lVar17 + -4 + lVar13) * *(double *)(param_1 + 0x28) - local_9b8) *
             dStack_730;
    dVar5 = dVar26;
    if (dVar27 <= dVar26) {
      dVar5 = dVar27;
    }
    *(double *)(local_778 + lVar15 * 8) = dVar26;
    if (dVar26 <= dVar44) {
      dVar26 = dVar44;
    }
    lVar15 = lVar15 + 1;
    lVar17 = *(longlong *)(param_1 + 0x88);
    lVar13 = lVar13 + 0xc;
    dVar44 = dVar26;
    dVar27 = dVar5;
  } while (lVar15 < *(int *)(lVar17 + 0x38));
  if ((dVar33 < dVar5) || (dVar26 < 0.0)) goto LAB_1404c138b;
  local_918 = local_738;
  uStack_910 = 0;
  local_798 = 0.0;
  dStack_790 = 0.0;
  iVar20 = 0;
  local_788 = 0.0;
  local_7a8 = 0.0;
  local_7b8 = 0.0;
  dStack_7b0 = 0.0;
  local_9a8 = dStack_730;
  local_990 = local_728;
  local_9b0 = dVar38;
  local_998 = param_4;
  local_988 = param_1 + 0x20;
  if (*(int *)(lVar17 + 0x28) < 1) {
    dVar38 = local_9a0[2];
    uVar40 = SUB84(*local_9a0,0);
    uVar41 = (undefined4)((ulonglong)*local_9a0 >> 0x20);
    local_9e0 = local_9a0[1];
    dVar44 = local_9a0[5];
    dVar27 = local_9a0[4];
    uVar36 = SUB84(local_9a0[3],0);
    uVar37 = (undefined4)((ulonglong)local_9a0[3] >> 0x20);
    uVar30 = SUB84(local_9a0[8],0);
    uVar31 = (undefined4)((ulonglong)local_9a0[8] >> 0x20);
    dVar26 = local_9a0[7];
    uVar11 = SUB84(local_9a0[6],0);
    uVar10 = (undefined4)((ulonglong)local_9a0[6] >> 0x20);
    local_968 = -1.79769313486232e+308;
    uStack_960 = 0;
    local_9e4 = -1;
    uVar42 = 0;
    uVar43 = 0;
    uVar45 = 0;
    uVar46 = 0;
    uVar47 = 0;
    uVar48 = 0;
  }
  else {
    local_9e4 = -1;
    local_968 = -1.79769313486232e+308;
    uStack_960 = 0;
    do {
      FUN_1404c21ca(param_1,iVar20,&local_720,&local_858);
      dVar38 = local_9a0[2];
      local_980 = *local_9a0;
      local_9e0 = local_9a0[1];
      dVar34 = (double)CONCAT44(uStack_84c,uStack_850);
      dVar33 = (double)CONCAT44(uStack_71c,local_720);
      local_418 = (dVar38 - local_848) * local_710 +
                  (local_980 - local_858) * dVar33 + (local_9e0 - dVar34) * dStack_718;
      dVar44 = local_9a0[5];
      dVar26 = local_9a0[3];
      uVar36 = SUB84(dVar26,0);
      uVar37 = (undefined4)((ulonglong)dVar26 >> 0x20);
      dVar27 = local_9a0[4];
      local_410 = (dVar44 - local_848) * local_710 +
                  (dVar26 - local_858) * dVar33 + (dVar27 - dVar34) * dStack_718;
      dVar39 = local_9a0[8];
      uVar30 = SUB84(dVar39,0);
      uVar31 = (undefined4)((ulonglong)dVar39 >> 0x20);
      dVar26 = local_9a0[7];
      dVar35 = local_9a0[6];
      uVar11 = SUB84(dVar35,0);
      uVar10 = (undefined4)((ulonglong)dVar35 >> 0x20);
      local_408 = (dVar39 - local_848) * local_710 +
                  (dVar35 - local_858) * dVar33 + (dVar26 - dVar34) * dStack_718;
      uVar18 = (uint)(local_408 <= local_418) * 2;
      if (local_410 <= local_418) {
        uVar18 = (local_408 <= local_410) + 1;
      }
      dVar39 = (double)(&local_418)[uVar18];
      iVar9 = local_9e4;
      if ((dVar39 <= local_9d0) && (local_968 < dVar39)) {
        local_788 = local_710;
        local_798 = (double)CONCAT44(uStack_71c,local_720);
        dStack_790 = dStack_718;
        dStack_7b0 = (double)CONCAT44(uStack_84c,uStack_850);
        local_7b8 = local_858;
        local_7a8 = local_848;
        uStack_960 = 0;
        iVar9 = iVar20;
        local_968 = dVar39;
      }
      local_978 = dVar38;
      if (local_9d0 < dVar39) goto LAB_1404c138b;
      iVar20 = iVar20 + 1;
      lVar17 = *(longlong *)(param_1 + 0x88);
      local_9e4 = iVar9;
    } while (iVar20 < *(int *)(lVar17 + 0x28));
    uVar47 = SUB84(local_7a8,0);
    uVar48 = (undefined4)((ulonglong)local_7a8 >> 0x20);
    uVar45 = SUB84(local_7b8,0);
    uVar46 = (undefined4)((ulonglong)local_7b8 >> 0x20);
    uVar42 = SUB84(local_788,0);
    uVar43 = (undefined4)((ulonglong)local_788 >> 0x20);
    uVar40 = SUB84(local_980,0);
    uVar41 = (undefined4)((ulonglong)local_980 >> 0x20);
  }
  local_108[1] = (dVar38 - (double)CONCAT44(uVar48,uVar47)) * (double)CONCAT44(uVar43,uVar42) +
                 ((double)CONCAT44(uVar41,uVar40) - (double)CONCAT44(uVar46,uVar45)) * local_798 +
                 (local_9e0 - dStack_7b0) * dStack_790;
  local_108[2] = (dVar44 - (double)CONCAT44(uVar48,uVar47)) * (double)CONCAT44(uVar43,uVar42) +
                 ((double)CONCAT44(uVar37,uVar36) - (double)CONCAT44(uVar46,uVar45)) * local_798 +
                 (dVar27 - dStack_7b0) * dStack_790;
  dVar38 = ((double)CONCAT44(uVar31,uVar30) - (double)CONCAT44(uVar48,uVar47)) *
           (double)CONCAT44(uVar43,uVar42) +
           ((double)CONCAT44(uVar10,uVar11) - (double)CONCAT44(uVar46,uVar45)) * local_798 +
           (dVar26 - dStack_7b0) * dStack_790;
  local_108[0] = dVar38;
  if (local_108[1] <= dVar38) {
    local_108[0] = local_108[1];
  }
  if (local_108[2] <= local_108[1]) {
    local_108[1] = local_108[2];
  }
  if (dVar38 <= local_108[2]) {
    local_108[2] = dVar38;
  }
  uVar22 = -(ulonglong)(0.0 <= *(double *)(param_1 + 0x20));
  uVar23 = ~uVar22 & ((&DAT_149931160)[0.0 <= *(double *)(param_1 + 0x28)] ^ 0x8000000000000000) |
           uVar22 & (&DAT_149931160)[0.0 <= *(double *)(param_1 + 0x28)];
  uVar22 = -(ulonglong)(0.0 <= *(double *)(param_1 + 0x30));
  dVar44 = (double)(~uVar22 & (uVar23 ^ 0x8000000000000000) | uVar22 & uVar23);
  local_96c = (uint)(dVar44 < 0.0);
  local_970 = (uint)(dVar44 >= 0.0);
  uVar36 = SUB84(local_9d0,0);
  uVar37 = (undefined4)((ulonglong)local_9d0 >> 0x20);
  local_8f0 = local_9d0 * local_9d0;
  local_908 = -1.79769313486232e+308;
  uStack_900 = 0;
  dVar27 = 0.0;
  local_928 = 0.0;
  uStack_920 = 0;
  local_938 = ZEXT816(0);
  local_9c8 = ZEXT816(0);
  uVar30 = SUB84(local_9b8,0);
  uVar31 = (undefined4)((ulonglong)local_9b8 >> 0x20);
  uStack_8c0 = 0;
  lVar13 = lVar17;
  dVar38 = local_9a8;
  local_8c8 = dVar44;
  while( true ) {
    lVar15 = *(longlong *)(lVar17 + 0x58);
    iVar20 = 0;
    if ((lVar15 != 0) && ((byte)(*(char *)(lVar17 + 0x60) - 1U) < 3)) {
      iVar20 = *(int *)(lVar15 + 0x38);
    }
    uVar18 = SUB84(dVar27,0);
    uVar11 = SUB84(local_9b8,0);
    uVar10 = (undefined4)((ulonglong)local_9b8 >> 0x20);
    if (iVar20 <= (int)uVar18) break;
    if (dVar44 < 0.0) {
      iVar20 = 0;
      if ((lVar15 != 0) && ((byte)(*(char *)(lVar17 + 0x60) - 1U) < 3)) {
        iVar20 = *(int *)(lVar15 + 0x38);
      }
      uVar18 = ~uVar18 + iVar20;
      uVar36 = SUB84(local_9d0,0);
      uVar37 = (undefined4)((ulonglong)local_9d0 >> 0x20);
      uVar30 = uVar11;
      uVar31 = uVar10;
      dVar44 = local_8c8;
    }
    iVar20 = -1;
    bVar21 = true;
    local_9e0 = dVar27;
    if (lVar15 == 0) {
      iVar9 = -1;
      iVar20 = -1;
    }
    else {
      local_418 = (double)CONCAT44(local_96c,uVar18);
      iVar9 = FUN_14571894e(lVar17 + 0x58,&local_418);
      bVar21 = *(longlong *)(lVar13 + 0x58) == 0;
      lVar17 = lVar13;
      if (!bVar21) {
        local_418 = (double)CONCAT44(local_970,uVar18);
        iVar20 = FUN_14571894e(lVar13 + 0x58,&local_418);
      }
    }
    lVar16 = (longlong)iVar9;
    dVar27 = *(double *)(local_778 + lVar16 * 8);
    lVar15 = (longlong)iVar20;
    if ((dVar27 < (double)CONCAT44(uVar37,uVar36) || dVar27 == (double)CONCAT44(uVar37,uVar36)) ||
       (dVar27 = *(double *)(local_778 + lVar15 * 8),
       dVar27 < (double)CONCAT44(uVar37,uVar36) || dVar27 == (double)CONCAT44(uVar37,uVar36))) {
      lVar13 = *(longlong *)(lVar17 + 0x30);
      dVar38 = *(double *)(param_1 + 0x30);
      local_940 = (double)*(float *)(lVar13 + 8 + lVar16 * 0xc) * dVar38;
      dVar44 = *(double *)(param_1 + 0x20);
      dVar27 = *(double *)(param_1 + 0x28);
      local_948 = (double)*(float *)(lVar13 + 4 + lVar16 * 0xc) * dVar27;
      fVar2 = *(float *)(lVar13 + 8 + lVar15 * 0xc);
      fVar3 = *(float *)(lVar13 + 4 + lVar15 * 0xc);
      local_950 = (double)*(float *)(lVar13 + lVar16 * 0xc) * dVar44;
      fVar4 = *(float *)(lVar13 + lVar15 * 0xc);
      uVar11 = 0xffffffff;
      if (bVar21) {
        uVar10 = 0xffffffff;
      }
      else {
        local_418 = (double)(ulonglong)uVar18;
        uVar10 = FUN_1457189ec(lVar17 + 0x58,&local_418,&local_720);
        if (*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x58) != 0) {
          local_418 = (double)CONCAT44(1,uVar18);
          uVar11 = FUN_1457189ec(*(longlong *)(param_1 + 0x88) + 0x58,&local_418,&local_720);
        }
      }
      iVar20 = SUB84(local_9e0,0);
      FUN_1404c2340(param_1,&local_418,uVar10);
      local_9e0 = local_400;
      local_978 = local_3f8;
      local_980 = local_3f0;
      FUN_1404c2340(param_1,&local_418,uVar11);
      local_9a8 = local_400;
      local_8d0 = local_3f8;
      local_8d8 = local_3f0;
      local_990 = local_728;
      local_918 = local_738;
      uStack_910 = 0;
      local_8e0 = (double)fVar2 * dVar38 - local_940;
      local_8e8 = (double)fVar3 * dVar27 - local_948;
      dVar38 = (double)fVar4 * dVar44 - local_950;
      lVar17 = 0;
      do {
        if (local_108[lVar17] < (double)CONCAT44(uVar37,uVar36) ||
            local_108[lVar17] == (double)CONCAT44(uVar37,uVar36)) {
          pdVar14 = local_9a0 + lVar17 * 3 + 3;
          dVar44 = pdVar14[-1];
          dVar27 = pdVar14[-3];
          dVar26 = pdVar14[-2];
          if (lVar17 == 2) {
            pdVar14 = local_9a0;
          }
          dVar39 = pdVar14[2] - dVar44;
          dVar34 = pdVar14[1] - dVar26;
          dVar35 = *pdVar14 - dVar27;
          dVar33 = local_3f0 * dVar39 + local_400 * dVar35 + local_3f8 * dVar34;
          uVar36 = SUB84(local_9d0,0);
          uVar37 = (undefined4)((ulonglong)local_9d0 >> 0x20);
          if (((local_980 * dVar39 + local_9e0 * dVar35 + local_978 * dVar34) * dVar33 <
               -0.009999999776482582) &&
             (0.009999999776482582 <
              dVar33 * ((-local_738 * dVar38 - local_8e8 * dStack_730) - local_728 * local_8e0))) {
            dVar33 = dVar38 * dVar34 - dVar35 * local_8e8;
            dVar25 = local_8e0 * dVar35 - dVar39 * dVar38;
            dVar39 = local_8e8 * dVar39 - dVar34 * local_8e0;
            dVar35 = (dVar44 - local_9b0) * dVar33 +
                     (dVar27 - local_9d8) * dVar39 +
                     (dVar26 - (double)CONCAT44(uVar31,uVar30)) * dVar25;
            uVar22 = DAT_149931e80;
            if (dVar35 < 0.0) {
              dVar24 = (double)((ulonglong)dVar33 ^ uVar22);
              uVar30 = DAT_149931e80._8_4_;
              uVar31 = DAT_149931e80._12_4_;
              dVar34 = (double)((ulonglong)dVar25 ^ uVar22);
            }
            else {
              uVar30 = 0;
              uVar31 = 0;
              dVar24 = dVar33;
              dVar34 = dVar25;
            }
            dVar33 = dVar33 * dVar33 + dVar39 * dVar39 + dVar25 * dVar25;
            uVar23 = -(ulonglong)(dVar35 < 0.0);
            dVar39 = (double)(~uVar23 & (ulonglong)dVar39 | ((ulonglong)dVar39 ^ uVar22) & uVar23);
            dVar44 = (local_940 - dVar44) * dVar24 +
                     (local_950 - dVar27) * dVar39 + (local_948 - dVar26) * dVar34;
            if (local_8f0 * dVar33 < ABS(dVar44) * dVar44) goto LAB_1404c138b;
            if (ABS(local_908) * local_908 * dVar33 < ABS(dVar44) * dVar44) {
              dVar27 = 1.0 / SQRT(dVar33);
              local_908 = dVar44 * dVar27;
              local_928 = dVar27 * dVar39;
              uStack_920 = 0;
              local_938._8_4_ = uVar30;
              local_938._0_8_ = dVar34 * dVar27;
              local_938._12_4_ = uVar31;
              local_9c8._8_4_ = uVar30;
              local_9c8._0_8_ = dVar24 * dVar27;
              local_9c8._12_4_ = uVar31;
              uStack_900 = 0;
            }
            uVar30 = SUB84(local_9b8,0);
            uVar31 = (undefined4)((ulonglong)local_9b8 >> 0x20);
          }
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 != 3);
      lVar17 = *(longlong *)(param_1 + 0x88);
      lVar13 = lVar17;
      dVar38 = dStack_730;
      dVar44 = local_8c8;
    }
    else {
      iVar20 = SUB84(local_9e0,0);
    }
    dVar27 = (double)(ulonglong)(iVar20 + 1);
  }
  if ((((dVar5 == -1.79769313486232e+308) && (!NAN(dVar5))) || (dVar5 + 0.01 <= local_968)) ||
     (dVar5 + 0.01 <= local_908)) {
    bVar21 = local_968 != -1.79769313486232e+308 && local_908 < local_968;
    if (bVar21) {
      local_7c8 = local_788;
      uVar22 = 0;
      if (0.0 <= ((double)*(float *)(lVar17 + 0x74) * *(double *)(param_1 + 0x30) - local_9b0) *
                 local_788 +
                 ((double)*(float *)(lVar17 + 0x6c) * *(double *)(param_1 + 0x20) - local_9d8) *
                 local_798 +
                 ((double)*(float *)(lVar17 + 0x70) * *(double *)(param_1 + 0x28) -
                 (double)CONCAT44(uVar31,uVar30)) * dStack_790) {
        local_9c8._8_8_ = 0;
        local_9c8._0_8_ = local_788;
        dVar27 = local_798;
        dVar44 = dStack_790;
      }
      else {
        uVar23 = DAT_149931e80;
        uVar22 = DAT_149931e80._8_8_;
        local_7c8 = (double)((ulonglong)local_788 ^ uVar23);
        local_9c8._8_4_ = DAT_149931e80._8_4_;
        local_9c8._0_8_ = local_7c8;
        local_9c8._12_4_ = DAT_149931e80._12_4_;
        dVar27 = (double)((ulonglong)local_798 ^ uVar23);
        dVar44 = (double)((ulonglong)dStack_790 ^ uVar23);
      }
      local_7e8 = local_788;
      local_7f8 = local_798;
      dStack_7f0 = dStack_790;
      uVar19 = 3;
      iVar20 = local_9e4;
      uVar23 = uVar22;
      local_7d8 = dVar27;
      dStack_7d0 = dVar44;
    }
    else {
      if ((local_908 == -1.79769313486232e+308) && (!NAN(local_908))) goto LAB_1404c138b;
      local_7c8 = (double)local_9c8._0_8_;
      dVar27 = local_928;
      uVar22 = uStack_920;
      dVar44 = (double)local_938._0_8_;
      uVar23 = local_938._8_8_;
      if (((double)*(float *)(lVar17 + 0x74) * *(double *)(param_1 + 0x30) - local_9b0) *
          (double)local_9c8._0_8_ +
          ((double)*(float *)(lVar17 + 0x6c) * *(double *)(param_1 + 0x20) - local_9d8) * local_928
          + ((double)*(float *)(lVar17 + 0x70) * *(double *)(param_1 + 0x28) - local_9b8) *
            (double)local_938._0_8_ < 0.0) {
        local_7c8 = -(double)local_9c8._0_8_;
        dVar44 = -(double)local_938._0_8_;
        uVar23 = local_938._8_8_ ^ 0x8000000000000000;
        dVar27 = -local_928;
        uVar22 = uStack_920 ^ 0x8000000000000000;
        local_9c8._8_8_ = local_9c8._8_8_ ^ 0x8000000000000000;
        local_9c8._0_8_ = local_7c8;
      }
      local_7d8 = dVar27;
      dStack_7d0 = dVar44;
      iVar20 = FUN_1404c24b6(lVar17,&local_7d8,local_988);
      FUN_1404c21ca(param_1,iVar20,&local_798,&local_7b8);
      local_7f8 = local_7d8;
      dStack_7f0 = dStack_7d0;
      local_7e8 = local_7c8;
      if (ABS(local_788 * (double)local_9c8._0_8_ + local_798 * dVar27 + dVar44 * dStack_790) <
          ABS(local_990 * (double)local_9c8._0_8_ + local_918 * dVar27 + dVar38 * dVar44)) {
        uVar19 = 2;
        if (local_7c8 * local_990 + local_7d8 * local_918 + dVar38 * dStack_7d0 < 0.0) {
          local_7e8 = -local_7c8;
          local_7f8 = -local_7d8;
          dStack_7f0 = -dStack_7d0;
        }
        bVar21 = false;
        goto LAB_1404c11dd;
      }
      uVar19 = 2;
      uVar30 = uVar11;
      uVar31 = uVar10;
      if (local_788 * local_7c8 + local_798 * local_7d8 + dStack_790 * dStack_7d0 < 0.0) {
        local_7e8 = -local_7c8;
        local_7f8 = -local_7d8;
        dStack_7f0 = -dStack_7d0;
      }
    }
    local_838 = &local_410;
    local_418 = (double)CONCAT44(local_418._4_4_,0x20);
    local_828 = &dStack_718;
    local_720 = 0x20;
    local_9f8 = &local_828;
    local_820 = 0x20;
    local_a00 = &local_838;
    local_830 = 0x20;
    local_a08 = &local_7f8;
    FUN_1404c2a81(&local_858,local_9a0,param_1,iVar20);
    bVar7 = false;
  }
  else {
    local_7c8 = local_728;
    uVar22 = 0;
    local_9c8._8_8_ = 0;
    local_9c8._0_8_ = local_728;
    dVar27 = local_738;
    dVar44 = dStack_730;
    if (((double)*(float *)(lVar17 + 0x74) * *(double *)(param_1 + 0x30) - local_9b0) * local_728 +
        ((double)*(float *)(lVar17 + 0x6c) * *(double *)(param_1 + 0x20) - local_9d8) * local_738 +
        ((double)*(float *)(lVar17 + 0x70) * *(double *)(param_1 + 0x28) -
        (double)CONCAT44(uVar31,uVar30)) * dStack_730 < 0.0) {
      uVar22 = 0x8000000000000000;
      local_7c8 = -local_728;
      dVar44 = -dStack_730;
      dVar27 = -local_738;
      local_9c8._8_8_ = 0x8000000000000000;
      local_9c8._0_8_ = local_7c8;
    }
    local_7e8 = local_728;
    local_7f8 = local_738;
    dStack_7f0 = dStack_730;
    local_7d8 = dVar27;
    dStack_7d0 = dVar44;
    iVar20 = FUN_1404c24b6(local_738,&local_738,local_988);
    FUN_1404c21ca(param_1,iVar20,&local_798,&local_7b8);
    uVar19 = 1;
    bVar21 = true;
    uVar11 = uVar30;
    uVar10 = uVar31;
    uVar23 = uVar22;
LAB_1404c11dd:
    local_818 = &local_410;
    local_418 = (double)CONCAT44(local_418._4_4_,0x20);
    local_808 = &dStack_718;
    local_720 = 0x20;
    local_9f8 = &local_808;
    local_800 = 0x20;
    local_a00 = &local_818;
    local_810 = 0x20;
    local_a08 = &local_7f8;
    FUN_1404c26a6(&local_858,param_1,iVar20,local_9a0);
    bVar7 = true;
    uVar30 = uVar11;
    uVar31 = uVar10;
  }
  uVar18 = uStack_850;
  dVar5 = local_858;
  if (4 < (int)uStack_850) {
    local_938._8_8_ = uVar23;
    local_938._0_8_ = dVar44;
    local_878 = 0;
    uStack_870 = 0;
    local_868 = 0x3ff0000000000000;
    local_9a8 = dVar38;
    local_928 = dVar27;
    uStack_920 = uVar22;
    FUN_140269010(&local_858,&local_7d8);
    dVar38 = (double)CONCAT44(uStack_84c,uStack_850);
    lVar17 = 0;
    do {
      dVar44 = *(double *)((longlong)dVar5 + lVar17);
      dVar27 = *(double *)((longlong)dVar5 + 8 + lVar17);
      dVar26 = *(double *)((longlong)dVar5 + 0x10 + lVar17);
      dVar35 = dVar38 * dVar26 + dVar27 * -local_848;
      dVar35 = dVar35 + dVar35;
      dVar34 = local_858 * dVar27 + dVar44 * -dVar38;
      dVar34 = dVar34 + dVar34;
      dVar39 = local_848 * dVar44 + dVar26 * -local_858;
      dVar39 = dVar39 + dVar39;
      *(double *)((longlong)dVar5 + lVar17) =
           dVar39 * -local_848 + dVar38 * dVar34 + dVar35 * dStack_840 + dVar44;
      *(double *)((longlong)dVar5 + 8 + lVar17) =
           dVar34 * -local_858 + local_848 * dVar35 + dStack_840 * dVar39 + dVar27;
      *(double *)((longlong)dVar5 + 0x10 + lVar17) =
           local_858 * dVar39 + dVar35 * -dVar38 + dStack_840 * dVar34 + dVar26;
      lVar17 = lVar17 + 0x18;
    } while ((ulonglong)uVar18 * 0x18 != lVar17);
    uVar18 = FUN_1402695a1();
    if (0 < (int)uVar18) {
      dVar38 = -(double)CONCAT44(uStack_84c,uStack_850);
      local_848 = local_848 * -1.0;
      dStack_840 = dStack_840 * 1.0;
      lVar17 = 0;
      do {
        dVar44 = *(double *)((longlong)dVar5 + lVar17);
        dVar27 = *(double *)((longlong)dVar5 + 8 + lVar17);
        dVar26 = *(double *)((longlong)dVar5 + 0x10 + lVar17);
        dVar35 = dVar38 * dVar26 + dVar27 * -local_848;
        dVar35 = dVar35 + dVar35;
        dVar34 = -local_858 * dVar27 + dVar44 * -dVar38;
        dVar34 = dVar34 + dVar34;
        dVar39 = local_848 * dVar44 + dVar26 * local_858;
        dVar39 = dVar39 + dVar39;
        *(double *)((longlong)dVar5 + lVar17) =
             dVar39 * -local_848 + dVar38 * dVar34 + dStack_840 * dVar35 + dVar44;
        *(double *)((longlong)dVar5 + 8 + lVar17) =
             dVar34 * local_858 + local_848 * dVar35 + dStack_840 * dVar39 + dVar27;
        *(double *)((longlong)dVar5 + 0x10 + lVar17) =
             -local_858 * dVar39 + dVar35 * -dVar38 + dStack_840 * dVar34 + dVar26;
        lVar17 = lVar17 + 0x18;
      } while ((ulonglong)uVar18 * 0x18 != lVar17);
    }
    uVar30 = SUB84(local_9b8,0);
    uVar31 = (undefined4)((ulonglong)local_9b8 >> 0x20);
    dVar44 = (double)local_938._0_8_;
    dVar27 = local_928;
    dVar38 = local_9a8;
  }
  if (((bool)(bVar7 ^ 1U)) || ((bool)(bVar21 ^ 1U))) {
    if ((bool)(bVar7 ^ 1U) || bVar21) {
      if ((bool)(bVar21 ^ 1U) || bVar7) {
        if ((!bVar7 && !bVar21) && 0 < (int)uVar18) {
          lVar17 = 0;
          do {
            dVar38 = *(double *)((longlong)dVar5 + 0x10 + lVar17);
            dVar26 = *(double *)((longlong)dVar5 + lVar17);
            dVar39 = *(double *)((longlong)dVar5 + 8 + lVar17);
            dVar35 = ((local_7a8 - dVar38) * local_788 +
                     (local_7b8 - dVar26) * local_798 + (dStack_7b0 - dVar39) * dStack_790) /
                     ((double)local_9c8._0_8_ * local_788 + dVar27 * local_798 + dVar44 * dStack_790
                     );
            local_8a8 = *(undefined8 *)((longlong)dVar5 + 0x10 + lVar17);
            local_8b8 = *(undefined8 *)((longlong)dVar5 + lVar17);
            uStack_8b0 = ((undefined8 *)((longlong)dVar5 + lVar17))[1];
            if (dVar35 <= (double)CONCAT44(uVar37,uVar36) &&
                (double)CONCAT44(uVar37,uVar36) != dVar35) {
              lVar13 = (longlong)*local_998;
              *local_998 = *local_998 + 1;
              *(double *)(local_998 + lVar13 * 0x16 + 2) = dVar26 + dVar27 * dVar35;
              *(double *)(local_998 + lVar13 * 0x16 + 4) = dVar39 + dVar44 * dVar35;
              *(double *)(local_998 + lVar13 * 0x16 + 6) = dVar38 + (double)local_9c8._0_8_ * dVar35
              ;
              *(undefined8 *)(local_998 + lVar13 * 0x16 + 8) = local_8b8;
              *(undefined8 *)(local_998 + lVar13 * 0x16 + 8 + 2) = uStack_8b0;
              *(undefined8 *)(local_998 + lVar13 * 0x16 + 0xc) = local_8a8;
              *(double *)(local_998 + lVar13 * 0x16 + 0xe) = local_7d8;
              *(double *)((longlong)(local_998 + lVar13 * 0x16 + 0xe) + 8) = dStack_7d0;
              *(double *)(local_998 + lVar13 * 0x16 + 0x12) = local_7c8;
              *(double *)(local_998 + lVar13 * 0x16 + 0x14) = dVar35;
              *(undefined1 *)(local_998 + lVar13 * 0x16 + 0x17) = uVar19;
              local_998[lVar13 * 0x16 + 0x16] = -1;
            }
            lVar17 = lVar17 + 0x18;
          } while ((ulonglong)uVar18 * 0x18 != lVar17);
        }
      }
      else if (0 < (int)uVar18) {
        lVar17 = 0;
        do {
          dVar38 = *(double *)((longlong)dVar5 + 0x10 + lVar17);
          dVar26 = *(double *)((longlong)dVar5 + lVar17);
          dVar39 = *(double *)((longlong)dVar5 + 8 + lVar17);
          dVar35 = (local_7a8 - dVar38) * (double)local_9c8._0_8_ +
                   (local_7b8 - dVar26) * dVar27 + (dStack_7b0 - dVar39) * dVar44;
          local_888 = *(undefined8 *)((longlong)dVar5 + 0x10 + lVar17);
          local_898 = *(undefined8 *)((longlong)dVar5 + lVar17);
          uStack_890 = ((undefined8 *)((longlong)dVar5 + lVar17))[1];
          if (dVar35 <= (double)CONCAT44(uVar37,uVar36) && (double)CONCAT44(uVar37,uVar36) != dVar35
             ) {
            lVar13 = (longlong)*local_998;
            *local_998 = *local_998 + 1;
            *(double *)(local_998 + lVar13 * 0x16 + 2) = dVar26 + dVar27 * dVar35;
            *(double *)(local_998 + lVar13 * 0x16 + 4) = dVar39 + dVar44 * dVar35;
            *(double *)(local_998 + lVar13 * 0x16 + 6) = dVar38 + (double)local_9c8._0_8_ * dVar35;
            *(undefined8 *)(local_998 + lVar13 * 0x16 + 8) = local_898;
            *(undefined8 *)(local_998 + lVar13 * 0x16 + 8 + 2) = uStack_890;
            *(undefined8 *)(local_998 + lVar13 * 0x16 + 0xc) = local_888;
            *(double *)(local_998 + lVar13 * 0x16 + 0xe) = local_7d8;
            *(double *)((longlong)(local_998 + lVar13 * 0x16 + 0xe) + 8) = dStack_7d0;
            *(double *)(local_998 + lVar13 * 0x16 + 0x12) = local_7c8;
            *(double *)(local_998 + lVar13 * 0x16 + 0x14) = dVar35;
            *(undefined1 *)(local_998 + lVar13 * 0x16 + 0x17) = uVar19;
            local_998[lVar13 * 0x16 + 0x16] = -1;
          }
          lVar17 = lVar17 + 0x18;
        } while ((ulonglong)uVar18 * 0x18 != lVar17);
      }
    }
    else if (0 < (int)uVar18) {
      lVar17 = 0;
      do {
        dVar26 = *(double *)((longlong)dVar5 + 0x10 + lVar17);
        dVar39 = *(double *)((longlong)dVar5 + lVar17);
        dVar35 = *(double *)((longlong)dVar5 + 8 + lVar17);
        dVar34 = ((dVar26 - local_9b0) * local_990 +
                 (dVar39 - local_9d8) * local_918 +
                 (dVar35 - (double)CONCAT44(uVar31,uVar30)) * dVar38) /
                 ((double)local_9c8._0_8_ * local_990 + dVar27 * local_918 + dVar44 * dVar38);
        if (dVar34 <= (double)CONCAT44(uVar37,uVar36) && (double)CONCAT44(uVar37,uVar36) != dVar34)
        {
          puVar1 = (undefined8 *)((longlong)dVar5 + lVar17);
          lVar13 = (longlong)*local_998;
          *local_998 = *local_998 + 1;
          *(undefined8 *)(local_998 + lVar13 * 0x16 + 6) = puVar1[2];
          uVar6 = puVar1[1];
          *(undefined8 *)(local_998 + lVar13 * 0x16 + 2) = *puVar1;
          *(undefined8 *)(local_998 + lVar13 * 0x16 + 2 + 2) = uVar6;
          *(double *)(local_998 + lVar13 * 0x16 + 8) = dVar39 - dVar27 * dVar34;
          *(double *)(local_998 + lVar13 * 0x16 + 10) = dVar35 - dVar44 * dVar34;
          *(double *)(local_998 + lVar13 * 0x16 + 0xc) = dVar26 - (double)local_9c8._0_8_ * dVar34;
          *(double *)(local_998 + lVar13 * 0x16 + 0xe) = local_7d8;
          *(double *)((longlong)(local_998 + lVar13 * 0x16 + 0xe) + 8) = dStack_7d0;
          *(double *)(local_998 + lVar13 * 0x16 + 0x12) = local_7c8;
          *(double *)(local_998 + lVar13 * 0x16 + 0x14) = dVar34;
          *(undefined1 *)(local_998 + lVar13 * 0x16 + 0x17) = uVar19;
          local_998[lVar13 * 0x16 + 0x16] = -1;
        }
        lVar17 = lVar17 + 0x18;
      } while ((ulonglong)uVar18 * 0x18 != lVar17);
    }
  }
  else if (0 < (int)uVar18) {
    lVar17 = 0;
    do {
      dVar38 = *(double *)((longlong)dVar5 + 0x10 + lVar17);
      dVar26 = *(double *)((longlong)dVar5 + lVar17);
      dVar39 = *(double *)((longlong)dVar5 + 8 + lVar17);
      dVar35 = (dVar38 - local_9b0) * (double)local_9c8._0_8_ +
               (dVar26 - local_9d8) * dVar27 + (dVar39 - (double)CONCAT44(uVar31,uVar30)) * dVar44;
      if (dVar35 <= (double)CONCAT44(uVar37,uVar36) && (double)CONCAT44(uVar37,uVar36) != dVar35) {
        puVar1 = (undefined8 *)((longlong)dVar5 + lVar17);
        lVar13 = (longlong)*local_998;
        *local_998 = *local_998 + 1;
        *(undefined8 *)(local_998 + lVar13 * 0x16 + 6) = puVar1[2];
        uVar6 = puVar1[1];
        *(undefined8 *)(local_998 + lVar13 * 0x16 + 2) = *puVar1;
        *(undefined8 *)(local_998 + lVar13 * 0x16 + 2 + 2) = uVar6;
        *(double *)(local_998 + lVar13 * 0x16 + 8) = dVar26 - dVar27 * dVar35;
        *(double *)(local_998 + lVar13 * 0x16 + 10) = dVar39 - dVar44 * dVar35;
        *(double *)(local_998 + lVar13 * 0x16 + 0xc) = dVar38 - (double)local_9c8._0_8_ * dVar35;
        *(double *)(local_998 + lVar13 * 0x16 + 0xe) = local_7d8;
        *(double *)((longlong)(local_998 + lVar13 * 0x16 + 0xe) + 8) = dStack_7d0;
        *(double *)(local_998 + lVar13 * 0x16 + 0x12) = local_7c8;
        *(double *)(local_998 + lVar13 * 0x16 + 0x14) = dVar35;
        *(undefined1 *)(local_998 + lVar13 * 0x16 + 0x17) = uVar19;
        local_998[lVar13 * 0x16 + 0x16] = -1;
      }
      lVar17 = lVar17 + 0x18;
    } while ((ulonglong)uVar18 * 0x18 != lVar17);
  }
LAB_1404c138b:
  if (local_748 == '\0') {
    local_748 = '\x01';
    *(int *)(local_760 + 4) = *(int *)(local_760 + 4) + -1;
    if (local_750 != local_760[2]) {
      FUN_14004673c();
    }
    *local_760 = local_758;
    local_760[3] = local_740;
  }
  if ((local_f0 ^ (ulonglong)auStack_a28) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404c21ca FUN_1404c21ca body=374 status=ok
// SIG undefined FUN_1404c21ca(void)

void FUN_1404c21ca(longlong param_1,int param_2,double *param_3,double *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong lVar14;
  double dVar15;
  
  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x20);
  lVar14 = (longlong)param_2;
  dVar15 = (double)*(float *)(lVar7 + 0x14 + lVar14 * 0x18);
  dVar8 = (double)*(float *)(lVar7 + 0x10 + lVar14 * 0x18);
  dVar9 = (double)*(float *)(lVar7 + 0xc + lVar14 * 0x18);
  fVar1 = *(float *)(lVar7 + 8 + lVar14 * 0x18);
  fVar2 = *(float *)(lVar7 + lVar14 * 0x18);
  fVar3 = *(float *)(lVar7 + 4 + lVar14 * 0x18);
  dVar4 = *(double *)(param_1 + 0x30);
  dVar5 = *(double *)(param_1 + 0x20);
  dVar6 = *(double *)(param_1 + 0x28);
  dVar10 = *(double *)(param_1 + 0x48) * dVar15;
  dVar11 = *(double *)(param_1 + 0x40) * dVar8;
  dVar12 = *(double *)(param_1 + 0x38) * dVar9;
  dVar13 = dVar10 * dVar10 + dVar12 * dVar12 + dVar11 * dVar11;
  if (9.99999993922529e-09 < dVar13) {
    dVar9 = 1.0 / SQRT(dVar13);
    dVar15 = dVar10 * dVar9;
    dVar8 = dVar11 * dVar9;
    dVar9 = dVar12 * dVar9;
  }
  *param_3 = dVar9;
  param_3[1] = dVar8;
  param_3[2] = dVar15;
  *param_4 = dVar5 * (double)fVar2;
  param_4[1] = dVar6 * (double)fVar3;
  param_4[2] = dVar4 * (double)fVar1;
  return;
}



// FUNCTION 1404c2340 FUN_1404c2340 body=374 status=ok
// SIG undefined FUN_1404c2340(void)

void FUN_1404c2340(longlong param_1,double *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x20);
  lVar10 = (longlong)param_3;
  dVar11 = (double)*(float *)(lVar5 + 0x14 + lVar10 * 0x18);
  dVar12 = (double)*(float *)(lVar5 + 0x10 + lVar10 * 0x18);
  dVar13 = (double)*(float *)(lVar5 + 0xc + lVar10 * 0x18);
  fVar1 = *(float *)(lVar5 + 8 + lVar10 * 0x18);
  fVar2 = *(float *)(lVar5 + 4 + lVar10 * 0x18);
  dVar3 = *(double *)(param_1 + 0x30);
  dVar4 = *(double *)(param_1 + 0x28);
  dVar6 = *(double *)(param_1 + 0x48) * dVar11;
  dVar7 = *(double *)(param_1 + 0x40) * dVar12;
  dVar8 = *(double *)(param_1 + 0x38) * dVar13;
  dVar9 = dVar6 * dVar6 + dVar8 * dVar8 + dVar7 * dVar7;
  if (9.99999993922529e-09 < dVar9) {
    dVar13 = 1.0 / SQRT(dVar9);
    dVar11 = dVar6 * dVar13;
    dVar12 = dVar7 * dVar13;
    dVar13 = dVar8 * dVar13;
  }
  *param_2 = *(double *)(param_1 + 0x20) * (double)*(float *)(lVar5 + lVar10 * 0x18);
  param_2[1] = dVar4 * (double)fVar2;
  param_2[2] = dVar3 * (double)fVar1;
  param_2[3] = dVar13;
  param_2[4] = dVar12;
  param_2[5] = dVar11;
  return;
}



// FUNCTION 1404c24b6 FUN_1404c24b6 body=496 status=ok
// SIG undefined FUN_1404c24b6(void)

ulonglong FUN_1404c24b6(longlong param_1,double *param_2,double *param_3)

{
  bool bVar1;
  bool bVar2;
  ulonglong uVar3;
  float *pfVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if ((longlong)*(int *)(param_1 + 0x28) < 1) {
    uVar3 = 0xffffffff;
  }
  else {
    pfVar4 = (float *)(*(longlong *)(param_1 + 0x20) + 0x14);
    uVar10 = 0xffffffff;
    uVar11 = 0x7fefffff;
    uVar3 = 0xffffffff;
    uVar5 = 0;
    do {
      fVar6 = *pfVar4 / (float)param_3[2];
      fVar13 = pfVar4[-2] / (float)*param_3;
      fVar14 = pfVar4[-1] / (float)param_3[1];
      fVar12 = fVar6 * fVar6 + fVar13 * fVar13 + fVar14 * fVar14;
      if (((fVar12 != 1.0) || (fVar8 = fVar13, fVar15 = fVar14, fVar7 = fVar6, NAN(fVar12))) &&
         (fVar8 = (float)DAT_14c846330, fVar15 = DAT_14c846330._4_4_, fVar7 = DAT_14c846338,
         1e-08 <= fVar12)) {
        fVar8 = 1.0 / SQRT(fVar12);
        fVar7 = fVar6 * fVar8;
        fVar15 = fVar14 * fVar8;
        fVar8 = fVar13 * fVar8;
      }
      dVar9 = (double)fVar8 * *param_2 + (double)fVar15 * param_2[1] + (double)fVar7 * param_2[2];
      bVar1 = (double)CONCAT44(uVar11,uVar10) != dVar9;
      bVar2 = dVar9 <= (double)CONCAT44(uVar11,uVar10);
      if ((double)CONCAT44(uVar11,uVar10) <= dVar9) {
        dVar9 = (double)CONCAT44(uVar11,uVar10);
      }
      if (bVar2 && bVar1) {
        uVar3 = uVar5 & 0xffffffff;
      }
      uVar5 = uVar5 + 1;
      pfVar4 = pfVar4 + 6;
      uVar10 = SUB84(dVar9,0);
      uVar11 = (undefined4)((ulonglong)dVar9 >> 0x20);
    } while ((longlong)*(int *)(param_1 + 0x28) != uVar5);
  }
  return uVar3;
}



// FUNCTION 1404c26a6 FUN_1404c26a6 body=986 status=ok
// SIG undefined FUN_1404c26a6(void)

longlong *
FUN_1404c26a6(longlong *param_1,longlong param_2,int param_3,longlong param_4,double *param_5,
             longlong *param_6,longlong *param_7)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  double *pdVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  ulonglong uVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStack_f8 [32];
  double *local_d8;
  double local_d0;
  double local_c0;
  double local_b8;
  double local_b0;
  longlong local_a8;
  longlong lStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar7 = *(longlong **)(*(longlong *)(param_2 + 0x88) + 0x58);
  uVar14 = 0;
  if (plVar7 != (longlong *)0x0) {
    cVar6 = *(char *)(*(longlong *)(param_2 + 0x88) + 0x60);
    if (cVar6 == '\x01') {
      uVar14 = (uint)*(byte *)(*plVar7 + 1 + (longlong)param_3 * 2);
    }
    else if (cVar6 == '\x02') {
      uVar14 = (int)*(short *)(*plVar7 + 2 + (longlong)param_3 * 4);
    }
    else {
      uVar14 = 0;
      if (cVar6 == '\x03') {
        uVar14 = *(uint *)(*plVar7 + 4 + (longlong)param_3 * 8);
      }
    }
  }
  uVar10 = *(uint *)(param_6 + 1);
  if ((int)uVar14 < (int)*(uint *)(param_6 + 1)) {
    uVar10 = uVar14;
  }
  if (0 < (int)uVar10) {
    uVar19 = -(ulonglong)(0.0 <= *(double *)(param_2 + 0x20));
    uVar23 = ~uVar19 & ((&DAT_149931160)[0.0 <= *(double *)(param_2 + 0x28)] ^ 0x8000000000000000) |
             uVar19 & (&DAT_149931160)[0.0 <= *(double *)(param_2 + 0x28)];
    uVar19 = -(ulonglong)(0.0 <= *(double *)(param_2 + 0x30));
    lVar11 = (longlong)param_3;
    lVar15 = 0;
    uVar14 = uVar10;
    do {
      uVar14 = uVar14 - 1;
      uVar16 = (uint)lVar15;
      if ((double)(~uVar19 & (uVar23 ^ 0x8000000000000000) | uVar23 & uVar19) < 0.0) {
        uVar16 = uVar14;
      }
      lVar8 = *(longlong *)(param_2 + 0x88);
      plVar7 = *(longlong **)(lVar8 + 0x58);
      uVar12 = 0xffffffff;
      if (plVar7 != (longlong *)0x0) {
        cVar6 = *(char *)(lVar8 + 0x60);
        if (cVar6 == '\x01') {
          uVar12 = (uint)*(byte *)(plVar7[2] + 1 +
                                  ((ulonglong)*(byte *)(*plVar7 + lVar11 * 2) + lVar15) * 3);
        }
        else if (cVar6 == '\x02') {
          uVar12 = (uint)*(short *)(plVar7[2] + 2 + (*(short *)(*plVar7 + lVar11 * 4) + lVar15) * 6)
          ;
        }
        else if (cVar6 == '\x03') {
          uVar12 = *(uint *)(plVar7[2] + 4 + (*(int *)(*plVar7 + lVar11 * 8) + lVar15) * 0xc);
        }
      }
      lVar8 = *(longlong *)(lVar8 + 0x30);
      lVar18 = (longlong)(int)uVar12;
      fVar1 = *(float *)(lVar8 + 8 + lVar18 * 0xc);
      fVar2 = *(float *)(lVar8 + 4 + lVar18 * 0xc);
      dVar3 = *(double *)(param_2 + 0x30);
      dVar4 = *(double *)(param_2 + 0x28);
      lVar9 = *param_6;
      lVar17 = (longlong)(int)uVar16;
      *(double *)(lVar9 + lVar17 * 0x18) =
           (double)*(float *)(lVar8 + lVar18 * 0xc) * *(double *)(param_2 + 0x20);
      *(double *)(lVar9 + 8 + lVar17 * 0x18) = (double)fVar2 * dVar4;
      *(double *)(lVar9 + 0x10 + lVar17 * 0x18) = (double)fVar1 * dVar3;
      lVar15 = lVar15 + 1;
    } while (uVar14 != 0);
    if (uVar10 == 1) {
      uVar10 = 1;
    }
    else {
      uVar27 = (undefined4)*(undefined8 *)(param_4 + 0x30);
      uVar28 = (undefined4)((ulonglong)*(undefined8 *)(param_4 + 0x30) >> 0x20);
      uVar29 = (undefined4)*(undefined8 *)(param_4 + 0x38);
      uVar30 = (undefined4)((ulonglong)*(undefined8 *)(param_4 + 0x38) >> 0x20);
      pdVar13 = (double *)(param_4 + 0x10);
      uVar19 = 0;
      uVar25 = (int)*(undefined8 *)(param_4 + 0x40);
      uVar26 = (int)((ulonglong)*(undefined8 *)(param_4 + 0x40) >> 0x20);
      do {
        dVar20 = (double)CONCAT44(uVar28,uVar27);
        dVar24 = (double)CONCAT44(uVar30,uVar29);
        dVar3 = pdVar13[-2];
        uVar27 = SUB84(dVar3,0);
        uVar28 = (undefined4)((ulonglong)dVar3 >> 0x20);
        dVar4 = pdVar13[-1];
        uVar29 = SUB84(dVar4,0);
        uVar30 = (undefined4)((ulonglong)dVar4 >> 0x20);
        dVar5 = *pdVar13;
        dVar22 = (double)CONCAT44(uVar26,uVar25) - dVar5;
        dVar24 = dVar24 - dVar4;
        dVar20 = dVar20 - dVar3;
        dVar21 = *param_5 * dVar24 - dVar20 * param_5[1];
        dVar20 = dVar20 * param_5[2] - dVar22 * *param_5;
        dVar22 = param_5[1] * dVar22 - dVar24 * param_5[2];
        if (9.99999993922529e-09 < dVar21 * dVar21 + dVar22 * dVar22 + dVar20 * dVar20) {
          local_d0 = dVar5 * dVar21 + dVar3 * dVar22 + dVar4 * dVar20;
          local_d8 = &local_c0;
          local_c0 = dVar22;
          local_b8 = dVar20;
          local_b0 = dVar21;
          uVar10 = FUN_1449c8de9(*param_6,*param_7,uVar10,(int)param_6[1]);
          local_a8 = *param_6;
          lStack_a0 = param_6[1];
          lVar11 = param_7[1];
          *param_6 = *param_7;
          param_6[1] = lVar11;
          *param_7 = local_a8;
          param_7[1] = lStack_a0;
        }
        if (1 < uVar19) break;
        uVar19 = uVar19 + 1;
        pdVar13 = pdVar13 + 3;
        uVar25 = SUB84(dVar5,0);
        uVar26 = (int)((ulonglong)dVar5 >> 0x20);
      } while (1 < (int)uVar10);
    }
  }
  *param_1 = *param_6;
  *(uint *)(param_1 + 1) = uVar10;
  if ((local_90 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404c2a81 FUN_1404c2a81 body=1074 status=ok
// SIG undefined FUN_1404c2a81(void)

longlong *
FUN_1404c2a81(longlong *param_1,undefined8 *param_2,longlong param_3,int param_4,double *param_5,
             longlong *param_6,longlong *param_7)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  ulonglong uVar21;
  double dVar22;
  undefined1 auStack_108 [32];
  double *local_e8;
  double local_e0;
  longlong *local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  puVar2 = (undefined8 *)*param_6;
  puVar2[2] = param_2[2];
  uVar8 = param_2[1];
  *puVar2 = *param_2;
  puVar2[1] = uVar8;
  lVar3 = *param_6;
  *(undefined8 *)(lVar3 + 0x28) = param_2[5];
  uVar8 = param_2[4];
  *(undefined8 *)(lVar3 + 0x18) = param_2[3];
  *(undefined8 *)(lVar3 + 0x20) = uVar8;
  lVar3 = *param_6;
  *(undefined8 *)(lVar3 + 0x40) = param_2[8];
  uVar8 = param_2[7];
  *(undefined8 *)(lVar3 + 0x30) = param_2[6];
  *(undefined8 *)(lVar3 + 0x38) = uVar8;
  lVar3 = *(longlong *)(param_3 + 0x88);
  plVar4 = *(longlong **)(lVar3 + 0x58);
  iVar10 = 3;
  local_d8 = param_1;
  if (plVar4 != (longlong *)0x0) {
    cVar1 = *(char *)(lVar3 + 0x60);
    if (cVar1 == '\x01') {
      uVar15 = (ulonglong)*(byte *)(*plVar4 + 1 + (longlong)param_4 * 2);
      uVar12 = (uint)*(byte *)(plVar4[2] + -2 +
                              (*(byte *)(*plVar4 + (longlong)param_4 * 2) + uVar15) * 3);
    }
    else if (cVar1 == '\x02') {
      uVar15 = (ulonglong)*(short *)(*plVar4 + 2 + (longlong)param_4 * 4);
      uVar12 = (uint)*(short *)(plVar4[2] + -4 +
                               ((longlong)*(short *)(*plVar4 + (longlong)param_4 * 4) + uVar15) * 6)
      ;
    }
    else {
      if (cVar1 != '\x03') goto LAB_1404c2dab;
      uVar15 = (ulonglong)*(int *)(*plVar4 + 4 + (longlong)param_4 * 8);
      uVar12 = *(uint *)(plVar4[2] + -8 +
                        ((longlong)*(int *)(*plVar4 + (longlong)param_4 * 8) + uVar15) * 0xc);
    }
    if (0 < (int)uVar15) {
      uVar16 = -(ulonglong)(0.0 <= *(double *)(param_3 + 0x20));
      uVar21 = ~uVar16 & ((&DAT_149931160)[0.0 <= *(double *)(param_3 + 0x28)] ^ 0x8000000000000000)
               | uVar16 & (&DAT_149931160)[0.0 <= *(double *)(param_3 + 0x28)];
      uVar16 = -(ulonglong)(0.0 <= *(double *)(param_3 + 0x30));
      dVar22 = (double)(~uVar16 & (uVar21 ^ 0x8000000000000000) | uVar21 & uVar16);
      lVar11 = (longlong)(int)uVar12;
      lVar3 = *(longlong *)(lVar3 + 0x30);
      lVar14 = (longlong)param_4;
      iVar10 = 3;
      lVar13 = 0;
      dVar17 = (double)*(float *)(lVar3 + lVar11 * 0xc) * *(double *)(param_3 + 0x20);
      dVar18 = (double)*(float *)(lVar3 + 8 + lVar11 * 0xc) * *(double *)(param_3 + 0x30);
      dVar19 = *(double *)(param_3 + 0x28) * (double)*(float *)(lVar3 + 4 + lVar11 * 0xc);
      do {
        lVar3 = *(longlong *)(param_3 + 0x88);
        plVar4 = *(longlong **)(lVar3 + 0x58);
        uVar12 = 0xffffffff;
        if (plVar4 != (longlong *)0x0) {
          cVar1 = *(char *)(lVar3 + 0x60);
          if (cVar1 == '\x01') {
            uVar12 = (uint)*(byte *)(plVar4[2] + 1 +
                                    ((ulonglong)*(byte *)(*plVar4 + lVar14 * 2) + lVar13) * 3);
          }
          else if (cVar1 == '\x02') {
            uVar12 = (uint)*(short *)(plVar4[2] + 2 +
                                     (*(short *)(*plVar4 + lVar14 * 4) + lVar13) * 6);
          }
          else if (cVar1 == '\x03') {
            uVar12 = *(uint *)(plVar4[2] + 4 + (*(int *)(*plVar4 + lVar14 * 8) + lVar13) * 0xc);
          }
        }
        lVar3 = *(longlong *)(lVar3 + 0x30);
        lVar11 = (longlong)(int)uVar12;
        dVar5 = (double)*(float *)(lVar3 + 8 + lVar11 * 0xc) * *(double *)(param_3 + 0x30);
        dVar6 = (double)*(float *)(lVar3 + 4 + lVar11 * 0xc) * *(double *)(param_3 + 0x28);
        dVar7 = (double)*(float *)(lVar3 + lVar11 * 0xc) * *(double *)(param_3 + 0x20);
        dVar20 = (param_5[1] * (dVar18 - dVar5) - (dVar19 - dVar6) * param_5[2]) * dVar22;
        dVar18 = ((dVar17 - dVar7) * param_5[2] - (dVar18 - dVar5) * *param_5) * dVar22;
        dVar19 = (*param_5 * (dVar19 - dVar6) - (dVar17 - dVar7) * param_5[1]) * dVar22;
        if (9.99999993922529e-09 < dVar19 * dVar19 + dVar20 * dVar20 + dVar18 * dVar18) {
          local_e0 = dVar5 * dVar19 + dVar7 * dVar20 + dVar6 * dVar18;
          local_e8 = &local_d0;
          local_d0 = dVar20;
          local_c8 = dVar18;
          local_c0 = dVar19;
          iVar10 = FUN_1449c8de9(*param_6,*param_7,iVar10,(int)param_6[1]);
          lVar3 = *param_6;
          lVar11 = param_6[1];
          lVar9 = param_7[1];
          *param_6 = *param_7;
          param_6[1] = lVar9;
          local_b8._0_4_ = (undefined4)lVar3;
          local_b8._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
          uStack_b0._0_4_ = (undefined4)lVar11;
          uStack_b0._4_4_ = (undefined4)((ulonglong)lVar11 >> 0x20);
          *(undefined4 *)param_7 = (undefined4)local_b8;
          *(undefined4 *)((longlong)param_7 + 4) = local_b8._4_4_;
          *(undefined4 *)(param_7 + 1) = (undefined4)uStack_b0;
          *(undefined4 *)((longlong)param_7 + 0xc) = uStack_b0._4_4_;
          local_b8 = lVar3;
          uStack_b0 = lVar11;
        }
        lVar13 = lVar13 + 1;
      } while (((int)lVar13 < (int)uVar15) &&
              (dVar17 = dVar7, dVar18 = dVar5, dVar19 = dVar6, 1 < iVar10));
    }
  }
LAB_1404c2dab:
  *local_d8 = *param_6;
  *(int *)(local_d8 + 1) = iVar10;
  if ((local_a0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return local_d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404c2eb4 FUN_1404c2eb4 body=5483 status=ok
// SIG undefined FUN_1404c2eb4(void)

/* WARNING: Removing unreachable block (ram,0x0001404c4204) */
/* WARNING: Removing unreachable block (ram,0x0001404c3ecb) */
/* WARNING: Removing unreachable block (ram,0x0001404c3971) */

void FUN_1404c2eb4(longlong param_1,double *param_2,longlong param_3,double *param_4,
                  undefined8 param_5,longlong param_6)

{
  float fVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  double *pdVar12;
  double *pdVar13;
  int iVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_3b8 [32];
  int *local_398;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  undefined1 local_368 [16];
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  undefined1 local_338 [16];
  double local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined1 local_2f0 [28];
  int local_2d4;
  int local_2d0;
  undefined1 local_2c9;
  undefined8 local_2c8;
  undefined1 auStack_2c0 [8];
  undefined8 local_2b8;
  int local_2b0 [2];
  double local_2a8 [9];
  double dStack_260;
  undefined4 uStack_258;
  undefined1 auStack_254 [268];
  double local_148 [6];
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  dVar29 = -*param_4;
  dVar16 = -param_4[1];
  dVar18 = param_4[2] * -1.0;
  dVar19 = param_4[3] * 1.0;
  dVar25 = *param_2;
  dVar28 = param_2[1];
  dVar20 = param_2[2];
  dVar24 = param_2[3];
  dVar22 = param_4[1];
  dVar2 = param_4[1];
  local_358 = dVar28 * dVar18 * -1.0 +
              ((dVar25 * dVar19 - *param_4 * dVar24 * 1.0) - dVar20 * dVar22);
  dStack_350 = dVar25 * dVar18 * 1.0 +
               ((dVar28 * dVar19 - *param_4 * dVar20 * -1.0) - dVar24 * dVar2);
  dVar17 = param_2[6] - param_4[6];
  dVar21 = param_2[4] - param_4[4];
  dVar23 = param_2[5] - param_4[5];
  local_348 = dVar24 * dVar18 * 1.0 + dVar22 * dVar25 + (dVar19 * dVar20 - *param_4 * dVar28 * 1.0);
  dStack_340 = dVar20 * dVar18 * -1.0 +
               dVar2 * dVar28 + (dVar19 * dVar24 - *param_4 * dVar25 * -1.0);
  dVar25 = dVar16 * dVar17 - dVar23 * dVar18;
  dVar25 = dVar25 + dVar25;
  dVar28 = dVar29 * dVar23 - dVar21 * dVar16;
  dVar28 = dVar28 + dVar28;
  dVar2 = dVar18 * dVar21 - dVar17 * dVar29;
  dVar2 = dVar2 + dVar2;
  local_328 = (dVar29 * dVar2 - dVar25 * dVar16) + dVar19 * dVar28 + dVar17;
  dVar22 = (dVar18 * dVar25 - dVar28 * dVar29) + dVar19 * dVar2 + dVar23;
  local_338._8_4_ = SUB84(dVar22,0);
  local_338._0_8_ = (dVar16 * dVar28 - dVar2 * dVar18) + dVar19 * dVar25 + dVar21;
  local_338._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  uStack_320 = 0;
  local_318 = 0x3ff0000000000000;
  uStack_310 = 0x3ff0000000000000;
  local_308 = 0x3ff0000000000000;
  uStack_300 = 0;
  local_2b0[0] = 0;
  lVar7 = 0x5c;
  do {
    *(undefined8 *)(auStack_2c0 + lVar7 + 4) = 0x7fefffffffffffff;
    *(undefined4 *)((longlong)local_2b0 + lVar7 + -4) = 0xffffffff;
    *(undefined1 *)((longlong)local_2b0 + lVar7) = 0;
    lVar7 = lVar7 + 0x58;
  } while (lVar7 != 0x1bc);
  cVar3 = *(char *)(param_3 + 0x1c);
  if (param_3 == 0 || cVar3 != '\x01') {
    if (cVar3 == -0x78 && param_3 != 0) {
      fVar1 = *(float *)(param_6 + 300);
      FUN_1404c4420(local_148,param_1,param_3,&local_358);
      if (local_100 <= (double)fVar1) {
        pdVar12 = local_148;
        pdVar13 = local_2a8 + (longlong)local_2b0[0] * 0xb;
        for (lVar7 = 0xb; lVar7 != 0; lVar7 = lVar7 + -1) {
          *pdVar13 = *pdVar12;
          pdVar12 = pdVar12 + 1;
          pdVar13 = pdVar13 + 1;
        }
        local_2b0[0] = local_2b0[0] + 1;
        dVar2 = *(double *)(param_1 + 0x10);
        dVar25 = ABS(*(double *)(param_3 + 0x80) - *(double *)(param_3 + 0x68));
        dVar17 = ABS(*(double *)(param_3 + 0x78) - *(double *)(param_3 + 0x60));
        dVar22 = ABS(*(double *)(param_3 + 0x70) - *(double *)(param_3 + 0x58));
        if (dVar22 <= dVar17) {
          dVar22 = dVar17;
        }
        if (dVar22 <= dVar25) {
          dVar22 = dVar25;
        }
        if (dVar22 < dVar2) {
          dVar25 = *(double *)(param_1 + 0x20);
          dVar28 = *(double *)(param_1 + 0x28);
          dVar22 = dVar28 * local_358 - dVar25 * dStack_350;
          dVar20 = *(double *)(param_1 + 0x30) * dStack_350 - dVar28 * local_348;
          dVar24 = dVar25 * local_348 - local_358 * *(double *)(param_1 + 0x30);
          dVar17 = dStack_340 * 0.0 - dStack_340 * 0.0;
          dVar20 = dVar20 + dVar20;
          dVar24 = dVar24 + dVar24;
          dVar22 = dVar22 + dVar22;
          dVar17 = dVar17 + dVar17;
          local_388 = (dVar22 * dStack_350 - dVar24 * local_348) + dStack_340 * dVar20 + dVar25 +
                      (double)local_338._0_8_;
          dStack_380 = (local_348 * dVar20 - local_358 * dVar22) + dStack_340 * dVar24 + dVar28 +
                       (double)local_338._8_8_;
          local_368._8_4_ = SUB84(dVar17,0);
          local_368._0_8_ =
               dVar22 * dStack_340 + *(double *)(param_1 + 0x30) +
               (dVar24 * local_358 - dVar20 * dStack_350) + local_328;
          local_368._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
          local_2b8 = -local_108;
          local_2c8 = -local_118;
          auStack_2c0 = (undefined1  [8])-dStack_110;
          iVar4 = FUN_1404c24b6(*(undefined8 *)(param_3 + 0x88),&local_2c8,param_3 + 0x20);
          if (iVar4 != -1) {
            FUN_1404c21ca(param_3,iVar4,local_2f0,&local_2c8);
            lVar7 = *(longlong *)(param_3 + 0x88);
            plVar10 = *(longlong **)(lVar7 + 0x58);
            if (plVar10 != (longlong *)0x0) {
              cVar3 = *(char *)(lVar7 + 0x60);
              if (cVar3 == '\x03') {
                uVar11 = *(uint *)(*plVar10 + 4 + (longlong)iVar4 * 8);
              }
              else if (cVar3 == '\x02') {
                uVar11 = (uint)*(short *)(*plVar10 + 2 + (longlong)iVar4 * 4);
              }
              else {
                if (cVar3 != '\x01') goto LAB_1404c34a0;
                uVar11 = (uint)*(byte *)(*plVar10 + 1 + (longlong)iVar4 * 2);
              }
              iVar14 = 1;
              if (1 < (int)uVar11 / 3) {
                iVar14 = (int)uVar11 / 3;
              }
              if (0 < (int)uVar11) {
                local_378 = dStack_380;
                dStack_370 = dStack_380;
                iVar15 = 0;
                do {
                  if (plVar10 == (longlong *)0x0) {
                    iVar6 = -1;
                  }
                  else {
                    local_2d4 = iVar4;
                    local_2d0 = iVar15;
                    iVar6 = FUN_144b030e2(lVar7 + 0x58,&local_2d4,&local_2c9);
                    lVar7 = *(longlong *)(param_3 + 0x88);
                  }
                  lVar7 = *(longlong *)(lVar7 + 0x30);
                  lVar9 = (longlong)iVar6;
                  dVar28 = (double)*(float *)(lVar7 + 8 + lVar9 * 0xc) * *(double *)(param_3 + 0x30)
                  ;
                  dVar29 = (double)*(float *)(lVar7 + 4 + lVar9 * 0xc) * *(double *)(param_3 + 0x28)
                  ;
                  dVar25 = (double)*(float *)(lVar7 + lVar9 * 0xc) * *(double *)(param_3 + 0x20);
                  dVar20 = (double)local_368._0_8_ - dVar28;
                  dVar17 = local_378 - dVar29;
                  dVar24 = local_388 - dVar25;
                  dVar22 = local_108 * dVar20 + local_118 * dVar24 + dStack_110 * dVar17;
                  dVar20 = dVar2 * dVar2 -
                           ((dVar20 * dVar20 + dVar24 * dVar24 + dVar17 * dVar17) - dVar22 * dVar22)
                  ;
                  dVar17 = 1.79769313486232e+308;
                  if (0.0 <= dVar20) {
                    dVar17 = dVar22 - SQRT(dVar20);
                  }
                  if (dVar17 < (double)fVar1) {
                    lVar7 = (longlong)local_2b0[0];
                    local_2b0[0] = local_2b0[0] + 1;
                    dVar18 = (local_118 * dVar17 + dVar25) - (double)local_338._0_8_;
                    dVar19 = (dStack_110 * dVar17 + dVar29) - (double)local_338._8_8_;
                    dVar16 = (local_108 * dVar17 + dVar28) - local_328;
                    dVar21 = -local_358;
                    dVar23 = -dStack_350;
                    dVar26 = local_348 * -1.0;
                    dVar27 = dStack_340 * 1.0;
                    dVar24 = dVar18 * dVar26 - dVar21 * dVar16;
                    dVar22 = dVar19 * dVar21 - dVar18 * dVar23;
                    dVar20 = dVar16 * dVar23 - dVar19 * dVar26;
                    dVar20 = dVar20 + dVar20;
                    dVar24 = dVar24 + dVar24;
                    dVar22 = dVar22 + dVar22;
                    local_2a8[lVar7 * 0xb] =
                         (dVar22 * dVar23 - dVar24 * dVar26) + dVar27 * dVar20 + dVar18;
                    local_2a8[lVar7 * 0xb + 1] =
                         local_358 * dVar22 + dVar26 * dVar20 + dVar27 * dVar24 + dVar19;
                    local_2a8[lVar7 * 0xb + 2] =
                         dVar27 * dVar22 + dVar16 + (dVar24 * dVar21 - dVar20 * dVar23);
                    local_2a8[lVar7 * 0xb + 3] = dVar25;
                    local_2a8[lVar7 * 0xb + 4] = dVar29;
                    local_2a8[lVar7 * 0xb + 5] = dVar28;
                    dVar22 = dStack_110;
                    local_2a8[lVar7 * 0xb + 6] = local_118;
                    local_2a8[lVar7 * 0xb + 7] = dVar22;
                    local_2a8[lVar7 * 0xb + 8] = local_108;
                    local_2a8[lVar7 * 0xb + 9] = dVar17;
                    (&uStack_258)[lVar7 * 0x16] = 0xffffffff;
                    auStack_254[lVar7 * 0x58] = 1;
                    if (local_2b0[0] == 4) break;
                  }
                  iVar15 = iVar15 + iVar14;
                  if ((int)uVar11 <= iVar15) break;
                  lVar7 = *(longlong *)(param_3 + 0x88);
                  plVar10 = *(longlong **)(lVar7 + 0x58);
                } while( true );
              }
            }
          }
        }
      }
    }
    else if ((param_3 == 0) || (cVar3 != 'H')) {
      if ((param_3 != 0) && (cVar3 == '\b')) {
        fVar1 = *(float *)(param_6 + 300);
        FUN_1404c4420(local_148,param_1,param_3,&local_358);
        if (local_100 <= (double)fVar1) {
          pdVar12 = local_148;
          pdVar13 = local_2a8 + (longlong)local_2b0[0] * 0xb;
          for (lVar7 = 0xb; lVar7 != 0; lVar7 = lVar7 + -1) {
            *pdVar13 = *pdVar12;
            pdVar12 = pdVar12 + 1;
            pdVar13 = pdVar13 + 1;
          }
          local_2b0[0] = local_2b0[0] + 1;
          dVar2 = *(double *)(param_1 + 0x10);
          dVar17 = ABS((double)*(float *)(param_3 + 0x54) - (double)*(float *)(param_3 + 0x48));
          dVar25 = ABS((double)*(float *)(param_3 + 0x50) - (double)*(float *)(param_3 + 0x44));
          dVar22 = ABS((double)*(float *)(param_3 + 0x4c) - (double)*(float *)(param_3 + 0x40));
          if (dVar22 <= dVar25) {
            dVar22 = dVar25;
          }
          if (dVar22 <= dVar17) {
            dVar22 = dVar17;
          }
          if (dVar22 < dVar2) {
            dVar25 = *(double *)(param_1 + 0x20);
            dVar28 = *(double *)(param_1 + 0x28);
            dVar22 = dVar28 * local_358 - dVar25 * dStack_350;
            dVar20 = *(double *)(param_1 + 0x30) * dStack_350 - dVar28 * local_348;
            dVar24 = dVar25 * local_348 - local_358 * *(double *)(param_1 + 0x30);
            dVar17 = dStack_340 * 0.0 - dStack_340 * 0.0;
            dVar20 = dVar20 + dVar20;
            dVar24 = dVar24 + dVar24;
            dVar22 = dVar22 + dVar22;
            dVar17 = dVar17 + dVar17;
            local_388 = (dVar22 * dStack_350 - dVar24 * local_348) + dStack_340 * dVar20 + dVar25 +
                        (double)local_338._0_8_;
            dStack_380 = (local_348 * dVar20 - local_358 * dVar22) + dStack_340 * dVar24 + dVar28 +
                         (double)local_338._8_8_;
            local_368._8_4_ = SUB84(dVar17,0);
            local_368._0_8_ =
                 dVar22 * dStack_340 + *(double *)(param_1 + 0x30) +
                 (dVar24 * local_358 - dVar20 * dStack_350) + local_328;
            local_368._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
            local_2b8 = -local_108;
            local_2c8 = -local_118;
            auStack_2c0 = (undefined1  [8])-dStack_110;
            iVar4 = FUN_1449c8d5c(param_3);
            if ((iVar4 != -1) &&
               (plVar10 = *(longlong **)(param_3 + 0x58), plVar10 != (longlong *)0x0)) {
              lVar7 = (longlong)iVar4;
              cVar3 = *(char *)(param_3 + 0x60);
              if (cVar3 == '\x01') {
                uVar11 = (uint)*(byte *)(*plVar10 + 1 + lVar7 * 2);
              }
              else if (cVar3 == '\x02') {
                uVar11 = (uint)*(short *)(*plVar10 + 2 + lVar7 * 4);
              }
              else {
                if (cVar3 != '\x03') goto LAB_1404c34a0;
                uVar11 = *(uint *)(*plVar10 + 4 + lVar7 * 8);
              }
              iVar4 = 1;
              if (1 < (int)uVar11 / 3) {
                iVar4 = (int)uVar11 / 3;
              }
              if (0 < (int)uVar11) {
                local_378 = dStack_380;
                dStack_370 = dStack_380;
                iVar14 = 0;
                do {
                  uVar5 = 0xffffffff;
                  if (plVar10 != (longlong *)0x0) {
                    cVar3 = *(char *)(param_3 + 0x60);
                    if (cVar3 == '\x01') {
                      uVar5 = (uint)*(byte *)(plVar10[2] + 1 +
                                             (ulonglong)
                                             ((uint)*(byte *)(*plVar10 + lVar7 * 2) + iVar14) * 3);
                    }
                    else if (cVar3 == '\x02') {
                      uVar5 = (uint)*(short *)(plVar10[2] + 2 +
                                              ((longlong)iVar14 +
                                              (longlong)*(short *)(*plVar10 + lVar7 * 4)) * 6);
                    }
                    else if (cVar3 == '\x03') {
                      uVar5 = *(uint *)(plVar10[2] + 4 +
                                       ((longlong)iVar14 + (longlong)*(int *)(*plVar10 + lVar7 * 8))
                                       * 0xc);
                    }
                  }
                  lVar9 = *(longlong *)(param_3 + 0x30);
                  lVar8 = (longlong)(int)uVar5;
                  dVar28 = (double)*(float *)(lVar9 + 8 + lVar8 * 0xc);
                  dVar29 = (double)*(float *)(lVar9 + 4 + lVar8 * 0xc);
                  dVar25 = (double)*(float *)(lVar9 + lVar8 * 0xc);
                  dVar20 = (double)local_368._0_8_ - dVar28;
                  dVar17 = dStack_380 - dVar29;
                  dVar24 = local_388 - dVar25;
                  dVar22 = local_108 * dVar20 + local_118 * dVar24 + dStack_110 * dVar17;
                  dVar20 = dVar2 * dVar2 -
                           ((dVar20 * dVar20 + dVar24 * dVar24 + dVar17 * dVar17) - dVar22 * dVar22)
                  ;
                  dVar17 = 1.79769313486232e+308;
                  if (0.0 <= dVar20) {
                    dVar17 = dVar22 - SQRT(dVar20);
                  }
                  if (dVar17 < (double)fVar1) {
                    lVar9 = (longlong)local_2b0[0];
                    local_2b0[0] = local_2b0[0] + 1;
                    dVar18 = (local_118 * dVar17 + dVar25) - (double)local_338._0_8_;
                    dVar19 = (dStack_110 * dVar17 + dVar29) - (double)local_338._8_8_;
                    dVar16 = (local_108 * dVar17 + dVar28) - local_328;
                    dVar21 = -local_358;
                    dVar23 = -dStack_350;
                    dVar26 = local_348 * -1.0;
                    dVar27 = dStack_340 * 1.0;
                    dVar24 = dVar18 * dVar26 - dVar21 * dVar16;
                    dVar22 = dVar19 * dVar21 - dVar18 * dVar23;
                    dVar20 = dVar16 * dVar23 - dVar19 * dVar26;
                    dVar20 = dVar20 + dVar20;
                    dVar24 = dVar24 + dVar24;
                    dVar22 = dVar22 + dVar22;
                    local_2a8[lVar9 * 0xb] =
                         (dVar22 * dVar23 - dVar24 * dVar26) + dVar27 * dVar20 + dVar18;
                    local_2a8[lVar9 * 0xb + 1] =
                         local_358 * dVar22 + dVar26 * dVar20 + dVar27 * dVar24 + dVar19;
                    local_2a8[lVar9 * 0xb + 2] =
                         dVar27 * dVar22 + dVar16 + (dVar24 * dVar21 - dVar20 * dVar23);
                    local_2a8[lVar9 * 0xb + 3] = dVar25;
                    local_2a8[lVar9 * 0xb + 4] = dVar29;
                    local_2a8[lVar9 * 0xb + 5] = dVar28;
                    dVar22 = dStack_110;
                    local_2a8[lVar9 * 0xb + 6] = local_118;
                    local_2a8[lVar9 * 0xb + 7] = dVar22;
                    local_2a8[lVar9 * 0xb + 8] = local_108;
                    local_2a8[lVar9 * 0xb + 9] = dVar17;
                    (&uStack_258)[lVar9 * 0x16] = 0xffffffff;
                    auStack_254[lVar9 * 0x58] = 1;
                    if (local_2b0[0] == 4) break;
                  }
                  iVar14 = iVar14 + iVar4;
                  if ((int)uVar11 <= iVar14) break;
                  plVar10 = *(longlong **)(param_3 + 0x58);
                } while( true );
              }
            }
          }
        }
      }
    }
    else {
      fVar1 = *(float *)(param_6 + 300);
      FUN_1404c4420(local_148,param_1,param_3,&local_358);
      if (local_100 <= (double)fVar1) {
        pdVar12 = local_148;
        pdVar13 = local_2a8 + (longlong)local_2b0[0] * 0xb;
        for (lVar7 = 0xb; lVar7 != 0; lVar7 = lVar7 + -1) {
          *pdVar13 = *pdVar12;
          pdVar12 = pdVar12 + 1;
          pdVar13 = pdVar13 + 1;
        }
        local_2b0[0] = local_2b0[0] + 1;
        lVar7 = *(longlong *)(param_3 + 0x28);
        dVar2 = *(double *)(param_1 + 0x10);
        dVar17 = ABS((double)*(float *)(lVar7 + 0x54) - (double)*(float *)(lVar7 + 0x48));
        dVar25 = ABS((double)*(float *)(lVar7 + 0x50) - (double)*(float *)(lVar7 + 0x44));
        dVar22 = ABS((double)*(float *)(lVar7 + 0x4c) - (double)*(float *)(lVar7 + 0x40));
        if (dVar22 <= dVar25) {
          dVar22 = dVar25;
        }
        if (dVar22 <= dVar17) {
          dVar22 = dVar17;
        }
        if (dVar22 < dVar2) {
          dVar25 = *(double *)(param_1 + 0x20);
          dVar28 = *(double *)(param_1 + 0x28);
          dVar22 = dVar28 * local_358 - dVar25 * dStack_350;
          dVar20 = *(double *)(param_1 + 0x30) * dStack_350 - dVar28 * local_348;
          dVar24 = dVar25 * local_348 - local_358 * *(double *)(param_1 + 0x30);
          dVar17 = dStack_340 * 0.0 - dStack_340 * 0.0;
          dVar20 = dVar20 + dVar20;
          dVar24 = dVar24 + dVar24;
          dVar22 = dVar22 + dVar22;
          dVar17 = dVar17 + dVar17;
          local_388 = (dVar22 * dStack_350 - dVar24 * local_348) + dStack_340 * dVar20 + dVar25 +
                      (double)local_338._0_8_;
          dStack_380 = (local_348 * dVar20 - local_358 * dVar22) + dStack_340 * dVar24 + dVar28 +
                       (double)local_338._8_8_;
          local_368._8_4_ = SUB84(dVar17,0);
          local_368._0_8_ =
               dVar22 * dStack_340 + *(double *)(param_1 + 0x30) +
               (dVar24 * local_358 - dVar20 * dStack_350) + local_328;
          local_368._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
          local_2b8 = -local_108;
          local_2c8 = -local_118;
          auStack_2c0 = (undefined1  [8])-dStack_110;
          iVar4 = FUN_1449c8d5c();
          if (iVar4 != -1) {
            lVar7 = *(longlong *)(param_3 + 0x28);
            plVar10 = *(longlong **)(lVar7 + 0x58);
            if (plVar10 != (longlong *)0x0) {
              lVar9 = (longlong)iVar4;
              cVar3 = *(char *)(lVar7 + 0x60);
              if (cVar3 == '\x03') {
                uVar11 = *(uint *)(*plVar10 + 4 + lVar9 * 8);
              }
              else if (cVar3 == '\x02') {
                uVar11 = (uint)*(short *)(*plVar10 + 2 + lVar9 * 4);
              }
              else {
                if (cVar3 != '\x01') goto LAB_1404c34a0;
                uVar11 = (uint)*(byte *)(*plVar10 + 1 + lVar9 * 2);
              }
              iVar14 = 1;
              if (1 < (int)uVar11 / 3) {
                iVar14 = (int)uVar11 / 3;
              }
              if (0 < (int)uVar11) {
                local_378 = dStack_380;
                dStack_370 = dStack_380;
                iVar15 = 0;
                do {
                  if (plVar10 == (longlong *)0x0) {
                    iVar6 = -1;
                  }
                  else {
                    local_2c8 = (double)CONCAT44(iVar15,iVar4);
                    iVar6 = FUN_144b030e2(lVar7 + 0x58,&local_2c8,local_2f0);
                    lVar7 = *(longlong *)(param_3 + 0x28);
                  }
                  lVar7 = *(longlong *)(lVar7 + 0x30);
                  lVar9 = (longlong)iVar6;
                  dVar28 = (double)*(float *)(lVar7 + 8 + lVar9 * 0xc);
                  dVar29 = (double)*(float *)(lVar7 + 4 + lVar9 * 0xc);
                  dVar25 = (double)*(float *)(lVar7 + lVar9 * 0xc);
                  dVar20 = (double)local_368._0_8_ - dVar28;
                  dVar17 = local_378 - dVar29;
                  dVar24 = local_388 - dVar25;
                  dVar22 = local_108 * dVar20 + local_118 * dVar24 + dStack_110 * dVar17;
                  dVar20 = dVar2 * dVar2 -
                           ((dVar20 * dVar20 + dVar24 * dVar24 + dVar17 * dVar17) - dVar22 * dVar22)
                  ;
                  dVar17 = 1.79769313486232e+308;
                  if (0.0 <= dVar20) {
                    dVar17 = dVar22 - SQRT(dVar20);
                  }
                  if (dVar17 < (double)fVar1) {
                    lVar7 = (longlong)local_2b0[0];
                    local_2b0[0] = local_2b0[0] + 1;
                    dVar18 = (local_118 * dVar17 + dVar25) - (double)local_338._0_8_;
                    dVar19 = (dStack_110 * dVar17 + dVar29) - (double)local_338._8_8_;
                    dVar16 = (local_108 * dVar17 + dVar28) - local_328;
                    dVar21 = -local_358;
                    dVar23 = -dStack_350;
                    dVar26 = local_348 * -1.0;
                    dVar27 = dStack_340 * 1.0;
                    dVar24 = dVar18 * dVar26 - dVar21 * dVar16;
                    dVar22 = dVar19 * dVar21 - dVar18 * dVar23;
                    dVar20 = dVar16 * dVar23 - dVar19 * dVar26;
                    dVar20 = dVar20 + dVar20;
                    dVar24 = dVar24 + dVar24;
                    dVar22 = dVar22 + dVar22;
                    local_2a8[lVar7 * 0xb] =
                         (dVar22 * dVar23 - dVar24 * dVar26) + dVar27 * dVar20 + dVar18;
                    local_2a8[lVar7 * 0xb + 1] =
                         local_358 * dVar22 + dVar26 * dVar20 + dVar27 * dVar24 + dVar19;
                    local_2a8[lVar7 * 0xb + 2] =
                         dVar27 * dVar22 + dVar16 + (dVar24 * dVar21 - dVar20 * dVar23);
                    local_2a8[lVar7 * 0xb + 3] = dVar25;
                    local_2a8[lVar7 * 0xb + 4] = dVar29;
                    local_2a8[lVar7 * 0xb + 5] = dVar28;
                    dVar22 = dStack_110;
                    local_2a8[lVar7 * 0xb + 6] = local_118;
                    local_2a8[lVar7 * 0xb + 7] = dVar22;
                    local_2a8[lVar7 * 0xb + 8] = local_108;
                    local_2a8[lVar7 * 0xb + 9] = dVar17;
                    (&uStack_258)[lVar7 * 0x16] = 0xffffffff;
                    auStack_254[lVar7 * 0x58] = 1;
                    if (local_2b0[0] == 4) break;
                  }
                  iVar15 = iVar15 + iVar14;
                  if ((int)uVar11 <= iVar15) break;
                  lVar7 = *(longlong *)(param_3 + 0x28);
                  plVar10 = *(longlong **)(lVar7 + 0x58);
                } while( true );
              }
            }
          }
        }
      }
    }
  }
  else {
    local_398 = local_2b0;
    FUN_146d0cc50(param_1,param_3,&local_358,(double)*(float *)(param_6 + 300));
  }
LAB_1404c34a0:
  *(undefined4 *)(param_6 + 0x16c) = 0xffffffff;
  if (*(int *)(param_6 + 0x5b4) < 0) {
    *(undefined4 *)(param_6 + 0x5b0) = 0;
    FUN_1404b2356(param_6 + 0x3f8,0);
  }
  else {
    *(undefined4 *)(param_6 + 0x5b0) = 0;
  }
  if (*(int *)(param_6 + 0x634) < 0) {
    *(undefined4 *)(param_6 + 0x630) = 0;
    FUN_146d72a40(param_6 + 0x5b8,0);
  }
  else {
    *(undefined4 *)(param_6 + 0x630) = 0;
  }
  *(undefined4 *)(param_6 + 0x230) = 0;
  *(byte *)(param_6 + 0x374) = *(byte *)(param_6 + 0x374) & 0xcf;
  lVar7 = (longlong)local_2b0[0];
  if (lVar7 != 0) {
    lVar9 = 0;
    do {
      dVar2 = *(double *)((longlong)local_2a8 + lVar9 + 0x48);
      if ((dVar2 != 1.79769313486232e+308) || (NAN(dVar2))) {
        iVar4 = FUN_1404af45e(param_6,(longlong)local_2a8 + lVar9);
        lVar8 = *(longlong *)(param_6 + 0x5a8);
        if (*(longlong *)(param_6 + 0x5a8) == 0) {
          lVar8 = param_6 + 0x3f8;
        }
        fVar1 = INFINITY;
        if ((longlong)*(int *)(param_6 + 0x16c) != -1) {
          fVar1 = *(float *)(lVar8 + 0x24 + (longlong)*(int *)(param_6 + 0x16c) * 0x6c);
        }
        if (*(float *)(lVar8 + 0x24 + (longlong)iVar4 * 0x6c) < fVar1) {
          *(int *)(param_6 + 0x16c) = iVar4;
        }
      }
      lVar9 = lVar9 + 0x58;
    } while (lVar7 * 0x58 - lVar9 != 0);
  }
  if ((local_f0 ^ (ulonglong)auStack_3b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404c4420 FUN_1404c4420 body=111 status=ok
// SIG undefined FUN_1404c4420(void)

longlong FUN_1404c4420(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_3 + 0x1c);
  if (param_3 == 0 || cVar1 != 'H') {
    if ((param_3 == 0) || (cVar1 != -0x78)) {
      if ((param_3 == 0) || (cVar1 != '\b')) {
        *(undefined8 *)(param_1 + 0x48) = 0x7fefffffffffffff;
        *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
        *(undefined1 *)(param_1 + 0x54) = 0;
      }
      else {
        FUN_1404c85c2(param_1);
      }
    }
    else {
      FUN_1404c448f(param_1);
    }
  }
  else {
    FUN_1404c4c4a(param_1);
  }
  return param_1;
}



// FUNCTION 1404c448f FUN_1404c448f body=1978 status=ok
// SIG undefined FUN_1404c448f(void)

double * FUN_1404c448f(double *param_1,longlong param_2,longlong param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_318 [32];
  undefined4 *local_2f8;
  double *local_2f0;
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  undefined8 uStack_2b0;
  longlong local_2a0;
  double local_298;
  double local_290;
  double local_288;
  undefined1 local_280 [16];
  double local_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  double local_258;
  undefined4 local_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  double local_228 [12];
  undefined4 local_1c8 [4];
  double adStack_1b8 [10];
  double local_168 [4];
  double local_148;
  double local_140;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  lVar9 = *(longlong *)(param_3 + 0x88);
  if (0 < *(int *)(lVar9 + 0x28)) {
    dVar2 = *(double *)(param_2 + 0x20);
    dVar4 = *(double *)(param_2 + 0x28);
    dVar5 = *param_4;
    dVar3 = param_4[1];
    dVar14 = param_4[2];
    dVar1 = param_4[3];
    dVar16 = dVar4 * dVar5 - dVar2 * dVar3;
    dVar18 = *(double *)(param_2 + 0x30) * dVar3 - dVar4 * dVar14;
    dVar23 = dVar2 * dVar14 - dVar5 * *(double *)(param_2 + 0x30);
    dVar25 = param_4[3] * 0.0 - param_4[3] * 0.0;
    dVar18 = dVar18 + dVar18;
    dVar23 = dVar23 + dVar23;
    dVar16 = dVar16 + dVar16;
    dVar25 = dVar25 + dVar25;
    dVar24 = (dVar16 * dVar3 - dVar23 * dVar14) + dVar1 * dVar18 + dVar2 + param_4[4];
    dStack_2c0 = (dVar14 * dVar18 - dVar5 * dVar16) + param_4[3] * dVar23 + dVar4 + param_4[5];
    dVar16 = dVar16 * dVar1 + *(double *)(param_2 + 0x30) + (dVar23 * dVar5 - dVar18 * dVar3) +
             param_4[6];
    local_2b8 = *(double *)(param_2 + 0x10);
    uStack_2b0 = 0;
    local_2e8._8_4_ = SUB84(dVar25,0);
    local_2e8._0_8_ = dVar16;
    local_2e8._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
    dVar2 = (double)*(float *)(lVar9 + 0x74) * *(double *)(param_3 + 0x30) - dVar16;
    local_2d8._8_4_ = SUB84(dStack_2c0,0);
    local_2d8._0_8_ = dStack_2c0;
    local_2d8._12_4_ = (int)((ulonglong)dStack_2c0 >> 0x20);
    dVar4 = (double)*(float *)(lVar9 + 0x70) * *(double *)(param_3 + 0x28) - dStack_2c0;
    dVar5 = (double)*(float *)(lVar9 + 0x6c) * *(double *)(param_3 + 0x20) - dVar24;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    local_238 = 0xbff0000000000000;
    uStack_230 = 0xbff0000000000000;
    local_248 = 0xbff0000000000000;
    uStack_240 = 0xbff0000000000000;
    dVar1 = SQRT(dVar2 * dVar2 + dVar5 * dVar5 + dVar4 * dVar4);
    local_24c = 0xffffffff;
    local_2c8 = dVar24;
    local_2a0 = param_3;
    if (0.001 < dVar1) {
      uVar11 = 0;
      dVar3 = 0.0;
      do {
        local_280._8_4_ = SUB84(dVar4,0);
        local_280._0_8_ = -dVar5;
        local_280._12_4_ = (int)((ulonglong)-dVar4 >> 0x20);
        local_2f0 = (double *)&local_24c;
        local_2f8 = (undefined4 *)0x0;
        local_270 = -dVar2;
        FUN_1449c37f8(&local_2a0,&local_268,local_280,0);
        dVar18 = (double)CONCAT44(uStack_25c,uStack_260) - (double)local_2d8._0_8_;
        dVar23 = (double)CONCAT44(uStack_264,local_268) - dVar24;
        dVar14 = (dVar2 * (local_258 - dVar16) + dVar5 * dVar23 + dVar4 * dVar18) / dVar1;
        if (dVar3 <= dVar14) {
          dVar3 = dVar14;
        }
        if (0xf < uVar11 || dVar1 - dVar3 < 0.001) {
          local_140 = -dVar2 / dVar1;
          local_148 = -dVar4 / dVar1;
          local_168[3] = -dVar5 / dVar1;
          goto LAB_1404c49fd;
        }
        uVar11 = uVar11 + 1;
        lVar9 = (longlong)(int)local_108;
        *(int *)((longlong)&local_108 + lVar9 * 4 + 4) = (int)local_108;
        iVar10 = (int)local_108 + 1;
        local_168[lVar9 * 3] = dVar23;
        local_168[lVar9 * 3 + 1] = dVar18;
        local_168[lVar9 * 3 + 2] = local_258 - dVar16;
        local_1c8[lVar9 * 6] = local_268;
        local_1c8[lVar9 * 6 + 1] = uStack_264;
        local_1c8[lVar9 * 6 + 2] = uStack_260;
        local_1c8[lVar9 * 6 + 3] = uStack_25c;
        adStack_1b8[lVar9 * 3] = local_258;
        local_228[lVar9 * 3] = dVar24;
        local_228[lVar9 * 3 + 1] = (double)local_2d8._0_8_;
        local_228[lVar9 * 3 + 2] = dVar16;
        local_108 = CONCAT44(local_108._4_4_,iVar10);
        local_2f0 = local_228;
        local_2f8 = local_1c8;
        FUN_1449162b1(&local_298,local_168,&local_108,&local_248);
        dVar1 = SQRT(local_288 * local_288 + local_298 * local_298 + local_290 * local_290);
        dVar2 = local_288;
        dVar4 = local_290;
        dVar5 = local_298;
      } while (0.001 < dVar1);
      lVar9 = *(longlong *)(param_3 + 0x88);
    }
    dVar16 = local_2c8;
    iVar10 = *(int *)(lVar9 + 0x28);
    if (0 < iVar10) {
      iVar13 = 0;
      uVar8 = local_2d8._0_8_;
      uVar7 = local_2e8._0_8_;
      dVar25 = -1.79769313486232e+308;
      iVar12 = -1;
      do {
        FUN_1404c2340(param_3,local_168,iVar13);
        dVar1 = ((double)uVar7 - local_168[2]) * local_140 +
                (dVar16 - local_168[0]) * local_168[3] + ((double)uVar8 - local_168[1]) * local_148;
        iVar6 = iVar13;
        if (dVar1 <= dVar25) {
          dVar1 = dVar25;
          iVar6 = iVar12;
        }
        iVar13 = iVar13 + 1;
        dVar25 = dVar1;
        iVar12 = iVar6;
      } while (iVar10 != iVar13);
      if (iVar6 != -1) {
        FUN_1404c2340(param_3,local_168,iVar6);
        dVar16 = local_2e8._0_8_;
        dVar25 = local_2e8._8_8_;
        dVar24 = local_2c8;
LAB_1404c49fd:
        dVar16 = dVar16 - dVar1 * local_140;
        local_2e8._8_4_ = SUB84(dVar25,0);
        local_2e8._0_8_ = dVar16;
        local_2e8._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
        local_2d8._0_8_ = (double)local_2d8._0_8_ - dVar1 * local_148;
        dVar5 = -local_2b8;
        dVar3 = local_168[3] * dVar5;
        dVar23 = local_148 * dVar5;
        dVar5 = dVar5 * local_140;
        dVar18 = *param_4;
        dVar20 = param_4[2] * -1.0;
        dVar21 = param_4[3] * 1.0;
        dVar17 = -dVar18;
        dVar19 = -param_4[1];
        dVar22 = dVar3 * dVar20 - dVar17 * dVar5;
        dVar14 = dVar23 * dVar17 - dVar3 * dVar19;
        dVar15 = dVar5 * dVar19 - dVar23 * dVar20;
        dVar15 = dVar15 + dVar15;
        dVar22 = dVar22 + dVar22;
        dVar14 = dVar14 + dVar14;
        dVar25 = *(double *)(param_2 + 0x20);
        dVar2 = *(double *)(param_2 + 0x30);
        dVar4 = *(double *)(param_2 + 0x28);
        *(undefined4 *)(param_1 + 10) = 0xffffffff;
        *(undefined1 *)((longlong)param_1 + 0x54) = 0;
        *param_1 = dVar25 + (dVar14 * dVar19 - dVar22 * dVar20) + dVar21 * dVar15 + dVar3;
        param_1[1] = dVar18 * dVar14 + dVar20 * dVar15 + dVar21 * dVar22 + dVar23 + dVar4;
        param_1[2] = dVar21 * dVar14 + dVar5 + (dVar22 * dVar17 - dVar15 * dVar19) + dVar2;
        param_1[3] = dVar24 - dVar1 * local_168[3];
        param_1[4] = (double)local_2d8._0_8_;
        param_1[5] = dVar16;
        param_1[6] = local_168[3];
        param_1[7] = local_148;
        param_1[8] = local_140;
        param_1[9] = dVar1 - local_2b8;
        goto LAB_1404c4ba3;
      }
    }
  }
  param_1[9] = 1.79769313486232e+308;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
LAB_1404c4ba3:
  if ((local_f0 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404c4c4a FUN_1404c4c4a body=1815 status=ok
// SIG undefined FUN_1404c4c4a(void)

double * FUN_1404c4c4a(double *param_1,longlong param_2,longlong param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_348 [32];
  undefined4 *local_328;
  double *local_320;
  longlong local_310;
  double local_308;
  undefined8 uStack_300;
  double local_2f8;
  double dStack_2f0;
  longlong local_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  undefined1 local_280 [16];
  double local_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  double local_258;
  undefined4 local_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  double local_228 [12];
  undefined4 local_1c8 [4];
  double adStack_1b8 [10];
  double local_168 [12];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  lVar7 = *(longlong *)(param_3 + 0x28);
  if (0 < *(int *)(lVar7 + 0x28)) {
    dVar17 = *(double *)(param_2 + 0x20);
    dVar4 = *(double *)(param_2 + 0x28);
    dVar19 = *param_4;
    dVar2 = param_4[1];
    dVar10 = param_4[2];
    dVar1 = param_4[3];
    dVar13 = dVar4 * dVar19 - dVar17 * dVar2;
    dVar14 = *(double *)(param_2 + 0x30) * dVar2 - dVar4 * dVar10;
    dVar18 = dVar17 * dVar10 - dVar19 * *(double *)(param_2 + 0x30);
    dVar14 = dVar14 + dVar14;
    dVar18 = dVar18 + dVar18;
    dVar13 = dVar13 + dVar13;
    local_2f8 = (dVar13 * dVar2 - dVar18 * dVar10) + dVar1 * dVar14 + dVar17 + param_4[4];
    dVar10 = (dVar10 * dVar14 - dVar19 * dVar13) + param_4[3] * dVar18 + dVar4 + param_4[5];
    dVar1 = dVar13 * dVar1 + *(double *)(param_2 + 0x30) + (dVar18 * dVar19 - dVar14 * dVar2) +
            param_4[6];
    local_308 = *(double *)(param_2 + 0x10);
    uStack_300 = 0;
    dVar19 = (double)*(float *)(lVar7 + 0x74) - dVar1;
    dVar17 = (double)*(float *)(lVar7 + 0x70) - dVar10;
    dVar4 = (double)*(float *)(lVar7 + 0x6c) - local_2f8;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    local_238 = 0xbff0000000000000;
    uStack_230 = 0xbff0000000000000;
    local_248 = 0xbff0000000000000;
    uStack_240 = 0xbff0000000000000;
    dVar13 = SQRT(dVar19 * dVar19 + dVar4 * dVar4 + dVar17 * dVar17);
    local_24c = 0xffffffff;
    local_310 = param_3;
    dStack_2f0 = dVar10;
    local_2e0 = param_3;
    local_2d8 = local_2f8;
    dStack_2d0 = dVar10;
    local_2c8 = dVar1;
    if (0.001 < dVar13) {
      uVar9 = 0;
      dVar2 = 0.0;
      do {
        local_280._8_4_ = SUB84(dVar17,0);
        local_280._0_8_ = -dVar4;
        local_280._12_4_ = (int)((ulonglong)-dVar17 >> 0x20);
        local_328 = (undefined4 *)0x0;
        local_320 = (double *)&local_24c;
        local_270 = -dVar19;
        FUN_1449cbad8(&local_2e0,&local_268,local_280,0);
        dVar14 = (double)CONCAT44(uStack_25c,uStack_260) - dVar10;
        dVar18 = (double)CONCAT44(uStack_264,local_268) - local_2f8;
        dVar20 = (dVar19 * (local_258 - dVar1) + dVar4 * dVar18 + dVar17 * dVar14) / dVar13;
        if (dVar2 <= dVar20) {
          dVar2 = dVar20;
        }
        if (0xf < uVar9 || dVar13 - dVar2 < 0.001) {
          local_2a0 = -dVar19 / dVar13;
          uStack_2a8 = -dVar17 / dVar13;
          local_2b0 = -dVar4 / dVar13;
          dVar17 = local_2f8;
          local_2b8 = dVar13;
          goto LAB_1404c5133;
        }
        uVar9 = uVar9 + 1;
        lVar7 = (longlong)(int)local_108;
        *(int *)((longlong)&local_108 + lVar7 * 4 + 4) = (int)local_108;
        iVar8 = (int)local_108 + 1;
        local_168[lVar7 * 3] = dVar18;
        local_168[lVar7 * 3 + 1] = dVar14;
        local_168[lVar7 * 3 + 2] = local_258 - dVar1;
        local_1c8[lVar7 * 6] = local_268;
        local_1c8[lVar7 * 6 + 1] = uStack_264;
        local_1c8[lVar7 * 6 + 2] = uStack_260;
        local_1c8[lVar7 * 6 + 3] = uStack_25c;
        adStack_1b8[lVar7 * 3] = local_258;
        local_228[lVar7 * 3] = local_2f8;
        local_228[lVar7 * 3 + 1] = dVar10;
        local_228[lVar7 * 3 + 2] = dVar1;
        local_108 = CONCAT44(local_108._4_4_,iVar8);
        local_320 = local_228;
        local_328 = local_1c8;
        FUN_1449162b1(&local_298,local_168,&local_108,&local_248);
        dVar13 = SQRT(local_288 * local_288 + local_298 * local_298 + local_290 * local_290);
        dVar17 = local_290;
        dVar4 = local_298;
        dVar19 = local_288;
      } while (0.001 < dVar13);
    }
    cVar6 = FUN_146d82e34(local_310,&local_2d8,&local_2b0,&local_2b8);
    dVar17 = local_2d8;
    dVar1 = local_2c8;
    dVar10 = dStack_2d0;
    if (cVar6 != '\0') {
LAB_1404c5133:
      dVar2 = -local_308;
      dVar3 = local_2b0 * dVar2;
      dVar14 = uStack_2a8 * dVar2;
      dVar2 = dVar2 * local_2a0;
      dVar5 = *param_4;
      dVar11 = -dVar5;
      dVar12 = -param_4[1];
      dVar15 = param_4[2] * -1.0;
      dVar16 = param_4[3] * 1.0;
      dVar21 = dVar3 * dVar15 - dVar11 * dVar2;
      dVar18 = dVar14 * dVar11 - dVar3 * dVar12;
      dVar20 = dVar2 * dVar12 - dVar14 * dVar15;
      dVar20 = dVar20 + dVar20;
      dVar21 = dVar21 + dVar21;
      dVar18 = dVar18 + dVar18;
      dVar13 = *(double *)(param_2 + 0x20);
      dVar4 = *(double *)(param_2 + 0x30);
      dVar19 = *(double *)(param_2 + 0x28);
      *(undefined4 *)(param_1 + 10) = 0xffffffff;
      *(undefined1 *)((longlong)param_1 + 0x54) = 0;
      *param_1 = dVar13 + (dVar18 * dVar12 - dVar21 * dVar15) + dVar16 * dVar20 + dVar3;
      param_1[1] = dVar5 * dVar18 + dVar15 * dVar20 + dVar16 * dVar21 + dVar14 + dVar19;
      param_1[2] = dVar16 * dVar18 + dVar2 + (dVar21 * dVar11 - dVar20 * dVar12) + dVar4;
      param_1[3] = dVar17 - local_2b8 * local_2b0;
      param_1[4] = dVar10 - local_2b8 * uStack_2a8;
      param_1[5] = dVar1 - local_2b8 * local_2a0;
      *(undefined4 *)(param_1 + 6) = (undefined4)local_2b0;
      *(undefined4 *)((longlong)param_1 + 0x34) = local_2b0._4_4_;
      *(undefined4 *)(param_1 + 7) = (undefined4)uStack_2a8;
      *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_2a8._4_4_;
      param_1[8] = local_2a0;
      param_1[9] = local_2b8 - local_308;
      goto LAB_1404c52bb;
    }
  }
  param_1[9] = 1.79769313486232e+308;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
LAB_1404c52bb:
  if ((local_f0 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1404c5362 FUN_1404c5362 body=212 status=ok
// SIG undefined FUN_1404c5362(void)

void FUN_1404c5362(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [96];
  undefined1 local_98 [88];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(byte *)(param_6 + 0x374) & 4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_138);
  }
  local_110 = 0x3ff0000000000000;
  local_108 = 0;
  uStack_100 = 0;
  FUN_1449437a2(param_4,local_f8,param_2);
  local_118 = &local_110;
  FUN_146d3999c(local_98,param_1,param_3,local_f8);
  FUN_146d0d32b(param_6,local_98);
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404c545a FUN_1404c545a body=4162 status=ok
// SIG undefined FUN_1404c545a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404c545a(longlong param_1,double *param_2,longlong param_3,double *param_4,
                  undefined8 param_5,longlong param_6)

{
  double dVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  double dVar21;
  undefined8 uVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auStack_248 [40];
  double local_220;
  undefined1 local_218 [16];
  double local_200;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  double local_158;
  double dStack_150;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  undefined4 local_e8;
  undefined1 local_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  *(undefined4 *)(param_6 + 0x16c) = 0xffffffff;
  if (*(int *)(param_6 + 0x5b4) < 0) {
    *(undefined4 *)(param_6 + 0x5b0) = 0;
    FUN_1404b2356(param_6 + 0x3f8,0);
  }
  else {
    *(undefined4 *)(param_6 + 0x5b0) = 0;
  }
  if (*(int *)(param_6 + 0x634) < 0) {
    *(undefined4 *)(param_6 + 0x630) = 0;
    FUN_146d72a40(param_6 + 0x5b8,0);
  }
  else {
    *(undefined4 *)(param_6 + 0x630) = 0;
  }
  *(undefined4 *)(param_6 + 0x230) = 0;
  *(byte *)(param_6 + 0x374) = *(byte *)(param_6 + 0x374) & 0xcf;
  dVar33 = *(double *)(param_3 + 0x20);
  dVar35 = -*param_4;
  dVar25 = -param_4[1];
  dVar14 = param_4[2] * -1.0;
  dVar16 = param_4[3] * 1.0;
  dVar34 = *param_2;
  dVar39 = param_2[1];
  dVar28 = param_2[2];
  dVar15 = param_2[3];
  dVar24 = param_4[1];
  dVar32 = param_4[1];
  dVar11 = dVar39 * dVar14 * -1.0 + ((dVar34 * dVar16 - *param_4 * dVar15 * 1.0) - dVar28 * dVar24);
  dVar12 = dVar34 * dVar14 * 1.0 + ((dVar39 * dVar16 - *param_4 * dVar28 * -1.0) - dVar15 * dVar32);
  dVar27 = param_2[6] - param_4[6];
  dVar31 = param_2[4] - param_4[4];
  dVar21 = param_2[5] - param_4[5];
  dVar5 = dVar15 * dVar14 * 1.0 + dVar24 * dVar34 + (dVar16 * dVar28 - *param_4 * dVar39 * 1.0);
  dVar15 = dVar28 * dVar14 * -1.0 + dVar32 * dVar39 + (dVar16 * dVar15 - *param_4 * dVar34 * -1.0);
  dVar32 = dVar25 * dVar27 - dVar21 * dVar14;
  dVar32 = dVar32 + dVar32;
  dVar34 = dVar35 * dVar21 - dVar31 * dVar25;
  dVar34 = dVar34 + dVar34;
  dVar24 = dVar14 * dVar31 - dVar27 * dVar35;
  dVar24 = dVar24 + dVar24;
  dVar39 = (dVar35 * dVar24 - dVar32 * dVar25) + dVar16 * dVar34 + dVar27;
  dStack_150 = (dVar14 * dVar32 - dVar34 * dVar35) + dVar16 * dVar24 + dVar21;
  local_158 = (dVar25 * dVar34 - dVar24 * dVar14) + dVar16 * dVar32 + dVar31;
  dVar32 = *(double *)(param_1 + 0x20);
  dVar31 = *(double *)(param_1 + 0x28);
  dVar24 = dVar31 * dVar11 - dVar32 * dVar12;
  dVar34 = *(double *)(param_1 + 0x30) * dVar12 - dVar31 * dVar5;
  dVar28 = dVar32 * dVar5 - dVar11 * *(double *)(param_1 + 0x30);
  dVar34 = dVar34 + dVar34;
  dVar28 = dVar28 + dVar28;
  dVar24 = dVar24 + dVar24;
  dVar14 = (dVar24 * dVar12 - dVar28 * dVar5) + dVar15 * dVar34 + dVar32 + local_158;
  dVar16 = (dVar5 * dVar34 - dVar11 * dVar24) + dVar15 * dVar28 + dVar31 + dStack_150;
  uVar18 = (undefined4)((ulonglong)dVar16 >> 0x20);
  dVar35 = dVar15 * dVar24 + *(double *)(param_1 + 0x30) + (dVar28 * dVar11 - dVar34 * dVar12) +
           dVar39;
  dVar24 = *(double *)(param_3 + 0x50);
  dVar32 = *(double *)(param_3 + 0x30);
  dVar31 = *(double *)(param_3 + 0x28);
  dVar34 = (*(double *)(param_3 + 0x48) * dVar24 + dVar32) - dVar32;
  dVar28 = (*(double *)(param_3 + 0x40) * dVar24 + dVar31) - dVar31;
  dVar21 = (dVar24 * *(double *)(param_3 + 0x38) + dVar33) - dVar33;
  dVar27 = (dVar35 - dVar32) * dVar34 + (dVar14 - dVar33) * dVar21 + (dVar16 - dVar31) * dVar28;
  dVar24 = 0.0;
  if (0.0 < dVar27) {
    dVar24 = dVar34 * dVar34 + dVar21 * dVar21 + dVar28 * dVar28;
    uVar8 = -(ulonglong)(dVar27 < dVar24);
    dVar24 = (double)(~uVar8 & 0x3ff0000000000000 | (ulonglong)(dVar27 / dVar24) & uVar8);
  }
  dVar32 = dVar32 + dVar34 * dVar24;
  dVar31 = dVar31 + dVar28 * dVar24;
  dVar33 = dVar33 + dVar21 * dVar24;
  dVar27 = dVar35 - dVar32;
  local_1f8._8_4_ = SUB84(dVar16,0);
  local_1f8._0_8_ = dVar16;
  local_1f8._12_4_ = uVar18;
  dVar21 = dVar16 - dVar31;
  local_1e8._8_4_ = SUB84(dVar16,0);
  local_1e8._0_8_ = dVar14;
  local_1e8._12_4_ = uVar18;
  dVar28 = dVar14 - dVar33;
  dVar34 = dVar27 * dVar27 + dVar28 * dVar28 + dVar21 * dVar21;
  if (9.99999993922529e-09 < dVar34) {
    dVar36 = *(double *)(param_1 + 0x10);
    dVar1 = *(double *)(param_3 + 0x10);
    dVar29 = (double)*(float *)(param_6 + 300) + dVar36 + dVar1;
    if (dVar34 < dVar29 * dVar29) {
      dVar34 = SQRT(dVar34);
      dVar27 = dVar27 / dVar34;
      dVar21 = dVar21 / dVar34;
      dVar28 = dVar28 / dVar34;
      dVar29 = (dVar34 - dVar36) - dVar1;
      local_188 = -dVar11;
      local_198 = -dVar12;
      dStack_190 = dVar5 * -1.0;
      dVar34 = dVar15 * 1.0;
      uVar18 = SUB84(dVar34,0);
      uVar19 = (undefined4)((ulonglong)dVar34 >> 0x20);
      local_168._8_4_ = uVar18;
      local_168._0_8_ = dVar34;
      local_168._12_4_ = uVar19;
      local_178._8_4_ = uVar18;
      local_178._0_8_ = local_188;
      local_178._12_4_ = uVar19;
      local_220 = dVar33;
      local_1c8 = dVar35;
      dStack_1c0 = dVar15;
      local_1b8 = dVar39;
      dStack_1b0 = dVar25;
      dStack_180 = local_198;
      if ((dVar29 != 1.79769313486232e+308) || (dVar5 = dStack_190, NAN(dVar29))) {
        uStack_1d0 = 0;
        dVar5 = (dVar14 - dVar36 * dVar28) - local_158;
        dVar16 = (dVar16 - dVar36 * dVar21) - dStack_150;
        dVar39 = (dVar35 - dVar36 * dVar27) - dVar39;
        dVar12 = dVar16 * local_188 - local_198 * dVar5;
        dVar35 = dVar39 * local_198 - dStack_190 * dVar16;
        dVar36 = dVar5 * dStack_190 - dVar39 * local_188;
        dVar35 = dVar35 + dVar35;
        dVar36 = dVar36 + dVar36;
        dVar12 = dVar12 + dVar12;
        dVar30 = (double)local_168._8_8_ * dVar36;
        dVar37 = dVar36 * local_188;
        dVar38 = dVar12 * local_198;
        local_218._8_4_ = uVar18;
        local_218._0_8_ = dStack_190;
        local_218._12_4_ = uVar19;
        dVar14 = dStack_190 * dVar35;
        dVar25 = dVar35 * local_198;
        dVar36 = dVar36 * dStack_190;
        iVar3 = *(int *)(param_6 + 0x5b0);
        *(uint *)(param_6 + 0x5b0) = iVar3 + 1U;
        local_200 = dVar29;
        local_1d8 = dVar24;
        local_1a8 = dVar27;
        dStack_1a0 = dVar15;
        if (*(uint *)(param_6 + 0x5b4) < iVar3 + 1U) {
          FUN_146ce5792(param_6 + 0x3f8,iVar3);
        }
        lVar6 = *(longlong *)(param_6 + 0x5a8);
        if (*(longlong *)(param_6 + 0x5a8) == 0) {
          lVar6 = param_6 + 0x3f8;
        }
        fVar10 = (float)(dVar12 * dVar34 + dVar39 + (dVar37 - dVar25));
        fVar13 = (float)((dVar38 - dVar36) + dVar34 * dVar35 + dVar5);
        lVar7 = (longlong)iVar3 * 0x6c;
        fVar17 = (float)(dVar11 * dVar12 + dVar14 + dVar30 + dVar16);
        fVar20 = (float)(dVar32 + dVar1 * dVar27);
        fVar23 = (float)(dVar31 + dVar1 * dVar21);
        fVar26 = (float)(dVar33 + dVar1 * dVar28);
        *(float *)(lVar6 + lVar7) = fVar13;
        *(float *)(lVar6 + 4 + lVar7) = fVar17;
        *(float *)(lVar6 + 8 + lVar7) = fVar10;
        *(float *)(lVar6 + 0xc + lVar7) = fVar26;
        *(float *)(lVar6 + 0x10 + lVar7) = fVar23;
        *(float *)(lVar6 + 0x14 + lVar7) = fVar20;
        *(float *)(lVar6 + 0x18 + lVar7) = (float)dVar28;
        *(float *)(lVar6 + 0x1c + lVar7) = (float)dVar21;
        *(float *)(lVar6 + 0x20 + lVar7) = (float)dVar27;
        *(float *)(lVar6 + 0x24 + lVar7) = (float)local_200;
        *(undefined4 *)(lVar6 + 0x28 + lVar7) = 0xffffffff;
        *(undefined1 *)(lVar6 + 0x2c + lVar7) = 1;
        *(float *)(lVar6 + 0x3c + lVar7) = fVar13;
        *(float *)(lVar6 + 0x40 + lVar7) = fVar17;
        *(float *)(lVar6 + 0x44 + lVar7) = fVar10;
        *(float *)(lVar6 + 0x48 + lVar7) = fVar26;
        *(float *)(lVar6 + 0x4c + lVar7) = fVar23;
        *(float *)(lVar6 + 0x50 + lVar7) = fVar20;
        *(float *)(lVar6 + 0x54 + lVar7) = fVar13;
        *(float *)(lVar6 + 0x58 + lVar7) = fVar17;
        *(float *)(lVar6 + 0x5c + lVar7) = fVar10;
        *(float *)(lVar6 + 0x60 + lVar7) = fVar26;
        *(float *)(lVar6 + 100 + lVar7) = fVar23;
        *(float *)(lVar6 + 0x68 + lVar7) = fVar20;
        *(undefined8 *)(lVar6 + 0x34 + lVar7) = 0;
        *(undefined1 *)(lVar6 + 0x30 + lVar7) = 0;
        lVar6 = *(longlong *)(param_6 + 0x5a8);
        if (*(longlong *)(param_6 + 0x5a8) == 0) {
          lVar6 = param_6 + 0x3f8;
        }
        if ((longlong)*(int *)(param_6 + 0x16c) == -1) {
          fVar10 = INFINITY;
        }
        else {
          fVar10 = *(float *)(lVar6 + 0x24 + (longlong)*(int *)(param_6 + 0x16c) * 0x6c);
        }
        dVar5 = (double)local_218._0_8_;
        dVar29 = local_200;
        dVar24 = local_1d8;
        if (*(float *)(lVar6 + 0x24 + lVar7) < fVar10) {
          *(int *)(param_6 + 0x16c) = iVar3;
        }
      }
      dVar34 = local_1b8;
      dVar31 = local_1c8;
      dVar33 = *(double *)(param_1 + 0x10);
      dVar32 = *(double *)(param_3 + 0x10);
      if (((((*(double *)(param_3 + 0x50) + dVar32) * (double)_DAT_14c75f02c <= dVar33) &&
           (plVar4 = *(longlong **)(param_6 + 0xe8), plVar4 != (longlong *)0x0)) &&
          (1 < *(byte *)((longlong)plVar4 + 0xc))) &&
         (((cVar2 = *(char *)(*(longlong *)(*plVar4 + 0x2c0) + 0xb + (longlong)(int)plVar4[1] * 0x10
                             ), cVar2 == '\x04' || (cVar2 == '\x01')) &&
          (dVar29 < -(double)_DAT_14c75f034 * dVar32)))) {
        dVar39 = *(double *)(param_3 + 0x38);
        dVar15 = *(double *)(param_3 + 0x40);
        dVar16 = dVar39 * dVar21 - dVar28 * dVar15;
        dVar14 = *(double *)(param_3 + 0x48);
        uVar18 = 0;
        uVar19 = 0;
        dVar28 = dVar28 * dVar14 - dVar27 * dVar39;
        dVar12 = dVar15 * dVar27 - dVar21 * dVar14;
        dVar11 = dVar39 * dVar28 - dVar12 * dVar15;
        dVar12 = dVar14 * dVar12 - dVar16 * dVar39;
        dVar16 = dVar15 * dVar16 - dVar28 * dVar14;
        dVar28 = dVar11 * dVar11 + dVar16 * dVar16 + dVar12 * dVar12;
        if (0.12249999999999998 < dVar28) {
          dVar28 = 1.0 / SQRT(dVar28);
          dVar11 = dVar11 * dVar28;
          dVar12 = dVar12 * dVar28;
          dVar21 = *(double *)(param_3 + 0x50) * 0.5;
          dVar16 = dVar16 * dVar28;
          dVar28 = *(double *)(param_3 + 0x28);
          dVar39 = (local_1c8 - (dVar21 * dVar14 + *(double *)(param_3 + 0x30))) * dVar11 +
                   ((double)local_1e8._0_8_ - (dVar39 * dVar21 + *(double *)(param_3 + 0x20))) *
                   dVar16 + ((double)local_1f8._0_8_ - (dVar15 * dVar21 + dVar28)) * dVar12;
          uVar8 = DAT_149931e80;
          uVar9 = -(ulonglong)(dVar39 < 0.0);
          dVar15 = (double)(~uVar9 & (ulonglong)dVar16 | ((ulonglong)dVar16 ^ uVar8) & uVar9);
          uVar22 = 0;
          if (dVar39 < 0.0) {
            dVar11 = (double)((ulonglong)dVar11 ^ uVar8);
            dVar12 = (double)((ulonglong)dVar12 ^ uVar8);
            uVar18 = DAT_149931e80._8_4_;
            uVar19 = DAT_149931e80._12_4_;
            uVar22 = DAT_149931e80._8_8_;
          }
          local_218._8_4_ = uVar18;
          local_218._0_8_ = dVar12;
          local_218._12_4_ = uVar19;
          if (0.2 < dVar24) {
            dVar16 = *(double *)(param_3 + 0x30) + dVar32 * dVar11;
            local_220 = dVar28 + dVar32 * dVar12;
            dVar32 = *(double *)(param_3 + 0x20) + dVar32 * dVar15;
            dVar14 = local_1c8 - dVar16;
            dVar12 = (double)local_1f8._0_8_ - local_220;
            dVar21 = (double)local_1e8._0_8_ - dVar32;
            dVar39 = SQRT(dVar14 * dVar14 + dVar21 * dVar21 + dVar12 * dVar12);
            dVar27 = dVar39 - dVar33;
            if (dVar27 < (double)*(float *)(param_6 + 300)) {
              local_f8 = dVar14 / dVar39;
              local_100 = dVar12 / dVar39;
              local_108 = dVar21 / dVar39;
              dVar28 = ((double)local_1e8._0_8_ - dVar33 * local_108) - local_158;
              dVar14 = ((double)local_1f8._0_8_ - dVar33 * local_100) - dStack_150;
              dVar33 = (local_1c8 - dVar33 * local_f8) - local_1b8;
              dVar39 = dVar14 * local_188 - local_198 * dVar28;
              dVar12 = dVar33 * dStack_180 - dStack_190 * dVar14;
              dVar21 = dVar28 * dVar5 - dVar33 * (double)local_178._0_8_;
              dVar12 = dVar12 + dVar12;
              dVar21 = dVar21 + dVar21;
              dVar39 = dVar39 + dVar39;
              local_128 = dVar39 * (double)local_168._0_8_ + dVar33 +
                          (dVar21 * local_188 - dVar12 * local_198);
              local_138 = (dVar39 * dStack_180 - dVar21 * dStack_190) +
                          (double)local_168._0_8_ * dVar12 + dVar28;
              dStack_130 = (dVar5 * dVar12 - (double)local_178._0_8_ * dVar39) +
                           (double)local_168._8_8_ * dVar21 + dVar14;
              local_e8 = 0xffffffff;
              local_e4 = 1;
              local_200 = dVar32;
              local_1d8 = dVar11;
              uStack_1d0 = uVar22;
              local_1a8 = dVar16;
              local_140 = dVar27;
              local_120 = dVar32;
              local_118 = local_220;
              local_110 = dVar16;
              local_f0 = dVar27;
              FUN_1404c649e(param_6);
              dVar11 = local_1d8;
              dVar28 = local_220;
            }
          }
          local_220 = dVar28;
          uVar18 = local_218._12_4_;
          if (dVar24 < 0.8) {
            dVar33 = *(double *)(param_3 + 0x10);
            dVar24 = *(double *)(param_3 + 0x50);
            dVar39 = dVar11 * dVar33 +
                     *(double *)(param_3 + 0x48) * dVar24 + *(double *)(param_3 + 0x30);
            dVar32 = local_218._0_8_ * dVar33 +
                     *(double *)(param_3 + 0x40) * dVar24 + *(double *)(param_3 + 0x28);
            dVar16 = dVar15 * dVar33 +
                     dVar24 * *(double *)(param_3 + 0x38) + *(double *)(param_3 + 0x20);
            dVar28 = dVar31 - dVar39;
            dVar15 = (double)local_1f8._0_8_ - dVar32;
            dVar24 = (double)local_1e8._0_8_ - dVar16;
            dVar14 = SQRT(dVar28 * dVar28 + dVar24 * dVar24 + dVar15 * dVar15);
            dVar33 = *(double *)(param_1 + 0x10);
            if (dVar14 - dVar33 < (double)*(float *)(param_6 + 300)) {
              local_f8 = dVar28 / dVar14;
              local_100 = dVar15 / dVar14;
              local_108 = dVar24 / dVar14;
              dVar15 = ((double)local_1e8._0_8_ - dVar33 * local_108) - local_158;
              dVar11 = ((double)local_1f8._0_8_ - dVar33 * local_100) - dStack_150;
              dVar34 = (dVar31 - dVar33 * local_f8) - dVar34;
              dVar24 = dVar11 * local_188 - local_198 * dVar15;
              dVar31 = dVar34 * dStack_180 - dStack_190 * dVar11;
              dVar28 = dVar15 * dVar5 - dVar34 * (double)local_178._0_8_;
              dVar31 = dVar31 + dVar31;
              dVar28 = dVar28 + dVar28;
              local_218._8_4_ = local_218._8_4_;
              local_218._0_8_ = dVar32;
              local_218._12_4_ = uVar18;
              dVar24 = dVar24 + dVar24;
              local_128 = dVar24 * (double)local_168._0_8_ + dVar34 +
                          (dVar28 * local_188 - dVar31 * local_198);
              local_138 = (dVar24 * dStack_180 - dVar28 * dStack_190) +
                          (double)local_168._0_8_ * dVar31 + dVar15;
              dStack_130 = (dVar5 * dVar31 - (double)local_178._0_8_ * dVar24) +
                           (double)local_168._8_8_ * dVar28 + dVar11;
              local_e8 = 0xffffffff;
              local_e4 = 1;
              local_120 = dVar16;
              local_118 = dVar32;
              local_110 = dVar39;
              local_f0 = dVar14 - dVar33;
              FUN_1404c649e(param_6);
            }
          }
        }
      }
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404c649e FUN_1404c649e body=118 status=ok
// SIG undefined FUN_1404c649e(void)

void FUN_1404c649e(longlong param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  
  if ((*(double *)(param_2 + 0x48) != 1.79769313486232e+308) || (NAN(*(double *)(param_2 + 0x48))))
  {
    iVar2 = FUN_1404af45e();
    lVar3 = param_1 + 0x3f8;
    if (*(longlong *)(param_1 + 0x5a8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x5a8);
    }
    if ((longlong)*(int *)(param_1 + 0x16c) == -1) {
      fVar1 = INFINITY;
    }
    else {
      fVar1 = *(float *)(lVar3 + 0x24 + (longlong)*(int *)(param_1 + 0x16c) * 0x6c);
    }
    if (*(float *)(lVar3 + 0x24 + (longlong)iVar2 * 0x6c) < fVar1) {
      *(int *)(param_1 + 0x16c) = iVar2;
    }
  }
  return;
}



// FUNCTION 1404c6514 FUN_1404c6514 body=882 status=ok
// SIG undefined FUN_1404c6514(void)

void FUN_1404c6514(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined4 local_78;
  undefined1 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined4 *)(param_6 + 0x16c) = 0xffffffff;
  if (*(int *)(param_6 + 0x5b4) < 0) {
    *(undefined4 *)(param_6 + 0x5b0) = 0;
    FUN_1404b2356(param_6 + 0x3f8,0);
  }
  else {
    *(undefined4 *)(param_6 + 0x5b0) = 0;
  }
  if (*(int *)(param_6 + 0x634) < 0) {
    *(undefined4 *)(param_6 + 0x630) = 0;
    FUN_146d72a40(param_6 + 0x5b8,0);
  }
  else {
    *(undefined4 *)(param_6 + 0x630) = 0;
  }
  *(undefined4 *)(param_6 + 0x230) = 0;
  *(byte *)(param_6 + 0x374) = *(byte *)(param_6 + 0x374) & 0xcf;
  local_d0 = (double)*(float *)(param_6 + 300);
  local_d8 = param_4;
  FUN_1404c6887(&local_c8,param_1,param_2,param_3);
  if (((local_80 != 1.79769313486232e+308) || (NAN(local_80))) &&
     (local_80 < (double)*(float *)(param_6 + 300))) {
    iVar2 = *(int *)(param_6 + 0x5b0);
    *(uint *)(param_6 + 0x5b0) = iVar2 + 1U;
    if (*(uint *)(param_6 + 0x5b4) < iVar2 + 1U) {
      FUN_146ce5792(param_6 + 0x3f8,iVar2);
    }
    lVar3 = *(longlong *)(param_6 + 0x5a8);
    if (*(longlong *)(param_6 + 0x5a8) == 0) {
      lVar3 = param_6 + 0x3f8;
    }
    lVar4 = (longlong)iVar2 * 0x6c;
    *(float *)(lVar3 + lVar4) = (float)local_c8;
    *(float *)(lVar3 + 4 + lVar4) = (float)local_c0;
    *(float *)(lVar3 + 8 + lVar4) = (float)local_b8;
    *(float *)(lVar3 + 0xc + lVar4) = (float)local_b0;
    *(float *)(lVar3 + 0x10 + lVar4) = (float)local_a8;
    *(float *)(lVar3 + 0x14 + lVar4) = (float)local_a0;
    *(float *)(lVar3 + 0x18 + lVar4) = (float)local_98;
    *(float *)(lVar3 + 0x1c + lVar4) = (float)local_90;
    *(float *)(lVar3 + 0x20 + lVar4) = (float)local_88;
    *(float *)(lVar3 + 0x24 + lVar4) = (float)local_80;
    *(undefined4 *)(lVar3 + 0x28 + lVar4) = local_78;
    *(undefined1 *)(lVar3 + 0x2c + lVar4) = local_74;
    *(float *)(lVar3 + 0x3c + lVar4) = (float)local_c8;
    *(float *)(lVar3 + 0x40 + lVar4) = (float)local_c0;
    *(float *)(lVar3 + 0x44 + lVar4) = (float)local_b8;
    *(float *)(lVar3 + 0x48 + lVar4) = (float)local_b0;
    *(float *)(lVar3 + 0x4c + lVar4) = (float)local_a8;
    *(float *)(lVar3 + 0x50 + lVar4) = (float)local_a0;
    *(float *)(lVar3 + 0x54 + lVar4) = (float)local_c8;
    *(float *)(lVar3 + 0x58 + lVar4) = (float)local_c0;
    *(float *)(lVar3 + 0x5c + lVar4) = (float)local_b8;
    *(float *)(lVar3 + 0x60 + lVar4) = (float)local_b0;
    *(float *)(lVar3 + 100 + lVar4) = (float)local_a8;
    *(float *)(lVar3 + 0x68 + lVar4) = (float)local_a0;
    *(undefined8 *)(lVar3 + 0x34 + lVar4) = 0;
    *(undefined1 *)(lVar3 + 0x30 + lVar4) = 0;
    lVar3 = *(longlong *)(param_6 + 0x5a8);
    if (*(longlong *)(param_6 + 0x5a8) == 0) {
      lVar3 = param_6 + 0x3f8;
    }
    if ((longlong)*(int *)(param_6 + 0x16c) == -1) {
      fVar1 = INFINITY;
    }
    else {
      fVar1 = *(float *)(lVar3 + 0x24 + (longlong)*(int *)(param_6 + 0x16c) * 0x6c);
    }
    if (*(float *)(lVar3 + 0x24 + lVar4) < fVar1) {
      *(int *)(param_6 + 0x16c) = iVar2;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404c6887 FUN_1404c6887 body=1869 status=ok
// SIG undefined FUN_1404c6887(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404c6887(double *param_1,longlong param_2,double *param_3,longlong param_4,double *param_5
                  ,double param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar22;
  double dVar23;
  undefined1 auVar21 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  
  param_1[9] = 1.79769313486232e+308;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  auVar14 = _DAT_149934d80;
  dVar8 = *param_3;
  dVar3 = param_3[1];
  dVar5 = param_3[2];
  auVar32 = *(undefined1 (*) [16])(param_3 + 8);
  dVar28 = param_3[10];
  dVar18 = *(double *)(param_2 + 0x20) * auVar32._0_8_;
  dVar22 = *(double *)(param_2 + 0x28) * auVar32._8_8_;
  dVar15 = *(double *)(param_2 + 0x30) * dVar28;
  dVar17 = param_3[3];
  dVar24 = dVar22 * dVar8 - dVar18 * dVar3;
  dVar25 = dVar15 * dVar3 - dVar22 * dVar5;
  dVar26 = dVar18 * dVar5 - dVar8 * dVar15;
  dVar25 = dVar25 + dVar25;
  dVar26 = dVar26 + dVar26;
  dVar24 = dVar24 + dVar24;
  dVar9 = *param_5;
  dVar4 = param_5[1];
  dVar6 = param_5[2];
  dVar7 = param_5[3];
  dVar10 = *(double *)*(undefined1 (*) [16])(param_5 + 8);
  dVar11 = param_5[9];
  auVar13 = *(undefined1 (*) [16])(param_5 + 8);
  dVar12 = param_5[10];
  dVar19 = *(double *)(param_4 + 0x20) * dVar10;
  dVar23 = *(double *)(param_4 + 0x28) * dVar11;
  dVar16 = *(double *)(param_4 + 0x30) * dVar12;
  dVar27 = dVar23 * dVar9 - dVar19 * dVar4;
  dVar29 = dVar16 * dVar4 - dVar23 * dVar6;
  dVar30 = dVar19 * dVar6 - dVar9 * dVar16;
  dVar29 = dVar29 + dVar29;
  dVar30 = dVar30 + dVar30;
  dVar27 = dVar27 + dVar27;
  dVar20 = param_5[3];
  dVar1 = *(double *)(param_2 + 0x10);
  dVar2 = *(double *)(param_4 + 0x10);
  dVar18 = ((dVar24 * dVar3 - dVar26 * dVar5) + dVar17 * dVar25 + dVar18 + param_3[4]) -
           ((dVar27 * dVar4 - dVar30 * dVar6) + dVar20 * dVar29 + dVar19 + param_5[4]);
  dVar19 = ((dVar5 * dVar25 - dVar8 * dVar24) + param_3[3] * dVar26 + dVar22 + param_3[5]) -
           ((dVar6 * dVar29 - dVar9 * dVar27) + param_5[3] * dVar30 + dVar23 + param_5[5]);
  dVar17 = (dVar24 * dVar17 + dVar15 + (dVar26 * dVar8 - dVar25 * dVar3) + param_3[6]) -
           (dVar27 * dVar20 + dVar16 + (dVar30 * dVar9 - dVar29 * dVar4) + param_5[6]);
  dVar20 = dVar17 * dVar17 + dVar18 * dVar18 + dVar19 * dVar19;
  dVar26 = param_6 + dVar1 + dVar2;
  if (dVar20 < dVar26 * dVar26) {
    dVar26 = *(double *)(param_2 + 0x30);
    dVar30 = *(double *)(param_4 + 0x30);
    dVar20 = SQRT(dVar20);
    if (9.99999993922529e-09 < dVar20) {
      dVar19 = dVar19 / dVar20;
      dVar18 = dVar18 / dVar20;
    }
    else {
      dVar18 = 0.0;
      dVar19 = 0.0;
    }
    dVar22 = (double)(~-(ulonglong)(9.99999993922529e-09 < dVar20) & 0x3ff0000000000000 |
                     (ulonglong)(dVar17 / dVar20) & -(ulonglong)(9.99999993922529e-09 < dVar20));
    dVar16 = dVar1 * dVar22;
    dVar24 = -dVar8;
    dVar3 = -dVar3;
    dVar5 = dVar5 * -1.0;
    dVar15 = param_3[3] * 1.0;
    dVar31 = dVar1 * dVar18;
    dVar29 = dVar31 * dVar5 - dVar24 * dVar16;
    dVar23 = dVar1 * dVar19;
    dVar25 = dVar23 * dVar24 - dVar3 * dVar31;
    dVar27 = dVar16 * dVar3 - dVar5 * dVar23;
    dVar27 = dVar27 + dVar27;
    dVar29 = dVar29 + dVar29;
    dVar25 = dVar25 + dVar25;
    auVar21 = divpd(_DAT_149934d80,auVar32);
    dVar17 = *(double *)(param_2 + 0x28);
    *param_1 = *(double *)(param_2 + 0x20) -
               (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar32._0_8_)) & auVar21._0_8_) *
               ((dVar25 * dVar3 - dVar29 * dVar5) + dVar15 * dVar27 + dVar31);
    param_1[1] = dVar17 - (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar32._8_8_)) &
                                  auVar21._8_8_) *
                          (dVar8 * dVar25 + dVar5 * dVar27 + dVar15 * dVar29 + dVar23);
    param_1[2] = dVar26 - (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar28)) &
                                  (ulonglong)(1.0 / dVar28)) *
                          (dVar15 * dVar25 + dVar16 + (dVar29 * dVar24 - dVar27 * dVar3));
    dVar6 = dVar6 * -1.0;
    dVar7 = dVar7 * 1.0;
    dVar15 = dVar2 * dVar18;
    dVar23 = dVar19 * dVar2;
    dVar24 = dVar2 * dVar22;
    dVar3 = -dVar9;
    dVar4 = -dVar4;
    dVar28 = dVar23 * dVar3 - dVar4 * dVar15;
    dVar25 = dVar24 * dVar4 - dVar6 * dVar23;
    dVar16 = dVar15 * dVar6 - dVar24 * dVar3;
    dVar25 = dVar25 + dVar25;
    dVar16 = dVar16 + dVar16;
    dVar28 = dVar28 + dVar28;
    auVar32 = divpd(auVar14,auVar13);
    dVar5 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar10)) & auVar32._0_8_);
    dVar8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar11)) & auVar32._8_8_);
    dVar26 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar12)) & (ulonglong)(1.0 / dVar12));
    dVar17 = *(double *)(param_4 + 0x28);
    param_1[3] = *(double *)(param_4 + 0x20) +
                 ((dVar28 * dVar4 - dVar16 * dVar6) + dVar7 * dVar25 + dVar15) * dVar5;
    param_1[4] = (dVar9 * dVar28 + dVar6 * dVar25 + dVar7 * dVar16 + dVar23) * dVar8 + dVar17;
    param_1[5] = dVar30 + (dVar28 * dVar7 + dVar24 + (dVar16 * dVar3 - dVar25 * dVar4)) * dVar26;
    dVar17 = dVar19 * dVar3 - dVar4 * dVar18;
    dVar30 = dVar22 * dVar4 - dVar6 * dVar19;
    dVar24 = dVar18 * dVar6 - dVar22 * dVar3;
    dVar30 = dVar30 + dVar30;
    dVar24 = dVar24 + dVar24;
    dVar17 = dVar17 + dVar17;
    param_1[6] = ((dVar17 * dVar4 - dVar24 * dVar6) + dVar7 * dVar30 + dVar18) * dVar5;
    param_1[7] = (dVar9 * dVar17 + dVar6 * dVar30 + dVar7 * dVar24 + dVar19) * dVar8;
    param_1[8] = (dVar17 * dVar7 + dVar22 + (dVar24 * dVar3 - dVar30 * dVar4)) * dVar26;
    param_1[9] = dVar20 - (dVar1 + dVar2);
  }
  return;
}



// FUNCTION 1404c6fd4 FUN_1404c6fd4 body=212 status=ok
// SIG undefined FUN_1404c6fd4(void)

void FUN_1404c6fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [96];
  undefined1 local_98 [88];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(byte *)(param_6 + 0x374) & 4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_138);
  }
  local_110 = 0x3ff0000000000000;
  local_108 = 0;
  uStack_100 = 0;
  FUN_1449437a2(param_4,local_f8,param_2);
  local_118 = &local_110;
  FUN_146d37d90(local_98,param_1,param_3,local_f8);
  FUN_146d0d32b(param_6,local_98);
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404c70cc FUN_1404c70cc body=180 status=ok
// SIG undefined FUN_1404c70cc(void)

void FUN_1404c70cc(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  undefined1 local_190 [8];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 local_180 [2];
  undefined1 local_178 [352];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_180[0] = 0;
  lVar1 = 0x5c;
  do {
    *(undefined8 *)(local_190 + lVar1 + 4) = 0x7fefffffffffffff;
    *(undefined4 *)((longlong)&uStack_184 + lVar1) = 0xffffffff;
    *(undefined1 *)((longlong)local_180 + lVar1) = 0;
    lVar1 = lVar1 + 0x58;
  } while (lVar1 != 0x1bc);
  local_198 = local_180;
  FUN_1404b9207(*param_1,param_2,param_3,param_1[2]);
  local_190 = (undefined1  [8])local_178;
  local_188 = local_180[0];
  FUN_1404af8f0(param_2,param_3);
  if ((local_18 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404c7181 FUN_1404c7181 body=3290 status=ok
// SIG undefined FUN_1404c7181(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404c7181(longlong param_1,double *param_2,longlong param_3,double *param_4,
                  longlong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  char cVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  double *pdVar17;
  double *pdVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  double dVar28;
  double dVar29;
  double dVar31;
  undefined1 auVar30 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_498 [32];
  double *local_478;
  double *local_470;
  double *local_468;
  double *local_460;
  double *local_450;
  double local_448;
  double local_440;
  undefined8 local_438;
  undefined8 local_430;
  undefined4 local_428;
  int local_424;
  uint local_420;
  longlong local_418;
  undefined8 uStack_410;
  double local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  int local_3e8;
  undefined8 local_3e4;
  undefined *local_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  int local_3b8;
  undefined8 local_3b4;
  undefined *local_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  double local_388;
  double dStack_380;
  double local_378;
  double local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  longlong local_350;
  double *local_348;
  double *local_340;
  double *local_338;
  undefined8 *local_330;
  undefined1 local_328 [16];
  double local_318;
  undefined1 local_308 [48];
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
  double local_278;
  undefined8 uStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [8];
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1ec;
  undefined4 local_1e4;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined4 local_194;
  undefined8 local_188;
  undefined4 local_180;
  double local_178;
  double local_170;
  undefined4 local_168;
  undefined1 local_164;
  double local_158 [15];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_498;
  local_368 = 1.0;
  uStack_360 = 0x3ff0000000000000;
  local_358 = 0x3ff0000000000000;
  cVar5 = *(char *)(param_3 + 0x1c);
  if ((param_3 == 0) || (cVar5 != -0x75)) {
    if (cVar5 == 'K' && param_3 != 0) {
      lVar13 = *(longlong *)(param_3 + 0x28);
    }
    else {
      lVar13 = 0;
      if (cVar5 == '\v') {
        lVar13 = param_3;
      }
    }
  }
  else {
    local_358 = *(undefined8 *)(param_3 + 0x30);
    local_368 = *(double *)(param_3 + 0x20);
    uStack_360 = *(undefined8 *)(param_3 + 0x28);
    lVar13 = *(longlong *)(param_3 + 0x88);
  }
  pdVar8 = (double *)(double)*(float *)(param_5 + 300);
  if (DAT_14c75f045 == '\x01') {
    fVar1 = *(float *)(param_5 + 0x130);
    fVar2 = *(float *)(param_5 + 0x134);
    fVar3 = *(float *)(param_5 + 0x138);
    dVar9 = (double)fVar3;
    dStack_380 = (double)fVar2;
    local_388 = (double)fVar1;
    uVar16 = (ulonglong)(DAT_14c75f074 + -1 + (uint)(DAT_14c75f074 == 0)) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_424 = 1 << ((byte)lVar14 & 0x1f);
    local_448 = (double)DAT_14c75f064;
    local_440 = (double)_DAT_14c75f078;
    local_420 = (uint)DAT_14c992e78 * 4 + 0x13;
    local_438 = 0x3eb0c6f7a0b5ed8d;
    local_430 = 0x3f50624dd2f1a9fc;
    local_428 = 1000;
    local_418 = 0;
    uStack_410 = 0;
    local_408 = 0.0;
    uStack_400 = 0;
    local_3f8 = 0;
    uStack_3f0 = 0;
    local_3e4 = 0;
    local_3d8 = &DAT_14c7585e0;
    local_3d0 = 0;
    uStack_3c8 = 0;
    local_3c0 = 0;
    local_3b4 = 0;
    local_3a8 = &DAT_14c7585e0;
    local_390 = 0;
    local_3a0 = 0;
    uStack_398 = 0;
    cVar5 = *(char *)(param_1 + 0x1c);
    local_3e8 = local_424;
    local_3b8 = local_424;
    local_378 = dVar9;
    if ((param_1 == 0) || (cVar5 != '\x01')) {
      if (cVar5 == -0x78 && param_1 != 0) {
        local_460 = &local_448;
        local_470 = &local_388;
        local_478 = &local_368;
        local_468 = pdVar8;
        FUN_146d0b33c(param_1,param_2,lVar13);
      }
      else if (cVar5 == 'H' && param_1 != 0) {
        local_460 = &local_448;
        local_470 = &local_388;
        local_478 = &local_368;
        local_468 = pdVar8;
        FUN_146d0b72b(param_1,param_2,lVar13);
      }
      else if (cVar5 == '\b' && param_1 != 0) {
        local_460 = &local_448;
        local_470 = &local_388;
        local_478 = &local_368;
        local_468 = pdVar8;
        FUN_146d0bb51(param_1,param_2,lVar13);
      }
    }
    else {
      local_350 = param_1;
      local_348 = param_2;
      if (((((fVar1 != 0.0) || (NAN(fVar1))) || (fVar2 != 0.0)) || ((NAN(fVar2) || (fVar3 != 0.0))))
         || (NAN(fVar3))) {
        FUN_1404cdb8a(param_4,local_2a8,param_2);
        local_268 = local_368;
        uStack_260 = uStack_360;
        local_258 = (undefined1  [8])local_358;
        uStack_250 = 0;
        dVar6 = -*param_2;
        dVar20 = -param_2[1];
        dVar4 = param_2[2] * -1.0;
        dVar7 = param_2[3] * 1.0;
        auVar30._8_4_ = SUB84(dVar9,0);
        auVar30._0_8_ = dStack_380;
        auVar30._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        dVar34 = local_388 * dVar4 - dVar6 * dVar9;
        dVar29 = dStack_380 * dVar6 - local_388 * dVar20;
        dVar32 = auVar30._8_8_ * dVar20 - dStack_380 * dVar4;
        dVar32 = dVar32 + dVar32;
        dVar34 = dVar34 + dVar34;
        dVar29 = dVar29 + dVar29;
        local_318 = dVar7 * dVar29 + dVar9 + (dVar34 * dVar6 - dVar32 * dVar20);
        dVar6 = (dVar29 * dVar20 - dVar34 * dVar4) + dVar7 * dVar32 + local_388;
        dVar7 = *param_2 * dVar29 + dVar4 * dVar32 + dVar7 * dVar34 + dStack_380;
        local_328._8_4_ = SUB84(dVar7,0);
        local_328._0_8_ = dVar6;
        local_328._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        dVar20 = -local_318;
        dVar9 = -dVar7;
        dVar4 = -dVar6;
        uVar27 = (undefined4)((ulonglong)dVar4 >> 0x20);
        uVar22 = SUB84(dVar6,0);
        uVar23 = uVar27;
        if (0.0 <= dVar4) {
          uVar22 = 0;
          uVar23 = 0;
        }
        dVar29 = dVar9;
        if (0.0 <= dVar9) {
          dVar29 = 0.0;
        }
        dVar32 = dVar20;
        if (0.0 <= dVar20) {
          dVar32 = 0.0;
        }
        uVar26 = SUB84(dVar6,0);
        if (dVar4 <= 0.0) {
          uVar26 = 0;
          uVar27 = 0;
        }
        uVar24 = SUB84(dVar7,0);
        uVar25 = (int)((ulonglong)dVar9 >> 0x20);
        if (dVar9 <= 0.0) {
          uVar24 = 0;
          uVar25 = 0;
        }
        if (dVar20 <= 0.0) {
          dVar20 = 0.0;
        }
        local_2d8 = ((double)CONCAT44(uVar23,uVar22) + *(double *)(param_1 + 0x20)) - (double)pdVar8
        ;
        local_2d0 = (dVar29 + *(double *)(param_1 + 0x28)) - (double)pdVar8;
        local_2c8 = (dVar32 + *(double *)(param_1 + 0x30)) - (double)pdVar8;
        local_2c0 = (double)CONCAT44(uVar27,uVar26) + *(double *)(param_1 + 0x38) + (double)pdVar8;
        local_2b8 = (double)CONCAT44(uVar25,uVar24) + *(double *)(param_1 + 0x40) + (double)pdVar8;
        local_2b0 = dVar20 + *(double *)(param_1 + 0x48) + (double)pdVar8;
        FUN_1449c5bc8(&local_2d8,local_308,local_2a8);
        local_478 = &local_448;
        FUN_1404c7e5c(lVar13,local_308,local_2a8,&local_2d8);
        local_248 = (double)((ulonglong)local_248._4_4_ << 0x20);
        lVar13 = 0x5c;
        do {
          *(undefined8 *)(local_258 + lVar13 + 4) = 0x7fefffffffffffff;
          *(undefined4 *)((longlong)&uStack_250 + lVar13 + 4) = 0xffffffff;
          *(undefined1 *)((longlong)&local_248 + lVar13) = 0;
          lVar13 = lVar13 + 0x58;
        } while (lVar13 != 0x1bc);
        local_340 = (double *)local_328;
        local_330 = &local_248;
        local_338 = pdVar8;
        FUN_146d3dce6(&local_448);
        local_420 = local_420 & 0xfffffffd;
      }
      else {
        dVar19 = -*param_2;
        dVar21 = -param_2[1];
        dVar6 = param_2[2] * -1.0;
        dVar7 = param_2[3] * 1.0;
        dVar32 = *param_4;
        dVar34 = param_4[1];
        dVar10 = param_4[2];
        dVar11 = param_4[3];
        dVar4 = param_2[1];
        dVar9 = param_2[1];
        dVar20 = dVar32 * dVar6 * 1.0 +
                 ((dVar34 * dVar7 - *param_2 * dVar10 * -1.0) - dVar11 * dVar9);
        local_298 = dVar11 * dVar6 * 1.0 +
                    dVar4 * dVar32 + (dVar7 * dVar10 - *param_2 * dVar34 * 1.0);
        dStack_290 = dVar10 * dVar6 * -1.0 +
                     dVar9 * dVar34 + (dVar7 * dVar11 - *param_2 * dVar32 * -1.0);
        dVar29 = param_4[6] - param_2[6];
        dVar28 = param_4[4] - param_2[4];
        dVar31 = param_4[5] - param_2[5];
        dVar33 = dVar21 * dVar29 - dVar31 * dVar6;
        dVar33 = dVar33 + dVar33;
        dVar35 = dVar19 * dVar31 - dVar28 * dVar21;
        dVar35 = dVar35 + dVar35;
        dVar9 = dVar6 * dVar28 - dVar29 * dVar19;
        dVar9 = dVar9 + dVar9;
        local_278 = (dVar19 * dVar9 - dVar33 * dVar21) + dVar7 * dVar35 + dVar29;
        dVar29 = (dVar6 * dVar33 - dVar35 * dVar19) + dVar7 * dVar9 + dVar31;
        local_2a8._8_4_ = SUB84(dVar20,0);
        local_2a8._0_8_ =
             dVar34 * dVar6 * -1.0 + ((dVar32 * dVar7 - *param_2 * dVar11 * 1.0) - dVar10 * dVar4);
        local_2a8._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
        local_288._8_4_ = SUB84(dVar29,0);
        local_288._0_8_ = (dVar21 * dVar35 - dVar9 * dVar6) + dVar7 * dVar33 + dVar28;
        local_288._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
        uStack_270 = 0;
        local_268 = local_368;
        uStack_260 = uStack_360;
        local_258 = (undefined1  [8])local_358;
        uStack_250 = 0;
        local_2d8 = *(double *)(param_1 + 0x20) - (double)pdVar8;
        local_2d0 = *(double *)(param_1 + 0x28) - (double)pdVar8;
        local_2c8 = *(double *)(param_1 + 0x30) - (double)pdVar8;
        local_2c0 = *(double *)(param_1 + 0x38) + (double)pdVar8;
        local_2b8 = *(double *)(param_1 + 0x40) + (double)pdVar8;
        local_2b0 = *(double *)(param_1 + 0x48) + (double)pdVar8;
        FUN_1449c5bc8(&local_2d8,local_308,local_2a8);
        local_478 = &local_448;
        local_450 = param_2;
        local_340 = pdVar8;
        FUN_1404c7e5c(lVar13,local_308,local_2a8,&local_2d8);
        param_2 = local_450;
        if ((local_420 & 0x10) == 0) {
          if (0 < (int)uStack_410) {
            lVar13 = 0x71;
            uVar16 = 0;
            do {
              FUN_146d3dd4e(&local_350,&local_448,uVar16 & 0xffffffff);
              *(undefined1 *)(local_418 + lVar13) = 0;
              uVar16 = uVar16 + 1;
              lVar13 = lVar13 + 0x78;
              param_2 = local_450;
            } while ((longlong)uVar16 < (longlong)(int)uStack_410);
          }
        }
        else if (0 < (int)uStack_410) {
          uVar16 = 0;
          iVar15 = (int)uStack_410;
          do {
            iVar12 = FUN_1404af102(&local_448,uVar16 & 0xffffffff);
            if (iVar12 == 0) {
              local_248 = (double)((ulonglong)local_248 & 0xffffffff00000000);
              lVar13 = 0x5c;
              do {
                *(undefined8 *)(local_258 + lVar13 + 4) = 0x7fefffffffffffff;
                *(undefined4 *)((longlong)&uStack_250 + lVar13 + 4) = 0xffffffff;
                *(undefined1 *)((longlong)&local_248 + lVar13) = 0;
                lVar13 = lVar13 + 0x58;
              } while (lVar13 != 0x1bc);
              local_478 = (double *)&local_248;
              FUN_1404af629(param_1,&local_448,uVar16 & 0xffffffff,(int)pdVar8);
              local_328._8_4_ = (undefined4)local_248;
              local_328._0_8_ = &uStack_240;
              FUN_1404af8f0(&local_448,uVar16 & 0xffffffff,local_328);
              *(undefined1 *)(local_418 + 0x71 + uVar16 * 0x78) = 0;
              iVar15 = (int)uStack_410;
            }
            uVar16 = uVar16 + 1;
          } while ((longlong)uVar16 < (longlong)iVar15);
          param_2 = local_450;
          if (0 < iVar15) {
            lVar13 = 0x71;
            uVar16 = 0;
            do {
              if ((*(char *)(local_418 + lVar13) == -1) &&
                 (iVar12 = FUN_1404af102(&local_448,uVar16 & 0xffffffff), iVar12 < 3)) {
                FUN_146d3dd4e(&local_350,&local_448,uVar16 & 0xffffffff);
                *(undefined1 *)(local_418 + lVar13) = 1;
                iVar15 = (int)uStack_410;
              }
              uVar16 = uVar16 + 1;
              lVar13 = lVar13 + 0x78;
              param_2 = local_450;
            } while ((longlong)uVar16 < (longlong)iVar15);
          }
        }
      }
      FUN_1404aed08(&local_448,param_2,local_2a8);
    }
    local_248 = local_408;
    uStack_240 = CONCAT44(uStack_240._4_4_,(undefined4)uStack_400);
    FUN_1404af2c6(param_5);
    FUN_1404af016(&local_448);
  }
  else {
    local_178 = (double)_DAT_14c75f048 * (double)pdVar8;
    local_170 = (double)_DAT_14c75f04c;
    local_1f8 = 0;
    local_1f0 = 0;
    local_248 = 0.0;
    uStack_240 = 0;
    local_238 = 0;
    uStack_230 = 0;
    local_228 = 0;
    uStack_220 = 0;
    local_218 = 0;
    uStack_210 = 0;
    local_1ec = 0xffffffff00000080;
    local_1e4 = 0;
    local_1d8 = 0;
    local_1d0 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_19c = 0xffffffff00000080;
    local_194 = 0;
    local_188 = 0;
    local_180 = 0;
    local_168 = 0;
    local_164 = DAT_14c75f046;
    pdVar17 = param_2;
    pdVar18 = local_158;
    for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
      *pdVar18 = *pdVar17;
      pdVar17 = pdVar17 + 1;
      pdVar18 = pdVar18 + 1;
    }
    cVar5 = *(char *)(param_1 + 0x1c);
    if (param_1 == 0 || cVar5 != '\x01') {
      if (cVar5 == -0x78 && param_1 != 0) {
        local_468 = (double *)&local_248;
        local_478 = &local_368;
        local_470 = pdVar8;
        FUN_146d0c0eb(param_1,param_2,lVar13);
      }
      else if (cVar5 == 'H' && param_1 != 0) {
        local_468 = (double *)&local_248;
        local_478 = &local_368;
        local_470 = pdVar8;
        FUN_146d0c263(param_1,param_2,lVar13);
      }
      else if (cVar5 == '\b' && param_1 != 0) {
        local_468 = (double *)&local_248;
        local_478 = &local_368;
        local_470 = pdVar8;
        FUN_146d0c3fe(param_1,param_2,lVar13);
      }
    }
    else {
      local_468 = (double *)&local_248;
      local_478 = &local_368;
      local_470 = pdVar8;
      FUN_146d0bf76(param_1,param_2,lVar13);
    }
    local_448 = local_248;
    local_440 = (double)CONCAT44(local_440._4_4_,(undefined4)uStack_240);
    FUN_1404af2c6(param_5);
    FUN_146d0af8e(&local_248);
  }
  if ((local_e0 ^ (ulonglong)auStack_498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404c7e5c FUN_1404c7e5c body=777 status=ok
// SIG undefined FUN_1404c7e5c(void)

void FUN_1404c7e5c(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_178 [32];
  undefined4 *local_158;
  undefined4 *local_150;
  undefined4 *local_148;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  ulonglong uStack_120;
  double local_118 [6];
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_128 = 0;
  uStack_120 = 0;
  FUN_1404c8166(0,param_2,&local_128);
  dVar2 = *(double *)(param_3 + 0x40);
  dVar3 = *(double *)(param_3 + 0x48);
  dVar4 = *(double *)(param_3 + 0x50);
  iVar7 = *(int *)(param_5 + 0x20);
  if ((int)uStack_120 * 4 < *(int *)(param_5 + 0x20)) {
    iVar7 = (int)uStack_120 * 4;
  }
  FUN_1404b032a(param_5,uStack_120 & 0xffffffff,iVar7);
  if (0 < (int)uStack_120) {
    lVar11 = 0;
    do {
      uVar6 = *(undefined4 *)(local_128 + lVar11 * 4);
      local_148 = &local_134;
      local_150 = &local_130;
      local_158 = &local_12c;
      FUN_1404c81ee(param_1,uVar6,param_3,local_118 + 6);
      if (dVar2 * dVar3 * dVar4 < 0.0) {
        dVar5 = local_a8;
        dVar8 = local_b8;
        dVar9 = dStack_b0;
        local_a8 = local_c0;
        local_b8 = local_d0;
        dStack_b0 = dStack_c8;
        uVar14 = local_130;
        local_130 = local_134;
        local_134 = uVar14;
        local_d0 = dVar8;
        dStack_c8 = dVar9;
        local_c0 = dVar5;
      }
      local_118[2] = local_d8;
      if (local_c0 <= local_d8) {
        local_118[2] = local_c0;
      }
      local_118[1] = dStack_e0;
      if (dStack_c8 <= dStack_e0) {
        local_118[1] = dStack_c8;
      }
      local_118[0] = local_e8;
      if (local_d0 <= local_e8) {
        local_118[0] = local_d0;
      }
      uVar14 = SUB84(local_d8,0);
      uVar15 = (undefined4)((ulonglong)local_d8 >> 0x20);
      if (local_d8 <= local_c0) {
        uVar14 = SUB84(local_c0,0);
        uVar15 = (undefined4)((ulonglong)local_c0 >> 0x20);
      }
      uVar12 = SUB84(dStack_e0,0);
      uVar13 = (undefined4)((ulonglong)dStack_e0 >> 0x20);
      if (dStack_e0 <= dStack_c8) {
        uVar12 = SUB84(dStack_c8,0);
        uVar13 = (undefined4)((ulonglong)dStack_c8 >> 0x20);
      }
      local_118[3] = local_e8;
      if (local_e8 <= local_d0) {
        local_118[3] = local_d0;
      }
      if (local_a8 <= local_118[2]) {
        local_118[2] = local_a8;
      }
      if (dStack_b0 <= local_118[1]) {
        local_118[1] = dStack_b0;
      }
      if (local_b8 <= local_118[0]) {
        local_118[0] = local_b8;
      }
      if ((double)CONCAT44(uVar15,uVar14) <= local_a8) {
        uVar14 = SUB84(local_a8,0);
        uVar15 = (undefined4)((ulonglong)local_a8 >> 0x20);
      }
      if ((double)CONCAT44(uVar13,uVar12) <= dStack_b0) {
        uVar12 = SUB84(dStack_b0,0);
        uVar13 = (int)((ulonglong)dStack_b0 >> 0x20);
      }
      if (local_118[3] <= local_b8) {
        local_118[3] = local_b8;
      }
      local_118[4] = (double)CONCAT44(uVar13,uVar12);
      local_118[5] = (double)CONCAT44(uVar15,uVar14);
      lVar10 = 0;
      do {
        pdVar1 = (double *)(param_4 + 0x18 + lVar10 * 8);
        if (*pdVar1 <= local_118[lVar10] && local_118[lVar10] != *pdVar1) goto LAB_1404c8094;
        dVar5 = *(double *)(param_4 + lVar10 * 8);
        if (local_118[lVar10 + 3] <= dVar5 && dVar5 != local_118[lVar10 + 3]) goto LAB_1404c8094;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 3);
      local_150 = (undefined4 *)CONCAT44(local_150._4_4_,local_134);
      local_158 = (undefined4 *)CONCAT44(local_158._4_4_,local_130);
      FUN_1404b05c8(param_5,local_118 + 6,uVar6,local_12c);
LAB_1404c8094:
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)uStack_120);
  }
  FUN_1404b066a(param_5);
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404c8166 FUN_1404c8166 body=135 status=ok
// SIG undefined FUN_1404c8166(void)

void FUN_1404c8166(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140d8788e(param_1 + 0xe0,&local_28,param_2);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404c81ee FUN_1404c81ee body=980 status=ok
// SIG undefined FUN_1404c81ee(void)

void FUN_1404c81ee(longlong param_1,undefined8 param_2,double *param_3,undefined1 (*param_4) [16],
                  uint *param_5,uint *param_6,uint *param_7)

{
  double dVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146d3bc8e(param_3,param_2,param_1 + 0x20,param_1 + 0x60,param_4,param_4[1] + 8,param_4 + 3,
                  param_5,param_6,param_7);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x48);
    lVar6 = *(longlong *)(param_1 + 0x70);
    lVar12 = (longlong)(int)param_2;
    uVar2 = *(ushort *)(lVar6 + lVar12 * 6);
    uVar13 = (ulonglong)uVar2;
    uVar3 = *(ushort *)(lVar6 + 2 + lVar12 * 6);
    uVar15 = (ulonglong)uVar3;
    uVar4 = *(ushort *)(lVar6 + 4 + lVar12 * 6);
    uVar14 = (ulonglong)uVar4;
    dVar17 = (double)*(float *)(lVar5 + uVar13 * 0xc) * param_3[8];
    dVar18 = (double)*(float *)(lVar5 + 4 + uVar13 * 0xc) * param_3[9];
    dVar16 = (double)*(float *)(lVar5 + 8 + uVar13 * 0xc) * param_3[10];
    dVar23 = *param_3;
    dVar10 = param_3[1];
    dVar11 = param_3[2];
    dVar1 = param_3[3];
    dVar19 = dVar18 * dVar23 - dVar17 * dVar10;
    dVar21 = dVar16 * dVar10 - dVar18 * dVar11;
    dVar22 = dVar17 * dVar11 - dVar23 * dVar16;
    dVar21 = dVar21 + dVar21;
    dVar22 = dVar22 + dVar22;
    dVar19 = dVar19 + dVar19;
    dVar20 = (dVar11 * dVar21 - dVar23 * dVar19) + param_3[3] * dVar22 + dVar18 + param_3[5];
    dVar18 = param_3[6];
    auVar8._8_4_ = SUB84(dVar20,0);
    auVar8._0_8_ = (dVar19 * dVar10 - dVar22 * dVar11) + dVar1 * dVar21 + dVar17 + param_3[4];
    auVar8._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
    *param_4 = auVar8;
    *(double *)param_4[1] = dVar19 * dVar1 + dVar16 + (dVar22 * dVar23 - dVar21 * dVar10) + dVar18;
    lVar5 = *(longlong *)(param_1 + 0x48);
    dVar17 = (double)*(float *)(lVar5 + uVar15 * 0xc) * param_3[8];
    dVar18 = (double)*(float *)(lVar5 + 4 + uVar15 * 0xc) * param_3[9];
    dVar16 = (double)*(float *)(lVar5 + 8 + uVar15 * 0xc) * param_3[10];
    dVar23 = *param_3;
    dVar10 = param_3[1];
    dVar11 = param_3[2];
    dVar1 = param_3[3];
    dVar19 = dVar18 * dVar23 - dVar17 * dVar10;
    dVar21 = dVar16 * dVar10 - dVar18 * dVar11;
    dVar22 = dVar17 * dVar11 - dVar23 * dVar16;
    dVar21 = dVar21 + dVar21;
    dVar22 = dVar22 + dVar22;
    dVar19 = dVar19 + dVar19;
    dVar20 = (dVar11 * dVar21 - dVar23 * dVar19) + param_3[3] * dVar22 + dVar18 + param_3[5];
    dVar18 = param_3[6];
    auVar9._8_4_ = SUB84(dVar20,0);
    auVar9._0_8_ = (dVar19 * dVar10 - dVar22 * dVar11) + dVar1 * dVar21 + dVar17 + param_3[4];
    auVar9._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
    *(undefined1 (*) [16])(param_4[1] + 8) = auVar9;
    *(double *)(param_4[2] + 8) =
         dVar19 * dVar1 + dVar16 + (dVar22 * dVar23 - dVar21 * dVar10) + dVar18;
    lVar5 = *(longlong *)(param_1 + 0x48);
    dVar19 = (double)*(float *)(lVar5 + uVar14 * 0xc) * param_3[8];
    dVar18 = (double)*(float *)(lVar5 + 4 + uVar14 * 0xc) * param_3[9];
    dVar17 = (double)*(float *)(lVar5 + 8 + uVar14 * 0xc) * param_3[10];
    dVar10 = *param_3;
    dVar11 = param_3[1];
    dVar16 = param_3[2];
    dVar1 = param_3[3];
    dVar20 = dVar18 * dVar10 - dVar19 * dVar11;
    dVar21 = dVar17 * dVar11 - dVar18 * dVar16;
    dVar23 = dVar19 * dVar16 - dVar10 * dVar17;
    dVar21 = dVar21 + dVar21;
    dVar23 = dVar23 + dVar23;
    dVar20 = dVar20 + dVar20;
    dVar22 = (dVar16 * dVar21 - dVar10 * dVar20) + param_3[3] * dVar23 + dVar18 + param_3[5];
    dVar18 = param_3[6];
    auVar7._8_4_ = SUB84(dVar22,0);
    auVar7._0_8_ = (dVar20 * dVar11 - dVar23 * dVar16) + dVar1 * dVar21 + dVar19 + param_3[4];
    auVar7._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    param_4[3] = auVar7;
    *(double *)param_4[4] = dVar20 * dVar1 + dVar17 + (dVar23 * dVar10 - dVar21 * dVar11) + dVar18;
    *param_5 = (uint)uVar2;
    *param_6 = (uint)uVar3;
    *param_7 = (uint)uVar4;
  }
  return;
}



// FUNCTION 1404c85c2 FUN_1404c85c2 body=1848 status=ok
// SIG undefined FUN_1404c85c2(void)

double * FUN_1404c85c2(double *param_1,longlong param_2,longlong param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_348 [32];
  undefined4 *local_328;
  double *local_320;
  longlong local_310;
  double local_308;
  undefined8 uStack_300;
  double local_2f8;
  double dStack_2f0;
  longlong local_2e0;
  undefined1 local_2d8 [16];
  double local_2c8;
  double local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  undefined1 local_280 [16];
  double local_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  double local_258;
  undefined4 local_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  double local_228 [12];
  undefined4 local_1c8 [4];
  double adStack_1b8 [10];
  double local_168 [12];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  if (0 < *(int *)(param_3 + 0x28)) {
    dVar18 = *(double *)(param_2 + 0x20);
    dVar11 = *(double *)(param_2 + 0x28);
    dVar4 = *param_4;
    dVar5 = param_4[1];
    dVar20 = param_4[2];
    dVar1 = param_4[3];
    dVar14 = dVar11 * dVar4 - dVar18 * dVar5;
    dVar15 = *(double *)(param_2 + 0x30) * dVar5 - dVar11 * dVar20;
    dVar19 = dVar18 * dVar20 - dVar4 * *(double *)(param_2 + 0x30);
    dVar15 = dVar15 + dVar15;
    dVar19 = dVar19 + dVar19;
    dVar14 = dVar14 + dVar14;
    dVar18 = (dVar14 * dVar5 - dVar19 * dVar20) + dVar1 * dVar15 + dVar18 + param_4[4];
    dVar11 = (dVar20 * dVar15 - dVar4 * dVar14) + param_4[3] * dVar19 + dVar11 + param_4[5];
    dVar1 = dVar14 * dVar1 + *(double *)(param_2 + 0x30) + (dVar19 * dVar4 - dVar15 * dVar5) +
            param_4[6];
    local_2d8._8_4_ = SUB84(dVar11,0);
    local_2d8._0_8_ = dVar18;
    local_2d8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    local_308 = *(double *)(param_2 + 0x10);
    uStack_300 = 0;
    dVar20 = (double)*(float *)(param_3 + 0x74) - dVar1;
    dVar4 = (double)*(float *)(param_3 + 0x70) - dVar11;
    dVar5 = (double)*(float *)(param_3 + 0x6c) - dVar18;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    local_238 = 0xbff0000000000000;
    uStack_230 = 0xbff0000000000000;
    local_248 = 0xbff0000000000000;
    uStack_240 = 0xbff0000000000000;
    dVar14 = SQRT(dVar20 * dVar20 + dVar5 * dVar5 + dVar4 * dVar4);
    local_24c = 0xffffffff;
    local_310 = param_2;
    local_2e0 = param_3;
    local_2c8 = dVar1;
    if (0.001 < dVar14) {
      uVar10 = 0;
      dVar15 = 0.0;
      local_2f8 = dVar11;
      dStack_2f0 = dVar11;
      do {
        local_280._8_4_ = SUB84(dVar4,0);
        local_280._0_8_ = -dVar5;
        local_280._12_4_ = (int)((ulonglong)-dVar4 >> 0x20);
        local_328 = (undefined4 *)0x0;
        local_320 = (double *)&local_24c;
        local_270 = -dVar20;
        FUN_1449cbc5a(&local_2e0,&local_268,local_280,0);
        dVar11 = (double)CONCAT44(uStack_25c,uStack_260) - local_2f8;
        dVar19 = (double)CONCAT44(uStack_264,local_268) - dVar18;
        dVar21 = (dVar20 * (local_258 - dVar1) + dVar5 * dVar19 + dVar4 * dVar11) / dVar14;
        if (dVar15 <= dVar21) {
          dVar15 = dVar21;
        }
        if (0xf < uVar10 || dVar14 - dVar15 < 0.001) {
          local_2a0 = -dVar20 / dVar14;
          uStack_2a8 = -dVar4 / dVar14;
          local_2b0 = -dVar5 / dVar14;
          dVar11 = local_2f8;
          goto LAB_1404c8ac3;
        }
        uVar10 = uVar10 + 1;
        lVar8 = (longlong)(int)local_108;
        *(int *)((longlong)&local_108 + lVar8 * 4 + 4) = (int)local_108;
        iVar9 = (int)local_108 + 1;
        local_168[lVar8 * 3] = dVar19;
        local_168[lVar8 * 3 + 1] = dVar11;
        local_168[lVar8 * 3 + 2] = local_258 - dVar1;
        local_1c8[lVar8 * 6] = local_268;
        local_1c8[lVar8 * 6 + 1] = uStack_264;
        local_1c8[lVar8 * 6 + 2] = uStack_260;
        local_1c8[lVar8 * 6 + 3] = uStack_25c;
        adStack_1b8[lVar8 * 3] = local_258;
        local_228[lVar8 * 3] = dVar18;
        local_228[lVar8 * 3 + 1] = local_2f8;
        local_228[lVar8 * 3 + 2] = dVar1;
        local_108 = CONCAT44(local_108._4_4_,iVar9);
        local_320 = local_228;
        local_328 = local_1c8;
        FUN_1449162b1(&local_298,local_168,&local_108,&local_248);
        dVar14 = SQRT(local_288 * local_288 + local_298 * local_298 + local_290 * local_290);
        dVar4 = local_290;
        dVar5 = local_298;
        dVar20 = local_288;
      } while (0.001 < dVar14);
    }
    cVar7 = FUN_145718b80(param_3,local_2d8,&local_2b0,&local_2b8);
    if (cVar7 != '\0') {
      dVar11 = (double)local_2d8._8_8_;
      dVar18 = (double)local_2d8._0_8_;
      dVar1 = local_2c8;
      dVar14 = local_2b8;
LAB_1404c8ac3:
      dVar15 = -local_308;
      dVar3 = local_2b0 * dVar15;
      dVar19 = uStack_2a8 * dVar15;
      dVar15 = dVar15 * local_2a0;
      dVar6 = *param_4;
      dVar12 = -dVar6;
      dVar13 = -param_4[1];
      dVar16 = param_4[2] * -1.0;
      dVar17 = param_4[3] * 1.0;
      dVar22 = dVar3 * dVar16 - dVar12 * dVar15;
      dVar21 = dVar19 * dVar12 - dVar3 * dVar13;
      dVar2 = dVar15 * dVar13 - dVar19 * dVar16;
      dVar2 = dVar2 + dVar2;
      dVar22 = dVar22 + dVar22;
      dVar21 = dVar21 + dVar21;
      dVar4 = *(double *)(local_310 + 0x20);
      dVar5 = *(double *)(local_310 + 0x30);
      dVar20 = *(double *)(local_310 + 0x28);
      *(undefined4 *)(param_1 + 10) = 0xffffffff;
      *(undefined1 *)((longlong)param_1 + 0x54) = 0;
      *param_1 = dVar4 + (dVar21 * dVar13 - dVar22 * dVar16) + dVar17 * dVar2 + dVar3;
      param_1[1] = dVar6 * dVar21 + dVar16 * dVar2 + dVar17 * dVar22 + dVar19 + dVar20;
      param_1[2] = dVar17 * dVar21 + dVar15 + (dVar22 * dVar12 - dVar2 * dVar13) + dVar5;
      param_1[3] = dVar18 - dVar14 * local_2b0;
      param_1[4] = dVar11 - dVar14 * uStack_2a8;
      param_1[5] = dVar1 - dVar14 * local_2a0;
      *(undefined4 *)(param_1 + 6) = (undefined4)local_2b0;
      *(undefined4 *)((longlong)param_1 + 0x34) = local_2b0._4_4_;
      *(undefined4 *)(param_1 + 7) = (undefined4)uStack_2a8;
      *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_2a8._4_4_;
      param_1[8] = local_2a0;
      param_1[9] = dVar14 - local_308;
      goto LAB_1404c8c54;
    }
  }
  param_1[9] = 1.79769313486232e+308;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
LAB_1404c8c54:
  if ((local_f0 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404c8cfb FUN_1404c8cfb body=7503 status=ok
// SIG undefined FUN_1404c8cfb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404c8cfb(longlong param_1,double *param_2,double param_3,int *param_4)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  undefined8 uVar6;
  bool bVar7;
  DWORD DVar8;
  int iVar9;
  int iVar10;
  DWORD dwTlsIndex;
  DWORD DVar11;
  uint uVar12;
  LPVOID lpTlsValue;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  longlong lVar16;
  double *pdVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  undefined1 uVar23;
  bool bVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  double dVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined1 auStack_a38 [32];
  double *local_a18;
  double **local_a10;
  undefined1 **local_a08;
  double local_9f8;
  double local_9f0;
  double local_9e8;
  double local_9e0;
  double local_9d8;
  ulonglong uStack_9d0;
  int *local_9c0;
  double local_9b8;
  double local_9b0;
  double local_9a8;
  double local_9a0;
  double local_998;
  undefined8 uStack_990;
  undefined1 local_988 [16];
  longlong local_978;
  int local_96c;
  undefined1 local_968 [16];
  undefined1 local_958 [16];
  undefined1 local_948 [16];
  double local_938;
  ulonglong uStack_930;
  double local_928;
  ulonglong uStack_920;
  double local_918;
  undefined8 uStack_910;
  double local_900;
  double local_8f8;
  double local_8f0;
  double local_8e8;
  undefined8 uStack_8e0;
  double local_8d8;
  undefined8 uStack_8d0;
  double local_8c8;
  undefined8 uStack_8c0;
  double local_8b8;
  undefined8 uStack_8b0;
  double local_8a8;
  undefined8 uStack_8a0;
  double local_890;
  double local_888;
  double local_880;
  undefined8 local_878;
  undefined8 uStack_870;
  undefined8 local_868;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  double local_818;
  uint uStack_810;
  undefined4 uStack_80c;
  double local_808;
  double dStack_800;
  double *local_7f8;
  undefined4 local_7f0;
  undefined1 *local_7e8;
  undefined4 local_7e0;
  double *local_7d8;
  undefined4 local_7d0;
  undefined1 *local_7c8;
  undefined4 local_7c0;
  double local_7b8;
  double dStack_7b0;
  double local_7a8;
  double local_798;
  double dStack_790;
  double local_788;
  longlong local_778 [3];
  undefined8 *local_760;
  undefined8 local_758;
  longlong local_750;
  char local_748;
  undefined8 local_740;
  double local_738;
  double dStack_730;
  double local_728;
  undefined4 local_720 [2];
  undefined1 local_718 [768];
  undefined8 local_418;
  double local_410;
  double local_408;
  double local_108 [3];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_a38;
  dVar31 = param_2[8];
  dVar44 = param_2[2];
  dVar29 = dVar31 - dVar44;
  dVar5 = param_2[7];
  dVar27 = *param_2;
  dVar39 = param_2[1];
  dVar30 = dVar5 - dVar39;
  dVar42 = param_2[6];
  dVar32 = dVar42 - dVar27;
  dVar48 = param_2[5];
  dVar28 = dVar48 - dVar44;
  dVar41 = param_2[4];
  dVar25 = dVar41 - dVar39;
  dVar43 = param_2[3];
  dVar26 = dVar43 - dVar27;
  dVar40 = dVar26 * dVar30 - dVar32 * dVar25;
  dVar32 = dVar28 * dVar32 - dVar29 * dVar26;
  dVar26 = dVar25 * dVar29 - dVar28 * dVar30;
  dVar30 = dVar40 * dVar40 + dVar26 * dVar26 + dVar32 * dVar32;
  if (((dVar30 != 1.0) || (local_738 = dVar26, local_728 = dVar40, dStack_730 = dVar32, NAN(dVar30))
      ) && (local_738 = DAT_14c8464e0, local_728 = DAT_14c8464f0, dStack_730 = DAT_14c8464e8,
           9.99999993922529e-09 <= dVar30)) {
    dVar30 = 1.0 / SQRT(dVar30);
    local_738 = dVar26 * dVar30;
    local_728 = dVar40 * dVar30;
    dStack_730 = dVar32 * dVar30;
  }
  dwTlsIndex = DAT_14c7585d0;
  local_9f8 = param_3;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar11 = 0xffffffff;
    LOCK();
    bVar24 = DAT_14c7585d0 != 0xffffffff;
    DVar8 = dwTlsIndex;
    if (bVar24) {
      DVar11 = DAT_14c7585d0;
      DVar8 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar8;
    UNLOCK();
    if (bVar24) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar11;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_418);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_760 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_758 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_750 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_748 = '\0';
  local_740 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_760;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  local_778[0] = 0;
  local_778[1] = 0;
  FUN_1404b1a60(local_778,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x38));
  lVar20 = local_778[0];
  lVar19 = *(longlong *)(param_1 + 0x28);
  if (*(int *)(lVar19 + 0x38) < 1) goto LAB_1404c9fda;
  local_9e0 = (dVar31 + dVar44 + dVar48) / 3.0;
  local_9e8 = (dVar5 + dVar39 + dVar41) / 3.0;
  local_9f0 = (dVar42 + dVar27 + dVar43) / 3.0;
  lVar13 = 8;
  lVar14 = 0;
  dVar31 = 1.79769313486232e+308;
  dVar44 = -1.79769313486232e+308;
  do {
    lVar19 = *(longlong *)(lVar19 + 0x30);
    dVar27 = ((double)*(float *)(lVar19 + lVar13) - local_9e0) * local_728 +
             ((double)*(float *)(lVar19 + -8 + lVar13) - local_9f0) * local_738 +
             ((double)*(float *)(lVar19 + -4 + lVar13) - local_9e8) * dStack_730;
    dVar5 = dVar27;
    if (dVar31 <= dVar27) {
      dVar5 = dVar31;
    }
    *(double *)(local_778[0] + lVar14 * 8) = dVar27;
    if (dVar27 <= dVar44) {
      dVar27 = dVar44;
    }
    lVar14 = lVar14 + 1;
    lVar19 = *(longlong *)(param_1 + 0x28);
    lVar13 = lVar13 + 0xc;
    dVar31 = dVar5;
    dVar44 = dVar27;
  } while (lVar14 < *(int *)(lVar19 + 0x38));
  local_8c8 = local_728;
  uStack_8c0 = 0;
  local_8b8 = dStack_730;
  uStack_8b0 = 0;
  local_8a8 = local_738;
  uStack_8a0 = 0;
  if (local_9f8 < dVar5) goto LAB_1404c9fda;
  local_8d8 = 0.0;
  uStack_8d0 = 0;
  if (dVar27 < 0.0) goto LAB_1404c9fda;
  local_9b8 = param_2[4];
  local_9a0 = param_2[8];
  local_9b0 = param_2[7];
  local_9a8 = param_2[6];
  local_8e8 = -1.79769313486232e+308;
  uStack_8e0 = 0;
  if ((longlong)*(int *)(lVar19 + 0x28) < 1) {
    iVar9 = -1;
    local_968 = ZEXT816(0);
    local_958 = ZEXT816(0);
    local_988 = ZEXT816(0);
    local_9d8 = 0.0;
    local_998 = 0.0;
    local_918 = -1.79769313486232e+308;
  }
  else {
    pfVar15 = (float *)(*(longlong *)(lVar19 + 0x20) + 0x14);
    local_998 = 0.0;
    uVar21 = 0xffffffff;
    local_918 = -1.79769313486232e+308;
    uVar18 = 0;
    local_9d8 = 0.0;
    local_988 = ZEXT816(0);
    local_958 = ZEXT816(0);
    local_968 = ZEXT816(0);
    local_8d8 = 0.0;
    do {
      dVar31 = (double)*pfVar15;
      dVar44 = (double)pfVar15[-1];
      dVar39 = (double)pfVar15[-2];
      dVar42 = (double)pfVar15[-3];
      dVar48 = (double)pfVar15[-4];
      dVar27 = (double)pfVar15[-5];
      local_418 = (param_2[2] - dVar42) * dVar31 +
                  (*param_2 - dVar27) * dVar39 + (param_2[1] - dVar48) * dVar44;
      local_408 = (local_9a0 - dVar42) * dVar31 +
                  (local_9a8 - dVar27) * dVar39 + (local_9b0 - dVar48) * dVar44;
      local_410 = (param_2[5] - dVar42) * dVar31 +
                  (param_2[3] - dVar27) * dVar39 + (local_9b8 - dVar48) * dVar44;
      uVar22 = (uint)(local_408 <= local_418) * 2;
      if (local_410 <= local_418) {
        uVar22 = (local_408 <= local_410) + 1;
      }
      dVar41 = (double)(&local_418)[uVar22];
      if ((dVar41 <= local_9f8) && (local_918 < dVar41)) {
        local_968._8_8_ = 0;
        local_968._0_8_ = dVar48;
        local_958._8_8_ = 0;
        local_958._0_8_ = dVar42;
        local_988._8_8_ = 0;
        local_988._0_8_ = dVar39;
        uVar21 = uVar18 & 0xffffffff;
        local_9d8 = dVar44;
        local_998 = dVar31;
        local_918 = dVar41;
        local_8d8 = dVar27;
      }
      uStack_8d0 = 0;
      uStack_910 = 0;
      uStack_990 = 0;
      uStack_9d0 = 0;
      iVar9 = (int)uVar21;
      if (local_9f8 < dVar41) goto LAB_1404c9fda;
      uVar18 = uVar18 + 1;
      pfVar15 = pfVar15 + 6;
    } while ((longlong)*(int *)(lVar19 + 0x28) != uVar18);
  }
  uStack_8d0 = 0;
  uStack_910 = 0;
  uStack_990 = 0;
  uStack_9d0 = 0;
  dVar31 = local_988._0_8_;
  uVar35 = local_988._0_4_;
  uVar36 = local_988._4_4_;
  uVar49 = local_988._8_4_;
  uVar50 = local_988._12_4_;
  local_108[1] = (param_2[2] - (double)local_958._0_8_) * local_998 +
                 (*param_2 - local_8d8) * dVar31 +
                 (param_2[1] - (double)local_968._0_8_) * local_9d8;
  local_108[2] = (param_2[5] - (double)local_958._0_8_) * local_998 +
                 (param_2[3] - local_8d8) * dVar31 +
                 (local_9b8 - (double)local_968._0_8_) * local_9d8;
  dVar31 = (local_9a0 - (double)local_958._0_8_) * local_998 +
           (local_9a8 - local_8d8) * dVar31 + (local_9b0 - (double)local_968._0_8_) * local_9d8;
  local_108[0] = dVar31;
  if (local_108[1] <= dVar31) {
    local_108[0] = local_108[1];
  }
  if (local_108[2] <= local_108[1]) {
    local_108[1] = local_108[2];
  }
  if (dVar31 <= local_108[2]) {
    local_108[2] = dVar31;
  }
  lVar13 = *(longlong *)(lVar19 + 0x58);
  uVar33 = SUB84(local_9f8,0);
  uVar34 = (undefined4)((ulonglong)local_9f8 >> 0x20);
  local_9c0 = param_4;
  local_978 = param_1;
  local_96c = iVar9;
  if (lVar13 == 0) {
    local_928 = 0.0;
    uStack_920 = 0;
    local_938 = 0.0;
    uStack_930 = 0;
    local_948 = ZEXT816(0);
  }
  else {
    local_890 = local_9f8 * local_9f8;
    local_8c8 = -local_728;
    uStack_8c0 = 0x8000000000000000;
    dVar44 = -dStack_730;
    dVar31 = -local_738;
    uVar22 = 0;
    local_8e8 = -1.79769313486232e+308;
    uStack_8e0 = 0;
    local_948 = ZEXT816(0);
    local_938 = 0.0;
    uStack_930 = 0;
    local_928 = 0.0;
    uStack_920 = 0;
    do {
      iVar9 = 0;
      if ((byte)(*(char *)(lVar19 + 0x60) - 1U) < 3) {
        iVar9 = *(int *)(lVar13 + 0x38);
      }
      if (iVar9 <= (int)uVar22) break;
      local_418 = (double)(ulonglong)uVar22;
      iVar9 = FUN_14571894e(lVar19 + 0x58,&local_418);
      local_418 = (double)CONCAT44(1,uVar22);
      iVar10 = FUN_14571894e(lVar19 + 0x58,&local_418);
      lVar16 = (longlong)iVar9;
      dVar27 = *(double *)(lVar20 + lVar16 * 8);
      lVar14 = (longlong)iVar10;
      if ((dVar27 < (double)CONCAT44(uVar34,uVar33) || dVar27 == (double)CONCAT44(uVar34,uVar33)) ||
         (dVar27 = *(double *)(lVar20 + lVar14 * 8),
         dVar27 < (double)CONCAT44(uVar34,uVar33) || dVar27 == (double)CONCAT44(uVar34,uVar33))) {
        lVar13 = *(longlong *)(lVar19 + 0x30);
        local_8f0 = (double)*(float *)(lVar13 + 8 + lVar16 * 0xc);
        local_8f8 = (double)*(float *)(lVar13 + 4 + lVar16 * 0xc);
        local_900 = (double)*(float *)(lVar13 + lVar16 * 0xc);
        fVar2 = *(float *)(lVar13 + 8 + lVar14 * 0xc);
        fVar3 = *(float *)(lVar13 + 4 + lVar14 * 0xc);
        fVar4 = *(float *)(lVar13 + lVar14 * 0xc);
        local_418 = (double)(ulonglong)uVar22;
        iVar9 = FUN_1457189ec(lVar19 + 0x58,&local_418,local_720);
        lVar13 = local_978;
        lVar19 = *(longlong *)(local_978 + 0x28);
        if (*(longlong *)(lVar19 + 0x58) == 0) {
          iVar10 = -1;
        }
        else {
          local_418 = (double)CONCAT44(1,uVar22);
          iVar10 = FUN_1457189ec(lVar19 + 0x58,&local_418,local_720);
          lVar19 = *(longlong *)(lVar13 + 0x28);
        }
        lVar13 = *(longlong *)(lVar19 + 0x20);
        lVar14 = (longlong)iVar9;
        local_9a0 = (double)*(float *)(lVar13 + 0x14 + lVar14 * 0x18);
        local_9a8 = (double)*(float *)(lVar13 + 0x10 + lVar14 * 0x18);
        local_9b0 = (double)*(float *)(lVar13 + 0xc + lVar14 * 0x18);
        lVar14 = (longlong)iVar10;
        local_9b8 = (double)*(float *)(lVar13 + 0x14 + lVar14 * 0x18);
        local_8a8 = (double)*(float *)(lVar13 + 0x10 + lVar14 * 0x18);
        local_880 = (double)fVar2 - local_8f0;
        local_888 = (double)fVar3 - local_8f8;
        dVar27 = (double)fVar4 - local_900;
        local_8b8 = (double)*(float *)(lVar13 + 0xc + lVar14 * 0x18);
        lVar13 = 0;
        do {
          if (local_108[lVar13] < (double)CONCAT44(uVar34,uVar33) ||
              local_108[lVar13] == (double)CONCAT44(uVar34,uVar33)) {
            pdVar17 = param_2 + lVar13 * 3 + 3;
            dVar39 = pdVar17[-1];
            dVar42 = pdVar17[-3];
            dVar48 = pdVar17[-2];
            if (lVar13 == 2) {
              pdVar17 = param_2;
            }
            dVar41 = pdVar17[2] - dVar39;
            dVar26 = pdVar17[1] - dVar48;
            dVar43 = *pdVar17 - dVar42;
            dVar40 = local_9b8 * dVar41 + local_8b8 * dVar43 + dVar26 * local_8a8;
            uVar33 = SUB84(local_9f8,0);
            uVar34 = (undefined4)((ulonglong)local_9f8 >> 0x20);
            if (((local_9a0 * dVar41 + local_9b0 * dVar43 + dVar26 * local_9a8) * dVar40 <
                 -0.009999999776482582) &&
               (0.009999999776482582 <
                dVar40 * (local_8c8 * local_880 + dVar31 * dVar27 + local_888 * dVar44))) {
              dVar40 = dVar27 * dVar26 - dVar43 * local_888;
              dVar43 = local_880 * dVar43 - dVar41 * dVar27;
              dVar41 = local_888 * dVar41 - dVar26 * local_880;
              dVar26 = (dVar39 - local_9e0) * dVar40 +
                       (dVar42 - local_9f0) * dVar41 + (dVar48 - local_9e8) * dVar43;
              if (dVar26 < 0.0) {
                uVar18 = 0x8000000000000000;
                dVar30 = -dVar40;
                uVar35 = 0x80000000;
                dVar28 = -dVar43;
              }
              else {
                uVar18 = 0;
                uVar35 = 0;
                dVar30 = dVar40;
                dVar28 = dVar43;
              }
              dVar43 = dVar40 * dVar40 + dVar41 * dVar41 + dVar43 * dVar43;
              uVar21 = -(ulonglong)(dVar26 < 0.0);
              dVar41 = (double)(~uVar21 & (ulonglong)dVar41 | (ulonglong)-dVar41 & uVar21);
              dVar39 = (local_8f0 - dVar39) * dVar30 +
                       (local_900 - dVar42) * dVar41 + (local_8f8 - dVar48) * dVar28;
              if (local_890 * dVar43 < ABS(dVar39) * dVar39) goto LAB_1404c9fda;
              if (ABS(local_8e8) * local_8e8 * dVar43 < ABS(dVar39) * dVar39) {
                dVar42 = 1.0 / SQRT(dVar43);
                local_8e8 = dVar39 * dVar42;
                local_938 = dVar28 * dVar42;
                local_928 = dVar42 * dVar41;
                uStack_920 = 0;
                local_948._8_4_ = 0;
                local_948._0_8_ = dVar30 * dVar42;
                local_948._12_4_ = uVar35;
                uStack_8e0 = 0;
                uStack_930 = uVar18;
              }
              uVar35 = local_988._0_4_;
              uVar36 = local_988._4_4_;
              uVar49 = local_988._8_4_;
              uVar50 = local_988._12_4_;
            }
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 != 3);
        lVar13 = *(longlong *)(lVar19 + 0x58);
      }
      uVar22 = uVar22 + 1;
    } while (lVar13 != 0);
  }
  lVar20 = local_978;
  dVar31 = (double)CONCAT44(uVar36,uVar35);
  uVar38 = 0;
  uVar37 = 0;
  if ((((dVar5 == -1.79769313486232e+308) && (!NAN(dVar5))) || (dVar5 + 0.01 <= local_918)) ||
     (dVar5 + 0.01 <= local_8e8)) {
    bVar24 = local_918 != -1.79769313486232e+308 && local_8e8 < local_918;
    if (bVar24) {
      local_798 = (double)CONCAT44(uVar36,uVar35);
      local_788 = local_998;
      uVar46 = (undefined4)((ulonglong)local_998 >> 0x20);
      uVar47 = (undefined4)uStack_990;
      uVar22 = (uint)((ulonglong)uStack_990 >> 0x20);
      uVar18 = CONCAT44(uVar50,uVar49);
      dVar44 = local_9d8;
      uVar21 = uStack_9d0;
      if (((double)*(float *)(lVar19 + 0x74) - local_9e0) * local_998 +
          ((double)*(float *)(lVar19 + 0x6c) - local_9f0) * (double)CONCAT44(uVar36,uVar35) +
          ((double)*(float *)(lVar19 + 0x70) - local_9e8) * local_9d8 < 0.0) {
        local_788 = -local_998;
        uVar46 = (undefined4)((ulonglong)local_788 >> 0x20);
        uVar22 = uVar22 ^ 0x80000000;
        dVar44 = -local_9d8;
        uVar21 = uStack_9d0 ^ 0x8000000000000000;
        local_798 = -(double)CONCAT44(uVar36,uVar35);
        uVar18 = CONCAT44(uVar50,uVar49) ^ 0x8000000000000000;
      }
      uVar45 = SUB84(local_998,0);
      local_7b8 = (double)CONCAT44(uVar36,uVar35);
      dStack_7b0 = local_9d8;
      local_7a8 = local_998;
      uVar23 = 3;
      dVar27 = local_958._0_8_;
      uVar35 = local_958._8_4_;
      uVar36 = local_958._12_4_;
      dVar39 = local_968._0_8_;
      uVar37 = local_968._8_4_;
      uVar38 = local_968._12_4_;
      dVar5 = local_8d8;
      dVar42 = local_798;
      dStack_790 = dVar44;
      iVar9 = local_96c;
    }
    else {
      if ((local_8e8 == -1.79769313486232e+308) && (!NAN(local_8e8))) goto LAB_1404c9fda;
      local_788 = local_948._0_8_;
      uVar45 = local_948._0_4_;
      uVar46 = local_948._4_4_;
      uVar47 = local_948._8_4_;
      uVar22 = local_948._12_4_;
      dVar42 = local_928;
      uVar18 = uStack_920;
      dVar44 = local_938;
      uVar21 = uStack_930;
      if (((double)*(float *)(lVar19 + 0x74) - local_9e0) * local_788 +
          ((double)*(float *)(lVar19 + 0x6c) - local_9f0) * local_928 +
          ((double)*(float *)(lVar19 + 0x70) - local_9e8) * local_938 < 0.0) {
        local_788 = -local_788;
        uVar46 = (undefined4)((ulonglong)local_788 >> 0x20);
        uVar22 = uVar22 ^ 0x80000000;
        dVar44 = -local_938;
        uVar21 = uStack_930 ^ 0x8000000000000000;
        dVar42 = -local_928;
        uVar18 = uStack_920 ^ 0x8000000000000000;
      }
      uVar33 = SUB84(local_9f8,0);
      uVar34 = (undefined4)((ulonglong)local_9f8 >> 0x20);
      local_798 = dVar42;
      dStack_790 = dVar44;
      iVar9 = FUN_1449c8d5c(lVar19,&local_798);
      lVar19 = *(longlong *)(lVar19 + 0x20);
      lVar13 = (longlong)iVar9;
      local_998 = (double)*(float *)(lVar19 + 0x14 + lVar13 * 0x18);
      local_9d8 = (double)*(float *)(lVar19 + 0x10 + lVar13 * 0x18);
      uVar49 = 0;
      uVar50 = 0;
      dVar31 = (double)*(float *)(lVar19 + 0xc + lVar13 * 0x18);
      uVar35 = 0;
      uVar36 = 0;
      dVar27 = (double)*(float *)(lVar19 + 8 + lVar13 * 0x18);
      dVar39 = (double)*(float *)(lVar19 + 4 + lVar13 * 0x18);
      dVar5 = (double)*(float *)(lVar19 + lVar13 * 0x18);
      local_7b8 = local_798;
      dStack_7b0 = dStack_790;
      local_7a8 = local_788;
      uStack_990 = 0;
      uStack_9d0 = 0;
      if (ABS(local_998 * (double)CONCAT44(uVar46,uVar45) + dVar31 * dVar42 + dVar44 * local_9d8) <
          ABS(local_728 * (double)CONCAT44(uVar46,uVar45) + local_738 * dVar42 + dStack_730 * dVar44
             )) {
        uVar23 = 2;
        if (local_728 * local_788 + local_738 * local_798 + dStack_730 * dStack_790 < 0.0) {
          local_7a8 = -local_788;
          local_7b8 = -local_798;
          dStack_7b0 = -dStack_790;
        }
        bVar24 = false;
        goto LAB_1404ca44a;
      }
      uVar23 = 2;
      if (local_788 * local_998 + local_798 * dVar31 + dStack_790 * local_9d8 < 0.0) {
        local_7a8 = -local_788;
        local_7b8 = -local_798;
        dStack_7b0 = -dStack_790;
      }
    }
    local_7f8 = &local_410;
    local_418 = (double)CONCAT44(local_418._4_4_,0x20);
    local_7e8 = local_718;
    local_720[0] = 0x20;
    local_a08 = &local_7e8;
    local_7e0 = 0x20;
    local_a10 = &local_7f8;
    local_7f0 = 0x20;
    local_a18 = &local_7b8;
    FUN_1404caa4b(&local_818,param_2,lVar20,iVar9);
    bVar7 = false;
  }
  else {
    local_788 = local_728;
    uVar18 = 0;
    uVar45 = SUB84(local_728,0);
    uVar46 = (undefined4)((ulonglong)local_728 >> 0x20);
    uVar47 = 0;
    uVar22 = 0;
    dVar42 = local_738;
    dVar44 = dStack_730;
    if (((double)*(float *)(lVar19 + 0x74) - local_9e0) * local_728 +
        ((double)*(float *)(lVar19 + 0x6c) - local_9f0) * local_738 +
        ((double)*(float *)(lVar19 + 0x70) - local_9e8) * dStack_730 < 0.0) {
      uVar21 = DAT_149931e80;
      uVar18 = DAT_149931e80._8_8_;
      local_788 = (double)((ulonglong)local_728 ^ uVar21);
      uVar45 = SUB84(local_788,0);
      uVar46 = (undefined4)((ulonglong)local_788 >> 0x20);
      uVar47 = DAT_149931e80._8_4_;
      uVar22 = DAT_149931e80._12_4_;
      dVar44 = (double)((ulonglong)dStack_730 ^ uVar21);
      dVar42 = (double)((ulonglong)local_738 ^ uVar21);
    }
    local_7a8 = local_728;
    local_7b8 = local_738;
    dStack_7b0 = dStack_730;
    local_798 = dVar42;
    dStack_790 = dVar44;
    iVar9 = FUN_1449c8d5c(lVar19);
    lVar19 = *(longlong *)(lVar19 + 0x20);
    lVar13 = (longlong)iVar9;
    local_998 = (double)*(float *)(lVar19 + 0x14 + lVar13 * 0x18);
    local_9d8 = (double)*(float *)(lVar19 + 0x10 + lVar13 * 0x18);
    dVar31 = (double)*(float *)(lVar19 + 0xc + lVar13 * 0x18);
    dVar27 = (double)*(float *)(lVar19 + 8 + lVar13 * 0x18);
    dVar39 = (double)*(float *)(lVar19 + 4 + lVar13 * 0x18);
    dVar5 = (double)*(float *)(lVar19 + lVar13 * 0x18);
    uVar23 = 1;
    bVar24 = true;
    uVar21 = uVar18;
LAB_1404ca44a:
    uStack_990 = 0;
    uStack_9d0 = 0;
    uVar50 = 0;
    uVar49 = 0;
    uVar36 = 0;
    uVar35 = 0;
    local_7d8 = &local_410;
    local_418 = (double)CONCAT44(local_418._4_4_,0x20);
    local_7c8 = local_718;
    local_720[0] = 0x20;
    local_a08 = &local_7c8;
    local_7c0 = 0x20;
    local_a10 = &local_7d8;
    local_7d0 = 0x20;
    local_a18 = &local_7b8;
    FUN_1404cadbd(&local_818,lVar20,iVar9,param_2);
    bVar7 = true;
  }
  uVar12 = uStack_810;
  dVar48 = local_818;
  if (4 < (int)uStack_810) {
    local_988._8_4_ = uVar49;
    local_988._0_8_ = dVar31;
    local_988._12_4_ = uVar50;
    local_948._4_4_ = uVar46;
    local_948._0_4_ = uVar45;
    local_948._8_4_ = uVar47;
    local_948._12_4_ = uVar22;
    local_968._8_4_ = uVar37;
    local_968._0_8_ = dVar39;
    local_968._12_4_ = uVar38;
    local_958._8_4_ = uVar35;
    local_958._0_8_ = dVar27;
    local_958._12_4_ = uVar36;
    local_838 = 0;
    uStack_830 = 0;
    local_828 = 0x3ff0000000000000;
    local_938 = dVar44;
    uStack_930 = uVar21;
    local_928 = dVar42;
    uStack_920 = uVar18;
    FUN_140269010(&local_818,&local_798);
    dVar31 = (double)CONCAT44(uStack_80c,uStack_810);
    lVar19 = 0;
    do {
      dVar44 = *(double *)((longlong)dVar48 + lVar19);
      dVar27 = *(double *)((longlong)dVar48 + 8 + lVar19);
      dVar39 = *(double *)((longlong)dVar48 + 0x10 + lVar19);
      dVar41 = dVar31 * dVar39 + dVar27 * -local_808;
      dVar41 = dVar41 + dVar41;
      dVar43 = local_818 * dVar27 + dVar44 * -dVar31;
      dVar43 = dVar43 + dVar43;
      dVar42 = local_808 * dVar44 + dVar39 * -local_818;
      dVar42 = dVar42 + dVar42;
      *(double *)((longlong)dVar48 + lVar19) =
           dVar42 * -local_808 + dVar31 * dVar43 + dVar41 * dStack_800 + dVar44;
      *(double *)((longlong)dVar48 + 8 + lVar19) =
           dVar43 * -local_818 + local_808 * dVar41 + dStack_800 * dVar42 + dVar27;
      *(double *)((longlong)dVar48 + 0x10 + lVar19) =
           local_818 * dVar42 + dVar41 * -dVar31 + dStack_800 * dVar43 + dVar39;
      lVar19 = lVar19 + 0x18;
    } while ((ulonglong)uVar12 * 0x18 != lVar19);
    uVar12 = FUN_1402695a1();
    if (0 < (int)uVar12) {
      dVar31 = -(double)CONCAT44(uStack_80c,uStack_810);
      local_808 = local_808 * -1.0;
      dStack_800 = dStack_800 * 1.0;
      lVar19 = 0;
      do {
        dVar44 = *(double *)((longlong)dVar48 + lVar19);
        dVar27 = *(double *)((longlong)dVar48 + 8 + lVar19);
        dVar39 = *(double *)((longlong)dVar48 + 0x10 + lVar19);
        dVar41 = dVar31 * dVar39 + dVar27 * -local_808;
        dVar41 = dVar41 + dVar41;
        dVar43 = -local_818 * dVar27 + dVar44 * -dVar31;
        dVar43 = dVar43 + dVar43;
        dVar42 = local_808 * dVar44 + dVar39 * local_818;
        dVar42 = dVar42 + dVar42;
        *(double *)((longlong)dVar48 + lVar19) =
             dVar42 * -local_808 + dVar31 * dVar43 + dStack_800 * dVar41 + dVar44;
        *(double *)((longlong)dVar48 + 8 + lVar19) =
             dVar43 * local_818 + local_808 * dVar41 + dStack_800 * dVar42 + dVar27;
        *(double *)((longlong)dVar48 + 0x10 + lVar19) =
             -local_818 * dVar42 + dVar41 * -dVar31 + dStack_800 * dVar43 + dVar39;
        lVar19 = lVar19 + 0x18;
      } while ((ulonglong)uVar12 * 0x18 != lVar19);
    }
    uVar33 = SUB84(local_9f8,0);
    uVar34 = (undefined4)((ulonglong)local_9f8 >> 0x20);
    uVar45 = local_948._0_4_;
    uVar46 = local_948._4_4_;
    dVar27 = (double)local_958._0_8_;
    dVar39 = (double)local_968._0_8_;
    dVar31 = (double)local_988._0_8_;
    dVar44 = local_938;
    dVar42 = local_928;
  }
  if (((bool)(bVar7 ^ 1U)) || ((bool)(bVar24 ^ 1U))) {
    if ((bool)(bVar7 ^ 1U) || bVar24) {
      if ((bool)(bVar24 ^ 1U) || bVar7) {
        if ((!bVar7 && !bVar24) && 0 < (int)uVar12) {
          lVar19 = 0;
          do {
            dVar41 = *(double *)((longlong)dVar48 + 0x10 + lVar19);
            dVar43 = *(double *)((longlong)dVar48 + lVar19);
            dVar26 = *(double *)((longlong)dVar48 + 8 + lVar19);
            dVar40 = ((dVar27 - dVar41) * local_998 +
                     (dVar5 - dVar43) * dVar31 + (dVar39 - dVar26) * local_9d8) /
                     ((double)CONCAT44(uVar46,uVar45) * local_998 +
                     dVar42 * dVar31 + local_9d8 * dVar44);
            local_868 = *(undefined8 *)((longlong)dVar48 + 0x10 + lVar19);
            local_878 = *(undefined8 *)((longlong)dVar48 + lVar19);
            uStack_870 = ((undefined8 *)((longlong)dVar48 + lVar19))[1];
            if (dVar40 <= (double)CONCAT44(uVar34,uVar33) &&
                (double)CONCAT44(uVar34,uVar33) != dVar40) {
              lVar20 = (longlong)*local_9c0;
              *local_9c0 = *local_9c0 + 1;
              *(double *)(local_9c0 + lVar20 * 0x16 + 2) = dVar43 + dVar42 * dVar40;
              *(double *)(local_9c0 + lVar20 * 0x16 + 4) = dVar26 + dVar44 * dVar40;
              *(double *)(local_9c0 + lVar20 * 0x16 + 6) =
                   dVar41 + (double)CONCAT44(uVar46,uVar45) * dVar40;
              *(undefined8 *)(local_9c0 + lVar20 * 0x16 + 8) = local_878;
              *(undefined8 *)(local_9c0 + lVar20 * 0x16 + 8 + 2) = uStack_870;
              *(undefined8 *)(local_9c0 + lVar20 * 0x16 + 0xc) = local_868;
              *(double *)(local_9c0 + lVar20 * 0x16 + 0xe) = local_798;
              *(double *)((longlong)(local_9c0 + lVar20 * 0x16 + 0xe) + 8) = dStack_790;
              *(double *)(local_9c0 + lVar20 * 0x16 + 0x12) = local_788;
              *(double *)(local_9c0 + lVar20 * 0x16 + 0x14) = dVar40;
              *(undefined1 *)(local_9c0 + lVar20 * 0x16 + 0x17) = uVar23;
              local_9c0[lVar20 * 0x16 + 0x16] = -1;
            }
            lVar19 = lVar19 + 0x18;
          } while ((ulonglong)uVar12 * 0x18 != lVar19);
        }
      }
      else if (0 < (int)uVar12) {
        lVar19 = 0;
        do {
          dVar31 = *(double *)((longlong)dVar48 + 0x10 + lVar19);
          dVar41 = *(double *)((longlong)dVar48 + lVar19);
          dVar43 = *(double *)((longlong)dVar48 + 8 + lVar19);
          dVar26 = (dVar27 - dVar31) * (double)CONCAT44(uVar46,uVar45) +
                   (dVar5 - dVar41) * dVar42 + (dVar39 - dVar43) * dVar44;
          local_848 = *(undefined8 *)((longlong)dVar48 + 0x10 + lVar19);
          local_858 = *(undefined8 *)((longlong)dVar48 + lVar19);
          uStack_850 = ((undefined8 *)((longlong)dVar48 + lVar19))[1];
          if (dVar26 <= (double)CONCAT44(uVar34,uVar33) && (double)CONCAT44(uVar34,uVar33) != dVar26
             ) {
            lVar20 = (longlong)*local_9c0;
            *local_9c0 = *local_9c0 + 1;
            *(double *)(local_9c0 + lVar20 * 0x16 + 2) = dVar41 + dVar42 * dVar26;
            *(double *)(local_9c0 + lVar20 * 0x16 + 4) = dVar43 + dVar44 * dVar26;
            *(double *)(local_9c0 + lVar20 * 0x16 + 6) =
                 dVar31 + (double)CONCAT44(uVar46,uVar45) * dVar26;
            *(undefined8 *)(local_9c0 + lVar20 * 0x16 + 8) = local_858;
            *(undefined8 *)(local_9c0 + lVar20 * 0x16 + 8 + 2) = uStack_850;
            *(undefined8 *)(local_9c0 + lVar20 * 0x16 + 0xc) = local_848;
            *(double *)(local_9c0 + lVar20 * 0x16 + 0xe) = local_798;
            *(double *)((longlong)(local_9c0 + lVar20 * 0x16 + 0xe) + 8) = dStack_790;
            *(double *)(local_9c0 + lVar20 * 0x16 + 0x12) = local_788;
            *(double *)(local_9c0 + lVar20 * 0x16 + 0x14) = dVar26;
            *(undefined1 *)(local_9c0 + lVar20 * 0x16 + 0x17) = uVar23;
            local_9c0[lVar20 * 0x16 + 0x16] = -1;
          }
          lVar19 = lVar19 + 0x18;
        } while ((ulonglong)uVar12 * 0x18 != lVar19);
      }
    }
    else if (0 < (int)uVar12) {
      lVar19 = 0;
      do {
        dVar31 = *(double *)((longlong)dVar48 + 0x10 + lVar19);
        dVar5 = *(double *)((longlong)dVar48 + lVar19);
        dVar27 = *(double *)((longlong)dVar48 + 8 + lVar19);
        dVar39 = ((dVar31 - local_9e0) * local_728 +
                 (dVar5 - local_9f0) * local_738 + (dVar27 - local_9e8) * dStack_730) /
                 ((double)CONCAT44(uVar46,uVar45) * local_728 +
                 dVar42 * local_738 + dVar44 * dStack_730);
        if (dVar39 <= (double)CONCAT44(uVar34,uVar33) && (double)CONCAT44(uVar34,uVar33) != dVar39)
        {
          puVar1 = (undefined8 *)((longlong)dVar48 + lVar19);
          lVar20 = (longlong)*local_9c0;
          *local_9c0 = *local_9c0 + 1;
          *(undefined8 *)(local_9c0 + lVar20 * 0x16 + 6) = puVar1[2];
          uVar6 = puVar1[1];
          *(undefined8 *)(local_9c0 + lVar20 * 0x16 + 2) = *puVar1;
          *(undefined8 *)(local_9c0 + lVar20 * 0x16 + 2 + 2) = uVar6;
          *(double *)(local_9c0 + lVar20 * 0x16 + 8) = dVar5 - dVar42 * dVar39;
          *(double *)(local_9c0 + lVar20 * 0x16 + 10) = dVar27 - dVar44 * dVar39;
          *(double *)(local_9c0 + lVar20 * 0x16 + 0xc) =
               dVar31 - (double)CONCAT44(uVar46,uVar45) * dVar39;
          *(double *)(local_9c0 + lVar20 * 0x16 + 0xe) = local_798;
          *(double *)((longlong)(local_9c0 + lVar20 * 0x16 + 0xe) + 8) = dStack_790;
          *(double *)(local_9c0 + lVar20 * 0x16 + 0x12) = local_788;
          *(double *)(local_9c0 + lVar20 * 0x16 + 0x14) = dVar39;
          *(undefined1 *)(local_9c0 + lVar20 * 0x16 + 0x17) = uVar23;
          local_9c0[lVar20 * 0x16 + 0x16] = -1;
        }
        lVar19 = lVar19 + 0x18;
        uVar33 = SUB84(local_9f8,0);
        uVar34 = (undefined4)((ulonglong)local_9f8 >> 0x20);
      } while ((ulonglong)uVar12 * 0x18 != lVar19);
    }
  }
  else if (0 < (int)uVar12) {
    lVar19 = 0;
    do {
      dVar31 = *(double *)((longlong)dVar48 + 0x10 + lVar19);
      dVar5 = *(double *)((longlong)dVar48 + lVar19);
      dVar27 = *(double *)((longlong)dVar48 + 8 + lVar19);
      dVar39 = (dVar31 - local_9e0) * (double)CONCAT44(uVar46,uVar45) +
               (dVar5 - local_9f0) * dVar42 + (dVar27 - local_9e8) * dVar44;
      if (dVar39 <= (double)CONCAT44(uVar34,uVar33) && (double)CONCAT44(uVar34,uVar33) != dVar39) {
        puVar1 = (undefined8 *)((longlong)dVar48 + lVar19);
        lVar20 = (longlong)*local_9c0;
        *local_9c0 = *local_9c0 + 1;
        *(undefined8 *)(local_9c0 + lVar20 * 0x16 + 6) = puVar1[2];
        uVar6 = puVar1[1];
        *(undefined8 *)(local_9c0 + lVar20 * 0x16 + 2) = *puVar1;
        *(undefined8 *)(local_9c0 + lVar20 * 0x16 + 2 + 2) = uVar6;
        *(double *)(local_9c0 + lVar20 * 0x16 + 8) = dVar5 - dVar42 * dVar39;
        *(double *)(local_9c0 + lVar20 * 0x16 + 10) = dVar27 - dVar44 * dVar39;
        *(double *)(local_9c0 + lVar20 * 0x16 + 0xc) =
             dVar31 - (double)CONCAT44(uVar46,uVar45) * dVar39;
        *(double *)(local_9c0 + lVar20 * 0x16 + 0xe) = local_798;
        *(double *)((longlong)(local_9c0 + lVar20 * 0x16 + 0xe) + 8) = dStack_790;
        *(double *)(local_9c0 + lVar20 * 0x16 + 0x12) = local_788;
        *(double *)(local_9c0 + lVar20 * 0x16 + 0x14) = dVar39;
        *(undefined1 *)(local_9c0 + lVar20 * 0x16 + 0x17) = uVar23;
        local_9c0[lVar20 * 0x16 + 0x16] = -1;
      }
      lVar19 = lVar19 + 0x18;
    } while ((ulonglong)uVar12 * 0x18 != lVar19);
  }
LAB_1404c9fda:
  if (local_748 == '\0') {
    local_748 = '\x01';
    *(int *)(local_760 + 4) = *(int *)(local_760 + 4) + -1;
    if (local_750 != local_760[2]) {
      FUN_14004673c();
    }
    *local_760 = local_758;
    local_760[3] = local_740;
  }
  if ((local_f0 ^ (ulonglong)auStack_a38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404caa4b FUN_1404caa4b body=881 status=ok
// SIG undefined FUN_1404caa4b(void)

longlong *
FUN_1404caa4b(longlong *param_1,undefined8 *param_2,longlong param_3,int param_4,double *param_5,
             longlong *param_6,longlong *param_7)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_f8 [32];
  double *local_d8;
  double local_d0;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar2 = (undefined8 *)*param_6;
  puVar2[2] = param_2[2];
  uVar12 = param_2[1];
  *puVar2 = *param_2;
  puVar2[1] = uVar12;
  lVar3 = *param_6;
  *(undefined8 *)(lVar3 + 0x28) = param_2[5];
  uVar12 = param_2[4];
  *(undefined8 *)(lVar3 + 0x18) = param_2[3];
  *(undefined8 *)(lVar3 + 0x20) = uVar12;
  lVar3 = *param_6;
  *(undefined8 *)(lVar3 + 0x40) = param_2[8];
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar10 = *(undefined4 *)(param_2 + 7);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)(lVar3 + 0x34) = uVar9;
  *(undefined4 *)(lVar3 + 0x38) = uVar10;
  *(undefined4 *)(lVar3 + 0x3c) = uVar11;
  lVar3 = *(longlong *)(param_3 + 0x28);
  plVar4 = *(longlong **)(lVar3 + 0x58);
  iVar14 = 3;
  if (plVar4 != (longlong *)0x0) {
    cVar1 = *(char *)(lVar3 + 0x60);
    if (cVar1 == '\x01') {
      uVar19 = (ulonglong)*(byte *)(*plVar4 + 1 + (longlong)param_4 * 2);
      uVar16 = (uint)*(byte *)(plVar4[2] + -2 +
                              (*(byte *)(*plVar4 + (longlong)param_4 * 2) + uVar19) * 3);
    }
    else if (cVar1 == '\x02') {
      uVar19 = (ulonglong)*(short *)(*plVar4 + 2 + (longlong)param_4 * 4);
      uVar16 = (uint)*(short *)(plVar4[2] + -4 +
                               ((longlong)*(short *)(*plVar4 + (longlong)param_4 * 4) + uVar19) * 6)
      ;
    }
    else {
      if (cVar1 != '\x03') goto LAB_1404cacc2;
      uVar19 = (ulonglong)*(int *)(*plVar4 + 4 + (longlong)param_4 * 8);
      uVar16 = *(uint *)(plVar4[2] + -8 +
                        ((longlong)*(int *)(*plVar4 + (longlong)param_4 * 8) + uVar19) * 0xc);
    }
    if (0 < (int)uVar19) {
      lVar15 = (longlong)(int)uVar16;
      lVar3 = *(longlong *)(lVar3 + 0x30);
      lVar18 = (longlong)param_4;
      iVar14 = 3;
      lVar17 = 0;
      dVar22 = (double)*(float *)(lVar3 + 4 + lVar15 * 0xc);
      dVar20 = (double)*(float *)(lVar3 + 8 + lVar15 * 0xc);
      dVar5 = (double)*(float *)(lVar3 + lVar15 * 0xc);
      do {
        lVar3 = *(longlong *)(param_3 + 0x28);
        plVar4 = *(longlong **)(lVar3 + 0x58);
        uVar16 = 0xffffffff;
        if (plVar4 != (longlong *)0x0) {
          cVar1 = *(char *)(lVar3 + 0x60);
          if (cVar1 == '\x01') {
            uVar16 = (uint)*(byte *)(plVar4[2] + 1 +
                                    ((ulonglong)*(byte *)(*plVar4 + lVar18 * 2) + lVar17) * 3);
          }
          else if (cVar1 == '\x02') {
            uVar16 = (uint)*(short *)(plVar4[2] + 2 +
                                     (*(short *)(*plVar4 + lVar18 * 4) + lVar17) * 6);
          }
          else if (cVar1 == '\x03') {
            uVar16 = *(uint *)(plVar4[2] + 4 + (*(int *)(*plVar4 + lVar18 * 8) + lVar17) * 0xc);
          }
        }
        lVar3 = *(longlong *)(lVar3 + 0x30);
        lVar15 = (longlong)(int)uVar16;
        dVar6 = (double)*(float *)(lVar3 + 8 + lVar15 * 0xc);
        dVar7 = (double)*(float *)(lVar3 + 4 + lVar15 * 0xc);
        dVar8 = (double)*(float *)(lVar3 + lVar15 * 0xc);
        dVar21 = *param_5 * (dVar22 - dVar7) - (dVar5 - dVar8) * param_5[1];
        dVar5 = (dVar5 - dVar8) * param_5[2] - (dVar20 - dVar6) * *param_5;
        dVar22 = param_5[1] * (dVar20 - dVar6) - (dVar22 - dVar7) * param_5[2];
        if (9.99999993922529e-09 < dVar21 * dVar21 + dVar22 * dVar22 + dVar5 * dVar5) {
          local_d0 = dVar6 * dVar21 + dVar8 * dVar22 + dVar5 * dVar7;
          local_d8 = &local_c0;
          local_c0 = dVar22;
          local_b8 = dVar5;
          local_b0 = dVar21;
          iVar14 = FUN_1449c8de9(*param_6,*param_7,iVar14,(int)param_6[1]);
          lVar3 = *param_6;
          lVar15 = param_6[1];
          lVar13 = param_7[1];
          *param_6 = *param_7;
          param_6[1] = lVar13;
          local_a8._0_4_ = (undefined4)lVar3;
          local_a8._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
          uStack_a0._0_4_ = (undefined4)lVar15;
          uStack_a0._4_4_ = (undefined4)((ulonglong)lVar15 >> 0x20);
          *(undefined4 *)param_7 = (undefined4)local_a8;
          *(undefined4 *)((longlong)param_7 + 4) = local_a8._4_4_;
          *(undefined4 *)(param_7 + 1) = (undefined4)uStack_a0;
          *(undefined4 *)((longlong)param_7 + 0xc) = uStack_a0._4_4_;
          local_a8 = lVar3;
          uStack_a0 = lVar15;
        }
        lVar17 = lVar17 + 1;
      } while (((int)lVar17 < (int)uVar19) &&
              (dVar22 = dVar7, dVar20 = dVar6, dVar5 = dVar8, 1 < iVar14));
    }
  }
LAB_1404cacc2:
  *param_1 = *param_6;
  *(int *)(param_1 + 1) = iVar14;
  if ((local_90 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404cadbd FUN_1404cadbd body=853 status=ok
// SIG undefined FUN_1404cadbd(void)

longlong *
FUN_1404cadbd(longlong *param_1,longlong param_2,int param_3,longlong param_4,double *param_5,
             longlong *param_6,longlong *param_7)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  double *pdVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_f8 [32];
  double *local_d8;
  double local_d0;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar7 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0x58);
  uVar14 = 0;
  if (plVar7 != (longlong *)0x0) {
    cVar6 = *(char *)(*(longlong *)(param_2 + 0x28) + 0x60);
    if (cVar6 == '\x01') {
      uVar14 = (uint)*(byte *)(*plVar7 + 1 + (longlong)param_3 * 2);
    }
    else if (cVar6 == '\x02') {
      uVar14 = (int)*(short *)(*plVar7 + 2 + (longlong)param_3 * 4);
    }
    else {
      uVar14 = 0;
      if (cVar6 == '\x03') {
        uVar14 = *(uint *)(*plVar7 + 4 + (longlong)param_3 * 8);
      }
    }
  }
  uVar11 = *(uint *)(param_6 + 1);
  if ((int)uVar14 < (int)*(uint *)(param_6 + 1)) {
    uVar11 = uVar14;
  }
  uVar12 = (ulonglong)uVar11;
  if (0 < (int)uVar11) {
    lVar13 = (longlong)param_3;
    lVar16 = 0x10;
    uVar17 = 0;
    do {
      lVar8 = *(longlong *)(param_2 + 0x28);
      plVar7 = *(longlong **)(lVar8 + 0x58);
      uVar14 = 0xffffffff;
      if (plVar7 != (longlong *)0x0) {
        cVar6 = *(char *)(lVar8 + 0x60);
        if (cVar6 == '\x01') {
          uVar14 = (uint)*(byte *)(plVar7[2] + 1 + (*(byte *)(*plVar7 + lVar13 * 2) + uVar17) * 3);
        }
        else if (cVar6 == '\x02') {
          uVar14 = (uint)*(short *)(plVar7[2] + 2 +
                                   (longlong)((int)*(short *)(*plVar7 + lVar13 * 4) + (int)uVar17) *
                                   6);
        }
        else if (cVar6 == '\x03') {
          uVar14 = *(uint *)(plVar7[2] + 4 +
                            ((longlong)*(int *)(*plVar7 + lVar13 * 8) + uVar17) * 0xc);
        }
      }
      lVar8 = *(longlong *)(lVar8 + 0x30);
      lVar18 = (longlong)(int)uVar14;
      fVar1 = *(float *)(lVar8 + 8 + lVar18 * 0xc);
      fVar2 = *(float *)(lVar8 + 4 + lVar18 * 0xc);
      lVar9 = *param_6;
      *(double *)(lVar9 + -0x10 + lVar16) = (double)*(float *)(lVar8 + lVar18 * 0xc);
      *(double *)(lVar9 + -8 + lVar16) = (double)fVar2;
      *(double *)(lVar9 + lVar16) = (double)fVar1;
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + 0x18;
    } while (uVar12 != uVar17);
    if (uVar11 == 1) {
      uVar11 = 1;
    }
    else {
      uVar22 = (undefined4)*(undefined8 *)(param_4 + 0x40);
      uVar23 = (undefined4)((ulonglong)*(undefined8 *)(param_4 + 0x40) >> 0x20);
      uVar26 = (undefined4)*(undefined8 *)(param_4 + 0x38);
      uVar27 = (undefined4)((ulonglong)*(undefined8 *)(param_4 + 0x38) >> 0x20);
      pdVar15 = (double *)(param_4 + 0x10);
      uVar17 = 0;
      uVar24 = (int)*(undefined8 *)(param_4 + 0x30);
      uVar25 = (int)((ulonglong)*(undefined8 *)(param_4 + 0x30) >> 0x20);
      do {
        dVar20 = (double)CONCAT44(uVar27,uVar26);
        dVar21 = (double)CONCAT44(uVar23,uVar22);
        dVar3 = pdVar15[-2];
        dVar4 = pdVar15[-1];
        uVar26 = SUB84(dVar4,0);
        uVar27 = (undefined4)((ulonglong)dVar4 >> 0x20);
        dVar5 = *pdVar15;
        uVar22 = SUB84(dVar5,0);
        uVar23 = (undefined4)((ulonglong)dVar5 >> 0x20);
        dVar21 = dVar21 - dVar5;
        dVar20 = dVar20 - dVar4;
        dVar10 = (double)CONCAT44(uVar25,uVar24) - dVar3;
        dVar19 = *param_5 * dVar20 - dVar10 * param_5[1];
        dVar10 = dVar10 * param_5[2] - dVar21 * *param_5;
        dVar21 = param_5[1] * dVar21 - dVar20 * param_5[2];
        if (9.99999993922529e-09 < dVar19 * dVar19 + dVar21 * dVar21 + dVar10 * dVar10) {
          local_d0 = dVar5 * dVar19 + dVar3 * dVar21 + dVar4 * dVar10;
          local_d8 = &local_c0;
          local_c0 = dVar21;
          local_b8 = dVar10;
          local_b0 = dVar19;
          uVar12 = FUN_1449c8de9(*param_6,*param_7,uVar12 & 0xffffffff,(int)param_6[1]);
          lVar13 = *param_6;
          lVar16 = param_6[1];
          lVar8 = param_7[1];
          *param_6 = *param_7;
          param_6[1] = lVar8;
          local_a8._0_4_ = (undefined4)lVar13;
          local_a8._4_4_ = (undefined4)((ulonglong)lVar13 >> 0x20);
          uStack_a0._0_4_ = (undefined4)lVar16;
          uStack_a0._4_4_ = (undefined4)((ulonglong)lVar16 >> 0x20);
          *(undefined4 *)param_7 = (undefined4)local_a8;
          *(undefined4 *)((longlong)param_7 + 4) = local_a8._4_4_;
          *(undefined4 *)(param_7 + 1) = (undefined4)uStack_a0;
          *(undefined4 *)((longlong)param_7 + 0xc) = uStack_a0._4_4_;
          local_a8 = lVar13;
          uStack_a0 = lVar16;
        }
        uVar11 = (uint)uVar12;
        if (1 < uVar17) break;
        uVar17 = uVar17 + 1;
        pdVar15 = pdVar15 + 3;
        uVar24 = SUB84(dVar3,0);
        uVar25 = (int)((ulonglong)dVar3 >> 0x20);
      } while (1 < (int)uVar11);
    }
  }
  *param_1 = *param_6;
  *(uint *)(param_1 + 1) = uVar11;
  if ((local_90 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404cdb8a FUN_1404cdb8a body=560 status=ok
// SIG undefined FUN_1404cdb8a(void)

double * FUN_1404cdb8a(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar3;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar2;
  double dVar4;
  
  dVar12 = -*param_3;
  dVar13 = -param_3[1];
  dVar14 = param_3[2] * -1.0;
  dVar15 = param_3[3] * 1.0;
  dVar8 = *param_1;
  dVar9 = param_1[1];
  dVar10 = param_1[2];
  dVar11 = param_1[3];
  dVar1 = param_3[1];
  dVar2 = param_3[1];
  dVar3 = *param_3;
  dVar4 = *param_3;
  dVar7 = param_1[6] - param_3[6];
  dVar16 = param_1[4] - param_3[4];
  dVar17 = param_1[5] - param_3[5];
  dVar18 = dVar13 * dVar7 - dVar17 * dVar14;
  dVar18 = dVar18 + dVar18;
  dVar19 = dVar12 * dVar17 - dVar16 * dVar13;
  dVar19 = dVar19 + dVar19;
  dVar6 = dVar14 * dVar16 - dVar7 * dVar12;
  dVar6 = dVar6 + dVar6;
  dVar17 = (dVar14 * dVar18 - dVar19 * dVar12) + dVar15 * dVar6 + dVar17;
  *param_2 = dVar9 * dVar14 * -1.0 + ((dVar8 * dVar15 - dVar3 * dVar11 * 1.0) - dVar10 * dVar1);
  param_2[1] = dVar8 * dVar14 * 1.0 + ((dVar9 * dVar15 - dVar4 * dVar10 * -1.0) - dVar11 * dVar2);
  param_2[2] = dVar11 * dVar14 * 1.0 + dVar1 * dVar8 + (dVar15 * dVar10 - dVar3 * dVar9 * 1.0);
  param_2[3] = dVar10 * dVar14 * -1.0 + dVar2 * dVar9 + (dVar15 * dVar11 - dVar4 * dVar8 * -1.0);
  auVar5._8_4_ = SUB84(dVar17,0);
  auVar5._0_8_ = (dVar13 * dVar19 - dVar6 * dVar14) + dVar15 * dVar18 + dVar16;
  auVar5._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 4) = auVar5;
  param_2[6] = (dVar12 * dVar6 - dVar18 * dVar13) + dVar15 * dVar19 + dVar7;
  param_2[7] = 0.0;
  param_2[8] = 1.0;
  param_2[9] = 1.0;
  param_2[10] = 1.0;
  param_2[0xb] = 0.0;
  return param_2;
}



// FUNCTION 1404cddba FUN_1404cddba body=3786 status=ok
// SIG undefined FUN_1404cddba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404cddba(longlong *param_1,undefined8 *param_2,double *param_3,double *param_4,
                  double *param_5,double *param_6,double *param_7,double *param_8,undefined8 param_9
                  ,undefined8 param_10,double *param_11,double *param_12,double *param_13,
                  undefined8 param_14)

{
  double *pdVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  double *pdVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  uint uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auStack_338 [32];
  double *local_318;
  double *pdStack_310;
  double *local_308;
  double *local_300;
  undefined8 local_2f8;
  double local_2f0;
  double local_2e8;
  double *local_2e0;
  double local_2d8;
  double local_2d0;
  undefined1 local_2c8 [16];
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  undefined8 *local_290;
  double *pdStack_288;
  undefined1 *local_280;
  double *local_278;
  undefined8 local_270;
  longlong local_268;
  undefined8 uStack_260;
  longlong local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double local_228;
  double dStack_220;
  double local_218;
  double local_208;
  double local_200;
  double dStack_1f8;
  double dStack_1f0;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [24];
  longlong *local_1c0;
  double *local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double local_1a0;
  code *local_198;
  undefined8 **local_190;
  code *local_188;
  longlong **local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  double local_158 [13];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  local_1b8 = &local_1a0;
  local_1a0 = 0.0;
  local_1a8 = 0.0;
  uStack_1b0 = param_9;
  local_1e8._8_4_ = SUB84(param_3[1],0);
  local_1e8._0_8_ = -*param_3;
  local_1e8._12_4_ = (uint)((ulonglong)param_3[1] >> 0x20) ^ 0x80000000;
  local_1d8._8_4_ = SUB84(param_3[3] * 1.0,0);
  local_1d8._0_8_ = param_3[2] * -1.0;
  local_1d8._12_4_ = (int)((ulonglong)(param_3[3] * 1.0) >> 0x20);
  local_200 = -1.0;
  dStack_1f8 = 0.0;
  dStack_1f0 = 0.0;
  pdStack_310 = &local_208;
  local_208 = 3.4028234663852886e+38;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  local_308 = param_13;
  local_318 = &local_200;
  local_2e0 = param_4;
  local_1c0 = param_1;
  FUN_144917018(param_11,param_3,&local_178,local_158);
  uVar20 = (uint)((ulonglong)dStack_1f0 >> 0x20) ^ 0x80000000;
  uVar19 = SUB84(dStack_1f0,0);
  dVar24 = -local_200;
  dVar25 = -dStack_1f8;
  local_2f0 = (double)param_1[1];
  local_2e8 = (double)param_2[1];
  local_2d0 = local_2f0 + local_2e8;
  pdVar8 = param_11 + 0xc;
  iVar10 = 0x1e;
  dVar3 = local_208;
LAB_1404cdf93:
  dVar12 = dStack_1f0;
  dVar18 = dStack_1f8;
  dVar17 = local_200;
  local_280 = (undefined1 *)-dStack_1f0;
  local_290 = (undefined8 *)((ulonglong)local_200 ^ 0x8000000000000000);
  pdStack_288 = (double *)-dStack_1f8;
  local_318 = local_1b8;
  pdStack_310 = (double *)uStack_1b0;
  FUN_144916780(*(undefined8 *)(*local_1c0 + 0x28),&local_228,&local_290,local_1c0[1]);
  dVar13 = (double)local_1e8._0_8_ * dVar18 - dVar17 * (double)local_1e8._8_8_;
  dVar14 = (double)local_1d8._0_8_ * dVar17 - dVar12 * (double)local_1e8._0_8_;
  dVar16 = (double)local_1e8._8_8_ * dVar12 - dVar18 * (double)local_1d8._0_8_;
  dVar13 = dVar13 + dVar13;
  dVar14 = dVar14 + dVar14;
  dVar16 = dVar16 + dVar16;
  uVar31 = 0;
  uVar32 = 0;
  local_280 = (undefined1 *)
              (((double)local_1e8._0_8_ * dVar14 - dVar16 * (double)local_1e8._8_8_) +
              (double)local_1d8._8_8_ * dVar13 + dVar12);
  pdStack_288 = (double *)
                (((double)local_1d8._0_8_ * dVar16 - dVar13 * (double)local_1e8._0_8_) +
                (double)local_1d8._8_8_ * dVar14 + dVar18);
  local_290 = (undefined8 *)
              (((double)local_1e8._8_8_ * dVar13 - dVar14 * (double)local_1d8._0_8_) +
              dVar16 * (double)local_1d8._8_8_ + dVar17);
  pdStack_310 = (double *)param_10;
  local_318 = &local_1a8;
  FUN_144916780(*param_2,&local_248,&local_290,param_2[1]);
  dVar23 = local_1a0;
  dVar4 = local_1a8;
  dVar22 = *param_3;
  dVar30 = param_3[1];
  dVar29 = param_3[2];
  dVar17 = param_3[3];
  dVar18 = param_3[3];
  dVar16 = dStack_240 * dVar22 - local_248 * dVar30;
  dVar15 = local_238 * dVar30 - dStack_240 * dVar29;
  dVar21 = local_248 * dVar29 - dVar22 * local_238;
  dVar15 = dVar15 + dVar15;
  dVar21 = dVar21 + dVar21;
  dVar16 = dVar16 + dVar16;
  dVar13 = param_3[4];
  dVar14 = param_3[5];
  dVar12 = param_3[6];
  lVar6 = (longlong)(int)(uint)local_178;
  param_11[lVar6 * 3 + 2] = local_218;
  param_11[lVar6 * 3] = local_228;
  (param_11 + lVar6 * 3)[1] = dStack_220;
  param_11[lVar6 * 3 + 0xe] = local_238;
  pdVar8[lVar6 * 3] = local_248;
  (pdVar8 + lVar6 * 3)[1] = dStack_240;
  *(uint *)((longlong)&local_178 + lVar6 * 4 + 4) = (uint)local_178;
  local_178 = CONCAT44(local_178._4_4_,(uint)local_178 + 1);
  local_158[lVar6 * 3] =
       local_228 - ((dVar16 * dVar30 - dVar21 * dVar29) + dVar17 * dVar15 + local_248 + dVar13);
  local_158[lVar6 * 3 + 1] =
       dStack_220 - ((dVar29 * dVar15 - dVar22 * dVar16) + dVar18 * dVar21 + dStack_240 + dVar14);
  local_158[lVar6 * 3 + 2] =
       local_218 - (dVar16 * dVar17 + local_238 + (dVar21 * dVar22 - dVar15 * dVar30) + dVar12);
  local_318 = param_11;
  pdStack_310 = pdVar8;
  FUN_1449162b1(&local_200,local_158,&local_178,param_11 + 0x18);
  dVar17 = SQRT(dStack_1f0 * dStack_1f0 + local_200 * local_200 + dStack_1f8 * dStack_1f8);
  if ((double)param_13 <= dVar17) goto code_r0x0001404ce31c;
  *(uint *)(param_11 + 0x1c) = (uint)local_178;
  local_258 = 0;
  uStack_250 = 0;
  local_268 = 0;
  uStack_260 = 0;
  FUN_140268ec4(&local_258,8);
  FUN_140268ec4(&local_268,8);
  if (0 < (int)(uint)local_178) {
    pdVar8 = param_11 + 0xe;
    lVar6 = 0;
    do {
      uVar7 = uStack_250;
      lVar9 = (longlong)(int)uStack_250;
      uVar5 = (int)uStack_250 + 1;
      uStack_250 = CONCAT44(uStack_250._4_4_,uVar5);
      if (uStack_250._4_4_ < uVar5) {
        FUN_14026a4e8(&local_258,uVar7 & 0xffffffff);
      }
      uVar7 = uStack_260;
      *(double *)(local_258 + 0x10 + lVar9 * 0x18) = pdVar8[-0xc];
      dVar3 = pdVar8[-0xd];
      pdVar1 = (double *)(local_258 + lVar9 * 0x18);
      *pdVar1 = pdVar8[-0xe];
      pdVar1[1] = dVar3;
      dVar22 = pdVar8[-2];
      dVar30 = pdVar8[-1];
      dVar29 = *param_3;
      dVar15 = param_3[1];
      dVar21 = param_3[2];
      dVar18 = param_3[3];
      dVar3 = param_3[3];
      dVar27 = dVar30 * dVar29 - dVar22 * dVar15;
      dVar28 = *pdVar8 * dVar15 - dVar30 * dVar21;
      dVar26 = dVar22 * dVar21 - dVar29 * *pdVar8;
      dVar28 = dVar28 + dVar28;
      dVar26 = dVar26 + dVar26;
      dVar27 = dVar27 + dVar27;
      dVar14 = param_3[4];
      dVar16 = param_3[5];
      dVar12 = *pdVar8;
      dVar13 = param_3[6];
      lVar9 = (longlong)(int)uStack_260;
      uVar5 = (int)uStack_260 + 1;
      uStack_260 = CONCAT44(uStack_260._4_4_,uVar5);
      if (uStack_260._4_4_ < uVar5) {
        FUN_14026a4e8(&local_268,uVar7 & 0xffffffff);
      }
      pdVar1 = (double *)(local_268 + lVar9 * 0x18);
      *pdVar1 = (dVar27 * dVar15 - dVar26 * dVar21) + dVar18 * dVar28 + dVar22 + dVar14;
      pdVar1[1] = (dVar21 * dVar28 - dVar29 * dVar27) + dVar3 * dVar26 + dVar30 + dVar16;
      *(double *)(local_268 + 0x10 + lVar9 * 0x18) =
           dVar27 * dVar18 + dVar12 + (dVar26 * dVar29 - dVar28 * dVar15) + dVar13;
      lVar6 = lVar6 + 1;
      pdVar8 = pdVar8 + 3;
    } while (lVar6 < (int)(uint)local_178);
  }
  if (dVar23 <= dVar4) {
    dVar23 = dVar4;
  }
  local_280 = local_1e8;
  local_278 = &local_1a8;
  local_270 = param_10;
  local_180 = &local_1c0;
  local_188 = FUN_1462859e4;
  local_190 = &local_290;
  local_198 = FUN_145dc1f54;
  local_2f8 = param_14;
  local_300 = &local_2b0;
  local_308 = &local_248;
  pdStack_310 = &local_228;
  local_318 = &local_298;
  local_290 = param_2;
  pdStack_288 = param_3;
  uVar5 = FUN_144918d86(&local_258,&local_268);
  if (uVar5 < 2) {
    param_7[2] = local_218;
    *param_7 = local_228;
    param_7[1] = dStack_220;
    dVar3 = *param_3;
    dVar17 = -dVar3;
    dVar18 = -param_3[1];
    dVar24 = param_3[2] * -1.0;
    dVar25 = param_3[3] * 1.0;
    dVar12 = dStack_220 * dVar17 - local_228 * dVar18;
    dVar13 = local_218 * dVar18 - dStack_220 * dVar24;
    dVar14 = local_228 * dVar24 - dVar17 * local_218;
    dVar13 = dVar13 + dVar13;
    dVar14 = dVar14 + dVar14;
    dVar12 = dVar12 + dVar12;
    *param_8 = (dVar12 * dVar18 - dVar14 * dVar24) + dVar25 * dVar13 + local_228;
    param_8[1] = dVar3 * dVar12 + dVar24 * dVar13 + dVar25 * dVar14 + dStack_220;
    param_8[2] = dVar25 * dVar12 + local_218 + (dVar14 * dVar17 - dVar13 * dVar18);
    *local_2e0 = local_298 + local_2f0 + local_2e8;
    *param_5 = local_2f0 * local_228 + local_248;
    param_5[1] = local_2f0 * dStack_220 + dStack_240;
    param_5[2] = local_2f0 * local_218 + local_238;
    dVar12 = (local_2b0 - local_2e8 * local_228) - param_3[4];
    dVar13 = (local_2a8 - dStack_220 * local_2e8) - param_3[5];
    dVar18 = (local_2a0 - local_218 * local_2e8) - param_3[6];
    dVar17 = *param_3;
    dVar3 = param_3[2] * -1.0;
    dVar24 = param_3[3] * 1.0;
    dVar22 = -dVar17;
    dVar30 = -param_3[1];
    dVar16 = dVar12 * dVar3 - dVar22 * dVar18;
    dVar25 = dVar13 * dVar22 - dVar12 * dVar30;
    dVar14 = dVar18 * dVar30 - dVar13 * dVar3;
    dVar14 = dVar14 + dVar14;
    dVar16 = dVar16 + dVar16;
    dVar25 = dVar25 + dVar25;
    *param_6 = (dVar25 * dVar30 - dVar16 * dVar3) + dVar24 * dVar14 + dVar12;
    param_6[1] = dVar17 * dVar25 + dVar3 * dVar14 + dVar24 * dVar16 + dVar13;
    param_6[2] = dVar24 * dVar25 + dVar18 + (dVar16 * dVar22 - dVar14 * dVar30);
    *param_12 = dVar23;
    if (local_268 != 0) {
      FUN_1400020a8();
    }
    if (local_258 != 0) {
      FUN_1400020a8();
    }
    goto LAB_1404ce5ea;
  }
  if (uVar5 == 3) {
    uVar19 = SUB84(local_218,0);
    uVar20 = (uint)((ulonglong)local_218 >> 0x20);
    dVar17 = (double)((ulonglong)local_298 ^ DAT_149931e80);
    uVar31 = DAT_149931e80._8_4_;
    uVar32 = DAT_149931e80._12_4_;
    dVar24 = local_228;
    dVar25 = dStack_220;
  }
  if (local_268 != 0) {
    FUN_1400020a8();
  }
  if (local_258 != 0) {
    FUN_1400020a8();
  }
  goto LAB_1404ce39e;
code_r0x0001404ce31c:
  bVar2 = dVar3 <= dVar17;
  dVar3 = 1.0 / dVar17;
  local_200 = local_200 * dVar3;
  dStack_1f8 = dStack_1f8 * dVar3;
  dStack_1f0 = dStack_1f0 * dVar3;
  uVar20 = (uint)((ulonglong)dStack_1f0 >> 0x20) ^ 0x80000000;
  uVar19 = SUB84(dStack_1f0,0);
  dVar24 = -local_200;
  dVar25 = -dStack_1f8;
  bVar11 = iVar10 == 0;
  iVar10 = iVar10 + -1;
  dVar3 = dVar17;
  if (bVar11 || bVar2) {
    if (dVar23 <= dVar4) {
      dVar23 = dVar4;
    }
    *(uint *)(param_11 + 0x1c) = (uint)local_178;
LAB_1404ce39e:
    local_2c8._8_4_ = uVar31;
    local_2c8._0_8_ = dVar17;
    local_2c8._12_4_ = uVar32;
    if ((int)(uint)local_178 < 1) {
      dVar18 = 0.0;
      dVar12 = 0.0;
      dVar3 = 0.0;
      dVar13 = 0.0;
      dVar14 = 0.0;
      dVar16 = 0.0;
    }
    else {
      pdVar8 = param_11 + 0xe;
      dVar16 = 0.0;
      uVar7 = 0;
      dVar14 = 0.0;
      dVar13 = 0.0;
      dVar3 = 0.0;
      dVar12 = 0.0;
      dVar18 = 0.0;
      do {
        dVar22 = (param_11 + 0x18)[uVar7];
        dVar16 = dVar16 + pdVar8[-0xc] * dVar22;
        dVar14 = dVar14 + pdVar8[-0xd] * dVar22;
        dVar13 = dVar13 + pdVar8[-0xe] * dVar22;
        dVar3 = dVar3 + *pdVar8 * dVar22;
        dVar12 = dVar12 + pdVar8[-1] * dVar22;
        dVar18 = dVar18 + dVar22 * pdVar8[-2];
        uVar7 = uVar7 + 1;
        pdVar8 = pdVar8 + 3;
      } while ((uint)local_178 != uVar7);
    }
    *param_7 = dVar24;
    param_7[1] = dVar25;
    param_7[2] = (double)CONCAT44(uVar20,uVar19);
    dVar4 = *param_3;
    dVar27 = -dVar4;
    dVar28 = -param_3[1];
    dVar15 = param_3[2] * -1.0;
    dVar21 = param_3[3] * 1.0;
    dVar29 = dVar24 * dVar15 - dVar27 * (double)CONCAT44(uVar20,uVar19);
    dVar22 = dVar25 * dVar27 - dVar24 * dVar28;
    dVar30 = (double)CONCAT44(uVar20,uVar19) * dVar28 - dVar25 * dVar15;
    dVar30 = dVar30 + dVar30;
    dVar29 = dVar29 + dVar29;
    dVar22 = dVar22 + dVar22;
    *param_8 = (dVar22 * dVar28 - dVar29 * dVar15) + dVar21 * dVar30 + dVar24;
    param_8[1] = dVar4 * dVar22 + dVar15 * dVar30 + dVar21 * dVar29 + dVar25;
    param_8[2] = dVar21 * dVar22 + (double)CONCAT44(uVar20,uVar19) +
                 (dVar29 * dVar27 - dVar30 * dVar28);
    *local_2e0 = local_2d0 - dVar17;
    dVar24 = param_7[2];
    dVar25 = param_7[1];
    *param_5 = local_2f0 * *param_7 + dVar13;
    param_5[1] = dVar25 * local_2f0 + dVar14;
    param_5[2] = dVar24 * local_2f0 + dVar16;
    dVar24 = param_8[2];
    dVar25 = param_8[1];
    *param_6 = dVar18 - local_2e8 * *param_8;
    param_6[1] = dVar12 - dVar25 * local_2e8;
    param_6[2] = dVar3 - dVar24 * local_2e8;
    *param_12 = dVar23;
    local_2d8 = dVar23;
LAB_1404ce5ea:
    if ((local_f0 ^ (ulonglong)auStack_338) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  goto LAB_1404cdf93;
}



// FUNCTION 1404d1282 FUN_1404d1282 body=88 status=ok
// SIG undefined FUN_1404d1282(void)

void FUN_1404d1282(longlong param_1)

{
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x28)) {
    FUN_1406b31c8(param_1 + 0x20);
  }
  FUN_1404d12da(param_1 + 0x48);
  FUN_1404d13b8(param_1 + 0x2c0);
  if (*(int *)(param_1 + 0x3a4) == *(int *)(param_1 + 0x3a0)) {
    return;
  }
  FUN_14481578e(param_1 + 0x398);
  return;
}



// FUNCTION 1404d12da FUN_1404d12da body=163 status=ok
// SIG undefined FUN_1404d12da(void)

void FUN_1404d12da(longlong param_1)

{
  FUN_1404d137e(param_1 + 8);
  FUN_1404d137e(param_1 + 0x30);
  FUN_1404d137e(param_1 + 0x58);
  FUN_1404d137e(param_1 + 0x80);
  FUN_1404d137e(param_1 + 0xb0);
  FUN_1404d137e(param_1 + 0xe0);
  FUN_1404d137e(param_1 + 0x110);
  FUN_1404d137e(param_1 + 0x140);
  FUN_1404d137e(param_1 + 0x170);
  FUN_1404d137e(param_1 + 0x1a0);
  FUN_1404d137e(param_1 + 0x1d0);
  FUN_1404d137e(param_1 + 0x1f8);
  FUN_1404d137e(param_1 + 0x220);
  return;
}



// FUNCTION 1404d137e FUN_1404d137e body=58 status=ok
// SIG undefined FUN_1404d137e(void)

void FUN_1404d137e(longlong param_1)

{
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x10)) {
    FUN_1406b368a(param_1 + 8);
  }
  if (*(int *)(param_1 + 0x24) == *(int *)(param_1 + 0x20)) {
    return;
  }
  FUN_1406b44a4(param_1 + 0x18);
  return;
}



// FUNCTION 1404d13b8 FUN_1404d13b8 body=810 status=ok
// SIG undefined FUN_1404d13b8(void)

void FUN_1404d13b8(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  bool bVar14;
  
  if (*(int *)(param_1 + 0xc) != *(int *)(param_1 + 8)) {
    FUN_1404d18a6(param_1);
  }
  if (*(int *)(param_1 + 0x1c) != *(int *)(param_1 + 0x18)) {
    FUN_1404d18a6(param_1 + 0x10);
  }
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x28)) {
    FUN_140c8bc4a(param_1 + 0x20);
  }
  if ((longlong)*(int *)(param_1 + 0x38) == 0) {
    iVar4 = 0;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x30);
    lVar1 = lVar6 + (longlong)*(int *)(param_1 + 0x38) * 0x48;
    do {
      if (*(int *)(lVar6 + 0x2c) != *(int *)(lVar6 + 0x28)) {
        FUN_1404d1bb6(lVar6 + 0x20);
      }
      iVar4 = 0;
      if ((longlong)*(int *)(lVar6 + 0x38) != 0) {
        lVar7 = *(longlong *)(lVar6 + 0x30);
        lVar13 = (longlong)*(int *)(lVar6 + 0x38) << 4;
        do {
          if (*(int *)(lVar7 + 0xc) != *(int *)(lVar7 + 8)) {
            FUN_140826346(lVar7);
          }
          lVar7 = lVar7 + 0x10;
          lVar13 = lVar13 + -0x10;
        } while (lVar13 != 0);
        iVar4 = *(int *)(lVar6 + 0x38);
      }
      if (*(int *)(lVar6 + 0x3c) != iVar4) {
        FUN_1407ed7ac(lVar6 + 0x30);
      }
      lVar6 = lVar6 + 0x48;
    } while (lVar6 != lVar1);
    iVar4 = *(int *)(param_1 + 0x38);
  }
  if (*(int *)(param_1 + 0x3c) != iVar4) {
    FUN_1404d1988(param_1 + 0x30);
  }
  if (*(int *)(param_1 + 100) != *(int *)(param_1 + 0x60)) {
    FUN_1404d16e2(param_1 + 0x58);
  }
  if (*(int *)(param_1 + 0x74) != *(int *)(param_1 + 0x70)) {
    FUN_1404d17c4(param_1 + 0x68);
  }
  if (*(int *)(param_1 + 0xa4) != *(int *)(param_1 + 0xa0)) {
    FUN_1404d1ad4(param_1 + 0x98);
  }
  if (*(int *)(param_1 + 0xb4) != *(int *)(param_1 + 0xb0)) {
    FUN_1402191ca(param_1 + 0xa8);
  }
  plVar3 = *(longlong **)(param_1 + 0xb8);
  if (plVar3 != (longlong *)0x0) {
    iVar4 = (int)plVar3[5];
    if (iVar4 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = -1;
      plVar9 = (longlong *)plVar3[4];
      if ((longlong *)plVar3[4] == (longlong *)0x0) {
        plVar9 = plVar3 + 2;
      }
      uVar11 = (ulonglong)(iVar4 + 0x1fU >> 5);
      iVar10 = -0x3e - (iVar4 + 0x1fU & 0xffffffe0);
      uVar8 = 0xffffffff >> (-(char)iVar4 & 0x1fU);
      do {
        bVar14 = uVar11 == 0;
        uVar11 = uVar11 - 1;
        if (bVar14) goto LAB_1404d1599;
        iVar10 = iVar10 + 0x20;
        uVar12 = uVar8 & *(uint *)((longlong)plVar9 + uVar11 * 4);
        uVar8 = 0xffffffff;
      } while (uVar12 == 0);
      uVar11 = (ulonglong)uVar12 * 2 + 1;
      lVar1 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar5 = -(((uint)lVar1 ^ 0x3f) + iVar10);
    }
LAB_1404d1599:
    iVar4 = iVar5 + 1;
    iVar10 = (int)plVar3[1];
    if (iVar4 < iVar10) {
      if ((0 < *(int *)((longlong)plVar3 + 0x34)) &&
         (uVar11 = (ulonglong)*(uint *)(plVar3 + 6), *(uint *)(plVar3 + 6) != 0xffffffff)) {
        lVar1 = *plVar3;
        do {
          lVar6 = (longlong)(int)uVar11;
          if (iVar5 < (int)uVar11) {
            iVar10 = *(int *)(lVar1 + lVar6 * 0x48);
            iVar2 = *(int *)(lVar1 + 4 + lVar6 * 0x48);
            uVar11 = (ulonglong)iVar2;
            if (uVar11 != 0xffffffffffffffff) {
              *(int *)(lVar1 + uVar11 * 0x48) = iVar10;
            }
            if (iVar10 == -1) {
              *(int *)(plVar3 + 6) = iVar2;
            }
            else {
              *(int *)(lVar1 + 4 + (longlong)iVar10 * 0x48) = iVar2;
            }
            *(int *)((longlong)plVar3 + 0x34) = *(int *)((longlong)plVar3 + 0x34) + -1;
          }
          else {
            uVar11 = (ulonglong)*(uint *)(lVar1 + 4 + lVar6 * 0x48);
          }
        } while ((int)uVar11 != -1);
        iVar10 = (int)plVar3[1];
      }
      if (iVar10 != iVar4) {
        *(int *)(plVar3 + 1) = iVar4;
      }
      FUN_144a6134a(plVar3 + 2,iVar4,(int)plVar3[5] - iVar4);
      iVar10 = (int)plVar3[1];
    }
    if (*(int *)((longlong)plVar3 + 0xc) != iVar10) {
      FUN_1403af08a(plVar3,iVar10);
      iVar10 = (int)plVar3[1];
    }
    uVar8 = iVar10 - *(int *)((longlong)plVar3 + 0x34);
    iVar4 = 1;
    if (3 < uVar8) {
      uVar11 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar8 && (int)plVar3[9] < iVar4) || (iVar4 < (int)plVar3[9])) {
      *(int *)(plVar3 + 9) = iVar4;
      FUN_140a89550(plVar3);
    }
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1404d12da();
  }
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return;
  }
  FUN_1404d12da();
  return;
}



// FUNCTION 1404d16e2 FUN_1404d16e2 body=226 status=ok
// SIG undefined FUN_1404d16e2(void)

void FUN_1404d16e2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1404d17c4 FUN_1404d17c4 body=226 status=ok
// SIG undefined FUN_1404d17c4(void)

void FUN_1404d17c4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1404d18a6 FUN_1404d18a6 body=226 status=ok
// SIG undefined FUN_1404d18a6(void)

void FUN_1404d18a6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1404d1988 FUN_1404d1988 body=332 status=ok
// SIG undefined FUN_1404d1988(void)

void FUN_1404d1988(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x48;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1404d19f6;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_1404d19f6:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x48)) {
      uVar5 = uVar3 / 0x48 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x48,8);
  }
  return;
}



// FUNCTION 1404d1ad4 FUN_1404d1ad4 body=226 status=ok
// SIG undefined FUN_1404d1ad4(void)

void FUN_1404d1ad4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1404d1bb6 FUN_1404d1bb6 body=226 status=ok
// SIG undefined FUN_1404d1bb6(void)

void FUN_1404d1bb6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1404d1c98 FUN_1404d1c98 body=478 status=ok
// SIG undefined FUN_1404d1c98(void)

void FUN_1404d1c98(longlong *param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  float fVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1404d1fb0();
  if (*(char *)((longlong)param_1 + 0x452) == '\0') {
    uVar5 = FUN_1447210f0(param_1);
    FUN_1404d1e78(&local_40,uVar5);
    if (((local_40 != 0) && (local_38 != (longlong *)0x0)) && (0 < (int)local_38[1])) {
      iVar4 = (int)local_38[1];
      do {
        if (iVar4 == 0) {
          plVar7 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_38[1];
        bVar8 = iVar4 == iVar3;
        if (bVar8) {
          *(int *)(local_38 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar7 = local_38;
      } while (!bVar8);
      lVar6 = 0;
      if (plVar7 != (longlong *)0x0) {
        lVar6 = local_40;
      }
      if ((char)param_1[0x9f] == '\x01') {
        *(undefined4 *)(param_1 + 0x85) = *(undefined4 *)(lVar6 + 500);
      }
      else {
        fVar9 = (float)(-(uint)(*(float *)(lVar6 + 0x1f8) != 0.0) &
                       (uint)(param_2 / *(float *)(lVar6 + 0x1f8))) + *(float *)(lVar6 + 500);
        *(float *)(param_1 + 0x85) = fVar9;
        FUN_1404d222a(lVar6,fVar9,1);
        if ((1.0 <= *(float *)(param_1 + 0x85)) && ((char)param_1[0x2f] == '\x03')) {
          FUN_14571a2b8(lVar6);
          fVar9 = *(float *)(param_1 + 0x85);
          *(float *)(param_1 + 0x85) = fVar9 + -1.0;
          FUN_1404d222a(lVar6,fVar9 + -1.0,1);
          if (*(float *)(param_1 + 0x85) <= 1.0 && *(float *)(param_1 + 0x85) != 1.0) {
            *(int *)((longlong)param_1 + 0x4f4) = *(int *)((longlong)param_1 + 0x4f4) + 1;
            (**(code **)(*param_1 + 0x578))(param_1);
            FUN_144a62f0c(param_1,param_1[5],0xc);
          }
        }
      }
      if (plVar7 != (longlong *)0x0) {
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
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404d1e78 FUN_1404d1e78 body=310 status=ok
// SIG undefined FUN_1404d1e78(void)

longlong * FUN_1404d1e78(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = DAT_14cb54790;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,param_2);
    plVar1 = local_30;
    if (local_38 != 0) {
      if (local_30 == (longlong *)0x0) {
        *param_1 = local_38;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        *param_1 = local_38;
        if ((longlong *)param_1[1] != local_30) {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
        }
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar1)(plVar1);
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404d1fb0 FUN_1404d1fb0 body=603 status=ok
// SIG undefined FUN_1404d1fb0(void)

void FUN_1404d1fb0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((((*(uint *)(param_1 + 8) & 0x10) == 0) && (lVar4 = *(longlong *)(param_1 + 0x20), lVar4 != 0)
      ) && (-1 < (short)*(undefined4 *)(lVar4 + 8))) {
    uVar1 = *(uint *)(lVar4 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
      if (DAT_14cae8b20 == 0) {
        local_50 = &local_38;
        local_38 = (code *)&LAB_14355090c;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_14081d0ea;
        local_58 = &LAB_147b8e16d;
        local_60 = (code *)&LAB_140810a38;
        local_68 = L"Engine";
        local_70 = 0x800000000;
        local_78 = 0x10000000;
        local_80 = 8;
        local_88 = 0x3f0;
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar4 = DAT_14cae8b20;
      if (DAT_14c951858 == 0) {
        local_50 = &local_38;
        local_38 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_14081d0ea;
        local_58 = &LAB_1468c5283;
        local_60 = FUN_142809da0;
        local_68 = L"Engine";
        local_70 = 0x400000000;
        local_78 = 0x10000000;
        local_80 = 8;
        local_88 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar3 = *(longlong *)(param_1 + 0x20);
      if (lVar3 != 0) {
        iVar2 = *(int *)(lVar4 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar2) ||
             (lVar5 = lVar3,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar2 * 8)
             != lVar4 + 0x30)) {
            lVar5 = 0;
          }
        } while ((lVar5 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
        if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0xc0) != 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404d222a FUN_1404d222a body=1249 status=ok
// SIG undefined FUN_1404d222a(void)

void FUN_1404d222a(longlong param_1,undefined4 param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 **ppuVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong lVar16;
  bool bVar17;
  undefined4 uVar18;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 *local_90;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined4 *)(param_1 + 500) = param_2;
  if (((((*(int *)(param_1 + 0x28c) != 0) && (uVar4 = *(uint *)(param_1 + 0x288), -1 < (int)uVar4))
       && ((int)uVar4 < DAT_14c9647dc)) &&
      ((lVar13 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar13 != 0 &&
       (*(int *)(lVar13 + 0x10) == *(int *)(param_1 + 0x28c))))) &&
     ((*(uint *)(lVar13 + 8) & 0x10200000) == 0)) {
    lVar13 = *(longlong *)(param_1 + 0x270);
    if (lVar13 == 0) {
      uVar10 = FUN_1407f787c();
      lVar13 = FUN_14477b664(uVar10);
      *(longlong *)(param_1 + 0x270) = lVar13;
    }
    lVar11 = *(longlong *)(param_1 + 0x278);
    if (lVar11 == 0) {
      if ((lVar13 != 0) && (*(longlong *)(param_1 + 0x268) != 0)) {
        plVar15 = *(longlong **)(lVar13 + 0xb8);
        if ((plVar15 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar7 == '\0')) {
          *(undefined8 *)(param_1 + 0x278) = 0;
        }
        else {
          uVar10 = (**(code **)(*plVar15 + 0x110))(plVar15);
          lVar11 = FUN_144aff482(uVar10,(longlong *)(param_1 + 0x268));
          *(longlong *)(param_1 + 0x278) = lVar11;
          if (lVar11 != 0) goto LAB_1404d22dc;
        }
      }
    }
    else {
LAB_1404d22dc:
      if (DAT_14cb259f8 != 0) {
        FUN_1447eec96(DAT_14cb259f8,lVar11,param_2,0);
      }
    }
    if ((((*(int *)(param_1 + 0x264) != 0) && (uVar4 = *(uint *)(param_1 + 0x260), -1 < (int)uVar4))
        && ((int)uVar4 < DAT_14c9647dc)) &&
       (((puVar9 = (undefined8 *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
         puVar9 != (undefined8 *)0x0 && (*(int *)(puVar9 + 2) == *(int *)(param_1 + 0x264))) &&
        ((*(uint *)(puVar9 + 1) & 0x10200000) == 0)))) {
      if (*(int *)(param_1 + 0x28c) == 0) {
LAB_1404d2668:
        uVar10 = 0;
      }
      else {
        uVar4 = *(uint *)(param_1 + 0x288);
        uVar10 = 0;
        if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
          puVar12 = (undefined8 *)
                    ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
          if ((puVar12 == (undefined8 *)0x0) ||
             ((*(int *)(puVar12 + 2) != *(int *)(param_1 + 0x28c) ||
              ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_1404d2668;
          uVar10 = *puVar12;
        }
      }
      if ((*(uint *)(puVar9 + 1) & 0x10200000) == 0) {
        uVar14 = *puVar9;
      }
      else {
        uVar14 = 0;
      }
      uVar10 = FUN_1448e494c(uVar10,uVar14);
      FUN_14490d20c(uVar10,DAT_14cb543b0,*(undefined4 *)(param_1 + 500));
    }
  }
  uVar18 = FUN_1404fc0d6(param_1);
  if ((param_3 == '\0') || (*(char *)(param_1 + 0x1fc) != '\0')) {
    if ((*(longlong *)(param_1 + 0x200) != 0) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x200) + 0xa0) & 1) == 0)) {
      FUN_14009fd82(DAT_14c82b500,param_1 + 0x200,0xff);
    }
    FUN_1449cffd4(param_1,*(undefined4 *)(param_1 + 500),uVar18);
    FUN_1449cea6e(param_1);
  }
  else if ((*(longlong *)(param_1 + 0x180) != 0) && (*(longlong *)(param_1 + 400) != 0)) {
    plVar15 = *(longlong **)(param_1 + 0x18);
    if (plVar15 == (longlong *)0x0) {
LAB_1404d259a:
      local_4c = *(undefined4 *)(param_1 + 500);
      bVar17 = true;
      plVar15 = (longlong *)0x0;
      uVar10 = 0;
    }
    else {
      iVar8 = (int)plVar15[1];
      do {
        if (iVar8 == 0) goto LAB_1404d259a;
        LOCK();
        iVar6 = (int)plVar15[1];
        bVar17 = iVar8 == iVar6;
        if (bVar17) {
          *(int *)(plVar15 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
      } while (!bVar17);
      uVar10 = *(undefined8 *)(param_1 + 0x10);
      LOCK();
      *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar15 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
      local_4c = *(undefined4 *)(param_1 + 500);
      LOCK();
      *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
      UNLOCK();
      bVar17 = false;
    }
    local_78 = 0;
    local_68 = &PTR_LAB_14afe2ea0;
    local_88 = FUN_143c30a5a;
    local_98 = 0xff;
    local_60 = uVar10;
    local_58 = plVar15;
    local_50 = uVar18;
    FUN_14014aede(&local_90);
    ppuVar3 = (undefined8 **)(param_1 + 0x200);
    if (ppuVar3 == &local_90) {
LAB_1404d2626:
      if (local_90 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(local_90 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*local_90)(local_90,1);
        }
      }
    }
    else {
      puVar9 = *ppuVar3;
      *ppuVar3 = local_90;
      local_90 = (undefined8 *)0x0;
      if (puVar9 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar9 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar9)(puVar9,1);
        }
        goto LAB_1404d2626;
      }
    }
    *(undefined1 *)(param_1 + 0x1fc) = 1;
    if (!bVar17) {
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if ((longlong)*(int *)(param_1 + 0x428) < 1) goto LAB_1404d2504;
  lVar13 = *(longlong *)(param_1 + 0x420);
  lVar5 = (longlong)*(int *)(param_1 + 0x428) * 0xc;
  lVar11 = *(longlong *)(lVar13 + -0xc + lVar5);
  lVar16 = 0;
  do {
    if (*(float *)(lVar13 + 8 + lVar16) <= *(float *)(param_1 + 500)) {
      lVar11 = *(longlong *)(lVar13 + lVar16);
    }
    lVar16 = lVar16 + 0xc;
  } while (lVar5 != lVar16);
  if (*(longlong *)(param_1 + 0x430) == lVar11) goto LAB_1404d2504;
  *(longlong *)(param_1 + 0x430) = lVar11;
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_1404d266f:
    uVar10 = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 8);
    uVar10 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      puVar9 = (undefined8 *)
               ((ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((puVar9 == (undefined8 *)0x0) ||
         ((*(int *)(puVar9 + 2) != *(int *)(param_1 + 0xc) ||
          ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) goto LAB_1404d266f;
      uVar10 = *puVar9;
    }
  }
  FUN_14093b762(param_1 + 0x300,lVar11,uVar10);
LAB_1404d2504:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404d270c FUN_1404d270c body=257 status=ok
// SIG undefined FUN_1404d270c(void)

undefined8 FUN_1404d270c(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0xf0);
  if ((lVar4 == 0) || (lVar1 = *(longlong *)(param_1 + 0x118), lVar1 == 0)) {
LAB_1404d27e6:
    uVar3 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x3c) == '\x01') {
      if ((*(int *)(param_1 + 0x88) != 0) ||
         (cVar2 = FUN_1405c0798(*(undefined8 *)(param_1 + 0x268),
                                CONCAT71((int7)((ulonglong)lVar1 >> 8),1)), cVar2 != '\0'))
      goto LAB_1404d27e6;
    }
    else if (*(char *)(param_1 + 0x3c) == '\0') {
      if (((((*(char *)(lVar1 + 0x348) == '\x04') && (*(int *)(lVar1 + 0x1e0) < 1)) &&
           (*(int *)(lVar1 + 0x1f8) < 1)) && (*(int *)(lVar1 + 0x368) == 0)) ||
         (((*(char *)(lVar4 + 0x348) == '\x04' && (*(int *)(lVar4 + 0x1e0) < 1)) &&
          ((*(int *)(lVar4 + 0x1f8) < 1 && (*(int *)(lVar4 + 0x368) == 0)))))) goto LAB_1404d27e6;
      if (0 < (longlong)*(int *)(param_1 + 0x88)) {
        lVar4 = 0;
        do {
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + lVar4);
          if (((*(char *)(lVar1 + 0x348) == '\x04') && (*(int *)(lVar1 + 0x1e0) < 1)) &&
             ((*(int *)(lVar1 + 0x1f8) < 1 && (*(int *)(lVar1 + 0x368) == 0)))) goto LAB_1404d27e6;
          lVar4 = lVar4 + 0x58;
        } while ((longlong)*(int *)(param_1 + 0x88) * 0x58 - lVar4 != 0);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1404d2816 FUN_1404d2816 body=229 status=ok
// SIG undefined FUN_1404d2816(void)

void FUN_1404d2816(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) < 0) {
    FUN_147f5ba20(plVar1,0);
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x18);
    lVar7 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar7);
      if (lVar5 != 0) {
        lVar6 = FUN_140e2e6d8();
        if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
          local_40 = 0;
          FUN_14485c47a(&local_40,lVar5);
          iVar3 = *(int *)(param_1 + 0x40);
          *(uint *)(param_1 + 0x40) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0x44) < iVar3 + 1U) {
            FUN_147f5ba80(plVar1,iVar3);
          }
          *(undefined8 *)(*plVar1 + (longlong)iVar3 * 8) = local_40;
        }
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar2 * 8 != lVar7);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404d28fc FUN_1404d28fc body=94 status=ok
// SIG undefined FUN_1404d28fc(void)

void FUN_1404d28fc(undefined8 param_1)

{
  int *piVar1;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = (undefined8 *)0x0;
  FUN_1404d295c(param_1,&local_18);
  if (local_18 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_18 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_18)(local_18,1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404d295c FUN_1404d295c body=1018 status=ok
// SIG undefined FUN_1404d295c(void)

void FUN_1404d295c(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 *lpTlsValue;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lpTlsValue = TlsGetValue(DAT_14c896140);
  if (lpTlsValue == (undefined8 *)0x0) {
    lpTlsValue = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *lpTlsValue = 0;
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
    TlsSetValue(DAT_14c896140,lpTlsValue);
  }
  puVar7 = (undefined8 *)lpTlsValue[1];
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*lpTlsValue;
    if (puVar7 == (undefined8 *)0x0) {
      uVar10 = (uint)DAT_14c896180;
      uVar3 = DAT_14c896180;
      while (DAT_14c896180 = uVar3, local_58 = uVar3, (uVar3 & 0x3ffffff) != 0) {
        local_60 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
        if (local_60 >> 0x1a < uVar3 >> 0x1a) {
          FUN_14000f986(0x3a83126f);
        }
        uVar9 = (ulonglong)((uVar10 & 0x3ffffff) >> 0xe);
        uVar11 = (ulonglong)((uint)uVar3 & 0x3fff);
        local_60 = local_60 & 0xfffffffffc000000 |
                   (ulonglong)
                   *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar9 * 8) + 0x10 + uVar11 * 0x18);
        LOCK();
        bVar12 = local_58 == DAT_14c896180;
        uVar3 = local_60;
        if (!bVar12) {
          uVar3 = DAT_14c896180;
        }
        DAT_14c896180 = uVar3;
        UNLOCK();
        if (bVar12) {
          *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar9 * 8) + uVar11 * 0x18 + 0x10) = 0;
          puVar7 = *(undefined8 **)
                    (*(longlong *)(&DAT_14c833b00 + uVar9 * 8) + 8 +
                    (ulonglong)(uVar10 & 0x3fff) * 0x18);
          FUN_1447d080c(uVar10 & 0x3ffffff);
          lpTlsValue[1] = puVar7;
          if (puVar7 != (undefined8 *)0x0) goto LAB_1404d2af9;
          goto LAB_1404d2d0d;
        }
        uVar10 = (uint)DAT_14c896180;
        uVar3 = DAT_14c896180;
      }
      lpTlsValue[1] = 0;
LAB_1404d2d0d:
      puVar7 = (undefined8 *)FUN_14001cc68(0x10000,0);
      lpTlsValue[1] = puVar7;
      iVar4 = 0xff;
      puVar8 = puVar7;
      do {
        puVar5 = puVar8 + 0x20;
        *puVar8 = puVar5;
        iVar4 = iVar4 + -1;
        puVar8 = puVar5;
      } while (iVar4 != 0);
    }
    else {
      lpTlsValue[1] = puVar7;
      puVar5 = lpTlsValue;
    }
    *puVar5 = 0;
LAB_1404d2af9:
    *(undefined4 *)(lpTlsValue + 2) = 0x100;
    iVar4 = 0xff;
  }
  else {
    iVar4 = *(int *)(lpTlsValue + 2) + -1;
  }
  lpTlsValue[1] = *puVar7;
  *(int *)(lpTlsValue + 2) = iVar4;
  *puVar7 = UE::Tasks::Private::FTaskBase::vftable;
  puVar7[1] = &DAT_100000002;
  puVar7[2] = 0;
  *(undefined4 *)(puVar7 + 3) = 0;
  *(undefined4 *)(puVar7 + 4) = 0xffffffff;
  puVar7[6] = 0;
  puVar7[7] = 0x100000000;
  *(undefined1 *)(puVar7 + 8) = 1;
  puVar7[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateDummy::vftable;
  puVar7[0xf] = 0;
  puVar7[0x10] = 0xe800000000000020;
  puVar7[0x12] = 0;
  puVar7[0x13] = 0x100000000;
  *(undefined2 *)(puVar7 + 0x14) = 0;
  LOCK();
  bVar12 = *(char *)(puVar7 + 8) == '\x01';
  if (bVar12) {
    *(char *)(puVar7 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar12) {
    FUN_14008cdb0(puVar7 + 8);
  }
  *puVar7 = &PTR_FUN_149ee99a8;
  if (*(code **)(puVar7[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar7[0xe] + 0x18))(puVar7 + 0xe,puVar7 + 9);
  }
  puVar7[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                ::vftable;
  puVar7[9] = puVar7;
  puVar7[10] = puVar7;
  lVar2 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar2 + 0x30);
  }
  puVar7[0xf] = uVar6;
  puVar7[0x10] = 0xc80000527b6b7400;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = 1;
  puVar7[0x15] = param_1;
  *puVar7 = &PTR_FUN_149ee9998;
  FUN_1400e88c2(puVar7,param_2);
  local_58 = CONCAT71(local_58._1_7_,1);
  FUN_1447439e4(puVar7);
  if (puVar7 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar7 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar7)(puVar7,1);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404d2d58 FUN_1404d2d58 body=603 status=ok
// SIG undefined FUN_1404d2d58(void)

ulonglong FUN_1404d2d58(longlong param_1,undefined8 param_2,int *param_3)

{
  PSRWLOCK SRWLock;
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x58));
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 0) {
    uVar13 = 1;
    uVar10 = 0;
    iVar3 = 0;
    iVar11 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x18);
    }
    uVar9 = *puVar5;
    if (uVar9 == 0) {
      iVar3 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar3 = iVar1 + -1;
      }
      uVar15 = 0;
      uVar13 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar13 = uVar15;
      }
      uVar10 = 0;
      iVar11 = 0;
      do {
        if (uVar13 == uVar10) goto LAB_1404d2f4b;
        iVar11 = iVar11 + 0x20;
        uVar9 = puVar5[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar10 = 0;
      iVar11 = 0;
    }
    uVar13 = (ulonglong)(-uVar9 & uVar9);
    uVar15 = uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar3 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar3) {
      iVar3 = iVar1;
    }
  }
  if (iVar3 != iVar1) {
    uVar9 = 0xffffffff;
    do {
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)iVar3 * 0x20);
      SRWLock = (PSRWLOCK)(lVar12 + 0x78);
      AcquireSRWLockShared(SRWLock);
      iVar3 = *(int *)(lVar12 + 0x88);
      if ((longlong)iVar3 != 0) {
        lVar12 = *(longlong *)(lVar12 + 0x80);
        lVar14 = 0;
        do {
          plVar2 = (longlong *)**(undefined8 **)(lVar12 + lVar14);
          iVar4 = (**(code **)(*plVar2 + 0x50))(plVar2,param_2);
          if (iVar4 != -1) {
            *param_3 = iVar4;
            uVar15 = *(ulonglong *)(lVar12 + lVar14);
            ReleaseSRWLockShared(SRWLock);
            if (uVar15 == 0) goto LAB_1404d2e88;
            goto LAB_1404d2f4b;
          }
          lVar14 = lVar14 + 8;
        } while ((longlong)iVar3 * 8 != lVar14);
      }
      ReleaseSRWLockShared(SRWLock);
LAB_1404d2e88:
      uVar9 = uVar9 & ~(uint)uVar13;
      puVar5 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x18);
      }
      iVar4 = *(int *)(param_1 + 0x30);
      iVar3 = (int)uVar10;
      lVar12 = (longlong)iVar3;
      uVar8 = puVar5[lVar12] & uVar9;
      if (uVar8 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar3) {
          iVar7 = iVar3;
        }
        if (iVar3 < iVar6) {
          lVar14 = 0;
          do {
            uVar8 = puVar5[lVar12 + lVar14 + 1];
            if (uVar8 != 0) {
              uVar10 = (ulonglong)(iVar3 + (int)lVar14 + 1);
              uVar9 = 0xffffffff;
              goto LAB_1404d2ef7;
            }
            iVar11 = iVar11 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar7 - lVar12 != lVar14);
          uVar9 = 0xffffffff;
          iVar3 = iVar7;
        }
        uVar10 = (ulonglong)(iVar3 + 1);
        iVar3 = iVar4;
      }
      else {
LAB_1404d2ef7:
        uVar13 = (ulonglong)(-uVar8 & uVar8);
        uVar15 = uVar13 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar3 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar3) {
          iVar3 = iVar4;
        }
      }
    } while (iVar3 != iVar1);
  }
  uVar15 = 0;
LAB_1404d2f4b:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x58));
  return uVar15;
}



// FUNCTION 1404d2fb4 FUN_1404d2fb4 body=140 status=ok
// SIG undefined FUN_1404d2fb4(void)

undefined8 FUN_1404d2fb4(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1404d3042(local_38,&local_38,&local_28);
  if (1 < (int)uStack_20) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/Serialization/ZenPackageHeader.cpp",0xd,
                  &DAT_149e0625e,local_28);
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404d3042 FUN_1404d3042 body=1102 status=ok
// SIG undefined FUN_1404d3042(void)

undefined8 * FUN_1404d3042(undefined8 *param_1,undefined8 *param_2,ulonglong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined1 auStack_158 [32];
  undefined2 *local_138;
  int local_130;
  ulonglong local_128;
  undefined8 local_120;
  undefined **local_118;
  undefined8 *local_110;
  byte local_f0;
  byte local_ef;
  byte local_ee;
  longlong *local_c0;
  longlong local_a0;
  longlong local_88;
  int *local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_1446f8c06(param_3);
  }
  if ((undefined2 *)*param_3 != (undefined2 *)0x0) {
    *(undefined2 *)*param_3 = 0;
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 2;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  piVar3 = (int *)*param_2;
  param_1[10] = piVar3;
  iVar4 = piVar3[1];
  piVar1 = piVar3 + 0xd;
  memset(&local_118,0,0x90);
  FUN_144869430(&local_118);
  local_88 = 0;
  local_118 = &PTR_FUN_149e1ddc0;
  local_70 = 0x7fffffffffffffff;
  local_f0 = local_f0 | 1;
  local_ef = local_ef & 0xfe;
  local_80 = piVar1;
  local_78 = (longlong)(iVar4 + -0x34);
  if (*piVar3 != 0) {
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 5) = 1;
    FUN_146885e0b(&local_118,param_1 + 1);
  }
  FUN_14039397a(param_1 + 6,&local_118,0);
  lVar5 = param_1[10];
  param_1[9] = CONCAT44(*(undefined4 *)(lVar5 + 0xc),
                        *(undefined4 *)(param_1[6] + (ulonglong)(uint)(*(int *)(lVar5 + 8) << 2)));
  if ((*(char *)(param_1 + 5) != '\x01') || (0x3f0 < *(int *)(param_1 + 2))) {
    local_128 = 0;
    local_138 = (undefined2 *)0x0;
    puVar2 = (undefined8 *)*local_110 + 1;
    if ((undefined8 *)local_110[1] < puVar2) {
      if ((local_ee & 2) == 0) {
        (*(code *)local_118[0x2e])(&local_118,&local_138,8);
      }
      else {
        FUN_146821949(&local_118,&local_138);
      }
    }
    else {
      local_138 = *(undefined2 **)*local_110;
      *local_110 = puVar2;
    }
    local_68 = 0;
    FUN_140090aac(&local_118,&local_68,local_138);
    FUN_1408383eb(&local_118,&local_128);
    param_1[0x11] = (longlong)piVar1 + local_88;
    *(int *)(param_1 + 0x12) = (int)(local_128 >> 5);
    lVar5 = param_1[10];
  }
  *(undefined4 *)param_1 = *(undefined4 *)(lVar5 + 0x14);
  iVar4 = piVar3[7];
  iVar6 = piVar3[6];
  param_1[0xb] = (longlong)iVar6 + (longlong)piVar3;
  *(int *)(param_1 + 0xc) = iVar4 - iVar6 >> 3;
  iVar6 = piVar3[8];
  param_1[0xd] = (longlong)iVar4 + (longlong)piVar3;
  *(int *)(param_1 + 0xe) = iVar6 - iVar4 >> 3;
  iVar4 = piVar3[9];
  param_1[0xf] = (longlong)iVar6 + (longlong)piVar3;
  iVar6 = (int)((ulonglong)((longlong)iVar4 - (longlong)iVar6) / 0x48);
  *(int *)(param_1 + 0x10) = iVar6;
  *(int *)((longlong)param_1 + 4) = iVar6;
  iVar4 = *(int *)(lVar5 + 0x28) - *(int *)(lVar5 + 0x24) >> 3;
  if (iVar4 == iVar6 * 2) {
    param_1[0x13] = (longlong)*(int *)(lVar5 + 0x24) + (longlong)piVar3;
    *(int *)(param_1 + 0x14) = iVar4;
    iVar4 = piVar3[0xb];
    iVar6 = piVar3[10];
    param_1[0x15] = (longlong)iVar6 + (longlong)piVar3;
    *(int *)(param_1 + 0x16) = (int)((ulonglong)((longlong)iVar4 - (longlong)iVar6) / 0x14);
    iVar6 = piVar3[0xc];
    param_1[0x17] = (longlong)piVar3 + (longlong)iVar4;
    *(int *)(param_1 + 0x18) = iVar6 - iVar4 >> 2;
  }
  else {
    FUN_1400021e4(param_1 + 9,&local_138);
    puVar7 = local_138;
    if (local_130 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_128,L"Corrupt Zen header in package %s",puVar7);
    if (&local_128 == param_3) {
      if (local_128 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_3 != 0) {
        FUN_1400020a8();
      }
      *param_3 = local_128;
      local_128 = 0;
      *(undefined4 *)(param_3 + 1) = (undefined4)local_120;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_120._4_4_;
      local_120 = 0;
    }
    if (local_138 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  local_118 = &PTR__purecall_149e35f70;
  if (local_c0 != (longlong *)0x0) {
    if (*local_c0 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_c0);
  }
  if (local_a0 != 0) {
    if (*(longlong *)(local_a0 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_a0);
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1404d3491 FUN_1404d3491 body=34 status=ok
// SIG undefined FUN_1404d3491(void)

void FUN_1404d3491(undefined4 param_1)

{
  FUN_1404d34b3(0x2d,param_1,0,0,0);
  return;
}



// FUNCTION 1404d34b3 FUN_1404d34b3 body=571 status=ok
// SIG undefined FUN_1404d34b3(void)

void FUN_1404d34b3(byte param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  )

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  uint uVar7;
  byte bVar8;
  undefined1 auStack_78 [43];
  undefined1 local_4d;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1447be468(param_2,&local_4c,&local_4d);
  uVar4 = DAT_14c9c0ea0;
  uVar3 = DAT_14c9c0d50;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar6 = (uint *)*puVar1;
  if (puVar6 != (uint *)0x0) goto LAB_1404d3530;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar6 = (uint *)*puVar1;
LAB_1404d3530:
    puVar5 = (undefined8 *)(*(longlong *)(puVar6 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar7 = puVar6[0x12];
    if (puVar5 + 0x11 <= puVar6 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar6 + 0x10) = puVar6 + 0x4000;
      LOCK();
      uVar2 = *puVar6;
      *puVar6 = *puVar6 + uVar7 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar7) != 0xffffffff) break;
      puVar6 = (uint *)*puVar1;
      *puVar6 = 0xffffffff;
      *(uint **)(puVar6 + 0x10) = puVar6 + 0x16;
      puVar6[0x12] = 0;
      *puVar1 = puVar6;
      puVar5 = (undefined8 *)((longlong)puVar6 + 0x5fU & 0xfffffffffffffff8);
      uVar7 = 0;
      if (puVar5 + 0x11 <= puVar6 + 0x4000) {
        uVar7 = 1;
        goto LAB_1404d35ac;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_1404d35ac:
  *(undefined8 **)(puVar6 + 0x10) = puVar5 + 0x12;
  puVar6[0x12] = uVar7;
  *(int *)(puVar5 + -1) = ((int)puVar5 + -8) - (int)puVar6;
  *(undefined4 *)((longlong)puVar5 + -4) = 0x88;
  if (param_1 != 0x3a) {
    *(undefined4 *)(puVar5 + 1) =
         (&DAT_14ca11f20)[(ulonglong)(2 < param_2) * 0x3a + (ulonglong)param_1];
    *puVar5 = &PTR_LAB_14a28c900;
    *(byte *)(puVar5 + 2) = param_1;
    bVar8 = 0;
    switch(param_1) {
    case 0x26:
    case 0x34:
      bVar8 = 0x26;
      break;
    case 0x27:
    case 0x35:
      bVar8 = 0x27;
      break;
    case 0x28:
    case 0x36:
      bVar8 = 0x28;
      break;
    case 0x2a:
      break;
    case 0x2b:
switchD_1404d3627_caseD_2b:
      bVar8 = 2;
      break;
    default:
      if (param_1 == 2) goto switchD_1404d3627_caseD_2b;
      if (param_1 == 0) break;
    case 0x29:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
switchD_1404d3627_caseD_29:
      bVar8 = 0x29;
      if (param_1 != 0x37) {
        bVar8 = param_1;
      }
    }
    *(byte *)((longlong)puVar5 + 0x11) = bVar8;
    puVar5[3] = param_3;
    *(int *)(puVar5 + 4) = param_2;
    puVar5[5] = param_4;
    puVar5[6] = param_5;
    *(undefined1 *)(puVar5 + 7) = 0x3a;
    puVar5[8] = uVar3;
    puVar5[9] = uVar4;
    *(undefined4 *)(puVar5 + 10) = 0x11;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    *(undefined4 *)(puVar5 + 0xf) = 0;
    *puVar5 = &PTR_FUN_14a31b6b0;
    *(undefined4 *)(puVar5 + 0x10) = local_4c;
    if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  *(undefined4 *)(puVar5 + 1) = 0xffffffff;
  *puVar5 = &PTR_LAB_14a28c900;
  *(undefined1 *)(puVar5 + 2) = 0x3a;
  goto switchD_1404d3627_caseD_29;
}



// FUNCTION 1404d36f8 FUN_1404d36f8 body=212 status=ok
// SIG undefined FUN_1404d36f8(void)

void FUN_1404d36f8(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined8 *)(param_1 + 0x28) = DAT_14cb8d430;
  *(undefined4 *)(param_1 + 0x30) = 0x3dcccccd;
  param_1[0x34] = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x3dcccccd;
  param_1[0x54] = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  param_1[0x68] = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined2 *)(param_1 + 0x90) = 4;
  *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
  param_1[0x98] = 3;
  param_1[0xa0] = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined2 *)(param_1 + 200) = 4;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  param_1[0xd0] = 3;
  param_1[0xd8] = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined2 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe4) = 0x3dcccccd3dcccccd;
  *(undefined2 *)(param_1 + 0xec) = 0;
  return;
}



// FUNCTION 1404d37cc FUN_1404d37cc body=232 status=ok
// SIG undefined FUN_1404d37cc(void)

undefined8 *
FUN_1404d37cc(longlong *param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar6 + 9;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x50);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar6 + 9;
  }
  *param_2 = (ulonglong)puVar4;
  uVar2 = *param_3;
  puVar6[1] = *param_4;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_14a1fb9b8;
  lVar5 = FUN_1404d38b4();
  puVar6[3] = uVar2;
  lVar3 = *(longlong *)(lVar5 + 0x48);
  puVar6[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  puVar6[5] = lVar5;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar6 + 0x3c) = 0;
  *puVar6 = &PTR_FUN_14a236e88;
  puVar6[8] = uVar2;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1402aa76e(param_1,iVar1);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar1 * 8) = puVar6;
  *(int *)(puVar6 + 7) = (int)param_1[1] + -1;
  return puVar6;
}



// FUNCTION 1404d38b4 FUN_1404d38b4 body=423 status=ok
// SIG undefined FUN_1404d38b4(void)

undefined * FUN_1404d38b4(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6b618) {
    FUN_144b3d300(&DAT_14ca6b618);
    if (DAT_14ca6b618 == -1) {
      FUN_14571a55a(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"LumenGIVolumeStruct";
      local_78 = L"FLumenTranslucencyLightingUniforms";
      local_50 = 0x1f0;
      local_58 = 0x2e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca6b598,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143102cd0);
      _Init_thread_footer(&DAT_14ca6b618);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca6b598;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404d3a5c FUN_1404d3a5c body=529 status=ok
// SIG undefined FUN_1404d3a5c(void)

undefined8 * FUN_1404d3a5c(undefined8 *param_1,longlong param_2,float *param_3,double *param_4)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong *plVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  
  param_1[0x10] = 0;
  param_1[0x11] = 0x3f80000000000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0x3f80000000000000;
  param_1[0x14] = 0;
  param_1[0x15] = 0x3f80000000000000;
  param_1[0x16] = 0;
  param_1[0x17] = 0x3f80000000000000;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x3f800000;
  *(float *)((longlong)param_1 + 0x24) = param_3[6];
  param_1[5] = 0;
  dVar3 = param_4[2];
  dVar4 = *(double *)(param_2 + 0x1040);
  dVar5 = param_4[1];
  dVar6 = *(double *)(param_2 + 0x1038);
  *(float *)(param_1 + 6) = (float)(*param_4 + *(double *)(param_2 + 0x1030));
  *(float *)((longlong)param_1 + 0x34) = (float)(dVar5 + dVar6);
  *(float *)(param_1 + 7) = (float)(dVar3 + dVar4);
  fVar9 = param_3[3];
  if (fVar9 <= 0.0001) {
    fVar9 = 0.0001;
  }
  *(float *)((longlong)param_1 + 0x3c) = 1.0 / fVar9;
  fVar9 = *param_3;
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar10 = param_3[5];
  plVar7 = *(longlong **)(param_2 + 0x30d8);
  if (plVar7 == (longlong *)0x0) {
    uVar11 = 0;
  }
  else if (*(code **)(*plVar7 + 0x88) == (code *)&LAB_144b15dc6) {
    uVar11 = *(undefined4 *)((longlong)plVar7 + 0x66c);
  }
  else {
    uVar11 = (**(code **)(*plVar7 + 0x88))();
  }
  fVar10 = (float)FUN_1404d3c6e(uVar11,fVar10);
  *(float *)(param_1 + 8) = fVar9 * fVar10;
  *(float *)((longlong)param_1 + 0x44) = fVar1 * fVar10;
  *(float *)(param_1 + 9) = fVar2 * fVar10;
  *(float *)((longlong)param_1 + 0x4c) = param_3[4];
  param_1[10] = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xe] = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x18] = 0x3f800000c0000000;
  *(float *)((longlong)param_1 + 0x5c) = param_3[7];
  *(float *)(param_1 + 0xc) = param_3[8];
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0xc000000000000000;
  uVar8 = DAT_14c84635c;
  param_1[0x1b] = DAT_14c84635c;
  param_1[0x1c] = uVar8;
  param_1[0x1d] = 0xbf80000042000000;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return param_1;
}



// FUNCTION 1404d3c6e FUN_1404d3c6e body=71 status=ok
// SIG undefined FUN_1404d3c6e(void)

float FUN_1404d3c6e(float param_1,float param_2)

{
  float fVar1;
  
  if (0.0 < param_1) {
    fVar1 = logf(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001404d3c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = expf(fVar1 * -param_2);
    return fVar1;
  }
  return 1.0;
}



// FUNCTION 1404d3cb6 FUN_1404d3cb6 body=112 status=ok
// SIG undefined FUN_1404d3cb6(void)

void FUN_1404d3cb6(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int local_20;
  undefined8 local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_3;
  local_10 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    local_10 = 0;
  }
  local_28 = *param_1;
  local_20 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    local_20 = 0;
  }
  FUN_1404d3d28(&local_28,param_2,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404d3d28 FUN_1404d3d28 body=592 status=ok
// SIG undefined FUN_1404d3d28(void)

undefined4 FUN_1404d3d28(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_2c8 [32];
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  int local_280;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined1 *local_268;
  undefined1 *puStack_260;
  undefined1 *local_258;
  char local_250;
  undefined1 local_248 [512];
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c948490) {
    FUN_144b3d300(&DAT_14c948490);
    if (DAT_14c948490 == -1) {
      FUN_1400684da(&DAT_14c9482f8);
      atexit(FUN_1427b7fa2);
      _Init_thread_footer(&DAT_14c948490);
    }
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9482f8);
  local_268 = (undefined1 *)*param_1;
  puStack_260 = (undefined1 *)param_1[1];
  uVar5 = 0;
  plVar6 = (longlong *)FUN_14022f68a(&DAT_14c948430,&local_268,0);
  if (plVar6 != (longlong *)0x0) {
    puVar2 = (undefined8 *)*plVar6;
    local_278 = 0;
    uStack_270 = 0;
    local_288 = *puVar2;
    local_280 = *(int *)(puVar2 + 1) + -1;
    if (*(int *)(puVar2 + 1) == 0) {
      local_280 = 0;
    }
    local_298 = *(undefined4 *)param_1;
    uStack_294 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_290 = *(undefined4 *)(param_1 + 1);
    uStack_28c = *(undefined4 *)((longlong)param_1 + 0xc);
    uVar5 = FUN_14022fd12();
    if ((char)uVar5 != '\0') {
      local_268 = local_248;
      local_250 = '\0';
      local_258 = local_48;
      pvVar3 = (void *)puVar2[2];
      uVar1 = *(uint *)(puVar2 + 3);
      iVar7 = uVar1 - 1;
      if (uVar1 == 0) {
        iVar7 = 0;
      }
      lVar8 = (longlong)iVar7;
      puStack_260 = local_268;
      if (0xff < iVar7) {
        FUN_140213274(&local_268,lVar8);
      }
      puVar4 = puStack_260;
      if (1 < uVar1) {
        memcpy(puStack_260,pvVar3,lVar8 * 2);
        puStack_260 = puVar4 + lVar8 * 2;
      }
      local_2a8 = (undefined4)local_278;
      uStack_2a4 = local_278._4_4_;
      uStack_2a0 = uStack_270;
      uStack_29c = uStack_26c;
      FUN_1404d3f7a(&local_268);
      pvVar3 = (void *)*param_3;
      iVar7 = *(int *)(param_3 + 1);
      lVar8 = (longlong)iVar7;
      if (local_258 <= puStack_260 + lVar8 * 2) {
        FUN_140213274(&local_268,lVar8);
      }
      puVar4 = puStack_260;
      if (iVar7 != 0) {
        memcpy(puStack_260,pvVar3,lVar8 * 2);
        puStack_260 = puVar4 + lVar8 * 2;
      }
      FUN_1402980a2(param_2,local_268,
                    (ulonglong)((longlong)puStack_260 - (longlong)local_268) >> 1 & 0xffffffff);
      if (local_250 == '\x01') {
        FUN_1400020a8(local_268);
      }
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9482f8);
  if ((local_40 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404d3f7a FUN_1404d3f7a body=268 status=ok
// SIG undefined FUN_1404d3f7a(void)

void FUN_1404d3f7a(longlong *param_1,undefined8 *param_2)

{
  void *_Src;
  void *_Dst;
  char cVar1;
  undefined2 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = *(int *)(param_2 + 1);
  if (iVar3 != 0) {
    local_48 = *(undefined4 *)param_2;
    uStack_44 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_40 = *(undefined4 *)(param_2 + 1);
    uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
    cVar1 = FUN_1404d40a0();
    if (cVar1 == '\0') {
      param_1[1] = *param_1;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
    puVar2 = (undefined2 *)param_1[1];
    if (((0 < (int)((ulonglong)((longlong)puVar2 - *param_1) >> 1)) && (puVar2[-1] != 0x2f)) &&
       (puVar2[-1] != 0x5c)) {
      if ((undefined2 *)param_1[2] <= puVar2 + 1) {
        FUN_140213274(param_1,1);
        puVar2 = (undefined2 *)param_1[1];
      }
      param_1[1] = (longlong)(puVar2 + 1);
      *puVar2 = 0x2f;
      iVar3 = *(int *)(param_2 + 1);
      puVar2 = (undefined2 *)param_1[1];
    }
    _Src = (void *)*param_2;
    lVar4 = (longlong)iVar3;
    if ((undefined2 *)param_1[2] <= puVar2 + lVar4) {
      FUN_140213274(param_1,lVar4);
    }
    if (iVar3 != 0) {
      _Dst = (void *)param_1[1];
      memcpy(_Dst,_Src,lVar4 * 2);
      param_1[1] = (longlong)((longlong)_Dst + lVar4 * 2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404d40a0 FUN_1404d40a0 body=112 status=ok
// SIG undefined FUN_1404d40a0(void)

bool FUN_1404d40a0(undefined8 *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  longlong lVar4;
  short *psVar5;
  
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    psVar2 = (short *)*param_1;
    lVar4 = (longlong)*(int *)(param_1 + 1) * 2;
    psVar5 = psVar2;
    do {
      sVar1 = *psVar5;
      if (sVar1 == 0x5c) {
        param_2 = psVar5;
      }
      psVar3 = psVar5;
      if ((sVar1 == 0x2f) || (psVar3 = param_2, sVar1 == 0x5c)) {
        if (psVar3 == (short *)0x0) {
          return true;
        }
        if ((int)((ulonglong)((longlong)psVar3 - (longlong)psVar2) >> 1) != 0) {
          return psVar2[((longlong)psVar3 - (longlong)psVar2) * 0x80000000 + -0x100000000 >> 0x20]
                 != 0x3a;
        }
        return false;
      }
      psVar5 = psVar5 + 1;
      lVar4 = lVar4 + -2;
    } while (lVar4 != 0);
  }
  return true;
}



// FUNCTION 1404d4110 FUN_1404d4110 body=93 status=ok
// SIG undefined FUN_1404d4110(void)

undefined8 * FUN_1404d4110(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1401b55b3(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1404d44e4(param_1,iVar1);
      FUN_1404d416d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1404d416d FUN_1404d416d body=284 status=ok
// SIG undefined FUN_1404d416d(void)

void FUN_1404d416d(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int *piVar5;
  
  if (param_3 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x28);
    piVar5 = (int *)(param_2 + 0x30);
    do {
      puVar4[-5] = 0;
      iVar1 = piVar5[-10];
      pvVar2 = *(void **)(piVar5 + -0xc);
      *(int *)(puVar4 + -4) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar4 + -0x1c) = 0;
      }
      else {
        FUN_1446dd670(puVar4 + -5,iVar1,0);
        memcpy((void *)puVar4[-5],pvVar2,(longlong)iVar1 * 2);
      }
      puVar4[-3] = 0;
      iVar1 = piVar5[-6];
      pvVar2 = *(void **)(piVar5 + -8);
      *(int *)(puVar4 + -2) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar4 + -0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar4 + -3,iVar1,0);
        memcpy((void *)puVar4[-3],pvVar2,(longlong)iVar1 * 2);
      }
      *(int *)(puVar4 + -1) = piVar5[-4];
      *puVar4 = 0;
      iVar1 = *piVar5;
      uVar3 = *(undefined8 *)(piVar5 + -2);
      *(int *)(puVar4 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      }
      else {
        FUN_1404d42be(puVar4,iVar1,0);
        FUN_1404d4289(*puVar4,uVar3);
      }
      puVar4 = puVar4 + 7;
      piVar5 = piVar5 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1404d4289 FUN_1404d4289 body=52 status=ok
// SIG undefined FUN_1404d4289(void)

void FUN_1404d4289(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1404d43a8(param_1,param_2);
    param_1 = param_1 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 1404d42be FUN_1404d42be body=233 status=ok
// SIG undefined FUN_1404d42be(void)

void FUN_1404d42be(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar2 & (uVar3 + uVar2) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    iVar1 = (int)(uVar3 / 0x50);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x50,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1404d43a8 FUN_1404d43a8 body=315 status=ok
// SIG undefined FUN_1404d43a8(void)

undefined8 * FUN_1404d43a8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  pvVar2 = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1404d462e(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 << 4);
  }
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 5);
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  uVar3 = param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_148053c26(param_1 + 6,iVar1,0);
    FUN_148053c88(param_1[6],uVar3,iVar1);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  uVar3 = param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_148053c26(param_1 + 8,iVar1,0);
    FUN_148053c88(param_1[8],uVar3,iVar1);
  }
  return param_1;
}



// FUNCTION 1404d44e4 FUN_1404d44e4 body=330 status=ok
// SIG undefined FUN_1404d44e4(void)

void FUN_1404d44e4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  if (param_2 == 0) {
    iVar8 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 0x38;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar3) {
              uVar7 = (ulonglong)bVar3;
            }
            uVar9 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_1404d4552;
              lVar2 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_1404d4552:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if (param_2 <= iVar6) {
      iVar8 = iVar6;
    }
  }
  if (param_3 < iVar8) {
    FUN_1446f8d3c(param_1,0,iVar8,0x38,8);
    param_3 = iVar8;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1404d462e FUN_1404d462e body=228 status=ok
// SIG undefined FUN_1404d462e(void)

void FUN_1404d462e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,4);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,4);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1404d4712 FUN_1404d4712 body=40 status=ok
// SIG undefined FUN_1404d4712(void)

undefined8 FUN_1404d4712(undefined8 param_1,int param_2)

{
  FUN_1404d473a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1404d473a FUN_1404d473a body=155 status=ok
// SIG undefined FUN_1404d473a(void)

void FUN_1404d473a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b404380;
  FUN_1403ad639(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b0be080;
  FUN_140160f86(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1404d47d6 FUN_1404d47d6 body=29 status=ok
// SIG undefined FUN_1404d47d6(void)

void FUN_1404d47d6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1404d47f4 FUN_1404d47f4 body=31 status=ok
// SIG undefined FUN_1404d47f4(void)

undefined8 FUN_1404d47f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1404d4814 FUN_1404d4814 body=255 status=ok
// SIG undefined FUN_1404d4814(void)

undefined4 * FUN_1404d4814(uint *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 local_24;
  byte local_23;
  byte local_22;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar4 = (byte)(*param_1 >> 0x18);
  local_23 = bVar4 & 1;
  local_22 = bVar4 >> 1 & 1;
  local_24 = (~*param_1 & 0x3000000) == 0;
  local_21 = 1;
  *(undefined8 *)(param_2 + 4) = param_3[2];
  uVar1 = *(undefined4 *)((longlong)param_3 + 4);
  uVar2 = *(undefined4 *)(param_3 + 1);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
  *param_2 = *(undefined4 *)param_3;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  local_38 = *(longlong *)(param_1 + 7);
  FUN_1404d4914(&local_24,param_2,*param_3,*(undefined8 *)(param_1 + 1));
  local_38 = *(longlong *)(param_1 + 9);
  if (*(longlong *)(param_1 + 3) == local_38) {
    if ((((local_38 == 0) && (*(longlong *)(param_1 + 0xb) != 0)) &&
        (*(longlong *)(param_1 + 7) != 0)) && (*(longlong *)(param_2 + 2) != 0)) {
      *(undefined8 *)(param_2 + 2) = 0;
    }
  }
  else {
    FUN_1404d4914(&local_24,param_2 + 2,param_3[1]);
  }
  local_38 = *(longlong *)(param_1 + 0xb);
  FUN_1404d4914(&local_24,param_2 + 4,param_3[2],*(undefined8 *)(param_1 + 5));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404d4914 FUN_1404d4914 body=1251 status=ok
// SIG undefined FUN_1404d4914(void)

longlong *
FUN_1404d4914(char *param_1,longlong *param_2,undefined1 *param_3,undefined1 *param_4,
             undefined1 *param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_d48 [40];
  longlong *local_d20;
  undefined1 *local_d18;
  int local_d10;
  undefined1 *local_d08;
  int local_d00;
  undefined1 *local_cf8;
  int local_cf0;
  undefined1 *local_ce8;
  int local_ce0;
  undefined1 *local_cd8;
  undefined1 *local_cd0;
  undefined1 *local_cc8;
  char local_cc0;
  undefined1 local_cb8 [1035];
  undefined1 auStack_8ad [5];
  undefined1 *local_8a8;
  undefined1 *local_8a0;
  undefined1 *local_898;
  char local_890;
  undefined1 local_888 [1035];
  undefined1 local_47d [5];
  undefined1 *local_478;
  undefined1 *local_470;
  undefined1 *local_468;
  char local_460;
  undefined1 local_458 [1035];
  undefined1 local_4d [5];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d48;
  if (param_3 == (undefined1 *)0x0 || param_4 == param_5) {
    *param_2 = (longlong)param_3;
    goto LAB_1404d4c06;
  }
  if (param_4 == (undefined1 *)0x0) {
LAB_1404d4c03:
    *param_2 = (longlong)param_5;
  }
  else {
    if (*param_1 == '\x01') {
      local_478 = local_458;
      local_460 = '\0';
      local_468 = local_4d;
      local_d20 = param_2;
      local_8a8 = param_3;
      local_470 = local_478;
      FUN_14001b87a(&local_8a8);
      local_8a8 = local_888;
      local_890 = '\0';
      local_898 = local_47d;
      local_cd8 = param_4;
      local_8a0 = local_8a8;
      FUN_14001b87a(&local_cd8,&local_8a8);
      local_ce8 = param_5;
      local_cd8 = local_cb8;
      local_cc0 = '\0';
      local_cc8 = auStack_8ad;
      local_cd0 = local_cd8;
      if (param_5 != (undefined1 *)0x0) {
        FUN_14001b87a(&local_ce8,&local_cd8);
      }
      local_cf8 = local_8a8;
      local_cf0 = (int)local_8a0 - (int)local_8a8;
      local_d08 = local_478;
      local_d00 = (int)local_470 - (int)local_478;
      iVar2 = FUN_140186866(&local_d08,&local_cf8,1);
      param_2 = local_d20;
      if ((iVar2 != -1) || (param_1[3] != '\0')) {
        local_ce8 = local_cd8;
        local_ce0 = (int)local_cd0 - (int)local_cd8;
        FUN_1415d6b28(&local_478,iVar2,(int)local_8a0 - (int)local_8a8);
        FUN_14682c9e0(&local_ce8,(int)local_470 - (int)local_478,local_478,1);
        param_3 = local_ce8;
      }
LAB_1404d4a7c:
      *param_2 = (longlong)param_3;
    }
    else {
      if (param_1[1] == '\x01') {
        local_478 = local_458;
        local_460 = '\0';
        local_468 = local_4d;
        local_d20 = param_2;
        local_8a8 = param_3;
        local_470 = local_478;
        FUN_14001b87a(&local_8a8);
        local_8a8 = local_888;
        local_890 = '\0';
        local_898 = local_47d;
        local_cd8 = param_4;
        local_8a0 = local_8a8;
        FUN_14001b87a(&local_cd8,&local_8a8);
        local_ce8 = param_5;
        local_cd8 = local_cb8;
        local_cc0 = '\0';
        local_cc8 = auStack_8ad;
        local_cd0 = local_cd8;
        if (param_5 != (undefined1 *)0x0) {
          FUN_14001b87a(&local_ce8,&local_cd8);
        }
        param_2 = local_d20;
        uVar5 = (longlong)local_8a0 - (longlong)local_8a8;
        iVar2 = (int)uVar5;
        if (param_1[3] == '\0') {
          iVar3 = (int)local_470 - (int)local_478;
          if (iVar2 < iVar3) {
            iVar3 = iVar2;
          }
          iVar4 = 0;
          if (0 < iVar3) {
            iVar4 = iVar3;
          }
          if ((iVar4 != iVar2) ||
             (((iVar2 != 0 && (0 < iVar3)) &&
              (iVar2 = FUN_14018695a(local_8a8,local_478,(longlong)iVar2), iVar2 != 0))))
          goto LAB_1404d4a7c;
        }
        local_ce0 = (int)local_cd0 - (int)local_cd8;
        iVar2 = 0;
        uVar5 = uVar5 & 0xffffffff;
      }
      else {
        if (param_1[2] != '\x01') goto LAB_1404d4c03;
        local_478 = local_458;
        local_460 = '\0';
        local_468 = local_4d;
        local_d20 = param_2;
        local_8a8 = param_3;
        local_470 = local_478;
        FUN_14001b87a(&local_8a8);
        local_8a8 = local_888;
        local_890 = '\0';
        local_898 = local_47d;
        local_cd8 = param_4;
        local_8a0 = local_8a8;
        FUN_14001b87a(&local_cd8,&local_8a8);
        local_ce8 = param_5;
        local_cd8 = local_cb8;
        local_cc0 = '\0';
        local_cc8 = auStack_8ad;
        local_cd0 = local_cd8;
        if (param_5 != (undefined1 *)0x0) {
          FUN_14001b87a(&local_ce8,&local_cd8);
        }
        param_2 = local_d20;
        if (param_1[3] == '\0') {
          local_d18 = local_8a8;
          local_d10 = (int)local_8a0 - (int)local_8a8;
          cVar1 = FUN_14689d7b4(&local_478);
          if (cVar1 == '\0') goto LAB_1404d4a7c;
        }
        uVar5 = (ulonglong)(uint)((int)local_8a0 - (int)local_8a8);
        iVar2 = ((int)local_470 - (int)local_478) - ((int)local_8a0 - (int)local_8a8);
        local_ce0 = (int)local_cd0 - (int)local_cd8;
      }
      local_ce8 = local_cd8;
      FUN_1415d6b28(&local_478,iVar2,uVar5);
      FUN_14682c9e0(param_2,(int)local_470 - (int)local_478,local_478,1);
    }
    if (local_cc0 == '\x01') {
      FUN_1400020a8(local_cd8);
    }
    if (local_890 == '\x01') {
      FUN_1400020a8(local_8a8);
    }
    if (local_460 == '\x01') {
      FUN_1400020a8(local_478);
    }
  }
LAB_1404d4c06:
  if ((local_48 ^ (ulonglong)auStack_d48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1404d4df8 FUN_1404d4df8 body=129 status=ok
// SIG undefined FUN_1404d4df8(void)

undefined8 FUN_1404d4df8(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = (longlong *)FUN_1449cbe5c(*(undefined8 *)(param_1 + 0xc0),param_3,local_20);
  if ((*(int *)(DAT_14c9de160 + 4) != 0) && ((*(byte *)(param_2 + 0x74) & 0x20) != 0)) {
    iVar1 = (**(code **)(*plVar2 + 0x30))(plVar2);
    if (iVar1 == 3) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404d4e8e FUN_1404d4e8e body=33 status=ok
// SIG undefined FUN_1404d4e8e(void)

void FUN_1404d4e8e(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    while ((*(uint *)(param_2 + 8) & 0x30) == 0) {
      param_2 = *(longlong *)(param_2 + 0x20);
      if (param_2 == 0) {
        FUN_1404d4eb0();
        return;
      }
    }
  }
  return;
}



// FUNCTION 1404d4eb0 FUN_1404d4eb0 body=363 status=ok
// SIG undefined FUN_1404d4eb0(void)

void FUN_1404d4eb0(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  
  if ((((*(int *)(param_1 + 0x74) != 0) && (uVar1 = *(uint *)(param_1 + 0x70), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 0x74))) &&
      (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))))) {
    FUN_1403d7eaa(param_1 + 0x98,0);
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x70) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar2 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar2 = *(int *)(lVar5 + 0x10);
      bVar7 = iVar2 == 0;
      if (bVar7) {
        *(int *)(lVar5 + 0x10) = iVar6;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar2 = iVar6;
      }
    }
  }
  *(int *)(param_1 + 0x74) = iVar2;
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    plVar4 = (longlong *)(param_1 + 0x98);
    *(longlong **)(param_1 + 0xb0) = &DAT_14cb1ad90;
    *(longlong *)(param_1 + 0xa8) = param_1;
    lVar5 = DAT_14cb1ad90;
    while( true ) {
      *(longlong *)(param_1 + 0x98) = lVar5;
      LOCK();
      lVar3 = **(longlong **)(param_1 + 0xb0);
      bVar7 = lVar5 == lVar3;
      if (bVar7) {
        **(longlong **)(param_1 + 0xb0) = (longlong)plVar4;
        lVar3 = lVar5;
      }
      UNLOCK();
      if (bVar7) break;
      *(longlong *)(param_1 + 0x98) = lVar3;
      lVar5 = **(longlong **)(param_1 + 0xb0);
    }
    if (*plVar4 != 0) {
      *(longlong **)(*plVar4 + 8) = plVar4;
    }
  }
  FUN_1405f85e0(param_1);
  return;
}



// FUNCTION 1404d501c FUN_1404d501c body=150 status=ok
// SIG undefined FUN_1404d501c(void)

void FUN_1404d501c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar4 = *param_1;
  iVar2 = (int)param_1[1];
  lVar6 = (longlong)iVar2;
  if (lVar6 != 0) {
    uVar5 = 0;
    do {
      if (((*(longlong *)(lVar4 + uVar5) == *param_2) &&
          (*(longlong *)(lVar4 + 8 + uVar5) == param_2[1])) &&
         (*(longlong *)(lVar4 + 0x10 + uVar5) == param_2[2])) {
        if ((int)(uVar5 >> 3) * -0x55555555 != -1) {
          return;
        }
        break;
      }
      uVar5 = uVar5 + 0x18;
    } while (lVar6 * 0x18 != uVar5);
  }
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1404d50b2(param_1,iVar2);
    lVar4 = *param_1;
  }
  *(longlong *)(lVar4 + 0x10 + lVar6 * 0x18) = param_2[2];
  lVar3 = param_2[1];
  plVar1 = (longlong *)(lVar4 + lVar6 * 0x18);
  *plVar1 = *param_2;
  plVar1[1] = lVar3;
  return;
}



// FUNCTION 1404d50b2 FUN_1404d50b2 body=370 status=ok
// SIG undefined FUN_1404d50b2(void)

void FUN_1404d50b2(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x18;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1404d513b;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_1404d513b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,4);
  return;
}



// FUNCTION 1404d5224 FUN_1404d5224 body=141 status=ok
// SIG undefined FUN_1404d5224(void)

void FUN_1404d5224(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = (undefined8 *)param_1[2];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
    param_1[2] = 0;
  }
  plVar4 = (longlong *)param_1[7];
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
  plVar4 = (longlong *)param_1[5];
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
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1404d52b2 FUN_1404d52b2 body=38 status=ok
// SIG undefined FUN_1404d52b2(void)

undefined8 FUN_1404d52b2(undefined8 param_1,int param_2)

{
  FUN_1404d52d8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1404d52d8 FUN_1404d52d8 body=134 status=ok
// SIG undefined FUN_1404d52d8(void)

void FUN_1404d52d8(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_140282150(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR__purecall_149e35f70;
  plVar1 = (longlong *)param_1[0xb];
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
  }
  lVar2 = param_1[0xf];
  if (lVar2 == 0) {
    return;
  }
  if (*(longlong *)(lVar2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(lVar2);
  return;
}



// FUNCTION 1404d535e FUN_1404d535e body=897 status=ok
// SIG undefined FUN_1404d535e(void)

double * FUN_1404d535e(longlong param_1,double *param_2,longlong param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  code *local_78;
  ulonglong local_70;
  
  dVar4 = DAT_14c846520;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar11 = (undefined4)DAT_14c846510;
  uVar12 = (uint)((ulonglong)DAT_14c846510 >> 0x20);
  uVar9 = (undefined4)DAT_14c846518;
  uVar10 = (uint)((ulonglong)DAT_14c846518 >> 0x20);
  if (param_3 != 0) {
    if (DAT_14cb61cd0 == 0) {
      local_90 = &local_78;
      local_78 = FUN_141030f22;
      local_80 = FUN_14081d0ea;
      local_88 = (code *)&LAB_1463b31ae;
      local_98 = &LAB_1486dca4f;
      local_a0 = (code *)&LAB_1464f50a6;
      local_a8 = L"Game";
      local_b0 = 0;
      local_b8 = 0x10000004;
      local_c0 = 8;
      local_c8 = 0xd70;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
    }
    lVar5 = DAT_14cb61cd0;
    if (DAT_14c951858 == 0) {
      local_90 = &local_78;
      local_78 = FUN_1449e2820;
      local_80 = FUN_14081d0ea;
      local_88 = FUN_14081d0ea;
      local_98 = &LAB_1468c5283;
      local_a0 = FUN_142809da0;
      local_a8 = L"Engine";
      local_b0 = 0x400000000;
      local_b8 = 0x10000000;
      local_c0 = 8;
      local_c8 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar6 = *(longlong *)(param_3 + 0x20);
    if (lVar6 != 0) {
      iVar3 = *(int *)(lVar5 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < iVar3) ||
           (lVar7 = lVar6,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar3 * 8) !=
           lVar5 + 0x30)) {
          lVar7 = 0;
        }
      } while ((lVar7 == 0) && (lVar6 = *(longlong *)(lVar6 + 0x20), lVar6 != 0));
      if (lVar7 != 0) {
        if (*(char *)(lVar7 + 0xa99) == '\x01') {
          cVar8 = *(char *)(lVar7 + 0xa98);
        }
        else {
          cVar8 = '\0';
        }
        lVar5 = FUN_1404d56e0(param_3);
        if (lVar5 != 0) {
          lVar6 = FUN_14030d4a0();
          if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
            if (cVar8 == '\0') {
              if (*(char *)(param_1 + 0x28) == '\x01') {
                if (*(char *)(lVar5 + 0x3b3) != '\0') {
                  uVar12 = uVar12 ^ 0x80000000;
                }
                cVar8 = *(char *)(lVar5 + 0x3b4);
              }
              else {
                if (*(char *)(param_1 + 0x28) != '\0') goto LAB_1404d54a0;
                if (*(char *)(lVar5 + 0x3b1) != '\0') {
                  uVar12 = uVar12 ^ 0x80000000;
                }
                cVar8 = *(char *)(lVar5 + 0x3b2);
              }
            }
            else {
              if (cVar8 != '\x01') goto LAB_1404d54a0;
              if (*(char *)(param_1 + 0x28) == '\x01') {
                if (*(char *)(lVar5 + 0x3b7) != '\0') {
                  uVar12 = uVar12 ^ 0x80000000;
                }
                cVar8 = *(char *)(lVar5 + 0x3b8);
              }
              else {
                if (*(char *)(param_1 + 0x28) != '\0') goto LAB_1404d54a0;
                if (*(char *)(lVar5 + 0x3b5) != '\0') {
                  uVar12 = uVar12 ^ 0x80000000;
                }
                cVar8 = *(char *)(lVar5 + 0x3b6);
              }
            }
            if (cVar8 != '\0') {
              uVar10 = uVar10 ^ 0x80000000;
            }
          }
        }
      }
    }
  }
LAB_1404d54a0:
  dVar1 = param_4[2];
  dVar2 = param_4[1];
  *param_2 = (double)CONCAT44(uVar12,uVar11) * *param_4;
  param_2[1] = (double)CONCAT44(uVar10,uVar9) * dVar2;
  param_2[2] = dVar4 * dVar1;
  *(undefined1 *)(param_2 + 3) = 3;
  if ((local_70 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404d56e0 FUN_1404d56e0 body=539 status=ok
// SIG undefined FUN_1404d56e0(void)

longlong FUN_1404d56e0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    if (DAT_14caf9cd0 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1463c0cc2;
      local_38 = &LAB_147c9db5b;
      local_40 = &LAB_1463f9c44;
      local_48 = L"Game";
      local_50 = 0x2000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x958;
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
    }
    if (((*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) == DAT_14caf9cd0 + 0x30)) &&
       (lVar3 = *(longlong *)(lVar2 + 0x430), lVar3 != 0)) {
      if (DAT_14cae9568 == 0) {
        local_30 = &local_18;
        local_18 = FUN_1417de738;
        local_20 = (code *)&LAB_145893408;
        local_28 = &LAB_1458cbbd2;
        local_38 = &LAB_147ba21f1;
        local_40 = &LAB_1463e9233;
        local_48 = L"Engine";
        local_50 = 0;
        local_58 = 0x1000000c;
        local_60 = 8;
        local_68 = 0x2b8;
        FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
        lVar3 = *(longlong *)(lVar2 + 0x430);
        if (lVar3 == 0) goto LAB_1404d58f5;
      }
      lVar2 = 0;
      if ((DAT_14cae9568 == 0) || (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 == 0))
      goto LAB_1404d5787;
      if (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar1 + 0x38)) {
        lVar2 = 0;
        if (*(longlong *)
             (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
            DAT_14cae9568 + 0x30) {
          lVar2 = lVar3;
        }
        goto LAB_1404d5787;
      }
    }
  }
LAB_1404d58f5:
  lVar2 = 0;
LAB_1404d5787:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 1404d58fc FUN_1404d58fc body=93 status=ok
// SIG undefined FUN_1404d58fc(void)

void FUN_1404d58fc(undefined8 *param_1)

{
  FUN_1404d595a(param_1 + 7,1);
  param_1[1] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)((longlong)param_1 + 0x24) != 0) {
    FUN_140115c12(param_1 + 3,0);
  }
  param_1[2] = 0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = 0;
  return;
}



// FUNCTION 1404d595a FUN_1404d595a body=124 status=ok
// SIG undefined FUN_1404d595a(void)

void FUN_1404d595a(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1404d59d6 FUN_1404d59d6 body=64 status=ok
// SIG undefined FUN_1404d59d6(void)

void FUN_1404d59d6(longlong param_1)

{
  undefined1 uVar1;
  
  if ((*(byte *)(param_1 + 0x39) & 0x19) == 0) {
    *(undefined1 *)(param_1 + 0x2b7) = 0;
  }
  *(bool *)(*(longlong *)(param_1 + 0x238) + 0x18a) = (*(byte *)(param_1 + 0x39) & 0x19) != 0;
  uVar1 = FUN_1404d5a16(*(undefined8 *)(param_1 + 0x238));
  *(undefined1 *)(param_1 + 0x2b7) = uVar1;
  return;
}



// FUNCTION 1404d5a16 FUN_1404d5a16 body=1390 status=ok
// SIG undefined FUN_1404d5a16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1404d5a16(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  code *local_68;
  code *local_60 [2];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((((DAT_14cb90e00 == 0) || (DAT_14cb90e08 == 0)) || (*(int *)(DAT_14cb90e08 + 8) < 1)) ||
     ((*(longlong *)(param_1 + 0x58) == 0 || (*(longlong *)(param_1 + 0x68) == 0)))) {
    bVar14 = false;
  }
  else {
    if (*(char *)(param_1 + 0xf4) != '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_d8);
    }
    if (DAT_14cb907b8 == (longlong *)0x0) {
      local_80 = local_60;
      local_60[0] = FUN_1449e2820;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_14081d0ea;
      local_88 = &LAB_1489c8acb;
      local_90 = &LAB_146027b0e;
      local_98 = L"Engine";
      local_a0 = 0;
      local_a8 = 0x10000006;
      local_b0 = 8;
      local_b8 = 0x128;
      FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlSettings",&DAT_14cb907b8,&DAT_1489c8aca);
    }
    plVar2 = DAT_14cb907b8;
    lVar5 = DAT_14cb907b8[0x22];
    if (lVar5 == 0) {
      (**(code **)(*DAT_14cb907b8 + 1000))(DAT_14cb907b8);
      lVar5 = plVar2[0x22];
    }
    if ((*(char *)(lVar5 + 0x73) == '\x01') && (FUN_1489cc00a(local_60), local_60[0] != (code *)0x0)
       ) {
      FUN_1400020a8();
    }
    puVar6 = TlsGetValue(DAT_14c896140);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar6 = 0;
      puVar6[1] = 0;
      *(undefined4 *)(puVar6 + 2) = 0;
      TlsSetValue(DAT_14c896140,puVar6);
    }
    puVar9 = (undefined8 *)puVar6[1];
    if (puVar9 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)*puVar6;
      if (puVar9 == (undefined8 *)0x0) {
        uVar12 = (uint)DAT_14c896180;
        pcVar3 = DAT_14c896180;
        while (DAT_14c896180 = pcVar3, local_60[0] = pcVar3, ((ulonglong)pcVar3 & 0x3ffffff) != 0) {
          local_68 = (code *)(((ulonglong)pcVar3 & 0xfffffffffc000000) + 0x4000000);
          if ((ulonglong)local_68 >> 0x1a < (ulonglong)pcVar3 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          uVar11 = (ulonglong)((uVar12 & 0x3ffffff) >> 0xe);
          uVar13 = (ulonglong)((uint)pcVar3 & 0x3fff);
          local_68 = (code *)((ulonglong)local_68 & 0xfffffffffc000000 |
                             (ulonglong)
                             *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar11 * 8) + 0x10 +
                                      uVar13 * 0x18));
          LOCK();
          bVar14 = local_60[0] == DAT_14c896180;
          pcVar3 = local_68;
          if (!bVar14) {
            pcVar3 = DAT_14c896180;
          }
          DAT_14c896180 = pcVar3;
          UNLOCK();
          if (bVar14) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar11 * 8) + uVar13 * 0x18 + 0x10) = 0;
            puVar9 = *(undefined8 **)
                      (*(longlong *)(&DAT_14c833b00 + uVar11 * 8) + 8 +
                      (ulonglong)(uVar12 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar12 & 0x3ffffff);
            puVar6[1] = puVar9;
            if (puVar9 != (undefined8 *)0x0) goto LAB_1404d5c95;
            goto LAB_1404d5f5a;
          }
          uVar12 = (uint)DAT_14c896180;
          pcVar3 = DAT_14c896180;
        }
        puVar6[1] = 0;
LAB_1404d5f5a:
        puVar9 = (undefined8 *)FUN_14001cc68(0x10000,0);
        puVar6[1] = puVar9;
        iVar4 = 0xff;
        puVar10 = puVar9;
        do {
          puVar7 = puVar10 + 0x20;
          *puVar10 = puVar7;
          iVar4 = iVar4 + -1;
          puVar10 = puVar7;
        } while (iVar4 != 0);
      }
      else {
        puVar6[1] = puVar9;
        puVar7 = puVar6;
      }
      *puVar7 = 0;
LAB_1404d5c95:
      *(undefined4 *)(puVar6 + 2) = 0x100;
      iVar4 = 0xff;
    }
    else {
      iVar4 = *(int *)(puVar6 + 2) + -1;
    }
    puVar6[1] = *puVar9;
    *(int *)(puVar6 + 2) = iVar4;
    *puVar9 = UE::Tasks::Private::FTaskBase::vftable;
    puVar9[1] = &DAT_100000002;
    puVar9[2] = 0;
    *(undefined4 *)(puVar9 + 3) = 0;
    *(undefined4 *)(puVar9 + 4) = 0xffffffff;
    puVar9[6] = 0;
    puVar9[7] = 0x100000000;
    *(undefined1 *)(puVar9 + 8) = 1;
    puVar9[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                  ::TTaskDelegateDummy::vftable;
    puVar9[0xf] = 0;
    puVar9[0x10] = 0xe800000000000020;
    puVar9[0x12] = 0;
    puVar9[0x13] = 0x100000000;
    *(undefined2 *)(puVar9 + 0x14) = 0;
    LOCK();
    bVar14 = *(char *)(puVar9 + 8) == '\x01';
    if (bVar14) {
      *(char *)(puVar9 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar14) {
      FUN_14008cdb0(puVar9 + 8);
    }
    *puVar9 = &PTR_FUN_14b456950;
    if (*(code **)(puVar9[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar9[0xe] + 0x18))(puVar9 + 0xe,puVar9 + 9);
    }
    puVar9[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                  ::
                  TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                  ::vftable;
    puVar9[9] = puVar9;
    puVar9[10] = puVar9;
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar9[0xf] = uVar8;
    puVar9[0x10] = 0xc8000052d151fd80;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = 0;
    puVar9[0x15] = param_1;
    *puVar9 = &PTR_FUN_14b456940;
    LOCK();
    _DAT_14cb90ac0 = _DAT_14cb90ac0 + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)puVar9 + 0xc) = *(int *)((longlong)puVar9 + 0xc) + 1;
    UNLOCK();
    puVar9[2] = &DAT_14cb90ab8;
    local_60[0] = (code *)CONCAT71(local_60[0]._1_7_,1);
    FUN_1447439e4(puVar9);
    puVar6 = *(undefined8 **)(param_1 + 0x178);
    *(undefined8 **)(param_1 + 0x178) = puVar9;
    if (puVar6 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar6 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
    bVar14 = *(longlong *)(param_1 + 8) != 0;
  }
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return bVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404d5fcc FUN_1404d5fcc body=346 status=ok
// SIG undefined FUN_1404d5fcc(void)

void FUN_1404d5fcc(ulonglong *param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int unaff_EDI;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = 0;
  if (param_2 == 0) goto LAB_1404d6043;
  uVar3 = (longlong)param_2 * 2;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar3 + 0xf;
      if (0x7ff0 < uVar3) {
        uVar6 = uVar4 & 0xfffffffffffffff0;
        if (uVar6 < 0x7ff1) goto LAB_1404d60c7;
        goto LAB_1404d6095;
      }
      uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,2);
    }
  }
LAB_1404d6034:
  do {
    uVar6 = 0x7fffffff;
    unaff_EDI = param_2;
    if (param_2 <= (int)(uVar3 >> 1)) {
      uVar6 = uVar3 >> 1 & 0xffffffff;
    }
LAB_1404d6043:
    param_2 = unaff_EDI;
    uVar5 = (uint)uVar6;
    if (uVar5 == *(uint *)((longlong)param_1 + 0xc)) {
      return;
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar5;
    uVar3 = *param_1;
    if ((uVar3 & 1) == 0) {
      if ((int)uVar5 < 1 && uVar3 == 0) {
        return;
      }
      if (-1 < (int)uVar5) {
        uVar6 = FUN_14001fdce(uVar3,uVar5 * 2,2);
        *param_1 = uVar6;
        return;
      }
    }
    else if (uVar5 <= (uint)param_1[1]) {
      return;
    }
    uVar4 = 0;
    FUN_1467ac767();
LAB_1404d60c7:
    bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
    uVar4 = 0x32;
    if (0x32 < bVar2) {
      uVar4 = (ulonglong)bVar2;
    }
    uVar7 = 0x32 - (ulonglong)bVar2;
    do {
      uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
      if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1404d6034;
      lVar1 = uVar4 + 1 + uVar7;
      uVar7 = uVar7 - 1;
    } while (lVar1 != 0x33);
LAB_1404d6095:
    uVar3 = 0x10;
    if (0x10 < DAT_14c841df8) {
      uVar3 = (ulonglong)DAT_14c841df8;
    }
    uVar3 = -uVar3 & (uVar6 + uVar3) - 1;
  } while( true );
}



// FUNCTION 1404d6126 FUN_1404d6126 body=151 status=ok
// SIG undefined FUN_1404d6126(void)

longlong FUN_1404d6126(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0xae8) == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1404d61be();
    if ((longlong)local_20 == 0) {
      lVar2 = 0;
    }
    else {
      lVar1 = 0;
      do {
        lVar2 = *(longlong *)(local_28 + lVar1);
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x200) == param_2)) break;
        lVar1 = lVar1 + 8;
        lVar2 = 0;
      } while ((longlong)local_20 * 8 != lVar1);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 1404d61be FUN_1404d61be body=197 status=ok
// SIG undefined FUN_1404d61be(void)

longlong * FUN_1404d61be(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (longlong *)FUN_140721bac(*(undefined8 *)(param_1 + 0x10));
  if (plVar5 != (longlong *)0x0) {
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x20))(plVar5);
    iVar4 = (int)plVar5[1];
    if (0 < iVar4) {
      iVar7 = 0;
      iVar8 = -1;
      do {
        lVar2 = *(longlong *)(*plVar5 + (longlong)(iVar4 + iVar8) * 8);
        if (lVar2 != 0) {
          lVar3 = *(longlong *)(lVar2 + 0x70);
          lVar6 = FUN_1404d6284();
          if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30)) {
            iVar4 = *(int *)(lVar2 + 0x44);
            iVar1 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
              FUN_1404d62be(param_2,iVar1);
            }
            *(longlong *)(*param_2 + (longlong)iVar1 * 8) = iVar4 + param_1;
          }
        }
        iVar7 = iVar7 + 1;
        iVar4 = (int)plVar5[1];
        iVar8 = iVar8 + -1;
      } while (iVar7 < iVar4);
    }
  }
  return param_2;
}



// FUNCTION 1404d6284 FUN_1404d6284 body=57 status=ok
// SIG undefined FUN_1404d6284(void)

void FUN_1404d6284(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9ab280 == 0) {
    uVar1 = FUN_140e64ed9();
    DAT_14c9ab280 = FUN_140002ddd(FUN_1462b1d6e,uVar1,L"AnimNode_ForwardDynamics");
  }
  return;
}



// FUNCTION 1404d62be FUN_1404d62be body=353 status=ok
// SIG undefined FUN_1404d62be(void)

void FUN_1404d62be(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1404d6343;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1404d6343:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1404d6420 FUN_1404d6420 body=303 status=ok
// SIG undefined FUN_1404d6420(void)

void FUN_1404d6420(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar2 = *(longlong *)(param_1 + 200) != 0;
  *(bool *)(param_1 + 0x400) = bVar2;
  if (bVar2) {
    lVar1 = param_1 + 200;
    FUN_1404d669e(lVar1,&local_38);
    *(undefined8 *)(param_1 + 0x418) = local_28;
    *(undefined4 *)(param_1 + 0x408) = local_38;
    *(undefined4 *)(param_1 + 0x40c) = uStack_34;
    *(undefined4 *)(param_1 + 0x410) = uStack_30;
    *(undefined4 *)(param_1 + 0x414) = uStack_2c;
    FUN_1404d6d22(lVar1,&local_38);
    *(undefined8 *)(param_1 + 0x430) = local_28;
    *(undefined4 *)(param_1 + 0x420) = local_38;
    *(undefined4 *)(param_1 + 0x424) = uStack_34;
    *(undefined4 *)(param_1 + 0x428) = uStack_30;
    *(undefined4 *)(param_1 + 0x42c) = uStack_2c;
    FUN_1404d6550(lVar1,&local_38);
    *(ulonglong *)(param_1 + 0x438) = CONCAT44(uStack_34,local_38);
  }
  bVar2 = *(longlong *)(param_1 + 0x128) != 0;
  *(bool *)(param_1 + 0x4d8) = bVar2;
  if (bVar2) {
    lVar1 = param_1 + 0x128;
    FUN_1404d669e(lVar1,&local_38);
    *(undefined8 *)(param_1 + 0x4f0) = local_28;
    *(undefined4 *)(param_1 + 0x4e0) = local_38;
    *(undefined4 *)(param_1 + 0x4e4) = uStack_34;
    *(undefined4 *)(param_1 + 0x4e8) = uStack_30;
    *(undefined4 *)(param_1 + 0x4ec) = uStack_2c;
    FUN_1404d6d22(lVar1,&local_38);
    *(undefined8 *)(param_1 + 0x508) = local_28;
    *(undefined4 *)(param_1 + 0x4f8) = local_38;
    *(undefined4 *)(param_1 + 0x4fc) = uStack_34;
    *(undefined4 *)(param_1 + 0x500) = uStack_30;
    *(undefined4 *)(param_1 + 0x504) = uStack_2c;
    FUN_1404d6550(lVar1,&local_38);
    *(ulonglong *)(param_1 + 0x510) = CONCAT44(uStack_34,local_38);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404d6550 FUN_1404d6550 body=333 status=ok
// SIG undefined FUN_1404d6550(void)

undefined8 * FUN_1404d6550(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  if ((*(longlong *)(param_1 + 0x10) != 0) && (lVar2 = *(longlong *)(param_1 + 8), lVar2 != 0)) {
    if (DAT_14cac7cb8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1417963e0;
      local_48 = &LAB_1478a2d90;
      local_50 = &LAB_146395589;
      local_58 = L"Engine";
      local_60 = 0x20000000000;
      local_68 = 0x10000005;
      local_70 = 0x10;
      local_78 = 0xad0;
      FUN_14081cfa3(L"/Script/Engine",L"SkinnedMeshComponent",&DAT_14cac7cb8,FUN_146395562);
      lVar2 = *(longlong *)(param_1 + 8);
      if (lVar2 == 0) goto LAB_1404d65c6;
    }
    if ((((DAT_14cac7cb8 != 0) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cac7cb8 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cac7cb8 + 0x38) * 8) ==
        DAT_14cac7cb8 + 0x30)) {
      FUN_1404d7070(lVar2,param_2,*(undefined8 *)(param_1 + 0x10));
    }
  }
LAB_1404d65c6:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1404d669e FUN_1404d669e body=676 status=ok
// SIG undefined FUN_1404d669e(void)

double * FUN_1404d669e(longlong *param_1,double *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  longlong *plVar10;
  double *pdVar11;
  double *pdVar12;
  undefined4 uVar13;
  uint uVar14;
  longlong *plVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2[2] = DAT_14c8464f0;
  uVar18 = DAT_14c8464e8._4_4_;
  uVar17 = (undefined4)DAT_14c8464e8;
  uVar13 = DAT_14c8464e0._4_4_;
  *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar13;
  *(undefined4 *)(param_2 + 1) = uVar17;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar18;
  if (*param_1 == 0) goto LAB_1404d6757;
  plVar15 = param_1;
  plVar10 = (longlong *)FUN_1404d6944();
  uVar13 = SUB84(plVar15,0);
  if (plVar10 == (longlong *)0x0) {
    pdVar11 = (double *)param_1[1];
    if (pdVar11 == (double *)0x0) {
      lVar1 = *(longlong *)(*param_1 + 0x1c8);
      if (lVar1 == 0) {
        pdVar11 = (double *)&DAT_14c8464e0;
        uVar17 = SUB84(DAT_14c8464f0,0);
        uVar18 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar17 = (undefined4)*(undefined8 *)(lVar1 + 0x270);
        uVar18 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
        pdVar11 = (double *)(lVar1 + 0x260);
      }
      dVar16 = pdVar11[1];
      *param_2 = *pdVar11;
      param_2[1] = dVar16;
      param_2[2] = (double)CONCAT44(uVar18,uVar17);
    }
    else {
      dVar4 = pdVar11[0x4d];
      dVar16 = pdVar11[0x4e];
      *param_2 = pdVar11[0x4c];
      param_2[1] = dVar4;
      param_2[2] = dVar16;
    }
  }
  else {
    pdVar11 = (double *)(**(code **)(*plVar10 + 0x4b0))(plVar10,param_2,param_1[2]);
    uVar13 = SUB84(plVar10,0);
  }
  if (((ABS((double)param_1[3]) <= 9.999999747378752e-05) &&
      (ABS((double)param_1[4]) <= 9.999999747378752e-05)) &&
     (ABS((double)param_1[5]) <= 9.999999747378752e-05)) goto LAB_1404d6757;
  dVar16 = (double)param_1[1];
  if (dVar16 == 0.0) {
    pdVar11 = (double *)*param_1;
    dVar16 = pdVar11[0x39];
    if (dVar16 != 0.0) goto LAB_1404d67fe;
    local_58 = DAT_14c846508;
    local_68 = (undefined4)DAT_14c8464f8;
    uStack_64 = DAT_14c8464f8._4_4_;
    uStack_60 = (undefined4)DAT_14c846500;
    uStack_5c = DAT_14c846500._4_4_;
  }
  else {
LAB_1404d67fe:
    dVar4 = *(double *)((longlong)dVar16 + 0x240);
    dVar5 = *(double *)((longlong)dVar16 + 0x248);
    dVar6 = *(double *)((longlong)dVar16 + 0x250);
    dVar7 = *(double *)((longlong)dVar16 + 600);
    pdVar12 = *(double **)((longlong)dVar16 + 0x228);
    local_88 = dVar4;
    uStack_80 = dVar5;
    local_78 = dVar6;
    uStack_70 = dVar7;
    if (pdVar12 == (double *)0x0) {
      uVar13 = 0x40;
      pdVar12 = (double *)FUN_14001cc68(0x40,0x10);
      dVar8 = DAT_14c8463d8;
      *pdVar12 = DAT_14c8463d0;
      pdVar12[1] = dVar8;
      dVar8 = DAT_14c8463e8;
      pdVar12[2] = DAT_14c8463e0;
      pdVar12[3] = dVar8;
      dVar8 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      pdVar12[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
      pdVar12[5] = dVar8;
      pdVar11 = DAT_14c846508;
      pdVar12[6] = (double)DAT_14c846508;
      *(double **)((longlong)dVar16 + 0x228) = pdVar12;
    }
    auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar12[1]);
    auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar12);
    auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar12[1]) >> 0x20);
    iVar9 = movmskpd((int)pdVar11,auVar2);
    auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar12[3]);
    auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar12[2]);
    auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar12[3]) >> 0x20);
    uVar14 = movmskpd(uVar13,auVar3);
    if ((uVar14 & 0x3fffffff) != 0 || iVar9 != 0) {
      *(undefined4 *)(pdVar12 + 2) = (undefined4)local_78;
      *(undefined4 *)((longlong)pdVar12 + 0x14) = local_78._4_4_;
      *(undefined4 *)(pdVar12 + 3) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)pdVar12 + 0x1c) = uStack_70._4_4_;
      *(undefined4 *)pdVar12 = (undefined4)local_88;
      *(undefined4 *)((longlong)pdVar12 + 4) = local_88._4_4_;
      *(undefined4 *)(pdVar12 + 1) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)pdVar12 + 0xc) = uStack_80._4_4_;
      FUN_1448052ee(&local_88,&local_68);
      pdVar12[6] = (double)local_58;
      pdVar12[4] = (double)CONCAT44(uStack_64,local_68);
      pdVar12[5] = (double)CONCAT44(uStack_5c,uStack_60);
    }
    local_58 = (double *)pdVar12[6];
    local_68 = *(undefined4 *)(pdVar12 + 4);
    uStack_64 = *(undefined4 *)((longlong)pdVar12 + 0x24);
    uStack_60 = *(undefined4 *)(pdVar12 + 5);
    uStack_5c = *(undefined4 *)((longlong)pdVar12 + 0x2c);
  }
  FUN_1401c9a0e(&local_68,&local_88,param_1 + 3);
  *param_2 = local_88 + *param_2;
  param_2[1] = uStack_80 + param_2[1];
  param_2[2] = local_78 + param_2[2];
LAB_1404d6757:
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404d6944 FUN_1404d6944 body=865 status=ok
// SIG undefined FUN_1404d6944(void)

longlong * FUN_1404d6944(longlong param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    if (((((*(int *)(param_1 + 0x50) != 0) && (uVar1 = *(uint *)(param_1 + 0x4c), -1 < (int)uVar1))
         && ((int)uVar1 < DAT_14c9647dc)) &&
        ((plVar7 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(param_1 + 0x50))))) &&
       (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 &&
        (plVar7 = (longlong *)*plVar7, plVar7 != (longlong *)0x0)))) {
      cVar2 = (**(code **)(*plVar7 + 0x4c8))(plVar7);
      if (cVar2 != '\0') goto LAB_1404d69d9;
      lVar4 = FUN_144a78c84();
      if (((*(int *)(lVar4 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
          (*(longlong *)(*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30)) &&
         ((lVar4 = plVar7[0x23c], FUN_1400bc8c2(plVar7 + 0x23c,param_1 + 0x54), (char)lVar4 == '\0'
          && ((char)plVar7[0x23c] != '\0')))) {
        (**(code **)(*plVar7 + 0xcf0))(plVar7);
      }
    }
    if ((*(longlong *)(param_1 + 8) == 0) ||
       (plVar7 = (longlong *)FUN_1404d6ca6(*(longlong *)(param_1 + 8),param_1 + 0x10),
       plVar7 == (longlong *)0x0)) {
      *(undefined4 *)(param_1 + 0x4c) = 0;
      plVar7 = (longlong *)0x0;
      iVar3 = 0;
    }
    else {
      if (DAT_14cb63950 == 0) {
        local_50 = &local_30;
        local_30 = FUN_144a7958c;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_1464ec72a;
        local_58 = &LAB_1486f5f75;
        local_60 = &LAB_140945686;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10000004;
        local_80 = 0x10;
        local_88 = 0x19d0;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
      }
      if ((*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) ==
          DAT_14cb63950 + 0x30)) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cb85098) &&
           (FUN_144b3d300(&DAT_14cb85098), DAT_14cb85098 == -1)) {
          FUN_1446f470e(&DAT_14cb85090,L"LightBeam",1);
          _Init_thread_footer(&DAT_14cb85098);
        }
        uVar5 = CONCAT44(DAT_14cb85088,DAT_14cb85090);
        DAT_14cb85088 = DAT_14cb85088 + 1;
        *(undefined8 *)(param_1 + 0x54) = uVar5;
        lVar4 = plVar7[0x23c];
        FUN_1400bc96c(plVar7 + 0x23c,param_1 + 0x54);
        if (((char)lVar4 == '\0') && ((char)plVar7[0x23c] != '\0')) {
          (**(code **)(*plVar7 + 0xcf0))(plVar7);
        }
      }
      uVar1 = *(uint *)((longlong)plVar7 + 0xc);
      *(uint *)(param_1 + 0x4c) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      iVar3 = *(int *)(lVar4 + 0x10);
      if (*(int *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar3 = *(int *)(lVar4 + 0x10);
        bVar8 = iVar3 == 0;
        if (bVar8) {
          *(int *)(lVar4 + 0x10) = iVar6;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar3 = iVar6;
        }
      }
    }
    *(int *)(param_1 + 0x50) = iVar3;
  }
LAB_1404d69d9:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar7;
}



// FUNCTION 1404d6ca6 FUN_1404d6ca6 body=124 status=ok
// SIG undefined FUN_1404d6ca6(void)

longlong * FUN_1404d6ca6(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  cVar3 = (**(code **)(*param_1 + 0x4c8))(param_1,*param_2);
  plVar5 = param_1;
  if (cVar3 == '\0') {
    uVar1 = *(uint *)(param_1 + 0x28);
    plVar5 = (longlong *)0x0;
    if (0 < (int)uVar1) {
      uVar6 = 0;
      do {
        if ((((longlong)uVar6 < (longlong)(int)param_1[0x28]) &&
            (lVar2 = *(longlong *)(param_1[0x27] + uVar6 * 8), lVar2 != 0)) &&
           (plVar4 = (longlong *)FUN_1404d6ca6(lVar2,param_2), plVar4 != (longlong *)0x0)) {
          return plVar4;
        }
        uVar6 = uVar6 + 1;
      } while (uVar1 != uVar6);
    }
  }
  return plVar5;
}



// FUNCTION 1404d6d22 FUN_1404d6d22 body=840 status=ok
// SIG undefined FUN_1404d6d22(void)

undefined8 * FUN_1404d6d22(double *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  longlong *plVar13;
  double dVar14;
  double *pdVar15;
  double dVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double dStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2[2] = DAT_14c846508;
  uVar10 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
  *param_2 = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
  param_2[1] = uVar10;
  if ((param_1[6] == 0.0) && (!NAN(param_1[6]))) {
    if ((param_1[7] == 0.0) && (!NAN(param_1[7]))) {
      bVar11 = true;
      if ((param_1[8] == 0.0) && (!NAN(param_1[8]))) goto LAB_1404d6db5;
    }
  }
  if (*(char *)(param_1 + 9) == '\0') {
    FUN_144a79a9c(param_1 + 6,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_a8);
  }
  bVar11 = false;
LAB_1404d6db5:
  if (*param_1 != 0.0) {
    pdVar15 = param_1;
    plVar13 = (longlong *)FUN_1404d6944();
    uVar18 = SUB84(pdVar15,0);
    if (plVar13 == (longlong *)0x0) {
      dVar16 = param_1[1];
      if (dVar16 == 0.0) {
        dVar16 = *param_1;
        lVar1 = *(longlong *)((longlong)dVar16 + 0x1c8);
        if (lVar1 == 0) {
          local_58 = DAT_14c846508;
          uVar18 = (undefined4)DAT_14c8464f8;
          uVar19 = DAT_14c8464f8._4_4_;
          uVar20 = (undefined4)DAT_14c846500;
          uVar21 = DAT_14c846500._4_4_;
        }
        else {
          dVar6 = *(double *)(lVar1 + 0x240);
          dVar7 = *(double *)(lVar1 + 0x248);
          dVar8 = *(double *)(lVar1 + 0x250);
          dVar9 = *(double *)(lVar1 + 600);
          pdVar15 = *(double **)(lVar1 + 0x228);
          local_88 = dVar6;
          uStack_80 = dVar7;
          local_78 = dVar8;
          dStack_70 = dVar9;
          if (pdVar15 == (double *)0x0) {
            uVar18 = 0x40;
            pdVar15 = (double *)FUN_14001cc68(0x40,0x10);
            dVar16 = DAT_14c8463d8;
            *pdVar15 = DAT_14c8463d0;
            pdVar15[1] = dVar16;
            dVar16 = DAT_14c8463e8;
            pdVar15[2] = DAT_14c8463e0;
            pdVar15[3] = dVar16;
            dVar16 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
            pdVar15[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
            pdVar15[5] = dVar16;
            dVar16 = DAT_14c846508;
            pdVar15[6] = DAT_14c846508;
            *(double **)(lVar1 + 0x228) = pdVar15;
          }
          auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar15[1]);
          auVar3._0_8_ = -(ulonglong)(dVar6 != *pdVar15);
          auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar15[1]) >> 0x20);
          iVar12 = movmskpd(SUB84(dVar16,0),auVar3);
          auVar5._8_4_ = (int)-(ulonglong)(dVar9 != pdVar15[3]);
          auVar5._0_8_ = -(ulonglong)(dVar8 != pdVar15[2]);
          auVar5._12_4_ = (int)(-(ulonglong)(dVar9 != pdVar15[3]) >> 0x20);
          uVar17 = movmskpd(uVar18,auVar5);
          if ((uVar17 & 0x3fffffff) != 0 || iVar12 != 0) {
            pdVar15[2] = local_78;
            pdVar15[3] = dStack_70;
            *(undefined4 *)pdVar15 = (undefined4)local_88;
            *(undefined4 *)((longlong)pdVar15 + 4) = local_88._4_4_;
            *(undefined4 *)(pdVar15 + 1) = (undefined4)uStack_80;
            *(undefined4 *)((longlong)pdVar15 + 0xc) = uStack_80._4_4_;
            FUN_1448052ee(&local_88,&local_68);
            pdVar15[6] = local_58;
            pdVar15[4] = (double)CONCAT44(uStack_64,local_68);
            pdVar15[5] = (double)CONCAT44(uStack_5c,uStack_60);
          }
          local_58 = pdVar15[6];
          uVar18 = *(undefined4 *)(pdVar15 + 4);
          uVar19 = *(undefined4 *)((longlong)pdVar15 + 0x24);
          uVar20 = *(undefined4 *)(pdVar15 + 5);
          uVar21 = *(undefined4 *)((longlong)pdVar15 + 0x2c);
        }
        param_2[2] = local_58;
        local_68 = uVar18;
        uStack_64 = uVar19;
        uStack_60 = uVar20;
        uStack_5c = uVar21;
      }
      else {
        dVar6 = *(double *)((longlong)dVar16 + 0x240);
        dVar7 = *(double *)((longlong)dVar16 + 0x248);
        dVar8 = *(double *)((longlong)dVar16 + 0x250);
        dVar9 = *(double *)((longlong)dVar16 + 600);
        pdVar15 = *(double **)((longlong)dVar16 + 0x228);
        dVar14 = 0.0;
        local_88 = dVar6;
        uStack_80 = dVar7;
        local_78 = dVar8;
        dStack_70 = dVar9;
        if (pdVar15 == (double *)0x0) {
          uVar18 = 0x40;
          pdVar15 = (double *)FUN_14001cc68(0x40,0x10);
          dVar14 = DAT_14c8463d8;
          *pdVar15 = DAT_14c8463d0;
          pdVar15[1] = dVar14;
          dVar14 = DAT_14c8463e8;
          pdVar15[2] = DAT_14c8463e0;
          pdVar15[3] = dVar14;
          dVar14 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
          pdVar15[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
          pdVar15[5] = dVar14;
          dVar14 = DAT_14c846508;
          pdVar15[6] = DAT_14c846508;
          *(double **)((longlong)dVar16 + 0x228) = pdVar15;
        }
        auVar2._8_4_ = (int)-(ulonglong)(dVar7 != pdVar15[1]);
        auVar2._0_8_ = -(ulonglong)(dVar6 != *pdVar15);
        auVar2._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar15[1]) >> 0x20);
        iVar12 = movmskpd(SUB84(dVar14,0),auVar2);
        auVar4._8_4_ = (int)-(ulonglong)(dVar9 != pdVar15[3]);
        auVar4._0_8_ = -(ulonglong)(dVar8 != pdVar15[2]);
        auVar4._12_4_ = (int)(-(ulonglong)(dVar9 != pdVar15[3]) >> 0x20);
        uVar17 = movmskpd(uVar18,auVar4);
        if ((uVar17 & 0x3fffffff) != 0 || iVar12 != 0) {
          pdVar15[2] = local_78;
          pdVar15[3] = dStack_70;
          *(undefined4 *)pdVar15 = (undefined4)local_88;
          *(undefined4 *)((longlong)pdVar15 + 4) = local_88._4_4_;
          *(undefined4 *)(pdVar15 + 1) = (undefined4)uStack_80;
          *(undefined4 *)((longlong)pdVar15 + 0xc) = uStack_80._4_4_;
          FUN_1448052ee(&local_88,&local_68);
          pdVar15[6] = local_58;
          pdVar15[4] = (double)CONCAT44(uStack_64,local_68);
          pdVar15[5] = (double)CONCAT44(uStack_5c,uStack_60);
        }
        uVar18 = *(undefined4 *)(pdVar15 + 4);
        uVar19 = *(undefined4 *)((longlong)pdVar15 + 0x24);
        uVar20 = *(undefined4 *)(pdVar15 + 5);
        uVar21 = *(undefined4 *)((longlong)pdVar15 + 0x2c);
        param_2[2] = pdVar15[6];
      }
      *(undefined4 *)param_2 = uVar18;
      *(undefined4 *)((longlong)param_2 + 4) = uVar19;
      *(undefined4 *)(param_2 + 1) = uVar20;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar21;
    }
    else {
      (**(code **)(*plVar13 + 0x4b8))(plVar13,param_2,param_1[2]);
    }
    if (!bVar11) {
      FUN_1401c9a0e(param_2,&local_68,param_1 + 6);
      FUN_144a79a9c(&local_68,&local_88);
      param_2[2] = local_78;
      *(undefined4 *)param_2 = (undefined4)local_88;
      *(undefined4 *)((longlong)param_2 + 4) = local_88._4_4_;
      *(undefined4 *)(param_2 + 1) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_80._4_4_;
    }
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404d7070 FUN_1404d7070 body=782 status=ok
// SIG undefined FUN_1404d7070(void)

longlong * FUN_1404d7070(longlong param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  longlong local_30;
  
  local_30 = param_3;
  if (*(longlong *)(param_1 + 0x658) == 0) {
    if ((DAT_14c950c29 & *(longlong *)(param_1 + 0x660) != 0) != 0) goto LAB_1404d72c7;
    if (*(longlong *)(param_1 + 0x660) != 0) goto LAB_1404d70a5;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_1404d72c7:
      FUN_1456cec3c();
    }
LAB_1404d70a5:
    uVar1 = *(uint *)(param_1 + 0x7a8);
    lVar12 = *(longlong *)(param_1 + 0x7a0);
    uVar8 = 0;
    iVar4 = (int)((ulonglong)param_3 >> 0x20);
    if (0 < (int)uVar1) {
      uVar8 = 0;
      uVar10 = (ulonglong)uVar1;
      do {
        uVar11 = (int)(uVar10 >> 1) + (int)uVar8;
        lVar2 = (ulonglong)uVar11 * 0x10;
        iVar7 = *(int *)(lVar12 + lVar2) - (int)param_3;
        if (iVar7 == 0) {
          iVar7 = *(int *)(lVar12 + 4 + lVar2) - iVar4;
        }
        uVar9 = (uint)uVar10;
        if (iVar7 < 0) {
          uVar8 = (ulonglong)(uVar11 + (uVar9 & 1));
        }
        uVar10 = uVar10 >> 1;
      } while (1 < uVar9);
    }
    if ((int)uVar8 < (int)uVar1) {
      lVar2 = uVar8 * 0x10;
      iVar7 = (int)param_3 - *(int *)(lVar12 + lVar2);
      if (iVar7 == 0) {
        iVar7 = iVar4 - *(int *)(lVar12 + 4 + lVar2);
      }
      if (iVar7 < 0) goto LAB_1404d70cd;
      plVar3 = (longlong *)(lVar12 + lVar2 + 8);
    }
    else {
LAB_1404d70cd:
      plVar3 = (longlong *)0x0;
    }
    plVar5 = &local_30;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = plVar3;
    }
    lVar12 = *plVar5;
    plVar3 = *(longlong **)(param_1 + 0x658);
    if (plVar3 == (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x660);
      if ((DAT_14c950c29 & plVar3 != (longlong *)0x0) != 0) goto LAB_1404d7283;
    }
    else if (DAT_14c950c29 == 1) {
LAB_1404d7283:
      FUN_1456cec3c(plVar3);
    }
    if (lVar12 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar12;
      if ((longlong)*(int *)(param_1 + 0x9e8) != 0) {
        lVar6 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_1 + 0x9e0) + lVar6) == lVar12) {
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x9e0) + 8 + lVar6);
            break;
          }
          lVar6 = lVar6 + 0x10;
        } while ((longlong)*(int *)(param_1 + 0x9e8) * 0x10 != lVar6);
      }
    }
    lVar2 = (**(code **)(*plVar3 + 0x3e0))(plVar3,lVar2);
    if (lVar2 != 0) {
      lVar12 = *(longlong *)(lVar2 + 0x30);
      goto LAB_1404d71fe;
    }
    if (lVar12 != 0) {
      plVar3 = *(longlong **)(param_1 + 0x658);
      if (plVar3 == (longlong *)0x0) {
        plVar3 = *(longlong **)(param_1 + 0x660);
        if ((DAT_14c950c29 & plVar3 != (longlong *)0x0) != 0) goto LAB_1404d7343;
        if (plVar3 == (longlong *)0x0) goto LAB_1404d71fb;
LAB_1404d72b4:
        if ((DAT_14c950c29 & plVar3 != (longlong *)0x0) != 0) {
LAB_1404d7371:
          FUN_1456cec3c(plVar3);
        }
      }
      else if (DAT_14c950c29 != 0) {
LAB_1404d7343:
        FUN_1456cec3c(plVar3);
        plVar3 = *(longlong **)(param_1 + 0x658);
        if (plVar3 == (longlong *)0x0) {
          plVar3 = *(longlong **)(param_1 + 0x660);
          goto LAB_1404d72b4;
        }
        if ((DAT_14c950c29 & 1) == 0) goto LAB_1404d7152;
        goto LAB_1404d7371;
      }
LAB_1404d7152:
      lVar2 = (**(code **)(*plVar3 + 0x310))(plVar3);
      if (*(int *)(lVar2 + 0x98) != *(int *)(lVar2 + 0xc4)) {
        uVar1 = (uint)((ulonglong)lVar12 >> 0x10);
        uVar11 = (uint)lVar12 & 0xffff;
        lVar6 = lVar2 + 200;
        if (*(longlong *)(lVar2 + 0xd0) != 0) {
          lVar6 = *(longlong *)(lVar2 + 0xd0);
        }
        iVar4 = *(int *)(lVar6 + (ulonglong)
                                 (*(int *)(lVar2 + 0xd8) - 1U &
                                 (int)((ulonglong)lVar12 >> 0x20) + ((uint)lVar12 << 0x10 | uVar11)
                                 + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar11 >> 4)) * 4);
        if (iVar4 != -1) {
          do {
            plVar3 = (longlong *)(*(longlong *)(lVar2 + 0x90) + (longlong)iVar4 * 0x14);
            if (*plVar3 == lVar12) {
              if (((plVar3 != (longlong *)0x0) && (plVar3 + 1 != (longlong *)0x0)) &&
                 ((int)plVar3[1] != -1)) goto LAB_1404d71fe;
              break;
            }
            iVar4 = *(int *)((longlong)plVar3 + 0xc);
          } while (iVar4 != -1);
        }
      }
    }
  }
LAB_1404d71fb:
  lVar12 = 0;
LAB_1404d71fe:
  *param_2 = lVar12;
  return param_2;
}



// FUNCTION 1404d737e FUN_1404d737e body=457 status=ok
// SIG undefined FUN_1404d737e(void)

ulonglong FUN_1404d737e(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  uint local_68;
  int iStack_64;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar6 = (ulonglong)(param_2 & 0x1fff);
  lVar8 = (longlong)((int)param_2 >> 0xd);
  lVar1 = *(longlong *)(*(longlong *)(&DAT_14c952ad0 + lVar8 * 8) + uVar6 * 0xc);
  (**(code **)(*param_1 + 0x168))(param_1,&local_58);
  uVar5 = 0;
  if (lVar1 == local_58) {
    plVar2 = (longlong *)param_1[0xe];
    uVar4 = 0;
    if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + lVar8 * 8) + 8 + uVar6 * 0xc)) {
      uVar4 = param_2 + 1;
    }
    uVar5 = CONCAT71((int7)((ulonglong)(uVar4 & 0x1fff) * 3 >> 8),1);
    if (*(longlong *)
         (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar4 >> 0xd) * 8) +
         (ulonglong)(uVar4 & 0x1fff) * 0xc) != plVar2[3]) {
      if (*(int *)(*(longlong *)(&DAT_14c952ad0 + lVar8 * 8) + 8 + uVar6 * 0xc) < 2) {
        param_2 = 0;
      }
      else {
        iVar7 = 1;
        uVar5 = 0xc;
        do {
          iVar7 = iVar7 + *(int *)(*(longlong *)(&DAT_14c952ad0 + lVar8 * 8) + uVar6 * 0xc + 8 +
                                  uVar5) + -1;
          uVar5 = uVar5 + 0xc;
        } while (0 < iVar7);
        param_2 = (int)(uVar5 >> 2) * -0x55555555 + param_2;
      }
      local_48 = *(longlong *)
                  (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)param_2 >> 0xd) * 8) +
                  (ulonglong)(param_2 & 0x1fff) * 0xc);
      local_58 = 0;
      uStack_50 = 0;
      if (local_48 != 0) {
        FUN_1400021e4(&local_48,&local_68);
        cVar3 = FUN_140b10a34(&local_68,&local_58);
        if (cVar3 == '\0') {
          bVar9 = false;
        }
        else {
          bVar9 = ((local_58._4_4_ != 0 || (uint)local_58 != 0) || (int)uStack_50 != 0) ||
                  uStack_50._4_4_ != 0;
        }
        if (CONCAT44(iStack_64,local_68) != 0) {
          FUN_1400020a8();
        }
        if (bVar9) {
          (**(code **)(*plVar2 + 0x370))(plVar2,&local_68);
          uVar5 = (ulonglong)
                  CONCAT31((int3)(((uint)local_58 ^ local_68) >> 8),
                           uStack_50._4_4_ == local_5c &&
                           ((int)uStack_50 == local_60 &&
                           (local_58._4_4_ == iStack_64 && ((uint)local_58 ^ local_68) == 0)));
          goto LAB_1404d7417;
        }
      }
      uVar5 = 0;
    }
  }
LAB_1404d7417:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404d7556 FUN_1404d7556 body=54 status=ok
// SIG undefined FUN_1404d7556(void)

ulonglong * FUN_1404d7556(undefined8 param_1,ulonglong *param_2)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  *param_2 = (ulonglong)DAT_14c892b54;
  return param_2;
}



// FUNCTION 1404d758c FUN_1404d758c body=28 status=ok
// SIG undefined FUN_1404d758c(void)

void FUN_1404d758c(undefined8 *param_1)

{
  FUN_1404d75a8(param_1,0);
  FUN_1404d768c(*param_1);
  return;
}



// FUNCTION 1404d75a8 FUN_1404d75a8 body=228 status=ok
// SIG undefined FUN_1404d75a8(void)

void FUN_1404d75a8(longlong *param_1,byte param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *param_1;
  if ((lVar1 != 0 & (param_2 ^ 1)) == 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0xe0);
    *puVar2 = FUN_1417eb9f0;
    *(undefined1 (*) [16])(puVar2 + 5) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar2 + 1) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar2 + 3) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar2 + 7) = (undefined1  [16])0x0;
    *(undefined1 *)((longlong)puVar2 + 0x31) = 0xff;
    *(undefined4 *)((longlong)puVar2 + 0x2d) = 0xffffffff;
    puVar2[7] = DAT_14c845dbc;
    *(undefined4 *)(puVar2 + 8) = DAT_14c845dc4;
    *(undefined4 *)(puVar2 + 0x17) = 0;
    *(undefined1 (*) [16])(puVar2 + 0x15) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar2 + 0x13) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar2 + 0x11) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar2 + 0xf) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar2 + 0xd) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar2 + 0xb) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(puVar2 + 9) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)puVar2 + 0xbc) = 0xffffffff;
    *(undefined4 *)(puVar2 + 0x18) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0xc4) = 0xffffffff;
    *(undefined4 *)(puVar2 + 0x19) = 0xffffffff;
    *(undefined8 *)((longlong)puVar2 + 0xcc) = 0;
    *(undefined4 *)((longlong)puVar2 + 0xd4) = 0;
    *param_1 = (longlong)(puVar2 + 2);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001404d7688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
      return;
    }
  }
  return;
}



// FUNCTION 1404d768c FUN_1404d768c body=315 status=ok
// SIG undefined FUN_1404d768c(void)

void FUN_1404d768c(undefined8 param_1)

{
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [16];
  undefined1 local_c8 [13];
  undefined4 uStack_bb;
  undefined1 uStack_b7;
  undefined6 uStack_b6;
  undefined8 uStack_b0;
  ulonglong local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uStack_b6 = 0;
  local_c8 = SUB1613((undefined1  [16])0x0,0);
  local_d8 = (undefined1  [16])0x0;
  uStack_bb = 0xffffffff;
  uStack_b7 = 0xff;
  uStack_b0 = DAT_14c845dbc;
  local_a8 = (ulonglong)DAT_14c845dc4;
  local_a0 = (undefined1  [16])0x0;
  local_90 = (undefined1  [16])0x0;
  local_80 = (undefined1  [16])0x0;
  local_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  local_50 = (undefined1  [16])0x0;
  local_40 = (undefined1  [16])0x0;
  local_30 = 0;
  local_2c = 0xffffffff;
  uStack_28 = 0xffffffff;
  uStack_24 = 0xffffffff;
  uStack_20 = 0xffffffff;
  local_1c = 0;
  local_14 = 0;
  FUN_1404d77c8(param_1,local_d8);
  if (local_60._0_8_ != 0) {
    FUN_1400020a8();
  }
  if (local_70._0_8_ != 0) {
    FUN_1400020a8();
  }
  if (local_80._0_8_ != 0) {
    FUN_1400020a8();
  }
  if (local_90._0_8_ != 0) {
    FUN_1400020a8();
  }
  if (local_a0._0_8_ != 0) {
    FUN_1400020a8();
  }
  FUN_1400ea36e(local_c8,local_c8);
  if (local_d8._0_8_ != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404d77c8 FUN_1404d77c8 body=444 status=ok
// SIG undefined FUN_1404d77c8(void)

longlong * FUN_1404d77c8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_1 == param_2) {
    FUN_1404d7984(param_1 + 2,param_2 + 2);
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    FUN_1404d7984(param_1 + 2,param_2 + 2);
    if (param_1[7] != 0) {
      FUN_1400020a8();
    }
    param_1[7] = param_2[7];
    param_2[7] = 0;
    *(int *)(param_1 + 8) = (int)param_2[8];
    *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
    param_2[8] = 0;
    if (param_1[9] != 0) {
      FUN_1400020a8();
    }
    param_1[9] = param_2[9];
    param_2[9] = 0;
    *(int *)(param_1 + 10) = (int)param_2[10];
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
    param_2[10] = 0;
    if (param_1[0xb] != 0) {
      FUN_1400020a8();
    }
    param_1[0xb] = param_2[0xb];
    param_2[0xb] = 0;
    *(int *)(param_1 + 0xc) = (int)param_2[0xc];
    *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
    param_2[0xc] = 0;
    if (param_1[0xd] != 0) {
      FUN_1400020a8();
    }
    param_1[0xd] = param_2[0xd];
    param_2[0xd] = 0;
    *(int *)(param_1 + 0xe) = (int)param_2[0xe];
    *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
    param_2[0xe] = 0;
    if (param_1[0xf] != 0) {
      FUN_1400020a8();
    }
    param_1[0xf] = param_2[0xf];
    param_2[0xf] = 0;
    *(int *)(param_1 + 0x10) = (int)param_2[0x10];
    *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
    param_2[0x10] = 0;
  }
  lVar1 = param_2[0x11];
  lVar2 = param_2[0x12];
  lVar3 = param_2[0x13];
  lVar4 = param_2[0x14];
  lVar5 = param_2[0x15];
  lVar6 = param_2[0x16];
  lVar7 = param_2[0x18];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = lVar7;
  param_1[0x15] = lVar5;
  param_1[0x16] = lVar6;
  param_1[0x13] = lVar3;
  param_1[0x14] = lVar4;
  param_1[0x11] = lVar1;
  param_1[0x12] = lVar2;
  return param_1;
}



// FUNCTION 1404d7984 FUN_1404d7984 body=367 status=ok
// SIG undefined FUN_1404d7984(void)

undefined8 * FUN_1404d7984(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  void *_Dst;
  undefined8 *puVar7;
  ulonglong uVar8;
  void *_Src;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1400ea36e(param_1,param_1);
  *(byte *)((longlong)param_1 + 0x16) = *(byte *)((longlong)param_1 + 0x16) & 0xfb;
  uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
  lVar3 = param_2[2];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar1;
  *(int *)(param_1 + 2) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(int *)(param_1 + 4) = (int)param_2[4];
  param_1[3] = param_2[3];
  if ((~*(uint *)((longlong)param_2 + 0x14) & 0x40000100) == 0) {
    local_58 = &local_48;
    local_48 = 0;
    uStack_40 = 0;
    uVar8 = (ulonglong)*(uint5 *)((longlong)param_1 + 0xd);
    uVar9 = 0xffffffffffffffff;
    if (uVar8 != 0xffffffffff) {
      uVar9 = uVar8;
    }
    cVar6 = FUN_1468887b2(uVar8,param_1 + 3,uVar9,(ulonglong)*(uint5 *)(param_1 + 1));
    uVar5 = uStack_40;
    uVar4 = local_48;
    if (cVar6 != '\0') {
      puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar7 = 0;
      puVar7[1] = uVar4;
      puVar7[2] = uVar5;
      *param_1 = puVar7;
      *(byte *)((longlong)param_1 + 0x17) = *(byte *)((longlong)param_1 + 0x17) | 0x40;
    }
    goto LAB_1404d7a3a;
  }
  if ((*(uint *)((longlong)param_2 + 0x14) >> 0x1e & 1) == 0) {
LAB_1404d79ea:
    _Src = (void *)*param_2;
    if (_Src == (void *)0x0) goto LAB_1404d7a3a;
  }
  else {
    param_2 = (longlong *)*param_2;
    if (param_2 == (longlong *)0x0) goto LAB_1404d7a3a;
    _Src = (void *)*param_2;
    if (_Src == (void *)0x0) {
      if (param_2[2] == 0) goto LAB_1404d7a3a;
      param_2 = (longlong *)(param_2[2] + 8);
      goto LAB_1404d79ea;
    }
  }
  _Dst = (void *)FUN_14001fdce(*param_1,(ulonglong)*(uint5 *)(param_1 + 1),0);
  *param_1 = _Dst;
  memcpy(_Dst,_Src,(ulonglong)*(uint5 *)(param_1 + 1));
LAB_1404d7a3a:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1404d7af4 FUN_1404d7af4 body=76 status=ok
// SIG undefined FUN_1404d7af4(void)

bool FUN_1404d7af4(longlong *param_1)

{
  undefined1 auStack_38 [39];
  char local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 0x108))(param_1,&local_11);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return local_11 == DAT_14c96b238;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404d7b62 FUN_1404d7b62 body=76 status=ok
// SIG undefined FUN_1404d7b62(void)

bool FUN_1404d7b62(longlong *param_1)

{
  undefined1 auStack_38 [39];
  char local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 0x118))(param_1,&local_11);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return local_11 == DAT_14c96b238;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404d7bcf FUN_1404d7bcf body=663 status=ok
// SIG undefined FUN_1404d7bcf(void)

void FUN_1404d7bcf(void)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  uint local_88 [4];
  uint *local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar10 = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_145da820a();
  iVar2 = local_70;
  uVar15 = 1;
  iVar11 = 0;
  iVar5 = 0;
  if (local_70 != 0) {
    puVar4 = local_78;
    if (local_78 == (uint *)0x0) {
      puVar4 = local_88;
    }
    uVar14 = *puVar4;
    if (uVar14 == 0) {
      iVar5 = local_70 + 0x1e;
      if (-1 < local_70 + -1) {
        iVar5 = local_70 + -1;
      }
      uVar10 = 0;
      uVar15 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar15 = uVar10;
      }
      iVar11 = 0;
      do {
        if (uVar15 == uVar10) goto LAB_1404d7ca4;
        iVar11 = iVar11 + 0x20;
        uVar14 = puVar4[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar14 & uVar14);
    uVar1 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar5 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (local_70 <= iVar5) {
      iVar5 = local_70;
    }
  }
  if (iVar5 != local_70) {
    uVar14 = 0xffffffff;
    iVar3 = local_70;
    do {
      iVar7 = *(int *)(local_98[0] + 4 + (longlong)iVar5 * 0x20);
      if ((((iVar7 != 0) &&
           (uVar6 = *(uint *)(local_98[0] + (longlong)iVar5 * 0x20), -1 < (int)uVar6)) &&
          ((int)uVar6 < DAT_14c9647dc)) &&
         (((plVar9 = (longlong *)
                     ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
           plVar9 != (longlong *)0x0 && ((int)plVar9[2] == iVar7)) &&
          ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
          lVar12 = *plVar9;
        }
        else {
          lVar12 = 0;
        }
        if (*(longlong *)(lVar12 + 0x2b8) != 0) {
          if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
            lVar12 = *plVar9;
          }
          else {
            lVar12 = 0;
          }
          bifrost::account::link_code::stop(*(User **)(lVar12 + 0x2b8));
          iVar3 = local_70;
        }
      }
      uVar14 = uVar14 & ~(uint)uVar15;
      puVar4 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar4 = local_88;
      }
      iVar5 = (int)uVar10;
      lVar12 = (longlong)iVar5;
      uVar6 = puVar4[lVar12] & uVar14;
      if (uVar6 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar5 < iVar7) {
          lVar13 = 0;
          do {
            uVar6 = puVar4[lVar12 + lVar13 + 1];
            if (uVar6 != 0) {
              uVar10 = (ulonglong)(iVar5 + (int)lVar13 + 1);
              uVar14 = 0xffffffff;
              goto LAB_1404d7e13;
            }
            iVar11 = iVar11 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar8 - lVar12 != lVar13);
          uVar14 = 0xffffffff;
          iVar5 = iVar8;
        }
        uVar10 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar3;
      }
      else {
LAB_1404d7e13:
        uVar15 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar5 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar2);
  }
LAB_1404d7ca4:
  if (DAT_14cb98ad0 != DAT_14cb98afc) {
    FUN_148ac828e();
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_145c0832e(local_98);
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404d7e68 FUN_1404d7e68 body=547 status=ok
// SIG undefined FUN_1404d7e68(void)

void FUN_1404d7e68(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c98e618 != 0) {
    uVar5 = (**(code **)(**(longlong **)(DAT_14c98e618 + 0x720) + 8))();
    local_30 = 0;
    local_28 = (longlong *)param_1[0x3a];
    if (local_28 != (longlong *)0x0) {
      iVar6 = (int)local_28[1];
      do {
        if (iVar6 == 0) {
          local_28 = (longlong *)0x0;
          goto LAB_1404d7f0a;
        }
        LOCK();
        iVar4 = (int)local_28[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(local_28 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      if (local_28 != (longlong *)0x0) {
        local_30 = param_1[0x39];
      }
    }
LAB_1404d7f0a:
    if (local_30 == 0) {
      FUN_146151772(DAT_14c98e618,uVar5,2);
    }
    else {
      FUN_145cd1400(DAT_14c98e618,&local_30,2);
      plVar3 = (longlong *)param_1[0x3a];
      param_1[0x39] = 0;
      param_1[0x3a] = 0;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
    }
    plVar3 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    local_30 = 0;
    local_28 = (longlong *)param_1[0x3c];
    if (local_28 != (longlong *)0x0) {
      iVar6 = (int)local_28[1];
      do {
        if (iVar6 == 0) {
          local_28 = (longlong *)0x0;
          goto LAB_1404d7fc7;
        }
        LOCK();
        iVar4 = (int)local_28[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(local_28 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      if (local_28 != (longlong *)0x0) {
        local_30 = param_1[0x3b];
      }
    }
LAB_1404d7fc7:
    lVar8 = DAT_14c98e618;
    if (local_30 != 0) {
      uVar7 = (**(code **)(**(longlong **)(DAT_14c98e618 + 0x720) + 8))();
      FUN_1410a3d58(lVar8,uVar7,&local_30,2);
      plVar3 = (longlong *)param_1[0x3c];
      param_1[0x3b] = 0;
      param_1[0x3c] = 0;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
    }
    plVar3 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    lVar8 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar8 != 0) {
      uVar9 = (**(code **)(*param_1 + 0x180))(param_1);
      lVar8 = FUN_1414fb874(uVar9,uVar5);
      if (lVar8 != 0) {
        *(uint *)(lVar8 + 0x634) =
             *(uint *)(lVar8 + 0x634) & 0xfffffffe | (uint)*(byte *)(param_1 + 0x3d);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404d808c FUN_1404d808c body=202 status=ok
// SIG undefined FUN_1404d808c(void)

undefined8 FUN_1404d808c(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14c8733f4);
  uVar1 = (**(code **)(*param_2 + 0x48))(param_2);
  if (uVar1 < 0x11) {
    if (*(longlong *)(param_1 + 0x70) == 0) {
      uVar3 = 8;
    }
    else {
      lVar2 = FUN_1404d8156();
      uVar3 = 0x40;
      uVar4 = (lVar2 + (ulonglong)(lVar2 == 0)) - 1;
      if (uVar4 != 0) {
        uVar3 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> uVar3 == 0; uVar3 = uVar3 - 1) {
          }
        }
        uVar3 = uVar3 ^ 0x3f;
      }
      uVar3 = 0x40 - uVar3;
    }
  }
  else {
    uVar4 = 8;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar2 = FUN_1404d8156();
      uVar3 = lVar2 + (ulonglong)(lVar2 == -1);
      uVar4 = 0x40;
      if (uVar3 != 0) {
        uVar4 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> uVar4 == 0; uVar4 = uVar4 - 1) {
          }
        }
        uVar4 = uVar4 ^ 0x3f;
      }
      uVar4 = 0x40 - uVar4;
    }
    uVar3 = 8;
    if (uVar4 < 8) {
      uVar3 = uVar4;
    }
  }
  (**(code **)(*param_2 + 0x178))(param_2,param_4,uVar3);
  return 1;
}



// FUNCTION 1404d8156 FUN_1404d8156 body=106 status=ok
// SIG undefined FUN_1404d8156(void)

ulonglong FUN_1404d8156(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar3 = (longlong)*(int *)(param_1 + 0x48);
  if (lVar3 == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  if ((*(byte *)(param_1 + 0x51) & 1) == 0) {
    uVar2 = *(ulonglong *)(lVar1 + 8);
    if (1 < *(int *)(param_1 + 0x48)) {
      lVar4 = 0;
      do {
        uVar5 = *(ulonglong *)(lVar1 + 0x18 + lVar4);
        if ((longlong)uVar2 < (longlong)uVar5) {
          uVar2 = uVar5;
        }
        lVar4 = lVar4 + 0x10;
      } while (lVar3 * 0x10 + -0x10 != lVar4);
    }
  }
  else {
    lVar4 = 0;
    uVar2 = 0;
    do {
      uVar5 = *(ulonglong *)(lVar1 + 8 + lVar4);
      if ((uVar5 & uVar5 - 1) != 0) {
        uVar5 = 0;
      }
      uVar2 = uVar2 | uVar5;
      lVar4 = lVar4 + 0x10;
    } while (lVar3 * 0x10 != lVar4);
  }
  return uVar2;
}



// FUNCTION 1404d81c0 FUN_1404d81c0 body=111 status=ok
// SIG undefined FUN_1404d81c0(void)

void FUN_1404d81c0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar3 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar3);
  if (0 < (int)uVar3) {
    lVar4 = 0;
    do {
      lVar1 = param_2[2];
      lVar2 = param_1[2];
      *(undefined4 *)(lVar2 + 8 + lVar4) = *(undefined4 *)(lVar1 + 8 + lVar4);
      *(undefined8 *)(lVar2 + lVar4) = *(undefined8 *)(lVar1 + lVar4);
      lVar4 = lVar4 + 0xc;
    } while ((ulonglong)uVar3 * 0xc != lVar4);
  }
  return;
}



// FUNCTION 1404d823a FUN_1404d823a body=139 status=ok
// SIG undefined FUN_1404d823a(void)

void FUN_1404d823a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  FUN_1404d82c5(param_1 + 0x300,1);
  FUN_1404d86f2(param_1 + 0x300,1);
  iVar1 = *(int *)(param_1 + 0x3c0);
  *(undefined1 *)(param_1 + 0x328 + (longlong)(iVar1 % 2) * 0x60) = 0;
  *(int *)(param_1 + 0x3c0) = iVar1 + 1;
  lVar2 = (longlong)(int)((iVar1 - ((iVar1 - (iVar1 + 1 >> 0x1f)) + 1U & 0xfffffffe)) + 1) * 0x60;
  *(undefined2 *)(param_1 + 0x328 + lVar2) = 1;
  *(undefined8 *)(param_1 + 800 + lVar2) = 0;
  return;
}



// FUNCTION 1404d82c5 FUN_1404d82c5 body=1046 status=ok
// SIG undefined FUN_1404d82c5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404d82c5(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  longlong lVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong *plVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = (longlong)(*(int *)(param_1 + 0xc0) % 2) * 0x60;
  iVar2 = *(int *)(param_1 + 0x20 + lVar5);
  iVar9 = iVar2 + 0x3f;
  if (-1 < iVar2) {
    iVar9 = iVar2;
  }
  iVar9 = iVar9 >> 6;
  iVar14 = iVar2 % 0x40;
  if (iVar2 < 0x40 || iVar14 != 0) {
    if (param_2 != '\x01' || iVar14 == 0) goto LAB_1404d8347;
  }
  else {
    iVar9 = iVar9 + -1;
    iVar14 = 0x40;
  }
  plVar15 = (longlong *)(param_1 + lVar5);
  uVar8 = *(undefined8 *)(*plVar15 + (longlong)iVar9 * 8);
  if ((DAT_14c761384 == 0) || (cVar4 = FUN_1447e0190(), cVar4 == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar7 = (uint *)*puVar1;
  if (puVar7 != (uint *)0x0) goto LAB_1404d8451;
  while( true ) {
    uVar11 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar11 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar11 | 1;
      __tlregdtor(&LAB_1434414af);
    }
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar6 = *(undefined4 **)(lVar5 + 0x310);
    *(undefined8 *)(lVar5 + 0x310) = 0;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar6 = 0xffffffff;
    *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
    puVar6[0x12] = 0;
    *puVar1 = puVar6;
    FUN_140217a48(puVar1);
    puVar7 = (uint *)*puVar1;
LAB_1404d8451:
    puVar13 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
    puVar12 = (uint *)(puVar13 + 0x18);
    uVar11 = puVar7[0x12];
    if (puVar12 <= puVar7 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
      LOCK();
      uVar10 = *puVar7;
      *puVar7 = *puVar7 + uVar11 + 1;
      UNLOCK();
      if ((uVar10 ^ uVar11) != 0xffffffff) break;
      puVar7 = (uint *)*puVar1;
      *puVar7 = 0xffffffff;
      *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
      puVar7[0x12] = 0;
      *puVar1 = puVar7;
      puVar13 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
      puVar12 = (uint *)(puVar13 + 0x18);
      uVar11 = 0;
      if (puVar12 <= puVar7 + 0x4000) {
        uVar11 = 1;
        goto LAB_1404d84d1;
      }
    }
  }
  uVar11 = uVar11 + 1;
LAB_1404d84d1:
  *(uint **)(puVar7 + 0x10) = puVar12;
  puVar7[0x12] = uVar11;
  FUN_1447247dc(puVar13,0);
  *puVar13 = &PTR_FUN_14a83bf78;
  puVar13[0x15] = uVar8;
  puVar13[0x16] = 0;
  *(int *)(puVar13 + 0x17) = iVar14;
  uVar11 = DAT_14cacfe78;
  if (((DAT_14cacfe70 != 0x400) || (DAT_14c7585d8 != 0)) &&
     ((DAT_14cacfe70 != 0x800 || (DAT_14c7585dc != 0)))) {
    uVar11 = DAT_14cacfe70 | _DAT_14cacfe74;
  }
  uVar10 = uVar11 >> 10 & 3;
  if ((uVar11 >> 9 & 1) == 0 || uVar10 < 2) {
    uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar10];
  }
  else {
    uVar17 = 2;
  }
  if (*(code **)(puVar13[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar13[0xe] + 0x18))(puVar13 + 0xe,puVar13 + 9);
  }
  puVar13[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar13[9] = puVar13;
  puVar13[10] = puVar13;
  lVar5 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar5 == 0) {
    uVar3 = 1;
    if ((char)uVar17 != '\x06') {
      uVar3 = uVar17;
    }
    uVar17 = uVar3;
    uVar8 = 0;
  }
  else {
    if ((char)uVar17 == '\x06') {
      uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
    }
    uVar8 = *(undefined8 *)(lVar5 + 0x30);
  }
  puVar13[0xf] = uVar8;
  puVar13[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
  *(undefined4 *)((longlong)puVar13 + 0x1c) = 0;
  if (puVar13 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
    UNLOCK();
  }
  local_39 = 1;
  FUN_1447439e4(puVar13);
  iVar2 = (int)plVar15[0xb];
  *(uint *)(plVar15 + 0xb) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar15 + 0x5c) < iVar2 + 1U) {
    FUN_14476a5c8(plVar15 + 6,iVar2);
  }
  plVar16 = plVar15 + 6;
  if ((longlong *)plVar15[10] != (longlong *)0x0) {
    plVar16 = (longlong *)plVar15[10];
  }
  plVar16[iVar2] = (longlong)puVar13;
LAB_1404d8347:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404d86f2 FUN_1404d86f2 body=1047 status=ok
// SIG undefined FUN_1404d86f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404d86f2(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  longlong lVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = (longlong)(*(int *)(param_1 + 0xc0) % 2) * 0x60;
  iVar2 = *(int *)(param_1 + 0x24 + lVar5);
  iVar9 = iVar2 + 0x3f;
  if (-1 < iVar2) {
    iVar9 = iVar2;
  }
  iVar9 = iVar9 >> 6;
  iVar14 = iVar2 % 0x40;
  if (iVar2 < 0x40 || iVar14 != 0) {
    if (param_2 != '\x01' || iVar14 == 0) goto LAB_1404d8774;
  }
  else {
    iVar9 = iVar9 + -1;
    iVar14 = 0x40;
  }
  param_1 = param_1 + lVar5;
  uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar9 * 8);
  if ((DAT_14c761384 == 0) || (cVar4 = FUN_1447e0190(), cVar4 == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar7 = (uint *)*puVar1;
  if (puVar7 != (uint *)0x0) goto LAB_1404d887f;
  while( true ) {
    uVar11 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar11 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar11 | 1;
      __tlregdtor(&LAB_1434414af);
    }
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar6 = *(undefined4 **)(lVar5 + 0x310);
    *(undefined8 *)(lVar5 + 0x310) = 0;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar6 = 0xffffffff;
    *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
    puVar6[0x12] = 0;
    *puVar1 = puVar6;
    FUN_140217a48(puVar1);
    puVar7 = (uint *)*puVar1;
LAB_1404d887f:
    puVar13 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
    puVar12 = (uint *)(puVar13 + 0x18);
    uVar11 = puVar7[0x12];
    if (puVar12 <= puVar7 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
      LOCK();
      uVar10 = *puVar7;
      *puVar7 = *puVar7 + uVar11 + 1;
      UNLOCK();
      if ((uVar10 ^ uVar11) != 0xffffffff) break;
      puVar7 = (uint *)*puVar1;
      *puVar7 = 0xffffffff;
      *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
      puVar7[0x12] = 0;
      *puVar1 = puVar7;
      puVar13 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
      puVar12 = (uint *)(puVar13 + 0x18);
      uVar11 = 0;
      if (puVar12 <= puVar7 + 0x4000) {
        uVar11 = 1;
        goto LAB_1404d88ff;
      }
    }
  }
  uVar11 = uVar11 + 1;
LAB_1404d88ff:
  *(uint **)(puVar7 + 0x10) = puVar12;
  puVar7[0x12] = uVar11;
  FUN_1447247dc(puVar13,0);
  *puVar13 = &PTR_FUN_14a83bf78;
  puVar13[0x15] = 0;
  puVar13[0x16] = uVar8;
  *(int *)(puVar13 + 0x17) = iVar14;
  uVar11 = DAT_14cacfe78;
  if (((DAT_14cacfe70 != 0x400) || (DAT_14c7585d8 != 0)) &&
     ((DAT_14cacfe70 != 0x800 || (DAT_14c7585dc != 0)))) {
    uVar11 = DAT_14cacfe70 | _DAT_14cacfe74;
  }
  uVar10 = uVar11 >> 10 & 3;
  if ((uVar11 >> 9 & 1) == 0 || uVar10 < 2) {
    uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar10];
  }
  else {
    uVar15 = 2;
  }
  if (*(code **)(puVar13[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar13[0xe] + 0x18))(puVar13 + 0xe,puVar13 + 9);
  }
  puVar13[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar13[9] = puVar13;
  puVar13[10] = puVar13;
  lVar5 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar5 == 0) {
    uVar3 = 1;
    if ((char)uVar15 != '\x06') {
      uVar3 = uVar15;
    }
    uVar15 = uVar3;
    uVar8 = 0;
  }
  else {
    if ((char)uVar15 == '\x06') {
      uVar15 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
    }
    uVar8 = *(undefined8 *)(lVar5 + 0x30);
  }
  puVar13[0xf] = uVar8;
  puVar13[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
  *(undefined4 *)((longlong)puVar13 + 0x1c) = 0;
  if (puVar13 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
    UNLOCK();
  }
  local_39 = 1;
  FUN_1447439e4(puVar13);
  iVar2 = *(int *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x58) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x5c) < iVar2 + 1U) {
    FUN_14476a5c8(param_1 + 0x30,iVar2);
  }
  lVar5 = param_1 + 0x30;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x50);
  }
  *(undefined8 **)(lVar5 + (longlong)iVar2 * 8) = puVar13;
LAB_1404d8774:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404d8b20 FUN_1404d8b20 body=287 status=ok
// SIG undefined FUN_1404d8b20(void)

void FUN_1404d8b20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x1518) != 0) {
    cVar2 = FUN_1449cc0b2(param_1);
    if (((cVar2 != '\0') && (*(char *)(param_1 + 0x1539) != '\0')) &&
       (1 < (ulonglong)(DAT_14c872be0 - *(longlong *)(param_1 + 0x1728)))) {
      lVar1 = *(longlong *)(param_1 + 0x110);
      local_48 = *(double *)(param_1 + 0x1818) - *(double *)(lVar1 + 0x270);
      local_50 = *(double *)(param_1 + 0x1810) - *(double *)(lVar1 + 0x268);
      local_58 = *(double *)(param_1 + 0x1808) - *(double *)(lVar1 + 0x260);
      FUN_147e69851(&local_70,param_1,&local_58,(int)param_2);
      *(undefined8 *)(param_1 + 0x138) = local_60;
      *(undefined4 *)(param_1 + 0x128) = local_70;
      *(undefined4 *)(param_1 + 300) = uStack_6c;
      *(undefined4 *)(param_1 + 0x130) = uStack_68;
      *(undefined4 *)(param_1 + 0x134) = uStack_64;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_1404d8c56(param_1,param_2,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404d8c56 FUN_1404d8c56 body=2617 status=ok
// SIG undefined FUN_1404d8c56(void)

void FUN_1404d8c56(longlong *param_1,undefined8 param_2,float param_3,char param_4,
                  undefined4 param_5)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  byte bVar6;
  bool bVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_128 [32];
  float local_108;
  undefined4 local_100;
  undefined4 *local_f8;
  float *local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  float local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double local_b8;
  ulonglong local_b0;
  
  fVar13 = (float)param_2;
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  cVar5 = (**(code **)(*param_1 + 0x600))();
  if ((((cVar5 != '\0') && (1e-06 <= fVar13)) && ((char)param_1[0x1f0] == '\0')) &&
     (((param_1[0x3e] == 0 || (*(char *)(param_1[0x3e] + 0x178) != '\x01')) ||
      ((*(byte *)((longlong)param_1 + 0x5b7) & 1) != 0)))) {
    fVar20 = 0.0;
    if (0.0 <= param_3) {
      fVar20 = param_3;
    }
    uVar10 = (**(code **)(*param_1 + 0x710))(param_1);
    uVar11 = (**(code **)(*param_1 + 0x480))(param_1);
    local_f8 = &local_c8;
    local_b8 = DAT_14c8464f0;
    local_c8 = (undefined4)DAT_14c8464e0;
    uStack_c4 = DAT_14c8464e0._4_4_;
    uStack_c0 = (undefined4)DAT_14c8464e8;
    uStack_bc = DAT_14c8464e8._4_4_;
    local_f0 = &local_cc;
    local_cc = 0.0;
    local_100 = param_5;
    local_108 = fVar20;
    bVar6 = (**(code **)(*param_1 + 0x6d0))(param_1,param_2,uVar10,uVar11);
    if ((*(byte *)((longlong)param_1 + 0x349) & 4) != 0) {
      dVar15 = (double)param_1[0x71];
      dVar14 = (double)param_1[0x72];
      dVar16 = (double)param_1[0x73];
      dVar17 = dVar16 * dVar16 + dVar15 * dVar15 + dVar14 * dVar14;
      if (dVar17 <= 9.99999993922529e-09) {
        dVar15 = (double)param_1[0x25];
        dVar14 = (double)param_1[0x26];
        dVar16 = (double)param_1[0x27];
        dVar17 = dVar16 * dVar16 + dVar15 * dVar15 + dVar14 * dVar14;
        if (9.99999993922529e-09 <= dVar17) {
          if ((dVar17 != 1.0) || (NAN(dVar17))) {
            local_e8 = 1.0 / SQRT(dVar17);
            local_d8 = dVar16 * local_e8;
            dStack_e0 = dVar14 * local_e8;
            local_e8 = dVar15 * local_e8;
          }
          else {
            local_d8 = (double)param_1[0x27];
            local_e8 = (double)param_1[0x25];
            dStack_e0 = (double)param_1[0x26];
          }
        }
        else {
          FUN_14141a100(param_1[0x22],&local_e8);
        }
        dVar15 = (double)(float)uVar10;
        param_1[0x71] = (longlong)(dVar15 * local_e8);
        param_1[0x72] = (longlong)(dStack_e0 * dVar15);
        param_1[0x73] = (longlong)(local_d8 * dVar15);
      }
      else {
        if ((dVar17 != 1.0) || (NAN(dVar17))) {
          if (9.99999993922529e-09 <= dVar17) {
            dVar17 = 1.0 / SQRT(dVar17);
            dVar16 = dVar16 * dVar17;
            dVar14 = dVar14 * dVar17;
            dVar15 = dVar15 * dVar17;
          }
          else {
            dVar15 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            dVar14 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            dVar16 = DAT_14c8464f0;
          }
        }
        dVar17 = (double)(float)uVar10;
        param_1[0x71] = (longlong)(dVar15 * dVar17);
        param_1[0x72] = (longlong)(dVar14 * dVar17);
        param_1[0x73] = (longlong)(dVar16 * dVar17);
      }
      *(undefined4 *)(param_1 + 0x86) = 0x3f800000;
    }
    fVar8 = (float)(**(code **)(*param_1 + 0x708))(param_1);
    fVar19 = *(float *)(param_1 + 0x86) * (float)uVar11;
    if (fVar19 <= fVar8) {
      fVar19 = fVar8;
    }
    fVar8 = local_cc;
    if (local_cc <= fVar19) {
      fVar8 = fVar19;
    }
    if (((((double)param_1[0x71] != 0.0) || (NAN((double)param_1[0x71]))) ||
        ((double)param_1[0x72] != 0.0)) || (NAN((double)param_1[0x72]))) {
      bVar7 = false;
    }
    else {
      bVar7 = (double)param_1[0x73] == 0.0;
    }
    cVar5 = (**(code **)(*param_1 + 0x488))(param_1,fVar8);
    if (((bVar7 & (bVar6 ^ 1)) == 0) && (cVar5 == '\0')) {
      if (bVar7 == false) {
        dVar15 = (double)param_1[0x71];
        dVar14 = (double)param_1[0x72];
        dVar16 = (double)param_1[0x73];
        dVar17 = dVar16 * dVar16 + dVar15 * dVar15 + dVar14 * dVar14;
        if ((dVar17 != 1.0) || (NAN(dVar17))) {
          if (dVar17 < 9.99999993922529e-09) {
            dVar15 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            dVar14 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            dVar16 = DAT_14c8464f0;
          }
          else {
            dVar17 = 1.0 / SQRT(dVar17);
            dVar14 = dVar14 * dVar17;
            dVar15 = dVar15 * dVar17;
            dVar16 = dVar16 * dVar17;
          }
        }
        dVar17 = (double)param_1[0x25];
        dVar18 = (double)param_1[0x26];
        dVar2 = (double)param_1[0x27];
        dVar4 = (double)(float)SQRT(dVar2 * dVar2 + dVar17 * dVar17 + dVar18 * dVar18);
        fVar8 = fVar20 * fVar13;
        if (1.0 <= fVar8) {
          fVar8 = 1.0;
        }
        dVar3 = (double)fVar8;
        param_1[0x25] = (longlong)(dVar17 - (dVar17 - dVar15 * dVar4) * dVar3);
        param_1[0x26] = (longlong)(dVar18 - (dVar18 - dVar14 * dVar4) * dVar3);
        param_1[0x27] = (longlong)(dVar2 - (dVar2 - dVar16 * dVar4) * dVar3);
      }
    }
    else {
      fVar1 = fVar20;
      if ((*(byte *)(param_1 + 0x69) & 1) != 0) {
        fVar1 = *(float *)(param_1 + 0x5f);
      }
      dVar15 = (double)param_1[0x25];
      dVar14 = (double)param_1[0x26];
      dVar16 = (double)param_1[0x27];
      (**(code **)(*param_1 + 0x8f0))(param_1,param_2,fVar1,param_5);
      if (((cVar5 != '\0') &&
          ((double)param_1[0x27] * (double)param_1[0x27] +
           (double)param_1[0x25] * (double)param_1[0x25] +
           (double)param_1[0x26] * (double)param_1[0x26] < (double)(fVar8 * fVar8))) &&
         (0.0 < (double)param_1[0x73] * dVar16 +
                (double)param_1[0x71] * dVar15 + (double)param_1[0x72] * dVar14)) {
        dVar17 = dVar16 * dVar16 + dVar15 * dVar15 + dVar14 * dVar14;
        if ((dVar17 != 1.0) || (NAN(dVar17))) {
          if (dVar17 < 9.99999993922529e-09) {
            dVar15 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            dVar14 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            dVar16 = DAT_14c8464f0;
          }
          else {
            dVar17 = 1.0 / SQRT(dVar17);
            dVar14 = dVar14 * dVar17;
            dVar15 = dVar15 * dVar17;
            dVar16 = dVar16 * dVar17;
          }
        }
        dVar17 = (double)fVar8;
        param_1[0x25] = (longlong)(dVar15 * dVar17);
        param_1[0x26] = (longlong)(dVar14 * dVar17);
        param_1[0x27] = (longlong)(dVar16 * dVar17);
      }
    }
    if (param_4 != '\0') {
      fVar20 = fVar20 * fVar13;
      if (1.0 <= fVar20) {
        fVar20 = 1.0;
      }
      dVar15 = (double)(1.0 - fVar20);
      param_1[0x25] = (longlong)(dVar15 * (double)param_1[0x25]);
      param_1[0x26] = (longlong)((double)param_1[0x26] * dVar15);
      param_1[0x27] = (longlong)((double)param_1[0x27] * dVar15);
    }
    if (bVar7 == false) {
      cVar5 = (**(code **)(*param_1 + 0x488))(param_1,fVar19);
      dVar15 = (double)param_1[0x25];
      dVar14 = (double)param_1[0x26];
      if (cVar5 == '\0') {
        dVar16 = (double)param_1[0x27];
      }
      else {
        dVar16 = (double)param_1[0x27];
        fVar19 = (float)SQRT(dVar16 * dVar16 + dVar15 * dVar15 + dVar14 * dVar14);
      }
      if (fVar19 < 0.0001) {
        dVar15 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        dVar14 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        dVar16 = DAT_14c8464f0;
      }
      else {
        dVar17 = (double)fVar13;
        dVar16 = dVar16 + (double)param_1[0x73] * dVar17;
        dVar15 = dVar15 + dVar17 * (double)param_1[0x71];
        dVar14 = dVar14 + (double)param_1[0x72] * dVar17;
        dVar17 = (double)fVar19;
        dVar18 = dVar16 * dVar16 + dVar15 * dVar15 + dVar14 * dVar14;
        if (dVar17 * dVar17 < dVar18) {
          dVar17 = (1.0 / SQRT(dVar18)) * dVar17;
          dVar14 = dVar14 * dVar17;
          dVar15 = dVar15 * dVar17;
          dVar16 = dVar16 * dVar17;
        }
      }
      param_1[0x25] = (longlong)dVar15;
      param_1[0x26] = (longlong)dVar14;
      param_1[0x27] = (longlong)dVar16;
    }
    if (bVar6 != 0) {
      cVar5 = (**(code **)(*param_1 + 0x488))(param_1,local_cc);
      if (cVar5 == '\0') {
        uVar9 = (undefined4)param_1[0x25];
        uVar12 = (undefined4)((ulonglong)param_1[0x25] >> 0x20);
        dVar15 = (double)param_1[0x26];
        dVar14 = (double)param_1[0x27];
        fVar20 = local_cc;
      }
      else {
        dVar16 = (double)param_1[0x25];
        uVar9 = SUB84(dVar16,0);
        uVar12 = (undefined4)((ulonglong)dVar16 >> 0x20);
        dVar15 = (double)param_1[0x26];
        dVar14 = (double)param_1[0x27];
        fVar20 = (float)SQRT(dVar14 * dVar14 + dVar16 * dVar16 + dVar15 * dVar15);
      }
      if (0.0001 <= fVar20) {
        dVar16 = (double)fVar13;
        dVar14 = dVar14 + local_b8 * dVar16;
        dVar15 = dVar15 + (double)CONCAT44(uStack_bc,uStack_c0) * dVar16;
        dVar16 = (double)CONCAT44(uVar12,uVar9) + dVar16 * (double)CONCAT44(uStack_c4,local_c8);
        dVar17 = (double)fVar20;
        dVar18 = dVar14 * dVar14 + dVar16 * dVar16 + dVar15 * dVar15;
        if (dVar17 * dVar17 < dVar18) {
          dVar17 = (1.0 / SQRT(dVar18)) * dVar17;
          dVar14 = dVar14 * dVar17;
          dVar15 = dVar15 * dVar17;
          dVar16 = dVar16 * dVar17;
        }
      }
      else {
        dVar16 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        dVar15 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        dVar14 = DAT_14c8464f0;
      }
      param_1[0x25] = (longlong)dVar16;
      param_1[0x26] = (longlong)dVar15;
      param_1[0x27] = (longlong)dVar14;
    }
    if ((*(byte *)((longlong)param_1 + 0x5b6) & 0x20) != 0) {
      (**(code **)(*param_1 + 0xba8))(param_1,param_2);
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404d96f8 FUN_1404d96f8 body=1022 status=ok
// SIG undefined FUN_1404d96f8(void)

undefined8
FUN_1404d96f8(longlong *param_1,float param_2,float param_3,float param_4,float param_5,
             undefined8 param_6,double *param_7,float *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double local_e0;
  double local_d8;
  double local_d0;
  
  if ((*(byte *)((longlong)param_1 + 0x5bc) & 1) != 0) {
    dVar9 = (double)param_1[0xbc];
    dVar12 = (double)param_1[0xbd];
    dVar10 = (double)param_1[0xbe];
    fVar5 = (float)(dVar10 * dVar10 + dVar9 * dVar9 + dVar12 * dVar12);
    if (0.0001 <= fVar5) {
      fVar5 = SQRT(fVar5);
      dVar11 = 1.0 / (double)fVar5;
      if (((*(byte *)((longlong)param_1 + 0x5bc) & 2) == 0) && (fVar5 <= param_4)) {
        param_4 = fVar5;
      }
      dVar3 = (double)param_4;
      dVar6 = dVar10 * dVar11 * dVar3;
      dVar7 = dVar12 * dVar11 * dVar3;
      dVar3 = dVar3 * dVar9 * dVar11;
      local_d0 = DAT_14c8464e0;
      local_e0 = DAT_14c8464e8;
      local_d8 = DAT_14c8464f0;
      dVar8 = (double)param_1[0x25];
      dVar1 = (double)param_1[0x26];
      dVar2 = (double)param_1[0x27];
      cVar4 = (**(code **)(*param_1 + 0x7e0))(param_1,param_4);
      if (cVar4 == '\0') {
        param_1[0x25] = (longlong)dVar3;
        param_1[0x26] = (longlong)dVar7;
        param_1[0x27] = (longlong)dVar6;
      }
      else {
        dVar8 = (double)SQRT((float)(dVar2 * dVar2 + dVar8 * dVar8 + dVar1 * dVar1));
        param_5 = param_5 * param_2;
        if (1.0 <= param_5) {
          param_5 = 1.0;
        }
        dVar1 = (double)param_5;
        dVar10 = (double)param_1[0x27] - ((double)param_1[0x27] - dVar10 * dVar11 * dVar8) * dVar1;
        dVar12 = (double)param_1[0x26] - ((double)param_1[0x26] - dVar12 * dVar11 * dVar8) * dVar1;
        dVar9 = (double)param_1[0x25] - ((double)param_1[0x25] - dVar9 * dVar11 * dVar8) * dVar1;
        param_1[0x25] = (longlong)dVar9;
        param_1[0x26] = (longlong)dVar12;
        param_1[0x27] = (longlong)dVar10;
        if (0.0001 <= param_3) {
          local_d0 = 1.0 / (double)param_2;
          local_d8 = (dVar6 - dVar10) * local_d0;
          local_e0 = (dVar7 - dVar12) * local_d0;
          local_d0 = local_d0 * (dVar3 - dVar9);
          dVar9 = (double)param_3;
          dVar12 = local_d8 * local_d8 + local_d0 * local_d0 + local_e0 * local_e0;
          if (dVar9 * dVar9 < dVar12) {
            dVar9 = (1.0 / SQRT(dVar12)) * dVar9;
            local_d8 = local_d8 * dVar9;
            local_e0 = local_e0 * dVar9;
            local_d0 = local_d0 * dVar9;
          }
        }
        else {
          local_d0 = DAT_14c8464e0;
          local_e0 = DAT_14c8464e8;
          local_d8 = DAT_14c8464f0;
        }
      }
      *param_8 = param_4;
      *param_7 = local_d0;
      param_7[1] = local_e0;
      param_7[2] = local_d8;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1404d9af6 FUN_1404d9af6 body=1055 status=ok
// SIG undefined FUN_1404d9af6(void)

void FUN_1404d9af6(longlong *param_1,float param_2,float param_3,float param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  
  if (((((((double)param_1[0x25] != 0.0) || (NAN((double)param_1[0x25]))) ||
        ((double)param_1[0x26] != 0.0)) ||
       ((NAN((double)param_1[0x26]) || ((double)param_1[0x27] != 0.0)))) ||
      (NAN((double)param_1[0x27]))) &&
     (((cVar10 = (**(code **)(*param_1 + 0x600))(param_1), cVar10 != '\0' && (1e-06 <= param_2)) &&
      ((char)param_1[0x1f0] == '\0')))) {
    fVar11 = 0.0;
    if (0.0 <= *(float *)((longlong)param_1 + 0x2f4)) {
      fVar11 = *(float *)((longlong)param_1 + 0x2f4);
    }
    fVar12 = 0.0;
    if (0.0 <= fVar11 * param_3) {
      fVar12 = fVar11 * param_3;
    }
    fVar11 = 0.0;
    if (0.0 <= param_4) {
      fVar11 = param_4;
    }
    if ((((fVar11 != 0.0) || (NAN(fVar11))) || (fVar12 != 0.0)) || (NAN(fVar12))) {
      dVar1 = (double)param_1[0x25];
      dVar2 = (double)param_1[0x26];
      dVar3 = (double)param_1[0x27];
      fVar14 = *(float *)((longlong)param_1 + 0x2fc);
      if (0.05 <= fVar14) {
        fVar14 = 0.05;
      }
      if ((fVar11 != 0.0) ||
         (dVar4 = DAT_14c8464f0, dVar8 = DAT_14c8464e8, dVar9 = DAT_14c8464e0, NAN(fVar11))) {
        dVar4 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
        if (((dVar4 != 1.0) || (dVar8 = dVar3, dVar9 = dVar2, dVar6 = dVar1, NAN(dVar4))) &&
           (dVar8 = DAT_14c8464f0, dVar9 = DAT_14c8464e8, dVar6 = DAT_14c8464e0,
           9.99999993922529e-09 <= dVar4)) {
          dVar4 = 1.0 / SQRT(dVar4);
          dVar8 = dVar3 * dVar4;
          dVar9 = dVar2 * dVar4;
          dVar6 = dVar4 * dVar1;
        }
        dVar5 = (double)-fVar11;
        dVar4 = dVar8 * dVar5;
        dVar8 = dVar9 * dVar5;
        dVar9 = dVar6 * dVar5;
      }
      if (fVar14 <= 0.013333334) {
        fVar14 = 0.013333334;
      }
      dVar5 = (double)-fVar12;
      dVar15 = dVar1;
      dVar6 = dVar3;
      dVar7 = dVar2;
      do {
        if (param_2 < 1e-06) {
          fVar12 = (float)(dVar6 * dVar6 + dVar15 * dVar15 + dVar7 * dVar7);
          if ((0.0001 < fVar12) && (fVar11 == 0.0 || 100.0 < fVar12)) {
            return;
          }
          break;
        }
        fVar16 = fVar14;
        if (param_2 * 0.5 <= fVar14) {
          fVar16 = param_2 * 0.5;
        }
        fVar16 = (float)(-(uint)(fVar12 == 0.0) & (uint)param_2 |
                        ~-(uint)(fVar12 == 0.0) &
                        (-(uint)(param_2 <= fVar14) & (uint)param_2 |
                        ~-(uint)(param_2 <= fVar14) & (uint)fVar16));
        dVar13 = (double)fVar16;
        dVar6 = dVar6 + (dVar6 * dVar5 + dVar4) * dVar13;
        dVar7 = dVar7 + (dVar7 * dVar5 + dVar8) * dVar13;
        dVar15 = dVar15 + (dVar15 * dVar5 + dVar9) * dVar13;
        param_2 = param_2 - fVar16;
        param_1[0x25] = (longlong)dVar15;
        param_1[0x26] = (longlong)dVar7;
        param_1[0x27] = (longlong)dVar6;
      } while (0.0 < dVar6 * dVar3 + dVar15 * dVar1 + dVar2 * dVar7);
      param_1[0x27] = (longlong)DAT_14c8464f0;
      dVar1 = DAT_14c8464e8;
      param_1[0x25] = (longlong)DAT_14c8464e0;
      param_1[0x26] = (longlong)dVar1;
    }
  }
  return;
}



// FUNCTION 1404d9f16 FUN_1404d9f16 body=1248 status=ok
// SIG undefined FUN_1404d9f16(void)

void FUN_1404d9f16(longlong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 uStack_b0;
  float local_9c;
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar6 = (**(code **)(*(longlong *)param_1[0x1c] + 0xdc0))();
  if (lVar6 != 0) {
    lVar6 = ((longlong *)param_1[0x1c])[0x22];
    if (lVar6 == 0) {
      uVar11 = 0xe0000000;
      uVar13 = 0x47efffff;
      uVar21 = 0xe0000000;
      uVar22 = 0x47efffff;
      uVar19 = 0xe0000000;
      uVar20 = 0x47efffff;
    }
    else {
      uVar11 = *(undefined4 *)(lVar6 + 0x260);
      uVar13 = *(undefined4 *)(lVar6 + 0x264);
      uVar21 = *(undefined4 *)(lVar6 + 0x268);
      uVar22 = *(undefined4 *)(lVar6 + 0x26c);
      uVar19 = (undefined4)*(undefined8 *)(lVar6 + 0x270);
      uVar20 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x270) >> 0x20);
    }
    lVar6 = (**(code **)(*(longlong *)param_1[0x1c] + 0xdc0))();
    if (lVar6 == 0) {
      uVar16 = (undefined4)DAT_14c8464e0;
      uVar18 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
      uVar10 = (undefined4)DAT_14c8464e8;
      uVar12 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
      dVar14 = DAT_14c8464f0;
    }
    else {
      uVar10 = 0;
      uVar12 = 0;
      uVar16 = 0;
      uVar18 = 0;
      dVar14 = (double)*(float *)(lVar6 + 0x18);
    }
    dVar14 = (double)CONCAT44(uVar20,uVar19) + dVar14;
    dVar4 = (double)CONCAT44(uVar22,uVar21) + (double)CONCAT44(uVar12,uVar10);
    dVar15 = (double)CONCAT44(uVar18,uVar16) + (double)CONCAT44(uVar13,uVar11);
    *(float *)(param_1 + 7) = (float)dVar14;
    uVar21 = DAT_14c8462c8._4_4_;
    uVar13 = (undefined4)DAT_14c8462c8;
    uVar11 = DAT_14c8462c0._4_4_;
    *(undefined4 *)(param_1 + 0xc) = (undefined4)DAT_14c8462c0;
    *(undefined4 *)((longlong)param_1 + 100) = uVar11;
    *(undefined4 *)(param_1 + 0xd) = uVar13;
    *(undefined4 *)((longlong)param_1 + 0x6c) = uVar21;
    param_1[0xe] = DAT_14c8462d0;
    local_98 = dVar15;
    dStack_90 = dVar4;
    local_88 = dVar14;
    lVar6 = (**(code **)(*(longlong *)param_1[0x1c] + 0xdc0))();
    local_9c = (float)(dVar14 - (double)*(float *)(lVar6 + 0x20));
    local_b8 = 0;
    uStack_b0 = 0;
    (**(code **)(*param_1 + 0x90))(param_1,&local_b8);
    lVar6 = local_b8;
    lVar9 = (longlong)(int)uStack_b0;
    if (lVar9 == 0) {
      cVar5 = *(char *)((longlong)param_1 + 0x79);
      *(char *)(param_1 + 0xf) = cVar5;
      if (cVar5 == '\0') {
        uVar11 = 0;
      }
      else {
        uVar11 = 0x3f800000;
      }
      *(undefined4 *)((longlong)param_1 + 0xdc) = uVar11;
      if (cVar5 == '\x01') {
        param_1[0xe] = param_1[0x15];
        param_1[0xc] = param_1[0x13];
        param_1[0xd] = param_1[0x14];
        dVar14 = (double)param_1[0x12] -
                 ((dVar15 - (double)param_1[0x10]) * (double)param_1[0x13] +
                 (dVar4 - (double)param_1[0x11]) * (double)param_1[0x14]) / (double)param_1[0x15];
      }
      else {
        lVar6 = *(longlong *)(param_1[0x1c] + 0x110);
        if (lVar6 == 0) {
          uVar11 = 0xe0000000;
          uVar13 = 0x47efffff;
        }
        else {
          uVar1 = *(undefined8 *)(lVar6 + 0x270);
          uVar11 = (undefined4)uVar1;
          uVar13 = (undefined4)((ulonglong)uVar1 >> 0x20);
        }
        dVar14 = 0.0;
        if ((*(longlong *)(&DAT_00001ce8 + param_1[0x1c]) != 0) &&
           (lVar6 = *(longlong *)(*(longlong *)(&DAT_00001ce8 + param_1[0x1c]) + 0x438), lVar6 != 0)
           ) {
          dVar14 = (double)((float)*(double *)(lVar6 + 0x290) * *(float *)(lVar6 + 0x640));
        }
        dVar14 = (double)CONCAT44(uVar13,uVar11) - dVar14;
      }
      *(float *)(param_1 + 7) = (float)dVar14;
    }
    else {
      lVar8 = 0;
      do {
        iVar2 = *(int *)(lVar6 + 4 + lVar8);
        if (((((iVar2 != 0) && (uVar3 = *(uint *)(lVar6 + lVar8), -1 < (int)uVar3)) &&
             ((int)uVar3 < DAT_14c9647dc)) &&
            ((plVar7 = (longlong *)
                       ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
             plVar7 != (longlong *)0x0 && ((int)plVar7[2] == iVar2)))) &&
           (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (*plVar7 != 0)))) {
          (**(code **)(*param_1 + 0x138))(param_1,*plVar7,&local_98,&local_9c);
        }
        lVar8 = lVar8 + 8;
      } while (lVar9 * 8 != lVar8);
      *(float *)(param_1 + 7) = local_9c;
      lVar6 = param_1[0x1c];
      fVar17 = 0.0;
      if ((*(longlong *)(&DAT_00001ce8 + lVar6) != 0) &&
         (lVar9 = *(longlong *)(*(longlong *)(&DAT_00001ce8 + lVar6) + 0x438), lVar9 != 0)) {
        fVar17 = (float)*(double *)(lVar9 + 0x290) * *(float *)(lVar9 + 0x640);
        fVar17 = fVar17 + fVar17;
      }
      cVar5 = (**(code **)(*(longlong *)(lVar6 + 0x178) + 0xd0))(lVar6 + 0x178);
      dVar14 = local_88;
      if (cVar5 != '\0') {
        fVar17 = fVar17 + fVar17;
      }
      dVar4 = (double)local_9c;
      dVar15 = 1.0 - (local_88 - dVar4) / (double)fVar17;
      if (1.0 <= dVar15) {
        dVar15 = 1.0;
      }
      if (dVar15 <= 0.0) {
        dVar15 = 0.0;
      }
      *(float *)((longlong)param_1 + 0xdc) = (float)dVar15;
      if (local_88 <= dVar4) {
        *(undefined1 *)(param_1 + 0xf) = 1;
      }
      else {
        lVar6 = (**(code **)(*(longlong *)param_1[0x1c] + 0xdc0))();
        if (dVar4 < dVar14 - (double)*(float *)(lVar6 + 0x1c)) {
          cVar5 = FUN_1404da3f8(param_1);
          if (cVar5 != '\0') {
            *(undefined1 *)(param_1 + 0xf) = 0;
            FUN_1404da4f4(param_1,0);
          }
        }
      }
      dVar14 = 0.0;
      if ((*(longlong *)(&DAT_00001ce8 + param_1[0x1c]) != 0) &&
         (lVar6 = *(longlong *)(*(longlong *)(&DAT_00001ce8 + param_1[0x1c]) + 0x438), lVar6 != 0))
      {
        dVar14 = (double)((float)*(double *)(lVar6 + 0x290) * *(float *)(lVar6 + 0x640));
      }
      if (local_88 + dVar14 <= (double)local_9c) {
        (**(code **)(*param_1 + 0x60))(param_1,1);
        param_1[0x10] = (longlong)local_98;
        param_1[0x11] = (longlong)dStack_90;
        param_1[0x12] = (longlong)(double)local_9c;
        param_1[0x15] = DAT_14c8462d0;
        uVar21 = DAT_14c8462c8._4_4_;
        uVar13 = (undefined4)DAT_14c8462c8;
        uVar11 = DAT_14c8462c0._4_4_;
        *(undefined4 *)(param_1 + 0x13) = (undefined4)DAT_14c8462c0;
        *(undefined4 *)((longlong)param_1 + 0x9c) = uVar11;
        *(undefined4 *)(param_1 + 0x14) = uVar13;
        *(undefined4 *)((longlong)param_1 + 0xa4) = uVar21;
      }
      else {
        (**(code **)(*param_1 + 0x60))(param_1,0);
      }
    }
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_80 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404da3f8 FUN_1404da3f8 body=105 status=ok
// SIG undefined FUN_1404da3f8(void)

ulonglong FUN_1404da3f8(longlong param_1)

{
  longlong lVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  float fVar4;
  undefined7 uVar3;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0xdc0))();
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if ((lVar1 != 0) && (*(char *)(param_1 + 0xb2) == '\0')) {
    fVar4 = (float)FUN_1404da462(param_1);
    if (*(float *)(lVar1 + 0x38) < fVar4) {
      uVar2 = CONCAT71(uVar3,(double)*(float *)(lVar1 + 0x3c) <=
                             *(double *)(*(longlong *)(param_1 + 0xe0) + 0x138));
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1404da462 FUN_1404da462 body=146 status=ok
// SIG undefined FUN_1404da462(void)

undefined8 FUN_1404da462(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  double dVar3;
  undefined8 uVar4;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar5;
  
  cVar1 = (**(code **)(*param_1 + 0x40))();
  uVar4 = 0;
  if (cVar1 != '\0') {
    lVar2 = ((longlong *)param_1[0x1c])[0x22];
    if (lVar2 == 0) {
      uVar6 = 0xe0000000;
      uVar7 = 0x47efffff;
    }
    else {
      uVar4 = *(undefined8 *)(lVar2 + 0x270);
      uVar6 = (undefined4)uVar4;
      uVar7 = (undefined4)((ulonglong)uVar4 >> 0x20);
    }
    lVar2 = (**(code **)(*(longlong *)param_1[0x1c] + 0xdc0))(0);
    dVar3 = DAT_14c8464f0;
    if (lVar2 != 0) {
      dVar3 = (double)*(float *)(lVar2 + 0x18);
    }
    if ((char)param_1[0xb] == '\x01') {
      dVar3 = ((double)CONCAT44(uVar7,uVar6) + dVar3) - (double)param_1[10];
      dVar5 = 0.0;
      if (0.0 <= dVar3) {
        dVar5 = dVar3;
      }
      uVar4 = CONCAT44((int)((ulonglong)dVar5 >> 0x20),(float)dVar5);
    }
    else {
      uVar4 = 0x7f7fffff;
    }
  }
  return uVar4;
}



// FUNCTION 1404da4f4 FUN_1404da4f4 body=670 status=ok
// SIG undefined FUN_1404da4f4(void)

void FUN_1404da4f4(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined1 *)(param_1 + 0xb1) = param_2;
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0xdc0))();
  lVar4 = *(longlong *)(&DAT_00001ce8 + *(longlong *)(param_1 + 0xe0));
  if (lVar4 != 0) {
    lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x1168) + 0x18))(lVar4 + 0x1168);
    if ((lVar3 != 0) && (lVar4 != 0)) {
      if (*(char *)(param_1 + 0xb1) == '\x01') {
        FUN_148929b50(lVar4,DAT_14cb8c960,*(undefined4 *)(lVar3 + 0xd8));
        uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0xe0) + 0x1f0);
        local_50 = (undefined8 *)0x0;
        local_48 = 0;
        FUN_1446efa72(&local_50,0,3,0x10);
        puVar2 = local_50;
        local_48 = 3;
        *local_50 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 1;
        lVar3 = DAT_14c758608 + 1;
        if (lVar5 == 0) {
          LOCK();
          UNLOCK();
          lVar5 = DAT_14c758608 + 2;
          lVar3 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar3;
        local_50[2] = lVar5;
        *local_50 = &PTR_FUN_14b430bb0;
        local_50[3] = 0;
        FUN_14485c47a(local_50 + 3,uVar1);
        puVar2[4] = param_1;
        FUN_1448b6402(lVar4,&local_58,&local_50);
        FUN_1449db362(&local_50);
        *(undefined8 *)(param_1 + 8) = local_58;
        uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0xe0) + 0x1f0);
        local_50 = (undefined8 *)0x0;
        local_48 = 0;
        FUN_1446efa72(&local_50,0,3,0x10);
        puVar2 = local_50;
        local_48 = 3;
        *local_50 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 1;
        lVar3 = DAT_14c758608 + 1;
        if (lVar5 == 0) {
          LOCK();
          UNLOCK();
          lVar5 = DAT_14c758608 + 2;
          lVar3 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar3;
        local_50[2] = lVar5;
        *local_50 = &PTR_FUN_14b430c20;
        local_50[3] = 0;
        FUN_14485c47a(local_50 + 3,uVar1);
        puVar2[4] = param_1;
        FUN_1448b6402(lVar4 + 0x28,&local_58,&local_50);
        FUN_1449db362(&local_50);
        *(undefined8 *)(param_1 + 0x10) = local_58;
      }
      else {
        FUN_14064ce80(lVar4 + 0x70,DAT_14cb8c960);
        FUN_14064ce08(lVar4);
        if (*(longlong *)(param_1 + 8) != 0) {
          FUN_14480f766(lVar4);
        }
        *(undefined8 *)(param_1 + 8) = 0;
        if (*(longlong *)(param_1 + 0x10) != 0) {
          FUN_14480f766(lVar4 + 0x28);
        }
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404da794 FUN_1404da794 body=12 status=ok
// SIG undefined FUN_1404da794(void)

void FUN_1404da794(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001404da79d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1404da7a0 FUN_1404da7a0 body=31 status=ok
// SIG undefined FUN_1404da7a0(void)

undefined8 FUN_1404da7a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1404da7c0 FUN_1404da7c0 body=390 status=ok
// SIG undefined FUN_1404da7c0(void)

void FUN_1404da7c0(longlong param_1,longlong *param_2,byte *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  char cVar7;
  byte bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    plVar1 = *(longlong **)(*param_2 + 8);
    cVar7 = (**(code **)(*plVar1 + 0x78))(plVar1);
    plVar2 = *(longlong **)(param_1 + 0x70);
    if (cVar7 != '\0') {
      bVar8 = (**(code **)(*plVar2 + 0x2c0))(plVar2,plVar1,*param_3);
      *param_3 = bVar8;
      goto LAB_1404da83f;
    }
    if (plVar2 != (longlong *)0x0) {
      if ((*(byte *)(plVar1 + 5) & 1) != 0) {
        local_30 = 0;
        local_48 = &local_38;
        local_38 = 0;
        FUN_1404da962(param_2,plVar1);
        *param_3 = (byte)local_38;
        goto LAB_1404da83f;
      }
      if ((*(byte *)(plVar1 + 5) & 4) != 0) {
        uVar9 = (ulonglong)(int)plVar2[9];
        if ((longlong)uVar9 < 1) {
LAB_1404da95b:
          local_30 = 0;
        }
        else {
          uVar10 = (ulonglong)*param_3;
          lVar3 = plVar2[8];
          if (*(ulonglong *)(lVar3 + 8) != uVar10) {
            local_30 = 0;
            uVar13 = 0;
            puVar12 = (ulonglong *)(lVar3 + 0x18);
            do {
              if (uVar9 - 1 == uVar13) goto LAB_1404da8bc;
              uVar13 = uVar13 + 1;
              uVar4 = *puVar12;
              puVar12 = puVar12 + 2;
            } while (uVar4 != uVar10);
            if (uVar9 <= uVar13) goto LAB_1404da95b;
          }
          local_30 = 0;
          lVar11 = 0;
          do {
            if (*(ulonglong *)(lVar3 + 8 + lVar11) == uVar10) {
              local_30 = *(undefined8 *)(lVar3 + lVar11);
              break;
            }
            lVar11 = lVar11 + 0x10;
          } while (uVar9 * 0x10 != lVar11);
        }
LAB_1404da8bc:
        (**(code **)(**(longlong **)(*param_2 + 8) + 0x160))();
        goto LAB_1404da83f;
      }
    }
  }
  lVar3 = *(longlong *)(*param_2 + 8);
  puVar5 = *(undefined8 **)(lVar3 + 8);
  pbVar6 = (byte *)*puVar5;
  if ((byte *)puVar5[1] < pbVar6 + 1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  *param_3 = *pbVar6;
  plVar1 = *(longlong **)(lVar3 + 8);
  *plVar1 = *plVar1 + 1;
LAB_1404da83f:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404da962 FUN_1404da962 body=444 status=ok
// SIG undefined FUN_1404da962(void)

ulonglong FUN_1404da962(longlong *param_1,longlong *param_2,longlong param_3,longlong *param_4,
                       longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  size_t sVar3;
  ulonglong uVar4;
  wchar_t *_Str;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  int local_90;
  wchar_t *local_88;
  undefined4 local_80;
  undefined *local_78;
  undefined4 local_70;
  longlong local_68;
  char *local_60;
  longlong *local_58;
  undefined4 local_50;
  code *local_48;
  longlong *local_40;
  longlong local_38;
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(**(longlong **)(*param_1 + 8) + 0x160))(*(longlong **)(*param_1 + 8),param_4);
  if (param_3 != 0) {
    if ((*(uint *)(param_3 + 8) >> 10 & 1) != 0) {
      (**(code **)(*param_2 + 0x198))(param_2,param_3);
    }
    if ((*(byte *)(param_3 + 0x51) & 1) == 0) {
      iVar1 = FUN_1448e5bf4(param_3,*param_4,1);
      uVar4 = CONCAT71((int7)((ulonglong)param_4 >> 8),iVar1 != -1);
      if (iVar1 == -1) {
        lVar2 = FUN_1404d8156(param_3);
      }
      else {
        lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x40) + 8 + (longlong)iVar1 * 0x10);
      }
      *param_5 = lVar2;
      goto LAB_1404da9e8;
    }
    if (*param_4 != 0) {
      FUN_1400021e4(param_4,&local_98);
      _Str = local_98;
      if (local_90 == 0) {
        _Str = L"";
      }
      if (_Str == (wchar_t *)0x0) {
        local_80 = 0;
      }
      else {
        sVar3 = wcslen(_Str);
        local_80 = (int)sVar3;
      }
      local_60 = &local_29;
      local_29 = '\x01';
      local_58 = &local_38;
      local_38 = 0;
      local_40 = &local_68;
      local_50 = 0;
      local_48 = FUN_1427f0728;
      local_78 = &DAT_149e06184;
      local_70 = 1;
      local_88 = _Str;
      local_68 = param_3;
      FUN_1403deae6();
      lVar2 = -1;
      if (local_29 != '\0') {
        lVar2 = local_38;
      }
      *param_5 = lVar2;
      if (local_98 != (wchar_t *)0x0) {
        FUN_1400020a8();
        lVar2 = *param_5;
      }
      uVar4 = CONCAT71((int7)((ulonglong)_Str >> 8),lVar2 != -1);
      goto LAB_1404da9e8;
    }
  }
  *param_5 = 0;
  uVar4 = 0;
LAB_1404da9e8:
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1404dab20 FUN_1404dab20 body=226 status=ok
// SIG undefined FUN_1404dab20(void)

void FUN_1404dab20(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_1404dac02(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 1404dac02 FUN_1404dac02 body=870 status=ok
// SIG undefined FUN_1404dac02(void)

void FUN_1404dac02(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 local_c4;
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
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb978;
  puVar12[3] = 0;
  *(int *)(puVar12 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    puVar11 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar11 = local_b8;
    }
    FUN_1446fe144(puVar12 + 2,local_b0,0);
    puVar5 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar5 = puVar12 + 2;
    }
    memcpy(puVar5,puVar11,(longlong)local_b0);
  }
  puVar12[0xd] = 0;
  *(int *)(puVar12 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    puVar11 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar11 = local_a8;
    }
    FUN_1446fe1b8(puVar12 + 5,local_60,0);
    puVar5 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar5 = puVar12 + 5;
    }
    memcpy(puVar5,puVar11,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar12 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar12 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar12 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  local_c4 = *(undefined4 *)(param_1 + 0x1dc);
  local_c8 = *(undefined4 *)(param_1 + 0x1e0);
  uVar3 = *(undefined8 *)(param_1 + 0x1b8);
  uVar4 = *(undefined8 *)(param_1 + 0x1c0);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar6 = 0;
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar6 = *(ulonglong *)(*(longlong *)(lVar8 + 0x50) + lVar9 * 8);
    if (uVar6 == 0) {
      uVar6 = FUN_1400bafc2(lVar8,lVar9,1);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x1c8);
  uVar7 = FUN_140029432(param_2,uVar6,0);
  param_2[0x37] = uVar6;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar12 + 3;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x20);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar12 + 3;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a37d340;
  puVar12[2] = uVar7;
  local_d8 = uVar4;
  FUN_14480864a(param_2,uVar6,*plVar1,uVar3);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar12 + 4;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x28);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar12 + 4;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar12 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar12 + 0x14) = local_c4;
  *(undefined4 *)(puVar12 + 3) = local_c8;
  if (*plVar1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar10 = (longlong)*(int *)(*plVar1 + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar9 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar9,lVar10,1);
    }
  }
  FUN_14176c0aa(param_2,plVar1,lVar8);
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404daf6a FUN_1404daf6a body=226 status=ok
// SIG undefined FUN_1404daf6a(void)

void FUN_1404daf6a(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_1404db04c(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 1404db04c FUN_1404db04c body=870 status=ok
// SIG undefined FUN_1404db04c(void)

void FUN_1404db04c(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 local_c4;
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
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb978;
  puVar12[3] = 0;
  *(int *)(puVar12 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    puVar11 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar11 = local_b8;
    }
    FUN_1446fe144(puVar12 + 2,local_b0,0);
    puVar5 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar5 = puVar12 + 2;
    }
    memcpy(puVar5,puVar11,(longlong)local_b0);
  }
  puVar12[0xd] = 0;
  *(int *)(puVar12 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    puVar11 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar11 = local_a8;
    }
    FUN_1446fe1b8(puVar12 + 5,local_60,0);
    puVar5 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar5 = puVar12 + 5;
    }
    memcpy(puVar5,puVar11,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar12 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar12 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar12 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  local_c4 = *(undefined4 *)(param_1 + 0x1dc);
  local_c8 = *(undefined4 *)(param_1 + 0x1e0);
  uVar3 = *(undefined8 *)(param_1 + 0x1b8);
  uVar4 = *(undefined8 *)(param_1 + 0x1c0);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar6 = 0;
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar6 = *(ulonglong *)(*(longlong *)(lVar8 + 0x50) + lVar9 * 8);
    if (uVar6 == 0) {
      uVar6 = FUN_1400bafc2(lVar8,lVar9,1);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x1c8);
  uVar7 = FUN_140029432(param_2,uVar6,0);
  param_2[0x37] = uVar6;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar12 + 3;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x20);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar12 + 3;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a37d340;
  puVar12[2] = uVar7;
  local_d8 = uVar4;
  FUN_14480864a(param_2,uVar6,*plVar1,uVar3);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar12 + 4;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x28);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar12 + 4;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar12 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar12 + 0x14) = local_c4;
  *(undefined4 *)(puVar12 + 3) = local_c8;
  if (*plVar1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar10 = (longlong)*(int *)(*plVar1 + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar9 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar9,lVar10,1);
    }
  }
  FUN_14176c2e8(param_2,plVar1,lVar8);
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404db3b4 FUN_1404db3b4 body=226 status=ok
// SIG undefined FUN_1404db3b4(void)

void FUN_1404db3b4(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_1404db496(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 1404db496 FUN_1404db496 body=870 status=ok
// SIG undefined FUN_1404db496(void)

void FUN_1404db496(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 local_c4;
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
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb978;
  puVar12[3] = 0;
  *(int *)(puVar12 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    puVar11 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar11 = local_b8;
    }
    FUN_1446fe144(puVar12 + 2,local_b0,0);
    puVar5 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar5 = puVar12 + 2;
    }
    memcpy(puVar5,puVar11,(longlong)local_b0);
  }
  puVar12[0xd] = 0;
  *(int *)(puVar12 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    puVar11 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar11 = local_a8;
    }
    FUN_1446fe1b8(puVar12 + 5,local_60,0);
    puVar5 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar5 = puVar12 + 5;
    }
    memcpy(puVar5,puVar11,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar12 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar12 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar12 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  local_c4 = *(undefined4 *)(param_1 + 0x1dc);
  local_c8 = *(undefined4 *)(param_1 + 0x1e0);
  uVar3 = *(undefined8 *)(param_1 + 0x1b8);
  uVar4 = *(undefined8 *)(param_1 + 0x1c0);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar6 = 0;
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar6 = *(ulonglong *)(*(longlong *)(lVar8 + 0x50) + lVar9 * 8);
    if (uVar6 == 0) {
      uVar6 = FUN_1400bafc2(lVar8,lVar9,1);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x1c8);
  uVar7 = FUN_140029432(param_2,uVar6,0);
  param_2[0x37] = uVar6;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar12 + 3;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x20);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar12 + 3;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a37d340;
  puVar12[2] = uVar7;
  local_d8 = uVar4;
  FUN_14480864a(param_2,uVar6,*plVar1,uVar3);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar12 + 4;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x28);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar12 + 4;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar12 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar12 + 0x14) = local_c4;
  *(undefined4 *)(puVar12 + 3) = local_c8;
  if (*plVar1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar10 = (longlong)*(int *)(*plVar1 + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar9 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar9,lVar10,1);
    }
  }
  FUN_14176e77a(param_2,plVar1,lVar8);
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404db7fe FUN_1404db7fe body=40 status=ok
// SIG undefined FUN_1404db7fe(void)

undefined8 FUN_1404db7fe(undefined8 param_1,int param_2)

{
  FUN_1404db826();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1404db826 FUN_1404db826 body=225 status=ok
// SIG undefined FUN_1404db826(void)

void FUN_1404db826(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a4af990;
  param_1[0x1f] = &PTR_FUN_14a4afd00;
  param_1[0x25] = &PTR_FUN_14a4afd50;
  param_1[0x26] = &PTR_FUN_14a4afd80;
  FUN_1404dbc70(param_1 + 0x163);
  lVar1 = 0xa00;
  do {
    FUN_1404db99a((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x118;
  } while (lVar1 != 0x6b8);
  lVar1 = 0x6b8;
  do {
    FUN_1404db99a((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x118;
  } while (lVar1 != 0x370);
  lVar1 = 0x370;
  do {
    FUN_1404db99a((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x118;
  } while (lVar1 != 0x28);
  param_1[0x1f] = &PTR_LAB_14a4b6560;
  FUN_144760e21(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_1404db908(param_1);
  return;
}



// FUNCTION 1404db908 FUN_1404db908 body=76 status=ok
// SIG undefined FUN_1404db908(void)

void FUN_1404db908(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a488de0;
  plVar3 = (longlong *)param_1[0x1d];
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
  FUN_1404db954(param_1);
  return;
}



// FUNCTION 1404db954 FUN_1404db954 body=59 status=ok
// SIG undefined FUN_1404db954(void)

void FUN_1404db954(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a492200;
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1404db990 FUN_1404db990 body=9 status=ok
// SIG undefined FUN_1404db990(void)

void FUN_1404db990(longlong param_1)

{
  FUN_1404dbbb4(param_1 + 0x10);
  return;
}



// FUNCTION 1404db99a FUN_1404db99a body=246 status=ok
// SIG undefined FUN_1404db99a(void)

void FUN_1404db99a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4644a0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (*(int *)((longlong)param_1 + 0xcc) != 0) {
    FUN_14472eb64(param_1 + 0x18,0);
  }
  param_1[0x1e] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xec)) {
    *(undefined4 *)((longlong)param_1 + 0xec) = 0x80;
    FUN_1446efbd8(param_1 + 0x1a,0);
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dba90(param_1 + 0x11);
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dbac8(param_1);
  return;
}



// FUNCTION 1404dba90 FUN_1404dba90 body=55 status=ok
// SIG undefined FUN_1404dba90(void)

void FUN_1404dba90(longlong *param_1)

{
  FUN_1404dbb38(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1404dbac8 FUN_1404dbac8 body=111 status=ok
// SIG undefined FUN_1404dbac8(void)

void FUN_1404dbac8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a464410;
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1404dbb38 FUN_1404dbb38 body=123 status=ok
// SIG undefined FUN_1404dbb38(void)

void FUN_1404dbb38(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_146f9e890(param_1,param_2);
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



// FUNCTION 1404dbbb4 FUN_1404dbbb4 body=87 status=ok
// SIG undefined FUN_1404dbbb4(void)

void FUN_1404dbbb4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_1447f69b6(param_1 + 0x10);
  FUN_1404dbc0c(param_1 + 0x28);
  FUN_144760e21(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001404dbc07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1404dbc0c FUN_1404dbc0c body=52 status=ok
// SIG undefined FUN_1404dbc0c(void)

void FUN_1404dbc0c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar1 = param_1;
  }
  FUN_1404dbc40(lVar1,*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1404dbc40 FUN_1404dbc40 body=47 status=ok
// SIG undefined FUN_1404dbc40(void)

void FUN_1404dbc40(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1404dbc70 FUN_1404dbc70 body=253 status=ok
// SIG undefined FUN_1404dbc70(void)

void FUN_1404dbc70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a46ea60;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)((longlong)param_1 + 0xc4) != 0) {
    FUN_14472eb64(param_1 + 0x17,0);
  }
  param_1[0x1d] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xe4)) {
    *(undefined4 *)((longlong)param_1 + 0xe4) = 0x80;
    FUN_1446efbd8(param_1 + 0x19,0);
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dba90(param_1 + 0x10);
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dbac8(param_1);
  return;
}



// FUNCTION 1404dbd6e FUN_1404dbd6e body=120 status=ok
// SIG undefined FUN_1404dbd6e(void)

void FUN_1404dbd6e(undefined8 *param_1,longlong param_2)

{
  if (*(int *)(param_1 + 2) == *(int *)((longlong)param_1 + 0x1c)) {
    FUN_141b71c40(*(undefined8 *)(param_2 + 0xa8),*(undefined8 *)*param_1,param_1[1],
                  *(float *)(param_1 + 4) * *(float *)((longlong)param_1 + 0x24),
                  *(float *)(param_1 + 5) * *(float *)(param_1 + 4),*(undefined4 *)(param_1 + 3),
                  *(int *)(param_1 + 2));
  }
  else {
    FUN_141b71d40(*(undefined8 *)(param_2 + 0xa8),*(undefined8 *)*param_1,
                  *(float *)((longlong)param_1 + 0x24) * *(float *)(param_1 + 4),
                  *(undefined4 *)(param_1 + 3),*(int *)((longlong)param_1 + 0x1c));
  }
  return;
}



// FUNCTION 1404dbde6 FUN_1404dbde6 body=40 status=ok
// SIG undefined FUN_1404dbde6(void)

undefined8 FUN_1404dbde6(undefined8 param_1,int param_2)

{
  FUN_1404dbe0e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1404dbe0e FUN_1404dbe0e body=82 status=ok
// SIG undefined FUN_1404dbe0e(void)

void FUN_1404dbe0e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14adedb10;
  param_1[5] = &PTR_FUN_14adeddb0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dbe60(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1404dbe60 FUN_1404dbe60 body=41 status=ok
// SIG undefined FUN_1404dbe60(void)

void FUN_1404dbe60(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1404dbe8a(param_1);
    param_1 = param_1 + 0x368;
  }
  return;
}



// FUNCTION 1404dbe8a FUN_1404dbe8a body=858 status=ok
// SIG undefined FUN_1404dbe8a(void)

void FUN_1404dbe8a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x367) == '\x01') {
    *(undefined1 *)(param_1 + 0x367) = 0;
  }
  if (*(char *)(param_1 + 0x365) == '\x01') {
    *(undefined1 *)(param_1 + 0x365) = 0;
  }
  if (*(longlong *)(param_1 + 0x350) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x348);
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
  *(undefined4 *)(param_1 + 0x330) = 0;
  if (*(longlong *)(param_1 + 0x328) != 0) {
    FUN_1400020a8();
  }
  FUN_140432214(param_1 + 0x2e8);
  lVar4 = param_1 + 0x2c8;
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x2d8);
  }
  FUN_14079416b(lVar4,*(undefined4 *)(param_1 + 0x2e0));
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x280) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x260);
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
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x238) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x220) = 0;
  if (*(longlong *)(param_1 + 0x218) != 0) {
    FUN_1400020a8();
  }
  FUN_1404dc2fe((longlong *)(param_1 + 0x1d8),0);
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_1400020a8();
  }
  FUN_14006c2ae(param_1 + 0x140);
  FUN_1404dc1e4(*(undefined8 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x138));
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  FUN_1404dc1e4(*(undefined8 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x110));
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_1404dc22f(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200));
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1404dc272(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001404dc11e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1404dc1e4 FUN_1404dc1e4 body=75 status=ok
// SIG undefined FUN_1404dc1e4(void)

void FUN_1404dc1e4(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x28);
    do {
      FUN_14017aeb5(*(undefined8 *)(puVar1 + -2),*puVar1);
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -6) != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1404dc22f FUN_1404dc22f body=67 status=ok
// SIG undefined FUN_1404dc22f(void)

void FUN_1404dc22f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1404dc272 FUN_1404dc272 body=79 status=ok
// SIG undefined FUN_1404dc272(void)

void FUN_1404dc272(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x20);
    do {
      FUN_1404dc1e4(*(undefined8 *)(puVar1 + -2),*puVar1);
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -6) != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1404dc2c2 FUN_1404dc2c2 body=59 status=ok
// SIG undefined FUN_1404dc2c2(void)

void FUN_1404dc2c2(longlong param_1)

{
  FUN_1401b538e(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1404dc2fe FUN_1404dc2fe body=123 status=ok
// SIG undefined FUN_1404dc2fe(void)

void FUN_1404dc2fe(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405b3ec2(param_1,param_2);
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



// FUNCTION 1404dc37a FUN_1404dc37a body=124 status=ok
// SIG undefined FUN_1404dc37a(void)

void FUN_1404dc37a(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_1404dc3f6(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_1404dc42e(param_1 + 0x20);
  FUN_1448262fc(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1404dc3f6 FUN_1404dc3f6 body=55 status=ok
// SIG undefined FUN_1404dc3f6(void)

void FUN_1404dc3f6(longlong *param_1)

{
  FUN_1404dc466(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1404dc42e FUN_1404dc42e body=55 status=ok
// SIG undefined FUN_1404dc42e(void)

void FUN_1404dc42e(longlong *param_1)

{
  FUN_1404dc4e2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1404dc466 FUN_1404dc466 body=123 status=ok
// SIG undefined FUN_1404dc466(void)

void FUN_1404dc466(longlong param_1,int param_2)

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



// FUNCTION 1404dc4e2 FUN_1404dc4e2 body=408 status=ok
// SIG undefined FUN_1404dc4e2(void)

void FUN_1404dc4e2(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
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
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64 * 0x20;
      FUN_1448262fc(*(undefined8 *)(lVar2 + 8 + lVar5),*(undefined4 *)(lVar2 + 0x10 + lVar5));
      if (*(longlong *)(lVar2 + 8 + lVar5) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar4 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar3 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404dc688 FUN_1404dc688 body=609 status=ok
// SIG undefined FUN_1404dc688(void)

undefined8 * FUN_1404dc688(int param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  DWORD DVar8;
  DWORD DVar9;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  bool bVar14;
  
  uVar5 = DAT_14c9c07c0;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar10 = (uint *)*puVar1;
  if (puVar10 != (uint *)0x0) goto LAB_1404dc6d8;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar10 = (uint *)*puVar1;
LAB_1404dc6d8:
    puVar13 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar11 = puVar10[0x12];
    if (puVar13 + 0x13 <= puVar10 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
      LOCK();
      uVar2 = *puVar10;
      *puVar10 = *puVar10 + uVar11 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar11) != 0xffffffff) break;
      puVar10 = (uint *)*puVar1;
      *puVar10 = 0xffffffff;
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar1 = puVar10;
      puVar13 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
      uVar11 = 0;
      if (puVar13 + 0x13 <= puVar10 + 0x4000) {
        uVar11 = 1;
        goto LAB_1404dc756;
      }
    }
  }
  uVar11 = uVar11 + 1;
LAB_1404dc756:
  *(undefined8 **)(puVar10 + 0x10) = puVar13 + 0x14;
  puVar10[0x12] = uVar11;
  *(int *)(puVar13 + -1) = ((int)puVar13 + -8) - (int)puVar10;
  *(undefined4 *)((longlong)puVar13 + -4) = 0x98;
  *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(&DAT_14ca11fb8 + (ulonglong)(2 < param_1) * 0xe8);
  *(undefined2 *)(puVar13 + 2) = 0x2626;
  puVar13[3] = param_2;
  *(int *)(puVar13 + 4) = param_1;
  puVar13[5] = param_3;
  puVar13[6] = param_4;
  *(undefined1 *)(puVar13 + 7) = 0x3a;
  *puVar13 = &PTR_FUN_14a1f0c90;
  puVar13[8] = 0;
  puVar13[9] = uVar5;
  *(undefined4 *)(puVar13 + 10) = 1;
  puVar13[0xb] = 0;
  puVar13[0xc] = 0;
  puVar13[0xd] = 0;
  puVar13[0xe] = 0;
  *(undefined4 *)(puVar13 + 0xf) = 0;
  *(undefined4 *)(puVar13 + 0x10) = 7;
  *(undefined1 *)((longlong)puVar13 + 0x84) = 1;
  lVar6 = DAT_14ca1c600;
  uVar3 = *(ushort *)(&DAT_14ca85070 + (longlong)param_1 * 2);
  iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
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
  uVar7 = 0;
  bVar14 = false;
  if (0 < *(int *)(lVar6 + uVar12 * 4)) {
    if (((*(byte *)(&DAT_14ca814d8 + (ulonglong)uVar3 * 0xf) & 2) == 0) || (DAT_14ca84f5c != '\x01')
       ) {
      bVar14 = false;
    }
    else {
      bVar14 = *(int *)(DAT_14ca1c618 + 4) != 0;
    }
  }
  *(bool *)((longlong)puVar13 + 0x85) = bVar14;
  *(undefined1 *)((longlong)puVar13 + 0x86) = 1;
  if (param_2 != 0) {
    uVar7 = *(undefined4 *)(param_2 + 0x35e8);
  }
  *(undefined4 *)(puVar13 + 0x11) = uVar7;
  *(undefined1 *)((longlong)puVar13 + 0x8c) = 0;
  *(undefined4 *)(puVar13 + 0x12) = 0;
  return puVar13;
}



// FUNCTION 1404dc8ea FUN_1404dc8ea body=170 status=ok
// SIG undefined FUN_1404dc8ea(void)

undefined8 * FUN_1404dc8ea(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa8c730;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dc9c0(param_1 + 0x62);
  if (param_1[0x60] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  FUN_1404dc994(param_1[0x5c],*(undefined4 *)(param_1 + 0x5d));
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  FUN_140064e2c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1404dc994 FUN_1404dc994 body=43 status=ok
// SIG undefined FUN_1404dc994(void)

void FUN_1404dc994(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1404dc9c0 FUN_1404dc9c0 body=55 status=ok
// SIG undefined FUN_1404dc9c0(void)

void FUN_1404dc9c0(longlong *param_1)

{
  FUN_1404dc9f8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1404dc9f8 FUN_1404dc9f8 body=121 status=ok
// SIG undefined FUN_1404dc9f8(void)

void FUN_1404dc9f8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
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



// FUNCTION 1404dca72 FUN_1404dca72 body=121 status=ok
// SIG undefined FUN_1404dca72(void)

void FUN_1404dca72(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = (undefined4)param_1[1];
  local_28 = 0;
  local_24 = (undefined4)((ulonglong)param_1[1] >> 0x20);
  local_20 = *(undefined4 *)((longlong)param_1 + 0x14);
  local_1c = *(undefined1 *)(param_1 + 2);
  FUN_1404dcaec(*param_1,&local_2c,param_1 + 3);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_14006fee2(*param_1,param_2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 1404dcaec FUN_1404dcaec body=498 status=ok
// SIG undefined FUN_1404dcaec(void)

void FUN_1404dcaec(longlong param_1,uint *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1447a4a8e(param_1,0);
  plVar1 = (longlong *)(param_1 + 0x100);
  uVar4 = *param_2;
  if (*(int *)(param_1 + 0x118) == 0) {
    uVar15 = param_2[2];
  }
  else {
    uVar15 = param_2[2];
    iVar11 = (uVar4 << 0x10 | uVar4 & 0xffff) + ((uVar4 & 0xffff) >> 4) +
             ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + uVar15;
    uVar12 = ~(iVar11 * 0x8000) + iVar11;
    uVar12 = ((int)uVar12 >> 10 ^ uVar12) * 9;
    uVar12 = (int)uVar12 >> 6 ^ uVar12;
    uVar12 = ~(uVar12 << 0xb) + uVar12;
    uVar13 = (ulonglong)
             *(ushort *)
              (*(longlong *)(param_1 + 0x110) +
              (longlong)(int)(*(int *)(param_1 + 0x118) - 1U & ((int)uVar12 >> 0x10 ^ uVar12)) * 2);
    if (uVar13 != 0) {
      uVar13 = uVar13 + 0xffffffff;
      lVar6 = *plVar1;
      do {
        lVar14 = (uVar13 & 0xffffffff) * 0x20;
        if ((((*(uint *)(lVar6 + lVar14) == uVar4) && (*(uint *)(lVar6 + 8 + lVar14) == uVar15)) &&
            (param_2[3] == (int)*(short *)(lVar6 + lVar14 + 0xc))) &&
           (*(ushort *)(lVar6 + lVar14 + 0xe) >> 0xe == (ushort)(byte)param_2[4])) {
          uVar7 = param_3[1];
          uVar8 = param_3[2];
          uVar9 = param_3[3];
          puVar2 = (undefined4 *)(lVar6 + 0x10 + lVar14);
          *puVar2 = *param_3;
          puVar2[1] = uVar7;
          puVar2[2] = uVar8;
          puVar2[3] = uVar9;
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
        }
        uVar3 = *(ushort *)(lVar6 + 0xe + lVar14);
        uVar13 = (ulonglong)uVar3 & 0x3fff;
      } while ((uVar3 & 0x3fff) != 0);
    }
  }
  uVar12 = param_2[1];
  uVar10 = param_2[3];
  uVar5 = param_2[4];
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  iVar11 = *(int *)(param_1 + 0x108);
  *(uint *)(param_1 + 0x108) = iVar11 + 1U;
  if (*(uint *)(param_1 + 0x10c) < iVar11 + 1U) {
    FUN_1417dfc9c(plVar1,iVar11);
  }
  lVar6 = *(longlong *)(param_1 + 0x100);
  lVar14 = (longlong)iVar11 * 0x20;
  *(uint *)(lVar6 + lVar14) = uVar4;
  *(uint *)(lVar6 + 4 + lVar14) = uVar12;
  *(uint *)(lVar6 + 8 + lVar14) = uVar15;
  *(short *)(lVar6 + 0xc + lVar14) = (short)uVar10;
  *(short *)(lVar6 + 0xe + lVar14) = (short)(uVar5 << 0xe);
  puVar2 = (undefined4 *)(lVar6 + 0x10 + lVar14);
  *puVar2 = local_58;
  puVar2[1] = uStack_54;
  puVar2[2] = uStack_50;
  puVar2[3] = uStack_4c;
  iVar11 = 1;
  if (3 < *(uint *)(param_1 + 0x108)) {
    uVar13 = (ulonglong)(*(uint *)(param_1 + 0x108) & 0xfffffffe) + 0xf;
    lVar6 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar11 = 1 << ((byte)lVar6 & 0x1f);
  }
  if (iVar11 != *(int *)(param_1 + 0x118)) {
    if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_14008ed50(plVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 1404dcd0c FUN_1404dcd0c body=193 status=ok
// SIG undefined FUN_1404dcd0c(void)

longlong FUN_1404dcd0c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  
  lVar5 = *param_2;
  if ((lVar5 == 0) || (*(int *)(param_1 + 0xd8) == *(int *)(param_1 + 0x104))) {
    return 0;
  }
  uVar2 = (uint)((ulonglong)lVar5 >> 0x10);
  uVar9 = (uint)lVar5 & 0xffff;
  lVar10 = param_1 + 0x108;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    lVar10 = *(longlong *)(param_1 + 0x110);
  }
  iVar4 = *(int *)(lVar10 + (ulonglong)
                            (*(int *)(param_1 + 0x118) - 1U &
                            (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar9) +
                            (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4)) * 4);
  if (iVar4 == -1) {
    return 0;
  }
  while (plVar1 = (longlong *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar4 * 0x48),
        *plVar1 != lVar5) {
    iVar4 = (int)plVar1[8];
    if (iVar4 == -1) {
      return 0;
    }
  }
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  puVar6 = (uint *)(plVar1 + 1);
  if (puVar6 == (uint *)0x0) {
    return 0;
  }
  if ((char)plVar1[6] != '\x01') {
    if (((((*(int *)((longlong)plVar1 + 0xc) == 0) || (uVar2 = *puVar6, (int)uVar2 < 0)) ||
         (DAT_14c9647dc <= (int)uVar2)) ||
        ((plVar7 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)((longlong)plVar1 + 0xc))))) ||
       (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (lVar5 = *plVar7, lVar5 == 0)))) {
      if (plVar1[2] == 0) {
        return 0;
      }
      lVar5 = FUN_140007850();
      cVar3 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar5 == 0) || (cVar3 == '\0')) {
        if (lVar5 == 0) {
          puVar6[0] = 0;
          puVar6[1] = 0;
          return 0;
        }
        uVar2 = *(uint *)(lVar5 + 0xc);
        *puVar6 = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        iVar4 = *(int *)(lVar10 + 0x10);
        if (*(int *)(lVar10 + 0x10) == 0) {
          LOCK();
          iVar4 = DAT_14c964868 + 1;
          UNLOCK();
          iVar8 = DAT_14c964868 + 1;
          bVar11 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar4;
          if (bVar11) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
          }
          LOCK();
          iVar4 = *(int *)(lVar10 + 0x10);
          bVar11 = iVar4 == 0;
          if (bVar11) {
            *(int *)(lVar10 + 0x10) = iVar8;
            iVar4 = 0;
          }
          UNLOCK();
          if (bVar11) {
            iVar4 = iVar8;
          }
        }
        *(int *)((longlong)plVar1 + 0xc) = iVar4;
      }
      else {
        uVar2 = *(uint *)(lVar5 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        if ((*(uint *)(lVar10 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(puVar6,lVar5);
        }
      }
      if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) {
        return 0;
      }
    }
    lVar10 = FUN_14018aba8();
    if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
        == lVar10 + 0x30)) {
      return lVar5;
    }
    return 0;
  }
  return plVar1[7];
}



// FUNCTION 1404dcdce FUN_1404dcdce body=43 status=ok
// SIG undefined FUN_1404dcdce(void)

undefined8 FUN_1404dcdce(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2b0))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001404dcdea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x2a0))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1404dce0c FUN_1404dce0c body=330 status=ok
// SIG undefined FUN_1404dce0c(void)

undefined8 * FUN_1404dce0c(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = 0;
  iVar2 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar2,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar2 * 2);
  }
  bVar1 = *(byte *)(param_2 + 8);
  *(byte *)(param_1 + 8) = bVar1;
  (*(code *)(&PTR_LAB_14a184290)[bVar1])(param_1 + 4,param_2 + 4);
  param_1[0xb] = 0;
  puVar4 = param_2 + 9;
  if ((undefined8 *)param_2[0xb] != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)param_2[0xb];
  }
  FUN_1404dcf56(param_1 + 9,puVar4,*(undefined4 *)(param_2 + 0xc),0);
  param_1[0xd] = 0;
  iVar2 = *(int *)(param_2 + 0xe);
  uVar3 = param_2[0xd];
  *(int *)(param_1 + 0xe) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    FUN_1404dd30c(param_1 + 0xd,iVar2,0);
    FUN_1404dd3e4(param_1[0xd],uVar3,iVar2);
  }
  param_1[0xf] = 0;
  iVar2 = *(int *)(param_2 + 0x10);
  uVar3 = param_2[0xf];
  *(int *)(param_1 + 0x10) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  else {
    FUN_1404dd0ca(param_1 + 0xf,iVar2,0);
    FUN_1404dd017(param_1[0xf],uVar3,iVar2);
  }
  param_1[0x11] = param_2[0x11];
  return param_1;
}



// FUNCTION 1404dcf56 FUN_1404dcf56 body=86 status=ok
// SIG undefined FUN_1404dcf56(void)

void FUN_1404dcf56(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x18) = param_3;
  if (param_4 != 0 || param_3 != 0) {
    FUN_1404dd1b4(param_1,param_3,param_4);
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar1 = param_1;
    }
    FUN_1404dcfac(lVar1,param_2,param_3);
    return;
  }
  *(undefined4 *)(param_1 + 0x1c) = 1;
  return;
}



// FUNCTION 1404dcfac FUN_1404dcfac body=107 status=ok
// SIG undefined FUN_1404dcfac(void)

void FUN_1404dcfac(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  if (param_3 != 0) {
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
        FUN_1404dd0ca(param_1,iVar1,0);
        FUN_1404dd017(*param_1,uVar2);
      }
      param_1 = param_1 + 2;
      piVar3 = piVar3 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1404dd017 FUN_1404dd017 body=77 status=ok
// SIG undefined FUN_1404dd017(void)

void FUN_1404dd017(longlong param_1,longlong param_2,int param_3)

{
  byte bVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    bVar1 = *(byte *)(param_2 + 0x20);
    *(byte *)(param_1 + 0x20) = bVar1;
    (*(code *)(&PTR_LAB_14a184290)[bVar1])(param_1,param_2);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 1404dd076 caseD_2 body=84 status=ok
// SIG undefined caseD_2(void)

void switchD_148a5f16c::caseD_2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  return;
}


