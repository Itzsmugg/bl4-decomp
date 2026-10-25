// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1474e2ab6 FUN_1474e2ab6 body=3677 status=ok
// SIG undefined FUN_1474e2ab6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1474e2ab6(longlong param_1,double *param_2,uint param_3,longlong *param_4,
                      double *param_5)

{
  undefined1 auVar1 [16];
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
  int *piVar25;
  int iVar26;
  uint uVar27;
  longlong lVar28;
  longlong lVar29;
  double *pdVar30;
  double *pdVar31;
  ulonglong uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar45;
  double dVar46;
  undefined1 auVar44 [16];
  undefined1 auVar47 [16];
  double dVar49;
  undefined1 auVar48 [16];
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auStack_2f8 [32];
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
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
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
  double local_158 [4];
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
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  pdVar30 = param_2;
  for (lVar28 = 0xc; auVar55 = _DAT_149934d80, lVar28 != 0; lVar28 = lVar28 + -1) {
    *pdVar30 = *param_5;
    param_5 = param_5 + 1;
    pdVar30 = pdVar30 + 1;
  }
  dVar39 = (double)DAT_149934d80;
  dVar46 = DAT_149934d80._8_8_;
  switch(param_3 & 0xff) {
  case 1:
    lVar28 = *param_4;
    local_2a8 = 0.0;
    dStack_2a0 = 0.0;
    local_2b8 = ZEXT816(0);
    auVar42 = *(undefined1 (*) [16])(lVar28 + 0x50);
    dVar2 = auVar42._0_8_;
    dVar8 = auVar42._8_8_;
    auVar43 = *(undefined1 (*) [16])(lVar28 + 0x60);
    dVar3 = auVar43._0_8_;
    auVar48 = *(undefined1 (*) [16])(param_2 + 8);
    dVar4 = auVar48._0_8_;
    dVar7 = auVar48._8_8_;
    auVar1 = *(undefined1 (*) [16])(param_2 + 10);
    dVar5 = auVar1._0_8_;
    auVar42 = minpd(auVar48,auVar42);
    auVar48 = minpd(auVar1,auVar43);
    auVar40._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
    auVar40._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
    iVar26 = movmskpd((int)param_1,auVar40);
    auVar47._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
    auVar47._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
    uVar27 = movmskpd((&switchD_1474e2b6f::switchdataD_14a442a0c)[(param_3 & 0xff) - 1] + 0x4a442a0c
                      ,auVar47);
    if ((uVar27 & 0x3fffffff) == 0 && iVar26 == 0) {
      dVar11 = *param_2;
      dVar13 = param_2[1];
      dVar14 = param_2[2];
      dVar16 = param_2[3];
      dVar17 = *(double *)(lVar28 + 0x10);
      dVar18 = *(double *)(lVar28 + 0x18);
      dVar19 = *(double *)(lVar28 + 0x20);
      dVar20 = *(double *)(lVar28 + 0x28);
      dVar46 = *(double *)(lVar28 + 0x28);
      dVar39 = *(double *)(lVar28 + 0x28);
      dVar38 = *(double *)(lVar28 + 0x10);
      dVar37 = *(double *)(lVar28 + 0x10);
      dVar9 = *(double *)(lVar28 + 0x18);
      dVar10 = *(double *)(lVar28 + 0x18);
      dVar12 = *(double *)(lVar28 + 0x20);
      dVar49 = *(double *)(lVar28 + 0x20);
      local_2d8 = dVar13 * dVar12 * -1.0 + dVar14 * dVar9 + dVar16 * dVar38 * 1.0 + dVar11 * dVar46;
      dStack_2d0 = dVar11 * dVar49 * 1.0 +
                   dVar16 * dVar10 + dVar14 * dVar37 * -1.0 + dVar13 * dVar39;
      dVar52 = param_2[4] * dVar2;
      dVar51 = param_2[5] * dVar8;
      dVar54 = param_2[6] * dVar3;
      dVar15 = param_2[7] * auVar43._8_8_;
      dVar50 = dVar51 * dVar17 - dVar18 * dVar52;
      dVar53 = dVar54 * dVar18 - dVar19 * dVar51;
      dVar45 = dVar52 * dVar19 - dVar17 * dVar54;
      dVar6 = dVar15 * dVar20 - dVar20 * dVar15;
      dVar53 = dVar53 + dVar53;
      dVar45 = dVar45 + dVar45;
      dVar50 = dVar50 + dVar50;
      dVar6 = dVar6 + dVar6;
      dVar51 = (dVar53 * dVar19 - dVar50 * dVar17) + dVar39 * dVar45 + dVar51 +
               *(double *)(lVar28 + 0x38);
      local_2a8 = (dVar45 * dVar17 - dVar18 * dVar53) + dVar46 * dVar50 + dVar54 +
                  *(double *)(lVar28 + 0x40);
      dStack_2a0 = (dVar6 * dVar20 - dVar6 * dVar20) + dVar39 * dVar6 + dVar15 +
                   *(double *)(lVar28 + 0x48);
      local_2c8._8_8_ =
           dVar14 * dVar49 * -1.0 + ((dVar37 * dVar11 * -1.0 + dVar16 * dVar39) - dVar13 * dVar10);
      local_2c8._0_8_ =
           dVar16 * dVar12 * 1.0 + ((dVar38 * dVar13 * 1.0 + dVar14 * dVar46) - dVar11 * dVar9);
      local_2b8._8_4_ = SUB84(dVar51,0);
      local_2b8._0_8_ =
           (dVar50 * dVar18 - dVar19 * dVar45) + dVar46 * dVar53 + dVar52 +
           *(double *)(lVar28 + 0x30);
      local_2b8._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
    }
    else {
      dVar12 = *(double *)(lVar28 + 0x10);
      dVar49 = *(double *)(lVar28 + 0x18);
      dVar50 = *(double *)(lVar28 + 0x20);
      dVar53 = dVar49 + dVar49;
      dVar45 = dVar50 + dVar50;
      dVar38 = dVar12 * (dVar12 + dVar12);
      local_188 = (1.0 - (dVar38 + dVar49 * dVar53)) * dVar3;
      dVar10 = *(double *)(lVar28 + 0x10) * dVar45;
      dVar37 = *(double *)(lVar28 + 0x28);
      dVar51 = dVar45 * dVar37;
      dVar52 = (dVar12 + dVar12) * *(double *)(lVar28 + 0x28);
      dVar37 = dVar53 * dVar37;
      local_198 = (dVar37 + dVar10) * dVar3;
      dVar38 = (dVar46 - (dVar50 * dVar45 + dVar38)) * dVar8;
      dVar9 = (dVar53 * dVar12 + dVar51) * dVar2;
      local_1a8 = (dVar45 * dVar49 + dVar52) * dVar8;
      dStack_190 = (dVar45 * dVar49 - dVar52) * dVar3;
      local_1c8 = (dVar10 - dVar37) * dVar2;
      local_1d8._8_4_ = SUB84(dVar9,0);
      local_1d8._0_8_ = (dVar39 - (dVar50 * dVar45 + dVar49 * dVar53)) * dVar2;
      local_1d8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      uStack_1c0 = 0;
      local_1b8._8_4_ = SUB84(dVar38,0);
      local_1b8._0_8_ = (dVar53 * dVar12 - dVar51) * dVar8;
      local_1b8._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
      uStack_1a0 = 0;
      uStack_180 = 0;
      local_178 = *(undefined8 *)(lVar28 + 0x30);
      uStack_170 = *(undefined8 *)(lVar28 + 0x38);
      local_168 = *(undefined8 *)(lVar28 + 0x40);
      uStack_160 = 0x3ff0000000000000;
      dVar9 = *param_2;
      dVar10 = param_2[1];
      dVar12 = param_2[2];
      dVar49 = dVar10 + dVar10;
      dVar50 = dVar12 + dVar12;
      dVar38 = dVar9 * (dVar9 + dVar9);
      local_208 = (1.0 - (dVar38 + dVar10 * dVar49)) * dVar5;
      dVar37 = param_2[3];
      dVar53 = dVar50 * dVar37;
      dVar45 = (dVar9 + dVar9) * param_2[3];
      dVar37 = dVar49 * dVar37;
      local_218 = (dVar37 + *param_2 * dVar50) * dVar5;
      dStack_210 = (dVar50 * dVar10 - dVar45) * dVar5;
      local_258 = (dVar39 - (dVar12 * dVar50 + dVar10 * dVar49)) * dVar4;
      dVar39 = (dVar46 - (dVar12 * dVar50 + dVar38)) * dVar7;
      dStack_250 = (dVar49 * dVar9 + dVar53) * dVar4;
      local_228 = (dVar50 * dVar10 + dVar45) * dVar7;
      local_248 = (*param_2 * dVar50 - dVar37) * dVar4;
      uStack_240 = 0;
      local_238._8_4_ = SUB84(dVar39,0);
      local_238._0_8_ = (dVar49 * dVar9 - dVar53) * dVar7;
      local_238._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
      uStack_220 = 0;
      uStack_200 = 0;
      local_1f8 = param_2[4];
      dStack_1f0 = param_2[5];
      local_1e8 = param_2[6];
      uStack_1e0 = 0x3ff0000000000000;
      FUN_1447fea8d(local_158);
      FUN_144a1c686(local_158,0x3e45798ee0000000);
      auVar33._8_8_ = -(ulonglong)(0.0 <= dVar8 * dVar7);
      auVar33._0_8_ = -(ulonglong)(0.0 <= dVar2 * dVar4);
      auVar42 = blendvpd(_DAT_149936790,auVar55,auVar33);
      uVar32 = -(ulonglong)(0.0 <= dVar3 * dVar5);
      dVar39 = (double)(~uVar32 & 0xbff0000000000000 | uVar32 & 0x3ff0000000000000);
      dVar46 = auVar42._0_8_;
      local_158[2] = local_158[2] * dVar46;
      local_158[1] = local_158[1] * dVar46;
      local_158[0] = local_158[0] * dVar46;
      dVar46 = auVar42._8_8_;
      local_128 = local_128 * dVar46;
      local_130 = local_130 * dVar46;
      local_138 = dVar46 * local_138;
      local_108 = local_108 * dVar39;
      local_110 = local_110 * dVar39;
      local_118 = dVar39 * local_118;
      FUN_14481fd10(&local_278,local_158);
      dVar39 = local_268 * local_268 + local_278 * local_278;
      dVar46 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
      auVar41._0_8_ = dVar39 + dVar46;
      auVar41._8_8_ = dVar39 + dVar46;
      auVar34._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_);
      auVar34._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_);
      auVar42 = sqrtpd(auVar41,auVar41);
      auVar55 = divpd(auVar55,auVar42);
      auVar56._0_8_ = auVar55._0_8_ * local_268;
      auVar56._8_8_ = auVar55._8_8_ * dStack_260;
      local_2d8 = (double)((ulonglong)(local_278 * auVar55._0_8_) &
                          -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_));
      dStack_2d0 = (double)((ulonglong)(dStack_270 * auVar55._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_));
      local_2c8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar56,auVar34);
      local_2b8._8_8_ = dStack_f0;
      local_2b8._0_8_ = local_f8;
      local_2a8 = local_e8;
      dStack_2a0 = 0.0;
      lVar28 = *param_4;
    }
    dVar39 = auVar43._8_8_ * auVar1._8_8_;
    pdVar30 = &local_2d8;
    local_298._8_4_ = SUB84(dVar8 * dVar7,0);
    local_298._0_8_ = dVar2 * dVar4;
    local_298._12_4_ = (int)((ulonglong)(dVar8 * dVar7) >> 0x20);
    local_288._8_4_ = SUB84(dVar39,0);
    local_288._0_8_ = dVar3 * dVar5;
    local_288._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
    FUN_1447d58ca(pdVar30,lVar28 + 0xd0);
    goto LAB_1474e3008;
  case 2:
    lVar28 = *param_4;
    auVar42 = *(undefined1 (*) [16])(lVar28 + 0x50);
    dVar2 = auVar42._0_8_;
    dVar8 = auVar42._8_8_;
    auVar43 = *(undefined1 (*) [16])(lVar28 + 0x60);
    dVar3 = auVar43._0_8_;
    dVar7 = auVar43._8_8_;
    auVar48 = *(undefined1 (*) [16])(param_2 + 8);
    dVar4 = auVar48._0_8_;
    dVar37 = auVar48._8_8_;
    auVar1 = *(undefined1 (*) [16])(param_2 + 10);
    dVar5 = auVar1._0_8_;
    auVar42 = minpd(auVar48,auVar42);
    auVar48 = minpd(auVar1,auVar43);
    auVar43._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
    auVar43._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
    iVar26 = movmskpd((&switchD_1474e2b6f::switchdataD_14a442a0c)[(param_3 & 0xff) - 1] + 0x4a442a0c
                      ,auVar43);
    auVar42._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
    auVar42._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
    uVar27 = movmskpd(0x4a442a0c,auVar42);
    if ((uVar27 & 0x3fffffff) == 0 && iVar26 == 0) {
      dVar17 = *param_2;
      dVar18 = param_2[1];
      dVar19 = param_2[2];
      dVar20 = param_2[3];
      dVar21 = *(double *)(lVar28 + 0x10);
      dVar22 = *(double *)(lVar28 + 0x18);
      dVar23 = *(double *)(lVar28 + 0x20);
      dVar24 = *(double *)(lVar28 + 0x28);
      dVar39 = *(double *)(lVar28 + 0x28);
      dVar46 = *(double *)(lVar28 + 0x28);
      dVar38 = *(double *)(lVar28 + 0x10);
      dVar9 = *(double *)(lVar28 + 0x10);
      dVar12 = *(double *)(lVar28 + 0x18);
      dVar10 = *(double *)(lVar28 + 0x18);
      dVar50 = *(double *)(lVar28 + 0x20);
      dVar49 = *(double *)(lVar28 + 0x20);
      dVar11 = param_2[4] * dVar2;
      dVar45 = param_2[5] * dVar8;
      dVar13 = param_2[6] * dVar3;
      dVar14 = param_2[7] * dVar7;
      dVar52 = dVar45 * dVar21 - dVar22 * dVar11;
      dVar54 = dVar13 * dVar22 - dVar23 * dVar45;
      dVar15 = dVar11 * dVar23 - dVar21 * dVar13;
      dVar16 = dVar14 * dVar24 - dVar24 * dVar14;
      dVar54 = dVar54 + dVar54;
      dVar15 = dVar15 + dVar15;
      dVar52 = dVar52 + dVar52;
      dVar16 = dVar16 + dVar16;
      dVar53 = *(double *)(lVar28 + 0x30);
      dVar6 = (dVar54 * dVar23 - dVar52 * dVar21) + dVar46 * dVar15 + dVar45 +
              *(double *)(lVar28 + 0x38);
      dVar45 = *(double *)(lVar28 + 0x40);
      dVar51 = *(double *)(lVar28 + 0x48);
      *param_2 = dVar18 * dVar50 * -1.0 + dVar19 * dVar12 + dVar20 * dVar38 * 1.0 + dVar17 * dVar39;
      param_2[1] = dVar17 * dVar49 * 1.0 + dVar20 * dVar10 + dVar19 * dVar9 * -1.0 + dVar18 * dVar46
      ;
      param_2[2] = dVar20 * dVar50 * 1.0 +
                   ((dVar38 * dVar18 * 1.0 + dVar19 * dVar39) - dVar17 * dVar12);
      param_2[3] = dVar19 * dVar49 * -1.0 +
                   ((dVar9 * dVar17 * -1.0 + dVar20 * dVar46) - dVar18 * dVar10);
      auVar55._8_4_ = SUB84(dVar6,0);
      auVar55._0_8_ = (dVar52 * dVar22 - dVar23 * dVar15) + dVar39 * dVar54 + dVar11 + dVar53;
      auVar55._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      *(undefined1 (*) [16])(param_2 + 4) = auVar55;
      param_2[6] = (dVar15 * dVar21 - dVar22 * dVar54) + dVar39 * dVar52 + dVar13 + dVar45;
      param_2[7] = (dVar16 * dVar24 - dVar16 * dVar24) + dVar46 * dVar16 + dVar14 + dVar51;
      param_2[8] = dVar4 * dVar2;
      param_2[9] = dVar37 * dVar8;
      param_2[10] = dVar5 * dVar3;
      param_2[0xb] = auVar1._8_8_ * dVar7;
    }
    else {
      dVar49 = *(double *)(lVar28 + 0x10);
      dVar50 = *(double *)(lVar28 + 0x18);
      dVar53 = *(double *)(lVar28 + 0x20);
      dVar45 = dVar50 + dVar50;
      dVar51 = dVar53 + dVar53;
      dVar9 = dVar49 * (dVar49 + dVar49);
      local_188 = (1.0 - (dVar9 + dVar50 * dVar45)) * dVar3;
      dVar12 = *(double *)(lVar28 + 0x10) * dVar51;
      dVar38 = *(double *)(lVar28 + 0x28);
      dVar52 = dVar51 * dVar38;
      dVar54 = (dVar49 + dVar49) * *(double *)(lVar28 + 0x28);
      dVar38 = dVar45 * dVar38;
      local_198 = (dVar38 + dVar12) * dVar3;
      dVar7 = dVar7 * auVar1._8_8_;
      dVar9 = (dVar46 - (dVar53 * dVar51 + dVar9)) * dVar8;
      dVar10 = (dVar45 * dVar49 + dVar52) * dVar2;
      local_1a8 = (dVar51 * dVar50 + dVar54) * dVar8;
      dStack_190 = (dVar51 * dVar50 - dVar54) * dVar3;
      local_1c8 = (dVar12 - dVar38) * dVar2;
      local_1d8._8_4_ = SUB84(dVar10,0);
      local_1d8._0_8_ = (dVar39 - (dVar53 * dVar51 + dVar50 * dVar45)) * dVar2;
      local_1d8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      uStack_1c0 = 0;
      local_1b8._8_4_ = SUB84(dVar9,0);
      local_1b8._0_8_ = (dVar45 * dVar49 - dVar52) * dVar8;
      local_1b8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      uStack_1a0 = 0;
      uStack_180 = 0;
      local_178 = *(undefined8 *)(lVar28 + 0x30);
      uStack_170 = *(undefined8 *)(lVar28 + 0x38);
      local_168 = *(undefined8 *)(lVar28 + 0x40);
      uStack_160 = 0x3ff0000000000000;
      dVar10 = *param_2;
      dVar12 = param_2[1];
      dVar49 = param_2[2];
      dVar50 = dVar12 + dVar12;
      dVar53 = dVar49 + dVar49;
      dVar9 = dVar10 * (dVar10 + dVar10);
      local_208 = (1.0 - (dVar9 + dVar12 * dVar50)) * dVar5;
      dVar38 = param_2[3];
      dVar45 = dVar53 * dVar38;
      dVar51 = (dVar10 + dVar10) * param_2[3];
      dVar38 = dVar50 * dVar38;
      local_218 = (dVar38 + *param_2 * dVar53) * dVar5;
      dStack_210 = (dVar53 * dVar12 - dVar51) * dVar5;
      dVar8 = dVar8 * dVar37;
      local_258 = (dVar39 - (dVar49 * dVar53 + dVar12 * dVar50)) * dVar4;
      dVar39 = (dVar46 - (dVar49 * dVar53 + dVar9)) * dVar37;
      dStack_250 = (dVar50 * dVar10 + dVar45) * dVar4;
      local_228 = (dVar53 * dVar12 + dVar51) * dVar37;
      local_248 = (*param_2 * dVar53 - dVar38) * dVar4;
      uStack_240 = 0;
      local_238._8_4_ = SUB84(dVar39,0);
      local_238._0_8_ = (dVar50 * dVar10 - dVar45) * dVar37;
      local_238._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
      uStack_220 = 0;
      uStack_200 = 0;
      local_1f8 = param_2[4];
      dStack_1f0 = param_2[5];
      local_1e8 = param_2[6];
      uStack_1e0 = 0x3ff0000000000000;
      FUN_1447fea8d(local_158);
      FUN_144a1c686(local_158,0x3e45798ee0000000);
      auVar35._8_8_ = -(ulonglong)(0.0 <= dVar8);
      auVar35._0_8_ = -(ulonglong)(0.0 <= dVar2 * dVar4);
      auVar42 = blendvpd(_DAT_149936790,auVar55,auVar35);
      uVar32 = -(ulonglong)(0.0 <= dVar3 * dVar5);
      dVar39 = (double)(~uVar32 & 0xbff0000000000000 | uVar32 & 0x3ff0000000000000);
      dVar46 = auVar42._0_8_;
      local_158[2] = local_158[2] * dVar46;
      local_158[1] = local_158[1] * dVar46;
      local_158[0] = local_158[0] * dVar46;
      dVar46 = auVar42._8_8_;
      local_128 = local_128 * dVar46;
      local_130 = local_130 * dVar46;
      local_138 = dVar46 * local_138;
      local_108 = local_108 * dVar39;
      local_110 = local_110 * dVar39;
      local_118 = dVar39 * local_118;
      FUN_14481fd10(&local_2d8,local_158);
      dVar39 = (double)local_2c8._0_8_ * (double)local_2c8._0_8_ + local_2d8 * local_2d8;
      dVar46 = (double)local_2c8._8_8_ * (double)local_2c8._8_8_ + dStack_2d0 * dStack_2d0;
      auVar44._0_8_ = dVar39 + dVar46;
      auVar44._8_8_ = dVar39 + dVar46;
      auVar36._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_);
      auVar36._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_);
      auVar42 = sqrtpd(auVar44,auVar44);
      auVar42 = divpd(auVar55,auVar42);
      auVar57._0_8_ = auVar42._0_8_ * (double)local_2c8._0_8_;
      auVar57._8_8_ = auVar42._8_8_ * (double)local_2c8._8_8_;
      auVar55 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar57,auVar36);
      auVar1._8_4_ = SUB84(dVar8,0);
      auVar1._0_8_ = dVar2 * dVar4;
      auVar1._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      *(undefined1 (*) [16])(param_2 + 8) = auVar1;
      auVar48._8_4_ = SUB84(dVar7,0);
      auVar48._0_8_ = dVar3 * dVar5;
      auVar48._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *(undefined1 (*) [16])(param_2 + 10) = auVar48;
      *param_2 = (double)((ulonglong)(local_2d8 * auVar42._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_));
      param_2[1] = (double)((ulonglong)(dStack_2d0 * auVar42._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_));
      *(undefined1 (*) [16])(param_2 + 2) = auVar55;
      param_2[4] = local_f8;
      param_2[5] = dStack_f0;
      param_2[6] = local_e8;
      param_2[7] = 0.0;
    }
    goto switchD_1474e2b6f_default;
  case 3:
    if (*(char *)param_4[7] == '\0') {
      FUN_1447d5d8e(param_4 + 4,0);
    }
    pdVar30 = (double *)param_4[4];
    break;
  case 4:
    uVar27 = *(uint *)(param_1 + 0x1a8);
    if ((~uVar27 & 0x7fffffff) == 0) goto switchD_1474e2b6f_default;
    lVar28 = param_4[6];
    lVar29 = lVar28 + 0x10;
    if (*(longlong *)(lVar28 + 0x20) != 0) {
      lVar29 = *(longlong *)(lVar28 + 0x20);
    }
    if ((*(uint *)(lVar29 + (ulonglong)(uVar27 >> 3 & 0x1ffc)) >> (uVar27 & 0x1f) & 1) == 0)
    goto switchD_1474e2b6f_default;
    if ((int)uVar27 < 0) {
      uVar27 = (int)(uVar27 * 2) >> 1;
      iVar26 = -1;
      if ((-1 < (int)uVar27) && ((int)uVar27 < *(int *)(lVar28 + 0x88))) {
        piVar25 = (int *)((ulonglong)uVar27 * 4 + *(longlong *)(lVar28 + 0x80));
        goto LAB_1474e30e7;
      }
    }
    else {
      piVar25 = (int *)(param_1 + 0x1ac);
LAB_1474e30e7:
      iVar26 = *piVar25;
    }
    if (*(char *)(param_4[7] + (longlong)iVar26) == '\0') {
      FUN_1447d5d8e(param_4 + 4);
    }
    pdVar30 = (double *)((longlong)iVar26 * 0x60 + param_4[4]);
    break;
  default:
    goto switchD_1474e2b6f_default;
  }
  pdVar31 = local_158;
  for (lVar28 = 0xc; lVar28 != 0; lVar28 = lVar28 + -1) {
    *pdVar31 = *pdVar30;
    pdVar30 = pdVar30 + 1;
    pdVar31 = pdVar31 + 1;
  }
  pdVar30 = (double *)local_1d8;
  FUN_1449437a2(param_2,pdVar30);
LAB_1474e3008:
  pdVar31 = param_2;
  for (lVar28 = 0xc; lVar28 != 0; lVar28 = lVar28 + -1) {
    *pdVar31 = *pdVar30;
    pdVar30 = pdVar30 + 1;
    pdVar31 = pdVar31 + 1;
  }
switchD_1474e2b6f_default:
  if ((local_d0 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1474e3914 FUN_1474e3914 body=143 status=ok
// SIG undefined FUN_1474e3914(void)

byte FUN_1474e3914(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  
  lVar2 = DAT_14caab028;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0xc60) == 0x40000002) {
    uVar5 = 0;
  }
  else {
    bVar4 = FUN_144a61b4f();
    uVar5 = (ulonglong)(bVar4 ^ 1);
  }
  lVar3 = DAT_14caab070;
  if (*(int *)(lVar2 + uVar5 * 4) == 1) {
    if (*(int *)(lVar1 + 0xc60) == 0x40000002) {
      uVar5 = 0;
    }
    else {
      bVar4 = FUN_144a61b4f();
      uVar5 = (ulonglong)(bVar4 ^ 1);
    }
    if (*(int *)(lVar3 + uVar5 * 4) == 1) {
      if (-1 < *(char *)(param_1 + 0x2a3)) {
        return *(byte *)(param_1 + 0x2a4) & 1;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1474e39a4 FUN_1474e39a4 body=162 status=ok
// SIG undefined FUN_1474e39a4(void)

int FUN_1474e39a4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  lVar2 = DAT_14caab010;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0xc60) == 0x40000002) {
    uVar7 = 0;
  }
  else {
    bVar4 = FUN_144a61b4f();
    uVar7 = (ulonglong)(bVar4 ^ 1);
  }
  lVar3 = DAT_14caab010;
  iVar5 = *(int *)(param_1 + 0x28);
  iVar6 = iVar5;
  if (*(int *)(lVar2 + uVar7 * 4) != -1) {
    iVar6 = *(int *)(lVar1 + 0xc60);
    if (iVar5 == -1) {
      if (iVar6 == 0x40000002) {
        uVar7 = 0;
      }
      else {
        bVar4 = FUN_144a61b4f();
        uVar7 = (ulonglong)(bVar4 ^ 1);
      }
      iVar6 = *(int *)(lVar3 + uVar7 * 4);
    }
    else {
      if (iVar6 == 0x40000002) {
        uVar7 = 0;
      }
      else {
        bVar4 = FUN_144a61b4f();
        uVar7 = (ulonglong)(bVar4 ^ 1);
        iVar5 = *(int *)(param_1 + 0x28);
      }
      iVar6 = *(int *)(lVar3 + uVar7 * 4);
      if (iVar5 < iVar6) {
        iVar6 = iVar5;
      }
    }
  }
  return iVar6;
}



// FUNCTION 1474e3a46 FUN_1474e3a46 body=291 status=ok
// SIG undefined FUN_1474e3a46(void)

void FUN_1474e3a46(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  int local_48;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1474e3b6a(param_2,&local_40);
  thunk_FUN_14047a987(&local_40,&DAT_149eb775e,1);
  FUN_1474dc4fe(param_1,&local_40);
  FUN_140002266(&local_50,&DAT_149e06144);
  iVar1 = local_48 + -1;
  if (local_48 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_40,local_50,iVar1);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  _Src = local_40;
  local_60 = (void *)0x0;
  local_58 = local_38;
  if ((longlong)local_38 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,local_38,0);
    memcpy(local_60,_Src,(longlong)local_38 * 2);
  }
  FUN_147906d4c(param_2,&local_60,0);
  FUN_147906d38(param_1 + 0x18,param_2);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474e3b6a FUN_1474e3b6a body=256 status=ok
// SIG undefined FUN_1474e3b6a(void)

undefined8 FUN_1474e3b6a(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14caab0c8 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caab0c8 = FUN_140002ddd(FUN_146333049,uVar2,L"AnimNode_ApplyLimits");
  }
  local_48 = *(undefined8 *)(DAT_14caab0c8 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1474e3c6c FUN_1474e3c6c body=1165 status=ok
// SIG undefined FUN_1474e3c6c(void)

void FUN_1474e3c6c(longlong param_1,undefined8 *param_2)

{
  void **ppvVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  int *piVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  float fVar17;
  undefined1 auStack_2d8 [32];
  undefined8 *local_2b8;
  void **local_2b0;
  undefined8 *local_2a8;
  ulonglong local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_278 [24];
  void *local_260;
  int local_258;
  undefined1 local_250;
  undefined8 local_248;
  undefined1 local_240 [72];
  longlong *local_1f8;
  undefined1 *puStack_1f0;
  undefined1 *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined1 *local_1d0;
  void **local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  undefined1 local_1a0 [32];
  undefined1 local_180 [24];
  undefined1 local_168 [16];
  undefined1 local_158;
  undefined8 local_150;
  undefined1 local_148 [72];
  undefined1 local_100 [32];
  longlong local_e0 [2];
  longlong *local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [72];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  FUN_144ade5d8(local_100,*param_2,0);
  FUN_144ade5d8(local_1a0,*param_2,0);
  puVar7 = param_2 + 4;
  FUN_1474e40fa(puVar7,local_e0);
  local_2b8 = puVar7;
  FUN_1474e40fa(puVar7,local_180);
  ppvVar1 = (void **)(param_2 + 0xd);
  FUN_144717214(local_c8,ppvVar1);
  local_b8 = *(undefined1 *)(param_2 + 0xf);
  local_b0 = param_2[0x10];
  local_2b0 = ppvVar1;
  FUN_144717214(local_168,ppvVar1);
  local_158 = *(undefined1 *)(param_2 + 0xf);
  local_150 = param_2[0x10];
  local_2a8 = param_2;
  FUN_140341952(local_a8,param_2 + 0x11);
  FUN_140341952(local_148,param_2 + 0x11);
  lVar16 = (longlong)*(int *)(param_1 + 0xe0);
  if (0 < lVar16) {
    lVar14 = 0;
    uVar8 = 0;
LAB_1474e3d94:
    lVar11 = lVar14 * 0x18 + 0x10;
    uVar15 = lVar14 << 6 | 0x3c;
    local_2a0 = uVar8;
    do {
      lVar14 = lVar14 + 1;
      lVar2 = *(longlong *)(param_1 + 0xd8);
      uVar10 = *(uint *)(lVar2 + -4 + uVar15);
      if ((int)uVar10 < 0) {
        iVar5 = -1;
        if ((((~uVar10 & 0x7fffffff) != 0) && (uVar10 = (int)(uVar10 * 2) >> 1, -1 < (int)uVar10))
           && ((int)uVar10 < (int)local_d0[0x11])) {
          piVar9 = (int *)((ulonglong)uVar10 * 4 + local_d0[0x10]);
          goto LAB_1474e3dcf;
        }
      }
      else {
        piVar9 = (int *)(lVar2 + uVar15);
LAB_1474e3dcf:
        iVar5 = *piVar9;
      }
      lVar12 = (longlong)iVar5 * 0x60;
      if (local_d0[0x1d] == 0) {
        plVar6 = (longlong *)
                 ((ulonglong)((uint)*(ushort *)(*local_d0 + (longlong)iVar5 * 2) * 0x60) +
                 *(longlong *)(local_d0[9] + 0x30));
      }
      else {
        plVar6 = (longlong *)(*(longlong *)(local_d0[0x1d] + 0x10) + lVar12);
      }
      puVar13 = (undefined8 *)(lVar12 + local_e0[0]);
      local_298 = *puVar13;
      uStack_290 = puVar13[1];
      local_288 = puVar13[2];
      uStack_280 = puVar13[3];
      lVar12 = *(longlong *)(param_1 + 0xe8);
      local_1a8 = (undefined1 *)(*(double *)(lVar2 + -0x14 + uVar15) + *(double *)(lVar12 + lVar11))
      ;
      local_1b0 = (undefined1 *)
                  (*(double *)(lVar2 + -0x1c + uVar15) + *(double *)(lVar12 + -8 + lVar11));
      local_1b8 = (undefined1 *)
                  (*(double *)(lVar2 + -0x24 + uVar15) + *(double *)(lVar12 + -0x10 + lVar11));
      local_1c0 = (undefined1 *)(*(double *)(lVar2 + -0x2c + uVar15) + *(double *)(lVar12 + lVar11))
      ;
      local_1c8 = (void **)(*(double *)(lVar2 + -0x34 + uVar15) + *(double *)(lVar12 + -8 + lVar11))
      ;
      local_1d0 = (undefined1 *)
                  (*(double *)(lVar2 + -0x3c + uVar15) + *(double *)(lVar12 + -0x10 + lVar11));
      local_1f8 = (longlong *)*plVar6;
      puStack_1f0 = (undefined1 *)plVar6[1];
      local_1e8 = (undefined1 *)plVar6[2];
      uStack_1e0 = (undefined4)plVar6[3];
      uStack_1dc = *(undefined4 *)((longlong)plVar6 + 0x1c);
      puVar7 = &local_298;
      cVar4 = FUN_14690a79b(puVar7,&local_1f8,&local_1d0,&local_1b8);
      puVar3 = local_2a8;
      if (cVar4 != '\0') goto LAB_1474e3f04;
      lVar11 = lVar11 + 0x18;
      uVar15 = uVar15 + 0x40;
      if (lVar14 == lVar16) {
        if ((local_2a0 & 1) == 0) break;
        goto LAB_1474e3f35;
      }
    } while( true );
  }
LAB_1474e4061:
  FUN_1447166b4(local_148);
  FUN_1447166b4(local_a8);
  if ((local_60 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1474e3f04:
  *puVar13 = local_298;
  puVar13[1] = uStack_290;
  puVar13[2] = local_288;
  puVar13[3] = uStack_280;
  uVar8 = CONCAT71((int7)((ulonglong)puVar7 >> 8),1);
  if (lVar14 == lVar16) goto LAB_1474e3f35;
  goto LAB_1474e3d94;
LAB_1474e3f35:
  fVar17 = *(float *)(param_1 + 0x2c);
  if (1.0 <= fVar17) {
    fVar17 = 1.0;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  FUN_144ade5d8(&local_298,*local_2a8,0);
  local_1f8 = local_e0;
  puStack_1f0 = local_c8;
  local_1e8 = local_a8;
  local_1b8 = local_180;
  local_1b0 = local_168;
  local_1a8 = local_148;
  local_1d0 = local_278;
  local_1c8 = &local_260;
  local_1c0 = local_240;
  FUN_14078e408(&local_1f8,&local_1b8,fVar17);
  FUN_1417977a6(local_2b8,local_278);
  ppvVar1 = local_2b0;
  if (local_2b0 != &local_260) {
    *(int *)(puVar3 + 0xe) = local_258;
    if (local_258 == 0 && *(int *)((longlong)puVar3 + 0x74) == 0) {
      *(undefined4 *)((longlong)puVar3 + 0x74) = 0;
    }
    else {
      FUN_14471726c(local_2b0,local_258);
      if (local_258 != 0) {
        memcpy(*ppvVar1,local_260,(longlong)local_258 << 4);
      }
    }
  }
  *(undefined1 *)(puVar3 + 0xf) = local_250;
  puVar3[0x10] = local_248;
  FUN_1447166b4(local_240);
  goto LAB_1474e4061;
}



// FUNCTION 1474e40fa FUN_1474e40fa body=354 status=ok
// SIG undefined FUN_1474e40fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474e40fa(undefined8 *param_1,longlong *param_2)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  FUN_14470ea10(param_2,param_1);
  param_2[2] = param_1[2];
  if (*(char *)param_1[3] != '\0') {
    puVar11 = (undefined8 *)*param_1;
    puVar12 = (undefined8 *)*param_2;
    for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
  }
  auVar9 = _DAT_149935300;
  auVar8 = _DAT_149934d80;
  lVar10 = (longlong)*(int *)(param_1 + 1);
  if (1 < lVar10) {
    uVar13 = lVar10 + 1;
    lVar10 = lVar10 << 0x20;
    do {
      lVar10 = lVar10 + -0x100000000;
      if (*(char *)(param_1[3] + -2 + uVar13) != '\0') {
        lVar3 = (lVar10 >> 0x1b) * 3;
        FUN_1447d58ca(*param_2 + lVar3,
                      (longlong)*(int *)(*(longlong *)(param_1[2] + 0x90) + (lVar10 >> 0x1e)) * 0x60
                      + *param_2);
        lVar2 = *param_2;
        dVar4 = *(double *)(lVar2 + lVar3);
        dVar5 = ((double *)(lVar2 + lVar3))[1];
        pdVar1 = (double *)(lVar2 + 0x10 + lVar3);
        dVar6 = *pdVar1;
        dVar7 = pdVar1[1];
        dVar14 = dVar6 * dVar6 + dVar4 * dVar4;
        dVar17 = dVar7 * dVar7 + dVar5 * dVar5;
        auVar15._0_8_ = dVar14 + dVar17;
        auVar15._8_8_ = dVar14 + dVar17;
        auVar16 = sqrtpd(auVar15,auVar15);
        auVar18 = divpd(auVar8,auVar16);
        auVar19._0_8_ = auVar18._0_8_ * dVar6;
        auVar19._8_8_ = auVar18._8_8_ * dVar7;
        auVar16._8_8_ = -(ulonglong)(1e-08 <= auVar15._8_8_);
        auVar16._0_8_ = -(ulonglong)(1e-08 <= auVar15._0_8_);
        auVar16 = blendvpd(auVar9,auVar19,auVar16);
        *(ulonglong *)(lVar2 + lVar3) =
             (ulonglong)(dVar4 * auVar18._0_8_) & -(ulonglong)(1e-08 <= auVar15._0_8_);
        ((ulonglong *)(lVar2 + lVar3))[1] =
             (ulonglong)(dVar5 * auVar18._8_8_) & -(ulonglong)(1e-08 <= auVar15._8_8_);
        *(undefined1 (*) [16])(lVar2 + 0x10 + lVar3) = auVar16;
      }
      uVar13 = uVar13 - 1;
    } while (2 < uVar13);
  }
  return;
}



// FUNCTION 1474e42d6 FUN_1474e42d6 body=98 status=ok
// SIG undefined FUN_1474e42d6(void)

void FUN_1474e42d6(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = 0;
  if ((longlong)*(int *)(param_1 + 0xe0) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0xe0) << 6;
    lVar2 = *(longlong *)(param_1 + 0xd8) + 0x30;
    do {
      FUN_14019c9f2(lVar2,param_2);
      lVar2 = lVar2 + 0x40;
      lVar3 = lVar3 + -0x40;
    } while (lVar3 != 0);
    uVar1 = *(undefined4 *)(param_1 + 0xe0);
  }
  FUN_146ba0be8(param_1 + 0xe8,uVar1,1);
  return;
}



// FUNCTION 1474e4388 FUN_1474e4388 body=514 status=ok
// SIG undefined FUN_1474e4388(void)

void FUN_1474e4388(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  wchar_t *pwVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_a8 [32];
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  longlong local_58;
  int local_50;
  void *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1474e458c(param_2,&local_48);
  thunk_FUN_14047a987(&local_48,&DAT_149eb775e,1);
  FUN_1474dc4fe(param_1,&local_48);
  if (*(char *)(param_1 + 0x130) == '\0') {
    FUN_1400021e4(param_1 + 0x120,&local_68);
    puVar3 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar3 = local_68;
    }
    FUN_1400021e4(param_1 + 0xd8,&local_78);
    puVar4 = &DAT_149dfb77a;
    if (local_70 != 0) {
      puVar4 = local_78;
    }
    pwVar2 = L"  DrivingBone: %s\nDrivenBone: %s";
  }
  else {
    FUN_1400021e4(param_1 + 0x118,&local_68);
    puVar3 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar3 = local_68;
    }
    FUN_1400021e4(param_1 + 0xd8,&local_78);
    puVar4 = &DAT_149dfb77a;
    if (local_70 != 0) {
      puVar4 = local_78;
    }
    pwVar2 = L"  DrivingBone: %s\nDrivenParameter: %s";
  }
  FUN_140002266(&local_58,pwVar2,puVar4,puVar3);
  iVar1 = local_50 + -1;
  if (local_50 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_48,local_58,iVar1);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  _Src = local_48;
  local_88 = (void *)0x0;
  local_80 = local_40;
  if ((longlong)local_40 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_40,0);
    memcpy(local_88,_Src,(longlong)local_40 * 2);
  }
  FUN_147906d4c(param_2,&local_88,0);
  FUN_147906d38(param_1 + 0x18,param_2);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474e458c FUN_1474e458c body=256 status=ok
// SIG undefined FUN_1474e458c(void)

undefined8 FUN_1474e458c(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14caab110 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caab110 = FUN_140002ddd(FUN_14633313d,uVar2,L"AnimNode_BoneDrivenController");
  }
  local_48 = *(undefined8 *)(DAT_14caab110 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1474e468e FUN_1474e468e body=3554 status=ok
// SIG undefined FUN_1474e468e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474e468e(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  double dVar2;
  undefined1 auVar3 [16];
  char cVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  byte bVar18;
  uint uVar19;
  double *pdVar20;
  undefined4 *puVar21;
  int *piVar22;
  int iVar23;
  longlong lVar24;
  uint uVar25;
  longlong lVar26;
  int iVar27;
  ulonglong uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar40;
  undefined1 auVar39 [16];
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  double dVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar63;
  double dVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined1 auStack_3e8 [32];
  double local_3c8;
  undefined8 uStack_3c0;
  undefined1 local_3b8 [16];
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  undefined1 local_378 [12];
  undefined4 uStack_36c;
  undefined1 local_368 [12];
  undefined4 uStack_35c;
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  double local_328;
  undefined1 local_318 [16];
  double local_308;
  undefined1 local_2f8 [96];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
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
  double dStack_1e0;
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
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  if ((*(char *)(param_1 + 0x132) == '\0') || (*(char *)(param_1 + 0x130) != '\0'))
  goto LAB_1474e472e;
  plVar1 = (longlong *)(param_2 + 0x20);
  lVar26 = *(longlong *)(param_2 + 0x30);
  uVar25 = *(uint *)(param_1 + 0xe0);
  lVar24 = *(longlong *)(*(longlong *)(lVar26 + 0x48) + 0x30);
  if ((int)uVar25 < 0) {
    uVar52 = 0xffffffff;
    if ((((~uVar25 & 0x7fffffff) != 0) && (uVar19 = (int)(uVar25 * 2) >> 1, -1 < (int)uVar19)) &&
       ((int)uVar19 < *(int *)(lVar26 + 0x88))) {
      puVar21 = (undefined4 *)((ulonglong)uVar19 * 4 + *(longlong *)(lVar26 + 0x80));
      goto LAB_1474e47f3;
    }
  }
  else {
    puVar21 = (undefined4 *)(param_1 + 0xe4);
LAB_1474e47f3:
    uVar52 = *puVar21;
  }
  FUN_144ade54e(plVar1,local_2f8,uVar52);
  dVar29 = (double)FUN_1474e5472(param_1,local_2f8,
                                 ((longlong)((ulonglong)uVar25 << 0x21) >> 0x21) * 0x60 + lVar24);
  uVar25 = *(uint *)(param_1 + 0x128);
  if ((int)uVar25 < 0) {
    iVar27 = -1;
    if ((((~uVar25 & 0x7fffffff) != 0) && (uVar25 = (int)(uVar25 * 2) >> 1, -1 < (int)uVar25)) &&
       ((int)uVar25 < *(int *)(lVar26 + 0x88))) {
      piVar22 = (int *)((ulonglong)uVar25 * 4 + *(longlong *)(lVar26 + 0x80));
      goto LAB_1474e4831;
    }
  }
  else {
    piVar22 = (int *)(param_1 + 300);
LAB_1474e4831:
    iVar27 = *piVar22;
  }
  FUN_144ade54e(plVar1,local_358,iVar27);
  dVar40 = local_358._0_8_;
  dVar9 = local_358._8_8_;
  dVar63 = local_348._0_8_;
  dVar64 = local_348._8_8_;
  dVar35 = local_338._0_8_;
  dVar30 = local_338._8_8_;
  dVar32 = local_318._0_8_;
  dVar31 = local_318._8_8_;
  _local_378 = local_358;
  _local_368 = local_348;
  cVar4 = *(char *)(param_1 + 0x131);
  lVar26 = (longlong)iVar27;
  dVar50 = local_308;
  dVar60 = local_328;
  if (cVar4 == '\x02') {
    plVar5 = *(longlong **)(param_2 + 0x30);
    if (plVar5[0x1d] == 0) {
      pdVar20 = (double *)
                ((ulonglong)((uint)*(ushort *)(*plVar5 + lVar26 * 2) * 0x60) +
                *(longlong *)(plVar5[9] + 0x30));
    }
    else {
      pdVar20 = (double *)(lVar26 * 0x60 + *(longlong *)(plVar5[0x1d] + 0x10));
    }
    bVar18 = *(byte *)(param_1 + 0x133);
    if ((bVar18 & 2) != 0) {
      dVar35 = pdVar20[4] + dVar29;
    }
    if ((bVar18 & 4) != 0) {
      dVar30 = pdVar20[5] + dVar29;
    }
    if ((bVar18 & 8) != 0) {
      dVar60 = pdVar20[6] + dVar29;
    }
    dVar6 = pdVar20[8];
    dVar7 = pdVar20[9];
    dVar41 = pdVar20[10];
    if ((bVar18 & 0x70) != 0) {
      local_178 = *pdVar20;
      dStack_170 = pdVar20[1];
      local_168 = pdVar20[2];
      dStack_160 = pdVar20[3];
      FUN_1449413b4(&local_178,&local_278);
      FUN_1449413b4(local_378,&local_298);
      local_398 = 0.0;
      dStack_390 = 0.0;
      local_388 = 0.0;
      bVar18 = *(byte *)(param_1 + 0x133);
      if ((bVar18 & 0x10) != 0) {
        local_298 = local_278;
        local_398 = dVar29;
      }
      if ((bVar18 & 0x20) != 0) {
        dStack_290 = dStack_270;
        dStack_390 = dVar29;
      }
      if ((bVar18 & 0x40) != 0) {
        local_288 = local_268;
        local_388 = dVar29;
      }
      FUN_144afe3ce(&local_178,&local_298);
      FUN_144afe3ce(&local_1f8,&local_398);
      dVar40 = dStack_1f0 * local_168 * -1.0 +
               local_1e8 * dStack_170 + local_178 * dStack_1e0 * 1.0 + dStack_160 * local_1f8;
      dVar9 = local_1f8 * local_168 * 1.0 +
              dStack_1e0 * dStack_170 + local_178 * local_1e8 * -1.0 + dStack_160 * dStack_1f0;
      dVar63 = dStack_1e0 * local_168 * 1.0 +
               ((local_178 * dStack_1f0 * 1.0 + dStack_160 * local_1e8) - dStack_170 * local_1f8);
      dVar64 = local_1e8 * local_168 * -1.0 +
               ((local_178 * local_1f8 * -1.0 + dStack_160 * dStack_1e0) - dStack_170 * dStack_1f0);
      local_378._8_4_ = SUB84(dVar9,0);
      local_378._0_8_ = dVar40;
      uStack_36c = (int)((ulonglong)dVar9 >> 0x20);
      local_368._8_4_ = SUB84(dVar64,0);
      local_368._0_8_ = dVar63;
      uStack_35c = (int)((ulonglong)dVar64 >> 0x20);
      bVar18 = *(byte *)(param_1 + 0x133);
    }
    if ((char)bVar18 < '\0') {
      dVar32 = dVar29 + dVar6;
    }
    if ((*(byte *)(param_1 + 0x134) & 1) != 0) {
      dVar31 = dVar7 + dVar29;
    }
    if ((*(byte *)(param_1 + 0x134) & 2) != 0) {
      dVar50 = dVar29 + dVar41;
    }
  }
  else if (cVar4 == '\x01') {
    bVar18 = *(byte *)(param_1 + 0x133);
    uVar65 = SUB84(dVar29,0);
    uVar66 = (undefined4)((ulonglong)dVar29 >> 0x20);
    uVar52 = local_338._0_4_;
    uVar53 = local_338._4_4_;
    if ((bVar18 & 2) != 0) {
      uVar52 = uVar65;
      uVar53 = uVar66;
    }
    dVar35 = (double)CONCAT44(uVar53,uVar52);
    uVar52 = local_338._8_4_;
    uVar53 = local_338._12_4_;
    if ((bVar18 & 4) != 0) {
      uVar52 = uVar65;
      uVar53 = uVar66;
    }
    dVar30 = (double)CONCAT44(uVar53,uVar52);
    if ((bVar18 & 8) != 0) {
      dVar60 = dVar29;
    }
    uVar52 = local_358._0_4_;
    uVar53 = local_358._4_4_;
    uVar54 = local_358._8_4_;
    uVar55 = local_358._12_4_;
    uVar56 = local_348._0_4_;
    uVar57 = local_348._4_4_;
    uVar58 = local_348._8_4_;
    uVar59 = local_348._12_4_;
    if ((bVar18 & 0x70) != 0) {
      FUN_1449413b4(local_378,&local_1f8);
      bVar18 = *(byte *)(param_1 + 0x133);
      if ((bVar18 & 0x10) != 0) {
        local_1f8 = dVar29;
      }
      if ((bVar18 & 0x20) != 0) {
        dStack_1f0 = dVar29;
      }
      if ((bVar18 & 0x40) != 0) {
        local_1e8 = dVar29;
      }
      FUN_144afe3ce(&local_178,&local_1f8);
      stack0xfffffffffffffca0 = dStack_160;
      local_368._0_8_ = local_168;
      auVar37 = _local_368;
      stack0xfffffffffffffc90 = dStack_170;
      local_378._0_8_ = local_178;
      auVar62 = _local_378;
      bVar18 = *(byte *)(param_1 + 0x133);
      local_378._0_4_ = SUB84(local_178,0);
      local_378._4_4_ = (undefined4)((ulonglong)local_178 >> 0x20);
      local_378._8_4_ = SUB84(dStack_170,0);
      uStack_36c = (undefined4)((ulonglong)dStack_170 >> 0x20);
      local_368._0_4_ = SUB84(local_168,0);
      local_368._4_4_ = (undefined4)((ulonglong)local_168 >> 0x20);
      local_368._8_4_ = SUB84(dStack_160,0);
      uStack_35c = (undefined4)((ulonglong)dStack_160 >> 0x20);
      uVar52 = local_378._0_4_;
      uVar53 = local_378._4_4_;
      uVar54 = local_378._8_4_;
      uVar55 = uStack_36c;
      uVar56 = local_368._0_4_;
      uVar57 = local_368._4_4_;
      uVar58 = local_368._8_4_;
      uVar59 = uStack_35c;
      _local_378 = auVar62;
      _local_368 = auVar37;
    }
    dVar64 = (double)CONCAT44(uVar59,uVar58);
    dVar63 = (double)CONCAT44(uVar57,uVar56);
    dVar9 = (double)CONCAT44(uVar55,uVar54);
    dVar40 = (double)CONCAT44(uVar53,uVar52);
    uVar52 = local_318._0_4_;
    uVar53 = local_318._4_4_;
    if ((char)bVar18 < '\0') {
      uVar52 = uVar65;
      uVar53 = uVar66;
    }
    dVar32 = (double)CONCAT44(uVar53,uVar52);
    uVar52 = local_318._8_4_;
    uVar53 = local_318._12_4_;
    if ((*(byte *)(param_1 + 0x134) & 1) != 0) {
      uVar52 = uVar65;
      uVar53 = uVar66;
    }
    dVar31 = (double)CONCAT44(uVar53,uVar52);
    dVar50 = dVar29;
    if ((*(byte *)(param_1 + 0x134) & 2) == 0) {
      dVar50 = local_308;
    }
  }
  else if (cVar4 == '\0') {
    bVar18 = *(byte *)(param_1 + 0x133);
    if ((bVar18 & 2) != 0) {
      dVar35 = dVar35 + dVar29;
    }
    if ((bVar18 & 4) != 0) {
      dVar30 = dVar30 + dVar29;
    }
    if ((bVar18 & 8) != 0) {
      dVar60 = local_328 + dVar29;
    }
    if ((bVar18 & 0x70) != 0) {
      local_1f8 = 0.0;
      dStack_1f0 = 0.0;
      local_1e8 = 0.0;
      if ((bVar18 & 0x10) != 0) {
        local_1f8 = dVar29;
      }
      if ((bVar18 & 0x20) != 0) {
        dStack_1f0 = dVar29;
      }
      if ((bVar18 & 0x40) != 0) {
        local_1e8 = dVar29;
      }
      FUN_144afe3ce(&local_178,&local_1f8);
      dVar40 = dStack_170 * (double)local_368._0_8_ * -1.0 +
               local_168 * stack0xfffffffffffffc90 +
               (double)local_378._0_8_ * dStack_160 * 1.0 + stack0xfffffffffffffca0 * local_178;
      dVar9 = local_178 * (double)local_368._0_8_ * 1.0 +
              dStack_160 * stack0xfffffffffffffc90 +
              (double)local_378._0_8_ * local_168 * -1.0 + stack0xfffffffffffffca0 * dStack_170;
      dVar63 = dStack_160 * (double)local_368._0_8_ * 1.0 +
               (((double)local_378._0_8_ * dStack_170 * 1.0 + stack0xfffffffffffffca0 * local_168) -
               stack0xfffffffffffffc90 * local_178);
      dVar64 = local_168 * (double)local_368._0_8_ * -1.0 +
               (((double)local_378._0_8_ * local_178 * -1.0 + stack0xfffffffffffffca0 * dStack_160)
               - stack0xfffffffffffffc90 * dStack_170);
      local_378._8_4_ = SUB84(dVar9,0);
      local_378._0_8_ = dVar40;
      uStack_36c = (int)((ulonglong)dVar9 >> 0x20);
      local_368._8_4_ = SUB84(dVar64,0);
      local_368._0_8_ = dVar63;
      uStack_35c = (int)((ulonglong)dVar64 >> 0x20);
      bVar18 = *(byte *)(param_1 + 0x133);
    }
    if ((char)bVar18 < '\0') {
      dVar32 = dVar32 + dVar29;
    }
    if ((*(byte *)(param_1 + 0x134) & 1) != 0) {
      dVar31 = dVar31 + dVar29;
    }
    if ((*(byte *)(param_1 + 0x134) & 2) != 0) {
      dVar50 = local_308 + dVar29;
    }
  }
  uVar52 = (undefined4)((ulonglong)dVar30 >> 0x20);
  auVar62._8_8_ = 0;
  auVar62._0_8_ = dVar50;
  iVar23 = *(int *)(*(longlong *)(*(longlong *)(param_2 + 0x30) + 0x90) + lVar26 * 4);
  lVar26 = (longlong)iVar23;
  if (lVar26 == -1) {
    iVar23 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar23 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar23 + 1U) {
      FUN_1400c28ea(param_3,iVar23);
    }
    lVar26 = *param_3;
    lVar24 = (longlong)iVar23 * 0x70;
    *(int *)(lVar26 + lVar24) = iVar27;
    auVar37._8_4_ = SUB84(dVar9,0);
    auVar37._0_8_ = dVar40;
    auVar37._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    *(undefined1 (*) [16])(lVar26 + 0x10 + lVar24) = auVar37;
    auVar3._8_4_ = SUB84(dVar64,0);
    auVar3._0_8_ = dVar63;
    auVar3._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
    *(undefined1 (*) [16])(lVar26 + 0x20 + lVar24) = auVar3;
    auVar13._8_4_ = SUB84(dVar30,0);
    auVar13._0_8_ = dVar35;
    auVar13._12_4_ = uVar52;
    *(undefined1 (*) [16])(lVar26 + 0x30 + lVar24) = auVar13;
    pdVar20 = (double *)(lVar26 + 0x40 + lVar24);
    *pdVar20 = dVar60;
    pdVar20[1] = 0.0;
    auVar14._8_4_ = SUB84(dVar31,0);
    auVar14._0_8_ = dVar32;
    auVar14._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
    *(undefined1 (*) [16])(lVar26 + 0x50 + lVar24) = auVar14;
    *(undefined1 (*) [16])(lVar26 + 0x60 + lVar24) = auVar62;
  }
  else {
    if (*(char *)(*(longlong *)(param_2 + 0x38) + lVar26) == '\0') {
      FUN_1447d5d8e(plVar1,iVar23);
    }
    auVar13 = _DAT_149934d80;
    uStack_3c0 = 0;
    local_3b8._8_4_ = SUB84(dVar30,0);
    local_3b8._0_8_ = dVar35;
    local_3b8._12_4_ = uVar52;
    lVar24 = *plVar1;
    lVar26 = lVar26 * 0x60;
    pdVar20 = (double *)(lVar24 + lVar26);
    auVar37 = *(undefined1 (*) [16])(lVar24 + 0x40 + lVar26);
    dVar29 = auVar37._0_8_;
    dVar6 = auVar37._8_8_;
    auVar3 = *(undefined1 (*) [16])(lVar24 + 0x50 + lVar26);
    dVar30 = auVar3._0_8_;
    dVar7 = auVar3._8_8_;
    auVar36._8_8_ = dVar31;
    auVar36._0_8_ = dVar32;
    auVar37 = minpd(auVar36,auVar37);
    auVar62 = minpd(auVar62,auVar3);
    auVar38._8_8_ = -(ulonglong)(auVar37._8_8_ < 0.0);
    auVar38._0_8_ = -(ulonglong)(auVar37._0_8_ < 0.0);
    iVar23 = movmskpd((int)lVar24,auVar38);
    auVar43._8_8_ = -(ulonglong)(auVar62._8_8_ < 0.0);
    auVar43._0_8_ = -(ulonglong)(auVar62._0_8_ < 0.0);
    uVar25 = movmskpd((int)lVar26,auVar43);
    local_3c8 = dVar60;
    if ((uVar25 & 0x3fffffff) == 0 && iVar23 == 0) {
      dVar47 = *pdVar20;
      dVar15 = pdVar20[1];
      dVar41 = pdVar20[3];
      dVar42 = pdVar20[3];
      dVar49 = pdVar20[1];
      dVar48 = pdVar20[1];
      dVar16 = pdVar20[2];
      dVar17 = pdVar20[3];
      dVar44 = pdVar20[2];
      dVar2 = pdVar20[2];
      dVar45 = dVar9 * dVar44 * -1.0 + dVar63 * dVar49 + dVar64 * *pdVar20 * 1.0 + dVar40 * dVar41;
      dVar46 = dVar40 * dVar2 * 1.0 + dVar64 * dVar48 + dVar63 * *pdVar20 * -1.0 + dVar9 * dVar42;
      auVar51._0_8_ =
           dVar64 * dVar44 * 1.0 + ((*pdVar20 * dVar9 * 1.0 + dVar63 * dVar41) - dVar40 * dVar49);
      auVar51._8_8_ =
           dVar63 * dVar2 * -1.0 + ((*pdVar20 * dVar40 * -1.0 + dVar64 * dVar42) - dVar9 * dVar48);
      dVar35 = dVar35 * dVar29;
      dVar49 = (double)local_3b8._8_8_ * dVar6;
      dVar60 = dVar60 * dVar30;
      dVar48 = dVar7 * 0.0;
      dVar40 = dVar49 * dVar47 - dVar35 * dVar15;
      dVar9 = dVar60 * dVar15 - dVar49 * dVar16;
      dVar63 = dVar35 * dVar16 - dVar60 * dVar47;
      dVar64 = dVar48 * dVar17 - dVar48 * dVar17;
      dVar9 = dVar9 + dVar9;
      dVar63 = dVar63 + dVar63;
      dVar40 = dVar40 + dVar40;
      dVar64 = dVar64 + dVar64;
      local_118 = (dVar40 * dVar15 - dVar16 * dVar63) + dVar41 * dVar9 + dVar35 + pdVar20[4];
      dStack_110 = (dVar9 * dVar16 - dVar40 * dVar47) + dVar42 * dVar63 + dVar49 + pdVar20[5];
      local_108 = (dVar63 * dVar47 - dVar15 * dVar9) + dVar41 * dVar40 + dVar60 + pdVar20[6];
      dVar35 = (dVar64 * dVar17 - dVar64 * dVar17) + dVar42 * dVar64 + dVar48 + pdVar20[7];
    }
    else {
      dVar48 = *pdVar20;
      dVar49 = pdVar20[1];
      dVar2 = pdVar20[2];
      dVar44 = dVar49 + dVar49;
      dVar45 = dVar2 + dVar2;
      dVar42 = dVar48 * (dVar48 + dVar48);
      dVar41 = pdVar20[3];
      dVar46 = dVar45 * dVar41;
      dVar47 = (dVar48 + dVar48) * pdVar20[3];
      dVar41 = dVar44 * dVar41;
      dStack_3a0 = dVar7 * 0.0;
      local_1a8 = (1.0 - (dVar42 + dVar49 * dVar44)) * dVar30;
      local_1b8 = (dVar41 + *pdVar20 * dVar45) * dVar30;
      local_1d8 = (dVar44 * dVar48 - dVar46) * dVar6;
      dStack_1b0 = (dVar45 * dVar49 - dVar47) * dVar30;
      local_1f8 = ((double)DAT_149934d80 - (dVar2 * dVar45 + dVar49 * dVar44)) * dVar29;
      dStack_1d0 = (DAT_149934d80._8_8_ - (dVar2 * dVar45 + dVar42)) * dVar6;
      dStack_1f0 = (dVar44 * dVar48 + dVar46) * dVar29;
      local_1c8 = (dVar45 * dVar49 + dVar47) * dVar6;
      local_1e8 = (*pdVar20 * dVar45 - dVar41) * dVar29;
      dStack_1e0 = 0.0;
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      local_198 = pdVar20[4];
      dStack_190 = pdVar20[5];
      local_188 = pdVar20[6];
      uStack_180 = 0x3ff0000000000000;
      dVar41 = dVar9 + dVar9;
      dVar48 = dVar63 + dVar63;
      dVar42 = dVar40 * (dVar40 + dVar40);
      local_228 = (1.0 - (dVar42 + dVar9 * dVar41)) * dVar50;
      dVar49 = (dVar40 + dVar40) * dVar64;
      local_238 = (dVar41 * dVar64 + dVar40 * dVar48) * dVar50;
      local_258 = (dVar41 * dVar40 - dVar48 * dVar64) * dVar31;
      dStack_230 = (dVar48 * dVar9 - dVar49) * dVar50;
      local_278 = ((double)DAT_149934d80 - (dVar63 * dVar48 + dVar9 * dVar41)) * dVar32;
      dStack_250 = (DAT_149934d80._8_8_ - (dVar63 * dVar48 + dVar42)) * dVar31;
      dStack_270 = (dVar41 * dVar40 + dVar48 * dVar64) * dVar32;
      local_248 = (dVar48 * dVar9 + dVar49) * dVar31;
      local_268 = (dVar40 * dVar48 - dVar41 * dVar64) * dVar32;
      uStack_260 = 0;
      uStack_240 = 0;
      uStack_220 = 0;
      dStack_210 = (double)local_3b8._8_8_;
      uStack_200 = 0x3ff0000000000000;
      local_3a8 = dVar50 * dVar30;
      local_218 = dVar35;
      local_208 = dVar60;
      FUN_1447fea8d(&local_178);
      FUN_144a1c686(&local_178,0x3e45798ee0000000);
      auVar33._8_8_ = -(ulonglong)(0.0 <= dVar31 * dVar6);
      auVar33._0_8_ = -(ulonglong)(0.0 <= dVar32 * dVar29);
      auVar62 = blendvpd(_DAT_149936790,auVar13,auVar33);
      uVar28 = -(ulonglong)(0.0 <= dVar50 * dVar30);
      dVar35 = (double)(~uVar28 & 0xbff0000000000000 | uVar28 & 0x3ff0000000000000);
      dVar40 = auVar62._0_8_;
      local_168 = local_168 * dVar40;
      dStack_170 = dStack_170 * dVar40;
      local_178 = local_178 * dVar40;
      dVar40 = auVar62._8_8_;
      local_148 = local_148 * dVar40;
      local_150 = local_150 * dVar40;
      local_158 = dVar40 * local_158;
      local_128 = local_128 * dVar35;
      local_130 = local_130 * dVar35;
      local_138 = dVar35 * local_138;
      FUN_14481fd10(&local_298,&local_178);
      dVar35 = local_288 * local_288 + local_298 * local_298;
      dVar40 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
      auVar39._0_8_ = dVar35 + dVar40;
      auVar39._8_8_ = dVar35 + dVar40;
      auVar34._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
      auVar34._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
      auVar62 = sqrtpd(auVar39,auVar39);
      auVar62 = divpd(auVar13,auVar62);
      auVar61._0_8_ = auVar62._0_8_ * local_288;
      auVar61._8_8_ = auVar62._8_8_ * dStack_280;
      dVar45 = (double)((ulonglong)(local_298 * auVar62._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_));
      dVar46 = (double)((ulonglong)(dStack_290 * auVar62._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_));
      auVar51 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar61,auVar34);
      dVar35 = 0.0;
    }
    iVar23 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar23 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar23 + 1U) {
      FUN_1400c28ea(param_3,iVar23);
    }
    lVar26 = *param_3;
    lVar24 = (longlong)iVar23 * 0x70;
    *(int *)(lVar26 + lVar24) = iVar27;
    auVar11._8_4_ = SUB84(dVar46,0);
    auVar11._0_8_ = dVar45;
    auVar11._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
    *(undefined1 (*) [16])(lVar26 + 0x10 + lVar24) = auVar11;
    *(undefined1 (*) [16])(lVar26 + 0x20 + lVar24) = auVar51;
    auVar8._8_4_ = SUB84(dStack_110,0);
    auVar8._0_8_ = local_118;
    auVar8._12_4_ = (int)((ulonglong)dStack_110 >> 0x20);
    *(undefined1 (*) [16])(lVar26 + 0x30 + lVar24) = auVar8;
    auVar10._8_4_ = SUB84(dVar35,0);
    auVar10._0_8_ = local_108;
    auVar10._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
    *(undefined1 (*) [16])(lVar26 + 0x40 + lVar24) = auVar10;
    auVar12._8_4_ = SUB84(dVar31 * dVar6,0);
    auVar12._0_8_ = dVar32 * dVar29;
    auVar12._12_4_ = (int)((ulonglong)(dVar31 * dVar6) >> 0x20);
    *(undefined1 (*) [16])(lVar26 + 0x50 + lVar24) = auVar12;
    pdVar20 = (double *)(lVar26 + 0x60 + lVar24);
    *pdVar20 = dVar50 * dVar30;
    pdVar20[1] = dVar7 * 0.0;
  }
LAB_1474e472e:
  if ((local_f0 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474e5472 FUN_1474e5472 body=655 status=ok
// SIG undefined FUN_1474e5472(void)

void FUN_1474e5472(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar3;
  byte bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulonglong uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  double adStack_c8 [3];
  undefined *puStack_b0;
  double adStack_a8 [4];
  undefined1 local_88 [16];
  double local_78;
  double dStack_70;
  undefined1 local_68 [24];
  ulonglong local_50;
  double dVar2;
  double dVar4;
  
  local_50 = DAT_14c707940 ^ (ulonglong)adStack_a8;
  bVar5 = *(byte *)(param_1 + 0x132);
  uVar11 = (ulonglong)bVar5;
  if (uVar11 < 4) {
    local_88._8_4_ = SUB84(param_2[5] - param_3[5],0);
    local_88._0_8_ = param_2[4] - param_3[4];
    local_88._12_4_ = (int)((ulonglong)(param_2[5] - param_3[5]) >> 0x20);
    local_78 = param_2[6] - param_3[6];
    dVar15 = *(double *)(local_88 + uVar11 * 8 + -8);
  }
  else if (bVar5 < 7) {
    dVar9 = *param_3;
    dVar10 = param_3[1];
    dVar6 = param_3[2] * -1.0;
    dVar7 = param_3[3] * 1.0;
    dVar16 = param_2[3];
    dVar15 = param_2[3];
    dVar1 = param_2[1];
    dVar2 = param_2[1];
    dVar3 = param_2[2];
    dVar4 = param_2[2];
    dVar8 = (dVar7 * dVar2 + (*param_2 * dVar6 * -1.0 - dVar15 * dVar10)) - dVar9 * dVar4 * 1.0;
    local_78 = dVar7 * dVar3 * 1.0 + dVar1 * dVar9 + (dVar16 * dVar6 - *param_2 * dVar10 * 1.0);
    dStack_70 = dVar6 * dVar4 * -1.0 + dVar2 * dVar10 + (dVar15 * dVar7 - *param_2 * dVar9 * -1.0);
    local_88._8_4_ = SUB84(dVar8,0);
    local_88._0_8_ =
         (dVar6 * dVar1 + (*param_2 * dVar7 * 1.0 - dVar16 * dVar9)) - dVar10 * dVar3 * -1.0;
    local_88._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    puStack_b0 = (undefined *)0x1474e55f0;
    FUN_1449413b4(local_88,local_68);
    dVar15 = *(double *)(local_88 + (ulonglong)*(byte *)(param_1 + 0x132) * 8);
  }
  else if (bVar5 == 7) {
    dVar15 = param_2[8];
    if (param_2[8] <= param_2[9]) {
      dVar15 = param_2[9];
    }
    if (dVar15 <= param_2[10]) {
      dVar15 = param_2[10];
    }
    dVar16 = param_3[8];
    uVar13 = SUB84(dVar16,0);
    uVar14 = (undefined4)((ulonglong)dVar16 >> 0x20);
    dVar2 = param_3[9];
    if (dVar16 <= dVar2) {
      uVar13 = SUB84(dVar2,0);
      uVar14 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    dVar16 = param_3[10];
    if ((double)CONCAT44(uVar14,uVar13) <= dVar16) {
      uVar13 = SUB84(dVar16,0);
      uVar14 = (undefined4)((ulonglong)dVar16 >> 0x20);
    }
    dVar15 = dVar15 - (double)CONCAT44(uVar14,uVar13);
  }
  else {
    local_88._8_4_ = SUB84(param_2[9] - param_3[9],0);
    local_88._0_8_ = param_2[8] - param_3[8];
    local_88._12_4_ = (int)((ulonglong)(param_2[9] - param_3[9]) >> 0x20);
    local_78 = param_2[10] - param_3[10];
    dVar15 = adStack_c8[uVar11];
  }
  if (*(longlong *)(param_1 + 0xe8) == 0) {
    if ((*(byte *)(param_1 + 0x133) & 1) != 0) {
      dVar16 = *(double *)(param_1 + 0x100) - *(double *)(param_1 + 0xf8);
      if (ABS(dVar16) <= 1e-08) {
        dVar16 = (double)((ulonglong)
                          ((uint)(-(ulonglong)(*(double *)(param_1 + 0x100) <= dVar15) >> 0x20) &
                          0x3ff00000) << 0x20);
      }
      else {
        dVar16 = (dVar15 - *(double *)(param_1 + 0xf8)) / dVar16;
      }
      if (1.0 <= dVar16) {
        dVar16 = 1.0;
      }
      if (dVar16 <= 0.0) {
        dVar16 = 0.0;
      }
      dVar15 = (*(double *)(param_1 + 0x110) - *(double *)(param_1 + 0x108)) * dVar16 +
               *(double *)(param_1 + 0x108);
    }
    uVar13 = SUB84((double)*(float *)(param_1 + 0xf0) * dVar15,0);
  }
  else {
    puStack_b0 = (undefined *)0x1474e54fa;
    fVar12 = (float)FUN_1449e6cbc(*(longlong *)(param_1 + 0xe8),
                                  CONCAT44((int)((ulonglong)dVar15 >> 0x20),(float)dVar15));
    uVar13 = SUB84((double)fVar12,0);
  }
  if ((local_50 ^ (ulonglong)adStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  puStack_b0 = &UNK_1474e5607;
  FUN_144d8e3a0(uVar13);
}



// FUNCTION 1474e5702 FUN_1474e5702 body=286 status=ok
// SIG undefined FUN_1474e5702(void)

void FUN_1474e5702(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  double dVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(char *)(param_1 + 0x132) == '\0') || (*(char *)(param_1 + 0x130) == '\0'))
  goto LAB_1474e5778;
  lVar2 = *(longlong *)(param_2 + 0x30);
  uVar1 = *(uint *)(param_1 + 0xe0);
  if ((int)uVar1 < 0) {
    uVar3 = 0xffffffff;
    if ((~uVar1 & 0x7fffffff) != 0) {
      uVar5 = (int)(uVar1 * 2) >> 1;
      if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(lVar2 + 0x88))) {
        puVar4 = (undefined4 *)((ulonglong)uVar5 * 4 + *(longlong *)(lVar2 + 0x80));
        goto LAB_1474e575b;
      }
    }
  }
  else {
    puVar4 = (undefined4 *)(param_1 + 0xe4);
LAB_1474e575b:
    uVar3 = *puVar4;
  }
  lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x48) + 0x30);
  FUN_144ade54e(param_2 + 0x20,local_88,uVar3);
  if ((byte)(*(char *)(param_1 + 0x130) - 1U) < 2) {
    dVar6 = (double)FUN_1474e5472(param_1,local_88,
                                  lVar2 + ((longlong)((ulonglong)uVar1 << 0x21) >> 0x21) * 0x60);
    FUN_1474e5822(param_2 + 0x68,*(undefined8 *)(param_1 + 0x118),(float)dVar6);
  }
LAB_1474e5778:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474e5822 FUN_1474e5822 body=113 status=ok
// SIG undefined FUN_1474e5822(void)

void FUN_1474e5822(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = FUN_144adea3e();
  if ((iVar1 == -1) || (lVar2 = (longlong)iVar1 * 0x10 + *param_1, lVar2 == 0)) {
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1406de67a(param_1,iVar1);
    }
    lVar2 = *param_1;
    lVar3 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar3) = param_2;
    *(undefined4 *)(lVar2 + 8 + lVar3) = param_3;
    *(undefined1 *)(lVar2 + 0xc + lVar3) = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    *(undefined4 *)(lVar2 + 8) = param_3;
  }
  return;
}



// FUNCTION 1474e5902 FUN_1474e5902 body=48 status=ok
// SIG undefined FUN_1474e5902(void)

void FUN_1474e5902(longlong param_1,undefined8 param_2)

{
  FUN_14019c9f2(param_1 + 0xd8);
  FUN_14019c9f2(param_1 + 0x120,param_2);
  return;
}



// FUNCTION 1474e5942 FUN_1474e5942 body=235 status=ok
// SIG undefined FUN_1474e5942(void)

undefined8 * FUN_1474e5942(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140c83e26();
  *param_1 = &PTR_FUN_14a4355c0;
  uVar1 = DAT_14c8464e8;
  param_1[0x1b] = DAT_14c8464e0;
  param_1[0x1c] = uVar1;
  param_1[0x1d] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0xffffffff7fffffff;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x3ff00000;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0x3ff0000000000000;
  param_1[0x2d] = 0x3ff0000000000000;
  param_1[0x2e] = 0x3ff0000000000000;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0xffffffff7fffffff;
  param_1[0x34] = 0;
  param_1[0x35] = 0xffffffff7fffffff;
  param_1[0x36] = 0xa3f800000;
  *(undefined2 *)(param_1 + 0x37) = 1;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  return param_1;
}



// FUNCTION 1474e5a2e FUN_1474e5a2e body=164 status=ok
// SIG undefined FUN_1474e5a2e(void)

undefined8 *
FUN_1474e5a2e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,int param_5,
             undefined4 *param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3ff00000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3ff00000;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3ff00000;
  param_1[10] = 0x3ff0000000000000;
  param_1[0xb] = 0;
  if (param_5 == 3) {
    FUN_144ade698(param_4,param_1,param_6,param_3,param_2);
  }
  else {
    uVar2 = param_6[1];
    uVar3 = param_6[2];
    uVar4 = param_6[3];
    uVar1 = *(undefined8 *)(param_6 + 4);
    *(undefined4 *)(param_1 + 4) = *param_6;
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
    *(undefined4 *)(param_1 + 5) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
    param_1[6] = uVar1;
    param_1[7] = 0;
    pcVar5 = param_4 + 0x10;
    if (*param_4 != '\0') {
      pcVar5 = param_4 + 0x8c;
    }
    FUN_14045df82(param_2,param_3,param_1,*(undefined4 *)pcVar5,param_5);
  }
  return param_1;
}



// FUNCTION 1474e5ad2 FUN_1474e5ad2 body=1706 status=ok
// SIG undefined FUN_1474e5ad2(void)

void FUN_1474e5ad2(longlong param_1,longlong *param_2,longlong *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  undefined1 auStack_298 [32];
  uint local_278;
  longlong local_270;
  longlong local_268;
  longlong *local_260;
  longlong local_258;
  ulonglong local_250;
  undefined8 local_248 [12];
  longlong local_1e8;
  undefined8 uStack_1e0;
  int *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined1 local_1a8 [32];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  int local_148 [24];
  undefined8 local_e8 [13];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_298;
  local_260 = param_2 + 4;
  lVar16 = param_2[6];
  local_270 = param_1 + 0xd8;
  local_278 = (uint)*(byte *)(param_1 + 0xf0);
  FUN_1474e5a2e(local_1a8,*param_2 + 0x10,local_260,param_1 + 0x100);
  local_1c8 = local_188;
  uStack_1c0 = uStack_180;
  local_1b8 = local_178;
  local_1d8 = (int *)0x0;
  uStack_1d0 = 0;
  uVar6 = *(uint *)(param_1 + 0x1a8);
  if ((int)uVar6 < 0) {
    iVar11 = -1;
    if ((((~uVar6 & 0x7fffffff) != 0) && (uVar6 = (int)(uVar6 * 2) >> 1, -1 < (int)uVar6)) &&
       ((int)uVar6 < *(int *)(lVar16 + 0x88))) {
      piVar8 = (int *)((ulonglong)uVar6 * 4 + *(longlong *)(lVar16 + 0x80));
      goto LAB_1474e5b9a;
    }
  }
  else {
    piVar8 = (int *)(param_1 + 0x1ac);
LAB_1474e5b9a:
    iVar11 = *piVar8;
  }
  uVar6 = *(uint *)(param_1 + 0x198);
  if ((int)uVar6 < 0) {
    iVar21 = -1;
    if ((((~uVar6 & 0x7fffffff) == 0) || (uVar6 = (int)(uVar6 * 2) >> 1, (int)uVar6 < 0)) ||
       (*(int *)(lVar16 + 0x88) <= (int)uVar6)) goto LAB_1474e5bba;
    piVar8 = (int *)((ulonglong)uVar6 * 4 + *(longlong *)(lVar16 + 0x80));
  }
  else {
    piVar8 = (int *)(param_1 + 0x19c);
  }
  iVar21 = *piVar8;
LAB_1474e5bba:
  local_258 = param_1;
  do {
    uVar20 = uStack_1d0 & 0xffffffff;
    uVar6 = (uint)uStack_1d0 + 1;
    uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar6);
    if (uStack_1d0._4_4_ < uVar6) {
      FUN_1408f8cfa(&local_1d8,uVar20);
    }
    memmove(local_1d8 + 1,local_1d8,uVar20 << 2);
    *local_1d8 = iVar21;
    iVar21 = *(int *)(*(longlong *)(param_2[6] + 0x90) + (longlong)iVar21 * 4);
  } while (iVar21 != iVar11);
  uVar20 = uStack_1d0 & 0xffffffff;
  uVar6 = (uint)uStack_1d0 + 1;
  uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar6);
  if (uStack_1d0._4_4_ < uVar6) {
    FUN_1408f8cfa(&local_1d8,uVar20);
  }
  memmove(local_1d8 + 1,local_1d8,uVar20 << 2);
  uVar20 = uStack_1d0;
  *local_1d8 = iVar11;
  uVar6 = (uint)uStack_1d0;
  uVar22 = uStack_1d0 & 0xffffffff;
  lVar16 = param_3[1];
  *(uint *)(param_3 + 1) = (int)lVar16 + (uint)uStack_1d0;
  if ((uint)(*(int *)((longlong)param_3 + 0xc) - (int)lVar16) < (uint)uStack_1d0) {
    FUN_1400c28ea(param_3);
  }
  local_1e8 = 0;
  uStack_1e0 = 0;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar22);
  }
  if (uVar22 != 0) {
    FUN_1474ff2f2(&local_1e8,uVar20 & 0xffffffff);
  }
  piVar8 = local_1d8;
  plVar19 = local_260;
  FUN_144ade54e(local_260,local_248,*local_1d8);
  iVar11 = *piVar8;
  lVar16 = (longlong)iVar11;
  if (*(char *)(param_2[7] + lVar16) == '\0') {
    FUN_1447d5d8e(plVar19);
    iVar11 = *piVar8;
  }
  uVar20 = uStack_1e0;
  piVar8 = (int *)(lVar16 * 0x60 + *plVar19);
  piVar13 = piVar8;
  piVar12 = local_148 + 3;
  for (lVar16 = 0x18; lVar16 != 0; lVar16 = lVar16 + -1) {
    *piVar12 = *piVar13;
    piVar13 = piVar13 + 1;
    piVar12 = piVar12 + 1;
  }
  piVar13 = (int *)*param_3;
  *piVar13 = iVar11;
  piVar12 = local_148;
  for (lVar16 = 0x1b; piVar13 = piVar13 + 1, lVar16 != 0; lVar16 = lVar16 + -1) {
    *piVar13 = *piVar12;
    piVar12 = piVar12 + 1;
  }
  piVar13 = local_148;
  for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
    *(undefined8 *)piVar13 = *(undefined8 *)piVar8;
    piVar8 = piVar8 + 2;
    piVar13 = piVar13 + 2;
  }
  puVar14 = local_248;
  puVar15 = local_e8;
  for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar15 = *puVar14;
    puVar14 = puVar14 + 1;
    puVar15 = puVar15 + 1;
  }
  lVar16 = (longlong)(int)uStack_1e0;
  uVar7 = (int)uStack_1e0 + 1;
  uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar7);
  if (uStack_1e0._4_4_ < uVar7) {
    FUN_1474ff362(&local_1e8,uVar20 & 0xffffffff);
  }
  lVar17 = local_1e8;
  lVar16 = lVar16 * 0xe0;
  memcpy((void *)(local_1e8 + lVar16),local_148,0xc0);
  *(undefined4 *)(lVar17 + 0xc0 + lVar16) = 0;
  puVar14 = (undefined8 *)(lVar17 + 200 + lVar16);
  *puVar14 = 0;
  puVar14[1] = 0;
  *(undefined8 *)(lVar17 + 0xd8 + lVar16) = 0;
  local_250 = uVar22;
  if (1 < uVar6) {
    uVar20 = 1;
    lVar16 = 0;
    plVar19 = local_260;
    do {
      piVar8 = local_1d8;
      FUN_144ade54e(plVar19,local_248,local_1d8[uVar20]);
      iVar11 = piVar8[uVar20];
      lVar17 = (longlong)iVar11;
      if (*(char *)(param_2[7] + lVar17) == '\0') {
        FUN_1447d5d8e(plVar19);
        iVar11 = piVar8[uVar20];
      }
      uVar22 = uStack_1e0;
      lVar10 = *plVar19;
      lVar17 = lVar17 * 0x60;
      pdVar1 = (double *)(lVar10 + 0x20 + lVar17);
      dVar3 = *pdVar1;
      dVar4 = pdVar1[1];
      dVar2 = *(double *)(lVar10 + 0x30 + lVar17);
      piVar8 = (int *)(lVar10 + lVar17);
      piVar13 = local_148 + 3;
      for (lVar9 = 0x18; lVar9 != 0; lVar9 = lVar9 + -1) {
        *piVar13 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar13 = piVar13 + 1;
      }
      piVar8 = (int *)(*param_3 + 0x74 + lVar16);
      piVar8[-1] = iVar11;
      piVar13 = local_148;
      for (lVar9 = 0x1b; lVar9 != 0; lVar9 = lVar9 + -1) {
        *piVar8 = *piVar13;
        piVar13 = piVar13 + 1;
        piVar8 = piVar8 + 1;
      }
      pdVar1 = (double *)(*param_3 + 0x30 + lVar16);
      dVar3 = *pdVar1 - dVar3;
      dVar4 = pdVar1[1] - dVar4;
      dVar2 = *(double *)(*param_3 + 0x40 + lVar16) - dVar2;
      if (ABS(SQRT(dVar3 * dVar3 + dVar4 * dVar4 + dVar2 * dVar2)) <= 1e-08) {
        lVar17 = local_1e8 + (longlong)(int)uStack_1e0 * 0xe0;
        iVar11 = *(int *)(lVar17 + -0x10);
        *(uint *)(lVar17 + -0x10) = iVar11 + 1U;
        if (*(uint *)(lVar17 + -0xc) < iVar11 + 1U) {
          FUN_1446f48e2((longlong *)(lVar17 + -0x18),iVar11);
          plVar19 = local_260;
        }
        *(int *)(*(longlong *)(lVar17 + -0x18) + (longlong)iVar11 * 4) = (int)uVar20;
      }
      else {
        piVar8 = (int *)(lVar10 + lVar17);
        piVar13 = local_148;
        for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
          *(undefined8 *)piVar13 = *(undefined8 *)piVar8;
          piVar8 = piVar8 + 2;
          piVar13 = piVar13 + 2;
        }
        puVar14 = local_248;
        puVar15 = local_e8;
        for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
          *puVar15 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar15 = puVar15 + 1;
        }
        lVar17 = (longlong)(int)uStack_1e0;
        uVar6 = (int)uStack_1e0 + 1;
        uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar6);
        if (uStack_1e0._4_4_ < uVar6) {
          FUN_1474ff362(&local_1e8,uVar22 & 0xffffffff);
        }
        lVar10 = local_1e8;
        lVar17 = lVar17 * 0xe0;
        memcpy((void *)(local_1e8 + lVar17),local_148,0xc0);
        *(int *)(lVar10 + 0xc0 + lVar17) = (int)uVar20;
        puVar14 = (undefined8 *)(lVar10 + 200 + lVar17);
        *puVar14 = 0;
        puVar14[1] = 0;
        *(undefined8 *)(lVar10 + 0xd8 + lVar17) = 0;
        plVar19 = local_260;
      }
      uVar20 = uVar20 + 1;
      lVar16 = lVar16 + 0x70;
    } while (local_250 != uVar20);
  }
  local_268 = local_258 + 0x1c0;
  local_270 = CONCAT71(local_270._1_7_,*(undefined1 *)(local_258 + 0x1b9));
  local_278 = CONCAT31(local_278._1_3_,*(undefined1 *)(local_258 + 0x1b8));
  cVar5 = FUN_14690ca3a(&local_1e8,&local_1c8,*(undefined4 *)(local_258 + 0x1b0));
  if ((cVar5 != '\0') && (0 < (int)uStack_1e0)) {
    uVar20 = 0;
    do {
      lVar17 = uVar20 * 0xe0;
      puVar14 = (undefined8 *)(local_1e8 + lVar17);
      puVar15 = puVar14;
      puVar18 = (undefined8 *)
                (*param_3 + (longlong)*(int *)(local_1e8 + 0xc0 + lVar17) * 0x70 + 0x10);
      for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
        *puVar18 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar18 = puVar18 + 1;
      }
      lVar16 = (longlong)*(int *)(local_1e8 + 0xd0 + lVar17);
      if (0 < lVar16) {
        lVar17 = 0;
        do {
          puVar15 = puVar14;
          puVar18 = (undefined8 *)
                    (*param_3 + (longlong)*(int *)(puVar14[0x19] + lVar17 * 4) * 0x70 + 0x10);
          for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar18 = *puVar15;
            puVar15 = puVar15 + 1;
            puVar18 = puVar18 + 1;
          }
          lVar17 = lVar17 + 1;
        } while (lVar16 != lVar17);
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 != (uStack_1e0 & 0xffffffff));
  }
  FUN_1474ff2bc(local_1e8);
  if (local_1e8 != 0) {
    FUN_1400020a8();
  }
  if (local_1d8 != (int *)0x0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474e6268 FUN_1474e6268 body=63 status=ok
// SIG undefined FUN_1474e6268(void)

void FUN_1474e6268(longlong param_1,undefined8 param_2)

{
  FUN_14019c9f2(param_1 + 400);
  FUN_14019c9f2(param_1 + 0x1a0,param_2);
  FUN_14019c9a8(param_1 + 0x100,param_2);
  return;
}



// FUNCTION 1474e62a8 FUN_1474e62a8 body=198 status=ok
// SIG undefined FUN_1474e62a8(void)

void FUN_1474e62a8(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1474e6370(param_2,&local_40);
  _Src = local_40;
  local_50 = (void *)0x0;
  local_48 = local_38;
  if ((longlong)local_38 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_38,0);
    memcpy(local_50,_Src,(longlong)local_38 * 2);
  }
  FUN_147906d4c(param_2,&local_50,0);
  FUN_147906d38(param_1 + 0x18,param_2);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474e6370 FUN_1474e6370 body=256 status=ok
// SIG undefined FUN_1474e6370(void)

undefined8 FUN_1474e6370(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14caab128 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caab128 = FUN_140002ddd(FUN_1463331d3,uVar2,L"AnimNode_CCDIK");
  }
  local_48 = *(undefined8 *)(DAT_14caab128 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1474e6472 FUN_1474e6472 body=627 status=ok
// SIG undefined FUN_1474e6472(void)

void FUN_1474e6472(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined2 *local_a0;
  int local_98;
  void *local_90;
  int local_88;
  undefined4 local_84;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  int local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  fVar7 = *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x3c);
  if (1.0 <= fVar7) {
    fVar7 = 1.0;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  local_b8 = param_2;
  FUN_1474e66e6(param_2,&local_70);
  FUN_140002266(&local_80,L"(Alpha: %.1f%%)",(double)(fVar7 * 100.0));
  iVar1 = (int)local_78 + -1;
  if ((int)local_78 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_70,local_80,iVar1);
  if (local_80 != (void *)0x0) {
    FUN_1400020a8();
  }
  pvVar2 = local_70;
  local_90 = (void *)0x0;
  lVar4 = (longlong)local_68;
  local_88 = local_68;
  if (lVar4 == 0) {
    local_84 = 0;
  }
  else {
    FUN_1446dd670(&local_90,local_68,0);
    memcpy(local_90,pvVar2,lVar4 * 2);
  }
  FUN_147906d4c(local_b8,&local_90,0);
  iVar1 = *(int *)(param_1 + 0xf0);
  if (0 < (longlong)iVar1) {
    lVar6 = 0;
    lVar4 = 0;
    do {
      fVar7 = *(float *)(*(longlong *)(param_1 + 0xf8) + lVar4 * 4);
      FUN_1400021e4(*(longlong *)(param_1 + 0xe8) + lVar6,&local_a0);
      puVar5 = &DAT_149dfb77a;
      if (local_98 != 0) {
        puVar5 = local_a0;
      }
      FUN_140002266(&local_80,L"  Target : %s (%0.2f) ",puVar5,SUB84((double)fVar7,0));
      if (local_70 != (void *)0x0) {
        FUN_1400020a8();
      }
      local_70 = local_80;
      local_80 = (void *)0x0;
      local_68 = (int)local_78;
      local_64 = local_78._4_4_;
      local_78 = 0;
      if (local_a0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      iVar3 = local_68;
      pvVar2 = local_70;
      local_b0 = (void *)0x0;
      local_a8 = local_68;
      if (local_68 == 0) {
        local_a4 = 0;
      }
      else {
        FUN_1446dd670(&local_b0,local_68,0);
        memcpy(local_b0,pvVar2,(longlong)iVar3 * 2);
      }
      FUN_147906d4c(local_b8,&local_b0,0);
      lVar4 = lVar4 + 1;
      lVar6 = lVar6 + 0x1c;
    } while (iVar1 != lVar4);
  }
  FUN_147906d38(param_1 + 0x18,local_b8);
  if (local_70 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474e66e6 FUN_1474e66e6 body=256 status=ok
// SIG undefined FUN_1474e66e6(void)

undefined8 FUN_1474e66e6(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14caab170 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caab170 = FUN_140002ddd(FUN_14633332f,uVar2,L"AnimNode_Constraint");
  }
  local_48 = *(undefined8 *)(DAT_14caab170 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1474e67e8 FUN_1474e67e8 body=593 status=ok
// SIG undefined FUN_1474e67e8(void)

void FUN_1474e67e8(longlong param_1,longlong param_2,longlong *param_3)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_1d8 [40];
  longlong *local_1b0;
  longlong *local_1a8;
  longlong local_1a0;
  undefined4 local_198 [24];
  undefined8 local_138 [13];
  undefined4 local_cc [27];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  plVar13 = (longlong *)(param_2 + 0x20);
  iVar2 = *(int *)(param_1 + 0xf0);
  local_1b0 = param_3;
  if (0 < (longlong)iVar2) {
    lVar14 = *(longlong *)(param_2 + 0x30);
    lVar8 = lVar14 + 0x10;
    lVar16 = 6;
    lVar15 = 0;
    local_1a8 = plVar13;
    local_1a0 = lVar14;
    do {
      fVar1 = *(float *)(*(longlong *)(param_1 + 0xf8) + lVar15 * 4);
      if (1e-05 < fVar1) {
        lVar6 = *(longlong *)(param_1 + 0xe8);
        uVar3 = *(uint *)(lVar6 + -0x10 + lVar16 * 4);
        if ((~uVar3 & 0x7fffffff) != 0) {
          lVar7 = *(longlong *)(lVar14 + 0x20);
          if (*(longlong *)(lVar14 + 0x20) == 0) {
            lVar7 = lVar8;
          }
          if ((((*(uint *)(lVar7 + (ulonglong)(uVar3 >> 3 & 0x1ffc)) >> (uVar3 & 0x1f) & 1) != 0) &&
              (((*(char *)(lVar6 + -6 + lVar16 * 4) != '\0' ||
                (*(char *)(lVar6 + -5 + lVar16 * 4) != '\0')) ||
               (*(char *)(lVar6 + -4 + lVar16 * 4) == '\x01')))) &&
             (lVar7 = (longlong)*(int *)(lVar6 + lVar16 * 4), lVar7 != -1)) {
            *(float *)(*(longlong *)(param_1 + 0x108) + 0x10 + lVar7 * 0xe0) = fVar1;
            iVar4 = *(int *)(lVar6 + -0xc + lVar16 * 4);
            if (*(char *)(*(longlong *)(param_2 + 0x38) + (longlong)iVar4) == '\0') {
              FUN_1447d5d8e(plVar13,iVar4);
              plVar13 = local_1a8;
              lVar14 = local_1a0;
            }
            puVar9 = (undefined8 *)((longlong)iVar4 * 0x60 + *plVar13);
            puVar12 = (undefined8 *)
                      (*(longlong *)(param_1 + 0x108) +
                       (longlong)*(int *)(lVar6 + lVar16 * 4) * 0xe0 + 0x80);
            for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar12 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar12 = puVar12 + 1;
            }
          }
        }
      }
      lVar15 = lVar15 + 1;
      lVar16 = lVar16 + 7;
    } while (iVar2 != lVar15);
  }
  if (0 < *(int *)(param_1 + 0x110)) {
    iVar2 = *(int *)(param_1 + 0xe4);
    if (*(char *)(*(longlong *)(param_2 + 0x38) + (longlong)iVar2) == '\0') {
      FUN_1447d5d8e(plVar13,iVar2);
    }
    puVar9 = (undefined8 *)((longlong)iVar2 * 0x60 + *plVar13);
    puVar12 = local_138;
    for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar12 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar12 = puVar12 + 1;
    }
    FUN_14690aedf(local_198,local_138,&DAT_14c846480,param_1 + 0x108);
    plVar13 = local_1b0;
    uVar5 = *(undefined4 *)(param_1 + 0xe4);
    puVar10 = local_198;
    puVar11 = local_cc + 3;
    for (lVar8 = 0x18; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    iVar2 = (int)local_1b0[1];
    *(uint *)(local_1b0 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)local_1b0 + 0xc) < iVar2 + 1U) {
      FUN_1400c28ea(local_1b0,iVar2);
    }
    puVar10 = (undefined4 *)(*plVar13 + (longlong)iVar2 * 0x70);
    *puVar10 = uVar5;
    puVar11 = local_cc;
    for (lVar8 = 0x1b; puVar10 = puVar10 + 1, lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar10 = *puVar11;
      puVar11 = puVar11 + 1;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474e6a3a FUN_1474e6a3a body=200 status=ok
// SIG undefined FUN_1474e6a3a(void)

undefined4 FUN_1474e6a3a(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  
  if (0 < (longlong)*(int *)(param_1 + 0xf0)) {
    lVar4 = param_3 + 0x10;
    if (*(longlong *)(param_3 + 0x20) != 0) {
      lVar4 = *(longlong *)(param_3 + 0x20);
    }
    pbVar2 = (byte *)(*(longlong *)(param_1 + 0xe8) + 0x14);
    lVar5 = 0;
    bVar6 = 0;
    do {
      if (1e-05 < *(float *)(*(longlong *)(param_1 + 0xf8) + lVar5 * 4)) {
        uVar1 = *(uint *)(pbVar2 + -0xc);
        if (((~uVar1 & 0x7fffffff) == 0) ||
           ((*(uint *)(lVar4 + (ulonglong)(uVar1 >> 3 & 0x1ffc)) >> (uVar1 & 0x1f) & 1) == 0)) {
          bVar3 = 0;
        }
        else {
          bVar3 = 1;
          if ((pbVar2[-2] == 0) && (pbVar2[-1] == 0)) {
            bVar3 = *pbVar2;
          }
        }
        bVar6 = bVar6 | bVar3;
      }
      lVar5 = lVar5 + 1;
      pbVar2 = pbVar2 + 0x1c;
    } while (*(int *)(param_1 + 0xf0) != lVar5);
    if (((bVar6 & 1) != 0) && (uVar1 = *(uint *)(param_1 + 0xe0), (~uVar1 & 0x7fffffff) != 0)) {
      return CONCAT31((int3)(uVar1 >> 8),
                      (*(uint *)(lVar4 + (ulonglong)(uVar1 >> 3 & 0x1ffc)) >> (uVar1 & 0x1f) & 1) !=
                      0);
    }
  }
  return 0;
}



// FUNCTION 1474e6b02 FUN_1474e6b02 body=840 status=ok
// SIG undefined FUN_1474e6b02(void)

void FUN_1474e6b02(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_268 [40];
  longlong *local_240;
  undefined8 local_238 [12];
  undefined1 local_1d8 [8];
  undefined8 *local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c4;
  undefined8 local_1b8 [12];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [104];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_268;
  FUN_14019c9f2(param_1 + 0xd8);
  local_240 = (longlong *)(param_1 + 0x108);
  FUN_1474e6e4c(local_240,*(undefined4 *)(param_1 + 0xf0));
  uVar3 = *(uint *)(param_1 + 0xe0);
  if ((~uVar3 & 0x7fffffff) != 0) {
    lVar11 = *(longlong *)(param_2 + 0x20);
    if (*(longlong *)(param_2 + 0x20) == 0) {
      lVar11 = param_2 + 0x10;
    }
    if ((*(uint *)(lVar11 + (ulonglong)(uVar3 >> 3 & 0x1ffc)) >> (uVar3 & 0x1f) & 1) != 0) {
      uVar3 = *(uint *)(param_1 + 0xf0);
      FUN_1478d20dc(local_f8,param_1 + 0xe4,param_2);
      if (0 < (int)uVar3) {
        lVar11 = 0;
        do {
          lVar6 = *(longlong *)(param_1 + 0xe8);
          FUN_14019c9f2(lVar6 + lVar11,param_2);
          uVar4 = *(uint *)(lVar6 + 8 + lVar11);
          if ((~uVar4 & 0x7fffffff) == 0) {
LAB_1474e6c44:
            *(undefined4 *)(lVar6 + 0x18 + lVar11) = 0xffffffff;
          }
          else {
            lVar8 = *(longlong *)(param_2 + 0x20);
            if (*(longlong *)(param_2 + 0x20) == 0) {
              lVar8 = param_2 + 0x10;
            }
            if ((*(uint *)(lVar8 + (ulonglong)(uVar4 >> 3 & 0x1ffc)) >> (uVar4 & 0x1f) & 1) == 0)
            goto LAB_1474e6c44;
            cVar1 = *(char *)(lVar6 + 0x10 + lVar11);
            uVar2 = *(undefined1 *)(lVar6 + 0x11 + lVar11);
            local_1d8[0] = 0;
            local_1d0 = (undefined8 *)FUN_14001cc68(0x18,0x10);
            *(undefined2 *)(local_1d0 + 1) = 0x101;
            *(undefined1 *)((longlong)local_1d0 + 10) = 1;
            local_1c8 = 0;
            bVar12 = cVar1 == '\0';
            local_1c4 = !bVar12;
            *local_1d0 = &PTR_FUN_149ebb0e0;
            *(undefined1 *)(local_1d0 + 2) = uVar2;
            puVar9 = &DAT_14c846480;
            puVar10 = local_1b8;
            for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
              *puVar10 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar10 = puVar10 + 1;
            }
            local_158 = 0;
            uStack_150 = 0;
            local_148 = 0;
            uStack_144 = 0;
            uStack_140 = 0;
            uStack_13c = 0x3ff00000;
            local_128 = 0;
            uStack_120 = 0;
            local_138 = 0;
            uStack_130 = 0;
            local_118 = 0x3ff0000000000000;
            uStack_110 = 0x3ff0000000000000;
            local_108 = 0x3ff0000000000000;
            uStack_100 = 0;
            *(undefined1 *)((longlong)local_1d0 + 10) = *(undefined1 *)(lVar6 + 0x14 + lVar11);
            *(undefined2 *)(local_1d0 + 1) = *(undefined2 *)(lVar6 + 0x12 + lVar11);
            if (bVar12) {
              puVar9 = &DAT_14c846480;
              puVar10 = local_238;
              for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
                *puVar10 = *puVar9;
                puVar9 = puVar9 + 1;
                puVar10 = puVar10 + 1;
              }
            }
            else {
              FUN_1478d20dc(local_238,lVar6 + lVar11 + 0xc,param_2);
            }
            FUN_14690dc42(local_1d8,local_f8,local_238,&DAT_14c846480);
            iVar5 = *(int *)(param_1 + 0x110);
            *(uint *)(param_1 + 0x110) = iVar5 + 1U;
            if (*(uint *)(param_1 + 0x114) < iVar5 + 1U) {
              FUN_1474ff4a0(local_240,iVar5);
            }
            lVar7 = *local_240;
            lVar8 = lVar7 + (longlong)iVar5 * 0xe0;
            *(undefined8 *)(lVar8 + 8) = 0;
            FUN_1469119d2(lVar7 + (longlong)iVar5 * 0xe0,local_1d8);
            memcpy((void *)(lVar8 + 0x10),&local_1c8,0xd0);
            *(int *)(lVar6 + 0x18 + lVar11) = iVar5;
            if (local_1d0 != (undefined8 *)0x0) {
              (**(code **)*local_1d0)(local_1d0,1);
            }
          }
          lVar11 = lVar11 + 0x1c;
        } while ((ulonglong)uVar3 * 0x1c != lVar11);
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474e6e4c FUN_1474e6e4c body=61 status=ok
// SIG undefined FUN_1474e6e4c(void)

void FUN_1474e6e4c(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    FUN_1474ff3f6(param_1);
    return;
  }
  FUN_1474f9a9f(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 1474e6ea2 FUN_1474e6ea2 body=409 status=ok
// SIG undefined FUN_1474e6ea2(void)

void FUN_1474e6ea2(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_a8 [32];
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  longlong local_58;
  int local_50;
  void *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1474e703c(param_2,&local_48);
  thunk_FUN_14047a987(&local_48,&DAT_149eb775e,1);
  FUN_1474dc4fe(param_1,&local_48);
  FUN_1400021e4(param_1 + 0xe8,&local_68);
  puVar2 = &DAT_149dfb77a;
  if (local_60 != 0) {
    puVar2 = local_68;
  }
  FUN_1400021e4(param_1 + 0xd8,&local_78);
  puVar3 = &DAT_149dfb77a;
  if (local_70 != 0) {
    puVar3 = local_78;
  }
  FUN_140002266(&local_58,L" Src: %s Dst: %s)",puVar3,puVar2);
  iVar1 = local_50 + -1;
  if (local_50 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_48,local_58,iVar1);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  _Src = local_48;
  local_88 = (void *)0x0;
  local_80 = local_40;
  if ((longlong)local_40 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_40,0);
    memcpy(local_88,_Src,(longlong)local_40 * 2);
  }
  FUN_147906d4c(param_2,&local_88,0);
  FUN_147906d38(param_1 + 0x18,param_2);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474e703c FUN_1474e703c body=256 status=ok
// SIG undefined FUN_1474e703c(void)

undefined8 FUN_1474e703c(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14caab188 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caab188 = FUN_140002ddd(FUN_1463333c5,uVar2,L"AnimNode_CopyBone");
  }
  local_48 = *(undefined8 *)(DAT_14caab188 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1474e7156 FUN_1474e7156 body=198 status=ok
// SIG undefined FUN_1474e7156(void)

void FUN_1474e7156(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1474e721e(param_2,&local_40);
  _Src = local_40;
  local_50 = (void *)0x0;
  local_48 = local_38;
  if ((longlong)local_38 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_38,0);
    memcpy(local_50,_Src,(longlong)local_38 * 2);
  }
  FUN_147906d4c(param_2,&local_50,0);
  FUN_147906d38(param_1 + 0x18,param_2);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474e721e FUN_1474e721e body=256 status=ok
// SIG undefined FUN_1474e721e(void)

undefined8 FUN_1474e721e(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14caab1b8 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caab1b8 = FUN_140002ddd(FUN_14633348b,uVar2,L"AnimNode_CopyBoneDelta");
  }
  local_48 = *(undefined8 *)(DAT_14caab1b8 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1474e7320 FUN_1474e7320 body=1954 status=ok
// SIG undefined FUN_1474e7320(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474e7320(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  double *pdVar10;
  int *piVar11;
  double *pdVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar23;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar24;
  double dVar25;
  undefined1 in_XMM3 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auStack_288 [32];
  undefined4 local_268;
  longlong local_260;
  int local_254;
  longlong *local_250;
  longlong *local_248;
  longlong *local_240;
  undefined8 local_238 [12];
  double local_1d8 [4];
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
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
  int local_10c [27];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if (((*(char *)(param_1 + 0xf8) == '\0') && (*(char *)(param_1 + 0xf9) == '\0')) &&
     (*(char *)(param_1 + 0xfa) != '\x01')) goto LAB_1474e7882;
  local_260 = param_2[6];
  uVar4 = *(uint *)(param_1 + 0xe0);
  if ((int)uVar4 < 0) {
    if (((~uVar4 & 0x7fffffff) == 0) || (uVar4 = (int)(uVar4 * 2) >> 1, (int)uVar4 < 0)) {
      iVar14 = -1;
    }
    else {
      iVar14 = -1;
      if ((int)uVar4 < *(int *)(local_260 + 0x88)) {
        piVar5 = (int *)((ulonglong)uVar4 * 4 + *(longlong *)(local_260 + 0x80));
        goto LAB_1474e73c1;
      }
    }
  }
  else {
    piVar5 = (int *)(param_1 + 0xe4);
LAB_1474e73c1:
    iVar14 = *piVar5;
  }
  uVar4 = *(uint *)(param_1 + 0xf0);
  if ((int)uVar4 < 0) {
    if (((~uVar4 & 0x7fffffff) == 0) || (uVar4 = (int)(uVar4 * 2) >> 1, (int)uVar4 < 0)) {
      iVar15 = -1;
    }
    else {
      iVar15 = -1;
      if ((int)uVar4 < *(int *)(local_260 + 0x88)) {
        piVar5 = (int *)((ulonglong)uVar4 * 4 + *(longlong *)(local_260 + 0x80));
        goto LAB_1474e73da;
      }
    }
  }
  else {
    piVar5 = (int *)(param_1 + 0xf4);
LAB_1474e73da:
    iVar15 = *piVar5;
  }
  plVar1 = param_2 + 4;
  lVar7 = param_2[7];
  local_240 = param_3;
  if (*(char *)(lVar7 + iVar14) == '\0') {
    FUN_1447d5d8e(plVar1,iVar14);
    lVar7 = param_2[7];
  }
  lVar8 = *plVar1;
  pdVar10 = (double *)((longlong)iVar14 * 0x60 + lVar8);
  pdVar12 = local_178;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *pdVar12 = *pdVar10;
    pdVar10 = pdVar10 + 1;
    pdVar12 = pdVar12 + 1;
  }
  if (*(char *)(lVar7 + iVar15) == '\0') {
    FUN_1447d5d8e(plVar1,iVar15);
    lVar8 = *plVar1;
  }
  pdVar10 = (double *)((longlong)iVar15 * 0x60 + lVar8);
  pdVar12 = local_1d8;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *pdVar12 = *pdVar10;
    pdVar10 = pdVar10 + 1;
    pdVar12 = pdVar12 + 1;
  }
  local_268 = 2;
  FUN_14045e902(*param_2 + 0x10,plVar1,local_178,iVar14);
  local_268 = 2;
  local_254 = iVar15;
  local_250 = plVar1;
  local_248 = param_2;
  FUN_14045e902(*param_2 + 0x10,plVar1,local_1d8,iVar15);
  lVar7 = *(longlong *)(local_260 + 0x48);
  FUN_1479398b0(param_1 + 0xd8,local_10c);
  puVar9 = (undefined8 *)((longlong)local_10c[0] * 0x60 + *(longlong *)(lVar7 + 0x30));
  puVar13 = local_238;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar13 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar13 = puVar13 + 1;
  }
  FUN_1447d58ca(local_178);
  plVar3 = local_240;
  plVar2 = local_248;
  plVar1 = local_250;
  if (*(char *)(param_1 + 0xfb) == '\0') {
    if (*(char *)(param_1 + 0xf8) != '\0') {
      dVar16 = (double)*(float *)(param_1 + 0xfc);
      local_1b8 = dVar16 * local_158 + local_1b8;
      dStack_1b0 = local_150 * dVar16 + dStack_1b0;
      local_1a8 = local_148 * dVar16 + local_1a8;
      dStack_1a0 = dStack_1a0 + 0.0;
    }
    if (*(char *)(param_1 + 0xf9) == '\x01') {
      dVar16 = local_178[3];
      if (1.0 <= local_178[3]) {
        dVar16 = 1.0;
      }
      dVar16 = acos((double)(~-(ulonglong)(local_178[3] < -1.0) & (ulonglong)dVar16 |
                            -(ulonglong)(local_178[3] < -1.0) & 0xbff0000000000000));
      dVar19 = local_178[2] * local_178[2] + local_178[0] * local_178[0];
      dVar23 = local_178[1] * local_178[1] + 0.0;
      auVar21._0_8_ = dVar19 + dVar23;
      auVar21._8_8_ = dVar19 + dVar23;
      auVar31._8_8_ = -(ulonglong)(1e-08 <= auVar21._8_8_);
      auVar31._0_8_ = -(ulonglong)(1e-08 <= auVar21._0_8_);
      auVar26 = sqrtpd(in_XMM3,auVar21);
      auVar22 = divpd(_DAT_149934d80,auVar26);
      local_178[1] = local_178[1] * auVar22._8_8_;
      auVar26._8_4_ = SUB84(local_178[1],0);
      auVar26._0_8_ = local_178[0] * auVar22._0_8_;
      auVar26._12_4_ = (int)((ulonglong)local_178[1] >> 0x20);
      auVar26 = blendvpd(ZEXT816(0x3ff0000000000000),auVar26,auVar31);
      if ((-(ulonglong)(1e-08 <= auVar21._0_8_) & 1) == 0) {
        dVar19 = 0.0;
      }
      else {
        dVar19 = local_178[2] * auVar22._0_8_;
      }
      dVar16 = (double)((float)(dVar16 + dVar16) * *(float *)(param_1 + 0x100)) * 0.5;
      dVar23 = sin(dVar16);
      dVar17 = cos(dVar16);
      dVar30 = auVar26._0_8_ * dVar23;
      dVar16 = auVar26._8_8_ * dVar23;
      dVar19 = dVar19 * dVar23;
      dVar25 = dVar30 * local_1d8[1];
      dVar27 = dVar30 * local_1d8[0];
      dVar28 = local_1d8[0] * dVar16;
      dVar29 = local_1d8[1] * dVar16;
      dVar23 = local_1d8[0] * dVar19;
      dVar24 = local_1d8[2] * dVar19;
      local_1d8[0] = local_1d8[1] * dVar19 * -1.0 +
                     local_1d8[2] * dVar16 + local_1d8[3] * dVar30 * 1.0 + local_1d8[0] * dVar17;
      local_1d8[1] = dVar23 * 1.0 +
                     local_1d8[3] * dVar16 + local_1d8[2] * dVar30 * -1.0 + local_1d8[1] * dVar17;
      local_1d8[2] = local_1d8[3] * dVar19 * 1.0 + ((dVar25 * 1.0 + dVar17 * local_1d8[2]) - dVar28)
      ;
      local_1d8[3] = dVar24 * -1.0 + ((dVar27 * -1.0 + dVar17 * local_1d8[3]) - dVar29);
    }
    if (*(char *)(param_1 + 0xfa) == '\x01') {
      dVar16 = (double)*(float *)(param_1 + 0x104);
      local_188 = local_128 * dVar16 * local_188;
      dStack_190 = local_130 * dVar16 * dStack_190;
      local_198 = dVar16 * local_138 * local_198;
      goto LAB_1474e77f2;
    }
  }
  else {
    if (*(char *)(param_1 + 0xf8) != '\0') {
      local_1b8 = (double)*(float *)(param_1 + 0xfc);
      local_1a8 = local_148 * local_1b8;
      dStack_1b0 = local_150 * local_1b8;
      local_1b8 = local_1b8 * local_158;
      dStack_1a0 = 0.0;
    }
    if (*(char *)(param_1 + 0xf9) == '\x01') {
      dVar16 = local_178[3];
      if (1.0 <= local_178[3]) {
        dVar16 = 1.0;
      }
      dVar16 = acos((double)(~-(ulonglong)(local_178[3] < -1.0) & (ulonglong)dVar16 |
                            -(ulonglong)(local_178[3] < -1.0) & 0xbff0000000000000));
      dVar19 = local_178[2] * local_178[2] + local_178[0] * local_178[0];
      dVar23 = local_178[1] * local_178[1] + 0.0;
      auVar20._0_8_ = dVar19 + dVar23;
      auVar20._8_8_ = dVar19 + dVar23;
      auVar18._8_8_ = -(ulonglong)(1e-08 <= auVar20._8_8_);
      auVar18._0_8_ = -(ulonglong)(1e-08 <= auVar20._0_8_);
      auVar26 = sqrtpd(in_XMM3,auVar20);
      auVar26 = divpd(_DAT_149934d80,auVar26);
      local_178[1] = local_178[1] * auVar26._8_8_;
      auVar22._8_4_ = SUB84(local_178[1],0);
      auVar22._0_8_ = local_178[0] * auVar26._0_8_;
      auVar22._12_4_ = (int)((ulonglong)local_178[1] >> 0x20);
      auVar31 = blendvpd(ZEXT816(0x3ff0000000000000),auVar22,auVar18);
      if ((-(ulonglong)(1e-08 <= auVar20._0_8_) & 1) == 0) {
        dVar19 = 0.0;
      }
      else {
        dVar19 = local_178[2] * auVar26._0_8_;
      }
      dVar16 = (double)((float)(dVar16 + dVar16) * *(float *)(param_1 + 0x100)) * 0.5;
      dVar23 = sin(dVar16);
      local_1d8[3] = cos(dVar16);
      local_1d8[0] = auVar31._0_8_ * dVar23;
      local_1d8[1] = auVar31._8_8_ * dVar23;
      local_1d8[2] = dVar19 * dVar23;
    }
    if (*(char *)(param_1 + 0xfa) == '\x01') {
      local_198 = (double)*(float *)(param_1 + 0x104);
      local_188 = local_128 * local_198;
      dStack_190 = local_130 * local_198;
      local_198 = local_198 * local_138;
LAB_1474e77f2:
      uStack_180 = 0;
    }
  }
  local_268 = 2;
  FUN_14045df82(*plVar2 + 0x10,plVar1,local_1d8,local_254);
  pdVar10 = local_1d8;
  piVar5 = local_10c + 3;
  for (lVar7 = 0x18; lVar7 != 0; lVar7 = lVar7 + -1) {
    *piVar5 = *(int *)pdVar10;
    pdVar10 = (double *)((longlong)pdVar10 + 4);
    piVar5 = piVar5 + 1;
  }
  iVar14 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar14 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar14 + 1U) {
    FUN_1400c28ea(plVar3,iVar14);
  }
  piVar5 = (int *)(*plVar3 + (longlong)iVar14 * 0x70);
  *piVar5 = local_254;
  piVar11 = local_10c;
  for (lVar7 = 0x1b; piVar5 = piVar5 + 1, lVar7 != 0; lVar7 = lVar7 + -1) {
    *piVar5 = *piVar11;
    piVar11 = piVar11 + 1;
  }
LAB_1474e7882:
  if ((local_a0 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474e7b38 FUN_1474e7b38 body=48 status=ok
// SIG undefined FUN_1474e7b38(void)

void FUN_1474e7b38(longlong param_1,undefined8 param_2)

{
  FUN_14019c9f2(param_1 + 0xd8);
  FUN_14019c9f2(param_1 + 0xe8,param_2);
  return;
}



// FUNCTION 1474e7b68 FUN_1474e7b68 body=219 status=ok
// SIG undefined FUN_1474e7b68(void)

undefined8 * FUN_1474e7b68(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  FUN_140c83e26();
  *param_1 = &PTR_FUN_14a436960;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x1c;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0xffffffff7fffffff;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x3ff00000;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0x3ff0000000000000;
  param_1[0x35] = 0x3ff0000000000000;
  param_1[0x36] = 0x3ff0000000000000;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0xffffffff7fffffff;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0xffffffff7fffffff;
  param_1[0x3e] = 0xa3f800000;
  *(undefined2 *)(param_1 + 0x3f) = 0x101;
  return param_1;
}



// FUNCTION 1474e7c44 FUN_1474e7c44 body=167 status=ok
// SIG undefined FUN_1474e7c44(void)

undefined8 *
FUN_1474e7c44(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,int param_5,
             undefined8 *param_6)

{
  longlong lVar1;
  char *pcVar2;
  undefined8 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3ff00000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3ff00000;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3ff00000;
  param_1[10] = 0x3ff0000000000000;
  param_1[0xb] = 0;
  if (param_5 == 3) {
    FUN_1474e7cec(param_4,param_1,param_6,param_3,param_2);
  }
  else {
    puVar3 = param_1;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *param_6;
      param_6 = param_6 + 1;
      puVar3 = puVar3 + 1;
    }
    pcVar2 = param_4 + 0x10;
    if (*param_4 != '\0') {
      pcVar2 = param_4 + 0x8c;
    }
    FUN_14045df82(param_2,param_3,param_1,*(undefined4 *)pcVar2,param_5);
  }
  return param_1;
}



// FUNCTION 1474e7cec FUN_1474e7cec body=3360 status=ok
// SIG undefined FUN_1474e7cec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1474e7cec(char *param_1,double *param_2,double *param_3,longlong *param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  double *pdVar12;
  ulonglong uVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar21;
  undefined1 auVar20 [16];
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  double dVar26;
  undefined1 auVar25 [16];
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auStack_2f8 [32];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  double dStack_2a0;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  double local_278 [4];
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
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
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
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 1.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  auVar38 = _DAT_149934d80;
  dVar3 = (double)DAT_149934d80;
  dVar17 = DAT_149934d80._8_8_;
  *(undefined1 (*) [16])(param_2 + 8) = _DAT_149934d80;
  param_2[10] = 1.0;
  param_2[0xb] = 0.0;
  if (*param_1 == '\x01') {
    if (*(int *)(param_1 + 0x8c) == -1) goto LAB_1474e7dce;
    param_1 = param_1 + 0x20;
    uVar8 = FUN_1474fe94a(param_1,&local_2d8,param_4);
    dVar46 = local_298._0_8_;
    dVar47 = local_298._8_8_;
    dVar27 = local_288._0_8_;
    uVar40 = local_288._0_4_;
    uVar41 = local_288._4_4_;
    uVar42 = local_288._8_4_;
    uVar43 = local_288._12_4_;
    auVar25 = *(undefined1 (*) [16])(param_3 + 8);
    dVar14 = auVar25._0_8_;
    dVar21 = auVar25._8_8_;
    auVar29 = *(undefined1 (*) [16])(param_3 + 10);
    dVar18 = auVar29._0_8_;
    dVar22 = auVar29._8_8_;
    auVar25 = minpd(auVar25,local_298);
    auVar29 = minpd(auVar29,local_288);
    auVar28._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
    auVar28._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
    iVar9 = movmskpd(uVar8,auVar28);
    auVar30._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
    auVar30._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
    uVar10 = movmskpd((int)param_1,auVar30);
    if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
      dVar3 = *param_3;
      dVar17 = param_3[1];
      dVar31 = param_3[2];
      dVar19 = param_3[3];
      dVar23 = dVar17 * local_2c8 * -1.0 +
               dVar31 * dStack_2d0 + dVar19 * local_2d8 * 1.0 + dVar3 * dStack_2c0;
      dVar26 = dVar3 * local_2c8 * 1.0 +
               dVar19 * dStack_2d0 + dVar31 * local_2d8 * -1.0 + dVar17 * dStack_2c0;
      auVar38._0_8_ =
           dVar19 * local_2c8 * 1.0 +
           ((local_2d8 * dVar17 * 1.0 + dVar31 * dStack_2c0) - dVar3 * dStack_2d0);
      auVar38._8_8_ =
           dVar31 * local_2c8 * -1.0 +
           ((local_2d8 * dVar3 * -1.0 + dVar19 * dStack_2c0) - dVar17 * dStack_2d0);
      dVar46 = param_3[4] * dVar46;
      dVar47 = param_3[5] * dVar47;
      dVar27 = param_3[6] * dVar27;
      dVar19 = param_3[7] * local_288._8_8_;
      dVar3 = dVar47 * local_2d8 - dStack_2d0 * dVar46;
      dVar17 = dVar27 * dStack_2d0 - local_2c8 * dVar47;
      dVar31 = dVar46 * local_2c8 - local_2d8 * dVar27;
      dVar33 = dVar19 * dStack_2c0 - dStack_2c0 * dVar19;
      dVar17 = dVar17 + dVar17;
      dVar31 = dVar31 + dVar31;
      dVar3 = dVar3 + dVar3;
      dVar33 = dVar33 + dVar33;
      local_f8 = (dVar3 * dStack_2d0 - local_2c8 * dVar31) + dStack_2c0 * dVar17 + dVar46 +
                 local_2b8;
      dStack_f0 = (dVar17 * local_2c8 - dVar3 * local_2d8) + dStack_2c0 * dVar31 + dVar47 +
                  dStack_2b0;
      local_e8 = (dVar31 * local_2d8 - dStack_2d0 * dVar17) + dStack_2c0 * dVar3 + dVar27 +
                 (double)CONCAT44(uStack_2a4,local_2a8);
      dStack_2a0 = (dVar33 * dStack_2c0 - dVar33 * dStack_2c0) + dStack_2c0 * dVar33 + dVar19 +
                   dStack_2a0;
LAB_1474e884b:
      dVar46 = dVar14 * local_298._0_8_;
      dVar47 = dVar21 * local_298._8_8_;
      dVar19 = dVar18 * (double)CONCAT44(uVar41,uVar40);
      dVar22 = dVar22 * (double)CONCAT44(uVar43,uVar42);
      goto LAB_1474e82b5;
    }
    dVar31 = dStack_2d0 + dStack_2d0;
    dVar33 = local_2c8 + local_2c8;
    dVar45 = local_2d8 * (local_2d8 + local_2d8);
    local_188 = (1.0 - (dVar45 + dStack_2d0 * dVar31)) * dVar27;
    dVar36 = (local_2d8 + local_2d8) * dStack_2c0;
    local_198 = (dVar31 * dStack_2c0 + local_2d8 * dVar33) * dVar27;
    dVar19 = dVar27 * dVar18;
    dVar22 = local_288._8_8_ * dVar22;
    dStack_190 = (dVar33 * dStack_2d0 - dVar36) * dVar27;
    local_1d8 = (dVar3 - (local_2c8 * dVar33 + dStack_2d0 * dVar31)) * dVar46;
    dVar27 = (dVar17 - (local_2c8 * dVar33 + dVar45)) * dVar47;
    dStack_1d0 = (dVar31 * local_2d8 + dVar33 * dStack_2c0) * dVar46;
    local_1a8 = (dVar33 * dStack_2d0 + dVar36) * dVar47;
    local_1c8 = (local_2d8 * dVar33 - dVar31 * dStack_2c0) * dVar46;
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar27,0);
    local_1b8._0_8_ = (dVar31 * local_2d8 - dVar33 * dStack_2c0) * dVar47;
    local_1b8._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = local_2b8;
    dStack_170 = dStack_2b0;
    local_168 = (double)CONCAT44(uStack_2a4,local_2a8);
    uStack_160 = 0x3ff0000000000000;
    dVar33 = *param_3;
    dVar36 = param_3[1];
    dVar45 = param_3[2];
    dVar32 = dVar36 + dVar36;
    dVar34 = dVar45 + dVar45;
    dVar31 = dVar33 * (dVar33 + dVar33);
    local_208 = (1.0 - (dVar31 + dVar36 * dVar32)) * dVar18;
    dVar27 = param_3[3];
    dVar35 = dVar34 * dVar27;
    dVar37 = (dVar33 + dVar33) * param_3[3];
    dVar27 = dVar32 * dVar27;
    local_218 = (dVar27 + *param_3 * dVar34) * dVar18;
    local_238 = (dVar32 * dVar33 - dVar35) * dVar21;
    dStack_210 = (dVar34 * dVar36 - dVar37) * dVar18;
    dVar46 = dVar46 * dVar14;
    dVar47 = dVar47 * dVar21;
    local_258 = (dVar3 - (dVar45 * dVar34 + dVar36 * dVar32)) * dVar14;
    dStack_230 = (dVar17 - (dVar45 * dVar34 + dVar31)) * dVar21;
    dStack_250 = (dVar32 * dVar33 + dVar35) * dVar14;
    local_228 = (dVar34 * dVar36 + dVar37) * dVar21;
    local_248 = (*param_3 * dVar34 - dVar27) * dVar14;
    uStack_240 = 0;
    uStack_220 = 0;
    uStack_200 = 0;
    local_1f8 = param_3[4];
    dStack_1f0 = param_3[5];
    local_1e8 = param_3[6];
    uStack_1e0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_158);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    auVar16._8_8_ = -(ulonglong)(0.0 <= dVar47);
    auVar16._0_8_ = -(ulonglong)(0.0 <= dVar46);
    auVar25 = blendvpd(_DAT_149936790,auVar38,auVar16);
    dVar3 = (double)(~-(ulonglong)(0.0 <= dVar19) & 0xbff0000000000000 |
                    -(ulonglong)(0.0 <= dVar19) & 0x3ff0000000000000);
    dVar17 = auVar25._0_8_;
    local_148 = local_148 * dVar17;
    local_150 = local_150 * dVar17;
    local_158 = local_158 * dVar17;
    dVar17 = auVar25._8_8_;
    local_128 = local_128 * dVar17;
    local_130 = local_130 * dVar17;
    local_138 = dVar17 * local_138;
    local_108 = local_108 * dVar3;
    local_110 = local_110 * dVar3;
    local_118 = dVar3 * local_118;
    pdVar12 = local_278;
  }
  else {
    if (((~*(uint *)(param_1 + 0xc) & 0x7fffffff) == 0) || ((int)*(uint *)(param_1 + 0xc) < 0)) {
LAB_1474e7dce:
      FUN_1449437a2(param_3,param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_2f8);
    }
    uVar10 = *(uint *)(param_1 + 0x10);
    uVar13 = (ulonglong)uVar10;
    if ((uVar13 == 0xffffffff) || (((int)uVar10 < 0 || ((int)param_4[1] <= (int)uVar10))))
    goto LAB_1474e7dce;
    if (*(char *)(param_4[3] + uVar13) == '\0') {
      FUN_1447d5d8e(param_4,uVar10,param_5);
    }
    lVar1 = *param_4;
    lVar11 = uVar13 * 0x60;
    pdVar12 = (double *)(lVar1 + lVar11);
    local_298 = *(undefined1 (*) [16])(lVar1 + 0x40 + lVar11);
    dVar46 = local_298._0_8_;
    dVar47 = local_298._8_8_;
    auVar25 = *(undefined1 (*) [16])(lVar1 + 0x50 + lVar11);
    dVar27 = auVar25._0_8_;
    uVar40 = auVar25._0_4_;
    uVar41 = auVar25._4_4_;
    uVar42 = auVar25._8_4_;
    uVar43 = auVar25._12_4_;
    auVar29 = *(undefined1 (*) [16])(param_3 + 8);
    dVar14 = auVar29._0_8_;
    dVar21 = auVar29._8_8_;
    auVar24 = *(undefined1 (*) [16])(param_3 + 10);
    dVar18 = auVar24._0_8_;
    dVar22 = auVar24._8_8_;
    auVar29 = minpd(auVar29,local_298);
    auVar28 = minpd(auVar24,auVar25);
    auVar24._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
    auVar24._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
    iVar9 = movmskpd((int)lVar1,auVar24);
    auVar29._8_8_ = -(ulonglong)(auVar28._8_8_ < 0.0);
    auVar29._0_8_ = -(ulonglong)(auVar28._0_8_ < 0.0);
    uVar10 = movmskpd((int)lVar11,auVar29);
    if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
      dVar45 = *param_3;
      dVar32 = param_3[1];
      dVar34 = param_3[2];
      dVar35 = param_3[3];
      dVar37 = *pdVar12;
      dVar44 = pdVar12[1];
      dVar6 = pdVar12[2];
      dVar7 = pdVar12[3];
      dVar17 = pdVar12[3];
      dVar3 = pdVar12[3];
      dVar19 = pdVar12[1];
      dVar31 = pdVar12[1];
      dVar36 = pdVar12[2];
      dVar33 = pdVar12[2];
      dVar23 = dVar32 * dVar36 * -1.0 + dVar34 * dVar19 + dVar35 * *pdVar12 * 1.0 + dVar45 * dVar17;
      dVar26 = dVar45 * dVar33 * 1.0 + dVar35 * dVar31 + dVar34 * *pdVar12 * -1.0 + dVar32 * dVar3;
      auVar38._0_8_ =
           dVar35 * dVar36 * 1.0 + ((*pdVar12 * dVar32 * 1.0 + dVar34 * dVar17) - dVar45 * dVar19);
      auVar38._8_8_ =
           dVar34 * dVar33 * -1.0 + ((*pdVar12 * dVar45 * -1.0 + dVar35 * dVar3) - dVar32 * dVar31);
      dVar46 = param_3[4] * dVar46;
      dVar47 = param_3[5] * dVar47;
      dVar27 = param_3[6] * dVar27;
      dVar36 = param_3[7] * auVar25._8_8_;
      dVar31 = dVar47 * dVar37 - dVar44 * dVar46;
      dVar19 = dVar27 * dVar44 - dVar6 * dVar47;
      dVar33 = dVar46 * dVar6 - dVar37 * dVar27;
      dVar45 = dVar36 * dVar7 - dVar7 * dVar36;
      dVar19 = dVar19 + dVar19;
      dVar33 = dVar33 + dVar33;
      dVar31 = dVar31 + dVar31;
      dVar45 = dVar45 + dVar45;
      local_f8 = (dVar31 * dVar44 - dVar6 * dVar33) + dVar17 * dVar19 + dVar46 + pdVar12[4];
      dStack_f0 = (dVar19 * dVar6 - dVar31 * dVar37) + dVar3 * dVar33 + dVar47 + pdVar12[5];
      local_e8 = (dVar33 * dVar37 - dVar44 * dVar19) + dVar17 * dVar31 + dVar27 + pdVar12[6];
      dStack_2a0 = (dVar45 * dVar7 - dVar45 * dVar7) + dVar3 * dVar45 + dVar36 + pdVar12[7];
      goto LAB_1474e884b;
    }
    dVar36 = *pdVar12;
    dVar45 = pdVar12[1];
    dVar33 = pdVar12[2];
    dVar32 = dVar45 + dVar45;
    dVar34 = dVar33 + dVar33;
    dVar44 = dVar36 * (dVar36 + dVar36);
    local_188 = (1.0 - (dVar44 + dVar45 * dVar32)) * dVar27;
    dVar31 = pdVar12[3];
    dVar35 = dVar34 * dVar31;
    dVar37 = (dVar36 + dVar36) * pdVar12[3];
    dVar31 = dVar32 * dVar31;
    local_198 = (dVar31 + *pdVar12 * dVar34) * dVar27;
    dVar19 = dVar27 * dVar18;
    dVar22 = auVar25._8_8_ * dVar22;
    local_1d8 = (dVar3 - (dVar33 * dVar34 + dVar45 * dVar32)) * dVar46;
    dVar33 = (dVar17 - (dVar33 * dVar34 + dVar44)) * dVar47;
    dStack_1d0 = (dVar32 * dVar36 + dVar35) * dVar46;
    local_1a8 = (dVar34 * dVar45 + dVar37) * dVar47;
    dStack_190 = (dVar34 * dVar45 - dVar37) * dVar27;
    local_1c8 = (*pdVar12 * dVar34 - dVar31) * dVar46;
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar33,0);
    local_1b8._0_8_ = (dVar32 * dVar36 - dVar35) * dVar47;
    local_1b8._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = pdVar12[4];
    dStack_170 = pdVar12[5];
    local_168 = pdVar12[6];
    uStack_160 = 0x3ff0000000000000;
    dVar33 = *param_3;
    dVar36 = param_3[1];
    dVar45 = param_3[2];
    dVar32 = dVar36 + dVar36;
    dVar34 = dVar45 + dVar45;
    dVar31 = dVar33 * (dVar33 + dVar33);
    local_208 = (1.0 - (dVar31 + dVar36 * dVar32)) * dVar18;
    dVar27 = param_3[3];
    dVar35 = dVar34 * dVar27;
    dVar37 = (dVar33 + dVar33) * param_3[3];
    dVar27 = dVar32 * dVar27;
    local_218 = (dVar27 + *param_3 * dVar34) * dVar18;
    local_238 = (dVar32 * dVar33 - dVar35) * dVar21;
    dStack_210 = (dVar34 * dVar36 - dVar37) * dVar18;
    dVar46 = dVar46 * dVar14;
    dVar47 = dVar47 * dVar21;
    local_258 = (dVar3 - (dVar45 * dVar34 + dVar36 * dVar32)) * dVar14;
    dStack_230 = (dVar17 - (dVar45 * dVar34 + dVar31)) * dVar21;
    dStack_250 = (dVar32 * dVar33 + dVar35) * dVar14;
    local_228 = (dVar34 * dVar36 + dVar37) * dVar21;
    local_248 = (*param_3 * dVar34 - dVar27) * dVar14;
    uStack_240 = 0;
    uStack_220 = 0;
    uStack_200 = 0;
    local_1f8 = param_3[4];
    dStack_1f0 = param_3[5];
    local_1e8 = param_3[6];
    uStack_1e0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_158);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    auVar25._8_8_ = -(ulonglong)(0.0 <= dVar47);
    auVar25._0_8_ = -(ulonglong)(0.0 <= dVar46);
    auVar25 = blendvpd(_DAT_149936790,auVar38,auVar25);
    dVar3 = (double)(~-(ulonglong)(0.0 <= dVar19) & 0xbff0000000000000 |
                    -(ulonglong)(0.0 <= dVar19) & 0x3ff0000000000000);
    dVar17 = auVar25._0_8_;
    local_148 = local_148 * dVar17;
    local_150 = local_150 * dVar17;
    local_158 = local_158 * dVar17;
    dVar17 = auVar25._8_8_;
    local_128 = local_128 * dVar17;
    local_130 = local_130 * dVar17;
    local_138 = dVar17 * local_138;
    local_108 = local_108 * dVar3;
    local_110 = local_110 * dVar3;
    local_118 = dVar3 * local_118;
    pdVar12 = &local_2d8;
  }
  FUN_14481fd10(pdVar12,&local_158);
  dVar3 = *pdVar12;
  dVar17 = pdVar12[1];
  dVar27 = pdVar12[2];
  dVar14 = pdVar12[3];
  dVar18 = dVar27 * dVar27 + dVar3 * dVar3;
  dVar21 = dVar14 * dVar14 + dVar17 * dVar17;
  auVar20._0_8_ = dVar18 + dVar21;
  auVar20._8_8_ = dVar18 + dVar21;
  auVar15._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar20._8_8_);
  auVar15._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar20._0_8_);
  auVar25 = sqrtpd(auVar20,auVar20);
  auVar38 = divpd(auVar38,auVar25);
  auVar39._0_8_ = auVar38._0_8_ * dVar27;
  auVar39._8_8_ = auVar38._8_8_ * dVar14;
  dVar23 = (double)((ulonglong)(dVar3 * auVar38._0_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar20._0_8_));
  dVar26 = (double)((ulonglong)(dVar17 * auVar38._8_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar20._8_8_));
  auVar38 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar39,auVar15);
  dStack_2a0 = 0.0;
LAB_1474e82b5:
  *param_2 = dVar23;
  param_2[1] = dVar26;
  *(undefined1 (*) [16])(param_2 + 2) = auVar38;
  auVar2._8_4_ = SUB84(dStack_f0,0);
  auVar2._0_8_ = local_f8;
  auVar2._12_4_ = (int)((ulonglong)dStack_f0 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 4) = auVar2;
  param_2[6] = local_e8;
  param_2[7] = dStack_2a0;
  auVar5._8_4_ = SUB84(dVar47,0);
  auVar5._0_8_ = dVar46;
  auVar5._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 8) = auVar5;
  auVar4._8_4_ = SUB84(dVar22,0);
  auVar4._0_8_ = dVar19;
  auVar4._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 10) = auVar4;
  if ((local_d0 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1474e8a0e FUN_1474e8a0e body=4728 status=ok
// SIG undefined FUN_1474e8a0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474e8a0e(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  double *pdVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  int *piVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  undefined4 *puVar28;
  double *pdVar29;
  int *piVar30;
  undefined4 *puVar31;
  longlong *plVar32;
  undefined1 (*pauVar33) [16];
  ulonglong uVar34;
  double dVar35;
  double dVar38;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar55;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar56 [16];
  double dVar57;
  double dVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auStack_398 [32];
  uint local_378;
  longlong local_370;
  longlong *local_368;
  longlong local_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  longlong local_2d8;
  undefined8 uStack_2d0;
  int *local_2c8;
  undefined8 uStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
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
  undefined1 local_1f8 [16];
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
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_398;
  local_368 = param_2 + 4;
  lVar26 = param_2[6];
  local_370 = param_1 + 0xe0;
  local_378 = (uint)*(byte *)(param_1 + 0x1f8);
  FUN_1474e7c44(&local_178,*param_2 + 0x10,local_368,param_1 + 0x140);
  local_348 = local_178;
  dStack_340 = uStack_170;
  local_358 = local_168;
  dStack_350 = dStack_160;
  local_2b8 = local_158;
  dStack_2b0 = dStack_150;
  local_2a8 = local_148;
  local_2c8 = (int *)0x0;
  uStack_2c0 = 0;
  uVar17 = *(uint *)(param_1 + 0x1e8);
  if ((int)uVar17 < 0) {
    iVar25 = -1;
    if ((((~uVar17 & 0x7fffffff) != 0) && (uVar17 = (int)(uVar17 * 2) >> 1, -1 < (int)uVar17)) &&
       ((int)uVar17 < *(int *)(lVar26 + 0x88))) {
      piVar20 = (int *)((ulonglong)uVar17 * 4 + *(longlong *)(lVar26 + 0x80));
      goto LAB_1474e8b33;
    }
  }
  else {
    piVar20 = (int *)(param_1 + 0x1ec);
LAB_1474e8b33:
    iVar25 = *piVar20;
  }
  uVar17 = *(uint *)(param_1 + 0x1d8);
  if ((int)uVar17 < 0) {
    iVar23 = -1;
    if ((((~uVar17 & 0x7fffffff) == 0) || (uVar17 = (int)(uVar17 * 2) >> 1, (int)uVar17 < 0)) ||
       (*(int *)(lVar26 + 0x88) <= (int)uVar17)) goto LAB_1474e8b4e;
    piVar20 = (int *)((ulonglong)uVar17 * 4 + *(longlong *)(lVar26 + 0x80));
  }
  else {
    piVar20 = (int *)(param_1 + 0x1dc);
  }
  iVar23 = *piVar20;
LAB_1474e8b4e:
  local_360 = param_1;
  do {
    uVar34 = uStack_2c0 & 0xffffffff;
    uVar17 = (uint)uStack_2c0 + 1;
    uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar17);
    if (uStack_2c0._4_4_ < uVar17) {
      FUN_1408f8cfa(&local_2c8,uVar34);
    }
    memmove(local_2c8 + 1,local_2c8,uVar34 << 2);
    *local_2c8 = iVar23;
    iVar23 = *(int *)(*(longlong *)(param_2[6] + 0x90) + (longlong)iVar23 * 4);
  } while (iVar23 != iVar25);
  uVar34 = uStack_2c0 & 0xffffffff;
  uVar17 = (uint)uStack_2c0 + 1;
  uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar17);
  if (uStack_2c0._4_4_ < uVar17) {
    FUN_1408f8cfa(&local_2c8,uVar34);
  }
  memmove(local_2c8 + 1,local_2c8,uVar34 << 2);
  uVar34 = uStack_2c0;
  *local_2c8 = iVar25;
  uVar17 = (uint)uStack_2c0;
  uVar19 = uStack_2c0 & 0xffffffff;
  lVar26 = param_3[1];
  *(uint *)(param_3 + 1) = (int)lVar26 + (uint)uStack_2c0;
  if ((uint)(*(int *)((longlong)param_3 + 0xc) - (int)lVar26) < (uint)uStack_2c0) {
    FUN_1400c28ea(param_3);
  }
  local_2d8 = 0;
  uStack_2d0 = 0;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar19);
  }
  if (uVar19 != 0) {
    FUN_1474ff534(&local_2d8,uVar34 & 0xffffffff);
  }
  piVar20 = local_2c8;
  iVar25 = *local_2c8;
  lVar26 = (longlong)iVar25;
  if (*(char *)(param_2[7] + lVar26) == '\0') {
    FUN_1447d5d8e(local_368);
    iVar25 = *piVar20;
  }
  uVar34 = uStack_2d0;
  lVar27 = *local_368;
  lVar26 = lVar26 * 0x60;
  puVar28 = (undefined4 *)(lVar27 + lVar26);
  puVar31 = (undefined4 *)((longlong)&uStack_170 + 4);
  for (lVar21 = 0x18; lVar21 != 0; lVar21 = lVar21 + -1) {
    *puVar31 = *puVar28;
    puVar28 = puVar28 + 1;
    puVar31 = puVar31 + 1;
  }
  piVar30 = (int *)*param_3;
  *piVar30 = iVar25;
  pdVar29 = &local_178;
  for (lVar21 = 0x1b; piVar30 = piVar30 + 1, lVar21 != 0; lVar21 = lVar21 + -1) {
    *piVar30 = *(int *)pdVar29;
    pdVar29 = (double *)((longlong)pdVar29 + 4);
  }
  puVar1 = (undefined8 *)(lVar27 + 0x20 + lVar26);
  uVar13 = *puVar1;
  uVar14 = puVar1[1];
  uVar4 = *(undefined8 *)(lVar27 + 0x30 + lVar26);
  iVar25 = *piVar20;
  lVar26 = (longlong)(int)uStack_2d0;
  uVar18 = (int)uStack_2d0 + 1;
  uStack_2d0 = CONCAT44(uStack_2d0._4_4_,uVar18);
  if (uStack_2d0._4_4_ < uVar18) {
    FUN_1474ff5a6(&local_2d8,uVar34 & 0xffffffff);
  }
  lVar26 = lVar26 * 0x50;
  *(undefined8 *)(local_2d8 + lVar26) = uVar13;
  ((undefined8 *)(local_2d8 + lVar26))[1] = uVar14;
  *(undefined8 *)(local_2d8 + 0x10 + lVar26) = uVar4;
  *(undefined8 *)(local_2d8 + 0x18 + lVar26) = 0;
  *(int *)(local_2d8 + 0x20 + lVar26) = iVar25;
  *(undefined4 *)(local_2d8 + 0x24 + lVar26) = 0;
  *(undefined8 *)(local_2d8 + 0x28 + lVar26) = 0xbff0000000000000;
  puVar1 = (undefined8 *)(local_2d8 + 0x30 + lVar26);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(local_2d8 + 0x40 + lVar26);
  *puVar1 = 0;
  puVar1[1] = 0;
  dVar49 = 0.0;
  if (1 < uVar17) {
    uVar34 = 1;
    lVar26 = 0;
    plVar32 = local_368;
    dVar49 = 0.0;
    do {
      piVar20 = local_2c8;
      iVar25 = local_2c8[uVar34];
      lVar27 = (longlong)iVar25;
      if (*(char *)(param_2[7] + lVar27) == '\0') {
        FUN_1447d5d8e(plVar32);
        iVar25 = piVar20[uVar34];
        plVar32 = local_368;
      }
      uVar15 = uStack_2d0;
      lVar21 = *plVar32;
      lVar27 = lVar27 * 0x60;
      pdVar29 = (double *)(lVar21 + 0x20 + lVar27);
      dVar50 = *pdVar29;
      dVar44 = pdVar29[1];
      dVar55 = *(double *)(lVar21 + 0x30 + lVar27);
      puVar28 = (undefined4 *)(lVar21 + lVar27);
      puVar31 = (undefined4 *)((longlong)&uStack_170 + 4);
      for (lVar22 = 0x18; lVar22 != 0; lVar22 = lVar22 + -1) {
        *puVar31 = *puVar28;
        puVar28 = puVar28 + 1;
        puVar31 = puVar31 + 1;
      }
      puVar28 = (undefined4 *)(*param_3 + 0x74 + lVar26);
      puVar28[-1] = iVar25;
      pdVar29 = &local_178;
      for (lVar27 = 0x1b; lVar27 != 0; lVar27 = lVar27 + -1) {
        *puVar28 = *(undefined4 *)pdVar29;
        pdVar29 = (double *)((longlong)pdVar29 + 4);
        puVar28 = puVar28 + 1;
      }
      pdVar29 = (double *)(*param_3 + 0x30 + lVar26);
      dVar35 = *pdVar29 - dVar50;
      dVar38 = pdVar29[1] - dVar44;
      dVar39 = *(double *)(*param_3 + 0x40 + lVar26) - dVar55;
      dVar35 = SQRT(dVar35 * dVar35 + dVar38 * dVar38 + dVar39 * dVar39);
      if (ABS(dVar35) <= 1e-08) {
        lVar27 = local_2d8 + (longlong)(int)uStack_2d0 * 0x50;
        iVar25 = *(int *)(lVar27 + -8);
        *(uint *)(lVar27 + -8) = iVar25 + 1U;
        if (*(uint *)(lVar27 + -4) < iVar25 + 1U) {
          FUN_1446f48e2((longlong *)(lVar27 + -0x10),iVar25);
          plVar32 = local_368;
        }
        *(int *)(*(longlong *)(lVar27 + -0x10) + (longlong)iVar25 * 4) = (int)uVar34;
      }
      else {
        iVar25 = piVar20[uVar34];
        lVar27 = (longlong)(int)uStack_2d0;
        uVar17 = (int)uStack_2d0 + 1;
        uStack_2d0 = CONCAT44(uStack_2d0._4_4_,uVar17);
        if (uStack_2d0._4_4_ < uVar17) {
          FUN_1474ff5a6(&local_2d8,uVar15 & 0xffffffff);
          plVar32 = local_368;
        }
        lVar27 = lVar27 * 0x50;
        *(double *)(local_2d8 + lVar27) = dVar50;
        ((double *)(local_2d8 + lVar27))[1] = dVar44;
        *(double *)(local_2d8 + 0x10 + lVar27) = dVar55;
        *(double *)(local_2d8 + 0x18 + lVar27) = dVar35;
        *(int *)(local_2d8 + 0x20 + lVar27) = iVar25;
        *(int *)(local_2d8 + 0x24 + lVar27) = (int)uVar34;
        *(undefined8 *)(local_2d8 + 0x28 + lVar27) = 0xbff0000000000000;
        dVar49 = dVar49 + dVar35;
        puVar1 = (undefined8 *)(local_2d8 + 0x30 + lVar27);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(local_2d8 + 0x40 + lVar27);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      uVar34 = uVar34 + 1;
      lVar26 = lVar26 + 0x70;
    } while (uVar19 != uVar34);
  }
  uVar34 = uStack_2d0;
  iVar25 = (int)uStack_2d0;
  local_378 = *(undefined4 *)(local_360 + 500);
  bVar16 = FUN_14690ead1(&local_2d8,&local_2b8,dVar49,(double)*(float *)(local_360 + 0x1f0));
  if ((0 < iVar25 & bVar16) == 1) {
    uVar19 = 0;
    do {
      lVar21 = uVar19 * 0x50;
      lVar26 = *param_3;
      lVar27 = (longlong)*(int *)(local_2d8 + 0x24 + lVar21) * 0x70;
      uVar4 = *(undefined8 *)(local_2d8 + 0x10 + lVar21);
      *(undefined1 (*) [16])(lVar26 + 0x30 + lVar27) = *(undefined1 (*) [16])(local_2d8 + lVar21);
      puVar1 = (undefined8 *)(lVar26 + 0x40 + lVar27);
      *puVar1 = uVar4;
      puVar1[1] = 0;
      lVar26 = (longlong)*(int *)(local_2d8 + 0x48 + lVar21);
      if (0 < lVar26) {
        pauVar33 = (undefined1 (*) [16])(local_2d8 + lVar21);
        lVar27 = 0;
        do {
          lVar21 = *param_3;
          lVar22 = (longlong)*(int *)(*(longlong *)pauVar33[4] + lVar27 * 4) * 0x70;
          uVar4 = *(undefined8 *)pauVar33[1];
          *(undefined1 (*) [16])(lVar21 + 0x30 + lVar22) = *pauVar33;
          puVar1 = (undefined8 *)(lVar21 + 0x40 + lVar22);
          *puVar1 = uVar4;
          puVar1[1] = 0;
          lVar27 = lVar27 + 1;
        } while (lVar26 != lVar27);
      }
      auVar5 = _DAT_149935300;
      auVar41 = _DAT_149934d80;
      uVar19 = uVar19 + 1;
    } while (uVar19 != (uVar34 & 0xffffffff));
    if (1 < iVar25) {
      uVar34 = 0;
      do {
        lVar26 = local_2d8;
        lVar21 = uVar34 * 0x50;
        iVar23 = *(int *)(local_2d8 + 0x70 + lVar21);
        lVar27 = param_2[7];
        if (*(char *)(lVar27 + iVar23) == '\0') {
          FUN_1447d5d8e(local_368,iVar23);
          lVar27 = param_2[7];
        }
        pdVar29 = (double *)(lVar26 + lVar21);
        lVar22 = *local_368;
        lVar24 = (longlong)iVar23 * 0x60;
        pdVar2 = (double *)(lVar22 + 0x20 + lVar24);
        dVar49 = *pdVar2;
        dVar55 = pdVar2[1];
        dVar50 = *(double *)(lVar22 + 0x30 + lVar24);
        iVar23 = *(int *)(pdVar29 + 4);
        if (*(char *)(lVar27 + iVar23) == '\0') {
          FUN_1447d5d8e(local_368,iVar23);
          lVar22 = *local_368;
        }
        lVar26 = lVar26 + lVar21;
        lVar27 = (longlong)iVar23 * 0x60;
        dVar50 = dVar50 - *(double *)(lVar22 + 0x30 + lVar27);
        pdVar2 = (double *)(lVar22 + 0x20 + lVar27);
        dVar49 = dVar49 - *pdVar2;
        dVar55 = dVar55 - pdVar2[1];
        dVar35 = 1.0 / SQRT(dVar50 * dVar50 + dVar49 * dVar49 + dVar55 * dVar55);
        dVar50 = dVar50 * dVar35;
        dVar55 = dVar55 * dVar35;
        dVar38 = *(double *)(lVar26 + 0x60) - pdVar29[2];
        dVar39 = *(double *)(lVar26 + 0x58) - pdVar29[1];
        dVar44 = *(double *)(lVar26 + 0x50) - *pdVar29;
        dVar35 = dVar35 * dVar49;
        dVar43 = 1.0 / SQRT(dVar38 * dVar38 + dVar44 * dVar44 + dVar39 * dVar39);
        dVar38 = dVar38 * dVar43;
        dVar39 = dVar39 * dVar43;
        dVar43 = dVar43 * dVar44;
        dVar44 = dVar35 * dVar39 - dVar43 * dVar55;
        dVar49 = dVar50 * dVar43 - dVar38 * dVar35;
        dVar57 = dVar55 * dVar38 - dVar39 * dVar50;
        dVar45 = dVar44 * dVar44 + dVar57 * dVar57 + dVar49 * dVar49;
        if (((dVar45 != 1.0) || (dVar58 = dVar57, dVar8 = dVar44, dVar7 = dVar49, NAN(dVar45))) &&
           (dVar58 = DAT_14c8464e0, dVar8 = DAT_14c8464f0, dVar7 = DAT_14c8464e8,
           9.99999993922529e-09 <= dVar45)) {
          dVar45 = 1.0 / SQRT(dVar45);
          dVar58 = dVar57 * dVar45;
          dVar8 = dVar44 * dVar45;
          dVar7 = dVar49 * dVar45;
        }
        dVar55 = dVar50 * dVar38 + dVar35 * dVar43 + dVar55 * dVar39;
        dVar49 = dVar55;
        if (1.0 <= dVar55) {
          dVar49 = 1.0;
        }
        dVar49 = acos((double)(-(ulonglong)(dVar55 < -1.0) & 0xbff0000000000000 |
                              ~-(ulonglong)(dVar55 < -1.0) & (ulonglong)dVar49));
        dVar55 = sin(dVar49 * 0.5);
        dVar35 = cos(dVar49 * 0.5);
        dVar58 = dVar58 * dVar55;
        dVar7 = dVar7 * dVar55;
        dVar8 = dVar8 * dVar55;
        lVar26 = *param_3;
        lVar27 = (longlong)*(int *)((longlong)pdVar29 + 0x24) * 0x70;
        pdVar2 = (double *)(lVar26 + 0x10 + lVar27);
        dVar49 = *pdVar2;
        dVar55 = pdVar2[1];
        pdVar2 = (double *)(lVar26 + 0x20 + lVar27);
        dVar50 = *pdVar2;
        dVar44 = pdVar2[1];
        dVar38 = dVar55 * dVar8 * -1.0 + dVar50 * dVar7 + dVar58 * dVar44 * 1.0 + dVar35 * dVar49;
        dVar39 = dVar49 * dVar8 * 1.0 + dVar44 * dVar7 + dVar58 * dVar50 * -1.0 + dVar35 * dVar55;
        dVar43 = dVar44 * dVar8 * 1.0 + ((dVar58 * dVar55 * 1.0 + dVar35 * dVar50) - dVar49 * dVar7)
        ;
        dVar49 = dVar50 * dVar8 * -1.0 +
                 ((dVar58 * dVar49 * -1.0 + dVar35 * dVar44) - dVar55 * dVar7);
        dVar55 = dVar43 * dVar43 + dVar38 * dVar38;
        dVar50 = dVar49 * dVar49 + dVar39 * dVar39;
        auVar60._0_8_ = dVar55 + dVar50;
        auVar60._8_8_ = dVar55 + dVar50;
        auVar51._8_8_ = -(ulonglong)(1e-08 <= auVar60._8_8_);
        auVar51._0_8_ = -(ulonglong)(1e-08 <= auVar60._0_8_);
        auVar53 = sqrtpd(auVar60,auVar60);
        auVar53 = divpd(auVar41,auVar53);
        auVar59._0_8_ = auVar53._0_8_ * dVar43;
        auVar59._8_8_ = auVar53._8_8_ * dVar49;
        auVar51 = blendvpd(auVar5,auVar59,auVar51);
        puVar3 = (ulonglong *)(lVar26 + 0x10 + lVar27);
        *puVar3 = (ulonglong)(dVar38 * auVar53._0_8_) & -(ulonglong)(1e-08 <= auVar60._0_8_);
        puVar3[1] = (ulonglong)(dVar39 * auVar53._8_8_) & -(ulonglong)(1e-08 <= auVar60._8_8_);
        *(undefined1 (*) [16])(lVar26 + 0x20 + lVar27) = auVar51;
        iVar23 = *(int *)(pdVar29 + 9);
        if (0 < (longlong)iVar23) {
          lVar26 = 0;
          do {
            lVar27 = *param_3;
            lVar21 = (longlong)*(int *)((longlong)pdVar29[8] + lVar26 * 4) * 0x70;
            pdVar2 = (double *)(lVar27 + 0x10 + lVar21);
            dVar49 = *pdVar2;
            dVar55 = pdVar2[1];
            pdVar2 = (double *)(lVar27 + 0x20 + lVar21);
            dVar50 = *pdVar2;
            dVar44 = pdVar2[1];
            dVar38 = dVar55 * dVar8 * -1.0 +
                     dVar58 * dVar44 * 1.0 + dVar35 * dVar49 + dVar7 * dVar50;
            dVar39 = dVar49 * dVar8 * 1.0 +
                     dVar58 * dVar50 * -1.0 + dVar35 * dVar55 + dVar7 * dVar44;
            dVar43 = dVar44 * dVar8 * 1.0 +
                     ((dVar58 * dVar55 * 1.0 + dVar35 * dVar50) - dVar7 * dVar49);
            dVar49 = dVar50 * dVar8 * -1.0 +
                     ((dVar58 * dVar49 * -1.0 + dVar35 * dVar44) - dVar7 * dVar55);
            dVar55 = dVar43 * dVar43 + dVar38 * dVar38;
            dVar50 = dVar49 * dVar49 + dVar39 * dVar39;
            auVar54._0_8_ = dVar55 + dVar50;
            auVar54._8_8_ = dVar55 + dVar50;
            auVar53._8_8_ = -(ulonglong)(1e-08 <= auVar54._8_8_);
            auVar53._0_8_ = -(ulonglong)(1e-08 <= auVar54._0_8_);
            auVar51 = sqrtpd(auVar54,auVar54);
            auVar60 = divpd(auVar41,auVar51);
            auVar61._0_8_ = auVar60._0_8_ * dVar43;
            auVar61._8_8_ = auVar60._8_8_ * dVar49;
            auVar51 = blendvpd(auVar5,auVar61,auVar53);
            puVar3 = (ulonglong *)(lVar27 + 0x10 + lVar21);
            *puVar3 = (ulonglong)(dVar38 * auVar60._0_8_) & -(ulonglong)(1e-08 <= auVar54._0_8_);
            puVar3[1] = (ulonglong)(dVar39 * auVar60._8_8_) & -(ulonglong)(1e-08 <= auVar54._8_8_);
            *(undefined1 (*) [16])(lVar27 + 0x20 + lVar21) = auVar51;
            lVar26 = lVar26 + 1;
          } while (iVar23 != lVar26);
        }
        uVar34 = uVar34 + 1;
      } while (uVar34 != iVar25 - 1);
    }
  }
  lVar26 = (longlong)(int)param_3[1];
  if (*(char *)(local_360 + 0x1f9) == '\x02') {
    lVar27 = *param_3;
    lVar26 = (longlong)(int)(lVar26 + -1) * 0x70;
    pdVar29 = (double *)(lVar27 + 0x10 + lVar26);
    *pdVar29 = local_348;
    pdVar29[1] = dStack_340;
    pdVar29 = (double *)(lVar27 + 0x20 + lVar26);
    *pdVar29 = local_358;
    pdVar29[1] = dStack_350;
  }
  else if (*(char *)(local_360 + 0x1f9) == '\x01') {
    iVar25 = local_2c8[lVar26 + -1];
    FUN_144ade54e(local_368,&local_338);
    auVar51 = _DAT_149934d80;
    lVar21 = *param_3;
    lVar22 = lVar26 * 0x70;
    lVar27 = lVar21 + lVar22;
    auVar41 = *(undefined1 (*) [16])(lVar21 + -0x90 + lVar22);
    dVar49 = auVar41._0_8_;
    dVar35 = auVar41._8_8_;
    auVar5 = *(undefined1 (*) [16])(lVar21 + -0x80 + lVar22);
    dVar55 = auVar5._0_8_;
    dVar50 = local_2f8._0_8_;
    dVar38 = local_2f8._8_8_;
    dVar44 = local_2e8._0_8_;
    auVar41 = minpd(local_2f8,auVar41);
    auVar60 = minpd(local_2e8,auVar5);
    auVar42._8_8_ = -(ulonglong)(auVar41._8_8_ < 0.0);
    auVar42._0_8_ = -(ulonglong)(auVar41._0_8_ < 0.0);
    iVar23 = movmskpd((int)lVar22,auVar42);
    auVar41._8_8_ = -(ulonglong)(auVar60._8_8_ < 0.0);
    auVar41._0_8_ = -(ulonglong)(auVar60._0_8_ < 0.0);
    uVar17 = movmskpd(iVar25,auVar41);
    if ((uVar17 & 0x3fffffff) == 0 && iVar23 == 0) {
      dVar9 = *(double *)(lVar27 + -0xd0);
      dVar10 = *(double *)(lVar27 + -200);
      dVar11 = *(double *)(lVar27 + -0xc0);
      dVar12 = *(double *)(lVar27 + -0xb8);
      dVar45 = *(double *)(lVar27 + -0xb8);
      dVar57 = *(double *)(lVar27 + -0xb8);
      dVar7 = *(double *)(lVar27 + -0xd0);
      dVar8 = *(double *)(lVar27 + -0xd0);
      dVar58 = *(double *)(lVar27 + -200);
      dVar46 = *(double *)(lVar27 + -200);
      dVar47 = *(double *)(lVar27 + -0xc0);
      dVar48 = *(double *)(lVar27 + -0xc0);
      dVar39 = dStack_330 * dVar47 * -1.0 +
               local_328 * dVar58 + dStack_320 * dVar7 * 1.0 + local_338 * dVar45;
      dVar43 = local_338 * dVar48 * 1.0 +
               dStack_320 * dVar46 + local_328 * dVar8 * -1.0 + dStack_330 * dVar57;
      auVar52._0_8_ =
           dStack_320 * dVar47 * 1.0 +
           ((dVar7 * dStack_330 * 1.0 + local_328 * dVar45) - local_338 * dVar58);
      auVar52._8_8_ =
           local_328 * dVar48 * -1.0 +
           ((dVar8 * local_338 * -1.0 + dStack_320 * dVar57) - dStack_330 * dVar46);
      local_318 = local_318 * dVar49;
      dStack_310 = dStack_310 * dVar35;
      local_308 = local_308 * dVar55;
      dStack_300 = dStack_300 * auVar5._8_8_;
      dVar7 = dStack_310 * dVar9 - dVar10 * local_318;
      dVar8 = local_308 * dVar10 - dVar11 * dStack_310;
      dVar58 = local_318 * dVar11 - dVar9 * local_308;
      dVar46 = dStack_300 * dVar12 - dVar12 * dStack_300;
      dVar8 = dVar8 + dVar8;
      dVar58 = dVar58 + dVar58;
      dVar7 = dVar7 + dVar7;
      dVar46 = dVar46 + dVar46;
      local_118 = (dVar7 * dVar10 - dVar11 * dVar58) + dVar45 * dVar8 + local_318 +
                  *(double *)(lVar27 + -0xb0);
      dStack_110 = (dVar8 * dVar11 - dVar7 * dVar9) + dVar57 * dVar58 + dStack_310 +
                   *(double *)(lVar27 + -0xa8);
      local_108 = (dVar58 * dVar9 - dVar10 * dVar8) + dVar45 * dVar7 + local_308 +
                  *(double *)(lVar27 + -0xa0);
      dVar45 = (dVar46 * dVar12 - dVar46 * dVar12) + dVar57 * dVar46 + dStack_300 +
               *(double *)(lVar27 + -0x98);
    }
    else {
      dVar57 = *(double *)(lVar27 + -0xd0);
      dVar7 = *(double *)(lVar27 + -200);
      dVar8 = *(double *)(lVar27 + -0xc0);
      dVar58 = dVar7 + dVar7;
      dVar46 = dVar8 + dVar8;
      dVar43 = dVar57 * (dVar57 + dVar57);
      local_1a8 = (1.0 - (dVar43 + dVar7 * dVar58)) * dVar55;
      dVar45 = *(double *)(lVar27 + -0xd0) * dVar46;
      dVar39 = *(double *)(lVar27 + -0xb8);
      dVar47 = dVar46 * dVar39;
      dVar48 = (dVar57 + dVar57) * *(double *)(lVar27 + -0xb8);
      dVar39 = dVar58 * dVar39;
      local_1b8 = (dVar39 + dVar45) * dVar55;
      dStack_1d0 = (DAT_149934d80._8_8_ - (dVar8 * dVar46 + dVar43)) * dVar35;
      dVar43 = (dVar58 * dVar57 + dVar47) * dVar49;
      local_1c8 = (dVar46 * dVar7 + dVar48) * dVar35;
      local_1d8 = (dVar58 * dVar57 - dVar47) * dVar35;
      dStack_1b0 = (dVar46 * dVar7 - dVar48) * dVar55;
      local_1e8 = (dVar45 - dVar39) * dVar49;
      local_1f8._8_4_ = SUB84(dVar43,0);
      local_1f8._0_8_ = ((double)DAT_149934d80 - (dVar8 * dVar46 + dVar7 * dVar58)) * dVar49;
      local_1f8._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
      uStack_1e0 = 0;
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      local_198 = *(undefined8 *)(lVar27 + -0xb0);
      uStack_190 = *(undefined8 *)(lVar27 + -0xa8);
      local_188 = *(undefined8 *)(lVar27 + -0xa0);
      uStack_180 = 0x3ff0000000000000;
      dVar43 = dStack_330 + dStack_330;
      dVar45 = local_328 + local_328;
      dVar39 = local_338 * (local_338 + local_338);
      local_228 = (1.0 - (dVar39 + dStack_330 * dVar43)) * dVar44;
      dVar57 = (local_338 + local_338) * dStack_320;
      local_238 = (dVar43 * dStack_320 + local_338 * dVar45) * dVar44;
      dStack_230 = (dVar45 * dStack_330 - dVar57) * dVar44;
      local_278 = ((double)DAT_149934d80 - (local_328 * dVar45 + dStack_330 * dVar43)) * dVar50;
      dVar39 = (DAT_149934d80._8_8_ - (local_328 * dVar45 + dVar39)) * dVar38;
      dStack_270 = (dVar43 * local_338 + dVar45 * dStack_320) * dVar50;
      local_248 = (dVar45 * dStack_330 + dVar57) * dVar38;
      local_268 = (local_338 * dVar45 - dVar43 * dStack_320) * dVar50;
      uStack_260 = 0;
      local_258._8_4_ = SUB84(dVar39,0);
      local_258._0_8_ = (dVar43 * local_338 - dVar45 * dStack_320) * dVar38;
      local_258._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
      uStack_240 = 0;
      uStack_220 = 0;
      local_218 = local_318;
      dStack_210 = dStack_310;
      local_208 = local_308;
      uStack_200 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_178);
      FUN_144a1c686(&local_178,0x3e45798ee0000000);
      auVar36._8_8_ = -(ulonglong)(0.0 <= dVar35 * dVar38);
      auVar36._0_8_ = -(ulonglong)(0.0 <= dVar49 * dVar50);
      auVar41 = blendvpd(_DAT_149936790,auVar51,auVar36);
      uVar34 = -(ulonglong)(0.0 <= dVar55 * dVar44);
      dVar39 = (double)(~uVar34 & 0xbff0000000000000 | uVar34 & 0x3ff0000000000000);
      dVar43 = auVar41._0_8_;
      local_168 = local_168 * dVar43;
      uStack_170 = uStack_170 * dVar43;
      local_178 = local_178 * dVar43;
      dVar43 = auVar41._8_8_;
      local_148 = local_148 * dVar43;
      dStack_150 = dStack_150 * dVar43;
      local_158 = dVar43 * local_158;
      local_128 = local_128 * dVar39;
      local_130 = local_130 * dVar39;
      local_138 = dVar39 * local_138;
      FUN_14481fd10(&local_298,&local_178);
      dVar39 = local_288 * local_288 + local_298 * local_298;
      dVar43 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
      auVar40._0_8_ = dVar39 + dVar43;
      auVar40._8_8_ = dVar39 + dVar43;
      auVar37._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar40._8_8_);
      auVar37._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar40._0_8_);
      auVar41 = sqrtpd(auVar40,auVar40);
      auVar41 = divpd(auVar51,auVar41);
      auVar56._0_8_ = auVar41._0_8_ * local_288;
      auVar56._8_8_ = auVar41._8_8_ * dStack_280;
      dVar39 = (double)((ulonglong)(local_298 * auVar41._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar40._0_8_));
      dVar43 = (double)((ulonglong)(dStack_290 * auVar41._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar40._8_8_));
      auVar52 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar56,auVar37);
      dVar45 = 0.0;
      lVar21 = *param_3;
    }
    lVar26 = (lVar26 + -1) * 0x70;
    pdVar29 = (double *)(lVar21 + 0x10 + lVar26);
    *pdVar29 = dVar39;
    pdVar29[1] = dVar43;
    *(undefined1 (*) [16])(lVar21 + 0x20 + lVar26) = auVar52;
    auVar6._8_4_ = SUB84(dStack_110,0);
    auVar6._0_8_ = local_118;
    auVar6._12_4_ = (int)((ulonglong)dStack_110 >> 0x20);
    *(undefined1 (*) [16])(lVar21 + 0x30 + lVar26) = auVar6;
    pdVar29 = (double *)(lVar21 + 0x40 + lVar26);
    *pdVar29 = local_108;
    pdVar29[1] = dVar45;
    pdVar29 = (double *)(lVar21 + 0x50 + lVar26);
    *pdVar29 = dVar50 * dVar49;
    pdVar29[1] = dVar38 * dVar35;
    pdVar29 = (double *)(lVar21 + 0x60 + lVar26);
    *pdVar29 = dVar44 * dVar55;
    pdVar29[1] = local_2e8._8_8_ * auVar5._8_8_;
  }
  FUN_145af3853(local_2d8,uStack_2d0 & 0xffffffff);
  if (local_2d8 != 0) {
    FUN_1400020a8();
  }
  if (local_2c8 != (int *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474e9d10 FUN_1474e9d10 body=63 status=ok
// SIG undefined FUN_1474e9d10(void)

void FUN_1474e9d10(longlong param_1,undefined8 param_2)

{
  FUN_14019c9f2(param_1 + 0x1d0);
  FUN_14019c9f2(param_1 + 0x1e0,param_2);
  FUN_14019c9a8(param_1 + 0x140,param_2);
  return;
}



// FUNCTION 1474e9d50 FUN_1474e9d50 body=198 status=ok
// SIG undefined FUN_1474e9d50(void)

void FUN_1474e9d50(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1474e9e18(param_2,&local_40);
  _Src = local_40;
  local_50 = (void *)0x0;
  local_48 = local_38;
  if ((longlong)local_38 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_38,0);
    memcpy(local_50,_Src,(longlong)local_38 * 2);
  }
  FUN_147906d4c(param_2,&local_50,0);
  FUN_147906d38(param_1 + 0x18,param_2);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474e9e18 FUN_1474e9e18 body=256 status=ok
// SIG undefined FUN_1474e9e18(void)

undefined8 FUN_1474e9e18(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14caab1d0 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caab1d0 = FUN_140002ddd(FUN_146333521,uVar2,L"AnimNode_Fabrik");
  }
  local_48 = *(undefined8 *)(DAT_14caab1d0 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1474e9f1a FUN_1474e9f1a body=77 status=ok
// SIG undefined FUN_1474e9f1a(void)

void FUN_1474e9f1a(longlong param_1,undefined8 *param_2)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  FUN_140320438(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x93) = 0;
  if (*(char *)(param_1 + 0x140) == '\x01') {
    FUN_1433eddd8(param_1 + 0x160,*param_2);
    return;
  }
  return;
}



// FUNCTION 1474e9f68 FUN_1474e9f68 body=552 status=ok
// SIG undefined FUN_1474e9f68(void)

void FUN_1474e9f68(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined2 *local_78;
  int local_70;
  longlong local_68;
  int local_60;
  void *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = param_2;
  FUN_1474ea192(param_2,&local_58);
  thunk_FUN_14047a987(&local_58,&DAT_149eb775e,1);
  FUN_1474dc4fe(param_1,&local_58);
  FUN_140002266(&local_68,L" HandFKWeight: %f)",(double)*(float *)(param_1 + 0x140));
  iVar1 = local_60 + -1;
  if (local_60 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_58,local_68,iVar1);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (0 < *(int *)(param_1 + 0x120)) {
    lVar3 = 0;
    lVar5 = 0;
    do {
      FUN_1400021e4(*(longlong *)(param_1 + 0x118) + lVar3,&local_78);
      puVar4 = &DAT_149dfb77a;
      if (local_70 != 0) {
        puVar4 = local_78;
      }
      FUN_140002266(&local_68,L", %s)",puVar4);
      iVar1 = local_60 + -1;
      if (local_60 == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(&local_58,local_68,iVar1);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar5 = lVar5 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar5 < *(int *)(param_1 + 0x120));
  }
  FUN_140002266(&local_68,&DAT_149e06144);
  iVar1 = local_60 + -1;
  if (local_60 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_58,local_68,iVar1);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  _Src = local_58;
  local_88 = (void *)0x0;
  local_80 = local_50;
  if ((longlong)local_50 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_50,0);
    memcpy(local_88,_Src,(longlong)local_50 * 2);
  }
  uVar2 = local_90;
  FUN_147906d4c(local_90,&local_88,0);
  FUN_147906d38(param_1 + 0x18,uVar2);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474ea192 FUN_1474ea192 body=256 status=ok
// SIG undefined FUN_1474ea192(void)

undefined8 FUN_1474ea192(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14caab1e8 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caab1e8 = FUN_140002ddd(FUN_1463335b7,uVar2,L"AnimNode_HandIKRetargeting");
  }
  local_48 = *(undefined8 *)(DAT_14caab1e8 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1474ea294 FUN_1474ea294 body=2016 status=ok
// SIG undefined FUN_1474ea294(void)

void FUN_1474ea294(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  double *pdVar3;
  undefined8 *puVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  int *piVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int *piVar24;
  int iVar25;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_ec;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_120 = param_2;
  if (((ABS(*(double *)(param_1 + 0x128)) <= 9.999999747378752e-05) &&
      (ABS(*(double *)(param_1 + 0x130)) <= 9.999999747378752e-05)) &&
     (ABS(*(double *)(param_1 + 0x138)) <= 9.999999747378752e-05)) goto LAB_1474ea638;
  plVar1 = (longlong *)(param_2 + 0x20);
  local_128 = *(longlong *)(param_2 + 0x30);
  if (0.99999 <= *(float *)(param_1 + 0x140)) {
    uVar16 = *(uint *)(param_1 + 0xe0);
    if ((int)uVar16 < 0) {
      iVar22 = -1;
      if ((((~uVar16 & 0x7fffffff) != 0) && (uVar16 = (int)(uVar16 * 2) >> 1, -1 < (int)uVar16)) &&
         ((int)uVar16 < *(int *)(local_128 + 0x88))) {
        piVar24 = (int *)((ulonglong)uVar16 * 4 + *(longlong *)(local_128 + 0x80));
        goto LAB_1474ea557;
      }
    }
    else {
      piVar24 = (int *)(param_1 + 0xe4);
LAB_1474ea557:
      iVar22 = *piVar24;
    }
    uVar16 = *(uint *)(param_1 + 0x100);
    if ((int)uVar16 < 0) {
LAB_1474ea882:
      iVar21 = -1;
      if ((((~uVar16 & 0x7fffffff) != 0) && (uVar16 = (int)(uVar16 * 2) >> 1, -1 < (int)uVar16)) &&
         ((int)uVar16 < *(int *)(local_128 + 0x88))) {
        piVar24 = (int *)((ulonglong)uVar16 * 4 + *(longlong *)(local_128 + 0x80));
        goto LAB_1474ea56f;
      }
    }
    else {
      piVar24 = (int *)(param_1 + 0x104);
LAB_1474ea56f:
      iVar21 = *piVar24;
    }
    lVar17 = *(longlong *)(param_2 + 0x38);
    if (*(char *)(lVar17 + iVar22) == '\0') {
      FUN_1447d5d8e(plVar1);
      lVar17 = *(longlong *)(local_120 + 0x38);
    }
    lVar26 = *plVar1;
    lVar20 = (longlong)iVar22 * 0x60;
    pdVar3 = (double *)(lVar26 + 0x20 + lVar20);
    dVar6 = *pdVar3;
    dVar28 = pdVar3[1];
    dVar8 = *(double *)(lVar26 + 0x30 + lVar20);
    if (*(char *)(lVar17 + iVar21) == '\0') {
      FUN_1447d5d8e(plVar1,iVar21);
      lVar26 = *plVar1;
    }
    lVar17 = (longlong)iVar21 * 0x60;
    pdVar3 = (double *)(lVar26 + 0x20 + lVar17);
    dVar10 = *pdVar3;
    dVar27 = pdVar3[1];
    dVar5 = *(double *)(lVar26 + 0x30 + lVar17);
  }
  else {
    if (*(float *)(param_1 + 0x140) <= 1e-05) {
      uVar16 = *(uint *)(param_1 + 0xf0);
      if ((int)uVar16 < 0) {
        iVar22 = -1;
        if ((((~uVar16 & 0x7fffffff) != 0) && (uVar16 = (int)(uVar16 * 2) >> 1, -1 < (int)uVar16))
           && ((int)uVar16 < *(int *)(local_128 + 0x88))) {
          piVar24 = (int *)((ulonglong)uVar16 * 4 + *(longlong *)(local_128 + 0x80));
          goto LAB_1474ea832;
        }
      }
      else {
        piVar24 = (int *)(param_1 + 0xf4);
LAB_1474ea832:
        iVar22 = *piVar24;
      }
      uVar16 = *(uint *)(param_1 + 0x110);
      if ((int)uVar16 < 0) goto LAB_1474ea882;
      piVar24 = (int *)(param_1 + 0x114);
      goto LAB_1474ea56f;
    }
    uVar16 = *(uint *)(param_1 + 0xe0);
    if ((int)uVar16 < 0) {
      iVar22 = -1;
      if ((((~uVar16 & 0x7fffffff) != 0) && (uVar16 = (int)(uVar16 * 2) >> 1, -1 < (int)uVar16)) &&
         ((int)uVar16 < *(int *)(local_128 + 0x88))) {
        piVar24 = (int *)((ulonglong)uVar16 * 4 + *(longlong *)(local_128 + 0x80));
        goto LAB_1474ea3a2;
      }
    }
    else {
      piVar24 = (int *)(param_1 + 0xe4);
LAB_1474ea3a2:
      iVar22 = *piVar24;
    }
    uVar16 = *(uint *)(param_1 + 0x100);
    if ((int)uVar16 < 0) {
      iVar21 = -1;
      if ((((~uVar16 & 0x7fffffff) != 0) && (uVar16 = (int)(uVar16 * 2) >> 1, -1 < (int)uVar16)) &&
         ((int)uVar16 < *(int *)(local_128 + 0x88))) {
        piVar24 = (int *)((ulonglong)uVar16 * 4 + *(longlong *)(local_128 + 0x80));
        goto LAB_1474ea3ba;
      }
    }
    else {
      piVar24 = (int *)(param_1 + 0x104);
LAB_1474ea3ba:
      iVar21 = *piVar24;
    }
    uVar16 = *(uint *)(param_1 + 0xf0);
    if ((int)uVar16 < 0) {
      iVar25 = -1;
      if ((((~uVar16 & 0x7fffffff) != 0) && (uVar16 = (int)(uVar16 * 2) >> 1, -1 < (int)uVar16)) &&
         ((int)uVar16 < *(int *)(local_128 + 0x88))) {
        piVar24 = (int *)((ulonglong)uVar16 * 4 + *(longlong *)(local_128 + 0x80));
        goto LAB_1474ea3d2;
      }
    }
    else {
      piVar24 = (int *)(param_1 + 0xf4);
LAB_1474ea3d2:
      iVar25 = *piVar24;
    }
    uVar16 = *(uint *)(param_1 + 0x110);
    if ((int)uVar16 < 0) {
      iVar23 = -1;
      if ((((~uVar16 & 0x7fffffff) != 0) && (uVar16 = (int)(uVar16 * 2) >> 1, -1 < (int)uVar16)) &&
         ((int)uVar16 < *(int *)(local_128 + 0x88))) {
        piVar24 = (int *)((ulonglong)uVar16 * 4 + *(longlong *)(local_128 + 0x80));
        goto LAB_1474ea3eb;
      }
    }
    else {
      piVar24 = (int *)(param_1 + 0x114);
LAB_1474ea3eb:
      iVar23 = *piVar24;
    }
    lVar17 = *(longlong *)(param_2 + 0x38);
    if (*(char *)(lVar17 + iVar22) == '\0') {
      FUN_1447d5d8e(plVar1);
      lVar17 = *(longlong *)(local_120 + 0x38);
    }
    lVar26 = *plVar1;
    lVar20 = (longlong)iVar22 * 0x60;
    pdVar3 = (double *)(lVar26 + 0x20 + lVar20);
    dVar27 = *pdVar3;
    dVar11 = pdVar3[1];
    dVar12 = *(double *)(lVar26 + 0x30 + lVar20);
    if (*(char *)(lVar17 + iVar21) == '\0') {
      FUN_1447d5d8e(plVar1,iVar21);
      lVar26 = *(longlong *)(local_120 + 0x20);
      lVar17 = *(longlong *)(local_120 + 0x38);
    }
    lVar20 = (longlong)iVar21 * 0x60;
    pdVar3 = (double *)(lVar26 + 0x20 + lVar20);
    dVar13 = *pdVar3;
    dVar14 = pdVar3[1];
    dVar15 = *(double *)(lVar26 + 0x30 + lVar20);
    if (*(char *)(lVar17 + iVar25) == '\0') {
      FUN_1447d5d8e(plVar1,iVar25);
      lVar26 = *(longlong *)(local_120 + 0x20);
      lVar17 = *(longlong *)(local_120 + 0x38);
    }
    lVar20 = (longlong)iVar25 * 0x60;
    pdVar3 = (double *)(lVar26 + 0x20 + lVar20);
    dVar6 = *pdVar3;
    dVar28 = pdVar3[1];
    dVar8 = *(double *)(lVar26 + 0x30 + lVar20);
    if (*(char *)(lVar17 + iVar23) == '\0') {
      FUN_1447d5d8e(plVar1,iVar23);
      lVar26 = *plVar1;
    }
    lVar17 = (longlong)iVar23 * 0x60;
    pdVar3 = (double *)(lVar26 + 0x20 + lVar17);
    dVar10 = *pdVar3;
    dVar5 = *(double *)(lVar26 + 0x30 + lVar17);
    dVar29 = (double)*(float *)(param_1 + 0x140);
    dVar8 = (dVar12 - dVar8) * dVar29 + dVar8;
    dVar28 = (dVar11 - dVar28) * dVar29 + dVar28;
    dVar6 = (dVar27 - dVar6) * dVar29 + dVar6;
    dVar5 = (dVar15 - dVar5) * dVar29 + dVar5;
    dVar27 = (dVar14 - pdVar3[1]) * dVar29 + *(double *)(lVar26 + 0x28 + lVar17);
    dVar10 = (dVar13 - dVar10) * dVar29 + dVar10;
  }
  dVar5 = (dVar8 - dVar5) * *(double *)(param_1 + 0x138);
  dVar8 = (dVar28 - dVar27) * *(double *)(param_1 + 0x130);
  dVar6 = (dVar6 - dVar10) * *(double *)(param_1 + 0x128);
  dVar28 = ABS(dVar6);
  if (((9.999999747378752e-05 < dVar28) || (dVar28 = ABS(dVar8), 9.999999747378752e-05 < dVar28)) ||
     (9.999999747378752e-05 < ABS(dVar5))) {
    if ((longlong)*(int *)(param_1 + 0x120) != 0) {
      lVar17 = local_128 + 0x10;
      piVar24 = (int *)(*(longlong *)(param_1 + 0x118) + 0xc);
      lVar26 = (longlong)*(int *)(param_1 + 0x120) << 4;
      do {
        uVar16 = piVar24[-1];
        if ((~uVar16 & 0x7fffffff) != 0) {
          lVar20 = *(longlong *)(local_128 + 0x20);
          if (*(longlong *)(local_128 + 0x20) == 0) {
            lVar20 = lVar17;
          }
          if ((*(uint *)(lVar20 + (ulonglong)(uVar16 >> 3 & 0x1ffc)) >> (uVar16 & 0x1f) & 1) != 0) {
            piVar19 = piVar24;
            if ((int)uVar16 < 0) {
              uVar16 = (int)(uVar16 * 2) >> 1;
              iVar22 = -1;
              if ((-1 < (int)uVar16) && ((int)uVar16 < *(int *)(local_128 + 0x88))) {
                piVar19 = (int *)((ulonglong)uVar16 * 4 + *(longlong *)(local_128 + 0x80));
                goto LAB_1474ea720;
              }
            }
            else {
LAB_1474ea720:
              iVar22 = *piVar19;
            }
            if (*(char *)(*(longlong *)(local_120 + 0x38) + (longlong)iVar22) == '\0') {
              FUN_1447d5d8e(plVar1,iVar22);
            }
            lVar20 = *plVar1;
            lVar18 = (longlong)iVar22 * 0x60;
            pdVar3 = (double *)(lVar20 + 0x20 + lVar18);
            dVar11 = *pdVar3;
            dVar10 = pdVar3[1] + dVar8;
            pdVar3 = (double *)(lVar20 + 0x30 + lVar18);
            dVar12 = *pdVar3;
            dVar27 = pdVar3[1] + 0.0;
            puVar4 = (undefined8 *)(lVar20 + 0x40 + lVar18);
            local_118 = *puVar4;
            uStack_110 = puVar4[1];
            puVar4 = (undefined8 *)(lVar20 + 0x50 + lVar18);
            local_108 = *puVar4;
            uStack_100 = puVar4[1];
            puVar2 = (undefined4 *)(lVar20 + lVar18);
            uStack_e0 = *puVar2;
            uStack_dc = puVar2[1];
            uStack_d8 = puVar2[2];
            uStack_d4 = puVar2[3];
            puVar2 = (undefined4 *)(lVar20 + 0x10 + lVar18);
            uStack_d0 = *puVar2;
            uStack_cc = puVar2[1];
            uStack_c8 = puVar2[2];
            uStack_c4 = puVar2[3];
            iVar21 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar21 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar21 + 1U) {
              FUN_1400c28ea(param_3,iVar21);
            }
            lVar20 = *param_3;
            lVar18 = (longlong)iVar21 * 0x70;
            *(int *)(lVar20 + lVar18) = iVar22;
            dVar28 = (double)CONCAT44(uStack_cc,uStack_d0);
            puVar4 = (undefined8 *)(lVar20 + 4 + lVar18);
            *puVar4 = local_ec;
            puVar4[1] = CONCAT44(uStack_e0,uStack_e4);
            puVar4 = (undefined8 *)(lVar20 + 0x14 + lVar18);
            *puVar4 = CONCAT44(uStack_d8,uStack_dc);
            puVar4[1] = CONCAT44(uStack_d0,uStack_d4);
            pdVar3 = (double *)(lVar20 + 0x20 + lVar18);
            *pdVar3 = dVar28;
            pdVar3[1] = (double)CONCAT44(uStack_c4,uStack_c8);
            auVar7._8_4_ = SUB84(dVar10,0);
            auVar7._0_8_ = dVar11 + dVar6;
            auVar7._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
            *(undefined1 (*) [16])(lVar20 + 0x30 + lVar18) = auVar7;
            auVar9._8_4_ = SUB84(dVar27,0);
            auVar9._0_8_ = dVar12 + dVar5;
            auVar9._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
            *(undefined1 (*) [16])(lVar20 + 0x40 + lVar18) = auVar9;
            puVar2 = (undefined4 *)(lVar20 + 0x50 + lVar18);
            *puVar2 = (undefined4)local_118;
            puVar2[1] = local_118._4_4_;
            puVar2[2] = (undefined4)uStack_110;
            puVar2[3] = uStack_110._4_4_;
            puVar2 = (undefined4 *)(lVar20 + 0x60 + lVar18);
            *puVar2 = (undefined4)local_108;
            puVar2[1] = local_108._4_4_;
            puVar2[2] = (undefined4)uStack_100;
            puVar2[3] = uStack_100._4_4_;
          }
        }
        piVar24 = piVar24 + 4;
        lVar26 = lVar26 + -0x10;
      } while (lVar26 != 0);
    }
    if (0 < (int)param_3[1]) {
      FUN_1449449dd(*param_3,(int)param_3[1],dVar28,&local_ec);
    }
  }
LAB_1474ea638:
  if ((local_c0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474eab86 FUN_1474eab86 body=133 status=ok
// SIG undefined FUN_1474eab86(void)

void FUN_1474eab86(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_14019c9f2(param_1 + 0xd8);
  FUN_14019c9f2(param_1 + 0xe8,param_2);
  FUN_14019c9f2(param_1 + 0xf8,param_2);
  FUN_14019c9f2(param_1 + 0x108,param_2);
  if (0 < *(int *)(param_1 + 0x120)) {
    lVar1 = 0;
    lVar2 = 0;
    do {
      FUN_14019c9f2(*(longlong *)(param_1 + 0x118) + lVar1,param_2);
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x10;
    } while (lVar2 < *(int *)(param_1 + 0x120));
  }
  return;
}



// FUNCTION 1474eac18 FUN_1474eac18 body=198 status=ok
// SIG undefined FUN_1474eac18(void)

void FUN_1474eac18(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1474eace0(param_2,&local_40);
  _Src = local_40;
  local_50 = (void *)0x0;
  local_48 = local_38;
  if ((longlong)local_38 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_38,0);
    memcpy(local_50,_Src,(longlong)local_38 * 2);
  }
  FUN_147906d4c(param_2,&local_50,0);
  FUN_147906d38(param_1 + 0x18,param_2);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474eace0 FUN_1474eace0 body=256 status=ok
// SIG undefined FUN_1474eace0(void)

undefined8 FUN_1474eace0(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14caab260 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caab260 = FUN_140002ddd(FUN_1463338a5,uVar2,L"AnimNode_LegIK");
  }
  local_48 = *(undefined8 *)(DAT_14caab260 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1474eade2 FUN_1474eade2 body=498 status=ok
// SIG undefined FUN_1474eade2(void)

void FUN_1474eade2(longlong *param_1,float param_2)

{
  double dVar1;
  double *pdVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double dStack_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  pdVar2 = (double *)*param_1;
  lVar4 = (longlong)((int)param_1[1] + -1);
  local_68 = pdVar2[lVar4 * 0xe + 2] - pdVar2[2];
  dStack_70 = pdVar2[lVar4 * 0xe + 1] - pdVar2[1];
  local_78 = pdVar2[lVar4 * 0xe] - *pdVar2;
  dVar6 = local_68 * local_68 + local_78 * local_78 + dStack_70 * dStack_70;
  if ((dVar6 != 1.0) || (NAN(dVar6))) {
    if (dVar6 < 9.99999993922529e-09) {
      local_68 = DAT_14c8464f0;
      local_78 = DAT_14c8464e0;
      dStack_70 = DAT_14c8464e8;
    }
    else {
      dVar6 = 1.0 / SQRT(dVar6);
      local_68 = local_68 * dVar6;
      dStack_70 = dStack_70 * dVar6;
      local_78 = local_78 * dVar6;
    }
  }
  if (2 < (int)param_1[1]) {
    lVar4 = 1;
    lVar5 = 0x80;
    do {
      lVar3 = *param_1;
      local_80 = *(double *)(lVar3 + lVar5) - pdVar2[2];
      local_88 = *(double *)(lVar3 + -8 + lVar5) - pdVar2[1];
      local_90 = *(double *)(lVar3 + -0x10 + lVar5) - *pdVar2;
      FUN_140ccff96(&local_90,&local_a8,(double)param_2 * 0.017453292519943295,&local_78);
      dVar6 = pdVar2[2];
      dVar1 = pdVar2[1];
      *(double *)(lVar3 + -0x10 + lVar5) = *pdVar2 + local_a8;
      *(double *)(lVar3 + -8 + lVar5) = dVar1 + local_a0;
      *(double *)(lVar3 + lVar5) = dVar6 + local_98;
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x70;
    } while (lVar4 < (longlong)(int)param_1[1] + -1);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474eafd6 FUN_1474eafd6 body=883 status=ok
// SIG undefined FUN_1474eafd6(void)

void FUN_1474eafd6(longlong *param_1,uint param_2)

{
  double *pdVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  if ((0 < (int)param_2) && ((int)param_2 < (int)param_1[5] + -1)) {
    lVar2 = *param_1;
    lVar9 = (ulonglong)param_2 * 0x70;
    pdVar1 = (double *)(lVar2 + lVar9);
    dVar14 = *(double *)(lVar2 + 0x10 + lVar9);
    dVar5 = *(double *)(lVar2 + -0x60 + lVar9) - dVar14;
    dVar16 = *(double *)(lVar2 + 8 + lVar9);
    dVar4 = *(double *)(lVar2 + -0x68 + lVar9) - dVar16;
    dVar3 = *(double *)(lVar2 + -0x70 + lVar9) - *(double *)(lVar2 + lVar9);
    dVar13 = dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4;
    if (((dVar13 != 1.0) || (dVar6 = dVar5, dVar7 = dVar4, dVar8 = dVar3, NAN(dVar13))) &&
       (dVar6 = DAT_14c8464f0, dVar7 = DAT_14c8464e8, dVar8 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar13)) {
      dVar13 = 1.0 / SQRT(dVar13);
      dVar6 = dVar5 * dVar13;
      dVar7 = dVar4 * dVar13;
      dVar8 = dVar3 * dVar13;
    }
    dVar3 = pdVar1[4] * dVar7 - dVar8 * pdVar1[5];
    dVar5 = pdVar1[6] * dVar8 - dVar6 * pdVar1[4];
    dVar4 = pdVar1[5] * dVar6 - pdVar1[6] * dVar7;
    dVar14 = pdVar1[0x10] - dVar14;
    dVar16 = pdVar1[0xf] - dVar16;
    dVar13 = pdVar1[0xe] - *(double *)(lVar2 + lVar9);
    dVar12 = dVar14 * dVar14 + dVar13 * dVar13 + dVar16 * dVar16;
    if (((dVar12 != 1.0) || (dVar11 = dVar13, dVar15 = dVar14, dVar17 = dVar16, NAN(dVar12))) &&
       (dVar11 = DAT_14c8464e0, dVar15 = DAT_14c8464f0, dVar17 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar12)) {
      dVar12 = 1.0 / SQRT(dVar12);
      dVar11 = dVar13 * dVar12;
      dVar15 = dVar14 * dVar12;
      dVar17 = dVar16 * dVar12;
    }
    dVar14 = dVar15 * dVar6 + dVar11 * dVar8 + dVar7 * dVar17;
    if ((dVar15 * dVar3 + dVar11 * dVar4 + dVar17 * dVar5 < 0.0) ||
       (fVar10 = cosf(*(float *)(param_1 + 2)), (double)fVar10 < dVar14)) {
      if (dVar14 <= 0.0) {
        dVar14 = pdVar1[3];
        dVar16 = pdVar1[2] - dVar6 * dVar14;
        dVar3 = *pdVar1 - dVar8 * dVar14;
        dVar14 = pdVar1[1] - dVar7 * dVar14;
      }
      else {
        fVar10 = cosf(*(float *)(param_1 + 2));
        dVar12 = (double)fVar10;
        fVar10 = sinf(*(float *)(param_1 + 2));
        dVar11 = (double)fVar10;
        dVar13 = pdVar1[3];
        dVar16 = (dVar3 * dVar11 + dVar6 * dVar12) * dVar13 + pdVar1[2];
        dVar14 = (dVar5 * dVar11 + dVar7 * dVar12) * dVar13 + pdVar1[1];
        dVar3 = (dVar4 * dVar11 + dVar8 * dVar12) * dVar13 + *pdVar1;
      }
      pdVar1[0xe] = dVar3;
      pdVar1[0xf] = dVar14;
      pdVar1[0x10] = dVar16;
    }
  }
  return;
}



// FUNCTION 1474eb34a FUN_1474eb34a body=883 status=ok
// SIG undefined FUN_1474eb34a(void)

void FUN_1474eb34a(longlong *param_1,uint param_2)

{
  double *pdVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  if ((0 < (int)param_2) && ((int)param_2 < (int)param_1[5] + -1)) {
    lVar2 = *param_1;
    lVar8 = (ulonglong)param_2 * 0x70;
    pdVar1 = (double *)(lVar2 + lVar8);
    dVar14 = *(double *)(lVar2 + 0x10 + lVar8);
    dVar3 = *(double *)(lVar2 + 0x80 + lVar8) - dVar14;
    dVar16 = *(double *)(lVar2 + 8 + lVar8);
    dVar12 = *(double *)(lVar2 + 0x78 + lVar8) - dVar16;
    dVar4 = *(double *)(lVar2 + 0x70 + lVar8) - *(double *)(lVar2 + lVar8);
    dVar13 = dVar3 * dVar3 + dVar4 * dVar4 + dVar12 * dVar12;
    if (((dVar13 != 1.0) || (dVar5 = dVar3, dVar6 = dVar12, dVar7 = dVar4, NAN(dVar13))) &&
       (dVar5 = DAT_14c8464f0, dVar6 = DAT_14c8464e8, dVar7 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar13)) {
      dVar13 = 1.0 / SQRT(dVar13);
      dVar5 = dVar3 * dVar13;
      dVar6 = dVar12 * dVar13;
      dVar7 = dVar4 * dVar13;
    }
    dVar3 = pdVar1[4] * dVar6 - dVar7 * pdVar1[5];
    dVar4 = pdVar1[6] * dVar7 - dVar5 * pdVar1[4];
    dVar12 = pdVar1[5] * dVar5 - pdVar1[6] * dVar6;
    dVar14 = pdVar1[-0xc] - dVar14;
    dVar16 = pdVar1[-0xd] - dVar16;
    dVar11 = pdVar1[-0xe] - *(double *)(lVar2 + lVar8);
    dVar13 = dVar14 * dVar14 + dVar11 * dVar11 + dVar16 * dVar16;
    if (((dVar13 != 1.0) || (dVar10 = dVar11, dVar15 = dVar14, dVar17 = dVar16, NAN(dVar13))) &&
       (dVar10 = DAT_14c8464e0, dVar15 = DAT_14c8464f0, dVar17 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar13)) {
      dVar13 = 1.0 / SQRT(dVar13);
      dVar10 = dVar11 * dVar13;
      dVar15 = dVar14 * dVar13;
      dVar17 = dVar16 * dVar13;
    }
    dVar14 = dVar15 * dVar5 + dVar10 * dVar7 + dVar6 * dVar17;
    if ((0.0 < dVar15 * dVar3 + dVar10 * dVar12 + dVar17 * dVar4) ||
       (fVar9 = cosf(*(float *)(param_1 + 2)), (double)fVar9 < dVar14)) {
      if (dVar14 <= 0.0) {
        dVar14 = pdVar1[-0xb];
        dVar12 = *pdVar1 - dVar7 * dVar14;
        dVar16 = pdVar1[2] - dVar5 * dVar14;
        dVar14 = pdVar1[1] - dVar6 * dVar14;
      }
      else {
        fVar9 = cosf(*(float *)(param_1 + 2));
        dVar11 = (double)fVar9;
        fVar9 = sinf(*(float *)(param_1 + 2));
        dVar10 = (double)fVar9;
        dVar13 = pdVar1[-0xb];
        dVar16 = (dVar5 * dVar11 - dVar3 * dVar10) * dVar13 + pdVar1[2];
        dVar14 = (dVar6 * dVar11 - dVar4 * dVar10) * dVar13 + pdVar1[1];
        dVar12 = (dVar7 * dVar11 - dVar12 * dVar10) * dVar13 + *pdVar1;
      }
      pdVar1[-0xe] = dVar12;
      pdVar1[-0xd] = dVar14;
      pdVar1[-0xc] = dVar16;
    }
  }
  return;
}



// FUNCTION 1474eb6be FUN_1474eb6be body=69 status=ok
// SIG undefined FUN_1474eb6be(void)

void FUN_1474eb6be(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1474eb70c FUN_1474eb70c body=631 status=ok
// SIG undefined FUN_1474eb70c(void)

undefined8 * FUN_1474eb70c(undefined8 *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  FUN_140c83e26();
  *param_1 = &PTR_FUN_14a437ea0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0xffffffff7fffffff;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff7fffffff;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0x3ff00000;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0x3ff0000000000000;
  param_1[0x2b] = 0x3ff0000000000000;
  param_1[0x2c] = 0x3ff0000000000000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x30] = 0x4059000000000000;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x36) = 1;
  dVar4 = DAT_14caab340 * DAT_14caab340 +
          DAT_14caab330 * DAT_14caab330 + DAT_14caab338 * DAT_14caab338;
  if (((dVar4 != 1.0) ||
      (dVar2 = DAT_14caab340, dVar1 = DAT_14caab338, dVar3 = DAT_14caab330, NAN(dVar4))) &&
     (dVar2 = DAT_14c8464f0, dVar1 = DAT_14c8464e8, dVar3 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar4)) {
    dVar3 = 1.0 / SQRT(dVar4);
    dVar2 = DAT_14caab340 * dVar3;
    dVar1 = DAT_14caab338 * dVar3;
    dVar3 = DAT_14caab330 * dVar3;
  }
  param_1[0x33] = dVar3;
  param_1[0x34] = dVar1;
  param_1[0x35] = dVar2;
  *(undefined2 *)(param_1 + 0x37) = 0;
  *(undefined1 *)(param_1 + 0x3b) = 1;
  dVar4 = DAT_14caab358 * DAT_14caab358 +
          DAT_14caab348 * DAT_14caab348 + DAT_14caab350 * DAT_14caab350;
  if (((dVar4 != 1.0) ||
      (dVar2 = DAT_14caab358, dVar1 = DAT_14caab350, dVar3 = DAT_14caab348, NAN(dVar4))) &&
     (dVar2 = DAT_14c8464f0, dVar1 = DAT_14c8464e8, dVar3 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar4)) {
    dVar3 = 1.0 / SQRT(dVar4);
    dVar2 = DAT_14caab358 * dVar3;
    dVar1 = DAT_14caab350 * dVar3;
    dVar3 = DAT_14caab348 * dVar3;
  }
  param_1[0x38] = dVar3;
  param_1[0x39] = dVar1;
  param_1[0x3a] = dVar2;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  return param_1;
}



// FUNCTION 1474eb984 FUN_1474eb984 body=974 status=ok
// SIG undefined FUN_1474eb984(void)

void FUN_1474eb984(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  bool bVar7;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined2 *local_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined2 *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined2 *local_90;
  int local_88;
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  void *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1474ebd54(param_2,&local_50);
  thunk_FUN_14047a987(&local_50,&DAT_149eb775e,1);
  FUN_1474dc4fe(param_1,&local_50);
  if (*(char *)(param_1 + 0xf0) == '\x01') {
    if (*(int *)(param_1 + 0x178) == -1) {
LAB_1474ebc3d:
      local_c8 = *(undefined2 **)(param_1 + 0x250);
      FUN_140002266(&local_70,L"X=%3.3f Y=%3.3f Z=%3.3f",*(undefined8 *)(param_1 + 0x240),
                    *(undefined8 *)(param_1 + 0x248));
      puVar5 = &DAT_149dfb77a;
      if (local_68 != 0) {
        puVar5 = local_70;
      }
      local_c8 = *(undefined2 **)(param_1 + 400);
      FUN_140002266(&local_80,L"X=%3.3f Y=%3.3f Z=%3.3f",*(undefined8 *)(param_1 + 0x180),
                    *(undefined8 *)(param_1 + 0x188));
      puVar6 = &DAT_149dfb77a;
      if (local_78 != 0) {
        puVar6 = local_80;
      }
      FUN_1400021e4(param_1 + 0xd8,&local_90);
      puVar4 = &DAT_149dfb77a;
      if (local_88 != 0) {
        puVar4 = local_90;
      }
      local_c8 = puVar5;
      FUN_140002266(&local_60,L" Bone: %s, Look At Location : %s, Target Location : %s)",puVar4,
                    puVar6);
      iVar1 = local_58 + -1;
      if (local_58 == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(&local_50,local_60,iVar1);
      goto LAB_1474ebb4e;
    }
  }
  else if ((~*(uint *)(param_1 + 0xfc) & 0x7fffffff) == 0) goto LAB_1474ebc3d;
  local_c8 = *(undefined2 **)(param_1 + 0x250);
  FUN_140002266(&local_70,L"X=%3.3f Y=%3.3f Z=%3.3f",*(undefined8 *)(param_1 + 0x240),
                *(undefined8 *)(param_1 + 0x248));
  puVar5 = &DAT_149dfb77a;
  if (local_68 != 0) {
    puVar5 = local_70;
  }
  local_c8 = *(undefined2 **)(param_1 + 400);
  FUN_140002266(&local_80,L"X=%3.3f Y=%3.3f Z=%3.3f",*(undefined8 *)(param_1 + 0x180),
                *(undefined8 *)(param_1 + 0x188));
  puVar6 = &DAT_149dfb77a;
  if (local_78 != 0) {
    puVar6 = local_80;
  }
  lVar2 = param_1 + 4;
  if (*(char *)(param_1 + 0xf0) != '\0') {
    lVar2 = param_1 + 0x80;
  }
  local_98 = *(undefined8 *)(lVar2 + 0xf0);
  FUN_1400021e4(&local_98,&local_90);
  puVar4 = &DAT_149dfb77a;
  if (local_88 != 0) {
    puVar4 = local_90;
  }
  FUN_1400021e4(param_1 + 0xd8,&local_a8);
  puVar3 = &DAT_149dfb77a;
  if (local_a0 != 0) {
    puVar3 = local_a8;
  }
  local_c8 = puVar6;
  local_c0 = puVar5;
  FUN_140002266(&local_60,
                L" Bone: %s, Look At Target: %s, Look At Location: %s, Target Location : %s)",puVar3
                ,puVar4);
  iVar1 = local_58 + -1;
  if (local_58 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_50,local_60,iVar1);
  bVar7 = local_60 != (undefined2 *)0x0;
  local_60 = local_a8;
  if (bVar7) {
    FUN_1400020a8();
    local_60 = local_a8;
  }
LAB_1474ebb4e:
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  _Src = local_50;
  local_b8 = (void *)0x0;
  local_b0 = local_48;
  if ((longlong)local_48 == 0) {
    local_ac = 0;
  }
  else {
    FUN_1446dd670(&local_b8,local_48,0);
    memcpy(local_b8,_Src,(longlong)local_48 * 2);
  }
  FUN_147906d4c(param_2,&local_b8,0);
  FUN_147906d38(param_1 + 0x18,param_2);
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474ebd54 FUN_1474ebd54 body=256 status=ok
// SIG undefined FUN_1474ebd54(void)

undefined8 FUN_1474ebd54(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14caab320 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caab320 = FUN_140002ddd(FUN_14633396b,uVar2,L"AnimNode_LookAt");
  }
  local_48 = *(undefined8 *)(DAT_14caab320 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1474ebe56 FUN_1474ebe56 body=1445 status=ok
// SIG undefined FUN_1474ebe56(void)

void FUN_1474ebe56(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  double dVar1;
  uint uVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  double *pdVar6;
  double *pdVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_1e8 [32];
  undefined1 *local_1c8;
  double *local_1c0;
  undefined4 local_1b8;
  undefined1 local_1a8 [32];
  double local_188;
  double dStack_180;
  double local_178;
  double local_168;
  double dStack_160;
  double local_158;
  undefined1 local_148 [32];
  double local_128;
  double local_120;
  double local_118;
  double local_e8 [13];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  uVar2 = *(uint *)(param_1 + 0x1c);
  if ((int)uVar2 < 0) {
    iVar5 = -1;
    if ((((~uVar2 & 0x7fffffff) != 0) && (uVar2 = (int)(uVar2 * 2) >> 1, -1 < (int)uVar2)) &&
       ((int)uVar2 < *(int *)(param_2[6] + 0x88))) {
      piVar3 = (int *)((ulonglong)uVar2 * 4 + *(longlong *)(param_2[6] + 0x80));
      goto LAB_1474ebeb9;
    }
  }
  else {
    piVar3 = (int *)((longlong)param_1 + 0xe4);
LAB_1474ebeb9:
    iVar5 = *piVar3;
  }
  if (*(char *)(param_2[7] + (longlong)iVar5) == '\0') {
    FUN_1447d5d8e(param_2 + 4);
  }
  pdVar6 = (double *)((longlong)iVar5 * 0x60 + param_2[4]);
  pdVar7 = local_e8;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pdVar7 = *pdVar6;
    pdVar6 = pdVar6 + 1;
    pdVar7 = pdVar7 + 1;
  }
  local_1c8 = (undefined1 *)(*param_2 + 0x10);
  FUN_144ade698(param_1 + 0x1e,local_148,param_1 + 0x30,param_2 + 4);
  dVar11 = local_118 - (double)param_1[0x43];
  dVar9 = local_120 - (double)param_1[0x42];
  dVar1 = local_128 - (double)param_1[0x41];
  fVar8 = *(float *)(param_1 + 0x3d);
  if (dVar11 * dVar11 + dVar1 * dVar1 + dVar9 * dVar9 <= (double)(fVar8 * fVar8)) {
    if ((fVar8 != 0.0) || (NAN(fVar8))) goto LAB_1474ebfee;
  }
  else {
    if (*(float *)((longlong)param_1 + 0x1e4) <= *(float *)(param_1 + 0x47)) {
      *(undefined4 *)(param_1 + 0x47) = 0;
    }
    param_1[0x44] = param_1[0x41];
    param_1[0x45] = param_1[0x42];
    param_1[0x46] = param_1[0x43];
  }
  param_1[0x41] = (longlong)local_128;
  param_1[0x42] = (longlong)local_120;
  param_1[0x43] = (longlong)local_118;
LAB_1474ebfee:
  if (*(float *)((longlong)param_1 + 0x1e4) <= 0.0) {
    param_1[0x40] = param_1[0x43];
    param_1[0x3e] = param_1[0x41];
    param_1[0x3f] = param_1[0x42];
  }
  else {
    fVar8 = *(float *)(param_1 + 0x47) / *(float *)((longlong)param_1 + 0x1e4);
    if (fVar8 < 1.0) {
      fVar8 = (float)FUN_140965e38(fVar8,*(undefined1 *)((longlong)param_1 + 0x1b9));
      dVar9 = (double)fVar8;
      param_1[0x3e] =
           (longlong)
           (((double)param_1[0x41] - (double)param_1[0x44]) * dVar9 + (double)param_1[0x44]);
      param_1[0x3f] =
           (longlong)
           (((double)param_1[0x42] - (double)param_1[0x45]) * dVar9 + (double)param_1[0x45]);
      param_1[0x40] =
           (longlong)
           (((double)param_1[0x43] - (double)param_1[0x46]) * dVar9 + (double)param_1[0x46]);
    }
  }
  param_1[0x4a] = param_1[0x43];
  param_1[0x48] = param_1[0x41];
  param_1[0x49] = param_1[0x42];
  if ((char)param_1[0x36] == '\x01') {
    dVar1 = (double)param_1[0x33];
    dVar11 = (double)param_1[0x34];
    dVar9 = dVar11 * local_e8[0] - dVar1 * local_e8[1];
    dVar10 = (double)param_1[0x35] * local_e8[1] - dVar11 * local_e8[2];
    dVar12 = dVar1 * local_e8[2] - local_e8[0] * (double)param_1[0x35];
    dVar10 = dVar10 + dVar10;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    local_158 = dVar9 * local_e8[3] + (double)param_1[0x35] +
                (dVar12 * local_e8[0] - dVar10 * local_e8[1]);
    local_168 = (dVar9 * local_e8[1] - dVar12 * local_e8[2]) + local_e8[3] * dVar10 + dVar1;
    dStack_160 = (local_e8[2] * dVar10 - local_e8[0] * dVar9) + local_e8[3] * dVar12 + dVar11;
  }
  else {
    local_158 = (double)param_1[0x35];
    local_168 = (double)param_1[0x33];
    dStack_160 = (double)param_1[0x34];
  }
  if ((char)param_1[0x3b] == '\x01') {
    dVar1 = (double)param_1[0x38];
    dVar11 = (double)param_1[0x39];
    dVar9 = dVar11 * local_e8[0] - dVar1 * local_e8[1];
    dVar10 = (double)param_1[0x3a] * local_e8[1] - dVar11 * local_e8[2];
    dVar12 = dVar1 * local_e8[2] - local_e8[0] * (double)param_1[0x3a];
    dVar10 = dVar10 + dVar10;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    local_178 = dVar9 * local_e8[3] + (double)param_1[0x3a] +
                (dVar12 * local_e8[0] - dVar10 * local_e8[1]);
    local_188 = (dVar9 * local_e8[1] - dVar12 * local_e8[2]) + local_e8[3] * dVar10 + dVar1;
    dStack_180 = (local_e8[2] * dVar10 - local_e8[0] * dVar9) + local_e8[3] * dVar12 + dVar11;
  }
  else {
    local_178 = (double)param_1[0x3a];
    local_188 = (double)param_1[0x38];
    dStack_180 = (double)param_1[0x39];
  }
  local_1b8 = (undefined4)param_1[0x3c];
  local_1c0 = &local_188;
  local_1c8 = (undefined1 *)CONCAT71(local_1c8._1_7_,(char)param_1[0x37]);
  FUN_14690aafc(local_1a8,local_e8,param_1 + 0x3e,&local_168);
  local_1c8 = local_1a8;
  (**(code **)(*param_1 + 0x128))(param_1,param_2,param_3,local_e8);
  FUN_1449449dd(*param_3,*(undefined4 *)(param_3 + 1));
  if ((local_80 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474ec494 FUN_1474ec494 body=48 status=ok
// SIG undefined FUN_1474ec494(void)

void FUN_1474ec494(longlong param_1,undefined8 param_2)

{
  FUN_14019c9f2(param_1 + 0xd8);
  FUN_14019c9a8(param_1 + 0xf0,param_2);
  return;
}



// FUNCTION 1474ec4ea FUN_1474ec4ea body=440 status=ok
// SIG undefined FUN_1474ec4ea(void)

void FUN_1474ec4ea(longlong param_1,longlong param_2,longlong *param_3,double *param_4,
                  double *param_5)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  undefined4 *puVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  undefined1 auStack_f8 [44];
  undefined4 local_cc [27];
  ulonglong local_60;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar8;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  dVar10 = *param_4;
  dVar11 = param_4[1];
  dVar12 = param_4[2];
  dVar13 = param_4[3];
  dVar1 = param_5[3];
  dVar2 = param_5[3];
  dVar3 = *param_5;
  dVar4 = *param_5;
  dVar5 = param_5[1];
  dVar6 = param_5[1];
  dVar7 = param_5[2];
  dVar8 = param_5[2];
  *param_4 = dVar11 * dVar7 * -1.0 + dVar12 * dVar5 + dVar13 * dVar3 * 1.0 + dVar10 * dVar1;
  param_4[1] = dVar10 * dVar8 * 1.0 + dVar13 * dVar6 + dVar12 * dVar4 * -1.0 + dVar11 * dVar2;
  param_4[2] = dVar13 * dVar7 * 1.0 + ((dVar3 * dVar11 * 1.0 + dVar1 * dVar12) - dVar10 * dVar5);
  param_4[3] = dVar12 * dVar8 * -1.0 + ((dVar4 * dVar10 * -1.0 + dVar2 * dVar13) - dVar11 * dVar6);
  uVar14 = *(uint *)(param_1 + 0xe0);
  if ((int)uVar14 < 0) {
    uVar17 = 0xffffffff;
    if ((((~uVar14 & 0x7fffffff) == 0) || (uVar14 = (int)(uVar14 * 2) >> 1, (int)uVar14 < 0)) ||
       (*(int *)(*(longlong *)(param_2 + 0x30) + 0x88) <= (int)uVar14)) goto LAB_1474ec5e0;
    puVar15 = (undefined4 *)
              ((ulonglong)uVar14 * 4 + *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x80));
  }
  else {
    puVar15 = (undefined4 *)(param_1 + 0xe4);
  }
  uVar17 = *puVar15;
LAB_1474ec5e0:
  puVar15 = local_cc + 3;
  for (lVar16 = 0x18; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar15 = *(undefined4 *)param_4;
    param_4 = (double *)((longlong)param_4 + 4);
    puVar15 = puVar15 + 1;
  }
  iVar9 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar9 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar9 + 1U) {
    FUN_1400c28ea(param_3,iVar9);
  }
  puVar15 = (undefined4 *)(*param_3 + (longlong)iVar9 * 0x70);
  *puVar15 = uVar17;
  puVar18 = local_cc;
  for (lVar16 = 0x1b; puVar15 = puVar15 + 1, lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar15 = *puVar18;
    puVar18 = puVar18 + 1;
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474ec6a4 FUN_1474ec6a4 body=347 status=ok
// SIG undefined FUN_1474ec6a4(void)

void FUN_1474ec6a4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  undefined2 *puVar2;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined2 *local_60;
  int local_58;
  longlong local_50;
  int local_48;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1474ec800(param_2,&local_40);
  thunk_FUN_14047a987(&local_40,&DAT_149eb775e,1);
  FUN_1474dc4fe(param_1,&local_40);
  FUN_1400021e4(param_1 + 0xd8,&local_60);
  puVar2 = local_60;
  if (local_58 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_50,L" Target: %s)",puVar2);
  iVar1 = local_48 + -1;
  if (local_48 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_40,local_50,iVar1);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  _Src = local_40;
  local_70 = (void *)0x0;
  local_68 = local_38;
  if ((longlong)local_38 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_38,0);
    memcpy(local_70,_Src,(longlong)local_38 * 2);
  }
  FUN_147906d4c(param_2,&local_70,0);
  FUN_147906d38(param_1 + 0x18,param_2);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474ec800 FUN_1474ec800 body=208 status=ok
// SIG undefined FUN_1474ec800(void)

undefined8 FUN_1474ec800(float *param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = &DAT_149dfb77a;
  if (param_1[8] != 0.0) {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  lVar2 = FUN_140fd5b74();
  local_48 = *(undefined8 *)(lVar2 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar3 = local_58;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474ec8da FUN_1474ec8da body=594 status=ok
// SIG undefined FUN_1474ec8da(void)

void FUN_1474ec8da(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined2 *local_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined2 *local_a8;
  int local_a0;
  undefined2 *local_98;
  int local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  void *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c8 = *(undefined2 **)(param_1 + 0x130);
  FUN_140002266(&local_60,L"X=%3.3f Y=%3.3f Z=%3.3f",*(undefined8 *)(param_1 + 0x120),
                *(undefined8 *)(param_1 + 0x128));
  puVar2 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar2 = local_60;
  }
  FUN_1414d053e(param_1 + 0x108,&local_88);
  local_c8 = (undefined2 *)local_78;
  FUN_140002266(&local_70,L"X=%3.3f Y=%3.3f Z=%3.3f",local_88,local_80);
  puVar3 = &DAT_149dfb77a;
  if (local_68 != 0) {
    puVar3 = local_70;
  }
  local_c8 = *(undefined2 **)(param_1 + 0x100);
  FUN_140002266(&local_98,L"X=%3.3f Y=%3.3f Z=%3.3f",*(undefined8 *)(param_1 + 0xf0),
                *(undefined8 *)(param_1 + 0xf8));
  puVar4 = &DAT_149dfb77a;
  if (local_90 != 0) {
    puVar4 = local_98;
  }
  FUN_1400021e4(param_1 + 0xd8,&local_a8);
  puVar1 = &DAT_149dfb77a;
  if (local_a0 != 0) {
    puVar1 = local_a8;
  }
  local_c8 = puVar3;
  local_c0 = puVar2;
  FUN_140002266(&local_50,L"(Bone: %s has T(%s), R(%s), S(%s))",puVar1,puVar4);
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  _Src = local_50;
  local_b8 = (void *)0x0;
  local_b0 = local_48;
  if ((longlong)local_48 == 0) {
    local_ac = 0;
  }
  else {
    FUN_1446dd670(&local_b8,local_48,0);
    memcpy(local_b8,_Src,(longlong)local_48 * 2);
  }
  FUN_147906d4c(param_2,&local_b8,0);
  FUN_147906d38(param_1 + 0x18,param_2);
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474ecb2e FUN_1474ecb2e body=460 status=ok
// SIG undefined FUN_1474ecb2e(void)

void FUN_1474ecb2e(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_148 [32];
  uint local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar4 = param_2[6];
  uVar1 = *(uint *)(param_1 + 0xe0);
  if ((int)uVar1 < 0) {
    iVar5 = -1;
    if ((((~uVar1 & 0x7fffffff) == 0) || (uVar1 = (int)(uVar1 * 2) >> 1, (int)uVar1 < 0)) ||
       (*(int *)(lVar4 + 0x88) <= (int)uVar1)) goto LAB_1474ecb72;
    piVar2 = (int *)((ulonglong)uVar1 * 4 + *(longlong *)(lVar4 + 0x80));
  }
  else {
    piVar2 = (int *)(param_1 + 0xe4);
  }
  iVar5 = *piVar2;
LAB_1474ecb72:
  if (*(char *)(param_2[7] + (longlong)iVar5) == '\0') {
    FUN_1447d5d8e(param_2 + 4,iVar5);
  }
  puVar6 = (undefined8 *)((longlong)iVar5 * 0x60 + param_2[4]);
  puVar7 = &local_a8;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_128 = (uint)*(byte *)(param_1 + 0xe8);
  FUN_14045e902(*param_2 + 0x10,param_2 + 4,&local_a8,iVar5);
  if (*(char *)(param_1 + 0xe9) == '\x01') {
    FUN_1449437a2(&local_a8,&local_108,
                  ((longlong)((ulonglong)*(uint *)(param_1 + 0xe0) << 0x21) >> 0x21) * 0x60 +
                  *(longlong *)(*(longlong *)(lVar4 + 0x48) + 0x30));
    puVar6 = &local_108;
    puVar7 = &local_a8;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  *(undefined8 *)(param_1 + 0xf0) = local_88;
  *(undefined8 *)(param_1 + 0xf8) = uStack_80;
  *(undefined8 *)(param_1 + 0x100) = local_78;
  local_108._0_4_ = (undefined4)local_a8;
  local_108._4_4_ = local_a8._4_4_;
  uStack_100 = uStack_a0;
  uStack_fc = uStack_9c;
  local_f8 = local_98;
  uStack_f4 = uStack_94;
  uStack_f0 = uStack_90;
  uStack_ec = uStack_8c;
  FUN_1448052ee(&local_108,&local_120);
  *(undefined8 *)(param_1 + 0x118) = local_110;
  *(undefined8 *)(param_1 + 0x108) = local_120;
  *(undefined8 *)(param_1 + 0x110) = uStack_118;
  *(undefined4 *)(param_1 + 0x120) = local_68;
  *(undefined4 *)(param_1 + 0x124) = uStack_64;
  *(undefined4 *)(param_1 + 0x128) = uStack_60;
  *(undefined4 *)(param_1 + 300) = uStack_5c;
  *(undefined8 *)(param_1 + 0x130) = local_58;
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474ecd42 FUN_1474ecd42 body=291 status=ok
// SIG undefined FUN_1474ecd42(void)

void FUN_1474ecd42(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  int local_48;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1474ece66(param_2,&local_40);
  thunk_FUN_14047a987(&local_40,&DAT_149eb775e,1);
  FUN_1474dc4fe(param_1,&local_40);
  FUN_140002266(&local_50,&DAT_149e06144);
  iVar1 = local_48 + -1;
  if (local_48 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_40,local_50,iVar1);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  _Src = local_40;
  local_60 = (void *)0x0;
  local_58 = local_38;
  if ((longlong)local_38 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,local_38,0);
    memcpy(local_60,_Src,(longlong)local_38 * 2);
  }
  FUN_147906d4c(param_2,&local_60,0);
  FUN_147906d38(param_1 + 0x18,param_2);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474ece66 FUN_1474ece66 body=256 status=ok
// SIG undefined FUN_1474ece66(void)

undefined8 FUN_1474ece66(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14caab380 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caab380 = FUN_140002ddd(FUN_146333a97,uVar2,L"AnimNode_ResetRoot");
  }
  local_48 = *(undefined8 *)(DAT_14caab380 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1474ecf68 FUN_1474ecf68 body=563 status=ok
// SIG undefined FUN_1474ecf68(void)

void FUN_1474ecf68(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 auStack_f8 [40];
  undefined8 *local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined4 local_b4 [27];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d0 = *(undefined8 **)(param_2 + 0x30);
  local_c8 = 0;
  uStack_c0 = 0;
  iVar1 = *(int *)(param_1 + 0xe0);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_1401a2688(&local_c8);
    if (0 < *(int *)(param_1 + 0xe0)) {
      lVar6 = 0;
      do {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0xd8) + lVar6 * 4);
        if (*(char *)(*(longlong *)(param_2 + 0x38) + (longlong)iVar1) == '\0') {
          FUN_1447d5d8e((longlong *)(param_2 + 0x20),iVar1);
        }
        uVar3 = uStack_c0;
        lVar12 = *(longlong *)(param_2 + 0x20);
        lVar10 = (longlong)(int)uStack_c0;
        uVar4 = (int)uStack_c0 + 1;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar4);
        if (uStack_c0._4_4_ < uVar4) {
          FUN_144a2c682(&local_c8,uVar3 & 0xffffffff);
        }
        puVar7 = (undefined8 *)((longlong)iVar1 * 0x60 + lVar12);
        puVar11 = (undefined8 *)(lVar10 * 0x60 + local_c8);
        for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar11 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar11 = puVar11 + 1;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(param_1 + 0xe0));
    }
  }
  if (local_d0[0x1d] == 0) {
    puVar9 = (undefined4 *)
             ((ulonglong)((uint)*(ushort *)*local_d0 * 0x60) + *(longlong *)(local_d0[9] + 0x30));
  }
  else {
    puVar9 = *(undefined4 **)(local_d0[0x1d] + 0x10);
  }
  puVar8 = local_b4 + 3;
  for (lVar6 = 0x18; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar8 = puVar8 + 1;
  }
  iVar1 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
    FUN_1400c28ea(param_3,iVar1);
  }
  puVar9 = (undefined4 *)(*param_3 + (longlong)iVar1 * 0x70);
  *puVar9 = 0;
  puVar8 = local_b4;
  for (lVar6 = 0x1b; puVar9 = puVar9 + 1, lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
  }
  if (0 < *(int *)(param_1 + 0xe0)) {
    lVar12 = 0;
    lVar6 = 0;
    do {
      uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + lVar6 * 4);
      puVar9 = (undefined4 *)(local_c8 + lVar12);
      puVar8 = local_b4 + 3;
      for (lVar10 = 0x18; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar8 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + 1;
      }
      iVar1 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
        FUN_1400c28ea(param_3,iVar1);
      }
      puVar9 = (undefined4 *)(*param_3 + (longlong)iVar1 * 0x70);
      *puVar9 = uVar2;
      puVar8 = local_b4;
      for (lVar10 = 0x1b; puVar9 = puVar9 + 1, lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
      }
      lVar6 = lVar6 + 1;
      lVar12 = lVar12 + 0x60;
    } while (lVar6 < *(int *)(param_1 + 0xe0));
  }
  FUN_1449449dd(*param_3,(int)param_3[1]);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474ed1a4 FUN_1474ed1a4 body=150 status=ok
// SIG undefined FUN_1474ed1a4(void)

void FUN_1474ed1a4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(int *)(param_1 + 0xe4) < 0) {
    FUN_1447d6d9c(plVar1,0);
  }
  iVar2 = *(int *)(param_2 + 8);
  if (0 < (longlong)iVar2) {
    lVar4 = 0;
    do {
      if (*(int *)(*(longlong *)(param_2 + 0x90) + lVar4 * 4) == 0) {
        iVar3 = *(int *)(param_1 + 0xe0);
        *(uint *)(param_1 + 0xe0) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0xe4) < iVar3 + 1U) {
          FUN_1408f8cfa(plVar1,iVar3);
        }
        *(int *)(*plVar1 + (longlong)iVar3 * 4) = (int)lVar4;
      }
      lVar4 = lVar4 + 1;
    } while (iVar2 != lVar4);
  }
  return;
}



// FUNCTION 1474ed282 FUN_1474ed282 body=371 status=ok
// SIG undefined FUN_1474ed282(void)

void FUN_1474ed282(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a43a930;
  FUN_143297d60();
  if (param_1[0x109] != 0) {
    FUN_1400020a8();
  }
  FUN_1474ed3f6(param_1 + 0x100);
  FUN_1474ed3f6(param_1 + 0xf7);
  FUN_1406cb64a(param_1 + 0xca);
  if (param_1[0xc5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc1] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xad) = 0;
  if (param_1[0xac] != 0) {
    FUN_1400020a8();
  }
  FUN_1474fc7aa(param_1 + 0xa4);
  if (param_1[0xa2] != 0) {
    FUN_1400020a8();
  }
  FUN_14122435e(param_1 + 0x7e);
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  FUN_1474fc185(param_1[0x72],*(undefined4 *)(param_1 + 0x73));
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)param_1[0x71];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1474ed3f6 FUN_1474ed3f6 body=75 status=ok
// SIG undefined FUN_1474ed3f6(void)

void FUN_1474ed3f6(longlong *param_1)

{
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1474ed442 FUN_1474ed442 body=284 status=ok
// SIG undefined FUN_1474ed442(void)

void FUN_1474ed442(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1474ed560(param_2,&local_40);
  thunk_FUN_14047a987(&local_40,&DAT_149eb775e,1);
  FUN_1474dc4fe(param_1,&local_40);
  thunk_FUN_14047a987(&local_40,&DAT_149dfbe79,1);
  _Src = local_40;
  local_50 = (void *)0x0;
  local_48 = local_38;
  if ((longlong)local_38 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_38,0);
    memcpy(local_50,_Src,(longlong)local_38 * 2);
  }
  FUN_147906d4c(param_2,&local_50,0);
  if ((((*(byte *)(param_1 + 0x311) & 8) == 0) || ((*(byte *)(param_1 + 0x31c) & 2) == 0)) ||
     (*(int *)(param_1 + 0x808) < 1)) {
    FUN_147906d38(param_1 + 0x18,param_2);
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474ed560 FUN_1474ed560 body=256 status=ok
// SIG undefined FUN_1474ed560(void)

undefined8 FUN_1474ed560(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14caab3e0 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caab3e0 = FUN_140002ddd(FUN_146333c21,uVar2,L"AnimNode_RigidBody");
  }
  local_48 = *(undefined8 *)(DAT_14caab3e0 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1474ed662 FUN_1474ed662 body=38 status=ok
// SIG undefined FUN_1474ed662(void)

void FUN_1474ed662(longlong param_1)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  FUN_140320438(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x93) = 0;
  return;
}



// FUNCTION 1474ed688 FUN_1474ed688 body=171 status=ok
// SIG undefined FUN_1474ed688(void)

void FUN_1474ed688(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((*(byte *)(param_1 + 0x311) & 8) == 0) || ((*(byte *)(param_1 + 0x31c) & 2) == 0)) ||
     (*(char *)(param_1 + 0x310) != '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  if (*(int *)(param_1 + 0x808) < 1) {
    local_48 = *param_2;
    uStack_40 = param_2[1];
    local_38 = *(undefined4 *)(param_2 + 2);
    uStack_34 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_30 = *(undefined4 *)(param_2 + 3);
    uStack_2c = *(undefined4 *)((longlong)param_2 + 0x1c);
    uStack_24 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_1c = *(undefined4 *)((longlong)param_2 + 0x2c);
    fStack_20 = *(float *)(param_2 + 5) * 0.0;
    local_28 = *(undefined4 *)(param_2 + 4);
    FUN_14474897c(param_1 + 0x18);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474ed746 FUN_1474ed746 body=218 status=ok
// SIG undefined FUN_1474ed746(void)

void FUN_1474ed746(longlong param_1,longlong param_2)

{
  if (((*(byte *)(param_1 + 0x311) & 8) == 0) || ((*(byte *)(param_1 + 0x31c) & 2) == 0)) {
    FUN_1447173be(param_1 + 0x18,param_2);
  }
  else if ((*(char *)(param_1 + 0x310) == '\0') && (0 < *(int *)(param_1 + 0x808))) {
    FUN_1474ed820(param_2 + 0x20,param_1 + 0x800);
    FUN_140e4869c(param_2 + 0x68,param_1 + 0x848);
  }
  else {
    FUN_1447173be(param_1 + 0x18,param_2);
    FUN_1474ed87e(param_1 + 0x800,param_2 + 0x20);
    FUN_140101796(param_1 + 0x848,param_2 + 0x68);
  }
  if (((*(byte *)(param_1 + 0x311) & 4) != 0) && ((*(byte *)(param_1 + 0x31c) & 2) == 0)) {
    FUN_1474ed87e(param_1 + 0x7b8,param_2 + 0x20);
    FUN_1470d3316(param_1 + 0x650,*(undefined8 *)(param_1 + 0x7c8));
    *(longlong *)(param_1 + 0x7c8) = param_1 + 0x650;
  }
  return;
}



// FUNCTION 1474ed820 FUN_1474ed820 body=94 status=ok
// SIG undefined FUN_1474ed820(void)

void FUN_1474ed820(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  FUN_1474ff774();
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 == 0 && *(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    FUN_1474d5aa6((undefined8 *)(param_1 + 0x18),iVar1);
    if (iVar1 != 0) {
      memcpy(*(void **)(param_1 + 0x18),_Src,(longlong)iVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1474ed87e FUN_1474ed87e body=94 status=ok
// SIG undefined FUN_1474ed87e(void)

void FUN_1474ed87e(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  FUN_1474ff7d8();
  iVar1 = *(int *)(param_2 + 0x20);
  _Src = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 == 0 && *(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    FUN_1447a127e((undefined8 *)(param_1 + 0x18),iVar1);
    if (iVar1 != 0) {
      memcpy(*(void **)(param_1 + 0x18),_Src,(longlong)iVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1474ed8dc FUN_1474ed8dc body=6125 status=ok
// SIG undefined FUN_1474ed8dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474ed8dc(longlong param_1,longlong param_2,double *param_3,undefined8 param_4)

{
  longlong *plVar1;
  byte bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined7 uVar15;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong lVar16;
  double *pdVar17;
  double *pdVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  double dVar36;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar49;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar50;
  double dVar51;
  undefined1 auVar48 [16];
  double dVar52;
  double dVar56;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar57;
  double dVar58;
  double dVar59;
  undefined1 auStack_3f8 [40];
  longlong local_3d0;
  undefined1 local_3c8 [16];
  double local_3b8;
  double dStack_3b0;
  longlong local_3a8;
  double *local_3a0;
  undefined1 local_398 [24];
  undefined8 local_380;
  longlong *local_378;
  longlong local_370;
  undefined1 local_368 [16];
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
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
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  local_380 = param_4;
  if ((longlong)*(int *)(param_1 + 0x398) != 0) {
    plVar21 = *(longlong **)(param_1 + 0x390);
    plVar13 = plVar21 + (longlong)*(int *)(param_1 + 0x398) * 4;
    plVar1 = (longlong *)(param_2 + 0x20);
    lVar19 = param_1;
    local_3d0 = param_1;
    local_3a0 = param_3;
    do {
      lVar20 = (longlong)*(int *)((longlong)plVar21 + 0x14);
      lVar16 = lVar20 * 0x50;
      bVar2 = *(byte *)(*(longlong *)(lVar19 + 0x3c0) + 0x4c + lVar16);
      uVar15 = (undefined7)((ulonglong)param_1 >> 8);
      param_1 = CONCAT71(uVar15,bVar2);
      if ((bVar2 & 2) == 0) {
        uVar22 = CONCAT71(uVar15,bVar2) | 2;
        uVar9 = (undefined4)uVar22;
        *(char *)(*(longlong *)(lVar19 + 0x3c0) + lVar16 + 0x4c) = (char)uVar22;
        iVar10 = (int)plVar21[3];
        if (iVar10 == -1) {
          iVar10 = (int)plVar21[2];
          if (*(char *)(*(longlong *)(param_2 + 0x38) + (longlong)iVar10) == '\0') {
            plVar12 = plVar1;
            FUN_1447d5d8e(plVar1,iVar10);
            uVar9 = SUB84(plVar12,0);
            param_3 = local_3a0;
            lVar19 = local_3d0;
          }
          auVar54 = _DAT_149934d80;
          pdVar17 = (double *)((longlong)iVar10 * 0x60 + *plVar1);
          if (*(char *)(lVar19 + 0x30d) == '\x02') {
            FUN_1449437a2(pdVar17,local_2f8,local_380);
            lVar19 = local_3d0;
          }
          else if (*(char *)(lVar19 + 0x30d) == '\x01') {
            local_2c8 = ZEXT816(0);
            local_2d8 = ZEXT816(0);
            auVar34 = *(undefined1 (*) [16])(param_3 + 8);
            dVar41 = auVar34._0_8_;
            dVar49 = auVar34._8_8_;
            auVar46 = *(undefined1 (*) [16])(param_3 + 10);
            dVar51 = auVar46._0_8_;
            dVar4 = auVar46._8_8_;
            auVar31 = *(undefined1 (*) [16])(pdVar17 + 8);
            auVar42 = *(undefined1 (*) [16])(pdVar17 + 10);
            auVar34 = minpd(auVar31,auVar34);
            auVar46 = minpd(auVar42,auVar46);
            auVar35._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
            auVar35._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
            iVar10 = movmskpd(1,auVar35);
            auVar47._8_8_ = -(ulonglong)(auVar46._8_8_ < 0.0);
            auVar47._0_8_ = -(ulonglong)(auVar46._0_8_ < 0.0);
            uVar11 = movmskpd(uVar9,auVar47);
            if ((uVar11 & 0x3fffffff) == 0 && iVar10 == 0) {
              dVar40 = *pdVar17;
              dVar37 = pdVar17[1];
              dVar39 = pdVar17[2];
              dVar50 = pdVar17[3];
              dVar59 = *param_3;
              dVar57 = param_3[1];
              dVar58 = param_3[2];
              dVar52 = param_3[3];
              dVar3 = param_3[3];
              dVar29 = param_3[3];
              dVar36 = param_3[1];
              dVar5 = param_3[1];
              dVar30 = param_3[2];
              dVar38 = param_3[2];
              local_2f8._0_8_ =
                   dVar37 * dVar30 * -1.0 +
                   dVar39 * dVar36 + dVar50 * *param_3 * 1.0 + dVar40 * dVar3;
              local_2f8._8_8_ =
                   dVar40 * dVar38 * 1.0 +
                   dVar50 * dVar5 + dVar39 * *param_3 * -1.0 + dVar37 * dVar29;
              local_2e8._0_8_ =
                   dVar50 * dVar30 * 1.0 +
                   ((*param_3 * dVar37 * 1.0 + dVar39 * dVar3) - dVar40 * dVar36);
              local_2e8._8_8_ =
                   dVar39 * dVar38 * -1.0 +
                   ((*param_3 * dVar40 * -1.0 + dVar50 * dVar29) - dVar37 * dVar5);
              dVar50 = pdVar17[4] * dVar41;
              dVar38 = pdVar17[5] * dVar49;
              dVar40 = pdVar17[6] * dVar51;
              dVar37 = pdVar17[7] * dVar4;
              dVar36 = dVar38 * dVar59 - dVar57 * dVar50;
              dVar5 = dVar40 * dVar57 - dVar58 * dVar38;
              dVar30 = dVar50 * dVar58 - dVar59 * dVar40;
              dVar39 = dVar37 * dVar52 - dVar52 * dVar37;
              dVar5 = dVar5 + dVar5;
              dVar30 = dVar30 + dVar30;
              dVar36 = dVar36 + dVar36;
              dVar39 = dVar39 + dVar39;
              dVar38 = (dVar5 * dVar58 - dVar36 * dVar59) + dVar29 * dVar30 + dVar38 + param_3[5];
              local_2d8._8_4_ = SUB84(dVar38,0);
              local_2d8._0_8_ =
                   (dVar36 * dVar57 - dVar58 * dVar30) + dVar3 * dVar5 + dVar50 + param_3[4];
              local_2d8._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
              local_2c8._8_8_ =
                   (dVar39 * dVar52 - dVar39 * dVar52) + dVar29 * dVar39 + dVar37 + param_3[7];
              local_2c8._0_8_ =
                   (dVar30 * dVar59 - dVar57 * dVar5) + dVar3 * dVar36 + dVar40 + param_3[6];
              dVar49 = auVar31._8_8_ * dVar49;
              dVar4 = auVar42._8_8_ * dVar4;
              local_2b8._8_4_ = SUB84(dVar49,0);
              local_2b8._0_8_ = auVar31._0_8_ * dVar41;
              local_2b8._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
              local_2a8._8_4_ = SUB84(dVar4,0);
              local_2a8._0_8_ = auVar42._0_8_ * dVar51;
              local_2a8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
            }
            else {
              dVar36 = auVar31._0_8_ * dVar41;
              dVar5 = auVar31._8_8_ * dVar49;
              dVar3 = auVar42._0_8_ * dVar51;
              dVar4 = auVar42._8_8_ * dVar4;
              dVar30 = *param_3;
              dVar38 = param_3[1];
              dVar40 = param_3[2];
              dVar37 = dVar38 + dVar38;
              dVar39 = dVar40 + dVar40;
              dVar29 = dVar30 * (dVar30 + dVar30);
              local_1f8 = ((double)DAT_149934d80 - (dVar40 * dVar39 + dVar38 * dVar37)) * dVar41;
              dStack_1d0 = (DAT_149934d80._8_8_ - (dVar40 * dVar39 + dVar29)) * dVar49;
              local_1a8 = (1.0 - (dVar29 + dVar38 * dVar37)) * dVar51;
              dVar29 = param_3[3];
              dVar40 = dVar39 * dVar29;
              dVar50 = (dVar30 + dVar30) * param_3[3];
              dVar29 = dVar37 * dVar29;
              dStack_1f0 = (dVar37 * dVar30 + dVar40) * dVar41;
              local_1c8 = (dVar39 * dVar38 + dVar50) * dVar49;
              local_1b8 = (dVar29 + *param_3 * dVar39) * dVar51;
              local_1d8 = (dVar37 * dVar30 - dVar40) * dVar49;
              dStack_1b0 = (dVar39 * dVar38 - dVar50) * dVar51;
              local_1e8 = (*param_3 * dVar39 - dVar29) * dVar41;
              uStack_1e0 = 0;
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = param_3[4];
              dStack_190 = param_3[5];
              local_188 = param_3[6];
              uStack_180 = 0x3ff0000000000000;
              dVar51 = *pdVar17;
              dVar49 = pdVar17[1];
              dVar29 = pdVar17[2];
              local_268 = pdVar17[8];
              local_258 = pdVar17[9];
              dStack_230 = pdVar17[10];
              dVar40 = dVar49 + dVar49;
              dVar30 = dVar29 + dVar29;
              dVar41 = dVar51 * (dVar51 + dVar51);
              local_278 = ((double)DAT_149934d80 - (dVar29 * dVar30 + dVar49 * dVar40)) * local_268;
              dStack_250 = (DAT_149934d80._8_8_ - (dVar29 * dVar30 + dVar41)) * local_258;
              local_228 = (1.0 - (dVar41 + dVar49 * dVar40)) * dStack_230;
              dVar41 = pdVar17[3];
              dVar29 = dVar30 * dVar41;
              dVar38 = (dVar51 + dVar51) * pdVar17[3];
              dVar41 = dVar40 * dVar41;
              dStack_270 = (dVar40 * dVar51 + dVar29) * local_268;
              local_248 = (dVar30 * dVar49 + dVar38) * local_258;
              local_238 = (dVar41 + *pdVar17 * dVar30) * dStack_230;
              local_268 = (*pdVar17 * dVar30 - dVar41) * local_268;
              local_258 = (dVar40 * dVar51 - dVar29) * local_258;
              dStack_230 = (dVar30 * dVar49 - dVar38) * dStack_230;
              uStack_260 = 0;
              uStack_240 = 0;
              uStack_220 = 0;
              local_218 = *(undefined1 (*) [16])(pdVar17 + 4);
              local_208 = pdVar17[6];
              uStack_200 = 0x3ff0000000000000;
              FUN_1447fea8d(&local_178,&local_278,&local_1f8);
              FUN_144a1c686(&local_178,0x3e45798ee0000000);
              auVar27._8_8_ = -(ulonglong)(0.0 <= dVar5);
              auVar27._0_8_ = -(ulonglong)(0.0 <= dVar36);
              auVar34 = blendvpd(_DAT_149936790,auVar54,auVar27);
              uVar22 = -(ulonglong)(0.0 <= dVar3);
              dVar41 = (double)(~uVar22 & 0xbff0000000000000 | uVar22 & 0x3ff0000000000000);
              dVar51 = auVar34._0_8_;
              local_168 = local_168 * dVar51;
              local_170 = local_170 * dVar51;
              local_178 = local_178 * dVar51;
              dVar51 = auVar34._8_8_;
              local_148 = local_148 * dVar51;
              local_150 = local_150 * dVar51;
              local_158 = dVar51 * local_158;
              local_128 = local_128 * dVar41;
              local_130 = local_130 * dVar41;
              local_138 = dVar41 * local_138;
              FUN_14481fd10(&local_358,&local_178);
              dVar41 = local_348 * local_348 + local_358 * local_358;
              dVar51 = dStack_340 * dStack_340 + dStack_350 * dStack_350;
              auVar48._0_8_ = dVar41 + dVar51;
              auVar48._8_8_ = dVar41 + dVar51;
              auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar48._8_8_);
              auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar48._0_8_);
              auVar34 = sqrtpd(auVar48,auVar48);
              auVar54 = divpd(auVar54,auVar34);
              auVar55._0_8_ = auVar54._0_8_ * local_348;
              auVar55._8_8_ = auVar54._8_8_ * dStack_340;
              local_2e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar55,auVar28);
              local_2b8._8_4_ = SUB84(dVar5,0);
              local_2b8._0_8_ = dVar36;
              local_2b8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
              local_2a8._8_4_ = SUB84(dVar4,0);
              local_2a8._0_8_ = dVar3;
              local_2a8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
              local_2f8._8_8_ =
                   (ulonglong)(dStack_350 * auVar54._8_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar48._8_8_);
              local_2f8._0_8_ =
                   (ulonglong)(local_358 * auVar54._0_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar48._0_8_);
              local_2c8._8_8_ = 0;
              local_2c8._0_8_ = local_108;
              local_2d8._8_8_ = dStack_110;
              local_2d8._0_8_ = local_118;
              lVar19 = local_3d0;
            }
          }
          else {
            pdVar18 = (double *)local_2f8;
            for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
              *pdVar18 = *pdVar17;
              pdVar17 = pdVar17 + 1;
              pdVar18 = pdVar18 + 1;
            }
          }
          param_1 = *(longlong *)(*(longlong *)(lVar19 + 0x3a0) + lVar20 * 8);
          FUN_147c6b4a8(param_1,local_2f8);
          lVar19 = local_3d0;
        }
        else {
          local_3c8._8_8_ = DAT_14c8464c8;
          local_3c8._0_8_ = DAT_14c8464c0;
          lVar7 = plVar21[1];
          local_368 = ZEXT816(0x3ff0000000000000) << 0x40;
          local_3b8 = DAT_14c8464b0;
          dStack_3b0 = DAT_14c8464b8;
          auVar54 = _DAT_14c846490;
          dVar29 = DAT_14c8464d0;
          dVar3 = dRam000000014c8464d8;
          dVar41 = DAT_14c846480;
          dVar49 = DAT_14c846488;
          dVar51 = DAT_14c8464a0;
          dVar4 = DAT_14c8464a8;
          local_3a8 = lVar20;
          local_378 = plVar13;
          local_370 = param_2;
          if ((longlong)(int)lVar7 != 0) {
            lVar19 = *plVar21;
            lVar20 = 0;
            do {
              plVar13 = plVar1;
              uVar9 = FUN_144ade54e(plVar1,local_2f8,*(undefined4 *)(lVar19 + lVar20));
              auVar34 = _DAT_149934d80;
              dVar36 = local_2b8._0_8_;
              dVar30 = local_2b8._8_8_;
              dVar5 = local_2a8._0_8_;
              dVar38 = local_2a8._8_8_;
              auVar46 = minpd(local_3c8,local_2b8);
              auVar42._8_8_ = dVar3;
              auVar42._0_8_ = dVar29;
              auVar42 = minpd(auVar42,local_2a8);
              auVar31._8_8_ = -(ulonglong)(auVar46._8_8_ < 0.0);
              auVar31._0_8_ = -(ulonglong)(auVar46._0_8_ < 0.0);
              iVar10 = movmskpd(uVar9,auVar31);
              auVar46._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
              auVar46._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
              uVar11 = movmskpd((int)plVar13,auVar46);
              dVar40 = auVar54._0_8_;
              dVar37 = auVar54._8_8_;
              if ((uVar11 & 0x3fffffff) == 0 && iVar10 == 0) {
                dVar39 = (double)local_2f8._0_8_ * dVar49;
                dVar50 = (double)local_2f8._0_8_ * dVar41;
                dVar59 = dVar41 * (double)local_2f8._8_8_;
                dVar52 = dVar49 * (double)local_2f8._8_8_;
                dVar57 = dVar41 * (double)local_2e8._0_8_;
                dVar41 = dVar49 * (double)local_2e8._0_8_ * -1.0 +
                         dVar40 * (double)local_2f8._8_8_ +
                         dVar37 * (double)local_2f8._0_8_ * 1.0 + dVar41 * (double)local_2e8._8_8_;
                dVar49 = dVar57 * 1.0 +
                         dVar37 * (double)local_2f8._8_8_ +
                         dVar40 * (double)local_2f8._0_8_ * -1.0 + dVar49 * (double)local_2e8._8_8_;
                dVar51 = dVar51 * dVar36;
                dVar4 = dVar4 * dVar30;
                local_3b8 = local_3b8 * dVar5;
                dStack_3b0 = dStack_3b0 * dVar38;
                dVar57 = dVar4 * (double)local_2f8._0_8_ - dVar51 * (double)local_2f8._8_8_;
                dVar58 = local_3b8 * (double)local_2f8._8_8_ - dVar4 * (double)local_2e8._0_8_;
                dVar56 = dVar51 * (double)local_2e8._0_8_ - local_3b8 * (double)local_2f8._0_8_;
                dVar6 = dStack_3b0 * (double)local_2e8._8_8_ - dStack_3b0 * (double)local_2e8._8_8_;
                dVar58 = dVar58 + dVar58;
                dVar56 = dVar56 + dVar56;
                dVar57 = dVar57 + dVar57;
                dVar6 = dVar6 + dVar6;
                local_3c8._8_8_ = (double)local_3c8._8_8_ * dVar30;
                local_3c8._0_8_ = (double)local_3c8._0_8_ * dVar36;
                dVar51 = (dVar57 * (double)local_2f8._8_8_ - (double)local_2e8._0_8_ * dVar56) +
                         (double)local_2e8._8_8_ * dVar58 + dVar51 + (double)local_2d8._0_8_;
                dVar4 = (dVar58 * (double)local_2e8._0_8_ - dVar57 * (double)local_2f8._0_8_) +
                        (double)local_2e8._8_8_ * dVar56 + dVar4 + (double)local_2d8._8_8_;
                local_3b8 = (dVar56 * (double)local_2f8._0_8_ - (double)local_2f8._8_8_ * dVar58) +
                            (double)local_2e8._8_8_ * dVar57 + local_3b8 + (double)local_2c8._0_8_;
                dStack_3b0 = (dVar6 * (double)local_2e8._8_8_ - dVar6 * (double)local_2e8._8_8_) +
                             (double)local_2e8._8_8_ * dVar6 + dStack_3b0 + (double)local_2c8._8_8_;
                auVar54._8_8_ =
                     dVar40 * (double)local_2e8._0_8_ * -1.0 +
                     ((dVar50 * -1.0 + dVar37 * (double)local_2e8._8_8_) - dVar52);
                auVar54._0_8_ =
                     dVar37 * (double)local_2e8._0_8_ * 1.0 +
                     ((dVar39 * 1.0 + dVar40 * (double)local_2e8._8_8_) - dVar59);
              }
              else {
                dVar59 = (double)local_2f8._8_8_ + (double)local_2f8._8_8_;
                dVar57 = (double)local_2e8._0_8_ + (double)local_2e8._0_8_;
                dVar39 = (double)local_2f8._0_8_ *
                         ((double)local_2f8._0_8_ + (double)local_2f8._0_8_);
                local_398._8_4_ = SUB84(dVar4,0);
                local_398._0_8_ = dVar51;
                local_398._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
                local_1a8 = (1.0 - (dVar39 + (double)local_2f8._8_8_ * dVar59)) * dVar5;
                dVar58 = ((double)local_2f8._0_8_ + (double)local_2f8._0_8_) *
                         (double)local_2e8._8_8_;
                local_1b8 = (dVar59 * (double)local_2e8._8_8_ + (double)local_2f8._0_8_ * dVar57) *
                            dVar5;
                local_1d8 = (dVar59 * (double)local_2f8._0_8_ - dVar57 * (double)local_2e8._8_8_) *
                            dVar30;
                dStack_1b0 = (dVar57 * (double)local_2f8._8_8_ - dVar58) * dVar5;
                dVar4 = (double)local_3c8._0_8_ * dVar36;
                dVar50 = (double)local_3c8._8_8_ * dVar30;
                local_1f8 = (1.0 - ((double)local_2e8._0_8_ * dVar57 +
                                   (double)local_2f8._8_8_ * dVar59)) * dVar36;
                dStack_1d0 = (1.0 - ((double)local_2e8._0_8_ * dVar57 + dVar39)) * dVar30;
                dStack_1f0 = (dVar59 * (double)local_2f8._0_8_ + dVar57 * (double)local_2e8._8_8_) *
                             dVar36;
                local_1c8 = (dVar57 * (double)local_2f8._8_8_ + dVar58) * dVar30;
                local_1e8 = ((double)local_2f8._0_8_ * dVar57 - dVar59 * (double)local_2e8._8_8_) *
                            dVar36;
                uStack_1e0 = 0;
                uStack_1c0 = 0;
                uStack_1a0 = 0;
                local_198 = (double)local_2d8._0_8_;
                dStack_190 = (double)local_2d8._8_8_;
                local_188 = (double)local_2c8._0_8_;
                uStack_180 = 0x3ff0000000000000;
                dVar36 = dVar49 + dVar49;
                dVar39 = dVar40 + dVar40;
                dVar30 = dVar41 * (dVar41 + dVar41);
                local_228 = (1.0 - (dVar30 + dVar49 * dVar36)) * dVar29;
                dVar59 = (dVar41 + dVar41) * dVar37;
                local_238 = (dVar36 * dVar37 + dVar41 * dVar39) * dVar29;
                local_258 = (dVar36 * dVar41 - dVar39 * dVar37) * (double)local_3c8._8_8_;
                dStack_230 = (dVar39 * dVar49 - dVar59) * dVar29;
                local_278 = ((double)DAT_149934d80 - (dVar40 * dVar39 + dVar49 * dVar36)) *
                            (double)local_3c8._0_8_;
                dStack_250 = (DAT_149934d80._8_8_ - (dVar40 * dVar39 + dVar30)) *
                             (double)local_3c8._8_8_;
                dStack_270 = (dVar36 * dVar41 + dVar39 * dVar37) * (double)local_3c8._0_8_;
                local_248 = (dVar39 * dVar49 + dVar59) * (double)local_3c8._8_8_;
                local_268 = (dVar41 * dVar39 - dVar36 * dVar37) * (double)local_3c8._0_8_;
                uStack_260 = 0;
                uStack_240 = 0;
                uStack_220 = 0;
                local_218._8_8_ = local_398._8_8_;
                local_218._0_8_ = dVar51;
                local_208 = local_3b8;
                uStack_200 = 0x3ff0000000000000;
                FUN_1447fea8d(&local_178,&local_278,&local_1f8);
                FUN_144a1c686(&local_178,0x3e45798ee0000000);
                auVar23._8_8_ = -(ulonglong)(0.0 <= dVar50);
                auVar23._0_8_ = -(ulonglong)(0.0 <= dVar4);
                auVar54 = blendvpd(_DAT_149936790,auVar34,auVar23);
                uVar22 = -(ulonglong)(0.0 <= dVar29 * dVar5);
                dVar41 = (double)(~uVar22 & 0xbff0000000000000 | uVar22 & 0x3ff0000000000000);
                dVar51 = auVar54._0_8_;
                local_168 = local_168 * dVar51;
                local_170 = local_170 * dVar51;
                local_178 = local_178 * dVar51;
                dVar51 = auVar54._8_8_;
                local_148 = local_148 * dVar51;
                local_150 = local_150 * dVar51;
                local_158 = dVar51 * local_158;
                local_128 = local_128 * dVar41;
                local_130 = local_130 * dVar41;
                local_138 = dVar41 * local_138;
                FUN_14481fd10(&local_358,&local_178);
                dVar41 = local_348 * local_348 + local_358 * local_358;
                dVar51 = dStack_340 * dStack_340 + dStack_350 * dStack_350;
                auVar32._0_8_ = dVar41 + dVar51;
                auVar32._8_8_ = dVar41 + dVar51;
                auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_);
                auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_);
                auVar54 = sqrtpd(auVar32,auVar32);
                auVar34 = divpd(auVar34,auVar54);
                auVar43._0_8_ = auVar34._0_8_ * local_348;
                auVar43._8_8_ = auVar34._8_8_ * dStack_340;
                auVar54 = blendvpd(local_368,auVar43,auVar24);
                dVar41 = (double)((ulonglong)(local_358 * auVar34._0_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_));
                dVar49 = (double)((ulonglong)(dStack_350 * auVar34._8_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_));
                dStack_3b0 = 0.0;
                local_3c8._8_4_ = SUB84(dVar50,0);
                local_3c8._0_8_ = dVar4;
                local_3c8._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
                local_3b8 = local_108;
                dVar51 = local_118;
                dVar4 = dStack_110;
              }
              dVar29 = dVar29 * dVar5;
              dVar3 = dVar3 * dVar38;
              lVar20 = lVar20 + 4;
            } while ((longlong)(int)lVar7 * 4 != lVar20);
            iVar10 = (int)plVar21[3];
            param_3 = local_3a0;
            lVar19 = local_3d0;
          }
          uVar14 = *(undefined8 *)(*(longlong *)(lVar19 + 0x3a0) + (longlong)iVar10 * 8);
          uVar9 = FUN_147c6b68e(uVar14,&local_358);
          param_2 = local_370;
          dVar40 = local_3b8;
          local_2c8 = ZEXT816(0);
          local_2d8 = ZEXT816(0);
          dVar36 = local_318._0_8_;
          dVar30 = local_318._8_8_;
          dVar5 = local_308._0_8_;
          dVar38 = local_308._8_8_;
          auVar34 = minpd(local_3c8,local_318);
          auVar44._8_8_ = dVar3;
          auVar44._0_8_ = dVar29;
          auVar46 = minpd(auVar44,local_308);
          auVar33._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
          auVar33._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
          iVar10 = movmskpd(uVar9,auVar33);
          auVar34._8_8_ = -(ulonglong)(auVar46._8_8_ < 0.0);
          auVar34._0_8_ = -(ulonglong)(auVar46._0_8_ < 0.0);
          uVar11 = movmskpd((int)uVar14,auVar34);
          dVar37 = auVar54._0_8_;
          dVar39 = auVar54._8_8_;
          uVar14 = local_3c8._0_8_;
          uVar8 = local_3c8._8_8_;
          if ((uVar11 & 0x3fffffff) == 0 && iVar10 == 0) {
            dVar50 = dVar41 * local_348 * 1.0 +
                     dVar39 * dStack_350 + dVar37 * local_358 * -1.0 + dVar49 * dStack_340;
            local_2f8._8_4_ = SUB84(dVar50,0);
            local_2f8._0_8_ =
                 dVar49 * local_348 * -1.0 +
                 dVar37 * dStack_350 + dVar39 * local_358 * 1.0 + dVar41 * dStack_340;
            local_2f8._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
            local_2e8._8_8_ =
                 dVar37 * local_348 * -1.0 +
                 ((local_358 * dVar41 * -1.0 + dVar39 * dStack_340) - dVar49 * dStack_350);
            local_2e8._0_8_ =
                 dVar39 * local_348 * 1.0 +
                 ((local_358 * dVar49 * 1.0 + dVar37 * dStack_340) - dVar41 * dStack_350);
            dVar37 = dVar51 * dVar36;
            dVar39 = dVar4 * dVar30;
            dVar41 = local_3b8 * dVar5;
            dVar49 = dStack_3b0 * dVar38;
            dVar50 = dVar39 * local_358 - dVar37 * dStack_350;
            dVar57 = dVar41 * dStack_350 - dVar39 * local_348;
            dVar58 = dVar37 * local_348 - dVar41 * local_358;
            dVar59 = dVar49 * dStack_340 - dVar49 * dStack_340;
            dVar57 = dVar57 + dVar57;
            dVar58 = dVar58 + dVar58;
            dVar50 = dVar50 + dVar50;
            dVar59 = dVar59 + dVar59;
            local_2d8._8_8_ =
                 (dVar57 * local_348 - dVar50 * local_358) + dStack_340 * dVar58 + dVar39 +
                 dStack_330;
            local_2d8._0_8_ =
                 (dVar50 * dStack_350 - local_348 * dVar58) + dStack_340 * dVar57 + dVar37 +
                 local_338;
            local_2c8._0_8_ =
                 (dVar58 * local_358 - dStack_350 * dVar57) + dStack_340 * dVar50 + dVar41 +
                 local_328;
            local_2c8._8_8_ =
                 (dVar59 * dStack_340 - dVar59 * dStack_340) + dStack_340 * dVar59 + dVar49 +
                 dStack_320;
          }
          else {
            local_398._8_8_ = dVar3 * dVar38;
            local_398._0_8_ = dVar29 * dVar5;
            dVar58 = dStack_350 + dStack_350;
            dVar52 = local_348 + local_348;
            dVar50 = local_358 * (local_358 + local_358);
            local_1a8 = (1.0 - (dVar50 + dStack_350 * dVar58)) * dVar5;
            dVar56 = (local_358 + local_358) * dStack_340;
            local_1b8 = (dVar58 * dStack_340 + local_358 * dVar52) * dVar5;
            local_1d8 = (dVar58 * local_358 - dVar52 * dStack_340) * dVar30;
            dStack_1b0 = (dVar52 * dStack_350 - dVar56) * dVar5;
            dVar59 = (double)local_3c8._0_8_ * dVar36;
            dVar57 = (double)local_3c8._8_8_ * dVar30;
            local_1f8 = (1.0 - (local_348 * dVar52 + dStack_350 * dVar58)) * dVar36;
            dStack_1d0 = (1.0 - (local_348 * dVar52 + dVar50)) * dVar30;
            dStack_1f0 = (dVar58 * local_358 + dVar52 * dStack_340) * dVar36;
            local_1c8 = (dVar52 * dStack_350 + dVar56) * dVar30;
            local_1e8 = (local_358 * dVar52 - dVar58 * dStack_340) * dVar36;
            uStack_1e0 = 0;
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_198 = local_338;
            dStack_190 = dStack_330;
            local_188 = local_328;
            uStack_180 = 0x3ff0000000000000;
            dVar50 = dVar49 + dVar49;
            dVar52 = dVar37 + dVar37;
            dVar58 = dVar41 * (dVar41 + dVar41);
            local_228 = (1.0 - (dVar58 + dVar49 * dVar50)) * dVar29;
            dVar56 = (dVar41 + dVar41) * dVar39;
            local_238 = (dVar41 * dVar52 + dVar50 * dVar39) * dVar29;
            local_258 = (dVar50 * dVar41 - dVar52 * dVar39) * (double)local_3c8._8_8_;
            dStack_230 = (dVar52 * dVar49 - dVar56) * dVar29;
            local_278 = (1.0 - (dVar37 * dVar52 + dVar49 * dVar50)) * (double)local_3c8._0_8_;
            dStack_250 = (1.0 - (dVar37 * dVar52 + dVar58)) * (double)local_3c8._8_8_;
            dStack_270 = (dVar50 * dVar41 + dVar52 * dVar39) * (double)local_3c8._0_8_;
            local_248 = (dVar52 * dVar49 + dVar56) * (double)local_3c8._8_8_;
            local_268 = (dVar41 * dVar52 - dVar50 * dVar39) * (double)local_3c8._0_8_;
            uStack_260 = 0;
            uStack_240 = 0;
            uStack_220 = 0;
            local_218._8_4_ = SUB84(dVar4,0);
            local_218._0_8_ = dVar51;
            local_218._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
            local_208 = local_3b8;
            uStack_200 = 0x3ff0000000000000;
            FUN_1447fea8d(&local_178,&local_278,&local_1f8);
            FUN_144a1c686(&local_178,0x3e45798ee0000000);
            auVar54 = _DAT_149934d80;
            auVar25._8_8_ = -(ulonglong)(0.0 <= dVar57);
            auVar25._0_8_ = -(ulonglong)(0.0 <= dVar59);
            auVar34 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar25);
            uVar22 = -(ulonglong)(0.0 <= dVar29 * dVar5);
            dVar41 = (double)(~uVar22 & 0xbff0000000000000 | uVar22 & 0x3ff0000000000000);
            dVar49 = auVar34._0_8_;
            local_168 = local_168 * dVar49;
            local_170 = local_170 * dVar49;
            local_178 = local_178 * dVar49;
            dVar49 = auVar34._8_8_;
            local_148 = local_148 * dVar49;
            local_150 = local_150 * dVar49;
            local_158 = dVar49 * local_158;
            local_128 = local_128 * dVar41;
            local_130 = local_130 * dVar41;
            local_138 = dVar41 * local_138;
            FUN_14481fd10(&local_298,&local_178);
            dVar41 = local_288 * local_288 + local_298 * local_298;
            dVar49 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
            auVar45._0_8_ = dVar41 + dVar49;
            auVar45._8_8_ = dVar41 + dVar49;
            auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_);
            auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_);
            auVar34 = sqrtpd(auVar45,auVar45);
            auVar54 = divpd(auVar54,auVar34);
            auVar53._0_8_ = auVar54._0_8_ * local_288;
            auVar53._8_8_ = auVar54._8_8_ * dStack_280;
            local_2e8 = blendvpd(local_368,auVar53,auVar26);
            local_2f8._8_8_ =
                 (ulonglong)(dStack_290 * auVar54._8_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_);
            local_2f8._0_8_ =
                 (ulonglong)(local_298 * auVar54._0_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_);
            local_2c8._8_8_ = 0;
            local_2c8._0_8_ = local_108;
            local_2d8._8_8_ = dStack_110;
            local_2d8._0_8_ = local_118;
          }
          lVar19 = local_3d0;
          local_2b8._8_4_ = SUB84((double)uVar8 * dVar30,0);
          local_2b8._0_8_ = (double)uVar14 * dVar36;
          local_2b8._12_4_ = (int)((ulonglong)((double)uVar8 * dVar30) >> 0x20);
          local_2a8._8_4_ = SUB84(dVar3 * dVar38,0);
          local_2a8._0_8_ = dVar29 * dVar5;
          local_2a8._12_4_ = (int)((ulonglong)(dVar3 * dVar38) >> 0x20);
          param_1 = *(longlong *)(*(longlong *)(local_3d0 + 0x3a0) + local_3a8 * 8);
          FUN_147c6b4a8(param_1,local_2f8);
          *(float *)(*(longlong *)(lVar19 + 0x3c0) + 0x48 + lVar16) =
               (float)SQRT(dVar40 * dVar40 + dVar51 * dVar51 + dVar4 * dVar4);
          plVar13 = local_378;
        }
      }
      plVar21 = plVar21 + 4;
    } while (plVar21 != plVar13);
  }
  if ((local_f0 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474ef0ca FUN_1474ef0ca body=5873 status=ok
// SIG undefined FUN_1474ef0ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474ef0ca(longlong param_1,char param_2,double *param_3,double *param_4,float param_5,
                  float *param_6,double *param_7,double *param_8,double *param_9,double *param_10,
                  double *param_11)

{
  float fVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  longlong lVar12;
  double *pdVar13;
  double *pdVar14;
  uint uVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined4 uVar42;
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  double dVar46;
  undefined4 uVar47;
  double dVar48;
  undefined1 auStack_3d8 [40];
  double local_3b0;
  double local_3a8;
  double local_3a0;
  double local_398;
  double local_390;
  double local_388;
  double local_380;
  double local_378;
  double local_370;
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  double local_348;
  double dStack_340;
  double local_330;
  double local_328;
  double local_320;
  double local_318;
  double local_310;
  double local_308;
  double dStack_300;
  undefined1 local_2f8 [16];
  double local_2e8;
  double dStack_2e0;
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
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
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
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
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
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
  
  auVar41 = _DAT_149934d80;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  if (param_2 == '\x02') {
    auVar29 = *(undefined1 (*) [16])(param_3 + 8);
    dVar2 = auVar29._0_8_;
    dVar18 = auVar29._8_8_;
    auVar30 = *(undefined1 (*) [16])(param_3 + 10);
    dVar26 = auVar30._0_8_;
    dVar21 = auVar30._8_8_;
    auVar33 = *(undefined1 (*) [16])(param_4 + 8);
    dVar20 = auVar33._0_8_;
    dVar22 = auVar33._8_8_;
    auVar3 = *(undefined1 (*) [16])(param_4 + 10);
    dVar40 = auVar3._0_8_;
    auVar29 = minpd(auVar33,auVar29);
    auVar33 = minpd(auVar3,auVar30);
    auVar30._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
    auVar30._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
    iVar11 = movmskpd((int)local_f0,auVar30);
    auVar29._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
    auVar29._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
    uVar15 = movmskpd((int)param_1,auVar29);
    if ((uVar15 & 0x3fffffff) == 0 && iVar11 == 0) {
      dVar44 = *param_4;
      dVar46 = param_4[1];
      dVar48 = param_4[2];
      dVar6 = param_4[3];
      dVar7 = *param_3;
      dVar8 = param_3[1];
      dVar9 = param_3[2];
      dVar10 = param_3[3];
      dVar24 = param_3[3];
      dVar28 = param_3[3];
      dVar36 = param_3[1];
      dVar17 = param_3[1];
      dVar43 = param_3[2];
      dVar38 = param_3[2];
      auVar41._0_8_ =
           dVar6 * dVar43 * 1.0 + ((*param_3 * dVar46 * 1.0 + dVar48 * dVar24) - dVar44 * dVar36);
      auVar41._8_8_ =
           dVar48 * dVar38 * -1.0 + ((*param_3 * dVar44 * -1.0 + dVar6 * dVar28) - dVar46 * dVar17);
      dVar23 = param_4[4] * dVar2;
      dVar25 = param_4[5] * dVar18;
      dVar37 = param_4[6] * dVar26;
      dVar39 = param_4[7] * dVar21;
      dVar31 = dVar25 * dVar7 - dVar8 * dVar23;
      dVar34 = dVar37 * dVar8 - dVar9 * dVar25;
      dVar32 = dVar23 * dVar9 - dVar7 * dVar37;
      dVar35 = dVar39 * dVar10 - dVar10 * dVar39;
      dVar34 = dVar34 + dVar34;
      dVar32 = dVar32 + dVar32;
      dVar31 = dVar31 + dVar31;
      dVar35 = dVar35 + dVar35;
      local_118 = (dVar31 * dVar8 - dVar9 * dVar32) + dVar24 * dVar34 + dVar23 + param_3[4];
      dStack_110 = (dVar34 * dVar9 - dVar31 * dVar7) + dVar28 * dVar32 + dVar25 + param_3[5];
      local_108 = (dVar32 * dVar7 - dVar8 * dVar34) + dVar24 * dVar31 + dVar37 + param_3[6];
      dVar26 = dVar40 * dVar26;
      dVar40 = auVar3._8_8_ * dVar21;
      dVar2 = dVar20 * dVar2;
      dVar20 = dVar22 * dVar18;
      dVar18 = dVar46 * dVar43 * -1.0 + dVar48 * dVar36 + dVar6 * *param_3 * 1.0 + dVar44 * dVar24;
      dVar21 = dVar44 * dVar38 * 1.0 + dVar6 * dVar17 + dVar48 * *param_3 * -1.0 + dVar46 * dVar28;
      dVar22 = (dVar35 * dVar10 - dVar35 * dVar10) + dVar28 * dVar35 + dVar39 + param_3[7];
    }
    else {
      dVar36 = *param_3;
      dVar38 = param_3[1];
      dVar43 = param_3[2];
      dVar23 = dVar38 + dVar38;
      dVar25 = dVar43 + dVar43;
      dVar28 = dVar36 * (dVar36 + dVar36);
      local_1a8 = (1.0 - (dVar28 + dVar38 * dVar23)) * dVar26;
      dVar24 = param_3[3];
      dVar37 = dVar25 * dVar24;
      dVar39 = (dVar36 + dVar36) * param_3[3];
      dVar24 = dVar23 * dVar24;
      local_1b8 = (dVar24 + *param_3 * dVar25) * dVar26;
      dVar28 = (DAT_149934d80._8_8_ - (dVar43 * dVar25 + dVar28)) * dVar18;
      dVar17 = (dVar23 * dVar36 + dVar37) * dVar2;
      local_1c8 = (dVar25 * dVar38 + dVar39) * dVar18;
      dStack_1b0 = (dVar25 * dVar38 - dVar39) * dVar26;
      local_1e8 = (*param_3 * dVar25 - dVar24) * dVar2;
      local_1f8._8_4_ = SUB84(dVar17,0);
      local_1f8._0_8_ = ((double)DAT_149934d80 - (dVar43 * dVar25 + dVar38 * dVar23)) * dVar2;
      local_1f8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      uStack_1e0 = 0;
      local_1d8._8_4_ = SUB84(dVar28,0);
      local_1d8._0_8_ = (dVar23 * dVar36 - dVar37) * dVar18;
      local_1d8._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      local_198 = param_3[4];
      dStack_190 = param_3[5];
      local_188 = param_3[6];
      uStack_180 = 0x3ff0000000000000;
      dVar17 = *param_4;
      dVar36 = param_4[1];
      dVar38 = param_4[2];
      dVar43 = dVar36 + dVar36;
      dVar23 = dVar38 + dVar38;
      dVar28 = dVar17 * (dVar17 + dVar17);
      local_228 = (1.0 - (dVar28 + dVar36 * dVar43)) * dVar40;
      dVar24 = param_4[3];
      dVar25 = dVar23 * dVar24;
      dVar37 = (dVar17 + dVar17) * param_4[3];
      dVar24 = dVar43 * dVar24;
      local_238 = (dVar24 + *param_4 * dVar23) * dVar40;
      dStack_230 = (dVar23 * dVar36 - dVar37) * dVar40;
      local_278 = ((double)DAT_149934d80 - (dVar38 * dVar23 + dVar36 * dVar43)) * dVar20;
      dVar28 = (DAT_149934d80._8_8_ - (dVar38 * dVar23 + dVar28)) * dVar22;
      dStack_270 = (dVar43 * dVar17 + dVar25) * dVar20;
      local_248 = (dVar23 * dVar36 + dVar37) * dVar22;
      local_268 = (*param_4 * dVar23 - dVar24) * dVar20;
      uStack_260 = 0;
      local_258._8_4_ = SUB84(dVar28,0);
      local_258._0_8_ = (dVar43 * dVar17 - dVar25) * dVar22;
      local_258._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
      uStack_240 = 0;
      uStack_220 = 0;
      local_218 = param_4[4];
      dStack_210 = param_4[5];
      local_208 = param_4[6];
      uStack_200 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_178);
      FUN_144a1c686(&local_178,0x3e45798ee0000000);
      auVar33._8_8_ = -(ulonglong)(0.0 <= dVar18 * dVar22);
      auVar33._0_8_ = -(ulonglong)(0.0 <= dVar2 * dVar20);
      auVar29 = blendvpd(_DAT_149936790,auVar41,auVar33);
      uVar16 = -(ulonglong)(0.0 <= dVar26 * dVar40);
      dVar24 = (double)(~uVar16 & 0xbff0000000000000 | uVar16 & 0x3ff0000000000000);
      dVar28 = auVar29._0_8_;
      local_168 = local_168 * dVar28;
      dStack_170 = dStack_170 * dVar28;
      local_178 = local_178 * dVar28;
      dVar28 = auVar29._8_8_;
      local_148 = local_148 * dVar28;
      local_150 = local_150 * dVar28;
      local_158 = dVar28 * local_158;
      local_128 = local_128 * dVar24;
      local_130 = local_130 * dVar24;
      local_138 = dVar24 * local_138;
      FUN_14481fd10(&local_298,&local_178);
      dVar24 = local_288 * local_288 + local_298 * local_298;
      dVar28 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
      auVar27._0_8_ = dVar24 + dVar28;
      auVar27._8_8_ = dVar24 + dVar28;
      auVar19._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar27._8_8_);
      auVar19._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar27._0_8_);
      auVar29 = sqrtpd(auVar27,auVar27);
      auVar29 = divpd(auVar41,auVar29);
      auVar45._0_8_ = auVar29._0_8_ * local_288;
      auVar45._8_8_ = auVar29._8_8_ * dStack_280;
      auVar41 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar45,auVar19);
      dVar26 = dVar26 * dVar40;
      dVar40 = dVar21 * auVar3._8_8_;
      dVar2 = dVar2 * dVar20;
      dVar20 = dVar18 * dVar22;
      dVar18 = (double)((ulonglong)(local_298 * auVar29._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar27._0_8_));
      dVar21 = (double)((ulonglong)(dStack_290 * auVar29._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar27._8_8_));
      dVar22 = 0.0;
    }
  }
  else {
    auVar41 = _DAT_14c846490;
    dVar26 = DAT_14c8464d0;
    dVar40 = dRam000000014c8464d8;
    dVar2 = DAT_14c8464c0;
    dVar20 = DAT_14c8464c8;
    dVar18 = DAT_14c846480;
    dVar21 = DAT_14c846488;
    local_118 = DAT_14c8464a0;
    dStack_110 = DAT_14c8464a8;
    local_108 = DAT_14c8464b0;
    dVar22 = DAT_14c8464b8;
    if ((param_2 != '\x01') && (param_2 == '\0')) {
      local_118 = param_3[4];
      dStack_110 = param_3[5];
      local_108 = param_3[6];
      auVar41 = *(undefined1 (*) [16])(param_3 + 2);
      dVar26 = param_3[10];
      dVar40 = param_3[0xb];
      dVar2 = param_3[8];
      dVar20 = param_3[9];
      dVar18 = *param_3;
      dVar21 = param_3[1];
      dVar22 = param_3[7];
    }
  }
  *param_7 = dVar18;
  param_7[1] = dVar21;
  *(undefined1 (*) [16])(param_7 + 2) = auVar41;
  param_7[4] = local_118;
  param_7[5] = dStack_110;
  param_7[6] = local_108;
  param_7[7] = dVar22;
  auVar5._8_4_ = SUB84(dVar20,0);
  auVar5._0_8_ = dVar2;
  auVar5._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  *(undefined1 (*) [16])(param_7 + 8) = auVar5;
  auVar3._8_4_ = SUB84(dVar40,0);
  auVar3._0_8_ = dVar26;
  auVar3._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
  *(undefined1 (*) [16])(param_7 + 10) = auVar3;
  param_8[2] = DAT_14c8464f0;
  dVar2 = DAT_14c8464e8;
  *param_8 = DAT_14c8464e0;
  param_8[1] = dVar2;
  param_9[2] = DAT_14c8464f0;
  dVar2 = DAT_14c8464e8;
  *param_9 = DAT_14c8464e0;
  param_9[1] = dVar2;
  param_10[2] = DAT_14c8464f0;
  dVar2 = DAT_14c8464e8;
  *param_10 = DAT_14c8464e0;
  param_10[1] = dVar2;
  param_11[2] = DAT_14c8464f0;
  dVar2 = DAT_14c8464e8;
  *param_11 = DAT_14c8464e0;
  param_11[1] = dVar2;
  dVar26 = DAT_14c846520;
  dVar2 = DAT_14c846518;
  if (DAT_14caab590 == '\0') {
    param_7[8] = DAT_14c846510;
    param_7[9] = dVar2;
    param_7[10] = dVar26;
    param_7[0xb] = 0.0;
  }
  if ((1e-08 <= param_5) && ((*param_6 != 0.0 || (NAN(*param_6))))) {
    if (param_2 == '\x01') {
      param_8[2] = *(double *)(param_6 + 0x10);
      dVar2 = *(double *)(param_6 + 0xe);
      *param_8 = *(double *)(param_6 + 0xc);
      param_8[1] = dVar2;
      param_9[2] = *(double *)(param_6 + 0x16);
      dVar2 = *(double *)(param_6 + 0x14);
      *param_9 = *(double *)(param_6 + 0x12);
      param_9[1] = dVar2;
    }
    else {
      dVar38 = (double)param_5;
      dVar21 = param_3[5] - *(double *)(param_1 + 0x8a8);
      uVar42 = SUB84(dVar21,0);
      uVar47 = (undefined4)((ulonglong)dVar21 >> 0x20);
      dVar40 = (param_3[6] - *(double *)(param_1 + 0x8b0)) / dVar38;
      dVar21 = dVar21 / dVar38;
      dVar18 = (param_3[4] - *(double *)(param_1 + 0x8a0)) / dVar38;
      local_178 = *param_3;
      dStack_170 = param_3[1];
      local_168 = param_3[2];
      dStack_160 = param_3[3];
      local_1f8 = *(undefined1 (*) [16])(param_1 + 0x880);
      local_1e8 = *(double *)(param_1 + 0x890);
      uStack_1e0 = *(undefined8 *)(param_1 + 0x898);
      FUN_140185264(&local_278);
      dVar28 = local_278;
      dVar2 = local_278;
      local_3b0 = dStack_270;
      local_370 = local_268;
      dVar17 = 1.0 / dVar38;
      dVar20 = (dVar40 - *(double *)(param_1 + 0x950)) * dVar17;
      dVar22 = (dVar21 - *(double *)(param_1 + 0x948)) * dVar17;
      dVar24 = (dVar18 - *(double *)(param_1 + 0x940)) * dVar17;
      dVar36 = (local_268 - *(double *)(param_1 + 0x968)) * dVar17;
      dVar26 = (dStack_270 - *(double *)(param_1 + 0x960)) * dVar17;
      dVar43 = (local_278 - *(double *)(param_1 + 0x958)) * dVar17;
      pdVar13 = param_3;
      pdVar14 = (double *)(param_1 + 0x880);
      for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
        *pdVar14 = *pdVar13;
        pdVar13 = pdVar13 + 1;
        pdVar14 = pdVar14 + 1;
      }
      *(double *)(param_1 + 0x940) = dVar18;
      local_2f8._8_4_ = uVar42;
      local_2f8._0_8_ = dVar21;
      local_2f8._12_4_ = uVar47;
      *(double *)(param_1 + 0x948) = dVar21;
      *(double *)(param_1 + 0x950) = dVar40;
      *(double *)(param_1 + 0x958) = local_278;
      *(double *)(param_1 + 0x960) = dStack_270;
      *(double *)(param_1 + 0x968) = local_268;
      local_378 = dVar40;
      if (param_2 == '\x02') {
        local_368._8_4_ = uVar42;
        local_368._0_8_ = dVar24;
        local_368._12_4_ = uVar47;
        local_358._8_4_ = uVar42;
        local_358._0_8_ = dVar22;
        local_358._12_4_ = uVar47;
        dVar22 = param_4[4];
        dVar24 = param_4[5];
        dVar40 = param_4[6];
        dVar21 = *(double *)(param_1 + 0x910);
        dVar23 = *(double *)(param_1 + 0x900);
        dVar25 = *(double *)(param_1 + 0x908);
        local_178 = *param_4;
        dStack_170 = param_4[1];
        local_168 = param_4[2];
        dStack_160 = param_4[3];
        local_1f8 = *(undefined1 (*) [16])(param_1 + 0x8e0);
        local_1e8 = *(double *)(param_1 + 0x8f0);
        uStack_1e0 = *(undefined8 *)(param_1 + 0x8f8);
        local_3a8 = dVar17;
        local_3a0 = dVar20;
        local_398 = dVar26;
        local_390 = dVar36;
        local_388 = dVar43;
        FUN_140185264(&local_278);
        dVar36 = *param_3;
        dVar43 = param_3[1];
        dVar37 = param_3[2];
        dVar39 = param_3[3];
        dVar44 = ((dVar22 - dVar23) / dVar38) * param_3[8];
        dVar46 = ((dVar24 - dVar25) / dVar38) * param_3[9];
        dVar48 = ((dVar40 - dVar21) / dVar38) * param_3[10];
        dVar40 = param_3[0xb] * 0.0;
        dVar26 = param_3[3];
        dVar20 = param_3[3];
        dVar21 = dVar46 * dVar36 - dVar44 * dVar43;
        dVar22 = dVar48 * dVar43 - dVar46 * dVar37;
        dVar24 = dVar44 * dVar37 - dVar48 * dVar36;
        dStack_2a0 = dVar40 * dVar39 - dVar40 * dVar39;
        dVar22 = dVar22 + dVar22;
        dVar24 = dVar24 + dVar24;
        dVar21 = dVar21 + dVar21;
        dStack_2a0 = dStack_2a0 + dStack_2a0;
        dVar38 = param_3[8] * local_278;
        dVar23 = param_3[9] * dStack_270;
        dVar17 = local_268 * param_3[10];
        dVar40 = param_3[0xb] * 0.0;
        dVar32 = dVar23 * dVar36 - dVar38 * dVar43;
        dVar35 = dVar17 * dVar43 - dVar23 * dVar37;
        dVar25 = dVar38 * dVar37 - dVar36 * dVar17;
        dStack_340 = dVar40 * dVar39 - dVar39 * dVar40;
        dVar35 = dVar35 + dVar35;
        dVar25 = dVar25 + dVar25;
        dVar32 = dVar32 + dVar32;
        dStack_340 = dStack_340 + dStack_340;
        dVar39 = dVar21 * dVar26 + dVar48 + (dVar24 * dVar36 - dVar22 * dVar43);
        dVar40 = (dVar21 * dVar43 - dVar24 * dVar37) + dVar26 * dVar22 + dVar44;
        local_2e8 = (dVar37 * dVar22 - dVar36 * dVar21) + dVar20 * dVar24 + dVar46;
        uVar42 = (undefined4)((ulonglong)local_2e8 >> 0x20);
        dVar21 = dVar32 * dVar26 + dVar17 + (dVar25 * dVar36 - dVar35 * dVar43);
        dVar26 = (dVar32 * dVar43 - dVar25 * dVar37) + dVar26 * dVar35 + dVar38;
        dStack_300 = (dVar37 * dVar35 - dVar36 * dVar32) + dVar20 * dVar25 + dVar23;
        local_2a8 = dVar39 - *(double *)(param_1 + 0x980);
        local_328 = local_2e8 - *(double *)(param_1 + 0x978);
        local_320 = dVar40 - *(double *)(param_1 + 0x970);
        local_348 = dVar21 - *(double *)(param_1 + 0x998);
        local_310 = dStack_300 - *(double *)(param_1 + 0x990);
        local_318 = dVar26 - *(double *)(param_1 + 0x988);
        pdVar13 = param_4;
        pdVar14 = (double *)(param_1 + 0x8e0);
        for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
          *pdVar14 = *pdVar13;
          pdVar13 = pdVar13 + 1;
          pdVar14 = pdVar14 + 1;
        }
        local_2d8._8_4_ = SUB84(local_2e8,0);
        local_2d8._0_8_ = dVar40;
        local_2d8._12_4_ = uVar42;
        auVar4._8_4_ = SUB84(local_2e8,0);
        auVar4._0_8_ = dVar40;
        auVar4._12_4_ = uVar42;
        *(undefined1 (*) [16])(param_1 + 0x970) = auVar4;
        *(double *)(param_1 + 0x980) = dVar39;
        *(double *)(param_1 + 0x988) = dVar26;
        *(double *)(param_1 + 0x990) = dStack_300;
        *(double *)(param_1 + 0x998) = dVar21;
        dVar21 = dVar21 + local_370;
        local_308 = dStack_300 + local_3b0;
        dVar26 = dVar26 + dVar28;
        local_2b8 = dVar21 * dVar21 + dVar26 * dVar26 + local_308 * local_308;
        fVar1 = param_6[3];
        uVar15 = -(uint)(fVar1 * fVar1 < (float)local_2b8);
        dVar22 = param_4[4] * param_3[8];
        dVar24 = param_4[5] * param_3[9];
        dVar37 = param_4[6] * param_3[10];
        dVar43 = *param_3;
        dVar23 = param_3[1];
        dVar25 = param_3[2];
        dVar17 = dVar24 * dVar43 - dVar22 * dVar23;
        dVar36 = dVar37 * dVar23 - dVar24 * dVar25;
        dVar38 = dVar22 * dVar25 - dVar43 * dVar37;
        dVar36 = dVar36 + dVar36;
        dVar38 = dVar38 + dVar38;
        dVar17 = dVar17 + dVar17;
        dVar20 = param_3[3];
        dVar37 = dVar17 * dVar20 + dVar37 + (dVar38 * dVar43 - dVar36 * dVar23);
        dVar23 = (dVar17 * dVar23 - dVar38 * dVar25) + dVar20 * dVar36 + dVar22;
        dVar36 = (dVar25 * dVar36 - dVar43 * dVar17) + param_3[3] * dVar38 + dVar24;
        dVar17 = (double)(float)(~uVar15 & 0x3f800000 |
                                (uint)((1.0 / SQRT((float)local_2b8)) * fVar1) & uVar15);
        local_330 = (double)param_6[1];
        local_2c8._8_4_ = SUB84(dVar36,0);
        local_2c8._0_8_ = dVar36;
        local_2c8._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
        dVar24 = DAT_14c8464f0;
        dVar20 = DAT_14c8464e0;
        dVar22 = DAT_14c8464e8;
        if (0.0001 <= param_6[2]) {
          dVar28 = dVar28 * dVar17;
          dVar22 = (local_370 * dVar17 * dVar23 - dVar37 * dVar28) +
                   (double)local_2f8._0_8_ + local_2e8;
          dVar20 = (local_3b0 * dVar17 * dVar37 - dVar36 * local_370 * dVar17) + dVar18 + dVar40;
          dVar24 = ((dVar28 * dVar36 - dVar23 * local_3b0 * dVar17) + local_378 + dVar39) *
                   local_330;
          dVar40 = (double)param_6[2];
          dVar18 = dVar24 * dVar24 + dVar20 * dVar20 + dVar22 * dVar22;
          if (dVar40 * dVar40 < dVar18) {
            dVar40 = (1.0 / SQRT(dVar18)) * dVar40;
            dVar24 = dVar24 * dVar40;
            dVar20 = dVar20 * dVar40;
            dVar22 = dVar22 * dVar40;
          }
        }
        dVar40 = *(double *)(param_6 + 0x10);
        dVar18 = *(double *)(param_6 + 0xe);
        *param_8 = dVar20 + *(double *)(param_6 + 0xc);
        param_8[1] = dVar22 + dVar18;
        param_8[2] = dVar24 + dVar40;
        dVar20 = DAT_14c8464f0;
        dVar40 = DAT_14c8464e8;
        dVar18 = DAT_14c8464e0;
        if ((0.0001 <= param_6[3]) &&
           (dVar22 = (double)param_6[3], dVar20 = dVar21, dVar40 = local_308, dVar18 = dVar26,
           dVar22 * dVar22 < local_2b8)) {
          dVar22 = (1.0 / SQRT(local_2b8)) * dVar22;
          dVar20 = dVar21 * dVar22;
          dVar40 = local_308 * dVar22;
          dVar18 = dVar26 * dVar22;
        }
        dVar26 = *(double *)(param_6 + 0x16);
        dVar21 = *(double *)(param_6 + 0x14);
        *param_9 = dVar18 + *(double *)(param_6 + 0x12);
        param_9[1] = dVar40 + dVar21;
        param_9[2] = dVar20 + dVar26;
        dVar20 = DAT_14c8464e8;
        dVar40 = DAT_14c8464e0;
        dVar26 = DAT_14c8464f0;
        if (0.0001 <= param_6[4]) {
          dVar20 = local_358._0_8_ + local_328 * local_3a8 +
                   (dVar17 * local_390 * dVar23 - dVar37 * local_388 * dVar17);
          dVar40 = local_368._0_8_ + local_320 * local_3a8 +
                   (local_398 * dVar17 * dVar37 - dVar17 * local_390 * dVar36);
          dVar26 = (local_3a0 + local_2a8 * local_3a8 +
                   (local_388 * dVar17 * dVar36 - dVar23 * local_398 * dVar17)) * local_330;
          dVar18 = (double)param_6[4];
          dVar21 = dVar26 * dVar26 + dVar40 * dVar40 + dVar20 * dVar20;
          if (dVar18 * dVar18 < dVar21) {
            dVar18 = (1.0 / SQRT(dVar21)) * dVar18;
            dVar20 = dVar20 * dVar18;
            dVar40 = dVar40 * dVar18;
            dVar26 = dVar26 * dVar18;
          }
        }
        *param_10 = dVar40;
        param_10[1] = dVar20;
        param_10[2] = dVar26;
        dVar40 = DAT_14c8464e0;
        dVar20 = DAT_14c8464f0;
        dVar26 = DAT_14c8464e8;
        if (0.0001 <= param_6[5]) {
          dVar20 = local_390 + local_348 * local_3a8;
          dVar26 = local_398 + local_310 * local_3a8;
          dVar40 = local_388 + local_318 * local_3a8;
          dVar18 = (double)param_6[5];
          dVar21 = dVar20 * dVar20 + dVar40 * dVar40 + dVar26 * dVar26;
          if (dVar18 * dVar18 < dVar21) {
            dVar18 = (1.0 / SQRT(dVar21)) * dVar18;
            dVar40 = dVar40 * dVar18;
            dVar20 = dVar20 * dVar18;
            dVar26 = dVar26 * dVar18;
          }
        }
        *param_11 = dVar40;
        param_11[1] = dVar26;
        param_11[2] = dVar20;
        local_380 = dVar2;
        dStack_2e0 = local_2e8;
        dStack_2b0 = dStack_340;
      }
      else if (param_2 == '\0') {
        fVar1 = param_6[1];
        dVar28 = DAT_14c8464e0;
        dVar2 = DAT_14c8464f0;
        dVar17 = DAT_14c8464e8;
        if (0.0001 <= param_6[2]) {
          dVar2 = dVar40 * (double)fVar1;
          dVar40 = (double)param_6[2];
          dVar38 = dVar2 * dVar2 + dVar18 * dVar18 + dVar21 * dVar21;
          dVar28 = dVar18;
          dVar17 = dVar21;
          if (dVar40 * dVar40 < dVar38) {
            dVar40 = (1.0 / SQRT(dVar38)) * dVar40;
            dVar28 = dVar18 * dVar40;
            dVar2 = dVar2 * dVar40;
            dVar17 = dVar21 * dVar40;
          }
        }
        dVar40 = *(double *)(param_6 + 0x10);
        dVar18 = *(double *)(param_6 + 0xe);
        *param_8 = dVar28 + *(double *)(param_6 + 0xc);
        param_8[1] = dVar17 + dVar18;
        param_8[2] = dVar2 + dVar40;
        dVar40 = DAT_14c8464e8;
        dVar18 = DAT_14c8464e0;
        dVar2 = DAT_14c8464f0;
        if (0.0001 <= param_6[3]) {
          dVar21 = (double)param_6[3];
          dVar28 = local_268 * local_268 + local_278 * local_278 + dStack_270 * dStack_270;
          dVar40 = dStack_270;
          dVar18 = local_278;
          dVar2 = local_268;
          if (dVar21 * dVar21 < dVar28) {
            dVar21 = (1.0 / SQRT(dVar28)) * dVar21;
            dVar2 = local_268 * dVar21;
            dVar40 = dStack_270 * dVar21;
            dVar18 = local_278 * dVar21;
          }
        }
        dVar21 = *(double *)(param_6 + 0x16);
        dVar28 = *(double *)(param_6 + 0x14);
        *param_9 = dVar18 + *(double *)(param_6 + 0x12);
        param_9[1] = dVar40 + dVar28;
        param_9[2] = dVar2 + dVar21;
        dVar40 = DAT_14c8464e8;
        dVar18 = DAT_14c8464e0;
        dVar2 = DAT_14c8464f0;
        if (0.0001 <= param_6[4]) {
          dVar2 = dVar20 * (double)fVar1;
          dVar20 = (double)param_6[4];
          dVar21 = dVar2 * dVar2 + dVar24 * dVar24 + dVar22 * dVar22;
          dVar40 = dVar22;
          dVar18 = dVar24;
          if (dVar20 * dVar20 < dVar21) {
            dVar20 = (1.0 / SQRT(dVar21)) * dVar20;
            dVar40 = dVar22 * dVar20;
            dVar18 = dVar24 * dVar20;
            dVar2 = dVar2 * dVar20;
          }
        }
        *param_10 = dVar18;
        param_10[1] = dVar40;
        param_10[2] = dVar2;
        dVar20 = DAT_14c8464e0;
        dVar40 = DAT_14c8464f0;
        dVar2 = DAT_14c8464e8;
        if (0.0001 <= param_6[5]) {
          dVar18 = (double)param_6[5];
          dVar21 = dVar36 * dVar36 + dVar43 * dVar43 + dVar26 * dVar26;
          dVar20 = dVar43;
          dVar40 = dVar36;
          dVar2 = dVar26;
          if (dVar18 * dVar18 < dVar21) {
            dVar18 = (1.0 / SQRT(dVar21)) * dVar18;
            dVar20 = dVar43 * dVar18;
            dVar40 = dVar36 * dVar18;
            dVar2 = dVar26 * dVar18;
          }
        }
        *param_11 = dVar20;
        param_11[1] = dVar2;
        param_11[2] = dVar40;
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474f07bc FUN_1474f07bc body=126 status=ok
// SIG undefined FUN_1474f07bc(void)

void FUN_1474f07bc(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401a2688(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_144893a1c(param_1 + 0x18,0);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    FUN_1447d6d9c(param_1 + 0x38,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_144893a1c(param_1 + 0x28,0);
    return;
  }
  return;
}



// FUNCTION 1474f083a FUN_1474f083a body=935 status=ok
// SIG undefined FUN_1474f083a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474f083a(longlong param_1,double *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auStack_1c8 [32];
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  undefined1 local_188 [16];
  double local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  iVar2 = *(int *)(param_1 + 0x518);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x510);
    lVar12 = 0;
    do {
      if ((*(longlong *)(lVar3 + lVar12) != 0) &&
         (lVar4 = *(longlong *)(lVar3 + 8 + lVar12), lVar4 != 0)) {
        FUN_144ae2166(lVar4,&local_148,*(undefined4 *)(lVar3 + 0x10 + lVar12));
        dVar7 = local_128 - param_2[4];
        dVar8 = dStack_120 - param_2[5];
        dVar13 = local_118 - param_2[6];
        dVar10 = -*param_2;
        dVar11 = -param_2[1];
        dVar5 = param_2[2] * -1.0;
        dVar6 = param_2[3] * 1.0;
        dVar18 = dVar7 * dVar5 - dVar10 * dVar13;
        dVar14 = dVar8 * dVar10 - dVar7 * dVar11;
        dVar15 = dVar13 * dVar11 - dVar8 * dVar5;
        dVar15 = dVar15 + dVar15;
        dVar18 = dVar18 + dVar18;
        dVar14 = dVar14 + dVar14;
        auVar1 = *(undefined1 (*) [16])(param_2 + 8);
        auVar16 = divpd(_DAT_149934d80,auVar1);
        auVar17._8_8_ = 0x3ff0000000000000;
        auVar17._0_8_ = param_2[10];
        auVar17 = divpd(ZEXT816(0x3ff0000000000000),auVar17);
        dVar9 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar16._8_8_) *
                (dVar14 * *param_2 + dVar5 * dVar15 + dVar6 * dVar18 + dVar8);
        local_178 = (dVar6 * dVar14 + dVar13 + (dVar18 * dVar10 - dVar15 * dVar11)) *
                    (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_2[10])) & auVar17._0_8_);
        dVar10 = param_2[1];
        dVar8 = param_2[1];
        local_188._8_4_ = SUB84(dVar9,0);
        local_188._0_8_ =
             (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar16._0_8_) *
             ((dVar14 * dVar11 - dVar18 * dVar5) + dVar6 * dVar15 + dVar7);
        local_188._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        uStack_170 = 0;
        local_1a8 = dStack_140 * dVar5 * -1.0 +
                    ((dVar6 * local_148 - *param_2 * dStack_130 * 1.0) - dVar10 * local_138);
        dStack_1a0 = local_148 * dVar5 * 1.0 +
                     ((dVar6 * dStack_140 - *param_2 * local_138 * -1.0) - dVar8 * dStack_130);
        local_198 = dStack_130 * dVar5 * 1.0 +
                    dVar10 * local_148 + (dVar6 * local_138 - *param_2 * dStack_140 * 1.0);
        dStack_190 = local_138 * dVar5 * -1.0 +
                     dVar8 * dStack_140 + (dVar6 * dStack_130 - *param_2 * local_148 * -1.0);
        local_168 = DAT_14c846510;
        uStack_160 = DAT_14c846518;
        local_158 = DAT_14c846520;
        uStack_150 = 0;
        FUN_147c6b5fc(*(undefined8 *)(lVar3 + lVar12),&local_1a8);
      }
      lVar12 = lVar12 + 0x18;
    } while ((longlong)iVar2 * 0x18 != lVar12);
  }
  if ((local_e0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474f0be2 FUN_1474f0be2 body=451 status=ok
// SIG undefined FUN_1474f0be2(void)

void FUN_1474f0be2(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  void *_Dst;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  longlong local_a8 [5];
  void **local_80;
  void *local_78;
  undefined8 uStack_70;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_1448759c8(param_1,0);
  }
  lVar3 = FUN_144a81888(param_2);
  if (lVar3 != 0) {
    iVar2 = FUN_147a0df7e(param_2);
    if (0 < iVar2) {
      local_68[2] = 0;
      local_68[3] = 0;
      local_68[0] = 0;
      local_68[1] = 0;
      local_b8 = 1;
      FUN_140729f52(param_2,local_68 + 2,local_68,0);
      local_78 = (void *)0x0;
      uStack_70 = 0;
      plVar4 = (longlong *)FUN_144a81888(param_2);
      lVar3 = (**(code **)(*plVar4 + 0x310))(plVar4);
      iVar1 = *(int *)(lVar3 + 0x28);
      uStack_70 = CONCAT44(uStack_70._4_4_,iVar1);
      _Dst = (void *)0x0;
      if ((longlong)iVar1 != 0) {
        FUN_1401c3474(&local_78);
        _Dst = local_78;
      }
      memset(_Dst,0,(longlong)iVar1);
      local_80 = &local_78;
      local_a8[4] = param_1;
      if (iVar2 != 1) {
        uVar5 = iVar2 + 1;
        do {
          local_a8[2] = 0;
          local_a8[3] = 0;
          local_a8[0] = 0;
          local_a8[1] = 0;
          local_b8 = 1;
          FUN_140729f52(param_2,local_a8 + 2,local_a8,uVar5 - 2);
          FUN_1432a1856(local_a8 + 4,local_a8 + 2);
          if (local_a8[0] != 0) {
            FUN_1400020a8();
          }
          if (local_a8[2] != 0) {
            FUN_1400020a8();
          }
          uVar5 = uVar5 - 1;
        } while (2 < uVar5);
      }
      FUN_1432a1856(local_a8 + 4,local_68 + 2);
      if (local_78 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
      if (local_68[2] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474f0da6 FUN_1474f0da6 body=65 status=ok
// SIG undefined FUN_1474f0da6(void)

longlong FUN_1474f0da6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0xd8);
  if ((lVar2 == 0) || ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0)) {
    if (param_2 == 0) {
      return 0;
    }
    plVar1 = *(longlong **)(param_2 + 0x20);
    lVar2 = 0;
    if ((plVar1 != (longlong *)0x0) && (*(char *)(param_1 + 0xe0) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0001474f0ddd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (**(code **)(*plVar1 + 0xb98))(plVar1);
      return lVar2;
    }
  }
  return lVar2;
}



// FUNCTION 1474f0de8 FUN_1474f0de8 body=120 status=ok
// SIG undefined FUN_1474f0de8(void)

void FUN_1474f0de8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x518);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x510);
    lVar3 = 0;
    do {
      FUN_147c6d1d6(*(undefined8 *)(param_1 + 0x348),*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x518) = 0;
  if (-1 < *(int *)(param_1 + 0x51c)) {
    return;
  }
  FUN_1474ff83c(param_1 + 0x510);
  return;
}



// FUNCTION 1474f0e60 FUN_1474f0e60 body=66 status=ok
// SIG undefined FUN_1474f0e60(void)

void FUN_1474f0e60(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147500b66(param_1,iVar1);
  }
  FUN_147500b1a((longlong)iVar1 * 0x50 + *param_1,param_2);
  return;
}



// FUNCTION 1474f0ea2 FUN_1474f0ea2 body=390 status=ok
// SIG undefined FUN_1474f0ea2(void)

void FUN_1474f0ea2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x520);
  lVar2 = param_1 + 0x530;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x548) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar6 = *(int *)(param_1 + 0x548);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar6) || (uStack_60 != lVar2)) {
    do {
      lVar3 = *local_90;
      lVar7 = (longlong)iStack_74 * 0x20;
      plVar4 = *(longlong **)(lVar3 + lVar7);
      if ((plVar4 == (longlong *)0x0 ||
           DAT_14c760f94 < *(int *)(param_1 + 0x570) - *(int *)(lVar3 + 0x10 + lVar7)) ||
         ((*(uint *)(plVar4 + 1) >> 0x1e & 1) != 0)) {
LAB_1474f0fb6:
        *(undefined1 *)(lVar3 + lVar7 + 0x14) = 1;
      }
      else {
        lVar5 = (**(code **)(*plVar4 + 0x7b8))(plVar4,0,1,0xffffffff);
        if (lVar5 == 0) goto LAB_1474f0fb6;
        lVar5 = (**(code **)(*plVar4 + 0x7b8))(plVar4,0,1,0xffffffff);
        if (*(longlong *)(lVar5 + 0x138) == 0) goto LAB_1474f0fb6;
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar6));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474f1044 FUN_1474f1044 body=447 status=ok
// SIG undefined FUN_1474f1044(void)

void FUN_1474f1044(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  int iStack_84;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x520);
  local_78 = 0;
  uStack_70 = 0;
  lVar4 = param_1 + 0x530;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar4;
  if (*(int *)(param_1 + 0x548) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x548);
  }
  uStack_80 = CONCAT44(uStack_44,uStack_48);
  local_88 = local_50;
  iStack_84 = iStack_4c;
  local_98 = (undefined4)local_60;
  uStack_94 = local_60._4_4_;
  uStack_90 = (undefined4)uStack_58;
  uStack_8c = uStack_58._4_4_;
  local_a0 = plVar1;
  if ((iStack_4c != iVar5) || (uStack_58 != lVar4)) {
    do {
      if (*(char *)(*local_a0 + 0x14 + (longlong)iStack_84 * 0x20) == '\x01') {
        puVar6 = (undefined8 *)(*local_a0 + (longlong)iStack_84 * 0x20);
        FUN_147c6d1d6(*(undefined8 *)(param_1 + 0x348),puVar6[1]);
        uVar2 = uStack_70;
        puVar6[1] = 0;
        lVar7 = (longlong)(int)uStack_70;
        uVar3 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar3);
        if (uStack_70._4_4_ < uVar3) {
          FUN_140097524(&local_78,uVar2 & 0xffffffff);
        }
        *(undefined8 *)(local_78 + lVar7 * 8) = *puVar6;
      }
      local_88 = local_88 & ~uStack_94;
      FUN_1449c0562(&local_98);
      lVar7 = local_78;
    } while (local_a0 != plVar1 || (CONCAT44(uStack_8c,uStack_90) != lVar4 || iStack_84 != iVar5));
    lVar4 = (longlong)(int)uStack_70;
    if (lVar4 != 0) {
      lVar8 = 0;
      do {
        FUN_147501818(plVar1,*(undefined8 *)(lVar7 + lVar8));
        lVar8 = lVar8 + 8;
      } while (lVar4 * 8 != lVar8);
    }
    if (local_78 != 0) {
      FUN_1400020a8(local_78);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474f1204 FUN_1474f1204 body=624 status=ok
// SIG undefined FUN_1474f1204(void)

void FUN_1474f1204(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  uint local_c8;
  undefined8 *local_c0;
  longlong local_b8;
  ulonglong **local_b0;
  ulonglong local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_8c;
  ulonglong *local_88;
  undefined8 *local_80;
  longlong local_68;
  undefined8 uStack_60;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar2 = *(longlong *)(param_1 + 0x640);
  if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x638) != 0)) {
    local_68 = 0;
    uStack_60 = 0;
    FUN_1449b671c(&local_88);
    FUN_1449b6736(&local_88,1);
    local_b8 = param_1 + 0x5b8;
    local_98 = CONCAT44((float)*(double *)(param_1 + 0x5b0),2);
    local_c8 = (uint)*(byte *)(param_1 + 0x30c);
    local_c0 = &local_98;
    local_b0 = &local_88;
    FUN_14052f48a(lVar2,&local_68,param_1 + 0x598,&DAT_14c8463d0);
    if ((longlong)(int)uStack_60 != 0) {
      lVar2 = local_68 + (longlong)(int)uStack_60 * 0x48;
      lVar7 = local_68;
      do {
        local_a0 = FUN_14479d2ce(lVar7 + 0x20);
        if (local_a0 != 0) {
          if (*(int *)(param_1 + 0x528) != *(int *)(param_1 + 0x554)) {
            uVar4 = ((uint)(local_a0 >> 0x14) & 0xffff ^ (uint)(local_a0 >> 4)) * -0x7a143595;
            uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
            lVar5 = *(longlong *)(param_1 + 0x560);
            if (*(longlong *)(param_1 + 0x560) == 0) {
              lVar5 = param_1 + 0x558;
            }
            iVar6 = *(int *)(lVar5 + (ulonglong)
                                     (*(int *)(param_1 + 0x568) - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4)
            ;
            if (iVar6 != -1) {
              lVar5 = *(longlong *)(param_1 + 0x520);
              do {
                lVar1 = lVar5 + (longlong)iVar6 * 0x20;
                if (*(ulonglong *)(lVar5 + (longlong)iVar6 * 0x20) == local_a0) {
                  if ((lVar1 + 8U & 0xfffffffffffffff7) != 0) {
                    *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)(param_1 + 0x570);
                    goto LAB_1474f132a;
                  }
                  break;
                }
                iVar6 = *(int *)(lVar1 + 0x18);
              } while (iVar6 != -1);
            }
          }
          if (*(longlong *)(param_1 + 0x648) != *(longlong *)(local_a0 + 0xa8)) {
            uVar3 = FUN_147c6cfaa(*(undefined8 *)(param_1 + 0x348),1,local_a0 + 0x410,
                                  local_a0 + 0x240);
            FUN_147c6d684(*(undefined8 *)(param_1 + 0x348),uVar3);
            local_90 = *(undefined4 *)(param_1 + 0x570);
            local_8c = 0;
            local_88 = &local_a0;
            local_98 = uVar3;
            local_80 = &local_98;
            FUN_147501310((longlong *)(param_1 + 0x520),local_4c,&local_88);
          }
        }
LAB_1474f132a:
        lVar7 = lVar7 + 0x48;
      } while (lVar7 != lVar2);
    }
    if (local_68 != 0) {
      FUN_1400020a8(local_68);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474f1476 FUN_1474f1476 body=89 status=ok
// SIG undefined FUN_1474f1476(void)

undefined8 * FUN_1474f1476(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147501208(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x30);
      }
    }
  }
  return param_1;
}



// FUNCTION 1474f14d0 FUN_1474f14d0 body=623 status=ok
// SIG undefined FUN_1474f14d0(void)

void FUN_1474f14d0(longlong param_1,longlong param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined4 local_100;
  undefined1 *local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined1 local_d8 [96];
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((((*(char *)(param_1 + 0x30f) == '\x01') && (param_2 != 0)) && (DAT_14c760f98 != '\0')) &&
     ((*(longlong *)(param_1 + 0x348) != 0 && ((longlong)*(int *)(param_2 + 0xe70) != 0)))) {
    lVar9 = *(longlong *)(param_2 + 0xe68);
    lVar7 = lVar9 + (longlong)*(int *)(param_2 + 0xe70) * 0x48;
    local_f0 = (longlong *)(param_1 + 0x510);
    local_e8 = lVar7;
    do {
      lVar4 = FUN_14479d2ce(lVar9);
      lVar5 = FUN_14479d2ce(lVar9 + 8);
      if (lVar5 != 0 && lVar4 != 0) {
        local_78 = 0;
        uStack_70 = 0;
        local_f8 = local_d8;
        local_100 = 0xffffffff;
        local_108 = 0;
        local_e0 = lVar9;
        FUN_147d1951e(lVar4,lVar5,&local_78,0);
        iVar3 = (int)uStack_70;
        if ((int)uStack_70 != 0) {
          iVar8 = 0;
          do {
            lVar7 = *(longlong *)(local_78 + (longlong)iVar8 * 8);
            uVar6 = *(undefined8 *)(param_1 + 0x348);
            FUN_1447f067c(lVar7,local_d8,1,0);
            uVar6 = FUN_147c6cfaa(uVar6,1,lVar7);
            FUN_147c6d684(*(undefined8 *)(param_1 + 0x348),uVar6);
            sVar1 = *(short *)(lVar7 + 0x10);
            iVar2 = *(int *)(param_1 + 0x518);
            lVar9 = (longlong)iVar2;
            *(uint *)(param_1 + 0x518) = iVar2 + 1U;
            if (*(uint *)(param_1 + 0x51c) < iVar2 + 1U) {
              FUN_14750127c(local_f0,iVar2);
            }
            lVar5 = *local_f0;
            *(undefined8 *)(lVar5 + lVar9 * 0x18) = uVar6;
            *(longlong *)(lVar5 + 8 + lVar9 * 0x18) = lVar4;
            *(int *)(lVar5 + 0x10 + lVar9 * 0x18) = (int)sVar1;
            if (*(longlong *)(lVar7 + 0x138) != 0) {
              FUN_140156df6(lVar7,1,0);
            }
            if (lVar7 != 0) {
              FUN_144760d56(lVar7);
              FUN_1400020a8(lVar7);
            }
            *(undefined8 *)(local_78 + (longlong)iVar8 * 8) = 0;
            iVar8 = iVar8 + 1;
          } while (iVar3 != iVar8);
        }
        bVar10 = (longlong)uStack_70 < 0;
        uStack_70 = uStack_70 & 0xffffffff00000000;
        if (bVar10) {
          FUN_14179bc96(&local_78,0);
        }
        lVar9 = local_e0;
        lVar7 = local_e8;
        if (local_78 != 0) {
          FUN_1400020a8();
        }
      }
      lVar9 = lVar9 + 0x48;
    } while (lVar9 != lVar7);
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474f1740 FUN_1474f1740 body=178 status=ok
// SIG undefined FUN_1474f1740(void)

int FUN_1474f1740(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  int iVar7;
  
  lVar3 = DAT_14caab428;
  if (*(char *)(param_1 + 0x218) == '\0') {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(int *)(lVar2 + 0xc60) == 0x40000002) {
      uVar6 = 0;
    }
    else {
      bVar5 = FUN_144a61b4f();
      uVar6 = (ulonglong)(bVar5 ^ 1);
    }
    lVar4 = DAT_14caab428;
    if (*(int *)(lVar3 + uVar6 * 4) != -1) {
      iVar7 = *(int *)(param_1 + 0x28);
      iVar1 = *(int *)(lVar2 + 0xc60);
      if (iVar7 == -1) {
        if (iVar1 == 0x40000002) {
          uVar6 = 0;
        }
        else {
          bVar5 = FUN_144a61b4f();
          uVar6 = (ulonglong)(bVar5 ^ 1);
        }
        return *(int *)(lVar4 + uVar6 * 4);
      }
      if (iVar1 == 0x40000002) {
        uVar6 = 0;
      }
      else {
        bVar5 = FUN_144a61b4f();
        uVar6 = (ulonglong)(bVar5 ^ 1);
        iVar7 = *(int *)(param_1 + 0x28);
      }
      iVar1 = *(int *)(lVar4 + uVar6 * 4);
      if (iVar1 <= iVar7) {
        return iVar1;
      }
      return iVar7;
    }
  }
  return *(int *)(param_1 + 0x28);
}



// FUNCTION 1474f17f2 FUN_1474f17f2 body=68 status=ok
// SIG undefined FUN_1474f17f2(void)

void FUN_1474f17f2(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1474fc185(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1475018f6(param_1,param_2);
  return;
}



// FUNCTION 1474f1838 FUN_1474f1838 body=725 status=ok
// SIG undefined FUN_1474f1838(void)

void FUN_1474f1838(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_148 [32];
  undefined1 local_128 [4];
  undefined1 local_124 [4];
  longlong *local_120 [2];
  undefined8 local_110;
  longlong *local_108;
  longlong local_100 [2];
  longlong *local_f0 [2];
  longlong local_e0 [2];
  longlong *local_d0 [2];
  longlong *local_c0 [2];
  undefined8 local_b0;
  longlong *local_a8;
  wchar_t **local_a0;
  ulonglong *local_98;
  longlong local_90;
  undefined4 local_88;
  wchar_t *local_80;
  undefined4 local_78 [2];
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*param_1 != 0) {
    FUN_14019c9f2(param_1,param_2);
  }
  if ((~*(uint *)(param_1 + 1) & 0x7fffffff) == 0) {
    lVar3 = FUN_14479d2ce(param_2 + 0x38);
    if (lVar3 == 0) {
      FUN_140056680(local_e0,&DAT_149e01fe8);
    }
    else {
      local_80 = *(wchar_t **)(lVar3 + 0x18);
      FUN_1400021e4(&local_80,local_e0);
    }
    FUN_145aa9352(local_d0,local_e0);
    FUN_1400021e4(param_1,local_100);
    FUN_145aa9352(local_f0,local_100);
    local_80 = L"SkeletalControlBoneError";
    local_78[0] = 0x18;
    FUN_1446e940c(local_124,&local_80);
    local_80 = L"AnimNode_SkeletalControlBase";
    local_78[0] = 0x1c;
    FUN_1446e940c(local_128,&local_80);
    FUN_140208bae(local_120,local_128,local_124,
                  L"Referenced Bone {0} does not exist on SkeletalMesh {1}.");
    FUN_14023409e(&local_110,local_120,1);
    local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
    FUN_14023423e(local_70,local_f0);
    local_60 = 4;
    FUN_14023423e(local_50,local_d0);
    local_98 = &local_40;
    local_a0 = &local_80;
    FUN_14010d304(&local_90);
    local_b0 = local_110;
    local_a8 = local_108;
    if (local_108 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_108 + 1) = (int)local_108[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c0,&local_b0,&local_90);
    FUN_14007f2db(local_90,local_88);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    lVar3 = 0x30;
    do {
      plVar2 = *(longlong **)((longlong)local_78 + lVar3 + -8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        *(undefined8 *)((longlong)local_78 + lVar3 + -8) = 0;
        *(undefined4 *)((longlong)local_78 + lVar3) = 0;
      }
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != -0x10);
    if (local_108 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_108 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar1 = (int *)((longlong)local_108 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_108 + 0x10))(local_108);
        }
      }
    }
    if (local_f0[0] != (longlong *)0x0) {
      (**(code **)(*local_f0[0] + 0x10))();
    }
    if (local_d0[0] != (longlong *)0x0) {
      (**(code **)(*local_d0[0] + 0x10))();
    }
    if (local_120[0] != (longlong *)0x0) {
      (**(code **)(*local_120[0] + 0x10))();
    }
    if (local_100[0] != 0) {
      FUN_1400020a8();
    }
    if (local_e0[0] != 0) {
      FUN_1400020a8();
    }
    if (local_c0[0] != (longlong *)0x0) {
      (**(code **)(*local_c0[0] + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474f1b0e FUN_1474f1b0e body=182 status=ok
// SIG undefined FUN_1474f1b0e(void)

void FUN_1474f1b0e(longlong param_1,undefined4 *param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar2 = *(int *)(param_1 + 0x3a8);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x3a0) + lVar3 * 8);
      if (*plVar1 == param_4) {
        local_48 = param_3[2];
        local_58 = *param_3;
        uStack_50 = param_3[1];
        local_78 = *param_2;
        uStack_74 = param_2[1];
        uStack_70 = param_2[2];
        uStack_6c = param_2[3];
        local_68 = *(undefined8 *)(param_2 + 4);
        FUN_147c6bc00(plVar1,&local_78,&local_58);
        iVar2 = *(int *)(param_1 + 0x3a8);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474f1c08 FUN_1474f1c08 body=22 status=ok
// SIG undefined FUN_1474f1c08(void)

undefined8 FUN_1474f1c08(undefined8 param_1)

{
  FUN_1474f1c1e();
  return param_1;
}



// FUNCTION 1474f1c1e FUN_1474f1c1e body=145 status=ok
// SIG undefined FUN_1474f1c1e(void)

undefined8 * FUN_1474f1c1e(undefined8 *param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    if (DAT_14caab3e0 == 0) {
      uVar2 = FUN_140c6b56d();
      DAT_14caab3e0 = FUN_140002ddd(FUN_146333c21,uVar2,L"AnimNode_RigidBody");
      if (DAT_14caab3e0 == 0) goto LAB_1474f1c5d;
    }
    if ((*(int *)(DAT_14caab3e0 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14caab3e0 + 0x38) * 8) ==
        DAT_14caab3e0 + 0x30)) {
      *param_3 = 1;
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      return param_1;
    }
  }
LAB_1474f1c5d:
  *param_3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1474f1cb0 FUN_1474f1cb0 body=99 status=ok
// SIG undefined FUN_1474f1cb0(void)

void FUN_1474f1cb0(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1474f1c1e(&local_40,param_1,&local_29);
  *param_2 = local_40;
  param_2[1] = uStack_3c;
  param_2[2] = uStack_38;
  param_2[3] = uStack_34;
  *(bool *)param_3 = local_29 == '\x01';
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474f1d2a FUN_1474f1d2a body=116 status=ok
// SIG undefined FUN_1474f1d2a(void)

void FUN_1474f1d2a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_14477dc2a();
  FUN_14477dadc(uVar1,param_2);
  FUN_14474897c(param_1 + 0x18,param_2);
  fVar2 = *(float *)(param_1 + 0x68) * *(float *)(param_1 + 0x70) + *(float *)(param_1 + 0x74);
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  *(float *)(param_1 + 0x6c) = fVar2;
  if (*(char *)(param_1 + 0x90) == '\x01') {
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    *(float *)(param_1 + 0x6c) = 1.0 - fVar2;
  }
  return;
}



// FUNCTION 1474f1d9e FUN_1474f1d9e body=33 status=ok
// SIG undefined FUN_1474f1d9e(void)

void FUN_1474f1d9e(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))();
  }
  *(undefined1 *)(param_1 + 0x79) = 0;
  return;
}



// FUNCTION 1474f1dc0 FUN_1474f1dc0 body=1676 status=ok
// SIG undefined FUN_1474f1dc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474f1dc0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  double *pdVar2;
  double *pdVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  int iVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  char cVar13;
  uint uVar14;
  undefined4 *puVar15;
  int *piVar16;
  longlong lVar17;
  undefined4 uVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  double dVar28;
  double dVar30;
  undefined1 auVar29 [16];
  double dVar31;
  undefined1 auStack_138 [32];
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  longlong lStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_1447139fe(param_1 + 0x18);
  if (*(float *)(param_1 + 0x6c) <= 1e-05) goto LAB_1474f1e56;
  if (*(char *)(param_1 + 0x79) == '\0') {
    lVar17 = param_2[6];
    *(undefined1 *)(param_1 + 0x79) = 1;
    FUN_14019c9f2(param_1 + 0x2c,lVar17);
    FUN_14019c9f2(param_1 + 0x3c,lVar17);
    plVar1 = (longlong *)(param_1 + 0x80);
    *(undefined4 *)(param_1 + 0x88) = 0;
    if (*(int *)(param_1 + 0x8c) < 0) {
      FUN_1447d6d9c(plVar1,0);
    }
    uVar14 = *(uint *)(param_1 + 0x34);
    if ((~uVar14 & 0x7fffffff) != 0) {
      lVar19 = lVar17 + 0x10;
      if (*(longlong *)(lVar17 + 0x20) != 0) {
        lVar19 = *(longlong *)(lVar17 + 0x20);
      }
      if ((((*(uint *)(lVar19 + (ulonglong)(uVar14 >> 3 & 0x1ffc)) >> (uVar14 & 0x1f) & 1) != 0) &&
          (uVar5 = *(uint *)(param_1 + 0x44), (~uVar5 & 0x7fffffff) != 0)) &&
         ((*(uint *)(lVar19 + (ulonglong)(uVar5 >> 3 & 0x1ffc)) >> (uVar5 & 0x1f) & 1) != 0)) {
        if ((int)uVar14 < 0) {
          uVar14 = (int)(uVar14 * 2) >> 1;
          uVar18 = 0xffffffff;
          if ((-1 < (int)uVar14) && ((int)uVar14 < *(int *)(lVar17 + 0x88))) {
            puVar15 = (undefined4 *)((ulonglong)uVar14 * 4 + *(longlong *)(lVar17 + 0x80));
            goto LAB_1474f1f76;
          }
        }
        else {
          puVar15 = (undefined4 *)(param_1 + 0x38);
LAB_1474f1f76:
          uVar18 = *puVar15;
        }
        local_118 = CONCAT44(local_118._4_4_,uVar18);
        if ((int)uVar5 < 0) {
          uVar14 = (int)(uVar5 * 2) >> 1;
          local_c4 = 0xffffffff;
          if ((-1 < (int)uVar14) && ((int)uVar14 < *(int *)(lVar17 + 0x88))) {
            puVar15 = (undefined4 *)((ulonglong)uVar14 * 4 + *(longlong *)(lVar17 + 0x80));
            goto LAB_1474f1f88;
          }
        }
        else {
          puVar15 = (undefined4 *)(param_1 + 0x48);
LAB_1474f1f88:
          local_c4 = *puVar15;
        }
        cVar13 = FUN_14798322c(lVar17,&local_c4,&local_118);
        if (cVar13 != '\0') {
          uVar14 = *(uint *)(param_1 + 0x34);
          if ((int)uVar14 < 0) {
            iVar20 = -1;
            if ((((~uVar14 & 0x7fffffff) != 0) &&
                (uVar14 = (int)(uVar14 * 2) >> 1, -1 < (int)uVar14)) &&
               ((int)uVar14 < *(int *)(lVar17 + 0x88))) {
              piVar16 = (int *)((ulonglong)uVar14 * 4 + *(longlong *)(lVar17 + 0x80));
              goto LAB_1474f1fb5;
            }
          }
          else {
            piVar16 = (int *)(param_1 + 0x38);
LAB_1474f1fb5:
            iVar20 = *piVar16;
          }
          uVar14 = *(uint *)(param_1 + 0x44);
          if ((int)uVar14 < 0) {
            iVar22 = -1;
            if ((((~uVar14 & 0x7fffffff) != 0) &&
                (uVar14 = (int)(uVar14 * 2) >> 1, -1 < (int)uVar14)) &&
               ((int)uVar14 < *(int *)(lVar17 + 0x88))) {
              piVar16 = (int *)((ulonglong)uVar14 * 4 + *(longlong *)(lVar17 + 0x80));
              goto LAB_1474f1fc6;
            }
          }
          else {
            piVar16 = (int *)(param_1 + 0x48);
LAB_1474f1fc6:
            iVar22 = *piVar16;
          }
          iVar6 = *(int *)(param_1 + 0x88);
          *(uint *)(param_1 + 0x88) = iVar6 + 1U;
          if (*(uint *)(param_1 + 0x8c) < iVar6 + 1U) {
            FUN_1408f8cfa(plVar1,iVar6);
          }
          *(int *)(*plVar1 + (longlong)iVar6 * 4) = iVar22;
          if (iVar22 != -1) {
            iVar22 = *(int *)(*(longlong *)(lVar17 + 0x90) + (longlong)iVar22 * 4);
            while ((iVar22 != -1 && (iVar22 != iVar20))) {
                    /* WARNING: Read-only address (ram,0x000149934d80) is written */
              iVar6 = *(int *)(*(longlong *)(lVar17 + 0x90) + (longlong)iVar22 * 4);
              uVar14 = *(uint *)(param_1 + 0x88);
              *(uint *)(param_1 + 0x88) = uVar14 + 1;
              if (*(uint *)(param_1 + 0x8c) < uVar14 + 1) {
                FUN_1408f8cfa(plVar1,(ulonglong)uVar14);
              }
              memmove((void *)(*plVar1 + 4),(void *)*plVar1,(ulonglong)uVar14 << 2);
              *(int *)*plVar1 = iVar22;
              iVar22 = iVar6;
            }
            uVar14 = *(uint *)(param_1 + 0x88);
            *(uint *)(param_1 + 0x88) = uVar14 + 1;
            if (*(uint *)(param_1 + 0x8c) < uVar14 + 1) {
              FUN_1408f8cfa(plVar1,(ulonglong)uVar14);
            }
            memmove((void *)(*plVar1 + 4),(void *)*plVar1,(ulonglong)uVar14 << 2);
            *(int *)*plVar1 = iVar20;
          }
        }
      }
    }
  }
  if (1 < *(int *)(param_1 + 0x88)) {
    lVar17 = *param_2;
    dVar25 = *(double *)(param_1 + 0x50) - *(double *)(lVar17 + 0x30);
    dVar8 = *(double *)(param_1 + 0x58) - *(double *)(lVar17 + 0x38);
    dVar24 = *(double *)(param_1 + 0x60) - *(double *)(lVar17 + 0x40);
    dVar11 = *(double *)(lVar17 + 0x10);
    auVar4 = *(undefined1 (*) [16])(lVar17 + 0x50);
    dVar12 = *(double *)(lVar17 + 0x60);
    dVar9 = -dVar11;
    dVar23 = -*(double *)(lVar17 + 0x18);
    dVar28 = *(double *)(lVar17 + 0x20) * -1.0;
    dVar30 = *(double *)(lVar17 + 0x28) * 1.0;
    dVar31 = dVar25 * dVar28 - dVar9 * dVar24;
    dVar26 = dVar8 * dVar9 - dVar25 * dVar23;
    dVar10 = dVar24 * dVar23 - dVar8 * dVar28;
    dVar10 = dVar10 + dVar10;
    dVar31 = dVar31 + dVar31;
    dVar26 = dVar26 + dVar26;
    auVar29._8_8_ = 0x3ff0000000000000;
    auVar29._0_8_ = dVar12;
    auVar27 = divpd(_DAT_149934d80,auVar4);
    auVar29 = divpd(ZEXT816(0x3ff0000000000000),auVar29);
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    lStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_d8 = 0;
    FUN_1417977a6(&local_118,param_2 + 4);
    iVar20 = **(int **)(param_1 + 0x80);
    if (*(char *)(lStack_100 + iVar20) == '\0') {
      FUN_1447d5d8e(&local_118,iVar20);
    }
    lVar17 = (longlong)iVar20 * 0x60;
    dVar9 = (dVar30 * dVar26 + dVar24 + (dVar31 * dVar9 - dVar10 * dVar23)) *
            (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar12)) & auVar29._0_8_) -
            *(double *)(local_118 + 0x30 + lVar17);
    pdVar2 = (double *)(local_118 + 0x20 + lVar17);
    dVar25 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar4._0_8_)) & auVar27._0_8_) *
             ((dVar26 * dVar23 - dVar31 * dVar28) + dVar30 * dVar10 + dVar25) - *pdVar2;
    dVar8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar4._8_8_)) & auVar27._8_8_) *
            (dVar26 * dVar11 + dVar28 * dVar10 + dVar30 * dVar31 + dVar8) - pdVar2[1];
    dVar23 = (double)FUN_1474f244e(param_1);
    dVar25 = (double)*(float *)(param_1 + 0x6c) *
             (double)(-(ulonglong)(ABS(dVar23) <= 1e-08) & 0x3ff0000000000000 |
                     ~-(ulonglong)(ABS(dVar23) <= 1e-08) &
                     (ulonglong)(SQRT(dVar9 * dVar9 + dVar25 * dVar25 + dVar8 * dVar8) / dVar23)) +
             (double)(1.0 - *(float *)(param_1 + 0x6c));
    if ((1e-08 < ABS(dVar25 + -1.0)) && (iVar20 = *(int *)(param_1 + 0x88), (longlong)iVar20 != 0))
    {
      lVar17 = *(longlong *)(param_1 + 0x80);
      lVar19 = 0;
      do {
        lVar7 = param_2[4];
        lVar21 = (longlong)*(int *)(lVar17 + lVar19) * 0x60;
        pdVar2 = (double *)(lVar7 + 0x20 + lVar21);
        dVar8 = pdVar2[1];
        pdVar3 = (double *)(lVar7 + 0x30 + lVar21);
        dVar9 = *pdVar3;
        dVar23 = pdVar3[1];
        pdVar3 = (double *)(lVar7 + 0x20 + lVar21);
        *pdVar3 = *pdVar2 * dVar25;
        pdVar3[1] = dVar8 * dVar25;
        pdVar2 = (double *)(lVar7 + 0x30 + lVar21);
        *pdVar2 = dVar9 * dVar25;
        pdVar2[1] = dVar23 * 0.0;
        lVar19 = lVar19 + 4;
      } while ((longlong)iVar20 * 4 != lVar19);
    }
  }
LAB_1474f1e56:
  if ((local_c0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474f244e FUN_1474f244e body=352 status=ok
// SIG undefined FUN_1474f244e(void)

double FUN_1474f244e(longlong param_1,longlong *param_2,longlong *param_3)

{
  double *pdVar1;
  int iVar2;
  double dVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  if (*(char *)(param_1 + 0x78) == '\x02') {
    if ((longlong)*(int *)(param_1 + 0x88) == 0) {
      dVar8 = 0.0;
    }
    else {
      dVar8 = 0.0;
      lVar5 = 0;
      do {
        lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + lVar5) * 0x60;
        pdVar1 = (double *)(*param_2 + 0x20 + lVar7);
        dVar10 = *pdVar1;
        dVar3 = pdVar1[1];
        dVar9 = *(double *)(*param_2 + 0x30 + lVar7);
        dVar8 = dVar8 + SQRT(dVar9 * dVar9 + dVar10 * dVar10 + dVar3 * dVar3);
        lVar5 = lVar5 + 4;
      } while ((longlong)*(int *)(param_1 + 0x88) * 4 != lVar5);
    }
  }
  else if (*(char *)(param_1 + 0x78) == '\x01') {
    piVar4 = *(int **)(param_1 + 0x80);
    iVar2 = *piVar4;
    lVar5 = param_3[3];
    if (*(char *)(lVar5 + iVar2) == '\0') {
      FUN_1447d5d8e(param_3,iVar2);
      piVar4 = *(int **)(param_1 + 0x80);
      lVar5 = param_3[3];
    }
    lVar7 = *param_3;
    lVar6 = (longlong)iVar2 * 0x60;
    pdVar1 = (double *)(lVar7 + 0x20 + lVar6);
    dVar8 = *pdVar1;
    dVar9 = pdVar1[1];
    dVar10 = *(double *)(lVar7 + 0x30 + lVar6);
    iVar2 = piVar4[*(int *)(param_1 + 0x88) + -1];
    if (*(char *)(lVar5 + iVar2) == '\0') {
      FUN_1447d5d8e(param_3,iVar2);
      lVar7 = *param_3;
    }
    lVar5 = (longlong)iVar2 * 0x60;
    pdVar1 = (double *)(lVar7 + 0x20 + lVar5);
    dVar8 = *pdVar1 - dVar8;
    dVar9 = pdVar1[1] - dVar9;
    dVar10 = *(double *)(lVar7 + 0x30 + lVar5) - dVar10;
    dVar8 = SQRT(dVar10 * dVar10 + dVar8 * dVar8 + dVar9 * dVar9);
  }
  else {
    dVar8 = (double)*(float *)(param_1 + 0x28);
  }
  return dVar8;
}



// FUNCTION 1474f25ae FUN_1474f25ae body=281 status=ok
// SIG undefined FUN_1474f25ae(void)

void FUN_1474f25ae(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  int local_48;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1474f26c8(param_2,&local_40);
  FUN_140002266(&local_50,L"Alpha (%.1f%%)",(double)(*(float *)(param_1 + 0x6c) * 100.0));
  iVar1 = local_48 + -1;
  if (local_48 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_40,local_50,iVar1);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  _Src = local_40;
  local_60 = (void *)0x0;
  local_58 = local_38;
  if ((longlong)local_38 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,local_38,0);
    memcpy(local_60,_Src,(longlong)local_38 * 2);
  }
  FUN_147906d4c(param_2,&local_60,0);
  FUN_147906d38(param_1 + 0x18,param_2);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474f26c8 FUN_1474f26c8 body=256 status=ok
// SIG undefined FUN_1474f26c8(void)

undefined8 FUN_1474f26c8(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14caab5e0 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caab5e0 = FUN_140002ddd(FUN_146333ce7,uVar2,L"AnimNode_ScaleChainLength");
  }
  local_48 = *(undefined8 *)(DAT_14caab5e0 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1474f27e0 FUN_1474f27e0 body=352 status=ok
// SIG undefined FUN_1474f27e0(void)

undefined8 * FUN_1474f27e0(undefined8 *param_1)

{
  FUN_140c83e26();
  *param_1 = &PTR_FUN_14a43bb70;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0xffffffff7fffffff;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0xffffffff7fffffff;
  *(undefined2 *)(param_1 + 0x1f) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 2;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0x3e4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0x3f80000000000000;
  *(undefined1 *)((longlong)param_1 + 0x144) = 0;
  FUN_1404163bc(param_1 + 0x24);
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0xffffffff00000000;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x159) = 0;
  *(undefined8 *)((longlong)param_1 + 0x161) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x179) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x191) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x209) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  *(undefined8 *)((longlong)param_1 + 0x221) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x46) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  return param_1;
}



// FUNCTION 1474f2940 FUN_1474f2940 body=409 status=ok
// SIG undefined FUN_1474f2940(void)

void FUN_1474f2940(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_a8 [32];
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  longlong local_58;
  int local_50;
  void *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1474f2ada(param_2,&local_48);
  thunk_FUN_14047a987(&local_48,&DAT_149eb775e,1);
  FUN_1474dc4fe(param_1,&local_48);
  FUN_1400021e4(param_1 + 0xe8,&local_68);
  puVar2 = &DAT_149dfb77a;
  if (local_60 != 0) {
    puVar2 = local_68;
  }
  FUN_1400021e4(param_1 + 0xd8,&local_78);
  puVar3 = &DAT_149dfb77a;
  if (local_70 != 0) {
    puVar3 = local_78;
  }
  FUN_140002266(&local_58,L" StartBone: %s, EndBone: %s)",puVar3,puVar2);
  iVar1 = local_50 + -1;
  if (local_50 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_48,local_58,iVar1);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  _Src = local_48;
  local_88 = (void *)0x0;
  local_80 = local_40;
  if ((longlong)local_40 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_40,0);
    memcpy(local_88,_Src,(longlong)local_40 * 2);
  }
  FUN_147906d4c(param_2,&local_88,0);
  FUN_147906d38(param_1 + 0x18,param_2);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474f2ada FUN_1474f2ada body=256 status=ok
// SIG undefined FUN_1474f2ada(void)

undefined8 FUN_1474f2ada(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14caab640 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caab640 = FUN_140002ddd(FUN_146333eab,uVar2,L"AnimNode_SplineIK");
  }
  local_48 = *(undefined8 *)(DAT_14caab640 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1474f2bdc FUN_1474f2bdc body=76 status=ok
// SIG undefined FUN_1474f2bdc(void)

void FUN_1474f2bdc(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_3 + 0x20) != 0) {
    lVar1 = FUN_144a81888();
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_144a81888(*(undefined8 *)(param_3 + 0x20));
      uVar3 = (**(code **)(*plVar2 + 0x310))(plVar2);
      FUN_1474f2c28(param_1,uVar3);
      return;
    }
  }
  return;
}



// FUNCTION 1474f2c28 FUN_1474f2c28 body=492 status=ok
// SIG undefined FUN_1474f2c28(void)

void FUN_1474f2c28(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  puVar1 = (undefined8 *)(param_1 + 0x240);
  *(undefined4 *)(param_1 + 0x248) = 0;
  if (*(int *)(param_1 + 0x24c) < 0) {
    FUN_147501ea0(puVar1);
  }
  uVar5 = FUN_144a750a0(param_2,param_1 + 0xd8);
  uVar6 = FUN_144a750a0(param_2,param_1 + 0xe8);
  if (uVar6 != 0xffffffff && uVar5 != 0xffffffff) {
    while (uVar4 = uVar6, uVar4 != uVar5) {
      if (uVar4 == 0xffffffff) {
        *(undefined4 *)(param_1 + 0x248) = 0;
        if (-1 < *(int *)(param_1 + 0x24c)) goto LAB_1474f2df9;
        FUN_147501ea0(puVar1);
        break;
      }
      uVar2 = *(undefined8 *)(*(longlong *)(param_2 + 0x20) + (longlong)(int)uVar4 * 0xc);
      uVar6 = *(uint *)(param_1 + 0x248);
      *(uint *)(param_1 + 0x248) = uVar6 + 1;
      if (*(uint *)(param_1 + 0x24c) == uVar6) {
        FUN_147501ed0(puVar1,uVar6);
      }
      memmove((void *)((longlong)*puVar1 + 0x14),(void *)*puVar1,(ulonglong)uVar6 * 0x14);
      puVar3 = (undefined8 *)*puVar1;
      *puVar3 = uVar2;
      puVar3[1] = 0xffffffff7fffffff;
      *(uint *)(puVar3 + 2) = uVar4;
      uVar6 = 0xffffffff;
      if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_2 + 0x28))) {
        uVar6 = *(uint *)(*(longlong *)(param_2 + 0x20) + 8 + (ulonglong)uVar4 * 0xc);
      }
    }
    uVar6 = *(uint *)(param_1 + 0x248);
    if ((ulonglong)uVar6 != 0) {
      uVar2 = *(undefined8 *)(*(longlong *)(param_2 + 0x20) + (longlong)(int)uVar5 * 0xc);
      *(uint *)(param_1 + 0x248) = uVar6 + 1;
      if (*(uint *)(param_1 + 0x24c) == uVar6) {
        FUN_147501ed0(puVar1,uVar6);
      }
      memmove((void *)((longlong)*(void **)(param_1 + 0x240) + 0x14),*(void **)(param_1 + 0x240),
              (ulonglong)uVar6 * 0x14);
      puVar1 = *(undefined8 **)(param_1 + 0x240);
      *puVar1 = uVar2;
      puVar1[1] = 0xffffffff7fffffff;
      *(uint *)(puVar1 + 2) = uVar5;
      if (*(char *)(param_1 + 0xf9) == '\x01') {
        iVar7 = *(int *)(param_1 + 0x248);
      }
      else {
        iVar7 = 2;
        if (2 < *(int *)(param_1 + 0xfc)) {
          iVar7 = *(int *)(param_1 + 0xfc);
        }
      }
      FUN_140ee84a4(param_1 + 0x100,iVar7,1);
    }
  }
LAB_1474f2df9:
  FUN_1474f3ad0(param_1,param_2);
  return;
}



// FUNCTION 1474f2e14 FUN_1474f2e14 body=1428 status=ok
// SIG undefined FUN_1474f2e14(void)

void FUN_1474f2e14(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined4 uVar20;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined8 *local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined4 local_150;
  uint local_148;
  code **local_140;
  longlong local_138;
  longlong local_130;
  undefined4 local_128;
  longlong *local_120;
  longlong local_110;
  longlong *local_108;
  longlong local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  code *local_c0;
  undefined8 *local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (0 < *(int *)(param_1 + 0x248)) {
    local_110 = *(longlong *)(param_2 + 0x30);
    FUN_1474f33aa();
    local_e8 = param_1 + 0x158;
    uVar20 = FUN_147a27760();
    uVar1 = *(undefined4 *)
             (*(longlong *)(param_1 + 0x1a0) + 4 + (longlong)(*(int *)(param_1 + 0x1a8) + -1) * 0x14
             );
    FUN_1433c5ce6(param_1 + 0x120,*(undefined4 *)(param_1 + 0x114),*(undefined4 *)(param_1 + 0x118))
    ;
    local_c0 = FUN_147501a4e;
    local_b8 = &local_d0;
    lVar9 = FUN_144a773aa(&local_c0,&DAT_14c760fcc);
    local_108 = (longlong *)(lVar9 + 0x10);
    local_c0 = FUN_147501a4e;
    local_b8 = &local_d0;
    lVar10 = FUN_144a773aa(&local_c0,&DAT_14c760fcc);
    local_c0 = FUN_147501a4e;
    local_b8 = &local_d0;
    local_100 = FUN_144a773aa(&local_c0,&DAT_14c760fcc);
    *(undefined4 *)(lVar9 + 0x18) = 0;
    if (*(int *)(lVar9 + 0x1c) < 0) {
      FUN_1401a2688(local_108,0);
    }
    local_f0 = (longlong *)(lVar10 + 0x20);
    *(undefined4 *)(lVar10 + 0x28) = 0;
    if (*(int *)(lVar10 + 0x2c) < 0) {
      FUN_1401a2688(local_f0,0);
    }
    plVar19 = (longlong *)(local_100 + 0x30);
    *(undefined4 *)(local_100 + 0x38) = 0;
    if (*(int *)(local_100 + 0x3c) < 0) {
      FUN_1447d6d9c(plVar19,0);
    }
    if (0 < (longlong)*(int *)(param_1 + 0x248)) {
      local_f8 = (longlong *)(param_2 + 0x20);
      local_d8 = local_110 + 0x10;
      local_e0 = (longlong)*(int *)(param_1 + 0x248) * 0x14;
      lVar10 = 0;
      do {
        uVar8 = *(uint *)(*(longlong *)(param_1 + 0x240) + 8 + lVar10);
        if ((~uVar8 & 0x7fffffff) == 0) break;
        lVar15 = *(longlong *)(local_110 + 0x20);
        if (*(longlong *)(local_110 + 0x20) == 0) {
          lVar15 = local_d8;
        }
        if ((*(uint *)(lVar15 + (ulonglong)(uVar8 >> 3 & 0x1ffc)) >> (uVar8 & 0x1f) & 1) == 0)
        break;
        if ((int)uVar8 < 0) {
          uVar8 = (int)(uVar8 * 2) >> 1;
          uVar16 = 0xffffffff;
          if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)(local_110 + 0x88))) {
            puVar11 = (undefined4 *)((ulonglong)uVar8 * 4 + *(longlong *)(local_110 + 0x80));
            goto LAB_1474f30d7;
          }
        }
        else {
          puVar11 = (undefined4 *)(*(longlong *)(param_1 + 0x240) + lVar10 + 0xc);
LAB_1474f30d7:
          uVar16 = *puVar11;
        }
        iVar6 = *(int *)(local_100 + 0x38);
        *(uint *)(local_100 + 0x38) = iVar6 + 1U;
        if (*(uint *)(local_100 + 0x3c) < iVar6 + 1U) {
          FUN_1408f8cfa(plVar19,iVar6);
        }
        *(undefined4 *)(*plVar19 + (longlong)iVar6 * 4) = uVar16;
        iVar6 = *(int *)(*plVar19 + (longlong)iVar6 * 4);
        if (*(char *)(*(longlong *)(param_2 + 0x38) + (longlong)iVar6) == '\0') {
          FUN_1447d5d8e(local_f8,iVar6);
        }
        lVar15 = *local_f8;
        iVar7 = *(int *)(lVar9 + 0x18);
        *(uint *)(lVar9 + 0x18) = iVar7 + 1U;
        if (*(uint *)(lVar9 + 0x1c) < iVar7 + 1U) {
          FUN_144a2c682(local_108,iVar7);
        }
        puVar12 = (undefined8 *)((longlong)iVar6 * 0x60 + lVar15);
        puVar17 = (undefined8 *)((longlong)iVar7 * 0x60 + *local_108);
        for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
          *puVar17 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar17 = puVar17 + 1;
        }
        lVar10 = lVar10 + 0x14;
      } while (local_e0 != lVar10);
    }
    uVar16 = *(undefined4 *)(param_1 + 0x238);
    local_c0 = (code *)0x0;
    local_b8 = (undefined8 *)((ulonglong)local_b8 & 0xffffffff00000000);
    puVar12 = (undefined8 *)FUN_144a72ab6(0x28,&local_c0);
    *puVar12 = &PTR_LAB_14a442510;
    uVar13 = FUN_144a3f946();
    puVar12[2] = uVar13;
    *puVar12 = &PTR_FUN_14a4424a0;
    puVar12[3] = param_1;
    puVar12[4] = FUN_1474f384e;
    bVar5 = *(byte *)(param_1 + 0xf8);
    uVar2 = *(undefined4 *)(param_1 + 0x154);
    uVar3 = *(undefined4 *)(param_1 + 0x110);
    uVar4 = *(undefined4 *)(param_1 + 0x150);
    local_d0 = 0;
    local_c8 = 0;
    puVar12 = (undefined8 *)FUN_144a72ab6(0x28,&local_d0);
    *puVar12 = &PTR_LAB_14a442430;
    *(undefined4 *)(puVar12 + 1) = uVar1;
    uVar13 = FUN_144a3f946();
    plVar18 = local_f0;
    puVar12[2] = uVar13;
    *puVar12 = &PTR_FUN_14a4423c0;
    puVar12[3] = param_1;
    puVar12[4] = FUN_1474f39d6;
    local_120 = local_f0;
    local_148 = (uint)bVar5;
    local_178 = uVar1;
    local_170 = uVar20;
    local_168 = &local_d0;
    local_160 = uVar3;
    local_158 = uVar4;
    local_150 = uVar2;
    local_140 = &local_c0;
    local_138 = param_1 + 0x260;
    local_130 = param_1 + 0x250;
    local_128 = uVar16;
    FUN_14690efb3(local_108,local_e8,param_1 + 0x170,param_1 + 0x188);
    FUN_1449db362(&local_d0);
    FUN_1449db362(&local_c0);
    iVar6 = *(int *)(local_100 + 0x38);
    if (0 < (longlong)iVar6) {
      lVar10 = 0;
      lVar9 = 0;
      do {
        lVar15 = *plVar18;
        lVar14 = *plVar19;
        iVar7 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar7 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar7 + 1U) {
          FUN_1400c28ea(param_3,iVar7);
          plVar18 = local_f0;
        }
        puVar11 = (undefined4 *)(*param_3 + (longlong)iVar7 * 0x70);
        *puVar11 = *(undefined4 *)(lVar14 + lVar9 * 4);
        puVar12 = (undefined8 *)(lVar15 + lVar10);
        puVar17 = (undefined8 *)(puVar11 + 4);
        for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
          *puVar17 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar17 = puVar17 + 1;
        }
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 0x60;
      } while (iVar6 != lVar9);
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474f33aa FUN_1474f33aa body=1187 status=ok
// SIG undefined FUN_1474f33aa(void)

void FUN_1474f33aa(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
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
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  undefined4 local_160;
  undefined8 *local_158;
  longlong local_148;
  longlong local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar1 = param_1 + 0x158;
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (*(int *)(param_1 + 0x164) != 0) {
    FUN_14093938a(lVar1,0);
  }
  lVar20 = param_1 + 0x170;
  *(undefined4 *)(param_1 + 0x178) = 0;
  if (*(int *)(param_1 + 0x17c) != 0) {
    FUN_1409394d2(lVar20,0);
  }
  lVar23 = param_1 + 0x188;
  *(undefined4 *)(param_1 + 400) = 0;
  local_148 = lVar20;
  if (*(int *)(param_1 + 0x194) != 0) {
    FUN_14093938a(lVar23,0);
  }
  local_140 = lVar23;
  if (0 < *(int *)(param_1 + 0x1d8)) {
    lVar24 = 0x50;
    lVar20 = 0;
    lVar25 = 0;
    lVar23 = 0;
    do {
      if (lVar23 < *(int *)(param_1 + 0x108)) {
        lVar7 = *(longlong *)(param_1 + 0x100);
        puVar2 = (undefined4 *)(lVar7 + -0x50 + lVar24);
        uVar38 = *puVar2;
        uVar39 = puVar2[1];
        uVar40 = puVar2[2];
        uVar41 = puVar2[3];
        puVar2 = (undefined4 *)(lVar7 + -0x40 + lVar24);
        uVar42 = *puVar2;
        uVar43 = puVar2[1];
        uVar44 = puVar2[2];
        uVar45 = puVar2[3];
        puVar2 = (undefined4 *)(lVar7 + -0x30 + lVar24);
        uVar34 = *puVar2;
        uVar35 = puVar2[1];
        uVar36 = puVar2[2];
        uVar37 = puVar2[3];
        pdVar3 = (double *)(lVar7 + -0x20 + lVar24);
        local_128 = *pdVar3;
        dStack_120 = pdVar3[1];
        puVar2 = (undefined4 *)(lVar7 + -0x10 + lVar24);
        uVar30 = *puVar2;
        uVar31 = puVar2[1];
        uVar32 = puVar2[2];
        uVar33 = puVar2[3];
        puVar2 = (undefined4 *)(lVar7 + lVar24);
        uVar26 = *puVar2;
        uVar27 = puVar2[1];
        uVar28 = puVar2[2];
        uVar29 = puVar2[3];
      }
      else {
        uVar38 = 0;
        uVar39 = 0;
        uVar40 = 0;
        uVar41 = 0;
        uVar42 = 0;
        uVar43 = 0;
        uVar44 = 0;
        uVar45 = 0x3ff00000;
        uVar34 = 0;
        uVar35 = 0;
        uVar36 = 0;
        uVar37 = 0;
        local_128 = 0.0;
        dStack_120 = 0.0;
        uVar30 = 0;
        uVar31 = 0x3ff00000;
        uVar32 = 0;
        uVar33 = 0x3ff00000;
        uVar26 = 0;
        uVar27 = 0x3ff00000;
        uVar28 = 0;
        uVar29 = 0;
      }
      lVar7 = *(longlong *)(param_1 + 0x1d0);
      local_128 = local_128 + *(double *)(lVar7 + 0x18 + lVar25);
      dVar14 = (double)CONCAT44(uVar37,uVar36) + *(double *)(lVar7 + 0x10 + lVar25);
      dVar4 = *(double *)(lVar7 + 8 + lVar25);
      pdVar3 = (double *)(*(longlong *)(param_1 + 0x1e8) + 0x10 + lVar20);
      dVar9 = *pdVar3;
      dVar16 = pdVar3[1];
      pdVar3 = (double *)(*(longlong *)(param_1 + 0x1e8) + 0x20 + lVar20);
      dVar17 = *pdVar3;
      dVar18 = pdVar3[1];
      lVar19 = *(longlong *)(param_1 + 0x200);
      local_118._8_4_ = uVar28;
      local_118._0_8_ = (double)CONCAT44(uVar27,uVar26) * *(double *)(lVar19 + 0x18 + lVar25);
      local_118._12_4_ = uVar29;
      dVar13 = (double)CONCAT44(uVar33,uVar32) * *(double *)(lVar19 + 0x10 + lVar25);
      dVar5 = *(double *)(lVar19 + 8 + lVar25);
      iVar6 = *(int *)(param_1 + 0x160);
      *(uint *)(param_1 + 0x160) = iVar6 + 1U;
      local_138 = dVar9;
      dStack_130 = dVar16;
      if (*(uint *)(param_1 + 0x164) < iVar6 + 1U) {
        FUN_140924c58(lVar1,iVar6);
      }
      puVar21 = (undefined8 *)(lVar7 + lVar25);
      puVar22 = (undefined8 *)((longlong)iVar6 * 0x58 + *(longlong *)(param_1 + 0x158));
      for (lVar19 = 0xb; lVar19 != 0; lVar19 = lVar19 + -1) {
        *puVar22 = *puVar21;
        puVar21 = puVar21 + 1;
        puVar22 = puVar22 + 1;
      }
      lVar7 = *(longlong *)(param_1 + 0x1e8);
      iVar6 = *(int *)(param_1 + 0x178);
      *(uint *)(param_1 + 0x178) = iVar6 + 1U;
      if (*(uint *)(param_1 + 0x17c) < iVar6 + 1U) {
        FUN_147501e1a(local_148,iVar6);
      }
      puVar21 = (undefined8 *)(lVar7 + lVar20);
      puVar22 = (undefined8 *)((longlong)iVar6 * 0x80 + *(longlong *)(param_1 + 0x170));
      for (lVar19 = 0x10; lVar19 != 0; lVar19 = lVar19 + -1) {
        *puVar22 = *puVar21;
        puVar21 = puVar21 + 1;
        puVar22 = puVar22 + 1;
      }
      lVar7 = *(longlong *)(param_1 + 0x200);
      iVar6 = *(int *)(param_1 + 400);
      *(uint *)(param_1 + 400) = iVar6 + 1U;
      if (*(uint *)(param_1 + 0x194) < iVar6 + 1U) {
        FUN_140924c58(local_140,iVar6);
      }
      dVar11 = (double)CONCAT44(uVar43,uVar42) * dVar9 * 1.0 +
               dVar18 * (double)CONCAT44(uVar41,uVar40) +
               (double)CONCAT44(uVar39,uVar38) * dVar17 * -1.0 +
               (double)CONCAT44(uVar45,uVar44) * dStack_130;
      dVar9 = (double)CONCAT44(uVar43,uVar42) * dVar17 * -1.0 +
              ((dVar9 * (double)CONCAT44(uVar39,uVar38) * -1.0 +
               (double)CONCAT44(uVar45,uVar44) * dVar18) -
              (double)CONCAT44(uVar41,uVar40) * dStack_130);
      puVar21 = (undefined8 *)(lVar7 + lVar25);
      puVar22 = (undefined8 *)((longlong)iVar6 * 0x58 + *(longlong *)(param_1 + 0x188));
      for (lVar19 = 0xb; lVar19 != 0; lVar19 = lVar19 + -1) {
        *puVar22 = *puVar21;
        puVar21 = puVar21 + 1;
        puVar22 = puVar22 + 1;
      }
      lVar7 = *(longlong *)(param_1 + 0x158);
      auVar15._8_4_ = SUB84(dVar14,0);
      auVar15._0_8_ = (double)CONCAT44(uVar35,uVar34) + dVar4;
      auVar15._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      *(undefined1 (*) [16])(lVar7 + 8 + lVar25) = auVar15;
      *(double *)(lVar7 + 0x18 + lVar25) = local_128;
      lVar7 = *(longlong *)(param_1 + 0x170);
      auVar10._8_4_ = SUB84(dVar11,0);
      auVar10._0_8_ =
           (double)CONCAT44(uVar43,uVar42) * dVar16 * -1.0 +
           dVar17 * (double)CONCAT44(uVar41,uVar40) +
           (double)CONCAT44(uVar39,uVar38) * dVar18 * 1.0 +
           (double)CONCAT44(uVar45,uVar44) * local_138;
      auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      *(undefined1 (*) [16])(lVar7 + 0x10 + lVar20) = auVar10;
      auVar8._8_4_ = SUB84(dVar9,0);
      auVar8._0_8_ = (double)CONCAT44(uVar43,uVar42) * dVar18 * 1.0 +
                     ((dVar16 * (double)CONCAT44(uVar39,uVar38) * 1.0 +
                      (double)CONCAT44(uVar45,uVar44) * dVar17) -
                     (double)CONCAT44(uVar41,uVar40) * local_138);
      auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      *(undefined1 (*) [16])(lVar7 + 0x20 + lVar20) = auVar8;
      lVar7 = *(longlong *)(param_1 + 0x188);
      auVar12._8_4_ = SUB84(dVar13,0);
      auVar12._0_8_ = (double)CONCAT44(uVar31,uVar30) * dVar5;
      auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      *(undefined1 (*) [16])(lVar7 + 8 + lVar25) = auVar12;
      puVar2 = (undefined4 *)(lVar7 + 0x18 + lVar25);
      *puVar2 = local_118._0_4_;
      puVar2[1] = local_118._4_4_;
      lVar23 = lVar23 + 1;
      lVar24 = lVar24 + 0x60;
      lVar25 = lVar25 + 0x58;
      lVar20 = lVar20 + 0x80;
    } while (lVar23 < *(int *)(param_1 + 0x1d8));
  }
  local_158 = &local_108;
  local_108 = 0x3ff0000000000000;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0x3ff0000000000000;
  local_160 = 0;
  local_168 = 0;
  FUN_140939c80(lVar1,0,0,10);
  FUN_147a27be4(lVar1,param_1 + 0x1c0,0x3f000000);
  if ((local_f0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474f384e FUN_1474f384e body=391 status=ok
// SIG undefined FUN_1474f384e(void)

ulonglong FUN_1474f384e(longlong param_1,double *param_2,float param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  
  iVar7 = *(int *)(param_1 + 0x1c8) + -1;
  iVar2 = *param_4;
  if (iVar7 < iVar2) {
    iVar7 = iVar2;
  }
  lVar6 = 0;
  lVar9 = (longlong)iVar2 << 5;
  do {
    lVar8 = lVar9;
    if ((longlong)iVar2 - (longlong)iVar7 == lVar6) {
      *param_4 = 0;
      return (ulonglong)
             *(uint *)(*(longlong *)(param_1 + 0x1a0) + 4 +
                      (longlong)(*(int *)(param_1 + 0x1a8) + -1) * 0x14);
    }
    lVar3 = *(longlong *)(param_1 + 0x1c0);
    dVar10 = param_2[2] - *(double *)(lVar3 + 0x10 + lVar8);
    dVar11 = param_2[1] - *(double *)(lVar3 + 8 + lVar8);
    dVar4 = *param_2 - *(double *)(lVar3 + lVar8);
    dVar11 = dVar10 * dVar10 + dVar4 * dVar4 + dVar11 * dVar11;
    lVar6 = lVar6 + -1;
    lVar9 = lVar8 + 0x20;
  } while (((double)(param_3 * param_3) < dVar11) ||
          (dVar4 = param_2[2] - *(double *)(lVar3 + 0x30 + lVar8),
          dVar10 = param_2[1] - *(double *)(lVar3 + 0x28 + lVar8),
          dVar5 = *param_2 - *(double *)(lVar3 + 0x20 + lVar8),
          dVar4 = dVar4 * dVar4 + dVar5 * dVar5 + dVar10 * dVar10,
          dVar4 < (double)(param_3 * param_3)));
  dVar11 = SQRT(dVar11);
  dVar11 = ((double)param_3 - dVar11) / (SQRT(dVar4) - dVar11);
  if (1.0 <= dVar11) {
    dVar11 = 1.0;
  }
  *param_4 = ~(uint)lVar6 + iVar2;
  if (dVar11 <= 0.0) {
    dVar11 = 0.0;
  }
  fVar1 = *(float *)(lVar3 + -8 + lVar9);
  dVar11 = (double)(*(float *)(lVar3 + 0x18 + lVar9) - fVar1) * dVar11 + (double)fVar1;
  return CONCAT44((int)((ulonglong)dVar11 >> 0x20),(float)dVar11);
}



// FUNCTION 1474f39d6 FUN_1474f39d6 body=38 status=ok
// SIG undefined FUN_1474f39d6(void)

undefined4 FUN_1474f39d6(longlong param_1,float param_2,float param_3)

{
  FUN_1417b37fc(param_1 + 0x120,param_2 / param_3);
  return *(undefined4 *)(param_1 + 0x138);
}



// FUNCTION 1474f3a64 FUN_1474f3a64 body=108 status=ok
// SIG undefined FUN_1474f3a64(void)

void FUN_1474f3a64(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_14019c9f2(param_1 + 0xd8);
  FUN_14019c9f2(param_1 + 0xe8,param_2);
  FUN_1474f2c28(param_1,*(undefined8 *)(param_2 + 0x48));
  if ((longlong)*(int *)(param_1 + 0x248) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x240);
    lVar1 = (longlong)*(int *)(param_1 + 0x248) * 0x14;
    do {
      FUN_14019c9f2(lVar2,param_2);
      lVar2 = lVar2 + 0x14;
      lVar1 = lVar1 + -0x14;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1474f3ad0 FUN_1474f3ad0 body=3614 status=ok
// SIG undefined FUN_1474f3ad0(void)

void FUN_1474f3ad0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double *pdVar19;
  longlong lVar20;
  double *pdVar21;
  longlong lVar22;
  double *pdVar23;
  int iVar24;
  longlong lVar25;
  ulonglong uVar26;
  byte bVar27;
  undefined8 *puVar28;
  longlong lVar29;
  longlong lVar30;
  undefined4 uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  float fVar35;
  float fVar36;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  undefined4 local_1a0;
  undefined8 *local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  ulonglong local_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (*(int *)(param_1 + 0x248) < 1) goto LAB_1474f4869;
  local_108 = 0;
  uStack_100 = 0;
  local_128 = *(undefined8 *)(param_2 + 0x30);
  uStack_120 = CONCAT44(uStack_120._4_4_,*(undefined4 *)(param_2 + 0x38));
  FUN_144a39936(param_2,&local_128);
  *(undefined4 *)(param_1 + 600) = 0;
  if (*(int *)(param_1 + 0x25c) < 0) {
    FUN_14482f6fa(param_1 + 0x250,0);
  }
  *(undefined4 *)(param_1 + 0x268) = 0;
  if (*(int *)(param_1 + 0x26c) < 0) {
    FUN_1401017f4(param_1 + 0x260,0);
  }
  if (0 < *(int *)(param_1 + 0x248)) {
    lVar25 = 0x10;
    lVar30 = 0;
    do {
      local_118 = CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
      uStack_110 = CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
      local_128 = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
      uStack_120 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
      if (lVar30 == 0) {
        dVar32 = 0.0;
      }
      else {
        bVar27 = *(char *)(param_1 + 0xf8) - 1;
        pdVar19 = &DAT_14c8464f0;
        pdVar21 = (double *)&DAT_14c8464e8;
        pdVar23 = (double *)&DAT_14c8464e0;
        if (bVar27 < 3) {
          pdVar19 = (double *)(&PTR_DAT_14a442970)[bVar27];
          pdVar21 = (double *)(&PTR_DAT_14a442988)[bVar27];
          pdVar23 = (double *)(&PTR_DAT_14a4429a0)[bVar27];
        }
        dVar32 = *pdVar23;
        dVar33 = *pdVar21;
        dVar34 = *pdVar19;
        dVar7 = dVar34 * dVar34 + dVar32 * dVar32 + dVar33 * dVar33;
        if ((dVar7 != 1.0) || (NAN(dVar7))) {
          if (9.99999993922529e-09 <= dVar7) {
            dVar7 = 1.0 / SQRT(dVar7);
            dVar34 = dVar34 * dVar7;
            dVar33 = dVar33 * dVar7;
            dVar32 = dVar32 * dVar7;
          }
          else {
            dVar32 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            dVar33 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            dVar34 = DAT_14c8464f0;
          }
        }
        lVar22 = (longlong)*(int *)(*(longlong *)(param_1 + 0x240) + lVar25) * 0x60;
        lVar20 = (longlong)*(int *)(*(longlong *)(param_1 + 0x240) + -0x14 + lVar25) * 0x60;
        pdVar19 = (double *)(local_108 + 0x20 + lVar22);
        local_138 = *(double *)(local_108 + 0x30 + lVar22) - *(double *)(local_108 + 0x30 + lVar20);
        pdVar21 = (double *)(local_108 + 0x20 + lVar20);
        local_148 = *pdVar19 - *pdVar21;
        uStack_140 = pdVar19[1] - pdVar21[1];
        dVar10 = *(double *)(local_108 + lVar22);
        dVar11 = ((double *)(local_108 + lVar22))[1];
        pdVar19 = (double *)(local_108 + 0x10 + lVar22);
        dVar12 = *pdVar19;
        dVar13 = pdVar19[1];
        dVar7 = dVar10 * dVar33 - dVar32 * dVar11;
        dVar8 = dVar12 * dVar32 - dVar34 * dVar10;
        dVar9 = dVar11 * dVar34 - dVar33 * dVar12;
        dVar7 = dVar7 + dVar7;
        dVar8 = dVar8 + dVar8;
        dVar9 = dVar9 + dVar9;
        local_158 = (dVar10 * dVar8 - dVar9 * dVar11) + dVar13 * dVar7 + dVar34;
        dStack_160 = (dVar12 * dVar9 - dVar7 * dVar10) + dVar13 * dVar8 + dVar33;
        local_168 = (dVar11 * dVar7 - dVar8 * dVar12) + dVar13 * dVar9 + dVar32;
        dVar32 = local_158 * local_158 + local_168 * local_168 + dStack_160 * dStack_160;
        if ((dVar32 != 1.0) || (NAN(dVar32))) {
          if (9.99999993922529e-09 <= dVar32) {
            dVar32 = 1.0 / SQRT(dVar32);
            local_158 = local_158 * dVar32;
            dStack_160 = dStack_160 * dVar32;
            local_168 = local_168 * dVar32;
          }
          else {
            local_158 = DAT_14c8464f0;
            local_168 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            dStack_160 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          }
        }
        dVar33 = local_138 * local_138 + local_148 * local_148 + uStack_140 * uStack_140;
        dVar32 = SQRT(dVar33);
        if ((dVar33 != 1.0) || (NAN(dVar33))) {
          if (9.99999993922529e-09 <= dVar33) {
            dVar33 = 1.0 / dVar32;
            local_138 = local_138 * dVar33;
            uStack_140 = uStack_140 * dVar33;
            local_148 = dVar33 * local_148;
          }
          else {
            local_138 = DAT_14c8464f0;
            local_148 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            uStack_140 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          }
        }
        FUN_144a9d448(&local_128,&local_148,&local_168);
      }
      iVar5 = *(int *)(param_1 + 600);
      *(uint *)(param_1 + 600) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x25c) < iVar5 + 1U) {
        FUN_14475e4ac(param_1 + 0x250,iVar5);
      }
      *(float *)(*(longlong *)(param_1 + 0x250) + (longlong)iVar5 * 4) = (float)dVar32;
      iVar5 = *(int *)(param_1 + 0x268);
      *(uint *)(param_1 + 0x268) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x26c) < iVar5 + 1U) {
        FUN_140e16be0(param_1 + 0x260,iVar5);
      }
      lVar20 = *(longlong *)(param_1 + 0x260);
      puVar3 = (undefined8 *)(lVar20 + 0x10 + (longlong)iVar5 * 0x20);
      *puVar3 = local_118;
      puVar3[1] = uStack_110;
      puVar2 = (undefined4 *)(lVar20 + (longlong)iVar5 * 0x20);
      *puVar2 = (undefined4)local_128;
      puVar2[1] = local_128._4_4_;
      puVar2[2] = (undefined4)uStack_120;
      puVar2[3] = uStack_120._4_4_;
      lVar30 = lVar30 + 1;
      lVar25 = lVar25 + 0x14;
    } while (lVar30 < *(int *)(param_1 + 0x248));
  }
  lVar25 = param_1 + 0x1d0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  if (*(int *)(param_1 + 0x1dc) != 0) {
    FUN_14093938a(lVar25,0);
  }
  lVar30 = param_1 + 0x1e8;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if (*(int *)(param_1 + 500) != 0) {
    FUN_1409394d2(lVar30,0);
  }
  plVar1 = (longlong *)(param_1 + 0x200);
  *(undefined4 *)(param_1 + 0x208) = 0;
  local_180 = lVar25;
  if (*(int *)(param_1 + 0x20c) != 0) {
    FUN_14093938a(plVar1,0);
  }
  uVar26 = 2;
  if (2 < (int)*(uint *)(param_1 + 0xfc)) {
    uVar26 = (ulonglong)*(uint *)(param_1 + 0xfc);
  }
  local_178 = lVar30;
  if (*(char *)(param_1 + 0xf9) == '\0') {
    if ((int)uVar26 == *(int *)(param_1 + 0x248)) goto LAB_1474f40b7;
    lVar25 = param_1 + 0x158;
    *(undefined4 *)(param_1 + 0x160) = 0;
    if (*(int *)(param_1 + 0x164) != 0) {
      FUN_14093938a(lVar25,0);
    }
    lVar30 = param_1 + 0x170;
    *(undefined4 *)(param_1 + 0x178) = 0;
    local_170 = uVar26;
    if (*(int *)(param_1 + 0x17c) != 0) {
      FUN_1409394d2(lVar30,0);
    }
    lVar20 = param_1 + 0x188;
    *(undefined4 *)(param_1 + 400) = 0;
    if (*(int *)(param_1 + 0x194) != 0) {
      FUN_14093938a(lVar20,0);
    }
    iVar5 = *(int *)(param_1 + 0x248);
    local_190 = lVar30;
    local_188 = lVar20;
    if (0 < iVar5) {
      lVar30 = 0x10;
      lVar20 = 0;
      do {
        lVar22 = local_108;
        lVar29 = (longlong)*(int *)(*(longlong *)(param_1 + 0x240) + lVar30) * 0x60;
        puVar3 = (undefined8 *)(local_108 + 0x20 + lVar29);
        uVar14 = *puVar3;
        uVar15 = puVar3[1];
        uVar4 = *(undefined8 *)(local_108 + 0x30 + lVar29);
        iVar24 = *(int *)(param_1 + 0x160);
        *(uint *)(param_1 + 0x160) = iVar24 + 1U;
        if (*(uint *)(param_1 + 0x164) < iVar24 + 1U) {
          FUN_140924c58(lVar25,iVar24);
        }
        fVar35 = (float)(int)lVar20 / (float)(iVar5 + -1);
        puVar28 = (undefined8 *)(lVar22 + lVar29);
        lVar22 = *(longlong *)(param_1 + 0x158);
        lVar29 = (longlong)iVar24 * 0x58;
        *(float *)(lVar22 + lVar29) = fVar35;
        puVar3 = (undefined8 *)(lVar22 + 8 + lVar29);
        *puVar3 = uVar14;
        puVar3[1] = uVar15;
        *(undefined8 *)(lVar22 + 0x18 + lVar29) = uVar4;
        uVar4 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        puVar3 = (undefined8 *)(lVar22 + 0x20 + lVar29);
        *puVar3 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        puVar3[1] = uVar4;
        *(double *)(lVar22 + 0x30 + lVar29) = DAT_14c8464f0;
        uVar18 = DAT_14c8464e8._4_4_;
        uVar17 = (undefined4)DAT_14c8464e8;
        uVar31 = DAT_14c8464e0._4_4_;
        puVar2 = (undefined4 *)(lVar22 + 0x38 + lVar29);
        *puVar2 = (undefined4)DAT_14c8464e0;
        puVar2[1] = uVar31;
        puVar2[2] = uVar17;
        puVar2[3] = uVar18;
        *(double *)(lVar22 + 0x48 + lVar29) = DAT_14c8464f0;
        *(undefined1 *)(lVar22 + 0x50 + lVar29) = 1;
        uVar4 = *puVar28;
        uVar14 = puVar28[1];
        uVar15 = puVar28[2];
        uVar16 = puVar28[3];
        iVar24 = *(int *)(param_1 + 0x178);
        *(uint *)(param_1 + 0x178) = iVar24 + 1U;
        if (*(uint *)(param_1 + 0x17c) < iVar24 + 1U) {
          FUN_147501e1a(local_190,iVar24);
        }
        lVar22 = *(longlong *)(param_1 + 0x170);
        lVar29 = (longlong)iVar24 * 0x80;
        *(float *)(lVar22 + lVar29) = fVar35;
        puVar3 = (undefined8 *)(lVar22 + 0x10 + lVar29);
        *puVar3 = uVar4;
        puVar3[1] = uVar14;
        puVar3 = (undefined8 *)(lVar22 + 0x20 + lVar29);
        *puVar3 = uVar15;
        puVar3[1] = uVar16;
        uVar4 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
        puVar3 = (undefined8 *)(lVar22 + 0x30 + lVar29);
        *puVar3 = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
        puVar3[1] = uVar4;
        uVar4 = CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
        puVar3 = (undefined8 *)(lVar22 + 0x40 + lVar29);
        *puVar3 = CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
        puVar3[1] = uVar4;
        uVar4 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
        puVar3 = (undefined8 *)(lVar22 + 0x50 + lVar29);
        *puVar3 = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
        puVar3[1] = uVar4;
        uVar18 = DAT_14c8463e8._4_4_;
        uVar17 = (undefined4)DAT_14c8463e8;
        uVar31 = DAT_14c8463e0._4_4_;
        puVar2 = (undefined4 *)(lVar22 + 0x60 + lVar29);
        *puVar2 = (undefined4)DAT_14c8463e0;
        puVar2[1] = uVar31;
        puVar2[2] = uVar17;
        puVar2[3] = uVar18;
        *(undefined1 *)(lVar22 + 0x70 + lVar29) = 0;
        uVar14 = puVar28[8];
        uVar15 = puVar28[9];
        uVar4 = puVar28[10];
        iVar24 = *(int *)(param_1 + 400);
        *(uint *)(param_1 + 400) = iVar24 + 1U;
        if (*(uint *)(param_1 + 0x194) < iVar24 + 1U) {
          FUN_140924c58(local_188,iVar24);
        }
        lVar22 = *(longlong *)(param_1 + 0x188);
        lVar29 = (longlong)iVar24 * 0x58;
        *(float *)(lVar22 + lVar29) = fVar35;
        puVar3 = (undefined8 *)(lVar22 + 8 + lVar29);
        *puVar3 = uVar14;
        puVar3[1] = uVar15;
        *(undefined8 *)(lVar22 + 0x18 + lVar29) = uVar4;
        uVar4 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        puVar3 = (undefined8 *)(lVar22 + 0x20 + lVar29);
        *puVar3 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        puVar3[1] = uVar4;
        *(double *)(lVar22 + 0x30 + lVar29) = DAT_14c8464f0;
        uVar18 = DAT_14c8464e8._4_4_;
        uVar17 = (undefined4)DAT_14c8464e8;
        uVar31 = DAT_14c8464e0._4_4_;
        puVar2 = (undefined4 *)(lVar22 + 0x38 + lVar29);
        *puVar2 = (undefined4)DAT_14c8464e0;
        puVar2[1] = uVar31;
        puVar2[2] = uVar17;
        puVar2[3] = uVar18;
        *(double *)(lVar22 + 0x48 + lVar29) = DAT_14c8464f0;
        *(undefined1 *)(lVar22 + 0x50 + lVar29) = 1;
        lVar20 = lVar20 + 1;
        lVar30 = lVar30 + 0x14;
      } while (lVar20 < *(int *)(param_1 + 0x248));
    }
    local_128 = 0x3ff0000000000000;
    uStack_120 = 0x3ff0000000000000;
    local_118 = 0x3ff0000000000000;
    local_1a0 = 0;
    local_1a8 = 0;
    iVar24 = 0;
    local_198 = &local_128;
    FUN_140939c80(lVar25,0,0,10);
    iVar5 = (int)local_170;
    do {
      fVar36 = (float)iVar24;
      fVar35 = fVar36 / (float)(iVar5 + -1);
      local_168 = 0.0;
      dStack_160 = 0.0;
      local_158 = 0.0;
      FUN_140703ce0(lVar25,&local_128,fVar35,&local_168);
      iVar6 = *(int *)(param_1 + 0x1d8);
      *(uint *)(param_1 + 0x1d8) = iVar6 + 1U;
      if (*(uint *)(param_1 + 0x1dc) < iVar6 + 1U) {
        FUN_140924c58(local_180,iVar6);
      }
      lVar30 = *(longlong *)(param_1 + 0x1d0);
      lVar20 = (longlong)iVar6 * 0x58;
      *(float *)(lVar30 + lVar20) = fVar36;
      *(undefined8 *)(lVar30 + 0x18 + lVar20) = local_118;
      puVar3 = (undefined8 *)(lVar30 + 8 + lVar20);
      *puVar3 = local_128;
      puVar3[1] = uStack_120;
      uVar4 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      puVar3 = (undefined8 *)(lVar30 + 0x20 + lVar20);
      *puVar3 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      puVar3[1] = uVar4;
      *(double *)(lVar30 + 0x30 + lVar20) = DAT_14c8464f0;
      uVar18 = DAT_14c8464e8._4_4_;
      uVar17 = (undefined4)DAT_14c8464e8;
      uVar31 = DAT_14c8464e0._4_4_;
      puVar2 = (undefined4 *)(lVar30 + 0x38 + lVar20);
      *puVar2 = (undefined4)DAT_14c8464e0;
      puVar2[1] = uVar31;
      puVar2[2] = uVar17;
      puVar2[3] = uVar18;
      *(double *)(lVar30 + 0x48 + lVar20) = DAT_14c8464f0;
      *(undefined1 *)(lVar30 + 0x50 + lVar20) = 1;
      local_168 = 0.0;
      dStack_160 = 0.0;
      local_158 = 0.0;
      local_150 = 0x3ff0000000000000;
      FUN_14099e59e(local_190,&local_128,fVar35,&local_168);
      iVar6 = *(int *)(param_1 + 0x1f0);
      *(uint *)(param_1 + 0x1f0) = iVar6 + 1U;
      if (*(uint *)(param_1 + 500) < iVar6 + 1U) {
        FUN_147501e1a(local_178,iVar6);
      }
      lVar30 = *(longlong *)(param_1 + 0x1e8);
      lVar20 = (longlong)iVar6 * 0x80;
      *(float *)(lVar30 + lVar20) = fVar36;
      puVar2 = (undefined4 *)(lVar30 + 0x20 + lVar20);
      *puVar2 = (undefined4)local_118;
      puVar2[1] = local_118._4_4_;
      puVar2[2] = (undefined4)uStack_110;
      puVar2[3] = uStack_110._4_4_;
      puVar3 = (undefined8 *)(lVar30 + 0x10 + lVar20);
      *puVar3 = local_128;
      puVar3[1] = uStack_120;
      uVar4 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
      puVar3 = (undefined8 *)(lVar30 + 0x30 + lVar20);
      *puVar3 = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
      puVar3[1] = uVar4;
      uVar4 = CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
      puVar3 = (undefined8 *)(lVar30 + 0x40 + lVar20);
      *puVar3 = CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
      puVar3[1] = uVar4;
      uVar4 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
      puVar3 = (undefined8 *)(lVar30 + 0x50 + lVar20);
      *puVar3 = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
      puVar3[1] = uVar4;
      uVar18 = DAT_14c8463e8._4_4_;
      uVar17 = (undefined4)DAT_14c8463e8;
      uVar31 = DAT_14c8463e0._4_4_;
      puVar2 = (undefined4 *)(lVar30 + 0x60 + lVar20);
      *puVar2 = (undefined4)DAT_14c8463e0;
      puVar2[1] = uVar31;
      puVar2[2] = uVar17;
      puVar2[3] = uVar18;
      *(undefined1 *)(lVar30 + 0x70 + lVar20) = 0;
      local_168 = 0.0;
      dStack_160 = 0.0;
      local_158 = 0.0;
      FUN_140703ce0(local_188,&local_128,fVar35,&local_168);
      iVar6 = *(int *)(param_1 + 0x208);
      *(uint *)(param_1 + 0x208) = iVar6 + 1U;
      if (*(uint *)(param_1 + 0x20c) < iVar6 + 1U) {
        FUN_140924c58(plVar1,iVar6);
      }
      lVar30 = *plVar1;
      lVar20 = (longlong)iVar6 * 0x58;
      *(float *)(lVar30 + lVar20) = fVar36;
      *(undefined8 *)(lVar30 + 0x18 + lVar20) = local_118;
      puVar3 = (undefined8 *)(lVar30 + 8 + lVar20);
      *puVar3 = local_128;
      puVar3[1] = uStack_120;
      uVar4 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      puVar3 = (undefined8 *)(lVar30 + 0x20 + lVar20);
      *puVar3 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      puVar3[1] = uVar4;
      *(double *)(lVar30 + 0x30 + lVar20) = DAT_14c8464f0;
      uVar18 = DAT_14c8464e8._4_4_;
      uVar17 = (undefined4)DAT_14c8464e8;
      uVar31 = DAT_14c8464e0._4_4_;
      puVar2 = (undefined4 *)(lVar30 + 0x38 + lVar20);
      *puVar2 = (undefined4)DAT_14c8464e0;
      puVar2[1] = uVar31;
      puVar2[2] = uVar17;
      puVar2[3] = uVar18;
      *(double *)(lVar30 + 0x48 + lVar20) = DAT_14c8464f0;
      *(undefined1 *)(lVar30 + 0x50 + lVar20) = 1;
      iVar24 = iVar24 + 1;
    } while (iVar5 != iVar24);
    *(undefined4 *)(param_1 + 0x160) = 0;
    if (*(int *)(param_1 + 0x164) != 0) {
      FUN_14093938a(lVar25,0);
    }
    *(undefined4 *)(param_1 + 0x178) = 0;
    if (*(int *)(param_1 + 0x17c) != 0) {
      FUN_1409394d2(local_190,0);
    }
    *(undefined4 *)(param_1 + 400) = 0;
    if (*(int *)(param_1 + 0x194) != 0) {
      FUN_14093938a(local_188,0);
    }
  }
  else if (0 < *(int *)(param_1 + 0x248)) {
LAB_1474f40b7:
    lVar25 = 0x10;
    lVar30 = 0;
    do {
      lVar20 = local_108;
      lVar22 = (longlong)*(int *)(*(longlong *)(param_1 + 0x240) + lVar25) * 0x60;
      puVar3 = (undefined8 *)(local_108 + 0x20 + lVar22);
      uVar14 = *puVar3;
      uVar15 = puVar3[1];
      uVar4 = *(undefined8 *)(local_108 + 0x30 + lVar22);
      iVar5 = *(int *)(param_1 + 0x1d8);
      *(uint *)(param_1 + 0x1d8) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x1dc) < iVar5 + 1U) {
        FUN_140924c58(local_180,iVar5);
      }
      fVar35 = (float)(int)lVar30;
      puVar28 = (undefined8 *)(lVar20 + lVar22);
      lVar20 = *(longlong *)(param_1 + 0x1d0);
      lVar22 = (longlong)iVar5 * 0x58;
      *(float *)(lVar20 + lVar22) = fVar35;
      puVar3 = (undefined8 *)(lVar20 + 8 + lVar22);
      *puVar3 = uVar14;
      puVar3[1] = uVar15;
      *(undefined8 *)(lVar20 + 0x18 + lVar22) = uVar4;
      uVar4 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      puVar3 = (undefined8 *)(lVar20 + 0x20 + lVar22);
      *puVar3 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      puVar3[1] = uVar4;
      *(double *)(lVar20 + 0x30 + lVar22) = DAT_14c8464f0;
      uVar18 = DAT_14c8464e8._4_4_;
      uVar17 = (undefined4)DAT_14c8464e8;
      uVar31 = DAT_14c8464e0._4_4_;
      puVar2 = (undefined4 *)(lVar20 + 0x38 + lVar22);
      *puVar2 = (undefined4)DAT_14c8464e0;
      puVar2[1] = uVar31;
      puVar2[2] = uVar17;
      puVar2[3] = uVar18;
      *(double *)(lVar20 + 0x48 + lVar22) = DAT_14c8464f0;
      *(undefined1 *)(lVar20 + 0x50 + lVar22) = 1;
      uVar4 = *puVar28;
      uVar14 = puVar28[1];
      uVar15 = puVar28[2];
      uVar16 = puVar28[3];
      iVar5 = *(int *)(param_1 + 0x1f0);
      *(uint *)(param_1 + 0x1f0) = iVar5 + 1U;
      if (*(uint *)(param_1 + 500) < iVar5 + 1U) {
        FUN_147501e1a(local_178,iVar5);
      }
      lVar20 = *(longlong *)(param_1 + 0x1e8);
      lVar22 = (longlong)iVar5 * 0x80;
      *(float *)(lVar20 + lVar22) = fVar35;
      puVar3 = (undefined8 *)(lVar20 + 0x10 + lVar22);
      *puVar3 = uVar4;
      puVar3[1] = uVar14;
      puVar3 = (undefined8 *)(lVar20 + 0x20 + lVar22);
      *puVar3 = uVar15;
      puVar3[1] = uVar16;
      uVar4 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
      puVar3 = (undefined8 *)(lVar20 + 0x30 + lVar22);
      *puVar3 = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
      puVar3[1] = uVar4;
      uVar4 = CONCAT44(DAT_14c8463e8._4_4_,(undefined4)DAT_14c8463e8);
      puVar3 = (undefined8 *)(lVar20 + 0x40 + lVar22);
      *puVar3 = CONCAT44(DAT_14c8463e0._4_4_,(undefined4)DAT_14c8463e0);
      puVar3[1] = uVar4;
      uVar4 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
      puVar3 = (undefined8 *)(lVar20 + 0x50 + lVar22);
      *puVar3 = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
      puVar3[1] = uVar4;
      uVar18 = DAT_14c8463e8._4_4_;
      uVar17 = (undefined4)DAT_14c8463e8;
      uVar31 = DAT_14c8463e0._4_4_;
      puVar2 = (undefined4 *)(lVar20 + 0x60 + lVar22);
      *puVar2 = (undefined4)DAT_14c8463e0;
      puVar2[1] = uVar31;
      puVar2[2] = uVar17;
      puVar2[3] = uVar18;
      *(undefined1 *)(lVar20 + 0x70 + lVar22) = 0;
      uVar14 = puVar28[8];
      uVar15 = puVar28[9];
      uVar4 = puVar28[10];
      iVar5 = *(int *)(param_1 + 0x208);
      *(uint *)(param_1 + 0x208) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x20c) < iVar5 + 1U) {
        FUN_140924c58(plVar1,iVar5);
      }
      lVar20 = *(longlong *)(param_1 + 0x200);
      lVar22 = (longlong)iVar5 * 0x58;
      *(float *)(lVar20 + lVar22) = fVar35;
      puVar3 = (undefined8 *)(lVar20 + 8 + lVar22);
      *puVar3 = uVar14;
      puVar3[1] = uVar15;
      *(undefined8 *)(lVar20 + 0x18 + lVar22) = uVar4;
      uVar4 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      puVar3 = (undefined8 *)(lVar20 + 0x20 + lVar22);
      *puVar3 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      puVar3[1] = uVar4;
      *(double *)(lVar20 + 0x30 + lVar22) = DAT_14c8464f0;
      uVar18 = DAT_14c8464e8._4_4_;
      uVar17 = (undefined4)DAT_14c8464e8;
      uVar31 = DAT_14c8464e0._4_4_;
      puVar2 = (undefined4 *)(lVar20 + 0x38 + lVar22);
      *puVar2 = (undefined4)DAT_14c8464e0;
      puVar2[1] = uVar31;
      puVar2[2] = uVar17;
      puVar2[3] = uVar18;
      *(double *)(lVar20 + 0x48 + lVar22) = DAT_14c8464f0;
      *(undefined1 *)(lVar20 + 0x50 + lVar22) = 1;
      lVar30 = lVar30 + 1;
      lVar25 = lVar25 + 0x14;
    } while (lVar30 < *(int *)(param_1 + 0x248));
  }
  lVar25 = local_180;
  local_198 = &local_128;
  local_128 = 0x3ff0000000000000;
  uStack_120 = 0x3ff0000000000000;
  local_118 = 0x3ff0000000000000;
  local_1a0 = 0;
  local_1a8 = 0;
  FUN_140939c80(local_180,0,0,10);
  uVar31 = FUN_147a27760(lVar25);
  *(undefined4 *)(param_1 + 0x238) = uVar31;
  FUN_147a27be4(lVar25,param_1 + 0x1c0,0x3f000000);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
LAB_1474f4869:
  if ((local_f0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474f4928 FUN_1474f4928 body=329 status=ok
// SIG undefined FUN_1474f4928(void)

void FUN_1474f4928(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  float fVar2;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  longlong local_60;
  int local_58;
  void *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  fVar2 = *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x3c);
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  FUN_1474f4a72(param_2,&local_50);
  FUN_140002266(&local_60,L"(Alpha: %.1f%% RemainingTime: %.3f)",(double)(fVar2 * 100.0),
                (double)*(float *)(param_1 + 0x168));
  iVar1 = local_58 + -1;
  if (local_58 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_50,local_60,iVar1);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  _Src = local_50;
  local_70 = (void *)0x0;
  local_68 = local_48;
  if ((longlong)local_48 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_48,0);
    memcpy(local_70,_Src,(longlong)local_48 * 2);
  }
  FUN_147906d4c(param_2,&local_70,0);
  FUN_147906d38(param_1 + 0x18,param_2);
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474f4a72 FUN_1474f4a72 body=256 status=ok
// SIG undefined FUN_1474f4a72(void)

undefined8 FUN_1474f4a72(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14caab658 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caab658 = FUN_140002ddd(FUN_146333f41,uVar2,L"AnimNode_SpringBone");
  }
  local_48 = *(undefined8 *)(DAT_14caab658 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1474f4ba4 FUN_1474f4ba4 body=347 status=ok
// SIG undefined FUN_1474f4ba4(void)

void FUN_1474f4ba4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  undefined2 *puVar2;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined2 *local_60;
  int local_58;
  longlong local_50;
  int local_48;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1474f4d00(param_2,&local_40);
  thunk_FUN_14047a987(&local_40,&DAT_149eb775e,1);
  FUN_1474dc4fe(param_1,&local_40);
  FUN_1400021e4(param_1 + 0x140,&local_60);
  puVar2 = local_60;
  if (local_58 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_50,L" Active: %s)",puVar2);
  iVar1 = local_48 + -1;
  if (local_48 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_40,local_50,iVar1);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  _Src = local_40;
  local_70 = (void *)0x0;
  local_68 = local_38;
  if ((longlong)local_38 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_38,0);
    memcpy(local_70,_Src,(longlong)local_38 * 2);
  }
  FUN_147906d4c(param_2,&local_70,0);
  FUN_147906d38(param_1 + 0x18,param_2);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474f4d00 FUN_1474f4d00 body=256 status=ok
// SIG undefined FUN_1474f4d00(void)

undefined8 FUN_1474f4d00(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14caab688 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caab688 = FUN_140002ddd(FUN_14633406d,uVar2,L"AnimNode_Trail");
  }
  local_48 = *(undefined8 *)(DAT_14caab688 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1474f4e02 FUN_1474f4e02 body=249 status=ok
// SIG undefined FUN_1474f4e02(void)

undefined8 * FUN_1474f4e02(undefined8 *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  FUN_140c83e26();
  *param_1 = &PTR_FUN_14a43d0b0;
  FUN_1474f4efc(param_1 + 0x1b);
  FUN_1474f4efc(param_1 + 0x21);
  *(undefined1 *)(param_1 + 0x2a) = 1;
  dVar3 = DAT_14c8462e8 * DAT_14c8462e8 +
          DAT_14c8462d8 * DAT_14c8462d8 + DAT_14c8462e0 * DAT_14c8462e0;
  if (((dVar3 != 1.0) ||
      (dVar1 = DAT_14c8462e0, dVar2 = DAT_14c8462e8, dVar4 = DAT_14c8462d8, NAN(dVar3))) &&
     (dVar1 = DAT_14c8464e8, dVar2 = DAT_14c8464f0, dVar4 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar3)) {
    dVar4 = 1.0 / SQRT(dVar3);
    dVar2 = DAT_14c8462e8 * dVar4;
    dVar1 = DAT_14c8462e0 * dVar4;
    dVar4 = DAT_14c8462d8 * dVar4;
  }
  param_1[0x27] = dVar4;
  param_1[0x28] = dVar1;
  param_1[0x29] = dVar2;
  param_1[0x2b] = 0x42b40000;
  param_1[0x2c] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  return param_1;
}



// FUNCTION 1474f4efc FUN_1474f4efc body=182 status=ok
// SIG undefined FUN_1474f4efc(void)

void FUN_1474f4efc(undefined8 *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  *param_1 = 0;
  param_1[1] = 0xffffffff7fffffff;
  *(undefined1 *)(param_1 + 5) = 1;
  dVar3 = DAT_14c8462e8 * DAT_14c8462e8 +
          DAT_14c8462d8 * DAT_14c8462d8 + DAT_14c8462e0 * DAT_14c8462e0;
  if (((dVar3 != 1.0) ||
      (dVar4 = DAT_14c8462d8, dVar1 = DAT_14c8462e0, dVar2 = DAT_14c8462e8, NAN(dVar3))) &&
     (dVar4 = DAT_14c8464e0, dVar1 = DAT_14c8464e8, dVar2 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar3)) {
    dVar4 = 1.0 / SQRT(dVar3);
    dVar2 = DAT_14c8462e8 * dVar4;
    dVar1 = DAT_14c8462e0 * dVar4;
    dVar4 = DAT_14c8462d8 * dVar4;
  }
  param_1[2] = dVar4;
  param_1[3] = dVar1;
  param_1[4] = dVar2;
  return;
}



// FUNCTION 1474f4fbc FUN_1474f4fbc body=401 status=ok
// SIG undefined FUN_1474f4fbc(void)

double * FUN_1474f4fbc(double *param_1,longlong *param_2,longlong param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  int *piVar10;
  longlong lVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  uVar9 = *(uint *)(param_3 + 8);
  if ((int)uVar9 < 0) {
    iVar12 = -1;
    if ((((~uVar9 & 0x7fffffff) == 0) || (uVar9 = (int)(uVar9 * 2) >> 1, (int)uVar9 < 0)) ||
       (*(int *)(param_2[2] + 0x88) <= (int)uVar9)) goto LAB_1474f4ff3;
    piVar10 = (int *)((ulonglong)uVar9 * 4 + *(longlong *)(param_2[2] + 0x80));
  }
  else {
    piVar10 = (int *)(param_3 + 0xc);
  }
  iVar12 = *piVar10;
LAB_1474f4ff3:
  if (*(char *)(param_2[3] + (longlong)iVar12) == '\0') {
    FUN_1447d5d8e(param_2);
  }
  if (*(char *)(param_3 + 0x28) == '\x01') {
    lVar11 = (longlong)iVar12 * 0x60;
    pdVar1 = (double *)(*param_2 + lVar11);
    dVar3 = *pdVar1;
    dVar4 = pdVar1[1];
    pdVar1 = (double *)(*param_2 + 0x10 + lVar11);
    dVar5 = *pdVar1;
    dVar6 = pdVar1[1];
    dVar7 = *(double *)(param_3 + 0x10);
    dVar8 = *(double *)(param_3 + 0x18);
    dVar13 = dVar8 * dVar3 - dVar4 * dVar7;
    dVar14 = *(double *)(param_3 + 0x20) * dVar4 - dVar5 * dVar8;
    dVar15 = dVar7 * dVar5 - dVar3 * *(double *)(param_3 + 0x20);
    dVar14 = dVar14 + dVar14;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    dVar2 = *(double *)(param_3 + 0x20);
    *param_1 = (dVar13 * dVar4 - dVar15 * dVar5) + dVar6 * dVar14 + dVar7;
    param_1[1] = (dVar5 * dVar14 - dVar3 * dVar13) + dVar6 * dVar15 + dVar8;
    param_1[2] = dVar6 * dVar13 + dVar2 + (dVar15 * dVar3 - dVar14 * dVar4);
  }
  else {
    param_1[2] = *(double *)(param_3 + 0x20);
    dVar2 = *(double *)(param_3 + 0x18);
    *param_1 = *(double *)(param_3 + 0x10);
    param_1[1] = dVar2;
  }
  return param_1;
}



// FUNCTION 1474f514e FUN_1474f514e body=370 status=ok
// SIG undefined FUN_1474f514e(void)

void FUN_1474f514e(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  uint uVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  float fVar10;
  undefined1 auStack_d8 [32];
  undefined8 local_b8 [12];
  undefined1 local_58 [24];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar6 = param_2 + 0x20;
  lVar3 = *(longlong *)(param_2 + 0x30);
  FUN_1474f4fbc(local_40,lVar6,param_1 + 0xd8);
  FUN_1474f4fbc(local_58,lVar6,param_1 + 0x108);
  uVar4 = *(uint *)(param_1 + 0xe0);
  if ((int)uVar4 < 0) {
    iVar7 = -1;
    if ((((~uVar4 & 0x7fffffff) == 0) || (uVar4 = (int)(uVar4 * 2) >> 1, (int)uVar4 < 0)) ||
       (*(int *)(lVar3 + 0x88) <= (int)uVar4)) goto LAB_1474f51c0;
    piVar5 = (int *)((ulonglong)uVar4 * 4 + *(longlong *)(lVar3 + 0x80));
  }
  else {
    piVar5 = (int *)(param_1 + 0xe4);
  }
  iVar7 = *piVar5;
LAB_1474f51c0:
  if (*(char *)(*(longlong *)(param_2 + 0x38) + (longlong)iVar7) == '\0') {
    FUN_1447d5d8e(lVar6);
  }
  puVar8 = (undefined8 *)((longlong)iVar7 * 0x60 + *(longlong *)(param_2 + 0x20));
  puVar9 = local_b8;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  fVar10 = (float)FUN_1474f52c2(param_1,local_40,local_58);
  fVar1 = *(float *)(param_1 + 0x170);
  fVar2 = *(float *)(param_1 + 0x16c);
  if (fVar1 <= fVar10) {
    fVar10 = fVar1;
  }
  if (fVar10 <= fVar2) {
    fVar10 = fVar2;
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    FUN_1474e5822(param_2 + 0x68);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_d8,*(undefined8 *)(param_1 + 0x164),
                (((*(float *)(param_1 + 0x160) - *(float *)(param_1 + 0x15c)) * (fVar10 - fVar2)) /
                (fVar1 - fVar2)) * *(float *)(param_1 + 0x34));
}



// FUNCTION 1474f52c2 FUN_1474f52c2 body=434 status=ok
// SIG undefined FUN_1474f52c2(void)

undefined8 FUN_1474f52c2(longlong param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  undefined4 extraout_XMM0_Db;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  
  dVar13 = *(double *)(param_1 + 0x138);
  dVar14 = *(double *)(param_1 + 0x140);
  dVar9 = *(double *)(param_1 + 0x148);
  if (*(char *)(param_1 + 0x150) == '\x01') {
    dVar2 = *param_4;
    dVar3 = param_4[1];
    dVar4 = param_4[2];
    dVar1 = param_4[3];
    dVar10 = dVar13 * dVar4 - dVar2 * dVar9;
    dVar7 = dVar14 * dVar2 - dVar13 * dVar3;
    dVar8 = dVar9 * dVar3 - dVar14 * dVar4;
    dVar8 = dVar8 + dVar8;
    dVar10 = dVar10 + dVar10;
    dVar7 = dVar7 + dVar7;
    dVar13 = (dVar7 * dVar3 - dVar10 * dVar4) + dVar1 * dVar8 + dVar13;
    dVar14 = (dVar4 * dVar8 - dVar2 * dVar7) + param_4[3] * dVar10 + dVar14;
    dVar9 = dVar7 * dVar1 + dVar9 + (dVar10 * dVar2 - dVar8 * dVar3);
  }
  fVar5 = (float)(param_2[2] * dVar9 + *param_2 * dVar13 + dVar14 * param_2[1]);
  fVar6 = 0.0;
  uVar11 = 0;
  fVar12 = 0.0;
  if (0.0 < fVar5) {
    if (1.0 <= fVar5) {
      fVar5 = 1.0;
    }
    fVar12 = asinf(fVar5);
  }
  fVar5 = (float)(dVar9 * param_3[2] + *param_3 * dVar13 + param_3[1] * dVar14);
  if (0.0 < fVar5) {
    if (1.0 <= fVar5) {
      fVar5 = 1.0;
    }
    fVar6 = asinf(fVar5);
    uVar11 = extraout_XMM0_Db;
  }
  return CONCAT44(uVar11,fVar6 - fVar12);
}



// FUNCTION 1474f556e FUN_1474f556e body=414 status=ok
// SIG undefined FUN_1474f556e(void)

void FUN_1474f556e(longlong param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  FUN_14019c9f2(param_1 + 0xd8);
  FUN_14019c9f2(param_1 + 0x108,param_2);
  dVar1 = *(double *)(param_1 + 0xe8);
  dVar2 = *(double *)(param_1 + 0xf0);
  dVar3 = *(double *)(param_1 + 0xf8);
  dVar7 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (((dVar7 != 1.0) || (dVar4 = dVar1, dVar5 = dVar2, dVar6 = dVar3, NAN(dVar7))) &&
     (dVar4 = DAT_14c8464e0, dVar5 = DAT_14c8464e8, dVar6 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar7)) {
    dVar7 = 1.0 / SQRT(dVar7);
    dVar4 = dVar1 * dVar7;
    dVar5 = dVar2 * dVar7;
    dVar6 = dVar3 * dVar7;
  }
  *(double *)(param_1 + 0xe8) = dVar4;
  *(double *)(param_1 + 0xf0) = dVar5;
  *(double *)(param_1 + 0xf8) = dVar6;
  dVar1 = *(double *)(param_1 + 0x118);
  dVar2 = *(double *)(param_1 + 0x120);
  dVar3 = *(double *)(param_1 + 0x128);
  dVar7 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (((dVar7 != 1.0) || (dVar4 = dVar1, dVar5 = dVar2, dVar6 = dVar3, NAN(dVar7))) &&
     (dVar4 = DAT_14c8464e0, dVar5 = DAT_14c8464e8, dVar6 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar7)) {
    dVar7 = 1.0 / SQRT(dVar7);
    dVar4 = dVar1 * dVar7;
    dVar5 = dVar2 * dVar7;
    dVar6 = dVar3 * dVar7;
  }
  *(double *)(param_1 + 0x118) = dVar4;
  *(double *)(param_1 + 0x120) = dVar5;
  *(double *)(param_1 + 0x128) = dVar6;
  *(float *)(param_1 + 0x170) = *(float *)(param_1 + 0x158) * 0.017453292;
  return;
}



// FUNCTION 1474f570c FUN_1474f570c body=38 status=ok
// SIG undefined FUN_1474f570c(void)

void FUN_1474f570c(longlong param_1)

{
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  FUN_140320438(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x93) = 0;
  return;
}



// FUNCTION 1474f5752 FUN_1474f5752 body=347 status=ok
// SIG undefined FUN_1474f5752(void)

void FUN_1474f5752(longlong param_1,undefined8 param_2)

{
  int iVar1;
  void *_Src;
  undefined2 *puVar2;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined2 *local_60;
  int local_58;
  longlong local_50;
  int local_48;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1474f58ae(param_2,&local_40);
  thunk_FUN_14047a987(&local_40,&DAT_149eb775e,1);
  FUN_1474dc4fe(param_1,&local_40);
  FUN_1400021e4(param_1 + 0xd8,&local_60);
  puVar2 = local_60;
  if (local_58 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_50,L" IKBone: %s)",puVar2);
  iVar1 = local_48 + -1;
  if (local_48 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_40,local_50,iVar1);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  _Src = local_40;
  local_70 = (void *)0x0;
  local_68 = local_38;
  if ((longlong)local_38 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_38,0);
    memcpy(local_70,_Src,(longlong)local_38 * 2);
  }
  FUN_147906d4c(param_2,&local_70,0);
  FUN_147906d38(param_1 + 0x18,param_2);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474f58ae FUN_1474f58ae body=256 status=ok
// SIG undefined FUN_1474f58ae(void)

undefined8 FUN_1474f58ae(float *param_1,undefined8 param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] == 0.0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  if (DAT_14caab6d0 == 0) {
    uVar2 = FUN_140c6b56d();
    DAT_14caab6d0 = FUN_140002ddd(FUN_146334231,uVar2,L"AnimNode_TwoBoneIK");
  }
  local_48 = *(undefined8 *)(DAT_14caab6d0 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1474f59af FUN_1474f59af body=1376 status=ok
// SIG undefined FUN_1474f59af(void)

float FUN_1474f59af(float param_1,longlong param_2,undefined1 param_3,char param_4,float param_5)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = 1.0;
  fVar2 = param_1;
  if (param_4 != '\0') {
    fVar2 = 1.0 - param_1;
  }
  fVar4 = param_1;
  switch(param_3) {
  case 0:
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    fVar4 = fVar2;
    if (fVar2 <= 0.0) {
      fVar4 = 0.0;
    }
    break;
  case 1:
    fVar2 = sinf(fVar2 * 3.1415927 + -1.5707964);
    fVar4 = (fVar2 + 1.0) * 0.5;
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    goto LAB_1474f5cbf;
  case 2:
    fVar4 = fVar2 * fVar2;
    fVar3 = fVar2 * fVar4;
    fVar4 = (fVar4 * 3.0 - (fVar3 + fVar3)) +
            (fVar3 - fVar4) * 0.0 +
            (((fVar3 + fVar3) - fVar4 * 3.0) + 1.0) * 0.0 +
            ((fVar3 - (fVar4 + fVar4)) + fVar2) * 0.0;
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    goto LAB_1474f5cbf;
  case 3:
    if (0.5 <= fVar2) {
      fVar2 = 1.0 - (fVar2 + fVar2 + -1.0);
      fVar4 = (1.0 - fVar2 * fVar2) * 0.5 + 0.5;
    }
    else {
      fVar4 = (fVar2 + fVar2) * (fVar2 + fVar2) * 0.5;
    }
    goto LAB_1474f5cb0;
  case 4:
    if (0.5 <= fVar2) {
      fVar3 = 1.0 - (fVar2 + fVar2 + -1.0);
      fVar2 = 3.0;
      goto LAB_1474f5e62;
    }
    fVar3 = 3.0;
LAB_1474f5c9b:
    fVar4 = powf(fVar2 + fVar2,fVar3);
LAB_1474f5ca1:
    fVar4 = fVar4 + 0.0;
LAB_1474f5ca8:
    fVar4 = fVar4 * 0.5;
    goto LAB_1474f5cb0;
  case 5:
    fVar4 = 0.0;
    if ((0.0 <= fVar2) && (fVar4 = 1.0, fVar2 < 1.0)) {
      fVar4 = (3.0 - (fVar2 + fVar2)) * fVar2 * fVar2;
    }
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    break;
  case 6:
    if (fVar2 < 0.5) {
      fVar3 = 4.0;
      goto LAB_1474f5c9b;
    }
    fVar3 = 1.0 - (fVar2 + fVar2 + -1.0);
    fVar2 = 4.0;
    goto LAB_1474f5e62;
  case 7:
    if (fVar2 < 0.5) {
      fVar3 = 5.0;
      goto LAB_1474f5c9b;
    }
    fVar3 = 1.0 - (fVar2 + fVar2 + -1.0);
    fVar2 = 5.0;
LAB_1474f5e62:
    fVar2 = powf(fVar3,fVar2);
    fVar2 = 1.0 - fVar2;
LAB_1474f5e6f:
    fVar4 = fVar2 * 0.5 + 0.5;
    goto LAB_1474f5cb0;
  case 8:
    fVar2 = 1.0 - fVar2 * fVar2;
    if (fVar2 < 0.0) {
      fVar2 = sqrtf(fVar2);
    }
    else {
      fVar2 = SQRT(fVar2);
    }
    fVar4 = 0.0 - (fVar2 + -1.0);
    goto LAB_1474f5ecd;
  case 9:
    fVar4 = 1.0 - (fVar2 + -1.0) * (fVar2 + -1.0);
    if (fVar4 < 0.0) {
      fVar4 = sqrtf(fVar4);
    }
    else {
      fVar4 = SQRT(fVar4);
    }
    fVar4 = fVar4 + 0.0;
    goto LAB_1474f5ecd;
  case 10:
    if (fVar2 < 0.5) {
      fVar2 = 1.0 - (fVar2 + fVar2) * (fVar2 + fVar2);
      if (fVar2 < 0.0) {
        fVar2 = sqrtf(fVar2);
      }
      else {
        fVar2 = SQRT(fVar2);
      }
      fVar4 = 0.0 - (fVar2 + -1.0);
      goto LAB_1474f5ca8;
    }
    fVar2 = fVar2 + fVar2 + -1.0 + -1.0;
    fVar2 = 1.0 - fVar2 * fVar2;
    if (fVar2 < 0.0) {
      fVar2 = sqrtf(fVar2);
    }
    else {
      fVar2 = SQRT(fVar2);
    }
    fVar2 = fVar2 + 0.0;
    goto LAB_1474f5e6f;
  case 0xb:
    fVar4 = 0.0;
    if ((fVar2 != 0.0) || (NAN(fVar2))) {
      fVar4 = (float)exp2f((fVar2 + -1.0) * 10.0);
      fVar4 = fVar4 + 0.0;
    }
LAB_1474f5ecd:
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    break;
  case 0xc:
    fVar4 = 1.0;
    if ((fVar2 != 1.0) || (NAN(fVar2))) {
      fVar4 = (float)exp2f(fVar2 * -10.0);
      fVar4 = 1.0 - fVar4;
    }
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    goto LAB_1474f5cbf;
  case 0xd:
    if (0.5 <= fVar2) {
      fVar2 = fVar2 + fVar2 + -1.0;
      if ((fVar2 != 1.0) || (NAN(fVar2))) {
        fVar3 = (float)exp2f(fVar2 * -10.0);
        fVar3 = 1.0 - fVar3;
      }
      fVar4 = fVar3 * 0.5 + 0.5;
    }
    else {
      fVar2 = fVar2 + fVar2;
      fVar4 = 0.0;
      if ((fVar2 != 0.0) || (NAN(fVar2))) {
        fVar4 = (float)exp2f((fVar2 + -1.0) * 10.0);
        goto LAB_1474f5ca1;
      }
    }
LAB_1474f5cb0:
    fVar4 = fVar4 + 0.0;
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
LAB_1474f5cbf:
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    break;
  case 0xe:
    lVar1 = *(longlong *)(param_2 + 0x80) + 0x30;
    if (*(longlong *)(param_2 + 0x80) == 0) {
      lVar1 = param_2;
    }
    if (lVar1 != 0) {
      fVar4 = (float)FUN_1448c9f94(lVar1,fVar2,fVar2);
    }
  }
  if (param_4 != '\0') {
    fVar4 = 1.0 - fVar4;
  }
  return param_5 * (fVar4 - param_1) + param_1;
}



// FUNCTION 1474f5f10 FUN_1474f5f10 body=194 status=ok
// SIG undefined FUN_1474f5f10(void)

void FUN_1474f5f10(undefined8 param_1,undefined8 param_2)

{
  void *_Src;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1474f5fd4(param_2,&local_40);
  _Src = local_40;
  local_50 = (void *)0x0;
  local_48 = local_38;
  if ((longlong)local_38 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_38,0);
    memcpy(local_50,_Src,(longlong)local_38 * 2);
  }
  FUN_147906d4c(param_2,&local_50,0);
  FUN_147acfca8(param_1,param_2);
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474f5fd4 FUN_1474f5fd4 body=208 status=ok
// SIG undefined FUN_1474f5fd4(void)

undefined8 FUN_1474f5fd4(float *param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar4 = &DAT_149dfb77a;
  if (param_1[8] != 0.0) {
    puVar4 = *(undefined2 **)(param_1 + 6);
  }
  fVar1 = *param_1;
  lVar2 = FUN_14632faa0();
  local_48 = *(undefined8 *)(lVar2 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  puVar3 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar3 = local_58;
  }
  local_68 = puVar4;
  FUN_140002266(param_2,L"%s<W:%.1f%%> %s",puVar3,(double)(fVar1 * 100.0));
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_144a7e010(param_1 + 6);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474f60a6 FUN_1474f60a6 body=48 status=ok
// SIG undefined FUN_1474f60a6(void)

longlong FUN_1474f60a6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x438;
  FUN_14064ee12(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474f60e4 FUN_1474f60e4 body=60 status=ok
// SIG undefined FUN_1474f60e4(void)

undefined8 * FUN_1474f60e4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474f6126 FUN_1474f6126 body=38 status=ok
// SIG undefined FUN_1474f6126(void)

undefined8 FUN_1474f6126(undefined8 param_1,int param_2)

{
  FUN_1474f8876();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474f614c FUN_1474f614c body=55 status=ok
// SIG undefined FUN_1474f614c(void)

void FUN_1474f614c(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaafd8 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaafd8 = FUN_140002ddd(FUN_146332f1d,uVar1,L"AnimNode_AnimDynamics");
  }
  return;
}



// FUNCTION 1474f619e FUN_1474f619e body=38 status=ok
// SIG undefined FUN_1474f619e(void)

undefined8 FUN_1474f619e(undefined8 param_1,int param_2)

{
  FUN_1474f8e9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474f61c4 FUN_1474f61c4 body=55 status=ok
// SIG undefined FUN_1474f61c4(void)

void FUN_1474f61c4(void)

{
  undefined8 uVar1;
  
  if (DAT_14caab0c8 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caab0c8 = FUN_140002ddd(FUN_146333049,uVar1,L"AnimNode_ApplyLimits");
  }
  return;
}



// FUNCTION 1474f6200 FUN_1474f6200 body=60 status=ok
// SIG undefined FUN_1474f6200(void)

undefined8 * FUN_1474f6200(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474f623c FUN_1474f623c body=55 status=ok
// SIG undefined FUN_1474f623c(void)

void FUN_1474f623c(void)

{
  undefined8 uVar1;
  
  if (DAT_14caab110 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caab110 = FUN_140002ddd(FUN_14633313d,uVar1,L"AnimNode_BoneDrivenController");
  }
  return;
}



// FUNCTION 1474f6274 FUN_1474f6274 body=38 status=ok
// SIG undefined FUN_1474f6274(void)

undefined8 FUN_1474f6274(undefined8 param_1,int param_2)

{
  FUN_1474f94dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474f629a FUN_1474f629a body=55 status=ok
// SIG undefined FUN_1474f629a(void)

void FUN_1474f629a(void)

{
  undefined8 uVar1;
  
  if (DAT_14caab128 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caab128 = FUN_140002ddd(FUN_1463331d3,uVar1,L"AnimNode_CCDIK");
  }
  return;
}



// FUNCTION 1474f62d2 FUN_1474f62d2 body=38 status=ok
// SIG undefined FUN_1474f62d2(void)

undefined8 FUN_1474f62d2(undefined8 param_1,int param_2)

{
  FUN_1474f9ba8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474f62f8 FUN_1474f62f8 body=55 status=ok
// SIG undefined FUN_1474f62f8(void)

void FUN_1474f62f8(void)

{
  undefined8 uVar1;
  
  if (DAT_14caab170 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caab170 = FUN_140002ddd(FUN_14633332f,uVar1,L"AnimNode_Constraint");
  }
  return;
}



// FUNCTION 1474f6330 FUN_1474f6330 body=60 status=ok
// SIG undefined FUN_1474f6330(void)

undefined8 * FUN_1474f6330(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474f636c FUN_1474f636c body=55 status=ok
// SIG undefined FUN_1474f636c(void)

void FUN_1474f636c(void)

{
  undefined8 uVar1;
  
  if (DAT_14caab1b8 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caab1b8 = FUN_140002ddd(FUN_14633348b,uVar1,L"AnimNode_CopyBoneDelta");
  }
  return;
}



// FUNCTION 1474f63a4 FUN_1474f63a4 body=60 status=ok
// SIG undefined FUN_1474f63a4(void)

undefined8 * FUN_1474f63a4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474f63e0 FUN_1474f63e0 body=55 status=ok
// SIG undefined FUN_1474f63e0(void)

void FUN_1474f63e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14caab1d0 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caab1d0 = FUN_140002ddd(FUN_146333521,uVar1,L"AnimNode_Fabrik");
  }
  return;
}



// FUNCTION 1474f6418 FUN_1474f6418 body=38 status=ok
// SIG undefined FUN_1474f6418(void)

undefined8 FUN_1474f6418(undefined8 param_1,int param_2)

{
  FUN_1474fa600();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474f643e FUN_1474f643e body=55 status=ok
// SIG undefined FUN_1474f643e(void)

void FUN_1474f643e(void)

{
  undefined8 uVar1;
  
  if (DAT_14caab1e8 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caab1e8 = FUN_140002ddd(FUN_1463335b7,uVar1,L"AnimNode_HandIKRetargeting");
  }
  return;
}



// FUNCTION 1474f6476 FUN_1474f6476 body=60 status=ok
// SIG undefined FUN_1474f6476(void)

undefined8 * FUN_1474f6476(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474f64b2 FUN_1474f64b2 body=55 status=ok
// SIG undefined FUN_1474f64b2(void)

void FUN_1474f64b2(void)

{
  undefined8 uVar1;
  
  if (DAT_14caab320 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caab320 = FUN_140002ddd(FUN_14633396b,uVar1,L"AnimNode_LookAt");
  }
  return;
}



// FUNCTION 1474f64ea FUN_1474f64ea body=60 status=ok
// SIG undefined FUN_1474f64ea(void)

undefined8 * FUN_1474f64ea(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474f6526 FUN_1474f6526 body=55 status=ok
// SIG undefined FUN_1474f6526(void)

void FUN_1474f6526(void)

{
  undefined8 uVar1;
  
  if (DAT_14caab368 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caab368 = FUN_140002ddd(FUN_146333a01,uVar1,L"AnimNode_ObserveBone");
  }
  return;
}



// FUNCTION 1474f655e FUN_1474f655e body=38 status=ok
// SIG undefined FUN_1474f655e(void)

undefined8 FUN_1474f655e(undefined8 param_1,int param_2)

{
  FUN_1474fb944();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474f6584 FUN_1474f6584 body=55 status=ok
// SIG undefined FUN_1474f6584(void)

void FUN_1474f6584(void)

{
  undefined8 uVar1;
  
  if (DAT_14caab380 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caab380 = FUN_140002ddd(FUN_146333a97,uVar1,L"AnimNode_ResetRoot");
  }
  return;
}



// FUNCTION 1474f65c0 FUN_1474f65c0 body=38 status=ok
// SIG undefined FUN_1474f65c0(void)

undefined8 FUN_1474f65c0(undefined8 param_1,int param_2)

{
  FUN_1474ed282();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474f65e6 FUN_1474f65e6 body=55 status=ok
// SIG undefined FUN_1474f65e6(void)

void FUN_1474f65e6(void)

{
  undefined8 uVar1;
  
  if (DAT_14caab3e0 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caab3e0 = FUN_140002ddd(FUN_146333c21,uVar1,L"AnimNode_RigidBody");
  }
  return;
}



// FUNCTION 1474f662e FUN_1474f662e body=60 status=ok
// SIG undefined FUN_1474f662e(void)

undefined8 * FUN_1474f662e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a43af20;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474f666a FUN_1474f666a body=55 status=ok
// SIG undefined FUN_1474f666a(void)

void FUN_1474f666a(void)

{
  undefined8 uVar1;
  
  if (DAT_14caab5e0 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caab5e0 = FUN_140002ddd(FUN_146333ce7,uVar1,L"AnimNode_ScaleChainLength");
  }
  return;
}



// FUNCTION 1474f66a2 FUN_1474f66a2 body=38 status=ok
// SIG undefined FUN_1474f66a2(void)

undefined8 FUN_1474f66a2(undefined8 param_1,int param_2)

{
  FUN_1474fd2e8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474f66c8 FUN_1474f66c8 body=55 status=ok
// SIG undefined FUN_1474f66c8(void)

void FUN_1474f66c8(void)

{
  undefined8 uVar1;
  
  if (DAT_14caab640 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caab640 = FUN_140002ddd(FUN_146333eab,uVar1,L"AnimNode_SplineIK");
  }
  return;
}



// FUNCTION 1474f6708 FUN_1474f6708 body=60 status=ok
// SIG undefined FUN_1474f6708(void)

undefined8 * FUN_1474f6708(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474f6744 FUN_1474f6744 body=55 status=ok
// SIG undefined FUN_1474f6744(void)

void FUN_1474f6744(void)

{
  undefined8 uVar1;
  
  if (DAT_14caab6b8 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caab6b8 = FUN_140002ddd(FUN_14633419b,uVar1,L"AnimNode_TwistCorrectiveNode");
  }
  return;
}



// FUNCTION 1474f677c FUN_1474f677c body=57 status=ok
// SIG undefined FUN_1474f677c(void)

void FUN_1474f677c(void)

{
  undefined8 uVar1;
  
  if (DAT_14caab6d0 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caab6d0 = FUN_140002ddd(FUN_146334231,uVar1,L"AnimNode_TwoBoneIK");
  }
  return;
}



// FUNCTION 1474f689a FUN_1474f689a body=59 status=ok
// SIG undefined FUN_1474f689a(void)

undefined8 FUN_1474f689a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474f693a FUN_1474f693a body=29 status=ok
// SIG undefined FUN_1474f693a(void)

undefined8 FUN_1474f693a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474f6958 FUN_1474f6958 body=55 status=ok
// SIG undefined FUN_1474f6958(void)

void FUN_1474f6958(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaad78 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaad78 = FUN_140002ddd(FUN_146332443,uVar1,L"AnimNode_Sync");
  }
  return;
}



// FUNCTION 1474f69d6 FUN_1474f69d6 body=59 status=ok
// SIG undefined FUN_1474f69d6(void)

undefined8 FUN_1474f69d6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474f6a82 FUN_1474f6a82 body=55 status=ok
// SIG undefined FUN_1474f6a82(void)

void FUN_1474f6a82(void)

{
  undefined8 uVar1;
  
  if (DAT_14caaada0 == 0) {
    uVar1 = FUN_140c6b56d();
    DAT_14caaada0 = FUN_140002ddd(FUN_1463324d9,uVar1,L"AnimNode_TwoWayBlend");
  }
  return;
}



// FUNCTION 1474f6aee FUN_1474f6aee body=63 status=ok
// SIG undefined FUN_1474f6aee(void)

undefined1 FUN_1474f6aee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1474f6db6(param_2,param_3);
    param_3 = param_3 + 0xd30;
    param_2 = param_2 + 0xd30;
  }
  return 1;
}



// FUNCTION 1474f6b56 FUN_1474f6b56 body=59 status=ok
// SIG undefined FUN_1474f6b56(void)

undefined8 FUN_1474f6b56(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474f6ba2 FUN_1474f6ba2 body=38 status=ok
// SIG undefined FUN_1474f6ba2(void)

void FUN_1474f6ba2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd30) == '\x01') {
    FUN_1410963a6(param_2);
    *(undefined1 *)(param_2 + 0xd30) = 0;
  }
  return;
}



// FUNCTION 1474f6c16 FUN_1474f6c16 body=415 status=ok
// SIG undefined FUN_1474f6c16(void)

undefined8 * FUN_1474f6c16(undefined8 *param_1)

{
  FUN_140b4884c();
  *param_1 = &PTR_FUN_14a42fbe0;
  FUN_1409bd804(param_1 + 0x115);
  param_1[0x130] = 0;
  *(byte *)(param_1 + 0x131) = *(byte *)(param_1 + 0x131) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x989) = 0;
  param_1[0x12f] = &PTR_FUN_14a42d3b0;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  param_1[0x136] = 0;
  param_1[0x137] = 0;
  param_1[0x138] = 0x3f800000;
  *(undefined2 *)(param_1 + 0x139) = 0x100;
  param_1[0x13b] = 0;
  *(byte *)(param_1 + 0x13c) = *(byte *)(param_1 + 0x13c) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x9e1) = 0;
  param_1[0x13a] = &PTR_FUN_14a42d3b0;
  param_1[0x13d] = 0;
  param_1[0x13e] = 0;
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 0x3f800000;
  *(undefined2 *)(param_1 + 0x144) = 0x100;
  param_1[0x146] = 0;
  *(byte *)(param_1 + 0x147) = *(byte *)(param_1 + 0x147) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0xa39) = 0;
  param_1[0x145] = &PTR_FUN_14a42d4a0;
  *(undefined1 *)(param_1 + 0x150) = 0;
  param_1[0x148] = 0;
  param_1[0x149] = 0;
  param_1[0x14a] = 0;
  param_1[0x14b] = 0;
  param_1[0x14c] = 0;
  param_1[0x14d] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa69) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa71) = 0;
  param_1[0x15c] = 0;
  *(undefined4 *)(param_1 + 0x15d) = 0;
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  param_1[0x153] = 0;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  *(undefined8 *)((longlong)param_1 + 0xaec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xaf4) = 0;
  param_1[0x160] = 0;
  *(undefined4 *)(param_1 + 0x161) = 0;
  param_1[0x166] = 0;
  *(undefined4 *)(param_1 + 0x167) = 0;
  param_1[0x162] = 0;
  param_1[0x163] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb44) = 0;
  param_1[0x16a] = 0;
  *(undefined4 *)(param_1 + 0x16b) = 0;
  *(undefined1 *)(param_1 + 0x186) = 0;
  *(undefined1 *)(param_1 + 0x188) = 2;
  *(undefined1 *)(param_1 + 0x196) = 0;
  *(undefined1 *)(param_1 + 0x1a4) = 0;
  return param_1;
}



// FUNCTION 1474f6db6 FUN_1474f6db6 body=663 status=ok
// SIG undefined FUN_1474f6db6(void)

longlong FUN_1474f6db6(longlong param_1,longlong param_2)

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
  undefined1 uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  
  FUN_1411a1ca6();
  *(undefined8 *)(param_1 + 0x8b0) = *(undefined8 *)(param_2 + 0x8b0);
  *(undefined2 *)(param_1 + 0x8b8) = *(undefined2 *)(param_2 + 0x8b8);
  uVar1 = *(undefined4 *)(param_2 + 0x8c4);
  uVar2 = *(undefined4 *)(param_2 + 0x8c8);
  uVar3 = *(undefined4 *)(param_2 + 0x8cc);
  uVar4 = *(undefined4 *)(param_2 + 0x8d0);
  uVar5 = *(undefined4 *)(param_2 + 0x8d4);
  uVar6 = *(undefined4 *)(param_2 + 0x8d8);
  uVar7 = *(undefined4 *)(param_2 + 0x8dc);
  uVar8 = *(undefined4 *)(param_2 + 0x8e0);
  uVar9 = *(undefined4 *)(param_2 + 0x8e4);
  uVar10 = *(undefined4 *)(param_2 + 0x8e8);
  uVar11 = *(undefined4 *)(param_2 + 0x8ec);
  *(undefined4 *)(param_1 + 0x8c0) = *(undefined4 *)(param_2 + 0x8c0);
  *(undefined4 *)(param_1 + 0x8c4) = uVar1;
  *(undefined4 *)(param_1 + 0x8c8) = uVar2;
  *(undefined4 *)(param_1 + 0x8cc) = uVar3;
  *(undefined4 *)(param_1 + 0x8d0) = uVar4;
  *(undefined4 *)(param_1 + 0x8d4) = uVar5;
  *(undefined4 *)(param_1 + 0x8d8) = uVar6;
  *(undefined4 *)(param_1 + 0x8dc) = uVar7;
  *(undefined4 *)(param_1 + 0x8e0) = uVar8;
  *(undefined4 *)(param_1 + 0x8e4) = uVar9;
  *(undefined4 *)(param_1 + 0x8e8) = uVar10;
  *(undefined4 *)(param_1 + 0x8ec) = uVar11;
  FUN_14123bd80(param_1 + 0x8f0,param_2 + 0x8f0);
  uVar1 = *(undefined4 *)(param_2 + 0x93c);
  uVar2 = *(undefined4 *)(param_2 + 0x940);
  uVar3 = *(undefined4 *)(param_2 + 0x944);
  uVar4 = *(undefined4 *)(param_2 + 0x948);
  uVar5 = *(undefined4 *)(param_2 + 0x94c);
  uVar6 = *(undefined4 *)(param_2 + 0x950);
  uVar7 = *(undefined4 *)(param_2 + 0x954);
  uVar8 = *(undefined4 *)(param_2 + 0x958);
  uVar9 = *(undefined4 *)(param_2 + 0x95c);
  uVar10 = *(undefined4 *)(param_2 + 0x960);
  uVar11 = *(undefined4 *)(param_2 + 0x964);
  uVar12 = *(undefined4 *)(param_2 + 0x967);
  uVar13 = *(undefined4 *)(param_2 + 0x96b);
  uVar14 = *(undefined4 *)(param_2 + 0x96f);
  uVar15 = *(undefined4 *)(param_2 + 0x973);
  *(undefined4 *)(param_1 + 0x938) = *(undefined4 *)(param_2 + 0x938);
  *(undefined4 *)(param_1 + 0x93c) = uVar1;
  *(undefined4 *)(param_1 + 0x940) = uVar2;
  *(undefined4 *)(param_1 + 0x944) = uVar3;
  *(undefined4 *)(param_1 + 0x948) = uVar4;
  *(undefined4 *)(param_1 + 0x94c) = uVar5;
  *(undefined4 *)(param_1 + 0x950) = uVar6;
  *(undefined4 *)(param_1 + 0x954) = uVar7;
  *(undefined4 *)(param_1 + 0x958) = uVar8;
  *(undefined4 *)(param_1 + 0x95c) = uVar9;
  *(undefined4 *)(param_1 + 0x960) = uVar10;
  *(undefined4 *)(param_1 + 0x964) = uVar11;
  *(undefined4 *)(param_1 + 0x967) = uVar12;
  *(undefined4 *)(param_1 + 0x96b) = uVar13;
  *(undefined4 *)(param_1 + 0x96f) = uVar14;
  *(undefined4 *)(param_1 + 0x973) = uVar15;
  *(undefined2 *)(param_1 + 0x988) = *(undefined2 *)(param_2 + 0x988);
  *(undefined8 *)(param_1 + 0x980) = *(undefined8 *)(param_2 + 0x980);
  FUN_1404306dc(param_1 + 0x990,param_2 + 0x990);
  FUN_144a67f5c(param_1 + 0x9a0,param_2 + 0x9a0);
  FUN_144a67f5c(param_1 + 0x9b0,param_2 + 0x9b0);
  *(undefined8 *)(param_1 + 0x9c0) = *(undefined8 *)(param_2 + 0x9c0);
  *(undefined2 *)(param_1 + 0x9c8) = *(undefined2 *)(param_2 + 0x9c8);
  *(undefined8 *)(param_1 + 0x9d8) = *(undefined8 *)(param_2 + 0x9d8);
  *(undefined2 *)(param_1 + 0x9e0) = *(undefined2 *)(param_2 + 0x9e0);
  FUN_1404306dc(param_1 + 0x9e8,param_2 + 0x9e8);
  FUN_144a67f5c(param_1 + 0x9f8,param_2 + 0x9f8);
  FUN_144a67f5c(param_1 + 0xa08,param_2 + 0xa08);
  *(undefined8 *)(param_1 + 0xa18) = *(undefined8 *)(param_2 + 0xa18);
  *(undefined2 *)(param_1 + 0xa20) = *(undefined2 *)(param_2 + 0xa20);
  FUN_1474d6f58(param_1 + 0xa28,param_2 + 0xa28);
  FUN_1474f704e(param_1 + 0xac0,param_2 + 0xac0);
  FUN_1474f7140(param_1 + 0xb10,param_2 + 0xb10);
  if (param_2 == param_1) {
    *(undefined1 *)(param_1 + 0xc40) = *(undefined1 *)(param_2 + 0xc40);
    return param_1;
  }
  if (*(char *)(param_2 + 0xc30) == '\x01') {
    memcpy((void *)(param_1 + 0xb60),(void *)(param_2 + 0xb60),0xd0);
    uVar16 = 1;
  }
  else {
    if (*(char *)(param_1 + 0xc30) != '\x01') goto LAB_1474f6fa4;
    uVar16 = 0;
  }
  *(undefined1 *)(param_1 + 0xc30) = uVar16;
LAB_1474f6fa4:
  *(undefined1 *)(param_1 + 0xc40) = *(undefined1 *)(param_2 + 0xc40);
  if (*(char *)(param_2 + 0xcb0) == '\x01') {
    puVar18 = (undefined8 *)(param_2 + 0xc50);
    puVar19 = (undefined8 *)(param_1 + 0xc50);
    for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
      *puVar19 = *puVar18;
      puVar18 = puVar18 + 1;
      puVar19 = puVar19 + 1;
    }
    *(undefined1 *)(param_1 + 0xcb0) = 1;
  }
  else if (*(char *)(param_1 + 0xcb0) == '\x01') {
    *(undefined1 *)(param_1 + 0xcb0) = 0;
  }
  if (*(char *)(param_2 + 0xd20) == '\x01') {
    puVar18 = (undefined8 *)(param_2 + 0xcc0);
    puVar19 = (undefined8 *)(param_1 + 0xcc0);
    for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
      *puVar19 = *puVar18;
      puVar18 = puVar18 + 1;
      puVar19 = puVar19 + 1;
    }
    *(undefined1 *)(param_1 + 0xd20) = 1;
  }
  else if (*(char *)(param_1 + 0xd20) == '\x01') {
    *(undefined1 *)(param_1 + 0xd20) = 0;
  }
  return param_1;
}



// FUNCTION 1474f704e FUN_1474f704e body=122 status=ok
// SIG undefined FUN_1474f704e(void)

longlong FUN_1474f704e(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1474f70c8(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1474f70c8 FUN_1474f70c8 body=119 status=ok
// SIG undefined FUN_1474f70c8(void)

undefined8 * FUN_1474f70c8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140e5c9ca(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 1474f7140 FUN_1474f7140 body=122 status=ok
// SIG undefined FUN_1474f7140(void)

longlong FUN_1474f7140(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1474f71ba(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1474f71ba FUN_1474f71ba body=119 status=ok
// SIG undefined FUN_1474f71ba(void)

undefined8 * FUN_1474f71ba(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140e5ca44(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 1474f729e FUN_1474f729e body=59 status=ok
// SIG undefined FUN_1474f729e(void)

undefined8 FUN_1474f729e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474f73ac FUN_1474f73ac body=59 status=ok
// SIG undefined FUN_1474f73ac(void)

undefined8 FUN_1474f73ac(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474f74ca FUN_1474f74ca body=68 status=ok
// SIG undefined FUN_1474f74ca(void)

undefined8 FUN_1474f74ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x88);
      lVar1 = lVar1 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474f7536 FUN_1474f7536 body=59 status=ok
// SIG undefined FUN_1474f7536(void)

undefined8 FUN_1474f7536(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474f7690 FUN_1474f7690 body=39 status=ok
// SIG undefined FUN_1474f7690(void)

undefined8 FUN_1474f7690(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474f76e0 FUN_1474f76e0 body=59 status=ok
// SIG undefined FUN_1474f76e0(void)

undefined8 FUN_1474f76e0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474f7864 FUN_1474f7864 body=59 status=ok
// SIG undefined FUN_1474f7864(void)

undefined8 FUN_1474f7864(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474f7a32 FUN_1474f7a32 body=68 status=ok
// SIG undefined FUN_1474f7a32(void)

undefined8 FUN_1474f7a32(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xd0);
      lVar1 = lVar1 + 0xd0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474f7a9e FUN_1474f7a9e body=59 status=ok
// SIG undefined FUN_1474f7a9e(void)

undefined8 FUN_1474f7a9e(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474f7b80 FUN_1474f7b80 body=63 status=ok
// SIG undefined FUN_1474f7b80(void)

undefined1 FUN_1474f7b80(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1474f7caa(param_2,param_3);
    param_3 = param_3 + 0x530;
    param_2 = param_2 + 0x530;
  }
  return 1;
}



// FUNCTION 1474f7be8 FUN_1474f7be8 body=59 status=ok
// SIG undefined FUN_1474f7be8(void)

undefined8 FUN_1474f7be8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474f7c34 FUN_1474f7c34 body=40 status=ok
// SIG undefined FUN_1474f7c34(void)

void FUN_1474f7c34(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x530) == '\x01') {
    FUN_1474f8876(param_2);
    *(undefined1 *)(param_2 + 0x530) = 0;
  }
  return;
}



// FUNCTION 1474f7caa FUN_1474f7caa body=598 status=ok
// SIG undefined FUN_1474f7caa(void)

longlong FUN_1474f7caa(longlong param_1,longlong param_2)

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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  uVar7 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  FUN_14123bd80(param_1 + 0x40,param_2 + 0x40);
  uVar1 = *(undefined4 *)(param_2 + 0x8c);
  uVar2 = *(undefined4 *)(param_2 + 0x90);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  uVar4 = *(undefined4 *)(param_2 + 0x98);
  uVar5 = *(undefined4 *)(param_2 + 0x9c);
  uVar6 = *(undefined4 *)(param_2 + 0xa0);
  uVar7 = *(undefined4 *)(param_2 + 0xa4);
  uVar8 = *(undefined4 *)(param_2 + 0xa8);
  uVar9 = *(undefined4 *)(param_2 + 0xac);
  uVar10 = *(undefined4 *)(param_2 + 0xb0);
  uVar11 = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x98) = uVar4;
  *(undefined4 *)(param_1 + 0x9c) = uVar5;
  *(undefined4 *)(param_1 + 0xa0) = uVar6;
  *(undefined4 *)(param_1 + 0xa4) = uVar7;
  *(undefined4 *)(param_1 + 0xa8) = uVar8;
  *(undefined4 *)(param_1 + 0xac) = uVar9;
  *(undefined4 *)(param_1 + 0xb0) = uVar10;
  *(undefined4 *)(param_1 + 0xb4) = uVar11;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  FUN_140d2c6ac(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  memcpy((void *)(param_1 + 0xd8),(void *)(param_2 + 0xd8),0xf8);
  FUN_1474f7f00(param_1 + 0x1d0,param_2 + 0x1d0);
  memcpy((void *)(param_1 + 0x1e0),(void *)(param_2 + 0x1e0),0x84);
  FUN_1474f7f58(param_1 + 0x268,param_2 + 0x268);
  uVar1 = *(undefined4 *)(param_2 + 0x27c);
  uVar2 = *(undefined4 *)(param_2 + 0x280);
  uVar3 = *(undefined4 *)(param_2 + 0x284);
  *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(param_2 + 0x278);
  *(undefined4 *)(param_1 + 0x27c) = uVar1;
  *(undefined4 *)(param_1 + 0x280) = uVar2;
  *(undefined4 *)(param_1 + 0x284) = uVar3;
  *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)(param_2 + 0x288);
  FUN_1412a6978(param_1 + 0x290,param_2 + 0x290);
  *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_2 + 0x2a0);
  *(undefined1 *)(param_1 + 0x2a4) = *(undefined1 *)(param_2 + 0x2a4);
  memcpy((void *)(param_1 + 0x2b0),(void *)(param_2 + 0x2b0),0x105);
  FUN_14115e0ba(param_1 + 0x3b8,param_2 + 0x3b8);
  *(undefined8 *)(param_1 + 0x440) = *(undefined8 *)(param_2 + 0x440);
  *(undefined1 *)(param_1 + 0x448) = *(undefined1 *)(param_2 + 0x448);
  uVar1 = *(undefined4 *)(param_2 + 0x454);
  uVar2 = *(undefined4 *)(param_2 + 0x458);
  uVar3 = *(undefined4 *)(param_2 + 0x45c);
  *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_2 + 0x450);
  *(undefined4 *)(param_1 + 0x454) = uVar1;
  *(undefined4 *)(param_1 + 0x458) = uVar2;
  *(undefined4 *)(param_1 + 0x45c) = uVar3;
  *(undefined8 *)(param_1 + 0x460) = *(undefined8 *)(param_2 + 0x460);
  FUN_1474f7fb2(param_1 + 0x468,param_2 + 0x468);
  FUN_1474f8012(param_1 + 0x478,param_2 + 0x478);
  FUN_1474f806a(param_1 + 0x488,param_2 + 0x488);
  FUN_1474f80c2(param_1 + 0x498,param_2 + 0x498);
  FUN_1474f811c(param_1 + 0x4a8,param_2 + 0x4a8);
  FUN_1474f8174(param_1 + 0x4b8,param_2 + 0x4b8);
  FUN_1405b70a4(param_1 + 0x4c8,param_2 + 0x4c8);
  FUN_1474f81ce(param_1 + 0x4d8,param_2 + 0x4d8);
  FUN_14054c6c4(param_1 + 0x4e8,param_2 + 0x4e8);
  uVar12 = *(undefined8 *)(param_2 + 0x500);
  uVar13 = *(undefined8 *)(param_2 + 0x508);
  uVar14 = *(undefined8 *)(param_2 + 0x510);
  uVar15 = *(undefined8 *)(param_2 + 0x518);
  uVar16 = *(undefined8 *)(param_2 + 0x520);
  *(undefined8 *)(param_1 + 0x4f8) = *(undefined8 *)(param_2 + 0x4f8);
  *(undefined8 *)(param_1 + 0x500) = uVar12;
  *(undefined8 *)(param_1 + 0x508) = uVar13;
  *(undefined8 *)(param_1 + 0x510) = uVar14;
  *(undefined8 *)(param_1 + 0x518) = uVar15;
  *(undefined8 *)(param_1 + 0x520) = uVar16;
  return param_1;
}



// FUNCTION 1474f7f00 FUN_1474f7f00 body=88 status=ok
// SIG undefined FUN_1474f7f00(void)

undefined8 * FUN_1474f7f00(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1474f8228(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xd0);
      }
    }
  }
  return param_1;
}



// FUNCTION 1474f7f58 FUN_1474f7f58 body=89 status=ok
// SIG undefined FUN_1474f7f58(void)

undefined8 * FUN_1474f7f58(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1474f829a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x30);
      }
    }
  }
  return param_1;
}



// FUNCTION 1474f7fb2 FUN_1474f7fb2 body=95 status=ok
// SIG undefined FUN_1474f7fb2(void)

undefined8 * FUN_1474f7fb2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1474f830d(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1474f834e(param_1,iVar1);
      FUN_1474f83c0(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1474f8012 FUN_1474f8012 body=88 status=ok
// SIG undefined FUN_1474f8012(void)

undefined8 * FUN_1474f8012(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1474f85f4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1474f806a FUN_1474f806a body=88 status=ok
// SIG undefined FUN_1474f806a(void)

undefined8 * FUN_1474f806a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1474f8656(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1474f80c2 FUN_1474f80c2 body=89 status=ok
// SIG undefined FUN_1474f80c2(void)

undefined8 * FUN_1474f80c2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1474f86b8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xa0);
      }
    }
  }
  return param_1;
}



// FUNCTION 1474f811c FUN_1474f811c body=88 status=ok
// SIG undefined FUN_1474f811c(void)

undefined8 * FUN_1474f811c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1474f872c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 6);
      }
    }
  }
  return param_1;
}



// FUNCTION 1474f8174 FUN_1474f8174 body=89 status=ok
// SIG undefined FUN_1474f8174(void)

undefined8 * FUN_1474f8174(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1474f878e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x90);
      }
    }
  }
  return param_1;
}



// FUNCTION 1474f81ce FUN_1474f81ce body=89 status=ok
// SIG undefined FUN_1474f81ce(void)

undefined8 * FUN_1474f81ce(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1474f8802(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x30);
      }
    }
  }
  return param_1;
}



// FUNCTION 1474f8228 FUN_1474f8228 body=114 status=ok
// SIG undefined FUN_1474f8228(void)

void FUN_1474f8228(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xd0,8);
    iVar2 = (int)(uVar1 / 0xd0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xd0,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1474f829a FUN_1474f829a body=115 status=ok
// SIG undefined FUN_1474f829a(void)

void FUN_1474f829a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1474f830d FUN_1474f830d body=64 status=ok
// SIG undefined FUN_1474f830d(void)

void FUN_1474f830d(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x330);
    do {
      FUN_1474fe191(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x6c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1474f834e FUN_1474f834e body=114 status=ok
// SIG undefined FUN_1474f834e(void)

void FUN_1474f834e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x360,0x10);
    iVar2 = (int)(uVar1 / 0x360);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x360,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1474f83c0 FUN_1474f83c0 body=88 status=ok
// SIG undefined FUN_1474f83c0(void)

void FUN_1474f83c0(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1474f8418(param_1,param_2);
    uVar1 = *(undefined4 *)(param_2 + 0x344);
    uVar2 = *(undefined4 *)(param_2 + 0x348);
    uVar3 = *(undefined4 *)(param_2 + 0x34c);
    *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_2 + 0x340);
    *(undefined4 *)(param_1 + 0x344) = uVar1;
    *(undefined4 *)(param_1 + 0x348) = uVar2;
    *(undefined4 *)(param_1 + 0x34c) = uVar3;
    *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_2 + 0x350);
    param_1 = param_1 + 0x360;
    param_2 = param_2 + 0x360;
  }
  return;
}



// FUNCTION 1474f8418 FUN_1474f8418 body=142 status=ok
// SIG undefined FUN_1474f8418(void)

undefined8 * FUN_1474f8418(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = param_2;
  puVar5 = param_1;
  for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  memcpy(param_1 + 0xe,param_2 + 0xe,0x2c0);
  param_1[0x66] = 0;
  iVar1 = *(int *)(param_2 + 0x67);
  uVar2 = param_2[0x66];
  *(int *)(param_1 + 0x67) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x33c) = 0;
  }
  else {
    FUN_1474f84a6(param_1 + 0x66,iVar1,0);
    FUN_1474f8508(param_1[0x66],uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1474f84a6 FUN_1474f84a6 body=98 status=ok
// SIG undefined FUN_1474f84a6(void)

void FUN_1474f84a6(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1474f8508 FUN_1474f8508 body=52 status=ok
// SIG undefined FUN_1474f8508(void)

void FUN_1474f8508(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1474f853c(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 1474f853c FUN_1474f853c body=184 status=ok
// SIG undefined FUN_1474f853c(void)

undefined8 * FUN_1474f853c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1405b70fe(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 0x18);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_146287c4e(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 0xc);
  }
  uVar3 = param_2[4];
  uVar4 = param_2[5];
  uVar5 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar4;
  return param_1;
}



// FUNCTION 1474f85f4 FUN_1474f85f4 body=98 status=ok
// SIG undefined FUN_1474f85f4(void)

void FUN_1474f85f4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1474f8656 FUN_1474f8656 body=98 status=ok
// SIG undefined FUN_1474f8656(void)

void FUN_1474f8656(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,8);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1474f86b8 FUN_1474f86b8 body=115 status=ok
// SIG undefined FUN_1474f86b8(void)

void FUN_1474f86b8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xa0,8);
    iVar2 = (int)(uVar1 / 0xa0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xa0,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1474f872c FUN_1474f872c body=98 status=ok
// SIG undefined FUN_1474f872c(void)

void FUN_1474f872c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1474f878e FUN_1474f878e body=115 status=ok
// SIG undefined FUN_1474f878e(void)

void FUN_1474f878e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x90,0x10);
    iVar2 = (int)(uVar1 / 0x90);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x90,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1474f8802 FUN_1474f8802 body=115 status=ok
// SIG undefined FUN_1474f8802(void)

void FUN_1474f8802(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1474f8876 FUN_1474f8876 body=336 status=ok
// SIG undefined FUN_1474f8876(void)

void FUN_1474f8876(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a434030;
  if (param_1[0x9d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x9b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x99] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x97] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x95] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x93] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x91] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  FUN_1474f830d(param_1[0x8d],*(undefined4 *)(param_1 + 0x8e));
  if (param_1[0x8d] != 0) {
    FUN_1400020a8();
  }
  param_1[0x77] = &DAT_14a176f00;
  if (param_1[0x85] != 0) {
    FUN_1400020a8();
  }
  param_1[0x77] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 0x78);
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1474f8ac8 FUN_1474f8ac8 body=59 status=ok
// SIG undefined FUN_1474f8ac8(void)

undefined8 FUN_1474f8ac8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474f8b6a FUN_1474f8b6a body=49 status=ok
// SIG undefined FUN_1474f8b6a(void)

void FUN_1474f8b6a(undefined8 param_1,undefined8 *param_2)

{
  FUN_140c83e26(param_2);
  *param_2 = &PTR_FUN_14a4344b0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  return;
}



// FUNCTION 1474f8b9c FUN_1474f8b9c body=49 status=ok
// SIG undefined FUN_1474f8b9c(void)

void FUN_1474f8b9c(undefined8 param_1,undefined8 *param_2)

{
  FUN_140c83e26(param_2);
  *param_2 = &PTR_FUN_14a4344b0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  return;
}



// FUNCTION 1474f8bf2 FUN_1474f8bf2 body=63 status=ok
// SIG undefined FUN_1474f8bf2(void)

undefined1 FUN_1474f8bf2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1474f8d1c(param_2,param_3);
    param_3 = param_3 + 0xf8;
    param_2 = param_2 + 0xf8;
  }
  return 1;
}



// FUNCTION 1474f8c5a FUN_1474f8c5a body=59 status=ok
// SIG undefined FUN_1474f8c5a(void)

undefined8 FUN_1474f8c5a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474f8ca6 FUN_1474f8ca6 body=40 status=ok
// SIG undefined FUN_1474f8ca6(void)

void FUN_1474f8ca6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf8) == '\x01') {
    FUN_1474f8e9e(param_2);
    *(undefined1 *)(param_2 + 0xf8) = 0;
  }
  return;
}



// FUNCTION 1474f8d1c FUN_1474f8d1c body=197 status=ok
// SIG undefined FUN_1474f8d1c(void)

longlong FUN_1474f8d1c(longlong param_1,longlong param_2)

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
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  uVar7 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  FUN_14123bd80(param_1 + 0x40,param_2 + 0x40);
  uVar1 = *(undefined4 *)(param_2 + 0x8c);
  uVar2 = *(undefined4 *)(param_2 + 0x90);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  uVar4 = *(undefined4 *)(param_2 + 0x98);
  uVar5 = *(undefined4 *)(param_2 + 0x9c);
  uVar6 = *(undefined4 *)(param_2 + 0xa0);
  uVar7 = *(undefined4 *)(param_2 + 0xa4);
  uVar8 = *(undefined4 *)(param_2 + 0xa8);
  uVar9 = *(undefined4 *)(param_2 + 0xac);
  uVar10 = *(undefined4 *)(param_2 + 0xb0);
  uVar11 = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x98) = uVar4;
  *(undefined4 *)(param_1 + 0x9c) = uVar5;
  *(undefined4 *)(param_1 + 0xa0) = uVar6;
  *(undefined4 *)(param_1 + 0xa4) = uVar7;
  *(undefined4 *)(param_1 + 0xa8) = uVar8;
  *(undefined4 *)(param_1 + 0xac) = uVar9;
  *(undefined4 *)(param_1 + 0xb0) = uVar10;
  *(undefined4 *)(param_1 + 0xb4) = uVar11;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  FUN_140d2c6ac(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  FUN_1474f8de2(param_1 + 0xd8,param_2 + 0xd8);
  FUN_1405b70a4(param_1 + 0xe8,param_2 + 0xe8);
  return param_1;
}



// FUNCTION 1474f8de2 FUN_1474f8de2 body=88 status=ok
// SIG undefined FUN_1474f8de2(void)

undefined8 * FUN_1474f8de2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1474f8e3a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 6);
      }
    }
  }
  return param_1;
}



// FUNCTION 1474f8e3a FUN_1474f8e3a body=98 status=ok
// SIG undefined FUN_1474f8e3a(void)

void FUN_1474f8e3a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 6,8);
    iVar1 = (int)(uVar2 >> 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x40,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1474f8e9e FUN_1474f8e9e body=91 status=ok
// SIG undefined FUN_1474f8e9e(void)

void FUN_1474f8e9e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4344b0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1474f8efa FUN_1474f8efa body=157 status=ok
// SIG undefined FUN_1474f8efa(void)

void FUN_1474f8efa(undefined8 param_1,undefined8 *param_2)

{
  FUN_140c83e26(param_2);
  *param_2 = &PTR_FUN_14a434fc0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0xffffffff7fffffff;
  param_2[0x1d] = 0;
  *(undefined4 *)(param_2 + 0x1e) = 0x3f800000;
  param_2[0x1f] = 0xbff0000000000000;
  param_2[0x20] = 0x3ff0000000000000;
  param_2[0x21] = 0;
  param_2[0x22] = 0x3ff0000000000000;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0xffffffff7fffffff;
  *(undefined4 *)(param_2 + 0x26) = 0;
  *(byte *)((longlong)param_2 + 0x134) = *(byte *)((longlong)param_2 + 0x134) & 0xfc;
  return;
}



// FUNCTION 1474f8f98 FUN_1474f8f98 body=157 status=ok
// SIG undefined FUN_1474f8f98(void)

void FUN_1474f8f98(undefined8 param_1,undefined8 *param_2)

{
  FUN_140c83e26(param_2);
  *param_2 = &PTR_FUN_14a434fc0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0xffffffff7fffffff;
  param_2[0x1d] = 0;
  *(undefined4 *)(param_2 + 0x1e) = 0x3f800000;
  param_2[0x1f] = 0xbff0000000000000;
  param_2[0x20] = 0x3ff0000000000000;
  param_2[0x21] = 0;
  param_2[0x22] = 0x3ff0000000000000;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0xffffffff7fffffff;
  *(undefined4 *)(param_2 + 0x26) = 0;
  *(byte *)((longlong)param_2 + 0x134) = *(byte *)((longlong)param_2 + 0x134) & 0xfc;
  return;
}



// FUNCTION 1474f905a FUN_1474f905a body=63 status=ok
// SIG undefined FUN_1474f905a(void)

undefined1 FUN_1474f905a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1474f9196(param_2,param_3);
    param_3 = param_3 + 0x138;
    param_2 = param_2 + 0x138;
  }
  return 1;
}



// FUNCTION 1474f90c2 FUN_1474f90c2 body=59 status=ok
// SIG undefined FUN_1474f90c2(void)

undefined8 FUN_1474f90c2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474f910e FUN_1474f910e body=57 status=ok
// SIG undefined FUN_1474f910e(void)

void FUN_1474f910e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x27) == '\x01') {
    *param_2 = &PTR_FUN_14a42dce0;
    if (param_2[0x18] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x27) = 0;
  }
  return;
}



// FUNCTION 1474f9196 FUN_1474f9196 body=275 status=ok
// SIG undefined FUN_1474f9196(void)

longlong FUN_1474f9196(longlong param_1,longlong param_2)

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
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  uVar7 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  FUN_14123bd80(param_1 + 0x40,param_2 + 0x40);
  uVar1 = *(undefined4 *)(param_2 + 0x8c);
  uVar2 = *(undefined4 *)(param_2 + 0x90);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  uVar4 = *(undefined4 *)(param_2 + 0x98);
  uVar5 = *(undefined4 *)(param_2 + 0x9c);
  uVar6 = *(undefined4 *)(param_2 + 0xa0);
  uVar7 = *(undefined4 *)(param_2 + 0xa4);
  uVar8 = *(undefined4 *)(param_2 + 0xa8);
  uVar9 = *(undefined4 *)(param_2 + 0xac);
  uVar10 = *(undefined4 *)(param_2 + 0xb0);
  uVar11 = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x98) = uVar4;
  *(undefined4 *)(param_1 + 0x9c) = uVar5;
  *(undefined4 *)(param_1 + 0xa0) = uVar6;
  *(undefined4 *)(param_1 + 0xa4) = uVar7;
  *(undefined4 *)(param_1 + 0xa8) = uVar8;
  *(undefined4 *)(param_1 + 0xac) = uVar9;
  *(undefined4 *)(param_1 + 0xb0) = uVar10;
  *(undefined4 *)(param_1 + 0xb4) = uVar11;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  FUN_140d2c6ac(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  uVar1 = *(undefined4 *)(param_2 + 0xdc);
  uVar2 = *(undefined4 *)(param_2 + 0xe0);
  uVar3 = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = uVar1;
  *(undefined4 *)(param_1 + 0xe0) = uVar2;
  *(undefined4 *)(param_1 + 0xe4) = uVar3;
  lVar12 = *(longlong *)(param_2 + 0xe8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar12 = *(longlong *)(param_2 + 0xe8);
    }
  }
  *(longlong *)(param_1 + 0xe8) = lVar12;
  puVar13 = (undefined8 *)(param_2 + 0xf0);
  puVar14 = (undefined8 *)(param_1 + 0xf0);
  for (lVar12 = 8; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar14 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar14 = puVar14 + 1;
  }
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined1 *)(param_1 + 0x134) = *(undefined1 *)(param_2 + 0x134);
  return param_1;
}



// FUNCTION 1474f92de FUN_1474f92de body=274 status=ok
// SIG undefined FUN_1474f92de(void)

undefined8 FUN_1474f92de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
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
  
  if (param_4 != 0) {
    lVar16 = 0;
    do {
      lVar1 = param_2 + lVar16;
      lVar2 = param_3 + lVar16;
      lVar3 = param_3 + lVar16;
      lVar4 = param_2 + 0x40 + lVar16;
      *(undefined2 *)(lVar4 + -0x30) = *(undefined2 *)(lVar3 + 0x10);
      *(undefined8 *)(lVar4 + -0x38) = *(undefined8 *)(lVar3 + 8);
      uVar5 = *(undefined4 *)(lVar3 + 0x1c);
      uVar6 = *(undefined4 *)(lVar3 + 0x20);
      uVar7 = *(undefined4 *)(lVar3 + 0x24);
      uVar8 = *(undefined4 *)(lVar3 + 0x28);
      uVar9 = *(undefined4 *)(lVar3 + 0x2c);
      uVar10 = *(undefined4 *)(lVar3 + 0x30);
      uVar11 = *(undefined4 *)(lVar3 + 0x34);
      *(undefined4 *)(lVar4 + -0x28) = *(undefined4 *)(lVar3 + 0x18);
      *(undefined4 *)(lVar4 + -0x24) = uVar5;
      *(undefined4 *)(lVar4 + -0x20) = uVar6;
      *(undefined4 *)(lVar4 + -0x1c) = uVar7;
      *(undefined4 *)(lVar4 + -0x18) = uVar8;
      *(undefined4 *)(lVar4 + -0x14) = uVar9;
      *(undefined4 *)(lVar4 + -0x10) = uVar10;
      *(undefined4 *)(lVar4 + -0xc) = uVar11;
      *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(lVar3 + 0x38);
      FUN_14123bd80(lVar4,lVar3 + 0x40);
      uVar5 = *(undefined4 *)(lVar3 + 0x8c);
      uVar6 = *(undefined4 *)(lVar3 + 0x90);
      uVar7 = *(undefined4 *)(lVar3 + 0x94);
      uVar8 = *(undefined4 *)(lVar3 + 0x98);
      uVar9 = *(undefined4 *)(lVar3 + 0x9c);
      uVar10 = *(undefined4 *)(lVar3 + 0xa0);
      uVar11 = *(undefined4 *)(lVar3 + 0xa4);
      uVar12 = *(undefined4 *)(lVar3 + 0xa8);
      uVar13 = *(undefined4 *)(lVar3 + 0xac);
      uVar14 = *(undefined4 *)(lVar3 + 0xb0);
      uVar15 = *(undefined4 *)(lVar3 + 0xb4);
      *(undefined4 *)(lVar4 + 0x48) = *(undefined4 *)(lVar3 + 0x88);
      *(undefined4 *)(lVar4 + 0x4c) = uVar5;
      *(undefined4 *)(lVar4 + 0x50) = uVar6;
      *(undefined4 *)(lVar4 + 0x54) = uVar7;
      *(undefined4 *)(lVar4 + 0x58) = uVar8;
      *(undefined4 *)(lVar4 + 0x5c) = uVar9;
      *(undefined4 *)(lVar4 + 0x60) = uVar10;
      *(undefined4 *)(lVar4 + 100) = uVar11;
      *(undefined4 *)(lVar4 + 0x68) = uVar12;
      *(undefined4 *)(lVar4 + 0x6c) = uVar13;
      *(undefined4 *)(lVar4 + 0x70) = uVar14;
      *(undefined4 *)(lVar4 + 0x74) = uVar15;
      *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar3 + 0xb8);
      FUN_140d2c6ac(lVar1 + 0xc0,lVar2 + 0xc0);
      *(undefined1 *)(lVar4 + 0x90) = *(undefined1 *)(lVar3 + 0xd0);
      memcpy((void *)(lVar1 + 0xd8),(void *)(lVar2 + 0xd8),0xe2);
      FUN_144a67f5c(lVar1 + 0x1c0,lVar2 + 0x1c0);
      lVar16 = lVar16 + 0x1d0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1474f9418 FUN_1474f9418 body=59 status=ok
// SIG undefined FUN_1474f9418(void)

undefined8 FUN_1474f9418(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474f9464 FUN_1474f9464 body=40 status=ok
// SIG undefined FUN_1474f9464(void)

void FUN_1474f9464(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d0) == '\x01') {
    FUN_1474f94dc(param_2);
    *(undefined1 *)(param_2 + 0x1d0) = 0;
  }
  return;
}



// FUNCTION 1474f94dc FUN_1474f94dc body=74 status=ok
// SIG undefined FUN_1474f94dc(void)

void FUN_1474f94dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4355c0;
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1474f95ee FUN_1474f95ee body=59 status=ok
// SIG undefined FUN_1474f95ee(void)

undefined8 FUN_1474f95ee(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474f9690 FUN_1474f9690 body=84 status=ok
// SIG undefined FUN_1474f9690(void)

void FUN_1474f9690(undefined8 param_1,undefined8 *param_2)

{
  FUN_140c83e26(param_2);
  *param_2 = &PTR_FUN_14a435bc0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0xffffffff7fffffff;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  return;
}



// FUNCTION 1474f96e4 FUN_1474f96e4 body=84 status=ok
// SIG undefined FUN_1474f96e4(void)

void FUN_1474f96e4(undefined8 param_1,undefined8 *param_2)

{
  FUN_140c83e26(param_2);
  *param_2 = &PTR_FUN_14a435bc0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0xffffffff7fffffff;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  return;
}



// FUNCTION 1474f975c FUN_1474f975c body=63 status=ok
// SIG undefined FUN_1474f975c(void)

undefined1 FUN_1474f975c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1474f9886(param_2,param_3);
    param_3 = param_3 + 0x118;
    param_2 = param_2 + 0x118;
  }
  return 1;
}



// FUNCTION 1474f97c4 FUN_1474f97c4 body=59 status=ok
// SIG undefined FUN_1474f97c4(void)

undefined8 FUN_1474f97c4(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474f9810 FUN_1474f9810 body=40 status=ok
// SIG undefined FUN_1474f9810(void)

void FUN_1474f9810(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x118) == '\x01') {
    FUN_1474f9ba8(param_2);
    *(undefined1 *)(param_2 + 0x118) = 0;
  }
  return;
}



// FUNCTION 1474f9886 FUN_1474f9886 body=228 status=ok
// SIG undefined FUN_1474f9886(void)

longlong FUN_1474f9886(longlong param_1,longlong param_2)

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
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  uVar2 = *(undefined4 *)(param_2 + 0x20);
  uVar3 = *(undefined4 *)(param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  uVar6 = *(undefined4 *)(param_2 + 0x30);
  uVar7 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  FUN_14123bd80(param_1 + 0x40,param_2 + 0x40);
  uVar1 = *(undefined4 *)(param_2 + 0x8c);
  uVar2 = *(undefined4 *)(param_2 + 0x90);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  uVar4 = *(undefined4 *)(param_2 + 0x98);
  uVar5 = *(undefined4 *)(param_2 + 0x9c);
  uVar6 = *(undefined4 *)(param_2 + 0xa0);
  uVar7 = *(undefined4 *)(param_2 + 0xa4);
  uVar8 = *(undefined4 *)(param_2 + 0xa8);
  uVar9 = *(undefined4 *)(param_2 + 0xac);
  uVar10 = *(undefined4 *)(param_2 + 0xb0);
  uVar11 = *(undefined4 *)(param_2 + 0xb4);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x98) = uVar4;
  *(undefined4 *)(param_1 + 0x9c) = uVar5;
  *(undefined4 *)(param_1 + 0xa0) = uVar6;
  *(undefined4 *)(param_1 + 0xa4) = uVar7;
  *(undefined4 *)(param_1 + 0xa8) = uVar8;
  *(undefined4 *)(param_1 + 0xac) = uVar9;
  *(undefined4 *)(param_1 + 0xb0) = uVar10;
  *(undefined4 *)(param_1 + 0xb4) = uVar11;
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  FUN_140d2c6ac(param_1 + 0xc0,param_2 + 0xc0);
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_2 + 0xd0);
  uVar1 = *(undefined4 *)(param_2 + 0xdc);
  uVar2 = *(undefined4 *)(param_2 + 0xe0);
  uVar3 = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)(param_1 + 0xdc) = uVar1;
  *(undefined4 *)(param_1 + 0xe0) = uVar2;
  *(undefined4 *)(param_1 + 0xe4) = uVar3;
  FUN_1474f996a(param_1 + 0xe8,param_2 + 0xe8);
  FUN_144a67f5c(param_1 + 0xf8,param_2 + 0xf8);
  FUN_1474f99c6(param_1 + 0x108,param_2 + 0x108);
  return param_1;
}



// FUNCTION 1474f996a FUN_1474f996a body=92 status=ok
// SIG undefined FUN_1474f996a(void)

undefined8 * FUN_1474f996a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1474f9a26(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x1c);
      }
    }
  }
  return param_1;
}



// FUNCTION 1474f99c6 FUN_1474f99c6 body=95 status=ok
// SIG undefined FUN_1474f99c6(void)

undefined8 * FUN_1474f99c6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1474f9a9f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1474f9ade(param_1,iVar1);
      FUN_1474f9b50(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1474f9a26 FUN_1474f9a26 body=121 status=ok
// SIG undefined FUN_1474f9a26(void)

void FUN_1474f9a26(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x1c,4);
    iVar2 = (int)(uVar1 / 0x1c);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x1c,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1474f9a9f FUN_1474f9a9f body=62 status=ok
// SIG undefined FUN_1474f9a9f(void)

void FUN_1474f9a9f(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 8);
    do {
      puVar1 = (undefined8 *)*plVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        *plVar2 = 0;
      }
      plVar2 = plVar2 + 0x1c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1474f9ade FUN_1474f9ade body=114 status=ok
// SIG undefined FUN_1474f9ade(void)

void FUN_1474f9ade(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0xe0,0x10);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 5;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0xe0,0x10);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1474f9b50 FUN_1474f9b50 body=87 status=ok
// SIG undefined FUN_1474f9b50(void)

void FUN_1474f9b50(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined8 *)(param_1 + 8) = 0;
    FUN_1469119d2(param_1,param_2);
    memcpy((void *)(param_1 + 0x10),(void *)(param_2 + 0x10),0xd0);
    param_1 = param_1 + 0xe0;
    param_2 = param_2 + 0xe0;
  }
  return;
}



// FUNCTION 1474f9ba8 FUN_1474f9ba8 body=126 status=ok
// SIG undefined FUN_1474f9ba8(void)

void FUN_1474f9ba8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a435bc0;
  FUN_1474f9a9f(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1474f9c26 FUN_1474f9c26 body=82 status=ok
// SIG undefined FUN_1474f9c26(void)

void FUN_1474f9c26(undefined8 param_1,undefined8 *param_2)

{
  FUN_140c83e26(param_2);
  *param_2 = &PTR_FUN_14a435f90;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0xffffffff7fffffff;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0xffffffff7fffffff;
  *(undefined4 *)(param_2 + 0x1f) = 0x1000000;
  return;
}



// FUNCTION 1474f9cb6 FUN_1474f9cb6 body=59 status=ok
// SIG undefined FUN_1474f9cb6(void)

undefined8 FUN_1474f9cb6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474f9d02 FUN_1474f9d02 body=57 status=ok
// SIG undefined FUN_1474f9d02(void)

void FUN_1474f9d02(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    *param_2 = &PTR_FUN_14a42dce0;
    if (param_2[0x18] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1474f9d8c FUN_1474f9d8c body=109 status=ok
// SIG undefined FUN_1474f9d8c(void)

void FUN_1474f9d8c(undefined8 param_1,undefined8 *param_2)

{
  FUN_140c83e26(param_2);
  *param_2 = &PTR_FUN_14a436520;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0xffffffff7fffffff;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0xffffffff7fffffff;
  *(undefined4 *)(param_2 + 0x1f) = 0;
  *(undefined1 **)((longlong)param_2 + 0xfc) = &DAT_3f8000003f800000;
  *(undefined4 *)((longlong)param_2 + 0x104) = 0x3f800000;
  return;
}


