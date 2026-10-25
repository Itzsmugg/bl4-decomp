// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1491af948 FUN_1491af948 body=99 status=ok
// SIG undefined FUN_1491af948(void)

void FUN_1491af948(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_14 [4];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_14[0] = 0;
  local_10 = 0;
  if ((*(int *)(param_1 + 0x18) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x10), plVar1 != (longlong *)0x0)) {
    local_28 = param_3;
    (**(code **)(*plVar1 + 0x60))(plVar1,param_2,local_14,0x7f7fffff);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491af9ac FUN_1491af9ac body=44 status=ok
// SIG undefined FUN_1491af9ac(void)

void FUN_1491af9ac(longlong param_1)

{
  if ((*(int *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))();
  }
  return;
}



// FUNCTION 1491af9d8 FUN_1491af9d8 body=25 status=ok
// SIG undefined FUN_1491af9d8(void)

undefined8 FUN_1491af9d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1400021e4(param_3);
  return param_2;
}



// FUNCTION 1491af9f2 FUN_1491af9f2 body=5696 status=ok
// SIG undefined FUN_1491af9f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1491af9f2(double *param_1,double *param_2,longlong param_3,double *param_4,double *param_5,
                  double *param_6,float param_7,float param_8,float param_9,undefined1 param_10,
                  float param_11,float param_12)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auStack_2a8 [32];
  double *local_288;
  double *local_280;
  double *local_278;
  double local_270;
  double local_268;
  undefined1 local_260;
  double local_258;
  double local_250;
  undefined1 local_248 [16];
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double local_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_180;
  double local_178;
  double local_170;
  undefined1 local_168 [16];
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  local_108 = param_1[4];
  dStack_100 = param_1[5];
  local_f8 = param_1[6];
  local_128 = param_2[4];
  dStack_120 = param_2[5];
  local_280 = &local_128;
  local_118 = param_2[6];
  local_148 = *(double *)(param_3 + 0x20);
  dStack_140 = *(double *)(param_3 + 0x28);
  local_288 = &local_148;
  local_138 = *(double *)(param_3 + 0x30);
  local_250 = (double)param_12;
  local_258 = (double)param_11;
  local_268 = (double)param_9;
  local_270 = (double)param_8;
  local_260 = param_10;
  local_278 = local_288;
  FUN_1402e3c0d(&local_108,local_280,local_288);
  param_2[4] = local_128;
  param_2[5] = dStack_120;
  param_2[6] = local_118;
  param_2[7] = 0.0;
  *(double *)(param_3 + 0x20) = local_148;
  *(double *)(param_3 + 0x28) = dStack_140;
  local_238 = local_138;
  uStack_230 = 0;
  *(double *)(param_3 + 0x30) = local_138;
  *(undefined8 *)(param_3 + 0x38) = 0;
  dVar17 = *param_5;
  dVar14 = param_5[1];
  dVar9 = param_5[2];
  dVar10 = param_5[2];
  dVar33 = *param_1;
  dVar15 = param_1[1];
  dVar3 = param_1[2];
  dVar11 = param_1[3];
  dVar16 = dVar14 * dVar33 - dVar17 * dVar15;
  dVar30 = dVar10 * dVar15 - dVar14 * dVar3;
  uStack_200 = 0;
  dVar35 = dVar17 * dVar3 - dVar33 * dVar10;
  dVar30 = dVar30 + dVar30;
  dVar35 = dVar35 + dVar35;
  dVar16 = dVar16 + dVar16;
  local_158 = dVar16 * dVar11 + dVar9 + (dVar35 * dVar33 - dVar30 * dVar15);
  dVar15 = (dVar16 * dVar15 - dVar35 * dVar3) + dVar11 * dVar30 + dVar17;
  dVar30 = (dVar3 * dVar30 - dVar33 * dVar16) + param_1[3] * dVar35 + dVar14;
  local_168._8_4_ = SUB84(dVar30,0);
  local_168._0_8_ = dVar15;
  local_168._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
  dVar33 = param_2[5];
  local_248 = *(undefined1 (*) [16])(param_2 + 4);
  local_210 = param_1[4];
  dVar35 = *(double *)*(undefined1 (*) [16])(param_2 + 4) - local_210;
  dVar11 = param_2[6];
  local_1f8 = dVar11 - param_1[6];
  uStack_1f0 = 0;
  local_228 = param_2[5];
  dVar16 = param_1[5];
  dStack_220 = 0.0;
  dVar36 = local_228 - dVar16;
  dVar18 = dStack_140;
  dVar3 = local_148;
  local_208 = dVar10;
  if ((((9.999999747378752e-05 < ABS(dVar35)) ||
       (local_218 = dVar16, 9.999999747378752e-05 < ABS(dVar36))) ||
      (9.999999747378752e-05 < ABS(local_1f8))) &&
     (((9.999999747378752e-05 < ABS(dVar15) || (9.999999747378752e-05 < ABS(dVar30))) ||
      (9.999999747378752e-05 < ABS(local_158))))) {
    dVar9 = local_1f8 * local_1f8 + dVar35 * dVar35 + dVar36 * dVar36;
    if (((dVar9 != 1.0) ||
        (local_170 = local_1f8, local_178 = dVar36, local_180 = dVar35, NAN(dVar9))) &&
       (local_170 = DAT_14c8464f0, local_178 = DAT_14c8464e8, local_180 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar9)) {
      dVar9 = 1.0 / SQRT(dVar9);
      local_170 = local_1f8 * dVar9;
      local_178 = dVar36 * dVar9;
      local_180 = dVar35 * dVar9;
    }
    dVar30 = local_138 - local_f8;
    dVar15 = dStack_140 - dStack_100;
    dVar9 = local_148 - local_108;
    dVar10 = dVar30 * dVar30 + dVar9 * dVar9 + dVar15 * dVar15;
    if (((dVar10 != 1.0) || (dVar35 = dVar9, dVar17 = dVar30, dVar14 = dVar15, NAN(dVar10))) &&
       (dVar35 = DAT_14c8464e0, dVar17 = DAT_14c8464f0, dVar14 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar10)) {
      dVar10 = 1.0 / SQRT(dVar10);
      dVar35 = dVar9 * dVar10;
      dVar17 = dVar30 * dVar10;
      dVar14 = dVar15 * dVar10;
    }
    dVar9 = (double)local_248._0_8_;
    if (ABS(dVar17 * local_170 + dVar35 * local_180 + local_178 * dVar14 + -1.0) <
        9.999999747378752e-05) {
      dVar10 = param_4[2] - dVar11;
      dVar15 = param_4[1] - local_228;
      dVar9 = *param_4 - (double)local_248._0_8_;
      dVar30 = dVar10 * dVar10 + dVar9 * dVar9 + dVar15 * dVar15;
      if (((dVar30 != 1.0) || (dVar35 = dVar10, dVar33 = dVar15, dVar17 = dVar9, NAN(dVar30))) &&
         (dVar35 = DAT_14c8464f0, dVar33 = DAT_14c8464e8, dVar17 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar30)) {
        dVar30 = 1.0 / SQRT(dVar30);
        dVar35 = dVar10 * dVar30;
        dVar33 = dVar15 * dVar30;
        dVar17 = dVar9 * dVar30;
      }
      dVar9 = dVar17 * 9.999999747378752e-05 + dVar17 * 9.999999747378752e-05 +
              (double)local_248._0_8_;
      dVar33 = local_228 + dVar33 * 9.999999747378752e-05 + dVar33 * 9.999999747378752e-05;
      dVar11 = dVar11 + dVar35 * 9.999999747378752e-05 + dVar35 * 9.999999747378752e-05;
      dVar10 = dVar11 - param_1[6];
      dVar16 = dVar33 - dVar16;
      dVar15 = dVar9 - local_210;
      dVar30 = dVar10 * dVar10 + dVar15 * dVar15 + dVar16 * dVar16;
      if (((dVar30 != 1.0) ||
          (local_180 = dVar15, local_178 = dVar16, local_170 = dVar10, NAN(dVar30))) &&
         (local_180 = DAT_14c8464e0, local_178 = DAT_14c8464e8, local_170 = DAT_14c8464f0,
         9.99999993922529e-09 <= dVar30)) {
        local_180 = 1.0 / SQRT(dVar30);
        local_170 = dVar10 * local_180;
        local_178 = dVar16 * local_180;
        local_180 = dVar15 * local_180;
      }
    }
    FUN_144a9d448(&local_1a8,local_168,&local_180);
    auVar22 = _DAT_149934d80;
    dVar16 = *param_1;
    dVar10 = param_1[1];
    dVar15 = param_1[2];
    dVar30 = param_1[3];
    dVar35 = dVar10 * local_198 * -1.0 +
             dVar15 * local_1a0 + dVar30 * local_1a8 * 1.0 + dVar16 * local_190;
    dVar14 = dVar16 * local_198 * 1.0 +
             dVar30 * local_1a0 + dVar15 * local_1a8 * -1.0 + dVar10 * local_190;
    dVar17 = dVar30 * local_198 * 1.0 +
             ((local_1a8 * dVar10 * 1.0 + local_190 * dVar15) - dVar16 * local_1a0);
    dVar16 = dVar15 * local_198 * -1.0 +
             ((local_1a8 * dVar16 * -1.0 + local_190 * dVar30) - dVar10 * local_1a0);
    dVar10 = dVar17 * dVar17 + dVar35 * dVar35;
    dVar15 = dVar16 * dVar16 + dVar14 * dVar14;
    auVar34._0_8_ = dVar10 + dVar15;
    auVar34._8_8_ = dVar10 + dVar15;
    auVar19._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_);
    auVar19._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_);
    auVar25 = sqrtpd(auVar34,auVar34);
    auVar25 = divpd(_DAT_149934d80,auVar25);
    auVar31._0_8_ = auVar25._0_8_ * dVar17;
    auVar31._8_8_ = auVar25._8_8_ * dVar16;
    dVar17 = (double)((ulonglong)(dVar35 * auVar25._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_));
    dVar14 = (double)((ulonglong)(dVar14 * auVar25._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_));
    auVar19 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar31,auVar19);
    *param_1 = dVar17;
    param_1[1] = dVar14;
    *(undefined1 (*) [16])(param_1 + 2) = auVar19;
    dVar10 = *param_6;
    dVar15 = param_6[1];
    dVar18 = auVar19._8_8_;
    dVar3 = auVar19._0_8_;
    dVar16 = dVar15 * dVar17 - dVar10 * dVar14;
    dVar30 = param_6[2] * dVar14 - dVar15 * dVar3;
    dVar35 = dVar10 * dVar3 - dVar17 * param_6[2];
    dVar30 = dVar30 + dVar30;
    dVar35 = dVar35 + dVar35;
    dVar16 = dVar16 + dVar16;
    local_158 = dVar18 * dVar16 + param_6[2] + (dVar35 * dVar17 - dVar30 * dVar14);
    dVar10 = (dVar16 * dVar14 - dVar35 * dVar3) + dVar18 * dVar30 + dVar10;
    dVar16 = (dVar3 * dVar30 - dVar17 * dVar16) + dVar18 * dVar35 + dVar15;
    local_168._8_4_ = SUB84(dVar16,0);
    local_168._0_8_ = dVar10;
    local_168._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    dVar3 = *(double *)(param_3 + 0x20);
    dVar18 = *(double *)(param_3 + 0x28);
    local_238 = *(double *)(param_3 + 0x30);
    uStack_230 = *(undefined8 *)(param_3 + 0x38);
    local_248._8_4_ = SUB84(dVar33,0);
    local_248._0_8_ = dVar9;
    local_248._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
    local_228 = dVar33;
    dStack_220 = dVar33;
    if (1e-08 < param_7) {
      dVar15 = dVar11 - (param_1[6] + local_238) * 0.5;
      dVar30 = dVar33 - (param_1[5] + dVar18) * 0.5;
      dVar9 = dVar9 - (param_1[4] + dVar3) * 0.5;
      if ((((9.999999747378752e-05 < ABS(dVar9)) || (9.999999747378752e-05 < ABS(dVar30))) ||
          (9.999999747378752e-05 < ABS(dVar15))) &&
         (((9.999999747378752e-05 < ABS(dVar10) || (9.999999747378752e-05 < ABS(dVar16))) ||
          (9.999999747378752e-05 < ABS(local_158))))) {
        dVar16 = dVar15 * local_170 + dVar9 * local_180 + dVar30 * local_178;
        local_1b0 = dVar15 - local_170 * dVar16;
        auVar25._0_8_ = dVar30 - local_178 * dVar16;
        auVar25._8_8_ = dVar33;
        local_1c0 = dVar9 - dVar16 * local_180;
        dVar16 = local_1b0 * local_1b0 + local_1c0 * local_1c0 + auVar25._0_8_ * auVar25._0_8_;
        if ((dVar16 != 1.0) || (NAN(dVar16))) {
          if (9.99999993922529e-09 <= dVar16) {
            dVar16 = 1.0 / SQRT(dVar16);
            local_1b0 = local_1b0 * dVar16;
            auVar25._0_8_ = auVar25._0_8_ * dVar16;
            local_1c0 = local_1c0 * dVar16;
          }
          else {
            auVar25._8_8_ = 0;
            auVar25._0_8_ = DAT_14c8464e8;
            local_1b0 = DAT_14c8464f0;
            local_1c0 = DAT_14c8464e0;
          }
        }
        local_1b8 = auVar25._0_8_;
        FUN_144a9d448(&local_1e8,local_168);
        if (1e-08 < ABS(param_7 + -1.0)) {
          dVar16 = local_1d8 * local_1d8 + local_1e8 * local_1e8;
          dVar9 = dStack_1e0 * dStack_1e0 + 0.0;
          auVar12._0_8_ = dVar16 + dVar9;
          auVar12._8_8_ = dVar16 + dVar9;
          auVar4._8_8_ = -(ulonglong)(1e-08 <= auVar12._8_8_);
          auVar4._0_8_ = -(ulonglong)(1e-08 <= auVar12._0_8_);
          auVar19 = sqrtpd(auVar25,auVar12);
          auVar19 = divpd(auVar22,auVar19);
          auVar20._0_8_ = local_1e8 * auVar19._0_8_;
          auVar20._8_8_ = dStack_1e0 * auVar19._8_8_;
          auVar34 = blendvpd(ZEXT816(0x3ff0000000000000),auVar20,auVar4);
          if ((-(ulonglong)(1e-08 <= auVar12._0_8_) & 1) == 0) {
            dVar16 = 0.0;
          }
          else {
            dVar16 = local_1d8 * auVar19._0_8_;
          }
          dVar9 = dStack_1d0;
          if (1.0 <= dStack_1d0) {
            dVar9 = 1.0;
          }
          dVar9 = acos((double)(~-(ulonglong)(dStack_1d0 < -1.0) & (ulonglong)dVar9 |
                               -(ulonglong)(dStack_1d0 < -1.0) & 0xbff0000000000000));
          fVar8 = param_7;
          if (1.0 <= param_7) {
            fVar8 = 1.0;
          }
          dVar9 = (double)(fVar8 * (float)(dVar9 + dVar9)) * 0.5;
          dVar10 = sin(dVar9);
          dStack_1d0 = cos(dVar9);
          local_1e8 = auVar34._0_8_ * dVar10;
          dStack_1e0 = auVar34._8_8_ * dVar10;
          local_1d8 = dVar16 * dVar10;
        }
        dVar16 = *param_1;
        dVar9 = param_1[1];
        dVar10 = param_1[2];
        dVar15 = param_1[3];
        dVar35 = dVar9 * local_1d8 * -1.0 +
                 dVar10 * dStack_1e0 + dVar15 * local_1e8 * 1.0 + dVar16 * dStack_1d0;
        dVar33 = dVar16 * local_1d8 * 1.0 +
                 dVar15 * dStack_1e0 + dVar10 * local_1e8 * -1.0 + dVar9 * dStack_1d0;
        dVar30 = dVar15 * local_1d8 * 1.0 +
                 ((local_1e8 * dVar9 * 1.0 + dStack_1d0 * dVar10) - dVar16 * dStack_1e0);
        dVar16 = dVar10 * local_1d8 * -1.0 +
                 ((local_1e8 * dVar16 * -1.0 + dStack_1d0 * dVar15) - dVar9 * dStack_1e0);
        auVar21._0_8_ = dVar35 * dVar35;
        auVar21._8_8_ = dVar33 * dVar33;
        dVar9 = dVar30 * dVar30 + auVar21._0_8_;
        dVar10 = dVar16 * dVar16 + auVar21._8_8_;
        auVar26._0_8_ = dVar9 + dVar10;
        auVar26._8_8_ = dVar9 + dVar10;
        auVar19 = sqrtpd(auVar21,auVar26);
        auVar19 = divpd(auVar22,auVar19);
        auVar38._0_8_ = auVar19._0_8_ * dVar30;
        auVar38._8_8_ = auVar19._8_8_ * dVar16;
        auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_);
        auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_);
        auVar22 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar38,auVar22);
        *param_1 = (double)((ulonglong)(dVar35 * auVar19._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_));
        param_1[1] = (double)((ulonglong)(dVar33 * auVar19._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_));
        *(undefined1 (*) [16])(param_1 + 2) = auVar22;
        dVar3 = *(double *)(param_3 + 0x20);
        dVar18 = *(double *)(param_3 + 0x28);
        local_238 = *(double *)(param_3 + 0x30);
        uStack_230 = *(undefined8 *)(param_3 + 0x38);
      }
    }
    dVar17 = *param_5;
    dVar14 = param_5[1];
    dVar9 = param_5[2];
    dVar10 = param_5[2];
  }
  dVar15 = local_228;
  dVar30 = *param_2;
  dVar35 = param_2[1];
  dVar33 = param_2[2];
  dVar16 = param_2[3];
  dVar37 = dVar17 * dVar33 - dVar30 * dVar10;
  dVar36 = dVar14 * dVar30 - dVar17 * dVar35;
  dVar10 = dVar10 * dVar35 - dVar14 * dVar33;
  dVar10 = dVar10 + dVar10;
  dVar37 = dVar37 + dVar37;
  dVar36 = dVar36 + dVar36;
  local_158 = dVar36 * dVar16 + dVar9 + (dVar37 * dVar30 - dVar10 * dVar35);
  local_168._0_8_ = (dVar36 * dVar35 - dVar37 * dVar33) + dVar16 * dVar10 + dVar17;
  local_168._8_8_ = (dVar33 * dVar10 - dVar30 * dVar36) + param_2[3] * dVar37 + dVar14;
  dVar16 = local_238 - dVar11;
  dVar18 = dVar18 - local_228;
  uVar1 = local_248._0_8_;
  uVar2 = local_248._8_8_;
  dVar3 = dVar3 - (double)local_248._0_8_;
  if ((((9.999999747378752e-05 < ABS(dVar3)) || (9.999999747378752e-05 < ABS(dVar18))) ||
      (9.999999747378752e-05 < ABS(dVar16))) &&
     (((9.999999747378752e-05 < ABS((double)local_168._0_8_) ||
       (9.999999747378752e-05 < ABS((double)local_168._8_8_))) ||
      (9.999999747378752e-05 < ABS(local_158))))) {
    dVar9 = dVar16 * dVar16 + dVar3 * dVar3 + dVar18 * dVar18;
    if (((dVar9 != 1.0) || (local_180 = dVar3, local_170 = dVar16, local_178 = dVar18, NAN(dVar9)))
       && (local_180 = DAT_14c8464e0, local_170 = DAT_14c8464f0, local_178 = DAT_14c8464e8,
          9.99999993922529e-09 <= dVar9)) {
      dVar9 = 1.0 / SQRT(dVar9);
      local_180 = dVar3 * dVar9;
      local_170 = dVar16 * dVar9;
      local_178 = dVar18 * dVar9;
    }
    FUN_144a9d448(&local_1a8,local_168);
    auVar22 = _DAT_149934d80;
    dVar16 = *param_2;
    dVar9 = param_2[1];
    dVar10 = param_2[2];
    dVar30 = param_2[3];
    dVar35 = dVar9 * local_198 * -1.0 +
             dVar10 * local_1a0 + dVar30 * local_1a8 * 1.0 + dVar16 * local_190;
    dVar33 = dVar16 * local_198 * 1.0 +
             dVar30 * local_1a0 + dVar10 * local_1a8 * -1.0 + dVar9 * local_190;
    dVar17 = dVar30 * local_198 * 1.0 +
             ((local_1a8 * dVar9 * 1.0 + local_190 * dVar10) - dVar16 * local_1a0);
    dVar16 = dVar10 * local_198 * -1.0 +
             ((local_1a8 * dVar16 * -1.0 + local_190 * dVar30) - dVar9 * local_1a0);
    dVar9 = dVar17 * dVar17 + dVar35 * dVar35;
    dVar10 = dVar16 * dVar16 + dVar33 * dVar33;
    auVar27._0_8_ = dVar9 + dVar10;
    auVar27._8_8_ = dVar9 + dVar10;
    auVar5._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar27._8_8_);
    auVar5._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar27._0_8_);
    auVar19 = sqrtpd(auVar27,auVar27);
    auVar19 = divpd(_DAT_149934d80,auVar19);
    auVar32._0_8_ = auVar19._0_8_ * dVar17;
    auVar32._8_8_ = auVar19._8_8_ * dVar16;
    dVar16 = (double)((ulonglong)(dVar35 * auVar19._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar27._0_8_));
    dVar9 = (double)((ulonglong)(dVar33 * auVar19._8_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar27._8_8_));
    auVar19 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar32,auVar5);
    dVar10 = auVar19._0_8_;
    *param_2 = dVar16;
    param_2[1] = dVar9;
    *(undefined1 (*) [16])(param_2 + 2) = auVar19;
    if (1e-08 < param_7) {
      dVar35 = *param_6;
      dVar33 = param_6[1];
      dVar17 = auVar19._8_8_;
      dVar30 = dVar33 * dVar16 - dVar9 * dVar35;
      dVar14 = param_6[2] * dVar9 - dVar10 * dVar33;
      dVar3 = dVar35 * dVar10 - dVar16 * param_6[2];
      dVar14 = dVar14 + dVar14;
      dVar3 = dVar3 + dVar3;
      dVar30 = dVar30 + dVar30;
      local_158 = dVar17 * dVar30 + param_6[2] + (dVar3 * dVar16 - dVar14 * dVar9);
      local_168._0_8_ = (dVar30 * dVar9 - dVar3 * dVar10) + dVar17 * dVar14 + dVar35;
      local_168._8_8_ = (dVar10 * dVar14 - dVar16 * dVar30) + dVar17 * dVar3 + dVar33;
      dVar11 = dVar11 - (*(double *)(param_3 + 0x30) + param_1[6]) * 0.5;
      dVar15 = dVar15 - (*(double *)(param_3 + 0x28) + param_1[5]) * 0.5;
      dVar16 = (double)uVar1 - (*(double *)(param_3 + 0x20) + param_1[4]) * 0.5;
      if ((((9.999999747378752e-05 < ABS(dVar16)) || (9.999999747378752e-05 < ABS(dVar15))) ||
          (9.999999747378752e-05 < ABS(dVar11))) &&
         (((9.999999747378752e-05 < ABS((double)local_168._0_8_) ||
           (9.999999747378752e-05 < ABS((double)local_168._8_8_))) ||
          (9.999999747378752e-05 < ABS(local_158))))) {
        auVar28._0_8_ = dVar16 * local_180 + dVar15 * local_178;
        auVar28._8_8_ = uVar2;
        dVar9 = dVar11 * local_170 + auVar28._0_8_;
        dVar11 = dVar11 - local_170 * dVar9;
        dVar15 = dVar15 - local_178 * dVar9;
        dVar16 = dVar16 - dVar9 * local_180;
        dVar9 = dVar11 * dVar11 + dVar16 * dVar16 + dVar15 * dVar15;
        if (((dVar9 != 1.0) ||
            (local_1c0 = dVar16, local_1b0 = dVar11, local_1b8 = dVar15, NAN(dVar9))) &&
           (local_1c0 = DAT_14c8464e0, local_1b0 = DAT_14c8464f0, local_1b8 = DAT_14c8464e8,
           9.99999993922529e-09 <= dVar9)) {
          dVar9 = 1.0 / SQRT(dVar9);
          local_1c0 = dVar16 * dVar9;
          local_1b0 = dVar11 * dVar9;
          local_1b8 = dVar15 * dVar9;
        }
        FUN_144a9d448(&local_1e8,local_168);
        if (1e-08 < ABS(param_7 + -1.0)) {
          dVar11 = local_1d8 * local_1d8 + local_1e8 * local_1e8;
          dVar16 = dStack_1e0 * dStack_1e0 + 0.0;
          auVar13._0_8_ = dVar11 + dVar16;
          auVar13._8_8_ = dVar11 + dVar16;
          auVar6._8_8_ = -(ulonglong)(1e-08 <= auVar13._8_8_);
          auVar6._0_8_ = -(ulonglong)(1e-08 <= auVar13._0_8_);
          auVar19 = sqrtpd(auVar28,auVar13);
          auVar19 = divpd(auVar22,auVar19);
          auVar23._0_8_ = local_1e8 * auVar19._0_8_;
          auVar23._8_8_ = dStack_1e0 * auVar19._8_8_;
          auVar34 = blendvpd(ZEXT816(0x3ff0000000000000),auVar23,auVar6);
          if ((-(ulonglong)(1e-08 <= auVar13._0_8_) & 1) == 0) {
            dVar11 = 0.0;
          }
          else {
            dVar11 = local_1d8 * auVar19._0_8_;
          }
          dVar16 = dStack_1d0;
          if (1.0 <= dStack_1d0) {
            dVar16 = 1.0;
          }
          dVar16 = acos((double)(~-(ulonglong)(dStack_1d0 < -1.0) & (ulonglong)dVar16 |
                                -(ulonglong)(dStack_1d0 < -1.0) & 0xbff0000000000000));
          if (1.0 <= param_7) {
            param_7 = 1.0;
          }
          dVar16 = (double)(param_7 * (float)(dVar16 + dVar16)) * 0.5;
          dVar9 = sin(dVar16);
          dStack_1d0 = cos(dVar16);
          local_1e8 = auVar34._0_8_ * dVar9;
          dStack_1e0 = auVar34._8_8_ * dVar9;
          local_1d8 = dVar11 * dVar9;
        }
        dVar11 = *param_2;
        dVar16 = param_2[1];
        dVar9 = param_2[2];
        dVar10 = param_2[3];
        dVar30 = dVar16 * local_1d8 * -1.0 +
                 dVar9 * dStack_1e0 + dVar10 * local_1e8 * 1.0 + dVar11 * dStack_1d0;
        dVar35 = dVar11 * local_1d8 * 1.0 +
                 dVar10 * dStack_1e0 + dVar9 * local_1e8 * -1.0 + dVar16 * dStack_1d0;
        dVar15 = dVar10 * local_1d8 * 1.0 +
                 ((local_1e8 * dVar16 * 1.0 + dStack_1d0 * dVar9) - dVar11 * dStack_1e0);
        dVar11 = dVar9 * local_1d8 * -1.0 +
                 ((local_1e8 * dVar11 * -1.0 + dStack_1d0 * dVar10) - dVar16 * dStack_1e0);
        auVar24._0_8_ = dVar30 * dVar30;
        auVar24._8_8_ = dVar35 * dVar35;
        dVar16 = dVar15 * dVar15 + auVar24._0_8_;
        dVar9 = dVar11 * dVar11 + auVar24._8_8_;
        auVar29._0_8_ = dVar16 + dVar9;
        auVar29._8_8_ = dVar16 + dVar9;
        auVar19 = sqrtpd(auVar24,auVar29);
        auVar19 = divpd(auVar22,auVar19);
        auVar39._0_8_ = auVar19._0_8_ * dVar15;
        auVar39._8_8_ = auVar19._8_8_ * dVar11;
        auVar7._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
        auVar7._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
        auVar22 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar39,auVar7);
        *param_2 = (double)((ulonglong)(dVar30 * auVar19._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_));
        param_2[1] = (double)((ulonglong)(dVar35 * auVar19._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_));
        *(undefined1 (*) [16])(param_2 + 2) = auVar22;
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491b1048 FUN_1491b1048 body=114 status=ok
// SIG undefined FUN_1491b1048(void)

void FUN_1491b1048(longlong *param_1,float param_2,undefined4 param_3)

{
  param_2 = *(float *)(param_1 + 2) - param_2;
  *(float *)(param_1 + 2) = param_2;
  while (param_2 < 0.0) {
    *(float *)(param_1 + 2) = param_2 + *(float *)(param_1 + 1);
    *(float *)((longlong)param_1 + 0xc) =
         *(float *)(param_1 + 1) + *(float *)((longlong)param_1 + 0xc);
    (**(code **)(*param_1 + 0x28))(param_1);
    (**(code **)(*param_1 + 0x30))(param_1,param_3);
    param_2 = *(float *)(param_1 + 2);
  }
  return;
}



// FUNCTION 1491b10ba FUN_1491b10ba body=98 status=ok
// SIG undefined FUN_1491b10ba(void)

void FUN_1491b10ba(longlong *param_1,float param_2)

{
  param_2 = *(float *)(param_1 + 2) - param_2;
  *(float *)(param_1 + 2) = param_2;
  while (param_2 < 0.0) {
    *(float *)(param_1 + 2) = param_2 + *(float *)(param_1 + 1);
    *(float *)((longlong)param_1 + 0xc) =
         *(float *)(param_1 + 1) + *(float *)((longlong)param_1 + 0xc);
    (**(code **)(*param_1 + 0x28))(param_1);
    (**(code **)(*param_1 + 0x38))(param_1);
    param_2 = *(float *)(param_1 + 2);
  }
  return;
}



// FUNCTION 1491b111c FUN_1491b111c body=515 status=ok
// SIG undefined FUN_1491b111c(void)

void FUN_1491b111c(longlong param_1,float *param_2,float *param_3,double *param_4,double *param_5)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  
  param_5[2] = DAT_14c8464f0;
  dVar3 = DAT_14c8464e8;
  *param_5 = DAT_14c8464e0;
  param_5[1] = dVar3;
  dVar6 = DAT_14c8464e8;
  dVar3 = DAT_14c8464e0;
  param_4[2] = DAT_14c8464f0;
  *param_4 = dVar3;
  param_4[1] = dVar6;
  fVar12 = *param_3;
  fVar1 = *param_2;
  if ((1e-08 < fVar12) || (fVar1 <= 1e-08)) {
    if ((fVar12 <= 1e-08) || (1e-08 < fVar1)) {
      fVar8 = fVar12 + fVar1;
      fVar7 = 0.0;
      fVar5 = 0.0;
      fVar2 = fVar7;
      if (1e-08 < fVar8) {
        fVar2 = fVar12 / fVar8;
        if (1.0 <= fVar2) {
          fVar2 = 1.0;
        }
        if (fVar2 <= 0.0) {
          fVar2 = fVar7;
        }
        fVar5 = fVar1 / fVar8;
        if (1.0 <= fVar5) {
          fVar5 = 1.0;
        }
        if (fVar5 <= 0.0) {
          fVar5 = fVar7;
        }
      }
    }
    else {
      fVar5 = 1.0;
      fVar2 = 0.0;
    }
  }
  else {
    fVar5 = 0.0;
    fVar2 = 1.0;
  }
  if (1e-08 < fVar5 + fVar2) {
    dVar3 = *(double *)(param_2 + 8) - *(double *)(param_3 + 8);
    dVar6 = *(double *)(param_2 + 6) - *(double *)(param_3 + 6);
    dVar11 = *(double *)(param_2 + 4) - *(double *)(param_3 + 4);
    fVar12 = (float)SQRT(dVar3 * dVar3 + dVar11 * dVar11 + dVar6 * dVar6);
    if (1e-08 <= fVar12) {
      dVar9 = (double)(*(float *)(param_1 + 0xc) - fVar12);
      dVar10 = 1.0 / (double)fVar12;
      dVar4 = dVar3 * dVar9 * dVar10;
      dVar6 = dVar6 * dVar9 * dVar10;
      dVar10 = dVar10 * dVar11 * dVar9;
      dVar11 = (double)*(float *)(param_1 + 8);
      dVar3 = (double)fVar2;
      *param_4 = dVar11 * dVar10 * dVar3;
      param_4[1] = dVar6 * dVar11 * dVar3;
      param_4[2] = dVar4 * dVar11 * dVar3;
      dVar11 = (double)*(float *)(param_1 + 8);
      dVar3 = (double)fVar5;
      *param_5 = -dVar10 * dVar11 * dVar3;
      param_5[1] = -dVar6 * dVar11 * dVar3;
      param_5[2] = -dVar4 * dVar11 * dVar3;
    }
  }
  return;
}



// FUNCTION 1491b1320 FUN_1491b1320 body=683 status=ok
// SIG undefined FUN_1491b1320(void)

void FUN_1491b1320(undefined1 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  switch(*param_1) {
  case 0:
    fVar11 = *param_3;
    fVar1 = *param_2;
    if ((fVar11 <= 1e-08) && (1e-08 < fVar1)) goto switchD_1491b135d_caseD_2;
    if ((1e-08 < fVar11) && (fVar1 <= 1e-08)) goto switchD_1491b135d_caseD_1;
    fVar10 = fVar11 + fVar1;
    fVar4 = 0.0;
    fVar7 = fVar4;
    fVar9 = 0.0;
    if (1e-08 < fVar10) {
      fVar7 = fVar11 / fVar10;
      if (1.0 <= fVar7) {
        fVar7 = 1.0;
      }
      if (fVar7 <= 0.0) {
        fVar7 = fVar4;
      }
      fVar9 = fVar1 / fVar10;
      if (1.0 <= fVar9) {
        fVar9 = 1.0;
      }
      if (fVar9 <= 0.0) {
        fVar9 = fVar4;
      }
    }
    break;
  case 1:
switchD_1491b135d_caseD_1:
    fVar7 = 0.0;
    fVar9 = 1.0;
    break;
  case 2:
switchD_1491b135d_caseD_2:
    fVar7 = 1.0;
    fVar9 = 0.0;
    break;
  case 3:
    dVar5 = *(double *)(param_1 + 0x30);
    dVar8 = *(double *)(param_1 + 0x38);
    dVar6 = (*(double *)(param_2 + 8) - *(double *)(param_1 + 0x20)) * dVar8 +
            (*(double *)(param_2 + 4) - *(double *)(param_1 + 0x10)) * *(double *)(param_1 + 0x28) +
            (*(double *)(param_2 + 6) - *(double *)(param_1 + 0x18)) * dVar5;
    *(double *)(param_2 + 4) = *(double *)(param_2 + 4) - dVar6 * *(double *)(param_1 + 0x28);
    *(double *)(param_2 + 6) = *(double *)(param_2 + 6) - dVar5 * dVar6;
    *(double *)(param_2 + 8) = *(double *)(param_2 + 8) - dVar8 * dVar6;
  default:
    goto switchD_1491b135d_default;
  }
  if (1e-08 < fVar9 + fVar7) {
    dVar8 = *(double *)(param_2 + 8) - *(double *)(param_3 + 8);
    dVar6 = *(double *)(param_2 + 6) - *(double *)(param_3 + 6);
    dVar5 = *(double *)(param_2 + 4) - *(double *)(param_3 + 4);
    fVar11 = (float)SQRT(dVar8 * dVar8 + dVar5 * dVar5 + dVar6 * dVar6);
    if (1e-08 <= fVar11) {
      dVar2 = (double)((float)*(double *)(param_1 + 0x10) - fVar11);
      dVar3 = 1.0 / (double)fVar11;
      dVar8 = dVar8 * dVar2 * dVar3;
      dVar6 = dVar6 * dVar2 * dVar3;
      dVar3 = dVar3 * dVar5 * dVar2;
      dVar5 = (double)fVar7;
      *(double *)(param_2 + 4) = *(double *)(param_2 + 4) + dVar5 * dVar3;
      *(double *)(param_2 + 6) = *(double *)(param_2 + 6) + dVar6 * dVar5;
      *(double *)(param_2 + 8) = *(double *)(param_2 + 8) + dVar8 * dVar5;
      dVar5 = (double)fVar9;
      *(double *)(param_3 + 4) = *(double *)(param_3 + 4) - dVar3 * dVar5;
      *(double *)(param_3 + 6) = *(double *)(param_3 + 6) - dVar6 * dVar5;
      *(double *)(param_3 + 8) = *(double *)(param_3 + 8) - dVar8 * dVar5;
    }
  }
switchD_1491b135d_default:
  return;
}



// FUNCTION 1491b15cc FUN_1491b15cc body=152 status=ok
// SIG undefined FUN_1491b15cc(void)

void FUN_1491b15cc(longlong param_1)

{
  *(undefined8 *)(param_1 + 0xc) = 0;
  if (*(int *)(param_1 + 0x24) < 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    FUN_1491d0062(param_1 + 0x18);
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(int *)(param_1 + 0x34) < 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_1491d0092(param_1 + 0x28);
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(int *)(param_1 + 100) < 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
    FUN_1491d00c2(param_1 + 0x58);
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if (-1 < *(int *)(param_1 + 0x74)) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  FUN_1491d0062(param_1 + 0x68);
  return;
}



// FUNCTION 1491b1664 FUN_1491b1664 body=108 status=ok
// SIG undefined FUN_1491b1664(void)

void FUN_1491b1664(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  *(undefined8 *)(param_1 + 0xc) = 0;
  if (*(int *)(param_1 + 0x74) < 0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    FUN_1491d0062(param_1 + 0x68);
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x18);
    lVar5 = 0;
    do {
      *(undefined8 *)(lVar3 + 0x38 + lVar5) = DAT_14c8464f0;
      uVar4 = DAT_14c8464e8;
      puVar1 = (undefined8 *)(lVar3 + 0x28 + lVar5);
      *puVar1 = DAT_14c8464e0;
      puVar1[1] = uVar4;
      lVar5 = lVar5 + 0x40;
    } while ((longlong)iVar2 * 0x40 != lVar5);
  }
  return;
}



// FUNCTION 1491b16d0 FUN_1491b16d0 body=392 status=ok
// SIG undefined FUN_1491b16d0(void)

void FUN_1491b16d0(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  
  if ((*(float *)(param_1 + 0x10) <= 1e-08) ||
     (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x20))) {
    lVar7 = *(longlong *)(param_1 + 0x18);
    lVar17 = (longlong)param_3 * 0x40;
    uVar9 = *(undefined8 *)(lVar7 + lVar17);
    uVar10 = ((undefined8 *)(lVar7 + lVar17))[1];
    puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar17);
    uVar11 = *puVar1;
    uVar12 = puVar1[1];
    puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar17);
    uVar13 = *puVar1;
    uVar14 = puVar1[1];
    puVar1 = (undefined8 *)(lVar7 + 0x30 + lVar17);
    uVar15 = puVar1[1];
    param_2[6] = *puVar1;
    param_2[7] = uVar15;
    param_2[4] = uVar13;
    param_2[5] = uVar14;
    param_2[2] = uVar11;
    param_2[3] = uVar12;
    *param_2 = uVar9;
    param_2[1] = uVar10;
  }
  else {
    fVar18 = 1.0 - *(float *)(param_1 + 0x10) / *(float *)(param_1 + 8);
    lVar7 = *(longlong *)(param_1 + 0x18);
    lVar17 = *(longlong *)(param_1 + 0x68);
    lVar16 = (longlong)param_3 * 0x40;
    uVar9 = *(undefined8 *)(lVar7 + lVar16);
    uVar10 = ((undefined8 *)(lVar7 + lVar16))[1];
    puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar16);
    uVar11 = *puVar1;
    uVar12 = puVar1[1];
    puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar16);
    uVar13 = puVar1[1];
    puVar2 = (undefined8 *)(lVar7 + 0x30 + lVar16);
    uVar14 = *puVar2;
    uVar15 = puVar2[1];
    param_2[4] = *puVar1;
    param_2[5] = uVar13;
    param_2[6] = uVar14;
    param_2[7] = uVar15;
    param_2[2] = uVar11;
    param_2[3] = uVar12;
    *param_2 = uVar9;
    param_2[1] = uVar10;
    dVar4 = *(double *)(lVar17 + 0x20 + lVar16);
    dVar5 = *(double *)(lVar17 + 0x10 + lVar16);
    dVar6 = *(double *)(lVar17 + 0x18 + lVar16);
    dVar8 = (double)fVar18;
    param_2[2] = ((double)param_2[2] - dVar5) * dVar8 + dVar5;
    param_2[3] = ((double)param_2[3] - dVar6) * dVar8 + dVar6;
    param_2[4] = ((double)param_2[4] - dVar4) * dVar8 + dVar4;
    fVar3 = *(float *)(lVar17 + 4 + lVar16);
    *(float *)((longlong)param_2 + 4) = (*(float *)((longlong)param_2 + 4) - fVar3) * fVar18 + fVar3
    ;
    dVar4 = *(double *)(lVar17 + 0x38 + lVar16);
    dVar5 = *(double *)(lVar17 + 0x28 + lVar16);
    dVar6 = *(double *)(lVar17 + 0x30 + lVar16);
    param_2[5] = ((double)param_2[5] - dVar5) * dVar8 + dVar5;
    param_2[6] = ((double)param_2[6] - dVar6) * dVar8 + dVar6;
    param_2[7] = ((double)param_2[7] - dVar4) * dVar8 + dVar4;
  }
  return;
}



// FUNCTION 1491b1858 FUN_1491b1858 body=144 status=ok
// SIG undefined FUN_1491b1858(void)

void FUN_1491b1858(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(param_1 + 0x70) = iVar2;
  if (iVar2 == 0 && *(int *)(param_1 + 0x74) == 0) {
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  else {
    FUN_1491d00f2((undefined8 *)(param_1 + 0x68));
    if (iVar2 != 0) {
      memcpy(*(void **)(param_1 + 0x68),_Src,(longlong)iVar2 << 6);
    }
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x18);
    lVar5 = 0;
    do {
      *(undefined8 *)(lVar3 + 0x38 + lVar5) = DAT_14c8464f0;
      uVar4 = DAT_14c8464e8;
      puVar1 = (undefined8 *)(lVar3 + 0x28 + lVar5);
      *puVar1 = DAT_14c8464e0;
      puVar1[1] = uVar4;
      lVar5 = lVar5 + 0x40;
    } while ((longlong)iVar2 * 0x40 != lVar5);
  }
  return;
}



// FUNCTION 1491b18e8 FUN_1491b18e8 body=88 status=ok
// SIG undefined FUN_1491b18e8(void)

undefined8 * FUN_1491b18e8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1491d00f2(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 6);
      }
    }
  }
  return param_1;
}



// FUNCTION 1491b1940 FUN_1491b1940 body=58 status=ok
// SIG undefined FUN_1491b1940(void)

void FUN_1491b1940(undefined8 param_1,undefined4 param_2)

{
  FUN_1491b197a();
  FUN_1491b1ad4(param_1);
  FUN_1491b1c2c(param_1,param_2);
  FUN_1491b1cf0(param_1);
  return;
}



// FUNCTION 1491b197a FUN_1491b197a body=344 status=ok
// SIG undefined FUN_1491b197a(void)

void FUN_1491b197a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar1 = *(int *)(param_1 + 0x30);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x28);
      if (((longlong)*(int *)(lVar2 + lVar3) != -1) &&
         (lVar4 = (longlong)*(int *)(lVar2 + 4 + lVar3), lVar4 != -1)) {
        local_48 = DAT_14c8464f0;
        local_58 = (undefined4)DAT_14c8464e0;
        uStack_54 = DAT_14c8464e0._4_4_;
        uStack_50 = (undefined4)DAT_14c8464e8;
        uStack_4c = DAT_14c8464e8._4_4_;
        local_68 = DAT_14c8464f0;
        local_78 = (undefined4)DAT_14c8464e0;
        uStack_74 = DAT_14c8464e0._4_4_;
        uStack_70 = (undefined4)DAT_14c8464e8;
        uStack_6c = DAT_14c8464e8._4_4_;
        local_88 = &local_78;
        FUN_1491b111c(lVar2 + lVar3,
                      (longlong)*(int *)(lVar2 + lVar3) * 0x40 + *(longlong *)(param_1 + 0x68),
                      lVar4 * 0x40 + *(longlong *)(param_1 + 0x68),&local_58);
        lVar4 = *(longlong *)(param_1 + 0x18);
        iVar1 = *(int *)(lVar2 + 4 + lVar3);
        lVar2 = (longlong)*(int *)(lVar2 + lVar3) * 0x40;
        *(double *)(lVar4 + 0x28 + lVar2) =
             (double)CONCAT44(uStack_54,local_58) + *(double *)(lVar4 + 0x28 + lVar2);
        *(double *)(lVar4 + 0x30 + lVar2) =
             (double)CONCAT44(uStack_4c,uStack_50) + *(double *)(lVar4 + 0x30 + lVar2);
        *(double *)(lVar4 + 0x38 + lVar2) = local_48 + *(double *)(lVar4 + 0x38 + lVar2);
        lVar2 = (longlong)iVar1 * 0x40;
        *(double *)(lVar4 + 0x28 + lVar2) =
             (double)CONCAT44(uStack_74,local_78) + *(double *)(lVar4 + 0x28 + lVar2);
        *(double *)(lVar4 + 0x30 + lVar2) =
             (double)CONCAT44(uStack_6c,uStack_70) + *(double *)(lVar4 + 0x30 + lVar2);
        *(double *)(lVar4 + 0x38 + lVar2) = local_68 + *(double *)(lVar4 + 0x38 + lVar2);
        iVar1 = *(int *)(param_1 + 0x30);
      }
      lVar5 = lVar5 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar5 < iVar1);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491b1ad4 FUN_1491b1ad4 body=342 status=ok
// SIG undefined FUN_1491b1ad4(void)

void FUN_1491b1ad4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  double local_50;
  double local_48;
  double local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar2 = 0;
    do {
      if (0 < *(int *)(param_1 + 0x40)) {
        lVar4 = lVar2 * 0x40;
        lVar5 = 0;
        lVar3 = 0;
        do {
          FUN_1491b1e32(*(longlong *)(param_1 + 0x38) + lVar5,&local_50,
                        *(longlong *)(param_1 + 0x68) + lVar4);
          lVar1 = *(longlong *)(param_1 + 0x18);
          *(double *)(lVar1 + 0x28 + lVar4) = local_50 + *(double *)(lVar1 + 0x28 + lVar4);
          *(double *)(lVar1 + 0x30 + lVar4) = local_48 + *(double *)(lVar1 + 0x30 + lVar4);
          *(double *)(lVar1 + 0x38 + lVar4) = local_40 + *(double *)(lVar1 + 0x38 + lVar4);
          lVar3 = lVar3 + 1;
          lVar5 = lVar5 + 0x28;
        } while (lVar3 < *(int *)(param_1 + 0x40));
      }
      if (0 < *(int *)(param_1 + 0x50)) {
        lVar4 = lVar2 * 0x40;
        lVar5 = 0;
        lVar3 = 0;
        do {
          FUN_1491b1f2c(*(longlong *)(param_1 + 0x48) + lVar5,&local_50,
                        *(longlong *)(param_1 + 0x68) + lVar4);
          lVar1 = *(longlong *)(param_1 + 0x18);
          *(double *)(lVar1 + 0x28 + lVar4) = local_50 + *(double *)(lVar1 + 0x28 + lVar4);
          *(double *)(lVar1 + 0x30 + lVar4) = local_48 + *(double *)(lVar1 + 0x30 + lVar4);
          *(double *)(lVar1 + 0x38 + lVar4) = local_40 + *(double *)(lVar1 + 0x38 + lVar4);
          lVar3 = lVar3 + 1;
          lVar5 = lVar5 + 0x80;
        } while (lVar3 < *(int *)(param_1 + 0x50));
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x20));
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b1c2c FUN_1491b1c2c body=194 status=ok
// SIG undefined FUN_1491b1c2c(void)

void FUN_1491b1c2c(longlong param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      local_88 = *(undefined4 *)(param_1 + 8);
      FUN_14915adde(*(longlong *)(param_1 + 0x68) + lVar3,&local_80,
                    *(longlong *)(param_1 + 0x18) + lVar3 + 0x28,param_2);
      lVar2 = *(longlong *)(param_1 + 0x18);
      puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar3);
      *puVar1 = local_50;
      puVar1[1] = uStack_4c;
      puVar1[2] = uStack_48;
      puVar1[3] = uStack_44;
      puVar1 = (undefined4 *)(lVar2 + 0x20 + lVar3);
      *puVar1 = local_60;
      puVar1[1] = uStack_5c;
      puVar1[2] = uStack_58;
      puVar1[3] = uStack_54;
      puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar3);
      *puVar1 = local_70;
      puVar1[1] = uStack_6c;
      puVar1[2] = uStack_68;
      puVar1[3] = uStack_64;
      puVar1 = (undefined4 *)(lVar2 + lVar3);
      *puVar1 = local_80;
      puVar1[1] = uStack_7c;
      puVar1[2] = uStack_78;
      puVar1[3] = uStack_74;
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x40;
    } while (lVar4 < *(int *)(param_1 + 0x20));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b1cf0 FUN_1491b1cf0 body=111 status=ok
// SIG undefined FUN_1491b1cf0(void)

void FUN_1491b1cf0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  iVar3 = *(int *)(param_1 + 0x60);
  if (0 < iVar3) {
    lVar5 = 0;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x58);
      iVar1 = *(int *)(lVar2 + 4 + lVar5);
      if ((longlong)iVar1 != -1) {
        iVar3 = *(int *)(lVar2 + 8 + lVar5);
        iVar6 = iVar1;
        if (iVar3 != -1) {
          iVar6 = iVar3;
        }
        FUN_1491b1320(lVar2 + lVar5,(longlong)iVar1 * 0x40 + *(longlong *)(param_1 + 0x18),
                      (longlong)iVar6 * 0x40 + *(longlong *)(param_1 + 0x18));
        iVar3 = *(int *)(param_1 + 0x60);
      }
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x40;
    } while (lVar4 < iVar3);
  }
  return;
}



// FUNCTION 1491b1d60 FUN_1491b1d60 body=42 status=ok
// SIG undefined FUN_1491b1d60(void)

void FUN_1491b1d60(undefined8 param_1)

{
  FUN_1491b197a();
  FUN_1491b1ad4(param_1);
  FUN_1491b1d8a(param_1);
  FUN_1491b1cf0(param_1);
  return;
}



// FUNCTION 1491b1d8a FUN_1491b1d8a body=166 status=ok
// SIG undefined FUN_1491b1d8a(void)

void FUN_1491b1d8a(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      FUN_14915af2e(*(longlong *)(param_1 + 0x68) + lVar3,&local_68,
                    *(longlong *)(param_1 + 0x18) + lVar3 + 0x28,*(undefined4 *)(param_1 + 8));
      lVar2 = *(longlong *)(param_1 + 0x18);
      puVar1 = (undefined4 *)(lVar2 + 0x30 + lVar3);
      *puVar1 = local_38;
      puVar1[1] = uStack_34;
      puVar1[2] = uStack_30;
      puVar1[3] = uStack_2c;
      puVar1 = (undefined4 *)(lVar2 + 0x20 + lVar3);
      *puVar1 = local_48;
      puVar1[1] = uStack_44;
      puVar1[2] = uStack_40;
      puVar1[3] = uStack_3c;
      puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar3);
      *puVar1 = local_58;
      puVar1[1] = uStack_54;
      puVar1[2] = uStack_50;
      puVar1[3] = uStack_4c;
      puVar1 = (undefined4 *)(lVar2 + lVar3);
      *puVar1 = local_68;
      puVar1[1] = uStack_64;
      puVar1[2] = uStack_60;
      puVar1[3] = uStack_5c;
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x40;
    } while (lVar4 < *(int *)(param_1 + 0x20));
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b1e32 FUN_1491b1e32 body=250 status=ok
// SIG undefined FUN_1491b1e32(void)

void FUN_1491b1e32(char *param_1,double *param_2,float *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  param_2[2] = DAT_14c8464f0;
  dVar7 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = dVar7;
  if ((1e-08 < *param_3) && (*param_1 == '\0')) {
    if (param_1[0x24] == '\x01') {
      dVar6 = *(double *)(param_1 + 8);
      dVar1 = *(double *)(param_1 + 0x10);
      dVar2 = *(double *)(param_1 + 0x18);
      dVar5 = dVar2 * dVar2 + dVar6 * dVar6 + dVar1 * dVar1;
      if (((dVar5 != 1.0) || (dVar3 = dVar1, dVar4 = dVar2, dVar7 = dVar6, NAN(dVar5))) &&
         (dVar3 = DAT_14c8464e8, dVar4 = DAT_14c8464f0, dVar7 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar5)) {
        dVar7 = 1.0 / SQRT(dVar5);
        dVar3 = dVar1 * dVar7;
        dVar4 = dVar2 * dVar7;
        dVar7 = dVar6 * dVar7;
      }
    }
    else {
      param_2[2] = *(double *)(param_1 + 0x18);
      dVar7 = *(double *)(param_1 + 0x10);
      *param_2 = *(double *)(param_1 + 8);
      param_2[1] = dVar7;
      dVar3 = param_2[1];
      dVar4 = param_2[2];
      dVar7 = *param_2;
    }
    dVar6 = (double)*(float *)(param_1 + 0x20);
    *param_2 = dVar7 * dVar6;
    param_2[1] = dVar3 * dVar6;
    param_2[2] = dVar4 * dVar6;
  }
  return;
}



// FUNCTION 1491b1f2c FUN_1491b1f2c body=137 status=ok
// SIG undefined FUN_1491b1f2c(void)

double * FUN_1491b1f2c(longlong param_1,double *param_2,float *param_3)

{
  double dVar1;
  float fVar2;
  double dVar3;
  
  param_2[2] = DAT_14c8464f0;
  dVar1 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = dVar1;
  if (1e-08 < *param_3) {
    fVar2 = (float)FUN_1491b1fc2(*param_3,param_3 + 4,param_3[1],param_2);
    dVar1 = (double)fVar2;
    dVar3 = (double)*(float *)(param_1 + 0x70);
    *param_2 = dVar1 * *param_2 * dVar3;
    param_2[1] = param_2[1] * dVar1 * dVar3;
    param_2[2] = param_2[2] * dVar1 * dVar3;
  }
  return param_2;
}



// FUNCTION 1491b1fc2 FUN_1491b1fc2 body=2099 status=ok
// SIG undefined FUN_1491b1fc2(void)

void FUN_1491b1fc2(double *param_1,double *param_2,float param_3,undefined1 (*param_4) [16])

{
  float fVar1;
  float fVar2;
  char cVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_118 [32];
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined1 local_d8 [16];
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(double *)param_4[1] = DAT_14c8464f0;
  dVar17 = DAT_14c8464e8;
  *(double *)*param_4 = DAT_14c8464e0;
  *(double *)(*param_4 + 8) = dVar17;
  cVar3 = *(char *)(param_1 + 0xc);
  fVar14 = 0.0;
  if (cVar3 == '\x02') {
    dVar8 = *param_1;
    dVar19 = param_1[1];
    dVar22 = param_1[2];
    local_f8 = param_1[6];
    dVar18 = param_2[2] - local_f8;
    dVar17 = param_2[1] - param_1[5];
    dVar4 = *param_2 - param_1[4];
    dVar20 = SQRT(dVar18 * dVar18 + dVar4 * dVar4 + dVar17 * dVar17);
    dVar18 = dVar20 * 0.0;
    dVar17 = param_1[3];
    dVar24 = dVar18 * dVar22 - dVar8 * dVar20;
    dVar21 = dVar18 * dVar8 - dVar19 * dVar18;
    dVar23 = dVar20 * dVar19 - dVar22 * dVar18;
    dVar23 = dVar23 + dVar23;
    dVar24 = dVar24 + dVar24;
    dVar21 = dVar21 + dVar21;
    dVar4 = (dVar21 * dVar19 - dVar24 * dVar22) + dVar17 * dVar23 + dVar18 + param_1[4];
    dVar18 = (dVar22 * dVar23 - dVar8 * dVar21) + param_1[3] * dVar24 + dVar18 + param_1[5];
    dVar20 = dVar21 * dVar17 + dVar20 + (dVar24 * dVar8 - dVar23 * dVar19) + local_f8;
    dVar17 = param_2[2] - dVar20;
    dVar23 = param_2[1] - dVar18;
    dVar21 = *param_2 - dVar4;
    *(double *)*param_4 = dVar21;
    *(double *)(*param_4 + 8) = dVar23;
    *(double *)param_4[1] = dVar17;
    if (((9.999999747378752e-05 < ABS(dVar21)) || (9.999999747378752e-05 < ABS(dVar23))) ||
       (9.999999747378752e-05 < ABS(dVar17))) {
      dVar24 = dVar17 * dVar17 + dVar21 * dVar21 + dVar23 * dVar23;
      fVar14 = (float)SQRT(dVar24);
      if (((dVar24 != 1.0) || (dVar19 = dVar21, dVar22 = dVar23, dVar8 = dVar17, NAN(dVar24))) &&
         (dVar19 = DAT_14c8464e0, dVar22 = DAT_14c8464e8, dVar8 = DAT_14c8464f0,
         9.99999993922529e-09 <= dVar24)) {
        dVar24 = 1.0 / SQRT(dVar24);
        dVar19 = dVar21 * dVar24;
        dVar22 = dVar23 * dVar24;
        dVar8 = dVar17 * dVar24;
      }
      *(double *)*param_4 = dVar19;
      *(double *)(*param_4 + 8) = dVar22;
      *(double *)param_4[1] = dVar8;
      param_3 = fVar14 - param_3;
      if (param_3 <= 0.0) {
        param_3 = 0.0;
      }
      dVar17 = (double)param_3;
      if (((9.999999747378752e-05 < ABS(dVar19 * dVar17)) ||
          (9.999999747378752e-05 < ABS(dVar22 * dVar17))) ||
         (9.999999747378752e-05 < ABS(dVar8 * dVar17))) {
        dVar7 = *param_1;
        dVar10 = param_1[1];
        dVar11 = param_1[2];
        dVar21 = param_1[3];
        dVar23 = dVar7 * 0.0 - dVar10 * 0.0;
        dVar24 = dVar10 * 1.0 - dVar11 * 0.0;
        dVar6 = dVar7 * -1.0 + dVar11 * 0.0;
        dVar24 = dVar24 + dVar24;
        dVar6 = dVar6 + dVar6;
        dVar23 = dVar23 + dVar23;
        local_c8 = dVar23 * dVar21 + 1.0 + (dVar6 * dVar7 - dVar24 * dVar10);
        dVar7 = (dVar11 * dVar24 - dVar7 * dVar23) + param_1[3] * dVar6 + 0.0;
        local_d8._8_4_ = SUB84(dVar7,0);
        local_d8._0_8_ = (dVar23 * dVar10 - dVar6 * dVar11) + dVar21 * dVar24 + 0.0;
        local_d8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        local_e0 = (dVar20 + dVar8 * dVar17) - param_1[6];
        local_e8 = (dVar18 + dVar22 * dVar17) - param_1[5];
        local_f0 = (dVar4 + dVar19 * dVar17) - param_1[4];
        fVar14 = (float)FUN_14915b018();
        fVar14 = fVar14 * 57.295776 + fVar14 * 57.295776;
      }
    }
  }
  else if (cVar3 == '\x01') {
    dVar20 = param_2[2] - param_1[6];
    dVar21 = param_2[1] - param_1[5];
    dVar4 = *param_2 - param_1[4];
    *(double *)*param_4 = dVar4;
    *(double *)(*param_4 + 8) = dVar21;
    dVar18 = dVar20 * dVar20 + dVar4 * dVar4 + dVar21 * dVar21;
    dVar17 = SQRT(dVar18) - (double)param_3;
    if (dVar17 <= 0.0) {
      dVar17 = 0.0;
    }
    fVar14 = (float)dVar17;
    *(double *)param_4[1] = dVar20;
    if (1e-08 < fVar14) {
      if (((dVar18 != 1.0) || (dVar23 = dVar21, dVar17 = dVar4, dVar24 = dVar20, NAN(dVar18))) &&
         (dVar23 = DAT_14c8464e8, dVar17 = DAT_14c8464e0, dVar24 = DAT_14c8464f0,
         9.99999993922529e-09 <= dVar18)) {
        dVar18 = 1.0 / SQRT(dVar18);
        dVar23 = dVar21 * dVar18;
        dVar17 = dVar4 * dVar18;
        dVar24 = dVar20 * dVar18;
      }
      *(double *)*param_4 = dVar17;
      *(double *)(*param_4 + 8) = dVar23;
      *(double *)param_4[1] = dVar24;
    }
  }
  else if (cVar3 == '\0') {
    dVar23 = *param_1;
    dVar24 = param_1[1];
    dVar8 = param_1[2];
    dVar17 = param_1[3];
    dVar4 = dVar23 * 0.0 - dVar24 * 0.0;
    dVar18 = dVar24 * 1.0 - dVar8 * 0.0;
    dVar20 = dVar23 * -1.0 + dVar8 * 0.0;
    dVar18 = dVar18 + dVar18;
    dVar20 = dVar20 + dVar20;
    dVar4 = dVar4 + dVar4;
    dVar21 = (dVar8 * dVar18 - dVar23 * dVar4) + param_1[3] * dVar20 + 0.0;
    auVar5._8_4_ = SUB84(dVar21,0);
    auVar5._0_8_ = (dVar4 * dVar24 - dVar20 * dVar8) + dVar17 * dVar18 + 0.0;
    auVar5._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    *param_4 = auVar5;
    *(double *)param_4[1] = dVar4 * dVar17 + 1.0 + (dVar20 * dVar23 - dVar18 * dVar24);
    dVar17 = param_2[2] - param_1[6];
    dVar18 = -*param_1;
    dVar20 = -param_1[1];
    dVar21 = (param_2[1] - param_1[5]) * dVar18 - dVar20 * (*param_2 - param_1[4]);
    dVar23 = dVar17 * dVar20 - param_1[2] * -1.0 * (param_2[1] - param_1[5]);
    dVar4 = (*param_2 - param_1[4]) * param_1[2] * -1.0 + dVar17 * *param_1;
    fVar14 = (float)((double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_1[10])) &
                             (ulonglong)(1.0 / param_1[10])) *
                     (param_1[3] * 1.0 * (dVar21 + dVar21) + dVar17 +
                     ((dVar4 + dVar4) * dVar18 - dVar20 * (dVar23 + dVar23))) - (double)param_3);
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
  }
  if (*(char *)((longlong)param_1 + 0x74) == '\x01') {
    uVar16 = *(undefined4 *)param_4[1];
    uVar12 = *(uint *)(param_4[1] + 4);
    uVar13 = *(uint *)(*param_4 + 4);
    uVar9 = *(undefined8 *)(*param_4 + 8);
    *(undefined4 *)*param_4 = *(undefined4 *)*param_4;
    *(uint *)(*param_4 + 4) = uVar13 ^ 0x80000000;
    *(int *)(*param_4 + 8) = (int)uVar9;
    *(uint *)(*param_4 + 0xc) = (uint)((ulonglong)uVar9 >> 0x20) ^ 0x80000000;
    *(undefined4 *)param_4[1] = uVar16;
    *(uint *)(param_4[1] + 4) = uVar12 ^ 0x80000000;
  }
  fVar1 = *(float *)((longlong)param_1 + 100);
  fVar2 = *(float *)(param_1 + 0xd);
  if (fVar2 <= fVar1) {
    if (fVar1 <= fVar14) {
      if (*(char *)((longlong)param_1 + 0x74) == '\0') {
        uVar16 = 0;
        goto LAB_1491b229c;
      }
    }
    else {
      uVar16 = 0;
      if (*(char *)((longlong)param_1 + 0x74) != '\0') goto LAB_1491b229c;
    }
    uVar16 = 0x3f800000;
  }
  else {
    fVar15 = 1.0;
    if ((fVar1 <= fVar14) && (fVar15 = 0.0, fVar14 < fVar2)) {
      fVar15 = (fVar14 - fVar1) / (fVar2 - fVar1);
      if (1.0 <= fVar15) {
        fVar15 = 1.0;
      }
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      fVar15 = 1.0 - fVar15;
    }
    if (*(char *)((longlong)param_1 + 0x74) != '\0') {
      fVar15 = 1.0 - fVar15;
    }
    uVar16 = FUN_14915b162(fVar15,*(undefined1 *)((longlong)param_1 + 0x6c));
  }
LAB_1491b229c:
  if ((local_c0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(uVar16);
  }
  return;
}



// FUNCTION 1491b27f6 FUN_1491b27f6 body=138 status=ok
// SIG undefined FUN_1491b27f6(void)

undefined8 FUN_1491b27f6(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (1 < *(int *)(param_1 + 0x18)) {
    FUN_1400021e4(param_1,local_30);
    FUN_1491d2e98(param_2,param_1 + 0x10,local_30);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  FUN_1400021e4(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b2884 FUN_1491b2884 body=609 status=ok
// SIG undefined FUN_1491b2884(void)

longlong FUN_1491b2884(longlong param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  void *pvVar3;
  undefined *puVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  size_t sVar8;
  undefined2 *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  bool bVar15;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  puVar4 = PTR_DAT_14c764f40;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (PTR_DAT_14c764f40 == (undefined *)0x0) {
    sVar8 = 0;
  }
  else {
    sVar8 = wcslen((wchar_t *)PTR_DAT_14c764f40);
  }
  cVar5 = FUN_144a38768(param_2,puVar4,sVar8,1);
  if (cVar5 != '\0') {
    iVar7 = 0;
    if (*(int *)(param_2 + 1) == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    else {
      puVar9 = (undefined2 *)*param_2;
      iVar7 = *(int *)(param_2 + 1) + -1;
    }
    iVar12 = 1;
    if (1 < iVar7) {
      iVar12 = iVar7;
    }
    FUN_14006620a(&local_40,puVar9,iVar12 + -1);
    lVar10 = FUN_1491b2884(param_1,&local_40);
    goto LAB_1491b2a62;
  }
  local_60 = (void *)0x0;
  local_58 = *(int *)(param_2 + 1);
  lVar10 = (longlong)local_58;
  pvVar3 = (void *)*param_2;
  if (lVar10 == 0) {
    local_54 = 0;
    local_48 = 0;
LAB_1491b296d:
    local_50 = (void *)0x0;
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_60,local_58,0);
    memcpy(local_60,pvVar3,lVar10 * 2);
    pvVar3 = local_60;
    lVar10 = (longlong)local_58;
    local_50 = (void *)0x0;
    local_48 = local_58;
    if (lVar10 == 0) goto LAB_1491b296d;
    FUN_1446dd670(&local_50,local_58,0);
    memcpy(local_50,pvVar3,lVar10 * 2);
  }
  if ((longlong)*(int *)(param_1 + 0xad8) != 0) {
    lVar10 = *(longlong *)(param_1 + 0xad0);
    lVar11 = (longlong)*(int *)(param_1 + 0xad8) * 0x88 + lVar10;
    do {
      FUN_1491b27f6(lVar10,&local_40);
      if (local_38 == local_48) {
        bVar15 = true;
        if (1 < local_38) {
          lVar13 = 0;
          while( true ) {
            uVar1 = *(ushort *)((longlong)local_40 + lVar13);
            uVar6 = (uint)uVar1;
            uVar2 = *(ushort *)((longlong)local_50 + lVar13);
            uVar14 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1491b29e6;
              }
              iVar7 = uVar6 - uVar14;
              goto LAB_1491b2a44;
            }
            if (uVar1 == 0) break;
LAB_1491b29e6:
            lVar13 = lVar13 + 2;
          }
          iVar7 = 0;
LAB_1491b2a44:
          bVar15 = iVar7 == 0;
        }
      }
      else {
        bVar15 = local_48 + local_38 == 1;
      }
      if (local_40 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (bVar15) goto LAB_1491b2a4e;
      lVar10 = lVar10 + 0x88;
    } while (lVar10 != lVar11);
  }
  lVar10 = 0;
LAB_1491b2a4e:
  local_40 = local_60;
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
    local_40 = local_60;
  }
LAB_1491b2a62:
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b2ae6 FUN_1491b2ae6 body=75 status=ok
// SIG undefined FUN_1491b2ae6(void)

longlong * FUN_1491b2ae6(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1491b2b32();
  if (lVar1 != 0) {
    FUN_1491d2dc4(lVar1,param_2);
    if (1 < (int)param_2[1]) {
      return param_2;
    }
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400021e4(param_1,param_2);
  return param_2;
}



// FUNCTION 1491b2b32 FUN_1491b2b32 body=198 status=ok
// SIG undefined FUN_1491b2b32(void)

undefined8 FUN_1491b2b32(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 8);
  if ((lVar2 == 0) || ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0)) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    uVar1 = FUN_1401242c6();
    lVar2 = FUN_144a78ede(lVar2,uVar1);
    if (lVar2 != 0) {
      lVar3 = FUN_145b9ea06();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        uVar1 = FUN_1491b2d40(lVar2);
        FUN_1491b27f6(param_1,local_30);
        uVar1 = FUN_1491d324c(uVar1,local_30);
        if (local_30[0] != 0) {
          FUN_1400020a8();
        }
        goto LAB_1491b2bd7;
      }
    }
  }
  uVar1 = 0;
LAB_1491b2bd7:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b2bfa FUN_1491b2bfa body=119 status=ok
// SIG undefined FUN_1491b2bfa(void)

undefined8 FUN_1491b2bfa(undefined8 param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1491b27f6(param_1,&local_28);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,&DAT_14a7b7b20,puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1491b2c72 FUN_1491b2c72 body=85 status=ok
// SIG undefined FUN_1491b2c72(void)

void FUN_1491b2c72(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 == 0) || ((*(uint *)(lVar1 + 8) >> 0x1e & 1) != 0)) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else if (lVar1 != param_2) {
    FUN_1491b2cc8();
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 8) = param_2;
  return;
}



// FUNCTION 1491b2cc8 FUN_1491b2cc8 body=119 status=ok
// SIG undefined FUN_1491b2cc8(void)

void FUN_1491b2cc8(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = 0;
    (**(code **)(*param_1 + 0x170))(param_1,0,DAT_14c951640,0x34);
    FUN_144757f48(param_1,0x40000000);
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    do {
      uVar1 = *(uint *)(lVar2 + 8);
      if ((uVar1 >> 0x15 & 1) != 0) {
        return;
      }
      LOCK();
      bVar3 = uVar1 == *(uint *)(lVar2 + 8);
      if (bVar3) {
        *(uint *)(lVar2 + 8) = uVar1 | 0x200000;
      }
      UNLOCK();
    } while (!bVar3);
  }
  return;
}



// FUNCTION 1491b2d40 FUN_1491b2d40 body=68 status=ok
// SIG undefined FUN_1491b2d40(void)

longlong FUN_1491b2d40(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 8);
  while ((uVar2 & 0x10) == 0) {
    plVar1 = *(longlong **)(param_1 + 0x10);
    param_1 = plVar1[0x22];
    if (param_1 == 0) {
      (**(code **)(*plVar1 + 1000))(plVar1);
      param_1 = plVar1[0x22];
    }
    uVar2 = *(uint *)(param_1 + 8);
  }
  return param_1 + 0xb08;
}



// FUNCTION 1491b2d84 FUN_1491b2d84 body=130 status=ok
// SIG undefined FUN_1491b2d84(void)

longlong FUN_1491b2d84(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (1 < *(int *)(param_1 + 0x18)) {
    lVar2 = *(longlong *)(param_1 + 8);
    if ((lVar2 == 0) || ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0)) {
      *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
      uVar1 = FUN_1401242c6();
      lVar2 = FUN_144a78ede(lVar2,uVar1);
      if (lVar2 != 0) {
        lVar3 = FUN_145b9ea06();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          lVar2 = FUN_1491b2884(lVar2,param_1 + 0x10);
          return lVar2;
        }
      }
    }
    param_1 = 0;
  }
  return param_1;
}



// FUNCTION 1491b2e06 FUN_1491b2e06 body=284 status=ok
// SIG undefined FUN_1491b2e06(void)

longlong FUN_1491b2e06(longlong param_1)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (1 < *(int *)(param_1 + 0x18)) {
    lVar2 = *(longlong *)(param_1 + 8);
    if ((lVar2 == 0) || ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0)) {
      *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
      uVar1 = FUN_1401242c6();
      lVar2 = FUN_144a78ede(lVar2,uVar1);
      if (lVar2 != 0) {
        lVar3 = FUN_145b9ea06();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          local_40 = (void *)0x0;
          local_38 = *(int *)(param_1 + 0x18);
          lVar3 = (longlong)local_38;
          _Src = *(void **)(param_1 + 0x10);
          if (lVar3 == 0) {
            local_34 = 0;
          }
          else {
            FUN_1446dd670(&local_40,local_38,0);
            memcpy(local_40,_Src,lVar3 * 2);
          }
          FUN_1491d31c2(param_1 + 0x10,&local_40,0,0);
          param_1 = FUN_1491b2884(lVar2,&local_40);
          if (local_40 != (void *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_1491b2ea6;
        }
      }
    }
    param_1 = 0;
  }
LAB_1491b2ea6:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b2f24 FUN_1491b2f24 body=475 status=ok
// SIG undefined FUN_1491b2f24(void)

longlong FUN_1491b2f24(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  int local_70;
  longlong *local_68;
  int local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar7 = *(longlong *)(param_1 + 0x80);
  if (lVar7 == 0) {
    lVar7 = *(longlong *)(param_1 + 8);
    if ((lVar7 == 0) || ((*(uint *)(lVar7 + 8) >> 0x1e & 1) != 0)) {
      *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
      lVar4 = (**(code **)(*(longlong *)(lVar7 + 0x280) + 0x10))(lVar7 + 0x280);
      if (lVar4 != 0) {
        FUN_1491b27f6(param_1,&local_58);
        lVar7 = 0;
        FUN_149192bd8(lVar4,&local_68,0);
        if ((longlong)local_60 != 0) {
          plVar1 = local_68 + local_60;
          plVar11 = local_68;
          do {
            lVar2 = *plVar11;
            if (*(char *)(lVar2 + 0x58) == '\0') {
              local_88 = *(undefined8 *)(lVar2 + 0x10);
              local_80 = *(undefined4 *)(lVar2 + 0x18);
              FUN_1491d2f64(lVar4,&local_78);
              bVar3 = true;
              if (1 < local_70) {
                if (local_70 == local_50) {
                  lVar8 = 0;
                  while( true ) {
                    uVar5 = *(ushort *)(local_78 + lVar8);
                    uVar6 = (ulonglong)uVar5;
                    uVar9 = *(ushort *)(local_58 + lVar8);
                    if (uVar5 != uVar9) break;
                    if (uVar5 == 0) goto LAB_1491b30a7;
LAB_1491b3073:
                    lVar8 = lVar8 + 2;
                  }
                  if ((uVar9 | uVar5) < 0x80) {
                    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
                    uVar10 = (ulonglong)uVar9;
                    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
                    if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar10]) goto LAB_1491b3073;
                  }
                  if (uVar5 != uVar9) goto LAB_1491b3034;
                }
                else if (local_50 + local_70 != 1) goto LAB_1491b3034;
LAB_1491b30a7:
                *(longlong *)(param_1 + 0x80) = lVar2;
                bVar3 = false;
                lVar7 = lVar2;
              }
LAB_1491b3034:
              if (local_78 != 0) {
                FUN_1400020a8();
              }
              if (!bVar3) goto LAB_1491b30ce;
            }
            plVar11 = plVar11 + 1;
          } while (plVar11 != plVar1);
          lVar7 = 0;
        }
LAB_1491b30ce:
        if (local_68 != (longlong *)0x0) {
          FUN_1400020a8(local_68);
        }
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        goto LAB_1491b2f4f;
      }
    }
    lVar7 = 0;
  }
LAB_1491b2f4f:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
}



// FUNCTION 1491b3100 FUN_1491b3100 body=63 status=ok
// SIG undefined FUN_1491b3100(void)

void FUN_1491b3100(longlong param_1,longlong param_2)

{
  FUN_14919d820();
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    return;
  }
  FUN_14606ee6c(param_1 + 0xb08);
  FUN_14606ec40(param_1 + 0xb38);
  return;
}



// FUNCTION 1491b3140 FUN_1491b3140 body=85 status=ok
// SIG undefined FUN_1491b3140(void)

void FUN_1491b3140(longlong param_1)

{
  FUN_145e2d75e();
  FUN_14606ee6c(param_1 + 0xb08);
  FUN_14606ec40(param_1 + 0xb38);
  if (*(int *)(param_1 + 0xc28) == *(int *)(param_1 + 0xc54)) {
    return;
  }
  FUN_1491d1d94(param_1 + 0xc20);
  FUN_1491d1ed8(param_1 + 0xc20);
  return;
}



// FUNCTION 1491b3196 FUN_1491b3196 body=94 status=ok
// SIG undefined FUN_1491b3196(void)

void FUN_1491b3196(undefined8 param_1,undefined1 param_2)

{
  undefined1 auStack_58 [47];
  undefined1 local_29;
  code *local_28;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1413ec328();
  local_20 = &local_29;
  local_28 = FUN_144497fe8;
  local_29 = param_2;
  FUN_1491b31f6(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b31f6 FUN_1491b31f6 body=312 status=ok
// SIG undefined FUN_1491b31f6(void)

void FUN_1491b31f6(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  void *_Src;
  longlong lVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  int local_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_1 + 0xae8);
  lVar7 = (longlong)local_50;
  _Src = *(void **)(param_1 + 0xae0);
  if (lVar7 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1491910d0(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar7 << 3);
    if (0 < local_50) {
      lVar7 = 0;
      do {
        local_48 = *(undefined8 *)((longlong)local_58 + lVar7 * 8);
        cVar4 = (*(code *)*param_2)(param_2[1],&local_48);
        iVar3 = local_50;
        if (cVar4 == '\0') break;
        lVar2 = *(longlong *)((longlong)local_58 + lVar7 * 8);
        uVar1 = *(uint *)(lVar2 + 0x78);
        if ((longlong)(int)uVar1 != 0) {
          lVar8 = (longlong)local_50;
          iVar5 = local_50 + uVar1;
          uVar6 = local_4c - local_50;
          local_50 = iVar5;
          if (uVar6 < uVar1) {
            FUN_1491d1288(&local_58,iVar3);
          }
          memcpy((void *)((longlong)local_58 + lVar8 * 8),*(void **)(lVar2 + 0x70),
                 (longlong)(int)uVar1 << 3);
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < local_50);
    }
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491b3330 FUN_1491b3330 body=109 status=ok
// SIG undefined FUN_1491b3330(void)

undefined8 FUN_1491b3330(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  code *local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1459b489e();
  FUN_1491b339e(param_1);
  local_30 = *param_2;
  local_20 = &local_30;
  local_28 = FUN_144498022;
  FUN_1491b31f6(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b339e FUN_1491b339e body=755 status=ok
// SIG undefined FUN_1491b339e(void)

void FUN_1491b339e(longlong **param_1)

{
  longlong **pplVar1;
  longlong **pplVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_1a8 [40];
  code *local_180;
  undefined8 ***local_178;
  longlong local_170;
  longlong *local_168;
  longlong **local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 local_144 [4];
  longlong **local_140;
  undefined8 local_138;
  longlong **local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  code *local_88 [2];
  undefined8 *local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (((ulonglong)param_1[1] & 0x10) == 0) {
    if ((longlong)*(int *)(param_1 + 0x15b) != 0) {
      plVar9 = param_1[0x15a];
      lVar10 = (longlong)*(int *)(param_1 + 0x15b) * 0x88;
      do {
        lVar3 = plVar9[1];
        if ((lVar3 == 0) || ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0)) {
          plVar9[1] = 0;
        }
        else {
          local_170 = lVar3;
          if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0) {
            FUN_1491b27f6(plVar9,&local_168);
            local_140 = &local_168;
            local_138 = &local_170;
            FUN_1491d0154(param_1 + 0x17a,local_144,&local_140);
            if (local_168 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
        }
        plVar9 = plVar9 + 0x11;
        lVar10 = lVar10 + -0x88;
      } while (lVar10 != 0);
    }
    FUN_1491b36ac(param_1);
    uVar6 = FUN_1491b2d40(param_1);
    local_140 = param_1;
    FUN_1491b37d2(&local_138,uVar6);
    local_88[0] = (code *)0x0;
    puVar7 = (undefined8 *)FUN_14001cc68(0xc0,8);
    *puVar7 = &PTR_FUN_14bb76d60;
    puVar7[1] = local_140;
    local_78 = puVar7;
    FUN_1491b37d2(puVar7 + 2,&local_138);
    if (puVar7 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_88[0] = FUN_14449805e;
    }
    FUN_14606ecf0(uVar6,local_88);
    FUN_145d30558(&local_138);
    pplVar1 = param_1 + 0x17a;
    pplVar2 = param_1 + 0x17c;
    local_168 = (longlong *)&DAT_100000000;
    local_158 = 0xffffffff;
    local_150 = 0;
    iVar8 = 0;
    local_160 = pplVar2;
    if (*(int *)(param_1 + 0x17f) != 0) {
      FUN_1449c0562(&local_168);
      iVar8 = *(int *)(param_1 + 0x17f);
    }
    local_128 = local_158;
    uVar4 = local_128;
    local_120 = local_150;
    local_11c = local_14c;
    local_138 = local_168;
    local_130 = local_160;
    local_128._4_4_ = (int)((ulonglong)local_158 >> 0x20);
    iVar5 = local_128._4_4_;
    local_140 = pplVar1;
    if ((local_128._4_4_ != iVar8) || (local_128 = uVar4, local_160 != pplVar2)) {
      do {
        local_128 = uVar4;
        FUN_1491b2cc8((*local_140)[(longlong)iVar5 * 4 + 2]);
        local_128 = CONCAT44(local_128._4_4_,(uint)local_128 & ~local_138._4_4_);
        FUN_1449c0562(&local_138);
        iVar5 = local_128._4_4_;
        uVar4 = local_128;
      } while (local_140 != pplVar1 || (local_130 != pplVar2 || local_128._4_4_ != iVar8));
    }
    if (*(int *)(param_1 + 0x17b) != *(int *)((longlong)param_1 + 0xc04)) {
      FUN_1491d0766(pplVar1);
      FUN_1491d08aa(pplVar1);
    }
    local_140 = param_1;
    FUN_1491b37d2(&local_138,uVar6);
    local_178 = &local_140;
    local_180 = FUN_1444991f6;
    FUN_1491b31f6(param_1);
    FUN_145d30558(&local_138);
    FUN_1491b3874(param_1);
    FUN_14606ebaa(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b3692 FUN_1491b3692 body=26 status=ok
// SIG undefined FUN_1491b3692(void)

void FUN_1491b3692(undefined8 param_1)

{
  FUN_14576c9ec();
  FUN_1491b339e(param_1);
  return;
}



// FUNCTION 1491b36ac FUN_1491b36ac body=293 status=ok
// SIG undefined FUN_1491b36ac(void)

void FUN_1491b36ac(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0xad8) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0xad8) * 0x88;
    lVar3 = *(longlong *)(param_1 + 0xad0) + 0x70;
    do {
      if (*(int *)(lVar3 + 0xc) < 0) {
        *(undefined4 *)(lVar3 + 8) = 0;
        FUN_1491d0c58(lVar3);
      }
      else {
        *(undefined4 *)(lVar3 + 8) = 0;
      }
      lVar3 = lVar3 + 0x88;
      lVar2 = lVar2 + -0x88;
    } while (lVar2 != 0);
  }
  if (*(int *)(param_1 + 0xaec) < 0) {
    *(undefined4 *)(param_1 + 0xae8) = 0;
    FUN_1491d0c58(param_1 + 0xae0);
  }
  else {
    *(undefined4 *)(param_1 + 0xae8) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xadc);
  FUN_145d30494(*(undefined8 *)(param_1 + 0xad0),*(undefined4 *)(param_1 + 0xad8));
  *(undefined4 *)(param_1 + 0xad8) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0xadc) != 0)) {
    FUN_1491d0c88(param_1 + 0xad0);
  }
  if (*(int *)(param_1 + 0xafc) < 0) {
    *(undefined4 *)(param_1 + 0xaf8) = 0;
    FUN_1402191ca(param_1 + 0xaf0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xaf8) = 0;
  }
  if (*(int *)(param_1 + 0xc28) != *(int *)(param_1 + 0xc54)) {
    FUN_1491d1d94(param_1 + 0xc20);
    FUN_1491d1ed8(param_1 + 0xc20);
    return;
  }
  return;
}



// FUNCTION 1491b37d2 FUN_1491b37d2 body=162 status=ok
// SIG undefined FUN_1491b37d2(void)

undefined8 * FUN_1491b37d2(undefined8 *param_1,longlong param_2)

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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_1491c5890(param_1);
  FUN_1491c5c28(param_1 + 6,param_2 + 0x30);
  FUN_1491c5cf6(param_1 + 8,param_2 + 0x40);
  FUN_14606ee6c(param_1);
  FUN_14606ec40(param_1 + 6);
  return param_1;
}



// FUNCTION 1491b3874 FUN_1491b3874 body=594 status=ok
// SIG undefined FUN_1491b3874(void)

void FUN_1491b3874(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  longlong local_c8 [2];
  longlong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined1 local_9c [4];
  longlong local_98 [4];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  if ((longlong)*(int *)(param_1 + 0xad8) != 0) {
    lVar7 = (longlong)*(int *)(param_1 + 0xad8) * 0x88;
    lVar5 = *(longlong *)(param_1 + 0xad0) + 0x70;
    do {
      if (*(int *)(lVar5 + 0xc) < 0) {
        *(undefined4 *)(lVar5 + 8) = 0;
        FUN_1491d0c58(lVar5);
      }
      else {
        *(undefined4 *)(lVar5 + 8) = 0;
      }
      local_b8 = lVar5 + -0x70;
      FUN_1491b27f6(local_b8,local_c8);
      local_b0 = local_c8;
      local_a8 = &local_b8;
      FUN_1491d0cb8(local_98,local_9c,&local_b0);
      if (local_c8[0] != 0) {
        FUN_1400020a8();
      }
      lVar5 = lVar5 + 0x88;
      lVar7 = lVar7 + -0x88;
    } while (lVar7 != 0);
  }
  plVar1 = (longlong *)(param_1 + 0xae0);
  *(undefined4 *)(param_1 + 0xae8) = 0;
  if (*(int *)(param_1 + 0xaec) < 0) {
    FUN_1491d0c58(plVar1);
  }
  if ((longlong)*(int *)(param_1 + 0xad8) != 0) {
    lVar7 = (longlong)*(int *)(param_1 + 0xad8) * 0x88;
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0xad0) + 0x10);
    do {
      if (*(int *)(puVar4 + 1) < 2) {
        iVar3 = *(int *)(param_1 + 0xae8);
        *(uint *)(param_1 + 0xae8) = iVar3 + 1U;
        plVar6 = plVar1;
        if (*(uint *)(param_1 + 0xaec) < iVar3 + 1U) {
          FUN_1491d1288(plVar1,iVar3);
        }
LAB_1491b3a39:
        *(undefined8 **)(*plVar6 + (longlong)iVar3 * 8) = puVar4 + -2;
      }
      else {
        uVar2 = FUN_144a49b4a(*(int *)(puVar4 + 1) + -1,*puVar4);
        iVar3 = FUN_1491d0f6c(local_98,uVar2,puVar4);
        lVar5 = (longlong)iVar3 * 0x20 + local_98[0];
        if (lVar5 != 0 && iVar3 != -1) {
          lVar5 = *(longlong *)(lVar5 + 0x10);
          plVar6 = (longlong *)(lVar5 + 0x70);
          iVar3 = *(int *)(lVar5 + 0x78);
          *(uint *)(lVar5 + 0x78) = iVar3 + 1U;
          if (*(uint *)(lVar5 + 0x7c) < iVar3 + 1U) {
            FUN_1491d1288(plVar6,iVar3);
          }
          goto LAB_1491b3a39;
        }
      }
      puVar4 = puVar4 + 0x11;
      lVar7 = lVar7 + -0x88;
    } while (lVar7 != 0);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1491c5f6a(local_98);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491b3ac8 FUN_1491b3ac8 body=208 status=ok
// SIG undefined FUN_1491b3ac8(void)

bool FUN_1491b3ac8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [24];
  longlong local_88;
  undefined1 local_78 [72];
  code *local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 != 0) {
    lVar2 = FUN_1403fefe0(*(undefined8 *)(param_1 + 0x150));
    local_a8 = *(undefined8 *)(param_1 + 0x2f8);
    local_b8 = param_2;
    local_b0 = param_1;
    FUN_1491b3b9a(local_a0,lVar2 + 0x140);
    local_28 = &local_b8;
    local_30 = FUN_1444992d4;
    FUN_1491b31f6(param_1);
    FUN_1491c057c(local_78);
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    FUN_1491b3c20(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b3b9a FUN_1491b3b9a body=133 status=ok
// SIG undefined FUN_1491b3b9a(void)

undefined4 * FUN_1491b3b9a(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined8 *)((longlong)param_1 + 0xd) = *(undefined8 *)((longlong)param_2 + 0xd);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *(undefined8 *)(param_1 + 6) = 0;
  iVar1 = param_2[8];
  _Src = *(void **)(param_2 + 6);
  param_1[8] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_149192186(param_1 + 6,iVar1,0);
    memcpy(*(void **)(param_1 + 6),_Src,(longlong)iVar1 * 0xc);
  }
  FUN_1491c5ea2(param_1 + 10,param_2 + 10);
  return param_1;
}



// FUNCTION 1491b3c20 FUN_1491b3c20 body=2770 status=ok
// SIG undefined FUN_1491b3c20(void)

void FUN_1491b3c20(longlong param_1)

{
  longlong **pplVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  ushort uVar5;
  ushort uVar6;
  longlong lVar7;
  longlong *plVar8;
  void *pvVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  char cVar14;
  undefined1 uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  undefined8 uVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong lVar23;
  longlong *plVar24;
  longlong **pplVar25;
  longlong *plVar26;
  undefined8 *puVar27;
  undefined2 *puVar28;
  uint uVar29;
  longlong lVar30;
  bool bVar31;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  longlong *local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  LPCRITICAL_SECTION local_170;
  undefined8 local_168;
  undefined8 local_160;
  longlong local_158;
  longlong local_150;
  undefined8 *local_148;
  longlong *local_140;
  longlong **local_138;
  longlong local_130;
  longlong local_128;
  longlong *local_120;
  longlong **local_118;
  undefined8 uStack_110;
  longlong **local_108;
  undefined8 uStack_100;
  longlong **pplStack_f8;
  void *local_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  longlong *plStack_c8;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  longlong local_a8;
  void *local_a0;
  int local_98;
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar19 = FUN_1403fefe0(*(undefined8 *)(param_1 + 0x150));
  uVar17 = *(uint *)(param_1 + 0xbc8);
  if (-1 < (int)uVar17) {
    local_180 = *(longlong *)(param_1 + 0x2f8);
    local_170 = (LPCRITICAL_SECTION)(local_180 + 0x530);
    lVar23 = lVar19 + 0x158;
    lVar30 = lVar19 + 0x168;
    local_120 = (longlong *)(lVar19 + 0x70);
    local_128 = lVar19 + 0x120;
    do {
      if (*(int *)(param_1 + 0xbc0) <= (int)uVar17) break;
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 3000) + 0x10 + (ulonglong)uVar17 * 0x28);
      if (lVar7 == 0) {
LAB_1491b3f03:
        uVar17 = *(int *)(param_1 + 0xbc8) + 1;
        *(uint *)(param_1 + 0xbc8) = uVar17;
      }
      else {
        plVar8 = *(longlong **)(lVar7 + 8);
        if ((plVar8 == (longlong *)0x0) || ((*(uint *)(plVar8 + 1) >> 0x1e & 1) != 0)) {
          *(undefined8 *)(lVar7 + 8) = 0;
          goto LAB_1491b3f03;
        }
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 3000) + (ulonglong)uVar17 * 0x28);
        cVar14 = (**(code **)(*plVar8 + 0x2f8))(plVar8,puVar2 + 3);
        if (cVar14 == '\0') goto LAB_1491b3f03;
        local_148 = puVar2 + 3;
        uVar20 = (**(code **)(*plVar8 + 0x380))(plVar8);
        lVar12 = local_180;
        local_158 = plVar8[0x5f];
        local_160 = *(undefined8 *)(local_158 + 0x570);
        *(undefined8 *)(local_158 + 0x570) = uVar20;
        lVar7 = plVar8[0x2a];
        local_168 = *(undefined8 *)(local_180 + 0x558);
        local_178 = lVar30;
        EnterCriticalSection(local_170);
        *(longlong *)(lVar12 + 0x558) = lVar7;
        plVar21 = (longlong *)FUN_1403fefe0(lVar7);
        uVar4 = *(undefined4 *)(lVar19 + 0x144);
        uVar10 = *(undefined4 *)(lVar19 + 0x148);
        uVar11 = *(undefined4 *)(lVar19 + 0x14c);
        *(undefined4 *)(plVar21 + 0x28) = *(undefined4 *)(lVar19 + 0x140);
        *(undefined4 *)((longlong)plVar21 + 0x144) = uVar4;
        *(undefined4 *)(plVar21 + 0x29) = uVar10;
        *(undefined4 *)((longlong)plVar21 + 0x14c) = uVar11;
        *(undefined8 *)((longlong)plVar21 + 0x14d) = *(undefined8 *)(lVar19 + 0x14d);
        local_138 = (longlong **)(plVar21 + 0x2b);
        local_150 = lVar23;
        FUN_1444888de(local_138,lVar23);
        local_140 = plVar21 + 0x2d;
        FUN_1491b47dc(local_140,local_178);
        plVar21[0xb] = *(longlong *)(lVar19 + 0x58);
        plVar21[0xc] = *(longlong *)(lVar19 + 0x60);
        plVar21[0x3b] = puVar2[2];
        plVar21[5] = *(longlong *)(lVar19 + 0x28);
        plVar21[4] = *(longlong *)(lVar19 + 0x20);
        plVar21[0x1c] = *(longlong *)(lVar19 + 0xe0);
        lVar23 = *(longlong *)(lVar19 + 0xd8);
        plVar21[0x1b] = lVar23;
        plVar21[0x1c] = 0;
        local_190 = plVar21;
        if (lVar23 != 0) {
          lVar23 = FUN_1447210f0();
          plVar21[0x1c] = lVar23;
        }
        local_130 = lVar19 + 0x130;
        local_188 = lVar19 + 0x38;
        FUN_141905f9a(plVar21,*(undefined8 *)(lVar19 + 0xd0));
        plVar22 = local_190;
        plVar21[6] = *(longlong *)(lVar19 + 0x30);
        plVar24 = local_120;
        plVar26 = local_190 + 0xe;
        for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
          *plVar26 = *plVar24;
          plVar24 = plVar24 + 1;
          plVar26 = plVar26 + 1;
        }
        local_198 = plVar21;
        FUN_1491d0b20(local_190 + 0x24,local_128);
        FUN_1491d0ba4(plVar22 + 0x26,local_130);
        FUN_14591e93c(plVar22 + 7,local_188);
        cVar14 = (**(code **)(*plVar8 + 0x310))(plVar8);
        if (cVar14 == '\0') {
LAB_1491b4383:
          puVar28 = &DAT_149dfb77a;
          if (*(int *)(puVar2 + 1) != 0) {
            puVar28 = (undefined2 *)*puVar2;
          }
          FUN_140002266(&local_a0,&DAT_14a7b7b20,puVar28);
          pvVar9 = local_a0;
          local_b8 = (void *)0x0;
          lVar23 = (longlong)local_98;
          local_b0 = local_98;
          if (lVar23 == 0) {
            local_ac = 0;
          }
          else {
            FUN_1446dd670(&local_b8,local_98,0);
            memcpy(local_b8,pvVar9,lVar23 * 2);
          }
          local_a8 = local_180;
          local_e8 = (longlong *)0x0;
          uStack_e0 = (longlong **)0x0;
          if ((longlong)(int)local_198[0x2c] != 0) {
            puVar27 = (undefined8 *)local_198[0x2b];
            puVar3 = (undefined8 *)((longlong)puVar27 + (longlong)(int)local_198[0x2c] * 0xc);
            do {
              local_90 = *puVar27;
              local_88 = *(undefined4 *)(puVar27 + 1);
              FUN_1491da198(local_a8,&local_118);
              if (local_b0 == (int)uStack_110) {
                bVar31 = true;
                if (1 < local_b0) {
                  lVar23 = 0;
                  while( true ) {
                    uVar5 = *(ushort *)((longlong)local_b8 + lVar23);
                    uVar17 = (uint)uVar5;
                    uVar6 = *(ushort *)((longlong)local_118 + lVar23);
                    uVar29 = (uint)uVar6;
                    if (uVar5 != uVar6) {
                      if ((uVar6 | uVar5) < 0x80) {
                        uVar17 = (uint)(byte)(&DAT_149e05da0)[uVar5];
                        uVar29 = (uint)(byte)(&DAT_149e05da0)[uVar6];
                        if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar6]) goto LAB_1491b40c7;
                      }
                      iVar18 = uVar17 - uVar29;
                      goto LAB_1491b4177;
                    }
                    if (uVar5 == 0) break;
LAB_1491b40c7:
                    lVar23 = lVar23 + 2;
                  }
                  iVar18 = 0;
LAB_1491b4177:
                  bVar31 = iVar18 == 0;
                }
              }
              else {
                bVar31 = (int)uStack_110 + local_b0 == 1;
              }
              if (local_118 != (longlong **)0x0) {
                FUN_1400020a8();
              }
              uVar13 = (ulonglong)uStack_e0;
              if (bVar31) {
                lVar23 = (longlong)(int)uStack_e0;
                uVar17 = (int)uStack_e0 + 1;
                uStack_e0 = (longlong **)CONCAT44(uStack_e0._4_4_,uVar17);
                if (uStack_e0._4_4_ < uVar17) {
                  FUN_149192788(&local_e8,uVar13 & 0xffffffff);
                }
                *(undefined4 *)((longlong)local_e8 + lVar23 * 0xc + 8) =
                     *(undefined4 *)(puVar27 + 1);
                *(undefined8 *)((longlong)local_e8 + lVar23 * 0xc) = *puVar27;
              }
              puVar27 = (undefined8 *)((longlong)puVar27 + 0xc);
            } while (puVar27 != puVar3);
          }
          if (local_b8 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (local_138 == &local_e8) {
            if (local_e8 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            if (local_198[0x2b] != 0) {
              FUN_1400020a8();
            }
            local_198[0x2b] = (longlong)local_e8;
            local_e8 = (longlong *)0x0;
            *(int *)(local_198 + 0x2c) = (int)uStack_e0;
            *(uint *)((longlong)local_198 + 0x164) = uStack_e0._4_4_;
          }
          uVar15 = 0;
          if ((int)local_198[0x2c] != 0) {
            uVar15 = (undefined1)*(undefined4 *)((longlong)local_198 + 0x154);
          }
          *(undefined1 *)((longlong)local_198 + 0x154) = uVar15;
          local_190 = local_190 + 0x22;
          *(undefined4 *)(local_198 + 0x23) = 0;
          local_188 = lVar19;
          if (*(int *)((longlong)local_198 + 0x11c) < 0) {
            FUN_1491cb09e(local_190);
          }
          plVar22 = (longlong *)(**(code **)(plVar8[5] + 0x30))(plVar8 + 5);
          plVar21 = local_190;
          if ((plVar22 != (longlong *)0x0) && (lVar19 = plVar22[1], (longlong)(int)lVar19 != 0)) {
            lVar23 = *plVar22;
            lVar30 = 0;
            plVar22 = local_198;
            do {
              uVar20 = *(undefined8 *)(lVar23 + lVar30);
              iVar18 = (int)plVar22[0x23];
              *(uint *)(plVar22 + 0x23) = iVar18 + 1U;
              if (*(uint *)((longlong)plVar22 + 0x11c) < iVar18 + 1U) {
                FUN_1466cc8ae(local_190,iVar18);
                plVar21 = local_190;
                plVar22 = local_198;
              }
              *(undefined8 *)(*plVar21 + (longlong)iVar18 * 8) = uVar20;
              lVar30 = lVar30 + 8;
            } while ((longlong)(int)lVar19 << 3 != lVar30);
          }
          local_e8 = (longlong *)0x0;
          local_118 = &local_e8;
          FUN_1444955ba(plVar21,&local_118);
          lVar23 = puVar2[2];
          plVar21 = (longlong *)(lVar23 + 0x30);
          local_118 = (longlong **)&DAT_100000000;
          local_108 = (longlong **)&DAT_ffffffff;
          uStack_100 = (longlong *)((ulonglong)uStack_100 & 0xffffffff00000000);
          uStack_110 = plVar21;
          if (*(int *)(lVar23 + 0x48) == 0) {
            iVar18 = 0;
          }
          else {
            FUN_1449c0562(&local_118);
            iVar18 = *(int *)(lVar23 + 0x48);
          }
          lVar19 = local_188;
          plVar22 = (longlong *)(lVar23 + 0x20);
          plStack_c8 = uStack_100;
          uStack_d0 = local_108;
          pplVar1 = uStack_d0;
          uStack_e0 = local_118;
          local_d8 = uStack_110;
          uStack_d0._4_4_ = (int)((ulonglong)local_108 >> 0x20);
          iVar16 = uStack_d0._4_4_;
          local_e8 = plVar22;
          if ((uStack_d0._4_4_ != iVar18) || (uStack_d0 = pplVar1, uStack_110 != plVar21)) {
            do {
              uStack_d0 = pplVar1;
              lVar30 = (longlong)iVar16 * 0x40 + *local_e8;
              lVar23 = *(longlong *)(puVar2[2] + 8);
              if ((lVar23 == 0) || ((*(uint *)(lVar23 + 8) >> 0x1e & 1) != 0)) {
                *(undefined8 *)(puVar2[2] + 8) = 0;
                lVar23 = 0;
              }
              FUN_1409a6968(lVar23,&local_118,lVar30);
              if (((uStack_110 != (longlong *)0x0) &&
                  (cVar14 = FUN_14448ccc2(*(undefined8 *)(lVar30 + 0x10)), cVar14 != '\0')) &&
                 (pvVar9 = *(void **)(lVar30 + 0x30), local_f0 != pvVar9)) {
                plVar24 = *(longlong **)(lVar30 + 0x10);
                if ((*(byte *)((longlong)plVar24 + 0x3b) & 0x40) == 0) {
                  (**(code **)(*plVar24 + 0x100))(plVar24,local_f0,pvVar9,(int)plVar24[6]);
                }
                else {
                  memcpy(local_f0,pvVar9,
                         (longlong)(int)plVar24[6] * (longlong)*(int *)((longlong)plVar24 + 0x34));
                }
              }
              uStack_d0 = (longlong **)CONCAT44(uStack_d0._4_4_,(uint)uStack_d0 & ~uStack_e0._4_4_);
              FUN_1449c0562(&uStack_e0);
              iVar16 = uStack_d0._4_4_;
              pplVar1 = uStack_d0;
            } while (local_e8 != plVar22 || (local_d8 != plVar21 || uStack_d0._4_4_ != iVar18));
          }
          (**(code **)(*plVar8 + 0x2f0))(plVar8,local_148);
          *(undefined1 *)(puVar2 + 4) = 1;
          cVar14 = FUN_1403f35db(puVar2[3],&DAT_14cc074c8);
          lVar30 = local_178;
          if (cVar14 != '\0') {
            FUN_1491b47dc(local_178,local_140);
          }
          lVar23 = local_150;
          if (local_a0 != (void *)0x0) {
            FUN_1400020a8();
          }
          *(undefined8 *)(local_180 + 0x558) = local_168;
          FUN_1444a2094();
          LeaveCriticalSection(local_170);
          *(undefined8 *)(local_158 + 0x570) = local_160;
          goto LAB_1491b3f03;
        }
        uVar4 = *(undefined4 *)((longlong)plVar8 + 0x4c);
        lVar23 = plVar8[9];
        cVar14 = (**(code **)(*plVar8 + 0x2b8))(plVar8,local_148);
        if (cVar14 != '\0') {
          uVar20 = FUN_1491b2d40(param_1);
          lVar30 = FUN_1491d324c(uVar20,puVar2);
          if (lVar30 != 0) {
            pplVar1 = (longlong **)(lVar30 + 0xb8);
            local_e8 = (longlong *)&DAT_100000000;
            local_d8 = (longlong *)&DAT_ffffffff;
            uStack_d0 = (longlong **)((ulonglong)uStack_d0 & 0xffffffff00000000);
            uStack_e0 = pplVar1;
            if (*(int *)(lVar30 + 0xd0) == 0) {
              iVar18 = 0;
            }
            else {
              FUN_1449c0562(&local_e8);
              iVar18 = *(int *)(lVar30 + 0xd0);
            }
            pplVar25 = (longlong **)(lVar30 + 0xa8);
            uStack_100 = local_d8;
            plVar21 = uStack_100;
            pplStack_f8 = uStack_d0;
            uStack_110 = local_e8;
            local_108 = uStack_e0;
            uStack_100._4_4_ = (int)((ulonglong)local_d8 >> 0x20);
            iVar16 = uStack_100._4_4_;
            local_118 = pplVar25;
            if ((uStack_100._4_4_ != iVar18) || (uStack_100 = plVar21, uStack_e0 != pplVar1)) {
              do {
                uStack_100 = plVar21;
                FUN_1491716d0(plVar8,*local_118 + (longlong)iVar16 * 4,
                              *local_118 + (longlong)iVar16 * 4 + 1);
                uStack_100 = (longlong *)
                             CONCAT44(uStack_100._4_4_,(uint)uStack_100 & ~uStack_110._4_4_);
                FUN_1449c0562(&uStack_110);
                iVar16 = uStack_100._4_4_;
                plVar21 = uStack_100;
              } while (local_118 != pplVar25 || (local_108 != pplVar1 || uStack_100._4_4_ != iVar18)
                      );
            }
          }
          *(int *)(plVar8 + 9) = (int)lVar23;
          *(undefined4 *)((longlong)plVar8 + 0x4c) = uVar4;
          goto LAB_1491b4383;
        }
        *(int *)(param_1 + 0xbc8) = *(int *)(param_1 + 0xbc8) + 1;
        *(int *)(plVar8 + 9) = (int)lVar23;
        *(undefined4 *)((longlong)plVar8 + 0x4c) = uVar4;
        *(undefined8 *)(local_180 + 0x558) = local_168;
        FUN_1444a2094();
        LeaveCriticalSection(local_170);
        *(undefined8 *)(local_158 + 0x570) = local_160;
        uVar17 = *(uint *)(param_1 + 0xbc8);
        lVar23 = local_150;
        lVar30 = local_178;
      }
    } while (-1 < (int)uVar17);
  }
  if ((local_80 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491b46f4 FUN_1491b46f4 body=26 status=ok
// SIG undefined FUN_1491b46f4(void)

void FUN_1491b46f4(undefined8 param_1)

{
  FUN_1491b470e();
  FUN_1408fc17c(param_1);
  return;
}



// FUNCTION 1491b470e FUN_1491b470e body=87 status=ok
// SIG undefined FUN_1491b470e(void)

void FUN_1491b470e(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xbc4);
  FUN_145d304bf(*(undefined8 *)(param_1 + 3000),*(undefined4 *)(param_1 + 0xbc0));
  *(undefined4 *)(param_1 + 0xbc0) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0xbc4) != 0)) {
    FUN_1491d0c28(param_1 + 3000);
  }
  *(undefined4 *)(param_1 + 0xbc8) = 0;
  return;
}



// FUNCTION 1491b4766 FUN_1491b4766 body=74 status=ok
// SIG undefined FUN_1491b4766(void)

undefined1 FUN_1491b4766(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x300))();
  if ((longlong)(int)plVar1[1] != 0) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*plVar1 + lVar2) == *param_2) {
        return 1;
      }
      bVar3 = (longlong)(int)plVar1[1] * 8 + -8 != lVar2;
      lVar2 = lVar2 + 8;
    } while (bVar3);
  }
  return 0;
}



// FUNCTION 1491b47b0 FUN_1491b47b0 body=43 status=ok
// SIG undefined FUN_1491b47b0(void)

longlong FUN_1491b47b0(longlong param_1)

{
  if (*(int *)(param_1 + 0xaf8) == 0) {
    FUN_14606ebaa(param_1);
  }
  return param_1 + 0xaf0;
}



// FUNCTION 1491b47dc FUN_1491b47dc body=116 status=ok
// SIG undefined FUN_1491b47dc(void)

undefined8 * FUN_1491b47dc(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_1491b5c58(param_1 + 2,param_2 + 2);
  FUN_1491b5c58(param_1 + 4,param_2 + 4);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  plVar1 = (longlong *)param_2[7];
  plVar2 = (longlong *)param_1[7];
  if (plVar2 != plVar1) {
    param_1[7] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  return param_1;
}



// FUNCTION 1491b4850 FUN_1491b4850 body=26 status=ok
// SIG undefined FUN_1491b4850(void)

void FUN_1491b4850(undefined8 param_1)

{
  FUN_1491b486a();
  FUN_1491a0bfe(param_1);
  return;
}



// FUNCTION 1491b486a FUN_1491b486a body=2087 status=ok
// SIG undefined FUN_1491b486a(void)

void FUN_1491b486a(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  longlong **pplVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  longlong local_180;
  longlong *local_178;
  longlong **local_170;
  longlong ***ppplStack_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  longlong local_150 [2];
  longlong **local_140 [2];
  undefined8 local_130;
  undefined8 uStack_128;
  longlong **local_120;
  longlong ***ppplStack_118;
  longlong *local_110 [2];
  longlong local_100;
  undefined4 local_f8;
  longlong local_f0;
  longlong *local_e8;
  longlong *local_e0;
  int local_d8;
  undefined1 local_cc [4];
  longlong *local_c8;
  longlong ***local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (*(int *)(param_1 + 0xc28) != *(int *)(param_1 + 0xc54)) {
    FUN_1491d1d94(param_1 + 0xc20);
    FUN_1491d1ed8(param_1 + 0xc20);
  }
  uVar5 = (**(code **)(*(longlong *)(param_1 + 0x280) + 0x10))(param_1 + 0x280);
  FUN_1444a13dc(uVar5,&local_e0,0,0xff);
  if ((longlong)*(int *)(param_1 + 0xb40) != 0) {
    lVar11 = *(longlong *)(param_1 + 0xb38);
    lVar12 = lVar11 + (longlong)*(int *)(param_1 + 0xb40) * 0x18;
    do {
      FUN_149197016(&local_e0,lVar11);
      FUN_149197016(&local_e0,lVar11 + 0xc);
      lVar11 = lVar11 + 0x18;
    } while (lVar11 != lVar12);
  }
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  local_180 = param_1;
  if ((longlong)local_d8 != 0) {
    plVar15 = (longlong *)((longlong)local_e0 + (longlong)local_d8 * 0xc);
    plVar14 = local_e0;
    do {
      local_170 = (longlong **)*plVar14;
      ppplStack_168 = (longlong ***)CONCAT44(ppplStack_168._4_4_,(int)plVar14[1]);
      local_188 = 0;
      FUN_149184980(uVar5,&local_c8,&local_170,DAT_14cc063f8);
      local_110[0] = local_c8;
      if (local_c8 == (longlong *)0x0) {
        local_110[0] = *(longlong **)((longlong)plVar14 + 4);
      }
      if ((int)uStack_b0 != local_84) {
        uVar2 = (uint)((ulonglong)local_110[0] >> 0x10);
        uVar10 = (uint)local_110[0] & 0xffff;
        puVar7 = local_78;
        if (local_78 == (undefined1 *)0x0) {
          puVar7 = local_80;
        }
        iVar13 = *(int *)(puVar7 + (ulonglong)
                                   (local_70 - 1U &
                                   (int)((ulonglong)local_110[0] >> 0x20) +
                                   ((uint)local_110[0] << 0x10 | uVar10) +
                                   (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar10 >> 4)) * 4);
        while (iVar13 != -1) {
          puVar8 = (undefined8 *)(local_b8 + (longlong)iVar13 * 0x14);
          if ((longlong *)*puVar8 == local_110[0]) {
            if (puVar8 + 1 != (undefined8 *)0x0 && puVar8 != (undefined8 *)0x0) {
              *(undefined1 *)(puVar8 + 1) = 0;
              goto LAB_1491b5042;
            }
            break;
          }
          iVar13 = *(int *)((longlong)puVar8 + 0xc);
        }
      }
      local_120 = (longlong **)CONCAT71(local_120._1_7_,1);
      local_170 = local_110;
      ppplStack_168 = &local_120;
      FUN_1460276f6(&local_b8,&local_c8,&local_170,0);
LAB_1491b5042:
      plVar14 = (longlong *)((longlong)plVar14 + 0xc);
    } while (plVar14 != plVar15);
  }
  lVar12 = local_180;
  lVar11 = FUN_1491b2d40(local_180);
  if ((longlong)local_d8 != 0) {
    local_178 = (longlong *)((longlong)local_e0 + (longlong)local_d8 * 0xc);
    lVar12 = lVar12 + 0xc20;
    plVar15 = local_e0;
    do {
      local_170 = (longlong **)*plVar15;
      ppplStack_168 = (longlong ***)CONCAT44(ppplStack_168._4_4_,(int)plVar15[1]);
      local_188 = 0;
      FUN_149184980(uVar5,&local_c8,&local_170,DAT_14cc063f8);
      plVar14 = local_c8;
      if (local_c8 == (longlong *)0x0) {
        plVar14 = *(longlong **)((longlong)plVar15 + 4);
      }
      local_100 = *plVar15;
      local_f8 = (undefined4)plVar15[1];
      local_e8 = plVar14;
      FUN_1491da07e(uVar5,&local_f0,&local_100);
      uVar10 = (uint)plVar14;
      iVar13 = (int)((ulonglong)plVar14 >> 0x20);
      uVar2 = (uint)((ulonglong)plVar14 >> 0x10);
      if (local_f0 == 0) {
LAB_1491b4a64:
        if ((int)uStack_b0 == local_84) {
          puVar8 = (undefined8 *)0x0;
        }
        else {
          puVar7 = local_78;
          if (local_78 == (undefined1 *)0x0) {
            puVar7 = local_80;
          }
          iVar13 = *(int *)(puVar7 + (ulonglong)
                                     (local_70 - 1U &
                                     iVar13 + (uVar10 << 0x10 | uVar10 & 0xffff) +
                                     (uVar2 << 0x13 | uVar2 & 0xffff) + ((uVar10 & 0xffff) >> 4)) *
                                     4);
          while (iVar13 != -1) {
            puVar8 = (undefined8 *)(local_b8 + (longlong)iVar13 * 0x14);
            if ((longlong *)*puVar8 == plVar14) goto LAB_1491b4a7d;
            iVar13 = *(int *)((longlong)puVar8 + 0xc);
          }
          puVar8 = (undefined8 *)0x0;
        }
LAB_1491b4a7d:
        if (*(char *)(puVar8 + 1) != '\x01') {
          FUN_14919e8cc(plVar15,local_110);
          FUN_1400021e4(&local_e8,&local_120);
          FUN_1400021e4(&local_e8,&local_130);
          local_170 = local_120;
          ppplStack_168 = ppplStack_118;
          local_120 = (longlong **)0x0;
          ppplStack_118 = (longlong ***)0x0;
          local_160 = (undefined4)local_130;
          uStack_15c = local_130._4_4_;
          uStack_158 = (undefined4)uStack_128;
          uStack_154 = uStack_128._4_4_;
          local_130 = (longlong **)0x0;
          uStack_128 = (longlong ***)0x0;
          local_c0 = &local_170;
          local_c8 = plVar15;
          FUN_1491d200e(lVar12,local_140,&local_c8);
          pplVar9 = local_170;
          if (CONCAT44(uStack_15c,local_160) != 0) {
            FUN_1400020a8();
            pplVar9 = local_170;
          }
          goto LAB_1491b4dc8;
        }
        FUN_1400021e4(&local_e8,local_110);
        FUN_140ac5dca(&local_170,0,local_110,local_110);
        local_c8 = plVar15;
        local_c0 = &local_170;
        FUN_1491d200e(lVar12,&local_120,&local_c8);
        pplVar9 = local_170;
        if (CONCAT44(uStack_15c,local_160) != 0) {
          FUN_1400020a8();
          pplVar9 = local_170;
        }
      }
      else {
        FUN_1400021e4(&local_f0,&local_170);
        lVar6 = FUN_1491d324c(lVar11,&local_170);
        if (local_170 != (longlong **)0x0) {
          FUN_1400020a8();
        }
        if (lVar6 == 0) goto LAB_1491b4a64;
        local_180 = lVar11;
        FUN_1400021e4(&local_f0,local_110);
        puVar3 = PTR_DAT_14c764f40;
        FUN_1400021e4(&local_f0,&local_170);
        FUN_144a882a8(&local_120,&local_170,puVar3);
        if (local_170 != (longlong **)0x0) {
          FUN_1400020a8();
        }
        FUN_1400021e4(&local_e8,&local_130);
        iVar1 = (int)ppplStack_118 + -1;
        if ((int)ppplStack_118 == 0) {
          iVar1 = 0;
        }
        pplVar9 = (longlong **)&DAT_149dfb77a;
        if ((int)ppplStack_118 != 0) {
          pplVar9 = local_120;
        }
        cVar4 = FUN_144a791f8(&local_130,pplVar9,iVar1,1);
        if (cVar4 != '\0') {
          iVar1 = (int)ppplStack_118 + -1;
          if ((int)ppplStack_118 == 0) {
            iVar1 = 0;
          }
          FUN_144a49bb4(&local_130,&local_170,iVar1);
          if (local_130 != (longlong **)0x0) {
            FUN_1400020a8();
          }
          local_130 = local_170;
          uStack_128 = ppplStack_168;
        }
        FUN_1491d2dc4(lVar6,local_140);
        FUN_1491d2e98(local_150,local_140,&local_130);
        if ((int)uStack_b0 == local_84) {
          puVar8 = (undefined8 *)0x0;
        }
        else {
          puVar7 = local_78;
          if (local_78 == (undefined1 *)0x0) {
            puVar7 = local_80;
          }
          iVar13 = *(int *)(puVar7 + (ulonglong)
                                     (local_70 - 1U &
                                     iVar13 + (uVar10 << 0x10 | uVar10 & 0xffff) +
                                     (uVar2 << 0x13 | uVar2 & 0xffff) + ((uVar10 & 0xffff) >> 4)) *
                                     4);
          while (iVar13 != -1) {
            puVar8 = (undefined8 *)(local_b8 + (longlong)iVar13 * 0x14);
            if ((longlong *)*puVar8 == plVar14) goto LAB_1491b4c5b;
            iVar13 = *(int *)((longlong)puVar8 + 0xc);
          }
          puVar8 = (undefined8 *)0x0;
        }
LAB_1491b4c5b:
        plVar14 = local_150;
        if (*(char *)(puVar8 + 1) != '\0') {
          plVar14 = &local_130;
        }
        FUN_140ac5dca(&local_170,0,local_150,plVar14);
        local_c8 = plVar15;
        local_c0 = &local_170;
        FUN_1491d200e(lVar12,local_cc,&local_c8);
        if (CONCAT44(uStack_15c,local_160) != 0) {
          FUN_1400020a8();
        }
        lVar11 = local_180;
        if (local_170 != (longlong **)0x0) {
          FUN_1400020a8();
        }
        pplVar9 = local_140[0];
        if (local_150[0] != 0) {
          FUN_1400020a8();
          pplVar9 = local_140[0];
        }
LAB_1491b4dc8:
        if (pplVar9 != (longlong **)0x0) {
          FUN_1400020a8();
        }
        pplVar9 = local_120;
        if (local_130 != (longlong **)0x0) {
          FUN_1400020a8();
          pplVar9 = local_120;
        }
      }
      if (pplVar9 != (longlong **)0x0) {
        FUN_1400020a8();
      }
      if (local_110[0] != (longlong *)0x0) {
        FUN_1400020a8();
      }
      plVar15 = (longlong *)((longlong)plVar15 + 0xc);
    } while (plVar15 != local_178);
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140e90ec0(&local_b8);
  if (local_e0 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b5092 FUN_1491b5092 body=1717 status=ok
// SIG undefined FUN_1491b5092(void)

void FUN_1491b5092(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  undefined8 param_5,wchar_t *param_6)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  wchar_t *pwVar10;
  undefined2 *puVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined1 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  longlong local_1c0;
  undefined8 local_1b8;
  wchar_t *local_1b0;
  int local_1a8;
  longlong local_1a0;
  wchar_t *local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined1 local_180 [168];
  wchar_t *local_d8;
  undefined8 uStack_d0;
  wchar_t *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if (param_4 == 0) {
    if ((longlong)*(int *)(param_1 + 0xae8) != 0) {
      lVar13 = 0;
      do {
        if (**(longlong **)(*(longlong *)(param_1 + 0xae0) + lVar13) == *param_2)
        goto LAB_1491b514e;
        lVar13 = lVar13 + 8;
      } while ((longlong)*(int *)(param_1 + 0xae8) * 8 != lVar13);
    }
  }
  else if ((longlong)*(int *)(param_4 + 0x78) != 0) {
    lVar13 = 0;
    do {
      if (**(longlong **)(*(longlong *)(param_4 + 0x70) + lVar13) == *param_2) goto LAB_1491b514e;
      lVar13 = lVar13 + 8;
    } while ((longlong)*(int *)(param_4 + 0x78) * 8 != lVar13);
  }
  lVar13 = *param_3;
  if ((((lVar13 == 0) || (lVar3 = FUN_1401242c6(), lVar3 == 0)) ||
      (*(int *)(lVar13 + 0x38) < *(int *)(lVar3 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) {
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = (longlong *)*param_3;
  }
  lVar13 = plVar6[0x22];
  if (lVar13 == 0) {
    (**(code **)(*plVar6 + 1000))(plVar6);
    lVar13 = plVar6[0x22];
  }
  lVar13 = FUN_140124256(lVar13);
  if (*(int *)(lVar13 + 8) < 2) goto LAB_1491b514e;
  local_98 = 0;
  local_90 = 0;
  local_d8 = (wchar_t *)0x0;
  uStack_d0 = 0;
  local_c8 = (wchar_t *)0x0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  iVar2 = *(int *)(param_1 + 0xad8);
  *(uint *)(param_1 + 0xad8) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xadc) < iVar2 + 1U) {
    FUN_1491d13a6((longlong *)(param_1 + 0xad0),iVar2);
  }
  lVar13 = *(longlong *)(param_1 + 0xad0);
  lVar3 = lVar13 + (longlong)iVar2 * 0x88;
  FUN_1491d130e(lVar3,&local_d8);
  FUN_149190e08(&local_d8);
  *(longlong *)(lVar13 + (longlong)iVar2 * 0x88) = *param_2;
  if (param_4 != 0) {
    FUN_1491b27f6(param_4,&local_d8);
    if ((wchar_t **)(lVar3 + 0x10) != &local_d8) {
      if (*(longlong *)(lVar3 + 0x10) != 0) {
        FUN_1400020a8();
      }
      *(wchar_t **)(lVar3 + 0x10) = local_d8;
      local_d8 = (wchar_t *)0x0;
      *(int *)(lVar3 + 0x18) = (int)uStack_d0;
      *(uint *)(lVar3 + 0x1c) = uStack_d0._4_4_;
      uStack_d0 = 0;
    }
    if (local_d8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1491b27f6(lVar3,&local_1b0);
  plVar6 = (longlong *)(param_1 + 0xbd0);
  pwVar10 = local_1b0;
  if (local_1a8 == 0) {
    pwVar10 = L"";
  }
  iVar2 = local_1a8 + -1;
  if (local_1a8 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,pwVar10);
  iVar2 = FUN_1491d0408(plVar6,uVar1,&local_1b0);
  if (((iVar2 == -1) ||
      (lVar13 = (longlong)iVar2 * 0x20 + *plVar6, plVar4 = (longlong *)(lVar13 + 0x10),
      plVar4 == (longlong *)0x0 || lVar13 == 0)) ||
     (plVar4 = (longlong *)*plVar4, plVar4 == (longlong *)0x0)) {
LAB_1491b5366:
    pwVar10 = local_1b0;
    if (local_1a8 == 0) {
      pwVar10 = L"";
    }
    FUN_1446f470e(&local_1b8,pwVar10,1);
    lVar13 = *param_3;
    if (((lVar13 == 0) || (lVar5 = FUN_1401242c6(), lVar5 == 0)) ||
       ((*(int *)(lVar13 + 0x38) < *(int *)(lVar5 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
         lVar5 + 0x30)))) {
      lVar13 = 0;
    }
    else {
      lVar13 = *param_3;
    }
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1e0 = 0;
    local_1e8 = 0;
    plVar4 = (longlong *)FUN_14575d845(param_1,lVar13,local_1b8,0);
  }
  else {
    local_1a0 = plVar4[3];
    FUN_1400021e4(&local_1a0,&local_d8);
    pwVar10 = local_d8;
    if ((int)uStack_d0 == local_1a8) {
      if (((int)uStack_d0 < 2) || (iVar2 = wcscmp(local_d8,local_1b0), iVar2 == 0))
      goto LAB_1491b56ba;
LAB_1491b5721:
      if (pwVar10 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar10);
      }
LAB_1491b572e:
      FUN_1491b2cc8(plVar4);
      FUN_1491d154c(plVar6,&local_1b0);
      goto LAB_1491b5366;
    }
    if (local_1a8 + (int)uStack_d0 != 1) goto LAB_1491b5721;
LAB_1491b56ba:
    lVar13 = plVar4[2];
    lVar5 = *param_3;
    if ((((lVar5 == 0) || (lVar8 = FUN_1401242c6(), lVar8 == 0)) ||
        (*(int *)(lVar5 + 0x38) < *(int *)(lVar8 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
        lVar8 + 0x30)) {
      lVar5 = 0;
    }
    else {
      lVar5 = *param_3;
    }
    if (local_d8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (lVar13 != lVar5) goto LAB_1491b572e;
    FUN_1491d154c(plVar6,&local_1b0);
  }
  FUN_1491b2c72(lVar3,plVar4);
  FUN_1491b3874(param_1);
  if (*(int *)(param_1 + 0xc28) != *(int *)(param_1 + 0xc54)) {
    FUN_1491d1d94(param_1 + 0xc20);
    FUN_1491d1ed8(param_1 + 0xc20);
  }
  plVar6 = *(longlong **)(lVar3 + 8);
  if ((plVar6 == (longlong *)0x0) || ((*(uint *)(plVar6 + 1) >> 0x1e & 1) != 0)) {
    *(undefined8 *)(lVar3 + 8) = 0;
    plVar6 = (longlong *)0x0;
  }
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x300))();
  if ((longlong)(int)plVar6[1] != 0) {
    lVar13 = *plVar6;
    lVar5 = (longlong)(int)plVar6[1] << 3;
    do {
      FUN_140721fbe(param_1 + 0xaf0,lVar13);
      lVar13 = lVar13 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  lVar13 = *(longlong *)(param_1 + 0x2f8);
  lVar5 = FUN_1403fefe0(plVar4[0x2a]);
  (**(code **)(*plVar4 + 0x308))(plVar4);
  *(undefined1 *)(plVar4 + 0xf9) = 0;
  local_1c0 = lVar13;
  if ((lVar13 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar13);
  }
  FUN_1491a12e0(plVar4,&local_1c0);
  *(longlong *)(lVar5 + 0x1b0) = lVar13;
  *(longlong *)(lVar5 + 0x1b8) = param_1;
  uVar7 = FUN_1406bad30(plVar4);
  FUN_144a787a6(lVar5 + 0x1c0,uVar7);
  iVar2 = *(int *)(lVar5 + 0x1c8);
  if (iVar2 == 0) {
    puVar11 = &DAT_149dfb77a;
  }
  else {
    puVar11 = *(undefined2 **)(lVar5 + 0x1c0);
  }
  iVar12 = 0;
  iVar9 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar9 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar9,puVar11);
  *(undefined4 *)(lVar5 + 0x1d0) = uVar1;
  FUN_1491e10c0(local_180,param_5,lVar13);
  (**(code **)(*plVar4 + 0x388))(plVar4,local_180);
  pwVar10 = param_6 + 8;
  local_1a0 = 0x100000000;
  local_190 = 0xffffffff;
  local_188 = 0;
  local_198 = pwVar10;
  if (*(int *)(param_6 + 0x14) != 0) {
    FUN_1449c0562(&local_1a0);
    iVar12 = *(int *)(param_6 + 0x14);
  }
  uStack_c0 = local_190;
  uVar7 = uStack_c0;
  local_b8 = CONCAT44(local_184,local_188);
  uStack_d0 = local_1a0;
  local_c8 = local_198;
  local_d8 = param_6;
  uStack_c0._4_4_ = (int)((ulonglong)local_190 >> 0x20);
  iVar2 = uStack_c0._4_4_;
  if ((uStack_c0._4_4_ != iVar12) || (uStack_c0 = uVar7, local_198 != pwVar10)) {
    do {
      uStack_c0 = uVar7;
      lVar5 = (longlong)iVar2 * 0x20 + *(longlong *)local_d8;
      lVar13 = *(longlong *)(lVar3 + 8);
      if ((lVar13 == 0) || ((*(uint *)(lVar13 + 8) >> 0x1e & 1) != 0)) {
        *(undefined8 *)(lVar3 + 8) = 0;
        lVar13 = 0;
      }
      FUN_1491716d0(lVar13,lVar5,lVar5 + 8);
      uStack_c0 = CONCAT44(uStack_c0._4_4_,(uint)uStack_c0 & ~uStack_d0._4_4_);
      FUN_1449c0562(&uStack_d0);
      iVar2 = uStack_c0._4_4_;
      uVar7 = uStack_c0;
    } while (local_d8 != param_6 || (local_c8 != pwVar10 || uStack_c0._4_4_ != iVar12));
  }
  if (local_1b0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_1491b514e:
  if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491b5748 FUN_1491b5748 body=998 status=ok
// SIG undefined FUN_1491b5748(void)

void FUN_1491b5748(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  void *_Src;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_148 [36];
  int local_124;
  longlong local_120;
  undefined8 local_118;
  longlong local_110;
  longlong *plStack_108;
  undefined8 local_100;
  ulonglong uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined2 *local_a8;
  int local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar5 = FUN_1491b2884();
  if (lVar5 != 0) {
    FUN_1491d16d8(lVar5 + 0x20);
    plVar1 = param_3 + 2;
    local_d8 = 0x100000000;
    local_c8 = 0xffffffff;
    uStack_c0 = uStack_c0 & 0xffffffff00000000;
    uStack_d0 = plVar1;
    if ((int)param_3[5] == 0) {
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_d8);
      iVar7 = (int)param_3[5];
    }
    local_80 = (undefined4)local_d8;
    uStack_7c = local_d8._4_4_;
    uStack_78 = (undefined4)uStack_d0;
    uStack_74 = uStack_d0._4_4_;
    uStack_68 = uStack_c0;
    local_70 = local_c8;
    uVar3 = local_70;
    local_70._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
    iVar4 = local_70._4_4_;
    local_88 = param_3;
    if ((local_70._4_4_ != iVar7) || (local_70 = local_c8, uStack_d0 != plVar1)) {
      do {
        local_70 = uVar3;
        local_124 = iVar7;
        lVar2 = *local_88;
        lVar8 = (longlong)iVar4 * 0x20;
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = (undefined2 *)0x0;
        local_a0 = *(int *)(lVar2 + 0x10 + lVar8);
        lVar9 = (longlong)local_a0;
        _Src = *(void **)(lVar2 + 8 + lVar8);
        if (lVar9 == 0) {
          local_9c = 0;
        }
        else {
          FUN_1446dd670(&local_a8,local_a0,0);
          memcpy(local_a8,_Src,lVar9 * 2);
        }
        puVar10 = (undefined8 *)(lVar8 + lVar2 + 8);
        FUN_1491d31c2(puVar10,&local_98,&local_a8,1);
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_d8 = 0;
        uStack_d0 = (longlong *)0x0;
        if ((int)uStack_90 < 2) {
          puVar6 = &DAT_149dfb77a;
          if (local_a0 != 0) {
            puVar6 = local_a8;
          }
          lVar9 = *(longlong *)(param_1 + 0x10);
          FUN_1446f470e(&local_e0,puVar6,1);
          for (lVar9 = *(longlong *)(lVar9 + 0x70); lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x48))
          {
            if (*(longlong *)(lVar9 + 0x20) == local_e0) {
              local_118 = 0;
              FUN_1409a6b0a(&local_110,lVar9,param_1,&local_118);
              goto LAB_1491b5977;
            }
          }
        }
        else {
          lVar9 = FUN_1491b2884(param_1,&local_98);
          if (lVar9 != 0) {
            local_120 = *(longlong *)(lVar9 + 8);
            if ((local_120 == 0) || ((*(uint *)(local_120 + 8) >> 0x1e & 1) != 0)) {
              *(undefined8 *)(lVar9 + 8) = 0;
              local_120 = 0;
            }
            puVar6 = &DAT_149dfb77a;
            if (local_a0 != 0) {
              puVar6 = local_a8;
            }
            FUN_1446f470e(&local_118,puVar6,1);
            FUN_1409a6968(local_120,&local_110,&local_118);
LAB_1491b5977:
            local_b8 = local_f0;
            uStack_b0 = uStack_e8;
            local_c8 = local_100;
            uStack_c0 = uStack_f8;
            local_d8 = local_110;
            uStack_d0 = plStack_108;
          }
        }
        if (uStack_d0 == (longlong *)0x0) {
          if (local_a8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_98 != 0) {
            FUN_1400020a8();
          }
          break;
        }
        puVar6 = &DAT_149dfb77a;
        if (*(int *)(lVar2 + lVar8 + 0x10) != 0) {
          puVar6 = (undefined2 *)*puVar10;
        }
        FUN_1446f470e(&local_110,puVar6,1);
        local_d8 = local_110;
        plStack_108 = &local_d8;
        local_110 = lVar2 + lVar8;
        FUN_1491d1860(lVar5 + 0x20,&local_118,&local_110);
        if (local_a8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
        FUN_1449c0562(&local_80);
        iVar4 = local_70._4_4_;
        iVar7 = local_124;
        uVar3 = local_70;
      } while (((longlong *)CONCAT44(uStack_74,uStack_78) != plVar1 || local_70._4_4_ != local_124)
               || local_88 != param_3);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b5b30 FUN_1491b5b30 body=296 status=ok
// SIG undefined FUN_1491b5b30(void)

undefined8 * FUN_1491b5b30(longlong param_1,undefined8 *param_2,byte *param_3,byte param_4)

{
  longlong lVar1;
  void *_Src;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0xc28) != *(int *)(param_1 + 0xc54)) {
    lVar3 = *(longlong *)(param_3 + 4);
    uVar2 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar4 = (uint)lVar3 & 0xffff;
    lVar6 = param_1 + 0xc58;
    if (*(longlong *)(param_1 + 0xc60) != 0) {
      lVar6 = *(longlong *)(param_1 + 0xc60);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0xc68) - 1U &
                             (uint)*param_3 +
                             ((int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar4) +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 10) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 0xc20);
      do {
        lVar7 = (longlong)iVar5 * 0x38;
        lVar1 = lVar6 + lVar7;
        if ((*(longlong *)(lVar6 + 4 + lVar7) == lVar3) && (*(byte *)(lVar6 + lVar7) == *param_3)) {
          if (lVar1 + 0x10 != 0 && lVar1 != 0) {
            lVar3 = (ulonglong)(param_4 ^ 1) * 0x10;
            *param_2 = 0;
            iVar5 = *(int *)(lVar1 + 0x18 + lVar3);
            _Src = *(void **)(lVar1 + 0x10 + lVar3);
            *(int *)(param_2 + 1) = iVar5;
            if ((longlong)iVar5 != 0) {
              FUN_1446dd670(param_2,iVar5,0);
              memcpy((void *)*param_2,_Src,(longlong)iVar5 * 2);
              return param_2;
            }
            *(undefined4 *)((longlong)param_2 + 0xc) = 0;
            return param_2;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x30);
      } while (iVar5 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1491b5c58 FUN_1491b5c58 body=93 status=ok
// SIG undefined FUN_1491b5c58(void)

undefined8 * FUN_1491b5c58(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140f8ce79(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1491d09c8(param_1,iVar1);
      FUN_1491d0a2a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1491b5cbc FUN_1491b5cbc body=573 status=ok
// SIG undefined FUN_1491b5cbc(void)

void FUN_1491b5cbc(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_4c;
  longlong local_48 [5];
  
  local_48[4] = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 3);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 3);
  }
  plVar1 = local_48 + 3;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  local_48[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_48[2];
  if ((local_48[2] != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_78 = local_48;
  FUN_14448deda(param_1,&local_60,plVar1,&local_68);
  if (&local_60 == param_3) {
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_60;
    local_60 = 0;
    *(undefined4 *)(param_3 + 1) = local_58;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_54;
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[4] ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b5f0c FUN_1491b5f0c body=334 status=ok
// SIG undefined FUN_1491b5f0c(void)

void FUN_1491b5f0c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = 0;
  FUN_1447a1747(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b606e FUN_1491b606e body=320 status=ok
// SIG undefined FUN_1491b606e(void)

void FUN_1491b606e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = 0;
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b61bc FUN_1491b61bc body=462 status=ok
// SIG undefined FUN_1491b61bc(void)

void FUN_1491b61bc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  longlong local_58 [3];
  undefined8 local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar2 = &local_40;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14448e266(param_1,local_38,puVar2,local_58);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b6392 FUN_1491b6392 body=410 status=ok
// SIG undefined FUN_1491b6392(void)

void FUN_1491b6392(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong **pplVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_88 [32];
  longlong *local_68 [2];
  undefined1 local_58 [4];
  undefined8 local_54;
  undefined1 local_4c [4];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c[0] = 0;
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_4c);
  }
  puVar3 = local_4c;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_54 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar4 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  FUN_144a5dc74(local_68);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  pplVar2 = local_68;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar2 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1491b652e(param_1,puVar3,puVar4,pplVar2);
  *param_3 = uVar1;
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b652e FUN_1491b652e body=3339 status=ok
// SIG undefined FUN_1491b652e(void)

ulonglong FUN_1491b652e(longlong param_1,char *param_2,char *param_3,undefined8 param_4)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  longlong **pplVar12;
  longlong *plVar13;
  byte bVar14;
  longlong lVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  undefined8 uVar18;
  undefined1 auStack_118 [32];
  char *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  char local_dc [4];
  undefined2 local_d8;
  ushort uStack_d6;
  undefined4 uStack_d4;
  undefined1 local_d0 [4];
  undefined1 local_cc [8];
  char local_c4 [4];
  undefined2 local_c0;
  ushort uStack_be;
  undefined4 uStack_bc;
  longlong *local_b8;
  int local_b0;
  longlong *local_a8;
  int local_a0;
  undefined4 local_9c;
  longlong *local_98;
  undefined8 uStack_90;
  longlong *local_88 [2];
  undefined2 *local_78;
  ulonglong uStack_70;
  undefined2 *local_68;
  undefined8 uStack_60;
  longlong *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_68 = (undefined2 *)0x0;
  uStack_60 = 0;
  local_78 = (undefined2 *)0x0;
  uStack_70 = 0;
  local_f8 = param_3;
  FUN_1400021e4(param_2 + 4,&local_58);
  uVar4 = FUN_1491d31c2(&local_58,&local_68,&local_78,1);
  pplVar12 = (longlong **)(ulonglong)uVar4;
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((char)uVar4 == '\0') {
    FUN_14919e8cc(param_2,&local_98);
    plVar6 = local_98;
    if ((int)uStack_90 == 0) {
      plVar6 = (longlong *)&DAT_149dfb77a;
    }
    FUN_140002266(local_88,L"Connector %s does not contain a namespace",plVar6);
    FUN_140233b1a(&local_58,local_88);
LAB_1491b6c8c:
    FUN_140008f88(param_4,&local_58);
    local_b8 = local_88[0];
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
      local_b8 = local_88[0];
    }
LAB_1491b6caa:
    local_88[0] = local_98;
    if (local_b8 != (longlong *)0x0) {
      FUN_1400020a8();
      local_88[0] = local_98;
    }
  }
  else {
    lVar5 = FUN_1491d324c(*(undefined8 *)(param_1 + 0x28),&local_68);
    if (lVar5 != 0) {
      lVar10 = lVar5 + 0x30;
      local_f0 = param_4;
      plVar6 = (longlong *)FUN_14479d2ce(lVar10);
      if (plVar6 == (longlong *)0x0) {
        if (*(longlong *)(lVar5 + 0x38) != 0) {
          plVar6 = (longlong *)FUN_140007850();
          cVar3 = (*(code *)PTR_FUN_14c758760)();
          if ((plVar6 == (longlong *)0x0) || (cVar3 == '\0')) {
            FUN_14485c47a(lVar10,plVar6);
            if (plVar6 == (longlong *)0x0) goto LAB_1491b676d;
          }
          else {
            uVar4 = *(uint *)((longlong)plVar6 + 0xc);
            if ((int)uVar4 < DAT_14c9647dc) {
              lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
            }
            else {
              lVar7 = 0;
            }
            if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(lVar10,plVar6);
            }
          }
          if ((*(uint *)(plVar6 + 1) >> 0x1e & 1) == 0) goto LAB_1491b65e9;
        }
LAB_1491b676d:
        plVar13 = (longlong *)0x0;
      }
      else {
LAB_1491b65e9:
        lVar7 = FUN_144a797b2();
        if ((((*(int *)(plVar6[2] + 0x38) < *(int *)(lVar7 + 0x38)) ||
             (*(longlong *)(*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
              != lVar7 + 0x30)) || (lVar7 = FUN_1401242c6(), lVar7 == 0)) ||
           ((int)plVar6[7] < *(int *)(lVar7 + 0x38))) goto LAB_1491b676d;
        plVar13 = (longlong *)0x0;
        if (*(longlong *)(plVar6[6] + (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30) {
          plVar13 = plVar6;
        }
      }
      lVar7 = plVar13[0x22];
      if (lVar7 == 0) {
        (**(code **)(*plVar13 + 1000))(plVar13);
        lVar7 = plVar13[0x22];
        if (lVar7 != 0) goto LAB_1491b677f;
        lVar7 = FUN_14479d2ce(lVar10);
        param_4 = local_f0;
        if (lVar7 == 0) {
          if (*(longlong *)(lVar5 + 0x38) != 0) {
            lVar7 = FUN_140007850();
            cVar3 = (*(code *)PTR_FUN_14c758760)();
            if ((lVar7 == 0) || (cVar3 == '\0')) {
              FUN_14485c47a(lVar10,lVar7);
              if (lVar7 == 0) goto LAB_1491b6f22;
            }
            else {
              uVar4 = *(uint *)(lVar7 + 0xc);
              if ((int)uVar4 < DAT_14c9647dc) {
                lVar5 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
              }
              else {
                lVar5 = 0;
              }
              if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
                FUN_14485c47a(lVar10,lVar7);
              }
            }
            if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0) goto LAB_1491b6862;
          }
LAB_1491b6f22:
          lVar10 = 0;
        }
        else {
LAB_1491b6862:
          lVar5 = FUN_144a797b2();
          if (((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) ||
             ((lVar5 = FUN_1401242c6(), lVar5 == 0 ||
              (*(int *)(lVar7 + 0x38) < *(int *)(lVar5 + 0x38))))) goto LAB_1491b6f22;
          lVar10 = 0;
          if (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30) {
            lVar10 = lVar7;
          }
        }
        local_98 = (longlong *)0x0;
        uStack_90 = 0;
        FUN_1401031ac(lVar10,0,&local_98);
        plVar6 = local_98;
        if ((int)uStack_90 == 0) {
          plVar6 = (longlong *)&DAT_149dfb77a;
        }
        FUN_140002266(local_88,L"Invalid rig module class %s",plVar6);
LAB_1491b6c76:
        FUN_140233b1a(&local_58,local_88);
        goto LAB_1491b6c8c;
      }
LAB_1491b677f:
      local_e8 = param_1;
      lVar8 = FUN_140124256();
      puVar17 = local_78;
      local_a8 = (longlong *)0x0;
      lVar15 = (longlong)(int)uStack_70;
      local_a0 = (int)uStack_70;
      if (lVar15 == 0) {
        local_9c = 0;
        local_50 = 0;
LAB_1491b68d5:
        local_58 = (longlong *)0x0;
        local_4c = 0;
      }
      else {
        pplVar12 = &local_a8;
        FUN_1446dd670(pplVar12,uStack_70 & 0xffffffff,0);
        memcpy(local_a8,puVar17,lVar15 * 2);
        plVar6 = local_a8;
        lVar15 = (longlong)local_a0;
        local_58 = (longlong *)0x0;
        local_50 = local_a0;
        if (lVar15 == 0) goto LAB_1491b68d5;
        pplVar12 = &local_58;
        FUN_1446dd670(pplVar12,local_a0,0);
        memcpy(local_58,plVar6,lVar15 * 2);
      }
      plVar6 = *(longlong **)(lVar8 + 0x70);
      bVar14 = 1;
      plVar13 = plVar6;
      if ((longlong)*(int *)(lVar8 + 0x78) != 0) {
        plVar13 = plVar6 + (longlong)*(int *)(lVar8 + 0x78) * 7;
LAB_1491b690b:
        if ((int)plVar6[1] != local_50) {
          if ((int)plVar6[1] + local_50 == 1) goto LAB_1491b6a27;
          goto LAB_1491b6973;
        }
        if (1 < local_50) {
          lVar8 = 0;
          do {
            uVar1 = *(ushort *)(*plVar6 + lVar8);
            uVar4 = (uint)uVar1;
            uVar2 = *(ushort *)((longlong)local_58 + lVar8);
            pplVar12 = (longlong **)(ulonglong)uVar2;
            if (uVar1 == uVar2) {
              if (uVar1 == 0) break;
            }
            else {
              if (0x7f < (uVar2 | uVar1)) goto LAB_1491b6a1b;
              uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              pplVar12 = (longlong **)(ulonglong)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[uVar2]) goto LAB_1491b6a1b;
            }
            lVar8 = lVar8 + 2;
          } while( true );
        }
        goto LAB_1491b6a27;
      }
LAB_1491b6a29:
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_a8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      lVar8 = local_e8;
      if (!(bool)(~bVar14 & plVar13 != (longlong *)0x0)) {
        lVar7 = FUN_14479d2ce(lVar10);
        param_4 = local_f0;
        if (lVar7 == 0) {
          if (*(longlong *)(lVar5 + 0x38) != 0) {
            lVar7 = FUN_140007850();
            cVar3 = (*(code *)PTR_FUN_14c758760)();
            if ((lVar7 == 0) || (cVar3 == '\0')) {
              FUN_14485c47a(lVar10,lVar7);
              if (lVar7 == 0) goto LAB_1491b6c1b;
            }
            else {
              uVar4 = *(uint *)(lVar7 + 0xc);
              if ((int)uVar4 < DAT_14c9647dc) {
                lVar5 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
              }
              else {
                lVar5 = 0;
              }
              if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
                FUN_14485c47a(lVar10,lVar7);
              }
            }
            if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0) goto LAB_1491b6a69;
          }
LAB_1491b6c1b:
          lVar10 = 0;
        }
        else {
LAB_1491b6a69:
          lVar5 = FUN_144a797b2();
          if ((((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) ||
              (lVar5 = FUN_1401242c6(), lVar5 == 0)) ||
             (*(int *)(lVar7 + 0x38) < *(int *)(lVar5 + 0x38))) goto LAB_1491b6c1b;
          lVar10 = 0;
          if (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30) {
            lVar10 = lVar7;
          }
        }
        local_98 = (longlong *)0x0;
        uStack_90 = 0;
        FUN_1401031ac(lVar10,0,&local_98);
        plVar6 = (longlong *)&DAT_149dfb77a;
        if ((int)uStack_90 != 0) {
          plVar6 = local_98;
        }
        puVar17 = &DAT_149dfb77a;
        if ((int)uStack_70 != 0) {
          puVar17 = local_78;
        }
        FUN_140002266(local_88,L"Could not find connector %s in class %s",puVar17,plVar6);
        goto LAB_1491b6c76;
      }
      if ((*local_f8 == '\0' || *(longlong *)(local_f8 + 4) == 0) ||
          DAT_14c87eb08 + 1U <= (uint)*(ushort *)(local_f8 + 6)) {
        lVar7 = FUN_14479d2ce(lVar10);
        uVar18 = local_f0;
        if (lVar7 == 0) {
          if (*(longlong *)(lVar5 + 0x38) != 0) {
            lVar7 = FUN_140007850();
            cVar3 = (*(code *)PTR_FUN_14c758760)();
            if ((lVar7 == 0) || (cVar3 == '\0')) {
              FUN_14485c47a(lVar10,lVar7);
              if (lVar7 == 0) goto LAB_1491b6ff3;
            }
            else {
              uVar4 = *(uint *)(lVar7 + 0xc);
              if ((int)uVar4 < DAT_14c9647dc) {
                lVar5 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
              }
              else {
                lVar5 = 0;
              }
              if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
                FUN_14485c47a(lVar10,lVar7);
              }
            }
            if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0) goto LAB_1491b6fbb;
          }
LAB_1491b6ff3:
          lVar10 = 0;
        }
        else {
LAB_1491b6fbb:
          lVar5 = FUN_144a797b2();
          if (((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) ||
             ((lVar5 = FUN_1401242c6(), lVar5 == 0 ||
              (*(int *)(lVar7 + 0x38) < *(int *)(lVar5 + 0x38))))) goto LAB_1491b6ff3;
          lVar10 = 0;
          if (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30) {
            lVar10 = lVar7;
          }
        }
        local_98 = (longlong *)0x0;
        uStack_90 = 0;
        FUN_1401031ac(lVar10,0,&local_98);
        plVar6 = (longlong *)&DAT_149dfb77a;
        if ((int)uStack_90 != 0) {
          plVar6 = local_98;
        }
        FUN_14919e8cc(local_f8,&local_b8);
        plVar13 = (longlong *)&DAT_149dfb77a;
        if (local_b0 != 0) {
          plVar13 = local_b8;
        }
        pwVar11 = L"Invalid target %s in class %s";
      }
      else {
        if ((*(longlong *)(local_f8 + 4) != *(longlong *)(param_2 + 4)) || (*local_f8 != *param_2))
        {
          FUN_1491b9f52(*(longlong *)(local_e8 + 0x28) + 0x30,local_c4,param_2);
          lVar5 = CONCAT44(uStack_bc,CONCAT22(uStack_be,local_c0));
          if ((((local_c4[0] != '\0' && lVar5 != 0) && (uint)uStack_be < DAT_14c87eb08 + 1U) &&
              ((*(longlong *)(local_f8 + 4) == lVar5 &&
               (pplVar12 = (longlong **)CONCAT71((int7)((ulonglong)pplVar12 >> 8),1),
               *local_f8 == local_c4[0])))) ||
             (pplVar12 = (longlong **)CONCAT71((int7)((ulonglong)pplVar12 >> 8),1),
             (char)plVar13[4] == '\0')) goto LAB_1491b6cc8;
          lVar5 = FUN_140124256(lVar7);
          if ((longlong)*(int *)(lVar5 + 0x78) != 0) {
            puVar9 = *(undefined8 **)(lVar5 + 0x70);
            lVar5 = (longlong)*(int *)(lVar5 + 0x78) * 0x38;
            do {
              if (*(char *)(puVar9 + 4) == '\0') goto LAB_1491b6e37;
              puVar9 = puVar9 + 7;
              lVar5 = lVar5 + -0x38;
            } while (lVar5 != 0);
          }
          puVar9 = (undefined8 *)0x0;
LAB_1491b6e37:
          puVar17 = &DAT_149dfb77a;
          if (*(int *)(puVar9 + 1) != 0) {
            puVar17 = (undefined2 *)*puVar9;
          }
          puVar16 = &DAT_149dfb77a;
          if ((int)uStack_60 != 0) {
            puVar16 = local_68;
          }
          FUN_140002266(&local_58,L"%s:%s",puVar16,puVar17);
          plVar6 = (longlong *)&DAT_149dfb77a;
          if (local_50 != 0) {
            plVar6 = local_58;
          }
          FUN_1446f470e(local_cc,plVar6,1);
          local_d0[0] = 0x40;
          FUN_1491b9f52(*(longlong *)(lVar8 + 0x28) + 0x30,local_dc,local_d0);
          if ((((uint)uStack_d6 < DAT_14c87eb08 + 1U) &&
              (CONCAT44(uStack_d4,CONCAT22(uStack_d6,local_d8)) != 0)) && (local_dc[0] != '\0')) {
            if (local_58 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            goto LAB_1491b6cc8;
          }
          FUN_14919e8cc(param_2,&local_b8);
          plVar6 = local_b8;
          if (local_b0 == 0) {
            plVar6 = (longlong *)&DAT_149dfb77a;
          }
          FUN_140002266(&local_98,
                        L"Cannot resolve connector %s because primary connector is not resolved",
                        plVar6);
          FUN_140233b1a(local_88,&local_98);
          FUN_140008f88(local_f0,local_88);
          if (local_88[0] != (longlong *)0x0) {
            (**(code **)(*local_88[0] + 0x10))();
          }
          if (local_98 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          local_88[0] = local_58;
          if (local_b8 != (longlong *)0x0) {
            FUN_1400020a8();
            local_88[0] = local_58;
          }
          goto LAB_1491b6cbc;
        }
        lVar7 = FUN_14479d2ce(lVar10);
        uVar18 = local_f0;
        if (lVar7 == 0) {
          if (*(longlong *)(lVar5 + 0x38) != 0) {
            lVar7 = FUN_140007850();
            cVar3 = (*(code *)PTR_FUN_14c758760)();
            if ((lVar7 == 0) || (cVar3 == '\0')) {
              FUN_14485c47a(lVar10,lVar7);
              if (lVar7 == 0) goto LAB_1491b7113;
            }
            else {
              uVar4 = *(uint *)(lVar7 + 0xc);
              if ((int)uVar4 < DAT_14c9647dc) {
                lVar5 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
              }
              else {
                lVar5 = 0;
              }
              if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
                FUN_14485c47a(lVar10,lVar7);
              }
            }
            if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0) goto LAB_1491b70df;
          }
LAB_1491b7113:
          lVar10 = 0;
        }
        else {
LAB_1491b70df:
          lVar5 = FUN_144a797b2();
          if (((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) ||
             ((lVar5 = FUN_1401242c6(), lVar5 == 0 ||
              (*(int *)(lVar7 + 0x38) < *(int *)(lVar5 + 0x38))))) goto LAB_1491b7113;
          lVar10 = 0;
          if (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30) {
            lVar10 = lVar7;
          }
        }
        local_98 = (longlong *)0x0;
        uStack_90 = 0;
        FUN_1401031ac(lVar10,0,&local_98);
        plVar6 = (longlong *)&DAT_149dfb77a;
        if ((int)uStack_90 != 0) {
          plVar6 = local_98;
        }
        FUN_14919e8cc(local_f8,&local_b8);
        plVar13 = (longlong *)&DAT_149dfb77a;
        if (local_b0 != 0) {
          plVar13 = local_b8;
        }
        pwVar11 = L"Cannot resolve connector %s to itself in class %s";
      }
      FUN_140002266(local_88,pwVar11,plVar13,plVar6);
      FUN_140233b1a(&local_58,local_88);
      FUN_140008f88(uVar18,&local_58);
      if (local_58 != (longlong *)0x0) {
        (**(code **)(*local_58 + 0x10))();
      }
      if (local_88[0] != (longlong *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1491b6caa;
    }
    puVar17 = local_68;
    if ((int)uStack_60 == 0) {
      puVar17 = &DAT_149dfb77a;
    }
    FUN_140002266(local_88,L"Could not find module %s",puVar17);
    FUN_140233b1a(&local_58,local_88);
    FUN_140008f88(param_4,&local_58);
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
LAB_1491b6cbc:
  if (local_88[0] != (longlong *)0x0) {
    FUN_1400020a8();
  }
  pplVar12 = (longlong **)0x0;
LAB_1491b6cc8:
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)pplVar12 & 0xffffffff;
LAB_1491b6a1b:
  if (uVar4 == (uint)pplVar12) {
LAB_1491b6a27:
    bVar14 = 0;
    plVar13 = plVar6;
    goto LAB_1491b6a29;
  }
LAB_1491b6973:
  plVar6 = plVar6 + 7;
  if (plVar6 == plVar13) goto LAB_1491b6a29;
  goto LAB_1491b690b;
}



// FUNCTION 1491b7252 FUN_1491b7252 body=541 status=ok
// SIG undefined FUN_1491b7252(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1491b7252(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_78 [36];
  int local_54 [3];
  undefined1 local_48 [4];
  undefined8 local_44;
  undefined1 local_3c [4];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3c[0] = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_3c);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_48[0] = 0;
  local_44 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_54[2] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_54 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_54 + 2);
  }
  local_54[1] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_54 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_54 + 1);
  }
  local_54[0] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_54);
  }
  puVar4 = local_48;
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = puVar3;
  }
  puVar3 = local_3c;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_14448f13e(param_1,puVar3,puVar4,local_54[0] != 0);
  *param_3 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b747c FUN_1491b747c body=263 status=ok
// SIG undefined FUN_1491b747c(void)

void FUN_1491b747c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14448f74c(param_1,local_38);
  *param_3 = 0;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b758a FUN_1491b758a body=181 status=ok
// SIG undefined FUN_1491b758a(void)

void FUN_1491b758a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1491b8bb6(param_1,local_38,0);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b7652 FUN_1491b7652 body=361 status=ok
// SIG undefined FUN_1491b7652(void)

void FUN_1491b7652(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  int local_40;
  undefined1 local_3c [4];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c[0] = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_3c);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  iVar2 = local_40;
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar4 = local_3c;
  if (puVar1 != (undefined1 *)0x0) {
    puVar4 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = FUN_144493ec8(param_1,puVar4,iVar2 != 0,0);
  *param_3 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b77c0 FUN_1491b77c0 body=161 status=ok
// SIG undefined FUN_1491b77c0(void)

void FUN_1491b77c0(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
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
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  *param_3 = 0;
  param_3[1] = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b7862 FUN_1491b7862 body=117 status=ok
// SIG undefined FUN_1491b7862(void)

void FUN_1491b7862(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1491b78d8(param_1,&local_28);
  FUN_1410e5bda(param_3,&local_28);
  FUN_1447a1747(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b78d8 FUN_1491b78d8 body=88 status=ok
// SIG undefined FUN_1491b78d8(void)

undefined8 * FUN_1491b78d8(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  *param_2 = 0;
  iVar1 = *(int *)(lVar2 + 0xa8);
  uVar3 = *(undefined8 *)(lVar2 + 0xa0);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_140b856de(param_2,iVar1,0);
    FUN_140b8566a(*param_2,uVar3,iVar1);
  }
  return param_2;
}



// FUNCTION 1491b7936 FUN_1491b7936 body=419 status=ok
// SIG undefined FUN_1491b7936(void)

void FUN_1491b7936(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_64;
  undefined2 local_60 [4];
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_60[0] = 0x301;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar1 = local_60;
  if (*(undefined2 **)(param_2 + 0x38) != (undefined2 *)0x0) {
    puVar1 = *(undefined2 **)(param_2 + 0x38);
  }
  local_64 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1491b7ada(param_1,&local_78,local_38,puVar1);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  *param_3 = local_78;
  *(undefined4 *)(param_3 + 1) = local_70;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_6c;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b7ada FUN_1491b7ada body=3142 status=ok
// SIG undefined FUN_1491b7ada(void)

longlong * FUN_1491b7ada(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  undefined1 uVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined2 *puVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_288 [32];
  void **local_268;
  char local_259;
  longlong local_258;
  longlong local_250;
  longlong *local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  undefined4 local_224;
  undefined1 local_21c [12];
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined2 *local_200;
  int local_1f8;
  undefined1 local_1ec [4];
  undefined2 *local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  void *local_1c8;
  int local_1c0;
  undefined4 local_1bc;
  undefined2 *local_1b8;
  longlong lStack_1b0;
  undefined2 *local_1a8;
  undefined1 *local_1a0;
  ulonglong local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined2 **local_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  ulonglong uStack_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_154;
  undefined8 local_148;
  undefined4 local_140;
  longlong local_138 [2];
  undefined1 local_128 [16];
  undefined8 local_118;
  int local_110;
  undefined8 local_10c;
  undefined4 local_104;
  longlong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  int local_d4;
  undefined8 local_c8;
  int local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined2 *local_98;
  longlong lStack_90;
  undefined8 local_88;
  int local_70;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  lVar6 = FUN_1491d324c(*(undefined8 *)(param_1 + 0x28),param_3);
  if (lVar6 == 0) goto LAB_1491b7d0a;
  lVar9 = lVar6 + 0x30;
  lVar7 = FUN_14479d2ce(lVar9);
  if (lVar7 == 0) {
    if (*(longlong *)(lVar6 + 0x38) == 0) goto LAB_1491b7d0a;
    lVar7 = FUN_140007850();
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar7 == 0) || (cVar4 == '\0')) {
      FUN_14485c47a(lVar9,lVar7);
      if (lVar7 == 0) goto LAB_1491b7d0a;
    }
    else {
      uVar2 = *(uint *)(lVar7 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      if ((*(uint *)(lVar8 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(lVar9,lVar7);
      }
    }
    if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) != 0) goto LAB_1491b7d0a;
  }
  lVar8 = FUN_144a797b2();
  if ((((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
        != lVar8 + 0x30)) || (lVar8 = FUN_1401242c6(), lVar8 == 0)) ||
     ((*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
       lVar8 + 0x30)))) {
LAB_1491b7d0a:
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_288);
  }
  FUN_1400021e4(lVar6,&local_1b8);
  if (1 < *(int *)(param_4 + 0x10)) {
    if (*(int *)(param_4 + 0x20) == 0) {
      puVar13 = &DAT_149dfb77a;
    }
    else {
      puVar13 = *(undefined2 **)(param_4 + 0x18);
    }
    local_268 = (void **)((ulonglong)local_268 & 0xffffffff00000000);
    FUN_140807d8e(&local_1b8,&local_98,*(undefined8 *)(param_4 + 8),puVar13);
    if (local_1b8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_1b8 = local_98;
    lStack_1b0 = lStack_90;
    local_e8._0_4_ = 0xffffffff;
    local_e8._4_4_ = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    local_d8 = 0;
    local_d4 = -1;
    FUN_1491bc09e(&local_e8,&local_1b8);
    FUN_1491bb336(param_1,&local_98,lVar6 + 0x20,&local_e8);
    uVar10 = FUN_1491bc052(&local_98);
    FUN_144a787a6(&local_1b8,uVar10);
    if (local_88._4_4_ != -1) {
      if (lStack_90 != 0) {
        FUN_1400020a8();
      }
      lStack_90 = 0;
      local_88 = 0xffffffff00000000;
    }
    if ((int)local_98 != -1) {
      local_98 = (undefined2 *)0xffffffff;
    }
    if ((local_d4 != -1) && (CONCAT44(uStack_dc,uStack_e0) != 0)) {
      FUN_1400020a8();
    }
  }
  FUN_1491d2fda(*(longlong *)(param_1 + 0x28) + 0x30,&local_98,param_3);
  local_c8 = 0;
  local_c0 = 0;
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_140bb2e20(&local_e8,lVar6 + 0xf8);
  lVar7 = FUN_14479d2ce(lVar9);
  if (lVar7 == 0) {
    if (*(longlong *)(lVar6 + 0x38) != 0) {
      lVar7 = FUN_140007850();
      cVar4 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar7 == 0) || (cVar4 == '\0')) {
        FUN_14485c47a(lVar9,lVar7);
        if (lVar7 == 0) goto LAB_1491b7dcf;
      }
      else {
        uVar2 = *(uint *)(lVar7 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        if ((*(uint *)(lVar8 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(lVar9,lVar7);
        }
      }
      if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0) goto LAB_1491b7c13;
    }
  }
  else {
LAB_1491b7c13:
    lVar9 = FUN_144a797b2();
    if ((((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8
           ) == lVar9 + 0x30)) && (lVar9 = FUN_1401242c6(), lVar9 != 0)) &&
       (*(int *)(lVar9 + 0x38) <= *(int *)(lVar7 + 0x38))) {
      local_258 = 0;
      if (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
          lVar9 + 0x30) {
        local_258 = lVar7;
      }
      bVar15 = local_258 != 0;
      if ((bVar15) && (DAT_14c950c29 != 0)) {
        local_258 = lVar7;
        FUN_1456cec3c();
        bVar15 = true;
      }
      goto LAB_1491b7dda;
    }
  }
LAB_1491b7dcf:
  bVar15 = false;
  local_258 = 0;
LAB_1491b7dda:
  local_1c8 = (void *)0x0;
  local_1c0 = *(int *)(lVar6 + 0x28);
  lVar9 = (longlong)local_1c0;
  _Src = *(void **)(lVar6 + 0x20);
  if (lVar9 == 0) {
    local_1bc = 0;
  }
  else {
    FUN_1446dd670(&local_1c8,local_1c0,0);
    memcpy(local_1c8,_Src,lVar9 * 2);
  }
  local_118 = 0;
  local_110 = 0;
  local_138[0] = 0;
  local_138[1] = 0;
  local_10c = 0xffffffff00000080;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  FUN_140bb2e20(local_138,lVar6 + 0xa8);
  local_1e0 = local_258;
  cVar4 = *(char *)(param_1 + 0x48);
  if (cVar4 == '\0') {
    FUN_1491d2b06(param_1 + 0x30,7,0);
  }
  if ((bVar15 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(local_1e0);
  }
  puVar13 = local_1b8;
  if ((int)lStack_1b0 == 0) {
    puVar13 = &DAT_149dfb77a;
  }
  local_259 = cVar4;
  FUN_1446f470e(&local_188,puVar13,1);
  local_268 = &local_1c8;
  FUN_14448deda(param_1,&local_1d8,&local_188);
  lVar6 = FUN_1491d324c(*(undefined8 *)(param_1 + 0x28),&local_1d8);
  if (lVar6 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    local_248 = (longlong *)0x100000000;
    local_238._0_4_ = 0xffffffff;
    local_238._4_4_ = 0;
    uStack_230 = uStack_230 & 0xffffffff00000000;
    uStack_240 = &local_88;
    if (local_70 == 0) {
      local_70 = 0;
    }
    else {
      FUN_1449c0562(&local_248);
    }
    local_170._0_4_ = (uint)local_238;
    local_170._4_4_ = local_238._4_4_;
    uStack_168 = uStack_230;
    uStack_180 = local_248;
    uStack_178 = (undefined4)uStack_240;
    uStack_174 = uStack_240._4_4_;
    local_188 = &local_98;
    if ((local_238._4_4_ != local_70) || (uStack_240 != &local_88)) {
      local_258 = CONCAT44(local_258._4_4_,local_70);
      local_250 = lVar6;
      do {
        puVar13 = *local_188;
        lVar6 = (longlong)local_170._4_4_;
        FUN_1400021e4(puVar13 + lVar6 * 0x10 + 8,&local_248);
        puVar12 = &DAT_149dfb77a;
        if (*(int *)(param_4 + 0x20) != 0) {
          puVar12 = *(undefined2 **)(param_4 + 0x18);
        }
        puVar11 = &DAT_149dfb77a;
        if (*(int *)(param_4 + 0x10) != 0) {
          puVar11 = *(undefined2 **)(param_4 + 8);
        }
        local_268 = (void **)((ulonglong)local_268 & 0xffffffff00000000);
        FUN_140807d8e(&local_248,&local_1a8,puVar11,puVar12);
        uVar1 = *(undefined1 *)(puVar13 + lVar6 * 0x10 + 6);
        puVar12 = &DAT_149dfb77a;
        if ((int)local_1a0 != 0) {
          puVar12 = local_1a8;
        }
        FUN_1446f470e(&local_200,puVar12,1);
        local_1e8 = local_200;
        local_1ec[0] = uVar1;
        FUN_1400021e4(puVar13 + lVar6 * 0x10 + 2,&local_210);
        FUN_1491d2e98(&local_200,&local_1d8,&local_210);
        if (CONCAT44(uStack_20c,local_210) != 0) {
          FUN_1400020a8();
        }
        lVar6 = local_250;
        puVar13 = &DAT_149dfb77a;
        if (local_1f8 != 0) {
          puVar13 = local_200;
        }
        FUN_1446f470e(&local_210,puVar13,1);
        local_21c[0] = 0x40;
        FUN_14448f13e(param_1,local_21c,local_1ec,0);
        FUN_1491d2e16(lVar6,&local_210);
        if (local_1d8 != 0) {
          FUN_1400020a8();
        }
        local_1d8 = CONCAT44(uStack_20c,local_210);
        uStack_1d0 = CONCAT44(uStack_204,uStack_208);
        if (local_200 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_1a8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_248 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        local_170._0_4_ = (uint)local_170 & ~uStack_180._4_4_;
        FUN_1449c0562(&uStack_180);
      } while (local_188 != &local_98 ||
               ((undefined8 *)CONCAT44(uStack_174,uStack_178) != &local_88 ||
               local_170._4_4_ != (int)local_258));
    }
    uStack_240 = (undefined8 *)&local_d8;
    local_248 = (longlong *)0x100000000;
    local_238 = (undefined1 *)0xffffffff;
    uStack_230 = uStack_230 & 0xffffffff00000000;
    if (local_c0 == 0) {
      iVar14 = 0;
    }
    else {
      FUN_1449c0562(&local_248);
      iVar14 = local_c0;
    }
    local_170 = local_238;
    uVar10 = local_170;
    uStack_168 = uStack_230;
    uStack_180 = local_248;
    uStack_178 = (undefined4)uStack_240;
    uStack_174 = uStack_240._4_4_;
    local_188 = (undefined2 **)&local_e8;
    local_170._4_4_ = (int)((ulonglong)local_238 >> 0x20);
    if ((local_170._4_4_ != iVar14) || (uStack_240 != (undefined8 *)&local_d8)) {
      iVar5 = local_170._4_4_;
      local_170 = uVar10;
      do {
        puVar13 = &DAT_149dfb77a;
        if (*(int *)(param_4 + 0x20) != 0) {
          puVar13 = *(undefined2 **)(param_4 + 0x18);
        }
        puVar12 = &DAT_149dfb77a;
        if (*(int *)(param_4 + 0x10) != 0) {
          puVar12 = *(undefined2 **)(param_4 + 8);
        }
        puVar11 = *local_188;
        local_268 = (void **)((ulonglong)local_268 & 0xffffffff00000000);
        FUN_140807d8e(puVar11 + (longlong)iVar5 * 0x10 + 4,&local_248,puVar12,puVar13);
        FUN_14448e266(param_1,&local_1d8,puVar11 + (longlong)iVar5 * 0x10,&local_248);
        if (local_248 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        local_170 = CONCAT44(local_170._4_4_,(uint)local_170 & ~uStack_180._4_4_);
        FUN_1449c0562(&uStack_180);
        iVar5 = local_170._4_4_;
        uVar10 = local_170;
      } while (local_188 != (undefined2 **)&local_e8 ||
               ((undefined4 *)CONCAT44(uStack_174,uStack_178) != &local_d8 ||
               local_170._4_4_ != iVar14));
    }
    local_170 = uVar10;
    uStack_168 = 0;
    local_160 = 0;
    local_188 = (undefined2 **)0x0;
    uStack_180 = (longlong *)0x0;
    local_15c = 0xffffffff00000080;
    local_154 = 0;
    local_148 = 0;
    local_140 = 0;
    local_1a8 = (undefined2 *)0x100000000;
    local_198 = 0xffffffff;
    local_190 = 0;
    iVar14 = 0;
    local_1a0 = local_128;
    if (local_110 != 0) {
      FUN_1449c0562(&local_1a8);
      iVar14 = local_110;
    }
    uStack_230 = local_198;
    uVar3 = uStack_230;
    local_228 = local_190;
    local_224 = local_18c;
    uStack_240 = (undefined8 *)local_1a8;
    local_238 = local_1a0;
    uStack_230._4_4_ = (int)(local_198 >> 0x20);
    local_248 = local_138;
    if ((uStack_230._4_4_ != iVar14) || (local_1a0 != local_128)) {
      iVar5 = uStack_230._4_4_;
      uStack_230 = uVar3;
      do {
        FUN_1444920c0(param_1,&local_1d8,*local_248 + (longlong)iVar5 * 0x20,
                      *local_248 + (longlong)iVar5 * 0x20 + 8);
        uStack_230 = CONCAT44(uStack_230._4_4_,(uint)uStack_230 & ~uStack_240._4_4_);
        FUN_1449c0562(&uStack_240);
        iVar5 = uStack_230._4_4_;
        uVar3 = uStack_230;
      } while (local_248 != local_138 || (local_238 != local_128 || uStack_230._4_4_ != iVar14));
    }
    uStack_230 = uVar3;
    *param_2 = local_1d8;
    local_1d8 = 0;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_1d0;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_1d0._4_4_;
    uStack_1d0 = 0;
    local_140 = 0;
    FUN_14472eaf0();
  }
  cVar4 = local_259;
  if (local_1d8 != 0) {
    FUN_1400020a8();
  }
  if ((cVar4 == '\0') && (*(char *)(param_1 + 0x48) == '\0')) {
    FUN_1491d2b06(param_1 + 0x30,8,0);
  }
  local_f0 = 0;
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(local_138);
  if (local_1c8 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(&local_e8);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14128f766(&local_98);
  if (local_1b8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b8728 FUN_1491b8728 body=447 status=ok
// SIG undefined FUN_1491b8728(void)

void FUN_1491b8728(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar1 = &local_40;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144490170(param_1,&local_58,local_38,puVar1);
  if (&local_58 == param_3) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_58;
    local_58 = 0;
    *(undefined4 *)(param_3 + 1) = local_50;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_4c;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b88ee FUN_1491b88ee body=441 status=ok
// SIG undefined FUN_1491b88ee(void)

void FUN_1491b88ee(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_4c;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144490f6c(param_1,&local_60,local_48 + 2,local_48);
  if (&local_60 == param_3) {
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_60;
    local_60 = 0;
    *(undefined4 *)(param_3 + 1) = local_58;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_54;
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b8ab4 FUN_1491b8ab4 body=257 status=ok
// SIG undefined FUN_1491b8ab4(void)

void FUN_1491b8ab4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_68 [44];
  int local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1491b8bb6(param_1,local_38,local_3c != 0);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b8bb6 FUN_1491b8bb6 body=308 status=ok
// SIG undefined FUN_1491b8bb6(void)

ulonglong FUN_1491b8bb6(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar5 = FUN_144a23846(*(longlong *)(param_1 + 0x28) + 0xa0);
  if (cVar5 != param_3) {
    lVar6 = FUN_1491d324c(*(undefined8 *)(param_1 + 0x28),param_2);
    if (lVar6 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x28);
      plVar1 = (longlong *)(lVar4 + 0xa0);
      if (param_3 == '\0') {
        local_48 = param_2;
        FUN_140c8411c(plVar1);
        uVar7 = 0xc;
      }
      else {
        iVar3 = *(int *)(lVar4 + 0xa8);
        *(uint *)(lVar4 + 0xa8) = iVar3 + 1U;
        if (*(uint *)(lVar4 + 0xac) < iVar3 + 1U) {
          FUN_1447a1bd6(plVar1,iVar3);
        }
        lVar4 = *plVar1;
        lVar9 = (longlong)iVar3 * 0x10;
        puVar2 = (undefined8 *)(lVar4 + lVar9);
        *(undefined8 *)(lVar4 + lVar9) = 0;
        iVar3 = *(int *)(param_2 + 1);
        param_2 = (undefined8 *)*param_2;
        *(int *)(lVar4 + 8 + lVar9) = iVar3;
        if ((longlong)iVar3 == 0) {
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar2,iVar3,0);
          memcpy((void *)*puVar2,param_2,(longlong)iVar3 * 2);
        }
        uVar7 = 0xb;
      }
      uVar8 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
      if (*(char *)(param_1 + 0x48) == '\0') {
        FUN_1491d2b06(param_1 + 0x30,uVar7,lVar6);
      }
      goto LAB_1491b8c8d;
    }
  }
  uVar8 = 0;
LAB_1491b8c8d:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b8cf8 FUN_1491b8cf8 body=462 status=ok
// SIG undefined FUN_1491b8cf8(void)

void FUN_1491b8cf8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  longlong local_58 [3];
  undefined8 local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar2 = &local_40;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1444920c0(param_1,local_38,puVar2,local_58);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b8ece FUN_1491b8ece body=201 status=ok
// SIG undefined FUN_1491b8ece(void)

void FUN_1491b8ece(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1491b8f98(param_1,plVar2);
  *param_3 = uVar1;
  FUN_1447a1747(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b8f98 FUN_1491b8f98 body=249 status=ok
// SIG undefined FUN_1491b8f98(void)

byte FUN_1491b8f98(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1491b78d8(param_1,&local_40);
  if ((longlong)local_38 == 0) {
    bVar3 = 0;
  }
  else {
    lVar5 = (longlong)local_38 << 4;
    bVar3 = 0;
    lVar4 = local_40;
    do {
      cVar1 = FUN_144a23846(param_2,lVar4);
      if (cVar1 == '\0') {
        bVar2 = FUN_1491b8bb6(param_1,lVar4,0);
        bVar3 = bVar3 | bVar2;
      }
      lVar4 = lVar4 + 0x10;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  if ((longlong)(int)param_2[1] != 0) {
    lVar4 = *param_2;
    lVar5 = (longlong)(int)param_2[1] << 4;
    do {
      cVar1 = FUN_144a23846(&local_40,lVar4);
      if (cVar1 == '\0') {
        bVar2 = FUN_1491b8bb6(param_1,lVar4,1);
        bVar3 = bVar3 | bVar2;
      }
      lVar4 = lVar4 + 0x10;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  FUN_1447a1747(local_40,local_38);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar3 & 1;
}



// FUNCTION 1491b909e FUN_1491b909e body=359 status=ok
// SIG undefined FUN_1491b909e(void)

void FUN_1491b909e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48 + 2);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_144492ca6(param_1,local_48 + 2,local_48);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b9212 FUN_1491b9212 body=383 status=ok
// SIG undefined FUN_1491b9212(void)

void FUN_1491b9212(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_44;
  longlong local_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = local_40;
  if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_144492f46(param_1,local_38,&local_50);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b939e FUN_1491b939e body=390 status=ok
// SIG undefined FUN_1491b939e(void)

void FUN_1491b939e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  int local_3c;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  iVar1 = local_3c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_38;
  if (local_38 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c();
  }
  local_50 = local_30;
  if ((local_30 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c();
  }
  FUN_1491b9526(param_1,&local_50,&local_48,iVar1 != 0);
  *param_3 = 1;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b9526 FUN_1491b9526 body=296 status=ok
// SIG undefined FUN_1491b9526(void)

void FUN_1491b9526(longlong param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined8 *local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *param_2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  lVar3 = *param_3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar3);
  }
  local_88[0] = (code *)0x0;
  puVar5 = (undefined8 *)FUN_14001cc68(0x28,8);
  *puVar5 = &PTR_FUN_14bb76da0;
  puVar5[1] = param_1;
  puVar5[2] = lVar2;
  local_78 = puVar5;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  bVar4 = DAT_14c950c29;
  puVar5[3] = lVar3;
  if ((lVar3 != 0 & bVar4) == 1) {
    FUN_1456cec3c(lVar3);
  }
  *(undefined1 *)(puVar5 + 4) = param_4;
  if (puVar5 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_88[0] = FUN_14449a248;
  }
  FUN_14606ecf0(uVar1,local_88);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b965c FUN_1491b965c body=365 status=ok
// SIG undefined FUN_1491b965c(void)

void FUN_1491b965c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar2 = &local_40;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_144493de8(param_1,local_38,puVar2);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b97ce FUN_1491b97ce body=616 status=ok
// SIG undefined FUN_1491b97ce(void)

undefined8 *
FUN_1491b97ce(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  void *_Src;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  iVar2 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 5) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar2,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar2 * 2);
  }
  puVar1 = param_1 + 6;
  lVar4 = *param_3;
  if (lVar4 == 0) {
LAB_1491b986e:
    param_1[9] = 0;
    param_1[10] = 0;
  }
  else {
    lVar6 = FUN_1401242c6();
    if (((lVar6 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar6 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
        lVar6 + 0x30)) goto LAB_1491b986e;
    lVar4 = *param_3;
    param_1[8] = 0;
    param_1[9] = 0;
    *puVar1 = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    if (lVar4 != 0) {
      FUN_1400bbfc4(&local_50,lVar4);
      *(undefined4 *)(param_1 + 7) = local_50;
      *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_4c;
      *(undefined4 *)(param_1 + 8) = uStack_48;
      *(undefined4 *)((longlong)param_1 + 0x44) = uStack_44;
      if (param_1 + 7 == (undefined8 *)&local_50) {
        if (local_40 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (param_1[9] != 0) {
          FUN_1400020a8();
        }
        param_1[9] = local_40;
        local_40 = 0;
        *(undefined4 *)(param_1 + 10) = local_38;
        *(undefined4 *)((longlong)param_1 + 0x54) = local_34;
      }
      cVar5 = (*(code *)PTR_FUN_14c758760)();
      if (cVar5 != '\0') {
        uVar3 = *(uint *)(lVar4 + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
          param_1[6] = 0;
          goto LAB_1491b9887;
        }
      }
      FUN_14485c47a(puVar1,lVar4);
      goto LAB_1491b9887;
    }
  }
  *puVar1 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
LAB_1491b9887:
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x2d] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b9a38 FUN_1491b9a38 body=1305 status=ok
// SIG undefined FUN_1491b9a38(void)

void FUN_1491b9a38(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  void *_Src;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_138 [40];
  longlong local_110;
  undefined2 *local_108;
  int iStack_100;
  int iStack_fc;
  undefined2 *local_f8;
  int local_f0;
  int local_ec;
  void *local_e8;
  ulonglong uStack_e0;
  ulonglong local_d8;
  undefined8 uStack_d0;
  undefined2 *local_c8;
  int iStack_c0;
  int iStack_bc;
  longlong local_b8 [4];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_98 = 0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  lVar6 = (longlong)(int)(*(longlong **)(param_1 + 0x28))[1];
  if (lVar6 != 0) {
    lVar9 = **(longlong **)(param_1 + 0x28);
    lVar6 = lVar6 * 0x170 + lVar9;
    local_110 = param_1;
    do {
      if (*(char *)(lVar9 + 0x18) == '\x01') {
        FUN_1491d2e16(lVar9,&local_c8);
        do {
          local_d8 = local_d8 & 0xffffffff00000000;
          iVar10 = iStack_c0 + -1;
          puVar7 = local_c8;
          if (iStack_c0 == 0) {
            iVar10 = 0;
            puVar7 = &DAT_149dfb77a;
          }
          uVar4 = FUN_144a49b4a(iVar10,puVar7);
          piVar5 = (int *)FUN_1491d2bb4(local_b8,uVar4,&local_c8,&local_d8);
          *piVar5 = *piVar5 + 1;
          cVar3 = FUN_1491d31c2(&local_c8,0,&local_c8,0);
        } while (cVar3 != '\0');
        if (local_c8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        local_c8 = (undefined2 *)((ulonglong)local_c8 & 0xffffffff00000000);
        puVar7 = &DAT_149dfb77a;
        iVar10 = 0;
        if (*(int *)(lVar9 + 0x10) != 0) {
          puVar7 = *(undefined2 **)(lVar9 + 8);
          iVar10 = *(int *)(lVar9 + 0x10) + -1;
        }
        uVar4 = FUN_144a49b4a(iVar10,puVar7);
        piVar5 = (int *)FUN_1491d2bb4(local_b8,uVar4,lVar9 + 8,&local_c8);
        *piVar5 = *piVar5 + 1;
      }
      lVar9 = lVar9 + 0x170;
    } while (lVar9 != lVar6);
    lVar6 = (longlong)(int)(*(longlong **)(local_110 + 0x28))[1];
    if (lVar6 != 0) {
      lVar9 = **(longlong **)(local_110 + 0x28);
      lVar12 = lVar6 * 0x170 + lVar9;
      lVar6 = local_110 + 0x30;
      lVar8 = local_110;
      do {
        if (*(char *)(lVar9 + 0x18) == '\x01') {
          FUN_1491d2e16(lVar9,&local_c8);
          if (1 < *(int *)(lVar9 + 0x28)) {
            local_d8 = 0;
            uStack_d0 = 0;
            local_e8 = (void *)0x0;
            uStack_e0 = 0;
            FUN_1491d2e16(lVar9,&local_f8);
            iStack_c0 = 0;
            if (iStack_bc < 0) {
              FUN_1446f8c06(&local_c8,0);
            }
            if (local_c8 != (undefined2 *)0x0) {
              *local_c8 = 0;
            }
            while( true ) {
              cVar3 = FUN_1491d31c2(&local_f8,&local_d8,&local_e8,1);
              _Src = local_e8;
              if (cVar3 == '\0') break;
              if (iStack_c0 < 2) {
                local_108 = (undefined2 *)0x0;
                lVar8 = (longlong)(int)uStack_e0;
                iStack_100 = (int)uStack_e0;
                if (lVar8 == 0) {
                  iStack_fc = 0;
                  lVar8 = local_110;
                }
                else {
                  FUN_1446dd670(&local_108,uStack_e0 & 0xffffffff,0);
                  memcpy(local_108,_Src,lVar8 * 2);
                  lVar8 = local_110;
                }
              }
              else {
                FUN_1491d2e98(&local_108,&local_e8,&local_c8);
              }
              if (local_c8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              local_c8 = local_108;
              iStack_c0 = iStack_100;
              puVar7 = local_108;
              if (iStack_100 == 0) {
                puVar7 = &DAT_149dfb77a;
              }
              iStack_bc = iStack_fc;
              iVar10 = iStack_100 + -1;
              if (iStack_100 == 0) {
                iVar10 = 0;
              }
              uVar4 = FUN_144a49b4a(iVar10,puVar7);
              iVar10 = FUN_144a7df4c(local_b8,uVar4,&local_c8);
              lVar11 = 0;
              if (iVar10 != -1) {
                lVar11 = (longlong)iVar10 * 0x20 + local_b8[0];
              }
              if (*(int *)(lVar11 + 0x10) == 1) {
                local_f0 = 0;
                if (local_ec < 0) {
                  FUN_1446f8c06(&local_f8,0);
                }
                if (local_f8 != (undefined2 *)0x0) {
                  *local_f8 = 0;
                }
                break;
              }
              iVar10 = (int)uStack_d0 + -1;
              if ((int)uStack_d0 == 0) {
                iVar10 = 0;
              }
              FUN_1402980a2(&local_f8,local_d8,iVar10);
            }
            if (1 < local_f0) {
              FUN_1491d2e98(&local_108,&local_f8,&local_c8);
              if (local_c8 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              iStack_c0 = iStack_100;
              iStack_bc = iStack_fc;
              local_c8 = local_108;
            }
            if (local_f8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_e8 != (void *)0x0) {
              FUN_1400020a8();
            }
            if (local_d8 != 0) {
              FUN_1400020a8();
            }
          }
          iVar10 = *(int *)(lVar9 + 0x10);
          if (iVar10 == iStack_c0) {
            if (1 < iVar10) {
              lVar11 = 0;
              while( true ) {
                uVar1 = *(ushort *)(*(longlong *)(lVar9 + 8) + lVar11);
                uVar2 = *(ushort *)((longlong)local_c8 + lVar11);
                if (uVar1 != uVar2) break;
                if (uVar1 == 0) goto LAB_1491b9c97;
LAB_1491b9c39:
                lVar11 = lVar11 + 2;
              }
              if ((uVar2 | uVar1) < 0x80) {
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[(uint)uVar2]) goto LAB_1491b9c39;
                iVar10 = (uint)(byte)(&DAT_149e05da0)[uVar1] -
                         (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
              }
              else {
                iVar10 = (uint)uVar1 - (uint)uVar2;
              }
              if (iVar10 != 0) goto LAB_1491b9c7e;
            }
          }
          else if (iVar10 + iStack_c0 != 1) {
LAB_1491b9c7e:
            iVar10 = iStack_c0 + -1;
            if (iStack_c0 == 0) {
              iVar10 = 0;
            }
            FUN_1402980a2((longlong *)(lVar9 + 8),local_c8,iVar10);
            if (*(char *)(lVar8 + 0x48) == '\0') {
              FUN_1491d2b06(lVar6,6,lVar9);
            }
          }
LAB_1491b9c97:
          if (local_c8 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
        }
        lVar9 = lVar9 + 0x170;
      } while (lVar9 != lVar12);
    }
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_14062c7dc(local_b8);
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491b9f52 FUN_1491b9f52 body=239 status=ok
// SIG undefined FUN_1491b9f52(void)

undefined8 * FUN_1491b9f52(longlong *param_1,undefined8 *param_2,char *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 != 0) {
    lVar2 = *param_1;
    lVar4 = 0;
    do {
      if ((*(longlong *)(param_3 + 4) == *(longlong *)(lVar2 + 4 + lVar4)) &&
         (*param_3 == *(char *)(lVar2 + lVar4))) {
        uVar5 = (int)(lVar4 >> 3) * -0x55555555;
        if ((int)uVar5 < iVar1 && -1 < (int)uVar5) {
          *(undefined4 *)(param_2 + 1) =
               *(undefined4 *)(lVar2 + 0x14 + (ulonglong)(uVar5 & 0x7fffffff) * 0x18);
          uVar3 = *(undefined8 *)(lVar2 + 0xc + (ulonglong)(uVar5 & 0x7fffffff) * 0x18);
          goto LAB_1491b9fc2;
        }
        break;
      }
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar4);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc07470) {
    FUN_144b3d300(&DAT_14cc07470);
    if (DAT_14cc07470 == -1) {
      DAT_14cc07464._0_4_ = (uint)DAT_14cc07464 & 0xffffff00;
      DAT_14cc07464._4_4_ = 0;
      DAT_14cc0746c = 0;
      _Init_thread_footer(&DAT_14cc07470);
    }
  }
  *(undefined4 *)(param_2 + 1) = DAT_14cc0746c;
  uVar3 = CONCAT44(DAT_14cc07464._4_4_,(uint)DAT_14cc07464);
LAB_1491b9fc2:
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 1491ba042 FUN_1491ba042 body=235 status=ok
// SIG undefined FUN_1491ba042(void)

void FUN_1491ba042(longlong *param_1,undefined8 *param_2,byte *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1491ba12e();
  uStack_38 = *(undefined4 *)(param_2 + 1);
  local_40 = *param_2;
  uStack_34 = (undefined4)*(undefined8 *)param_3;
  uStack_30 = (undefined4)((ulonglong)*(undefined8 *)param_3 >> 0x20);
  uStack_2c = *(undefined4 *)(param_3 + 8);
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1491c60d8(param_1,iVar2);
  }
  lVar3 = *param_1;
  *(ulonglong *)(lVar3 + 0x10 + (longlong)iVar2 * 0x18) = CONCAT44(uStack_2c,uStack_30);
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x18);
  *puVar1 = (undefined4)local_40;
  puVar1[1] = local_40._4_4_;
  puVar1[2] = uStack_38;
  puVar1[3] = uStack_34;
  uVar5 = *(undefined8 *)(param_3 + 4);
  uVar4 = (uint)((ulonglong)uVar5 >> 0x10);
  uVar6 = (uint)uVar5 & 0xffff;
  uVar5 = FUN_1491c5262(param_1 + 2,
                        (uint)*param_3 +
                        (((uint)uVar5 << 0x10 | uVar6) + (int)((ulonglong)uVar5 >> 0x20) +
                         (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 10,param_3);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_149197016(uVar5,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491ba12e FUN_1491ba12e body=563 status=ok
// SIG undefined FUN_1491ba12e(void)

void FUN_1491ba12e(longlong *param_1,char *param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar8 = (int)param_1[1];
  if ((longlong)iVar8 != 0) {
    lVar3 = *param_1;
    lVar6 = 0;
    do {
      if ((*(longlong *)(param_2 + 4) == *(longlong *)(lVar3 + 4 + lVar6)) &&
         (*param_2 == *(char *)(lVar3 + lVar6))) {
        uVar10 = (int)(lVar6 >> 3) * -0x55555555;
        if ((int)uVar10 < iVar8 && -1 < (int)uVar10) {
          uVar9 = (ulonglong)(uVar10 & 0x7fffffff);
          if ((int)param_1[3] == *(int *)((longlong)param_1 + 0x44)) goto LAB_1491ba255;
          lVar6 = *(longlong *)(lVar3 + 0x10 + uVar9 * 0x18);
          uVar4 = (uint)((ulonglong)lVar6 >> 0x10);
          uVar7 = (uint)lVar6 & 0xffff;
          bVar2 = *(byte *)(lVar3 + 0xc + uVar9 * 0x18);
          plVar5 = param_1 + 9;
          if ((longlong *)param_1[10] != (longlong *)0x0) {
            plVar5 = (longlong *)param_1[10];
          }
          iVar8 = *(int *)((longlong)plVar5 +
                          (ulonglong)
                          ((int)param_1[0xb] - 1U &
                          (uint)bVar2 +
                          ((int)((ulonglong)lVar6 >> 0x20) + ((uint)lVar6 << 0x10 | uVar7) +
                           (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar7 >> 4)) * 10) * 4);
          if (iVar8 == -1) goto LAB_1491ba255;
          lVar3 = param_1[2];
          goto LAB_1491ba29f;
        }
        break;
      }
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar8 * 0x18 != lVar6);
  }
  goto LAB_1491ba1ae;
  while (iVar8 = *(int *)(lVar1 + 0x20), iVar8 != -1) {
LAB_1491ba29f:
    lVar1 = lVar3 + (longlong)iVar8 * 0x28;
    if ((*(longlong *)(lVar1 + 4) == lVar6) && (*(byte *)(lVar3 + (longlong)iVar8 * 0x28) == bVar2))
    {
      plVar5 = (longlong *)(lVar1 + 0x10);
      if (plVar5 != (longlong *)0x0 && lVar1 != 0) {
        local_68 = *(undefined8 *)param_2;
        local_60 = *(undefined4 *)(param_2 + 8);
        FUN_1491c616c(plVar5,&local_58);
        if (plVar5 == &local_58) {
          if (local_58 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(lVar1 + 0x10) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(lVar1 + 0x10) = local_58;
          local_58 = 0;
          *(undefined4 *)(lVar1 + 0x18) = local_50;
          *(undefined4 *)(lVar1 + 0x1c) = local_4c;
        }
        if (*(int *)(lVar1 + 0x18) == 0) {
          FUN_1491c6202(param_1 + 2,*param_1 + uVar9 * 0x18 + 0xc);
        }
      }
      break;
    }
  }
LAB_1491ba255:
  iVar8 = (int)param_1[1];
  if (~uVar10 + iVar8 != 0) {
    memmove((void *)(*param_1 + uVar9 * 0x18),(void *)(*param_1 + uVar9 * 0x18 + 0x18),
            (longlong)(int)(~uVar10 + iVar8) * 0x18);
    iVar8 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar8 + -1;
  FUN_1491c636a(param_1);
LAB_1491ba1ae:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491ba362 FUN_1491ba362 body=2563 status=ok
// SIG undefined FUN_1491ba362(void)

undefined4
FUN_1491ba362(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  uint uVar1;
  void *_Src;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  undefined1 auStack_108 [32];
  undefined2 *local_e8;
  undefined2 *local_e0;
  undefined2 *local_d8;
  int local_d0;
  undefined2 *local_c8;
  int local_c0;
  longlong local_b8 [2];
  longlong *local_a8;
  int local_a0;
  longlong local_98;
  longlong local_90;
  undefined2 *local_88;
  int local_80;
  longlong *local_78;
  int local_70;
  undefined4 local_6c;
  longlong *local_68;
  int local_60;
  undefined4 local_5c;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar4 = FUN_1491d324c(*(undefined8 *)(param_1 + 0x28));
  if (lVar4 == 0) {
    if (*(int *)(param_2 + 1) == 0) {
      puVar14 = &DAT_149dfb77a;
    }
    else {
      puVar14 = (undefined2 *)*param_2;
    }
    pwVar9 = L"Could not find module %s";
LAB_1491ba540:
    FUN_140002266(&local_68,pwVar9,puVar14);
    FUN_140233b1a(&local_58,&local_68);
    FUN_140008f88(param_5,&local_58);
    plVar11 = local_68;
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
      plVar11 = local_68;
    }
  }
  else {
    lVar7 = lVar4 + 0x30;
    lVar5 = FUN_14479d2ce(lVar7);
    if (lVar5 == 0) {
      if (*(longlong *)(lVar4 + 0x38) != 0) {
        lVar5 = FUN_140007850();
        cVar2 = (*(code *)PTR_FUN_14c758760)();
        if ((lVar5 == 0) || (cVar2 == '\0')) {
          FUN_14485c47a(lVar7,lVar5);
          if (lVar5 == 0) goto LAB_1491ba527;
        }
        else {
          uVar1 = *(uint *)(lVar5 + 0xc);
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar6 = 0;
          }
          if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
            FUN_14485c47a(lVar7,lVar5);
          }
        }
        if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) goto LAB_1491ba3c8;
      }
LAB_1491ba527:
      if (*(int *)(param_2 + 1) == 0) {
        puVar14 = &DAT_149dfb77a;
      }
      else {
        puVar14 = (undefined2 *)*param_2;
      }
      pwVar9 = L"Class defined in module %s is not valid";
      goto LAB_1491ba540;
    }
LAB_1491ba3c8:
    lVar6 = FUN_144a797b2();
    if ((((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) != lVar6 + 0x30)) || (lVar6 = FUN_1401242c6(), lVar6 == 0)) ||
       ((*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
         lVar6 + 0x30)))) goto LAB_1491ba527;
    lVar5 = FUN_14479d2ce();
    if (lVar5 == 0) {
      if (*(longlong *)(lVar4 + 0x38) != 0) {
        lVar5 = FUN_140007850();
        cVar2 = (*(code *)PTR_FUN_14c758760)();
        if ((lVar5 == 0) || (cVar2 == '\0')) {
          FUN_14485c47a(lVar7,lVar5);
          if (lVar5 == 0) goto LAB_1491ba640;
        }
        else {
          uVar1 = *(uint *)(lVar5 + 0xc);
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar4 = 0;
          }
          if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
            FUN_14485c47a(lVar7,lVar5);
          }
        }
        if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) goto LAB_1491ba431;
      }
LAB_1491ba640:
      lVar7 = 0;
    }
    else {
LAB_1491ba431:
      lVar4 = FUN_144a797b2();
      if ((((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) ||
          (lVar4 = FUN_1401242c6(), lVar4 == 0)) ||
         (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) goto LAB_1491ba640;
      lVar7 = 0;
      if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30) {
        lVar7 = lVar5;
      }
    }
    plVar11 = *(longlong **)(lVar7 + 0x70);
    if (plVar11 != (longlong *)0x0) {
      do {
        if (plVar11[4] == *param_3) {
          if ((*(uint *)(plVar11 + 7) & 0x10010) != 0) {
            puVar14 = &DAT_149dfb77a;
            if (*(int *)(param_2 + 1) != 0) {
              puVar14 = (undefined2 *)*param_2;
            }
            FUN_1400021e4(param_3,&local_78);
            plVar11 = (longlong *)&DAT_149dfb77a;
            if (local_70 != 0) {
              plVar11 = local_78;
            }
            pwVar9 = L"The target variable %s in module %s is read only";
            goto LAB_1491ba6e3;
          }
          local_58 = (longlong *)0x0;
          uStack_50 = 0;
          local_68 = (longlong *)0x0;
          local_60 = *(int *)(param_4 + 1);
          lVar4 = (longlong)local_60;
          _Src = (void *)*param_4;
          if (lVar4 == 0) {
            local_5c = 0;
          }
          else {
            FUN_1446dd670(&local_68,local_60,0);
            memcpy(local_68,_Src,lVar4 * 2);
          }
          FUN_1491d31c2(param_4,&local_58,&local_68,1);
          if ((int)uStack_50 < 2) {
            lVar4 = *(longlong *)(param_1 + 0x20);
            if (lVar4 == 0) goto LAB_1491ba7fc;
            lVar7 = FUN_141225fe0();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_1491ba7fc;
            lVar7 = *(longlong *)(lVar4 + 0x30);
            if (((lVar7 == 0) ||
                ((lVar5 = FUN_1446f8646(), lVar5 == 0 ||
                 (*(int *)(lVar7 + 0x38) < *(int *)(lVar5 + 0x38))))) ||
               (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
                lVar5 + 0x30)) {
              lVar4 = 0;
            }
            else {
              lVar4 = *(longlong *)(lVar4 + 0x30);
            }
            plVar10 = local_68;
            if (local_60 == 0) {
              plVar10 = (longlong *)&DAT_149dfb77a;
            }
            FUN_1446f470e(&local_98,plVar10,1);
            plVar10 = *(longlong **)(lVar4 + 0x70);
            if (plVar10 == (longlong *)0x0) goto LAB_1491ba7fc;
            goto LAB_1491baa96;
          }
          lVar4 = FUN_1491d324c(*(undefined8 *)(param_1 + 0x28),&local_58);
          if (lVar4 == 0) {
            plVar11 = local_58;
            if ((int)uStack_50 == 0) {
              plVar11 = (longlong *)&DAT_149dfb77a;
            }
            pwVar9 = L"Could not find source module %s";
            goto LAB_1491ba854;
          }
          iVar8 = 0;
          if (*(int *)(param_2 + 1) == 0) {
            puVar14 = &DAT_149dfb77a;
          }
          else {
            puVar14 = (undefined2 *)*param_2;
            iVar8 = *(int *)(param_2 + 1) + -1;
          }
          cVar2 = FUN_144a791f8(&local_58,puVar14,iVar8,1);
          if (cVar2 != '\0') {
            puVar14 = &DAT_149dfb77a;
            plVar11 = (longlong *)&DAT_149dfb77a;
            if ((int)uStack_50 != 0) {
              plVar11 = local_58;
            }
            if (*(int *)(param_2 + 1) != 0) {
              puVar14 = (undefined2 *)*param_2;
            }
            FUN_140002266(&local_88,
                          L"Cannot bind variable of module %s to a variable of module %s because the source module is a child of the target module"
                          ,puVar14,plVar11);
            goto LAB_1491ba864;
          }
          lVar7 = lVar4 + 0x30;
          lVar5 = FUN_14479d2ce(lVar7);
          if (lVar5 == 0) {
            if (*(longlong *)(lVar4 + 0x38) != 0) {
              lVar5 = FUN_140007850();
              cVar2 = (*(code *)PTR_FUN_14c758760)();
              if ((lVar5 == 0) || (cVar2 == '\0')) {
                FUN_14485c47a(lVar7,lVar5);
                if (lVar5 == 0) goto LAB_1491baae8;
              }
              else {
                uVar1 = *(uint *)(lVar5 + 0xc);
                if ((int)uVar1 < DAT_14c9647dc) {
                  lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
                }
                else {
                  lVar4 = 0;
                }
                if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
                  FUN_14485c47a(lVar7,lVar5);
                }
              }
              if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) goto LAB_1491ba963;
            }
LAB_1491baae8:
            lVar7 = 0;
          }
          else {
LAB_1491ba963:
            lVar4 = FUN_144a797b2();
            if ((((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) ||
                (lVar4 = FUN_1401242c6(), lVar4 == 0)) ||
               (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) goto LAB_1491baae8;
            lVar7 = 0;
            if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
                lVar4 + 0x30) {
              lVar7 = lVar5;
            }
          }
          plVar10 = local_68;
          if (local_60 == 0) {
            plVar10 = (longlong *)&DAT_149dfb77a;
          }
          FUN_1446f470e(&local_90,plVar10,1);
          plVar10 = *(longlong **)(lVar7 + 0x70);
          if (plVar10 == (longlong *)0x0) goto LAB_1491ba7fc;
          goto LAB_1491bab28;
        }
        plVar11 = (longlong *)plVar11[9];
      } while (plVar11 != (longlong *)0x0);
    }
    puVar14 = &DAT_149dfb77a;
    if (*(int *)(param_2 + 1) != 0) {
      puVar14 = (undefined2 *)*param_2;
    }
    FUN_1400021e4(param_3,&local_78);
    plVar11 = (longlong *)&DAT_149dfb77a;
    if (local_70 != 0) {
      plVar11 = local_78;
    }
    pwVar9 = L"Could not find variable %s in module %s";
LAB_1491ba6e3:
    FUN_140002266(&local_68,pwVar9,plVar11,puVar14);
    FUN_140233b1a(&local_58,&local_68);
    FUN_140008f88(param_5,&local_58);
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x10))();
    }
    plVar11 = local_78;
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
      plVar11 = local_78;
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = 0;
  goto LAB_1491ba590;
  while (plVar10 = (longlong *)plVar10[9], plVar10 != (longlong *)0x0) {
LAB_1491baa96:
    if (plVar10[4] == local_98) goto LAB_1491bab3e;
  }
  goto LAB_1491ba7fc;
LAB_1491bab3e:
  plVar12 = local_68;
  if ((int)uStack_50 < 2) {
    local_78 = (longlong *)0x0;
    lVar4 = (longlong)local_60;
    local_70 = local_60;
    if (lVar4 == 0) {
      local_6c = 0;
    }
    else {
      FUN_1446dd670(&local_78,local_60,0);
      memcpy(local_78,plVar12,lVar4 * 2);
    }
  }
  else {
    FUN_1491d2e98(&local_78,&local_58,&local_68);
  }
  uVar3 = FUN_14448ccc2(plVar10,plVar11);
  if ((char)uVar3 == '\0') {
    FUN_1400021e4(param_3,&local_a8);
    puVar14 = &DAT_149dfb77a;
    plVar12 = (longlong *)&DAT_149dfb77a;
    if (local_a0 != 0) {
      plVar12 = local_a8;
    }
    if (*(int *)(param_2 + 1) != 0) {
      puVar14 = (undefined2 *)*param_2;
    }
    FUN_140002266(&local_88,L"%s.%s",puVar14,plVar12);
    if (local_a8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    (**(code **)(*plVar11 + 0x70))(plVar11,&local_c8,0,0);
    local_e0 = &DAT_149dfb77a;
    if (local_c0 != 0) {
      local_e0 = local_c8;
    }
    puVar14 = &DAT_149dfb77a;
    if (local_80 != 0) {
      puVar14 = local_88;
    }
    (**(code **)(*plVar10 + 0x70))(plVar10,&local_d8,0,0);
    puVar13 = &DAT_149dfb77a;
    if (local_d0 != 0) {
      puVar13 = local_d8;
    }
    plVar11 = (longlong *)&DAT_149dfb77a;
    if (local_70 != 0) {
      plVar11 = local_78;
    }
    local_e8 = puVar14;
    FUN_140002266(local_b8,L"Property %s of type %s and %s of type %s are not compatible",plVar11,
                  puVar13);
    FUN_140233b1a(&local_a8,local_b8);
    FUN_140008f88(param_5,&local_a8);
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x10))();
    }
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_d8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_c8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_1491ba8a4;
  while (plVar10 = (longlong *)plVar10[9], plVar10 != (longlong *)0x0) {
LAB_1491bab28:
    if (plVar10[4] == local_90) goto LAB_1491bab3e;
  }
LAB_1491ba7fc:
  if (*(int *)(param_4 + 1) == 0) {
    plVar11 = (longlong *)&DAT_149dfb77a;
  }
  else {
    plVar11 = (longlong *)*param_4;
  }
  pwVar9 = L"Could not find source variable %s";
LAB_1491ba854:
  FUN_140002266(&local_88,pwVar9,plVar11);
LAB_1491ba864:
  FUN_140233b1a(&local_78,&local_88);
  FUN_140008f88(param_5,&local_78);
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = 0;
LAB_1491ba8a4:
  if (local_68 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1491ba590:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491bad66 FUN_1491bad66 body=163 status=ok
// SIG undefined FUN_1491bad66(void)

void FUN_1491bad66(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  void *_Dst;
  longlong lVar5;
  
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar5 = 0;
    do {
      cVar3 = FUN_1491d2972(lVar1 + lVar5,param_2);
      if (cVar3 != '\0') {
        uVar4 = (int)(lVar5 >> 4) * -0x1642c859;
        if (uVar4 == 0xffffffff) {
          return;
        }
        _Dst = (void *)(lVar1 + (longlong)(int)uVar4 * 0x170);
        FUN_145d305dd(_Dst,1);
        memmove(_Dst,(void *)((longlong)_Dst + 0x170),
                (longlong)(int)(~uVar4 + (int)param_1[1]) * 0x170);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        return;
      }
      lVar5 = lVar5 + 0x170;
    } while ((longlong)(int)lVar2 * 0x170 - lVar5 != 0);
  }
  return;
}



// FUNCTION 1491bae0a FUN_1491bae0a body=675 status=ok
// SIG undefined FUN_1491bae0a(void)

undefined4 FUN_1491bae0a(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  size_t sVar4;
  longlong lVar5;
  undefined2 *puVar6;
  bool bVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined1 local_6c [4];
  longlong local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*param_3 == 0) {
LAB_1491bae5f:
    FUN_140056680(local_68,L"Name is empty.");
LAB_1491bae73:
    FUN_140233b1a(&local_58,local_68);
    FUN_140008f88(param_4,&local_58);
    if ((longlong *)CONCAT44(uStack_54,local_58) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_54,local_58) + 0x10))();
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_1400021e4(param_3,&local_58);
    iVar2 = iStack_50;
    if (CONCAT44(uStack_54,local_58) != 0) {
      FUN_1400020a8();
    }
    if (iVar2 < 2) goto LAB_1491bae5f;
    FUN_1400021e4(param_3,&local_58);
    puVar1 = PTR_DAT_14c764f40;
    if (PTR_DAT_14c764f40 == (undefined *)0x0) {
      bVar7 = false;
    }
    else {
      sVar4 = wcslen((wchar_t *)PTR_DAT_14c764f40);
      local_80 = 0xffffffff;
      local_88 = 0;
      iVar2 = FUN_1447ee042(&local_58,puVar1,sVar4 & 0xffffffff,1);
      bVar7 = iVar2 != -1;
    }
    if (CONCAT44(uStack_54,local_58) != 0) {
      FUN_1400020a8();
    }
    if (!bVar7) {
      lVar5 = FUN_1491d324c(*(undefined8 *)(param_1 + 0x28),param_2);
      if (lVar5 != 0) {
        local_68[0] = 0;
        local_68[1] = 0;
        local_58 = 0xffffffff;
        uStack_54 = 0;
        iStack_50 = 0;
        uStack_4c = 0;
        uStack_48 = 0;
        local_44 = -1;
        if ((longlong *)&local_58 != param_3) {
          local_58 = (undefined4)*param_3;
          uStack_54 = (undefined4)((ulonglong)*param_3 >> 0x20);
        }
        uVar3 = FUN_1491bb0ae(param_1,lVar5 + 0x20,&local_58,local_68);
        if ((local_44 != -1) && (CONCAT44(uStack_4c,iStack_50) != 0)) {
          FUN_1400020a8();
        }
        if ((char)uVar3 == '\0') {
          FUN_140009b9a(&local_58,local_68);
          FUN_140008f88(param_4,&local_58);
          if ((longlong *)CONCAT44(uStack_54,local_58) != (longlong *)0x0) {
            (**(code **)(*(longlong *)CONCAT44(uStack_54,local_58) + 0x10))();
          }
        }
        if (local_68[0] != 0) {
          FUN_1400020a8();
        }
        goto LAB_1491baead;
      }
      if (*(int *)(param_2 + 1) == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      else {
        puVar6 = (undefined2 *)*param_2;
      }
      FUN_140002266(local_68,L"Module %s not found.",puVar6);
      goto LAB_1491bae73;
    }
    local_58 = 0x4bb700ca;
    uStack_54 = 1;
    iStack_50 = 0x1e;
    FUN_1446e940c(local_68,&local_58);
    local_58 = 0x4bb70108;
    uStack_54 = 1;
    iStack_50 = 0x14;
    FUN_1446e940c(local_6c,&local_58);
    FUN_140208bae(&local_58,local_6c,local_68,L"Name contains namespace separator \':\'.");
    FUN_140008f88(param_4,&local_58);
    if ((longlong *)CONCAT44(uStack_54,local_58) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_54,local_58) + 0x10))();
    }
  }
  uVar3 = 0;
LAB_1491baead:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491bb0ae FUN_1491bb0ae body=647 status=ok
// SIG undefined FUN_1491bb0ae(void)

ulonglong FUN_1491bb0ae(longlong param_1,longlong param_2,int *param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  _func_5014 *p_Var5;
  undefined4 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int local_7c;
  undefined8 local_78;
  longlong local_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*param_3 == -1) {
    local_78 = 0xffffffff;
  }
  else {
    local_78 = *(undefined8 *)param_3;
  }
  FUN_141121e90(&local_70,param_3 + 2);
  FUN_1491bbeec(&local_78);
  local_90 = 0;
  cVar3 = FUN_1491bc10a(&local_78,param_3,&local_90);
  if (cVar3 == '\0') {
    if (param_4 != 0) {
      puVar10 = &DAT_14cc07408;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cc07418) {
        puVar6 = &DAT_14cc07418;
        FUN_144b3d300(&DAT_14cc07418);
        if (DAT_14cc07418 == -1) {
          puVar10 = &DAT_14cc07408;
          local_a0 = param_4;
          FUN_140056680(&DAT_14cc07408,L"Name contains invalid characters.");
          p_Var5 = (_func_5014 *)&LAB_144494ced;
LAB_1491bb31f:
          atexit(p_Var5);
          _Init_thread_footer(puVar6);
          param_4 = local_a0;
        }
      }
LAB_1491bb21b:
      FUN_144a787a6(param_4,puVar10);
    }
LAB_1491bb226:
    uVar9 = 0;
  }
  else {
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x28) + 0x10);
    if (1 < *(int *)(param_2 + 8)) {
      lVar4 = FUN_1491d324c(*(longlong *)(param_1 + 0x28),param_2);
      if (lVar4 != 0) {
        plVar7 = (longlong *)(lVar4 + 0x160);
      }
    }
    lVar4 = plVar7[1];
    uVar9 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    if ((longlong)(int)lVar4 != 0) {
      lVar1 = *plVar7;
      lVar8 = 0;
      local_a0 = param_4;
      do {
        local_90 = 0xffffffff;
        uStack_8c = 0;
        uStack_88 = 0;
        uStack_84 = 0;
        uStack_80 = 0;
        local_7c = -1;
        if (*(undefined8 **)(lVar1 + lVar8) != (undefined8 *)&local_90) {
          uVar2 = **(undefined8 **)(lVar1 + lVar8);
          local_90 = (undefined4)uVar2;
          uStack_8c = (undefined4)((ulonglong)uVar2 >> 0x20);
        }
        local_94 = 1;
        cVar3 = FUN_1491bc10a(&local_90,&local_78,&local_94);
        if ((local_7c != -1) && (CONCAT44(uStack_84,uStack_88) != 0)) {
          FUN_1400020a8();
        }
        param_4 = local_a0;
        if (cVar3 != '\0') {
          if (local_a0 == 0) goto LAB_1491bb226;
          puVar10 = &DAT_14cc07420;
          if (DAT_14cc07430 <=
              *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110))
          goto LAB_1491bb21b;
          puVar6 = &DAT_14cc07430;
          FUN_144b3d300(&DAT_14cc07430);
          if (DAT_14cc07430 != -1) goto LAB_1491bb21b;
          puVar10 = &DAT_14cc07420;
          FUN_140056680(&DAT_14cc07420,L"This name is already in use.");
          p_Var5 = (_func_5014 *)&LAB_144494cfe;
          goto LAB_1491bb31f;
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)(int)lVar4 * 8 != lVar8);
    }
  }
  if ((local_64 != -1) && (local_70 != 0)) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1491bb336 FUN_1491bb336 body=414 status=ok
// SIG undefined FUN_1491bb336(void)

undefined8 * FUN_1491bb336(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int *param_4)

{
  void *_Src;
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  undefined8 local_60;
  void *local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_4 == -1) {
    local_60 = 0xffffffff;
  }
  else {
    local_60 = *(undefined8 *)param_4;
  }
  FUN_141121e90(&local_58,param_4 + 2);
  FUN_1491bbeec(&local_60);
  _Src = local_58;
  uVar2 = local_60;
  if ((int)local_60 == -1) {
    uVar2 = 0xffffffff;
  }
  *param_2 = uVar2;
  param_2[1] = 0;
  if (local_4c == -1) {
    param_2[2] = 0xffffffff00000000;
  }
  else {
    *(int *)(param_2 + 2) = local_50;
    if ((longlong)local_50 == 0) {
      *(undefined4 *)((longlong)param_2 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(param_2 + 1,local_50,0);
      memcpy((void *)param_2[1],_Src,(longlong)local_50 * 2);
    }
  }
  cVar1 = FUN_1491bb0ae(param_1,param_3,param_2,0);
  if (cVar1 == '\0') {
    iVar4 = 1;
    do {
      puVar3 = (undefined8 *)FUN_1491bc052(&local_60);
      puVar5 = &DAT_149dfb77a;
      if (*(int *)(puVar3 + 1) != 0) {
        puVar5 = (undefined2 *)*puVar3;
      }
      FUN_140002266(local_70,L"%s_%d",puVar5,iVar4);
      FUN_1491bc09e(param_2,local_70);
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      cVar1 = FUN_1491bb0ae(param_1,param_3,param_2,0);
      iVar4 = iVar4 + 1;
    } while (cVar1 == '\0');
  }
  if ((local_4c != -1) && (local_58 != (void *)0x0)) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1491bb4d6 FUN_1491bb4d6 body=206 status=ok
// SIG undefined FUN_1491bb4d6(void)

undefined4 FUN_1491bb4d6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  local_58[1] = 0;
  local_48 = 0xffffffff;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  local_34 = -1;
  FUN_1491bc09e(&local_48);
  uVar1 = FUN_1491bb5a6(param_1,&local_48,local_58);
  if ((local_34 != -1) && (CONCAT44(uStack_3c,uStack_40) != 0)) {
    FUN_1400020a8();
  }
  if ((char)uVar1 == '\0') {
    FUN_140009b9a(&local_48,local_58);
    FUN_140008f88(param_3,&local_48);
    if ((longlong *)CONCAT44(uStack_44,local_48) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_44,local_48) + 0x10))();
    }
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491bb5a6 FUN_1491bb5a6 body=687 status=ok
// SIG undefined FUN_1491bb5a6(void)

ulonglong FUN_1491bb5a6(longlong param_1,int *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  _func_5014 *p_Var3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8 [2];
  undefined4 local_94;
  int local_90 [6];
  undefined8 local_78;
  longlong local_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_2 == -1) {
    local_78 = 0xffffffff;
  }
  else {
    local_78 = *(undefined8 *)param_2;
  }
  FUN_141121e90(&local_70,param_2 + 2);
  FUN_1491bbeec(&local_78);
  local_90[0] = 0;
  cVar1 = FUN_1491bc10a(&local_78,param_2);
  if (cVar1 == '\0') {
    if (param_3 != 0) {
      puVar6 = &DAT_14cc07438;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cc07448) {
        puVar5 = &DAT_14cc07448;
        FUN_144b3d300(&DAT_14cc07448);
        if (DAT_14cc07448 == -1) {
          puVar6 = &DAT_14cc07438;
          local_b0 = param_3;
          FUN_140056680(&DAT_14cc07438,L"Display Name contains invalid characters.");
          p_Var3 = (_func_5014 *)&LAB_144494d0f;
LAB_1491bb83f:
          atexit(p_Var3);
          _Init_thread_footer(puVar5);
          param_3 = local_b0;
        }
      }
LAB_1491bb738:
      FUN_144a787a6(param_3,puVar6);
    }
LAB_1491bb743:
    uVar4 = 0;
  }
  else {
    lVar2 = (longlong)(int)(*(longlong **)(param_1 + 0x28))[1];
    uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if (lVar2 != 0) {
      lVar7 = **(longlong **)(param_1 + 0x28);
      lVar2 = lVar2 * 0x170;
      local_b0 = param_3;
      do {
        FUN_1491d2dc4(lVar7,local_a8);
        local_90[0] = -1;
        local_90[1] = 0;
        local_90[2] = 0;
        local_90[3] = 0;
        local_90[4] = 0;
        local_90[5] = -1;
        FUN_1491bc09e(local_90,local_a8);
        local_94 = 0;
        cVar1 = FUN_1491bc10a(param_2,local_90,&local_94);
        if (local_90[5] != -1) {
          if (CONCAT44(local_90[3],local_90[2]) != 0) {
            FUN_1400020a8();
          }
          local_90[2] = 0;
          local_90[3] = 0;
          local_90[4] = 0;
          local_90[5] = -1;
        }
        if (local_90[0] != -1) {
          local_90[0] = -1;
          local_90[1] = 0;
        }
        if (local_a8[0] != 0) {
          FUN_1400020a8();
        }
        param_3 = local_b0;
        if (cVar1 != '\0') {
          if (local_b0 == 0) goto LAB_1491bb743;
          puVar6 = &DAT_14cc07450;
          if (DAT_14cc07460 <=
              *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110))
          goto LAB_1491bb738;
          puVar5 = &DAT_14cc07460;
          FUN_144b3d300(&DAT_14cc07460);
          if (DAT_14cc07460 != -1) goto LAB_1491bb738;
          puVar6 = &DAT_14cc07450;
          FUN_140056680(&DAT_14cc07450,L"This name is already in use.");
          p_Var3 = (_func_5014 *)&LAB_144494d20;
          goto LAB_1491bb83f;
        }
        lVar7 = lVar7 + 0x170;
        lVar2 = lVar2 + -0x170;
      } while (lVar2 != 0);
    }
  }
  if ((local_64 != -1) && (local_70 != 0)) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1491bb856 FUN_1491bb856 body=1684 status=ok
// SIG undefined FUN_1491bb856(void)

void FUN_1491bb856(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 *_Src;
  void *_Src_00;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_1d8 [40];
  longlong local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 *local_190;
  undefined8 local_188;
  undefined8 local_180;
  void *local_178;
  uint local_170;
  undefined8 local_168;
  undefined4 *local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148 [2];
  undefined8 *local_138;
  longlong local_108 [2];
  undefined4 local_f8 [4];
  undefined8 local_e8;
  int local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_b8;
  longlong lStack_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (param_2 == 0) goto LAB_1491bb9b6;
  lVar7 = param_2 + 0x30;
  lVar6 = FUN_14479d2ce(lVar7);
  if (lVar6 == 0) {
    if (*(longlong *)(param_2 + 0x38) == 0) goto LAB_1491bb9b6;
    lVar6 = FUN_140007850();
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar6 == 0) || (cVar4 == '\0')) {
      FUN_14485c47a(lVar7,lVar6);
      if (lVar6 == 0) goto LAB_1491bb9b6;
    }
    else {
      uVar1 = *(uint *)(lVar6 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      if ((*(uint *)(lVar9 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(lVar7,lVar6);
      }
    }
    if ((*(uint *)(lVar6 + 8) >> 0x1e & 1) != 0) goto LAB_1491bb9b6;
  }
  lVar7 = FUN_144a797b2();
  if ((((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) && (lVar7 = FUN_1401242c6(), lVar7 != 0)) &&
     ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38) &&
      (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
       lVar7 + 0x30)))) {
    FUN_1491d2e16(param_2,&local_178);
    lVar7 = FUN_1491d324c(*(undefined8 *)(param_1 + 0x28),&local_178);
    if (lVar7 == param_2) {
      lStack_b0 = *(longlong *)(lVar6 + 0x50);
      local_a8 = 0xffffffff;
      local_a4 = 0x101;
      local_a2 = 0;
      local_1b0 = lVar7;
      local_b8 = lVar6;
      FUN_144a2daf0(&local_b8);
      if (lStack_b0 != 0) {
        local_1a8 = lVar7 + 0xa8;
        do {
          lVar9 = lStack_b0;
          if (((*(ulonglong *)(lStack_b0 + 0x38) & 0x40000010000) != 0) ||
             ((*(ulonglong *)(lStack_b0 + 0x38) & 0x20001) == 0)) {
            FUN_1467db386(local_1a8,*(undefined8 *)(lStack_b0 + 0x20));
            FUN_1467db386(lVar7 + 0xf8,*(undefined8 *)(lVar9 + 0x20));
          }
          lStack_b0 = *(longlong *)(lStack_b0 + 0x18);
          FUN_144a2daf0(&local_b8);
        } while (lStack_b0 != 0);
      }
      lVar9 = lVar7 + 0xa8;
      local_98 = 0;
      local_90 = 0;
      local_b8 = 0;
      lStack_b0 = 0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      FUN_140bb2e20(&local_b8,lVar9);
      lVar7 = lVar7 + 0xf8;
      local_e8 = 0;
      local_e0 = 0;
      local_108[0] = 0;
      local_108[1] = 0;
      local_dc = 0xffffffff00000080;
      local_d4 = 0;
      local_c8 = 0;
      local_c0 = 0;
      FUN_140bb2e20(local_108,lVar7);
      lVar3 = local_1b0;
      if (*(int *)(local_1b0 + 0xb0) != *(int *)(local_1b0 + 0xdc)) {
        FUN_145dd2478(lVar9);
        FUN_146820ec8(lVar9);
      }
      if (*(int *)(lVar3 + 0x100) != *(int *)(lVar3 + 300)) {
        FUN_145dd2478(lVar7);
        FUN_146820ec8(lVar7);
      }
      local_168 = 0x100000000;
      local_158._0_4_ = 0xffffffff;
      local_158._4_4_ = 0;
      local_150 = 0;
      iVar10 = 0;
      local_160 = &local_a8;
      if (local_90 != 0) {
        FUN_1449c0562(&local_168);
        iVar10 = local_90;
      }
      local_188._0_4_ = (uint)local_158;
      local_188._4_4_ = local_158._4_4_;
      local_180 = CONCAT44(local_14c,local_150);
      uStack_198 = local_168;
      local_190 = local_160;
      local_1a0 = &local_b8;
      if ((local_158._4_4_ != iVar10) || (local_160 != &local_a8)) {
        do {
          FUN_1444920c0(param_1,&local_178,*local_1a0 + (longlong)local_188._4_4_ * 0x20,
                        *local_1a0 + (longlong)local_188._4_4_ * 0x20 + 8);
          local_188._0_4_ = (uint)local_188 & ~uStack_198._4_4_;
          FUN_1449c0562(&uStack_198);
        } while (local_1a0 != &local_b8 || (local_190 != &local_a8 || local_188._4_4_ != iVar10));
      }
      local_168 = 0x100000000;
      local_158 = 0xffffffff;
      local_150 = 0;
      iVar10 = 0;
      local_160 = local_f8;
      if (local_e0 != 0) {
        FUN_1449c0562(&local_168);
        iVar10 = local_e0;
      }
      local_188 = local_158;
      uVar2 = local_188;
      local_180 = CONCAT44(local_14c,local_150);
      uStack_198 = local_168;
      local_190 = local_160;
      local_188._4_4_ = (int)((ulonglong)local_158 >> 0x20);
      if ((local_188._4_4_ != iVar10) || (local_160 != local_f8)) {
        iVar5 = local_188._4_4_;
        local_1a0 = local_108;
        local_188 = uVar2;
        do {
          FUN_14448e266(param_1,&local_178,*local_1a0 + (longlong)iVar5 * 0x20,
                        *local_1a0 + (longlong)iVar5 * 0x20 + 8);
          local_188 = CONCAT44(local_188._4_4_,(uint)local_188 & ~uStack_198._4_4_);
          FUN_1449c0562(&uStack_198);
          iVar5 = local_188._4_4_;
          uVar2 = local_188;
        } while (local_1a0 != local_108 || (local_190 != local_f8 || local_188._4_4_ != iVar10));
      }
      local_188 = uVar2;
      _Src_00 = local_178;
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      local_190 = (undefined4 *)0x0;
      local_188 = CONCAT44(local_188._4_4_,local_170);
      local_1a0 = (longlong *)param_1;
      uStack_198 = param_2;
      if ((longlong)(int)local_170 == 0) {
        local_188 = (ulonglong)local_170;
      }
      else {
        FUN_1446dd670(&local_190,local_170,0);
        memcpy(local_190,_Src_00,(longlong)(int)local_170 * 2);
      }
      local_148[0] = (code *)0x0;
      local_180 = lVar6;
      puVar8 = (undefined8 *)FUN_14001cc68(0x30,8);
      _Src = local_190;
      *puVar8 = &PTR_FUN_14bb76de0;
      *(undefined4 *)(puVar8 + 1) = (undefined4)local_1a0;
      *(undefined4 *)((longlong)puVar8 + 0xc) = local_1a0._4_4_;
      *(undefined4 *)(puVar8 + 2) = (undefined4)uStack_198;
      *(uint *)((longlong)puVar8 + 0x14) = uStack_198._4_4_;
      puVar8[3] = 0;
      lVar7 = (longlong)(int)(uint)local_188;
      *(uint *)(puVar8 + 4) = (uint)local_188;
      local_138 = puVar8;
      if (lVar7 == 0) {
        *(undefined4 *)((longlong)puVar8 + 0x24) = 0;
      }
      else {
        FUN_1446dd670(puVar8 + 3,local_188 & 0xffffffff,0);
        memcpy((void *)puVar8[3],_Src,lVar7 * 2);
      }
      puVar8[5] = local_180;
      if (puVar8 != (undefined8 *)&DAT_fffffffffffffff8) {
        local_148[0] = FUN_14449a9a6;
      }
      FUN_14606ecf0(uVar2,local_148);
      if (local_190 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      local_c0 = 0;
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      FUN_140bb2a1a(local_108);
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_140bb2a1a(&local_b8);
    }
    if (local_178 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1491bb9b6:
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491bbeec FUN_1491bbeec body=356 status=ok
// SIG undefined FUN_1491bbeec(void)

void FUN_1491bbeec(undefined8 param_1)

{
  ushort _C;
  void *pvVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar3 = (undefined8 *)FUN_1491bc052();
  local_50 = (void *)0x0;
  local_48 = *(int *)(puVar3 + 1);
  lVar5 = (longlong)local_48;
  pvVar1 = (void *)*puVar3;
  if (lVar5 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,pvVar1,lVar5 * 2);
    if (local_48 - 2U < 0x7fffffff) {
      lVar5 = 0;
      bVar4 = false;
      do {
        pvVar1 = local_50;
        iVar2 = iswalpha(*(wint_t *)((longlong)local_50 + lVar5 * 2));
        if ((((iVar2 == 0) && (_C = *(ushort *)((longlong)pvVar1 + lVar5 * 2), 1 < _C - 0x2d)) &&
            (_C != 0x5f)) &&
           (((_C != 0x7c && (iVar2 = iswdigit(_C), iVar2 == 0)) &&
            ((lVar5 == 0 || (*(short *)((longlong)pvVar1 + lVar5 * 2) != 0x20)))))) {
          *(undefined2 *)((longlong)pvVar1 + lVar5 * 2) = 0x5f;
          bVar4 = true;
        }
        lVar5 = lVar5 + 1;
        iVar2 = local_48 + -1;
        if (local_48 == 0) {
          iVar2 = 0;
        }
      } while (lVar5 < iVar2);
      if (iVar2 < 0x65) {
        if (!bVar4) goto LAB_1491bbfe9;
      }
      else {
        FUN_14496493a(&local_50,100,iVar2 + -100,1);
      }
      FUN_1491bc09e(param_1,&local_50);
    }
  }
LAB_1491bbfe9:
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1491bc052 FUN_1491bc052 body=75 status=ok
// SIG undefined FUN_1491bc052(void)

longlong * FUN_1491bc052(int *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(param_1 + 2);
  if (param_1[5] == -1) {
    if (*param_1 == -1) {
      plVar1 = &DAT_14cc08200;
    }
    else {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      *plVar1 = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      FUN_1400348e2(param_1,plVar1);
    }
  }
  return plVar1;
}



// FUNCTION 1491bc09e FUN_1491bc09e body=108 status=ok
// SIG undefined FUN_1491bc09e(void)

void FUN_1491bc09e(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_1 + 2;
  if (param_1[5] != -1) {
    iVar2 = param_1[4];
    if (iVar2 == param_2[2]) {
      if (iVar2 < 2) {
        return;
      }
      iVar2 = wcscmp(*(wchar_t **)piVar1,*(wchar_t **)param_2);
      if (iVar2 == 0) {
        return;
      }
    }
    else if (param_2[2] + iVar2 == 1) {
      return;
    }
  }
  if (*param_1 != -1) {
    param_1[0] = -1;
    param_1[1] = 0;
  }
  if (piVar1 == param_2) {
    return;
  }
  FUN_14034a368(piVar1,param_2);
  return;
}



// FUNCTION 1491bc10a FUN_1491bc10a body=716 status=ok
// SIG undefined FUN_1491bc10a(void)

ulonglong FUN_1491bc10a(longlong *param_1,longlong *param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  wchar_t *_Str1;
  int iVar10;
  int iVar11;
  wchar_t *_Str2;
  undefined7 uVar13;
  ulonglong uVar12;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  
  iVar4 = (int)*param_1;
  iVar3 = (int)*param_2;
  if (iVar3 == -1 || iVar4 == -1) {
    iVar11 = *(int *)((longlong)param_1 + 0x14);
    iVar10 = *(int *)((longlong)param_2 + 0x14);
    uVar13 = (undefined7)((ulonglong)param_3 >> 8);
    if (iVar10 == -1 || iVar11 == -1) {
      if (iVar4 == -1 || iVar10 == -1) {
        if (iVar3 == -1 || iVar11 == -1) {
          if (iVar4 == -1) {
            bVar15 = true;
            if (iVar11 != -1) {
              lVar9 = FUN_1491bc052();
              bVar15 = *(int *)(lVar9 + 8) < 2;
              iVar3 = (int)*param_2;
              iVar10 = *(int *)((longlong)param_2 + 0x14);
            }
          }
          else {
            bVar15 = *param_1 == 0;
          }
          if ((iVar3 != -1) || (bVar16 = true, iVar10 != -1)) {
            if (iVar3 == -1) {
              lVar9 = FUN_1491bc052(param_2);
              bVar16 = *(int *)(lVar9 + 8) < 2;
            }
            else {
              bVar16 = *param_2 == 0;
            }
          }
          uVar12 = CONCAT71(uVar13,bVar15 ^ bVar16) ^ 1;
          goto LAB_1491bc1b4;
        }
        plVar7 = (longlong *)FUN_1491bc052();
        iVar4 = *param_3;
        plVar8 = (longlong *)FUN_1491bc052(param_2);
        iVar3 = (int)plVar7[1];
        iVar11 = (int)plVar8[1];
        if (iVar3 != iVar11) goto LAB_1491bc39d;
        uVar12 = CONCAT71(uVar13,1);
        if (iVar3 < 2) goto LAB_1491bc1b4;
        _Str2 = (wchar_t *)*plVar8;
        _Str1 = (wchar_t *)*plVar7;
        if (iVar4 != 0) {
          lVar9 = 0;
          do {
            uVar1 = *(ushort *)((longlong)_Str1 + lVar9);
            uVar5 = (uint)uVar1;
            uVar2 = *(ushort *)((longlong)_Str2 + lVar9);
            uVar14 = (uint)uVar2;
            if (uVar1 == uVar2) {
              if (uVar1 == 0) goto LAB_1491bc3b2;
            }
            else {
              if (0x7f < (uVar2 | uVar1)) goto LAB_1491bc293;
              uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[uVar2]) goto LAB_1491bc293;
            }
            lVar9 = lVar9 + 2;
          } while( true );
        }
      }
      else {
        plVar7 = (longlong *)FUN_1491bc052();
        iVar4 = *param_3;
        plVar8 = (longlong *)FUN_1491bc052(param_2);
        iVar3 = (int)plVar7[1];
        iVar11 = (int)plVar8[1];
        if (iVar3 != iVar11) goto LAB_1491bc39d;
        uVar12 = CONCAT71(uVar13,1);
        if (iVar3 < 2) goto LAB_1491bc1b4;
        _Str2 = (wchar_t *)*plVar8;
        _Str1 = (wchar_t *)*plVar7;
        if (iVar4 != 0) {
          lVar9 = 0;
          do {
            uVar1 = *(ushort *)((longlong)_Str1 + lVar9);
            uVar5 = (uint)uVar1;
            uVar2 = *(ushort *)((longlong)_Str2 + lVar9);
            uVar14 = (uint)uVar2;
            if (uVar1 == uVar2) {
              if (uVar1 == 0) goto LAB_1491bc3b2;
            }
            else {
              if (0x7f < (uVar2 | uVar1)) goto LAB_1491bc293;
              uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[uVar2]) goto LAB_1491bc293;
            }
            lVar9 = lVar9 + 2;
          } while( true );
        }
      }
    }
    else {
      plVar7 = (longlong *)FUN_1491bc052();
      iVar4 = *param_3;
      plVar8 = (longlong *)FUN_1491bc052(param_2);
      iVar3 = (int)plVar7[1];
      iVar11 = (int)plVar8[1];
      if (iVar3 != iVar11) {
LAB_1491bc39d:
        bVar15 = iVar11 + iVar3 == 1;
        goto LAB_1491bc3a2;
      }
      uVar12 = CONCAT71(uVar13,1);
      if (iVar3 < 2) goto LAB_1491bc1b4;
      _Str2 = (wchar_t *)*plVar8;
      _Str1 = (wchar_t *)*plVar7;
      if (iVar4 != 0) {
        lVar9 = 0;
        do {
          uVar1 = *(ushort *)((longlong)_Str1 + lVar9);
          uVar5 = (uint)uVar1;
          uVar2 = *(ushort *)((longlong)_Str2 + lVar9);
          uVar14 = (uint)uVar2;
          if (uVar1 == uVar2) {
            if (uVar1 == 0) goto LAB_1491bc3b2;
          }
          else {
            if (0x7f < (uVar2 | uVar1)) goto LAB_1491bc293;
            uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[uVar2]) goto LAB_1491bc293;
          }
          lVar9 = lVar9 + 2;
        } while( true );
      }
    }
    param_3 = (int *)CONCAT71(uVar13,1);
    iVar4 = wcscmp(_Str1,_Str2);
    bVar15 = iVar4 == 0;
  }
  else {
    param_3 = (int *)FUN_149192960();
    piVar6 = (int *)FUN_149192960(param_2);
    if (*param_3 != *piVar6) {
      uVar12 = 0;
      goto LAB_1491bc1b4;
    }
    bVar15 = param_3[1] == piVar6[1];
  }
  goto LAB_1491bc3a2;
LAB_1491bc3b2:
  iVar4 = 0;
  goto LAB_1491bc3b4;
LAB_1491bc293:
  iVar4 = uVar5 - uVar14;
LAB_1491bc3b4:
  param_3 = (int *)CONCAT71(uVar13,1);
  bVar15 = iVar4 == 0;
LAB_1491bc3a2:
  uVar12 = CONCAT71((int7)((ulonglong)param_3 >> 8),bVar15);
LAB_1491bc1b4:
  return uVar12 & 0xffffffff;
}



// FUNCTION 1491bc3d6 FUN_1491bc3d6 body=57 status=ok
// SIG undefined FUN_1491bc3d6(void)

void FUN_1491bc3d6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc06880 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc06880 = FUN_140002ddd(FUN_1466c95bd,uVar1,L"AnimNode_ControlRig");
  }
  return;
}



// FUNCTION 1491bc414 FUN_1491bc414 body=50 status=ok
// SIG undefined FUN_1491bc414(void)

longlong * FUN_1491bc414(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x260);
  *param_2 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_2;
}



// FUNCTION 1491bc446 FUN_1491bc446 body=38 status=ok
// SIG undefined FUN_1491bc446(void)

undefined8 FUN_1491bc446(undefined8 param_1,int param_2)

{
  FUN_145928c68();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491bc46c FUN_1491bc46c body=55 status=ok
// SIG undefined FUN_1491bc46c(void)

void FUN_1491bc46c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc068d8 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc068d8 = FUN_140002ddd(FUN_1466c95ec,uVar1,L"AnimNode_ControlRigBase");
  }
  return;
}



// FUNCTION 1491bc4a4 FUN_1491bc4a4 body=42 status=ok
// SIG undefined FUN_1491bc4a4(void)

undefined8 FUN_1491bc4a4(void)

{
  FUN_140033559("..\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\AnimNode_ControlRigBase.h"
                ,0x90,L"Pure virtual not implemented (%s)",
                L"FAnimNode_ControlRigBase::GetControlRig");
  return 0;
}



// FUNCTION 1491bc4ce FUN_1491bc4ce body=55 status=ok
// SIG undefined FUN_1491bc4ce(void)

undefined8 * FUN_1491bc4ce(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("..\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\AnimNode_ControlRigBase.h"
                ,0x91,L"Pure virtual not implemented (%s)",
                L"FAnimNode_ControlRigBase::GetControlRigClass");
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1491bc506 FUN_1491bc506 body=38 status=ok
// SIG undefined FUN_1491bc506(void)

undefined8 FUN_1491bc506(undefined8 param_1,int param_2)

{
  FUN_145928c68();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491bc52c FUN_1491bc52c body=55 status=ok
// SIG undefined FUN_1491bc52c(void)

void FUN_1491bc52c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc06928 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc06928 = FUN_140002ddd(FUN_1466c993f,uVar1,L"AnimNode_ControlRig_ExternalSource");
  }
  return;
}



// FUNCTION 1491bc56a FUN_1491bc56a body=32 status=ok
// SIG undefined FUN_1491bc56a(void)

undefined8 FUN_1491bc56a(longlong param_1,undefined8 param_2)

{
  FUN_1491973cc(param_2,param_1 + 0x6b0);
  return param_2;
}



// FUNCTION 1491bc58a FUN_1491bc58a body=45 status=ok
// SIG undefined FUN_1491bc58a(void)

longlong FUN_1491bc58a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1456e3f36(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491bc5b8 FUN_1491bc5b8 body=48 status=ok
// SIG undefined FUN_1491bc5b8(void)

longlong FUN_1491bc5b8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x278;
  FUN_1456e3f36(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491bc5e8 FUN_1491bc5e8 body=48 status=ok
// SIG undefined FUN_1491bc5e8(void)

longlong FUN_1491bc5e8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x280;
  FUN_1456e3f36(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491bc618 FUN_1491bc618 body=48 status=ok
// SIG undefined FUN_1491bc618(void)

longlong FUN_1491bc618(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x250;
  FUN_1458688b6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491bc648 FUN_1491bc648 body=48 status=ok
// SIG undefined FUN_1491bc648(void)

longlong FUN_1491bc648(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_1458688b6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491bc678 FUN_1491bc678 body=45 status=ok
// SIG undefined FUN_1491bc678(void)

longlong FUN_1491bc678(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145dea61a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491bc6a6 FUN_1491bc6a6 body=48 status=ok
// SIG undefined FUN_1491bc6a6(void)

longlong FUN_1491bc6a6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_145dea61a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491bc6d6 FUN_1491bc6d6 body=48 status=ok
// SIG undefined FUN_1491bc6d6(void)

longlong FUN_1491bc6d6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_145dea61a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491bc706 FUN_1491bc706 body=48 status=ok
// SIG undefined FUN_1491bc706(void)

longlong FUN_1491bc706(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_145dea61a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491bc736 FUN_1491bc736 body=38 status=ok
// SIG undefined FUN_1491bc736(void)

undefined8 FUN_1491bc736(undefined8 param_1,int param_2)

{
  FUN_140064e2c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491bc798 FUN_1491bc798 body=38 status=ok
// SIG undefined FUN_1491bc798(void)

undefined8 FUN_1491bc798(undefined8 param_1,int param_2)

{
  FUN_1456e483a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491bc7fc FUN_1491bc7fc body=54 status=ok
// SIG undefined FUN_1491bc7fc(void)

undefined1 FUN_1491bc7fc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1491f430e(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1491bc85a FUN_1491bc85a body=59 status=ok
// SIG undefined FUN_1491bc85a(void)

undefined8 FUN_1491bc85a(longlong *param_1)

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



// FUNCTION 1491bc940 FUN_1491bc940 body=54 status=ok
// SIG undefined FUN_1491bc940(void)

undefined1 FUN_1491bc940(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1491d83b4(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 1491bc99e FUN_1491bc99e body=59 status=ok
// SIG undefined FUN_1491bc99e(void)

undefined8 FUN_1491bc99e(longlong *param_1)

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



// FUNCTION 1491bcaa0 FUN_1491bcaa0 body=54 status=ok
// SIG undefined FUN_1491bcaa0(void)

undefined1 FUN_1491bcaa0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140e37f6e(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 1491bcafe FUN_1491bcafe body=59 status=ok
// SIG undefined FUN_1491bcafe(void)

undefined8 FUN_1491bcafe(longlong *param_1)

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



// FUNCTION 1491bcbd8 FUN_1491bcbd8 body=54 status=ok
// SIG undefined FUN_1491bcbd8(void)

undefined1 FUN_1491bcbd8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1491f4420(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1491bcc36 FUN_1491bcc36 body=59 status=ok
// SIG undefined FUN_1491bcc36(void)

undefined8 FUN_1491bcc36(longlong *param_1)

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



// FUNCTION 1491bcd1c FUN_1491bcd1c body=54 status=ok
// SIG undefined FUN_1491bcd1c(void)

undefined1 FUN_1491bcd1c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144b3caae(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 1491bcd7a FUN_1491bcd7a body=59 status=ok
// SIG undefined FUN_1491bcd7a(void)

undefined8 FUN_1491bcd7a(longlong *param_1)

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



// FUNCTION 1491bce7c FUN_1491bce7c body=54 status=ok
// SIG undefined FUN_1491bce7c(void)

undefined1 FUN_1491bce7c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1491e07cc(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 1491bceda FUN_1491bceda body=59 status=ok
// SIG undefined FUN_1491bceda(void)

undefined8 FUN_1491bceda(longlong *param_1)

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



// FUNCTION 1491bd058 FUN_1491bd058 body=59 status=ok
// SIG undefined FUN_1491bd058(void)

undefined8 FUN_1491bd058(longlong *param_1)

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



// FUNCTION 1491bd20e FUN_1491bd20e body=59 status=ok
// SIG undefined FUN_1491bd20e(void)

undefined8 FUN_1491bd20e(longlong *param_1)

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



// FUNCTION 1491bd254 FUN_1491bd254 body=32 status=ok
// SIG undefined FUN_1491bd254(void)

void FUN_1491bd254(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_140da04fc(param_2);
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1491bd2c2 FUN_1491bd2c2 body=38 status=ok
// SIG undefined FUN_1491bd2c2(void)

undefined8 FUN_1491bd2c2(undefined8 param_1,int param_2)

{
  FUN_140da04fc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491bd2f6 FUN_1491bd2f6 body=37 status=ok
// SIG undefined FUN_1491bd2f6(void)

void FUN_1491bd2f6(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x108);
  FUN_1491918ce(param_2);
  return;
}



// FUNCTION 1491bd348 FUN_1491bd348 body=63 status=ok
// SIG undefined FUN_1491bd348(void)

undefined1 FUN_1491bd348(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149191e84(param_2,param_3);
    param_3 = param_3 + 0x108;
    param_2 = param_2 + 0x108;
  }
  return 1;
}



// FUNCTION 1491bd3b0 FUN_1491bd3b0 body=59 status=ok
// SIG undefined FUN_1491bd3b0(void)

undefined8 FUN_1491bd3b0(longlong *param_1)

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



// FUNCTION 1491bd3fc FUN_1491bd3fc body=65 status=ok
// SIG undefined FUN_1491bd3fc(void)

void FUN_1491bd3fc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x21) == '\x01') {
    *param_2 = &PTR_FUN_14bb58d10;
    if (param_2[0x1f] != 0) {
      FUN_1400020a8();
    }
    FUN_140da04fc(param_2);
    *(undefined1 *)(param_2 + 0x21) = 0;
  }
  return;
}



// FUNCTION 1491bd48e FUN_1491bd48e body=59 status=ok
// SIG undefined FUN_1491bd48e(void)

void FUN_1491bd48e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x110);
  FUN_1491918ce(param_2);
  *param_2 = &PTR_FUN_14bb71140;
  param_2[0x21] = 0;
  return;
}



// FUNCTION 1491bd4ca FUN_1491bd4ca body=43 status=ok
// SIG undefined FUN_1491bd4ca(void)

void FUN_1491bd4ca(undefined8 param_1,undefined8 *param_2)

{
  FUN_1491918ce(param_2);
  *param_2 = &PTR_FUN_14bb71140;
  param_2[0x21] = 0;
  return;
}



// FUNCTION 1491bd51a FUN_1491bd51a body=76 status=ok
// SIG undefined FUN_1491bd51a(void)

undefined8 FUN_1491bd51a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149191e84(param_2,param_3);
    *(undefined8 *)(param_2 + 0x108) = *(undefined8 *)(param_3 + 0x108);
    param_2 = param_2 + 0x110;
    param_3 = param_3 + 0x110;
  }
  return 1;
}



// FUNCTION 1491bd58e FUN_1491bd58e body=59 status=ok
// SIG undefined FUN_1491bd58e(void)

undefined8 FUN_1491bd58e(longlong *param_1)

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



// FUNCTION 1491bd5da FUN_1491bd5da body=65 status=ok
// SIG undefined FUN_1491bd5da(void)

void FUN_1491bd5da(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x22) == '\x01') {
    *param_2 = &PTR_FUN_14bb58d10;
    if (param_2[0x1f] != 0) {
      FUN_1400020a8();
    }
    FUN_140da04fc(param_2);
    *(undefined1 *)(param_2 + 0x22) = 0;
  }
  return;
}



// FUNCTION 1491bd66a FUN_1491bd66a body=68 status=ok
// SIG undefined FUN_1491bd66a(void)

undefined8 * FUN_1491bd66a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb58d10;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_140da04fc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491bd746 FUN_1491bd746 body=59 status=ok
// SIG undefined FUN_1491bd746(void)

undefined8 FUN_1491bd746(longlong *param_1)

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



// FUNCTION 1491bd7e8 FUN_1491bd7e8 body=92 status=ok
// SIG undefined FUN_1491bd7e8(void)

void FUN_1491bd7e8(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  param_2[1] = &DAT_3f8000003f800000;
  param_2[2] = &DAT_3f8000003f800000;
  param_2[3] = &DAT_3f8000003f800000;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 6) = 0;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0x3ff00000;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 4;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x10) = 1;
  return;
}



// FUNCTION 1491bd844 FUN_1491bd844 body=92 status=ok
// SIG undefined FUN_1491bd844(void)

void FUN_1491bd844(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  param_2[1] = &DAT_3f8000003f800000;
  param_2[2] = &DAT_3f8000003f800000;
  param_2[3] = &DAT_3f8000003f800000;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 6) = 0;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0x3ff00000;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 4;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x10) = 1;
  return;
}



// FUNCTION 1491bd8b8 FUN_1491bd8b8 body=68 status=ok
// SIG undefined FUN_1491bd8b8(void)

undefined8 FUN_1491bd8b8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x88);
      lVar1 = lVar1 + 0x90;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1491bd924 FUN_1491bd924 body=59 status=ok
// SIG undefined FUN_1491bd924(void)

undefined8 FUN_1491bd924(longlong *param_1)

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



// FUNCTION 1491bd9d2 FUN_1491bd9d2 body=135 status=ok
// SIG undefined FUN_1491bd9d2(void)

void FUN_1491bd9d2(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x210);
  FUN_1491918ce(param_2);
  *param_2 = &PTR_FUN_14bb58cb0;
  param_2[0x34] = 0;
  param_2[0x36] = 0x100000000;
  param_2[0x3c] = 0;
  *(undefined4 *)(param_2 + 0x3d) = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 500) = 0;
  param_2[0x40] = 0;
  *(undefined4 *)(param_2 + 0x41) = 0;
  return;
}



// FUNCTION 1491bda5a FUN_1491bda5a body=117 status=ok
// SIG undefined FUN_1491bda5a(void)

void FUN_1491bda5a(undefined8 param_1,undefined8 *param_2)

{
  FUN_1491918ce(param_2);
  *param_2 = &PTR_FUN_14bb58cb0;
  param_2[0x34] = 0;
  param_2[0x36] = 0x100000000;
  param_2[0x3c] = 0;
  *(undefined4 *)(param_2 + 0x3d) = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 500) = 0;
  param_2[0x40] = 0;
  *(undefined4 *)(param_2 + 0x41) = 0;
  return;
}



// FUNCTION 1491bdaf4 FUN_1491bdaf4 body=108 status=ok
// SIG undefined FUN_1491bdaf4(void)

undefined1 FUN_1491bdaf4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149191e84(param_2,param_3);
    FUN_149191efe(param_2 + 0x110,param_3 + 0x110);
    FUN_1459a7e20(param_2 + 0x1c0,param_3 + 0x1c0);
    param_2 = param_2 + 0x210;
    param_3 = param_3 + 0x210;
  }
  return 1;
}



// FUNCTION 1491bdb88 FUN_1491bdb88 body=59 status=ok
// SIG undefined FUN_1491bdb88(void)

undefined8 FUN_1491bdb88(longlong *param_1)

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



// FUNCTION 1491bdbd4 FUN_1491bdbd4 body=40 status=ok
// SIG undefined FUN_1491bdbd4(void)

void FUN_1491bdbd4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x210) == '\x01') {
    FUN_14918079a(param_2);
    *(undefined1 *)(param_2 + 0x210) = 0;
  }
  return;
}



// FUNCTION 1491bdc4c FUN_1491bdc4c body=55 status=ok
// SIG undefined FUN_1491bdc4c(void)

void FUN_1491bdc4c(undefined8 param_1,undefined8 *param_2)

{
  FUN_140e63fbe(param_2,0,1);
  param_2[0x21] = 0;
  *param_2 = &PTR_FUN_14bb58da0;
  *(undefined1 *)(param_2 + 0x22) = 1;
  return;
}



// FUNCTION 1491bdc84 FUN_1491bdc84 body=55 status=ok
// SIG undefined FUN_1491bdc84(void)

void FUN_1491bdc84(undefined8 param_1,undefined8 *param_2)

{
  FUN_140e63fbe(param_2,0,1);
  param_2[0x21] = 0;
  *param_2 = &PTR_FUN_14bb58da0;
  *(undefined1 *)(param_2 + 0x22) = 1;
  return;
}



// FUNCTION 1491bdd28 FUN_1491bdd28 body=59 status=ok
// SIG undefined FUN_1491bdd28(void)

undefined8 FUN_1491bdd28(longlong *param_1)

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



// FUNCTION 1491bdd74 FUN_1491bdd74 body=65 status=ok
// SIG undefined FUN_1491bdd74(void)

void FUN_1491bdd74(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x23) == '\x01') {
    *param_2 = &PTR_FUN_14bb58d10;
    if (param_2[0x1f] != 0) {
      FUN_1400020a8();
    }
    FUN_140da04fc(param_2);
    *(undefined1 *)(param_2 + 0x23) = 0;
  }
  return;
}



// FUNCTION 1491bde06 FUN_1491bde06 body=124 status=ok
// SIG undefined FUN_1491bde06(void)

void FUN_1491bde06(undefined8 param_1,undefined8 *param_2)

{
  FUN_140e63fbe(param_2,0,2);
  param_2[0x34] = 0;
  param_2[0x36] = 0x100000000;
  param_2[0x3c] = 0;
  *(undefined4 *)(param_2 + 0x3d) = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 500) = 0;
  param_2[0x40] = 0;
  *(undefined4 *)(param_2 + 0x41) = 0;
  *param_2 = &PTR_FUN_14bb58e60;
  return;
}



// FUNCTION 1491bde82 FUN_1491bde82 body=124 status=ok
// SIG undefined FUN_1491bde82(void)

void FUN_1491bde82(undefined8 param_1,undefined8 *param_2)

{
  FUN_140e63fbe(param_2,0,2);
  param_2[0x34] = 0;
  param_2[0x36] = 0x100000000;
  param_2[0x3c] = 0;
  *(undefined4 *)(param_2 + 0x3d) = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  *(undefined8 *)((longlong)param_2 + 0x1ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 500) = 0;
  param_2[0x40] = 0;
  *(undefined4 *)(param_2 + 0x41) = 0;
  *param_2 = &PTR_FUN_14bb58e60;
  return;
}



// FUNCTION 1491bdf1c FUN_1491bdf1c body=108 status=ok
// SIG undefined FUN_1491bdf1c(void)

undefined1 FUN_1491bdf1c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149191e84(param_2,param_3);
    FUN_149191efe(param_2 + 0x110,param_3 + 0x110);
    FUN_1459a7e20(param_2 + 0x1c0,param_3 + 0x1c0);
    param_2 = param_2 + 0x210;
    param_3 = param_3 + 0x210;
  }
  return 1;
}



// FUNCTION 1491bdfb0 FUN_1491bdfb0 body=59 status=ok
// SIG undefined FUN_1491bdfb0(void)

undefined8 FUN_1491bdfb0(longlong *param_1)

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



// FUNCTION 1491bdffc FUN_1491bdffc body=40 status=ok
// SIG undefined FUN_1491bdffc(void)

void FUN_1491bdffc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x210) == '\x01') {
    FUN_14918079a(param_2);
    *(undefined1 *)(param_2 + 0x210) = 0;
  }
  return;
}



// FUNCTION 1491be08c FUN_1491be08c body=47 status=ok
// SIG undefined FUN_1491be08c(void)

void FUN_1491be08c(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1491be0d2 FUN_1491be0d2 body=67 status=ok
// SIG undefined FUN_1491be0d2(void)

undefined1 FUN_1491be0d2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1444888de(param_2,param_3);
    FUN_1444888de(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 1491be13e FUN_1491be13e body=59 status=ok
// SIG undefined FUN_1491be13e(void)

undefined8 FUN_1491be13e(longlong *param_1)

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



// FUNCTION 1491be1dc FUN_1491be1dc body=51 status=ok
// SIG undefined FUN_1491be1dc(void)

void FUN_1491be1dc(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 1491be23e FUN_1491be23e body=63 status=ok
// SIG undefined FUN_1491be23e(void)

undefined1 FUN_1491be23e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149191da2(param_2,param_3);
    param_3 = param_3 + 0x1b8;
    param_2 = param_2 + 0x1b8;
  }
  return 1;
}



// FUNCTION 1491be2a6 FUN_1491be2a6 body=70 status=ok
// SIG undefined FUN_1491be2a6(void)

void FUN_1491be2a6(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1491d8124(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491be2fe FUN_1491be2fe body=40 status=ok
// SIG undefined FUN_1491be2fe(void)

void FUN_1491be2fe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1b8) == '\x01') {
    FUN_14918b3e4(param_2);
    *(undefined1 *)(param_2 + 0x1b8) = 0;
  }
  return;
}



// FUNCTION 1491be38a FUN_1491be38a body=33 status=ok
// SIG undefined FUN_1491be38a(void)

void FUN_1491be38a(undefined8 param_1,longlong param_2)

{
  FUN_14918b3e4(param_2 + 0x210);
  FUN_14918079a(param_2);
  return;
}



// FUNCTION 1491be3c2 FUN_1491be3c2 body=63 status=ok
// SIG undefined FUN_1491be3c2(void)

undefined1 FUN_1491be3c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14918051e(param_2,param_3);
    param_3 = param_3 + 0x500;
    param_2 = param_2 + 0x500;
  }
  return 1;
}



// FUNCTION 1491be42a FUN_1491be42a body=59 status=ok
// SIG undefined FUN_1491be42a(void)

undefined8 FUN_1491be42a(longlong *param_1)

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



// FUNCTION 1491be476 FUN_1491be476 body=52 status=ok
// SIG undefined FUN_1491be476(void)

void FUN_1491be476(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x500) == '\x01') {
    FUN_14918b3e4(param_2 + 0x210);
    FUN_14918079a(param_2);
    *(undefined1 *)(param_2 + 0x500) = 0;
  }
  return;
}



// FUNCTION 1491be636 FUN_1491be636 body=59 status=ok
// SIG undefined FUN_1491be636(void)

undefined8 FUN_1491be636(longlong *param_1)

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



// FUNCTION 1491be67c FUN_1491be67c body=32 status=ok
// SIG undefined FUN_1491be67c(void)

void FUN_1491be67c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x58) == '\x01') {
    FUN_140da04fc(param_2);
    *(undefined1 *)(param_2 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1491be6ea FUN_1491be6ea body=38 status=ok
// SIG undefined FUN_1491be6ea(void)

undefined8 FUN_1491be6ea(undefined8 param_1,int param_2)

{
  FUN_140da04fc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491be78a FUN_1491be78a body=75 status=ok
// SIG undefined FUN_1491be78a(void)

void FUN_1491be78a(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1447addd0(param_2,0x10);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491be874 FUN_1491be874 body=54 status=ok
// SIG undefined FUN_1491be874(void)

undefined1 FUN_1491be874(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1491f7696(param_2,param_3);
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return 1;
}



// FUNCTION 1491be8d2 FUN_1491be8d2 body=59 status=ok
// SIG undefined FUN_1491be8d2(void)

undefined8 FUN_1491be8d2(longlong *param_1)

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



// FUNCTION 1491be9e0 FUN_1491be9e0 body=59 status=ok
// SIG undefined FUN_1491be9e0(void)

undefined8 FUN_1491be9e0(longlong *param_1)

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



// FUNCTION 1491bea82 FUN_1491bea82 body=72 status=ok
// SIG undefined FUN_1491bea82(void)

void FUN_1491bea82(undefined8 param_1,undefined8 *param_2)

{
  FUN_140e63fbe(param_2,0,0x10);
  param_2[0x21] = 0;
  *param_2 = &PTR_FUN_14bb77100;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  FUN_1491e4d3a(param_2 + 0x24);
  return;
}



// FUNCTION 1491beaca FUN_1491beaca body=72 status=ok
// SIG undefined FUN_1491beaca(void)

void FUN_1491beaca(undefined8 param_1,undefined8 *param_2)

{
  FUN_140e63fbe(param_2,0,0x10);
  param_2[0x21] = 0;
  *param_2 = &PTR_FUN_14bb77100;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  FUN_1491e4d3a(param_2 + 0x24);
  return;
}



// FUNCTION 1491beb36 FUN_1491beb36 body=102 status=ok
// SIG undefined FUN_1491beb36(void)

undefined8 FUN_1491beb36(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149191e84(param_2,param_3);
    *(undefined8 *)(param_2 + 0x108) = *(undefined8 *)(param_3 + 0x108);
    uVar1 = *(undefined4 *)(param_3 + 0x114);
    uVar2 = *(undefined4 *)(param_3 + 0x118);
    uVar3 = *(undefined4 *)(param_3 + 0x11c);
    *(undefined4 *)(param_2 + 0x110) = *(undefined4 *)(param_3 + 0x110);
    *(undefined4 *)(param_2 + 0x114) = uVar1;
    *(undefined4 *)(param_2 + 0x118) = uVar2;
    *(undefined4 *)(param_2 + 0x11c) = uVar3;
    *(undefined4 *)(param_2 + 0x120) = *(undefined4 *)(param_3 + 0x120);
    param_2 = param_2 + 0x128;
    param_3 = param_3 + 0x128;
  }
  return 1;
}



// FUNCTION 1491bebc4 FUN_1491bebc4 body=59 status=ok
// SIG undefined FUN_1491bebc4(void)

undefined8 FUN_1491bebc4(longlong *param_1)

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



// FUNCTION 1491bec10 FUN_1491bec10 body=65 status=ok
// SIG undefined FUN_1491bec10(void)

void FUN_1491bec10(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x25) == '\x01') {
    *param_2 = &PTR_FUN_14bb58d10;
    if (param_2[0x1f] != 0) {
      FUN_1400020a8();
    }
    FUN_140da04fc(param_2);
    *(undefined1 *)(param_2 + 0x25) = 0;
  }
  return;
}



// FUNCTION 1491beca0 FUN_1491beca0 body=68 status=ok
// SIG undefined FUN_1491beca0(void)

undefined8 * FUN_1491beca0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb58d10;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_140da04fc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491becec FUN_1491becec body=57 status=ok
// SIG undefined FUN_1491becec(void)

void FUN_1491becec(undefined8 param_1,undefined8 *param_2)

{
  FUN_140e63fbe(param_2,0,0x20);
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  *param_2 = &PTR_FUN_14bb77160;
  *(undefined4 *)(param_2 + 0x23) = 0;
  return;
}



// FUNCTION 1491bed26 FUN_1491bed26 body=57 status=ok
// SIG undefined FUN_1491bed26(void)

void FUN_1491bed26(undefined8 param_1,undefined8 *param_2)

{
  FUN_140e63fbe(param_2,0,0x20);
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  *param_2 = &PTR_FUN_14bb77160;
  *(undefined4 *)(param_2 + 0x23) = 0;
  return;
}



// FUNCTION 1491bed7e FUN_1491bed7e body=99 status=ok
// SIG undefined FUN_1491bed7e(void)

undefined8 FUN_1491bed7e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149191e84(param_2,param_3);
    *(undefined8 *)(param_2 + 0x108) = *(undefined8 *)(param_3 + 0x108);
    FUN_1491bef34(param_2 + 0x110,param_3 + 0x110);
    param_2 = param_2 + 0x120;
    param_3 = param_3 + 0x120;
  }
  return 1;
}



// FUNCTION 1491bee0a FUN_1491bee0a body=59 status=ok
// SIG undefined FUN_1491bee0a(void)

undefined8 FUN_1491bee0a(longlong *param_1)

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



// FUNCTION 1491bee56 FUN_1491bee56 body=40 status=ok
// SIG undefined FUN_1491bee56(void)

void FUN_1491bee56(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x120) == '\x01') {
    FUN_1491beef8(param_2);
    *(undefined1 *)(param_2 + 0x120) = 0;
  }
  return;
}



// FUNCTION 1491beecc FUN_1491beecc body=38 status=ok
// SIG undefined FUN_1491beecc(void)

undefined8 FUN_1491beecc(undefined8 param_1,int param_2)

{
  FUN_1491beef8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491beef8 FUN_1491beef8 body=60 status=ok
// SIG undefined FUN_1491beef8(void)

void FUN_1491beef8(undefined8 *param_1)

{
  FUN_1449db362(param_1 + 0x22);
  *param_1 = &PTR_FUN_14bb58d10;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_140da04fc(param_1);
  return;
}



// FUNCTION 1491bef34 FUN_1491bef34 body=130 status=ok
// SIG undefined FUN_1491bef34(void)

void FUN_1491bef34(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491befe6 FUN_1491befe6 body=75 status=ok
// SIG undefined FUN_1491befe6(void)

undefined8 FUN_1491befe6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(param_3 + 0x10);
    FUN_1491bf11c(param_2 + 0x18,param_3 + 0x18);
    param_2 = param_2 + 0x28;
    param_3 = param_3 + 0x28;
  }
  return 1;
}



// FUNCTION 1491bf05a FUN_1491bf05a body=70 status=ok
// SIG undefined FUN_1491bf05a(void)

void FUN_1491bf05a(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1491d832e(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1491bf0ac FUN_1491bf0ac body=34 status=ok
// SIG undefined FUN_1491bf0ac(void)

void FUN_1491bf0ac(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_149189aca(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1491bf11c FUN_1491bf11c body=95 status=ok
// SIG undefined FUN_1491bf11c(void)

undefined8 * FUN_1491bf11c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_149195d42(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_149195c10(param_1,iVar1);
      FUN_149195c72(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1491bf1c8 FUN_1491bf1c8 body=127 status=ok
// SIG undefined FUN_1491bf1c8(void)

undefined8 FUN_1491bf1c8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      lVar2 = param_2 + 0x18 + lVar6;
      *(undefined4 *)(lVar2 + -8) = puVar1[4];
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *(undefined4 *)(lVar2 + -0x18) = *puVar1;
      *(undefined4 *)(lVar2 + -0x14) = uVar3;
      *(undefined4 *)(lVar2 + -0x10) = uVar4;
      *(undefined4 *)(lVar2 + -0xc) = uVar5;
      FUN_144a787a6(lVar2,puVar1 + 6);
      *(undefined2 *)(lVar2 + 0x10) = *(undefined2 *)(puVar1 + 10);
      FUN_1491bf11c(param_2 + lVar6 + 0x30,param_3 + lVar6 + 0x30);
      lVar6 = lVar6 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1491bf270 FUN_1491bf270 body=59 status=ok
// SIG undefined FUN_1491bf270(void)

undefined8 FUN_1491bf270(longlong *param_1)

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



// FUNCTION 1491bf2b6 FUN_1491bf2b6 body=35 status=ok
// SIG undefined FUN_1491bf2b6(void)

void FUN_1491bf2b6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_149189aca(param_2 + 0x18);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1491bf3c6 FUN_1491bf3c6 body=30 status=ok
// SIG undefined FUN_1491bf3c6(void)

void FUN_1491bf3c6(undefined8 param_1,longlong param_2)

{
  FUN_149189aca(param_2 + 0x48);
  FUN_140da04fc(param_2);
  return;
}



// FUNCTION 1491bf3fa FUN_1491bf3fa body=121 status=ok
// SIG undefined FUN_1491bf3fa(void)

undefined8 FUN_1491bf3fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x48;
    param_2 = param_2 + 0x48;
    do {
      *(undefined4 *)(param_2 + -0x30) = *(undefined4 *)(param_3 + -0x30);
      *(undefined8 *)(param_2 + -0x38) = *(undefined8 *)(param_3 + -0x38);
      *(undefined4 *)(param_2 + -0x2c) = *(undefined4 *)(param_3 + -0x2c);
      *(undefined4 *)(param_2 + -0x28) = *(undefined4 *)(param_3 + -0x28);
      *(undefined4 *)(param_2 + -0x24) = *(undefined4 *)(param_3 + -0x24);
      *(undefined1 *)(param_2 + -0x20) = *(undefined1 *)(param_3 + -0x20);
      FUN_144a787a6(param_2,param_3);
      *(undefined2 *)(param_2 + 0x10) = *(undefined2 *)(param_3 + 0x10);
      FUN_1491bf11c(param_2 + 0x18,param_3 + 0x18);
      param_3 = param_3 + 0x70;
      param_2 = param_2 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1491bf49c FUN_1491bf49c body=59 status=ok
// SIG undefined FUN_1491bf49c(void)

undefined8 FUN_1491bf49c(longlong *param_1)

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



// FUNCTION 1491bf4e2 FUN_1491bf4e2 body=43 status=ok
// SIG undefined FUN_1491bf4e2(void)

void FUN_1491bf4e2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_149189aca(param_2 + 0x48);
    FUN_140da04fc(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1491bf55c FUN_1491bf55c body=50 status=ok
// SIG undefined FUN_1491bf55c(void)

longlong FUN_1491bf55c(longlong param_1,int param_2)

{
  FUN_149189aca(param_1 + 0x48);
  FUN_140da04fc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491bf5ce FUN_1491bf5ce body=109 status=ok
// SIG undefined FUN_1491bf5ce(void)

undefined8 FUN_1491bf5ce(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x90);
      FUN_144a787a6(param_2 + lVar1 + 0x90,param_3 + lVar1 + 0x90);
      lVar1 = lVar1 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1491bf664 FUN_1491bf664 body=59 status=ok
// SIG undefined FUN_1491bf664(void)

undefined8 FUN_1491bf664(longlong *param_1)

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



// FUNCTION 1491bf6b0 FUN_1491bf6b0 body=47 status=ok
// SIG undefined FUN_1491bf6b0(void)

void FUN_1491bf6b0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    if (*(longlong *)(param_2 + 0x90) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 1491bf730 FUN_1491bf730 body=48 status=ok
// SIG undefined FUN_1491bf730(void)

void FUN_1491bf730(undefined8 param_1,undefined8 *param_2)

{
  FUN_140e63fbe(param_2,0,0x80);
  param_2[0x21] = 0;
  *param_2 = &PTR_FUN_14bb77220;
  return;
}



// FUNCTION 1491bf760 FUN_1491bf760 body=48 status=ok
// SIG undefined FUN_1491bf760(void)

void FUN_1491bf760(undefined8 param_1,undefined8 *param_2)

{
  FUN_140e63fbe(param_2,0,0x80);
  param_2[0x21] = 0;
  *param_2 = &PTR_FUN_14bb77220;
  return;
}



// FUNCTION 1491bf790 FUN_1491bf790 body=48 status=ok
// SIG undefined FUN_1491bf790(void)

void FUN_1491bf790(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb58d10;
  if (param_2[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_140da04fc(param_2);
  return;
}



// FUNCTION 1491bf7d6 FUN_1491bf7d6 body=76 status=ok
// SIG undefined FUN_1491bf7d6(void)

undefined8 FUN_1491bf7d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149191e84(param_2,param_3);
    *(undefined8 *)(param_2 + 0x108) = *(undefined8 *)(param_3 + 0x108);
    param_2 = param_2 + 0x110;
    param_3 = param_3 + 0x110;
  }
  return 1;
}



// FUNCTION 1491bf84a FUN_1491bf84a body=59 status=ok
// SIG undefined FUN_1491bf84a(void)

undefined8 FUN_1491bf84a(longlong *param_1)

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



// FUNCTION 1491bf896 FUN_1491bf896 body=65 status=ok
// SIG undefined FUN_1491bf896(void)

void FUN_1491bf896(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x22) == '\x01') {
    *param_2 = &PTR_FUN_14bb58d10;
    if (param_2[0x1f] != 0) {
      FUN_1400020a8();
    }
    FUN_140da04fc(param_2);
    *(undefined1 *)(param_2 + 0x22) = 0;
  }
  return;
}



// FUNCTION 1491bf926 FUN_1491bf926 body=68 status=ok
// SIG undefined FUN_1491bf926(void)

undefined8 * FUN_1491bf926(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb58d10;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_140da04fc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491bf9d0 FUN_1491bf9d0 body=54 status=ok
// SIG undefined FUN_1491bf9d0(void)

undefined1 FUN_1491bf9d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1491bfb3e(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 1491bfa2e FUN_1491bfa2e body=59 status=ok
// SIG undefined FUN_1491bfa2e(void)

undefined8 FUN_1491bfa2e(longlong *param_1)

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



// FUNCTION 1491bfa74 FUN_1491bfa74 body=34 status=ok
// SIG undefined FUN_1491bfa74(void)

void FUN_1491bfa74(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_1491bfae4(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 1491bfae4 FUN_1491bfae4 body=90 status=ok
// SIG undefined FUN_1491bfae4(void)

void FUN_1491bfae4(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1491bfb3e FUN_1491bfb3e body=102 status=ok
// SIG undefined FUN_1491bfb3e(void)

undefined8 * FUN_1491bfb3e(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_144a787a6(param_1 + 2,param_2 + 2);
  FUN_1444888de(param_1 + 4,param_2 + 4);
  FUN_1491bfba4(param_1 + 6,param_2 + 6);
  FUN_144756208(param_1 + 8,param_2 + 8);
  FUN_1447cd5a6(param_1 + 10,param_2 + 10);
  return param_1;
}



// FUNCTION 1491bfba4 FUN_1491bfba4 body=89 status=ok
// SIG undefined FUN_1491bfba4(void)

undefined8 * FUN_1491bfba4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_149197358(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 1491bfc4c FUN_1491bfc4c body=54 status=ok
// SIG undefined FUN_1491bfc4c(void)

undefined1 FUN_1491bfc4c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1491bfdf6(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 1491bfcaa FUN_1491bfcaa body=59 status=ok
// SIG undefined FUN_1491bfcaa(void)

undefined8 FUN_1491bfcaa(longlong *param_1)

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



// FUNCTION 1491bfcf0 FUN_1491bfcf0 body=34 status=ok
// SIG undefined FUN_1491bfcf0(void)

void FUN_1491bfcf0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1491bfd60(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1491bfd60 FUN_1491bfd60 body=112 status=ok
// SIG undefined FUN_1491bfd60(void)

void FUN_1491bfd60(longlong *param_1)

{
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1491bfdd0(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1491bfdd0 FUN_1491bfdd0 body=38 status=ok
// SIG undefined FUN_1491bfdd0(void)

void FUN_1491bfdd0(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1491bfae4(param_1);
    param_1 = param_1 + 0x60;
  }
  return;
}



// FUNCTION 1491bfdf6 FUN_1491bfdf6 body=82 status=ok
// SIG undefined FUN_1491bfdf6(void)

longlong FUN_1491bfdf6(longlong param_1,longlong param_2)

{
  FUN_1491bfe48();
  FUN_1491bfea8(param_1 + 0x10,param_2 + 0x10);
  FUN_140bee9ec(param_1 + 0x20,param_2 + 0x20);
  FUN_144756208(param_1 + 0x30,param_2 + 0x30);
  FUN_144756208(param_1 + 0x40,param_2 + 0x40);
  return param_1;
}



// FUNCTION 1491bfe48 FUN_1491bfe48 body=95 status=ok
// SIG undefined FUN_1491bfe48(void)

undefined8 * FUN_1491bfe48(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1491bfdd0(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1491bfefc(param_1,iVar1);
      FUN_1491bff6f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1491bfea8 FUN_1491bfea8 body=84 status=ok
// SIG undefined FUN_1491bfea8(void)

undefined8 * FUN_1491bfea8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1491c013e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1491bfefc FUN_1491bfefc body=115 status=ok
// SIG undefined FUN_1491bfefc(void)

void FUN_1491bfefc(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x60,8);
    iVar2 = (int)(uVar1 / 0x60);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x60,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1491bff6f FUN_1491bff6f body=52 status=ok
// SIG undefined FUN_1491bff6f(void)

void FUN_1491bff6f(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1491bffa4(param_1,param_2);
    param_1 = param_1 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return;
}



// FUNCTION 1491bffa4 FUN_1491bffa4 body=409 status=ok
// SIG undefined FUN_1491bffa4(void)

undefined8 * FUN_1491bffa4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
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
    FUN_149192186(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 0xc);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_149197358(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 * 0xc);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar2 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_144756262(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 * 0x60);
  }
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0xb);
  pvVar2 = (void *)param_2[10];
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1447cd5fa(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],pvVar2,(longlong)iVar1);
  }
  return param_1;
}



// FUNCTION 1491c013e FUN_1491c013e body=90 status=ok
// SIG undefined FUN_1491c013e(void)

void FUN_1491c013e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_144a3809e((longlong)param_2,1);
    iVar2 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  if (param_3 < iVar2) {
    FUN_1446f8d3c(param_1,0,iVar2,1,1);
    param_3 = iVar2;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1491c0202 FUN_1491c0202 body=59 status=ok
// SIG undefined FUN_1491c0202(void)

undefined8 FUN_1491c0202(longlong *param_1)

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



// FUNCTION 1491c02a2 FUN_1491c02a2 body=29 status=ok
// SIG undefined FUN_1491c02a2(void)

undefined8 FUN_1491c02a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491c02d0 FUN_1491c02d0 body=26 status=ok
// SIG undefined FUN_1491c02d0(void)

undefined8 * FUN_1491c02d0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = &DAT_14c846480;
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2;
}



// FUNCTION 1491c02ec FUN_1491c02ec body=59 status=ok
// SIG undefined FUN_1491c02ec(void)

void FUN_1491c02ec(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x1f0);
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bb733d0;
  return;
}



// FUNCTION 1491c0328 FUN_1491c0328 body=43 status=ok
// SIG undefined FUN_1491c0328(void)

void FUN_1491c0328(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bb733d0;
  return;
}



// FUNCTION 1491c0378 FUN_1491c0378 body=70 status=ok
// SIG undefined FUN_1491c0378(void)

undefined1 FUN_1491c0378(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      FUN_1491c05d4(param_2,param_3);
      param_3 = param_3 + 0x1f0;
      param_2 = param_2 + 0x1f0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1491c03e6 FUN_1491c03e6 body=59 status=ok
// SIG undefined FUN_1491c03e6(void)

undefined8 FUN_1491c03e6(longlong *param_1)

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



// FUNCTION 1491c0432 FUN_1491c0432 body=49 status=ok
// SIG undefined FUN_1491c0432(void)

void FUN_1491c0432(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3e) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x3e) = 0;
  }
  return;
}



// FUNCTION 1491c04b2 FUN_1491c04b2 body=52 status=ok
// SIG undefined FUN_1491c04b2(void)

undefined8 * FUN_1491c04b2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491c04e6 FUN_1491c04e6 body=52 status=ok
// SIG undefined FUN_1491c04e6(void)

undefined8 * FUN_1491c04e6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1491c051a FUN_1491c051a body=98 status=ok
// SIG undefined FUN_1491c051a(void)

void FUN_1491c051a(longlong param_1,longlong param_2)

{
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  FUN_14591e93c(param_1 + 0x38,param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_2 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_2 + 0x1b8);
  return;
}


