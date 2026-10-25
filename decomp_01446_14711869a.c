// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14711869a FUN_14711869a body=4404 status=ok
// SIG undefined FUN_14711869a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14711869a(longlong param_1,undefined8 param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  double *pdVar7;
  double *pdVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar25;
  double dVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar27;
  undefined1 auVar24 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auStack_478 [32];
  double local_458;
  double dStack_450;
  double local_448;
  double dStack_440;
  double local_438;
  double dStack_430;
  undefined4 local_428;
  undefined4 uStack_424;
  double dStack_420;
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  undefined1 local_3b8 [16];
  double local_3a8;
  double dStack_3a0;
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  double local_338 [12];
  double local_2d8 [4];
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  undefined1 local_298 [16];
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  auVar32 = _DAT_149934d80;
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_478;
  local_2d8[0] = *(double *)(param_1 + 0x120);
  local_2d8[1] = *(double *)(param_1 + 0x128);
  local_2d8[2] = *(double *)(param_1 + 0x130);
  local_2d8[3] = *(double *)(param_1 + 0x138);
  local_2b8 = *(double *)(param_1 + 0x158);
  dStack_2b0 = *(double *)(param_1 + 0x160);
  local_2a8 = *(double *)(param_1 + 0x168);
  dStack_2a0 = 0.0;
  dVar21 = (double)DAT_149934d80;
  dVar27 = DAT_149934d80._8_8_;
  local_298 = _DAT_149934d80;
  local_288 = 1.0;
  dStack_280 = 0.0;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    pdVar7 = local_2d8;
  }
  else {
    pdVar7 = (double *)(*(longlong *)(param_1 + 0x30) + 400);
  }
  pdVar8 = local_338;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *pdVar8 = *pdVar7;
    pdVar7 = pdVar7 + 1;
    pdVar8 = pdVar8 + 1;
  }
  lVar6 = *(longlong *)(param_1 + 0x20);
  dVar34 = *(double *)*(undefined1 (*) [16])(param_1 + 0x100);
  dVar36 = *(double *)(param_1 + 0x108);
  local_398 = *(undefined1 (*) [16])(param_1 + 0x100);
  dVar20 = *(double *)*(undefined1 (*) [16])(param_1 + 0x110);
  dVar26 = *(double *)(param_1 + 0x118);
  local_388 = *(undefined1 (*) [16])(param_1 + 0x110);
  if (lVar6 == 0) {
    local_378 = *(double *)(param_1 + 0x140);
    dStack_370 = *(double *)(param_1 + 0x148);
    local_368 = *(double *)(param_1 + 0x150);
    dStack_360 = 0.0;
    local_358 = _DAT_149934d80;
    local_348 = ZEXT816(0x3ff0000000000000);
  }
  else {
    dVar37 = *(double *)(param_1 + 0x140);
    dVar30 = *(double *)(param_1 + 0x148);
    dVar1 = *(double *)(param_1 + 0x150);
    uVar3 = FUN_144941734(lVar6,local_3f8);
    local_358 = local_3b8;
    local_368 = 0.0;
    dStack_360 = 0.0;
    local_378 = 0.0;
    dStack_370 = 0.0;
    dVar31 = local_3b8._0_8_;
    dVar38 = local_3b8._8_8_;
    auVar16._8_8_ = dStack_3a0;
    auVar16._0_8_ = local_3a8;
    auVar14 = minpd(auVar32,local_3b8);
    auVar16 = minpd(ZEXT816(0x3ff0000000000000),auVar16);
    auVar15._8_8_ = -(ulonglong)(auVar14._8_8_ < 0.0);
    auVar15._0_8_ = -(ulonglong)(auVar14._0_8_ < 0.0);
    iVar4 = movmskpd(uVar3,auVar15);
    auVar14._8_8_ = -(ulonglong)(auVar16._8_8_ < 0.0);
    auVar14._0_8_ = -(ulonglong)(auVar16._0_8_ < 0.0);
    uVar5 = movmskpd((int)lVar6,auVar14);
    if ((uVar5 & 0x3fffffff) == 0 && iVar4 == 0) {
      dVar35 = dVar34 * (double)local_3e8._0_8_ * 1.0 +
               dVar26 * (double)local_3f8._8_8_ +
               dVar20 * (double)local_3f8._0_8_ * -1.0 + dVar36 * (double)local_3e8._8_8_;
      local_398._8_4_ = SUB84(dVar35,0);
      local_398._0_8_ =
           dVar36 * (double)local_3e8._0_8_ * -1.0 +
           dVar20 * (double)local_3f8._8_8_ +
           dVar26 * (double)local_3f8._0_8_ * 1.0 + dVar34 * (double)local_3e8._8_8_;
      local_398._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
      local_388._8_8_ =
           dVar20 * (double)local_3e8._0_8_ * -1.0 +
           (((double)local_3f8._0_8_ * dVar34 * -1.0 + dVar26 * (double)local_3e8._8_8_) -
           dVar36 * (double)local_3f8._8_8_);
      local_388._0_8_ =
           dVar26 * (double)local_3e8._0_8_ * 1.0 +
           (((double)local_3f8._0_8_ * dVar36 * 1.0 + dVar20 * (double)local_3e8._8_8_) -
           dVar34 * (double)local_3f8._8_8_);
      dVar37 = dVar37 * dVar31;
      dVar30 = dVar30 * dVar38;
      dVar1 = dVar1 * local_3a8;
      dVar34 = dStack_3a0 * 0.0;
      dVar26 = dVar30 * (double)local_3f8._0_8_ - dVar37 * (double)local_3f8._8_8_;
      dVar31 = dVar1 * (double)local_3f8._8_8_ - dVar30 * (double)local_3e8._0_8_;
      dVar36 = dVar37 * (double)local_3e8._0_8_ - dVar1 * (double)local_3f8._0_8_;
      dVar20 = dVar34 * (double)local_3e8._8_8_ - dVar34 * (double)local_3e8._8_8_;
      dVar31 = dVar31 + dVar31;
      dVar36 = dVar36 + dVar36;
      dVar26 = dVar26 + dVar26;
      dVar20 = dVar20 + dVar20;
      local_378 = (dVar26 * (double)local_3f8._8_8_ - (double)local_3e8._0_8_ * dVar36) +
                  (double)local_3e8._8_8_ * dVar31 + dVar37 + local_3d8;
      dStack_370 = (dVar31 * (double)local_3e8._0_8_ - dVar26 * (double)local_3f8._0_8_) +
                   (double)local_3e8._8_8_ * dVar36 + dVar30 + dStack_3d0;
      local_368 = (dVar36 * (double)local_3f8._0_8_ - (double)local_3f8._8_8_ * dVar31) +
                  (double)local_3e8._8_8_ * dVar26 + dVar1 + local_3c8;
      dStack_360 = (dVar20 * (double)local_3e8._8_8_ - dVar20 * (double)local_3e8._8_8_) +
                   (double)local_3e8._8_8_ * dVar20 + dVar34 + dStack_3c0;
      local_348._8_8_ = dStack_3a0 * 0.0;
      local_348._0_8_ = local_3a8 * 1.0;
    }
    else {
      dVar17 = (double)local_3f8._8_8_ + (double)local_3f8._8_8_;
      dVar19 = (double)local_3e8._0_8_ + (double)local_3e8._0_8_;
      dVar18 = (double)local_3f8._0_8_ * ((double)local_3f8._0_8_ + (double)local_3f8._0_8_);
      local_1d8 = (dVar21 - ((double)local_3e8._0_8_ * dVar19 + (double)local_3f8._8_8_ * dVar17)) *
                  dVar31;
      dVar35 = (dVar27 - ((double)local_3e8._0_8_ * dVar19 + dVar18)) * dVar38;
      dVar25 = ((double)local_3f8._0_8_ + (double)local_3f8._0_8_) * (double)local_3e8._8_8_;
      dStack_190 = (dVar19 * (double)local_3f8._8_8_ - dVar25) * local_3a8;
      local_198 = (dVar17 * (double)local_3e8._8_8_ + (double)local_3f8._0_8_ * dVar19) * local_3a8;
      dStack_1d0 = (dVar17 * (double)local_3f8._0_8_ + dVar19 * (double)local_3e8._8_8_) * dVar31;
      local_1a8 = (dVar19 * (double)local_3f8._8_8_ + dVar25) * dVar38;
      local_1c8 = ((double)local_3f8._0_8_ * dVar19 - dVar17 * (double)local_3e8._8_8_) * dVar31;
      dStack_1c0 = 0.0;
      local_1b8._8_4_ = SUB84(dVar35,0);
      local_1b8._0_8_ =
           (dVar17 * (double)local_3f8._0_8_ - dVar19 * (double)local_3e8._8_8_) * dVar38;
      local_1b8._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
      local_188 = (1.0 - (dVar18 + (double)local_3f8._8_8_ * dVar17)) * local_3a8;
      dStack_1a0 = 0.0;
      uStack_180 = 0;
      local_178 = local_3d8;
      dStack_170 = dStack_3d0;
      local_168 = local_3c8;
      uStack_160 = 0x3ff0000000000000;
      dVar18 = dVar36 + dVar36;
      dVar35 = dVar20 + dVar20;
      dVar17 = dVar34 * (dVar34 + dVar34);
      local_258 = dVar21 - (dVar20 * dVar35 + dVar36 * dVar18);
      dStack_230 = dVar27 - (dVar20 * dVar35 + dVar17);
      local_208 = 1.0 - (dVar17 + dVar36 * dVar18);
      dStack_210 = (dVar34 + dVar34) * dVar26;
      dStack_250 = dVar18 * dVar34 + dVar35 * dVar26;
      local_228 = dVar35 * dVar36 + dStack_210;
      local_238 = dVar18 * dVar34 - dVar35 * dVar26;
      dStack_210 = dVar35 * dVar36 - dStack_210;
      local_218 = dVar18 * dVar26 + dVar34 * dVar35;
      local_248 = dVar34 * dVar35 - dVar18 * dVar26;
      uStack_240 = 0;
      uStack_220 = 0;
      uStack_200 = 0;
      local_1e8._8_4_ = 0;
      local_1e8._0_8_ = dVar1;
      local_1e8._12_4_ = 0x3ff00000;
      dVar34 = local_3a8 * 1.0;
      dVar36 = dStack_3a0 * 0.0;
      local_1f8 = dVar37;
      dStack_1f0 = dVar30;
      FUN_1447fea8d(&local_158);
      FUN_144a1c686(&local_158,0x3e45798ee0000000);
      auVar10._8_8_ = -(ulonglong)(0.0 <= dVar38);
      auVar10._0_8_ = -(ulonglong)(0.0 <= dVar31);
      auVar16 = blendvpd(_DAT_149936790,auVar32,auVar10);
      uVar9 = -(ulonglong)(0.0 <= dVar34);
      dVar20 = (double)(~uVar9 & 0xbff0000000000000 | uVar9 & 0x3ff0000000000000);
      dVar26 = auVar16._0_8_;
      local_148 = local_148 * dVar26;
      local_150 = local_150 * dVar26;
      local_158 = local_158 * dVar26;
      dVar26 = auVar16._8_8_;
      local_128 = local_128 * dVar26;
      local_130 = local_130 * dVar26;
      local_138 = dVar26 * local_138;
      local_108 = local_108 * dVar20;
      local_110 = local_110 * dVar20;
      local_118 = dVar20 * local_118;
      FUN_14481fd10(&local_458,&local_158);
      dVar20 = local_448 * local_448 + local_458 * local_458;
      dVar26 = dStack_440 * dStack_440 + dStack_450 * dStack_450;
      auVar22._0_8_ = dVar20 + dVar26;
      auVar22._8_8_ = dVar20 + dVar26;
      auVar11._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_);
      auVar11._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_);
      auVar16 = sqrtpd(auVar22,auVar22);
      auVar16 = divpd(auVar32,auVar16);
      auVar28._0_8_ = auVar16._0_8_ * local_448;
      auVar28._8_8_ = auVar16._8_8_ * dStack_440;
      local_388 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar28,auVar11);
      local_348._8_4_ = SUB84(dVar36,0);
      local_348._0_8_ = dVar34;
      local_348._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
      local_398._8_8_ =
           (ulonglong)(dStack_450 * auVar16._8_8_) &
           -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_);
      local_398._0_8_ =
           (ulonglong)(local_458 * auVar16._0_8_) &
           -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_);
      local_378 = local_f8;
      dStack_370 = dStack_f0;
      local_368 = local_e8;
      dStack_360 = 0.0;
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x30);
  if (lVar6 == 0) {
    pdVar7 = local_2d8;
    pdVar8 = (double *)local_3f8;
    for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
      *pdVar8 = *pdVar7;
      pdVar7 = pdVar7 + 1;
      pdVar8 = pdVar8 + 1;
    }
  }
  else {
    uVar3 = FUN_144941734(lVar6,&local_458);
    local_3c8 = 0.0;
    dStack_3c0 = 0.0;
    local_3d8 = 0.0;
    dStack_3d0 = 0.0;
    dVar34 = local_418._0_8_;
    dVar20 = local_418._8_8_;
    local_3a8 = local_408._0_8_;
    dVar26 = local_408._8_8_;
    dVar36 = local_298._0_8_;
    dVar1 = local_298._8_8_;
    auVar2._8_8_ = dStack_280;
    auVar2._0_8_ = local_288;
    auVar16 = minpd(local_298,local_418);
    auVar14 = minpd(auVar2,local_408);
    auVar23._8_8_ = -(ulonglong)(auVar16._8_8_ < 0.0);
    auVar23._0_8_ = -(ulonglong)(auVar16._0_8_ < 0.0);
    iVar4 = movmskpd(uVar3,auVar23);
    auVar29._8_8_ = -(ulonglong)(auVar14._8_8_ < 0.0);
    auVar29._0_8_ = -(ulonglong)(auVar14._0_8_ < 0.0);
    uVar5 = movmskpd((int)lVar6,auVar29);
    if ((uVar5 & 0x3fffffff) == 0 && iVar4 == 0) {
      dVar21 = local_2d8[0] * local_448 * 1.0 +
               local_2d8[3] * dStack_450 +
               local_2d8[2] * local_458 * -1.0 + local_2d8[1] * dStack_440;
      local_3f8._8_4_ = SUB84(dVar21,0);
      local_3f8._0_8_ =
           local_2d8[1] * local_448 * -1.0 +
           local_2d8[2] * dStack_450 + local_2d8[3] * local_458 * 1.0 + local_2d8[0] * dStack_440;
      local_3f8._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
      local_3e8._8_8_ =
           local_2d8[2] * local_448 * -1.0 +
           ((local_458 * local_2d8[0] * -1.0 + local_2d8[3] * dStack_440) -
           local_2d8[1] * dStack_450);
      local_3e8._0_8_ =
           local_2d8[3] * local_448 * 1.0 +
           ((local_458 * local_2d8[1] * 1.0 + local_2d8[2] * dStack_440) - local_2d8[0] * dStack_450
           );
      dVar21 = local_2b8 * dVar34;
      dVar27 = dStack_2b0 * dVar20;
      dVar35 = local_2a8 * local_3a8;
      dVar18 = dStack_2a0 * dVar26;
      dVar31 = dVar27 * local_458 - dStack_450 * dVar21;
      dVar37 = dVar35 * dStack_450 - local_448 * dVar27;
      dVar30 = dVar21 * local_448 - local_458 * dVar35;
      dVar38 = dVar18 * dStack_440 - dStack_440 * dVar18;
      dVar37 = dVar37 + dVar37;
      dVar30 = dVar30 + dVar30;
      dVar31 = dVar31 + dVar31;
      dVar38 = dVar38 + dVar38;
      local_3d8 = (dVar31 * dStack_450 - local_448 * dVar30) + dStack_440 * dVar37 + dVar21 +
                  local_438;
      dStack_3d0 = (dVar37 * local_448 - dVar31 * local_458) + dStack_440 * dVar30 + dVar27 +
                   dStack_430;
      local_3c8 = (dVar30 * local_458 - dStack_450 * dVar37) + dStack_440 * dVar31 + dVar35 +
                  (double)CONCAT44(uStack_424,local_428);
      dStack_3c0 = (dVar38 * dStack_440 - dVar38 * dStack_440) + dStack_440 * dVar38 + dVar18 +
                   dStack_420;
      local_3a8 = local_288 * local_3a8;
      dStack_3a0 = dStack_280 * dVar26;
      local_3b8._8_8_ = dVar1 * dVar20;
      local_3b8._0_8_ = dVar36 * dVar34;
    }
    else {
      dVar30 = dStack_450 + dStack_450;
      dVar31 = local_448 + local_448;
      dVar37 = local_458 * (local_458 + local_458);
      local_188 = (1.0 - (dVar37 + dStack_450 * dVar30)) * local_3a8;
      dVar38 = (local_458 + local_458) * dStack_440;
      local_198 = (dVar30 * dStack_440 + local_458 * dVar31) * local_3a8;
      dVar35 = local_3a8 * local_288;
      dVar26 = dVar26 * dStack_280;
      dStack_190 = (dVar31 * dStack_450 - dVar38) * local_3a8;
      local_1d8 = (dVar21 - (local_448 * dVar31 + dStack_450 * dVar30)) * dVar34;
      dVar37 = (dVar27 - (local_448 * dVar31 + dVar37)) * dVar20;
      dStack_1d0 = (dVar30 * local_458 + dVar31 * dStack_440) * dVar34;
      local_1a8 = (dVar31 * dStack_450 + dVar38) * dVar20;
      local_1c8 = (local_458 * dVar31 - dVar30 * dStack_440) * dVar34;
      dStack_1c0 = 0.0;
      local_1b8._8_4_ = SUB84(dVar37,0);
      local_1b8._0_8_ = (dVar30 * local_458 - dVar31 * dStack_440) * dVar20;
      local_1b8._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
      dStack_1a0 = 0.0;
      uStack_180 = 0;
      local_178 = local_438;
      dStack_170 = dStack_430;
      local_168 = (double)CONCAT44(uStack_424,local_428);
      uStack_160 = 0x3ff0000000000000;
      dVar30 = local_2d8[1] + local_2d8[1];
      dVar31 = local_2d8[2] + local_2d8[2];
      dVar37 = local_2d8[0] * (local_2d8[0] + local_2d8[0]);
      local_208 = (1.0 - (dVar37 + local_2d8[1] * dVar30)) * local_288;
      dVar38 = (local_2d8[0] + local_2d8[0]) * local_2d8[3];
      local_218 = (dVar30 * local_2d8[3] + local_2d8[0] * dVar31) * local_288;
      local_238 = (dVar30 * local_2d8[0] - dVar31 * local_2d8[3]) * dVar1;
      dStack_210 = (dVar31 * local_2d8[1] - dVar38) * local_288;
      dVar20 = dVar20 * dVar1;
      local_258 = (dVar21 - (local_2d8[2] * dVar31 + local_2d8[1] * dVar30)) * dVar36;
      dStack_230 = (dVar27 - (local_2d8[2] * dVar31 + dVar37)) * dVar1;
      dStack_250 = (dVar30 * local_2d8[0] + dVar31 * local_2d8[3]) * dVar36;
      local_228 = (dVar31 * local_2d8[1] + dVar38) * dVar1;
      local_248 = (local_2d8[0] * dVar31 - dVar30 * local_2d8[3]) * dVar36;
      uStack_240 = 0;
      uStack_220 = 0;
      uStack_200 = 0;
      local_1f8 = local_2b8;
      dStack_1f0 = dStack_2b0;
      local_1e8._8_8_ = 0x3ff0000000000000;
      local_1e8._0_8_ = local_2a8;
      FUN_1447fea8d(&local_158);
      FUN_144a1c686(&local_158,0x3e45798ee0000000);
      auVar12._8_8_ = -(ulonglong)(0.0 <= dVar20);
      auVar12._0_8_ = -(ulonglong)(0.0 <= dVar34 * dVar36);
      auVar16 = blendvpd(_DAT_149936790,auVar32,auVar12);
      uVar9 = -(ulonglong)(0.0 <= dVar35);
      dVar21 = (double)(~uVar9 & 0xbff0000000000000 | uVar9 & 0x3ff0000000000000);
      dVar27 = auVar16._0_8_;
      local_148 = local_148 * dVar27;
      local_150 = local_150 * dVar27;
      local_158 = local_158 * dVar27;
      dVar27 = auVar16._8_8_;
      local_128 = local_128 * dVar27;
      local_130 = local_130 * dVar27;
      local_138 = dVar27 * local_138;
      local_108 = local_108 * dVar21;
      local_110 = local_110 * dVar21;
      local_118 = dVar21 * local_118;
      FUN_14481fd10(&local_278,&local_158);
      dVar21 = local_268 * local_268 + local_278 * local_278;
      dVar27 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
      auVar24._0_8_ = dVar21 + dVar27;
      auVar24._8_8_ = dVar21 + dVar27;
      auVar13._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar24._8_8_);
      auVar13._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar24._0_8_);
      auVar16 = sqrtpd(auVar24,auVar24);
      auVar32 = divpd(auVar32,auVar16);
      auVar33._0_8_ = auVar32._0_8_ * local_268;
      auVar33._8_8_ = auVar32._8_8_ * dStack_260;
      local_3e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar33,auVar13);
      local_3b8._8_4_ = SUB84(dVar20,0);
      local_3b8._0_8_ = dVar34 * dVar36;
      local_3b8._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
      local_3f8._8_8_ =
           (ulonglong)(dStack_270 * auVar32._8_8_) &
           -(ulonglong)(9.99999993922529e-09 <= auVar24._8_8_);
      local_3f8._0_8_ =
           (ulonglong)(local_278 * auVar32._0_8_) &
           -(ulonglong)(9.99999993922529e-09 <= auVar24._0_8_);
      local_3d8 = local_f8;
      dStack_3d0 = dStack_f0;
      local_3c8 = local_e8;
      dStack_3c0 = 0.0;
      local_3a8 = dVar35;
      dStack_3a0 = dVar26;
    }
  }
  FUN_1449437a2(local_338,&local_158,local_2d8);
  dVar34 = local_158 + local_150 * -0.0;
  dVar27 = local_150 * -0.0 + local_158 * 0.0;
  dVar36 = local_158 * 0.0 - local_150;
  dVar21 = local_148 + local_158 * -0.0;
  dVar20 = local_150 * 0.0 + local_148 * -0.0;
  dVar36 = dVar36 + dVar36;
  dVar21 = dVar21 + dVar21;
  dVar20 = dVar20 + dVar20;
  local_1c8 = (local_158 * dVar21 - dVar20 * local_150) + local_140 * dVar36 + 0.0;
  dStack_1d0 = (local_148 * dVar20 - dVar36 * local_158) + local_140 * dVar21 + 0.0;
  local_1d8 = (local_150 * dVar36 - dVar21 * local_148) + local_140 * dVar20 + 1.0;
  dVar21 = local_158 * -0.0 + local_148 * 0.0;
  dVar36 = local_150 * 0.0 - local_148;
  dVar34 = dVar34 + dVar34;
  dVar21 = dVar21 + dVar21;
  dVar36 = dVar36 + dVar36;
  dStack_1c0 = (local_150 * dVar34 - dVar21 * local_148) + local_140 * dVar36 + 0.0;
  local_1b8._8_8_ = (local_158 * dVar21 - dVar36 * local_150) + local_140 * dVar34 + 0.0;
  local_1b8._0_8_ = (local_148 * dVar36 - dVar34 * local_158) + local_140 * dVar21 + 1.0;
  dVar34 = local_148 * 0.0 - local_158;
  dVar21 = local_148 * -0.0 + local_150;
  dVar27 = dVar27 + dVar27;
  dVar34 = dVar34 + dVar34;
  dVar21 = dVar21 + dVar21;
  local_198 = (local_158 * dVar34 - dVar21 * local_150) + local_140 * dVar27 + 1.0;
  dStack_1a0 = (local_148 * dVar21 - dVar27 * local_158) + local_140 * dVar34 + 0.0;
  local_1a8 = (local_150 * dVar27 - dVar34 * local_148) + local_140 * dVar21 + 0.0;
  FUN_147122214(local_398,local_3f8,&local_1d8,param_2);
  if ((local_d0 ^ (ulonglong)auStack_478) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1471197d0 FUN_1471197d0 body=3804 status=ok
// SIG undefined FUN_1471197d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1471197d0(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
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
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  int iVar26;
  longlong lVar27;
  uint uVar28;
  undefined4 uVar29;
  longlong lVar31;
  ulonglong uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  double dVar42;
  double dVar43;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar44 [16];
  double dVar47;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auStack_358 [32];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  double local_308;
  double dStack_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  double local_2a8;
  double dStack_2a0;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158 [6];
  double local_128 [4];
  double local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  ulonglong local_d0;
  double dVar3;
  double *pdVar30;
  
  auVar51 = _DAT_149934d80;
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  lVar27 = *(longlong *)(param_1 + 0x20);
  local_2a8 = 0.0;
  dStack_2a0 = 0.0;
  local_2b8 = ZEXT816(0);
  auVar38 = *(undefined1 (*) [16])(lVar27 + 0x170);
  dVar37 = auVar38._0_8_;
  dVar9 = auVar38._8_8_;
  auVar4 = *(undefined1 (*) [16])(lVar27 + 0x180);
  dVar1 = auVar4._0_8_;
  auVar45 = *(undefined1 (*) [16])(param_1 + 0xd0);
  dVar7 = auVar45._0_8_;
  dVar10 = auVar45._8_8_;
  auVar5 = *(undefined1 (*) [16])(param_1 + 0xe0);
  dVar8 = auVar5._0_8_;
  auVar38 = minpd(auVar45,auVar38);
  auVar44 = minpd(auVar5,auVar4);
  auVar45._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
  auVar45._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
  iVar26 = movmskpd((int)param_1,auVar45);
  auVar38._8_8_ = -(ulonglong)(auVar44._8_8_ < 0.0);
  auVar38._0_8_ = -(ulonglong)(auVar44._0_8_ < 0.0);
  uVar28 = movmskpd((int)param_2,auVar38);
  if ((uVar28 & 0x3fffffff) == 0 && iVar26 == 0) {
    dVar18 = *(double *)(param_1 + 0x90);
    dVar19 = *(double *)(param_1 + 0x98);
    dVar20 = *(double *)(param_1 + 0xa0);
    dVar21 = *(double *)(param_1 + 0xa8);
    dVar22 = *(double *)(lVar27 + 0x130);
    dVar23 = *(double *)(lVar27 + 0x138);
    dVar24 = *(double *)(lVar27 + 0x140);
    dVar25 = *(double *)(lVar27 + 0x148);
    dVar36 = *(double *)(lVar27 + 0x148);
    dVar43 = *(double *)(lVar27 + 0x148);
    dVar11 = *(double *)(lVar27 + 0x130);
    dVar14 = *(double *)(lVar27 + 0x130);
    dVar3 = *(double *)(lVar27 + 0x138);
    dVar2 = *(double *)(lVar27 + 0x138);
    dVar42 = *(double *)(lVar27 + 0x140);
    dVar47 = *(double *)(lVar27 + 0x140);
    local_2d8 = dVar19 * dVar42 * -1.0 + dVar20 * dVar3 + dVar21 * dVar11 * 1.0 + dVar18 * dVar36;
    dStack_2d0 = dVar18 * dVar47 * 1.0 + dVar21 * dVar2 + dVar20 * dVar14 * -1.0 + dVar19 * dVar43;
    dVar12 = *(double *)(param_1 + 0xb0) * dVar37;
    dVar13 = *(double *)(param_1 + 0xb8) * dVar9;
    dVar15 = *(double *)(param_1 + 0xc0) * dVar1;
    dVar16 = *(double *)(param_1 + 200) * auVar4._8_8_;
    dVar48 = dVar13 * dVar22 - dVar23 * dVar12;
    dVar49 = dVar15 * dVar23 - dVar24 * dVar13;
    dVar50 = dVar12 * dVar24 - dVar22 * dVar15;
    dVar17 = dVar16 * dVar25 - dVar25 * dVar16;
    dVar49 = dVar49 + dVar49;
    dVar50 = dVar50 + dVar50;
    dVar48 = dVar48 + dVar48;
    dVar17 = dVar17 + dVar17;
    dVar13 = (dVar49 * dVar24 - dVar48 * dVar22) + dVar43 * dVar50 + dVar13 +
             *(double *)(lVar27 + 0x158);
    local_2a8 = (dVar50 * dVar22 - dVar23 * dVar49) + dVar36 * dVar48 + dVar15 +
                *(double *)(lVar27 + 0x160);
    dStack_2a0 = (dVar17 * dVar25 - dVar17 * dVar25) + dVar43 * dVar17 + dVar16 +
                 *(double *)(lVar27 + 0x168);
    local_2c8._8_8_ =
         dVar20 * dVar47 * -1.0 + ((dVar14 * dVar18 * -1.0 + dVar21 * dVar43) - dVar19 * dVar2);
    local_2c8._0_8_ =
         dVar21 * dVar42 * 1.0 + ((dVar11 * dVar19 * 1.0 + dVar20 * dVar36) - dVar18 * dVar3);
    local_2b8._8_4_ = SUB84(dVar13,0);
    local_2b8._0_8_ =
         (dVar48 * dVar23 - dVar24 * dVar50) + dVar36 * dVar49 + dVar12 +
         *(double *)(lVar27 + 0x150);
    local_2b8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    uVar29 = 0;
  }
  else {
    dVar2 = *(double *)(lVar27 + 0x130);
    dVar3 = *(double *)(lVar27 + 0x138);
    dVar47 = *(double *)(lVar27 + 0x140);
    dVar42 = dVar3 + dVar3;
    dVar48 = dVar47 + dVar47;
    dVar43 = dVar2 * (dVar2 + dVar2);
    local_188 = (1.0 - (dVar43 + dVar3 * dVar42)) * dVar1;
    dVar14 = *(double *)(lVar27 + 0x130) * dVar48;
    dVar36 = *(double *)(lVar27 + 0x148);
    dVar49 = dVar48 * dVar36;
    dVar50 = (dVar2 + dVar2) * *(double *)(lVar27 + 0x148);
    dVar36 = dVar42 * dVar36;
    local_198 = (dVar36 + dVar14) * dVar1;
    dVar43 = (DAT_149934d80._8_8_ - (dVar47 * dVar48 + dVar43)) * dVar9;
    dVar11 = (dVar42 * dVar2 + dVar49) * dVar37;
    local_1a8 = (dVar48 * dVar3 + dVar50) * dVar9;
    dStack_190 = (dVar48 * dVar3 - dVar50) * dVar1;
    local_1c8 = (dVar14 - dVar36) * dVar37;
    local_1d8._8_4_ = SUB84(dVar11,0);
    local_1d8._0_8_ = ((double)DAT_149934d80 - (dVar47 * dVar48 + dVar3 * dVar42)) * dVar37;
    local_1d8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar43,0);
    local_1b8._0_8_ = (dVar42 * dVar2 - dVar49) * dVar9;
    local_1b8._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = *(undefined8 *)(lVar27 + 0x150);
    uStack_170 = *(undefined8 *)(lVar27 + 0x158);
    local_168 = *(undefined8 *)(lVar27 + 0x160);
    uStack_160 = 0x3ff0000000000000;
    dVar14 = *(double *)(param_1 + 0x90);
    dVar2 = *(double *)(param_1 + 0x98);
    dVar3 = *(double *)(param_1 + 0xa0);
    dVar47 = dVar2 + dVar2;
    dVar42 = dVar3 + dVar3;
    dVar43 = dVar14 * (dVar14 + dVar14);
    local_208 = (1.0 - (dVar43 + dVar2 * dVar47)) * dVar8;
    dVar11 = *(double *)(param_1 + 0x90) * dVar42;
    dVar36 = *(double *)(param_1 + 0xa8);
    dVar48 = dVar42 * dVar36;
    dVar49 = (dVar14 + dVar14) * *(double *)(param_1 + 0xa8);
    dVar36 = dVar47 * dVar36;
    local_218 = (dVar36 + dVar11) * dVar8;
    dStack_210 = (dVar42 * dVar2 - dVar49) * dVar8;
    local_258 = ((double)DAT_149934d80 - (dVar3 * dVar42 + dVar2 * dVar47)) * dVar7;
    dVar43 = (DAT_149934d80._8_8_ - (dVar3 * dVar42 + dVar43)) * dVar10;
    dStack_250 = (dVar47 * dVar14 + dVar48) * dVar7;
    local_228 = (dVar42 * dVar2 + dVar49) * dVar10;
    local_248 = (dVar11 - dVar36) * dVar7;
    uStack_240 = 0;
    local_238._8_4_ = SUB84(dVar43,0);
    local_238._0_8_ = (dVar47 * dVar14 - dVar48) * dVar10;
    local_238._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
    uStack_220 = 0;
    uStack_200 = 0;
    local_1f8 = *(undefined8 *)(param_1 + 0xb0);
    uStack_1f0 = *(undefined8 *)(param_1 + 0xb8);
    local_1e8 = *(undefined8 *)(param_1 + 0xc0);
    uStack_1e0 = 0x3ff0000000000000;
    pdVar30 = local_158;
    FUN_1447fea8d(pdVar30);
    FUN_144a1c686(pdVar30,0x3e45798ee0000000);
    auVar44._8_8_ = -(ulonglong)(0.0 <= dVar9 * dVar10);
    auVar44._0_8_ = -(ulonglong)(0.0 <= dVar37 * dVar7);
    auVar38 = blendvpd(_DAT_149936790,auVar51,auVar44);
    uVar32 = -(ulonglong)(0.0 <= dVar1 * dVar8);
    dVar36 = (double)(~uVar32 & 0xbff0000000000000 | uVar32 & 0x3ff0000000000000);
    dVar43 = auVar38._0_8_;
    local_158[2] = local_158[2] * dVar43;
    local_158[1] = local_158[1] * dVar43;
    local_158[0] = local_158[0] * dVar43;
    dVar43 = auVar38._8_8_;
    local_128[0] = local_128[0] * dVar43;
    local_158[5] = local_158[5] * dVar43;
    local_158[4] = dVar43 * local_158[4];
    local_108 = local_108 * dVar36;
    local_128[3] = local_128[3] * dVar36;
    local_128[2] = dVar36 * local_128[2];
    iVar26 = (int)local_338;
    FUN_14481fd10();
    uVar29 = SUB84(pdVar30,0);
    dVar36 = (double)local_328._0_8_ * (double)local_328._0_8_ +
             (double)local_338._0_8_ * (double)local_338._0_8_;
    dVar43 = (double)local_328._8_8_ * (double)local_328._8_8_ +
             (double)local_338._8_8_ * (double)local_338._8_8_;
    auVar39._0_8_ = dVar36 + dVar43;
    auVar39._8_8_ = dVar36 + dVar43;
    auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
    auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
    auVar38 = sqrtpd(auVar39,auVar39);
    auVar38 = divpd(auVar51,auVar38);
    auVar51._0_8_ = auVar38._0_8_ * (double)local_328._0_8_;
    auVar51._8_8_ = auVar38._8_8_ * (double)local_328._8_8_;
    local_2d8 = (double)((ulonglong)((double)local_338._0_8_ * auVar38._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_));
    dStack_2d0 = (double)((ulonglong)((double)local_338._8_8_ * auVar38._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_));
    local_2c8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar51,auVar33);
    local_2b8._8_8_ = uStack_f0;
    local_2b8._0_8_ = local_f8;
    local_2a8 = local_e8;
    dStack_2a0 = 0.0;
  }
  auVar51 = _DAT_149934d80;
  dVar36 = auVar4._8_8_ * auVar5._8_8_;
  local_298._8_4_ = SUB84(dVar9 * dVar10,0);
  local_298._0_8_ = dVar37 * dVar7;
  local_298._12_4_ = (int)((ulonglong)(dVar9 * dVar10) >> 0x20);
  local_288._8_4_ = SUB84(dVar36,0);
  local_288._0_8_ = dVar1 * dVar8;
  local_288._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
  lVar27 = *(longlong *)(param_1 + 0x18);
  local_308 = 0.0;
  dStack_300 = 0.0;
  local_318 = ZEXT816(0);
  auVar38 = *(undefined1 (*) [16])(lVar27 + 0x170);
  dVar37 = auVar38._0_8_;
  dVar9 = auVar38._8_8_;
  auVar4 = *(undefined1 (*) [16])(lVar27 + 0x180);
  dVar1 = auVar4._0_8_;
  auVar45 = *(undefined1 (*) [16])(param_1 + 0x70);
  dVar7 = auVar45._0_8_;
  dVar10 = auVar45._8_8_;
  auVar5 = *(undefined1 (*) [16])(param_1 + 0x80);
  dVar8 = auVar5._0_8_;
  auVar38 = minpd(auVar45,auVar38);
  auVar45 = minpd(auVar5,auVar4);
  auVar40._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
  auVar40._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
  iVar26 = movmskpd(iVar26,auVar40);
  auVar46._8_8_ = -(ulonglong)(auVar45._8_8_ < 0.0);
  auVar46._0_8_ = -(ulonglong)(auVar45._0_8_ < 0.0);
  uVar28 = movmskpd(uVar29,auVar46);
  if ((uVar28 & 0x3fffffff) == 0 && iVar26 == 0) {
    dVar18 = *(double *)(param_1 + 0x30);
    dVar19 = *(double *)(param_1 + 0x38);
    dVar20 = *(double *)(param_1 + 0x40);
    dVar21 = *(double *)(param_1 + 0x48);
    dVar22 = *(double *)(lVar27 + 0x130);
    dVar23 = *(double *)(lVar27 + 0x138);
    dVar24 = *(double *)(lVar27 + 0x140);
    dVar25 = *(double *)(lVar27 + 0x148);
    dVar36 = *(double *)(lVar27 + 0x148);
    dVar43 = *(double *)(lVar27 + 0x148);
    dVar11 = *(double *)(lVar27 + 0x130);
    dVar14 = *(double *)(lVar27 + 0x130);
    dVar2 = *(double *)(lVar27 + 0x138);
    dVar3 = *(double *)(lVar27 + 0x138);
    dVar42 = *(double *)(lVar27 + 0x140);
    dVar47 = *(double *)(lVar27 + 0x140);
    local_338._0_8_ =
         dVar19 * dVar42 * -1.0 + dVar20 * dVar2 + dVar21 * dVar11 * 1.0 + dVar18 * dVar36;
    local_338._8_8_ =
         dVar18 * dVar47 * 1.0 + dVar21 * dVar3 + dVar20 * dVar14 * -1.0 + dVar19 * dVar43;
    dVar12 = *(double *)(param_1 + 0x50) * dVar37;
    dVar13 = *(double *)(param_1 + 0x58) * dVar9;
    dVar15 = *(double *)(param_1 + 0x60) * dVar1;
    dVar16 = *(double *)(param_1 + 0x68) * auVar4._8_8_;
    dVar48 = dVar13 * dVar22 - dVar23 * dVar12;
    dVar49 = dVar15 * dVar23 - dVar24 * dVar13;
    dVar50 = dVar12 * dVar24 - dVar22 * dVar15;
    dVar17 = dVar16 * dVar25 - dVar25 * dVar16;
    dVar49 = dVar49 + dVar49;
    dVar50 = dVar50 + dVar50;
    dVar48 = dVar48 + dVar48;
    dVar17 = dVar17 + dVar17;
    dVar13 = (dVar49 * dVar24 - dVar48 * dVar22) + dVar43 * dVar50 + dVar13 +
             *(double *)(lVar27 + 0x158);
    local_308 = (dVar50 * dVar22 - dVar23 * dVar49) + dVar36 * dVar48 + dVar15 +
                *(double *)(lVar27 + 0x160);
    dStack_300 = (dVar17 * dVar25 - dVar17 * dVar25) + dVar43 * dVar17 + dVar16 +
                 *(double *)(lVar27 + 0x168);
    local_328._8_8_ =
         dVar20 * dVar47 * -1.0 + ((dVar14 * dVar18 * -1.0 + dVar21 * dVar43) - dVar19 * dVar3);
    local_328._0_8_ =
         dVar21 * dVar42 * 1.0 + ((dVar11 * dVar19 * 1.0 + dVar20 * dVar36) - dVar18 * dVar2);
    local_318._8_4_ = SUB84(dVar13,0);
    local_318._0_8_ =
         (dVar48 * dVar23 - dVar24 * dVar50) + dVar36 * dVar49 + dVar12 +
         *(double *)(lVar27 + 0x150);
    local_318._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  }
  else {
    dVar2 = *(double *)(lVar27 + 0x130);
    dVar3 = *(double *)(lVar27 + 0x138);
    dVar47 = *(double *)(lVar27 + 0x140);
    dVar42 = dVar3 + dVar3;
    dVar48 = dVar47 + dVar47;
    dVar43 = dVar2 * (dVar2 + dVar2);
    local_188 = (1.0 - (dVar43 + dVar3 * dVar42)) * dVar1;
    dVar14 = *(double *)(lVar27 + 0x130) * dVar48;
    dVar36 = *(double *)(lVar27 + 0x148);
    dVar49 = dVar48 * dVar36;
    dVar50 = (dVar2 + dVar2) * *(double *)(lVar27 + 0x148);
    dVar36 = dVar42 * dVar36;
    local_198 = (dVar36 + dVar14) * dVar1;
    dVar43 = (DAT_149934d80._8_8_ - (dVar47 * dVar48 + dVar43)) * dVar9;
    dVar11 = (dVar42 * dVar2 + dVar49) * dVar37;
    local_1a8 = (dVar48 * dVar3 + dVar50) * dVar9;
    dStack_190 = (dVar48 * dVar3 - dVar50) * dVar1;
    local_1c8 = (dVar14 - dVar36) * dVar37;
    local_1d8._8_4_ = SUB84(dVar11,0);
    local_1d8._0_8_ = ((double)DAT_149934d80 - (dVar47 * dVar48 + dVar3 * dVar42)) * dVar37;
    local_1d8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar43,0);
    local_1b8._0_8_ = (dVar42 * dVar2 - dVar49) * dVar9;
    local_1b8._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = *(undefined8 *)(lVar27 + 0x150);
    uStack_170 = *(undefined8 *)(lVar27 + 0x158);
    local_168 = *(undefined8 *)(lVar27 + 0x160);
    uStack_160 = 0x3ff0000000000000;
    dVar14 = *(double *)(param_1 + 0x30);
    dVar2 = *(double *)(param_1 + 0x38);
    dVar3 = *(double *)(param_1 + 0x40);
    dVar47 = dVar2 + dVar2;
    dVar42 = dVar3 + dVar3;
    dVar43 = dVar14 * (dVar14 + dVar14);
    local_208 = (1.0 - (dVar43 + dVar2 * dVar47)) * dVar8;
    dVar11 = *(double *)(param_1 + 0x30) * dVar42;
    dVar36 = *(double *)(param_1 + 0x48);
    dVar48 = dVar42 * dVar36;
    dVar49 = (dVar14 + dVar14) * *(double *)(param_1 + 0x48);
    dVar36 = dVar47 * dVar36;
    local_218 = (dVar36 + dVar11) * dVar8;
    dStack_210 = (dVar42 * dVar2 - dVar49) * dVar8;
    local_258 = ((double)DAT_149934d80 - (dVar3 * dVar42 + dVar2 * dVar47)) * dVar7;
    dVar43 = (DAT_149934d80._8_8_ - (dVar3 * dVar42 + dVar43)) * dVar10;
    dStack_250 = (dVar47 * dVar14 + dVar48) * dVar7;
    local_228 = (dVar42 * dVar2 + dVar49) * dVar10;
    local_248 = (dVar11 - dVar36) * dVar7;
    uStack_240 = 0;
    local_238._8_4_ = SUB84(dVar43,0);
    local_238._0_8_ = (dVar47 * dVar14 - dVar48) * dVar10;
    local_238._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
    uStack_220 = 0;
    uStack_200 = 0;
    local_1f8 = *(undefined8 *)(param_1 + 0x50);
    uStack_1f0 = *(undefined8 *)(param_1 + 0x58);
    local_1e8 = *(undefined8 *)(param_1 + 0x60);
    uStack_1e0 = 0x3ff0000000000000;
    FUN_1447fea8d(local_158);
    FUN_144a1c686(local_158,0x3e45798ee0000000);
    auVar34._8_8_ = -(ulonglong)(0.0 <= dVar9 * dVar10);
    auVar34._0_8_ = -(ulonglong)(0.0 <= dVar37 * dVar7);
    auVar38 = blendvpd(_DAT_149936790,auVar51,auVar34);
    uVar32 = -(ulonglong)(0.0 <= dVar1 * dVar8);
    dVar36 = (double)(~uVar32 & 0xbff0000000000000 | uVar32 & 0x3ff0000000000000);
    dVar43 = auVar38._0_8_;
    local_158[2] = local_158[2] * dVar43;
    local_158[1] = local_158[1] * dVar43;
    local_158[0] = local_158[0] * dVar43;
    dVar43 = auVar38._8_8_;
    local_128[0] = local_128[0] * dVar43;
    local_158[5] = local_158[5] * dVar43;
    local_158[4] = dVar43 * local_158[4];
    local_108 = local_108 * dVar36;
    local_128[3] = local_128[3] * dVar36;
    local_128[2] = dVar36 * local_128[2];
    FUN_14481fd10(&local_278,local_158);
    dVar36 = local_268 * local_268 + local_278 * local_278;
    dVar43 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar41._0_8_ = dVar36 + dVar43;
    auVar41._8_8_ = dVar36 + dVar43;
    auVar35._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_);
    auVar35._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_);
    auVar38 = sqrtpd(auVar41,auVar41);
    auVar38 = divpd(auVar51,auVar38);
    auVar52._0_8_ = auVar38._0_8_ * local_268;
    auVar52._8_8_ = auVar38._8_8_ * dStack_260;
    local_328 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar52,auVar35);
    local_338._8_8_ =
         (ulonglong)(dStack_270 * auVar38._8_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_);
    local_338._0_8_ =
         (ulonglong)(local_278 * auVar38._0_8_) &
         -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_);
    local_318._8_8_ = uStack_f0;
    local_318._0_8_ = local_f8;
    local_308 = local_e8;
    dStack_300 = 0.0;
  }
  dVar36 = auVar4._8_8_ * auVar5._8_8_;
  local_2f8._8_4_ = SUB84(dVar9 * dVar10,0);
  local_2f8._0_8_ = dVar37 * dVar7;
  local_2f8._12_4_ = (int)((ulonglong)(dVar9 * dVar10) >> 0x20);
  local_2e8._8_4_ = SUB84(dVar36,0);
  local_2e8._0_8_ = dVar1 * dVar8;
  local_2e8._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
  FUN_147122214(local_338,&local_2d8,param_1 + 0x350,local_158);
  iVar26 = 0;
  lVar27 = -0x18;
  do {
    iVar6 = *(int *)(param_1 + 0xf48 + lVar27);
    if (iVar6 == 1) {
      dVar1 = *(double *)((longlong)local_128 + lVar27 * 2);
      dVar37 = *(double *)(param_1 + 0xf00 + lVar27 * 2);
      if ((dVar1 < dVar37) || (dVar37 = *(double *)(param_1 + 0xf30 + lVar27 * 2), dVar37 < dVar1))
      {
        dVar37 = dVar37 - dVar1;
        goto LAB_14711a224;
      }
    }
    else if (iVar6 == 2) {
      if (ABS(*(double *)(param_1 + 0x770)) + ABS(*(double *)(param_1 + 0x768)) <=
          9.99999993922529e-09) {
        dVar37 = (*(double *)(param_1 + 0xf30 + lVar27 * 2) +
                 *(double *)(param_1 + 0xf00 + lVar27 * 2)) * 0.5;
      }
      else {
        dVar37 = *(double *)(param_1 + 0x768 + lVar27 * 2);
      }
      dVar37 = dVar37 - *(double *)((longlong)local_128 + lVar27 * 2);
LAB_14711a224:
      lVar31 = (longlong)iVar26;
      iVar26 = iVar26 + 1;
      *(double *)(param_2 + lVar31 * 8) = dVar37;
    }
    lVar27 = lVar27 + 4;
    if (lVar27 == 0) {
      if ((local_d0 ^ (ulonglong)auStack_358) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 14711a6bc FUN_14711a6bc body=65 status=ok
// SIG undefined FUN_14711a6bc(void)

void FUN_14711a6bc(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147121a82(param_1,iVar1);
  }
  FUN_147121a67((longlong)iVar1 * 0x10 + *param_1,param_2);
  return;
}



// FUNCTION 14711a6fe FUN_14711a6fe body=78 status=ok
// SIG undefined FUN_14711a6fe(void)

void FUN_14711a6fe(longlong param_1,longlong param_2)

{
  FUN_140b8b6a4(param_1,*(undefined8 *)(param_2 + 0x20));
  FUN_140b8b6a4(param_1,*(undefined8 *)(param_2 + 0x30));
  if (*(int *)(param_2 + 0x240) == -1) {
    return;
  }
  FUN_147121b84(param_1 + 0xf0,*(int *)(param_2 + 0x240),1);
  return;
}



// FUNCTION 14711a74c FUN_14711a74c body=55 status=ok
// SIG undefined FUN_14711a74c(void)

void FUN_14711a74c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  FUN_14711a6fe(param_1,*param_2);
  lVar1 = *param_2;
  if (lVar1 != 0) {
    FUN_142b4e8f4(lVar1);
    FUN_1400020a8(lVar1);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 14711a784 FUN_14711a784 body=248 status=ok
// SIG undefined FUN_14711a784(void)

longlong FUN_14711a784(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*(int *)(param_1 + 0x210) != *(int *)(param_1 + 0x23c)) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar4 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    lVar7 = param_1 + 0x240;
    if (*(longlong *)(param_1 + 0x248) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x248);
    }
    iVar5 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_1 + 0x250) - 1U &
                             (uVar4 * 0x40 + (uVar3 >> 0x10 ^ uVar3) + (uVar4 >> 2) + 0x9e3779b9 ^
                             uVar4)) * 4);
    if (iVar5 != -1) {
      lVar7 = *(longlong *)(param_1 + 0x208);
      do {
        lVar8 = (longlong)iVar5 * 0x538;
        lVar6 = lVar7 + lVar8;
        if ((*(ulonglong *)(lVar7 + lVar8) == uVar1) && (*(ulonglong *)(lVar7 + 8 + lVar8) == uVar2)
           ) goto LAB_14711a877;
        iVar5 = *(int *)(lVar6 + 0x530);
      } while (iVar5 != -1);
    }
  }
  lVar6 = 0;
LAB_14711a877:
  return lVar6 + 0x10;
}



// FUNCTION 14711a87c FUN_14711a87c body=1451 status=ok
// SIG undefined FUN_14711a87c(void)

void FUN_14711a87c(longlong param_1)

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
  byte bVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  char cVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  double local_168;
  double local_160;
  double local_158;
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
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  puVar11 = *(undefined8 **)(param_1 + 0x20);
  iVar18 = (**(code **)*puVar11)(puVar11);
  puVar20 = (undefined8 *)0x0;
  if (iVar18 == 1) {
    puVar20 = puVar11;
  }
  puVar12 = *(undefined8 **)(param_1 + 0x30);
  puVar19 = (undefined8 *)0x0;
  if (puVar12 != (undefined8 *)0x0) {
    iVar18 = (**(code **)*puVar12)(puVar12);
    puVar19 = (undefined8 *)0x0;
    if (iVar18 == 1) {
      puVar19 = puVar12;
    }
  }
  if (puVar20 == (undefined8 *)0x0) {
    bVar10 = *(byte *)((longlong)puVar11 + 0x21);
    uVar29 = 0x3ff00000;
    uVar28 = uVar29;
    if ((bVar10 & 0x20) != 0) {
      uVar28 = 0;
    }
    uVar30 = uVar29;
    if ((bVar10 & 0x10) != 0) {
      uVar30 = 0;
    }
    if ((bVar10 & 8) != 0) {
      uVar29 = 0;
    }
    dVar3 = (double)((ulonglong)uVar28 << 0x20) * (double)puVar11[0x14];
    dVar2 = (double)((ulonglong)uVar30 << 0x20) * (double)puVar11[0x13];
    dVar1 = (double)((ulonglong)uVar29 << 0x20) * (double)puVar11[0x12];
  }
  else {
    lVar13 = puVar20[0x56];
    dVar1 = *(double *)(lVar13 + 0xf8);
    dVar2 = *(double *)(lVar13 + 0x100);
    dVar3 = *(double *)(lVar13 + 0x108);
  }
  if (puVar19 == (undefined8 *)0x0) {
    dVar24 = DAT_14c8464f0;
    dVar26 = DAT_14c8464e8;
    dVar27 = DAT_14c8464e0;
    if ((puVar12 != (undefined8 *)0x0) && (puVar12[1] != 0)) {
      bVar10 = *(byte *)((longlong)puVar12 + 0x21);
      uVar29 = 0x3ff00000;
      uVar28 = uVar29;
      if ((bVar10 & 0x20) != 0) {
        uVar28 = 0;
      }
      uVar30 = uVar29;
      if ((bVar10 & 0x10) != 0) {
        uVar30 = 0;
      }
      if ((bVar10 & 8) != 0) {
        uVar29 = 0;
      }
      dVar24 = (double)((ulonglong)uVar28 << 0x20) * (double)puVar12[0x14];
      dVar26 = (double)((ulonglong)uVar30 << 0x20) * (double)puVar12[0x13];
      dVar27 = (double)((ulonglong)uVar29 << 0x20) * (double)puVar12[0x12];
    }
  }
  else {
    lVar13 = puVar19[0x56];
    dVar24 = *(double *)(lVar13 + 0x108);
    dVar26 = *(double *)(lVar13 + 0x100);
    dVar27 = *(double *)(lVar13 + 0xf8);
  }
  if (puVar20 == (undefined8 *)0x0) {
    FUN_147101ec6(puVar11,&local_168);
  }
  else {
    FUN_140b8ccd6(puVar20[0x56],&local_168);
  }
  if (puVar19 == (undefined8 *)0x0) {
    if ((puVar12 == (undefined8 *)0x0) || (puVar12[1] == 0)) {
      local_178 = 0;
      uStack_170 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_198 = 0;
      uStack_190 = 0;
      FUN_147121ef0(&local_120,0,0,0);
    }
    else {
      FUN_147101ec6(puVar12);
    }
  }
  else {
    FUN_140b8ccd6(puVar19[0x56]);
  }
  dVar4 = *(double *)(param_1 + 0x50);
  dVar5 = *(double *)(param_1 + 0x48);
  dVar6 = *(double *)(param_1 + 0x40);
  dVar7 = *(double *)(param_1 + 0x58);
  dVar8 = *(double *)(param_1 + 0x60);
  dVar9 = *(double *)(param_1 + 0x68);
  dVar14 = DAT_14c8464f0;
  dVar16 = DAT_14c8464e0;
  dVar15 = DAT_14c8464e8;
  if (puVar12 != (undefined8 *)0x0) {
    cVar17 = FUN_144a7ee82(puVar12);
    dVar14 = DAT_14c8464f0;
    dVar15 = DAT_14c8464e8;
    dVar16 = DAT_14c8464e0;
    if (cVar17 == '\0') {
      dVar14 = dVar24 * *(double *)(param_1 + 0x80);
      dVar15 = dVar26 * *(double *)(param_1 + 0x78);
      dVar16 = dVar27 * *(double *)(param_1 + 0x70);
    }
    cVar17 = FUN_144a7ee82(puVar12);
    if (cVar17 == '\0') {
      dVar24 = *(double *)(param_1 + 0x88);
      dVar27 = *(double *)(param_1 + 0x90);
      uVar21 = SUB84(dVar27,0);
      uVar22 = (undefined4)((ulonglong)dVar27 >> 0x20);
      dVar26 = *(double *)(param_1 + 0x98);
      dVar23 = local_e0 * dVar26 + local_110 * dVar24 + local_f8 * dVar27;
      dVar25 = local_e8 * dVar26 + local_118 * dVar24 + local_100 * dVar27;
      dVar27 = local_f0 * dVar26 + local_120 * dVar24 + local_108 * dVar27;
      goto LAB_14711abac;
    }
  }
  dVar24 = *(double *)(param_1 + 0x88);
  uVar21 = (undefined4)*(undefined8 *)(param_1 + 0x90);
  uVar22 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x90) >> 0x20);
  dVar26 = *(double *)(param_1 + 0x98);
  dVar23 = DAT_14c8464f0;
  dVar25 = DAT_14c8464e8;
  dVar27 = DAT_14c8464e0;
LAB_14711abac:
  dVar1 = dVar14 * *(double *)(param_1 + 0x80) +
          dVar16 * *(double *)(param_1 + 0x70) + dVar15 * *(double *)(param_1 + 0x78) +
          (local_128 * dVar9 + local_158 * dVar7 + local_140 * dVar8) * *(double *)(param_1 + 0x68)
          + (dVar9 * local_138 + dVar7 * local_168 + dVar8 * local_150) *
            *(double *)(param_1 + 0x58) +
            (local_130 * dVar9 + local_160 * dVar7 + local_148 * dVar8) *
            *(double *)(param_1 + 0x60) +
          dVar3 * dVar4 * *(double *)(param_1 + 0x50) +
          dVar1 * dVar6 * *(double *)(param_1 + 0x40) + dVar2 * dVar5 * *(double *)(param_1 + 0x48)
          + (double)CONCAT44(uVar22,uVar21) * dVar25 + dVar24 * dVar27 + dVar26 * dVar23;
  uVar21 = 0;
  if (1.0000000168623835e-16 <= ABS(dVar1)) {
    dVar2 = (double)FUN_140b8cb78(0);
    uVar21 = SUB84((*(double *)(param_1 + 0x1d0) - dVar2) * (-1.0 / dVar1),0);
  }
  if ((local_d0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uVar21);
  }
  return;
}



// FUNCTION 14711ae28 FUN_14711ae28 body=4336 status=ok
// SIG undefined FUN_14711ae28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_14711ae28(int *param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  short sVar6;
  longlong lVar7;
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
  longlong lVar19;
  int iVar20;
  double *pdVar21;
  longlong lVar22;
  double *pdVar23;
  double *pdVar24;
  uint uVar25;
  double *pdVar26;
  longlong lVar27;
  bool bVar28;
  bool bVar29;
  ulonglong uVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar36 [16];
  double dVar38;
  undefined1 auVar37 [16];
  double dVar39;
  undefined1 auVar41 [16];
  double dVar40;
  double dVar46;
  double dVar47;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar53;
  double dVar54;
  double dVar55;
  undefined1 auStack_3a8 [40];
  double local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  double local_368;
  undefined8 uStack_360;
  double local_358;
  double dStack_350;
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  double local_328;
  double dStack_320;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178 [4];
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (*param_1 < 1) {
    local_380 = 0.0;
  }
  else {
    local_380 = 0.0;
    lVar27 = 0x298;
    lVar22 = 0;
    do {
      lVar7 = *(longlong *)(param_1 + 2);
      local_368 = *(double *)(lVar7 + -0x38 + lVar27);
      dVar1 = *(double *)(lVar7 + lVar27);
      uStack_360 = 0;
      dVar31 = *(double *)(lVar7 + -0x30 + lVar27) * local_368 + dVar1;
      dVar2 = *(double *)(lVar7 + -0x20 + lVar27);
      if (dVar2 <= dVar31) {
        dVar31 = dVar2;
      }
      dVar2 = *(double *)(lVar7 + -0x18 + lVar27);
      if (dVar31 <= dVar2) {
        dVar31 = dVar2;
      }
      *(double *)(lVar7 + lVar27) = dVar31;
      auVar50 = _DAT_149934d80;
      sVar6 = *(short *)((longlong)param_1 + 0x1a);
      bVar29 = true;
      bVar28 = true;
      if (*(short *)(lVar7 + -0x10 + lVar27) == sVar6) {
        bVar28 = *(short *)(lVar7 + -0xe + lVar27) == 1;
      }
      local_290 = -(dVar31 - dVar1);
      local_2d8 = (double)bVar28 * local_290;
      local_2c8 = *(double *)(lVar7 + -0x88 + lVar27) * local_2d8;
      local_2d0 = *(double *)(lVar7 + -0x90 + lVar27) * local_2d8;
      local_2d8 = local_2d8 * *(double *)(lVar7 + -0x98 + lVar27);
      if (*(short *)(lVar7 + -0x10 + lVar27) == sVar6) {
        bVar29 = *(short *)(lVar7 + -0xe + lVar27) == 1;
      }
      local_2c0 = (double)bVar29 * local_290;
      local_2b0 = *(double *)(lVar7 + -0x70 + lVar27) * local_2c0;
      local_2b8 = *(double *)(lVar7 + -0x78 + lVar27) * local_2c0;
      local_2c0 = local_2c0 * *(double *)(lVar7 + -0x80 + lVar27);
      bVar29 = true;
      bVar28 = true;
      if (*(short *)(lVar7 + -0x10 + lVar27) == sVar6) {
        bVar28 = *(short *)(lVar7 + -0xe + lVar27) == 0;
      }
      local_2a8 = (double)bVar28 * local_290;
      local_298 = *(double *)(lVar7 + -0x58 + lVar27) * local_2a8;
      local_2a0 = *(double *)(lVar7 + -0x60 + lVar27) * local_2a8;
      local_2a8 = local_2a8 * *(double *)(lVar7 + -0x68 + lVar27);
      if (*(short *)(lVar7 + -0x10 + lVar27) == sVar6) {
        bVar29 = *(short *)(lVar7 + -0xe + lVar27) == 0;
      }
      local_290 = local_290 * (double)bVar29;
      local_280 = *(double *)(lVar7 + -0x40 + lVar27) * local_290;
      local_288 = *(double *)(lVar7 + -0x48 + lVar27) * local_290;
      local_290 = local_290 * *(double *)(lVar7 + -0x50 + lVar27);
      pdVar21 = *(double **)(lVar7 + -0x238 + lVar27);
      pdVar23 = *(double **)(lVar7 + -0x230 + lVar27);
      local_328 = 0.0;
      dStack_320 = 0.0;
      local_338 = ZEXT816(0);
      local_308 = ZEXT816(0x3ff0000000000000);
      auVar36 = *(undefined1 (*) [16])(pdVar21 + 8);
      dVar1 = auVar36._0_8_;
      dVar31 = auVar36._8_8_;
      auVar3 = *(undefined1 (*) [16])(pdVar21 + 10);
      dVar2 = auVar3._0_8_;
      auVar4 = *(undefined1 (*) [16])(pdVar23 + 8);
      auVar5 = *(undefined1 (*) [16])(pdVar23 + 10);
      auVar36 = minpd(auVar4,auVar36);
      auVar41 = minpd(auVar5,auVar3);
      auVar43._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
      auVar43._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
      iVar20 = movmskpd((int)local_338,auVar43);
      auVar36._8_8_ = -(ulonglong)(auVar41._8_8_ < 0.0);
      auVar36._0_8_ = -(ulonglong)(auVar41._0_8_ < 0.0);
      uVar25 = movmskpd((int)param_3,auVar36);
      local_378 = 0;
      uStack_370 = 0x3ff0000000000000;
      if ((uVar25 & 0x3fffffff) == 0 && iVar20 == 0) {
        dVar11 = *pdVar23;
        dVar12 = pdVar23[1];
        dVar13 = pdVar23[2];
        dVar14 = pdVar23[3];
        dVar15 = *pdVar21;
        dVar16 = pdVar21[1];
        dVar17 = pdVar21[2];
        dVar18 = pdVar21[3];
        dVar35 = pdVar21[3];
        dVar47 = pdVar21[3];
        dVar40 = pdVar21[1];
        dVar49 = pdVar21[1];
        dVar38 = pdVar21[2];
        dVar39 = pdVar21[2];
        local_358 = dVar12 * dVar38 * -1.0 +
                    dVar13 * dVar40 + dVar14 * *pdVar21 * 1.0 + dVar11 * dVar35;
        dStack_350 = dVar11 * dVar39 * 1.0 +
                     dVar14 * dVar49 + dVar13 * *pdVar21 * -1.0 + dVar12 * dVar47;
        dVar55 = pdVar23[4] * dVar1;
        dVar54 = pdVar23[5] * dVar31;
        dVar8 = pdVar23[6] * dVar2;
        dVar9 = pdVar23[7] * auVar3._8_8_;
        dVar46 = dVar54 * dVar15 - dVar16 * dVar55;
        dVar10 = dVar8 * dVar16 - dVar17 * dVar54;
        dVar48 = dVar55 * dVar17 - dVar15 * dVar8;
        dVar53 = dVar9 * dVar18 - dVar18 * dVar9;
        dVar10 = dVar10 + dVar10;
        dVar48 = dVar48 + dVar48;
        dVar46 = dVar46 + dVar46;
        dVar53 = dVar53 + dVar53;
        dVar54 = (dVar10 * dVar17 - dVar46 * dVar15) + dVar47 * dVar48 + dVar54 + pdVar21[5];
        local_328 = (dVar48 * dVar15 - dVar16 * dVar10) + dVar35 * dVar46 + dVar8 + pdVar21[6];
        dStack_320 = (dVar53 * dVar18 - dVar53 * dVar18) + dVar47 * dVar53 + dVar9 + pdVar21[7];
        local_348._8_8_ =
             dVar13 * dVar39 * -1.0 +
             ((*pdVar21 * dVar11 * -1.0 + dVar14 * dVar47) - dVar12 * dVar49);
        local_348._0_8_ =
             dVar14 * dVar38 * 1.0 + ((*pdVar21 * dVar12 * 1.0 + dVar13 * dVar35) - dVar11 * dVar40)
        ;
        local_338._8_4_ = SUB84(dVar54,0);
        local_338._0_8_ =
             (dVar46 * dVar16 - dVar17 * dVar48) + dVar35 * dVar10 + dVar55 + pdVar21[4];
        local_338._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
      }
      else {
        dVar47 = *pdVar21;
        dVar49 = pdVar21[1];
        dVar40 = pdVar21[2];
        dVar38 = dVar49 + dVar49;
        dVar39 = dVar40 + dVar40;
        dVar35 = dVar47 * (dVar47 + dVar47);
        local_1f8 = (1.0 - (dVar40 * dVar39 + dVar49 * dVar38)) * dVar1;
        dStack_1d0 = (1.0 - (dVar40 * dVar39 + dVar35)) * dVar31;
        local_1a8 = (1.0 - (dVar35 + dVar49 * dVar38)) * dVar2;
        dVar35 = pdVar21[3];
        dVar40 = dVar39 * dVar35;
        dVar46 = (dVar47 + dVar47) * pdVar21[3];
        dVar35 = dVar38 * dVar35;
        dStack_1f0 = (dVar38 * dVar47 + dVar40) * dVar1;
        local_1c8 = (dVar39 * dVar49 + dVar46) * dVar31;
        local_1b8 = (dVar35 + *pdVar21 * dVar39) * dVar2;
        local_1d8 = (dVar38 * dVar47 - dVar40) * dVar31;
        dStack_1b0 = (dVar39 * dVar49 - dVar46) * dVar2;
        local_1e8 = (*pdVar21 * dVar39 - dVar35) * dVar1;
        uStack_1e0 = 0;
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = pdVar21[4];
        dStack_190 = pdVar21[5];
        local_188 = pdVar21[6];
        uStack_180 = 0x3ff0000000000000;
        dVar47 = *pdVar23;
        dVar49 = pdVar23[1];
        dVar40 = pdVar23[2];
        local_268 = pdVar23[8];
        local_258 = pdVar23[9];
        dStack_230 = pdVar23[10];
        dVar46 = dVar49 + dVar49;
        dVar38 = dVar40 + dVar40;
        dVar35 = dVar47 * (dVar47 + dVar47);
        local_278 = ((double)DAT_149934d80 - (dVar40 * dVar38 + dVar49 * dVar46)) * local_268;
        dStack_250 = (DAT_149934d80._8_8_ - (dVar40 * dVar38 + dVar35)) * local_258;
        local_228 = (1.0 - (dVar35 + dVar49 * dVar46)) * dStack_230;
        dVar35 = pdVar23[3];
        dVar40 = dVar38 * dVar35;
        dVar39 = (dVar47 + dVar47) * pdVar23[3];
        dVar35 = dVar46 * dVar35;
        dStack_270 = (dVar46 * dVar47 + dVar40) * local_268;
        local_248 = (dVar38 * dVar49 + dVar39) * local_258;
        local_238 = (dVar35 + *pdVar23 * dVar38) * dStack_230;
        local_268 = (*pdVar23 * dVar38 - dVar35) * local_268;
        local_258 = (dVar46 * dVar47 - dVar40) * local_258;
        dStack_230 = (dVar38 * dVar49 - dVar39) * dStack_230;
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        local_218 = pdVar23[4];
        dStack_210 = pdVar23[5];
        local_208 = pdVar23[6];
        uStack_200 = 0x3ff0000000000000;
        FUN_1447fea8d(local_178,&local_278,&local_1f8);
        FUN_144a1c686(local_178,0x3e45798ee0000000);
        auVar41._8_8_ = -(ulonglong)(0.0 <= auVar4._8_8_ * dVar31);
        auVar41._0_8_ = -(ulonglong)(0.0 <= auVar4._0_8_ * dVar1);
        auVar36 = blendvpd(_DAT_149936790,auVar50,auVar41);
        uVar30 = -(ulonglong)(0.0 <= auVar5._0_8_ * dVar2);
        dVar35 = (double)(~uVar30 & 0xbff0000000000000 | uVar30 & 0x3ff0000000000000);
        dVar47 = auVar36._0_8_;
        local_178[2] = local_178[2] * dVar47;
        local_178[1] = local_178[1] * dVar47;
        local_178[0] = local_178[0] * dVar47;
        dVar47 = auVar36._8_8_;
        local_148 = local_148 * dVar47;
        local_150 = local_150 * dVar47;
        local_158 = dVar47 * local_158;
        local_128 = local_128 * dVar35;
        local_130 = local_130 * dVar35;
        local_138 = dVar35 * local_138;
        FUN_14481fd10(&local_2f8,local_178);
        dVar35 = local_2e8 * local_2e8 + local_2f8 * local_2f8;
        dVar47 = dStack_2e0 * dStack_2e0 + dStack_2f0 * dStack_2f0;
        auVar42._0_8_ = dVar35 + dVar47;
        auVar42._8_8_ = dVar35 + dVar47;
        auVar32._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_);
        auVar32._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_);
        auVar36 = sqrtpd(auVar42,auVar42);
        auVar50 = divpd(auVar50,auVar36);
        auVar51._0_8_ = auVar50._0_8_ * local_2e8;
        auVar51._8_8_ = auVar50._8_8_ * dStack_2e0;
        local_358 = (double)((ulonglong)(local_2f8 * auVar50._0_8_) &
                            -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_));
        dStack_350 = (double)((ulonglong)(dStack_2f0 * auVar50._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_));
        local_348 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar51,auVar32);
        local_338._8_8_ = dStack_110;
        local_338._0_8_ = local_118;
        local_328 = local_108;
        dStack_320 = 0.0;
      }
      dVar35 = auVar5._8_8_ * auVar3._8_8_;
      dVar31 = auVar4._8_8_ * dVar31;
      local_318._8_4_ = SUB84(dVar31,0);
      local_318._0_8_ = auVar4._0_8_ * dVar1;
      local_318._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
      local_308._8_4_ = SUB84(dVar35,0);
      local_308._0_8_ = auVar5._0_8_ * dVar2;
      local_308._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
      FUN_147102246(&local_358,&local_2d8,&local_2c0);
      pdVar21 = local_178;
      pdVar26 = &local_358;
      FUN_144a2c3ca(*(undefined8 *)(lVar7 + -0x230 + lVar27));
      pdVar23 = local_178;
      pdVar24 = *(double **)(lVar7 + -0x238 + lVar27);
      for (lVar19 = 0xc; auVar50 = _DAT_149934d80, lVar19 != 0; lVar19 = lVar19 + -1) {
        *pdVar24 = *pdVar23;
        pdVar23 = pdVar23 + 1;
        pdVar24 = pdVar24 + 1;
      }
      pdVar23 = *(double **)(lVar7 + -0x168 + lVar27);
      pdVar24 = *(double **)(lVar7 + -0x160 + lVar27);
      auVar36 = *(undefined1 (*) [16])(pdVar23 + 8);
      dVar1 = auVar36._0_8_;
      dVar31 = auVar36._8_8_;
      auVar3 = *(undefined1 (*) [16])(pdVar23 + 10);
      dVar2 = auVar3._0_8_;
      auVar4 = *(undefined1 (*) [16])(pdVar24 + 8);
      auVar5 = *(undefined1 (*) [16])(pdVar24 + 10);
      auVar36 = minpd(auVar4,auVar36);
      auVar43 = minpd(auVar5,auVar3);
      auVar37._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
      auVar37._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
      iVar20 = movmskpd((int)pdVar21,auVar37);
      auVar44._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
      auVar44._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
      uVar25 = movmskpd((int)pdVar26,auVar44);
      if ((uVar25 & 0x3fffffff) == 0 && iVar20 == 0) {
        dVar46 = *pdVar24;
        dVar53 = pdVar24[1];
        dVar55 = pdVar24[2];
        dVar54 = pdVar24[3];
        dVar8 = *pdVar23;
        dVar9 = pdVar23[1];
        dVar10 = pdVar23[2];
        dVar48 = pdVar23[3];
        dVar47 = pdVar23[3];
        dVar35 = pdVar23[3];
        dVar40 = pdVar23[1];
        dVar49 = pdVar23[1];
        dVar38 = pdVar23[2];
        dVar39 = pdVar23[2];
        local_358 = dVar53 * dVar38 * -1.0 +
                    dVar55 * dVar40 + dVar54 * *pdVar23 * 1.0 + dVar46 * dVar47;
        dStack_350 = dVar46 * dVar39 * 1.0 +
                     dVar54 * dVar49 + dVar55 * *pdVar23 * -1.0 + dVar53 * dVar35;
        local_348._0_8_ =
             dVar54 * dVar38 * 1.0 + ((*pdVar23 * dVar53 * 1.0 + dVar55 * dVar47) - dVar46 * dVar40)
        ;
        local_348._8_8_ =
             dVar55 * dVar39 * -1.0 +
             ((*pdVar23 * dVar46 * -1.0 + dVar54 * dVar35) - dVar53 * dVar49);
        dVar38 = pdVar24[4] * dVar1;
        dVar39 = pdVar24[5] * dVar31;
        dVar46 = pdVar24[6] * dVar2;
        dVar53 = pdVar24[7] * auVar3._8_8_;
        dVar49 = dVar39 * dVar8 - dVar9 * dVar38;
        dVar54 = dVar46 * dVar9 - dVar10 * dVar39;
        dVar55 = dVar38 * dVar10 - dVar8 * dVar46;
        dVar40 = dVar53 * dVar48 - dVar48 * dVar53;
        dVar54 = dVar54 + dVar54;
        dVar55 = dVar55 + dVar55;
        dVar49 = dVar49 + dVar49;
        dVar40 = dVar40 + dVar40;
        local_338._0_8_ = (dVar49 * dVar9 - dVar10 * dVar55) + dVar47 * dVar54 + dVar38 + pdVar23[4]
        ;
        local_338._8_8_ = (dVar54 * dVar10 - dVar49 * dVar8) + dVar35 * dVar55 + dVar39 + pdVar23[5]
        ;
        local_328 = (dVar55 * dVar8 - dVar9 * dVar54) + dVar47 * dVar49 + dVar46 + pdVar23[6];
        dStack_320 = (dVar40 * dVar48 - dVar40 * dVar48) + dVar35 * dVar40 + dVar53 + pdVar23[7];
      }
      else {
        dVar47 = *pdVar23;
        dVar49 = pdVar23[1];
        dVar40 = pdVar23[2];
        dVar38 = dVar49 + dVar49;
        dVar39 = dVar40 + dVar40;
        dVar35 = dVar47 * (dVar47 + dVar47);
        local_1f8 = ((double)DAT_149934d80 - (dVar40 * dVar39 + dVar49 * dVar38)) * dVar1;
        dStack_1d0 = (DAT_149934d80._8_8_ - (dVar40 * dVar39 + dVar35)) * dVar31;
        local_1a8 = (1.0 - (dVar35 + dVar49 * dVar38)) * dVar2;
        dVar35 = pdVar23[3];
        dVar40 = dVar39 * dVar35;
        dVar46 = (dVar47 + dVar47) * pdVar23[3];
        dVar35 = dVar38 * dVar35;
        dStack_1f0 = (dVar38 * dVar47 + dVar40) * dVar1;
        local_1c8 = (dVar39 * dVar49 + dVar46) * dVar31;
        local_1b8 = (dVar35 + *pdVar23 * dVar39) * dVar2;
        local_1d8 = (dVar38 * dVar47 - dVar40) * dVar31;
        dStack_1b0 = (dVar39 * dVar49 - dVar46) * dVar2;
        local_1e8 = (*pdVar23 * dVar39 - dVar35) * dVar1;
        uStack_1e0 = 0;
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = pdVar23[4];
        dStack_190 = pdVar23[5];
        local_188 = pdVar23[6];
        uStack_180 = 0x3ff0000000000000;
        dVar47 = *pdVar24;
        dVar49 = pdVar24[1];
        dVar40 = pdVar24[2];
        local_268 = pdVar24[8];
        local_258 = pdVar24[9];
        dStack_230 = pdVar24[10];
        dVar46 = dVar49 + dVar49;
        dVar38 = dVar40 + dVar40;
        dVar35 = dVar47 * (dVar47 + dVar47);
        local_278 = ((double)DAT_149934d80 - (dVar40 * dVar38 + dVar49 * dVar46)) * local_268;
        dStack_250 = (DAT_149934d80._8_8_ - (dVar40 * dVar38 + dVar35)) * local_258;
        local_228 = (1.0 - (dVar35 + dVar49 * dVar46)) * dStack_230;
        dVar35 = pdVar24[3];
        dVar40 = dVar38 * dVar35;
        dVar39 = (dVar47 + dVar47) * pdVar24[3];
        dVar35 = dVar46 * dVar35;
        dStack_270 = (dVar46 * dVar47 + dVar40) * local_268;
        local_248 = (dVar38 * dVar49 + dVar39) * local_258;
        local_238 = (dVar35 + *pdVar24 * dVar38) * dStack_230;
        local_268 = (*pdVar24 * dVar38 - dVar35) * local_268;
        local_258 = (dVar46 * dVar47 - dVar40) * local_258;
        dStack_230 = (dVar38 * dVar49 - dVar39) * dStack_230;
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        local_218 = pdVar24[4];
        dStack_210 = pdVar24[5];
        local_208 = pdVar24[6];
        uStack_200 = 0x3ff0000000000000;
        FUN_1447fea8d(local_178,&local_278,&local_1f8);
        FUN_144a1c686(local_178,0x3e45798ee0000000);
        auVar33._8_8_ = -(ulonglong)(0.0 <= auVar4._8_8_ * dVar31);
        auVar33._0_8_ = -(ulonglong)(0.0 <= auVar4._0_8_ * dVar1);
        auVar36 = blendvpd(_DAT_149936790,auVar50,auVar33);
        uVar30 = -(ulonglong)(0.0 <= auVar5._0_8_ * dVar2);
        dVar35 = (double)(~uVar30 & 0xbff0000000000000 | uVar30 & 0x3ff0000000000000);
        dVar47 = auVar36._0_8_;
        local_178[2] = local_178[2] * dVar47;
        local_178[1] = local_178[1] * dVar47;
        local_178[0] = local_178[0] * dVar47;
        dVar47 = auVar36._8_8_;
        local_148 = local_148 * dVar47;
        local_150 = local_150 * dVar47;
        local_158 = dVar47 * local_158;
        local_128 = local_128 * dVar35;
        local_130 = local_130 * dVar35;
        local_138 = dVar35 * local_138;
        FUN_14481fd10(&local_2f8,local_178);
        dVar35 = local_2e8 * local_2e8 + local_2f8 * local_2f8;
        dVar47 = dStack_2e0 * dStack_2e0 + dStack_2f0 * dStack_2f0;
        auVar45._0_8_ = dVar35 + dVar47;
        auVar45._8_8_ = dVar35 + dVar47;
        auVar34._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_);
        auVar34._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_);
        auVar36 = sqrtpd(auVar45,auVar45);
        auVar50 = divpd(auVar50,auVar36);
        auVar52._0_8_ = auVar50._0_8_ * local_2e8;
        auVar52._8_8_ = auVar50._8_8_ * dStack_2e0;
        local_358 = (double)((ulonglong)(local_2f8 * auVar50._0_8_) &
                            -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_));
        dStack_350 = (double)((ulonglong)(dStack_2f0 * auVar50._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_));
        auVar50._8_8_ = uStack_370;
        auVar50._0_8_ = local_378;
        local_348 = blendvpd(auVar50,auVar52,auVar34);
        dStack_320 = 0.0;
        local_328 = local_108;
        local_338._0_8_ = local_118;
        local_338._8_8_ = dStack_110;
      }
      dVar35 = auVar5._8_8_ * auVar3._8_8_;
      dVar31 = auVar4._8_8_ * dVar31;
      local_380 = local_380 + ABS(local_368);
      local_318._8_4_ = SUB84(dVar31,0);
      local_318._0_8_ = auVar4._0_8_ * dVar1;
      local_318._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
      local_308._8_4_ = SUB84(dVar35,0);
      local_308._0_8_ = auVar5._0_8_ * dVar2;
      local_308._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
      FUN_147102246(&local_358,&local_2a8,&local_290);
      param_3 = &local_358;
      FUN_144a2c3ca(*(undefined8 *)(lVar7 + -0x160 + lVar27),local_178);
      pdVar21 = local_178;
      pdVar23 = *(double **)(lVar7 + -0x168 + lVar27);
      for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
        *pdVar23 = *pdVar21;
        pdVar21 = pdVar21 + 1;
        pdVar23 = pdVar23 + 1;
      }
      lVar22 = lVar22 + 1;
      lVar27 = lVar27 + 0x2a0;
    } while (lVar22 < *param_1);
  }
  if ((local_f0 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_380;
}



// FUNCTION 14711bf1a FUN_14711bf1a body=209 status=ok
// SIG undefined FUN_14711bf1a(void)

void FUN_14711bf1a(int *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  short sVar6;
  longlong lVar7;
  
  sVar6 = 0;
  if (*(short *)((longlong)param_1 + 0x1a) < (short)param_1[6]) {
    sVar6 = *(short *)((longlong)param_1 + 0x1a) + 1;
  }
  *(short *)((longlong)param_1 + 0x1a) = sVar6;
  lVar4 = (longlong)param_1[7];
  iVar5 = param_1[8];
  if (param_1[7] < iVar5) {
    lVar7 = lVar4 * 0x2a0 + 0x290;
    do {
      lVar2 = *(longlong *)(param_1 + 2);
      uVar1 = *(undefined8 *)(lVar2 + -0x28 + lVar7);
      *(undefined8 *)(lVar2 + -0x28 + lVar7) = *(undefined8 *)(lVar2 + lVar7);
      *(undefined8 *)(lVar2 + lVar7) = uVar1;
      lVar4 = lVar4 + 1;
      iVar5 = param_1[8];
      lVar7 = lVar7 + 0x2a0;
    } while (lVar4 < iVar5);
  }
  if (iVar5 == *param_1) {
    param_1[8] = 0;
    iVar5 = 0;
  }
  iVar3 = iVar5;
  if (iVar5 < *param_1) {
    lVar4 = (longlong)iVar5;
    lVar7 = lVar4 * 0x2a0 + 0x290;
    do {
      lVar2 = *(longlong *)(param_1 + 2);
      if (*(short *)(lVar2 + -8 + lVar7) != *(short *)((longlong)param_1 + 0x1a)) break;
      uVar1 = *(undefined8 *)(lVar2 + -0x28 + lVar7);
      *(undefined8 *)(lVar2 + -0x28 + lVar7) = *(undefined8 *)(lVar2 + lVar7);
      *(undefined8 *)(lVar2 + lVar7) = uVar1;
      lVar4 = lVar4 + 1;
      lVar7 = lVar7 + 0x2a0;
    } while (lVar4 < *param_1);
    iVar5 = param_1[8];
    iVar3 = (int)lVar4;
  }
  param_1[7] = iVar5;
  param_1[8] = iVar3;
  return;
}



// FUNCTION 14711bfec FUN_14711bfec body=547 status=ok
// SIG undefined FUN_14711bfec(void)

void FUN_14711bfec(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  bool bVar18;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  undefined1 local_158 [216];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  puVar16 = (undefined8 *)(param_1 + 0x40);
  puVar17 = (undefined8 *)(param_2 + 0x1a0);
  for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
    *puVar17 = *puVar16;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
  }
  local_160 = *(longlong *)(param_1 + 0x20);
  lVar13 = *(longlong *)(param_1 + 0x30);
  lVar15 = 0;
  lVar12 = local_160;
  bVar11 = true;
  local_168 = param_1;
  do {
    bVar18 = bVar11;
    if (lVar12 == 0) {
      lVar12 = lVar15 * 0xd0;
      puVar16 = &DAT_14c846480;
      puVar17 = (undefined8 *)(param_2 + lVar12);
      for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
        *puVar17 = *puVar16;
        puVar16 = puVar16 + 1;
        puVar17 = puVar17 + 1;
      }
      *(undefined8 **)(param_2 + 0x60 + lVar12) = &DAT_14c9abcc0;
      *(undefined8 **)(param_2 + 0x68 + lVar12) = &DAT_14c9abcc0;
      uVar3 = DAT_14c8464e8;
      puVar16 = (undefined8 *)(param_2 + 0x70 + lVar12);
      *puVar16 = DAT_14c8464e0;
      puVar16[1] = uVar3;
      *(undefined8 *)(param_2 + 0x80 + lVar12) = DAT_14c8464f0;
      puVar16 = (undefined8 *)(param_2 + 0x88 + lVar12);
      *puVar16 = 0;
      puVar16[1] = 0;
      puVar16 = (undefined8 *)(param_2 + 0x98 + lVar12);
      *puVar16 = 0;
      puVar16[1] = 0;
      puVar16 = (undefined8 *)(param_2 + 0xa8 + lVar12);
      *puVar16 = 0;
      puVar16[1] = 0;
      puVar16 = (undefined8 *)(param_2 + 0xb8 + lVar12);
      *puVar16 = 0;
      puVar16[1] = 0;
      *(undefined8 *)(param_2 + 200 + lVar12) = 0;
      puVar2 = (undefined4 *)(param_1 + 0x100 + lVar15 * 0x20);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar16 = (undefined8 *)(param_1 + 0x110 + lVar15 * 0x20);
      uVar7 = *puVar16;
      uVar8 = puVar16[1];
      puVar16 = (undefined8 *)(param_1 + 0x140 + lVar15 * 0x18);
      uVar9 = *puVar16;
      uVar10 = puVar16[1];
      uVar3 = *(undefined8 *)(param_1 + 0x150 + lVar15 * 0x18);
      puVar1 = (undefined4 *)(param_2 + lVar12);
      *puVar1 = *puVar2;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      puVar16 = (undefined8 *)(param_2 + 0x10 + lVar12);
      *puVar16 = uVar7;
      puVar16[1] = uVar8;
      puVar16 = (undefined8 *)(param_2 + 0x20 + lVar12);
      *puVar16 = uVar9;
      puVar16[1] = uVar10;
      puVar16 = (undefined8 *)(param_2 + 0x30 + lVar12);
      *puVar16 = uVar3;
      puVar16[1] = 0;
      puVar16 = (undefined8 *)(param_2 + 0x40 + lVar12);
      *puVar16 = 0x3ff0000000000000;
      puVar16[1] = 0x3ff0000000000000;
      puVar16 = (undefined8 *)(param_2 + 0x50 + lVar12);
      *puVar16 = 0x3ff0000000000000;
      puVar16[1] = 0;
    }
    else {
      FUN_14481f014(local_158,lVar12,(int)*(undefined8 *)(local_168 + 0x230 + lVar15 * 8),1);
      memcpy((void *)(lVar15 * 0xd0 + param_2),local_158,0xd0);
    }
    lVar15 = 1;
    lVar12 = lVar13;
    bVar11 = false;
  } while (bVar18);
  uVar3 = FUN_1471176da(local_168);
  *(undefined8 *)(param_2 + 0x260) = uVar3;
  *(undefined8 *)(param_2 + 0x298) = 0;
  FUN_140272182(local_160,lVar13,param_2,0xffffffff);
  FUN_14491be5a(param_2);
  if ((local_80 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14711c210 FUN_14711c210 body=379 status=ok
// SIG undefined FUN_14711c210(void)

void FUN_14711c210(longlong param_1)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  double dVar4;
  
  dVar1 = *(double *)(param_1 + 0x298);
  dVar4 = *(double *)(param_1 + 0x260) * *(double *)(param_1 + 0x268) + dVar1;
  if (*(double *)(param_1 + 0x278) <= dVar4) {
    dVar4 = *(double *)(param_1 + 0x278);
  }
  if (dVar4 <= *(double *)(param_1 + 0x280)) {
    dVar4 = *(double *)(param_1 + 0x280);
  }
  *(double *)(param_1 + 0x298) = dVar4;
  dVar4 = dVar4 - dVar1;
  dVar1 = *(double *)(param_1 + 0x210);
  dVar2 = *(double *)(param_1 + 0x208);
  pdVar3 = *(double **)(param_1 + 0x60);
  *pdVar3 = *pdVar3 - *(double *)(param_1 + 0x200) * dVar4;
  pdVar3[1] = pdVar3[1] - dVar2 * dVar4;
  pdVar3[2] = pdVar3[2] - dVar1 * dVar4;
  dVar1 = *(double *)(param_1 + 0x228);
  dVar2 = *(double *)(param_1 + 0x220);
  pdVar3 = *(double **)(param_1 + 0x68);
  *pdVar3 = *pdVar3 - *(double *)(param_1 + 0x218) * dVar4;
  pdVar3[1] = pdVar3[1] - dVar2 * dVar4;
  pdVar3[2] = pdVar3[2] - dVar1 * dVar4;
  dVar1 = *(double *)(param_1 + 0x240);
  dVar2 = *(double *)(param_1 + 0x238);
  pdVar3 = *(double **)(param_1 + 0x130);
  *pdVar3 = *pdVar3 - *(double *)(param_1 + 0x230) * dVar4;
  pdVar3[1] = pdVar3[1] - dVar2 * dVar4;
  pdVar3[2] = pdVar3[2] - dVar1 * dVar4;
  dVar1 = *(double *)(param_1 + 600);
  dVar2 = *(double *)(param_1 + 0x250);
  pdVar3 = *(double **)(param_1 + 0x138);
  *pdVar3 = *pdVar3 - dVar4 * *(double *)(param_1 + 0x248);
  pdVar3[1] = pdVar3[1] - dVar2 * dVar4;
  pdVar3[2] = pdVar3[2] - dVar1 * dVar4;
  return;
}



// FUNCTION 14711c38c FUN_14711c38c body=2210 status=ok
// SIG undefined FUN_14711c38c(void)

void FUN_14711c38c(double *param_1,void *param_2)

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
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  void *pvVar15;
  bool bVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  double *pdVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  double *pdVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  bool bVar29;
  longlong lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auStack_298 [40];
  undefined8 *local_270;
  double *local_268;
  void *local_260;
  undefined8 *local_258;
  undefined8 *local_250;
  double *local_248;
  double local_240 [9];
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  undefined8 local_1c8 [4];
  double local_1a8;
  double local_1a0;
  double local_198;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  dVar35 = param_1[0x13];
  if (dVar35 == 0.0) {
    dVar1 = param_1[0xc];
    dVar31 = param_1[0xd];
    dVar32 = param_1[0xe];
    dVar37 = *param_1;
    dVar38 = param_1[1];
    dVar35 = param_1[2];
  }
  else {
    dVar9 = *(double *)((longlong)dVar35 + 0x130);
    dVar10 = *(double *)((longlong)dVar35 + 0x138);
    dVar36 = *(double *)((longlong)dVar35 + 0x140);
    dVar1 = param_1[0xc];
    dVar31 = param_1[0xd];
    dVar32 = param_1[0xe];
    dVar37 = *(double *)((longlong)dVar35 + 0x138);
    dVar33 = dVar37 * dVar32 - dVar31 * dVar36;
    dVar33 = dVar33 + dVar33;
    dVar2 = *(double *)((longlong)dVar35 + 0x148);
    dVar3 = dVar9 * dVar31 - dVar1 * dVar37;
    dVar3 = dVar3 + dVar3;
    dVar38 = dVar36 * dVar1 - dVar32 * dVar9;
    dVar38 = dVar38 + dVar38;
    dVar32 = (dVar9 * dVar38 - dVar33 * dVar37) + dVar2 * dVar3 + dVar32;
    dVar5 = *param_1 * *(double *)((longlong)dVar35 + 0x170);
    dVar6 = param_1[1] * *(double *)((longlong)dVar35 + 0x178);
    dVar4 = param_1[2] * *(double *)((longlong)dVar35 + 0x180);
    dVar34 = dVar6 * dVar9 - dVar10 * dVar5;
    dVar7 = dVar4 * dVar10 - dVar36 * dVar6;
    dVar8 = dVar5 * dVar36 - dVar9 * dVar4;
    dVar7 = dVar7 + dVar7;
    dVar8 = dVar8 + dVar8;
    dVar34 = dVar34 + dVar34;
    dVar31 = (dVar36 * dVar33 - dVar3 * dVar9) + dVar2 * dVar38 + dVar31;
    dVar1 = (dVar37 * dVar3 - dVar38 * dVar36) + dVar2 * dVar33 + dVar1;
    dVar37 = (dVar34 * dVar10 - dVar8 * dVar36) + dVar2 * dVar7 + dVar5 +
             *(double *)((longlong)dVar35 + 0x150);
    dVar38 = (dVar36 * dVar7 - dVar9 * dVar34) +
             *(double *)((longlong)dVar35 + 0x148) * dVar8 + dVar6 +
             *(double *)((longlong)dVar35 + 0x158);
    dVar35 = dVar34 * dVar2 + dVar4 + (dVar8 * dVar9 - dVar7 * dVar10) +
             *(double *)((longlong)dVar35 + 0x160);
  }
  dVar2 = param_1[0x14];
  if (dVar2 == 0.0) {
    dVar3 = param_1[3];
    dVar4 = param_1[4];
    dVar2 = param_1[5];
  }
  else {
    dVar3 = param_1[3] * *(double *)((longlong)dVar2 + 0x170);
    dVar4 = param_1[4] * *(double *)((longlong)dVar2 + 0x178);
    dVar36 = param_1[5] * *(double *)((longlong)dVar2 + 0x180);
    dVar8 = *(double *)((longlong)dVar2 + 0x130);
    dVar9 = *(double *)((longlong)dVar2 + 0x138);
    dVar10 = *(double *)((longlong)dVar2 + 0x140);
    dVar5 = *(double *)((longlong)dVar2 + 0x148);
    dVar6 = dVar4 * dVar8 - dVar3 * dVar9;
    dVar34 = dVar36 * dVar9 - dVar4 * dVar10;
    dVar7 = dVar3 * dVar10 - dVar8 * dVar36;
    dVar34 = dVar34 + dVar34;
    dVar7 = dVar7 + dVar7;
    dVar6 = dVar6 + dVar6;
    dVar3 = (dVar6 * dVar9 - dVar7 * dVar10) + dVar5 * dVar34 + dVar3 +
            *(double *)((longlong)dVar2 + 0x150);
    dVar4 = (dVar10 * dVar34 - dVar8 * dVar6) + *(double *)((longlong)dVar2 + 0x148) * dVar7 + dVar4
            + *(double *)((longlong)dVar2 + 0x158);
    dVar2 = dVar6 * dVar5 + dVar36 + (dVar7 * dVar8 - dVar34 * dVar9) +
            *(double *)((longlong)dVar2 + 0x160);
  }
  dVar31 = dVar31 * (dVar38 - dVar4);
  *(double *)((longlong)param_2 + 0x260) =
       ((dVar37 - dVar3) * dVar1 + dVar31 + (dVar35 - dVar2) * dVar32) - (double)DAT_14c75f91c;
  puVar22 = (undefined8 *)param_1[0x13];
  puVar25 = (undefined8 *)param_1[0x14];
  local_270 = puVar25;
  if (puVar25 < puVar22) {
    local_270 = puVar22;
  }
  if (puVar22 < puVar25) {
    puVar25 = puVar22;
  }
  FUN_14481f014(local_1c8,dVar31,0x3ff0000000000000,1);
  memcpy(param_2,local_1c8,0xd0);
  if (puVar25 == (undefined8 *)0x0) {
    puVar24 = &DAT_14c846480;
    puVar28 = (undefined8 *)((longlong)param_2 + 0xd0);
    for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
      *puVar28 = *puVar24;
      puVar24 = puVar24 + 1;
      puVar28 = puVar28 + 1;
    }
    *(undefined8 **)((longlong)param_2 + 0x130) = &DAT_14c9abcc0;
    *(undefined8 **)((longlong)param_2 + 0x138) = &DAT_14c9abcc0;
    uVar14 = DAT_14c8464e8;
    *(undefined8 *)((longlong)param_2 + 0x140) = DAT_14c8464e0;
    *(undefined8 *)((longlong)param_2 + 0x148) = uVar14;
    *(undefined8 *)((longlong)param_2 + 0x150) = DAT_14c8464f0;
    *(undefined8 *)((longlong)param_2 + 0x158) = 0;
    *(undefined8 *)((longlong)param_2 + 0x160) = 0;
    *(undefined8 *)((longlong)param_2 + 0x168) = 0;
    *(undefined8 *)((longlong)param_2 + 0x170) = 0;
    *(undefined8 *)((longlong)param_2 + 0x178) = 0;
    *(undefined8 *)((longlong)param_2 + 0x180) = 0;
    *(undefined8 *)((longlong)param_2 + 0x188) = 0;
    *(undefined8 *)((longlong)param_2 + 400) = 0;
    *(undefined8 *)((longlong)param_2 + 0x198) = 0;
  }
  else {
    FUN_14481f014(local_1c8,puVar25,0x3ff0000000000000,1);
    memcpy((void *)((longlong)param_2 + 0xd0),local_1c8,0xd0);
  }
  puVar24 = local_270;
  local_260 = param_2;
  iVar17 = (**(code **)*local_270)(local_270);
  local_258 = (undefined8 *)0x0;
  puVar28 = (undefined8 *)0x0;
  if (iVar17 == 1) {
    puVar28 = puVar24;
  }
  if (puVar25 != (undefined8 *)0x0) {
    iVar17 = (**(code **)*puVar25)();
    local_258 = (undefined8 *)0x0;
    if (iVar17 == 1) {
      local_258 = puVar25;
    }
  }
  uVar21 = (ulonglong)(local_270 != puVar22);
  local_248 = param_1 + 0x1b;
  pdVar23 = &local_1f8;
  uVar27 = 0;
  bVar16 = true;
  local_268 = param_1;
  local_250 = puVar22;
  do {
    bVar29 = bVar16;
    if (puVar28 == (undefined8 *)0x0) {
      pdVar23[2] = local_248[(ulonglong)(uVar27 != uVar21) * 3 + 2];
      pdVar26 = local_248 + (ulonglong)(uVar27 != uVar21) * 3;
      uVar11 = *(undefined4 *)((longlong)pdVar26 + 4);
      uVar12 = *(undefined4 *)(pdVar26 + 1);
      uVar13 = *(undefined4 *)((longlong)pdVar26 + 0xc);
      *(undefined4 *)pdVar23 = *(undefined4 *)pdVar26;
      *(undefined4 *)((longlong)pdVar23 + 4) = uVar11;
      *(undefined4 *)(pdVar23 + 1) = uVar12;
      *(undefined4 *)((longlong)pdVar23 + 0xc) = uVar13;
    }
    else {
      lVar20 = puVar28[0x56];
      if (*(int *)(lVar20 + 0x10) < 1) {
        lVar30 = 0;
      }
      else {
        lVar30 = **(longlong **)(lVar20 + 8);
      }
      FUN_144941734(lVar30,local_1c8);
      FUN_1402724f4(local_268,local_240,uVar27 != uVar21);
      *pdVar23 = local_240[0] - local_1a8;
      pdVar23[1] = local_240[1] - local_1a0;
      pdVar23[2] = local_240[2] - local_198;
      lVar18 = uVar27 * 0xd0;
      puVar22 = local_1c8;
      puVar25 = (undefined8 *)((longlong)local_260 + lVar18);
      for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
        *puVar25 = *puVar22;
        puVar22 = puVar22 + 1;
        puVar25 = puVar25 + 1;
      }
      pdVar26 = (double *)((longlong)local_260 + lVar18 + 0x88);
      *(longlong *)((longlong)local_260 + lVar18 + 0x60) = lVar30 + 0xf0;
      *(longlong *)((longlong)local_260 + lVar18 + 0x68) = lVar30 + 0xd8;
      uVar11 = *(undefined4 *)(lVar20 + 0xfc);
      uVar12 = *(undefined4 *)(lVar20 + 0x100);
      uVar13 = *(undefined4 *)(lVar20 + 0x104);
      *(undefined4 *)((longlong)local_260 + lVar18 + 0x70) = *(undefined4 *)(lVar20 + 0xf8);
      *(undefined4 *)((longlong)local_260 + lVar18 + 0x74) = uVar11;
      *(undefined4 *)((longlong)local_260 + lVar18 + 0x78) = uVar12;
      *(undefined4 *)((longlong)local_260 + lVar18 + 0x7c) = uVar13;
      *(undefined8 *)((longlong)local_260 + lVar18 + 0x80) = *(undefined8 *)(lVar20 + 0x108);
      FUN_140b8ccd6(lVar20,local_240);
      pdVar23 = local_240;
      for (lVar20 = 9; lVar20 != 0; lVar20 = lVar20 + -1) {
        *pdVar26 = *pdVar23;
        pdVar23 = pdVar23 + 1;
        pdVar26 = pdVar26 + 1;
      }
    }
    pvVar15 = local_260;
    uVar27 = 1;
    pdVar23 = &local_1e0;
    puVar28 = local_258;
    bVar16 = false;
  } while (bVar29);
  uVar27 = (ulonglong)(local_270 == local_250);
  dVar35 = local_268[uVar21 * 3 + 0x17];
  dVar1 = local_268[uVar21 * 3 + 0x15];
  dVar31 = local_268[uVar21 * 3 + 0x16];
  dVar32 = (local_268 + uVar21 * 3 + 0x15)[1];
  *(double *)((longlong)local_260 + 0x1a0) = -local_268[uVar21 * 3 + 0x15];
  *(double *)((longlong)local_260 + 0x1a8) = -dVar32;
  *(double *)((longlong)local_260 + 0x1b0) = -dVar35;
  *(double *)((longlong)local_260 + 0x1b8) = dVar31 * local_1e8 - local_1f0 * dVar35;
  *(double *)((longlong)local_260 + 0x1c0) = dVar35 * local_1f8 - dVar1 * local_1e8;
  *(double *)((longlong)local_260 + 0x1c8) = dVar1 * local_1f0 - local_1f8 * dVar31;
  dVar35 = local_268[uVar27 * 3 + 0x17];
  dVar1 = local_268[uVar27 * 3 + 0x15];
  dVar31 = local_268[uVar27 * 3 + 0x16];
  dVar32 = (local_268 + uVar27 * 3 + 0x15)[1];
  *(double *)((longlong)local_260 + 0x1d0) = -local_268[uVar27 * 3 + 0x15];
  *(double *)((longlong)local_260 + 0x1d8) = -dVar32;
  *(double *)((longlong)local_260 + 0x1e0) = -dVar35;
  *(double *)((longlong)local_260 + 0x1e8) = dVar31 * local_1d0 - dStack_1d8 * dVar35;
  *(double *)((longlong)local_260 + 0x1f0) = dVar35 * local_1e0 - dVar1 * local_1d0;
  *(double *)((longlong)local_260 + 0x1f8) = dVar1 * dStack_1d8 - local_1e0 * dVar31;
  FUN_14491be5a(local_260);
  *(undefined8 *)((longlong)pvVar15 + 0x280) = 0xc7efffffe0000000;
  *(undefined8 *)((longlong)pvVar15 + 0x270) = 0;
  *(undefined8 *)((longlong)pvVar15 + 0x278) = 0;
  if ((local_f0 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14711cc30 FUN_14711cc30 body=298 status=ok
// SIG undefined FUN_14711cc30(void)

void FUN_14711cc30(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  int *local_78;
  int *local_70;
  undefined1 local_68;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = (int)param_3[1];
  local_70 = &local_58;
  local_78 = &local_54;
  local_68 = 0;
  FUN_142b6b300(param_1,param_2,&local_4c,&local_50);
  iVar3 = ((local_58 - local_54) + 1) * ((local_50 - local_4c) + 1);
  iVar6 = iVar1 + iVar3 * 2;
  uVar2 = iVar3 * 2;
  *(int *)(param_3 + 1) = iVar6;
  if ((uint)(*(int *)((longlong)param_3 + 0xc) - iVar1) < uVar2) {
    FUN_14576c464(param_3,iVar1);
  }
  iVar3 = FUN_142b6b4da(param_1,param_2,(longlong)iVar1 * 0x98 + *param_3);
  iVar5 = uVar2 - iVar3;
  if (iVar5 == 0) {
    if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  iVar4 = (int)param_3[1];
  iVar6 = iVar4 - iVar6;
  if (iVar5 < iVar6) {
    iVar6 = iVar5;
  }
  if (iVar6 != 0) {
    memmove((void *)((longlong)(iVar3 + iVar1) * 0x98 + *param_3),
            (void *)((longlong)(iVar4 - iVar6) * 0x98 + *param_3),(longlong)iVar6 * 0x98);
    iVar4 = (int)param_3[1];
  }
  *(int *)(param_3 + 1) = iVar4 - iVar5;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
}



// FUNCTION 14711cd74 FUN_14711cd74 body=435 status=ok
// SIG undefined FUN_14711cd74(void)

void FUN_14711cd74(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_c8 [32];
  int *local_a8;
  int *local_a0;
  undefined1 local_98;
  int local_8c;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = &local_58;
  local_a8 = &local_54;
  local_98 = 0;
  FUN_142b6b300(param_1,param_2,&local_4c,&local_50);
  local_80 = (longlong)local_58;
  local_8c = local_58 - local_54;
  local_88 = (longlong)local_4c;
  iVar4 = (local_50 - local_4c) * local_8c;
  lVar11 = (longlong)(iVar4 * 2);
  lVar5 = -1;
  if (-1 < iVar4) {
    lVar5 = lVar11 * 8 + (ulonglong)(lVar11 * 8 == 0);
  }
  lVar5 = FUN_14001cc68(lVar5,0x10);
  lVar11 = FUN_14001cc68(lVar11 + (ulonglong)(lVar11 == 0),0x10);
  iVar4 = local_50 - local_4c;
  if (iVar4 != 0 && local_4c <= local_50) {
    local_78 = local_80 - local_54;
    iVar7 = 0;
    lVar8 = local_88;
    do {
      if (local_54 < (int)local_80) {
        lVar2 = *(longlong *)(param_1 + 0x70);
        lVar3 = *(longlong *)(param_1 + 0x78);
        iVar1 = *(int *)(param_1 + 0x80);
        lVar10 = (longlong)local_54 * (longlong)iVar1 + lVar8;
        lVar6 = local_78;
        iVar9 = iVar7;
        do {
          *(undefined8 *)(lVar5 + (longlong)iVar9 * 8) = *(undefined8 *)(lVar2 + lVar10 * 8);
          *(undefined1 *)(lVar11 + iVar9) = *(undefined1 *)(lVar3 + lVar10);
          iVar9 = iVar9 + iVar4;
          lVar10 = lVar10 + iVar1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      lVar8 = lVar8 + 1;
      iVar7 = iVar7 + 1;
    } while (lVar8 != local_50);
  }
  FUN_144b0c810(param_1,&local_70,local_54,local_88);
  *(undefined4 *)(param_1 + 0x10) = local_70;
  *(undefined4 *)(param_1 + 0x14) = uStack_6c;
  *(undefined4 *)(param_1 + 0x18) = uStack_68;
  *(undefined4 *)(param_1 + 0x1c) = uStack_64;
  *(int *)(param_1 + 0x80) = iVar4;
  *(int *)(param_1 + 0x84) = local_8c;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  *(longlong *)(param_1 + 0x70) = lVar5;
  *(longlong *)(param_1 + 0x78) = lVar11;
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14711cf28 FUN_14711cf28 body=194 status=ok
// SIG undefined FUN_14711cf28(void)

undefined8
FUN_14711cf28(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,char param_5
             )

{
  longlong lVar1;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_5 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x10);
  }
  else {
    lVar1 = *(int *)(param_1 + 0x10) + param_1;
  }
  FUN_144b0bd4e(local_58,lVar1,*(undefined4 *)(param_1 + 0x18));
  local_b8 = *(undefined8 *)(param_1 + 0x40);
  uStack_b0 = *(undefined8 *)(param_1 + 0x48);
  local_a8 = *(undefined8 *)(param_1 + 0x50);
  uStack_a0 = *(undefined8 *)(param_1 + 0x58);
  local_98 = *(undefined8 *)(param_1 + 0x20);
  uStack_90 = *(undefined8 *)(param_1 + 0x28);
  local_88 = *(undefined8 *)(param_1 + 0x30);
  uStack_80 = 0;
  local_78 = 0x3ff0000000000000;
  uStack_70 = 0x3ff0000000000000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  FUN_144a1c3a2(local_58,param_2);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14711cfec FUN_14711cfec body=2106 status=ok
// SIG undefined FUN_14711cfec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14711cfec(longlong param_1,double *param_2,double *param_3,double param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_298 [32];
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  lVar4 = param_1 + 0x28;
  uVar1 = FUN_144a7484c(lVar4,&local_158);
  auVar20 = _DAT_149934d80;
  dVar10 = param_4 * *(double *)(param_1 + 0x10);
  dVar11 = param_4 * *(double *)(param_1 + 0x18);
  dVar6 = *(double *)(param_1 + 0x20) * param_4;
  auVar17 = *(undefined1 (*) [16])(param_3 + 8);
  dVar8 = auVar17._0_8_;
  dVar15 = auVar17._8_8_;
  dVar7 = SUB168(*(undefined1 (*) [16])(param_3 + 10),0);
  auVar17 = minpd(_DAT_149934d80,auVar17);
  auVar22 = minpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(param_3 + 10));
  auVar18._8_8_ = -(ulonglong)(auVar17._8_8_ < 0.0);
  auVar18._0_8_ = -(ulonglong)(auVar17._0_8_ < 0.0);
  iVar2 = movmskpd(uVar1,auVar18);
  auVar17._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
  auVar17._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
  uVar3 = movmskpd((int)lVar4,auVar17);
  if ((uVar3 & 0x3fffffff) == 0 && iVar2 == 0) {
    dVar27 = *param_3;
    dVar28 = param_3[1];
    dVar24 = param_3[3];
    dVar21 = param_3[3];
    dVar26 = param_3[1];
    dVar14 = param_3[1];
    dVar29 = param_3[2];
    dVar25 = param_3[2];
    dVar13 = param_3[2];
    dVar16 = dStack_150 * dVar25 * -1.0 +
             local_148 * dVar26 + dStack_140 * *param_3 * 1.0 + local_158 * dVar24;
    dVar19 = local_158 * dVar13 * 1.0 +
             dStack_140 * dVar14 + local_148 * *param_3 * -1.0 + dStack_150 * dVar21;
    auVar20._0_8_ =
         dStack_140 * dVar25 * 1.0 +
         ((*param_3 * dStack_150 * 1.0 + local_148 * dVar24) - local_158 * dVar26);
    auVar20._8_8_ =
         local_148 * dVar13 * -1.0 +
         ((*param_3 * local_158 * -1.0 + dStack_140 * dVar21) - dStack_150 * dVar14);
    dVar10 = dVar10 * dVar8;
    dVar11 = dVar11 * dVar15;
    dVar6 = dVar6 * dVar7;
    dVar26 = dVar11 * dVar27 - dVar10 * dVar28;
    dVar13 = dVar6 * dVar28 - dVar11 * dVar29;
    dVar14 = dVar10 * dVar29 - dVar6 * dVar27;
    dVar13 = dVar13 + dVar13;
    dVar14 = dVar14 + dVar14;
    dVar26 = dVar26 + dVar26;
    local_f8 = (dVar26 * dVar28 - dVar29 * dVar14) + dVar24 * dVar13 + dVar10 + param_3[4];
    dStack_f0 = (dVar13 * dVar29 - dVar26 * dVar27) + dVar21 * dVar14 + dVar11 + param_3[5];
    local_e8 = (dVar14 * dVar27 - dVar28 * dVar13) + dVar24 * dVar26 + dVar6 + param_3[6];
  }
  else {
    dVar14 = *param_3;
    dVar13 = param_3[1];
    dVar24 = param_3[2];
    dVar25 = dVar13 + dVar13;
    dVar27 = dVar24 + dVar24;
    dVar26 = dVar14 * (dVar14 + dVar14);
    local_1d8 = ((double)DAT_149934d80 - (dVar24 * dVar27 + dVar13 * dVar25)) * dVar8;
    dVar21 = (DAT_149934d80._8_8_ - (dVar24 * dVar27 + dVar26)) * dVar15;
    dVar24 = param_3[3];
    dVar28 = dVar27 * dVar24;
    dVar29 = (dVar14 + dVar14) * param_3[3];
    dVar24 = dVar25 * dVar24;
    dStack_190 = (dVar27 * dVar13 - dVar29) * dVar7;
    local_198 = (dVar24 + *param_3 * dVar27) * dVar7;
    dStack_1d0 = (dVar25 * dVar14 + dVar28) * dVar8;
    local_1a8 = (dVar27 * dVar13 + dVar29) * dVar15;
    local_188 = (1.0 - (dVar26 + dVar13 * dVar25)) * dVar7;
    local_1c8 = (*param_3 * dVar27 - dVar24) * dVar8;
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar21,0);
    local_1b8._0_8_ = (dVar25 * dVar14 - dVar28) * dVar15;
    local_1b8._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = param_3[4];
    dStack_170 = param_3[5];
    local_168 = param_3[6];
    uStack_160 = 0x3ff0000000000000;
    dVar26 = dStack_150 + dStack_150;
    dVar21 = local_148 + local_148;
    dVar24 = local_158 * (local_158 + local_158);
    local_258 = (double)DAT_149934d80 - (local_148 * dVar21 + dStack_150 * dVar26);
    dStack_230 = DAT_149934d80._8_8_ - (local_148 * dVar21 + dVar24);
    local_208 = 1.0 - (dVar24 + dStack_150 * dVar26);
    dVar24 = (local_158 + local_158) * dStack_140;
    dStack_250 = dVar26 * local_158 + dVar21 * dStack_140;
    local_228 = dVar21 * dStack_150 + dVar24;
    local_238 = dVar26 * local_158 - dVar21 * dStack_140;
    dVar24 = dVar21 * dStack_150 - dVar24;
    local_248 = local_158 * dVar21 - dVar26 * dStack_140;
    uStack_240 = 0;
    uStack_220 = 0;
    local_218._8_4_ = SUB84(dVar24,0);
    local_218._0_8_ = dVar26 * dStack_140 + local_158 * dVar21;
    local_218._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
    uStack_200 = 0;
    uStack_1e0 = 0x3ff0000000000000;
    local_1f8 = dVar10;
    dStack_1f0 = dVar11;
    local_1e8 = dVar6;
    FUN_1447fea8d(&local_158);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    auVar22._8_8_ = -(ulonglong)(0.0 <= dVar15);
    auVar22._0_8_ = -(ulonglong)(0.0 <= dVar8);
    auVar17 = blendvpd(_DAT_149936790,auVar20,auVar22);
    uVar5 = -(ulonglong)(0.0 <= dVar7 * 1.0);
    dVar6 = (double)(~uVar5 & 0xbff0000000000000 | uVar5 & 0x3ff0000000000000);
    dVar10 = auVar17._0_8_;
    local_148 = local_148 * dVar10;
    dStack_150 = dStack_150 * dVar10;
    local_158 = local_158 * dVar10;
    dVar10 = auVar17._8_8_;
    local_128 = local_128 * dVar10;
    local_130 = local_130 * dVar10;
    local_138 = dVar10 * local_138;
    local_108 = local_108 * dVar6;
    local_110 = local_110 * dVar6;
    local_118 = dVar6 * local_118;
    FUN_14481fd10(&local_278,&local_158);
    dVar6 = local_268 * local_268 + local_278 * local_278;
    dVar10 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar12._0_8_ = dVar6 + dVar10;
    auVar12._8_8_ = dVar6 + dVar10;
    auVar9._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar12._8_8_);
    auVar9._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar12._0_8_);
    auVar17 = sqrtpd(auVar12,auVar12);
    auVar17 = divpd(auVar20,auVar17);
    auVar23._0_8_ = auVar17._0_8_ * local_268;
    auVar23._8_8_ = auVar17._8_8_ * dStack_260;
    dVar16 = (double)((ulonglong)(local_278 * auVar17._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar12._0_8_));
    dVar19 = (double)((ulonglong)(dStack_270 * auVar17._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar12._8_8_));
    auVar20 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar23,auVar9);
  }
  dVar8 = dVar8 * 0.0;
  dVar15 = dVar15 * 0.0;
  dVar6 = dVar7 * 1.0 * 1.0;
  dVar21 = auVar20._0_8_;
  dVar26 = auVar20._8_8_;
  dVar10 = dVar15 * dVar16 - dVar8 * dVar19;
  dVar11 = dVar6 * dVar19 - dVar15 * dVar21;
  dVar7 = dVar8 * dVar21 - dVar16 * dVar6;
  dVar11 = dVar11 + dVar11;
  dVar7 = dVar7 + dVar7;
  dVar10 = dVar10 + dVar10;
  dVar24 = param_4 * 0.5 * *(double *)(param_1 + 0x50);
  dVar6 = ABS(dVar26 * dVar10 + dVar6 + (dVar7 * dVar16 - dVar11 * dVar19)) * dVar24;
  dVar15 = ABS((dVar21 * dVar11 - dVar16 * dVar10) + dVar26 * dVar7 + dVar15) * dVar24;
  dVar24 = dVar24 * ABS((dVar10 * dVar19 - dVar7 * dVar21) + dVar26 * dVar11 + dVar8);
  dVar8 = *(double *)(param_1 + 0x40) * param_4;
  param_4 = param_4 * *(double *)(param_1 + 0x48);
  *param_2 = (local_f8 - dVar24) - dVar8;
  param_2[1] = (dStack_f0 - dVar15) - dVar8;
  param_2[2] = (local_e8 - dVar6) - dVar8;
  param_2[3] = param_4 + local_f8 + dVar24;
  param_2[4] = dStack_f0 + dVar15 + param_4;
  param_2[5] = local_e8 + dVar6 + param_4;
  *(undefined1 *)(param_2 + 6) = 1;
  if ((local_d0 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14711d828 FUN_14711d828 body=158 status=ok
// SIG undefined FUN_14711d828(void)

double FUN_14711d828(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar3 = pow(*(double *)(param_1 + 0x40),3.0);
  dVar4 = pow(*(double *)(param_1 + 0x48),3.0);
  dVar1 = *(double *)(param_1 + 0x40);
  dVar2 = *(double *)(param_1 + 0x48);
  return dVar4 * 2.094395160675049 + dVar3 * 2.094395160675049 +
         (dVar2 * dVar2 + dVar1 * dVar1 + dVar1 * dVar2) * 1.0471975803375244 *
         *(double *)(param_1 + 0x50);
}



// FUNCTION 14711d8c6 FUN_14711d8c6 body=155 status=ok
// SIG undefined FUN_14711d8c6(void)

void FUN_14711d8c6(longlong param_1,double *param_2,double param_3,char param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = *param_2 * *(double *)(param_1 + 0x40);
  if (dVar1 <= param_3) {
    dVar1 = param_3;
  }
  dVar4 = param_2[1] * *(double *)(param_1 + 0x48);
  if (dVar4 <= param_3) {
    dVar4 = param_3;
  }
  dVar3 = ((*(double *)(param_1 + 0x40) - dVar1) + (*(double *)(param_1 + 0x48) - dVar4)) * 0.5 +
          param_2[2] * *(double *)(param_1 + 0x50);
  dVar2 = 0.0;
  if (0.0 <= dVar3) {
    dVar2 = dVar3;
  }
  *(double *)(param_1 + 0x40) = dVar1;
  *(double *)(param_1 + 0x48) = dVar4;
  *(double *)(param_1 + 0x50) = dVar2;
  if (dVar1 <= dVar4) {
    dVar1 = dVar4;
  }
  *(double *)(param_1 + 8) = dVar1 + dVar2;
  if (param_4 != '\0') {
    *(double *)(param_1 + 0x10) = *param_2 * *(double *)(param_1 + 0x10);
    *(double *)(param_1 + 0x18) = param_2[1] * *(double *)(param_1 + 0x18);
    *(double *)(param_1 + 0x20) = param_2[2] * *(double *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 14711d962 FUN_14711d962 body=729 status=ok
// SIG undefined FUN_14711d962(void)

undefined1 FUN_14711d962(undefined8 *param_1,double *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
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
  undefined1 auStack_3d8 [32];
  undefined8 local_3b8;
  undefined8 *local_3b0;
  undefined8 *local_3a8;
  undefined *local_3a0;
  longlong local_398;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined1 local_368 [16];
  double local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined **local_328;
  undefined8 local_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  undefined8 local_300;
  undefined1 local_2f8 [626];
  undefined1 local_86;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  lVar1 = param_1[2];
  if ((lVar1 == 0) || (*(int *)(param_1 + 3) < 1)) {
    uVar2 = 0;
  }
  else if (((1.9999999494757503e-05 <= ABS((double)param_1[4] - *param_2)) ||
           (1.9999999494757503e-05 <= ABS((double)param_1[5] - param_2[1]))) ||
          (uVar2 = 1, 1.9999999494757503e-05 <= ABS((double)param_1[6] - param_2[2]))) {
    dVar7 = *param_2 - (double)param_1[4];
    dVar8 = param_2[1] - (double)param_1[5];
    dVar4 = param_2[2] - (double)param_1[6];
    dVar9 = -(double)param_1[8];
    dVar10 = -(double)param_1[9];
    dVar5 = (double)param_1[10] * -1.0;
    dVar6 = (double)param_1[0xb] * 1.0;
    dVar13 = dVar7 * dVar5 - dVar9 * dVar4;
    dVar11 = dVar8 * dVar9 - dVar10 * dVar7;
    dVar12 = dVar4 * dVar10 - dVar5 * dVar8;
    dVar12 = dVar12 + dVar12;
    dVar13 = dVar13 + dVar13;
    dVar11 = dVar11 + dVar11;
    dVar8 = (double)param_1[8] * dVar11 + dVar5 * dVar12 + dVar6 * dVar13 + dVar8;
    local_320 = 0x3ff0000000000000;
    local_328 = &PTR_LAB_14a1e1938;
    local_318 = (undefined4)DAT_14c8464e0;
    uStack_314 = DAT_14c8464e0._4_4_;
    uStack_310 = (undefined4)DAT_14c8464e8;
    uStack_30c = DAT_14c8464e8._4_4_;
    local_308 = DAT_14c8464f0;
    local_300 = 0x3ff0000000000000;
    iVar3 = (**(code **)*param_1)(param_1);
    if (iVar3 - 4U < 6) {
      local_3a0 = (&PTR_LAB_14a1e3cc8)[iVar3 - 4U];
    }
    else {
      local_3a0 = (undefined *)0x0;
    }
    local_388 = 0;
    uStack_380 = 0;
    local_378 = 0;
    uStack_374 = 0;
    uStack_370 = 0;
    uStack_36c = 0x3ff00000;
    local_368._8_4_ = SUB84(dVar8,0);
    local_368._0_8_ = (dVar11 * dVar10 - dVar13 * dVar5) + dVar6 * dVar12 + dVar7;
    local_368._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    uStack_350 = 0;
    local_348 = 0x3ff0000000000000;
    uStack_340 = 0x3ff0000000000000;
    local_338 = 0x3ff0000000000000;
    uStack_330 = 0;
    local_3b0 = &DAT_14c846480;
    local_3b8 = 0;
    local_3a8 = param_1;
    local_398 = lVar1;
    local_358 = dVar6 * dVar11 + dVar4 + (dVar13 * dVar9 - dVar12 * dVar10);
    FUN_1404460b8(local_2f8,&local_388,&local_328,&LAB_14083879e);
    uVar2 = local_86;
  }
  if ((local_60 ^ (ulonglong)auStack_3d8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14711dc7e FUN_14711dc7e body=463 status=ok
// SIG undefined FUN_14711dc7e(void)

bool FUN_14711dc7e(longlong param_1,double *param_2)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_b8 [32];
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_144a7484c(param_1 + 0x28,&local_98);
  dVar4 = *param_2 - *(double *)(param_1 + 0x10);
  dVar6 = param_2[1] - *(double *)(param_1 + 0x18);
  dVar2 = param_2[2] - *(double *)(param_1 + 0x20);
  local_88 = local_88 * -1.0;
  dStack_80 = dStack_80 * 1.0;
  dVar5 = -local_98;
  dStack_90 = -dStack_90;
  dVar8 = dVar4 * local_88 - dVar5 * dVar2;
  dVar7 = dVar6 * dVar5 - dStack_90 * dVar4;
  dVar3 = dVar2 * dStack_90 - local_88 * dVar6;
  dVar3 = dVar3 + dVar3;
  dVar8 = dVar8 + dVar8;
  dVar7 = dVar7 + dVar7;
  dVar2 = dStack_80 * dVar7 + dVar2 + (dVar8 * dVar5 - dVar3 * dStack_90);
  dVar5 = (dVar7 * dStack_90 - dVar8 * local_88) + dStack_80 * dVar3 + dVar4;
  dVar7 = local_98 * dVar7 + local_88 * dVar3 + dStack_80 * dVar8 + dVar6;
  dVar7 = dVar5 * dVar5 + dVar7 * dVar7;
  dVar5 = -dVar2;
  if (-dVar2 <= dVar2) {
    dVar5 = dVar2;
  }
  dVar3 = dVar5 - *(double *)(param_1 + 0x48);
  uVar1 = -(ulonglong)(dVar5 < *(double *)(param_1 + 0x48));
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return (float)(double)(~uVar1 & (ulonglong)(dVar3 * dVar3 + dVar7) | (ulonglong)dVar7 & uVar1)
           <= (float)(*(double *)(param_1 + 0x40) * *(double *)(param_1 + 0x40));
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14711de4e FUN_14711de4e body=565 status=ok
// SIG undefined FUN_14711de4e(void)

bool FUN_14711de4e(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_b8 [32];
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_144a7484c(param_1 + 0x28,&local_98);
  dVar5 = *param_2 - *(double *)(param_1 + 0x10);
  dVar6 = param_2[1] - *(double *)(param_1 + 0x18);
  dVar3 = param_2[2] - *(double *)(param_1 + 0x20);
  dVar1 = -local_98;
  dStack_90 = -dStack_90;
  local_88 = local_88 * -1.0;
  dStack_80 = dStack_80 * 1.0;
  dVar7 = dVar5 * local_88 - dVar1 * dVar3;
  dVar2 = dVar6 * dVar1 - dStack_90 * dVar5;
  dVar4 = dVar3 * dStack_90 - local_88 * dVar6;
  dVar4 = dVar4 + dVar4;
  dVar7 = dVar7 + dVar7;
  dVar2 = dVar2 + dVar2;
  dVar1 = dStack_80 * dVar2 + dVar3 + (dVar7 * dVar1 - dVar4 * dStack_90);
  dVar3 = (dVar2 * dStack_90 - dVar7 * local_88) + dStack_80 * dVar4 + dVar5;
  dVar4 = local_98 * dVar2 + local_88 * dVar4 + dStack_80 * dVar7 + dVar6;
  dVar2 = *(double *)(param_1 + 0x50);
  if (dVar1 <= -dVar2) {
    dVar4 = (dVar2 + dVar1) * (dVar2 + dVar1) + dVar3 * dVar3 + dVar4 * dVar4;
    dVar2 = *(double *)(param_1 + 0x40) * *(double *)(param_1 + 0x40);
  }
  else {
    dVar4 = dVar3 * dVar3 + dVar4 * dVar4;
    if (dVar2 <= dVar1) {
      dVar4 = (dVar1 - dVar2) * (dVar1 - dVar2) + dVar4;
      dVar2 = *(double *)(param_1 + 0x48) * *(double *)(param_1 + 0x48);
    }
    else {
      dVar2 = (*(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x40)) *
              (double)(-(ulonglong)(1e-08 < ABS(dVar2 + dVar2)) &
                      (ulonglong)((dVar1 + dVar2) / (dVar2 + dVar2))) + *(double *)(param_1 + 0x40);
      dVar2 = dVar2 * dVar2;
    }
  }
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return (float)dVar4 <= (float)dVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14711e084 FUN_14711e084 body=1841 status=ok
// SIG undefined FUN_14711e084(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_14711e084(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_278 [32];
  undefined1 local_258 [32];
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  ulonglong local_b0;
  
  auVar12 = _DAT_149934d80;
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  dVar10 = 0.0;
  if (((*(int *)(param_1 + 0x38) < 3) ||
      (lVar6 = *(longlong *)(param_1 + 0x20), dVar10 = 0.0, lVar6 == 0)) ||
     (lVar1 = *(longlong *)(param_1 + 0x30), dVar10 = 0.0, lVar1 == 0)) goto LAB_14711e101;
  auVar14 = *(undefined1 (*) [16])(lVar1 + 0x170);
  dVar10 = auVar14._0_8_;
  dVar24 = auVar14._8_8_;
  dVar17 = SUB168(*(undefined1 (*) [16])(lVar1 + 0x180),0);
  auVar15 = *(undefined1 (*) [16])(param_1 + 0x1b0);
  dVar19 = auVar15._0_8_;
  dVar25 = auVar15._8_8_;
  dVar11 = SUB168(*(undefined1 (*) [16])(param_1 + 0x1c0),0);
  auVar14 = minpd(auVar15,auVar14);
  auVar18 = minpd(*(undefined1 (*) [16])(param_1 + 0x1c0),*(undefined1 (*) [16])(lVar1 + 0x180));
  auVar15._8_8_ = -(ulonglong)(auVar14._8_8_ < 0.0);
  auVar15._0_8_ = -(ulonglong)(auVar14._0_8_ < 0.0);
  iVar7 = movmskpd(param_2,auVar15);
  auVar14._8_8_ = -(ulonglong)(auVar18._8_8_ < 0.0);
  auVar14._0_8_ = -(ulonglong)(auVar18._0_8_ < 0.0);
  uVar8 = movmskpd(param_3,auVar14);
  if ((uVar8 & 0x3fffffff) == 0 && iVar7 == 0) {
    dVar2 = *(double *)(lVar1 + 0x130);
    dVar3 = *(double *)(lVar1 + 0x138);
    dVar4 = *(double *)(lVar1 + 0x140);
    dVar19 = *(double *)(lVar1 + 0x148);
    dVar10 = dVar10 * *(double *)(param_1 + 400);
    dVar24 = dVar24 * *(double *)(param_1 + 0x198);
    dVar17 = dVar17 * *(double *)(param_1 + 0x1a0);
    dVar25 = dVar24 * dVar2 - dVar3 * dVar10;
    dVar13 = dVar17 * dVar3 - dVar4 * dVar24;
    dVar11 = dVar10 * dVar4 - dVar2 * dVar17;
    dVar13 = dVar13 + dVar13;
    dVar11 = dVar11 + dVar11;
    dVar25 = dVar25 + dVar25;
    local_d8 = (dVar25 * dVar3 - dVar4 * dVar11) + dVar19 * dVar13 + dVar10 +
               *(double *)(lVar1 + 0x150);
    dStack_d0 = (dVar13 * dVar4 - dVar25 * dVar2) + *(double *)(lVar1 + 0x148) * dVar11 + dVar24 +
                *(double *)(lVar1 + 0x158);
    local_c8 = (dVar11 * dVar2 - dVar3 * dVar13) + dVar19 * dVar25 + dVar17 +
               *(double *)(lVar1 + 0x160);
LAB_14711e581:
    FUN_144941734(lVar6,&local_138);
    dVar17 = *(double *)(param_1 + 0x140) * local_f8;
    dVar19 = *(double *)(param_1 + 0x148) * dStack_f0;
    dVar11 = *(double *)(param_1 + 0x150) * local_e8;
    dVar24 = dVar19 * local_138 - dVar17 * dStack_130;
    dVar25 = dVar11 * dStack_130 - dVar19 * local_128;
    dVar10 = dVar17 * local_128 - local_138 * dVar11;
    dVar25 = dVar25 + dVar25;
    dVar10 = dVar10 + dVar10;
    dVar24 = dVar24 + dVar24;
    dVar17 = (dVar24 * dStack_130 - dVar10 * local_128) + dStack_120 * dVar25 + dVar17 + local_118;
    dVar19 = (local_128 * dVar25 - local_138 * dVar24) + dStack_120 * dVar10 + dVar19 + local_110;
    dVar10 = dVar24 * dStack_120 + dVar11 + (dVar10 * local_138 - dVar25 * dStack_130) + local_108;
  }
  else {
    dVar2 = *(double *)(lVar1 + 0x130);
    dVar4 = *(double *)(lVar1 + 0x138);
    dVar5 = *(double *)(lVar1 + 0x140);
    dVar16 = dVar4 + dVar4;
    dVar20 = dVar5 + dVar5;
    dVar13 = dVar2 * (dVar2 + dVar2);
    dStack_190 = (DAT_149934d80._8_8_ - (dVar5 * dVar20 + dVar13)) * dVar24;
    local_168 = (1.0 - (dVar13 + dVar4 * dVar16)) * dVar17;
    dVar3 = *(double *)(lVar1 + 0x130) * dVar20;
    dVar13 = *(double *)(lVar1 + 0x148);
    dVar21 = dVar20 * dVar13;
    dVar22 = (dVar2 + dVar2) * *(double *)(lVar1 + 0x148);
    dVar13 = dVar16 * dVar13;
    local_198 = (dVar16 * dVar2 - dVar21) * dVar24;
    dStack_170 = (dVar20 * dVar4 - dVar22) * dVar17;
    dVar2 = (dVar16 * dVar2 + dVar21) * dVar10;
    local_188 = (dVar20 * dVar4 + dVar22) * dVar24;
    local_178 = (dVar13 + dVar3) * dVar17;
    local_1a8 = (dVar3 - dVar13) * dVar10;
    local_1b8._8_4_ = SUB84(dVar2,0);
    local_1b8._0_8_ = ((double)DAT_149934d80 - (dVar5 * dVar20 + dVar4 * dVar16)) * dVar10;
    local_1b8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    uStack_1a0 = 0;
    uStack_180 = 0;
    uStack_160 = 0;
    local_158 = *(undefined8 *)(lVar1 + 0x150);
    uStack_150 = *(undefined8 *)(lVar1 + 0x158);
    local_148 = *(undefined8 *)(lVar1 + 0x160);
    uStack_140 = 0x3ff0000000000000;
    dVar4 = *(double *)(param_1 + 0x170);
    dVar5 = *(double *)(param_1 + 0x178);
    dVar16 = *(double *)(param_1 + 0x180);
    dVar20 = dVar5 + dVar5;
    dVar21 = dVar16 + dVar16;
    dVar2 = dVar4 * (dVar4 + dVar4);
    dVar3 = *(double *)(param_1 + 0x170) * dVar21;
    dVar13 = *(double *)(param_1 + 0x188);
    dVar22 = dVar21 * dVar13;
    dVar23 = (dVar4 + dVar4) * *(double *)(param_1 + 0x188);
    dVar13 = dVar20 * dVar13;
    local_218 = (dVar20 * dVar4 - dVar22) * dVar25;
    dStack_1f0 = (dVar21 * dVar5 - dVar23) * dVar11;
    local_238 = ((double)DAT_149934d80 - (dVar16 * dVar21 + dVar5 * dVar20)) * dVar19;
    dStack_210 = (DAT_149934d80._8_8_ - (dVar16 * dVar21 + dVar2)) * dVar25;
    dStack_230 = (dVar20 * dVar4 + dVar22) * dVar19;
    local_208 = (dVar21 * dVar5 + dVar23) * dVar25;
    local_1f8 = (dVar13 + dVar3) * dVar11;
    local_228 = (dVar3 - dVar13) * dVar19;
    uStack_220 = 0;
    uStack_200 = 0;
    local_1e8 = (1.0 - (dVar2 + dVar5 * dVar20)) * dVar11;
    uStack_1e0 = 0;
    local_1d8 = *(undefined8 *)(param_1 + 400);
    uStack_1d0 = *(undefined8 *)(param_1 + 0x198);
    local_1c8 = *(undefined8 *)(param_1 + 0x1a0);
    uStack_1c0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_138);
    FUN_144a1c686(&local_138,0x3e45798ee0000000);
    auVar18._8_8_ = -(ulonglong)(0.0 <= dVar24 * dVar25);
    auVar18._0_8_ = -(ulonglong)(0.0 <= dVar10 * dVar19);
    auVar12 = blendvpd(_DAT_149936790,auVar12,auVar18);
    uVar9 = -(ulonglong)(0.0 <= dVar17 * dVar11);
    dVar10 = (double)(~uVar9 & 0xbff0000000000000 |
                     (ulonglong)((uint)(uVar9 >> 0x20) & 0x3ff00000) << 0x20);
    dVar17 = auVar12._0_8_;
    local_128 = local_128 * dVar17;
    dStack_130 = dStack_130 * dVar17;
    local_138 = local_138 * dVar17;
    dVar17 = auVar12._8_8_;
    local_108 = local_108 * dVar17;
    local_110 = local_110 * dVar17;
    local_118 = dVar17 * local_118;
    local_e8 = local_e8 * dVar10;
    dStack_f0 = dStack_f0 * dVar10;
    local_f8 = dVar10 * local_f8;
    FUN_14481fd10(local_258,&local_138);
    lVar6 = *(longlong *)(param_1 + 0x20);
    if (lVar6 != 0) goto LAB_14711e581;
    dVar17 = *(double *)(param_1 + 0x140);
    dVar19 = *(double *)(param_1 + 0x148);
    dVar10 = *(double *)(param_1 + 0x150);
  }
  dVar10 = (local_c8 - dVar10) * *(double *)(param_1 + 0x50) +
           (local_d8 - dVar17) * *(double *)(param_1 + 0x40) +
           (dStack_d0 - dVar19) * *(double *)(param_1 + 0x48);
LAB_14711e101:
  if ((local_b0 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return dVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14711e7b6 FUN_14711e7b6 body=223 status=ok
// SIG undefined FUN_14711e7b6(void)

double * FUN_14711e7b6(double *param_1,longlong param_2,longlong param_3,double *param_4)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if ((param_3 != 0) && (cVar3 = FUN_144a7ee82(param_3), cVar3 == '\0')) {
    if (param_2 == 0) {
      bVar1 = *(byte *)(param_3 + 0x21);
      dVar5 = 1.0;
      dVar4 = 1.0;
      if ((bVar1 & 0x20) != 0) {
        dVar4 = 0.0;
      }
      dVar6 = 1.0;
      if ((bVar1 & 0x10) != 0) {
        dVar6 = 0.0;
      }
      if ((bVar1 & 8) != 0) {
        dVar5 = 0.0;
      }
      dVar4 = dVar4 * *(double *)(param_3 + 0xa0) * param_4[2];
      dVar6 = dVar6 * *(double *)(param_3 + 0x98) * param_4[1];
      dVar5 = dVar5 * *(double *)(param_3 + 0x90) * *param_4;
    }
    else {
      lVar2 = *(longlong *)(param_2 + 0x2b0);
      dVar4 = param_4[2] * *(double *)(lVar2 + 0x108);
      dVar6 = param_4[1] * *(double *)(lVar2 + 0x100);
      dVar5 = *param_4 * *(double *)(lVar2 + 0xf8);
    }
    *param_1 = dVar5;
    param_1[1] = dVar6;
    param_1[2] = dVar4;
    return param_1;
  }
  param_1[2] = DAT_14c8464f0;
  dVar4 = DAT_14c8464e8;
  *param_1 = DAT_14c8464e0;
  param_1[1] = dVar4;
  return param_1;
}



// FUNCTION 14711e895 FUN_14711e895 body=298 status=ok
// SIG undefined FUN_14711e895(void)

double * FUN_14711e895(double *param_1,longlong param_2,longlong param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 != 0) {
    cVar4 = FUN_144a7ee82(param_3);
    if (cVar4 == '\0') {
      if (param_2 == 0) {
        FUN_147101ec6(param_3,&local_70);
      }
      else {
        FUN_140b8ccd6(*(undefined8 *)(param_2 + 0x2b0),&local_70);
      }
      dVar1 = *param_4;
      dVar2 = param_4[1];
      dVar3 = param_4[2];
      *param_1 = dVar3 * local_40 + dVar1 * local_70 + dVar2 * local_58;
      param_1[1] = local_38 * dVar3 + local_68 * dVar1 + local_50 * dVar2;
      param_1[2] = local_30 * dVar3 + local_60 * dVar1 + local_48 * dVar2;
      if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
  }
  param_1[2] = DAT_14c8464f0;
  dVar1 = DAT_14c8464e8;
  *param_1 = DAT_14c8464e0;
  param_1[1] = dVar1;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
}



// FUNCTION 14711e9c0 FUN_14711e9c0 body=556 status=ok
// SIG undefined FUN_14711e9c0(void)

double * FUN_14711e9c0(double *param_1,longlong param_2,longlong param_3,double *param_4,
                      undefined1 (*param_5) [16])

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_3 == 0) {
    *(double *)param_5[1] = param_4[2];
    dVar1 = param_4[1];
    *(double *)*param_5 = *param_4;
    *(double *)(*param_5 + 8) = dVar1;
    param_1[2] = param_4[2];
    uVar8 = *(undefined4 *)((longlong)param_4 + 4);
    uVar9 = *(undefined4 *)(param_4 + 1);
    uVar10 = *(undefined4 *)((longlong)param_4 + 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)param_4;
    *(undefined4 *)((longlong)param_1 + 4) = uVar8;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar10;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_e8);
  }
  dVar11 = *param_4 * *(double *)(param_3 + 0x170);
  dVar12 = param_4[1] * *(double *)(param_3 + 0x178);
  dVar2 = param_4[2] * *(double *)(param_3 + 0x180);
  dVar5 = *(double *)(param_3 + 0x130);
  dVar6 = *(double *)(param_3 + 0x138);
  dVar7 = *(double *)(param_3 + 0x140);
  dVar1 = *(double *)(param_3 + 0x148);
  dVar13 = dVar12 * dVar5 - dVar11 * dVar6;
  dVar14 = dVar2 * dVar6 - dVar12 * dVar7;
  dVar15 = dVar11 * dVar7 - dVar5 * dVar2;
  dVar14 = dVar14 + dVar14;
  dVar15 = dVar15 + dVar15;
  dVar13 = dVar13 + dVar13;
  dVar4 = (dVar7 * dVar14 - dVar5 * dVar13) + *(double *)(param_3 + 0x148) * dVar15 + dVar12 +
          *(double *)(param_3 + 0x158);
  dVar12 = *(double *)(param_3 + 0x160);
  auVar3._8_4_ = SUB84(dVar4,0);
  auVar3._0_8_ = (dVar13 * dVar6 - dVar15 * dVar7) + dVar1 * dVar14 + dVar11 +
                 *(double *)(param_3 + 0x150);
  auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *param_5 = auVar3;
  *(double *)param_5[1] = dVar13 * dVar1 + dVar2 + (dVar15 * dVar5 - dVar14 * dVar6) + dVar12;
  if (param_2 == 0) {
    FUN_144941734(param_3,local_c8);
  }
  else {
    FUN_1409acb1a(*(undefined8 *)(param_2 + 0x2b0),local_c8);
  }
  dVar1 = *(double *)param_5[1];
  dVar12 = *(double *)(*param_5 + 8);
  *param_1 = *(double *)*param_5 - local_a8;
  param_1[1] = dVar12 - dStack_a0;
  param_1[2] = dVar1 - local_98;
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14711ebed FUN_14711ebed body=1071 status=ok
// SIG undefined FUN_14711ebed(void)

undefined8 FUN_14711ebed(longlong param_1,double *param_2,double *param_3,double *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_1c8 [32];
  double *local_1a8;
  double *local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  double local_180;
  double local_178;
  double dStack_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  puVar2 = *(undefined8 **)(param_1 + 0x30);
  if (puVar1 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)0x0;
    if (puVar2 == (undefined8 *)0x0) {
      uVar10 = 0;
      goto LAB_14711ecad;
    }
LAB_14711ec84:
    iVar9 = (**(code **)*puVar2)(puVar2);
    uVar10 = 0;
    puVar11 = (undefined8 *)0x0;
    if (iVar9 == 1) {
      puVar11 = puVar2;
    }
    if ((puVar12 == (undefined8 *)0x0) == (puVar11 == (undefined8 *)0x0)) goto LAB_14711ecad;
  }
  else {
    iVar9 = (**(code **)*puVar1)(puVar1);
    puVar12 = (undefined8 *)0x0;
    if (iVar9 == 1) {
      puVar12 = puVar1;
    }
    if (puVar2 != (undefined8 *)0x0) goto LAB_14711ec84;
    uVar10 = 0;
    if (puVar12 == (undefined8 *)0x0) goto LAB_14711ecad;
    puVar11 = (undefined8 *)0x0;
    puVar12 = puVar1;
  }
  local_1a8 = &local_e8;
  FUN_14711e9c0(&local_118,puVar12,puVar1,param_1 + 0x140);
  local_1a8 = &local_d0;
  local_198 = param_2;
  FUN_14711e9c0(&local_100,puVar11,puVar2,param_1 + 0x158);
  *param_4 = (local_c0 - local_d8) * *(double *)(param_1 + 0x50) +
             (local_d0 - local_e8) * *(double *)(param_1 + 0x40) +
             (local_c8 - local_e0) * *(double *)(param_1 + 0x48);
  local_168 = *(double *)(param_1 + 0x50);
  local_178 = *(double *)(param_1 + 0x40);
  dStack_170 = *(double *)(param_1 + 0x48);
  dVar3 = local_118 * *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x40) * local_110;
  dVar4 = *(double *)(param_1 + 0x40) * local_108 - local_118 * *(double *)(param_1 + 0x50);
  dVar5 = local_110 * *(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x48) * local_108;
  local_138 = *(double *)(param_1 + 0x80);
  local_148 = *(double *)(param_1 + 0x70);
  dStack_140 = *(double *)(param_1 + 0x78);
  dVar6 = local_100 * *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x70) * local_f8;
  dVar8 = *(double *)(param_1 + 0x70) * local_f0 - local_100 * *(double *)(param_1 + 0x80);
  dVar7 = local_f8 * *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x78) * local_f0;
  local_160 = dVar5;
  local_158 = dVar4;
  local_150 = dVar3;
  local_130 = dVar7;
  local_128 = dVar8;
  local_120 = dVar6;
  FUN_14711e7b6(&local_190,puVar12,puVar1,&local_178);
  param_3[2] = local_180;
  *(undefined4 *)param_3 = local_190;
  *(undefined4 *)((longlong)param_3 + 4) = uStack_18c;
  *(undefined4 *)(param_3 + 1) = uStack_188;
  *(undefined4 *)((longlong)param_3 + 0xc) = uStack_184;
  FUN_14711e895(&local_190,puVar12,puVar1,&local_160);
  param_3[5] = local_180;
  *(undefined4 *)(param_3 + 3) = local_190;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_18c;
  *(undefined4 *)(param_3 + 4) = uStack_188;
  *(undefined4 *)((longlong)param_3 + 0x24) = uStack_184;
  FUN_14711e7b6(&local_190,puVar11,puVar2,&local_148);
  param_3[8] = local_180;
  *(undefined4 *)(param_3 + 6) = local_190;
  *(undefined4 *)((longlong)param_3 + 0x34) = uStack_18c;
  *(undefined4 *)(param_3 + 7) = uStack_188;
  *(undefined4 *)((longlong)param_3 + 0x3c) = uStack_184;
  FUN_14711e895(&local_190,puVar11,puVar2,&local_130);
  param_3[0xb] = local_180;
  param_3[9] = (double)CONCAT44(uStack_18c,local_190);
  param_3[10] = (double)CONCAT44(uStack_184,uStack_188);
  *local_198 = -1.0 / (dVar6 * param_3[0xb] + dVar7 * param_3[9] + dVar8 * param_3[10] +
                      local_138 * param_3[8] + local_148 * param_3[6] + dStack_140 * param_3[7] +
                      dVar3 * param_3[5] + dVar5 * param_3[3] + dVar4 * param_3[4] +
                      local_168 * param_3[2] + local_178 * *param_3 + dStack_170 * param_3[1]);
  uVar10 = 1;
LAB_14711ecad:
  if ((local_b0 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14711f01e FUN_14711f01e body=1399 status=ok
// SIG undefined FUN_14711f01e(void)

undefined8 FUN_14711f01e(longlong param_1,void *param_2,undefined4 param_3)

{
  ulonglong *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  void *pvVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  double *pdVar16;
  double *pdVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined1 auStack_218 [40];
  void *local_1f0;
  ulonglong local_1e8;
  undefined4 local_1dc;
  undefined8 *local_1d8;
  longlong local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  double local_1b0 [9];
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double dStack_148;
  double local_140;
  undefined8 local_138 [4];
  double local_118;
  double local_110;
  double local_108;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_1f0 = param_2;
  if (*(double *)(param_1 + 0x90) <= 0.0) {
LAB_14711f0ed:
    uVar10 = 0;
  }
  else {
    local_1d8 = *(undefined8 **)(param_1 + 0x98);
    puVar14 = *(undefined8 **)(param_1 + 0xa0);
    puVar15 = puVar14;
    if (puVar14 < local_1d8) {
      puVar15 = local_1d8;
    }
    if (local_1d8 < puVar14) {
      puVar14 = local_1d8;
    }
    iVar7 = (**(code **)*puVar15)(puVar15);
    puVar21 = (undefined8 *)0x0;
    if (iVar7 == 1) {
      puVar21 = puVar15;
    }
    local_1dc = param_3;
    local_1c0 = puVar14;
    if (puVar14 == (undefined8 *)0x0) {
      FUN_14481f014(local_138,puVar15,0x3ff0000000000000,1);
      pvVar5 = local_1f0;
      memcpy(local_1f0,local_138,0xd0);
      puVar14 = &DAT_14c846480;
      puVar19 = (undefined8 *)((longlong)pvVar5 + 0xd0);
      for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
        *puVar19 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar19 = puVar19 + 1;
      }
      *(undefined8 **)((longlong)pvVar5 + 0x130) = &DAT_14c9abcc0;
      *(undefined8 **)((longlong)pvVar5 + 0x138) = &DAT_14c9abcc0;
      uVar10 = DAT_14c8464e8;
      *(undefined8 *)((longlong)pvVar5 + 0x140) = DAT_14c8464e0;
      *(undefined8 *)((longlong)pvVar5 + 0x148) = uVar10;
      *(undefined8 *)((longlong)pvVar5 + 0x150) = DAT_14c8464f0;
      *(undefined8 *)((longlong)pvVar5 + 0x158) = 0;
      *(undefined8 *)((longlong)pvVar5 + 0x160) = 0;
      *(undefined8 *)((longlong)pvVar5 + 0x168) = 0;
      *(undefined8 *)((longlong)pvVar5 + 0x170) = 0;
      *(undefined8 *)((longlong)pvVar5 + 0x178) = 0;
      *(undefined8 *)((longlong)pvVar5 + 0x180) = 0;
      *(undefined8 *)((longlong)pvVar5 + 0x188) = 0;
      *(undefined8 *)((longlong)pvVar5 + 400) = 0;
      *(undefined8 *)((longlong)pvVar5 + 0x198) = 0;
      puVar19 = (undefined8 *)0x0;
    }
    else {
      iVar7 = (**(code **)*puVar14)(puVar14);
      puVar19 = (undefined8 *)0x0;
      if (iVar7 == 1) {
        puVar19 = puVar14;
      }
      if ((((puVar21 != (undefined8 *)0x0) && (iVar7 == 1)) && (lVar12 = puVar21[0x56], lVar12 != 0)
          ) && ((lVar12 == puVar14[0x56] && (*(char *)(lVar12 + 0x151) != '\0'))))
      goto LAB_14711f0ed;
      FUN_14481f014(local_138,puVar15,0x3ff0000000000000,1);
      pvVar5 = local_1f0;
      memcpy(local_1f0,local_138,0xd0);
      FUN_14481f014(local_138,puVar14,0x3ff0000000000000,1);
      memcpy((void *)((longlong)pvVar5 + 0xd0),local_138,0xd0);
    }
    local_1e8 = (ulonglong)(puVar15 != local_1d8);
    uVar18 = 0;
    pdVar16 = &local_168;
    bVar6 = true;
    local_1d0 = param_1;
    local_1c8 = puVar15;
    local_1b8 = puVar19;
    do {
      bVar13 = bVar6;
      if (puVar21 == (undefined8 *)0x0) {
LAB_14711f2dd:
        pdVar16[2] = *(double *)(param_1 + 0xe8 + (ulonglong)(uVar18 != local_1e8) * 0x18);
        pdVar17 = (double *)(param_1 + 0xd8 + (ulonglong)(uVar18 != local_1e8) * 0x18);
        dVar2 = pdVar17[1];
        *pdVar16 = *pdVar17;
        pdVar16[1] = dVar2;
      }
      else {
        lVar12 = puVar21[0x56];
        if (*(int *)(lVar12 + 0x10) < 1) {
          lVar20 = 0;
        }
        else {
          lVar20 = **(longlong **)(lVar12 + 8);
        }
        if (*(char *)(lVar12 + 0x151) == '\0') goto LAB_14711f2dd;
        FUN_144941734(lVar20,local_138);
        FUN_1402724f4(local_1d0,local_1b0,uVar18 != local_1e8);
        *pdVar16 = local_1b0[0] - local_118;
        pdVar16[1] = local_1b0[1] - local_110;
        pdVar16[2] = local_1b0[2] - local_108;
        lVar8 = uVar18 * 0xd0;
        puVar14 = local_138;
        puVar15 = (undefined8 *)((longlong)local_1f0 + lVar8);
        for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
          *puVar15 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar15 = puVar15 + 1;
        }
        pdVar17 = (double *)((longlong)local_1f0 + lVar8 + 0x88);
        *(longlong *)((longlong)local_1f0 + lVar8 + 0x60) = lVar20 + 0xf0;
        *(longlong *)((longlong)local_1f0 + lVar8 + 0x68) = lVar20 + 0xd8;
        uVar10 = *(undefined8 *)(lVar12 + 0x100);
        *(undefined8 *)((longlong)local_1f0 + lVar8 + 0x70) = *(undefined8 *)(lVar12 + 0xf8);
        *(undefined8 *)((longlong)local_1f0 + lVar8 + 0x78) = uVar10;
        *(undefined8 *)((longlong)local_1f0 + lVar8 + 0x80) = *(undefined8 *)(lVar12 + 0x108);
        FUN_140b8ccd6(lVar12,local_1b0);
        pdVar16 = local_1b0;
        for (lVar12 = 9; puVar19 = local_1b8, lVar12 != 0; lVar12 = lVar12 + -1) {
          *pdVar17 = *pdVar16;
          pdVar16 = pdVar16 + 1;
          pdVar17 = pdVar17 + 1;
        }
      }
      lVar12 = local_1d0;
      pvVar5 = local_1f0;
      uVar18 = 1;
      pdVar16 = &local_150;
      puVar21 = puVar19;
      bVar6 = false;
    } while (bVar13);
    uVar9 = (ulonglong)(local_1c8 == local_1d8);
    dVar2 = *(double *)(local_1d0 + 0xb8 + local_1e8 * 0x18);
    dVar3 = *(double *)(local_1d0 + 0xa8 + local_1e8 * 0x18);
    dVar4 = *(double *)(local_1d0 + 0xb0 + local_1e8 * 0x18);
    puVar1 = (ulonglong *)(local_1d0 + 0xa8 + local_1e8 * 0x18);
    uVar18 = puVar1[1];
    *(ulonglong *)((longlong)local_1f0 + 0x1a0) = *puVar1 ^ 0x8000000000000000;
    *(ulonglong *)((longlong)local_1f0 + 0x1a8) = uVar18 ^ 0x8000000000000000;
    *(double *)((longlong)local_1f0 + 0x1b0) = -dVar2;
    *(double *)((longlong)local_1f0 + 0x1b8) = dVar4 * local_158 - local_160 * dVar2;
    *(double *)((longlong)local_1f0 + 0x1c0) = dVar2 * local_168 - dVar3 * local_158;
    *(double *)((longlong)local_1f0 + 0x1c8) = dVar3 * local_160 - local_168 * dVar4;
    dVar2 = *(double *)(local_1d0 + 0xb8 + uVar9 * 0x18);
    dVar3 = *(double *)(local_1d0 + 0xa8 + uVar9 * 0x18);
    dVar4 = *(double *)(local_1d0 + 0xb0 + uVar9 * 0x18);
    puVar1 = (ulonglong *)(local_1d0 + 0xa8 + uVar9 * 0x18);
    uVar18 = puVar1[1];
    *(ulonglong *)((longlong)local_1f0 + 0x1d0) = *puVar1 ^ 0x8000000000000000;
    *(ulonglong *)((longlong)local_1f0 + 0x1d8) = uVar18 ^ 0x8000000000000000;
    *(double *)((longlong)local_1f0 + 0x1e0) = -dVar2;
    *(double *)((longlong)local_1f0 + 0x1e8) = dVar4 * local_140 - dStack_148 * dVar2;
    *(double *)((longlong)local_1f0 + 0x1f0) = dVar2 * local_150 - dVar3 * local_140;
    *(double *)((longlong)local_1f0 + 0x1f8) = dVar3 * dStack_148 - local_150 * dVar4;
    FUN_140272182(local_1c8,local_1c0,local_1f0,local_1dc);
    FUN_14491be5a(pvVar5);
    *(undefined8 *)((longlong)pvVar5 + 0x260) = *(undefined8 *)(lVar12 + 0x90);
    *(undefined8 *)((longlong)pvVar5 + 0x280) = 0xc7efffffe0000000;
    *(undefined8 *)((longlong)pvVar5 + 0x298) = 0;
    *(undefined8 *)((longlong)pvVar5 + 0x270) = 0;
    *(undefined8 *)((longlong)pvVar5 + 0x278) = 0;
    uVar10 = 1;
  }
  if ((local_60 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 14711f596 FUN_14711f596 body=161 status=ok
// SIG undefined FUN_14711f596(void)

double FUN_14711f596(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  dVar3 = (double)FUN_1471176da();
  dVar4 = (double)FUN_140272328(uVar1,uVar2,*(undefined4 *)(param_1 + 0x38),ABS(dVar3),param_2,
                                param_3);
  return -dVar4 * (double)(-(ulonglong)(0.0 < dVar3) & 0x3ff0000000000000 |
                          ~-(ulonglong)(0.0 < dVar3) &
                          -(ulonglong)(dVar3 < 0.0) & 0xbff0000000000000);
}



// FUNCTION 14711f646 FUN_14711f646 body=38 status=ok
// SIG undefined FUN_14711f646(void)

undefined8 FUN_14711f646(undefined8 param_1,int param_2)

{
  FUN_147121e76();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14711f6fc FUN_14711f6fc body=71 status=ok
// SIG undefined FUN_14711f6fc(void)

undefined8 * FUN_14711f6fc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a1e2790;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14711f74a FUN_14711f74a body=57 status=ok
// SIG undefined FUN_14711f74a(void)

undefined8 * FUN_14711f74a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a1e27b0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14711f784 FUN_14711f784 body=107 status=ok
// SIG undefined FUN_14711f784(void)

longlong * FUN_14711f784(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_145b2f1c6();
  FUN_14123d74c(uVar2,param_1,1,0x10,uVar1 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 14711f7f0 FUN_14711f7f0 body=38 status=ok
// SIG undefined FUN_14711f7f0(void)

undefined8 FUN_14711f7f0(undefined8 param_1,int param_2)

{
  FUN_1410dc120();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14711f816 FUN_14711f816 body=132 status=ok
// SIG undefined FUN_14711f816(void)

void FUN_14711f816(longlong param_1,int param_2)

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



// FUNCTION 14711f8a2 FUN_14711f8a2 body=144 status=ok
// SIG undefined FUN_14711f8a2(void)

void FUN_14711f8a2(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x81) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,4);
  return;
}



// FUNCTION 14711f932 FUN_14711f932 body=125 status=ok
// SIG undefined FUN_14711f932(void)

void FUN_14711f932(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x80;
    if (0x80 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x80 < *(uint *)(param_1 + 0x20c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 2,0);
      iVar2 = (int)(uVar3 >> 2);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x20c) = iVar5;
    FUN_14711f8a2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14711f9b0 FUN_14711f9b0 body=144 status=ok
// SIG undefined FUN_14711f9b0(void)

void FUN_14711f9b0(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x1000);
  if ((uint)param_3 < 0x81) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x1000,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x1000),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x1000,param_2,param_3,0x20);
  return;
}



// FUNCTION 14711fa40 FUN_14711fa40 body=125 status=ok
// SIG undefined FUN_14711fa40(void)

void FUN_14711fa40(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x1008);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x80;
    if (0x80 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x80 < *(uint *)(param_1 + 0x100c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 5,0);
      iVar2 = (int)(uVar3 >> 5);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x100c) = iVar5;
    FUN_14711f9b0(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14711fabe FUN_14711fabe body=142 status=ok
// SIG undefined FUN_14711fabe(void)

void FUN_14711fabe(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x2408);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x80;
    if (0x80 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x80 < *(uint *)(param_1 + 0x240c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x48,0);
      iVar4 = (int)(uVar3 / 0x48);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x240c) = iVar5;
    FUN_14711fb4e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14711fb4e FUN_14711fb4e body=152 status=ok
// SIG undefined FUN_14711fb4e(void)

void FUN_14711fb4e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x2400);
  if ((uint)param_3 < 0x81) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x48);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x2400,0,param_3,0x48);
    memmove(*(void **)((longlong)param_1 + 0x2400),param_1,(longlong)param_2 * 0x48);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x2400,param_2,param_3,0x48);
  return;
}



// FUNCTION 14711fbe6 FUN_14711fbe6 body=97 status=ok
// SIG undefined FUN_14711fbe6(void)

void FUN_14711fbe6(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14576c464(param_1,iVar2);
    }
    FUN_140acbd53((longlong)iVar2 * 0x98 + *param_1,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 14711fc48 FUN_14711fc48 body=107 status=ok
// SIG undefined FUN_14711fc48(void)

longlong * FUN_14711fc48(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_144a3a302();
  FUN_14123d74c(uVar2,param_1,1,0x10,uVar1 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 14711fcb4 FUN_14711fcb4 body=120 status=ok
// SIG undefined FUN_14711fcb4(void)

undefined8 FUN_14711fcb4(longlong param_1,int param_2,int param_3)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x28);
  dVar2 = *(double *)(lVar4 + 0x18 + (longlong)param_2 * 0x50);
  pdVar1 = (double *)(lVar4 + 0x30 + (longlong)param_3 * 0x50);
  if (dVar2 < *pdVar1 || dVar2 == *pdVar1) {
    lVar3 = (longlong)param_2 * 0x50 + lVar4;
    lVar4 = lVar4 + (longlong)param_3 * 0x50;
    if ((((*(double *)(lVar4 + 0x18) < *(double *)(lVar3 + 0x30) ||
           *(double *)(lVar4 + 0x18) == *(double *)(lVar3 + 0x30)) &&
         (*(double *)(lVar3 + 0x20) < *(double *)(lVar4 + 0x38) ||
          *(double *)(lVar3 + 0x20) == *(double *)(lVar4 + 0x38))) &&
        (*(double *)(lVar4 + 0x20) < *(double *)(lVar3 + 0x38) ||
         *(double *)(lVar4 + 0x20) == *(double *)(lVar3 + 0x38))) &&
       ((*(double *)(lVar3 + 0x28) < *(double *)(lVar4 + 0x40) ||
         *(double *)(lVar3 + 0x28) == *(double *)(lVar4 + 0x40) &&
        (*(double *)(lVar4 + 0x28) < *(double *)(lVar3 + 0x40) ||
         *(double *)(lVar4 + 0x28) == *(double *)(lVar3 + 0x40))))) {
      return CONCAT71((int7)((ulonglong)(lVar3 + 0x18) >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 14711fd30 FUN_14711fd30 body=71 status=ok
// SIG undefined FUN_14711fd30(void)

undefined8 * FUN_14711fd30(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a1e3950;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14711fd78 FUN_14711fd78 body=346 status=ok
// SIG undefined FUN_14711fd78(void)

undefined4 * FUN_14711fd78(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  undefined8 *puVar9;
  uint *puVar10;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14711fed4(param_1,local_50);
  puVar1 = (undefined8 *)param_3[1];
  *local_48 = *(uint *)*param_3;
  puVar9 = puVar1;
  puVar10 = local_48 + 4;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined8 *)puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 2;
  }
  FUN_1456d3a3a(local_48 + 0x1c,puVar1 + 0xc);
  local_48[0x3c] = *(uint *)(puVar1 + 0x1c);
  local_48[0x40] = 0xffffffff;
  local_54 = local_50[0];
  uVar5 = *local_48;
  cVar3 = FUN_14711ffc0(param_1,uVar5,local_48,&local_54);
  uVar2 = local_54;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar4) {
      uVar7 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_48[0x41] = uVar5;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_48[0x40] =
           *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1471200dc(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14711fed4 FUN_14711fed4 body=235 status=ok
// SIG undefined FUN_14711fed4(void)

int * FUN_14711fed4(longlong *param_1,int *param_2)

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
      FUN_1417456d2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x110);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x110) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x110 + *param_1;
  return param_2;
}



// FUNCTION 14711ffc0 FUN_14711ffc0 body=162 status=ok
// SIG undefined FUN_14711ffc0(void)

undefined8 FUN_14711ffc0(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x110);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x110) == *param_3) {
          FUN_14003d612((longlong)_Dst + 0x70);
          memmove(_Dst,param_3,0x100);
          FUN_147120062(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x100);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147120062 FUN_147120062 body=122 status=ok
// SIG undefined FUN_147120062(void)

void FUN_147120062(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x110) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x110) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x110 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1471200dc FUN_1471200dc body=432 status=ok
// SIG undefined FUN_1471200dc(void)

void FUN_1471200dc(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x110;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x104 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x100 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 14712028e FUN_14712028e body=143 status=ok
// SIG undefined FUN_14712028e(void)

void FUN_14712028e(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14712031e FUN_14712031e body=143 status=ok
// SIG undefined FUN_14712031e(void)

void FUN_14712031e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x78,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x78)) {
      uVar5 = uVar4 / 0x78 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x78,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1471203ae FUN_1471203ae body=313 status=ok
// SIG undefined FUN_1471203ae(void)

void FUN_1471203ae(longlong *param_1)

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
      FUN_14003d612(*local_68 + (longlong)iStack_4c * 0x110 + 0x70);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1403c5a5e(param_1,0);
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



// FUNCTION 1471204e8 FUN_1471204e8 body=48 status=ok
// SIG undefined FUN_1471204e8(void)

void FUN_1471204e8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x50,8);
  }
  return;
}



// FUNCTION 147120518 FUN_147120518 body=147 status=ok
// SIG undefined FUN_147120518(void)

void FUN_147120518(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1471205ac FUN_1471205ac body=116 status=ok
// SIG undefined FUN_1471205ac(void)

longlong FUN_1471205ac(longlong param_1,longlong param_2)

{
  FUN_147120620(param_1 + 0x10,param_2 + 0x10);
  FUN_147120680(param_1 + 0x20,param_2 + 0x20);
  FUN_1471206de(param_1 + 0x30,param_2 + 0x30);
  FUN_147120740(param_1 + 0x40,param_2 + 0x40);
  FUN_1471207a0(param_1 + 0x50,param_2 + 0x50);
  FUN_1471207fc(param_1 + 0x60,param_2 + 0x60);
  FUN_14711fbe6(param_1 + 0x70,param_2 + 0x70);
  return param_1;
}



// FUNCTION 147120620 FUN_147120620 body=96 status=ok
// SIG undefined FUN_147120620(void)

void FUN_147120620(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14174450c(param_1,iVar2);
    }
    FUN_140acac33((longlong)iVar2 * 0x30 + *param_1,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 147120680 FUN_147120680 body=94 status=ok
// SIG undefined FUN_147120680(void)

void FUN_147120680(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1471029fa(param_1,iVar2);
    }
    FUN_140acac7d((longlong)iVar2 * 0x58 + *param_1,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 1471206de FUN_1471206de body=98 status=ok
// SIG undefined FUN_1471206de(void)

void FUN_1471206de(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_147102a90(param_1,iVar2);
    }
    FUN_140cbcc22((longlong)iVar2 * 0x50 + *param_1,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 147120740 FUN_147120740 body=95 status=ok
// SIG undefined FUN_147120740(void)

void FUN_147120740(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_147102c2e(param_1,iVar2);
  }
  FUN_140acb0e9((longlong)iVar2 * 0x60 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1471207a0 FUN_1471207a0 body=91 status=ok
// SIG undefined FUN_1471207a0(void)

void FUN_1471207a0(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_147102b9e(param_1,iVar2);
  }
  FUN_147102d31((longlong)iVar2 * 0x58 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1471207fc FUN_1471207fc body=95 status=ok
// SIG undefined FUN_1471207fc(void)

void FUN_1471207fc(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140acb960(param_1,iVar2);
    }
    FUN_140acb4e6((longlong)iVar2 * 0xb8 + *param_1,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 14712085c FUN_14712085c body=119 status=ok
// SIG undefined FUN_14712085c(void)

void FUN_14712085c(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0xb8 + lVar1);
  FUN_14003d6a9(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0xb8),(longlong)iVar3 * 0xb8);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1471208d4 FUN_1471208d4 body=48 status=ok
// SIG undefined FUN_1471208d4(void)

void FUN_1471208d4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147120908 FUN_147120908 body=183 status=ok
// SIG undefined FUN_147120908(void)

void FUN_147120908(undefined8 param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [4];
  undefined4 local_8c;
  undefined1 local_88 [56];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (0 < *param_2) {
    piVar1 = param_2 + 7;
    lVar2 = 0;
    do {
      FUN_1404187a4(piVar1,local_88,&DAT_14c846480,0);
      local_90[0] = 0;
      local_8c = (undefined4)lVar2;
      FUN_1471210d6(param_1,local_88,local_90);
      lVar2 = lVar2 + 1;
      piVar1 = piVar1 + 0xc;
    } while (lVar2 < *param_2);
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471209c0 FUN_1471209c0 body=200 status=ok
// SIG undefined FUN_1471209c0(void)

void FUN_1471209c0(undefined8 param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [4];
  undefined4 local_8c;
  undefined1 local_88 [56];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (0 < param_2[1]) {
    piVar1 = param_2 + (longlong)*param_2 * 0xc + 7;
    lVar2 = 0;
    do {
      FUN_14052646c(piVar1,local_88,&DAT_14c846480,0);
      local_90[0] = 1;
      local_8c = (undefined4)lVar2;
      FUN_1471210d6(param_1,local_88,local_90);
      lVar2 = lVar2 + 1;
      piVar1 = piVar1 + 0x16;
    } while (lVar2 < param_2[1]);
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147120a8a FUN_147120a8a body=211 status=ok
// SIG undefined FUN_147120a8a(void)

void FUN_147120a8a(undefined8 param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [4];
  undefined4 local_8c;
  undefined1 local_88 [56];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (0 < param_2[2]) {
    piVar1 = param_2 + (longlong)*param_2 * 0xc + (longlong)param_2[1] * 0x16 + 7;
    lVar2 = 0;
    do {
      FUN_144b0c900(piVar1,local_88,&DAT_14c846480,0);
      local_90[0] = 2;
      local_8c = (undefined4)lVar2;
      FUN_1471210d6(param_1,local_88,local_90);
      lVar2 = lVar2 + 1;
      piVar1 = piVar1 + 0x14;
    } while (lVar2 < param_2[2]);
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147120b5e FUN_147120b5e body=351 status=ok
// SIG undefined FUN_147120b5e(void)

void FUN_147120b5e(undefined8 param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_158 [40];
  undefined1 local_130 [56];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [56];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (0 < param_2[3]) {
    piVar1 = param_2 + (longlong)param_2[1] * 0x16 +
                       (longlong)param_2[2] * 0x14 + (longlong)*param_2 * 0xc + 0x1b;
    lVar2 = 0;
    do {
      FUN_144b0bd4e(local_98,*(undefined8 *)(piVar1 + -0x10),piVar1[-0xe]);
      local_f8 = *(undefined8 *)(piVar1 + -4);
      uStack_f0 = *(undefined8 *)(piVar1 + -2);
      local_e8 = *(undefined8 *)piVar1;
      uStack_e0 = *(undefined8 *)(piVar1 + 2);
      local_d8 = piVar1[-0xc];
      iStack_d4 = piVar1[-0xb];
      iStack_d0 = piVar1[-10];
      iStack_cc = piVar1[-9];
      local_c8 = *(undefined8 *)(piVar1 + -8);
      uStack_c0 = 0;
      local_b8 = 0x3ff0000000000000;
      uStack_b0 = 0x3ff0000000000000;
      local_a8 = 0x3ff0000000000000;
      uStack_a0 = 0;
      FUN_144a1c3a2(local_98,local_130,&local_f8);
      local_f8 = CONCAT71(local_f8._1_7_,3);
      local_f8 = CONCAT44((int)lVar2,(undefined4)local_f8);
      FUN_1471210d6(param_1,local_130,&local_f8);
      lVar2 = lVar2 + 1;
      piVar1 = piVar1 + 0x18;
    } while (lVar2 < param_2[3]);
  }
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147120cbe FUN_147120cbe body=245 status=ok
// SIG undefined FUN_147120cbe(void)

void FUN_147120cbe(undefined8 param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [4];
  undefined4 local_8c;
  undefined1 local_88 [56];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (0 < param_2[4]) {
    piVar1 = param_2 + (longlong)*param_2 * 0xc +
                       (longlong)param_2[1] * 0x16 +
                       (longlong)param_2[2] * 0x14 + (longlong)param_2[3] * 0x18 + 7;
    lVar2 = 0;
    do {
      FUN_14711cfec(piVar1,local_88,&DAT_14c846480,0);
      local_90[0] = 4;
      local_8c = (undefined4)lVar2;
      FUN_1471210d6(param_1,local_88,local_90);
      lVar2 = lVar2 + 1;
      piVar1 = piVar1 + 0x16;
    } while (lVar2 < param_2[4]);
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147120db4 FUN_147120db4 body=218 status=ok
// SIG undefined FUN_147120db4(void)

void FUN_147120db4(undefined8 param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined1 local_70 [56];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0 < param_2[5]) {
    piVar1 = param_2 + (longlong)param_2[3] * 0x18 +
                       (longlong)param_2[4] * 0x16 +
                       (longlong)param_2[1] * 0x16 +
                       (longlong)param_2[2] * 0x14 + (longlong)*param_2 * 0xc + 7;
    lVar2 = 0;
    do {
      FUN_140acbad4(piVar1,local_70);
      local_78[0] = 5;
      local_74 = (undefined4)lVar2;
      FUN_1471210d6(param_1,local_70,local_78);
      lVar2 = lVar2 + 1;
      piVar1 = piVar1 + 0x2e;
    } while (lVar2 < param_2[5]);
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147120e90 FUN_147120e90 body=238 status=ok
// SIG undefined FUN_147120e90(void)

void FUN_147120e90(undefined8 param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined1 local_70 [56];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0 < param_2[6]) {
    piVar1 = param_2 + (longlong)param_2[5] * 0x2e +
                       (longlong)param_2[3] * 0x18 +
                       (longlong)param_2[4] * 0x16 +
                       (longlong)param_2[1] * 0x16 +
                       (longlong)param_2[2] * 0x14 + (longlong)*param_2 * 0xc + 0xd;
    lVar2 = 0;
    do {
      FUN_144b0bd4e(local_70,piVar1,3);
      local_78[0] = 6;
      local_74 = (undefined4)lVar2;
      FUN_1471210d6(param_1,local_70,local_78);
      lVar2 = lVar2 + 1;
      piVar1 = piVar1 + 0x26;
    } while (lVar2 < param_2[6]);
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147120f80 FUN_147120f80 body=265 status=ok
// SIG undefined FUN_147120f80(void)

void FUN_147120f80(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  void *_Src;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar2 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    local_40 = (void *)0x0;
    _Src = *(void **)(param_1 + 0x28);
    local_38 = iVar2;
    FUN_1471216d4(&local_40,iVar2);
    memcpy(local_40,_Src,(longlong)iVar2 * 0x50);
    iVar2 = DAT_14c9abe50;
    if (*(int *)(param_1 + 0x20) != 0) {
      local_38 = local_38 - *(int *)(param_1 + 0x20);
    }
    iVar4 = local_38;
    lVar8 = (longlong)local_38;
    lVar7 = (longlong)DAT_14c9abe50;
    iVar5 = local_38 * 0x50 + DAT_14c9abe50 + 8;
    uVar6 = DAT_14c9abe54 - DAT_14c9abe50;
    DAT_14c9abe50 = iVar5;
    if (uVar6 < local_38 * 0x50 + 8U) {
      FUN_1447403be(&DAT_14c9abe48,iVar2);
    }
    puVar1 = (undefined4 *)(DAT_14c9abe48 + lVar7);
    *puVar1 = uVar3;
    puVar1[1] = iVar4;
    memcpy(puVar1 + 2,local_40,(lVar8 << 0x24) + (lVar8 << 0x26) >> 0x20);
    if (local_40 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14712108e FUN_14712108e body=71 status=ok
// SIG undefined FUN_14712108e(void)

undefined8 * FUN_14712108e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a1e39f0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1471210d6 FUN_1471210d6 body=1087 status=ok
// SIG undefined FUN_1471210d6(void)

void FUN_1471210d6(longlong param_1,double *param_2,undefined8 *param_3)

{
  double *pdVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  
  iVar8 = *(int *)(param_1 + 0x10);
  lVar15 = (longlong)iVar8;
  if (lVar15 == -1) {
    iVar8 = FUN_147121516(param_1);
    *(int *)(param_1 + 0x10) = iVar8;
    lVar15 = *(longlong *)(param_1 + 0x28);
    lVar11 = (longlong)iVar8 * 0x50;
    *(double *)(lVar15 + 0x48 + lVar11) = param_2[6];
    dVar22 = *param_2;
    dVar23 = param_2[1];
    dVar24 = param_2[2];
    dVar6 = param_2[3];
    dVar3 = param_2[5];
    pdVar1 = (double *)(lVar15 + 0x38 + lVar11);
    *pdVar1 = param_2[4];
    pdVar1[1] = dVar3;
    pdVar1 = (double *)(lVar15 + 0x28 + lVar11);
    *pdVar1 = dVar24;
    pdVar1[1] = dVar6;
    pdVar1 = (double *)(lVar15 + 0x18 + lVar11);
    *pdVar1 = dVar22;
    pdVar1[1] = dVar23;
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x10) * 0x50) =
         *param_3;
  }
  else {
    lVar11 = *(longlong *)(param_1 + 0x28);
    if (*(int *)(lVar11 + 0xc + lVar15 * 0x50) != -1) {
      dVar22 = param_2[5];
      dVar23 = param_2[4];
      dVar24 = param_2[3];
      dVar6 = param_2[2];
      dVar3 = *param_2;
      dVar4 = param_2[1];
      do {
        iVar8 = *(int *)(lVar11 + 8 + lVar15 * 0x50);
        lVar13 = (longlong)iVar8 * 0x50;
        uVar18 = (undefined4)((ulonglong)dVar22 >> 0x20);
        dVar5 = *(double *)(lVar11 + 0x40 + lVar13);
        uVar16 = SUB84(dVar22,0);
        uVar17 = uVar18;
        if (dVar22 <= dVar5) {
          uVar16 = SUB84(dVar5,0);
          uVar17 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        iVar10 = *(int *)(lVar11 + 0xc + lVar15 * 0x50);
        uVar21 = (undefined4)((ulonglong)dVar23 >> 0x20);
        dVar5 = *(double *)(lVar11 + 0x38 + lVar13);
        uVar19 = SUB84(dVar23,0);
        uVar20 = uVar21;
        if (dVar23 <= dVar5) {
          uVar19 = SUB84(dVar5,0);
          uVar20 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        uVar26 = (undefined4)((ulonglong)dVar24 >> 0x20);
        dVar5 = *(double *)(lVar11 + 0x30 + lVar13);
        uVar25 = SUB84(dVar24,0);
        uVar27 = uVar26;
        if (dVar24 <= dVar5) {
          uVar25 = SUB84(dVar5,0);
          uVar27 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        uVar30 = SUB84(dVar6,0);
        uVar37 = (undefined4)((ulonglong)dVar6 >> 0x20);
        dVar5 = *(double *)(lVar11 + 0x28 + lVar13);
        uVar31 = uVar30;
        uVar38 = uVar37;
        if (dVar5 <= dVar6) {
          uVar31 = SUB84(dVar5,0);
          uVar38 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        uVar32 = SUB84(dVar4,0);
        uVar39 = (undefined4)((ulonglong)dVar4 >> 0x20);
        dVar5 = *(double *)(lVar11 + 0x20 + lVar13);
        uVar33 = uVar32;
        uVar40 = uVar39;
        if (dVar5 <= dVar4) {
          uVar33 = SUB84(dVar5,0);
          uVar40 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        uVar34 = SUB84(dVar3,0);
        uVar41 = (undefined4)((ulonglong)dVar3 >> 0x20);
        dVar5 = *(double *)(lVar11 + 0x18 + lVar13);
        uVar35 = uVar34;
        uVar42 = uVar41;
        if (dVar5 <= dVar3) {
          uVar35 = SUB84(dVar5,0);
          uVar42 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        lVar15 = (longlong)iVar10 * 0x50;
        dVar5 = *(double *)(lVar11 + 0x40 + lVar15);
        uVar36 = SUB84(dVar22,0);
        if (dVar22 <= dVar5) {
          uVar36 = SUB84(dVar5,0);
          uVar18 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        dVar5 = *(double *)(lVar11 + 0x38 + lVar15);
        uVar29 = SUB84(dVar23,0);
        if (dVar23 <= dVar5) {
          uVar29 = SUB84(dVar5,0);
          uVar21 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        dVar5 = *(double *)(lVar11 + 0x30 + lVar15);
        uVar28 = SUB84(dVar24,0);
        if (dVar24 <= dVar5) {
          uVar28 = SUB84(dVar5,0);
          uVar26 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        dVar5 = *(double *)(lVar11 + 0x28 + lVar15);
        if (dVar5 <= dVar6) {
          uVar30 = SUB84(dVar5,0);
          uVar37 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        dVar5 = *(double *)(lVar11 + 0x20 + lVar15);
        if (dVar5 <= dVar4) {
          uVar32 = SUB84(dVar5,0);
          uVar39 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        dVar5 = *(double *)(lVar11 + 0x18 + lVar15);
        if (dVar5 <= dVar3) {
          uVar34 = SUB84(dVar5,0);
          uVar41 = (undefined4)((ulonglong)dVar5 >> 0x20);
        }
        if (((double)CONCAT44(uVar26,uVar28) - (double)CONCAT44(uVar41,uVar34)) *
            ((double)CONCAT44(uVar21,uVar29) - (double)CONCAT44(uVar39,uVar32)) *
            ((double)CONCAT44(uVar18,uVar36) - (double)CONCAT44(uVar37,uVar30)) <=
            ((double)CONCAT44(uVar27,uVar25) - (double)CONCAT44(uVar42,uVar35)) *
            ((double)CONCAT44(uVar20,uVar19) - (double)CONCAT44(uVar40,uVar33)) *
            ((double)CONCAT44(uVar17,uVar16) - (double)CONCAT44(uVar38,uVar31))) {
          iVar8 = iVar10;
        }
        lVar15 = (longlong)iVar8;
      } while (*(int *)(lVar11 + 0xc + lVar15 * 0x50) != -1);
    }
    iVar9 = FUN_147121516(param_1);
    lVar11 = *(longlong *)(param_1 + 0x28);
    lVar13 = (longlong)iVar9 * 0x50;
    uVar16 = *(undefined4 *)((longlong)param_2 + 4);
    uVar17 = *(undefined4 *)(param_2 + 1);
    uVar18 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar19 = *(undefined4 *)(param_2 + 2);
    uVar20 = *(undefined4 *)((longlong)param_2 + 0x14);
    uVar21 = *(undefined4 *)(param_2 + 3);
    uVar25 = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar27 = *(undefined4 *)(param_2 + 4);
    uVar26 = *(undefined4 *)((longlong)param_2 + 0x24);
    uVar31 = *(undefined4 *)(param_2 + 5);
    uVar38 = *(undefined4 *)((longlong)param_2 + 0x2c);
    puVar2 = (undefined4 *)(lVar11 + 0x18 + lVar13);
    *puVar2 = *(undefined4 *)param_2;
    puVar2[1] = uVar16;
    puVar2[2] = uVar17;
    puVar2[3] = uVar18;
    puVar2 = (undefined4 *)(lVar11 + 0x28 + lVar13);
    *puVar2 = uVar19;
    puVar2[1] = uVar20;
    puVar2[2] = uVar21;
    puVar2[3] = uVar25;
    puVar2 = (undefined4 *)(lVar11 + 0x38 + lVar13);
    *puVar2 = uVar27;
    puVar2[1] = uVar26;
    puVar2[2] = uVar31;
    puVar2[3] = uVar38;
    *(double *)(lVar11 + 0x48 + lVar13) = param_2[6];
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar13) = *param_3;
    iVar10 = FUN_147121516(param_1);
    lVar14 = (longlong)iVar10 * 0x50;
    *(int *)(*(longlong *)(param_1 + 0x28) + 8 + lVar14) = iVar8;
    *(int *)(*(longlong *)(param_1 + 0x28) + 0xc + lVar14) = iVar9;
    lVar11 = *(longlong *)(param_1 + 0x28);
    lVar15 = lVar15 * 0x50;
    dVar22 = *(double *)(lVar11 + 0x40 + lVar15);
    uVar16 = SUB84(dVar22,0);
    uVar17 = (undefined4)((ulonglong)dVar22 >> 0x20);
    dVar23 = *(double *)(lVar11 + 0x40 + lVar13);
    if (dVar22 <= dVar23) {
      uVar16 = SUB84(dVar23,0);
      uVar17 = (undefined4)((ulonglong)dVar23 >> 0x20);
    }
    dVar22 = *(double *)(lVar11 + 0x38 + lVar15);
    uVar18 = SUB84(dVar22,0);
    uVar19 = (undefined4)((ulonglong)dVar22 >> 0x20);
    dVar23 = *(double *)(lVar11 + 0x38 + lVar13);
    if (dVar22 <= dVar23) {
      uVar18 = SUB84(dVar23,0);
      uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
    }
    dVar22 = *(double *)(lVar11 + 0x30 + lVar15);
    uVar20 = SUB84(dVar22,0);
    uVar21 = (undefined4)((ulonglong)dVar22 >> 0x20);
    dVar23 = *(double *)(lVar11 + 0x30 + lVar13);
    if (dVar22 <= dVar23) {
      uVar20 = SUB84(dVar23,0);
      uVar21 = (undefined4)((ulonglong)dVar23 >> 0x20);
    }
    dVar22 = *(double *)(lVar11 + 0x28 + lVar15);
    dVar23 = *(double *)(lVar11 + 0x28 + lVar13);
    if (dVar23 <= dVar22) {
      dVar22 = dVar23;
    }
    dVar23 = *(double *)(lVar11 + 0x18 + lVar15);
    dVar24 = *(double *)(lVar11 + 0x20 + lVar15);
    dVar6 = *(double *)(lVar11 + 0x20 + lVar13);
    if (dVar6 <= dVar24) {
      dVar24 = dVar6;
    }
    dVar6 = *(double *)(lVar11 + 0x18 + lVar13);
    if (dVar6 <= dVar23) {
      dVar23 = dVar6;
    }
    *(double *)(lVar11 + 0x18 + lVar14) = dVar23;
    *(double *)(lVar11 + 0x20 + lVar14) = dVar24;
    *(double *)(lVar11 + 0x28 + lVar14) = dVar22;
    *(ulonglong *)(lVar11 + 0x30 + lVar14) = CONCAT44(uVar21,uVar20);
    *(ulonglong *)(lVar11 + 0x38 + lVar14) = CONCAT44(uVar19,uVar18);
    *(ulonglong *)(lVar11 + 0x40 + lVar14) = CONCAT44(uVar17,uVar16);
    *(undefined1 *)(lVar11 + 0x48 + lVar14) = 1;
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x14 + lVar14) = 1;
    iVar9 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar15);
    *(int *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar15) = iVar10;
    *(int *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar13) = iVar10;
    if ((longlong)iVar9 == -1) {
      *(int *)(param_1 + 0x10) = iVar10;
    }
    else {
      *(int *)(*(longlong *)(param_1 + 0x28) + 0x10 + (longlong)iVar10 * 0x50) = iVar9;
      lVar11 = (longlong)iVar9 * 0x50;
      lVar15 = *(longlong *)(param_1 + 0x28) + lVar11;
      if (*(int *)(*(longlong *)(param_1 + 0x28) + 8 + lVar11) == iVar8) {
        *(int *)(lVar15 + 8) = iVar10;
      }
      else {
        *(int *)(lVar15 + 0xc) = iVar10;
      }
    }
    if (iVar10 != -1) {
      lVar15 = *(longlong *)(param_1 + 0x28);
      do {
        lVar11 = (longlong)iVar10 * 0x50;
        lVar13 = (longlong)*(int *)(lVar15 + 8 + lVar11) * 0x50;
        lVar14 = (longlong)*(int *)(lVar15 + 0xc + lVar11) * 0x50;
        dVar22 = *(double *)(lVar15 + 0x40 + lVar13);
        uVar16 = SUB84(dVar22,0);
        uVar17 = (undefined4)((ulonglong)dVar22 >> 0x20);
        dVar23 = *(double *)(lVar15 + 0x40 + lVar14);
        if (dVar22 <= dVar23) {
          uVar16 = SUB84(dVar23,0);
          uVar17 = (undefined4)((ulonglong)dVar23 >> 0x20);
        }
        dVar22 = *(double *)(lVar15 + 0x38 + lVar13);
        uVar18 = SUB84(dVar22,0);
        uVar19 = (undefined4)((ulonglong)dVar22 >> 0x20);
        dVar23 = *(double *)(lVar15 + 0x38 + lVar14);
        if (dVar22 <= dVar23) {
          uVar18 = SUB84(dVar23,0);
          uVar19 = (undefined4)((ulonglong)dVar23 >> 0x20);
        }
        dVar22 = *(double *)(lVar15 + 0x30 + lVar13);
        uVar20 = SUB84(dVar22,0);
        uVar21 = (undefined4)((ulonglong)dVar22 >> 0x20);
        dVar23 = *(double *)(lVar15 + 0x30 + lVar14);
        if (dVar22 <= dVar23) {
          uVar20 = SUB84(dVar23,0);
          uVar21 = (undefined4)((ulonglong)dVar23 >> 0x20);
        }
        dVar22 = *(double *)(lVar15 + 0x28 + lVar13);
        dVar23 = *(double *)(lVar15 + 0x28 + lVar14);
        if (dVar23 <= dVar22) {
          dVar22 = dVar23;
        }
        dVar23 = *(double *)(lVar15 + 0x20 + lVar13);
        dVar24 = *(double *)(lVar15 + 0x20 + lVar14);
        if (dVar24 <= dVar23) {
          dVar23 = dVar24;
        }
        dVar24 = *(double *)(lVar15 + 0x18 + lVar13);
        dVar6 = *(double *)(lVar15 + 0x18 + lVar14);
        if (dVar6 <= dVar24) {
          dVar24 = dVar6;
        }
        *(double *)(lVar15 + 0x18 + lVar11) = dVar24;
        *(double *)(lVar15 + 0x20 + lVar11) = dVar23;
        *(double *)(lVar15 + 0x28 + lVar11) = dVar22;
        *(ulonglong *)(lVar15 + 0x30 + lVar11) = CONCAT44(uVar21,uVar20);
        *(ulonglong *)(lVar15 + 0x38 + lVar11) = CONCAT44(uVar19,uVar18);
        *(ulonglong *)(lVar15 + 0x40 + lVar11) = CONCAT44(uVar17,uVar16);
        *(undefined1 *)(lVar15 + 0x48 + lVar11) = 1;
        uVar7 = *(uint *)(lVar15 + 0x14 + lVar13);
        uVar12 = *(uint *)(lVar15 + 0x14 + lVar14);
        if (uVar12 < uVar7) {
          uVar12 = uVar7;
        }
        *(uint *)(*(longlong *)(param_1 + 0x28) + 0x14 + lVar11) = uVar12 + 1;
        lVar15 = *(longlong *)(param_1 + 0x28);
        iVar10 = *(int *)(lVar15 + 0x10 + lVar11);
      } while (iVar10 != -1);
    }
  }
  return;
}



// FUNCTION 147121516 FUN_147121516 body=297 status=ok
// SIG undefined FUN_147121516(void)

void FUN_147121516(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar4 == 0) {
    uVar2 = *(uint *)(param_1 + 0x30);
    uVar6 = 8;
    if (uVar2 != 0) {
      uVar6 = uVar2 * 2;
    }
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    plVar1 = (longlong *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x24) < (int)uVar6) {
      FUN_14480809c(plVar1);
    }
    uVar7 = uVar6 - uVar2;
    if (uVar2 <= uVar6 && uVar7 != 0) {
      do {
        uVar6 = uVar6 - 1;
        iVar4 = *(int *)(param_1 + 0x20);
        uVar5 = iVar4 + 1;
        *(uint *)(param_1 + 0x20) = uVar5;
        if (*(uint *)(param_1 + 0x24) < uVar5) {
          FUN_1447808da(plVar1);
        }
        *(uint *)(*plVar1 + (longlong)iVar4 * 4) = uVar6;
      } while (uVar6 != uVar2);
    }
    iVar4 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = iVar4 + uVar7;
    if ((uint)(*(int *)(param_1 + 0x34) - iVar4) < uVar7) {
      FUN_147121640(param_1 + 0x28);
    }
    memset((void *)((longlong)iVar4 * 0x50 + *(longlong *)(param_1 + 0x28)),0,
           (longlong)(int)uVar7 * 0x50);
    iVar4 = *(int *)(param_1 + 0x20);
  }
  lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar4 + -1) * 4) * 0x50;
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar3) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 8 + lVar3) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xc + lVar3) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x14 + lVar3) = 0;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  return;
}



// FUNCTION 147121640 FUN_147121640 body=147 status=ok
// SIG undefined FUN_147121640(void)

void FUN_147121640(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1471216d4 FUN_1471216d4 body=105 status=ok
// SIG undefined FUN_1471216d4(void)

undefined8 FUN_1471216d4(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x50,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x50)) {
    uVar5 = uVar2 / 0x50 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x50,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 14712173d FUN_14712173d body=183 status=ok
// SIG undefined FUN_14712173d(void)

undefined8 FUN_14712173d(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1459d3a5c();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471217f6 FUN_1471217f6 body=132 status=ok
// SIG undefined FUN_1471217f6(void)

void FUN_1471217f6(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14712187c FUN_14712187c body=297 status=ok
// SIG undefined FUN_14712187c(void)

void FUN_14712187c(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar4 == 0) {
    uVar2 = *(uint *)(param_1 + 0x30);
    uVar6 = 8;
    if (uVar2 != 0) {
      uVar6 = uVar2 * 2;
    }
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    plVar1 = (longlong *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x24) < (int)uVar6) {
      FUN_14480809c(plVar1);
    }
    uVar7 = uVar6 - uVar2;
    if (uVar2 <= uVar6 && uVar7 != 0) {
      do {
        uVar6 = uVar6 - 1;
        iVar4 = *(int *)(param_1 + 0x20);
        uVar5 = iVar4 + 1;
        *(uint *)(param_1 + 0x20) = uVar5;
        if (*(uint *)(param_1 + 0x24) < uVar5) {
          FUN_1447808da(plVar1);
        }
        *(uint *)(*plVar1 + (longlong)iVar4 * 4) = uVar6;
      } while (uVar6 != uVar2);
    }
    iVar4 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = iVar4 + uVar7;
    if ((uint)(*(int *)(param_1 + 0x34) - iVar4) < uVar7) {
      FUN_147120518(param_1 + 0x28);
    }
    memset((void *)((longlong)iVar4 * 0x50 + *(longlong *)(param_1 + 0x28)),0,
           (longlong)(int)uVar7 * 0x50);
    iVar4 = *(int *)(param_1 + 0x20);
  }
  lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar4 + -1) * 4) * 0x50;
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xc + lVar3) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 4 + lVar3) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 8 + lVar3) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar3) = 0;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  return;
}



// FUNCTION 1471219a6 FUN_1471219a6 body=105 status=ok
// SIG undefined FUN_1471219a6(void)

undefined8 FUN_1471219a6(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x50,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x50)) {
    uVar5 = uVar2 / 0x50 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x50,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 147121a14 FUN_147121a14 body=71 status=ok
// SIG undefined FUN_147121a14(void)

undefined8 * FUN_147121a14(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a1e3a20;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147121a67 FUN_147121a67 body=27 status=ok
// SIG undefined FUN_147121a67(void)

void FUN_147121a67(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 147121a82 FUN_147121a82 body=132 status=ok
// SIG undefined FUN_147121a82(void)

void FUN_147121a82(longlong param_1,int param_2)

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



// FUNCTION 147121b08 FUN_147121b08 body=123 status=ok
// SIG undefined FUN_147121b08(void)

int FUN_147121b08(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar3 = *param_1;
    lVar4 = (longlong)(int)param_1[1] << 3;
    iVar2 = 0;
    do {
      cVar1 = FUN_1404853da(lVar3,param_2);
      if (cVar1 != '\0') {
        if (iVar2 != 1) {
          return -iVar2;
        }
        break;
      }
      lVar3 = lVar3 + 8;
      iVar2 = iVar2 + -1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1410872ba(param_1,iVar2);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = *param_2;
  return iVar2;
}



// FUNCTION 147121b84 FUN_147121b84 body=149 status=ok
// SIG undefined FUN_147121b84(void)

void FUN_147121b84(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  
  if (param_3 != 0) {
    lVar3 = *param_1;
    lVar1 = lVar3 + (longlong)param_2 * 8;
    lVar8 = 0;
    do {
      iVar7 = (int)lVar8;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar3 + (longlong)(int)param_1[6] * 8) = param_2 + iVar7;
      }
      *(undefined4 *)(lVar1 + lVar8 * 8) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar1 + 4 + lVar8 * 8) = uVar5;
      iVar6 = param_2 + iVar7;
      *(int *)(param_1 + 6) = iVar6;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar9 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar9 = param_1 + 2;
      }
      iVar7 = param_2 + iVar7 + 0x1f;
      if (-1 < iVar6) {
        iVar7 = iVar6;
      }
      bVar4 = (byte)iVar6 & 0x1f;
      puVar2 = (uint *)((longlong)plVar9 + (longlong)(iVar7 >> 5) * 4);
      *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      lVar8 = lVar8 + 1;
    } while (param_3 != (int)lVar8);
  }
  return;
}



// FUNCTION 147121c1a FUN_147121c1a body=48 status=ok
// SIG undefined FUN_147121c1a(void)

void FUN_147121c1a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147121c4a FUN_147121c4a body=48 status=ok
// SIG undefined FUN_147121c4a(void)

void FUN_147121c4a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147121c7a FUN_147121c7a body=48 status=ok
// SIG undefined FUN_147121c7a(void)

void FUN_147121c7a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147121caa FUN_147121caa body=48 status=ok
// SIG undefined FUN_147121caa(void)

void FUN_147121caa(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147121cda FUN_147121cda body=48 status=ok
// SIG undefined FUN_147121cda(void)

void FUN_147121cda(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147121d0a FUN_147121d0a body=48 status=ok
// SIG undefined FUN_147121d0a(void)

void FUN_147121d0a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147121d3a FUN_147121d3a body=48 status=ok
// SIG undefined FUN_147121d3a(void)

void FUN_147121d3a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147121d6a FUN_147121d6a body=48 status=ok
// SIG undefined FUN_147121d6a(void)

void FUN_147121d6a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147121d9a FUN_147121d9a body=48 status=ok
// SIG undefined FUN_147121d9a(void)

void FUN_147121d9a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147121e08 FUN_147121e08 body=110 status=ok
// SIG undefined FUN_147121e08(void)

ulonglong FUN_147121e08(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x98) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147121e41;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x98,8);
      param_2 = param_2 / 0x98;
    }
  }
LAB_147121e41:
  return param_2 & 0xffffffff;
}



// FUNCTION 147121e76 FUN_147121e76 body=70 status=ok
// SIG undefined FUN_147121e76(void)

void FUN_147121e76(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1e1b50;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_147121ebc(param_1 + 0x72);
  FUN_1405d133e(param_1);
  return;
}



// FUNCTION 147121ebc FUN_147121ebc body=52 status=ok
// SIG undefined FUN_147121ebc(void)

void FUN_147121ebc(longlong *param_1)

{
  FUN_1471203ae();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147121ef0 FUN_147121ef0 body=45 status=ok
// SIG undefined FUN_147121ef0(void)

undefined8 *
FUN_147121ef0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  param_1[6] = param_8;
  param_1[7] = param_9;
  param_1[8] = param_10;
  return param_1;
}



// FUNCTION 147121f1e FUN_147121f1e body=758 status=ok
// SIG undefined FUN_147121f1e(void)

double * FUN_147121f1e(double *param_1,double *param_2,double *param_3)

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
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_1[0x17];
  dVar4 = param_1[0x14];
  dVar5 = param_3[2];
  dVar6 = param_1[0x1a];
  dVar7 = param_1[0x16];
  dVar8 = param_1[0x13];
  dVar9 = param_1[0x19];
  dVar10 = param_1[0x15];
  dVar11 = param_1[0x12];
  dVar12 = param_1[0x18];
  dVar13 = param_1[8];
  dVar14 = param_1[7];
  dVar15 = param_1[4];
  dVar16 = param_1[6];
  dVar17 = param_1[3];
  dVar18 = param_3[3];
  dVar19 = param_3[4];
  dVar20 = param_3[5];
  dVar21 = param_1[5];
  dVar22 = param_1[1];
  dVar23 = *param_1;
  dVar24 = param_1[2];
  dVar25 = param_1[0xe];
  dVar26 = param_1[0xb];
  dVar27 = param_1[0x11];
  dVar28 = param_1[0xd];
  dVar29 = param_1[10];
  dVar30 = param_1[0x10];
  *param_2 = dVar20 * param_1[0xf] + dVar18 * param_1[9] + dVar19 * param_1[0xc] +
             dVar16 * dVar5 + dVar23 * dVar1 + dVar2 * dVar17;
  param_2[1] = dVar30 * dVar20 + dVar29 * dVar18 + dVar28 * dVar19 +
               dVar14 * dVar5 + dVar22 * dVar1 + dVar15 * dVar2;
  param_2[2] = dVar27 * dVar20 + dVar26 * dVar18 + dVar25 * dVar19 +
               dVar13 * dVar5 + dVar24 * dVar1 + dVar2 * dVar21;
  param_2[3] = dVar24 * dVar20 + dVar23 * dVar18 + dVar22 * dVar19 +
               dVar12 * dVar5 + dVar11 * dVar1 + dVar10 * dVar2;
  param_2[4] = dVar21 * dVar20 + dVar17 * dVar18 + dVar15 * dVar19 +
               dVar9 * dVar5 + dVar8 * dVar1 + dVar7 * dVar2;
  param_2[5] = dVar13 * dVar20 + dVar16 * dVar18 + dVar14 * dVar19 +
               dVar6 * dVar5 + dVar4 * dVar1 + dVar3 * dVar2;
  return param_2;
}



// FUNCTION 147122214 FUN_147122214 body=39 status=ok
// SIG undefined FUN_147122214(void)

void FUN_147122214(void)

{
  FUN_144aa92a6();
  return;
}



// FUNCTION 147122240 FUN_147122240 body=275 status=ok
// SIG undefined FUN_147122240(void)

undefined8 * FUN_147122240(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
  param_1[4] = 0;
  lVar1 = 0x3d;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1 + -0x15) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + -5) = 0xffffffff;
    *(undefined2 *)((longlong)param_1 + lVar1 + -1) = 0;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0xfd);
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined1 (*) [16])(param_1 + 0x1d) = (undefined1  [16])0x0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x21) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0xffffffff;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11f) = 0;
  *param_1 = &PTR_FUN_14a1e3d50;
  param_1[3] = &PTR_FUN_14a1e4260;
  FUN_146825acc(param_1 + 0x25,0);
  uVar2 = FUN_1467b7a4e();
  FUN_1446f470e(&local_20,uVar2,1);
  DAT_14ca85550 = FUN_14741398a(local_20);
  DAT_14ca84e40 = 0x4000;
  DAT_14ca84d90 = 0xf;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147122354 FUN_147122354 body=85 status=ok
// SIG undefined FUN_147122354(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147122354(void)

{
  DAT_14c760db4 = (&DAT_14ca814b8)[(ulonglong)DAT_14ca85550 * 0xf];
  _DAT_14ca85070 = 0x9b000e009b;
  DAT_14ca85078 = 0x31;
  DAT_14ca84df4 = 1;
  FUN_145ec9638();
  DAT_14ca84d88 = 1;
  return;
}



// FUNCTION 1471223ac FUN_1471223ac body=43 status=ok
// SIG undefined FUN_1471223ac(void)

undefined8 FUN_1471223ac(undefined8 param_1,int param_2)

{
  FUN_14712361e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 1471223ee FUN_1471223ee body=64 status=ok
// SIG undefined FUN_1471223ee(void)

undefined8 * FUN_1471223ee(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  FUN_144a9d3d4(puVar1,1);
  *puVar1 = &PTR_FUN_14a1e4840;
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14712242e FUN_14712242e body=64 status=ok
// SIG undefined FUN_14712242e(void)

undefined8 * FUN_14712242e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  FUN_144a9d3d4(puVar1,2);
  *puVar1 = &PTR_FUN_14a1e4858;
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14712246e FUN_14712246e body=64 status=ok
// SIG undefined FUN_14712246e(void)

undefined8 * FUN_14712246e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  FUN_144a9d3d4(puVar1,3);
  *puVar1 = &PTR_FUN_14a1e4868;
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1471224ae FUN_1471224ae body=64 status=ok
// SIG undefined FUN_1471224ae(void)

undefined8 * FUN_1471224ae(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  FUN_144a9d3d4(puVar1,4);
  *puVar1 = &PTR_FUN_14a1e4878;
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1471224ee FUN_1471224ee body=64 status=ok
// SIG undefined FUN_1471224ee(void)

undefined8 * FUN_1471224ee(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  FUN_144a9d3d4(puVar1,5);
  *puVar1 = &PTR_FUN_14a1e4890;
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14712252e FUN_14712252e body=111 status=ok
// SIG undefined FUN_14712252e(void)

undefined8 * FUN_14712252e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0xa0);
  FUN_144a9d3d4(puVar1);
  *(undefined4 *)(puVar1 + 2) = 0;
  memset(puVar1 + 3,0,0x84);
  *(undefined1 *)((longlong)puVar1 + 0x9c) = 3;
  *(byte *)((longlong)puVar1 + 0x9d) = *(byte *)((longlong)puVar1 + 0x9d) & 0xfc;
  *(undefined2 *)((longlong)puVar1 + 0x9e) = 0;
  *puVar1 = &PTR_FUN_14a1e48a8;
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14712259e FUN_14712259e body=104 status=ok
// SIG undefined FUN_14712259e(void)

undefined8 * FUN_14712259e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0xa0);
  FUN_144a9d3d4(puVar1);
  *(undefined4 *)(puVar1 + 2) = 0;
  memset(puVar1 + 3,0,0x85);
  *(byte *)((longlong)puVar1 + 0x9d) = *(byte *)((longlong)puVar1 + 0x9d) & 0xfc;
  *(undefined2 *)((longlong)puVar1 + 0x9e) = 0;
  *puVar1 = &PTR_FUN_14a1e48b0;
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 147122606 FUN_147122606 body=111 status=ok
// SIG undefined FUN_147122606(void)

undefined8 * FUN_147122606(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0xa0);
  FUN_144a9d3d4(puVar1);
  *(undefined4 *)(puVar1 + 2) = 0;
  memset(puVar1 + 3,0,0x84);
  *(undefined1 *)((longlong)puVar1 + 0x9c) = 4;
  *(byte *)((longlong)puVar1 + 0x9d) = *(byte *)((longlong)puVar1 + 0x9d) & 0xfc;
  *(undefined2 *)((longlong)puVar1 + 0x9e) = 0;
  *puVar1 = &PTR_FUN_14a1e48b8;
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 147122690 FUN_147122690 body=122 status=ok
// SIG undefined FUN_147122690(void)

undefined8 * FUN_147122690(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0xa8);
  FUN_144a9d3d4(puVar1);
  *(undefined4 *)(puVar1 + 2) = 0;
  memset(puVar1 + 3,0,0x84);
  *(undefined1 *)((longlong)puVar1 + 0x9c) = 5;
  *(byte *)((longlong)puVar1 + 0x9d) = *(byte *)((longlong)puVar1 + 0x9d) & 0xfc;
  *(undefined2 *)((longlong)puVar1 + 0x9e) = 0;
  *puVar1 = &PTR_FUN_14a1e48c0;
  puVar1[0x14] = 0;
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 147122722 FUN_147122722 body=93 status=ok
// SIG undefined FUN_147122722(void)

undefined8 * FUN_147122722(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14494321d(0x20);
  uVar1 = *param_3;
  FUN_144a9d3d4(puVar2,0x1b);
  *puVar2 = &PTR_LAB_14a1e4900;
  *(undefined4 *)(puVar2 + 2) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x14) = uVar1;
  *puVar2 = &PTR_FUN_14a1e48d0;
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 147122788 FUN_147122788 body=76 status=ok
// SIG undefined FUN_147122788(void)

undefined8 * FUN_147122788(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x28);
  FUN_144a9d3d4(puVar1,0x23);
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14a1e4b10;
  puVar1[3] = 0;
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1471227d4 FUN_1471227d4 body=64 status=ok
// SIG undefined FUN_1471227d4(void)

undefined8 * FUN_1471227d4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  FUN_144a9d3d4(puVar1,0x10);
  *puVar1 = &PTR_FUN_14a1e4928;
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 147122814 FUN_147122814 body=26 status=ok
// SIG undefined FUN_147122814(void)

undefined8 FUN_147122814(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x118))();
  return param_2;
}



// FUNCTION 14712282e FUN_14712282e body=95 status=ok
// SIG undefined FUN_14712282e(void)

undefined8 * FUN_14712282e(undefined8 param_1,undefined8 *param_2,void *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0xf0);
  FUN_144a9d3d4(puVar1,0xd);
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_14a1e4930;
  memcpy(puVar1 + 3,param_3,0xd8);
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14712288e FUN_14712288e body=26 status=ok
// SIG undefined FUN_14712288e(void)

undefined8 FUN_14712288e(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x128))();
  return param_2;
}



// FUNCTION 1471228a8 FUN_1471228a8 body=101 status=ok
// SIG undefined FUN_1471228a8(void)

undefined8 * FUN_1471228a8(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14494321d(0x20);
  lVar1 = *param_3;
  FUN_144a9d3d4(puVar2,0xe);
  *puVar2 = &PTR_FUN_14a1e4950;
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined2 *)(puVar2 + 3) = 1;
  *puVar2 = &PTR_FUN_14a1e4940;
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 14712291a FUN_14712291a body=98 status=ok
// SIG undefined FUN_14712291a(void)

undefined8 *
FUN_14712291a(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x30);
  FUN_144a9d3d4(puVar1,0x12);
  *puVar1 = &PTR_FUN_14a1e4960;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_4;
  if (param_4 != 0) {
    LOCK();
    *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_4 + 0x84);
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 147122980 FUN_147122980 body=117 status=ok
// SIG undefined FUN_147122980(void)

undefined8 *
FUN_147122980(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5,longlong param_6)

{
  undefined8 *puVar1;
  
  if (*(longlong **)(param_6 + 8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_6 + 8) + 0x18))();
  }
  puVar1 = (undefined8 *)FUN_14494321d(0x30);
  FUN_144a9d3d4(puVar1,0x13);
  puVar1[2] = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  *puVar1 = &PTR_FUN_14a1e4968;
  puVar1[4] = *param_4;
  *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_4 + 1);
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 147122a0e FUN_147122a0e body=70 status=ok
// SIG undefined FUN_147122a0e(void)

undefined8 *
FUN_147122a0e(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x60);
  FUN_1400f7c82(puVar1,param_4);
  *puVar1 = &PTR_FUN_14a1e4980;
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 147122a54 FUN_147122a54 body=327 status=ok
// SIG undefined FUN_147122a54(void)

undefined8 *
FUN_147122a54(undefined8 param_1,undefined8 *param_2,ulonglong param_3,longlong param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined4 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,longlong *param_12)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint local_6c;
  undefined4 local_68;
  ulonglong local_64;
  undefined4 local_5c;
  undefined1 local_58;
  undefined2 local_57;
  undefined1 local_55;
  undefined2 local_54;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_6c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_64 = param_3 & 0xffffffff | param_4 << 0x20;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_7c = DAT_14ca8508c;
  uStack_78 = DAT_14ca85090;
  uStack_74 = DAT_14ca85094;
  uStack_70 = DAT_14ca85098;
  local_88 = param_7;
  local_55 = param_5;
  local_54 = 0xff00;
  local_5c = 0x10001;
  local_58 = param_6;
  local_57 = 1;
  local_80 = DAT_14ca85088;
  local_68 = 0;
  local_50 = param_8;
  local_48 = param_11;
  puVar2 = (undefined8 *)*param_12;
  if (puVar2 != (undefined8 *)0x0) {
    *param_12 = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)FUN_14494321d(0x60);
  FUN_1400f7c82(puVar2,&local_88);
  *puVar2 = &PTR_FUN_14a1e4980;
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147122b9c FUN_147122b9c body=109 status=ok
// SIG undefined FUN_147122b9c(void)

undefined8 *
FUN_147122b9c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14494321d(0x28);
  FUN_144a9d3d4(puVar2,0x20);
  *puVar2 = &PTR_FUN_14a1e49d0;
  puVar2[2] = param_4;
  if (param_4 != 0) {
    LOCK();
    *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
    UNLOCK();
  }
  uVar1 = param_5[1];
  puVar2[3] = *param_5;
  puVar2[4] = uVar1;
  *puVar2 = &PTR_FUN_14a1e49c0;
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 147122c0a FUN_147122c0a body=109 status=ok
// SIG undefined FUN_147122c0a(void)

undefined8 *
FUN_147122c0a(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14494321d(0x28);
  FUN_144a9d3d4(puVar2,0x1f);
  *puVar2 = &PTR_FUN_14a1e49d0;
  puVar2[2] = param_4;
  if (param_4 != 0) {
    LOCK();
    *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 1;
    UNLOCK();
  }
  uVar1 = param_5[1];
  puVar2[3] = *param_5;
  puVar2[4] = uVar1;
  *puVar2 = &PTR_FUN_14a1e49e0;
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 147122c88 FUN_147122c88 body=327 status=ok
// SIG undefined FUN_147122c88(void)

undefined8 *
FUN_147122c88(undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined1 param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 uStack_94;
  uint local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined2 local_74;
  undefined4 local_70;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar5 = (**(code **)(*param_3 + 8))(param_3);
  uVar1 = *(undefined1 *)(lVar5 + 0x33);
  bVar4 = (byte)DAT_14c760da4 & 0x1f;
  lVar5 = (**(code **)(*param_3 + 8))(param_3);
  uVar2 = *(undefined4 *)(lVar5 + 8);
  local_b8 = *(undefined4 *)(lVar5 + 0xc);
  uStack_b4 = *(undefined4 *)(lVar5 + 0x10);
  uStack_b0 = *(undefined4 *)(lVar5 + 0x14);
  uStack_ac = *(undefined4 *)(lVar5 + 0x18);
  puVar6 = (undefined8 *)(**(code **)(*param_3 + 8))(param_3);
  uVar3 = *puVar6;
  lVar5 = (**(code **)(*param_3 + 8))(param_3);
  local_77 = *(undefined1 *)(lVar5 + 0x31);
  local_76 = 0;
  local_74 = 0xff00;
  local_7c = 0x10001;
  local_9c = CONCAT44(uStack_b4,local_b8);
  uStack_94 = CONCAT44(uStack_ac,uStack_b0);
  local_88 = 0;
  local_70 = 0;
  local_68 = L"FNullDynamicRHI::RHIAsyncReallocateTexture2D";
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_a8 = uVar3;
  local_a0 = uVar2;
  local_8c = ~(-1 << bVar4);
  local_84 = CONCAT44(param_6,param_5);
  local_78 = param_4;
  local_75 = uVar1;
  puVar6 = (undefined8 *)FUN_14494321d(0x60);
  FUN_1400f7c82(puVar6,&local_a8);
  *puVar6 = &PTR_FUN_14a1e4980;
  *param_2 = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147122dd8 FUN_147122dd8 body=151 status=ok
// SIG undefined FUN_147122dd8(void)

undefined8
FUN_147122dd8(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5,undefined8 param_6,ulonglong *param_7)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 unaff_RBP;
  
  *param_5 = 0;
  lVar3 = (**(code **)(*param_2 + 8))(param_2);
  uVar1 = *(undefined1 *)(lVar3 + 0x33);
  lVar3 = (**(code **)(*param_2 + 8))(param_2);
  iVar2 = *(int *)(lVar3 + 0x28);
  lVar3 = (**(code **)(*param_2 + 8))(param_2);
  uVar4 = FUN_14072ec41(*(undefined4 *)(lVar3 + 0x24),iVar2,0,
                        CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff);
  if (param_7 != (ulonglong *)0x0) {
    *param_7 = uVar4;
  }
  *param_5 = (int)(uVar4 / (ulonglong)(longlong)iVar2);
  FUN_146825b04(param_1 + 0x128,uVar4);
  return *(undefined8 *)(param_1 + 0x128);
}



// FUNCTION 147122e72 FUN_147122e72 body=125 status=ok
// SIG undefined FUN_147122e72(void)

undefined8 FUN_147122e72(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  undefined4 *in_stack_00000030;
  
  *in_stack_00000030 = 0;
  lVar3 = (**(code **)(*param_2 + 8))(param_2);
  uVar1 = *(undefined1 *)(lVar3 + 0x33);
  lVar3 = (**(code **)(*param_2 + 8))(param_2);
  iVar2 = *(int *)(lVar3 + 0x28);
  lVar3 = (**(code **)(*param_2 + 8))(param_2);
  uVar4 = FUN_14072ec41(*(undefined4 *)(lVar3 + 0x24),iVar2,0,
                        CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  *in_stack_00000030 = (int)(uVar4 / (ulonglong)(longlong)iVar2);
  FUN_146825b04(param_1 + 0x128,uVar4);
  return *(undefined8 *)(param_1 + 0x128);
}



// FUNCTION 147122ef8 FUN_147122ef8 body=128 status=ok
// SIG undefined FUN_147122ef8(void)

undefined8 FUN_147122ef8(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  undefined4 *in_stack_00000038;
  
  *in_stack_00000038 = 0;
  lVar3 = (**(code **)(*param_2 + 8))(param_2);
  uVar1 = *(undefined1 *)(lVar3 + 0x33);
  lVar3 = (**(code **)(*param_2 + 8))(param_2);
  iVar2 = *(int *)(lVar3 + 0x24);
  lVar3 = (**(code **)(*param_2 + 8))(param_2);
  uVar4 = FUN_14072ec41(*(undefined4 *)(lVar3 + 0x24),iVar2,0,
                        CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  *in_stack_00000038 = (int)(uVar4 / (ulonglong)(longlong)iVar2);
  FUN_146825b04(param_1 + 0x128,uVar4);
  return *(undefined8 *)(param_1 + 0x128);
}



// FUNCTION 147122f80 FUN_147122f80 body=92 status=ok
// SIG undefined FUN_147122f80(void)

void FUN_147122f80(undefined8 param_1,undefined8 param_2,int *param_3,longlong *param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (param_3[3] - param_3[1]) * (param_3[2] - *param_3);
  iVar1 = (int)param_4[1];
  *(uint *)(param_4 + 1) = uVar2 + iVar1;
  if ((uint)(*(int *)((longlong)param_4 + 0xc) - iVar1) < uVar2) {
    FUN_14602b1fc(param_4);
  }
  memset((void *)((longlong)iVar1 * 4 + *param_4),0,(longlong)(int)uVar2 << 2);
  return;
}



// FUNCTION 147122fe4 FUN_147122fe4 body=64 status=ok
// SIG undefined FUN_147122fe4(void)

undefined8 * FUN_147122fe4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  FUN_144a9d3d4(puVar1,0x1c);
  *puVar1 = &PTR_FUN_14a1e4a50;
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 147123030 FUN_147123030 body=232 status=ok
// SIG undefined FUN_147123030(void)

undefined8 * FUN_147123030(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined4 local_60;
  undefined1 *local_5c;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined2 local_4d;
  undefined1 local_4b;
  undefined4 local_48;
  wchar_t *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_74 = 0;
  uStack_6c = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_4e = 0;
  local_80 = 1;
  local_4d = 2;
  local_5c = &DAT_100000001;
  local_54 = 0x10001;
  local_50 = 0x101;
  local_78 = 1;
  local_60 = 0;
  local_4b = 0xff;
  local_48 = 0;
  local_40 = L"FNullDynamicRHI::RHIGetViewportBackBuffer";
  puVar1 = (undefined8 *)FUN_14494321d(0x60);
  FUN_1400f7c82(puVar1,&local_80);
  *puVar1 = &PTR_FUN_14a1e4980;
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147123146 FUN_147123146 body=64 status=ok
// SIG undefined FUN_147123146(void)

undefined8 * FUN_147123146(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  FUN_144a9d3d4(puVar1,0x1e);
  *puVar1 = &PTR_FUN_14a1e4ab0;
  *param_2 = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar1 + 1) = *(int *)(puVar1 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1471231da FUN_1471231da body=37 status=ok
// SIG undefined FUN_1471231da(void)

undefined8 FUN_1471231da(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_146825b04(param_1 + 0x128,*(undefined4 *)(param_3 + 0x20));
  return *(undefined8 *)(param_1 + 0x128);
}



// FUNCTION 147123242 FUN_147123242 body=32 status=ok
// SIG undefined FUN_147123242(void)

undefined8 * FUN_147123242(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  *param_2 = 0;
  FUN_147123b8c(param_3);
  return param_2;
}



// FUNCTION 147123296 FUN_147123296 body=50 status=ok
// SIG undefined FUN_147123296(void)

longlong FUN_147123296(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x18;
  FUN_14712361e(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 147123310 FUN_147123310 body=61 status=ok
// SIG undefined FUN_147123310(void)

void FUN_147123310(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3) != 0) {
        thunk_FUN_1400020a8(*(longlong *)(lVar1 + lVar3),0x48);
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
  }
  return;
}



// FUNCTION 14712334e FUN_14712334e body=61 status=ok
// SIG undefined FUN_14712334e(void)

void FUN_14712334e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3) != 0) {
        thunk_FUN_1400020a8(*(longlong *)(lVar1 + lVar3),0x48);
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
  }
  return;
}



// FUNCTION 14712338e FUN_14712338e body=61 status=ok
// SIG undefined FUN_14712338e(void)

void FUN_14712338e(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_3[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_3;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3) != 0) {
        thunk_FUN_1400020a8(*(longlong *)(lVar1 + lVar3),0x10);
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
  }
  return;
}



// FUNCTION 1471233cc FUN_1471233cc body=61 status=ok
// SIG undefined FUN_1471233cc(void)

void FUN_1471233cc(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3) != 0) {
        thunk_FUN_1400020a8(*(longlong *)(lVar1 + lVar3),0x10);
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
  }
  return;
}



// FUNCTION 14712347c FUN_14712347c body=29 status=ok
// SIG undefined FUN_14712347c(void)

void FUN_14712347c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14a1e47e0;
  return;
}



// FUNCTION 14712349a FUN_14712349a body=36 status=ok
// SIG undefined FUN_14712349a(void)

undefined8 FUN_14712349a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1471234da FUN_1471234da body=93 status=ok
// SIG undefined FUN_1471234da(void)

void FUN_1471234da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a1e4770;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147123538 FUN_147123538 body=123 status=ok
// SIG undefined FUN_147123538(void)

void FUN_147123538(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a1e4770;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1471235c0 FUN_1471235c0 body=21 status=ok
// SIG undefined FUN_1471235c0(void)

undefined8 FUN_1471235c0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1471235d6 FUN_1471235d6 body=34 status=ok
// SIG undefined FUN_1471235d6(void)

undefined8 FUN_1471235d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 147123604 FUN_147123604 body=26 status=ok
// SIG undefined FUN_147123604(void)

void FUN_147123604(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14494321d(0x140);
  FUN_147122240(uVar1);
  return;
}



// FUNCTION 14712361e FUN_14712361e body=102 status=ok
// SIG undefined FUN_14712361e(void)

void FUN_14712361e(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a1e3d50;
  param_1[3] = &PTR_FUN_14a1e4260;
  FUN_146825af6(param_1 + 0x25);
  param_1[3] = &PTR_LAB_14a1e4500;
  if (param_1[0x22] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x22] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14631aa72(param_1);
  return;
}



// FUNCTION 147123684 FUN_147123684 body=44 status=ok
// SIG undefined FUN_147123684(void)

undefined8 * FUN_147123684(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1471236c6 FUN_1471236c6 body=44 status=ok
// SIG undefined FUN_1471236c6(void)

undefined8 * FUN_1471236c6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1471236f6 FUN_1471236f6 body=44 status=ok
// SIG undefined FUN_1471236f6(void)

undefined8 * FUN_1471236f6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 147123726 FUN_147123726 body=44 status=ok
// SIG undefined FUN_147123726(void)

undefined8 * FUN_147123726(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 147123756 FUN_147123756 body=44 status=ok
// SIG undefined FUN_147123756(void)

undefined8 * FUN_147123756(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14712378a FUN_14712378a body=43 status=ok
// SIG undefined FUN_14712378a(void)

undefined8 FUN_14712378a(undefined8 param_1,int param_2)

{
  FUN_140540150();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1471237b6 FUN_1471237b6 body=43 status=ok
// SIG undefined FUN_1471237b6(void)

undefined8 FUN_1471237b6(undefined8 param_1,int param_2)

{
  FUN_140540150();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1471237e2 FUN_1471237e2 body=43 status=ok
// SIG undefined FUN_1471237e2(void)

undefined8 FUN_1471237e2(undefined8 param_1,int param_2)

{
  FUN_140540150();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 14712380e FUN_14712380e body=43 status=ok
// SIG undefined FUN_14712380e(void)

undefined8 FUN_14712380e(undefined8 param_1,int param_2)

{
  FUN_140540150();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 14712383a FUN_14712383a body=44 status=ok
// SIG undefined FUN_14712383a(void)

undefined8 * FUN_14712383a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 147123878 FUN_147123878 body=43 status=ok
// SIG undefined FUN_147123878(void)

undefined8 FUN_147123878(undefined8 param_1,int param_2)

{
  FUN_1471238b4();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1471238b4 FUN_1471238b4 body=68 status=ok
// SIG undefined FUN_1471238b4(void)

void FUN_1471238b4(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a1e4b10;
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_FUN_14a37f858;
  return;
}



// FUNCTION 1471238f8 FUN_1471238f8 body=44 status=ok
// SIG undefined FUN_1471238f8(void)

undefined8 * FUN_1471238f8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 147123924 FUN_147123924 body=44 status=ok
// SIG undefined FUN_147123924(void)

undefined8 * FUN_147123924(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 14712396c FUN_14712396c body=43 status=ok
// SIG undefined FUN_14712396c(void)

undefined8 FUN_14712396c(undefined8 param_1,int param_2)

{
  FUN_142b745fc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14712399e FUN_14712399e body=43 status=ok
// SIG undefined FUN_14712399e(void)

undefined8 FUN_14712399e(undefined8 param_1,int param_2)

{
  FUN_142b745fc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1471239ca FUN_1471239ca body=43 status=ok
// SIG undefined FUN_1471239ca(void)

undefined8 FUN_1471239ca(undefined8 param_1,int param_2)

{
  FUN_1446fc30e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1471239f6 FUN_1471239f6 body=44 status=ok
// SIG undefined FUN_1471239f6(void)

undefined8 * FUN_1471239f6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 147123a26 FUN_147123a26 body=44 status=ok
// SIG undefined FUN_147123a26(void)

undefined8 * FUN_147123a26(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 147123a84 FUN_147123a84 body=43 status=ok
// SIG undefined FUN_147123a84(void)

undefined8 FUN_147123a84(undefined8 param_1,int param_2)

{
  FUN_144aa9b48();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147123ac2 FUN_147123ac2 body=43 status=ok
// SIG undefined FUN_147123ac2(void)

undefined8 FUN_147123ac2(undefined8 param_1,int param_2)

{
  FUN_144aa9b48();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147123aee FUN_147123aee body=43 status=ok
// SIG undefined FUN_147123aee(void)

undefined8 FUN_147123aee(undefined8 param_1,int param_2)

{
  FUN_144aa9b48();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 147123b1a FUN_147123b1a body=44 status=ok
// SIG undefined FUN_147123b1a(void)

undefined8 * FUN_147123b1a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 147123b46 FUN_147123b46 body=44 status=ok
// SIG undefined FUN_147123b46(void)

undefined8 * FUN_147123b46(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 147123b8c FUN_147123b8c body=100 status=ok
// SIG undefined FUN_147123b8c(void)

void FUN_147123b8c(longlong *param_1)

{
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_147123bf0(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147123bf0 FUN_147123bf0 body=67 status=ok
// SIG undefined FUN_147123bf0(void)

void FUN_147123bf0(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + lVar4 * 8);
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
      lVar4 = lVar4 + 1;
    } while (param_2 != (int)lVar4);
  }
  return;
}



// FUNCTION 147123c33 FUN_147123c33 body=355 status=ok
// SIG undefined FUN_147123c33(void)

wchar_t * FUN_147123c33(int param_1)

{
  if (param_1 < 0x3d) {
    switch(param_1) {
    case 10:
      return L"DXGI_FORMAT_R16G16B16A16_FLOAT";
    case 0xb:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x11:
    case 0x12:
    case 0x16:
    case 0x17:
    case 0x19:
    case 0x1a:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
      break;
    case 0xc:
      return L"DXGI_FORMAT_R16G16B16A16_UINT";
    case 0x10:
      return L"DXGI_FORMAT_R32G32_FLOAT";
    case 0x13:
      return L"DXGI_FORMAT_R32G8X24_TYPELESS";
    case 0x14:
      return L"DXGI_FORMAT_D32_FLOAT_S8X24_UINT";
    case 0x15:
      return L"DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS";
    case 0x18:
      return L"DXGI_FORMAT_R10G10B10A2_UNORM";
    case 0x1b:
      return L"DXGI_FORMAT_R8G8B8A8_TYPELESS";
    case 0x1c:
      return L"DXGI_FORMAT_R8G8B8A8_UNORM";
    case 0x22:
      return L"DXGI_FORMAT_R16G16_FLOAT";
    case 0x23:
      return L"DXGI_FORMAT_R16G16_UNORM";
    case 0x24:
      return L"DXGI_FORMAT_R16G16_UINT";
    case 0x25:
      return L"DXGI_FORMAT_R16G16_SNORM";
    case 0x29:
      return L"DXGI_FORMAT_R32_FLOAT";
    case 0x2d:
      return L"DXGI_FORMAT_D24_UNORM_S8_UINT";
    case 0x2e:
      return L"DXGI_FORMAT_R24_UNORM_X8_TYPELESS";
    case 0x33:
      return L"DXGI_FORMAT_R8G8_SNORM";
    default:
      if (param_1 == 0) {
        return L"DXGI_FORMAT_UNKNOWN";
      }
      if (param_1 == 2) {
        return L"DXGI_FORMAT_R32G32B32A32_FLOAT";
      }
    }
  }
  else if (param_1 < 0x47) {
    if (param_1 == 0x3d) {
      return L"DXGI_FORMAT_R8_UNORM";
    }
    if (param_1 == 0x42) {
      return L"DXGI_FORMAT_R1_UNORM";
    }
  }
  else {
    switch(param_1) {
    case 0x47:
      return L"DXGI_FORMAT_BC1_UNORM";
    case 0x48:
    case 0x49:
    case 0x4b:
    case 0x4c:
    case 0x4e:
    case 0x4f:
    case 0x51:
    case 0x52:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x59:
      break;
    case 0x4a:
      return L"DXGI_FORMAT_BC2_UNORM";
    case 0x4d:
      return L"DXGI_FORMAT_BC3_UNORM";
    case 0x50:
      return L"DXGI_FORMAT_BC4_UNORM";
    case 0x53:
      return L"DXGI_FORMAT_BC5_UNORM";
    case 0x57:
      return L"DXGI_FORMAT_B8G8R8A8_UNORM";
    case 0x58:
      return L"DXGI_FORMAT_B8G8R8X8_UNORM";
    case 0x5a:
      return L"DXGI_FORMAT_B8G8R8A8_TYPELESS";
    default:
      if (param_1 == 0x5f) {
        return L"DXGI_FORMAT_BC6H_UF16";
      }
      if (param_1 == 0x62) {
        return L"DXGI_FORMAT_BC7_UNORM";
      }
    }
  }
  return L"";
}



// FUNCTION 147123d96 FUN_147123d96 body=228 status=ok
// SIG undefined FUN_147123d96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147123d96(longlong *param_1)

{
  undefined4 uVar1;
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
  undefined4 uVar14;
  undefined4 uVar15;
  longlong lVar16;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar13 = DAT_14c9abfe0_4;
  uVar14 = (undefined4)lRam000000014c9abfe8;
  uVar15 = lRam000000014c9abfe8._4_4_;
  local_58 = _DAT_14c9abfe0;
  uStack_54 = DAT_14c9abfe0_4;
  uStack_50 = (undefined4)lRam000000014c9abfe8;
  uStack_4c = lRam000000014c9abfe8._4_4_;
  uVar9 = (undefined4)DAT_14c9abfd0;
  uVar10 = DAT_14c9abfd0._4_4_;
  uVar11 = (undefined4)lRam000000014c9abfd8;
  uVar12 = lRam000000014c9abfd8._4_4_;
  local_68 = (undefined4)DAT_14c9abfd0;
  uStack_64 = DAT_14c9abfd0._4_4_;
  uStack_60 = (undefined4)lRam000000014c9abfd8;
  uStack_5c = lRam000000014c9abfd8._4_4_;
  uVar5 = (undefined4)DAT_14c9abfc0;
  uVar6 = DAT_14c9abfc0._4_4_;
  uVar7 = (undefined4)lRam000000014c9abfc8;
  uVar8 = lRam000000014c9abfc8._4_4_;
  local_78 = (undefined4)DAT_14c9abfc0;
  uStack_74 = DAT_14c9abfc0._4_4_;
  uStack_70 = (undefined4)lRam000000014c9abfc8;
  uStack_6c = lRam000000014c9abfc8._4_4_;
  uVar1 = (undefined4)DAT_14c9abfb0;
  uVar2 = DAT_14c9abfb0._4_4_;
  uVar3 = (undefined4)lRam000000014c9abfb8;
  uVar4 = lRam000000014c9abfb8._4_4_;
  local_88 = (undefined4)DAT_14c9abfb0;
  uStack_84 = DAT_14c9abfb0._4_4_;
  uStack_80 = (undefined4)lRam000000014c9abfb8;
  uStack_7c = lRam000000014c9abfb8._4_4_;
  DAT_14c9abfb0 = *param_1;
  lRam000000014c9abfb8 = param_1[1];
  DAT_14c9abfc0 = param_1[2];
  lRam000000014c9abfc8 = param_1[3];
  DAT_14c9abfd0 = param_1[4];
  lRam000000014c9abfd8 = param_1[5];
  lRam000000014c9abfe8 = param_1[7];
  lVar16 = param_1[6];
  *(undefined4 *)(param_1 + 6) = _DAT_14c9abfe0;
  _DAT_14c9abfe0 = lVar16;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar13;
  *(undefined4 *)(param_1 + 7) = uVar14;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar15;
  *(undefined4 *)(param_1 + 4) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar10;
  *(undefined4 *)(param_1 + 5) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar12;
  *(undefined4 *)(param_1 + 2) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
  *(undefined4 *)(param_1 + 3) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar8;
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147123e9c FUN_147123e9c body=99 status=ok
// SIG undefined FUN_147123e9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_147123e9c(longlong *param_1)

{
  if (param_1 != &DAT_14c9ac0a8) {
    FUN_145e08fc8(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = DAT_14c9ac0a8;
    DAT_14c9ac0a8 = 0;
    *(undefined4 *)(param_1 + 1) = DAT_14c9ac0b0;
    *(undefined4 *)((longlong)param_1 + 0xc) = DAT_14c9ac0b4;
    _DAT_14c9ac0b0 = 0;
  }
  return param_1;
}



// FUNCTION 147123eff FUN_147123eff body=1276 status=ok
// SIG undefined FUN_147123eff(void)

void FUN_147123eff(ulonglong *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                  longlong *param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  void *pvVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 uVar11;
  longlong lVar12;
  void *pvVar13;
  uint uVar14;
  void *pvVar15;
  size_t sVar16;
  void *_Dst;
  undefined8 *puVar17;
  void *pvVar18;
  longlong lVar19;
  undefined1 auStack_d8 [40];
  ulonglong local_b0;
  int local_a4;
  longlong local_a0;
  ulonglong local_98;
  undefined8 *local_90;
  ulonglong local_88;
  void *local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_90 = param_4;
  local_70 = param_2;
  local_68 = param_3;
  if ((longlong)(int)param_5[1] != 0) {
    lVar19 = *param_5;
    lVar10 = (longlong)(int)param_5[1] * 0x88;
    lVar12 = 0;
    local_a0 = lVar19;
    local_78 = lVar10;
    do {
      if ((*(int *)(lVar19 + lVar12) != -1) && (*(longlong *)(lVar19 + 0x10 + lVar12) != 0)) {
        FUN_144706182(param_1);
        iVar6 = *(int *)(local_90 + 1);
        if ((longlong)iVar6 != 0) {
          pvVar13 = (void *)*local_90;
          uVar3 = *(undefined8 *)(lVar19 + 0x10 + lVar12);
          puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar7 = puVar17 + 0xb;
          if ((undefined8 *)param_1[1] < puVar7) {
            FUN_140023dd8(param_1,0x60);
            puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
            puVar7 = puVar17 + 0xb;
          }
          *param_1 = (ulonglong)puVar7;
          *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
          *(undefined8 **)param_1[6] = puVar17;
          param_1[6] = (ulonglong)(puVar17 + 1);
          sVar16 = (longlong)iVar6 * 0x10;
          pvVar18 = (void *)(*param_1 + 7 & 0xfffffffffffffff8);
          pvVar15 = (void *)((longlong)pvVar18 + sVar16);
          if ((void *)param_1[1] < pvVar15) {
            FUN_140023dd8(param_1,(uint)sVar16 | 8);
            pvVar18 = (void *)(*param_1 + 7 & 0xfffffffffffffff8);
            pvVar15 = (void *)((longlong)pvVar18 + sVar16);
          }
          *param_1 = (ulonglong)pvVar15;
          memcpy(pvVar18,pvVar13,sVar16);
          puVar17[1] = 0;
          *puVar17 = &PTR_FUN_14a1e7fa8;
          puVar17[2] = uVar3;
          puVar17[3] = 0;
          *(undefined4 *)(puVar17 + 4) = 0;
          puVar17[5] = 0;
          *(undefined4 *)(puVar17 + 6) = 0;
          puVar17[7] = 0;
          *(undefined4 *)(puVar17 + 8) = 0;
          puVar17[9] = pvVar18;
          *(int *)(puVar17 + 10) = iVar6;
          lVar19 = local_a0;
        }
        uVar1 = *(uint *)(lVar19 + 0x48 + lVar12);
        uVar14 = *(uint *)(lVar19 + 0x58 + lVar12);
        uVar9 = (ulonglong)uVar14;
        iVar6 = *(int *)(lVar19 + 0x68 + lVar12);
        iVar5 = uVar14 + uVar1 + iVar6;
        if (iVar5 != 0 && SCARRY4(uVar14 + uVar1,iVar6) == iVar5 < 0) {
          pvVar13 = *(void **)(lVar19 + 0x60 + lVar12);
          pvVar15 = *(void **)(lVar19 + 0x50 + lVar12);
          pvVar18 = *(void **)(lVar19 + 0x40 + lVar12);
          local_60 = *(undefined8 *)(lVar19 + 0x10 + lVar12);
          local_80 = *(void **)(lVar19 + 0x30 + lVar12);
          local_b0 = (ulonglong)*(uint *)(lVar19 + 0x38 + lVar12);
          puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar7 = puVar17 + 0xb;
          local_88 = (ulonglong)uVar1;
          if ((undefined8 *)param_1[1] < puVar7) {
            FUN_140023dd8(param_1,0x60);
            puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
            puVar7 = puVar17 + 0xb;
          }
          *param_1 = (ulonglong)puVar7;
          *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
          *(undefined8 **)param_1[6] = puVar17;
          param_1[6] = (ulonglong)(puVar17 + 1);
          local_a4 = iVar6;
          local_98 = uVar9;
          if (iVar6 == 0) {
            _Dst = (void *)0x0;
          }
          else {
            sVar16 = (longlong)iVar6 * 0x10;
            _Dst = (void *)(*param_1 + 7 & 0xfffffffffffffff8);
            pvVar8 = (void *)((longlong)_Dst + sVar16);
            if ((void *)param_1[1] < pvVar8) {
              FUN_140023dd8(param_1,(uint)sVar16 | 8);
              _Dst = (void *)(*param_1 + 7 & 0xfffffffffffffff8);
              pvVar8 = (void *)((longlong)_Dst + sVar16);
            }
            *param_1 = (ulonglong)pvVar8;
            memcpy(_Dst,pvVar13,sVar16);
            uVar14 = (uint)local_98;
          }
          if (uVar14 == 0) {
            pvVar13 = (void *)0x0;
          }
          else {
            sVar16 = (longlong)(int)uVar14 * 0x10;
            pvVar13 = (void *)(*param_1 + 7 & 0xfffffffffffffff8);
            pvVar8 = (void *)(sVar16 + (longlong)pvVar13);
            if ((void *)param_1[1] < pvVar8) {
              FUN_140023dd8(param_1,(uint)sVar16 | 8);
              pvVar13 = (void *)(*param_1 + 7 & 0xfffffffffffffff8);
              pvVar8 = (void *)(sVar16 + (longlong)pvVar13);
            }
            *param_1 = (ulonglong)pvVar8;
            memcpy(pvVar13,pvVar15,sVar16);
          }
          iVar6 = (int)local_88;
          if (iVar6 == 0) {
            pvVar15 = (void *)0x0;
          }
          else {
            pvVar15 = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
            pvVar8 = (void *)((longlong)pvVar15 + (longlong)iVar6 * 8);
            sVar16 = (longlong)iVar6 * 8;
            if ((void *)param_1[1] < pvVar8) {
              FUN_140023dd8(param_1,(uint)sVar16 | 2);
              pvVar15 = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
              pvVar8 = (void *)((longlong)pvVar15 + sVar16);
            }
            *param_1 = (ulonglong)pvVar8;
            memcpy(pvVar15,pvVar18,sVar16);
          }
          iVar6 = (int)local_b0;
          if (iVar6 == 0) {
            pvVar18 = (void *)0x0;
            uVar11 = 0;
          }
          else {
            sVar16 = (size_t)iVar6;
            pvVar18 = (void *)*param_1;
            uVar9 = (longlong)pvVar18 + sVar16;
            if (param_1[1] < uVar9) {
              FUN_140023dd8(param_1,iVar6 + 1);
              pvVar18 = (void *)*param_1;
              uVar9 = (longlong)pvVar18 + sVar16;
            }
            *param_1 = uVar9;
            memcpy(pvVar18,local_80,sVar16);
            uVar11 = (undefined4)local_b0;
          }
          puVar17[1] = 0;
          *puVar17 = &PTR_FUN_14a1e7fa8;
          puVar17[2] = local_60;
          puVar17[3] = pvVar18;
          *(undefined4 *)(puVar17 + 4) = uVar11;
          puVar17[5] = pvVar15;
          *(int *)(puVar17 + 6) = (int)local_88;
          puVar17[7] = pvVar13;
          *(int *)(puVar17 + 8) = (int)local_98;
          puVar17[9] = _Dst;
          *(int *)(puVar17 + 10) = local_a4;
          lVar19 = local_a0;
        }
        if (DAT_14ca84f5e == '\x01') {
          puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar7 = puVar17 + 4;
          if ((undefined8 *)param_1[1] < puVar7) {
            FUN_140023dd8(param_1,0x28);
            puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
            puVar7 = puVar17 + 4;
          }
          *param_1 = (ulonglong)puVar7;
          *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
          *(undefined8 **)param_1[6] = puVar17;
          param_1[6] = (ulonglong)(puVar17 + 1);
          uVar3 = *(undefined8 *)(lVar19 + lVar12 + 0x78);
          uVar4 = *(undefined8 *)(lVar19 + lVar12 + 0x80);
          puVar17[1] = 0;
          *puVar17 = &PTR_LAB_14a1e78b8;
          local_58._0_4_ = (undefined4)uVar3;
          local_58._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar4;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          *(undefined4 *)(puVar17 + 2) = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar17 + 0x14) = local_58._4_4_;
          *(undefined4 *)(puVar17 + 3) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar17 + 0x1c) = uStack_50._4_4_;
          local_58 = uVar3;
          uStack_50 = uVar4;
        }
        iVar6 = *(int *)(local_70 + 0x18);
        iVar5 = *(int *)(lVar19 + lVar12);
        iVar2 = *(int *)(local_70 + 0x14);
        puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar7 = puVar17 + 4;
        if ((undefined8 *)param_1[1] < puVar7) {
          FUN_140023dd8(param_1,0x28);
          puVar17 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar7 = puVar17 + 4;
        }
        *param_1 = (ulonglong)puVar7;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar17;
        param_1[6] = (ulonglong)(puVar17 + 1);
        puVar17[1] = 0;
        *puVar17 = &PTR_LAB_14a1e7fd0;
        puVar17[2] = local_68;
        *(int *)(puVar17 + 3) = iVar6 * iVar5 + iVar2;
        lVar10 = local_78;
      }
      lVar12 = lVar12 + 0x88;
    } while (lVar10 != lVar12);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1471243fc FUN_1471243fc body=2504 status=ok
// SIG undefined FUN_1471243fc(void)

void FUN_1471243fc(ulonglong *param_1,longlong param_2,undefined8 param_3,int *param_4,
                  undefined8 *param_5,longlong *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  void *pvVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  longlong lVar15;
  undefined **ppuVar16;
  undefined8 *puVar17;
  void *pvVar18;
  uint uVar19;
  void *pvVar20;
  size_t sVar21;
  void *pvVar22;
  undefined8 *puVar23;
  void *pvVar24;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  ulonglong local_118;
  ulonglong local_110;
  ulonglong local_108;
  void *local_100;
  undefined8 local_f8;
  longlong local_f0;
  int *local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_e8 = param_4;
  local_d8 = param_3;
  if ((int)param_6[1] != 0) {
    iVar10 = param_4[3];
    if (0x7ffe < iVar10) {
      iVar10 = 0x7fff;
    }
    iVar9 = 0x7fff;
    if (param_4[2] < 0x7fff) {
      iVar9 = param_4[2];
    }
    iVar3 = param_4[1];
    iVar4 = *param_4;
    iVar1 = param_4[5];
    iVar2 = param_4[4];
    puVar11 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar17 = puVar11 + 5;
    if ((undefined8 *)param_1[1] < puVar17) {
      FUN_140023dd8(param_1,0x30);
      puVar11 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar11 + 5;
    }
    *param_1 = (ulonglong)puVar17;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar11;
    param_1[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a1e7fc8;
    *(float *)(puVar11 + 2) = (float)iVar4;
    *(float *)((longlong)puVar11 + 0x14) = (float)iVar3;
    *(int *)(puVar11 + 3) = iVar2;
    *(float *)((longlong)puVar11 + 0x1c) = (float)iVar9;
    *(float *)(puVar11 + 4) = (float)iVar10;
    *(int *)((longlong)puVar11 + 0x24) = iVar1;
    if ((longlong)(int)param_6[1] != 0) {
      lVar15 = (longlong)(int)param_6[1] * 0x1a0;
      puVar17 = (undefined8 *)(*param_6 + 400);
      local_e0 = param_2;
      do {
        if (((*(int *)(puVar17 + -0x32) != -1) &&
            (lVar6 = puVar17[(ulonglong)(*(char *)(param_2 + 0x1c) == '\x01') * 2 + -0x2e],
            lVar6 != 0)) && (puVar17[-0x2d] != 0)) {
          local_128 = 1;
          local_d0 = lVar15;
          FUN_1447060c0(param_1,puVar17 + -0x2f,(char)local_e8[0xb],1);
          iVar10 = *(int *)(param_5 + 1);
          if ((longlong)iVar10 != 0) {
            pvVar18 = (void *)*param_5;
            puVar23 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
            puVar11 = puVar23 + 0xb;
            if ((undefined8 *)param_1[1] < puVar11) {
              FUN_140023dd8(param_1,0x60);
              puVar23 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
              puVar11 = puVar23 + 0xb;
            }
            *param_1 = (ulonglong)puVar11;
            *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
            *(undefined8 **)param_1[6] = puVar23;
            param_1[6] = (ulonglong)(puVar23 + 1);
            sVar21 = (longlong)iVar10 * 0x10;
            pvVar24 = (void *)(*param_1 + 7 & 0xfffffffffffffff8);
            pvVar20 = (void *)((longlong)pvVar24 + sVar21);
            if ((void *)param_1[1] < pvVar20) {
              FUN_140023dd8(param_1,(uint)sVar21 | 8);
              pvVar24 = (void *)(*param_1 + 7 & 0xfffffffffffffff8);
              pvVar20 = (void *)((longlong)pvVar24 + sVar21);
            }
            *param_1 = (ulonglong)pvVar20;
            memcpy(pvVar24,pvVar18,sVar21);
            puVar23[1] = 0;
            *puVar23 = &PTR_FUN_14a1e7fd8;
            puVar23[2] = lVar6;
            puVar23[3] = 0;
            *(undefined4 *)(puVar23 + 4) = 0;
            puVar23[5] = 0;
            *(undefined4 *)(puVar23 + 6) = 0;
            puVar23[7] = 0;
            *(undefined4 *)(puVar23 + 8) = 0;
            puVar23[9] = pvVar24;
            *(int *)(puVar23 + 10) = iVar10;
          }
          uVar5 = *(uint *)(puVar17 + -0x10);
          uVar19 = *(uint *)(puVar17 + -0xe);
          uVar13 = (ulonglong)uVar19;
          iVar10 = *(int *)(puVar17 + -0xc);
          iVar9 = uVar19 + uVar5 + iVar10;
          if (iVar9 != 0 && SCARRY4(uVar19 + uVar5,iVar10) == iVar9 < 0) {
            pvVar18 = (void *)puVar17[-0xd];
            pvVar20 = (void *)puVar17[-0xf];
            pvVar24 = (void *)puVar17[-0x11];
            local_100 = (void *)puVar17[-0x13];
            local_118 = (ulonglong)*(uint *)(puVar17 + -0x12);
            puVar23 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
            puVar11 = puVar23 + 0xb;
            local_108 = (ulonglong)uVar5;
            local_f0 = lVar6;
            if ((undefined8 *)param_1[1] < puVar11) {
              FUN_140023dd8(param_1,0x60);
              puVar23 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
              puVar11 = puVar23 + 0xb;
            }
            *param_1 = (ulonglong)puVar11;
            *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
            *(undefined8 **)param_1[6] = puVar23;
            param_1[6] = (ulonglong)(puVar23 + 1);
            local_f8 = CONCAT44(local_f8._4_4_,iVar10);
            local_110 = uVar13;
            if (iVar10 == 0) {
              pvVar22 = (void *)0x0;
            }
            else {
              sVar21 = (longlong)iVar10 * 0x10;
              pvVar22 = (void *)(*param_1 + 7 & 0xfffffffffffffff8);
              pvVar12 = (void *)((longlong)pvVar22 + sVar21);
              if ((void *)param_1[1] < pvVar12) {
                FUN_140023dd8(param_1,(uint)sVar21 | 8);
                pvVar22 = (void *)(*param_1 + 7 & 0xfffffffffffffff8);
                pvVar12 = (void *)((longlong)pvVar22 + sVar21);
              }
              *param_1 = (ulonglong)pvVar12;
              memcpy(pvVar22,pvVar18,sVar21);
              uVar19 = (uint)local_110;
            }
            if (uVar19 == 0) {
              pvVar18 = (void *)0x0;
            }
            else {
              sVar21 = (longlong)(int)uVar19 * 0x10;
              pvVar18 = (void *)(*param_1 + 7 & 0xfffffffffffffff8);
              pvVar12 = (void *)(sVar21 + (longlong)pvVar18);
              if ((void *)param_1[1] < pvVar12) {
                FUN_140023dd8(param_1,(uint)sVar21 | 8);
                pvVar18 = (void *)(*param_1 + 7 & 0xfffffffffffffff8);
                pvVar12 = (void *)(sVar21 + (longlong)pvVar18);
              }
              *param_1 = (ulonglong)pvVar12;
              memcpy(pvVar18,pvVar20,sVar21);
            }
            iVar10 = (int)local_108;
            if (iVar10 == 0) {
              pvVar20 = (void *)0x0;
            }
            else {
              pvVar20 = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
              pvVar12 = (void *)((longlong)pvVar20 + (longlong)iVar10 * 8);
              sVar21 = (longlong)iVar10 * 8;
              if ((void *)param_1[1] < pvVar12) {
                FUN_140023dd8(param_1,(uint)sVar21 | 2);
                pvVar20 = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
                pvVar12 = (void *)((longlong)pvVar20 + sVar21);
              }
              *param_1 = (ulonglong)pvVar12;
              memcpy(pvVar20,pvVar24,sVar21);
            }
            iVar10 = (int)local_118;
            if (iVar10 == 0) {
              pvVar24 = (void *)0x0;
              uVar14 = 0;
            }
            else {
              sVar21 = (size_t)iVar10;
              pvVar24 = (void *)*param_1;
              uVar13 = (longlong)pvVar24 + sVar21;
              if (param_1[1] < uVar13) {
                FUN_140023dd8(param_1,iVar10 + 1);
                pvVar24 = (void *)*param_1;
                uVar13 = (longlong)pvVar24 + sVar21;
              }
              *param_1 = uVar13;
              memcpy(pvVar24,local_100,sVar21);
              uVar14 = (undefined4)local_118;
            }
            puVar23[1] = 0;
            *puVar23 = &PTR_FUN_14a1e7fd8;
            puVar23[2] = local_f0;
            puVar23[3] = pvVar24;
            *(undefined4 *)(puVar23 + 4) = uVar14;
            puVar23[5] = pvVar20;
            *(int *)(puVar23 + 6) = (int)local_108;
            puVar23[7] = pvVar18;
            *(int *)(puVar23 + 8) = (int)local_110;
            puVar23[9] = pvVar22;
            *(undefined4 *)(puVar23 + 10) = (undefined4)local_f8;
          }
          iVar10 = *(int *)(param_5 + 1);
          if ((longlong)iVar10 != 0) {
            pvVar18 = (void *)*param_5;
            uVar7 = puVar17[-0x2d];
            puVar23 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
            puVar11 = puVar23 + 0xb;
            if ((undefined8 *)param_1[1] < puVar11) {
              FUN_140023dd8(param_1,0x60);
              puVar23 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
              puVar11 = puVar23 + 0xb;
            }
            *param_1 = (ulonglong)puVar11;
            *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
            *(undefined8 **)param_1[6] = puVar23;
            param_1[6] = (ulonglong)(puVar23 + 1);
            sVar21 = (longlong)iVar10 * 0x10;
            pvVar24 = (void *)(*param_1 + 7 & 0xfffffffffffffff8);
            pvVar20 = (void *)((longlong)pvVar24 + sVar21);
            if ((void *)param_1[1] < pvVar20) {
              FUN_140023dd8(param_1,(uint)sVar21 | 8);
              pvVar24 = (void *)(*param_1 + 7 & 0xfffffffffffffff8);
              pvVar20 = (void *)((longlong)pvVar24 + sVar21);
            }
            *param_1 = (ulonglong)pvVar20;
            memcpy(pvVar24,pvVar18,sVar21);
            puVar23[1] = 0;
            *puVar23 = &PTR_FUN_14a1e7fd8;
            puVar23[2] = uVar7;
            puVar23[3] = 0;
            *(undefined4 *)(puVar23 + 4) = 0;
            puVar23[5] = 0;
            *(undefined4 *)(puVar23 + 6) = 0;
            puVar23[7] = 0;
            *(undefined4 *)(puVar23 + 8) = 0;
            puVar23[9] = pvVar24;
            *(int *)(puVar23 + 10) = iVar10;
          }
          uVar5 = *(uint *)(puVar17 + -6);
          uVar19 = *(uint *)(puVar17 + -4);
          uVar13 = (ulonglong)uVar19;
          iVar10 = *(int *)(puVar17 + -2);
          iVar9 = uVar19 + uVar5 + iVar10;
          if (iVar9 != 0 && SCARRY4(uVar19 + uVar5,iVar10) == iVar9 < 0) {
            pvVar18 = (void *)puVar17[-3];
            pvVar20 = (void *)puVar17[-5];
            pvVar24 = (void *)puVar17[-7];
            local_f8 = puVar17[-0x2d];
            local_100 = (void *)puVar17[-9];
            local_118 = (ulonglong)*(uint *)(puVar17 + -8);
            puVar23 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
            puVar11 = puVar23 + 0xb;
            local_108 = (ulonglong)uVar5;
            if ((undefined8 *)param_1[1] < puVar11) {
              FUN_140023dd8(param_1,0x60);
              puVar23 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
              puVar11 = puVar23 + 0xb;
            }
            *param_1 = (ulonglong)puVar11;
            *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
            *(undefined8 **)param_1[6] = puVar23;
            param_1[6] = (ulonglong)(puVar23 + 1);
            local_f0 = CONCAT44(local_f0._4_4_,iVar10);
            local_110 = uVar13;
            if (iVar10 == 0) {
              pvVar22 = (void *)0x0;
            }
            else {
              sVar21 = (longlong)iVar10 * 0x10;
              pvVar22 = (void *)(*param_1 + 7 & 0xfffffffffffffff8);
              pvVar12 = (void *)((longlong)pvVar22 + sVar21);
              if ((void *)param_1[1] < pvVar12) {
                FUN_140023dd8(param_1,(uint)sVar21 | 8);
                pvVar22 = (void *)(*param_1 + 7 & 0xfffffffffffffff8);
                pvVar12 = (void *)((longlong)pvVar22 + sVar21);
              }
              *param_1 = (ulonglong)pvVar12;
              memcpy(pvVar22,pvVar18,sVar21);
              uVar19 = (uint)local_110;
            }
            if (uVar19 == 0) {
              pvVar18 = (void *)0x0;
            }
            else {
              sVar21 = (longlong)(int)uVar19 * 0x10;
              pvVar18 = (void *)(*param_1 + 7 & 0xfffffffffffffff8);
              pvVar12 = (void *)(sVar21 + (longlong)pvVar18);
              if ((void *)param_1[1] < pvVar12) {
                FUN_140023dd8(param_1,(uint)sVar21 | 8);
                pvVar18 = (void *)(*param_1 + 7 & 0xfffffffffffffff8);
                pvVar12 = (void *)(sVar21 + (longlong)pvVar18);
              }
              *param_1 = (ulonglong)pvVar12;
              memcpy(pvVar18,pvVar20,sVar21);
            }
            iVar10 = (int)local_108;
            if (iVar10 == 0) {
              pvVar20 = (void *)0x0;
            }
            else {
              pvVar20 = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
              pvVar12 = (void *)((longlong)pvVar20 + (longlong)iVar10 * 8);
              sVar21 = (longlong)iVar10 * 8;
              if ((void *)param_1[1] < pvVar12) {
                FUN_140023dd8(param_1,(uint)sVar21 | 2);
                pvVar20 = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
                pvVar12 = (void *)((longlong)pvVar20 + sVar21);
              }
              *param_1 = (ulonglong)pvVar12;
              memcpy(pvVar20,pvVar24,sVar21);
            }
            iVar10 = (int)local_118;
            if (iVar10 == 0) {
              pvVar24 = (void *)0x0;
              uVar14 = 0;
            }
            else {
              sVar21 = (size_t)iVar10;
              pvVar24 = (void *)*param_1;
              uVar13 = (longlong)pvVar24 + sVar21;
              if (param_1[1] < uVar13) {
                FUN_140023dd8(param_1,iVar10 + 1);
                pvVar24 = (void *)*param_1;
                uVar13 = (longlong)pvVar24 + sVar21;
              }
              *param_1 = uVar13;
              memcpy(pvVar24,local_100,sVar21);
              uVar14 = (undefined4)local_118;
            }
            puVar23[1] = 0;
            *puVar23 = &PTR_FUN_14a1e7fd8;
            puVar23[2] = local_f8;
            puVar23[3] = pvVar24;
            *(undefined4 *)(puVar23 + 4) = uVar14;
            puVar23[5] = pvVar20;
            *(int *)(puVar23 + 6) = (int)local_108;
            puVar23[7] = pvVar18;
            *(int *)(puVar23 + 8) = (int)local_110;
            puVar23[9] = pvVar22;
            *(undefined4 *)(puVar23 + 10) = (undefined4)local_f0;
          }
          param_2 = local_e0;
          if (DAT_14ca84f5e == '\x01') {
            puVar23 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
            puVar11 = puVar23 + 4;
            if ((undefined8 *)param_1[1] < puVar11) {
              FUN_140023dd8(param_1,0x28);
              puVar23 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
              puVar11 = puVar23 + 4;
            }
            *param_1 = (ulonglong)puVar11;
            *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
            *(undefined8 **)param_1[6] = puVar23;
            param_1[6] = (ulonglong)(puVar23 + 1);
            uVar7 = *puVar17;
            uVar8 = puVar17[1];
            puVar23[1] = 0;
            *puVar23 = &PTR_LAB_14a1e78b8;
            local_c8._0_4_ = (undefined4)uVar7;
            local_c8._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
            uStack_c0._0_4_ = (undefined4)uVar8;
            uStack_c0._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
            *(undefined4 *)(puVar23 + 2) = (undefined4)local_c8;
            *(undefined4 *)((longlong)puVar23 + 0x14) = local_c8._4_4_;
            *(undefined4 *)(puVar23 + 3) = (undefined4)uStack_c0;
            *(undefined4 *)((longlong)puVar23 + 0x1c) = uStack_c0._4_4_;
            local_c8 = uVar7;
            uStack_c0 = uVar8;
          }
          iVar10 = *(int *)(param_2 + 0x18);
          iVar9 = *(int *)(puVar17 + -0x32);
          puVar23 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar11 = puVar23 + 4;
          iVar1 = *(int *)(param_2 + 0x14);
          if (*(char *)(param_2 + 0x1c) == '\x01') {
            if ((undefined8 *)param_1[1] < puVar11) {
              FUN_140023dd8(param_1,0x28);
              puVar23 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
              puVar11 = puVar23 + 4;
            }
            *param_1 = (ulonglong)puVar11;
            *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
            *(undefined8 **)param_1[6] = puVar23;
            param_1[6] = (ulonglong)(puVar23 + 1);
            puVar23[1] = 0;
            ppuVar16 = &PTR_LAB_14a1e78c0;
          }
          else {
            if ((undefined8 *)param_1[1] < puVar11) {
              FUN_140023dd8(param_1,0x28);
              puVar23 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
              puVar11 = puVar23 + 4;
            }
            *param_1 = (ulonglong)puVar11;
            *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
            *(undefined8 **)param_1[6] = puVar23;
            param_1[6] = (ulonglong)(puVar23 + 1);
            puVar23[1] = 0;
            ppuVar16 = &PTR_LAB_14a1e78c8;
          }
          *puVar23 = ppuVar16;
          puVar23[2] = local_d8;
          *(int *)(puVar23 + 3) = iVar10 * iVar9 + iVar1;
          lVar15 = local_d0;
        }
        puVar17 = puVar17 + 0x34;
        lVar15 = lVar15 + -0x1a0;
      } while (lVar15 != 0);
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147124dc5 FUN_147124dc5 body=104 status=ok
// SIG undefined FUN_147124dc5(void)

longlong * FUN_147124dc5(longlong *param_1,longlong param_2)

{
  undefined2 *puVar1;
  
  puVar1 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined2 *)(param_2 + 0x10),2);
    }
    else {
      thunk_FUN_1457251a8(param_1);
    }
  }
  else {
    *(undefined2 *)(param_2 + 0x10) = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  FUN_14712643c(param_1,param_2);
  return param_1;
}



// FUNCTION 147124e2e FUN_147124e2e body=95 status=ok
// SIG undefined FUN_147124e2e(void)

void FUN_147124e2e(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_14712674e(param_1,iVar2);
  }
  FUN_1471274e1((longlong)iVar2 * 0x18 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 147124e8e FUN_147124e8e body=118 status=ok
// SIG undefined FUN_147124e8e(void)

undefined2 FUN_147124e8e(longlong param_1,ushort param_2,ushort param_3)

{
  undefined2 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x40);
  uVar4 = (ulonglong)((uint)param_3 * 0x30);
  uVar1 = *(undefined2 *)(lVar3 + 0x28 + uVar4);
  *(undefined2 *)(lVar3 + 0x28 + (ulonglong)((uint)param_2 * 0x30)) = uVar1;
  *(undefined2 *)(lVar3 + 0x28 + uVar4) = 0xffff;
  *(undefined8 *)(lVar3 + uVar4) = 0;
  iVar2 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar2 + 1U) {
    FUN_14488eebe((longlong *)(param_1 + 0x30),iVar2);
  }
  *(ushort *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar2 * 2) = param_3;
  return uVar1;
}



// FUNCTION 147124f04 FUN_147124f04 body=227 status=ok
// SIG undefined FUN_147124f04(void)

undefined4 * FUN_147124f04(longlong *param_1,undefined4 *param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  iVar1 = (int)param_1[1];
  lVar3 = (longlong)iVar1;
  if ((lVar3 < 1) || (*(int *)(*param_1 + -4 + lVar3 * 8) != (int)param_1[2] + -1)) {
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1462b4548(param_1,iVar1);
    }
    lVar2 = *param_1;
    *(int *)(lVar2 + lVar3 * 8) = (int)param_1[2];
    *(int *)(lVar2 + 4 + lVar3 * 8) = param_3 + -1;
  }
  else {
    *(int *)(*param_1 + -4 + lVar3 * 8) = param_3 + -1;
  }
  *(int *)(param_1 + 2) = param_3;
  local_44 = 0;
  FUN_1462b4506(param_1,1,&local_44);
  *param_2 = local_44;
  *(undefined1 *)(param_2 + 1) = param_4;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147124fe8 FUN_147124fe8 body=144 status=ok
// SIG undefined FUN_147124fe8(void)

ulonglong FUN_147124fe8(undefined8 *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  
  uVar4 = *(int *)(param_1 + 2) - 1;
  *param_2 = 0;
  param_2[1] = uVar4;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  iVar1 = *(int *)(param_1 + 1);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (0 < iVar1) {
    piVar2 = (int *)*param_1;
    if (piVar2[1] == uVar4 && *piVar2 == 0) {
      uVar5 = 0;
    }
    else {
      if (*piVar2 == 0) {
        uVar3 = piVar2[1] + 1;
        if (uVar4 <= uVar3) {
          uVar3 = uVar4;
        }
        *param_2 = uVar3;
        iVar1 = *(int *)(param_1 + 1);
        piVar2 = (int *)*param_1;
      }
      if (piVar2[(longlong)iVar1 * 2 + -1] == uVar4) {
        uVar4 = piVar2[(longlong)iVar1 * 2 + -2] - 1;
        if (piVar2[(longlong)iVar1 * 2 + -2] == 0) {
          uVar4 = 0;
        }
        param_2[1] = uVar4;
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return uVar5 & 0xffffffff;
}



// FUNCTION 147125078 FUN_147125078 body=110 status=ok
// SIG undefined FUN_147125078(void)

undefined8 * FUN_147125078(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = *(undefined1 *)(param_1 + 0x40);
  local_1c = 0;
  cVar1 = FUN_1462b4506(param_1,1);
  uVar2 = local_1c;
  if (cVar1 == '\0') {
    *param_2 = 0;
    uVar3 = 0xff;
    uVar2 = 0xffffffff;
  }
  *(undefined4 *)param_2 = uVar2;
  *(undefined1 *)((longlong)param_2 + 4) = uVar3;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1471250e8 FUN_1471250e8 body=45 status=ok
// SIG undefined FUN_1471250e8(void)

void FUN_1471250e8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2;
  if (((char)((ulonglong)param_2 >> 0x20) != -1 && iVar1 != -1) && (iVar1 != -1)) {
    FUN_142b77cc2(param_1,iVar1,1);
    return;
  }
  return;
}



// FUNCTION 147125116 thunk_FUN_142b77cc2 body=5 status=ok
// SIG undefined thunk_FUN_142b77cc2(void)

void thunk_FUN_142b77cc2(longlong *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  void *_Dst;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  if (param_3 == 0 || param_2 == 0xffffffff) {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  uVar9 = param_3 + param_2;
  uVar2 = *(uint *)(param_1 + 1);
  lVar6 = *param_1;
  uVar7 = param_2 - 1;
  uVar13 = 0;
  uVar14 = uVar2;
LAB_142b77d1d:
  uVar1 = uVar14 - 1;
  while( true ) {
    uVar12 = uVar13 + uVar1 >> 1;
    uVar10 = (ulonglong)uVar12;
    uVar3 = *(uint *)(lVar6 + uVar10 * 8);
    do {
      if (param_2 < uVar3) {
        if (uVar3 <= uVar9) {
          if ((uVar12 <= uVar13) || (uVar7 != *(uint *)(lVar6 + -4 + uVar10 * 8))) {
            *(uint *)(lVar6 + uVar10 * 8) = param_2;
            goto LAB_142b77e11;
          }
          *(undefined4 *)(lVar6 + -4 + uVar10 * 8) = *(undefined4 *)(lVar6 + 4 + uVar10 * 8);
          iVar5 = (int)param_1[1];
          iVar11 = ~uVar12 + iVar5;
          if (iVar11 == 0) goto LAB_142b77eb2;
          _Dst = (void *)(*param_1 + uVar10 * 8);
          lVar6 = *param_1 + uVar10 * 8;
          goto LAB_142b77ea3;
        }
        uVar14 = uVar12;
        if (uVar12 != uVar13) goto LAB_142b77d1d;
        *(uint *)(param_1 + 1) = uVar2 + 1;
        if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
          FUN_1462b4548(param_1,uVar2);
          lVar6 = *param_1;
        }
        memmove((void *)(lVar6 + uVar10 * 8 + 8),(void *)(lVar6 + uVar10 * 8),
                (ulonglong)(uVar2 - uVar13) << 3);
        lVar6 = *param_1;
        *(uint *)(lVar6 + uVar10 * 8) = param_2;
        *(uint *)(lVar6 + 4 + uVar10 * 8) = uVar9 - 1;
        goto LAB_142b77e11;
      }
      uVar4 = *(uint *)(lVar6 + 4 + uVar10 * 8);
    } while (param_2 <= uVar4);
    if (uVar7 == uVar4) break;
    if (uVar12 == uVar1) {
      *(uint *)(param_1 + 1) = uVar2 + 1;
      if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
        FUN_1462b4548(param_1,uVar2);
        lVar6 = *param_1;
      }
      uVar10 = (ulonglong)uVar14;
      memmove((void *)(lVar6 + uVar10 * 8 + 8),(void *)(lVar6 + uVar10 * 8),
              (ulonglong)(uVar2 - uVar14) << 3);
      lVar6 = *param_1;
      *(uint *)(lVar6 + uVar10 * 8) = param_2;
      *(uint *)(lVar6 + 4 + uVar10 * 8) = uVar9 - 1;
      goto LAB_142b77e11;
    }
    uVar13 = uVar12 + 1;
  }
  if ((uVar12 < uVar1) &&
     (lVar8 = (longlong)(int)(uVar12 + 1), uVar9 == *(uint *)(lVar6 + lVar8 * 8))) {
    *(undefined4 *)(lVar6 + 4 + uVar10 * 8) = *(undefined4 *)(lVar6 + 4 + lVar8 * 8);
    iVar5 = (int)param_1[1];
    iVar11 = (iVar5 - uVar12) + -2;
    if (iVar11 != 0) {
      _Dst = (void *)(*param_1 + lVar8 * 8);
      lVar6 = *param_1 + lVar8 * 8;
LAB_142b77ea3:
      memmove(_Dst,(void *)(lVar6 + 8),(longlong)iVar11 << 3);
      iVar5 = (int)param_1[1];
    }
LAB_142b77eb2:
    *(int *)(param_1 + 1) = iVar5 + -1;
    FUN_147127824(param_1);
  }
  else {
    *(uint *)(lVar6 + 4 + uVar10 * 8) = uVar7 + param_3;
  }
LAB_142b77e11:
                    /* WARNING: Could not recover jumptable at 0x000142b77e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 14712511c FUN_14712511c body=977 status=ok
// SIG undefined FUN_14712511c(void)

undefined8
FUN_14712511c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  int *piVar9;
  wchar_t *pwVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  undefined2 *puVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  double local_80;
  undefined8 local_70;
  longlong local_68;
  int local_60;
  wchar_t *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_2;
  FUN_140002266(param_2,L"\r\n\r\n\tDevice: %d, Queue %s:",param_3,param_5);
  local_58 = (wchar_t *)0x0;
  uStack_50 = 0;
  iVar11 = 0;
  bVar18 = false;
  lVar12 = 0;
  do {
    lVar17 = lVar12 + 1;
    lVar12 = lVar12 * 0x18 + 0x10;
    while( true ) {
      lVar2 = *param_1;
      FUN_140002266(&local_68,L"\r\n\t\tLane %02d: ",(int)lVar17 + -1);
      iVar13 = local_60 + -1;
      if (local_60 == 0) {
        iVar13 = 0;
      }
      FUN_1400020e8(&local_58,local_68,iVar13);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (*(int *)(lVar2 + -0x10 + lVar12) != 0) break;
      FUN_1400020e8(&local_58,&DAT_149e1d814,2);
      lVar17 = lVar17 + 1;
      lVar12 = lVar12 + 0x18;
      if (lVar17 == 0x41) {
        if (bVar18) goto LAB_14712547c;
        pwVar10 = L"\r\n\t\tNo shader diagnostics found for this queue.";
        iVar11 = 0x2f;
        goto LAB_147125498;
      }
    }
    if ((longlong)DAT_14c9ac128 == 0) {
LAB_1471252a5:
      uVar1 = *(undefined4 *)(lVar2 + -0xc + lVar12);
      FUN_140002266(&local_68,L"Shader assertion failed - ID: 0x%08X (%d)",uVar1,uVar1);
    }
    else {
      lVar8 = (longlong)DAT_14c9ac128 * 0x18;
      piVar5 = DAT_14c9ac120;
      lVar16 = lVar8;
      do {
        if (*piVar5 == *(int *)(lVar2 + -4 + lVar12)) goto LAB_14712523a;
        piVar5 = piVar5 + 6;
        lVar16 = lVar16 + -0x18;
      } while (lVar16 != 0);
      piVar5 = (int *)0x0;
LAB_14712523a:
      piVar7 = piVar5 + 2;
      if (piVar5 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      piVar5 = DAT_14c9ac120;
      do {
        if (*piVar5 == *(int *)(lVar2 + lVar12)) goto LAB_14712525a;
        piVar5 = piVar5 + 6;
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != 0);
      piVar5 = (int *)0x0;
LAB_14712525a:
      piVar9 = piVar5 + 2;
      if (piVar5 == (int *)0x0) {
        piVar9 = (int *)0x0;
      }
      if ((piVar7 == (int *)0x0) || (piVar9 == (int *)0x0)) goto LAB_1471252a5;
      local_88 = &DAT_149dfb77a;
      if (piVar9[2] != 0) {
        local_88 = *(undefined2 **)piVar9;
      }
      puVar14 = &DAT_149dfb77a;
      if (piVar7[2] != 0) {
        puVar14 = *(undefined2 **)piVar7;
      }
      FUN_140002266(&local_68,L"Shader assertion failed - %s:%d - %s",puVar14,
                    *(undefined4 *)(lVar2 + -8 + lVar12));
    }
    iVar13 = local_60 + -1;
    if (local_60 == 0) {
      iVar13 = 0;
    }
    FUN_1400020e8(&local_58,local_68,iVar13);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    iVar13 = *(int *)(lVar2 + -8 + lVar12);
    if (iVar13 < 0) {
      uVar15 = *(uint *)(lVar2 + -4 + lVar12);
      uVar4 = *(uint *)(lVar2 + lVar12);
LAB_147125313:
      local_80 = (double)CONCAT44(local_80._4_4_,*(undefined4 *)(lVar2 + 4 + lVar12));
      local_88 = (undefined2 *)CONCAT44(local_88._4_4_,uVar4);
      FUN_140002266(&local_68,L"\r\n\t\t\tPayload [ int32]: %d %d %d %d",iVar13,uVar15);
      iVar13 = local_60 + -1;
      if (local_60 == 0) {
        iVar13 = iVar11;
      }
      FUN_1400020e8(&local_58,local_68,iVar13);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      iVar6 = *(int *)(lVar2 + 4 + lVar12);
      uVar4 = *(uint *)(lVar2 + lVar12);
      iVar13 = *(int *)(lVar2 + -8 + lVar12);
      uVar15 = *(uint *)(lVar2 + -4 + lVar12);
    }
    else {
      uVar15 = *(uint *)(lVar2 + -4 + lVar12);
      uVar4 = *(uint *)(lVar2 + lVar12);
      if (((int)(uVar4 | uVar15) < 0) || (iVar6 = *(int *)(lVar2 + 4 + lVar12), iVar6 < 0))
      goto LAB_147125313;
    }
    local_80 = (double)CONCAT44(local_80._4_4_,iVar6);
    local_88 = (undefined2 *)CONCAT44(local_88._4_4_,uVar4);
    FUN_140002266(&local_68,L"\r\n\t\t\tPayload [uint32]: %u %u %u %u",iVar13,uVar15);
    iVar13 = local_60 + -1;
    if (local_60 == 0) {
      iVar13 = iVar11;
    }
    FUN_1400020e8(&local_58,local_68,iVar13);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    local_80 = (double)CONCAT44(local_80._4_4_,*(undefined4 *)(lVar2 + 4 + lVar12));
    local_88 = (undefined2 *)CONCAT44(local_88._4_4_,*(undefined4 *)(lVar2 + lVar12));
    FUN_140002266(&local_68,L"\r\n\t\t\tPayload [   hex]: 0x%08X 0x%08X 0x%08X 0x%08X",
                  *(undefined4 *)(lVar2 + -8 + lVar12),*(undefined4 *)(lVar2 + -4 + lVar12));
    iVar13 = local_60 + -1;
    if (local_60 == 0) {
      iVar13 = 0;
    }
    FUN_1400020e8(&local_58,local_68,iVar13);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    local_80 = (double)*(float *)(lVar2 + 4 + lVar12);
    local_88 = (undefined2 *)(double)*(float *)(lVar2 + lVar12);
    FUN_140002266(&local_68,L"\r\n\t\t\tPayload [ float]: %f %f %f %f",
                  (double)*(float *)(lVar2 + -8 + lVar12),(double)*(float *)(lVar2 + -4 + lVar12));
    iVar13 = local_60 + -1;
    if (local_60 == 0) {
      iVar13 = iVar11;
    }
    FUN_1400020e8(&local_58,local_68,iVar13);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    bVar18 = true;
    lVar12 = lVar17;
    if (lVar17 == 0x40) {
LAB_14712547c:
      pwVar10 = local_58;
      iVar11 = (int)uStack_50 + -1;
      if ((int)uStack_50 == 0) {
        iVar11 = 0;
      }
LAB_147125498:
      uVar3 = local_70;
      FUN_1400020e8(local_70,pwVar10,iVar11);
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return uVar3;
    }
  } while( true );
}



// FUNCTION 1471254ee FUN_1471254ee body=66 status=ok
// SIG undefined FUN_1471254ee(void)

void FUN_1471254ee(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x18);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
    }
    *plVar2 = lVar1;
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + 0x10);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 147125530 FUN_147125530 body=42 status=ok
// SIG undefined FUN_147125530(void)

void FUN_147125530(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) = param_2;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  *(undefined8 *)(param_2 + 0x18) = uVar1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(longlong *)(param_2 + 0x20) = param_1;
  *(longlong *)(param_1 + 0x20) = param_2;
  return;
}



// FUNCTION 14712555a FUN_14712555a body=104 status=ok
// SIG undefined FUN_14712555a(void)

undefined8 *
FUN_14712555a(undefined8 *param_1,undefined8 param_2,undefined4 param_3,uint param_4,
             undefined4 param_5,undefined1 param_6)

{
  *param_1 = &PTR_LAB_14a1e64f0;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  param_1[3] = (ulonglong)param_4;
  *(undefined4 *)(param_1 + 4) = param_5;
  *(undefined1 *)((longlong)param_1 + 0x24) = param_6;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 5),4000);
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  return param_1;
}



// FUNCTION 1471255da FUN_1471255da body=38 status=ok
// SIG undefined FUN_1471255da(void)

undefined8 FUN_1471255da(undefined8 param_1,int param_2)

{
  FUN_1402cc6b6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147125602 FUN_147125602 body=71 status=ok
// SIG undefined FUN_147125602(void)

void FUN_147125602(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1471256a0();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_147125734();
      return;
    }
  }
  return;
}



// FUNCTION 14712564a FUN_14712564a body=85 status=ok
// SIG undefined FUN_14712564a(void)

void FUN_14712564a(longlong *param_1)

{
  if ((char)param_1[5] == '\x01') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x1c) != -1) {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = 0;
    param_1[3] = -0x100000000;
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1471256a0 FUN_1471256a0 body=146 status=ok
// SIG undefined FUN_1471256a0(void)

void FUN_1471256a0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0xd0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xd0)) {
      uVar5 = uVar4 / 0xd0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xd0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147125734 FUN_147125734 body=62 status=ok
// SIG undefined FUN_147125734(void)

void FUN_147125734(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147125772(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xd0,8);
  }
  return;
}



// FUNCTION 147125772 FUN_147125772 body=110 status=ok
// SIG undefined FUN_147125772(void)

ulonglong FUN_147125772(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xd0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1471257ab;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xd0,8);
      param_2 = param_2 / 0xd0;
    }
  }
LAB_1471257ab:
  return param_2 & 0xffffffff;
}



// FUNCTION 1471257e0 FUN_1471257e0 body=125 status=ok
// SIG undefined FUN_1471257e0(void)

void FUN_1471257e0(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = (ulonglong)uVar1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar2 = 4;
    if (4 < uVar1) {
      uVar2 = (ulonglong)uVar1;
    }
  }
  else {
    uVar2 = uVar2 + (uVar2 * 3 >> 3) + 0x10;
  }
  uVar2 = FUN_144a3809e(uVar2 << 5,8);
  uVar3 = 0x7fffffff;
  if ((int)uVar1 <= (int)(uVar2 >> 5)) {
    uVar3 = uVar2 >> 5 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar3;
  FUN_1446f8d3c(param_1,0,uVar3,0x20,8);
  return;
}



// FUNCTION 14712585e FUN_14712585e body=71 status=ok
// SIG undefined FUN_14712585e(void)

void FUN_14712585e(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1471258a6();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_14712593a();
      return;
    }
  }
  return;
}



// FUNCTION 1471258a6 FUN_1471258a6 body=147 status=ok
// SIG undefined FUN_1471258a6(void)

void FUN_1471258a6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14712593a FUN_14712593a body=62 status=ok
// SIG undefined FUN_14712593a(void)

void FUN_14712593a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147125978(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 147125978 FUN_147125978 body=112 status=ok
// SIG undefined FUN_147125978(void)

ulonglong FUN_147125978(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1471259b2;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x18,8);
      param_2 = param_2 / 0x18;
    }
  }
LAB_1471259b2:
  return param_2 & 0xffffffff;
}



// FUNCTION 1471259e8 FUN_1471259e8 body=105 status=ok
// SIG undefined FUN_1471259e8(void)

undefined8 * FUN_1471259e8(undefined8 *param_1,undefined8 *param_2)

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
  FUN_147125af2(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 147125a52 FUN_147125a52 body=159 status=ok
// SIG undefined FUN_147125a52(void)

void FUN_147125a52(int param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14c9ac098;
  if (param_1 <= (int)DAT_14c9ac098) {
    if (DAT_14c9ac09c == 0) {
      uVar2 = 4;
      if (4 < DAT_14c9ac098) {
        uVar2 = DAT_14c9ac098;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)DAT_14c9ac098 * 3) >> 3) + (longlong)(int)DAT_14c9ac098 +
              0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    DAT_14c9ac09c = (int)uVar5;
    FUN_1446f8d3c(&DAT_14c9ac090,param_1,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147125af2 FUN_147125af2 body=309 status=ok
// SIG undefined FUN_147125af2(void)

undefined8 * FUN_147125af2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1);
  }
  return param_1;
}



// FUNCTION 147125c28 FUN_147125c28 body=52 status=ok
// SIG undefined FUN_147125c28(void)

void FUN_147125c28(void)

{
  if (1 < DAT_14c9ac100) {
    FUN_145e09026();
    DAT_14c9ac100 = 1;
    FUN_147125dd2();
    return;
  }
  FUN_147125c5c();
  FUN_145e09026();
  return;
}



// FUNCTION 147125c5c FUN_147125c5c body=373 status=ok
// SIG undefined FUN_147125c5c(void)

void FUN_147125c5c(void)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
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
  puVar5 = &DAT_14c9ac0f0;
  if (DAT_14c9ac0f8 != (undefined *)0x0) {
    puVar5 = DAT_14c9ac0f8;
  }
  iVar4 = DAT_14c9ac100 + 3;
  if (-1 < DAT_14c9ac100) {
    iVar4 = DAT_14c9ac100;
  }
  if (DAT_14c9ac0c0 - DAT_14c9ac0ec < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14c9ac0c8;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14c9ac0e0 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14c9ac0e0;
    }
    local_78 = &DAT_14c9ac0b8;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14c9ac0c8)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar1;
      do {
        *(undefined4 *)(puVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar3 * 0x20) * 4)
             = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14c9ac0b8 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14c9ac0c8 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14c9ac100) {
      lVar2 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar2 * 4) = 0xffffffff;
        lVar2 = lVar2 + 1;
      } while (lVar2 < DAT_14c9ac100);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147125dd2 FUN_147125dd2 body=491 status=ok
// SIG undefined FUN_147125dd2(void)

void FUN_147125dd2(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9ac0f8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c9ac0f8,0,0,4);
  }
  uVar2 = DAT_14c9ac100;
  uVar3 = local_50;
  if (DAT_14c9ac100 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14c9ac0f0,0,DAT_14c9ac100,4);
    if (0 < (int)uVar2) {
      do {
        puVar5 = DAT_14c9ac0f8;
        if (DAT_14c9ac0f8 == (undefined *)0x0) {
          puVar5 = &DAT_14c9ac0f0;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14c9ac100 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c9ac0c8;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c9ac0e0 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c9ac0b8;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar9 = (longlong)
                ((int)((ulonglong)*(undefined8 *)(lVar1 + lVar6) >> 0x20) * 0x17 +
                (int)*(undefined8 *)(lVar1 + lVar6)) & (longlong)(int)DAT_14c9ac100 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x1c + lVar6) = iVar8;
        puVar5 = DAT_14c9ac0f8;
        if (DAT_14c9ac0f8 == (undefined *)0x0) {
          puVar5 = &DAT_14c9ac0f0;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14c9ac100 - 1U & uVar9) * 4);
        puVar5 = DAT_14c9ac0f8;
        if (DAT_14c9ac0f8 == (undefined *)0x0) {
          puVar5 = &DAT_14c9ac0f0;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14c9ac100 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147125fbe FUN_147125fbe body=159 status=ok
// SIG undefined FUN_147125fbe(void)

void FUN_147125fbe(int param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14c9ac0b0;
  if (param_1 <= (int)DAT_14c9ac0b0) {
    if (DAT_14c9ac0b4 == 0) {
      uVar2 = 4;
      if (4 < DAT_14c9ac0b0) {
        uVar2 = DAT_14c9ac0b0;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)DAT_14c9ac0b0 * 3) >> 3) + (longlong)(int)DAT_14c9ac0b0 +
              0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    DAT_14c9ac0b4 = (int)uVar5;
    FUN_1446f8d3c(&DAT_14c9ac0a8,param_1,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14712605e FUN_14712605e body=342 status=ok
// SIG undefined FUN_14712605e(void)

undefined4 * FUN_14712605e(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1471261b6(local_40);
  puVar1 = (undefined8 *)param_2[1];
  *local_38 = *(undefined8 *)*param_2;
  local_38[1] = *puVar1;
  *puVar1 = 0;
  *(undefined4 *)(local_38 + 2) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_38 + 0x14) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar9 = (int)((ulonglong)*local_38 >> 0x20) * 0x17 + (int)*local_38;
  cVar4 = FUN_1471262c4(uVar9,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar5 = DAT_14c9ac0c0 - DAT_14c9ac0ec;
    iVar8 = 1;
    if (3 < uVar5) {
      uVar7 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= DAT_14c9ac100)) {
      uVar9 = DAT_14c9ac100 - 1U & uVar9;
      *(uint *)((longlong)local_38 + 0x1c) = uVar9;
      puVar6 = DAT_14c9ac0f8;
      if (DAT_14c9ac0f8 == (undefined *)0x0) {
        puVar6 = &DAT_14c9ac0f0;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)(puVar6 + ((longlong)DAT_14c9ac100 - 1U & (longlong)(int)uVar9) * 4);
      puVar6 = DAT_14c9ac0f8;
      if (DAT_14c9ac0f8 == (undefined *)0x0) {
        puVar6 = &DAT_14c9ac0f0;
      }
      *(undefined4 *)(puVar6 + ((longlong)DAT_14c9ac100 - 1U & (longlong)(int)uVar9) * 4) = local_44
      ;
    }
    else {
      DAT_14c9ac100 = iVar8;
      FUN_147125dd2();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1471261b6 FUN_1471261b6 body=269 status=ok
// SIG undefined FUN_1471261b6(void)

int * FUN_1471261b6(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c9ac0e8;
  iVar4 = DAT_14c9ac0c0;
  if (DAT_14c9ac0ec == 0) {
    iVar2 = DAT_14c9ac0c0 + 1;
    bVar7 = DAT_14c9ac0c4 == DAT_14c9ac0c0;
    DAT_14c9ac0c0 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14c9ac0b8,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14c9ac0c8,1);
    puVar3 = DAT_14c9ac0d8;
    if (DAT_14c9ac0d8 == (undefined *)0x0) {
      puVar3 = &DAT_14c9ac0c8;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14c9ac0e8;
    DAT_14c9ac0e8 = *(int *)(DAT_14c9ac0b8 + 4 + lVar6 * 0x20);
    DAT_14c9ac0ec = DAT_14c9ac0ec + -1;
    iVar4 = iVar2;
    if (DAT_14c9ac0ec != 0) {
      *(undefined4 *)(DAT_14c9ac0b8 + (longlong)DAT_14c9ac0e8 * 0x20) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14c9ac0c8;
  if (DAT_14c9ac0d8 != (undefined *)0x0) {
    puVar3 = DAT_14c9ac0d8;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14c9ac0b8;
  return param_1;
}



// FUNCTION 1471262c4 FUN_1471262c4 body=172 status=ok
// SIG undefined FUN_1471262c4(void)

undefined8 FUN_1471262c4(uint param_1,longlong *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  int iVar7;
  
  if ((DAT_14c9ac0c0 - DAT_14c9ac0ec != 1) && (DAT_14c9ac0c0 != DAT_14c9ac0ec)) {
    puVar6 = &DAT_14c9ac0f0;
    if (DAT_14c9ac0f8 != (undefined *)0x0) {
      puVar6 = DAT_14c9ac0f8;
    }
    iVar7 = *(int *)(puVar6 + (ulonglong)(DAT_14c9ac100 - 1U & param_1) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(DAT_14c9ac0b8 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(DAT_14c9ac0b8 + (longlong)iVar7 * 0x20) == *param_2) {
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar4 = *param_2;
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar5 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(longlong *)(puVar1 + 4) = param_2[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_147126370(*param_3);
          *param_3 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 147126370 FUN_147126370 body=128 status=ok
// SIG undefined FUN_147126370(void)

void FUN_147126370(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14c9ac0b8;
  if (DAT_14c9ac0ec != 0) {
    *(int *)(DAT_14c9ac0b8 + (longlong)DAT_14c9ac0e8 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c9ac0ec) {
    iVar4 = DAT_14c9ac0e8;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14c9ac0ec = DAT_14c9ac0ec + 1;
  puVar3 = &DAT_14c9ac0c8;
  if (DAT_14c9ac0d8 != (undefined *)0x0) {
    puVar3 = DAT_14c9ac0d8;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c9ac0e8 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1471263f0 FUN_1471263f0 body=75 status=ok
// SIG undefined FUN_1471263f0(void)

void FUN_1471263f0(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14712643c FUN_14712643c body=357 status=ok
// SIG undefined FUN_14712643c(void)

longlong * FUN_14712643c(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_147126694(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1471266c6(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xaaaaa < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1471265e7(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_1471265a2(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_147126650(param_2);
        FUN_1471265e7(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1471265a2 FUN_1471265a2 body=68 status=ok
// SIG undefined FUN_1471265a2(void)

void FUN_1471265a2(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_147126694(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1471266c6(param_1,param_2);
  return;
}



// FUNCTION 1471265e7 FUN_1471265e7 body=104 status=ok
// SIG undefined FUN_1471265e7(void)

void FUN_1471265e7(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_14021219d(param_1,param_2 + 2);
  return;
}



// FUNCTION 147126650 FUN_147126650 body=68 status=ok
// SIG undefined FUN_147126650(void)

longlong FUN_147126650(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14712674e(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_147126737(lVar2,1);
  return lVar2;
}



// FUNCTION 147126694 FUN_147126694 body=49 status=ok
// SIG undefined FUN_147126694(void)

void FUN_147126694(longlong param_1,int param_2)

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



// FUNCTION 1471266c6 FUN_1471266c6 body=113 status=ok
// SIG undefined FUN_1471266c6(void)

void FUN_1471266c6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 147126737 FUN_147126737 body=23 status=ok
// SIG undefined FUN_147126737(void)

void FUN_147126737(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 8);
    do {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14712674e FUN_14712674e body=147 status=ok
// SIG undefined FUN_14712674e(void)

void FUN_14712674e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1471267e2 FUN_1471267e2 body=96 status=ok
// SIG undefined FUN_1471267e2(void)

void FUN_1471267e2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
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



// FUNCTION 147126842 FUN_147126842 body=113 status=ok
// SIG undefined FUN_147126842(void)

void * FUN_147126842(void *param_1,undefined8 *param_2)

{
  void *_Src;
  void *_Dst;
  int iVar1;
  ulonglong uVar2;
  
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  _Src = (void *)*param_2;
  uVar2 = (param_2[1] - (longlong)_Src >> 3) * -0x5555555555555555;
  iVar1 = (int)uVar2;
  *(int *)((longlong)param_1 + 0x38) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 2;
  }
  else {
    FUN_147126e36(param_1,uVar2 & 0xffffffff);
    _Dst = *(void **)((longlong)param_1 + 0x30);
    if (*(void **)((longlong)param_1 + 0x30) == (void *)0x0) {
      _Dst = param_1;
    }
    memcpy(_Dst,_Src,(longlong)iVar1 * 0x18);
  }
  return param_1;
}



// FUNCTION 1471268b4 FUN_1471268b4 body=401 status=ok
// SIG undefined FUN_1471268b4(void)

undefined4 * FUN_1471268b4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147126a46(param_1,local_40);
  puVar1 = (undefined4 *)param_3[1];
  *local_38 = *(ulonglong *)*param_3;
  local_38[7] = 0;
  uVar11 = *(ulonglong *)(puVar1 + 0xc);
  if (uVar11 == 0) {
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    uVar5 = puVar1[3];
    uVar11 = *(ulonglong *)(puVar1 + 4);
    uVar6 = *(ulonglong *)(puVar1 + 6);
    uVar7 = *(ulonglong *)(puVar1 + 10);
    local_38[5] = *(ulonglong *)(puVar1 + 8);
    local_38[6] = uVar7;
    local_38[3] = uVar11;
    local_38[4] = uVar6;
    *(undefined4 *)(local_38 + 1) = uVar2;
    *(undefined4 *)((longlong)local_38 + 0xc) = uVar3;
    *(undefined4 *)(local_38 + 2) = uVar4;
    *(undefined4 *)((longlong)local_38 + 0x14) = uVar5;
    uVar11 = *(ulonglong *)(puVar1 + 0xc);
  }
  local_38[7] = uVar11;
  *(undefined8 *)(puVar1 + 0xc) = 0;
  *(undefined4 *)(local_38 + 8) = puVar1[0xe];
  *(undefined4 *)((longlong)local_38 + 0x44) = puVar1[0xf];
  *(undefined8 *)(puVar1 + 0xe) = 0x200000000;
  *(undefined4 *)(local_38 + 9) = 0xffffffff;
  local_44 = local_40[0];
  uVar9 = ((uint)(*local_38 >> 0x14) & 0xffff ^ (uint)(*local_38 >> 4)) * -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  uVar9 = uVar9 >> 0x10 ^ uVar9;
  cVar8 = FUN_147126b34(param_1,uVar9,local_38,&local_44);
  uVar2 = local_44;
  if (cVar8 == '\0') {
    uVar10 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar12 = 1;
    if (3 < uVar10) {
      uVar11 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
      lVar13 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar13 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar12 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_38 + 0x4c) = uVar9;
      lVar13 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar13 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 9) =
           *(undefined4 *)
            (lVar13 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar13 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar13 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar13 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar12;
      FUN_147126c56(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147126a46 FUN_147126a46 body=238 status=ok
// SIG undefined FUN_147126a46(void)

int * FUN_147126a46(longlong *param_1,int *param_2)

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
      FUN_1406fba42(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x50);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x50) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x50 + *param_1;
  return param_2;
}



// FUNCTION 147126b34 FUN_147126b34 body=167 status=ok
// SIG undefined FUN_147126b34(void)

undefined8 FUN_147126b34(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x50);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x50) == *param_3) {
          if (*(longlong *)((longlong)_Dst + 0x38) != 0) {
            FUN_1400020a8();
          }
          memmove(_Dst,param_3,0x48);
          FUN_147126bdc(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x48);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147126bdc FUN_147126bdc body=122 status=ok
// SIG undefined FUN_147126bdc(void)

void FUN_147126bdc(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 147126c56 FUN_147126c56 body=478 status=ok
// SIG undefined FUN_147126c56(void)

void FUN_147126c56(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x50;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x4c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x48 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147126e36 FUN_147126e36 body=143 status=ok
// SIG undefined FUN_147126e36(void)

void FUN_147126e36(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 2;
  if (param_2 < 3) {
LAB_147126e4b:
    uVar1 = (uint)uVar2;
    if ((uVar1 < 3) && (*(longlong *)(param_1 + 0x30) == 0)) goto LAB_147126e74;
    uVar3 = 0;
    if (2 < uVar1) {
      uVar3 = uVar2 & 0xffffffff;
    }
  }
  else {
    uVar1 = 0;
    uVar2 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
    uVar2 = uVar2 / 0x18;
    if ((int)param_2 <= (int)uVar2) {
      if ((int)uVar2 < 1) goto LAB_147126e74;
      goto LAB_147126e4b;
    }
    uVar1 = 0x7fffffff;
    uVar3 = 0x7fffffff;
  }
  FUN_1446efa72(param_1 + 0x30,0,uVar3,0x18);
LAB_147126e74:
  *(uint *)(param_1 + 0x3c) = uVar1;
  return;
}



// FUNCTION 147126ec6 FUN_147126ec6 body=147 status=ok
// SIG undefined FUN_147126ec6(void)

void FUN_147126ec6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147126f5a FUN_147126f5a body=323 status=ok
// SIG undefined FUN_147126f5a(void)

undefined4 * FUN_147126f5a(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14712709e(local_40);
  uVar1 = param_2[1];
  *local_38 = *(undefined8 *)*param_2;
  FUN_1471259e8(local_38 + 1,uVar1);
  *(undefined4 *)(local_38 + 0xb) = 0xffffffff;
  local_44 = local_40[0];
  uVar9 = (int)((ulonglong)*local_38 >> 0x20) * 0x17 + (int)*local_38;
  cVar4 = FUN_1471271b4(uVar9,local_38,&local_44);
  uVar3 = local_44;
  if (cVar4 == '\0') {
    uVar5 = DAT_14c9ac020 - DAT_14c9ac04c;
    iVar8 = 1;
    if (3 < uVar5) {
      uVar7 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar8 <= DAT_14c9ac060)) {
      uVar9 = DAT_14c9ac060 - 1U & uVar9;
      *(uint *)((longlong)local_38 + 0x5c) = uVar9;
      puVar6 = DAT_14c9ac058;
      if (DAT_14c9ac058 == (undefined *)0x0) {
        puVar6 = &DAT_14c9ac050;
      }
      *(undefined4 *)(local_38 + 0xb) =
           *(undefined4 *)(puVar6 + ((longlong)DAT_14c9ac060 - 1U & (longlong)(int)uVar9) * 4);
      puVar6 = DAT_14c9ac058;
      if (DAT_14c9ac058 == (undefined *)0x0) {
        puVar6 = &DAT_14c9ac050;
      }
      *(undefined4 *)(puVar6 + ((longlong)DAT_14c9ac060 - 1U & (longlong)(int)uVar9) * 4) = local_44
      ;
    }
    else {
      DAT_14c9ac060 = iVar8;
      FUN_1471272f4();
    }
  }
  *param_1 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14712709e FUN_14712709e body=278 status=ok
// SIG undefined FUN_14712709e(void)

int * FUN_14712709e(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14c9ac048;
  iVar4 = DAT_14c9ac020;
  if (DAT_14c9ac04c == 0) {
    iVar2 = DAT_14c9ac020 + 1;
    bVar7 = DAT_14c9ac024 == DAT_14c9ac020;
    DAT_14c9ac020 = iVar2;
    if (bVar7) {
      FUN_14488f93c(&DAT_14c9ac018,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14c9ac028,1);
    puVar3 = DAT_14c9ac038;
    if (DAT_14c9ac038 == (undefined *)0x0) {
      puVar3 = &DAT_14c9ac028;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14c9ac048;
    DAT_14c9ac048 = *(int *)(DAT_14c9ac018 + 4 + lVar6 * 0x60);
    DAT_14c9ac04c = DAT_14c9ac04c + -1;
    iVar4 = iVar2;
    if (DAT_14c9ac04c != 0) {
      *(undefined4 *)(DAT_14c9ac018 + (longlong)DAT_14c9ac048 * 0x60) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14c9ac028;
  if (DAT_14c9ac038 != (undefined *)0x0) {
    puVar3 = DAT_14c9ac038;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x60 + DAT_14c9ac018;
  return param_1;
}



// FUNCTION 1471271b4 FUN_1471271b4 body=184 status=ok
// SIG undefined FUN_1471271b4(void)

undefined8 FUN_1471271b4(uint param_1,longlong *param_2,int *param_3)

{
  void *_Dst;
  undefined *puVar1;
  int iVar2;
  
  if ((DAT_14c9ac020 - DAT_14c9ac04c != 1) && (DAT_14c9ac020 != DAT_14c9ac04c)) {
    puVar1 = &DAT_14c9ac050;
    if (DAT_14c9ac058 != (undefined *)0x0) {
      puVar1 = DAT_14c9ac058;
    }
    iVar2 = *(int *)(puVar1 + (ulonglong)(DAT_14c9ac060 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(DAT_14c9ac018 + (longlong)iVar2 * 0x60);
        if (*(longlong *)(DAT_14c9ac018 + (longlong)iVar2 * 0x60) == *param_2) {
          FUN_1471263f0((longlong)_Dst + 0x18);
          if (*(longlong *)((longlong)_Dst + 8) != 0) {
            FUN_1400020a8();
          }
          memmove(_Dst,param_2,0x58);
          FUN_14712726c(*param_3);
          *param_3 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14712726c FUN_14712726c body=136 status=ok
// SIG undefined FUN_14712726c(void)

void FUN_14712726c(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14c9ac018;
  if (DAT_14c9ac04c != 0) {
    *(int *)(DAT_14c9ac018 + (longlong)DAT_14c9ac048 * 0x60) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x60) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c9ac04c) {
    iVar4 = DAT_14c9ac048;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x60) = iVar4;
  DAT_14c9ac04c = DAT_14c9ac04c + 1;
  puVar3 = &DAT_14c9ac028;
  if (DAT_14c9ac038 != (undefined *)0x0) {
    puVar3 = DAT_14c9ac038;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c9ac048 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1471272f4 FUN_1471272f4 body=492 status=ok
// SIG undefined FUN_1471272f4(void)

void FUN_1471272f4(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9ac058 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c9ac058,0,0,4);
  }
  uVar2 = DAT_14c9ac060;
  uVar3 = local_50;
  if (DAT_14c9ac060 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14c9ac050,0,DAT_14c9ac060,4);
    if (0 < (int)uVar2) {
      do {
        puVar5 = DAT_14c9ac058;
        if (DAT_14c9ac058 == (undefined *)0x0) {
          puVar5 = &DAT_14c9ac050;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14c9ac060 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c9ac028;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c9ac040 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c9ac018;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar6 = (longlong)iVar4 * 0x60;
        uVar9 = (longlong)
                ((int)((ulonglong)*(undefined8 *)(lVar1 + lVar6) >> 0x20) * 0x17 +
                (int)*(undefined8 *)(lVar1 + lVar6)) & (longlong)(int)DAT_14c9ac060 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x5c + lVar6) = iVar8;
        puVar5 = DAT_14c9ac058;
        if (DAT_14c9ac058 == (undefined *)0x0) {
          puVar5 = &DAT_14c9ac050;
        }
        *(undefined4 *)(lVar1 + 0x58 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14c9ac060 - 1U & uVar9) * 4);
        puVar5 = DAT_14c9ac058;
        if (DAT_14c9ac058 == (undefined *)0x0) {
          puVar5 = &DAT_14c9ac050;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14c9ac060 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1471274e1 FUN_1471274e1 body=144 status=ok
// SIG undefined FUN_1471274e1(void)

void FUN_1471274e1(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined4 *)(param_1 + lVar2) = *(undefined4 *)(param_2 + lVar2);
      *(undefined8 *)(param_1 + 8 + lVar2) = 0;
      iVar1 = *(int *)(param_2 + 0x10 + lVar2);
      _Src = *(void **)(param_2 + 8 + lVar2);
      *(int *)(param_1 + 0x10 + lVar2) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x14 + lVar2) = 0;
      }
      else {
        FUN_1446dd670(param_1 + 8 + lVar2,iVar1,0);
        memcpy(*(void **)(param_1 + 8 + lVar2),_Src,(longlong)iVar1 * 2);
      }
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147127572 FUN_147127572 body=89 status=ok
// SIG undefined FUN_147127572(void)

void FUN_147127572(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x8c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
    if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x80),
              (longlong)*(int *)((longlong)param_1 + 0x88) * 2);
      FUN_1446efa72((longlong)param_1 + 0x80,0,0,2);
      return;
    }
  }
  return;
}



// FUNCTION 1471275cc FUN_1471275cc body=96 status=ok
// SIG undefined FUN_1471275cc(void)

void FUN_1471275cc(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
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



// FUNCTION 14712762c FUN_14712762c body=418 status=ok
// SIG undefined FUN_14712762c(void)

void FUN_14712762c(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_140e9549c(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1406fba42(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x50 + lVar2 + -0x4c);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -0x14;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 1471277ce FUN_1471277ce body=85 status=ok
// SIG undefined FUN_1471277ce(void)

void FUN_1471277ce(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
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
  FUN_14017daa0();
  return;
}



// FUNCTION 147127824 FUN_147127824 body=62 status=ok
// SIG undefined FUN_147127824(void)

void FUN_147127824(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147127862(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 147127862 FUN_147127862 body=93 status=ok
// SIG undefined FUN_147127862(void)

ulonglong FUN_147127862(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1471278c0 FUN_1471278c0 body=62 status=ok
// SIG undefined FUN_1471278c0(void)

void FUN_1471278c0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1471278fe(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1471278fe FUN_1471278fe body=93 status=ok
// SIG undefined FUN_1471278fe(void)

ulonglong FUN_1471278fe(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 14712796c FUN_14712796c body=400 status=ok
// SIG undefined FUN_14712796c(void)

void FUN_14712796c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 auStack_b8 [32];
  longlong local_98 [3];
  undefined8 local_80;
  undefined1 local_78 [4];
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined4 local_64;
  undefined2 local_60;
  longlong local_58;
  longlong *local_48;
  longlong local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_80 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_98[0] = 0;
  local_98[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  local_78[0] = 3;
  local_74 = 0;
  uStack_6c = 0;
  local_60 = 0x101;
  local_58 = 0;
  local_48 = (longlong *)0x0;
  local_64 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  if (*(undefined1 **)(param_2 + 0x38) == (undefined1 *)0x0) {
    puVar2 = local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147127afe(local_80,local_98,puVar2);
  if (local_58 != 0) {
    plVar1 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar1 = local_38;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147127afe FUN_147127afe body=2420 status=ok
// SIG undefined FUN_147127afe(void)

void FUN_147127afe(longlong param_1,undefined8 param_2,char *param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  char cVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  char *pcVar13;
  longlong *plVar14;
  code **ppcVar15;
  bool bVar16;
  undefined1 auStack_348 [32];
  code *local_328 [2];
  longlong *local_318;
  longlong local_308 [4];
  undefined8 local_2e8 [16];
  code *local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  char local_250;
  char local_24f;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  longlong *local_200;
  longlong *plStack_1f8;
  code *local_1e8 [2];
  undefined8 *local_1d8;
  code *local_1a8 [2];
  undefined8 *local_198;
  code *local_168 [2];
  undefined8 *local_158;
  code *local_128 [2];
  undefined8 *local_118;
  code *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_348;
  local_268 = *(code **)(param_3 + 0x20);
  local_258 = (longlong *)0x0;
  if (local_268 != (code *)0x0) {
    pcVar13 = param_3 + 0x40;
    if (*(char **)(param_3 + 0x30) != (char *)0x0) {
      pcVar13 = *(char **)(param_3 + 0x30);
    }
    (*(code *)**(undefined8 **)pcVar13)(pcVar13,&local_258);
  }
  local_228 = *(longlong *)(param_3 + 4);
  uStack_220 = *(longlong *)(param_3 + 0xc);
  local_e8 = (code *)0x0;
  local_d8 = (longlong *)0x0;
  local_d8 = (longlong *)FUN_14001cc68(0x60,0x10);
  *local_d8 = (longlong)&PTR_FUN_14a1e92e0;
  local_d8[2] = (longlong)local_268;
  local_d8[4] = (longlong)local_258;
  local_258 = (longlong *)0x0;
  *(undefined4 *)(local_d8 + 8) = (undefined4)local_238;
  *(undefined4 *)((longlong)local_d8 + 0x44) = local_238._4_4_;
  *(undefined4 *)(local_d8 + 9) = uStack_230;
  *(undefined4 *)((longlong)local_d8 + 0x4c) = uStack_22c;
  *(undefined4 *)(local_d8 + 6) = (undefined4)local_248;
  *(undefined4 *)((longlong)local_d8 + 0x34) = local_248._4_4_;
  *(undefined4 *)(local_d8 + 7) = uStack_240;
  *(undefined4 *)((longlong)local_d8 + 0x3c) = uStack_23c;
  if (local_268 != (code *)0x0) {
    local_268 = (code *)0x0;
  }
  local_d8[10] = local_228;
  local_d8[0xb] = uStack_220;
  if (local_d8 != (longlong *)&DAT_fffffffffffffff0) {
    local_e8 = FUN_142b7ae32;
  }
  if (((param_1 == 0) || (lVar9 = FUN_1447b4020(param_1), lVar9 == 0)) ||
     (lVar9 = FUN_1447b4020(param_1), *(longlong *)(lVar9 + 0x10) == 0)) {
    FUN_1415b7ec4(L"Invalid texture supplied.",2,0);
    local_268 = local_e8;
    local_258 = (longlong *)0x0;
    if (local_e8 != (code *)0x0) {
      plVar14 = local_d8;
      if (local_d8 == (longlong *)0x0) {
        plVar14 = (longlong *)&local_c8;
      }
      (**(code **)*plVar14)(plVar14,&local_258);
    }
    local_128[0] = (code *)0x0;
    local_118 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    *local_118 = &PTR_LAB_14a1e9300;
    local_118[2] = local_268;
    local_118[4] = local_258;
    *(undefined4 *)(local_118 + 8) = (undefined4)local_238;
    *(undefined4 *)((longlong)local_118 + 0x44) = local_238._4_4_;
    *(undefined4 *)(local_118 + 9) = uStack_230;
    *(undefined4 *)((longlong)local_118 + 0x4c) = uStack_22c;
    *(undefined4 *)(local_118 + 6) = (undefined4)local_248;
    *(undefined4 *)((longlong)local_118 + 0x34) = local_248._4_4_;
    *(undefined4 *)(local_118 + 7) = uStack_240;
    *(undefined4 *)((longlong)local_118 + 0x3c) = uStack_23c;
    if (local_268 != (code *)0x0) {
      local_268 = (code *)0x0;
    }
    if (local_118 != (undefined8 *)&DAT_fffffffffffffff0) {
      local_128[0] = FUN_142b7af94;
    }
    ppcVar15 = local_128;
  }
  else {
    lVar9 = FUN_1447b4020(param_1);
    plVar14 = *(longlong **)(lVar9 + 0x10);
    if ((plVar14 != (longlong *)0x0) && (*(char *)((longlong)plVar14 + 0x52) == '\0')) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      lVar9 = (**(code **)(*plVar14 + 8))(plVar14);
      bVar4 = *(byte *)(lVar9 + 0x33);
      if (bVar4 < 10) {
        if (bVar4 == 1) {
LAB_147128002:
          if (*param_3 == '\x03') goto LAB_14712800b;
          FUN_1415b7ec4(L"Only EXR export is currently supported for PF_FloatRGBA and PF_A32B32G32R32F formats."
                        ,2,0);
          local_268 = local_e8;
          local_258 = (longlong *)0x0;
          if (local_e8 != (code *)0x0) {
            plVar11 = local_d8;
            if (local_d8 == (longlong *)0x0) {
              plVar11 = (longlong *)&local_c8;
            }
            (**(code **)*plVar11)(plVar11,&local_258);
          }
          local_1e8[0] = (code *)0x0;
          local_1d8 = (undefined8 *)FUN_14001cc68(0x50,0x10);
          *local_1d8 = &PTR_LAB_14a1e9360;
          local_1d8[2] = local_268;
          local_1d8[4] = local_258;
          *(undefined4 *)(local_1d8 + 8) = (undefined4)local_238;
          *(undefined4 *)((longlong)local_1d8 + 0x44) = local_238._4_4_;
          *(undefined4 *)(local_1d8 + 9) = uStack_230;
          *(undefined4 *)((longlong)local_1d8 + 0x4c) = uStack_22c;
          *(undefined4 *)(local_1d8 + 6) = (undefined4)local_248;
          *(undefined4 *)((longlong)local_1d8 + 0x34) = local_248._4_4_;
          *(undefined4 *)(local_1d8 + 7) = uStack_240;
          *(undefined4 *)((longlong)local_1d8 + 0x3c) = uStack_23c;
          if (local_268 != (code *)0x0) {
            local_268 = (code *)0x0;
          }
          if (local_1d8 != (undefined8 *)&DAT_fffffffffffffff0) {
            local_1e8[0] = FUN_142b7b1f8;
          }
          ppcVar15 = local_1e8;
        }
        else {
          if (bVar4 == 2) goto LAB_14712800b;
LAB_147127f17:
          FUN_1415b7ec4(L"Unsupported texture format.",2,0);
          local_268 = local_e8;
          local_258 = (longlong *)0x0;
          if (local_e8 != (code *)0x0) {
            plVar11 = local_d8;
            if (local_d8 == (longlong *)0x0) {
              plVar11 = (longlong *)&local_c8;
            }
            (**(code **)*plVar11)(plVar11,&local_258);
          }
          local_1a8[0] = (code *)0x0;
          local_198 = (undefined8 *)FUN_14001cc68(0x50,0x10);
          *local_198 = &PTR_LAB_14a1e9340;
          local_198[2] = local_268;
          local_198[4] = local_258;
          *(undefined4 *)(local_198 + 8) = (undefined4)local_238;
          *(undefined4 *)((longlong)local_198 + 0x44) = local_238._4_4_;
          *(undefined4 *)(local_198 + 9) = uStack_230;
          *(undefined4 *)((longlong)local_198 + 0x4c) = uStack_22c;
          *(undefined4 *)(local_198 + 6) = (undefined4)local_248;
          *(undefined4 *)((longlong)local_198 + 0x34) = local_248._4_4_;
          *(undefined4 *)(local_198 + 7) = uStack_240;
          *(undefined4 *)((longlong)local_198 + 0x3c) = uStack_23c;
          if (local_268 != (code *)0x0) {
            local_268 = (code *)0x0;
          }
          if (local_198 != (undefined8 *)&DAT_fffffffffffffff0) {
            local_1a8[0] = FUN_142b7b12c;
          }
          ppcVar15 = local_1a8;
        }
        local_258 = (longlong *)0x0;
        FUN_1407461b0(1,ppcVar15);
        if (local_268 != (code *)0x0) {
          plVar11 = local_258;
          if (local_258 == (longlong *)0x0) {
            plVar11 = &local_248;
          }
          (**(code **)(*plVar11 + 0x10))();
        }
      }
      else {
        if (bVar4 == 10) goto LAB_147128002;
        if (bVar4 != 0x25) goto LAB_147127f17;
LAB_14712800b:
        local_248 = (code *)0x0;
        local_238 = (longlong *)0x0;
        local_268 = (code *)0x0;
        uStack_260 = 0;
        local_200 = (longlong *)0x0;
        plStack_1f8 = (longlong *)0x0;
        FUN_144a52528();
        FUN_1446ddc76(local_2e8,"ImageWriteQueue",1);
        uVar10 = FUN_144a52528();
        plVar11 = (longlong *)FUN_1402c9134(uVar10,local_2e8[0],local_328,1);
        local_208 = (**(code **)(*plVar11 + 0x40))(plVar11);
        FUN_144a787a6(&local_268,param_2);
        plVar11 = local_238;
        pcVar7 = local_248;
        lVar9 = CONCAT44(uStack_c4,local_c8);
        lVar6 = CONCAT44(uStack_bc,uStack_c0);
        local_248 = local_e8;
        local_238 = local_d8;
        local_e8 = pcVar7;
        uStack_e0 = uStack_240;
        uStack_dc = uStack_23c;
        local_d8 = plVar11;
        uStack_d0 = uStack_230;
        uStack_cc = uStack_22c;
        local_c8 = (undefined4)local_228;
        uStack_c4 = local_228._4_4_;
        uStack_c0 = (undefined4)uStack_220;
        uStack_bc = uStack_220._4_4_;
        local_b8 = local_218;
        uStack_b4 = uStack_214;
        uStack_b0 = uStack_210;
        uStack_ac = uStack_20c;
        local_258 = (longlong *)CONCAT71(local_258._1_7_,*param_3);
        local_258 = (longlong *)CONCAT44(*(undefined4 *)(param_3 + 0x14),(undefined4)local_258);
        local_250 = param_3[0x18];
        local_24f = param_3[0x19];
        local_228 = lVar9;
        uStack_220 = lVar6;
        if (local_24f == '\0') {
          plVar12 = (longlong *)FUN_14001cc68(0x28,0x10);
          plVar12[1] = (longlong)&DAT_100000001;
          *plVar12 = (longlong)&PTR_FUN_14a1e9380;
          plVar11 = plVar12 + 2;
          FUN_145d28d24(plVar11);
          plVar5 = plStack_1f8;
          *(undefined1 *)(plVar12 + 4) = 0;
          local_200 = plVar11;
          if (plVar12 == (longlong *)0x0) {
            if (plStack_1f8 != (longlong *)0x0) {
              plStack_1f8 = (longlong *)0x0;
LAB_1471283d7:
              LOCK();
              plVar11 = plVar5 + 1;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)*plVar11 == 0) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar5 + 0x10))(plVar5);
                }
              }
              if (plVar12 != (longlong *)0x0) goto LAB_1471283ff;
            }
          }
          else {
            LOCK();
            *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
            UNLOCK();
            if (plVar12 == plStack_1f8) {
              LOCK();
              plVar11 = plVar12 + 1;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)*plVar11 == 0) {
                (**(code **)*plVar12)(plVar12);
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar12 + 0x10))(plVar12);
                }
              }
            }
            else {
              bVar16 = plStack_1f8 != (longlong *)0x0;
              plStack_1f8 = plVar12;
              if (bVar16) goto LAB_1471283d7;
            }
LAB_1471283ff:
            LOCK();
            plVar11 = plVar12 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
          }
        }
        FUN_142b79d34(local_2e8,&local_268);
        local_328[0] = (code *)0x0;
        plVar11 = (longlong *)FUN_14001cc68(0x90,0x10);
        *plVar11 = (longlong)&PTR_FUN_14a1e93a0;
        local_318 = plVar11;
        FUN_142b79d34(plVar11 + 2,local_2e8);
        if (plVar11 != (longlong *)&DAT_fffffffffffffff0) {
          local_328[0] = FUN_142b7b2c4;
        }
        cVar8 = FUN_142b79566(param_1,local_328);
        if (cVar8 == '\0') {
          if (local_328[0] != (code *)0x0) {
            plVar11 = local_318;
            if (local_318 == (longlong *)0x0) {
              plVar11 = local_308;
            }
            lVar9 = *plVar11;
LAB_147128210:
            (**(code **)(lVar9 + 0x10))(plVar11);
          }
        }
        else {
          cVar8 = param_3[0x19];
          if (local_328[0] != (code *)0x0) {
            plVar11 = local_318;
            if (local_318 == (longlong *)0x0) {
              plVar11 = local_308;
            }
            (**(code **)(*plVar11 + 0x10))();
          }
          if (cVar8 == '\0') {
            *(undefined1 *)(local_200 + 2) = 1;
            lVar9 = *local_200;
            plVar11 = (longlong *)local_200[1];
            if (plVar11 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
              UNLOCK();
            }
            if (lVar9 != 0) {
              do {
                plVar5 = *(longlong **)(lVar9 + 0x70);
                cVar8 = (**(code **)(*plVar5 + 0x20))(plVar5,0xffffffff,0);
              } while (cVar8 == '\0');
            }
            if (plVar11 != (longlong *)0x0) {
              LOCK();
              plVar5 = plVar11 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 == 0) {
                (**(code **)*plVar11)(plVar11);
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  lVar9 = *plVar11;
                  goto LAB_147128210;
                }
              }
            }
          }
        }
        FUN_142b79dec(local_2e8);
        FUN_142b79dec(&local_268);
      }
      LOCK();
      puVar2 = (uint *)(plVar14 + 1);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812(plVar14);
      }
      goto LAB_147127dbb;
    }
    FUN_1415b7ec4(L"Invalid texture supplied.",2,0);
    local_268 = local_e8;
    local_258 = (longlong *)0x0;
    if (local_e8 != (code *)0x0) {
      plVar14 = local_d8;
      if (local_d8 == (longlong *)0x0) {
        plVar14 = (longlong *)&local_c8;
      }
      (**(code **)*plVar14)(plVar14,&local_258);
    }
    local_168[0] = (code *)0x0;
    local_158 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    *local_158 = &PTR_LAB_14a1e9320;
    local_158[2] = local_268;
    local_158[4] = local_258;
    *(undefined4 *)(local_158 + 8) = (undefined4)local_238;
    *(undefined4 *)((longlong)local_158 + 0x44) = local_238._4_4_;
    *(undefined4 *)(local_158 + 9) = uStack_230;
    *(undefined4 *)((longlong)local_158 + 0x4c) = uStack_22c;
    *(undefined4 *)(local_158 + 6) = (undefined4)local_248;
    *(undefined4 *)((longlong)local_158 + 0x34) = local_248._4_4_;
    *(undefined4 *)(local_158 + 7) = uStack_240;
    *(undefined4 *)((longlong)local_158 + 0x3c) = uStack_23c;
    if (local_268 != (code *)0x0) {
      local_268 = (code *)0x0;
    }
    if (local_158 != (undefined8 *)&DAT_fffffffffffffff0) {
      local_168[0] = FUN_142b7b060;
    }
    ppcVar15 = local_168;
  }
  local_258 = (longlong *)0x0;
  FUN_1407461b0(1,ppcVar15);
  if (local_268 != (code *)0x0) {
    plVar14 = local_258;
    if (local_258 == (longlong *)0x0) {
      plVar14 = &local_248;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
LAB_147127dbb:
  if (local_e8 != (code *)0x0) {
    plVar14 = local_d8;
    if (local_d8 == (longlong *)0x0) {
      plVar14 = (longlong *)&local_c8;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if ((local_60 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147128476 FUN_147128476 body=28 status=ok
// SIG undefined FUN_147128476(void)

uint FUN_147128476(byte param_1)

{
  uint uVar1;
  
  uVar1 = 3;
  if (param_1 < 4) {
    uVar1 = 0x5030100 >> (param_1 * '\b' & 0x1f);
  }
  return uVar1;
}



// FUNCTION 147128492 FUN_147128492 body=652 status=ok
// SIG undefined FUN_147128492(void)

void FUN_147128492(longlong param_1,uint param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Dst;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  LPCRITICAL_SECTION local_d0;
  longlong local_c8;
  longlong *local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code *local_88 [2];
  undefined8 *local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x50);
  EnterCriticalSection(lpCriticalSection);
  if (*(uint *)(param_1 + 0x88) == param_2) {
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + -1;
  }
  else {
    iVar9 = *(int *)(param_1 + 0x80);
    if (0 < iVar9) {
      uVar11 = 0xffffffff;
      lVar5 = 4;
      uVar7 = 0;
      do {
        lVar10 = *(longlong *)(param_1 + 0x78);
        uVar8 = *(uint *)(lVar10 + -4 + lVar5);
        iVar12 = *(int *)(lVar10 + lVar5);
        if (iVar12 != 0 && param_2 < uVar8) break;
        if (uVar8 == param_2) {
          iVar12 = iVar12 + -1;
          *(int *)(lVar10 + lVar5) = iVar12;
          iVar9 = *(int *)(param_1 + 0x80);
        }
        uVar8 = uVar11 + 1;
        if (iVar12 != 0) {
          uVar8 = uVar11;
        }
        if (uVar7 != uVar11 + 1) {
          uVar8 = uVar11;
        }
        uVar11 = uVar8;
        uVar7 = uVar7 + 1;
        lVar5 = lVar5 + 0x60;
      } while ((longlong)uVar7 < (longlong)iVar9);
      if (-1 < (int)uVar11) {
        iVar9 = uVar11 + 1;
        local_d8 = (ulonglong)uVar11 + 1;
        lVar5 = local_d8 * 0x60;
        lVar10 = 0;
        local_d0 = lpCriticalSection;
        do {
          lVar2 = *(longlong *)(param_1 + 0x78);
          *(undefined4 *)(*(longlong *)(lVar2 + 8 + lVar10) + 0x80) = 0;
          FUN_140b576f0();
          lVar3 = *(longlong *)(lVar2 + 0x20 + lVar10);
          if (lVar3 != 0) {
            local_b8 = *(longlong **)(lVar2 + 0x30 + lVar10);
            *(undefined8 *)(lVar2 + 0x30 + lVar10) = 0;
            puVar1 = (undefined4 *)(lVar2 + 0x40 + lVar10);
            local_a8 = *puVar1;
            uStack_a4 = puVar1[1];
            uStack_a0 = puVar1[2];
            uStack_9c = puVar1[3];
            puVar1 = (undefined4 *)(lVar2 + 0x50 + lVar10);
            local_98 = *puVar1;
            uStack_94 = puVar1[1];
            uStack_90 = puVar1[2];
            uStack_8c = puVar1[3];
            if (lVar3 != 0) {
              *(undefined8 *)(lVar2 + 0x20 + lVar10) = 0;
            }
            local_88[0] = (code *)0x0;
            local_78 = (undefined8 *)0x0;
            local_c8 = lVar3;
            local_78 = (undefined8 *)FUN_14001cc68(0x50,0x10);
            *local_78 = &PTR_LAB_14a1e9450;
            local_78[2] = local_c8;
            local_78[4] = local_b8;
            local_b8 = (longlong *)0x0;
            *(undefined4 *)(local_78 + 8) = local_98;
            *(undefined4 *)((longlong)local_78 + 0x44) = uStack_94;
            *(undefined4 *)(local_78 + 9) = uStack_90;
            *(undefined4 *)((longlong)local_78 + 0x4c) = uStack_8c;
            *(undefined4 *)(local_78 + 6) = local_a8;
            *(undefined4 *)((longlong)local_78 + 0x34) = uStack_a4;
            *(undefined4 *)(local_78 + 7) = uStack_a0;
            *(undefined4 *)((longlong)local_78 + 0x3c) = uStack_9c;
            if (local_c8 != 0) {
              local_c8 = 0;
            }
            if (local_78 != (undefined8 *)&DAT_fffffffffffffff0) {
              local_88[0] = FUN_142b7b680;
            }
            FUN_1407461b0(1,local_88);
            if (local_c8 != 0) {
              plVar6 = local_b8;
              if (local_b8 == (longlong *)0x0) {
                plVar6 = (longlong *)&local_a8;
              }
              (**(code **)(*plVar6 + 0x10))();
            }
          }
          lVar10 = lVar10 + 0x60;
        } while (lVar5 != lVar10);
        _Dst = *(void **)(param_1 + 0x78);
        FUN_145c4d33a(_Dst,iVar9);
        iVar4 = *(int *)(param_1 + 0x80) - iVar9;
        iVar12 = iVar9;
        if (iVar4 != 0) {
          memmove(_Dst,(void *)(local_d8 * 0x60 + (longlong)_Dst),(longlong)iVar4 * 0x60);
          iVar12 = *(int *)(param_1 + 0x80);
        }
        *(int *)(param_1 + 0x80) = iVar12 - iVar9;
        lpCriticalSection = local_d0;
      }
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147128724 FUN_147128724 body=100 status=ok
// SIG undefined FUN_147128724(void)

void FUN_147128724(longlong *param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  
  uVar2 = (**(code **)(*(longlong *)param_1[4] + 8))();
  *(undefined1 *)(param_1[5] + 0x80) = uVar2;
  FUN_140b576f0();
  lVar1 = param_1[3];
  FUN_147128492(lVar1,(int)param_1[2]);
  LOCK();
  *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
  UNLOCK();
  (**(code **)(**(longlong **)(lVar1 + 0x10) + 0x10))();
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014712877d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,1);
    return;
  }
  return;
}


