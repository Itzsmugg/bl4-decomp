// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14927d86a FUN_14927d86a body=133 status=ok
// SIG undefined FUN_14927d86a(void)

void FUN_14927d86a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)*param_2;
  local_30 = puVar1[0x10];
  local_28 = *(undefined4 *)puVar1[0x14];
  local_20 = *(undefined8 *)puVar1[0xc];
  local_38 = &local_20;
  local_18 = *(undefined4 *)((undefined8 *)puVar1[0xc] + 1);
  FUN_14927d994(*(undefined8 *)(param_1 + 0xc0),*puVar1,
                CONCAT71((int7)((ulonglong)puVar1[4] >> 8),*(undefined1 *)puVar1[4]),puVar1[8]);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14927d8f8 FUN_14927d8f8 body=154 status=ok
// SIG undefined FUN_14927d8f8(void)

void FUN_14927d8f8(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  longlong local_40;
  undefined4 local_38;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x200);
  local_48 = &local_28;
  local_20 = *(undefined4 *)(param_1 + 0x208);
  local_38 = *(undefined4 *)(param_1 + 0x214);
  local_40 = param_1 + 0x210;
  FUN_14927d994(param_1 + 0x10,param_1 + 0x1f0,*(undefined1 *)(param_1 + 0x1fc),param_1 + 0x1fd);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14927d994 FUN_14927d994 body=4580 status=ok
// SIG undefined FUN_14927d994(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14927d994(longlong param_1,double *param_2,char param_3,char *param_4,longlong *param_5,
                  char *param_6,float param_7)

{
  longlong lVar1;
  double dVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  double *pdVar12;
  double *pdVar13;
  ulonglong uVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar27;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar37;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar42;
  undefined1 auVar41 [16];
  float fVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auStack_5a8 [32];
  undefined1 local_588;
  undefined1 local_580;
  undefined1 local_578;
  undefined1 local_568 [16];
  double local_558;
  undefined4 local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530 [3];
  double local_518 [4];
  double local_4f8;
  double dStack_4f0;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  double dStack_4e0;
  undefined1 local_4d8 [16];
  undefined1 local_4c8 [16];
  double local_4b8;
  undefined4 local_4b0;
  double local_4a8;
  double dStack_4a0;
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  double local_478;
  double dStack_470;
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  undefined8 local_440 [3];
  double local_428;
  double dStack_420;
  undefined1 local_418 [16];
  double local_408;
  undefined4 local_400;
  double local_3f8;
  double local_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_398;
  undefined4 local_390;
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  double local_368;
  undefined4 local_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  undefined8 uStack_270;
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
  double local_1f8 [2];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
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
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_5a8;
  if ((((0.0001 <= param_7) && (lVar1 = *(longlong *)(param_1 + 0x1b0), lVar1 != 0)) &&
      ((uint)*(ushort *)((longlong)param_2 + 6) < DAT_14c87eb08 + 1U)) &&
     ((*(longlong *)((longlong)param_2 + 4) != 0 && (*(char *)param_2 != '\0')))) {
    dStack_170 = (double)CONCAT44(dStack_170._4_4_,*(undefined4 *)(param_2 + 1));
    local_178 = *param_2;
    uVar3 = FUN_140813180(lVar1);
    FUN_14486750c(lVar1,&local_2f8,uVar3,1);
    local_368 = *param_2;
    local_360 = *(undefined4 *)(param_2 + 1);
    uVar3 = FUN_140813180(lVar1);
    FUN_14486750c(lVar1,&local_358,uVar3,0);
    if ((longlong)(int)param_5[1] != 0) {
      lVar10 = *param_5;
      lVar11 = (longlong)(int)param_5[1] * 0x10;
      lVar8 = 0;
      fVar15 = 0.0;
      do {
        fVar43 = *(float *)(lVar10 + 0xc + lVar8);
        if (fVar43 <= 0.0) {
          fVar43 = 0.0;
        }
        if (((0.0001 <= fVar43) && ((uint)*(ushort *)(lVar10 + 6 + lVar8) < DAT_14c87eb08 + 1U)) &&
           ((*(longlong *)(lVar10 + 4 + lVar8) != 0 && (*(char *)(lVar10 + lVar8) != '\0')))) {
          fVar15 = fVar15 + fVar43;
        }
        lVar8 = lVar8 + 0x10;
      } while (lVar11 != lVar8);
      if (0.0001 < fVar15) {
        local_378 = ZEXT816(0);
        local_388 = ZEXT816(0);
        local_568 = ZEXT816(0x3ff0000000000000) << 0x40;
        lVar8 = 0;
        do {
          auVar49 = _DAT_14c8463e0;
          dVar23 = DAT_14c8463d8;
          dVar22 = DAT_14c8463d0;
          fVar43 = *(float *)(lVar10 + 0xc + lVar8);
          if (fVar43 <= 0.0) {
            fVar43 = 0.0;
          }
          if ((((0.0001 <= fVar43) && ((uint)*(ushort *)(lVar10 + 6 + lVar8) < DAT_14c87eb08 + 1U))
              && (*(longlong *)(lVar10 + 4 + lVar8) != 0)) &&
             (pdVar12 = (double *)(lVar10 + lVar8), *(char *)pdVar12 != '\0')) {
            local_398 = *pdVar12;
            local_390 = *(undefined4 *)(pdVar12 + 1);
            uVar3 = FUN_140813180(lVar1,&local_398);
            lVar9 = lVar1;
            FUN_14486750c(lVar1,&local_178,uVar3,0);
            uVar3 = (undefined4)lVar9;
            if (param_3 != '\0') {
              uStack_270._0_4_ = *(undefined4 *)(pdVar12 + 1);
              local_278 = *pdVar12;
              uVar3 = FUN_140813180(lVar1,&local_278);
              lVar9 = lVar1;
              FUN_14486750c(lVar1,local_1f8,uVar3,1);
              uVar3 = (undefined4)lVar9;
              dVar22 = (double)local_1e8._0_8_ * -1.0;
              dVar24 = (double)local_1e8._8_8_ * 1.0;
              dVar44 = dStack_2f0 * dVar22 * -1.0 +
                       ((local_2f8 * dVar24 - local_1f8[0] * dStack_2e0 * 1.0) -
                       local_2e8 * local_1f8[1]);
              dVar45 = local_2f8 * dVar22 * 1.0 +
                       ((dStack_2f0 * dVar24 - local_1f8[0] * local_2e8 * -1.0) -
                       dStack_2e0 * local_1f8[1]);
              dVar23 = dStack_2e0 * dVar22 * 1.0 +
                       local_1f8[1] * local_2f8 +
                       (dVar24 * local_2e8 - local_1f8[0] * dStack_2f0 * 1.0);
              dVar22 = local_2e8 * dVar22 * -1.0 +
                       local_1f8[1] * dStack_2f0 +
                       (dVar24 * dStack_2e0 - local_1f8[0] * local_2f8 * -1.0);
              dVar24 = dVar23 * dVar23 + dVar44 * dVar44;
              dVar27 = dVar22 * dVar22 + dVar45 * dVar45;
              auVar32._0_8_ = dVar24 + dVar27;
              auVar32._8_8_ = dVar24 + dVar27;
              auVar49._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_);
              auVar49._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_);
              auVar25 = sqrtpd(auVar32,auVar32);
              auVar25 = divpd(_DAT_149934d80,auVar25);
              auVar29._0_8_ = auVar25._0_8_ * dVar23;
              auVar29._8_8_ = auVar25._8_8_ * dVar22;
              dVar22 = (double)((ulonglong)(dVar44 * auVar25._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_));
              dVar23 = (double)((ulonglong)(dVar45 * auVar25._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_));
              auVar49 = blendvpd(local_568,auVar29,auVar49);
            }
            fVar43 = fVar43 * (1.0 / fVar15);
            dVar27 = auVar49._0_8_;
            dVar44 = auVar49._8_8_;
            local_278 = dVar23 * local_168 * -1.0 +
                        dVar27 * dStack_170 + dVar44 * local_178 * 1.0 + dVar22 * dStack_160;
            dVar24 = dVar22 * local_168 * 1.0 +
                     dVar44 * dStack_170 + dVar27 * local_178 * -1.0 + dVar23 * dStack_160;
            local_268 = dVar44 * local_168 * 1.0 +
                        ((local_178 * dVar23 * 1.0 + dStack_160 * dVar27) - dVar22 * dStack_170);
            dStack_260 = dVar27 * local_168 * -1.0 +
                         ((local_178 * dVar22 * -1.0 + dStack_160 * dVar44) - dVar23 * dStack_170);
            uStack_270._0_4_ = SUB84(dVar24,0);
            uStack_270._4_4_ = (undefined4)((ulonglong)dVar24 >> 0x20);
            uStack_270 = dVar24;
            if (*param_6 == '\x01') {
              auVar25._8_8_ = -(ulonglong)((double)local_388._8_8_ == 0.0);
              auVar25._0_8_ = -(ulonglong)((double)local_388._0_8_ == 0.0);
              iVar5 = movmskpd(1,auVar25);
              auVar16._8_8_ = -(ulonglong)((double)local_378._8_8_ == 0.0);
              auVar16._0_8_ = -(ulonglong)((double)local_378._0_8_ == 0.0);
              iVar7 = movmskpd(uVar3,auVar16);
              if (iVar5 + iVar7 * 4 == 0xf) {
                local_388._8_4_ = (undefined4)uStack_270;
                local_388._0_8_ = local_278;
                local_388._12_4_ = uStack_270._4_4_;
                local_378._8_8_ = dStack_260;
                local_378._0_8_ = local_268;
              }
              else {
                FUN_144a44da6(local_1f8,local_388,&local_278,(double)fVar43);
                dVar22 = (double)local_1e8._0_8_ * (double)local_1e8._0_8_ +
                         local_1f8[0] * local_1f8[0];
                dVar23 = (double)local_1e8._8_8_ * (double)local_1e8._8_8_ +
                         local_1f8[1] * local_1f8[1];
                auVar30._0_8_ = dVar22 + dVar23;
                auVar30._8_8_ = dVar22 + dVar23;
                auVar17._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_);
                auVar17._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_);
                auVar49 = sqrtpd(auVar30,auVar30);
                auVar49 = divpd(_DAT_149934d80,auVar49);
                auVar38._0_8_ = auVar49._0_8_ * (double)local_1e8._0_8_;
                auVar38._8_8_ = auVar49._8_8_ * (double)local_1e8._8_8_;
                local_378 = blendvpd(local_568,auVar38,auVar17);
                local_388._8_8_ =
                     (ulonglong)(local_1f8[1] * auVar49._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_);
                local_388._0_8_ =
                     (ulonglong)(local_1f8[0] * auVar49._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_);
              }
            }
            else {
              if (*param_6 != '\0') goto LAB_14927e07a;
              dVar23 = (double)fVar43;
              dVar27 = local_278 * dVar23;
              dVar24 = dVar24 * dVar23;
              dVar22 = local_268 * dVar23;
              dVar23 = dStack_260 * dVar23;
              if (dVar23 * (double)local_378._8_8_ +
                  (double)local_378._0_8_ * dVar22 +
                  (double)local_388._0_8_ * dVar27 + dVar24 * (double)local_388._8_8_ < 0.0) {
                local_388._0_8_ = (double)local_388._0_8_ - dVar27;
                local_388._8_8_ = (double)local_388._8_8_ - dVar24;
                local_378._0_8_ = (double)local_378._0_8_ - dVar22;
                local_378._8_8_ = (double)local_378._8_8_ - dVar23;
              }
              else {
                local_378._0_8_ = dVar22 + (double)local_378._0_8_;
                local_378._8_8_ = dVar23 + (double)local_378._8_8_;
                local_388._8_8_ = dVar24 + (double)local_388._8_8_;
                local_388._0_8_ = dVar27 + (double)local_388._0_8_;
              }
            }
          }
          lVar8 = lVar8 + 0x10;
        } while (lVar11 != lVar8);
        local_358 = (double)local_388._0_8_;
        dStack_350 = (double)local_388._8_8_;
        local_348 = (double)local_378._0_8_;
        dStack_340 = (double)local_378._8_8_;
        dVar24 = uStack_270;
LAB_14927e07a:
        dVar22 = local_348 * local_348 + local_358 * local_358;
        dVar23 = dStack_340 * dStack_340 + dStack_350 * dStack_350;
        auVar31._0_8_ = dVar22 + dVar23;
        auVar31._8_8_ = dVar22 + dVar23;
        auVar18._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar31._8_8_);
        auVar18._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar31._0_8_);
        auVar49 = sqrtpd(auVar31,auVar31);
        auVar49 = divpd(_DAT_149934d80,auVar49);
        auVar39._0_8_ = auVar49._0_8_ * local_348;
        auVar39._8_8_ = auVar49._8_8_ * dStack_340;
        local_388._8_8_ =
             (ulonglong)(dStack_350 * auVar49._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar31._8_8_);
        local_388._0_8_ =
             (ulonglong)(local_358 * auVar49._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar31._0_8_);
        local_378 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar39,auVar18);
        local_408 = *param_2;
        local_400 = *(undefined4 *)(param_2 + 1);
        uStack_270 = dVar24;
        FUN_149185020(lVar1,&local_3f8,&local_408,0);
        local_3e8 = local_3e8 * -1.0;
        dStack_3e0 = dStack_3e0 * 1.0;
        local_428 = (double)local_388._8_8_ * local_3e8 * -1.0 +
                    ((dStack_3e0 * (double)local_388._0_8_ -
                     local_3f8 * (double)local_378._8_8_ * 1.0) -
                    (double)local_378._0_8_ * local_3f0);
        dStack_420 = (double)local_388._0_8_ * local_3e8 * 1.0 +
                     ((dStack_3e0 * (double)local_388._8_8_ -
                      local_3f8 * (double)local_378._0_8_ * -1.0) -
                     (double)local_378._8_8_ * local_3f0);
        dVar22 = (double)local_378._0_8_ * local_3e8 * -1.0 +
                 local_3f0 * (double)local_388._8_8_ +
                 (dStack_3e0 * (double)local_378._8_8_ - local_3f8 * (double)local_388._0_8_ * -1.0)
        ;
        local_418._8_4_ = SUB84(dVar22,0);
        local_418._0_8_ =
             (double)local_378._8_8_ * local_3e8 * 1.0 +
             local_3f0 * (double)local_388._0_8_ +
             (dStack_3e0 * (double)local_378._0_8_ - local_3f8 * (double)local_388._8_8_ * 1.0);
        local_418._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
        FUN_14690c377(local_440,&local_428,param_6[1],0);
        local_4b8 = *param_2;
        local_4b0 = *(undefined4 *)(param_2 + 1);
        uVar3 = FUN_140813180(lVar1);
        FUN_144afced8(lVar1,&local_4a8,uVar3,0);
        pdVar12 = (double *)&DAT_14c846480;
        pdVar13 = local_518;
        for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
          *pdVar13 = *pdVar12;
          pdVar12 = pdVar12 + 1;
          pdVar13 = pdVar13 + 1;
        }
        if (*(char *)param_2 == '\x04') {
          uVar4 = FUN_140813180(lVar1,param_2);
          if (((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(lVar1 + 0xc0))) &&
             ((lVar10 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar4 * 8),
              lVar10 != 0 && (*(char *)(lVar10 + 0x10) == '\x04')))) {
            lVar8 = lVar1;
            uVar3 = FUN_1401261c4(lVar1,local_518,lVar10,1);
            auVar49 = _DAT_149934d80;
            dVar22 = local_4d8._0_8_;
            dVar44 = local_4d8._8_8_;
            dVar23 = local_4c8._0_8_;
            dVar45 = local_4c8._8_8_;
            dVar24 = local_468._0_8_;
            dVar28 = local_468._8_8_;
            dVar27 = local_458._0_8_;
            auVar32 = minpd(local_468,local_4d8);
            auVar25 = minpd(local_458,local_4c8);
            auVar33._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
            auVar33._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
            iVar5 = movmskpd(uVar3,auVar33);
            auVar40._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
            auVar40._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
            uVar4 = movmskpd((int)lVar8,auVar40);
            if ((uVar4 & 0x3fffffff) == 0 && iVar5 == 0) {
              dVar47 = local_518[0] * dStack_4a0;
              dVar48 = local_518[0] * local_4a8;
              dVar46 = local_4a8 * local_518[1];
              dVar2 = dStack_4a0 * local_518[1];
              dVar42 = local_4a8 * local_518[2];
              dVar37 = (double)local_498._8_8_ * local_518[2];
              local_4a8 = dStack_4a0 * local_518[2] * -1.0 +
                          (double)local_498._0_8_ * local_518[1] +
                          (double)local_498._8_8_ * local_518[0] * 1.0 + local_4a8 * local_518[3];
              dStack_4a0 = dVar42 * 1.0 +
                           (double)local_498._8_8_ * local_518[1] +
                           (double)local_498._0_8_ * local_518[0] * -1.0 + dStack_4a0 * local_518[3]
              ;
              dVar2 = (double)local_498._0_8_ * local_518[2] * -1.0 +
                      ((dVar48 * -1.0 + (double)local_498._8_8_ * local_518[3]) - dVar2);
              local_498._8_4_ = SUB84(dVar2,0);
              local_498._0_8_ =
                   dVar37 * 1.0 + ((dVar47 * 1.0 + (double)local_498._0_8_ * local_518[3]) - dVar46)
              ;
              local_498._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
              dVar47 = (double)local_488._0_8_ * dVar22;
              dVar48 = (double)local_488._8_8_ * dVar44;
              local_478 = local_478 * dVar23;
              dStack_470 = dStack_470 * dVar45;
              dVar37 = dVar48 * local_518[0] - local_518[1] * dVar47;
              dVar2 = local_478 * local_518[1] - local_518[2] * dVar48;
              dVar46 = dVar47 * local_518[2] - local_518[0] * local_478;
              dVar42 = dStack_470 * local_518[3] - local_518[3] * dStack_470;
              dVar2 = dVar2 + dVar2;
              dVar46 = dVar46 + dVar46;
              dVar37 = dVar37 + dVar37;
              dVar42 = dVar42 + dVar42;
              dStack_4f0 = (dVar2 * local_518[2] - dVar37 * local_518[0]) +
                           local_518[3] * dVar46 + dVar48 + dStack_4f0;
              local_478 = (dVar46 * local_518[0] - local_518[1] * dVar2) +
                          local_518[3] * dVar37 + local_478 + (double)CONCAT44(uStack_4e4,local_4e8)
              ;
              dStack_470 = (dVar42 * local_518[3] - dVar42 * local_518[3]) +
                           local_518[3] * dVar42 + dStack_470 + dStack_4e0;
              local_488._8_4_ = SUB84(dStack_4f0,0);
              local_488._0_8_ =
                   (dVar37 * local_518[1] - local_518[2] * dVar46) + local_518[3] * dVar2 + dVar47 +
                   local_4f8;
              local_488._12_4_ = (int)((ulonglong)dStack_4f0 >> 0x20);
              dVar45 = local_458._8_8_ * dVar45;
              local_468._8_8_ = dVar28 * dVar44;
              local_468._0_8_ = dVar24 * dVar22;
              local_458._8_4_ = SUB84(dVar45,0);
              local_458._0_8_ = dVar27 * dVar23;
              local_458._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
            }
            else {
              dVar42 = local_518[1] + local_518[1];
              dVar37 = local_518[2] + local_518[2];
              dVar46 = local_518[0] * (local_518[0] + local_518[0]);
              local_1a8 = (1.0 - (dVar46 + local_518[1] * dVar42)) * dVar23;
              dVar2 = (local_518[0] + local_518[0]) * local_518[3];
              local_1b8 = (dVar42 * local_518[3] + local_518[0] * dVar37) * dVar23;
              dVar45 = dVar45 * local_458._8_8_;
              dStack_1b0 = (dVar37 * local_518[1] - dVar2) * dVar23;
              local_1f8[0] = ((double)DAT_149934d80 -
                             (local_518[2] * dVar37 + local_518[1] * dVar42)) * dVar22;
              dVar46 = (DAT_149934d80._8_8_ - (local_518[2] * dVar37 + dVar46)) * dVar44;
              local_1f8[1] = (dVar42 * local_518[0] + dVar37 * local_518[3]) * dVar22;
              local_1c8 = (dVar37 * local_518[1] + dVar2) * dVar44;
              local_1e8._8_8_ = 0;
              local_1e8._0_8_ = (local_518[0] * dVar37 - dVar42 * local_518[3]) * dVar22;
              local_1d8._8_4_ = SUB84(dVar46,0);
              local_1d8._0_8_ = (dVar42 * local_518[0] - dVar37 * local_518[3]) * dVar44;
              local_1d8._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
              dStack_1c0 = 0.0;
              uStack_1a0 = 0;
              local_198 = local_4f8;
              dStack_190 = dStack_4f0;
              local_188 = local_4e8;
              uStack_184 = uStack_4e4;
              uStack_180 = 0;
              uStack_17c = 0x3ff00000;
              dVar42 = dStack_4a0 + dStack_4a0;
              dVar37 = (double)local_498._0_8_ + (double)local_498._0_8_;
              dVar46 = local_4a8 * (local_4a8 + local_4a8);
              local_228 = (1.0 - (dVar46 + dStack_4a0 * dVar42)) * dVar27;
              dVar2 = (local_4a8 + local_4a8) * (double)local_498._8_8_;
              local_238 = (dVar42 * (double)local_498._8_8_ + local_4a8 * dVar37) * dVar27;
              local_258 = (dVar42 * local_4a8 - dVar37 * (double)local_498._8_8_) * dVar28;
              dStack_230 = (dVar37 * dStack_4a0 - dVar2) * dVar27;
              dVar44 = dVar44 * dVar28;
              local_278 = ((double)DAT_149934d80 -
                          ((double)local_498._0_8_ * dVar37 + dStack_4a0 * dVar42)) * dVar24;
              dStack_250 = (DAT_149934d80._8_8_ - ((double)local_498._0_8_ * dVar37 + dVar46)) *
                           dVar28;
              uStack_270 = (dVar42 * local_4a8 + dVar37 * (double)local_498._8_8_) * dVar24;
              local_248 = (dVar37 * dStack_4a0 + dVar2) * dVar28;
              local_268 = (local_4a8 * dVar37 - dVar42 * (double)local_498._8_8_) * dVar24;
              dStack_260 = 0.0;
              uStack_240 = 0;
              uStack_220 = 0;
              local_218 = (double)local_488._0_8_;
              dStack_210 = (double)local_488._8_8_;
              local_208 = local_478;
              uStack_200 = 0x3ff0000000000000;
              FUN_1447fea8d(&local_178);
              FUN_144a1c686(&local_178,0x3e45798ee0000000);
              auVar19._8_8_ = -(ulonglong)(0.0 <= dVar44);
              auVar19._0_8_ = -(ulonglong)(0.0 <= dVar22 * dVar24);
              auVar32 = blendvpd(_DAT_149936790,auVar49,auVar19);
              uVar14 = -(ulonglong)(0.0 <= dVar23 * dVar27);
              dVar28 = (double)(~uVar14 & 0xbff0000000000000 | uVar14 & 0x3ff0000000000000);
              dVar37 = auVar32._0_8_;
              local_168 = local_168 * dVar37;
              dStack_170 = dStack_170 * dVar37;
              local_178 = local_178 * dVar37;
              dVar37 = auVar32._8_8_;
              local_148 = local_148 * dVar37;
              local_150 = local_150 * dVar37;
              local_158 = dVar37 * local_158;
              local_128 = local_128 * dVar28;
              local_130 = local_130 * dVar28;
              local_138 = dVar28 * local_138;
              FUN_14481fd10(&local_298,&local_178);
              auVar26._0_8_ = local_298 * local_298;
              auVar26._8_8_ = dStack_290 * dStack_290;
              dVar28 = local_288 * local_288 + auVar26._0_8_;
              dVar37 = dStack_280 * dStack_280 + auVar26._8_8_;
              auVar34._0_8_ = dVar28 + dVar37;
              auVar34._8_8_ = dVar28 + dVar37;
              auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_);
              auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_);
              auVar32 = sqrtpd(auVar26,auVar34);
              auVar49 = divpd(auVar49,auVar32);
              auVar35._0_8_ = auVar49._0_8_ * local_288;
              auVar35._8_8_ = auVar49._8_8_ * dStack_280;
              local_4a8 = (double)((ulonglong)(local_298 * auVar49._0_8_) &
                                  -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_));
              dStack_4a0 = (double)((ulonglong)(dStack_290 * auVar49._8_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_));
              local_498 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar35,auVar20);
              local_468._8_4_ = SUB84(dVar44,0);
              local_468._0_8_ = dVar22 * dVar24;
              local_468._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
              local_458._8_4_ = SUB84(dVar45,0);
              local_458._0_8_ = dVar23 * dVar27;
              local_458._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
              local_488._8_8_ = uStack_110;
              local_488._0_8_ = local_118;
              local_478 = local_108;
              dStack_470 = 0.0;
            }
          }
        }
        local_298 = local_4a8;
        dStack_290 = dStack_4a0;
        local_288 = (double)local_498._0_8_;
        dStack_280 = (double)local_498._8_8_;
        FUN_14690c377(local_530,&local_298,param_6[1],0);
        puVar6 = local_530;
        if (*param_4 != '\0') {
          puVar6 = local_440;
        }
        local_548 = *puVar6;
        puVar6 = local_530;
        if (param_4[1] != '\0') {
          puVar6 = local_440;
        }
        local_540 = puVar6[1];
        puVar6 = local_530;
        if (param_4[2] != '\0') {
          puVar6 = local_440;
        }
        local_538 = puVar6[2];
        local_248 = (double)local_458._0_8_;
        uStack_240 = local_458._8_8_;
        local_258 = (double)local_468._0_8_;
        dStack_250 = (double)local_468._8_8_;
        local_268 = local_478;
        dStack_260 = dStack_470;
        local_278 = (double)local_488._0_8_;
        uStack_270._0_4_ = local_488._8_4_;
        uStack_270._4_4_ = local_488._12_4_;
        FUN_14690c017(&local_178,&local_548,param_6[1],0);
        local_1f8[0] = local_178;
        local_1f8[1] = dStack_170;
        local_1e8._8_8_ = dStack_160;
        local_1e8._0_8_ = local_168;
        local_1d8._12_4_ = uStack_270._4_4_;
        local_1d8._8_4_ = (undefined4)uStack_270;
        local_1d8._0_8_ = local_278;
        local_1c8 = local_268;
        dStack_1c0 = dStack_260;
        local_1b8 = local_258;
        dStack_1b0 = dStack_250;
        local_1a8 = local_248;
        uStack_1a0 = uStack_240;
        if (param_7 < 0.9999) {
          FUN_14915b8da(&local_178,&local_4a8,local_1f8);
          pdVar12 = &local_178;
          pdVar13 = local_1f8;
          for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
            *pdVar13 = *pdVar12;
            pdVar12 = pdVar12 + 1;
            pdVar13 = pdVar13 + 1;
          }
        }
        if (*(char *)param_2 == '\x04') {
          FUN_1449437a2(local_1f8,&local_178,local_518);
          pdVar12 = &local_178;
          pdVar13 = local_1f8;
          for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
            *pdVar13 = *pdVar12;
            pdVar12 = pdVar12 + 1;
            pdVar13 = pdVar13 + 1;
          }
          dVar22 = (double)local_1e8._0_8_ * (double)local_1e8._0_8_ + local_1f8[0] * local_1f8[0];
          dVar23 = (double)local_1e8._8_8_ * (double)local_1e8._8_8_ + local_1f8[1] * local_1f8[1];
          auVar36._0_8_ = dVar22 + dVar23;
          auVar36._8_8_ = dVar22 + dVar23;
          auVar21._8_8_ = -(ulonglong)(1e-08 <= auVar36._8_8_);
          auVar21._0_8_ = -(ulonglong)(1e-08 <= auVar36._0_8_);
          auVar49 = sqrtpd(auVar36,auVar36);
          auVar49 = divpd(_DAT_149934d80,auVar49);
          auVar41._0_8_ = auVar49._0_8_ * (double)local_1e8._0_8_;
          auVar41._8_8_ = auVar49._8_8_ * (double)local_1e8._8_8_;
          local_1e8 = blendvpd(_DAT_149935300,auVar41,auVar21);
          local_1f8[0] = (double)((ulonglong)(local_1f8[0] * auVar49._0_8_) &
                                 -(ulonglong)(1e-08 <= auVar36._0_8_));
          local_1f8[1] = (double)((ulonglong)(local_1f8[1] * auVar49._8_8_) &
                                 -(ulonglong)(1e-08 <= auVar36._8_8_));
        }
        pdVar12 = local_1f8;
        pdVar13 = &local_178;
        for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
          *pdVar13 = *pdVar12;
          pdVar12 = pdVar12 + 1;
          pdVar13 = pdVar13 + 1;
        }
        local_550 = *(undefined4 *)(param_2 + 1);
        local_558 = *param_2;
        uVar3 = FUN_140813180();
        local_578 = 0;
        local_580 = 0;
        local_588 = 1;
        FUN_140122cc6(lVar1,uVar3,&local_178,0);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_5a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14927eb7a FUN_14927eb7a body=285 status=ok
// SIG undefined FUN_14927eb7a(void)

void FUN_14927eb7a(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 unaff_RBX;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar3 = (undefined8 *)*param_2;
  uVar4 = *puVar3;
  uVar2 = *(undefined1 *)puVar3[4];
  uVar5 = puVar3[8];
  puVar6 = (undefined8 *)puVar3[0xc];
  uVar7 = puVar3[0x10];
  uVar1 = *(undefined4 *)puVar3[0x14];
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(puVar3 + 0x18,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  lVar8 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_78 = FUN_144828ac0(*param_2 + 0xe0,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar8 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar8 * 0x14));
  local_70 = *puVar6;
  local_98 = &local_70;
  local_68 = *(undefined4 *)(puVar6 + 1);
  local_90 = uVar7;
  local_88 = uVar1;
  local_80 = uVar9;
  FUN_14927ed54(*(undefined8 *)(param_1 + 0xc0),uVar4,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff,uVar5);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14927eca0 FUN_14927eca0 body=178 status=ok
// SIG undefined FUN_14927eca0(void)

void FUN_14927eca0(longlong param_1)

{
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  longlong local_50;
  undefined4 local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x200);
  local_58 = &local_28;
  local_20 = *(undefined4 *)(param_1 + 0x208);
  local_38 = param_1 + 0x238;
  local_40 = param_1 + 0x218;
  local_48 = *(undefined4 *)(param_1 + 0x214);
  local_50 = param_1 + 0x210;
  FUN_14927ed54(param_1 + 0x10,param_1 + 0x1f0,*(undefined1 *)(param_1 + 0x1fc),param_1 + 0x1fd);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14927ed54 FUN_14927ed54 body=7565 status=ok
// SIG undefined FUN_14927ed54(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14927ed54(longlong param_1,char *param_2,undefined1 param_3,char *param_4,longlong *param_5
                  ,char *param_6,float param_7,longlong param_8,longlong *param_9)

{
  ushort uVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  char cVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong lVar16;
  double *pdVar17;
  longlong lVar18;
  double *pdVar19;
  undefined1 *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined1 auVar24 [12];
  double dVar23;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  undefined1 auVar39 [16];
  double dVar41;
  undefined1 auVar40 [16];
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  double dVar46;
  undefined1 auVar45 [16];
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar59;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar60;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar61;
  undefined1 auVar62 [16];
  double dVar69;
  double dVar70;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar71;
  float fVar72;
  double dVar73;
  undefined1 auVar74 [16];
  undefined1 auStack_508 [32];
  undefined1 local_4e8;
  undefined1 local_4e0;
  undefined1 local_4d8;
  undefined1 local_4c8 [16];
  undefined1 local_4b8 [16];
  undefined1 local_4a8 [16];
  undefined1 local_498 [16];
  double local_488 [12];
  double local_428;
  double dStack_420;
  double local_418;
  double dStack_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  double local_3a8;
  double dStack_3a0;
  undefined1 local_398 [16];
  double local_388;
  double dStack_380;
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  double local_308;
  double dStack_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
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
  double local_1f8 [2];
  undefined1 local_1e8 [16];
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
  double local_178 [4];
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_508;
  if (((0.0001 <= param_7) && (lVar3 = *(longlong *)(param_1 + 0x1b0), lVar3 != 0)) &&
     (cVar9 = FUN_144828dba(param_8,param_2,lVar3), cVar9 != '\0')) {
    if ((int)param_9[1] != (int)param_5[1]) {
      FUN_149250716(param_9);
    }
    uVar13 = 0xffffffff;
    if (*(ushort *)(param_8 + 0xc) != 0xffff) {
      uVar13 = (uint)*(ushort *)(param_8 + 0xc);
    }
    FUN_144afced8(lVar3,local_2f8,uVar13,1);
    local_358 = ZEXT816(0);
    local_348 = ZEXT816(0x3ff0000000000000) << 0x40;
    dVar23 = (double)DAT_149934d80;
    dVar42 = DAT_149934d80._8_8_;
    local_318 = _DAT_149934d80;
    local_308 = 1.0;
    dStack_300 = 0.0;
    cVar9 = *param_2;
    auVar40 = _DAT_149934d80;
    local_338 = local_358;
    local_328 = local_358;
    if (cVar9 == '\x04') {
      uVar1 = *(ushort *)(param_8 + 0xc);
      if (((uVar1 != 0xffff) &&
          (*(uint *)(lVar3 + 0xc0) != (uint)uVar1 &&
           (int)(uint)uVar1 <= (int)*(uint *)(lVar3 + 0xc0))) &&
         ((lVar16 = *(longlong *)(*(longlong *)(lVar3 + 0xb8) + (ulonglong)(uint)uVar1 * 8),
          lVar16 != 0 && (*(char *)(lVar16 + 0x10) == '\x04')))) {
        lVar18 = lVar3;
        uVar11 = FUN_1401261c4(lVar3,local_358,lVar16,1);
        auVar40 = _DAT_149934d80;
        dVar38 = local_318._0_8_;
        dVar60 = local_318._8_8_;
        auVar62._8_8_ = dStack_300;
        auVar62._0_8_ = local_308;
        dVar41 = local_2b8._0_8_;
        dVar59 = local_2b8._8_8_;
        auVar39 = local_2a8;
        dVar47 = local_2a8._0_8_;
        dVar43 = local_2a8._8_8_;
        auVar48 = minpd(local_2b8,local_318);
        auVar62 = minpd(local_2a8,auVar62);
        auVar49._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
        auVar49._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
        iVar12 = movmskpd(uVar11,auVar49);
        auVar48._8_8_ = -(ulonglong)(auVar62._8_8_ < 0.0);
        auVar48._0_8_ = -(ulonglong)(auVar62._0_8_ < 0.0);
        uVar13 = movmskpd((int)lVar18,auVar48);
        if ((uVar13 & 0x3fffffff) == 0 && iVar12 == 0) {
          dVar61 = (double)local_358._0_8_ * (double)local_2f8._8_8_;
          dVar69 = (double)local_2f8._0_8_ * (double)local_358._8_8_;
          dVar46 = (double)local_2f8._8_8_ * (double)local_348._0_8_;
          dVar23 = (double)local_2e8._8_8_ * (double)local_348._0_8_;
          dVar70 = (double)local_2f8._0_8_ * (double)local_348._0_8_ * 1.0 +
                   (double)local_2e8._8_8_ * (double)local_358._8_8_ +
                   (double)local_2e8._0_8_ * (double)local_358._0_8_ * -1.0 +
                   (double)local_2f8._8_8_ * (double)local_348._8_8_;
          dVar42 = (double)local_2e8._0_8_ * (double)local_348._0_8_ * -1.0 +
                   (((double)local_358._0_8_ * (double)local_2f8._0_8_ * -1.0 +
                    (double)local_2e8._8_8_ * (double)local_348._8_8_) -
                   (double)local_2f8._8_8_ * (double)local_358._8_8_);
          local_2f8._8_4_ = SUB84(dVar70,0);
          local_2f8._0_8_ =
               dVar46 * -1.0 +
               (double)local_2e8._0_8_ * (double)local_358._8_8_ +
               (double)local_2e8._8_8_ * (double)local_358._0_8_ * 1.0 +
               (double)local_2f8._0_8_ * (double)local_348._8_8_;
          local_2f8._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
          local_2e8._8_4_ = SUB84(dVar42,0);
          local_2e8._0_8_ =
               dVar23 * 1.0 +
               ((dVar61 * 1.0 + (double)local_2e8._0_8_ * (double)local_348._8_8_) - dVar69);
          local_2e8._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
          dVar69 = (double)local_2d8._0_8_ * dVar38;
          dVar70 = (double)local_2d8._8_8_ * dVar60;
          local_2c8._0_8_ = (double)local_2c8._0_8_ * local_308;
          local_2c8._8_8_ = (double)local_2c8._8_8_ * dStack_300;
          dVar23 = dVar70 * (double)local_358._0_8_ - (double)local_358._8_8_ * dVar69;
          dVar42 = (double)local_2c8._0_8_ * (double)local_358._8_8_ -
                   (double)local_348._0_8_ * dVar70;
          dVar46 = dVar69 * (double)local_348._0_8_ -
                   (double)local_358._0_8_ * (double)local_2c8._0_8_;
          dVar61 = (double)local_2c8._8_8_ * (double)local_348._8_8_ -
                   (double)local_348._8_8_ * (double)local_2c8._8_8_;
          dVar42 = dVar42 + dVar42;
          dVar46 = dVar46 + dVar46;
          dVar23 = dVar23 + dVar23;
          dVar61 = dVar61 + dVar61;
          dVar70 = (dVar42 * (double)local_348._0_8_ - dVar23 * (double)local_358._0_8_) +
                   (double)local_348._8_8_ * dVar46 + dVar70 + (double)local_338._8_8_;
          local_2c8._0_8_ =
               (dVar46 * (double)local_358._0_8_ - (double)local_358._8_8_ * dVar42) +
               (double)local_348._8_8_ * dVar23 + (double)local_2c8._0_8_ + (double)local_328._0_8_;
          local_2c8._8_8_ =
               (dVar61 * (double)local_348._8_8_ - dVar61 * (double)local_348._8_8_) +
               (double)local_348._8_8_ * dVar61 + (double)local_2c8._8_8_ + (double)local_328._8_8_;
          local_2d8._8_4_ = SUB84(dVar70,0);
          local_2d8._0_8_ =
               (dVar23 * (double)local_358._8_8_ - (double)local_348._0_8_ * dVar46) +
               (double)local_348._8_8_ * dVar42 + dVar69 + (double)local_338._0_8_;
          local_2d8._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
          local_2b8._0_8_ = dVar41 * dVar38;
          local_2b8._8_8_ = dVar59 * dVar60;
          local_2a8._0_8_ = dVar47 * local_308;
          local_2a8._8_8_ = dVar43 * dStack_300;
          local_4c8 = local_318;
          local_4a8 = auVar39;
        }
        else {
          dVar69 = (double)local_358._8_8_ + (double)local_358._8_8_;
          dVar46 = (double)local_348._0_8_ + (double)local_348._0_8_;
          dVar73 = (double)local_358._0_8_ * ((double)local_358._0_8_ + (double)local_358._0_8_);
          local_1a8 = (1.0 - (dVar73 + (double)local_358._8_8_ * dVar69)) * local_308;
          dVar70 = ((double)local_358._0_8_ + (double)local_358._0_8_) * (double)local_348._8_8_;
          local_1b8 = (dVar69 * (double)local_348._8_8_ + (double)local_358._0_8_ * dVar46) *
                      local_308;
          dVar61 = local_308 * dVar47;
          dVar43 = dStack_300 * dVar43;
          dStack_1b0 = (dVar46 * (double)local_358._8_8_ - dVar70) * local_308;
          local_1f8[0] = (dVar23 - ((double)local_348._0_8_ * dVar46 +
                                   (double)local_358._8_8_ * dVar69)) * dVar38;
          dVar23 = (dVar42 - ((double)local_348._0_8_ * dVar46 + dVar73)) * dVar60;
          local_1f8[1] = (dVar69 * (double)local_358._0_8_ + dVar46 * (double)local_348._8_8_) *
                         dVar38;
          local_1c8 = (dVar46 * (double)local_358._8_8_ + dVar70) * dVar60;
          local_1e8._8_8_ = 0;
          local_1e8._0_8_ =
               ((double)local_358._0_8_ * dVar46 - dVar69 * (double)local_348._8_8_) * dVar38;
          local_1d8._8_4_ = SUB84(dVar23,0);
          local_1d8._0_8_ =
               (dVar69 * (double)local_358._0_8_ - dVar46 * (double)local_348._8_8_) * dVar60;
          local_1d8._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          local_198 = (double)local_338._0_8_;
          dStack_190 = (double)local_338._8_8_;
          local_188 = (double)local_328._0_8_;
          uStack_180 = 0x3ff0000000000000;
          dVar70 = (double)local_2f8._8_8_ + (double)local_2f8._8_8_;
          dVar23 = (double)local_2e8._0_8_ + (double)local_2e8._0_8_;
          dVar46 = (double)local_2f8._0_8_ * ((double)local_2f8._0_8_ + (double)local_2f8._0_8_);
          local_228 = (1.0 - (dVar46 + (double)local_2f8._8_8_ * dVar70)) * dVar47;
          dVar42 = ((double)local_2f8._0_8_ + (double)local_2f8._0_8_) * (double)local_2e8._8_8_;
          local_238 = (dVar70 * (double)local_2e8._8_8_ + (double)local_2f8._0_8_ * dVar23) * dVar47
          ;
          local_258 = (dVar70 * (double)local_2f8._0_8_ - dVar23 * (double)local_2e8._8_8_) * dVar59
          ;
          dStack_230 = (dVar23 * (double)local_2f8._8_8_ - dVar42) * dVar47;
          dVar60 = dVar60 * dVar59;
          dStack_250 = (1.0 - ((double)local_2e8._0_8_ * dVar23 + dVar46)) * dVar59;
          local_248 = (dVar23 * (double)local_2f8._8_8_ + dVar42) * dVar59;
          local_278._8_8_ =
               (dVar70 * (double)local_2f8._0_8_ + dVar23 * (double)local_2e8._8_8_) * dVar41;
          local_278._0_8_ =
               (1.0 - ((double)local_2e8._0_8_ * dVar23 + (double)local_2f8._8_8_ * dVar70)) *
               dVar41;
          local_268._8_8_ = 0;
          local_268._0_8_ =
               ((double)local_2f8._0_8_ * dVar23 - dVar70 * (double)local_2e8._8_8_) * dVar41;
          uStack_240 = 0;
          uStack_220 = 0;
          local_218 = (double)local_2d8._0_8_;
          dStack_210 = (double)local_2d8._8_8_;
          local_208 = (double)local_2c8._0_8_;
          uStack_200 = 0x3ff0000000000000;
          FUN_1447fea8d(local_178);
          FUN_144a1c686(local_178,0x3e45798ee0000000);
          auVar39._8_8_ = -(ulonglong)(0.0 <= dVar60);
          auVar39._0_8_ = -(ulonglong)(0.0 <= dVar38 * dVar41);
          auVar39 = blendvpd(_DAT_149936790,auVar40,auVar39);
          uVar22 = -(ulonglong)(0.0 <= dVar61);
          dVar23 = (double)(~uVar22 & 0xbff0000000000000 | uVar22 & 0x3ff0000000000000);
          dVar42 = auVar39._0_8_;
          local_178[2] = local_178[2] * dVar42;
          local_178[1] = local_178[1] * dVar42;
          local_178[0] = local_178[0] * dVar42;
          dVar42 = auVar39._8_8_;
          local_148 = local_148 * dVar42;
          local_150 = local_150 * dVar42;
          local_158 = dVar42 * local_158;
          local_128 = local_128 * dVar23;
          local_130 = local_130 * dVar23;
          local_138 = dVar23 * local_138;
          FUN_14481fd10(local_3d8,local_178);
          dVar23 = local_3c8._0_8_;
          dVar42 = local_3c8._8_8_;
          dVar47 = dVar23 * dVar23 + (double)local_3d8._0_8_ * (double)local_3d8._0_8_;
          dVar59 = dVar42 * dVar42 + (double)local_3d8._8_8_ * (double)local_3d8._8_8_;
          auVar50._0_8_ = dVar47 + dVar59;
          auVar50._8_8_ = dVar47 + dVar59;
          auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar50._8_8_);
          auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar50._0_8_);
          auVar39 = sqrtpd(auVar50,auVar50);
          auVar39 = divpd(auVar40,auVar39);
          auVar63._0_8_ = auVar39._0_8_ * dVar23;
          auVar63._8_8_ = auVar39._8_8_ * dVar42;
          local_2e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar63,auVar25);
          local_2b8._8_4_ = SUB84(dVar60,0);
          local_2b8._0_8_ = dVar38 * dVar41;
          local_2b8._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
          local_2a8._8_4_ = SUB84(dVar43,0);
          local_2a8._0_8_ = dVar61;
          local_2a8._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
          local_2f8._8_8_ =
               (ulonglong)((double)local_3d8._8_8_ * auVar39._8_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar50._8_8_);
          local_2f8._0_8_ =
               (ulonglong)((double)local_3d8._0_8_ * auVar39._0_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar50._0_8_);
          local_2d8._8_8_ = uStack_110;
          local_2d8._0_8_ = local_118;
          local_2c8._8_8_ = 0;
          local_2c8._0_8_ = local_108;
        }
      }
    }
    if (0 < (int)param_5[1]) {
      local_4a8[0] = param_3;
      lVar16 = 0;
      lVar18 = 0;
      lVar21 = 0;
      auVar39 = ZEXT816(0);
      do {
        lVar4 = *param_5;
        cVar10 = FUN_144828dba(*param_9 + lVar18,lVar16 + lVar4,lVar3);
        if (cVar10 != '\0') {
          fVar72 = *(float *)(lVar4 + 0xc + lVar16);
          auVar24._4_8_ = 0;
          auVar24._0_4_ = fVar72;
          if (fVar72 <= 0.0) {
            auVar24 = ZEXT812(0) << 0x20;
          }
          uVar13 = -(uint)(auVar24._0_4_ < 0.0001);
          auVar44._0_4_ = ~uVar13 & (uint)(auVar39._0_4_ + auVar24._0_4_);
          auVar44._4_4_ = 0;
          auVar44._8_4_ = ~auVar24._8_4_ & auVar39._8_4_;
          auVar44._12_4_ = auVar39._12_4_;
          auVar26._0_4_ = uVar13 & (uint)auVar39._0_4_;
          auVar26._4_4_ = 0;
          auVar26._8_4_ = auVar24._8_4_ & auVar39._8_4_;
          auVar26._12_4_ = 0;
          auVar39 = auVar26 | auVar44;
        }
        lVar21 = lVar21 + 1;
        uVar22 = (ulonglong)(int)param_5[1];
        lVar18 = lVar18 + 0x20;
        lVar16 = lVar16 + 0x10;
      } while (lVar21 < (longlong)uVar22);
      cVar10 = local_4a8[0];
      if (0.0001 < auVar39._0_4_) {
        fVar72 = 1.0 / auVar39._0_4_;
        if (local_4a8[0] == '\0') {
          local_4c8 = _DAT_14c8463d0;
          dVar23 = DAT_14c8463e0;
          dVar42 = DAT_14c8463e8;
        }
        else {
          local_268 = ZEXT816(0);
          local_278 = ZEXT816(0);
          auVar39 = ZEXT816(0);
          dVar23 = 0.0;
          dVar42 = 0.0;
          if (0 < (int)param_5[1]) {
            lVar18 = 0;
            lVar16 = 0;
            do {
              lVar21 = *param_9;
              sVar2 = *(short *)(lVar21 + 0xc + lVar18 * 2);
              if (((sVar2 != -1) &&
                  ((uint)*(ushort *)(lVar21 + 6 + lVar18 * 2) < DAT_14c87eb08 + 1U)) &&
                 ((*(longlong *)(lVar21 + 4 + lVar18 * 2) != 0 &&
                  (*(char *)(lVar21 + lVar18 * 2) != '\0')))) {
                fVar71 = *(float *)(*param_5 + 0xc + lVar18);
                if (fVar71 <= 0.0) {
                  fVar71 = 0.0;
                }
                if (0.0001 <= fVar71) {
                  fVar71 = fVar71 * fVar72;
                  lVar21 = lVar3;
                  FUN_14486750c(lVar3,local_178,sVar2,
                                CONCAT71((uint7)(uint3)(DAT_14c87eb08 + 1U >> 8),1));
                  local_3d8._8_8_ = local_178[1];
                  local_3d8._0_8_ = local_178[0];
                  local_3c8._8_8_ = local_178[3];
                  local_3c8._0_8_ = local_178[2];
                  if (*param_6 == '\x01') {
                    auVar27._8_8_ = -(ulonglong)((double)local_278._8_8_ == 0.0);
                    auVar27._0_8_ = -(ulonglong)((double)local_278._0_8_ == 0.0);
                    iVar12 = movmskpd(1,auVar27);
                    auVar28._8_8_ = -(ulonglong)((double)local_268._8_8_ == 0.0);
                    auVar28._0_8_ = -(ulonglong)((double)local_268._0_8_ == 0.0);
                    iVar14 = movmskpd((int)lVar21,auVar28);
                    if (iVar12 + iVar14 * 4 == 0xf) {
                      local_268._8_8_ = local_178[3];
                      local_268._0_8_ = local_178[2];
                      local_278 = local_3d8;
                    }
                    else {
                      FUN_144a44da6(local_1f8,local_278,local_3d8,(double)fVar71);
                      dVar23 = (double)local_1e8._0_8_ * (double)local_1e8._0_8_ +
                               local_1f8[0] * local_1f8[0];
                      dVar42 = (double)local_1e8._8_8_ * (double)local_1e8._8_8_ +
                               local_1f8[1] * local_1f8[1];
                      auVar51._0_8_ = dVar23 + dVar42;
                      auVar51._8_8_ = dVar23 + dVar42;
                      auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar51._8_8_);
                      auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar51._0_8_);
                      auVar39 = sqrtpd(auVar51,auVar51);
                      auVar39 = divpd(auVar40,auVar39);
                      auVar64._0_8_ = auVar39._0_8_ * (double)local_1e8._0_8_;
                      auVar64._8_8_ = auVar39._8_8_ * (double)local_1e8._8_8_;
                      local_268 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar64,auVar29);
                      local_278._8_8_ =
                           (ulonglong)(local_1f8[1] * auVar39._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar51._8_8_);
                      local_278._0_8_ =
                           (ulonglong)(local_1f8[0] * auVar39._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar51._0_8_);
                    }
                  }
                  else {
                    if (*param_6 != '\0') {
                      uVar13 = 0xffffffff;
                      if (*(ushort *)(param_8 + 0xc) != 0xffff) {
                        uVar13 = (uint)*(ushort *)(param_8 + 0xc);
                      }
                      FUN_14486750c(lVar3,local_1f8,uVar13,1);
                      auVar39 = local_1e8;
                      dVar23 = local_1f8[0];
                      dVar42 = local_1f8[1];
                      goto LAB_14927f7d7;
                    }
                    dVar42 = (double)fVar71;
                    dVar38 = local_178[0] * dVar42;
                    dVar41 = local_178[1] * dVar42;
                    dVar23 = local_178[2] * dVar42;
                    dVar42 = local_178[3] * dVar42;
                    if (dVar42 * (double)local_268._8_8_ +
                        (double)local_268._0_8_ * dVar23 +
                        (double)local_278._0_8_ * dVar38 + dVar41 * (double)local_278._8_8_ < 0.0) {
                      local_278._0_8_ = (double)local_278._0_8_ - dVar38;
                      local_278._8_8_ = (double)local_278._8_8_ - dVar41;
                      local_268._0_8_ = (double)local_268._0_8_ - dVar23;
                      local_268._8_8_ = (double)local_268._8_8_ - dVar42;
                    }
                    else {
                      local_268._0_8_ = dVar23 + (double)local_268._0_8_;
                      local_268._8_8_ = dVar42 + (double)local_268._8_8_;
                      local_278._8_8_ = dVar41 + (double)local_278._8_8_;
                      local_278._0_8_ = dVar38 + (double)local_278._0_8_;
                    }
                  }
                  uVar22 = (ulonglong)*(uint *)(param_5 + 1);
                }
              }
              lVar16 = lVar16 + 1;
              lVar18 = lVar18 + 0x10;
            } while (lVar16 < (int)uVar22);
            auVar39 = local_268;
            dVar23 = (double)local_278._0_8_;
            dVar42 = (double)local_278._8_8_;
          }
LAB_14927f7d7:
          dVar38 = auVar39._0_8_;
          dVar41 = auVar39._8_8_;
          dVar47 = dVar38 * dVar38 + dVar23 * dVar23;
          dVar60 = dVar41 * dVar41 + dVar42 * dVar42;
          auVar52._0_8_ = dVar47 + dVar60;
          auVar52._8_8_ = dVar47 + dVar60;
          auVar30._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar52._8_8_);
          auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar52._0_8_);
          auVar39 = sqrtpd(auVar52,auVar52);
          auVar39 = divpd(auVar40,auVar39);
          auVar65._0_8_ = auVar39._0_8_ * dVar38;
          auVar65._8_8_ = auVar39._8_8_ * dVar41;
          dVar23 = (double)((ulonglong)(dVar23 * auVar39._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar52._0_8_));
          dVar42 = (double)((ulonglong)(dVar42 * auVar39._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar52._8_8_));
          local_268 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar65,auVar30);
          local_278._8_8_ = dVar42;
          local_278._0_8_ = dVar23;
          uVar1 = *(ushort *)(param_8 + 0xc);
          if ((uVar1 == 0xffff) ||
             (*(uint *)(lVar3 + 0xc0) == (uint)uVar1 ||
              (int)*(uint *)(lVar3 + 0xc0) < (int)(uint)uVar1)) {
            pdVar17 = (double *)&DAT_14c846480;
            pdVar19 = local_178;
            for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
              *pdVar19 = *pdVar17;
              pdVar17 = pdVar17 + 1;
              pdVar19 = pdVar19 + 1;
            }
          }
          else {
            FUN_14449ec9a(lVar3,local_178,
                          *(undefined8 *)(*(longlong *)(lVar3 + 0xb8) + (ulonglong)(uint)uVar1 * 8),
                          2);
            dVar23 = (double)local_278._0_8_;
            dVar42 = (double)local_278._8_8_;
          }
          dVar38 = DAT_149931160;
          dVar47 = DAT_149931160._8_8_;
          dVar59 = local_178[2] * dVar38;
          dVar46 = local_178[3] * dVar47;
          dVar69 = local_268._0_8_;
          dVar73 = local_268._8_8_;
          dVar41 = (double)DAT_149931170;
          dVar60 = DAT_149931170._8_8_;
          dVar43 = dVar42 * dVar59 * dVar38 +
                   ((dVar23 * dVar46 - dVar73 * local_178[0] * dVar41) - dVar69 * local_178[1]);
          dVar70 = dVar23 * dVar59 * dVar47 +
                   ((dVar42 * dVar46 - dVar69 * local_178[0] * dVar60) - dVar73 * local_178[1]);
          dVar61 = (dVar73 * dVar59 * dVar41 +
                   dVar23 * local_178[1] + (dVar46 * dVar69 - local_178[0] * dVar42 * dVar41)) *
                   dVar38;
          dVar42 = (dVar69 * dVar59 * dVar60 +
                   dVar42 * local_178[1] + (dVar46 * dVar73 - local_178[0] * dVar23 * dVar60)) *
                   dVar47;
          dVar23 = (double)local_2f8._0_8_ * dVar61 * dVar47 +
                   (((double)local_2f8._8_8_ * dVar42 - (double)local_2e8._0_8_ * dVar43 * dVar60) -
                   (double)local_2e8._8_8_ * dVar70);
          local_4c8._8_4_ = SUB84(dVar23,0);
          local_4c8._0_8_ =
               (double)local_2f8._8_8_ * dVar61 * dVar38 +
               (((double)local_2f8._0_8_ * dVar42 - (double)local_2e8._8_8_ * dVar43 * dVar41) -
               (double)local_2e8._0_8_ * dVar70);
          local_4c8._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
          uVar22 = (ulonglong)*(uint *)(param_5 + 1);
          dVar23 = (double)local_2e8._8_8_ * dVar61 * dVar41 +
                   dVar70 * (double)local_2f8._0_8_ +
                   (dVar42 * (double)local_2e8._0_8_ - dVar43 * (double)local_2f8._8_8_ * dVar41);
          dVar42 = (double)local_2e8._0_8_ * dVar61 * dVar60 +
                   dVar70 * (double)local_2f8._8_8_ +
                   (dVar42 * (double)local_2e8._8_8_ - dVar43 * (double)local_2f8._0_8_ * dVar60);
        }
        local_368 = ZEXT816(0);
        local_378 = ZEXT816(0);
        auVar39 = ZEXT816(0);
        dVar38 = 0.0;
        dVar41 = 0.0;
        if (0 < (int)uVar22) {
          lVar18 = 0;
          lVar16 = 0;
          do {
            lVar21 = *param_9;
            sVar2 = *(short *)(lVar21 + 0xc + lVar18 * 2);
            if ((((sVar2 != -1) && ((uint)*(ushort *)(lVar21 + 6 + lVar18 * 2) < DAT_14c87eb08 + 1U)
                 ) && (*(longlong *)(lVar21 + 4 + lVar18 * 2) != 0)) &&
               (*(char *)(lVar21 + lVar18 * 2) != '\0')) {
              fVar71 = *(float *)(*param_5 + 0xc + lVar18);
              if (fVar71 <= 0.0) {
                fVar71 = 0.0;
              }
              if (0.0001 <= fVar71) {
                fVar71 = fVar71 * fVar72;
                lVar21 = lVar3;
                FUN_14486750c(lVar3,local_178,sVar2,0);
                local_278._8_8_ = local_178[1];
                local_278._0_8_ = local_178[0];
                local_268._8_8_ = local_178[3];
                local_268._0_8_ = local_178[2];
                if (*param_6 == '\x01') {
                  auVar31._8_8_ = -(ulonglong)((double)local_378._8_8_ == 0.0);
                  auVar31._0_8_ = -(ulonglong)((double)local_378._0_8_ == 0.0);
                  iVar12 = movmskpd(1,auVar31);
                  auVar32._8_8_ = -(ulonglong)((double)local_368._8_8_ == 0.0);
                  auVar32._0_8_ = -(ulonglong)((double)local_368._0_8_ == 0.0);
                  iVar14 = movmskpd((int)lVar21,auVar32);
                  if (iVar12 + iVar14 * 4 == 0xf) {
                    local_368._8_8_ = local_178[3];
                    local_368._0_8_ = local_178[2];
                    local_378 = local_278;
                  }
                  else {
                    FUN_144a44da6(local_1f8,local_378,local_278,(double)fVar71);
                    dVar38 = (double)local_1e8._0_8_ * (double)local_1e8._0_8_ +
                             local_1f8[0] * local_1f8[0];
                    dVar41 = (double)local_1e8._8_8_ * (double)local_1e8._8_8_ +
                             local_1f8[1] * local_1f8[1];
                    auVar53._0_8_ = dVar38 + dVar41;
                    auVar53._8_8_ = dVar38 + dVar41;
                    auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar53._8_8_);
                    auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar53._0_8_);
                    auVar39 = sqrtpd(auVar53,auVar53);
                    auVar39 = divpd(auVar40,auVar39);
                    auVar66._0_8_ = auVar39._0_8_ * (double)local_1e8._0_8_;
                    auVar66._8_8_ = auVar39._8_8_ * (double)local_1e8._8_8_;
                    local_368 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar66,auVar33);
                    local_378._8_8_ =
                         (ulonglong)(local_1f8[1] * auVar39._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar53._8_8_);
                    local_378._0_8_ =
                         (ulonglong)(local_1f8[0] * auVar39._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar53._0_8_);
                  }
                }
                else {
                  if (*param_6 != '\0') {
                    uVar13 = 0xffffffff;
                    if (*(ushort *)(param_8 + 0xc) != 0xffff) {
                      uVar13 = (uint)*(ushort *)(param_8 + 0xc);
                    }
                    FUN_14486750c(lVar3,local_1f8,uVar13,0);
                    auVar39 = local_1e8;
                    dVar38 = local_1f8[0];
                    dVar41 = local_1f8[1];
                    goto LAB_14927fcbf;
                  }
                  dVar41 = (double)fVar71;
                  dVar47 = local_178[0] * dVar41;
                  dVar60 = local_178[1] * dVar41;
                  dVar38 = local_178[2] * dVar41;
                  dVar41 = local_178[3] * dVar41;
                  if (dVar41 * (double)local_368._8_8_ +
                      (double)local_368._0_8_ * dVar38 +
                      (double)local_378._0_8_ * dVar47 + dVar60 * (double)local_378._8_8_ < 0.0) {
                    local_378._0_8_ = (double)local_378._0_8_ - dVar47;
                    local_378._8_8_ = (double)local_378._8_8_ - dVar60;
                    local_368._0_8_ = (double)local_368._0_8_ - dVar38;
                    local_368._8_8_ = (double)local_368._8_8_ - dVar41;
                  }
                  else {
                    local_368._0_8_ = dVar38 + (double)local_368._0_8_;
                    local_368._8_8_ = dVar41 + (double)local_368._8_8_;
                    local_378._8_8_ = dVar60 + (double)local_378._8_8_;
                    local_378._0_8_ = dVar47 + (double)local_378._0_8_;
                  }
                }
                uVar22 = (ulonglong)*(uint *)(param_5 + 1);
              }
            }
            lVar16 = lVar16 + 1;
            lVar18 = lVar18 + 0x10;
          } while (lVar16 < (int)uVar22);
          auVar39 = local_368;
          dVar38 = (double)local_378._0_8_;
          dVar41 = (double)local_378._8_8_;
        }
LAB_14927fcbf:
        dVar47 = auVar39._0_8_;
        dVar60 = auVar39._8_8_;
        dVar59 = dVar47 * dVar47 + dVar38 * dVar38;
        dVar43 = dVar60 * dVar60 + dVar41 * dVar41;
        auVar54._0_8_ = dVar59 + dVar43;
        auVar54._8_8_ = dVar59 + dVar43;
        auVar34._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar54._8_8_);
        auVar34._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar54._0_8_);
        auVar39 = sqrtpd(auVar54,auVar54);
        auVar39 = divpd(auVar40,auVar39);
        auVar67._0_8_ = auVar39._0_8_ * dVar47;
        auVar67._8_8_ = auVar39._8_8_ * dVar60;
        local_378._8_8_ =
             (ulonglong)(dVar41 * auVar39._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar54._8_8_);
        local_378._0_8_ =
             (ulonglong)(dVar38 * auVar39._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar54._0_8_);
        local_368 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar67,auVar34);
        puVar20 = &DAT_ffffffff;
        if (*(ushort *)(param_8 + 0xc) != 0xffff) {
          puVar20 = (undefined1 *)(ulonglong)(uint)*(ushort *)(param_8 + 0xc);
        }
        lVar16 = lVar3;
        uVar11 = FUN_144afced8(lVar3,local_3d8,puVar20,0);
        auVar39 = _DAT_149934d80;
        if (cVar9 == '\x04') {
          dVar38 = local_318._0_8_;
          dVar47 = local_318._8_8_;
          auVar6._8_8_ = dStack_300;
          auVar6._0_8_ = local_308;
          dVar41 = local_398._0_8_;
          dVar60 = local_398._8_8_;
          local_4b8._8_8_ = dStack_380;
          local_4b8._0_8_ = local_388;
          auVar62 = minpd(local_398,local_318);
          auVar48 = minpd(local_4b8,auVar6);
          auVar55._8_8_ = -(ulonglong)(auVar62._8_8_ < 0.0);
          auVar55._0_8_ = -(ulonglong)(auVar62._0_8_ < 0.0);
          iVar12 = movmskpd(uVar11,auVar55);
          auVar68._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
          auVar68._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
          uVar13 = movmskpd((int)lVar16,auVar68);
          if ((uVar13 & 0x3fffffff) == 0 && iVar12 == 0) {
            dVar46 = (double)local_358._0_8_ * (double)local_3d8._8_8_;
            dVar70 = (double)local_3d8._0_8_ * (double)local_358._8_8_;
            dVar43 = (double)local_3d8._0_8_ * (double)local_348._0_8_ * 1.0 +
                     (double)local_3c8._8_8_ * (double)local_358._8_8_ +
                     (double)local_3c8._0_8_ * (double)local_358._0_8_ * -1.0 +
                     (double)local_3d8._8_8_ * (double)local_348._8_8_;
            dVar59 = (double)local_3c8._0_8_ * (double)local_348._0_8_ * -1.0 +
                     (((double)local_358._0_8_ * (double)local_3d8._0_8_ * -1.0 +
                      (double)local_3c8._8_8_ * (double)local_348._8_8_) -
                     (double)local_3d8._8_8_ * (double)local_358._8_8_);
            auVar5._8_4_ = SUB84(dVar43,0);
            auVar5._0_8_ = (double)local_3d8._8_8_ * (double)local_348._0_8_ * -1.0 +
                           (double)local_3c8._0_8_ * (double)local_358._8_8_ +
                           (double)local_3c8._8_8_ * (double)local_358._0_8_ * 1.0 +
                           (double)local_3d8._0_8_ * (double)local_348._8_8_;
            auVar5._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
            local_3d8 = auVar5;
            auVar40._8_4_ = SUB84(dVar59,0);
            auVar40._0_8_ =
                 (double)local_3c8._8_8_ * (double)local_348._0_8_ * 1.0 +
                 ((dVar46 * 1.0 + (double)local_3c8._0_8_ * (double)local_348._8_8_) - dVar70);
            auVar40._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
            local_3c8 = auVar40;
            dVar69 = (double)local_3b8._0_8_ * dVar38;
            dVar70 = (double)local_3b8._8_8_ * dVar47;
            local_3a8 = local_3a8 * local_308;
            dStack_3a0 = dStack_3a0 * dStack_300;
            dVar59 = dVar70 * (double)local_358._0_8_ - (double)local_358._8_8_ * dVar69;
            dVar43 = local_3a8 * (double)local_358._8_8_ - (double)local_348._0_8_ * dVar70;
            dVar46 = dVar69 * (double)local_348._0_8_ - (double)local_358._0_8_ * local_3a8;
            dVar61 = dStack_3a0 * (double)local_348._8_8_ - (double)local_348._8_8_ * dStack_3a0;
            dVar43 = dVar43 + dVar43;
            dVar46 = dVar46 + dVar46;
            dVar59 = dVar59 + dVar59;
            dVar61 = dVar61 + dVar61;
            dVar70 = (dVar43 * (double)local_348._0_8_ - dVar59 * (double)local_358._0_8_) +
                     (double)local_348._8_8_ * dVar46 + dVar70 + (double)local_338._8_8_;
            local_3b8._8_4_ = SUB84(dVar70,0);
            local_3b8._0_8_ =
                 (dVar59 * (double)local_358._8_8_ - (double)local_348._0_8_ * dVar46) +
                 (double)local_348._8_8_ * dVar43 + dVar69 + (double)local_338._0_8_;
            local_3b8._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
            local_3a8 = (dVar46 * (double)local_358._0_8_ - (double)local_358._8_8_ * dVar43) +
                        (double)local_348._8_8_ * dVar59 + local_3a8 + (double)local_328._0_8_;
            dStack_3a0 = (dVar61 * (double)local_348._8_8_ - dVar61 * (double)local_348._8_8_) +
                         (double)local_348._8_8_ * dVar61 + dStack_3a0 + (double)local_328._8_8_;
            local_398._8_8_ = dVar60 * dVar47;
            local_398._0_8_ = dVar41 * dVar38;
            local_388 = local_388 * local_308;
            dStack_380 = dStack_380 * dStack_300;
            auVar40 = auVar39;
            local_498 = local_318;
          }
          else {
            dVar70 = (double)local_358._8_8_ + (double)local_358._8_8_;
            dVar59 = (double)local_348._0_8_ + (double)local_348._0_8_;
            dVar46 = (double)local_358._0_8_ * ((double)local_358._0_8_ + (double)local_358._0_8_);
            local_1a8 = (1.0 - (dVar46 + (double)local_358._8_8_ * dVar70)) * local_308;
            dVar43 = ((double)local_358._0_8_ + (double)local_358._0_8_) * (double)local_348._8_8_;
            local_1b8 = (dVar70 * (double)local_348._8_8_ + (double)local_358._0_8_ * dVar59) *
                        local_308;
            local_4b8._8_8_ = dStack_300 * dStack_380;
            local_4b8._0_8_ = local_308 * local_388;
            dStack_1b0 = (dVar59 * (double)local_358._8_8_ - dVar43) * local_308;
            local_1f8[0] = (auVar40._0_8_ -
                           ((double)local_348._0_8_ * dVar59 + (double)local_358._8_8_ * dVar70)) *
                           dVar38;
            dVar46 = (auVar40._8_8_ - ((double)local_348._0_8_ * dVar59 + dVar46)) * dVar47;
            local_1f8[1] = (dVar70 * (double)local_358._0_8_ + dVar59 * (double)local_348._8_8_) *
                           dVar38;
            local_1c8 = (dVar59 * (double)local_358._8_8_ + dVar43) * dVar47;
            local_1e8._8_8_ = 0;
            local_1e8._0_8_ =
                 ((double)local_358._0_8_ * dVar59 - dVar70 * (double)local_348._8_8_) * dVar38;
            local_1d8._8_4_ = SUB84(dVar46,0);
            local_1d8._0_8_ =
                 (dVar70 * (double)local_358._0_8_ - dVar59 * (double)local_348._8_8_) * dVar47;
            local_1d8._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_198 = (double)local_338._0_8_;
            dStack_190 = (double)local_338._8_8_;
            local_188 = (double)local_328._0_8_;
            uStack_180 = 0x3ff0000000000000;
            dVar70 = (double)local_3d8._8_8_ + (double)local_3d8._8_8_;
            dVar59 = (double)local_3c8._0_8_ + (double)local_3c8._0_8_;
            dVar46 = (double)local_3d8._0_8_ * ((double)local_3d8._0_8_ + (double)local_3d8._0_8_);
            local_228 = (1.0 - (dVar46 + (double)local_3d8._8_8_ * dVar70)) * local_388;
            dVar43 = ((double)local_3d8._0_8_ + (double)local_3d8._0_8_) * (double)local_3c8._8_8_;
            local_238 = (dVar70 * (double)local_3c8._8_8_ + (double)local_3d8._0_8_ * dVar59) *
                        local_388;
            local_258 = (dVar70 * (double)local_3d8._0_8_ - dVar59 * (double)local_3c8._8_8_) *
                        dVar60;
            dStack_230 = (dVar59 * (double)local_3d8._8_8_ - dVar43) * local_388;
            dVar47 = dVar47 * dVar60;
            dStack_250 = (1.0 - ((double)local_3c8._0_8_ * dVar59 + dVar46)) * dVar60;
            local_248 = (dVar59 * (double)local_3d8._8_8_ + dVar43) * dVar60;
            local_278._8_8_ =
                 (dVar70 * (double)local_3d8._0_8_ + dVar59 * (double)local_3c8._8_8_) * dVar41;
            local_278._0_8_ =
                 (1.0 - ((double)local_3c8._0_8_ * dVar59 + (double)local_3d8._8_8_ * dVar70)) *
                 dVar41;
            local_268._8_8_ = 0;
            local_268._0_8_ =
                 ((double)local_3d8._0_8_ * dVar59 - dVar70 * (double)local_3c8._8_8_) * dVar41;
            uStack_240 = 0;
            uStack_220 = 0;
            local_218 = (double)local_3b8._0_8_;
            dStack_210 = (double)local_3b8._8_8_;
            local_208 = local_3a8;
            uStack_200 = 0x3ff0000000000000;
            FUN_1447fea8d(local_178);
            FUN_144a1c686(local_178,0x3e45798ee0000000);
            auVar35._8_8_ = -(ulonglong)(0.0 <= dVar47);
            auVar35._0_8_ = -(ulonglong)(0.0 <= dVar38 * dVar41);
            auVar40 = blendvpd(_DAT_149936790,auVar39,auVar35);
            uVar7 = local_4b8._0_8_;
            uVar8 = local_4b8._8_8_;
            dVar60 = (double)(~-(ulonglong)(0.0 <= (double)local_4b8._0_8_) & 0xbff0000000000000 |
                             -(ulonglong)(0.0 <= (double)local_4b8._0_8_) & 0x3ff0000000000000);
            dVar59 = auVar40._0_8_;
            local_178[2] = local_178[2] * dVar59;
            local_178[1] = local_178[1] * dVar59;
            local_178[0] = local_178[0] * dVar59;
            dVar59 = auVar40._8_8_;
            local_148 = local_148 * dVar59;
            local_150 = local_150 * dVar59;
            local_158 = dVar59 * local_158;
            local_128 = local_128 * dVar60;
            local_130 = local_130 * dVar60;
            local_138 = dVar60 * local_138;
            FUN_14481fd10(&local_298,local_178);
            auVar45._0_8_ = local_298 * local_298;
            auVar45._8_8_ = dStack_290 * dStack_290;
            dVar60 = (double)local_288._0_8_ * (double)local_288._0_8_ + auVar45._0_8_;
            dVar59 = (double)local_288._8_8_ * (double)local_288._8_8_ + auVar45._8_8_;
            auVar56._0_8_ = dVar60 + dVar59;
            auVar56._8_8_ = dVar60 + dVar59;
            auVar40 = sqrtpd(auVar45,auVar56);
            auVar40 = divpd(auVar39,auVar40);
            auVar57._0_8_ = auVar40._0_8_ * (double)local_288._0_8_;
            auVar57._8_8_ = auVar40._8_8_ * (double)local_288._8_8_;
            auVar36._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar56._8_8_);
            auVar36._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar56._0_8_);
            local_3c8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar57,auVar36);
            local_398._8_4_ = SUB84(dVar47,0);
            local_398._0_8_ = dVar38 * dVar41;
            local_398._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
            local_388 = (double)uVar7;
            dStack_380 = (double)uVar8;
            local_3d8._8_8_ =
                 (ulonglong)(dStack_290 * auVar40._8_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar56._8_8_);
            local_3d8._0_8_ =
                 (ulonglong)(local_298 * auVar40._0_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar56._0_8_);
            local_3b8._8_8_ = uStack_110;
            local_3b8._0_8_ = local_118;
            local_3a8 = local_108;
            dStack_3a0 = 0.0;
            auVar40 = auVar39;
          }
        }
        uVar1 = *(ushort *)(param_8 + 0xc);
        if ((uVar1 == 0xffff) ||
           (*(uint *)(lVar3 + 0xc0) == (uint)uVar1 ||
            (int)*(uint *)(lVar3 + 0xc0) < (int)(uint)uVar1)) {
          pdVar17 = (double *)&DAT_14c846480;
          pdVar19 = local_178;
          for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
            *pdVar19 = *pdVar17;
            pdVar17 = pdVar17 + 1;
            pdVar19 = pdVar19 + 1;
          }
        }
        else {
          FUN_14449ec9a(lVar3,local_178,
                        *(undefined8 *)(*(longlong *)(lVar3 + 0xb8) + (ulonglong)(uint)uVar1 * 8),3)
          ;
        }
        dVar41 = local_178[2] * -1.0;
        local_178[3] = local_178[3] * 1.0;
        local_298 = (double)local_378._8_8_ * dVar41 * -1.0 +
                    ((local_178[3] * (double)local_378._0_8_ -
                     local_178[0] * (double)local_368._8_8_ * 1.0) -
                    (double)local_368._0_8_ * local_178[1]);
        dStack_290 = (double)local_378._0_8_ * dVar41 * 1.0 +
                     ((local_178[3] * (double)local_378._8_8_ -
                      local_178[0] * (double)local_368._0_8_ * -1.0) -
                     (double)local_368._8_8_ * local_178[1]);
        dVar38 = (double)local_368._8_8_ * dVar41 * 1.0 +
                 local_178[1] * (double)local_378._0_8_ +
                 (local_178[3] * (double)local_368._0_8_ -
                 local_178[0] * (double)local_378._8_8_ * 1.0);
        dVar41 = (double)local_368._0_8_ * dVar41 * -1.0 +
                 local_178[1] * (double)local_378._8_8_ +
                 (local_178[3] * (double)local_368._8_8_ -
                 local_178[0] * (double)local_378._0_8_ * -1.0);
        local_288._8_8_ = dVar41;
        local_288._0_8_ = dVar38;
        pdVar17 = (double *)local_3d8;
        pdVar19 = local_1f8;
        for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
          *pdVar19 = *pdVar17;
          pdVar17 = pdVar17 + 1;
          pdVar19 = pdVar19 + 1;
        }
        if (cVar10 != '\0') {
          dVar43 = dVar23 * local_298;
          dVar60 = local_298 * (double)local_4c8._8_8_;
          dVar59 = local_298 * (double)local_4c8._0_8_;
          dVar46 = dStack_290 * (double)local_4c8._0_8_;
          dVar70 = dStack_290 * (double)local_4c8._8_8_;
          dVar47 = dVar23 * dVar38;
          local_298 = (double)local_4c8._8_8_ * dVar38 * -1.0 +
                      dVar23 * dStack_290 +
                      dVar42 * local_298 * 1.0 + (double)local_4c8._0_8_ * dVar41;
          dStack_290 = (double)local_4c8._0_8_ * dVar38 * 1.0 +
                       dVar42 * dStack_290 + dVar43 * -1.0 + (double)local_4c8._8_8_ * dVar41;
          dVar38 = dVar42 * dVar38 * 1.0 + ((dVar60 * 1.0 + dVar41 * dVar23) - dVar46);
          dVar41 = dVar47 * -1.0 + ((dVar59 * -1.0 + dVar41 * dVar42) - dVar70);
          local_288._8_4_ = SUB84(dVar41,0);
          local_288._0_8_ = dVar38;
          local_288._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
        }
        if (((*param_4 != '\x01') || (param_4[1] != '\x01')) ||
           (dVar23 = local_298, dVar42 = dStack_290, param_4[2] == '\0')) {
          FUN_14690c377(&local_3f0,&local_298,param_6[1],0);
          local_278 = local_3d8;
          local_268 = local_3c8;
          FUN_14690c377(&local_408,local_278,param_6[1],0);
          puVar15 = &local_408;
          if (*param_4 != '\0') {
            puVar15 = &local_3f0;
          }
          local_3f0 = *puVar15;
          puVar15 = &local_400;
          if (param_4[1] != '\0') {
            puVar15 = &local_3e8;
          }
          local_3e8 = *puVar15;
          puVar15 = &local_3f8;
          if (param_4[2] != '\0') {
            puVar15 = &local_3e0;
          }
          local_3e0 = *puVar15;
          FUN_14690c017(&local_428,&local_3f0,param_6[1],0);
          dVar23 = local_428;
          dVar42 = dStack_420;
          dVar38 = local_418;
          dVar41 = dStack_410;
        }
        local_1f8[0] = dVar23;
        local_1f8[1] = dVar42;
        local_1e8._8_8_ = dVar41;
        local_1e8._0_8_ = dVar38;
        if (param_7 < 0.9999) {
          FUN_14915b8da(local_278,local_3d8,local_1f8);
          pdVar17 = (double *)local_278;
          pdVar19 = local_1f8;
          for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
            *pdVar19 = *pdVar17;
            pdVar17 = pdVar17 + 1;
            pdVar19 = pdVar19 + 1;
          }
        }
        if (cVar9 == '\x04') {
          FUN_1449437a2(local_1f8,local_278,local_358);
          pdVar17 = (double *)local_278;
          pdVar19 = local_1f8;
          for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
            *pdVar19 = *pdVar17;
            pdVar17 = pdVar17 + 1;
            pdVar19 = pdVar19 + 1;
          }
          dVar23 = (double)local_1e8._0_8_ * (double)local_1e8._0_8_ + local_1f8[0] * local_1f8[0];
          dVar42 = (double)local_1e8._8_8_ * (double)local_1e8._8_8_ + local_1f8[1] * local_1f8[1];
          auVar58._0_8_ = dVar23 + dVar42;
          auVar58._8_8_ = dVar23 + dVar42;
          auVar37._8_8_ = -(ulonglong)(1e-08 <= auVar58._8_8_);
          auVar37._0_8_ = -(ulonglong)(1e-08 <= auVar58._0_8_);
          auVar39 = sqrtpd(auVar58,auVar58);
          auVar40 = divpd(auVar40,auVar39);
          auVar74._0_8_ = auVar40._0_8_ * (double)local_1e8._0_8_;
          auVar74._8_8_ = auVar40._8_8_ * (double)local_1e8._8_8_;
          local_1e8 = blendvpd(_DAT_149935300,auVar74,auVar37);
          local_1f8[0] = (double)((ulonglong)(local_1f8[0] * auVar40._0_8_) &
                                 -(ulonglong)(1e-08 <= auVar58._0_8_));
          local_1f8[1] = (double)((ulonglong)(local_1f8[1] * auVar40._8_8_) &
                                 -(ulonglong)(1e-08 <= auVar58._8_8_));
        }
        pdVar17 = local_1f8;
        pdVar19 = local_488;
        for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
          *pdVar19 = *pdVar17;
          pdVar17 = pdVar17 + 1;
          pdVar19 = pdVar19 + 1;
        }
        uVar13 = 0xffffffff;
        if (*(ushort *)(param_8 + 0xc) != 0xffff) {
          uVar13 = (uint)*(ushort *)(param_8 + 0xc);
        }
        local_4d8 = 0;
        local_4e0 = 0;
        local_4e8 = 1;
        FUN_140122cc6(lVar3,uVar13,local_488,0);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_508) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149280ae2 FUN_149280ae2 body=120 status=ok
// SIG undefined FUN_149280ae2(void)

void FUN_149280ae2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)*param_2;
  local_20 = *(undefined4 *)puVar1[0x10];
  local_18 = *(undefined8 *)puVar1[0xc];
  local_28 = &local_18;
  local_10 = *(undefined4 *)((undefined8 *)puVar1[0xc] + 1);
  FUN_149280bf4(*(undefined8 *)(param_1 + 0xc0),*puVar1,
                CONCAT71((int7)((ulonglong)puVar1[4] >> 8),*(undefined1 *)puVar1[4]),puVar1[8]);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149280b64 FUN_149280b64 body=142 status=ok
// SIG undefined FUN_149280b64(void)

void FUN_149280b64(longlong param_1)

{
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x200);
  local_38 = &local_28;
  local_20 = *(undefined4 *)(param_1 + 0x208);
  local_30 = *(undefined4 *)(param_1 + 0x210);
  FUN_149280bf4(param_1 + 0x10,param_1 + 0x1f0,*(undefined1 *)(param_1 + 0x1fc),param_1 + 0x1fd);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149280bf4 FUN_149280bf4 body=3737 status=ok
// SIG undefined FUN_149280bf4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149280bf4(longlong param_1,double *param_2,char param_3,char *param_4,longlong *param_5,
                  float param_6)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  char *pcVar4;
  code *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  double *pdVar13;
  double *pdVar14;
  longlong lVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar28;
  double dVar29;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auStack_688 [32];
  undefined1 local_668;
  undefined1 local_660;
  undefined1 local_658;
  char *local_650;
  double local_648;
  undefined8 uStack_640;
  double local_638;
  undefined8 uStack_630;
  double local_618;
  undefined4 local_610;
  double local_608 [4];
  double local_5e8;
  double dStack_5e0;
  undefined4 local_5d8;
  undefined4 uStack_5d4;
  double dStack_5d0;
  undefined1 local_5c8 [16];
  undefined1 local_5b8 [16];
  double local_5a8;
  undefined4 local_5a0;
  double local_598;
  double dStack_590;
  undefined1 local_588 [16];
  double local_578;
  double dStack_570;
  double local_568;
  double dStack_560;
  undefined1 local_558 [16];
  undefined1 local_548 [16];
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  double local_518;
  undefined4 local_510;
  double local_508;
  double local_500;
  double local_4f8;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  double local_4a8;
  undefined4 local_4a0;
  undefined1 local_498 [64];
  double local_458;
  double local_450;
  double local_448;
  double local_438;
  double dStack_430;
  double local_428;
  double dStack_420;
  double local_418;
  double local_410;
  double local_408;
  double local_3f8;
  double local_3f0;
  double local_3e8;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  code *local_238;
  longlong *local_228;
  longlong local_218 [4];
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
  double local_178 [2];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  double local_148;
  double dStack_140;
  undefined1 local_138 [16];
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_688;
  FUN_14920b596(&local_418,param_1);
  local_238 = (code *)0x0;
  plVar9 = (longlong *)FUN_14001cc68(0x1f0,0x10);
  *plVar9 = (longlong)&PTR_FUN_14bc05970;
  local_228 = plVar9;
  FUN_1492d1446(plVar9 + 2,&local_418);
  if (plVar9 != (longlong *)&DAT_fffffffffffffff0) {
    local_238 = FUN_1444b5f72;
  }
  FUN_140f8ccfc(&local_418);
  if ((((0.0001 <= param_6) && (lVar1 = *(longlong *)(param_1 + 0x1b0), lVar1 != 0)) &&
      ((uint)*(ushort *)((longlong)param_2 + 6) < DAT_14c87eb08 + 1U)) &&
     ((*(longlong *)((longlong)param_2 + 4) != 0 && (*(char *)param_2 != '\0')))) {
    local_410 = (double)CONCAT44(local_410._4_4_,*(undefined4 *)(param_2 + 1));
    local_418 = *param_2;
    uVar6 = FUN_140813180(lVar1);
    FUN_14486750c(lVar1,local_498,uVar6,1);
    if ((longlong)(int)param_5[1] != 0) {
      lVar12 = *param_5;
      lVar15 = (longlong)(int)param_5[1] * 0x10;
      lVar11 = 0;
      dVar17 = 0.0;
      do {
        dVar22 = (double)*(float *)(lVar12 + 0xc + lVar11);
        if (dVar22 <= 0.0) {
          dVar22 = 0.0;
        }
        if (((9.999999747378752e-05 <= dVar22) &&
            ((uint)*(ushort *)(lVar12 + 6 + lVar11) < DAT_14c87eb08 + 1U)) &&
           ((*(longlong *)(lVar12 + 4 + lVar11) != 0 && (*(char *)(lVar12 + lVar11) != '\0')))) {
          dVar17 = dVar17 + dVar22;
        }
        lVar11 = lVar11 + 0x10;
      } while (lVar15 != lVar11);
      if (9.999999747378752e-05 < dVar17) {
        lVar11 = 0;
        dVar22 = DAT_14c846510;
        dVar2 = DAT_14c846520;
        dVar3 = DAT_14c846518;
        local_650 = param_4;
        do {
          dVar32 = DAT_14c846520;
          dVar19 = DAT_14c846518;
          dVar18 = DAT_14c846510;
          dVar31 = (double)*(float *)(lVar12 + 0xc + lVar11);
          if (dVar31 <= 0.0) {
            dVar31 = 0.0;
          }
          if ((((9.999999747378752e-05 <= dVar31) &&
               ((uint)*(ushort *)(lVar12 + 6 + lVar11) < DAT_14c87eb08 + 1U)) &&
              (*(longlong *)(lVar12 + 4 + lVar11) != 0)) &&
             (pdVar13 = (double *)(lVar12 + lVar11), *(char *)pdVar13 != '\0')) {
            local_4a8 = *pdVar13;
            local_4a0 = *(undefined4 *)(pdVar13 + 1);
            uVar6 = FUN_140813180(lVar1,&local_4a8);
            FUN_14486750c(lVar1,&local_418,uVar6,0);
            if (param_3 != '\0') {
              dStack_1f0 = (double)CONCAT44(dStack_1f0._4_4_,*(undefined4 *)(pdVar13 + 1));
              local_1f8 = *pdVar13;
              uVar6 = FUN_140813180(lVar1,&local_1f8);
              FUN_14486750c(lVar1,local_178,uVar6,1);
              pcVar5 = local_238;
              dVar32 = local_448;
              dVar19 = local_450;
              dVar18 = local_458;
              local_1f8 = (double)local_138._0_8_;
              dStack_1f0 = (double)local_138._8_8_;
              local_1e8 = local_128;
              plVar9 = local_228;
              if (local_228 == (longlong *)0x0) {
                plVar9 = local_218;
              }
              uVar10 = (**(code **)(*plVar9 + 8))();
              (*pcVar5)(&local_508,uVar10,&local_1f8);
              dVar32 = dVar32 / local_4f8;
              dVar19 = dVar19 / local_500;
              dVar18 = dVar18 / local_508;
            }
            dVar31 = dVar31 * (1.0 / dVar17);
            dVar32 = dVar32 * local_3c8;
            dVar19 = dVar19 * local_3d0;
            dVar18 = pow(dVar18 * local_3d8,dVar31);
            dVar19 = pow(dVar19,dVar31);
            dVar31 = pow(dVar32,dVar31);
            dVar22 = dVar22 * dVar18;
            dVar3 = dVar3 * dVar19;
            dVar2 = dVar2 * dVar31;
          }
          lVar11 = lVar11 + 0x10;
        } while (lVar15 != lVar11);
        local_518 = *param_2;
        local_510 = *(undefined4 *)(param_2 + 1);
        FUN_149185020(lVar1,&local_508,&local_518,0);
        pcVar5 = local_238;
        local_538 = local_4c8;
        uStack_530 = uStack_4c0;
        local_528 = local_4b8;
        plVar9 = local_218;
        if (local_228 != (longlong *)0x0) {
          plVar9 = local_228;
        }
        uVar10 = (**(code **)(*plVar9 + 8))();
        (*pcVar5)(&local_418,uVar10,&local_538);
        dVar2 = dVar2 / local_408;
        dVar3 = dVar3 / local_410;
        dVar22 = dVar22 / local_418;
        local_5a8 = *param_2;
        local_5a0 = *(undefined4 *)(param_2 + 1);
        uVar6 = FUN_140813180(lVar1);
        FUN_144afced8(lVar1,&local_598,uVar6,0);
        pcVar4 = local_650;
        pdVar13 = (double *)&DAT_14c846480;
        pdVar14 = local_608;
        for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
          *pdVar14 = *pdVar13;
          pdVar13 = pdVar13 + 1;
          pdVar14 = pdVar14 + 1;
        }
        if (((*(char *)param_2 == '\x04') && (uVar7 = FUN_140813180(lVar1,param_2), -1 < (int)uVar7)
            ) && (((int)uVar7 < *(int *)(lVar1 + 0xc0) &&
                  ((lVar12 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar7 * 8),
                   lVar12 != 0 && (*(char *)(lVar12 + 0x10) == '\x04')))))) {
          uStack_640 = 0;
          uStack_630 = 0;
          lVar11 = lVar1;
          local_648 = dVar22;
          local_638 = dVar2;
          uVar6 = FUN_1401261c4(lVar1,local_608,lVar12,1);
          auVar33 = _DAT_149934d80;
          dVar17 = local_5c8._0_8_;
          dVar18 = local_5c8._8_8_;
          dVar22 = local_5b8._0_8_;
          dVar31 = local_5b8._8_8_;
          dVar2 = local_558._0_8_;
          dVar32 = local_558._8_8_;
          dVar19 = local_548._0_8_;
          auVar23 = minpd(local_558,local_5c8);
          auVar25 = minpd(local_548,local_5b8);
          auVar24._8_8_ = -(ulonglong)(auVar23._8_8_ < 0.0);
          auVar24._0_8_ = -(ulonglong)(auVar23._0_8_ < 0.0);
          iVar8 = movmskpd(uVar6,auVar24);
          auVar23._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
          auVar23._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
          uVar7 = movmskpd((int)lVar11,auVar23);
          if ((uVar7 & 0x3fffffff) == 0 && iVar8 == 0) {
            dVar29 = local_608[0] * dStack_590;
            dVar21 = local_608[0] * local_598;
            dVar35 = local_598 * local_608[1];
            dVar36 = dStack_590 * local_608[1];
            dVar37 = local_598 * local_608[2];
            dVar28 = (double)local_588._8_8_ * local_608[2];
            local_598 = dStack_590 * local_608[2] * -1.0 +
                        (double)local_588._0_8_ * local_608[1] +
                        (double)local_588._8_8_ * local_608[0] * 1.0 + local_598 * local_608[3];
            dStack_590 = dVar37 * 1.0 +
                         (double)local_588._8_8_ * local_608[1] +
                         (double)local_588._0_8_ * local_608[0] * -1.0 + dStack_590 * local_608[3];
            local_588._8_8_ =
                 (double)local_588._0_8_ * local_608[2] * -1.0 +
                 ((dVar21 * -1.0 + (double)local_588._8_8_ * local_608[3]) - dVar36);
            local_588._0_8_ =
                 dVar28 * 1.0 + ((dVar29 * 1.0 + (double)local_588._0_8_ * local_608[3]) - dVar35);
            local_578 = local_578 * dVar17;
            dStack_570 = dStack_570 * dVar18;
            local_568 = local_568 * dVar22;
            dStack_560 = dStack_560 * dVar31;
            dVar29 = dStack_570 * local_608[0] - local_608[1] * local_578;
            dVar28 = local_568 * local_608[1] - local_608[2] * dStack_570;
            dVar37 = local_578 * local_608[2] - local_608[0] * local_568;
            dVar21 = dStack_560 * local_608[3] - local_608[3] * dStack_560;
            dVar28 = dVar28 + dVar28;
            dVar37 = dVar37 + dVar37;
            dVar29 = dVar29 + dVar29;
            dVar21 = dVar21 + dVar21;
            local_578 = (dVar29 * local_608[1] - local_608[2] * dVar37) +
                        local_608[3] * dVar28 + local_578 + local_5e8;
            dStack_570 = (dVar28 * local_608[2] - dVar29 * local_608[0]) +
                         local_608[3] * dVar37 + dStack_570 + dStack_5e0;
            local_568 = (dVar37 * local_608[0] - local_608[1] * dVar28) +
                        local_608[3] * dVar29 + local_568 + (double)CONCAT44(uStack_5d4,local_5d8);
            dStack_560 = (dVar21 * local_608[3] - dVar21 * local_608[3]) +
                         local_608[3] * dVar21 + dStack_560 + dStack_5d0;
            local_558._8_8_ = dVar32 * dVar18;
            local_558._0_8_ = dVar2 * dVar17;
            local_548._8_8_ = local_548._8_8_ * dVar31;
            local_548._0_8_ = dVar19 * dVar22;
            dVar2 = local_638;
            dVar22 = local_648;
          }
          else {
            dVar28 = local_608[1] + local_608[1];
            dVar29 = local_608[2] + local_608[2];
            dVar37 = local_608[0] * (local_608[0] + local_608[0]);
            local_128 = (1.0 - (dVar37 + local_608[1] * dVar28)) * dVar22;
            dVar21 = (local_608[0] + local_608[0]) * local_608[3];
            dVar31 = dVar31 * local_548._8_8_;
            local_178[0] = ((double)DAT_149934d80 - (local_608[2] * dVar29 + local_608[1] * dVar28))
                           * dVar17;
            dVar37 = (DAT_149934d80._8_8_ - (local_608[2] * dVar29 + dVar37)) * dVar18;
            local_178[1] = (dVar28 * local_608[0] + dVar29 * local_608[3]) * dVar17;
            local_148 = (dVar29 * local_608[1] + dVar21) * dVar18;
            local_168._8_8_ = 0;
            local_168._0_8_ = (local_608[0] * dVar29 - dVar28 * local_608[3]) * dVar17;
            local_158._8_4_ = SUB84(dVar37,0);
            local_158._0_8_ = (dVar28 * local_608[0] - dVar29 * local_608[3]) * dVar18;
            local_158._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
            dStack_140 = 0.0;
            local_138._8_8_ = (dVar29 * local_608[1] - dVar21) * dVar22;
            local_138._0_8_ = (dVar28 * local_608[3] + local_608[0] * dVar29) * dVar22;
            uStack_120 = 0;
            local_118 = local_5e8;
            dStack_110 = dStack_5e0;
            local_108 = local_5d8;
            uStack_104 = uStack_5d4;
            uStack_100 = 0;
            uStack_fc = 0x3ff00000;
            dVar28 = dStack_590 + dStack_590;
            dVar29 = (double)local_588._0_8_ + (double)local_588._0_8_;
            dVar37 = local_598 * (local_598 + local_598);
            local_1a8 = (1.0 - (dVar37 + dStack_590 * dVar28)) * dVar19;
            dVar21 = (local_598 + local_598) * (double)local_588._8_8_;
            local_1b8 = (dVar28 * (double)local_588._8_8_ + local_598 * dVar29) * dVar19;
            local_1d8 = (dVar28 * local_598 - dVar29 * (double)local_588._8_8_) * dVar32;
            dStack_1b0 = (dVar29 * dStack_590 - dVar21) * dVar19;
            dVar18 = dVar18 * dVar32;
            local_1f8 = ((double)DAT_149934d80 -
                        ((double)local_588._0_8_ * dVar29 + dStack_590 * dVar28)) * dVar2;
            dStack_1d0 = (DAT_149934d80._8_8_ - ((double)local_588._0_8_ * dVar29 + dVar37)) *
                         dVar32;
            dStack_1f0 = (dVar28 * local_598 + dVar29 * (double)local_588._8_8_) * dVar2;
            local_1c8 = (dVar29 * dStack_590 + dVar21) * dVar32;
            local_1e8 = (local_598 * dVar29 - dVar28 * (double)local_588._8_8_) * dVar2;
            uStack_1e0 = 0;
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_198 = local_578;
            dStack_190 = dStack_570;
            local_188 = local_568;
            uStack_180 = 0x3ff0000000000000;
            FUN_1447fea8d(&local_418);
            FUN_144a1c686(&local_418,0x3e45798ee0000000);
            auVar25._8_8_ = -(ulonglong)(0.0 <= dVar18);
            auVar25._0_8_ = -(ulonglong)(0.0 <= dVar17 * dVar2);
            auVar23 = blendvpd(_DAT_149936790,auVar33,auVar25);
            uVar16 = -(ulonglong)(0.0 <= dVar22 * dVar19);
            dVar32 = (double)(~uVar16 & 0xbff0000000000000 | uVar16 & 0x3ff0000000000000);
            dVar29 = auVar23._0_8_;
            local_408 = local_408 * dVar29;
            local_410 = local_410 * dVar29;
            local_418 = local_418 * dVar29;
            dVar29 = auVar23._8_8_;
            local_3e8 = local_3e8 * dVar29;
            local_3f0 = local_3f0 * dVar29;
            local_3f8 = dVar29 * local_3f8;
            local_3c8 = local_3c8 * dVar32;
            local_3d0 = local_3d0 * dVar32;
            local_3d8 = dVar32 * local_3d8;
            FUN_14481fd10(&local_438,&local_418);
            dVar32 = local_428 * local_428 + local_438 * local_438;
            dVar29 = dStack_420 * dStack_420 + dStack_430 * dStack_430;
            auVar26._0_8_ = dVar32 + dVar29;
            auVar26._8_8_ = dVar32 + dVar29;
            auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_);
            auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_);
            auVar23 = sqrtpd(auVar26,auVar26);
            auVar33 = divpd(auVar33,auVar23);
            auVar34._0_8_ = auVar33._0_8_ * local_428;
            auVar34._8_8_ = auVar33._8_8_ * dStack_420;
            local_598 = (double)((ulonglong)(local_438 * auVar33._0_8_) &
                                -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_));
            dStack_590 = (double)((ulonglong)(dStack_430 * auVar33._8_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_));
            local_588 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar34,auVar20);
            local_558._8_4_ = SUB84(dVar18,0);
            local_558._0_8_ = dVar17 * dVar2;
            local_558._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
            local_548._8_4_ = SUB84(dVar31,0);
            local_548._0_8_ = dVar22 * dVar19;
            local_548._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
            local_578 = local_3b8;
            dStack_570 = dStack_3b0;
            local_568 = local_3a8;
            dStack_560 = 0.0;
            dVar2 = local_638;
            dVar22 = local_648;
          }
        }
        if (*pcVar4 == '\0') {
          dVar22 = (double)local_558._0_8_;
        }
        if (pcVar4[1] == '\0') {
          dVar3 = (double)local_558._8_8_;
        }
        if (pcVar4[2] == '\0') {
          dVar2 = (double)local_548._0_8_;
        }
        local_148 = local_568;
        dStack_140 = dStack_560;
        local_158._8_8_ = dStack_570;
        local_158._0_8_ = local_578;
        local_168 = local_588;
        local_178[0] = local_598;
        local_178[1] = dStack_590;
        local_138._8_4_ = SUB84(dVar3,0);
        local_138._0_8_ = dVar22;
        local_138._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        local_128 = dVar2;
        uStack_120 = 0;
        if (param_6 < 0.9999) {
          FUN_14915b8da(&local_418,&local_598,local_178);
          pdVar13 = &local_418;
          pdVar14 = local_178;
          for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
            *pdVar14 = *pdVar13;
            pdVar13 = pdVar13 + 1;
            pdVar14 = pdVar14 + 1;
          }
        }
        if (*(char *)param_2 == '\x04') {
          FUN_1449437a2(local_178,&local_418,local_608);
          pdVar13 = &local_418;
          pdVar14 = local_178;
          for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
            *pdVar14 = *pdVar13;
            pdVar13 = pdVar13 + 1;
            pdVar14 = pdVar14 + 1;
          }
          dVar17 = (double)local_168._0_8_ * (double)local_168._0_8_ + local_178[0] * local_178[0];
          dVar22 = (double)local_168._8_8_ * (double)local_168._8_8_ + local_178[1] * local_178[1];
          auVar27._0_8_ = dVar17 + dVar22;
          auVar27._8_8_ = dVar17 + dVar22;
          auVar33._8_8_ = -(ulonglong)(1e-08 <= auVar27._8_8_);
          auVar33._0_8_ = -(ulonglong)(1e-08 <= auVar27._0_8_);
          auVar23 = sqrtpd(auVar27,auVar27);
          auVar23 = divpd(_DAT_149934d80,auVar23);
          auVar30._0_8_ = auVar23._0_8_ * (double)local_168._0_8_;
          auVar30._8_8_ = auVar23._8_8_ * (double)local_168._8_8_;
          local_168 = blendvpd(_DAT_149935300,auVar30,auVar33);
          local_178[0] = (double)((ulonglong)(local_178[0] * auVar23._0_8_) &
                                 -(ulonglong)(1e-08 <= auVar27._0_8_));
          local_178[1] = (double)((ulonglong)(local_178[1] * auVar23._8_8_) &
                                 -(ulonglong)(1e-08 <= auVar27._8_8_));
        }
        pdVar13 = local_178;
        pdVar14 = &local_418;
        for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
          *pdVar14 = *pdVar13;
          pdVar13 = pdVar13 + 1;
          pdVar14 = pdVar14 + 1;
        }
        local_610 = *(undefined4 *)(param_2 + 1);
        local_618 = *param_2;
        uVar6 = FUN_140813180();
        local_658 = 0;
        local_660 = 0;
        local_668 = 1;
        FUN_140122cc6(lVar1,uVar6,&local_418,0);
      }
    }
  }
  if (local_238 != (code *)0x0) {
    plVar9 = local_228;
    if (local_228 == (longlong *)0x0) {
      plVar9 = local_218;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if ((local_f0 ^ (ulonglong)auStack_688) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149281a8e FUN_149281a8e body=272 status=ok
// SIG undefined FUN_149281a8e(void)

void FUN_149281a8e(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 unaff_RBX;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar3 = (undefined8 *)*param_2;
  uVar4 = *puVar3;
  uVar2 = *(undefined1 *)puVar3[4];
  uVar5 = puVar3[8];
  puVar6 = (undefined8 *)puVar3[0xc];
  uVar1 = *(undefined4 *)puVar3[0x10];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar3 + 0x14,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_70 = FUN_144828ac0(*param_2 + 0xc0,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  local_60 = *puVar6;
  local_88 = &local_60;
  local_58 = *(undefined4 *)(puVar6 + 1);
  local_80 = uVar1;
  local_78 = uVar8;
  FUN_149281c50(*(undefined8 *)(param_1 + 0xc0),uVar4,
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff,uVar5);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149281ba8 FUN_149281ba8 body=166 status=ok
// SIG undefined FUN_149281ba8(void)

void FUN_149281ba8(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  longlong local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x200);
  local_48 = &local_28;
  local_20 = *(undefined4 *)(param_1 + 0x208);
  local_30 = param_1 + 0x238;
  local_38 = param_1 + 0x218;
  local_40 = *(undefined4 *)(param_1 + 0x210);
  FUN_149281c50(param_1 + 0x10,param_1 + 0x1f0,*(undefined1 *)(param_1 + 0x1fc),param_1 + 0x1fd);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149281c50 FUN_149281c50 body=6155 status=ok
// SIG undefined FUN_149281c50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149281c50(longlong param_1,char *param_2,char param_3,char *param_4,longlong *param_5,
                  float param_6,longlong param_7,longlong *param_8)

{
  ushort uVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  double dVar6;
  undefined1 auVar7 [16];
  char *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  char cVar12;
  undefined4 uVar13;
  int iVar14;
  longlong *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  longlong lVar19;
  double *pdVar20;
  longlong lVar21;
  double *pdVar22;
  longlong lVar23;
  ulonglong uVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar40;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar41 [16];
  double dVar46;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar47;
  undefined1 auVar45 [16];
  double dVar48;
  double dVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  undefined1 auVar57 [16];
  double dVar58;
  undefined1 auStack_6a8 [32];
  undefined1 local_688;
  undefined1 local_680;
  undefined1 local_678;
  double local_668;
  double dStack_660;
  char *local_658;
  undefined8 uStack_650;
  undefined1 local_648 [16];
  double local_638;
  double local_630;
  undefined1 local_628 [16];
  double local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined4 local_600;
  undefined8 local_5f8;
  undefined4 local_5f0;
  undefined1 local_5e8 [16];
  undefined1 local_5d8 [16];
  double local_5c8;
  double dStack_5c0;
  double local_5b8;
  double dStack_5b0;
  undefined1 local_5a8 [16];
  undefined1 local_598 [16];
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 local_568;
  undefined4 local_560;
  double local_558;
  double dStack_550;
  double local_548;
  double dStack_540;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  double local_4f8;
  double dStack_4f0;
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  double dStack_4d0;
  undefined8 local_4c8;
  double dStack_4c0;
  undefined1 local_4b8 [16];
  double local_4a8;
  double dStack_4a0;
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  double local_478;
  double dStack_470;
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  double local_438;
  double dStack_430;
  double local_428;
  double dStack_420;
  double local_418 [4];
  double local_3f8;
  double local_3f0;
  double local_3e8;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  code *local_238;
  longlong *local_228;
  longlong local_218 [4];
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
  double local_178 [2];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  char *local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_6a8;
  FUN_14920b596(local_418,param_1);
  local_238 = (code *)0x0;
  plVar15 = (longlong *)FUN_14001cc68(0x1f0,0x10);
  *plVar15 = (longlong)&PTR_FUN_14bc05990;
  local_228 = plVar15;
  FUN_1492d1446(plVar15 + 2,local_418);
  if (plVar15 != (longlong *)&DAT_fffffffffffffff0) {
    local_238 = FUN_1444b610c;
  }
  FUN_140f8ccfc(local_418);
  if (((param_6 < 0.0001) || (lVar3 = *(longlong *)(param_1 + 0x1b0), lVar3 == 0)) ||
     (cVar12 = FUN_144828dba(param_7,param_2,lVar3), cVar12 == '\0')) goto LAB_149281d6d;
  local_658 = param_4;
  if ((int)param_8[1] != (int)param_5[1]) {
    FUN_149250716(param_8);
  }
  uVar18 = 0xffffffff;
  if (*(ushort *)(param_7 + 0xc) != 0xffff) {
    uVar18 = (uint)*(ushort *)(param_7 + 0xc);
  }
  FUN_144afced8(lVar3,local_498,uVar18,1);
  auVar42 = _DAT_149934d80;
  local_4f8 = 0.0;
  dStack_4f0 = 0.0;
  local_4e8 = 0.0;
  dStack_4e0 = 1.0;
  local_4d8 = 0.0;
  dStack_4d0 = 0.0;
  local_4c8 = 0.0;
  dStack_4c0 = 0.0;
  dVar33 = (double)DAT_149934d80;
  dVar40 = DAT_149934d80._8_8_;
  local_4b8 = _DAT_149934d80;
  local_4a8 = 1.0;
  dStack_4a0 = 0.0;
  local_628[0] = *param_2;
  if (*param_2 == '\x04') {
    uVar1 = *(ushort *)(param_7 + 0xc);
    if (((uVar1 != 0xffff) &&
        (*(uint *)(lVar3 + 0xc0) != (uint)uVar1 && (int)(uint)uVar1 <= (int)*(uint *)(lVar3 + 0xc0))
        ) && ((lVar19 = *(longlong *)(*(longlong *)(lVar3 + 0xb8) + (ulonglong)(uint)uVar1 * 8),
              lVar19 != 0 && (*(char *)(lVar19 + 0x10) == '\x04')))) {
      lVar21 = lVar3;
      uVar13 = FUN_1401261c4(lVar3,&local_4f8,lVar19,1);
      dVar56 = local_4b8._0_8_;
      dVar6 = local_4b8._8_8_;
      auVar41._8_8_ = dStack_4a0;
      auVar41._0_8_ = local_4a8;
      dVar48 = local_458._0_8_;
      dVar25 = local_458._8_8_;
      auVar31 = local_448;
      dVar26 = local_448._0_8_;
      auVar34 = minpd(local_458,local_4b8);
      auVar41 = minpd(local_448,auVar41);
      auVar35._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
      auVar35._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
      iVar14 = movmskpd(uVar13,auVar35);
      auVar34._8_8_ = -(ulonglong)(auVar41._8_8_ < 0.0);
      auVar34._0_8_ = -(ulonglong)(auVar41._0_8_ < 0.0);
      uVar18 = movmskpd((int)lVar21,auVar34);
      if ((uVar18 & 0x3fffffff) == 0 && iVar14 == 0) {
        dVar46 = local_4f8 * (double)local_498._8_8_;
        dVar55 = local_4f8 * (double)local_498._0_8_;
        dVar33 = (double)DAT_149931170;
        dVar40 = DAT_149931170._8_8_;
        dVar54 = (double)local_498._0_8_ * dStack_4f0;
        dVar47 = (double)local_498._8_8_ * dStack_4f0;
        dVar49 = (double)local_498._8_8_ * local_4e8;
        dVar53 = (double)local_488._8_8_ * local_4e8;
        dVar58 = (double)local_498._0_8_ * local_4e8 * 1.0 +
                 (double)local_488._8_8_ * dStack_4f0 +
                 (double)local_488._0_8_ * local_4f8 * dVar40 + (double)local_498._8_8_ * dStack_4e0
        ;
        local_498._8_4_ = SUB84(dVar58,0);
        local_498._0_8_ =
             dVar49 * -1.0 +
             (double)local_488._0_8_ * dStack_4f0 +
             (double)local_488._8_8_ * local_4f8 * dVar33 + (double)local_498._0_8_ * dStack_4e0;
        local_498._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
        local_488._8_8_ =
             (double)local_488._0_8_ * local_4e8 * dVar40 +
             ((dVar55 * dVar40 + (double)local_488._8_8_ * dStack_4e0) - dVar47);
        local_488._0_8_ =
             dVar53 * dVar33 + ((dVar46 * dVar33 + (double)local_488._0_8_ * dStack_4e0) - dVar54);
        local_478 = local_478 * dVar56;
        dStack_470 = dStack_470 * dVar6;
        local_468._0_8_ = (double)local_468._0_8_ * local_4a8;
        local_468._8_8_ = (double)local_468._8_8_ * dStack_4a0;
        dVar49 = dStack_470 * local_4f8 - dStack_4f0 * local_478;
        dVar58 = (double)local_468._0_8_ * dStack_4f0 - local_4e8 * dStack_470;
        dVar33 = local_478 * local_4e8 - local_4f8 * (double)local_468._0_8_;
        dVar40 = (double)local_468._8_8_ * dStack_4e0 - dStack_4e0 * (double)local_468._8_8_;
        dVar58 = dVar58 + dVar58;
        dVar33 = dVar33 + dVar33;
        dVar49 = dVar49 + dVar49;
        dVar40 = dVar40 + dVar40;
        local_478 = (dVar49 * dStack_4f0 - local_4e8 * dVar33) + dStack_4e0 * dVar58 + local_478 +
                    local_4d8;
        dStack_470 = (dVar58 * local_4e8 - dVar49 * local_4f8) + dStack_4e0 * dVar33 + dStack_470 +
                     dStack_4d0;
        local_468._0_8_ =
             (dVar33 * local_4f8 - dStack_4f0 * dVar58) +
             dStack_4e0 * dVar49 + (double)local_468._0_8_ + local_4c8;
        local_468._8_8_ =
             (dVar40 * dStack_4e0 - dVar40 * dStack_4e0) +
             dStack_4e0 * dVar40 + (double)local_468._8_8_ + dStack_4c0;
        local_458._8_8_ = dVar25 * dVar6;
        local_458._0_8_ = dVar48 * dVar56;
        local_448._8_8_ = local_448._8_8_ * dStack_4a0;
        local_448._0_8_ = dVar26 * local_4a8;
        local_648 = auVar31;
      }
      else {
        dVar46 = dStack_4f0 + dStack_4f0;
        dVar49 = local_4e8 + local_4e8;
        dVar53 = local_4f8 * (local_4f8 + local_4f8);
        local_128 = (char *)((1.0 - (dVar53 + dStack_4f0 * dVar46)) * local_4a8);
        dVar58 = (local_4f8 + local_4f8) * dStack_4e0;
        local_138 = (dVar46 * dStack_4e0 + local_4f8 * dVar49) * local_4a8;
        dVar54 = local_4a8 * dVar26;
        dVar47 = dStack_4a0 * local_448._8_8_;
        dStack_130 = (dVar49 * dStack_4f0 - dVar58) * local_4a8;
        local_178[0] = (dVar33 - (local_4e8 * dVar49 + dStack_4f0 * dVar46)) * dVar56;
        dVar53 = (dVar40 - (local_4e8 * dVar49 + dVar53)) * dVar6;
        local_178[1] = (dVar46 * local_4f8 + dVar49 * dStack_4e0) * dVar56;
        local_148 = (dVar49 * dStack_4f0 + dVar58) * dVar6;
        local_168._8_8_ = 0;
        local_168._0_8_ = (local_4f8 * dVar49 - dVar46 * dStack_4e0) * dVar56;
        local_158._8_4_ = SUB84(dVar53,0);
        local_158._0_8_ = (dVar46 * local_4f8 - dVar49 * dStack_4e0) * dVar6;
        local_158._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
        dStack_140 = 0.0;
        uStack_120 = 0;
        local_118 = local_4d8;
        dStack_110 = dStack_4d0;
        local_108 = (undefined4)local_4c8;
        uStack_104 = local_4c8._4_4_;
        uStack_100 = 0;
        uStack_fc = 0x3ff00000;
        dVar46 = (double)local_498._8_8_ + (double)local_498._8_8_;
        dVar49 = (double)local_488._0_8_ + (double)local_488._0_8_;
        dVar53 = (double)local_498._0_8_ * ((double)local_498._0_8_ + (double)local_498._0_8_);
        local_1a8 = (1.0 - (dVar53 + (double)local_498._8_8_ * dVar46)) * dVar26;
        dVar58 = ((double)local_498._0_8_ + (double)local_498._0_8_) * (double)local_488._8_8_;
        local_1b8 = (dVar46 * (double)local_488._8_8_ + (double)local_498._0_8_ * dVar49) * dVar26;
        local_1d8 = (dVar46 * (double)local_498._0_8_ - dVar49 * (double)local_488._8_8_) * dVar25;
        dStack_1b0 = (dVar49 * (double)local_498._8_8_ - dVar58) * dVar26;
        dVar6 = dVar6 * dVar25;
        local_1f8 = (dVar33 - ((double)local_488._0_8_ * dVar49 + (double)local_498._8_8_ * dVar46))
                    * dVar48;
        dStack_1d0 = (dVar40 - ((double)local_488._0_8_ * dVar49 + dVar53)) * dVar25;
        dStack_1f0 = (dVar46 * (double)local_498._0_8_ + dVar49 * (double)local_488._8_8_) * dVar48;
        local_1c8 = (dVar49 * (double)local_498._8_8_ + dVar58) * dVar25;
        local_1e8 = ((double)local_498._0_8_ * dVar49 - dVar46 * (double)local_488._8_8_) * dVar48;
        uStack_1e0 = 0;
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = local_478;
        dStack_190 = dStack_470;
        local_188 = (double)local_468._0_8_;
        uStack_180 = 0x3ff0000000000000;
        FUN_1447fea8d(local_418);
        FUN_144a1c686(local_418,0x3e45798ee0000000);
        auVar31._8_8_ = -(ulonglong)(0.0 <= dVar6);
        auVar31._0_8_ = -(ulonglong)(0.0 <= dVar56 * dVar48);
        auVar31 = blendvpd(_DAT_149936790,auVar42,auVar31);
        uVar24 = -(ulonglong)(0.0 <= dVar54);
        dVar33 = (double)(~uVar24 & 0xbff0000000000000 | uVar24 & 0x3ff0000000000000);
        dVar40 = auVar31._0_8_;
        local_418[2] = local_418[2] * dVar40;
        local_418[1] = local_418[1] * dVar40;
        local_418[0] = local_418[0] * dVar40;
        dVar40 = auVar31._8_8_;
        local_3e8 = local_3e8 * dVar40;
        local_3f0 = local_3f0 * dVar40;
        local_3f8 = dVar40 * local_3f8;
        local_3c8 = local_3c8 * dVar33;
        dStack_3d0 = dStack_3d0 * dVar33;
        local_3d8 = dVar33 * local_3d8;
        FUN_14481fd10(&local_558,local_418);
        dVar33 = local_548 * local_548 + local_558 * local_558;
        dVar40 = dStack_540 * dStack_540 + dStack_550 * dStack_550;
        auVar36._0_8_ = dVar33 + dVar40;
        auVar36._8_8_ = dVar33 + dVar40;
        auVar27._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
        auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
        auVar31 = sqrtpd(auVar36,auVar36);
        auVar42 = divpd(auVar42,auVar31);
        auVar43._0_8_ = auVar42._0_8_ * local_548;
        auVar43._8_8_ = auVar42._8_8_ * dStack_540;
        local_488 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar43,auVar27);
        local_458._8_4_ = SUB84(dVar6,0);
        local_458._0_8_ = dVar56 * dVar48;
        local_458._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        local_448._8_4_ = SUB84(dVar47,0);
        local_448._0_8_ = dVar54;
        local_448._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
        local_498._8_8_ =
             (ulonglong)(dStack_550 * auVar42._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
        local_498._0_8_ =
             (ulonglong)(local_558 * auVar42._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
        local_478 = local_3b8;
        dStack_470 = dStack_3b0;
        local_468._8_8_ = 0;
        local_468._0_8_ = local_3a8;
      }
    }
  }
  local_648._0_8_ = param_2;
  if ((int)param_5[1] < 1) goto LAB_149281d6d;
  lVar19 = 0;
  lVar21 = 0;
  lVar23 = 0;
  uVar13 = 0;
  uVar50 = 0;
  uVar51 = 0;
  uVar52 = 0;
  do {
    lVar4 = *param_5;
    cVar12 = FUN_144828dba(*param_8 + lVar21,lVar4 + lVar19,lVar3);
    if (cVar12 != '\0') {
      dVar33 = (double)*(float *)(lVar4 + 0xc + lVar19);
      if (dVar33 <= 0.0) {
        dVar33 = 0.0;
      }
      auVar32._12_4_ = uVar52;
      auVar32._8_4_ = uVar51;
      auVar32._0_8_ =
           ~-(ulonglong)(dVar33 < 9.999999747378752e-05) &
           (ulonglong)((double)CONCAT44(uVar50,uVar13) + dVar33);
      auVar42._0_8_ = -(ulonglong)(dVar33 < 9.999999747378752e-05) & CONCAT44(uVar50,uVar13);
      auVar42._8_8_ = 0;
      auVar42 = auVar42 | auVar32;
      uVar13 = auVar42._0_4_;
      uVar50 = auVar42._4_4_;
      uVar51 = auVar42._8_4_;
      uVar52 = auVar42._12_4_;
    }
    lVar23 = lVar23 + 1;
    uVar24 = (ulonglong)(int)param_5[1];
    lVar21 = lVar21 + 0x20;
    lVar19 = lVar19 + 0x10;
  } while (lVar23 < (longlong)uVar24);
  if ((double)CONCAT44(uVar50,uVar13) < 9.999999747378752e-05 ||
      (double)CONCAT44(uVar50,uVar13) == 9.999999747378752e-05) goto LAB_149281d6d;
  local_630 = 1.0 / (double)CONCAT44(uVar50,uVar13);
  if (param_3 == '\0') {
    local_668 = DAT_14c846510;
    local_618 = DAT_14c846518;
    local_638 = DAT_14c846520;
  }
  else {
    dVar33 = DAT_14c846520;
    dVar40 = DAT_14c846518;
    dVar56 = DAT_14c846510;
    if (0 < (int)param_5[1]) {
      lVar21 = 6;
      lVar19 = 0;
      do {
        lVar23 = *param_8;
        sVar2 = *(short *)(lVar23 + lVar21 * 2);
        if (((sVar2 != -1) && ((uint)*(ushort *)(lVar23 + -6 + lVar21 * 2) < DAT_14c87eb08 + 1U)) &&
           ((*(longlong *)(lVar23 + -8 + lVar21 * 2) != 0 &&
            (*(char *)(lVar23 + -0xc + lVar21 * 2) != '\0')))) {
          lVar23 = *param_5;
          dVar48 = (double)*(float *)(lVar23 + 6 + lVar21);
          if (dVar48 <= 0.0) {
            dVar48 = 0.0;
          }
          if ((((9.999999747378752e-05 <= dVar48) &&
               ((uint)*(ushort *)(lVar23 + lVar21) < DAT_14c87eb08 + 1U)) &&
              (*(longlong *)(lVar23 + -2 + lVar21) != 0)) &&
             (*(char *)(lVar23 + -6 + lVar21) != '\0')) {
            dVar48 = dVar48 * local_630;
            FUN_14486750c(lVar3,local_418,sVar2,
                          CONCAT71((uint7)(byte)(*(ushort *)(lVar23 + lVar21) >> 8),1));
            dVar6 = local_3c8;
            dVar26 = dStack_3d0;
            dVar25 = pow(local_3d8,dVar48);
            dVar26 = pow(dVar26,dVar48);
            dVar48 = pow(dVar6,dVar48);
            dVar56 = dVar56 * dVar25;
            dVar40 = dVar40 * dVar26;
            dVar33 = dVar33 * dVar48;
            uVar24 = (ulonglong)*(uint *)(param_5 + 1);
          }
        }
        lVar19 = lVar19 + 1;
        lVar21 = lVar21 + 0x10;
      } while (lVar19 < (int)uVar24);
    }
    uVar1 = *(ushort *)(param_7 + 0xc);
    if ((uVar1 == 0xffff) ||
       (*(uint *)(lVar3 + 0xc0) == (uint)uVar1 || (int)*(uint *)(lVar3 + 0xc0) < (int)(uint)uVar1))
    {
      pdVar20 = (double *)&DAT_14c846480;
      pdVar22 = local_418;
      for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
        *pdVar22 = *pdVar20;
        pdVar20 = pdVar20 + 1;
        pdVar22 = pdVar22 + 1;
      }
    }
    else {
      FUN_14449ec9a(lVar3,local_418,
                    *(undefined8 *)(*(longlong *)(lVar3 + 0xb8) + (ulonglong)(uint)uVar1 * 8),2);
    }
    pcVar11 = local_238;
    local_178[0] = local_3d8;
    local_178[1] = dStack_3d0;
    local_168._0_8_ = local_3c8;
    plVar15 = local_228;
    if (local_228 == (longlong *)0x0) {
      plVar15 = local_218;
    }
    uVar16 = (**(code **)(*plVar15 + 8))();
    (*pcVar11)(&local_558,uVar16,local_178);
    pcVar11 = local_238;
    local_1f8 = dVar56 / local_558;
    dStack_1f0 = dVar40 / dStack_550;
    local_1e8 = dVar33 / local_548;
    uVar10 = local_448._0_8_;
    uVar16 = local_458._0_8_;
    uVar9 = local_458._8_8_;
    plVar15 = local_228;
    if (local_228 == (longlong *)0x0) {
      plVar15 = local_218;
    }
    uVar17 = (**(code **)(*plVar15 + 8))();
    (*pcVar11)(&local_558,uVar17,&local_1f8);
    local_638 = (double)uVar10 / local_548;
    local_618 = (double)uVar9 / dStack_550;
    local_668 = (double)uVar16 / local_558;
    uVar24 = (ulonglong)*(uint *)(param_5 + 1);
  }
  uStack_610 = 0;
  dStack_660 = 0.0;
  uVar16 = local_648._0_8_;
  dVar33 = DAT_14c846520;
  dVar40 = DAT_14c846518;
  dVar56 = DAT_14c846510;
  if (0 < (int)uVar24) {
    lVar21 = 0;
    lVar19 = 0;
    do {
      lVar23 = *param_8;
      sVar2 = *(short *)(lVar23 + 0xc + lVar21 * 2);
      if (((sVar2 != -1) && ((uint)*(ushort *)(lVar23 + 6 + lVar21 * 2) < DAT_14c87eb08 + 1U)) &&
         ((*(longlong *)(lVar23 + 4 + lVar21 * 2) != 0 && (*(char *)(lVar23 + lVar21 * 2) != '\0')))
         ) {
        dVar48 = (double)*(float *)(*param_5 + 0xc + lVar21);
        if (dVar48 <= 0.0) {
          dVar48 = 0.0;
        }
        if (9.999999747378752e-05 <= dVar48) {
          dVar48 = dVar48 * local_630;
          FUN_14486750c(lVar3,local_418,sVar2,0);
          dVar6 = local_3c8;
          dVar26 = dStack_3d0;
          dVar25 = pow(local_3d8,dVar48);
          dVar26 = pow(dVar26,dVar48);
          dVar48 = pow(dVar6,dVar48);
          dVar56 = dVar56 * dVar25;
          dVar40 = dVar40 * dVar26;
          dVar33 = dVar33 * dVar48;
          uVar24 = (ulonglong)*(uint *)(param_5 + 1);
        }
      }
      lVar19 = lVar19 + 1;
      lVar21 = lVar21 + 0x10;
    } while (lVar19 < (int)uVar24);
  }
  local_568 = *(undefined8 *)uVar16;
  local_560 = *(undefined4 *)(uVar16 + 8);
  FUN_149185020(lVar3,&local_558,&local_568,0);
  pcVar11 = local_238;
  local_588 = local_518;
  uStack_580 = uStack_510;
  local_578 = local_508;
  plVar15 = local_228;
  if (local_228 == (longlong *)0x0) {
    plVar15 = local_218;
  }
  uVar16 = (**(code **)(*plVar15 + 8))();
  (*pcVar11)(local_418,uVar16,&local_588);
  pcVar8 = local_658;
  pcVar5 = (char *)(dVar33 / local_418[2]);
  dVar40 = dVar40 / local_418[1];
  dVar56 = dVar56 / local_418[0];
  if (param_3 != '\0') {
    pcVar5 = (char *)((double)pcVar5 * local_638);
    dVar40 = local_618 * dVar40;
    dVar56 = local_668 * dVar56;
  }
  cVar12 = local_628[0];
  uVar16 = local_648._0_8_;
  local_5f8 = *(undefined8 *)local_648._0_8_;
  local_5f0 = *(undefined4 *)(local_648._0_8_ + 8);
  uVar13 = FUN_140813180(lVar3);
  lVar19 = lVar3;
  uVar13 = FUN_144afced8(lVar3,local_5e8,uVar13,0);
  auVar42 = _DAT_149934d80;
  if (cVar12 == '\x04') {
    uStack_650 = 0;
    dVar33 = local_4b8._0_8_;
    dVar6 = local_4b8._8_8_;
    auVar7._8_8_ = dStack_4a0;
    auVar7._0_8_ = local_4a8;
    dVar48 = local_5a8._0_8_;
    dVar25 = local_5a8._8_8_;
    auVar31 = local_598;
    dVar26 = local_598._0_8_;
    auVar41 = minpd(local_5a8,local_4b8);
    auVar34 = minpd(local_598,auVar7);
    auVar37._8_8_ = -(ulonglong)(auVar41._8_8_ < 0.0);
    auVar37._0_8_ = -(ulonglong)(auVar41._0_8_ < 0.0);
    iVar14 = movmskpd(uVar13,auVar37);
    auVar44._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
    auVar44._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
    uVar18 = movmskpd((int)lVar19,auVar44);
    local_668 = dVar56;
    dStack_660 = dVar40;
    local_658 = pcVar5;
    if ((uVar18 & 0x3fffffff) == 0 && iVar14 == 0) {
      dVar46 = local_4f8 * (double)local_5e8._8_8_;
      dVar55 = local_4f8 * (double)local_5e8._0_8_;
      dVar54 = (double)local_5e8._0_8_ * dStack_4f0;
      dVar47 = (double)local_5e8._8_8_ * dStack_4f0;
      dVar49 = (double)local_5e8._8_8_ * local_4e8;
      dVar53 = (double)local_5d8._8_8_ * local_4e8;
      dVar58 = (double)local_5e8._0_8_ * local_4e8 * 1.0 +
               (double)local_5d8._8_8_ * dStack_4f0 +
               (double)local_5d8._0_8_ * local_4f8 * -1.0 + (double)local_5e8._8_8_ * dStack_4e0;
      local_5e8._8_4_ = SUB84(dVar58,0);
      local_5e8._0_8_ =
           dVar49 * -1.0 +
           (double)local_5d8._0_8_ * dStack_4f0 +
           (double)local_5d8._8_8_ * local_4f8 * 1.0 + (double)local_5e8._0_8_ * dStack_4e0;
      local_5e8._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
      local_5d8._8_8_ =
           (double)local_5d8._0_8_ * local_4e8 * -1.0 +
           ((dVar55 * -1.0 + (double)local_5d8._8_8_ * dStack_4e0) - dVar47);
      local_5d8._0_8_ =
           dVar53 * 1.0 + ((dVar46 * 1.0 + (double)local_5d8._0_8_ * dStack_4e0) - dVar54);
      local_5c8 = local_5c8 * dVar33;
      dStack_5c0 = dStack_5c0 * dVar6;
      local_5b8 = local_5b8 * local_4a8;
      dStack_5b0 = dStack_5b0 * dStack_4a0;
      dVar54 = dStack_5c0 * local_4f8 - dStack_4f0 * local_5c8;
      dVar47 = local_5b8 * dStack_4f0 - local_4e8 * dStack_5c0;
      dVar49 = local_5c8 * local_4e8 - local_4f8 * local_5b8;
      dVar58 = dStack_5b0 * dStack_4e0 - dStack_4e0 * dStack_5b0;
      dVar47 = dVar47 + dVar47;
      dVar49 = dVar49 + dVar49;
      dVar54 = dVar54 + dVar54;
      dVar58 = dVar58 + dVar58;
      local_5c8 = (dVar54 * dStack_4f0 - local_4e8 * dVar49) + dStack_4e0 * dVar47 + local_5c8 +
                  local_4d8;
      dStack_5c0 = (dVar47 * local_4e8 - dVar54 * local_4f8) + dStack_4e0 * dVar49 + dStack_5c0 +
                   dStack_4d0;
      local_5b8 = (dVar49 * local_4f8 - dStack_4f0 * dVar47) + dStack_4e0 * dVar54 + local_5b8 +
                  local_4c8;
      dStack_5b0 = (dVar58 * dStack_4e0 - dVar58 * dStack_4e0) + dStack_4e0 * dVar58 + dStack_5b0 +
                   dStack_4c0;
      local_5a8._8_8_ = dVar25 * dVar6;
      local_5a8._0_8_ = dVar48 * dVar33;
      local_598._8_8_ = local_598._8_8_ * dStack_4a0;
      local_598._0_8_ = dVar26 * local_4a8;
      local_628 = auVar31;
    }
    else {
      dVar47 = dStack_4f0 + dStack_4f0;
      dVar40 = local_4e8 + local_4e8;
      dVar54 = local_4f8 * (local_4f8 + local_4f8);
      local_128 = (char *)((1.0 - (dVar54 + dStack_4f0 * dVar47)) * local_4a8);
      dVar56 = (local_4f8 + local_4f8) * dStack_4e0;
      local_138 = (dVar47 * dStack_4e0 + local_4f8 * dVar40) * local_4a8;
      dVar49 = local_4a8 * dVar26;
      dVar58 = dStack_4a0 * local_598._8_8_;
      dStack_130 = (dVar40 * dStack_4f0 - dVar56) * local_4a8;
      local_178[0] = ((double)DAT_149934d80 - (local_4e8 * dVar40 + dStack_4f0 * dVar47)) * dVar33;
      dVar54 = (DAT_149934d80._8_8_ - (local_4e8 * dVar40 + dVar54)) * dVar6;
      local_178[1] = (dVar47 * local_4f8 + dVar40 * dStack_4e0) * dVar33;
      local_148 = (dVar40 * dStack_4f0 + dVar56) * dVar6;
      local_168._8_8_ = 0;
      local_168._0_8_ = (local_4f8 * dVar40 - dVar47 * dStack_4e0) * dVar33;
      local_158._8_4_ = SUB84(dVar54,0);
      local_158._0_8_ = (dVar47 * local_4f8 - dVar40 * dStack_4e0) * dVar6;
      local_158._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
      dStack_140 = 0.0;
      uStack_120 = 0;
      local_118 = local_4d8;
      dStack_110 = dStack_4d0;
      local_108 = (undefined4)local_4c8;
      uStack_104 = local_4c8._4_4_;
      uStack_100 = 0;
      uStack_fc = 0x3ff00000;
      dVar47 = (double)local_5e8._8_8_ + (double)local_5e8._8_8_;
      dVar40 = (double)local_5d8._0_8_ + (double)local_5d8._0_8_;
      dVar54 = (double)local_5e8._0_8_ * ((double)local_5e8._0_8_ + (double)local_5e8._0_8_);
      local_1a8 = (1.0 - (dVar54 + (double)local_5e8._8_8_ * dVar47)) * dVar26;
      dVar56 = ((double)local_5e8._0_8_ + (double)local_5e8._0_8_) * (double)local_5d8._8_8_;
      local_1b8 = (dVar47 * (double)local_5d8._8_8_ + (double)local_5e8._0_8_ * dVar40) * dVar26;
      local_1d8 = (dVar47 * (double)local_5e8._0_8_ - dVar40 * (double)local_5d8._8_8_) * dVar25;
      dStack_1b0 = (dVar40 * (double)local_5e8._8_8_ - dVar56) * dVar26;
      dVar6 = dVar6 * dVar25;
      local_1f8 = ((double)DAT_149934d80 -
                  ((double)local_5d8._0_8_ * dVar40 + (double)local_5e8._8_8_ * dVar47)) * dVar48;
      dStack_1d0 = (DAT_149934d80._8_8_ - ((double)local_5d8._0_8_ * dVar40 + dVar54)) * dVar25;
      dStack_1f0 = (dVar47 * (double)local_5e8._0_8_ + dVar40 * (double)local_5d8._8_8_) * dVar48;
      local_1c8 = (dVar40 * (double)local_5e8._8_8_ + dVar56) * dVar25;
      local_1e8 = ((double)local_5e8._0_8_ * dVar40 - dVar47 * (double)local_5d8._8_8_) * dVar48;
      uStack_1e0 = 0;
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      local_198 = local_5c8;
      dStack_190 = dStack_5c0;
      local_188 = local_5b8;
      uStack_180 = 0x3ff0000000000000;
      FUN_1447fea8d(local_418);
      FUN_144a1c686(local_418,0x3e45798ee0000000);
      auVar28._8_8_ = -(ulonglong)(0.0 <= dVar6);
      auVar28._0_8_ = -(ulonglong)(0.0 <= dVar33 * dVar48);
      auVar31 = blendvpd(_DAT_149936790,auVar42,auVar28);
      uVar24 = -(ulonglong)(0.0 <= dVar49);
      dVar40 = (double)(~uVar24 & 0xbff0000000000000 | uVar24 & 0x3ff0000000000000);
      dVar56 = auVar31._0_8_;
      local_418[2] = local_418[2] * dVar56;
      local_418[1] = local_418[1] * dVar56;
      local_418[0] = local_418[0] * dVar56;
      dVar56 = auVar31._8_8_;
      local_3e8 = local_3e8 * dVar56;
      local_3f0 = local_3f0 * dVar56;
      local_3f8 = dVar56 * local_3f8;
      local_3c8 = local_3c8 * dVar40;
      dStack_3d0 = dStack_3d0 * dVar40;
      local_3d8 = dVar40 * local_3d8;
      FUN_14481fd10(&local_438,local_418);
      dVar40 = local_428 * local_428 + local_438 * local_438;
      dVar56 = dStack_420 * dStack_420 + dStack_430 * dStack_430;
      auVar38._0_8_ = dVar40 + dVar56;
      auVar38._8_8_ = dVar40 + dVar56;
      auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
      auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
      auVar31 = sqrtpd(auVar38,auVar38);
      auVar31 = divpd(auVar42,auVar31);
      auVar45._0_8_ = auVar31._0_8_ * local_428;
      auVar45._8_8_ = auVar31._8_8_ * dStack_420;
      local_5d8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar45,auVar29);
      local_5a8._8_4_ = SUB84(dVar6,0);
      local_5a8._0_8_ = dVar33 * dVar48;
      local_5a8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      local_598._8_4_ = SUB84(dVar58,0);
      local_598._0_8_ = dVar49;
      local_598._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
      local_5e8._8_8_ =
           (ulonglong)(dStack_430 * auVar31._8_8_) &
           -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
      local_5e8._0_8_ =
           (ulonglong)(local_438 * auVar31._0_8_) &
           -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
      local_5c8 = local_3b8;
      dStack_5c0 = dStack_3b0;
      local_5b8 = local_3a8;
      dStack_5b0 = 0.0;
      pcVar5 = local_658;
      dVar56 = local_668;
      dVar40 = dStack_660;
    }
  }
  local_148 = local_5b8;
  dStack_140 = dStack_5b0;
  local_158._8_8_ = dStack_5c0;
  local_158._0_8_ = local_5c8;
  local_168 = local_5d8;
  local_178[0] = (double)local_5e8._0_8_;
  local_178[1] = (double)local_5e8._8_8_;
  if (*pcVar8 == '\x01') {
    dStack_130 = (double)local_5a8._8_8_;
    if (((pcVar8[1] & 1U) == 0) || (dStack_130 = dVar40, pcVar8[2] == '\0')) goto LAB_1492830d7;
  }
  else {
    if ((pcVar8[1] & 1U) == 0) {
      dVar40 = (double)local_5a8._8_8_;
    }
    dStack_130 = dVar40;
    dVar56 = (double)local_5a8._0_8_;
LAB_1492830d7:
    if (pcVar8[2] == '\0') {
      pcVar5 = (char *)local_598._0_8_;
    }
  }
  local_138 = dVar56;
  local_128 = pcVar5;
  uStack_120 = 0;
  if (param_6 < 0.9999) {
    FUN_14915b8da(local_418,local_5e8,local_178);
    pdVar20 = local_418;
    pdVar22 = local_178;
    for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
      *pdVar22 = *pdVar20;
      pdVar20 = pdVar20 + 1;
      pdVar22 = pdVar22 + 1;
    }
  }
  if (cVar12 == '\x04') {
    FUN_1449437a2(local_178,local_418,&local_4f8);
    pdVar20 = local_418;
    pdVar22 = local_178;
    for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
      *pdVar22 = *pdVar20;
      pdVar20 = pdVar20 + 1;
      pdVar22 = pdVar22 + 1;
    }
    dVar33 = (double)local_168._0_8_ * (double)local_168._0_8_ + local_178[0] * local_178[0];
    dVar40 = (double)local_168._8_8_ * (double)local_168._8_8_ + local_178[1] * local_178[1];
    auVar39._0_8_ = dVar33 + dVar40;
    auVar39._8_8_ = dVar33 + dVar40;
    auVar30._8_8_ = -(ulonglong)(1e-08 <= auVar39._8_8_);
    auVar30._0_8_ = -(ulonglong)(1e-08 <= auVar39._0_8_);
    auVar31 = sqrtpd(auVar39,auVar39);
    auVar42 = divpd(auVar42,auVar31);
    auVar57._0_8_ = auVar42._0_8_ * (double)local_168._0_8_;
    auVar57._8_8_ = auVar42._8_8_ * (double)local_168._8_8_;
    local_168 = blendvpd(_DAT_149935300,auVar57,auVar30);
    local_178[0] = (double)((ulonglong)(local_178[0] * auVar42._0_8_) &
                           -(ulonglong)(1e-08 <= auVar39._0_8_));
    local_178[1] = (double)((ulonglong)(local_178[1] * auVar42._8_8_) &
                           -(ulonglong)(1e-08 <= auVar39._8_8_));
  }
  pdVar20 = local_178;
  pdVar22 = local_418;
  for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
    *pdVar22 = *pdVar20;
    pdVar20 = pdVar20 + 1;
    pdVar22 = pdVar22 + 1;
  }
  local_600 = *(undefined4 *)(uVar16 + 8);
  local_608 = *(undefined8 *)uVar16;
  uVar13 = FUN_140813180();
  local_678 = 0;
  local_680 = 0;
  local_688 = 1;
  FUN_140122cc6(lVar3,uVar13,local_418,0);
LAB_149281d6d:
  if (local_238 != (code *)0x0) {
    plVar15 = local_228;
    if (local_228 == (longlong *)0x0) {
      plVar15 = local_218;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if ((local_f0 ^ (ulonglong)auStack_6a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14928345c FUN_14928345c body=409 status=ok
// SIG undefined FUN_14928345c(void)

undefined8 FUN_14928345c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_378 [32];
  undefined1 local_358;
  longlong local_348 [2];
  longlong local_338 [2];
  undefined1 local_328 [496];
  undefined1 local_138;
  undefined8 local_134;
  undefined1 local_12c;
  undefined8 auStack_128 [12];
  undefined1 local_c8;
  undefined8 local_c4;
  undefined1 local_b8 [16];
  undefined1 local_a8;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_378;
  FUN_1492835f6(local_328);
  local_134 = *(undefined8 *)(param_1 + 0x1f0);
  local_138 = 1;
  local_12c = *(undefined1 *)(param_1 + 0x1f8);
  puVar2 = (undefined8 *)(param_1 + 0x200);
  puVar3 = auStack_128;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_c4 = *(undefined8 *)(param_1 + 0x260);
  local_c8 = 1;
  FUN_1492836e8(local_b8,param_1 + 0x268);
  local_a8 = *(undefined1 *)(param_1 + 0x278);
  FUN_14928373e(param_2,local_328);
  FUN_140056680(local_338,L"Item.Name");
  FUN_140056680(local_348,L"Bone");
  local_358 = 1;
  FUN_1490fb142(param_2,local_348,local_338,1);
  if (local_348[0] != 0) {
    FUN_1400020a8();
  }
  if (local_338[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_338,L"BaseItem.Name");
  FUN_140056680(local_348,L"BaseBone");
  local_358 = 1;
  FUN_1490fb142(param_2,local_348,local_338,1);
  if (local_348[0] != 0) {
    FUN_1400020a8();
  }
  if (local_338[0] != 0) {
    FUN_1400020a8();
  }
  FUN_149283812(local_328);
  if ((local_38 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492835f6 FUN_1492835f6 body=241 status=ok
// SIG undefined FUN_1492835f6(void)

undefined8 * FUN_1492835f6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278();
  *param_1 = &PTR_FUN_14bc05060;
  *(undefined1 *)((longlong)param_1 + 0x1fc) = 1;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x3ff00000;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0x3ff0000000000000;
  param_1[0x49] = 0x3ff0000000000000;
  param_1[0x4a] = 0x3ff0000000000000;
  param_1[0x4b] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined1 *)(param_1 + 0x50) = 1;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0x4c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0;
  param_1[0x3e] = param_1[0x4c];
  *(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)(param_1 + 0x4d);
  return param_1;
}



// FUNCTION 1492836e8 FUN_1492836e8 body=85 status=ok
// SIG undefined FUN_1492836e8(void)

undefined8 * FUN_1492836e8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1492d1374(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x70);
      }
    }
  }
  return param_1;
}



// FUNCTION 14928373e FUN_14928373e body=211 status=ok
// SIG undefined FUN_14928373e(void)

undefined8 * FUN_14928373e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
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
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_14670e1dc();
  param_1[2] = uVar1;
  uVar1 = FUN_14670e57a();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149283812 FUN_149283812 body=74 status=ok
// SIG undefined FUN_149283812(void)

void FUN_149283812(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc05060;
  FUN_1492c2bc4(param_1 + 0x51);
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 14928385c FUN_14928385c body=282 status=ok
// SIG undefined FUN_14928385c(void)

void FUN_14928385c(longlong *param_1,undefined1 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,longlong *param_6,undefined8 param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  int local_50;
  int local_4c;
  int *local_48;
  int *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = (longlong)param_3 * 0x70 + *param_1;
  local_4c = param_3;
  local_50 = FUN_14922e972(param_6);
  lVar1 = (longlong)local_50 * 0xe0 + *param_6;
  local_48 = (int *)((ulonglong)local_48 & 0xffffffffffffff00);
  local_40 = (int *)FUN_14001cc68(0x18,0x10);
  *(undefined2 *)((longlong)local_40 + 8) = 0x101;
  *(undefined1 *)((longlong)local_40 + 10) = 1;
  *(undefined ***)local_40 = &PTR_FUN_149ebb0e0;
  *(undefined1 *)((longlong)local_40 + 0x10) = param_2;
  FUN_1469119d2(lVar1,&local_48);
  if (local_40 != (int *)0x0) {
    (*(code *)**(undefined8 **)local_40)(local_40,1);
  }
  *(undefined1 *)(lVar1 + 0x14) = *(undefined1 *)(lVar2 + 100);
  *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)(lVar2 + 0x60);
  if (*(char *)(lVar2 + 100) == '\x01') {
    FUN_14690dc42(lVar1,param_4,lVar2,param_5);
  }
  local_48 = &local_50;
  local_40 = &local_4c;
  FUN_140263e2a(param_7,local_34,&local_48,0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149283978 FUN_149283978 body=25 status=ok
// SIG undefined FUN_149283978(void)

undefined8 FUN_149283978(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 149283992 FUN_149283992 body=202 status=ok
// SIG undefined FUN_149283992(void)

undefined8 FUN_149283992(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_298 [32];
  undefined1 local_278 [496];
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined2 local_7b;
  undefined1 local_79;
  undefined1 auStack_78 [16];
  undefined4 local_68;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_298;
  FUN_145961040(local_278);
  local_88 = *(undefined8 *)(param_1 + 0x1f0);
  local_80 = *(undefined4 *)(param_1 + 0x1f8);
  local_7c = *(undefined1 *)(param_1 + 0x1fc);
  local_79 = *(undefined1 *)(param_1 + 0x1ff);
  local_7b = *(undefined2 *)(param_1 + 0x1fd);
  FUN_149283a5e(auStack_78,param_1 + 0x200);
  local_68 = *(undefined4 *)(param_1 + 0x210);
  FUN_149283ab6(param_2,local_278);
  FUN_1467106d8(local_278);
  if ((local_20 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149283a5e FUN_149283a5e body=88 status=ok
// SIG undefined FUN_149283a5e(void)

undefined8 * FUN_149283a5e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1492d13e4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 149283ab6 FUN_149283ab6 body=211 status=ok
// SIG undefined FUN_149283ab6(void)

undefined8 * FUN_149283ab6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
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
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_14670f1c6();
  param_1[2] = uVar1;
  uVar1 = FUN_14670f4bc();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149283b8a FUN_149283b8a body=216 status=ok
// SIG undefined FUN_149283b8a(void)

undefined8 FUN_149283b8a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_298 [32];
  undefined1 local_278 [496];
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined2 local_7b;
  undefined1 local_79;
  undefined1 auStack_78 [16];
  undefined2 local_68;
  undefined4 local_64;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_298;
  FUN_14671072a(local_278);
  local_88 = *(undefined8 *)(param_1 + 0x1f0);
  local_80 = *(undefined4 *)(param_1 + 0x1f8);
  local_7c = *(undefined1 *)(param_1 + 0x1fc);
  local_79 = *(undefined1 *)(param_1 + 0x1ff);
  local_7b = *(undefined2 *)(param_1 + 0x1fd);
  FUN_149283a5e(auStack_78,param_1 + 0x200);
  local_68 = *(undefined2 *)(param_1 + 0x210);
  local_64 = *(undefined4 *)(param_1 + 0x214);
  FUN_149283c64(param_2,local_278);
  FUN_1467107e6(local_278);
  if ((local_20 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149283c64 FUN_149283c64 body=211 status=ok
// SIG undefined FUN_149283c64(void)

undefined8 * FUN_149283c64(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
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
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_14670f8f8();
  param_1[2] = uVar1;
  uVar1 = FUN_14670fc44();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149283d38 FUN_149283d38 body=202 status=ok
// SIG undefined FUN_149283d38(void)

undefined8 FUN_149283d38(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_298 [32];
  undefined1 local_278 [496];
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined2 local_7b;
  undefined1 local_79;
  undefined1 auStack_78 [16];
  undefined4 local_68;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_298;
  FUN_146710838(local_278);
  local_88 = *(undefined8 *)(param_1 + 0x1f0);
  local_80 = *(undefined4 *)(param_1 + 0x1f8);
  local_7c = *(undefined1 *)(param_1 + 0x1fc);
  local_79 = *(undefined1 *)(param_1 + 0x1ff);
  local_7b = *(undefined2 *)(param_1 + 0x1fd);
  FUN_149283a5e(auStack_78,param_1 + 0x200);
  local_68 = *(undefined4 *)(param_1 + 0x210);
  FUN_149283e04(param_2,local_278);
  FUN_1467108ea(local_278);
  if ((local_20 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149283e04 FUN_149283e04 body=211 status=ok
// SIG undefined FUN_149283e04(void)

undefined8 * FUN_149283e04(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
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
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_14671003e();
  param_1[2] = uVar1;
  uVar1 = FUN_146710334();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149283ed8 FUN_149283ed8 body=38 status=ok
// SIG undefined FUN_149283ed8(void)

undefined8 FUN_149283ed8(undefined8 param_1,int param_2)

{
  FUN_149217114();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149283efe FUN_149283efe body=55 status=ok
// SIG undefined FUN_149283efe(void)

void FUN_149283efe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc08240 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc08240 = FUN_140002ddd(FUN_1466d1acb,uVar1,L"MovieSceneControlRigParameterTemplate");
  }
  return;
}



// FUNCTION 149283f44 FUN_149283f44 body=48 status=ok
// SIG undefined FUN_149283f44(void)

longlong FUN_149283f44(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xf8;
  FUN_145c81f02(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149283f7c FUN_149283f7c body=48 status=ok
// SIG undefined FUN_149283f7c(void)

longlong FUN_149283f7c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x100;
  FUN_145c81f02(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149283fb4 FUN_149283fb4 body=48 status=ok
// SIG undefined FUN_149283fb4(void)

longlong FUN_149283fb4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x108;
  FUN_145c81f02(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149283fec FUN_149283fec body=29 status=ok
// SIG undefined FUN_149283fec(void)

undefined8 FUN_149283fec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492840d2 FUN_1492840d2 body=63 status=ok
// SIG undefined FUN_1492840d2(void)

undefined1 FUN_1492840d2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1492841fc(param_2,param_3);
    param_3 = param_3 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return 1;
}



// FUNCTION 14928413a FUN_14928413a body=59 status=ok
// SIG undefined FUN_14928413a(void)

undefined8 FUN_14928413a(longlong *param_1)

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



// FUNCTION 149284186 FUN_149284186 body=40 status=ok
// SIG undefined FUN_149284186(void)

void FUN_149284186(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xc0) == '\x01') {
    FUN_149217114(param_2);
    *(undefined1 *)(param_2 + 0xc0) = 0;
  }
  return;
}



// FUNCTION 1492841fc FUN_1492841fc body=98 status=ok
// SIG undefined FUN_1492841fc(void)

longlong FUN_1492841fc(longlong param_1,longlong param_2)

{
  FUN_1475b10c0();
  FUN_14928425e(param_1 + 0x80,param_2 + 0x80);
  FUN_1492842be(param_1 + 0x90,param_2 + 0x90);
  FUN_14928431e(param_1 + 0xa0,param_2 + 0xa0);
  FUN_14928437e(param_1 + 0xb0,param_2 + 0xb0);
  return param_1;
}



// FUNCTION 14928425e FUN_14928425e body=95 status=ok
// SIG undefined FUN_14928425e(void)

undefined8 * FUN_14928425e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145e1da5d(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1492843de(param_1,iVar1);
      FUN_149284450(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1492842be FUN_1492842be body=95 status=ok
// SIG undefined FUN_1492842be(void)

undefined8 * FUN_1492842be(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145e1da2e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14928449c(param_1,iVar1);
      FUN_14928450e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14928431e FUN_14928431e body=95 status=ok
// SIG undefined FUN_14928431e(void)

undefined8 * FUN_14928431e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145e1d9ff(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14928455a(param_1,iVar1);
      FUN_1492845cc(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14928437e FUN_14928437e body=95 status=ok
// SIG undefined FUN_14928437e(void)

undefined8 * FUN_14928437e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145a00245(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_149284768(param_1,iVar1);
      FUN_1492847da(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1492843de FUN_1492843de body=114 status=ok
// SIG undefined FUN_1492843de(void)

void FUN_1492843de(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x118,8);
    iVar2 = (int)(uVar1 / 0x118);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x118,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 149284450 FUN_149284450 body=76 status=ok
// SIG undefined FUN_149284450(void)

void FUN_149284450(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_1 + -8) = *(undefined8 *)(param_2 + -8);
      FUN_1475d3b00(param_1,param_2);
      param_1 = param_1 + 0x118;
      param_2 = param_2 + 0x118;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14928449c FUN_14928449c body=114 status=ok
// SIG undefined FUN_14928449c(void)

void FUN_14928449c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x110,8);
    iVar2 = (int)(uVar1 / 0x110);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x110,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14928450e FUN_14928450e body=76 status=ok
// SIG undefined FUN_14928450e(void)

void FUN_14928450e(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_1 + -8) = *(undefined8 *)(param_2 + -8);
      FUN_1480d2cb8(param_1,param_2);
      param_1 = param_1 + 0x110;
      param_2 = param_2 + 0x110;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14928455a FUN_14928455a body=114 status=ok
// SIG undefined FUN_14928455a(void)

void FUN_14928455a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x118,8);
    iVar2 = (int)(uVar1 / 0x118);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x118,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1492845cc FUN_1492845cc body=76 status=ok
// SIG undefined FUN_1492845cc(void)

void FUN_1492845cc(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_1 + -8) = *(undefined8 *)(param_2 + -8);
      FUN_149284618(param_1,param_2);
      param_1 = param_1 + 0x118;
      param_2 = param_2 + 0x118;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 149284618 FUN_149284618 body=335 status=ok
// SIG undefined FUN_149284618(void)

undefined8 * FUN_149284618(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  FUN_1475affea();
  *param_1 = &PTR_FUN_14bb90660;
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0xb);
  pvVar2 = (void *)param_2[10];
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_147539e5c(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0xd);
  pvVar2 = (void *)param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_14920a36a(param_1 + 0xc,iVar1,0);
    memcpy((void *)param_1[0xc],pvVar2,(longlong)iVar1 << 4);
  }
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 2;
  if (param_2 != param_1) {
    FUN_14920a3cc(param_1 + 0x1f,param_2 + 0x1f);
  }
  return param_1;
}



// FUNCTION 149284768 FUN_149284768 body=114 status=ok
// SIG undefined FUN_149284768(void)

void FUN_149284768(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x110,8);
    iVar2 = (int)(uVar1 / 0x110);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x110,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1492847da FUN_1492847da body=113 status=ok
// SIG undefined FUN_1492847da(void)

void FUN_1492847da(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1475b14f8(param_1,param_2);
    *param_1 = &PTR_FUN_14a49f3e0;
    lVar1 = *(longlong *)(param_2 + 0x108);
    param_1[0x21] = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    param_1 = param_1 + 0x22;
    param_2 = param_2 + 0x110;
  }
  return;
}



// FUNCTION 14928484c FUN_14928484c body=105 status=ok
// SIG undefined FUN_14928484c(void)

void * FUN_14928484c(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x18);
    if (*(void **)((longlong)param_2 + 0x18) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x20);
    *(int *)((longlong)param_1 + 0x20) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x24) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 2;
    }
    else {
      FUN_149284a1a(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x18);
        if (*(void **)((longlong)param_1 + 0x18) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 1492848b6 FUN_1492848b6 body=105 status=ok
// SIG undefined FUN_1492848b6(void)

void * FUN_1492848b6(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x18);
    if (*(void **)((longlong)param_2 + 0x18) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x20);
    *(int *)((longlong)param_1 + 0x20) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x24) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 2;
    }
    else {
      FUN_149284b16(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x18);
        if (*(void **)((longlong)param_1 + 0x18) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 149284920 FUN_149284920 body=105 status=ok
// SIG undefined FUN_149284920(void)

void * FUN_149284920(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x30);
    if (*(void **)((longlong)param_2 + 0x30) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x38);
    *(int *)((longlong)param_1 + 0x38) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x3c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x3c) = 2;
    }
    else {
      FUN_149284c12(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x30);
        if (*(void **)((longlong)param_1 + 0x30) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 14928498a FUN_14928498a body=105 status=ok
// SIG undefined FUN_14928498a(void)

void * FUN_14928498a(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x18);
    if (*(void **)((longlong)param_2 + 0x18) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x20);
    *(int *)((longlong)param_1 + 0x20) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x24) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 2;
    }
    else {
      FUN_149284d0e(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x18);
        if (*(void **)((longlong)param_1 + 0x18) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 1492849f4 FUN_1492849f4 body=38 status=ok
// SIG undefined FUN_1492849f4(void)

undefined8 FUN_1492849f4(undefined8 param_1,int param_2)

{
  FUN_149216d50();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149284a1a FUN_149284a1a body=112 status=ok
// SIG undefined FUN_149284a1a(void)

void FUN_149284a1a(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 2;
    if (2 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0xc,0);
      iVar2 = (int)(uVar1 / 0xc);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_149284a8a(param_1,0,iVar3);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x24) = param_3;
  return;
}



// FUNCTION 149284a8a FUN_149284a8a body=140 status=ok
// SIG undefined FUN_149284a8a(void)

void FUN_149284a8a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x18);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x18,0,param_3,0xc);
    memmove(*(void **)((longlong)param_1 + 0x18),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x18,param_2,param_3,0xc);
  return;
}



// FUNCTION 149284b16 FUN_149284b16 body=112 status=ok
// SIG undefined FUN_149284b16(void)

void FUN_149284b16(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 2;
    if (2 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0xc,0);
      iVar2 = (int)(uVar1 / 0xc);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_149284b86(param_1,0,iVar3);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x24) = param_3;
  return;
}



// FUNCTION 149284b86 FUN_149284b86 body=140 status=ok
// SIG undefined FUN_149284b86(void)

void FUN_149284b86(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x18);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x18,0,param_3,0xc);
    memmove(*(void **)((longlong)param_1 + 0x18),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x18,param_2,param_3,0xc);
  return;
}



// FUNCTION 149284c12 FUN_149284c12 body=112 status=ok
// SIG undefined FUN_149284c12(void)

void FUN_149284c12(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 2;
    if (2 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
      iVar2 = (int)(uVar1 / 0x18);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_149284c82(param_1,0,iVar3);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x3c) = param_3;
  return;
}



// FUNCTION 149284c82 FUN_149284c82 body=140 status=ok
// SIG undefined FUN_149284c82(void)

void FUN_149284c82(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x30);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,0x18);
  return;
}



// FUNCTION 149284d0e FUN_149284d0e body=112 status=ok
// SIG undefined FUN_149284d0e(void)

void FUN_149284d0e(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 2;
    if (2 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0xc,0);
      iVar2 = (int)(uVar1 / 0xc);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_149284d7e(param_1,0,iVar3);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x24) = param_3;
  return;
}



// FUNCTION 149284d7e FUN_149284d7e body=140 status=ok
// SIG undefined FUN_149284d7e(void)

void FUN_149284d7e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x18);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x18,0,param_3,0xc);
    memmove(*(void **)((longlong)param_1 + 0x18),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x18,param_2,param_3,0xc);
  return;
}



// FUNCTION 149284e0a FUN_149284e0a body=128 status=ok
// SIG undefined FUN_149284e0a(void)

void FUN_149284e0a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbd4540;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
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
    return;
  }
  return;
}



// FUNCTION 149284e8a FUN_149284e8a body=834 status=ok
// SIG undefined FUN_149284e8a(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_149284e8a(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 unaff_RBP;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_108 [39];
  char local_e1;
  longlong *local_e0;
  uint local_d4;
  undefined8 local_d0 [2];
  undefined8 local_c0 [2];
  longlong local_b0;
  int local_a8;
  longlong local_a0 [2];
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 == (longlong *)0x0) goto LAB_149284eb4;
  uVar4 = (**(code **)(*param_2 + 0x180))(param_2);
  lVar5 = (**(code **)(*param_2 + 0x180))(param_2);
  if (lVar5 == 0) {
LAB_149284f2d:
    uVar11 = 0;
  }
  else {
    lVar5 = (**(code **)(*param_2 + 0x180))(param_2);
    if (6 < *(byte *)(lVar5 + 0x152)) goto LAB_149284f2d;
    uVar11 = (uint)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),
                            0x6a >> (*(byte *)(lVar5 + 0x152) & 0x1f));
  }
  uVar8 = *(undefined8 *)(param_1 + 8);
  uVar6 = FUN_145b9f06c();
  lVar7 = FUN_144a78ede(uVar8,uVar6);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x1a8);
  local_a0[0] = lVar7;
  uVar8 = FUN_14759215a(uVar4);
  FUN_1475946f6(uVar8,&local_b0,0);
  if ((longlong)local_a8 != 0) {
    lVar14 = (longlong)local_a8 << 3;
    lVar13 = local_b0;
    local_d4 = uVar11;
    do {
      lVar9 = FUN_14479d2ce(lVar13);
      if (lVar9 != 0) {
        lVar10 = FUN_1458989be();
        if (((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) &&
           (*(longlong *)(lVar9 + 0x90) != 0)) {
          lVar10 = FUN_1459f5f3a();
          plVar1 = *(longlong **)(lVar9 + 0x90);
          if ((((plVar1 != (longlong *)0x0) && (lVar10 != 0)) &&
              ((lVar2 = plVar1[2], lVar2 != 0 &&
               ((*(int *)(lVar10 + 0x38) <= *(int *)(lVar2 + 0x38) &&
                (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
                 == lVar10 + 0x30)))))) &&
             (local_e0 = plVar1, cVar3 = FUN_1492872de(local_a0), cVar3 != '\0')) {
            if ((local_d4 & 1) == 0) {
              uVar8 = FUN_145c01f0e(local_e0 + 0xc);
              if ((lVar7 != 0) && (cVar3 = FUN_149218f3a(lVar7,uVar8), cVar3 != '\0')) {
                uVar8 = *param_5;
                puVar12 = local_d0;
                goto LAB_14928515e;
              }
            }
            else {
              local_88 = 0;
              uStack_80 = 0;
              local_a0[1] = 0;
              uStack_90 = 0;
              local_78 = 0;
              if (lVar5 == 0) {
                local_a0[1] = 0;
                uStack_90 = 0;
                local_88 = 0;
              }
              else {
                FUN_1400bbfae(&local_68,lVar5);
                uStack_90 = CONCAT44(uStack_64,local_68);
                local_88 = CONCAT44(uStack_5c,uStack_60);
                if (uStack_80 != 0) {
                  FUN_1400020a8();
                }
                uStack_80 = CONCAT44(uStack_54,local_58);
                local_78 = CONCAT44(uStack_4c,uStack_50);
                cVar3 = (*(code *)PTR_FUN_14c758760)();
                if (cVar3 != '\0') {
                  uVar11 = *(uint *)(lVar5 + 0xc);
                  if ((int)uVar11 < DAT_14c9647dc) {
                    lVar10 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
                  }
                  else {
                    lVar10 = 0;
                  }
                  if ((*(uint *)(lVar10 + 8) & 0x8400000) != 0) {
                    local_a0[1] = 0;
                    goto LAB_14928511e;
                  }
                }
                FUN_14485c47a(local_a0 + 1,lVar5);
              }
LAB_14928511e:
              cVar3 = FUN_144a7afa6(local_e0 + 0xd,&uStack_90);
              if (uStack_80 != 0) {
                local_e1 = cVar3;
                FUN_1400020a8();
                cVar3 = local_e1;
              }
              if (cVar3 != '\0') {
                uVar8 = *param_5;
                puVar12 = local_c0;
LAB_14928515e:
                *puVar12 = uVar8;
                lVar10 = param_5[1];
                puVar12[1] = lVar10;
                if (lVar10 != 0) {
                  LOCK();
                  *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
                  UNLOCK();
                }
                (**(code **)(*local_e0 + 0x2d0))
                          (local_e0,*(undefined4 *)(param_4 + 0x10),puVar12,param_3);
                FUN_147597062(lVar9,uVar4);
              }
            }
          }
        }
      }
      lVar13 = lVar13 + 8;
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0);
  }
  if (local_b0 != 0) {
    FUN_1400020a8(local_b0);
  }
LAB_149284eb4:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492851ce FUN_1492851ce body=38 status=ok
// SIG undefined FUN_1492851ce(void)

undefined8 FUN_1492851ce(undefined8 param_1,int param_2)

{
  FUN_149284e0a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1492851f4 FUN_1492851f4 body=3322 status=ok
// SIG undefined FUN_1492851f4(void)

longlong FUN_1492851f4(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  char cVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  longlong *plVar26;
  longlong lVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  undefined1 auStack_2a8 [32];
  longlong local_288;
  longlong local_280;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined8 local_228;
  float local_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  longlong local_210;
  int local_208;
  undefined **local_200;
  undefined4 local_1f8;
  longlong local_1f0;
  undefined8 uStack_1e8;
  longlong local_1e0;
  undefined8 uStack_1d8;
  longlong local_1d0;
  undefined8 uStack_1c8;
  longlong local_1c0;
  undefined8 uStack_1b8;
  longlong local_1b0;
  undefined8 uStack_1a8;
  longlong local_1a0;
  undefined8 uStack_198;
  longlong local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  uint local_170;
  undefined1 local_168 [3];
  undefined1 auStack_165 [5];
  undefined8 uStack_160;
  undefined8 local_158;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  undefined8 local_140;
  undefined1 local_138 [16];
  double local_128;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  local_200 = &PTR_FUN_14bbd4558;
  local_1f8 = *(undefined4 *)(param_1 + 8);
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_180 = 0;
  uStack_178 = 0;
  if (param_3 == (longlong *)0x0) goto LAB_149285cec;
  lVar20 = FUN_1401242c6();
  if ((*(int *)(param_3[2] + 0x38) < *(int *)(lVar20 + 0x38)) ||
     (*(longlong *)(*(longlong *)(param_3[2] + 0x30) + (longlong)*(int *)(lVar20 + 0x38) * 8) !=
      lVar20 + 0x30)) goto LAB_149285cec;
  local_288 = param_2;
  (**(code **)(*param_3 + 0x3a8))(param_3,&local_210);
  lVar20 = local_210;
  local_280 = (longlong)local_208;
  if (local_280 != 0) {
    local_280 = local_280 << 3;
    lVar21 = 0;
    do {
      uVar12 = uStack_1e8;
      lVar23 = *(longlong *)(lVar20 + lVar21);
      switch(*(undefined1 *)(lVar23 + 0x211)) {
      case 0:
        local_278[0] = 1;
        FUN_14919f2a0(param_3,local_168,lVar23);
        uVar12 = uStack_1c8;
        uVar3 = local_168[0];
        uVar5 = *(undefined8 *)(lVar23 + 0x14);
        lVar23 = (longlong)(int)uStack_1c8;
        uVar19 = (int)uStack_1c8 + 1;
        uStack_1c8 = CONCAT44(uStack_1c8._4_4_,uVar19);
        if (uStack_1c8._4_4_ < uVar19) {
          FUN_149286d72(&local_1d0,uVar12 & 0xffffffff);
        }
        *(undefined8 *)(local_1d0 + lVar23 * 0xc) = uVar5;
        *(undefined1 *)(local_1d0 + 8 + lVar23 * 0xc) = uVar3;
        break;
      case 1:
      case 10:
        local_278[0] = 1;
        FUN_14919f2a0(param_3,local_168,lVar23);
        uVar12 = uStack_1d8;
        uVar13 = _local_168;
        uVar5 = *(undefined8 *)(lVar23 + 0x14);
        lVar23 = (longlong)(int)uStack_1d8;
        uVar19 = (int)uStack_1d8 + 1;
        uStack_1d8 = CONCAT44(uStack_1d8._4_4_,uVar19);
        if (uStack_1d8._4_4_ < uVar19) {
          FUN_1475d3684(&local_1e0,uVar12 & 0xffffffff);
        }
        *(undefined8 *)(local_1e0 + lVar23 * 0xc) = uVar5;
        *(undefined4 *)(local_1e0 + 8 + lVar23 * 0xc) = uVar13;
        break;
      case 2:
        local_278[0] = 1;
        FUN_14919f2a0(param_3,local_168,lVar23);
        uVar12 = uStack_1b8;
        uVar13 = _local_168;
        uVar5 = *(undefined8 *)(lVar23 + 0x14);
        lVar23 = (longlong)(int)uStack_1b8;
        uVar19 = (int)uStack_1b8 + 1;
        uStack_1b8 = CONCAT44(uStack_1b8._4_4_,uVar19);
        if (uStack_1b8._4_4_ < uVar19) {
          FUN_149286e06(&local_1c0,uVar12 & 0xffffffff);
        }
        *(undefined8 *)(local_1c0 + lVar23 * 0xc) = uVar5;
        *(undefined4 *)(local_1c0 + 8 + lVar23 * 0xc) = uVar13;
        break;
      case 3:
        local_278[0] = 1;
        FUN_14919f2a0(param_3,local_168,lVar23);
        uVar12 = uStack_198;
        dVar6 = (double)(float)auStack_165._1_4_;
        dVar7 = (double)_local_168;
        uVar5 = *(undefined8 *)(lVar23 + 0x14);
        lVar23 = (longlong)(int)uStack_198;
        uVar19 = (int)uStack_198 + 1;
        uStack_198 = CONCAT44(uStack_198._4_4_,uVar19);
        if (uStack_198._4_4_ < uVar19) {
          FUN_149286e9a(&local_1a0,uVar12 & 0xffffffff);
        }
        *(undefined8 *)(local_1a0 + lVar23 * 0x18) = uVar5;
        *(double *)(local_1a0 + 8 + lVar23 * 0x18) = dVar7;
        *(double *)(local_1a0 + 0x10 + lVar23 * 0x18) = dVar6;
        break;
      case 4:
      case 5:
      case 6:
        uVar3 = *(undefined1 *)(lVar23 + 0x10);
        local_168[2] = *(undefined1 *)(lVar23 + 0x13);
        local_168._0_2_ = *(undefined2 *)(lVar23 + 0x11);
        uVar5 = *(undefined8 *)(lVar23 + 0x14);
        lVar27 = (longlong)(int)uStack_1e8;
        uVar19 = (int)uStack_1e8 + 1;
        uStack_1e8 = CONCAT44(uStack_1e8._4_4_,uVar19);
        if (uStack_1e8._4_4_ < uVar19) {
          FUN_149286f2e(&local_1f0,uVar12 & 0xffffffff);
        }
        *(undefined8 *)(local_1f0 + lVar27 * 0x18) = uVar5;
        *(undefined1 *)(local_1f0 + 8 + lVar27 * 0x18) = 0;
        *(undefined1 *)(local_1f0 + 0xc + lVar27 * 0x18) = uVar3;
        *(undefined2 *)(local_1f0 + 0xd + lVar27 * 0x18) = local_168._0_2_;
        *(undefined1 *)(local_1f0 + 0xf + lVar27 * 0x18) = local_168[2];
        *(undefined8 *)(local_1f0 + 0x10 + lVar27 * 0x18) = uVar5;
        local_278[0] = 1;
        FUN_14919f2a0(param_3,local_168,lVar23,local_278);
        if (*(char *)(lVar23 + 0x211) == '\x06') {
          FUN_1491a068c(param_3,local_168,lVar23,0);
          fVar29 = (float)_local_168;
          fVar30 = (float)uStack_160;
          fVar32 = (float)local_158;
        }
        else {
          fVar29 = _local_168;
          fVar30 = (float)auStack_165._1_4_;
          fVar32 = (float)uStack_160;
        }
        uVar12 = uStack_1a8;
        uVar5 = *(undefined8 *)(lVar23 + 0x14);
        lVar23 = (longlong)(int)uStack_1a8;
        uVar19 = (int)uStack_1a8 + 1;
        uStack_1a8 = CONCAT44(uStack_1a8._4_4_,uVar19);
        if (uStack_1a8._4_4_ < uVar19) {
          FUN_1475d3718(&local_1b0,uVar12 & 0xffffffff);
        }
        lVar23 = lVar23 * 0x20;
        *(undefined8 *)(local_1b0 + lVar23) = uVar5;
        *(double *)(local_1b0 + 8 + lVar23) = (double)fVar29;
        *(double *)(local_1b0 + 0x10 + lVar23) = (double)fVar30;
        *(double *)(local_1b0 + 0x18 + lVar23) = (double)fVar32;
        break;
      case 7:
        uVar3 = *(undefined1 *)(lVar23 + 0x10);
        local_168[2] = *(undefined1 *)(lVar23 + 0x13);
        local_168._0_2_ = *(undefined2 *)(lVar23 + 0x11);
        uVar5 = *(undefined8 *)(lVar23 + 0x14);
        lVar27 = (longlong)(int)uStack_1e8;
        uVar19 = (int)uStack_1e8 + 1;
        uStack_1e8 = CONCAT44(uStack_1e8._4_4_,uVar19);
        if (uStack_1e8._4_4_ < uVar19) {
          FUN_149286f2e(&local_1f0,uVar12 & 0xffffffff);
        }
        *(undefined8 *)(local_1f0 + lVar27 * 0x18) = uVar5;
        *(undefined1 *)(local_1f0 + 8 + lVar27 * 0x18) = 0;
        *(undefined1 *)(local_1f0 + 0xc + lVar27 * 0x18) = uVar3;
        *(undefined2 *)(local_1f0 + 0xd + lVar27 * 0x18) = local_168._0_2_;
        *(undefined1 *)(local_1f0 + 0xf + lVar27 * 0x18) = local_168[2];
        *(undefined8 *)(local_1f0 + 0x10 + lVar27 * 0x18) = uVar5;
        local_278[0] = 1;
        FUN_14919f2a0(param_3,local_168,lVar23,local_278);
        dVar6 = (double)uStack_160._4_4_;
        dVar7 = (double)(float)uStack_160;
        local_278._8_8_ = (undefined8)(float)auStack_165._1_4_;
        local_278._0_8_ = (undefined8)_local_168;
        dVar8 = (double)(float)local_140;
        dVar28 = (double)fStack_144;
        dVar9 = (double)fStack_148;
        uStack_160 = (double)local_158._4_4_;
        _local_168 = (double)(float)local_158;
        local_268._8_4_ = SUB84(dVar6,0);
        local_268._0_8_ = dVar7;
        local_268._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        local_158 = (double)local_150;
        FUN_1448052ee(local_278,&local_150);
        local_138._8_4_ = SUB84(dVar28,0);
        local_138._0_8_ = dVar9;
        local_138._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
        local_128 = dVar8;
        FUN_1491a068c(param_3,&local_228,lVar23,0);
        local_150 = local_220;
        fStack_14c = fStack_21c;
        fStack_148 = fStack_218;
        fStack_144 = fStack_214;
        local_140 = local_228;
        uVar5 = *(undefined8 *)(lVar23 + 0x14);
        puVar24 = (undefined8 *)local_168;
        puVar25 = (undefined8 *)local_278;
        for (lVar23 = 9; uVar12 = uStack_188, lVar23 != 0; lVar23 = lVar23 + -1) {
          *puVar25 = *puVar24;
          puVar24 = puVar24 + 1;
          puVar25 = puVar25 + 1;
        }
        lVar23 = (longlong)(int)uStack_188;
        uVar19 = (int)uStack_188 + 1;
        uStack_188 = CONCAT44(uStack_188._4_4_,uVar19);
        if (uStack_188._4_4_ < uVar19) {
          FUN_149286fc2(&local_190,uVar12 & 0xffffffff);
        }
        puVar24 = (undefined8 *)(local_190 + lVar23 * 0x50);
        *puVar24 = uVar5;
        puVar25 = (undefined8 *)local_278;
        for (lVar23 = 9; puVar24 = puVar24 + 1, lVar23 != 0; lVar23 = lVar23 + -1) {
          *puVar24 = *puVar25;
          puVar25 = puVar25 + 1;
        }
        break;
      case 8:
        local_278[0] = 1;
        FUN_14919f2a0(param_3,local_168,lVar23,local_278);
        dVar28 = DAT_14c846520;
        uVar14 = DAT_14c846510._4_4_;
        uVar13 = (undefined4)DAT_14c846510;
        dVar6 = (double)uStack_160._4_4_;
        dVar8 = (double)(float)uStack_160;
        dVar7 = (double)(float)auStack_165._1_4_;
        dVar9 = (double)_local_168;
        uVar31 = (undefined4)DAT_14c846518;
        uVar12 = (ulonglong)DAT_14c846518 >> 0x20;
        uStack_160._0_4_ = (float)SUB84((double)local_158._4_4_,0);
        _local_168 = (double)(float)local_158;
        uStack_160._4_4_ = (float)(int)((ulonglong)(double)local_158._4_4_ >> 0x20);
        local_278._8_4_ = SUB84(dVar7,0);
        local_278._0_8_ = dVar9;
        local_278._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        local_268._8_4_ = SUB84(dVar6,0);
        local_268._0_8_ = dVar8;
        local_268._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        local_158 = (double)local_150;
        FUN_1448052ee(local_278,&local_150);
        local_138._4_4_ = uVar14;
        local_138._0_4_ = uVar13;
        local_138._8_4_ = uVar31;
        local_138._12_4_ = (int)uVar12;
        local_128 = dVar28;
        FUN_1491a068c(param_3,&local_228,lVar23,0);
        local_150 = local_220;
        fStack_14c = fStack_21c;
        fStack_148 = fStack_218;
        fStack_144 = fStack_214;
        local_140 = local_228;
        uVar5 = *(undefined8 *)(lVar23 + 0x14);
        puVar24 = (undefined8 *)local_168;
        puVar25 = (undefined8 *)local_278;
        for (lVar23 = 9; uVar12 = uStack_188, lVar23 != 0; lVar23 = lVar23 + -1) {
          *puVar25 = *puVar24;
          puVar24 = puVar24 + 1;
          puVar25 = puVar25 + 1;
        }
        lVar23 = (longlong)(int)uStack_188;
        uVar19 = (int)uStack_188 + 1;
        uStack_188 = CONCAT44(uStack_188._4_4_,uVar19);
        if (uStack_188._4_4_ < uVar19) {
          FUN_149286fc2(&local_190,uVar12 & 0xffffffff);
        }
        puVar24 = (undefined8 *)(local_190 + lVar23 * 0x50);
        *puVar24 = uVar5;
        puVar25 = (undefined8 *)local_278;
        for (lVar23 = 9; puVar24 = puVar24 + 1, lVar23 != 0; lVar23 = lVar23 + -1) {
          *puVar24 = *puVar25;
          puVar25 = puVar25 + 1;
        }
        break;
      case 9:
        local_278[0] = 1;
        FUN_14919f2a0(param_3,local_168,lVar23,local_278);
        dVar8 = (double)local_158._4_4_;
        dVar28 = (double)(float)local_158;
        dVar10 = (double)uStack_160._4_4_;
        dVar6 = (double)fStack_148;
        dVar7 = (double)fStack_14c;
        dVar9 = (double)local_150;
        FUN_1491a068c(param_3,local_168,lVar23,0);
        dVar17 = local_158;
        uVar12 = uStack_188;
        uVar15 = _local_168;
        uVar16 = uStack_160;
        uVar5 = *(undefined8 *)(lVar23 + 0x14);
        lVar23 = (longlong)(int)uStack_188;
        uVar19 = (int)uStack_188 + 1;
        uStack_188 = CONCAT44(uStack_188._4_4_,uVar19);
        if (uStack_188._4_4_ < uVar19) {
          FUN_149286fc2(&local_190,uVar12 & 0xffffffff);
        }
        lVar23 = lVar23 * 0x50;
        *(undefined8 *)(local_190 + lVar23) = uVar5;
        *(double *)(local_190 + 8 + lVar23) = dVar10;
        *(double *)(local_190 + 0x10 + lVar23) = dVar28;
        *(double *)(local_190 + 0x18 + lVar23) = dVar8;
        *(undefined8 *)(local_190 + 0x20 + lVar23) = uVar16;
        *(double *)(local_190 + 0x28 + lVar23) = dVar17;
        *(undefined8 *)(local_190 + 0x30 + lVar23) = uVar15;
        *(double *)(local_190 + 0x38 + lVar23) = dVar9;
        *(double *)(local_190 + 0x40 + lVar23) = dVar7;
        *(double *)(local_190 + 0x48 + lVar23) = dVar6;
      }
      lVar21 = lVar21 + 8;
    } while (local_280 != lVar21);
  }
  param_2 = local_288;
  plVar22 = (longlong *)param_3[0x6c];
  plVar26 = (longlong *)param_3[0x6d];
  if (plVar26 == (longlong *)0x0) {
    if (plVar22 != (longlong *)0x0) {
LAB_14928534e:
      bVar11 = true;
      plVar26 = (longlong *)0x0;
LAB_149285352:
      lVar20 = (**(code **)(*plVar22 + 0x28))(plVar22);
      if (lVar20 == 0) {
LAB_149285383:
        lVar20 = 0;
      }
      else {
        lVar21 = FUN_1411e6332();
        if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x38) < *(int *)(lVar21 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar21 + 0x38) * 8) != lVar21 + 0x30)) goto LAB_149285383;
      }
      if (!bVar11) {
        LOCK();
        plVar22 = plVar26 + 1;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)*plVar22 == 0) {
          (**(code **)*plVar26)(plVar26);
          LOCK();
          piVar1 = (int *)((longlong)plVar26 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar26 + 0x10))(plVar26);
          }
        }
      }
      if (lVar20 == 0) {
        plVar22 = (longlong *)param_3[0x6c];
        plVar26 = (longlong *)param_3[0x6d];
        if (plVar26 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
          UNLOCK();
        }
        lVar20 = (**(code **)(*plVar22 + 0x28))();
        if (lVar20 == 0) {
LAB_1492853f4:
          lVar20 = 0;
        }
        else {
          lVar21 = FUN_144a74fb4();
          if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x38) < *(int *)(lVar21 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar21 + 0x38) * 8) != lVar21 + 0x30)) goto LAB_1492853f4;
        }
        if (plVar26 != (longlong *)0x0) {
          LOCK();
          plVar22 = plVar26 + 1;
          *(int *)plVar22 = (int)*plVar22 + -1;
          UNLOCK();
          if ((int)*plVar22 == 0) {
            (**(code **)*plVar26)(plVar26);
            LOCK();
            piVar1 = (int *)((longlong)plVar26 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar26 + 0x10))(plVar26);
            }
          }
        }
        if (lVar20 != 0) {
          FUN_14073a052(&local_180,lVar20);
          local_170 = (uint)*(byte *)(lVar20 + 0xc5f);
        }
      }
      else {
        plVar22 = (longlong *)FUN_1491a88a2(lVar20);
        if (plVar22 != param_3) {
          FUN_14448b00a(lVar20);
          lVar21 = *(longlong *)(lVar20 + 0xb0);
          if (lVar21 == 0) {
            lVar21 = FUN_1448abda6(lVar20);
            if (lVar21 == 0) goto LAB_149285cda;
            lVar21 = *(longlong *)(lVar20 + 0xb0);
            if (lVar21 == 0) {
              lVar21 = FUN_1448abda6(lVar20);
            }
          }
          bVar4 = *(byte *)(lVar21 + 0x152);
          if ((bVar4 != 1) && ((6 < bVar4 || ((0x68U >> (bVar4 & 0x1f) & 1) == 0)))) {
            FUN_1491ac418(lVar20,param_3);
          }
          goto LAB_149285cda;
        }
        (**(code **)(*param_3 + 0x420))(param_3,local_168);
        (**(code **)(*param_3 + 0x2b0))(param_3,1);
        (**(code **)(*param_3 + 0x420))(param_3,local_278);
        if ((float)uStack_160 == (float)local_278._8_4_) {
          cVar18 = FUN_14000b9e1(_local_168,local_278._0_8_);
          if (cVar18 == '\0') goto LAB_149285df6;
        }
        else {
LAB_149285df6:
          (**(code **)(*param_3 + 0x418))(param_3);
          if ((longlong)(int)(float)uStack_160 != 0) {
            lVar21 = (longlong)(int)(float)uStack_160 << 3;
            lVar20 = (longlong)_local_168;
            do {
              (**(code **)(*param_3 + 0x410))(param_3,lVar20,1);
              lVar20 = lVar20 + 8;
              lVar21 = lVar21 + -8;
            } while (lVar21 != 0);
          }
        }
        if (local_278._0_8_ != 0) {
          FUN_1400020a8();
        }
        if (_local_168 != 0.0) {
          FUN_1400020a8();
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar26 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar26)(plVar26);
      LOCK();
      piVar1 = (int *)((longlong)plVar26 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
      }
    }
    if (plVar22 != (longlong *)0x0) {
      plVar22 = (longlong *)param_3[0x6c];
      plVar26 = (longlong *)param_3[0x6d];
      if (plVar26 == (longlong *)0x0) goto LAB_14928534e;
      LOCK();
      *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
      UNLOCK();
      bVar11 = false;
      goto LAB_149285352;
    }
  }
LAB_149285cda:
  if (local_210 != 0) {
    FUN_1400020a8();
  }
LAB_149285cec:
  *(byte *)(param_2 + 0x20) = *(byte *)(param_2 + 0x20) & 0xfe;
  FUN_149287056(param_2,&local_200);
  FUN_149285ef0(&local_200);
  if ((local_e0 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149285ef0 FUN_149285ef0 body=145 status=ok
// SIG undefined FUN_149285ef0(void)

void FUN_149285ef0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbd4558;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
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
    return;
  }
  return;
}



// FUNCTION 149285f82 FUN_149285f82 body=38 status=ok
// SIG undefined FUN_149285f82(void)

undefined8 FUN_149285f82(undefined8 param_1,int param_2)

{
  FUN_149285ef0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149285fa8 FUN_149285fa8 body=3528 status=ok
// SIG undefined FUN_149285fa8(void)

void FUN_149285fa8(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 uVar12;
  char cVar13;
  int iVar14;
  longlong *plVar15;
  bool bVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 uVar20;
  longlong *plVar21;
  longlong lVar22;
  LPCRITICAL_SECTION lpCriticalSection;
  float *pfVar23;
  float *pfVar24;
  undefined1 auStack_228 [32];
  undefined4 *local_208;
  undefined1 local_200;
  undefined1 local_1f8;
  undefined1 local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  uint local_1d4;
  LPCRITICAL_SECTION local_1d0;
  longlong local_1c8;
  undefined1 local_1c0 [4];
  undefined8 local_1bc;
  undefined8 local_1b4;
  undefined1 local_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  uint local_194;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float local_154;
  float fStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (param_2 == (longlong *)0x0) goto LAB_149286054;
  lVar17 = FUN_1401242c6();
  if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar17 + 0x38)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8) !=
      lVar17 + 0x30)) goto LAB_149286054;
  lVar17 = param_2[0x6c];
  plVar21 = (longlong *)param_2[0x6d];
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
    UNLOCK();
    LOCK();
    plVar15 = plVar21 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  if (lVar17 == 0) goto LAB_149286054;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_2 + 0x4a);
  EnterCriticalSection(lpCriticalSection);
  local_1e0 = param_2[0x5f];
  if (local_1e0 != 0) {
    uStack_180 = 0;
    uStack_17c = 0;
    local_184 = CONCAT31(local_184._1_3_,4);
    iVar14 = *(int *)(param_1 + 0x18);
    local_1e8 = param_1;
    local_1d0 = lpCriticalSection;
    if ((longlong)iVar14 != 0) {
      lVar17 = *(longlong *)(param_1 + 0x10);
      pfVar24 = (float *)(lVar17 + 0xc);
      do {
        uStack_180 = (undefined4)*(undefined8 *)(pfVar24 + -3);
        uStack_17c = (undefined4)((ulonglong)*(undefined8 *)(pfVar24 + -3) >> 0x20);
        cVar13 = *(char *)(pfVar24 + -1);
        if (cVar13 == '\x02') {
          pfVar23 = pfVar24;
LAB_149286d55:
          local_208 = (undefined4 *)CONCAT71(local_208._1_7_,1);
          FUN_1491a00ee(param_2,&local_184,pfVar23,0);
        }
        else {
          if (cVar13 == '\x01') {
            FUN_1491db37e(&local_178);
LAB_149286d47:
            pfVar23 = &local_178;
            goto LAB_149286d55;
          }
          if (cVar13 == '\0') {
            local_190 = CONCAT44(uStack_180,local_184);
            local_188 = uStack_17c;
            FUN_1491db620(local_1e0,&local_178,&local_190);
            goto LAB_149286d47;
          }
        }
        pfVar23 = pfVar24 + 3;
        pfVar24 = pfVar24 + 6;
      } while (pfVar23 != (float *)(lVar17 + (longlong)iVar14 * 0x18));
    }
    if ((longlong)*(int *)(local_1e8 + 0x28) != 0) {
      lVar17 = *(longlong *)(local_1e8 + 0x20);
      lVar22 = (longlong)*(int *)(local_1e8 + 0x28) * 0xc;
      do {
        lVar18 = (**(code **)(*param_2 + 0x3b0))(param_2,lVar17);
        if (lVar18 != 0) {
          local_1a8 = CONCAT31(local_1a8._1_3_,2);
          uStack_1a4 = 0x1ff;
          uStack_1a0 = 0x7f7fffff;
          uStack_19c = 0;
          uStack_198 = 0;
          local_194 = local_194 & 0xffffff00;
          local_178 = *(float *)(lVar17 + 8);
          local_104 = 0;
          uStack_100 = 0;
          uStack_fc = 0;
          local_114 = 0;
          uStack_110 = 0;
          uStack_10c = 0;
          uStack_108 = 0;
          local_124 = 0;
          uStack_120 = 0;
          uStack_11c = 0;
          uStack_118 = 0;
          local_134 = 0;
          uStack_130 = 0;
          uStack_12c = 0;
          uStack_128 = 0;
          local_144 = 0;
          uStack_140 = 0;
          uStack_13c = 0;
          uStack_138 = 0;
          local_154 = 0.0;
          fStack_150 = 0.0;
          uStack_14c = 0;
          uStack_148 = 0;
          fStack_164 = 0.0;
          fStack_160 = 0.0;
          fStack_15c = 0.0;
          fStack_158 = 0.0;
          fStack_174 = 0.0;
          fStack_170 = 0.0;
          fStack_16c = 0.0;
          fStack_168 = 0.0;
          uStack_f8 = 1;
          local_1f0 = 0;
          local_1f8 = 0;
          local_200 = 0;
          local_208 = &local_1a8;
          (**(code **)(*param_2 + 0x3d8))(param_2,lVar17,&local_178,1);
        }
        lVar17 = lVar17 + 0xc;
        lVar22 = lVar22 + -0xc;
      } while (lVar22 != 0);
    }
    lVar17 = local_1e8;
    if ((longlong)*(int *)(local_1e8 + 0x38) != 0) {
      lVar22 = *(longlong *)(local_1e8 + 0x30);
      lVar18 = (longlong)*(int *)(local_1e8 + 0x38) * 0xc;
      do {
        lVar19 = (**(code **)(*param_2 + 0x3b0))(param_2);
        if (lVar19 != 0) {
          local_1a8 = CONCAT31(local_1a8._1_3_,2);
          uStack_1a4 = 0x1ff;
          uStack_1a0 = 0x7f7fffff;
          uStack_19c = 0;
          uStack_198 = 0;
          local_194 = local_194 & 0xffffff00;
          uVar12 = *(undefined1 *)(lVar22 + 8);
          memset(&local_178,0,0x84);
          lVar17 = local_1e8;
          uStack_f8 = CONCAT31(uStack_f8._1_3_,1);
          local_178 = (float)CONCAT31(local_178._1_3_,uVar12);
          local_1f0 = 0;
          local_1f8 = 0;
          local_200 = 0;
          local_208 = &local_1a8;
          (**(code **)(*param_2 + 0x3d8))(param_2,lVar22,&local_178,1);
        }
        lVar22 = lVar22 + 0xc;
        lVar18 = lVar18 + -0xc;
      } while (lVar18 != 0);
    }
    uVar20 = 0;
    if ((longlong)*(int *)(lVar17 + 0x48) != 0) {
      lVar22 = *(longlong *)(local_1e8 + 0x40);
      lVar17 = (longlong)*(int *)(lVar17 + 0x48) * 0xc;
      do {
        lVar18 = (**(code **)(*param_2 + 0x3b0))(param_2,lVar22);
        uVar20 = 0;
        if (lVar18 != 0) {
          local_1a8 = CONCAT31(local_1a8._1_3_,2);
          uStack_1a4 = 0x1ff;
          uStack_1a0 = 0x7f7fffff;
          uStack_19c = 0;
          uStack_198 = 0;
          local_194 = local_194 & 0xffffff00;
          local_178 = *(float *)(lVar22 + 8);
          local_104 = 0;
          uStack_100 = 0;
          uStack_fc = 0;
          local_114 = 0;
          uStack_110 = 0;
          uStack_10c = 0;
          uStack_108 = 0;
          local_124 = 0;
          uStack_120 = 0;
          uStack_11c = 0;
          uStack_118 = 0;
          local_134 = 0;
          uStack_130 = 0;
          uStack_12c = 0;
          uStack_128 = 0;
          local_144 = 0;
          uStack_140 = 0;
          uStack_13c = 0;
          uStack_138 = 0;
          local_154 = 0.0;
          fStack_150 = 0.0;
          uStack_14c = 0;
          uStack_148 = 0;
          fStack_164 = 0.0;
          fStack_160 = 0.0;
          fStack_15c = 0.0;
          fStack_158 = 0.0;
          fStack_174 = 0.0;
          fStack_170 = 0.0;
          fStack_16c = 0.0;
          fStack_168 = 0.0;
          uStack_f8 = 1;
          local_1f0 = 0;
          local_1f8 = 0;
          local_200 = 0;
          local_208 = &local_1a8;
          uVar20 = (**(code **)(*param_2 + 0x3d8))(param_2,lVar22,&local_178,1);
        }
        lVar22 = lVar22 + 0xc;
        lVar17 = lVar17 + -0xc;
      } while (lVar17 != 0);
    }
    uVar20 = CONCAT71((int7)((ulonglong)uVar20 >> 8),1);
    do {
      lVar17 = local_1e8;
      local_1d4 = (uint)uVar20;
      if ((longlong)*(int *)(local_1e8 + 0x68) != 0) {
        lVar22 = *(longlong *)(local_1e8 + 0x60);
        lVar18 = (longlong)*(int *)(local_1e8 + 0x68) * 0x18;
        do {
          lVar19 = (**(code **)(*param_2 + 0x3b0))(param_2,lVar22);
          if (lVar19 != 0) {
            fStack_174 = (float)*(double *)(lVar22 + 0x10);
            local_178 = (float)*(double *)(lVar22 + 8);
            local_1a8 = CONCAT31(local_1a8._1_3_,2);
            uStack_1a4 = 0x1ff;
            uStack_1a0 = 0x7f7fffff;
            uStack_19c = 0;
            uStack_198 = 0;
            local_194 = local_194 & 0xffffff00;
            uStack_fc = 0;
            uStack_10c = 0;
            uStack_108 = 0;
            local_104 = 0;
            uStack_100 = 0;
            uStack_11c = 0;
            uStack_118 = 0;
            local_114 = 0;
            uStack_110 = 0;
            uStack_12c = 0;
            uStack_128 = 0;
            local_124 = 0;
            uStack_120 = 0;
            uStack_13c = 0;
            uStack_138 = 0;
            local_134 = 0;
            uStack_130 = 0;
            uStack_14c = 0;
            uStack_148 = 0;
            local_144 = 0;
            uStack_140 = 0;
            fStack_15c = 0.0;
            fStack_158 = 0.0;
            local_154 = 0.0;
            fStack_150 = 0.0;
            fStack_16c = 0.0;
            fStack_168 = 0.0;
            fStack_164 = 0.0;
            fStack_160 = 0.0;
            uStack_f8 = 1;
            fStack_170 = 0.0;
            local_1f0 = 0;
            local_1f8 = 0;
            local_200 = 0;
            local_208 = &local_1a8;
            (**(code **)(*param_2 + 0x3d8))(param_2,lVar22,&local_178,1);
          }
          lVar22 = lVar22 + 0x18;
          lVar18 = lVar18 + -0x18;
        } while (lVar18 != 0);
      }
      if ((longlong)*(int *)(lVar17 + 0x58) != 0) {
        lVar22 = *(longlong *)(lVar17 + 0x50);
        lVar18 = (longlong)*(int *)(lVar17 + 0x58) << 5;
        do {
          lVar19 = (**(code **)(*param_2 + 0x3b0))(param_2,lVar22);
          if (lVar19 != 0) {
            if (*(char *)(lVar19 + 0x211) == '\x06') {
              FUN_149203d86(local_1e0,lVar19,lVar22 + 8,0);
            }
            local_1a8 = CONCAT31(local_1a8._1_3_,2);
            uStack_1a4 = 0x1ff;
            uStack_1a0 = 0x7f7fffff;
            uStack_19c = 0;
            uStack_198 = 0;
            local_194 = local_194 & 0xffffff00;
            fStack_170 = (float)*(double *)(lVar22 + 0x18);
            fStack_174 = (float)*(double *)(lVar22 + 0x10);
            local_178 = (float)*(double *)(lVar22 + 8);
            uStack_fc = 0;
            uStack_10c = 0;
            uStack_108 = 0;
            local_104 = 0;
            uStack_100 = 0;
            uStack_11c = 0;
            uStack_118 = 0;
            local_114 = 0;
            uStack_110 = 0;
            uStack_12c = 0;
            uStack_128 = 0;
            local_124 = 0;
            uStack_120 = 0;
            uStack_13c = 0;
            uStack_138 = 0;
            local_134 = 0;
            uStack_130 = 0;
            uStack_14c = 0;
            uStack_148 = 0;
            local_144 = 0;
            uStack_140 = 0;
            fStack_15c = 0.0;
            fStack_158 = 0.0;
            local_154 = 0.0;
            fStack_150 = 0.0;
            fStack_16c = 0.0;
            fStack_168 = 0.0;
            fStack_164 = 0.0;
            fStack_160 = 0.0;
            uStack_f8 = 1;
            local_1f0 = 0;
            local_1f8 = 0;
            local_200 = 0;
            local_208 = &local_1a8;
            (**(code **)(*param_2 + 0x3d8))(param_2,lVar22,&local_178);
          }
          lVar22 = lVar22 + 0x20;
          lVar18 = lVar18 + -0x20;
        } while (lVar18 != 0);
      }
      if ((longlong)*(int *)(lVar17 + 0x78) != 0) {
        lVar22 = *(longlong *)(local_1e8 + 0x70);
        lVar17 = (longlong)*(int *)(lVar17 + 0x78) * 0x50;
        do {
          lVar18 = (**(code **)(*param_2 + 0x3b0))(param_2,lVar22);
          if (lVar18 != 0) {
            cVar13 = *(char *)(lVar18 + 0x211);
            if (cVar13 == '\t') {
              dVar3 = *(double *)(lVar22 + 8);
              dVar4 = *(double *)(lVar22 + 0x10);
              dVar5 = *(double *)(lVar22 + 0x18);
              dVar6 = *(double *)(lVar22 + 0x38);
              dVar7 = *(double *)(lVar22 + 0x20);
              dVar8 = *(double *)(lVar22 + 0x40);
              dVar9 = *(double *)(lVar22 + 0x28);
              dVar10 = *(double *)(lVar22 + 0x48);
              dVar11 = *(double *)(lVar22 + 0x30);
              local_1a8 = SUB84(dVar11,0);
              uStack_1a4 = (undefined4)((ulonglong)dVar11 >> 0x20);
              uStack_1a0 = SUB84(dVar7,0);
              uStack_19c = (undefined4)((ulonglong)dVar7 >> 0x20);
              uStack_198 = SUB84(dVar9,0);
              local_194 = (uint)((ulonglong)dVar9 >> 0x20);
              FUN_149203d86(local_1e0,lVar18,&local_1a8,0);
              local_1c0[0] = 2;
              local_1bc = 0x7f7fffff000001ff;
              local_1b4 = 0;
              local_178 = (float)dVar7;
              fStack_174 = (float)dVar9;
              local_1ac = 0;
              fStack_170 = (float)dVar11;
              local_154 = 0.0;
              fStack_150 = 0.0;
              fStack_16c = (float)dVar3;
              fStack_168 = (float)dVar4;
              fStack_164 = (float)dVar5;
              fStack_160 = (float)dVar6;
              fStack_15c = (float)dVar8;
              fStack_158 = (float)dVar10;
            }
            else if (cVar13 == '\b') {
              FUN_144a7484c(lVar22 + 0x20,&local_178);
              dVar6 = (double)CONCAT44(fStack_174,local_178);
              dVar7 = (double)CONCAT44(fStack_16c,fStack_170);
              dVar8 = (double)CONCAT44(fStack_164,fStack_168);
              dVar9 = (double)CONCAT44(fStack_15c,fStack_160);
              dVar3 = *(double *)(lVar22 + 8);
              dVar4 = *(double *)(lVar22 + 0x10);
              dVar5 = *(double *)(lVar22 + 0x18);
              local_1a8 = (undefined4)*(undefined8 *)(lVar22 + 0x30);
              uStack_1a4 = (undefined4)((ulonglong)*(undefined8 *)(lVar22 + 0x30) >> 0x20);
              uStack_1a0 = (undefined4)*(undefined8 *)(lVar22 + 0x20);
              uStack_19c = (undefined4)((ulonglong)*(undefined8 *)(lVar22 + 0x20) >> 0x20);
              uStack_198 = (undefined4)*(undefined8 *)(lVar22 + 0x28);
              local_194 = (uint)((ulonglong)*(undefined8 *)(lVar22 + 0x28) >> 0x20);
              FUN_149203d86(local_1e0,lVar18,&local_1a8,0);
              local_1c0[0] = 2;
              local_1bc = 0x7f7fffff000001ff;
              local_1b4 = 0;
              local_1ac = 0;
              fStack_158 = 0.0;
              local_154 = 0.0;
              fStack_150 = 0.0;
              fStack_15c = 0.0;
              local_178 = (float)dVar6;
              fStack_174 = (float)dVar7;
              fStack_170 = (float)dVar8;
              fStack_16c = (float)dVar9;
              fStack_168 = (float)dVar3;
              fStack_164 = (float)dVar4;
              fStack_160 = (float)dVar5;
            }
            else {
              if (cVar13 != '\a') goto LAB_149286689;
              local_1c8 = lVar22 + 0x20;
              local_1a8 = (undefined4)*(undefined8 *)(lVar22 + 0x30);
              uStack_1a4 = (undefined4)((ulonglong)*(undefined8 *)(lVar22 + 0x30) >> 0x20);
              uStack_1a0 = (undefined4)*(undefined8 *)(lVar22 + 0x20);
              uStack_19c = (undefined4)((ulonglong)*(undefined8 *)(lVar22 + 0x20) >> 0x20);
              uStack_198 = (undefined4)*(undefined8 *)(lVar22 + 0x28);
              local_194 = (uint)((ulonglong)*(undefined8 *)(lVar22 + 0x28) >> 0x20);
              FUN_149203d86(local_1e0,lVar18,&local_1a8,0);
              local_1c0[0] = 2;
              local_1bc = 0x7f7fffff000001ff;
              local_1b4 = 0;
              local_1ac = 0;
              FUN_144a7484c(local_1c8,&local_178);
              dVar3 = (double)CONCAT44(fStack_15c,fStack_160);
              local_154 = (float)*(double *)(lVar22 + 0x40);
              fStack_150 = (float)*(double *)(lVar22 + 0x48);
              fStack_15c = 0.0;
              local_178 = (float)(double)CONCAT44(fStack_174,local_178);
              fStack_174 = (float)(double)CONCAT44(fStack_16c,fStack_170);
              fStack_170 = (float)(double)CONCAT44(fStack_164,fStack_168);
              fStack_16c = (float)dVar3;
              fStack_168 = (float)*(double *)(lVar22 + 8);
              fStack_164 = (float)*(double *)(lVar22 + 0x10);
              fStack_160 = (float)*(double *)(lVar22 + 0x18);
              fStack_158 = (float)*(double *)(lVar22 + 0x38);
            }
            uStack_f8 = 1;
            uStack_fc = 0;
            uStack_100 = 0;
            local_104 = 0;
            uStack_108 = 0;
            uStack_10c = 0;
            uStack_110 = 0;
            local_114 = 0;
            uStack_118 = 0;
            uStack_11c = 0;
            uStack_120 = 0;
            local_124 = 0;
            uStack_128 = 0;
            uStack_12c = 0;
            uStack_130 = 0;
            local_134 = 0;
            uStack_138 = 0;
            uStack_13c = 0;
            uStack_140 = 0;
            local_144 = 0;
            uStack_148 = 0;
            uStack_14c = 0;
            local_1f0 = 0;
            local_1f8 = 0;
            local_200 = 0;
            local_208 = (undefined4 *)local_1c0;
            (**(code **)(*param_2 + 0x3d8))(param_2,lVar22,&local_178);
          }
LAB_149286689:
          lVar22 = lVar22 + 0x50;
          lVar17 = lVar17 + -0x50;
        } while (lVar17 != 0);
      }
      uVar20 = 0;
      lpCriticalSection = local_1d0;
      param_1 = local_1e8;
    } while ((local_1d4 & 1) != 0);
  }
  (**(code **)(*param_2 + 0x2c0))(param_2);
  LeaveCriticalSection(lpCriticalSection);
  FUN_149212b98(param_2);
  plVar21 = (longlong *)param_2[0x6c];
  plVar15 = (longlong *)param_2[0x6d];
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  plVar21 = (longlong *)(**(code **)(*plVar21 + 0x28))();
  if (plVar21 == (longlong *)0x0) {
LAB_149286aec:
    plVar21 = (longlong *)0x0;
  }
  else {
    lVar17 = FUN_144a74fb4();
    if ((*(int *)(plVar21[2] + 0x38) < *(int *)(lVar17 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar21[2] + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8) !=
        lVar17 + 0x30)) goto LAB_149286aec;
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar15 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if ((plVar21 != (longlong *)0x0) && ((*(byte *)((longlong)plVar21 + 0x9c) & 1) != 0)) {
    FUN_14348c31c(plVar21,1);
    FUN_14348c31e(plVar21,1);
    if ((*(byte *)((longlong)plVar21 + 0xc72) & 0x40) == 0) {
      FUN_1407396de(plVar21,0,0);
      (**(code **)(*plVar21 + 0xaf8))(plVar21,0);
      FUN_1447a916a(plVar21);
      FUN_1447a91cc(plVar21,0,0);
      (**(code **)(*plVar21 + 0xb38))(plVar21);
      FUN_1448c69c8(plVar21);
      FUN_1448c6f34(plVar21);
    }
    if ((longlong)*(int *)(param_1 + 0x88) != 0) {
      lVar17 = *(longlong *)(param_1 + 0x80);
      lVar22 = (longlong)*(int *)(param_1 + 0x88) << 4;
      do {
        FUN_140092336(lVar17);
        lVar17 = lVar17 + 0x10;
        lVar22 = lVar22 + -0x10;
      } while (lVar22 != 0);
    }
    if (*(uint *)(param_1 + 0x90) != (uint)*(byte *)((longlong)plVar21 + 0xc5f)) {
      FUN_14073397e(plVar21,*(uint *)(param_1 + 0x90),1);
    }
  }
  plVar21 = (longlong *)param_2[0x6c];
  plVar15 = (longlong *)param_2[0x6d];
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  lVar17 = (**(code **)(*plVar21 + 0x28))();
  if (lVar17 == 0) {
LAB_149286b6d:
    bVar16 = true;
  }
  else {
    lVar22 = FUN_1411e6332();
    if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x38) < *(int *)(lVar22 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) + (longlong)*(int *)(lVar22 + 0x38) * 8
         ) != lVar22 + 0x30)) goto LAB_149286b6d;
    bVar16 = false;
  }
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar21 = plVar15 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if (bVar16) {
    plVar21 = (longlong *)param_2[0x6c];
    plVar15 = (longlong *)param_2[0x6d];
    if (plVar15 == (longlong *)0x0) {
      (**(code **)(*plVar21 + 8))();
    }
    else {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      (**(code **)(*plVar21 + 8))();
      LOCK();
      plVar21 = plVar15 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
  }
LAB_149286054:
  if ((local_f0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149286d72 FUN_149286d72 body=147 status=ok
// SIG undefined FUN_149286d72(void)

void FUN_149286d72(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149286e06 FUN_149286e06 body=147 status=ok
// SIG undefined FUN_149286e06(void)

void FUN_149286e06(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149286e9a FUN_149286e9a body=147 status=ok
// SIG undefined FUN_149286e9a(void)

void FUN_149286e9a(longlong param_1,int param_2)

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



// FUNCTION 149286f2e FUN_149286f2e body=147 status=ok
// SIG undefined FUN_149286f2e(void)

void FUN_149286f2e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149286fc2 FUN_149286fc2 body=147 status=ok
// SIG undefined FUN_149286fc2(void)

void FUN_149286fc2(longlong param_1,int param_2)

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



// FUNCTION 149287056 FUN_149287056 body=418 status=ok
// SIG undefined FUN_149287056(void)

void FUN_149287056(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0x98,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 4);
  *(byte *)(param_1 + 4) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  *param_1 = &PTR_FUN_14bbd4558;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  param_1[2] = 0;
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined8 *)(param_2 + 0x18) = 0;
  param_1[4] = 0;
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined8 *)(param_2 + 0x28) = 0;
  param_1[6] = 0;
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined8 *)(param_2 + 0x38) = 0;
  param_1[8] = 0;
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined8 *)(param_2 + 0x48) = 0;
  param_1[10] = 0;
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined8 *)(param_2 + 0x58) = 0;
  param_1[0xc] = 0;
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined8 *)(param_2 + 0x68) = 0;
  param_1[0xe] = 0;
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined8 *)(param_2 + 0x78) = 0;
  param_1[0x10] = 0;
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x90);
  return;
}



// FUNCTION 1492871fa FUN_1492871fa body=29 status=ok
// SIG undefined FUN_1492871fa(void)

undefined8 FUN_1492871fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149287232 FUN_149287232 body=29 status=ok
// SIG undefined FUN_149287232(void)

undefined8 FUN_149287232(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149287250 FUN_149287250 body=141 status=ok
// SIG undefined FUN_149287250(void)

void FUN_149287250(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar1 = FUN_144a74fb4();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       (lVar1 = *(longlong *)(param_2 + 0xae8), lVar1 != 0)) {
      lVar2 = FUN_145b9ee98();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        FUN_1491f9d0e(lVar1,*(undefined4 *)(param_1 + 0xc));
        lVar1 = FUN_1491f925c(lVar1);
        if (lVar1 == 0) {
          FUN_149212d76(param_2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1492872de FUN_1492872de body=69 status=ok
// SIG undefined FUN_1492872de(void)

undefined1 FUN_1492872de(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  if (*param_1 != 0) {
    lVar1 = FUN_145c01f0e(param_2 + 0x60);
    if (lVar1 != 0) {
      uVar2 = FUN_145c01f0e(param_2 + 0x60);
      uVar3 = FUN_1468ff1d8(uVar2,*param_1);
      return uVar3;
    }
  }
  return 1;
}



// FUNCTION 149287324 FUN_149287324 body=142 status=ok
// SIG undefined FUN_149287324(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149287324(void)

{
  _DAT_14cc0ae28 = &PTR_FUN_14bbd45a0;
  DAT_14cc0ae50 = 0;
  _DAT_14cc0ae58 = 0;
  DAT_14cc0ae30 = 0;
  _DAT_14cc0ae38 = 0;
  _DAT_14cc0ae5c = 0xffffffff00000080;
  DAT_14cc0ae64 = 0;
  DAT_14cc0ae70 = 0;
  DAT_14cc0ae78 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cc0ae80);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cc0ae80,4000);
  DAT_14cc0aea8 = 0;
  DAT_14cc0aeb0 = 0;
  DAT_14cc0aeb8 = 0;
  return;
}



// FUNCTION 1492873b2 FUN_1492873b2 body=114 status=ok
// SIG undefined FUN_1492873b2(void)

void FUN_1492873b2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bbd45a0;
  FUN_149287778();
  plVar3 = (longlong *)param_1[0x12];
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
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_149287cf0(param_1 + 1);
  return;
}



// FUNCTION 149287424 FUN_149287424 body=38 status=ok
// SIG undefined FUN_149287424(void)

undefined8 FUN_149287424(undefined8 param_1,int param_2)

{
  FUN_1492873b2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149287450 FUN_149287450 body=33 status=ok
// SIG undefined FUN_149287450(void)

void FUN_149287450(undefined8 param_1)

{
  FUN_149287778();
  FUN_140f93338(&DAT_14c9647b8,param_1);
  return;
}



// FUNCTION 1492874a2 FUN_1492874a2 body=215 status=ok
// SIG undefined FUN_1492874a2(void)

void FUN_1492874a2(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x80) = param_2;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  FUN_14928757a(param_1 + 0x88,&local_48);
  plVar7 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x3c);
  FUN_1492875da(param_1 + 8,*(undefined8 *)(param_1 + 0x80));
  iVar5 = *(int *)(param_1 + 0x10);
  iVar6 = *(int *)(param_1 + 0x3c);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if ((iVar4 < iVar3) && (iVar5 == iVar6)) {
    FUN_140f93338(&DAT_14c9647b8,param_1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14928757a FUN_14928757a body=96 status=ok
// SIG undefined FUN_14928757a(void)

undefined8 * FUN_14928757a(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    plVar2 = (longlong *)param_2[1];
    plVar3 = (longlong *)param_1[1];
    if (plVar2 != plVar3) {
      param_2[1] = 0;
      param_1[1] = plVar2;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 1492875da FUN_1492875da body=132 status=ok
// SIG undefined FUN_1492875da(void)

void FUN_1492875da(longlong *param_1,ulonglong param_2)

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
          FUN_14928765e(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *param_1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14928765e FUN_14928765e body=90 status=ok
// SIG undefined FUN_14928765e(void)

void FUN_14928765e(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_1492876b8();
  return;
}



// FUNCTION 1492876b8 FUN_1492876b8 body=78 status=ok
// SIG undefined FUN_1492876b8(void)

void FUN_1492876b8(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
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
  FUN_149287706(param_1,param_2);
  return;
}



// FUNCTION 149287706 FUN_149287706 body=114 status=ok
// SIG undefined FUN_149287706(void)

void FUN_149287706(longlong *param_1,int param_2)

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
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
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



// FUNCTION 149287778 FUN_149287778 body=188 status=ok
// SIG undefined FUN_149287778(void)

void FUN_149287778(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x80) = 0;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_14928757a(param_1 + 0x88,&local_38);
  plVar5 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x3c);
  FUN_149287836(param_1 + 8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (iVar4 < iVar3) {
    FUN_140f93338(&DAT_14c9647b8,param_1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149287836 FUN_149287836 body=63 status=ok
// SIG undefined FUN_149287836(void)

void FUN_149287836(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1492879ba(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_149287b12(param_1);
    return;
  }
  FUN_149287876(param_1);
  FUN_1492879ba(param_1);
  return;
}



// FUNCTION 149287876 FUN_149287876 body=322 status=ok
// SIG undefined FUN_149287876(void)

void FUN_149287876(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 1492879ba FUN_1492879ba body=343 status=ok
// SIG undefined FUN_1492879ba(void)

void FUN_1492879ba(longlong *param_1)

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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
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
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149287b12 FUN_149287b12 body=477 status=ok
// SIG undefined FUN_149287b12(void)

void FUN_149287b12(longlong *param_1)

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
        lVar6 = (longlong)iVar4 * 0x20;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x1c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x18 + lVar6) =
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



// FUNCTION 149287cf0 FUN_149287cf0 body=52 status=ok
// SIG undefined FUN_149287cf0(void)

void FUN_149287cf0(longlong *param_1)

{
  FUN_1492879ba();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149287d24 FUN_149287d24 body=89 status=ok
// SIG undefined FUN_149287d24(void)

void FUN_149287d24(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  DAT_14cc0aeb0 = *param_1;
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = DAT_14cc0aeb8;
  if (DAT_14cc0aeb8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cc0aeb8 + 1;
    DAT_14cc0aeb8 = (longlong *)lVar3;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    lVar3 = (longlong)DAT_14cc0aeb8;
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      lVar3 = (longlong)DAT_14cc0aeb8;
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000149287d72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  DAT_14cc0aeb8 = (longlong *)lVar3;
  return;
}



// FUNCTION 149287d7e FUN_149287d7e body=9 status=ok
// SIG undefined FUN_149287d7e(void)

void FUN_149287d7e(longlong param_1)

{
  FUN_149287da6(param_1 + 0x10);
  return;
}



// FUNCTION 149287d88 FUN_149287d88 body=29 status=ok
// SIG undefined FUN_149287d88(void)

undefined8 FUN_149287d88(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149287da6 FUN_149287da6 body=75 status=ok
// SIG undefined FUN_149287da6(void)

void FUN_149287da6(longlong *param_1)

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



// FUNCTION 149287df2 FUN_149287df2 body=258 status=ok
// SIG undefined FUN_149287df2(void)

void FUN_149287df2(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = *param_2;
  plVar5 = (longlong *)param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  local_48 = plVar5;
  if (local_50 == 0) {
    FUN_1492874a2(&DAT_14cc0ae28,param_1);
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cc0ae80);
    iVar4 = DAT_14cc0ae64;
    iVar3 = DAT_14cc0ae38;
    DAT_14cc0aea8 = param_1;
    FUN_14928757a(&DAT_14cc0aeb0,&local_50);
    local_40 = &DAT_14cc0aea8;
    local_38 = &DAT_14cc0aeb0;
    FUN_149287ef6(local_2c);
    if (iVar3 == iVar4) {
      FUN_140f9708a(&DAT_14c9647b8,&DAT_14cc0ae28);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cc0ae80);
    plVar5 = local_48;
  }
  if (plVar5 != (longlong *)0x0) {
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
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149287ef6 FUN_149287ef6 body=366 status=ok
// SIG undefined FUN_149287ef6(void)

undefined4 * FUN_149287ef6(undefined4 *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  ulonglong uVar9;
  int iVar10;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [2];
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_149288066(local_40);
  puVar1 = (ulonglong *)param_2[1];
  uVar9 = *(ulonglong *)*param_2;
  *local_38 = uVar9;
  local_38[1] = *puVar1;
  uVar2 = puVar1[1];
  local_38[2] = uVar2;
  if (uVar2 != 0) {
    LOCK();
    *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1;
    UNLOCK();
    uVar9 = *local_38;
  }
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar6 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  cVar5 = FUN_149288174(uVar6,local_38,&local_44);
  uVar4 = local_44;
  if (cVar5 == '\0') {
    uVar7 = DAT_14cc0ae38 - DAT_14cc0ae64;
    iVar10 = 1;
    if (3 < uVar7) {
      uVar9 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar10 <= DAT_14cc0ae78)) {
      uVar6 = DAT_14cc0ae78 - 1U & uVar6;
      *(uint *)((longlong)local_38 + 0x1c) = uVar6;
      puVar8 = DAT_14cc0ae70;
      if (DAT_14cc0ae70 == (undefined *)0x0) {
        puVar8 = &DAT_14cc0ae68;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)(puVar8 + ((longlong)DAT_14cc0ae78 - 1U & (longlong)(int)uVar6) * 4);
      puVar8 = DAT_14cc0ae70;
      if (DAT_14cc0ae70 == (undefined *)0x0) {
        puVar8 = &DAT_14cc0ae68;
      }
      *(undefined4 *)(puVar8 + ((longlong)DAT_14cc0ae78 - 1U & (longlong)(int)uVar6) * 4) = local_44
      ;
    }
    else {
      DAT_14cc0ae78 = iVar10;
      FUN_149287b12(&DAT_14cc0ae30);
    }
  }
  *param_1 = uVar4;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149288066 FUN_149288066 body=269 status=ok
// SIG undefined FUN_149288066(void)

int * FUN_149288066(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cc0ae60;
  iVar4 = DAT_14cc0ae38;
  if (DAT_14cc0ae64 == 0) {
    iVar2 = DAT_14cc0ae38 + 1;
    bVar7 = DAT_14cc0ae3c == DAT_14cc0ae38;
    DAT_14cc0ae38 = iVar2;
    if (bVar7) {
      FUN_1447711aa(&DAT_14cc0ae30,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cc0ae40,1);
    puVar3 = DAT_14cc0ae50;
    if (DAT_14cc0ae50 == (undefined *)0x0) {
      puVar3 = &DAT_14cc0ae40;
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
    lVar6 = (longlong)DAT_14cc0ae60;
    DAT_14cc0ae60 = *(int *)(DAT_14cc0ae30 + 4 + lVar6 * 0x20);
    DAT_14cc0ae64 = DAT_14cc0ae64 + -1;
    iVar4 = iVar2;
    if (DAT_14cc0ae64 != 0) {
      *(undefined4 *)(DAT_14cc0ae30 + (longlong)DAT_14cc0ae60 * 0x20) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cc0ae40;
  if (DAT_14cc0ae50 != (undefined *)0x0) {
    puVar3 = DAT_14cc0ae50;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x20 + DAT_14cc0ae30;
  return param_1;
}



// FUNCTION 149288174 FUN_149288174 body=205 status=ok
// SIG undefined FUN_149288174(void)

undefined8 FUN_149288174(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined *puVar9;
  int iVar10;
  
  if ((DAT_14cc0ae38 - DAT_14cc0ae64 != 1) && (DAT_14cc0ae38 != DAT_14cc0ae64)) {
    puVar9 = &DAT_14cc0ae68;
    if (DAT_14cc0ae70 != (undefined *)0x0) {
      puVar9 = DAT_14cc0ae70;
    }
    iVar10 = *(int *)(puVar9 + (ulonglong)(DAT_14cc0ae78 - 1U & param_1) * 4);
    if (iVar10 != -1) {
      do {
        puVar3 = (undefined4 *)(DAT_14cc0ae30 + (longlong)iVar10 * 0x20);
        if (*(longlong *)(DAT_14cc0ae30 + (longlong)iVar10 * 0x20) == *param_2) {
          plVar4 = *(longlong **)(puVar3 + 4);
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
          lVar7 = *param_2;
          uVar5 = *(undefined4 *)((longlong)param_2 + 4);
          lVar8 = param_2[1];
          uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(longlong *)(puVar3 + 4) = param_2[2];
          *puVar3 = (int)lVar7;
          puVar3[1] = uVar5;
          puVar3[2] = (int)lVar8;
          puVar3[3] = uVar6;
          FUN_149287706(&DAT_14cc0ae30,*param_3);
          *param_3 = iVar10;
          return 1;
        }
        iVar10 = puVar3[6];
      } while (iVar10 != -1);
    }
  }
  return 0;
}



// FUNCTION 149288242 FUN_149288242 body=243 status=ok
// SIG undefined FUN_149288242(void)

undefined8 * FUN_149288242(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(uint *)(param_3 + 1);
  uVar7 = (ulonglong)uVar1;
  lVar2 = *param_3;
  uVar8 = 0;
  iVar4 = (int)((ulonglong)param_2 >> 0x20);
  if (0 < (int)uVar1) {
    do {
      uVar5 = (int)(uVar7 >> 1) + (int)uVar8;
      lVar10 = (ulonglong)uVar5 * 0x10;
      iVar6 = *(int *)(lVar2 + lVar10) - (int)param_2;
      if (iVar6 == 0) {
        iVar6 = *(int *)(lVar2 + 4 + lVar10) - iVar4;
      }
      uVar9 = (uint)uVar7;
      if (iVar6 < 0) {
        uVar8 = (ulonglong)(uVar5 + (uVar9 & 1));
      }
      uVar7 = uVar7 >> 1;
    } while (1 < uVar9);
  }
  local_38 = param_2;
  if ((int)uVar8 < (int)uVar1) {
    lVar10 = uVar8 * 0x10;
    iVar6 = (int)param_2 - *(int *)(lVar2 + lVar10);
    if (iVar6 == 0) {
      iVar6 = iVar4 - *(int *)(lVar2 + 4 + lVar10);
    }
    if ((-1 < iVar6) && (puVar3 = (undefined8 *)(lVar2 + lVar10 + 8), puVar3 != (undefined8 *)0x0))
    {
      *param_1 = *puVar3;
      goto LAB_1492882ea;
    }
  }
  FUN_14633cd78(param_1);
  FUN_14633cd78(local_40);
  FUN_149288336(param_3,&local_38,local_40);
LAB_1492882ea:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 149288336 FUN_149288336 body=241 status=ok
// SIG undefined FUN_149288336(void)

void FUN_149288336(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = *param_1;
  if ((int)uVar1 < 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar6 = (ulonglong)uVar1;
    do {
      uVar7 = (int)(uVar6 >> 1) + uVar8;
      lVar9 = (ulonglong)uVar7 * 0x10;
      iVar4 = *(int *)(lVar3 + lVar9) - *param_2;
      if (iVar4 == 0) {
        iVar4 = *(int *)(lVar3 + 4 + lVar9) - param_2[1];
      }
      uVar5 = (uint)uVar6;
      if (iVar4 < 0) {
        uVar8 = uVar7 + (uVar5 & 1);
      }
      uVar6 = uVar6 >> 1;
    } while (1 < uVar5);
    if ((int)uVar8 < (int)uVar1) {
      lVar9 = (ulonglong)uVar8 * 0x10;
      iVar4 = *param_2 - *(int *)(lVar3 + lVar9);
      if (iVar4 == 0) {
        iVar4 = param_2[1] - *(int *)(lVar3 + 4 + lVar9);
      }
      if (-1 < iVar4) {
        puVar2 = (undefined8 *)(lVar3 + lVar9);
        goto LAB_1492883f9;
      }
    }
  }
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar1) {
    FUN_149288428(param_1,uVar1);
    lVar3 = *param_1;
  }
  lVar9 = (ulonglong)uVar8 * 0x10;
  memmove((void *)(lVar3 + lVar9 + 0x10),(void *)(lVar3 + lVar9),(ulonglong)(uVar1 - uVar8) << 4);
  puVar2 = (undefined8 *)(lVar9 + *param_1);
LAB_1492883f9:
  *puVar2 = *(undefined8 *)param_2;
  puVar2[1] = *param_3;
  return;
}



// FUNCTION 149288428 FUN_149288428 body=132 status=ok
// SIG undefined FUN_149288428(void)

void FUN_149288428(longlong param_1,int param_2)

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



// FUNCTION 1492884ae FUN_1492884ae body=60 status=ok
// SIG undefined FUN_1492884ae(void)

void FUN_1492884ae(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  
  bVar1 = *(byte *)(param_1 + 1);
  if ((bVar1 & 1) != 0) {
    puVar2 = param_1;
    if ((bVar1 & 2) == 0) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(byte *)(param_1 + 1) = bVar1 & 0xfe;
    (**(code **)*puVar2)(puVar2,0);
    if ((*(byte *)(param_1 + 1) & 2) == 0) {
      FUN_1400020a8(*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1492884ea FUN_1492884ea body=60 status=ok
// SIG undefined FUN_1492884ea(void)

void FUN_1492884ea(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  
  bVar1 = *(byte *)(param_1 + 3);
  if ((bVar1 & 1) != 0) {
    puVar2 = param_1;
    if ((bVar1 & 2) == 0) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(byte *)(param_1 + 3) = bVar1 & 0xfe;
    (**(code **)*puVar2)(puVar2,0);
    if ((*(byte *)(param_1 + 3) & 2) == 0) {
      FUN_1400020a8(*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 149288526 FUN_149288526 body=60 status=ok
// SIG undefined FUN_149288526(void)

void FUN_149288526(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  
  bVar1 = *(byte *)(param_1 + 2);
  if ((bVar1 & 1) != 0) {
    puVar2 = param_1;
    if ((bVar1 & 2) == 0) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(byte *)(param_1 + 2) = bVar1 & 0xfe;
    (**(code **)*puVar2)(puVar2,0);
    if ((*(byte *)(param_1 + 2) & 2) == 0) {
      FUN_1400020a8(*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 149288562 FUN_149288562 body=60 status=ok
// SIG undefined FUN_149288562(void)

void FUN_149288562(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  
  bVar1 = *(byte *)(param_1 + 9);
  if ((bVar1 & 1) != 0) {
    puVar2 = param_1;
    if ((bVar1 & 2) == 0) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(byte *)(param_1 + 9) = bVar1 & 0xfe;
    (**(code **)*puVar2)(puVar2,0);
    if ((*(byte *)(param_1 + 9) & 2) == 0) {
      FUN_1400020a8(*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14928859e FUN_14928859e body=38 status=ok
// SIG undefined FUN_14928859e(void)

undefined8 FUN_14928859e(undefined8 param_1,int param_2)

{
  FUN_149217000();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928862e FUN_14928862e body=59 status=ok
// SIG undefined FUN_14928862e(void)

undefined8 FUN_14928862e(longlong *param_1)

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



// FUNCTION 149288750 FUN_149288750 body=59 status=ok
// SIG undefined FUN_149288750(void)

undefined8 FUN_149288750(longlong *param_1)

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



// FUNCTION 149288826 FUN_149288826 body=63 status=ok
// SIG undefined FUN_149288826(void)

undefined1 FUN_149288826(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14920a2b8(param_2,param_3);
    param_3 = param_3 + 0x110;
    param_2 = param_2 + 0x110;
  }
  return 1;
}



// FUNCTION 14928888e FUN_14928888e body=59 status=ok
// SIG undefined FUN_14928888e(void)

undefined8 FUN_14928888e(longlong *param_1)

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



// FUNCTION 1492888da FUN_1492888da body=40 status=ok
// SIG undefined FUN_1492888da(void)

void FUN_1492888da(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x110) == '\x01') {
    FUN_14920a250(param_2);
    *(undefined1 *)(param_2 + 0x110) = 0;
  }
  return;
}



// FUNCTION 1492889a0 FUN_1492889a0 body=42 status=ok
// SIG undefined FUN_1492889a0(void)

void FUN_1492889a0(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_145a3ec70(param_2);
  return;
}



// FUNCTION 1492889e0 FUN_1492889e0 body=54 status=ok
// SIG undefined FUN_1492889e0(void)

undefined1 FUN_1492889e0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149288b0a(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 149288a3e FUN_149288a3e body=59 status=ok
// SIG undefined FUN_149288a3e(void)

undefined8 FUN_149288a3e(longlong *param_1)

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



// FUNCTION 149288a84 FUN_149288a84 body=55 status=ok
// SIG undefined FUN_149288a84(void)

void FUN_149288a84(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_145a3ec70(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 149288b0a FUN_149288b0a body=122 status=ok
// SIG undefined FUN_149288b0a(void)

longlong FUN_149288b0a(longlong param_1,longlong param_2)

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
    FUN_149288b84(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 149288b84 FUN_149288b84 body=201 status=ok
// SIG undefined FUN_149288b84(void)

undefined8 * FUN_149288b84(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145a3eca8(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_149288c4e(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 8;
        puVar6 = puVar6 + 8;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 149288c4e FUN_149288c4e body=103 status=ok
// SIG undefined FUN_149288c4e(void)

undefined8 * FUN_149288c4e(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  return param_1;
}



// FUNCTION 149288cb6 FUN_149288cb6 body=132 status=ok
// SIG undefined FUN_149288cb6(void)

void FUN_149288cb6(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 7;
  *(undefined1 *)((longlong)param_2 + 0xc) = 0;
  memset(param_2 + 2,0,0x8c);
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x14;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x20;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x2c;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x38;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 149288d3a FUN_149288d3a body=132 status=ok
// SIG undefined FUN_149288d3a(void)

void FUN_149288d3a(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 7;
  *(undefined1 *)((longlong)param_2 + 0xc) = 0;
  memset(param_2 + 2,0,0x8c);
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x14;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x20;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x2c;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x38;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 149288dd6 FUN_149288dd6 body=68 status=ok
// SIG undefined FUN_149288dd6(void)

undefined8 FUN_149288dd6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x220);
      lVar1 = lVar1 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149288e42 FUN_149288e42 body=59 status=ok
// SIG undefined FUN_149288e42(void)

undefined8 FUN_149288e42(longlong *param_1)

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



// FUNCTION 149288f66 FUN_149288f66 body=87 status=ok
// SIG undefined FUN_149288f66(void)

undefined1 FUN_149288f66(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14928909c(param_2,param_3);
    FUN_140816cc4(param_2 + 0x10,param_3 + 0x10);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 149288fe6 FUN_149288fe6 body=59 status=ok
// SIG undefined FUN_149288fe6(void)

undefined8 FUN_149288fe6(longlong *param_1)

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



// FUNCTION 14928902c FUN_14928902c body=34 status=ok
// SIG undefined FUN_14928902c(void)

void FUN_14928902c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_145ce10f6(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 14928909c FUN_14928909c body=88 status=ok
// SIG undefined FUN_14928909c(void)

undefined8 * FUN_14928909c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1492890f4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x220);
      }
    }
  }
  return param_1;
}



// FUNCTION 1492890f4 FUN_1492890f4 body=114 status=ok
// SIG undefined FUN_1492890f4(void)

void FUN_1492890f4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x220,0x10);
    iVar2 = (int)(uVar1 / 0x220);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x220,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 149289168 FUN_149289168 body=61 status=ok
// SIG undefined FUN_149289168(void)

void FUN_149289168(undefined8 param_1,undefined8 *param_2)

{
  FUN_141094b14(param_2);
  *param_2 = &PTR_FUN_14bbd5090;
  *(undefined1 (*) [16])(param_2 + 0xe) = (undefined1  [16])0x0;
  *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x84) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x11) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x13) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x9c) = 0xffffffff;
  return;
}



// FUNCTION 1492891bc FUN_1492891bc body=115 status=ok
// SIG undefined FUN_1492891bc(void)

undefined8 FUN_1492891bc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
    do {
      uVar1 = *(undefined4 *)(param_3 + -100);
      uVar2 = *(undefined4 *)(param_3 + -0x60);
      uVar3 = *(undefined4 *)(param_3 + -0x5c);
      *(undefined4 *)(param_2 + -0x68) = *(undefined4 *)(param_3 + -0x68);
      *(undefined4 *)(param_2 + -100) = uVar1;
      *(undefined4 *)(param_2 + -0x60) = uVar2;
      *(undefined4 *)(param_2 + -0x5c) = uVar3;
      FUN_1490e0b30(param_2 + -0x58,param_3 + -0x58);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_14921c4cc(param_2,param_3);
      uVar5 = *(undefined8 *)(param_3 + 0x18);
      uVar1 = *(undefined4 *)(param_3 + 0x20);
      uVar2 = *(undefined4 *)(param_3 + 0x24);
      uVar3 = *(undefined4 *)(param_3 + 0x28);
      uVar4 = *(undefined4 *)(param_3 + 0x2c);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 0x18) = uVar5;
      *(undefined4 *)(param_2 + 0x20) = uVar1;
      *(undefined4 *)(param_2 + 0x24) = uVar2;
      *(undefined4 *)(param_2 + 0x28) = uVar3;
      *(undefined4 *)(param_2 + 0x2c) = uVar4;
      param_3 = param_3 + 0xa0;
      param_2 = param_2 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149289258 FUN_149289258 body=59 status=ok
// SIG undefined FUN_149289258(void)

undefined8 FUN_149289258(longlong *param_1)

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



// FUNCTION 1492892a4 FUN_1492892a4 body=40 status=ok
// SIG undefined FUN_1492892a4(void)

void FUN_1492892a4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_145907464(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 149289342 FUN_149289342 body=115 status=ok
// SIG undefined FUN_149289342(void)

undefined8 FUN_149289342(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
    do {
      uVar1 = *(undefined4 *)(param_3 + -100);
      uVar2 = *(undefined4 *)(param_3 + -0x60);
      uVar3 = *(undefined4 *)(param_3 + -0x5c);
      *(undefined4 *)(param_2 + -0x68) = *(undefined4 *)(param_3 + -0x68);
      *(undefined4 *)(param_2 + -100) = uVar1;
      *(undefined4 *)(param_2 + -0x60) = uVar2;
      *(undefined4 *)(param_2 + -0x5c) = uVar3;
      FUN_1490e0b30(param_2 + -0x58,param_3 + -0x58);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_14921c4cc(param_2,param_3);
      uVar5 = *(undefined8 *)(param_3 + 0x18);
      uVar1 = *(undefined4 *)(param_3 + 0x20);
      uVar2 = *(undefined4 *)(param_3 + 0x24);
      uVar3 = *(undefined4 *)(param_3 + 0x28);
      uVar4 = *(undefined4 *)(param_3 + 0x2c);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 0x18) = uVar5;
      *(undefined4 *)(param_2 + 0x20) = uVar1;
      *(undefined4 *)(param_2 + 0x24) = uVar2;
      *(undefined4 *)(param_2 + 0x28) = uVar3;
      *(undefined4 *)(param_2 + 0x2c) = uVar4;
      param_3 = param_3 + 0xa0;
      param_2 = param_2 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1492893de FUN_1492893de body=59 status=ok
// SIG undefined FUN_1492893de(void)

undefined8 FUN_1492893de(longlong *param_1)

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



// FUNCTION 14928942a FUN_14928942a body=40 status=ok
// SIG undefined FUN_14928942a(void)

void FUN_14928942a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_145907464(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 1492894c0 FUN_1492894c0 body=115 status=ok
// SIG undefined FUN_1492894c0(void)

undefined8 FUN_1492894c0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
    do {
      uVar1 = *(undefined4 *)(param_3 + -100);
      uVar2 = *(undefined4 *)(param_3 + -0x60);
      uVar3 = *(undefined4 *)(param_3 + -0x5c);
      *(undefined4 *)(param_2 + -0x68) = *(undefined4 *)(param_3 + -0x68);
      *(undefined4 *)(param_2 + -100) = uVar1;
      *(undefined4 *)(param_2 + -0x60) = uVar2;
      *(undefined4 *)(param_2 + -0x5c) = uVar3;
      FUN_1490e0b30(param_2 + -0x58,param_3 + -0x58);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_14921c4cc(param_2,param_3);
      uVar5 = *(undefined8 *)(param_3 + 0x18);
      uVar1 = *(undefined4 *)(param_3 + 0x20);
      uVar2 = *(undefined4 *)(param_3 + 0x24);
      uVar3 = *(undefined4 *)(param_3 + 0x28);
      uVar4 = *(undefined4 *)(param_3 + 0x2c);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 0x18) = uVar5;
      *(undefined4 *)(param_2 + 0x20) = uVar1;
      *(undefined4 *)(param_2 + 0x24) = uVar2;
      *(undefined4 *)(param_2 + 0x28) = uVar3;
      *(undefined4 *)(param_2 + 0x2c) = uVar4;
      param_3 = param_3 + 0xa0;
      param_2 = param_2 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14928955c FUN_14928955c body=59 status=ok
// SIG undefined FUN_14928955c(void)

undefined8 FUN_14928955c(longlong *param_1)

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



// FUNCTION 1492895a8 FUN_1492895a8 body=40 status=ok
// SIG undefined FUN_1492895a8(void)

void FUN_1492895a8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa0) == '\x01') {
    FUN_145907464(param_2);
    *(undefined1 *)(param_2 + 0xa0) = 0;
  }
  return;
}



// FUNCTION 149289622 FUN_149289622 body=264 status=ok
// SIG undefined FUN_149289622(void)

undefined8 FUN_149289622(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x30);
    uVar6 = 0;
    lVar7 = 0;
    while (cVar2 = FUN_1400063ec(lVar4 + uVar6,param_2), cVar2 == '\0') {
      lVar7 = lVar7 + 0x100000000;
      uVar6 = uVar6 + 8;
      if ((longlong)iVar3 * 8 == uVar6) {
        return 0;
      }
    }
    if ((int)(~uVar6 >> 3) != 0) {
      lVar7 = (lVar7 >> 0x20) * 0x10;
      lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 8 + lVar7);
      if (lVar4 != 0) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + lVar7);
        lVar5 = 0;
        while (((*(int *)(lVar1 + 0x10 + lVar5) != (int)param_3[2] ||
                (*(longlong *)(lVar1 + 8 + lVar5) != param_3[1])) ||
               (*(longlong *)(lVar1 + lVar5) != *param_3))) {
          lVar5 = lVar5 + 0x14;
          if (lVar4 * 0x14 == lVar5) {
            return 0;
          }
        }
        iVar3 = (int)(lVar5 >> 2) * -0x33333333;
        if (iVar3 != -1) {
          return *(undefined8 *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x20) + lVar7) + (longlong)iVar3 * 0x10);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1492897fe FUN_1492897fe body=59 status=ok
// SIG undefined FUN_1492897fe(void)

undefined8 FUN_1492897fe(longlong *param_1)

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



// FUNCTION 149289998 FUN_149289998 body=71 status=ok
// SIG undefined FUN_149289998(void)

undefined8 FUN_149289998(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xa8);
      lVar1 = lVar1 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149289a08 FUN_149289a08 body=59 status=ok
// SIG undefined FUN_149289a08(void)

undefined8 FUN_149289a08(longlong *param_1)

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



// FUNCTION 149289ab4 FUN_149289ab4 body=29 status=ok
// SIG undefined FUN_149289ab4(void)

undefined8 FUN_149289ab4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149289bca FUN_149289bca body=71 status=ok
// SIG undefined FUN_149289bca(void)

undefined8 FUN_149289bca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xa8);
      lVar1 = lVar1 + 0xb0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149289c3a FUN_149289c3a body=59 status=ok
// SIG undefined FUN_149289c3a(void)

undefined8 FUN_149289c3a(longlong *param_1)

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



// FUNCTION 149289dec FUN_149289dec body=124 status=ok
// SIG undefined FUN_149289dec(void)

undefined1 FUN_149289dec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0x30);
      uVar2 = *(undefined4 *)(param_3 + -0x2c);
      uVar3 = *(undefined4 *)(param_3 + -0x28);
      uVar4 = *(undefined4 *)(param_3 + -0x24);
      uVar5 = *(undefined4 *)(param_3 + -0x20);
      uVar6 = *(undefined4 *)(param_3 + -0x1c);
      uVar7 = *(undefined4 *)(param_3 + -0x18);
      uVar8 = *(undefined4 *)(param_3 + -0x14);
      uVar9 = *(undefined4 *)(param_3 + -0xc);
      uVar10 = *(undefined4 *)(param_3 + -8);
      uVar11 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar9;
      *(undefined4 *)(param_2 + -8) = uVar10;
      *(undefined4 *)(param_2 + -4) = uVar11;
      *(undefined4 *)(param_2 + -0x20) = uVar5;
      *(undefined4 *)(param_2 + -0x1c) = uVar6;
      *(undefined4 *)(param_2 + -0x18) = uVar7;
      *(undefined4 *)(param_2 + -0x14) = uVar8;
      *(undefined4 *)(param_2 + -0x30) = uVar1;
      *(undefined4 *)(param_2 + -0x2c) = uVar2;
      *(undefined4 *)(param_2 + -0x28) = uVar3;
      *(undefined4 *)(param_2 + -0x24) = uVar4;
      FUN_14786d4e6(param_2,param_3);
      puVar13 = (undefined8 *)(param_3 + 0x10);
      puVar14 = (undefined8 *)(param_2 + 0x10);
      for (lVar12 = 0xe; lVar12 != 0; lVar12 = lVar12 + -1) {
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      }
      param_3 = param_3 + 0xb8;
      param_2 = param_2 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149289e90 FUN_149289e90 body=59 status=ok
// SIG undefined FUN_149289e90(void)

undefined8 FUN_149289e90(longlong *param_1)

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



// FUNCTION 149289edc FUN_149289edc body=54 status=ok
// SIG undefined FUN_149289edc(void)

void FUN_149289edc(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x17) == '\x01') {
    *param_2 = &PTR_FUN_14bbd5ae0;
    if (param_2[7] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x17) = 0;
  }
  return;
}



// FUNCTION 149289f60 FUN_149289f60 body=57 status=ok
// SIG undefined FUN_149289f60(void)

undefined8 * FUN_149289f60(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbd5ae0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149289f9a FUN_149289f9a body=29 status=ok
// SIG undefined FUN_149289f9a(void)

undefined8 FUN_149289f9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149289fb8 FUN_149289fb8 body=170 status=ok
// SIG undefined FUN_149289fb8(void)

void FUN_149289fb8(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bbd5ec0;
  puVar2 = &DAT_14c964b40;
  puVar3 = param_2;
  for (lVar1 = 9; puVar3 = puVar3 + 1, lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
  }
  puVar3 = &DAT_14c846480;
  puVar2 = param_2 + 10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
  }
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined4 *)(param_2 + 0x19) = 0;
  *(undefined4 *)((longlong)param_2 + 0xcc) = 0x3ff00000;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0x3ff0000000000000;
  param_2[0x1f] = 0x3ff0000000000000;
  param_2[0x20] = 0x3ff0000000000000;
  param_2[0x21] = 0;
  puVar3 = &DAT_14c846480;
  puVar2 = param_2 + 0x22;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
  }
  param_2[0x2e] = 0x101010101010101;
  *(undefined2 *)(param_2 + 0x2f) = 1;
  return;
}



// FUNCTION 14928a062 FUN_14928a062 body=170 status=ok
// SIG undefined FUN_14928a062(void)

void FUN_14928a062(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bbd5ec0;
  puVar2 = &DAT_14c964b40;
  puVar3 = param_2;
  for (lVar1 = 9; puVar3 = puVar3 + 1, lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
  }
  puVar3 = &DAT_14c846480;
  puVar2 = param_2 + 10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
  }
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined4 *)(param_2 + 0x19) = 0;
  *(undefined4 *)((longlong)param_2 + 0xcc) = 0x3ff00000;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0x3ff0000000000000;
  param_2[0x1f] = 0x3ff0000000000000;
  param_2[0x20] = 0x3ff0000000000000;
  param_2[0x21] = 0;
  puVar3 = &DAT_14c846480;
  puVar2 = param_2 + 0x22;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
  }
  param_2[0x2e] = 0x101010101010101;
  *(undefined2 *)(param_2 + 0x2f) = 1;
  return;
}



// FUNCTION 14928a130 FUN_14928a130 body=71 status=ok
// SIG undefined FUN_14928a130(void)

undefined8 FUN_14928a130(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 8;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0x172);
      lVar1 = lVar1 + 0x180;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14928a1a0 FUN_14928a1a0 body=59 status=ok
// SIG undefined FUN_14928a1a0(void)

undefined8 FUN_14928a1a0(longlong *param_1)

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



// FUNCTION 14928a24e FUN_14928a24e body=222 status=ok
// SIG undefined FUN_14928a24e(void)

void FUN_14928a24e(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bbd5ec0;
  puVar2 = &DAT_14c964b40;
  puVar3 = param_2;
  for (lVar1 = 9; puVar3 = puVar3 + 1, lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
  }
  puVar3 = &DAT_14c846480;
  puVar2 = param_2 + 10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
  }
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined4 *)(param_2 + 0x19) = 0;
  *(undefined4 *)((longlong)param_2 + 0xcc) = 0x3ff00000;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0x3ff0000000000000;
  param_2[0x1f] = 0x3ff0000000000000;
  param_2[0x20] = 0x3ff0000000000000;
  param_2[0x21] = 0;
  puVar3 = &DAT_14c846480;
  puVar2 = param_2 + 0x22;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
  }
  param_2[0x2e] = 0x101010101010101;
  *(undefined2 *)(param_2 + 0x2f) = 1;
  *param_2 = &PTR_FUN_14bb95ea0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  *(undefined4 *)(param_2 + 0x32) = 0;
  *(undefined4 *)((longlong)param_2 + 0x194) = 0;
  *(undefined4 *)(param_2 + 0x33) = 0;
  *(undefined4 *)((longlong)param_2 + 0x19c) = 0x3ff00000;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0x3ff0000000000000;
  param_2[0x39] = 0x3ff0000000000000;
  param_2[0x3a] = 0x3ff0000000000000;
  param_2[0x3b] = 0;
  return;
}



// FUNCTION 14928a32c FUN_14928a32c body=222 status=ok
// SIG undefined FUN_14928a32c(void)

void FUN_14928a32c(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bbd5ec0;
  puVar2 = &DAT_14c964b40;
  puVar3 = param_2;
  for (lVar1 = 9; puVar3 = puVar3 + 1, lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
  }
  puVar3 = &DAT_14c846480;
  puVar2 = param_2 + 10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
  }
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined4 *)(param_2 + 0x19) = 0;
  *(undefined4 *)((longlong)param_2 + 0xcc) = 0x3ff00000;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0x3ff0000000000000;
  param_2[0x1f] = 0x3ff0000000000000;
  param_2[0x20] = 0x3ff0000000000000;
  param_2[0x21] = 0;
  puVar3 = &DAT_14c846480;
  puVar2 = param_2 + 0x22;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
  }
  param_2[0x2e] = 0x101010101010101;
  *(undefined2 *)(param_2 + 0x2f) = 1;
  *param_2 = &PTR_FUN_14bb95ea0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  *(undefined4 *)(param_2 + 0x32) = 0;
  *(undefined4 *)((longlong)param_2 + 0x194) = 0;
  *(undefined4 *)(param_2 + 0x33) = 0;
  *(undefined4 *)((longlong)param_2 + 0x19c) = 0x3ff00000;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0x3ff0000000000000;
  param_2[0x39] = 0x3ff0000000000000;
  param_2[0x3a] = 0x3ff0000000000000;
  param_2[0x3b] = 0;
  return;
}



// FUNCTION 14928a42e FUN_14928a42e body=106 status=ok
// SIG undefined FUN_14928a42e(void)

undefined8 FUN_14928a42e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0x180;
    do {
      memcpy((undefined8 *)(param_2 + lVar4) + -0x2f,(undefined8 *)(param_3 + lVar4) + -0x2f,0x172);
      puVar2 = (undefined8 *)(param_3 + lVar4);
      puVar3 = (undefined8 *)(param_2 + lVar4);
      for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      lVar4 = lVar4 + 0x1e0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14928a4c0 FUN_14928a4c0 body=59 status=ok
// SIG undefined FUN_14928a4c0(void)

undefined8 FUN_14928a4c0(longlong *param_1)

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



// FUNCTION 14928a56e FUN_14928a56e body=29 status=ok
// SIG undefined FUN_14928a56e(void)

undefined8 FUN_14928a56e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928a5aa FUN_14928a5aa body=103 status=ok
// SIG undefined FUN_14928a5aa(void)

undefined8 FUN_14928a5aa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + 8 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 8 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      FUN_1490e0b30(param_2 + 0x18 + lVar6,param_3 + 0x18 + lVar6);
      *(undefined8 *)(param_2 + 0x68 + lVar6) = *(undefined8 *)(param_3 + 0x68 + lVar6);
      lVar6 = lVar6 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14928a63a FUN_14928a63a body=59 status=ok
// SIG undefined FUN_14928a63a(void)

undefined8 FUN_14928a63a(longlong *param_1)

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



// FUNCTION 14928a680 FUN_14928a680 body=32 status=ok
// SIG undefined FUN_14928a680(void)

void FUN_14928a680(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 14928a6f0 FUN_14928a6f0 body=74 status=ok
// SIG undefined FUN_14928a6f0(void)

void FUN_14928a6f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbd6280;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  *(undefined1 *)(param_2 + 0x44) = 0;
  return;
}



// FUNCTION 14928a73a FUN_14928a73a body=74 status=ok
// SIG undefined FUN_14928a73a(void)

void FUN_14928a73a(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbd6280;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0;
  param_2[0x41] = 0;
  param_2[0x42] = 0;
  param_2[0x43] = 0;
  *(undefined1 *)(param_2 + 0x44) = 0;
  return;
}



// FUNCTION 14928a7a8 FUN_14928a7a8 body=63 status=ok
// SIG undefined FUN_14928a7a8(void)

undefined1 FUN_14928a7a8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14928a958(param_2,param_3);
    param_3 = param_3 + 0x230;
    param_2 = param_2 + 0x230;
  }
  return 1;
}



// FUNCTION 14928a810 FUN_14928a810 body=59 status=ok
// SIG undefined FUN_14928a810(void)

undefined8 FUN_14928a810(longlong *param_1)

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



// FUNCTION 14928a85c FUN_14928a85c body=40 status=ok
// SIG undefined FUN_14928a85c(void)

void FUN_14928a85c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x230) == '\x01') {
    FUN_14928a8f8(param_2);
    *(undefined1 *)(param_2 + 0x230) = 0;
  }
  return;
}



// FUNCTION 14928a8d2 FUN_14928a8d2 body=38 status=ok
// SIG undefined FUN_14928a8d2(void)

undefined8 FUN_14928a8d2(undefined8 param_1,int param_2)

{
  FUN_14928a8f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928a8f8 FUN_14928a8f8 body=96 status=ok
// SIG undefined FUN_14928a8f8(void)

void FUN_14928a8f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbd6280;
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 14928a958 FUN_14928a958 body=98 status=ok
// SIG undefined FUN_14928a958(void)

longlong FUN_14928a958(longlong param_1,longlong param_2)

{
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x1f0,param_2 + 0x1f0);
  FUN_144a787a6(param_1 + 0x200,param_2 + 0x200);
  FUN_144a787a6(param_1 + 0x210,param_2 + 0x210);
  *(undefined1 *)(param_1 + 0x220) = *(undefined1 *)(param_2 + 0x220);
  return param_1;
}



// FUNCTION 14928aa60 FUN_14928aa60 body=59 status=ok
// SIG undefined FUN_14928aa60(void)

undefined8 FUN_14928aa60(longlong *param_1)

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



// FUNCTION 14928ab00 FUN_14928ab00 body=29 status=ok
// SIG undefined FUN_14928ab00(void)

undefined8 FUN_14928ab00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928ab52 FUN_14928ab52 body=229 status=ok
// SIG undefined FUN_14928ab52(void)

undefined8 FUN_14928ab52(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Src;
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
      uVar5 = *(undefined4 *)(lVar3 + 0x18);
      uVar6 = *(undefined4 *)(lVar3 + 0x1c);
      uVar7 = *(undefined4 *)(lVar3 + 0x20);
      uVar8 = *(undefined4 *)(lVar3 + 0x24);
      uVar9 = *(undefined4 *)(lVar3 + 0x28);
      uVar10 = *(undefined4 *)(lVar3 + 0x2c);
      uVar11 = *(undefined4 *)(lVar3 + 0x30);
      uVar12 = *(undefined4 *)(lVar3 + 0x34);
      uVar13 = *(undefined4 *)(lVar3 + 0x3c);
      uVar14 = *(undefined4 *)(lVar3 + 0x40);
      uVar15 = *(undefined4 *)(lVar3 + 0x44);
      lVar4 = param_2 + 0x48 + lVar16;
      *(undefined4 *)(lVar4 + -0x10) = *(undefined4 *)(lVar3 + 0x38);
      *(undefined4 *)(lVar4 + -0xc) = uVar13;
      *(undefined4 *)(lVar4 + -8) = uVar14;
      *(undefined4 *)(lVar4 + -4) = uVar15;
      *(undefined4 *)(lVar4 + -0x20) = uVar9;
      *(undefined4 *)(lVar4 + -0x1c) = uVar10;
      *(undefined4 *)(lVar4 + -0x18) = uVar11;
      *(undefined4 *)(lVar4 + -0x14) = uVar12;
      *(undefined4 *)(lVar4 + -0x30) = uVar5;
      *(undefined4 *)(lVar4 + -0x2c) = uVar6;
      *(undefined4 *)(lVar4 + -0x28) = uVar7;
      *(undefined4 *)(lVar4 + -0x24) = uVar8;
      FUN_14591e93c();
      _Src = (void *)(param_3 + 0x60 + lVar16);
      memcpy((void *)(param_2 + lVar16 + 0x60),_Src,0x98);
      FUN_1490e1992(lVar1 + 0xf8,lVar2 + 0xf8);
      FUN_145c50a48(lVar1 + 0x108,lVar2 + 0x108);
      *(undefined8 *)(param_2 + lVar16 + 0x118) = *(undefined8 *)((longlong)_Src + 0xb8);
      memcpy((void *)(lVar1 + 0x120),(void *)(lVar2 + 0x120),0xf1);
      lVar16 = lVar16 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14928ac60 FUN_14928ac60 body=59 status=ok
// SIG undefined FUN_14928ac60(void)

undefined8 FUN_14928ac60(longlong *param_1)

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



// FUNCTION 14928acac FUN_14928acac body=49 status=ok
// SIG undefined FUN_14928acac(void)

void FUN_14928acac(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14bad5830;
    FUN_140f8ceac(param_2 + 2);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 14928ad2c FUN_14928ad2c body=345 status=ok
// SIG undefined FUN_14928ad2c(void)

void FUN_14928ad2c(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14bad5830;
  param_1[2] = &PTR_FUN_14bad5c20;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 0x3f91111111111111;
  param_1[9] = 0x800;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x10;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *param_1 = &PTR_FUN_14bbd6660;
  param_1[0x34] = 0;
  param_1[0x26] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x24] = DAT_14c8464e0;
  param_1[0x25] = uVar1;
  param_1[0x29] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x27] = DAT_14c8464e0;
  param_1[0x28] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_1[0x2a] = DAT_14c8464e0;
  param_1[0x2b] = uVar1;
  param_1[0x2c] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x2d] = DAT_14c8464e0;
  param_1[0x2e] = uVar1;
  param_1[0x2f] = DAT_14c8464f0;
  param_1[0x31] = 0x3f800000;
  param_1[0x32] = 0x3f80000000000000;
  param_1[0x30] = 0x3f80000000000000;
  param_1[0x33] = 0x1000000000;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x36;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_1 + 0x42) = 1;
  return;
}



// FUNCTION 14928ae86 FUN_14928ae86 body=52 status=ok
// SIG undefined FUN_14928ae86(void)

undefined8 * FUN_14928ae86(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bad5830;
  FUN_140f8ceac(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928aef0 FUN_14928aef0 body=229 status=ok
// SIG undefined FUN_14928aef0(void)

undefined8 FUN_14928aef0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Src;
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
      uVar5 = *(undefined4 *)(lVar3 + 0x18);
      uVar6 = *(undefined4 *)(lVar3 + 0x1c);
      uVar7 = *(undefined4 *)(lVar3 + 0x20);
      uVar8 = *(undefined4 *)(lVar3 + 0x24);
      uVar9 = *(undefined4 *)(lVar3 + 0x28);
      uVar10 = *(undefined4 *)(lVar3 + 0x2c);
      uVar11 = *(undefined4 *)(lVar3 + 0x30);
      uVar12 = *(undefined4 *)(lVar3 + 0x34);
      uVar13 = *(undefined4 *)(lVar3 + 0x3c);
      uVar14 = *(undefined4 *)(lVar3 + 0x40);
      uVar15 = *(undefined4 *)(lVar3 + 0x44);
      lVar4 = param_2 + 0x48 + lVar16;
      *(undefined4 *)(lVar4 + -0x10) = *(undefined4 *)(lVar3 + 0x38);
      *(undefined4 *)(lVar4 + -0xc) = uVar13;
      *(undefined4 *)(lVar4 + -8) = uVar14;
      *(undefined4 *)(lVar4 + -4) = uVar15;
      *(undefined4 *)(lVar4 + -0x20) = uVar9;
      *(undefined4 *)(lVar4 + -0x1c) = uVar10;
      *(undefined4 *)(lVar4 + -0x18) = uVar11;
      *(undefined4 *)(lVar4 + -0x14) = uVar12;
      *(undefined4 *)(lVar4 + -0x30) = uVar5;
      *(undefined4 *)(lVar4 + -0x2c) = uVar6;
      *(undefined4 *)(lVar4 + -0x28) = uVar7;
      *(undefined4 *)(lVar4 + -0x24) = uVar8;
      FUN_14591e93c();
      _Src = (void *)(param_3 + 0x60 + lVar16);
      memcpy((void *)(param_2 + lVar16 + 0x60),_Src,0x98);
      FUN_1490e1992(lVar1 + 0xf8,lVar2 + 0xf8);
      FUN_145c50a48(lVar1 + 0x108,lVar2 + 0x108);
      *(undefined8 *)(param_2 + lVar16 + 0x118) = *(undefined8 *)((longlong)_Src + 0xb8);
      memcpy((void *)(lVar1 + 0x120),(void *)(lVar2 + 0x120),0xf1);
      lVar16 = lVar16 + 0x220;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14928affe FUN_14928affe body=59 status=ok
// SIG undefined FUN_14928affe(void)

undefined8 FUN_14928affe(longlong *param_1)

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



// FUNCTION 14928b04a FUN_14928b04a body=49 status=ok
// SIG undefined FUN_14928b04a(void)

void FUN_14928b04a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x44) == '\x01') {
    *param_2 = &PTR_FUN_14bad5830;
    FUN_140f8ceac(param_2 + 2);
    *(undefined1 *)(param_2 + 0x44) = 0;
  }
  return;
}



// FUNCTION 14928b0ca FUN_14928b0ca body=352 status=ok
// SIG undefined FUN_14928b0ca(void)

void FUN_14928b0ca(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14bad5830;
  param_1[2] = &PTR_FUN_14bad5c20;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 0x3f91111111111111;
  param_1[9] = 0x800;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x10;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *param_1 = &PTR_FUN_14bbd6840;
  param_1[0x26] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x24] = DAT_14c8464e0;
  param_1[0x25] = uVar1;
  param_1[0x29] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x27] = DAT_14c8464e0;
  param_1[0x28] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_1[0x2a] = DAT_14c8464e0;
  param_1[0x2b] = uVar1;
  param_1[0x2c] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x2d] = DAT_14c8464e0;
  param_1[0x2e] = uVar1;
  param_1[0x2f] = DAT_14c8464f0;
  param_1[0x31] = 0x3f800000;
  param_1[0x32] = 0x3f80000000000000;
  param_1[0x30] = 0x3f80000000000000;
  param_1[0x33] = 0x1000000000;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x36;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_1 + 0x34) = 1;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined1 *)(param_1 + 0x42) = 1;
  return;
}



// FUNCTION 14928b22a FUN_14928b22a body=52 status=ok
// SIG undefined FUN_14928b22a(void)

undefined8 * FUN_14928b22a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bad5830;
  FUN_140f8ceac(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928b260 FUN_14928b260 body=110 status=ok
// SIG undefined FUN_14928b260(void)

void FUN_14928b260(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bbd6aa0;
  FUN_1412ca278(param_2 + 2);
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  *(undefined4 *)(param_2 + 0x40) = 0x41200000;
  *(undefined1 **)((longlong)param_2 + 0x204) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_2 + 0x20c) = &DAT_3f8000003f800000;
  *(undefined4 *)((longlong)param_2 + 0x214) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x44;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x50) = 1;
  return;
}



// FUNCTION 14928b2ce FUN_14928b2ce body=110 status=ok
// SIG undefined FUN_14928b2ce(void)

void FUN_14928b2ce(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bbd6aa0;
  FUN_1412ca278(param_2 + 2);
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  *(undefined4 *)(param_2 + 0x40) = 0x41200000;
  *(undefined1 **)((longlong)param_2 + 0x204) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_2 + 0x20c) = &DAT_3f8000003f800000;
  *(undefined4 *)((longlong)param_2 + 0x214) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x44;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x50) = 1;
  return;
}



// FUNCTION 14928b360 FUN_14928b360 body=116 status=ok
// SIG undefined FUN_14928b360(void)

undefined8 FUN_14928b360(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x1f0;
    param_2 = param_2 + 0x1f0;
    do {
      FUN_1491c05d4(param_2 + -0x1e0,param_3 + -0x1e0);
      FUN_1444888de(param_2,param_3);
      memcpy((void *)(param_2 + 0x10),(void *)(param_3 + 0x10),0x81);
      param_3 = param_3 + 0x290;
      param_2 = param_2 + 0x290;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14928b3fc FUN_14928b3fc body=59 status=ok
// SIG undefined FUN_14928b3fc(void)

undefined8 FUN_14928b3fc(longlong *param_1)

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



// FUNCTION 14928b448 FUN_14928b448 body=66 status=ok
// SIG undefined FUN_14928b448(void)

void FUN_14928b448(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x52) == '\x01') {
    *param_2 = &PTR_FUN_14bbd6aa0;
    if (param_2[0x3e] != 0) {
      FUN_1400020a8();
    }
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x52) = 0;
  }
  return;
}



// FUNCTION 14928b4d8 FUN_14928b4d8 body=69 status=ok
// SIG undefined FUN_14928b4d8(void)

undefined8 * FUN_14928b4d8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbd6aa0;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928b552 FUN_14928b552 body=63 status=ok
// SIG undefined FUN_14928b552(void)

undefined1 FUN_14928b552(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14928b7a6(param_2,param_3);
    param_3 = param_3 + 0x300;
    param_2 = param_2 + 0x300;
  }
  return 1;
}



// FUNCTION 14928b5ba FUN_14928b5ba body=59 status=ok
// SIG undefined FUN_14928b5ba(void)

undefined8 FUN_14928b5ba(longlong *param_1)

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



// FUNCTION 14928b606 FUN_14928b606 body=40 status=ok
// SIG undefined FUN_14928b606(void)

void FUN_14928b606(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x300) == '\x01') {
    FUN_14928b766(param_2);
    *(undefined1 *)(param_2 + 0x300) = 0;
  }
  return;
}



// FUNCTION 14928b67c FUN_14928b67c body=195 status=ok
// SIG undefined FUN_14928b67c(void)

undefined8 * FUN_14928b67c(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14bbd6c80;
  FUN_1412ca278(param_1 + 2);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x41) = 0xffffffff;
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
  *(undefined4 *)(param_1 + 0x4e) = 0x41200000;
  *(undefined1 **)((longlong)param_1 + 0x274) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x27c) = &DAT_3f8000003f800000;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x52;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x5e) = 1;
  return param_1;
}



// FUNCTION 14928b740 FUN_14928b740 body=38 status=ok
// SIG undefined FUN_14928b740(void)

undefined8 FUN_14928b740(undefined8 param_1,int param_2)

{
  FUN_14928b766();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928b766 FUN_14928b766 body=64 status=ok
// SIG undefined FUN_14928b766(void)

void FUN_14928b766(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bbd6c80;
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  FUN_1401f95f4(param_1 + 0x3e);
  FUN_140f8ccfc(param_1 + 2);
  return;
}



// FUNCTION 14928b7a6 FUN_14928b7a6 body=138 status=ok
// SIG undefined FUN_14928b7a6(void)

longlong FUN_14928b7a6(longlong param_1,longlong param_2)

{
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  FUN_1491c4070(param_1 + 0x1f0,param_2 + 0x1f0);
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_2 + 0x200);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
  FUN_1459a7e20(param_1 + 0x210,param_2 + 0x210);
  FUN_1444888de(param_1 + 0x260,param_2 + 0x260);
  memcpy((void *)(param_1 + 0x270),(void *)(param_2 + 0x270),0x81);
  return param_1;
}



// FUNCTION 14928b832 FUN_14928b832 body=52 status=ok
// SIG undefined FUN_14928b832(void)

void FUN_14928b832(longlong *param_1)

{
  FUN_14928b866();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14928b866 FUN_14928b866 body=89 status=ok
// SIG undefined FUN_14928b866(void)

void FUN_14928b866(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14928b8c0 FUN_14928b8c0 body=167 status=ok
// SIG undefined FUN_14928b8c0(void)

void FUN_14928b8c0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbd6e60;
  *(undefined8 *)((longlong)param_2 + 0x234) = 0;
  uVar1 = DAT_14c8464e8;
  param_2[0x41] = DAT_14c8464e0;
  param_2[0x42] = uVar1;
  param_2[0x43] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0x3e] = DAT_14c8464e0;
  param_2[0x3f] = uVar1;
  param_2[0x40] = DAT_14c8464f0;
  param_2[0x44] = 0x3f800000;
  param_2[0x45] = 0x3f80000000000000;
  *(undefined4 *)(param_2 + 0x46) = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 0x48;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_2 + 0x54) = 1;
  return;
}



// FUNCTION 14928b968 FUN_14928b968 body=167 status=ok
// SIG undefined FUN_14928b968(void)

void FUN_14928b968(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbd6e60;
  *(undefined8 *)((longlong)param_2 + 0x234) = 0;
  uVar1 = DAT_14c8464e8;
  param_2[0x41] = DAT_14c8464e0;
  param_2[0x42] = uVar1;
  param_2[0x43] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0x3e] = DAT_14c8464e0;
  param_2[0x3f] = uVar1;
  param_2[0x40] = DAT_14c8464f0;
  param_2[0x44] = 0x3f800000;
  param_2[0x45] = 0x3f80000000000000;
  *(undefined4 *)(param_2 + 0x46) = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 0x48;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_2 + 0x54) = 1;
  return;
}



// FUNCTION 14928ba34 FUN_14928ba34 body=110 status=ok
// SIG undefined FUN_14928ba34(void)

undefined8 FUN_14928ba34(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      memcpy((void *)(param_2 + 0x1f0 + lVar1),(void *)(param_3 + 0x1f0 + lVar1),0xb1);
      lVar1 = lVar1 + 0x2b0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14928baca FUN_14928baca body=59 status=ok
// SIG undefined FUN_14928baca(void)

undefined8 FUN_14928baca(longlong *param_1)

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



// FUNCTION 14928bb16 FUN_14928bb16 body=49 status=ok
// SIG undefined FUN_14928bb16(void)

void FUN_14928bb16(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x56) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x56) = 0;
  }
  return;
}



// FUNCTION 14928bb96 FUN_14928bb96 body=52 status=ok
// SIG undefined FUN_14928bb96(void)

undefined8 * FUN_14928bb96(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928bbcc FUN_14928bbcc body=174 status=ok
// SIG undefined FUN_14928bbcc(void)

void FUN_14928bbcc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbd7050;
  uVar1 = DAT_14c8464e8;
  param_2[0x41] = DAT_14c8464e0;
  param_2[0x42] = uVar1;
  param_2[0x43] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0x3e] = DAT_14c8464e0;
  param_2[0x3f] = uVar1;
  param_2[0x40] = DAT_14c8464f0;
  param_2[0x44] = 0x3f800000;
  param_2[0x45] = 0x3f80000000000000;
  *(undefined4 *)(param_2 + 0x46) = 0;
  *(undefined1 *)((longlong)param_2 + 0x234) = 1;
  param_2[0x47] = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 0x48;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_2 + 0x54) = 1;
  return;
}



// FUNCTION 14928bc7a FUN_14928bc7a body=174 status=ok
// SIG undefined FUN_14928bc7a(void)

void FUN_14928bc7a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbd7050;
  uVar1 = DAT_14c8464e8;
  param_2[0x41] = DAT_14c8464e0;
  param_2[0x42] = uVar1;
  param_2[0x43] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0x3e] = DAT_14c8464e0;
  param_2[0x3f] = uVar1;
  param_2[0x40] = DAT_14c8464f0;
  param_2[0x44] = 0x3f800000;
  param_2[0x45] = 0x3f80000000000000;
  *(undefined4 *)(param_2 + 0x46) = 0;
  *(undefined1 *)((longlong)param_2 + 0x234) = 1;
  param_2[0x47] = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_2 + 0x48;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_2 + 0x54) = 1;
  return;
}



// FUNCTION 14928bd4c FUN_14928bd4c body=110 status=ok
// SIG undefined FUN_14928bd4c(void)

undefined8 FUN_14928bd4c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      memcpy((void *)(param_2 + 0x1f0 + lVar1),(void *)(param_3 + 0x1f0 + lVar1),0xb1);
      lVar1 = lVar1 + 0x2b0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14928bde2 FUN_14928bde2 body=59 status=ok
// SIG undefined FUN_14928bde2(void)

undefined8 FUN_14928bde2(longlong *param_1)

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



// FUNCTION 14928be2e FUN_14928be2e body=49 status=ok
// SIG undefined FUN_14928be2e(void)

void FUN_14928be2e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x56) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x56) = 0;
  }
  return;
}



// FUNCTION 14928beae FUN_14928beae body=52 status=ok
// SIG undefined FUN_14928beae(void)

undefined8 * FUN_14928beae(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928bee4 FUN_14928bee4 body=121 status=ok
// SIG undefined FUN_14928bee4(void)

void FUN_14928bee4(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbd7240;
  *(undefined4 *)(param_2 + 0x43) = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0x3f800000;
  param_2[0x41] = 0x3f80000000000000;
  param_2[0x42] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x44;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x50) = 1;
  return;
}



// FUNCTION 14928bf5e FUN_14928bf5e body=121 status=ok
// SIG undefined FUN_14928bf5e(void)

void FUN_14928bf5e(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbd7240;
  *(undefined4 *)(param_2 + 0x43) = 0;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0x3f800000;
  param_2[0x41] = 0x3f80000000000000;
  param_2[0x42] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x44;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x50) = 1;
  return;
}



// FUNCTION 14928bffc FUN_14928bffc body=116 status=ok
// SIG undefined FUN_14928bffc(void)

undefined8 FUN_14928bffc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x1f0;
    param_2 = param_2 + 0x1f0;
    do {
      FUN_1491c05d4(param_2 + -0x1e0,param_3 + -0x1e0);
      FUN_1405b70a4(param_2,param_3);
      memcpy((void *)(param_2 + 0x10),(void *)(param_3 + 0x10),0x81);
      param_3 = param_3 + 0x290;
      param_2 = param_2 + 0x290;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14928c098 FUN_14928c098 body=59 status=ok
// SIG undefined FUN_14928c098(void)

undefined8 FUN_14928c098(longlong *param_1)

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



// FUNCTION 14928c13a FUN_14928c13a body=79 status=ok
// SIG undefined FUN_14928c13a(void)

undefined8 * FUN_14928c13a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbd7240;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928c18a FUN_14928c18a body=76 status=ok
// SIG undefined FUN_14928c18a(void)

void FUN_14928c18a(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x52) == '\x01') {
    *param_1 = &PTR_FUN_14bbd7240;
    if (param_1[0x3e] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_1 + 2);
    *(undefined1 *)(param_1 + 0x52) = 0;
  }
  return;
}



// FUNCTION 14928c1d6 FUN_14928c1d6 body=128 status=ok
// SIG undefined FUN_14928c1d6(void)

void FUN_14928c1d6(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbd7430;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0x3f800000;
  param_2[0x41] = 0x3f80000000000000;
  *(undefined4 *)(param_2 + 0x42) = 0;
  *(undefined1 *)((longlong)param_2 + 0x214) = 1;
  param_2[0x43] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x44;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x50) = 1;
  return;
}



// FUNCTION 14928c256 FUN_14928c256 body=128 status=ok
// SIG undefined FUN_14928c256(void)

void FUN_14928c256(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_2 + 2);
  *param_2 = &PTR_FUN_14bbd7430;
  param_2[0x3e] = 0;
  param_2[0x3f] = 0;
  param_2[0x40] = 0x3f800000;
  param_2[0x41] = 0x3f80000000000000;
  *(undefined4 *)(param_2 + 0x42) = 0;
  *(undefined1 *)((longlong)param_2 + 0x214) = 1;
  param_2[0x43] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x44;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_2 + 0x50) = 1;
  return;
}



// FUNCTION 14928c2fa FUN_14928c2fa body=116 status=ok
// SIG undefined FUN_14928c2fa(void)

undefined8 FUN_14928c2fa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x1f0;
    param_2 = param_2 + 0x1f0;
    do {
      FUN_1491c05d4(param_2 + -0x1e0,param_3 + -0x1e0);
      FUN_1405b70a4(param_2,param_3);
      memcpy((void *)(param_2 + 0x10),(void *)(param_3 + 0x10),0x81);
      param_3 = param_3 + 0x290;
      param_2 = param_2 + 0x290;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14928c396 FUN_14928c396 body=59 status=ok
// SIG undefined FUN_14928c396(void)

undefined8 FUN_14928c396(longlong *param_1)

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



// FUNCTION 14928c438 FUN_14928c438 body=79 status=ok
// SIG undefined FUN_14928c438(void)

undefined8 * FUN_14928c438(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bbd7430;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928c488 FUN_14928c488 body=76 status=ok
// SIG undefined FUN_14928c488(void)

void FUN_14928c488(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x52) == '\x01') {
    *param_1 = &PTR_FUN_14bbd7430;
    if (param_1[0x3e] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_1 + 2);
    *(undefined1 *)(param_1 + 0x52) = 0;
  }
  return;
}



// FUNCTION 14928c508 FUN_14928c508 body=110 status=ok
// SIG undefined FUN_14928c508(void)

undefined8 FUN_14928c508(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      memcpy((void *)(param_2 + 0x1f0 + lVar1),(void *)(param_3 + 0x1f0 + lVar1),0xe1);
      lVar1 = lVar1 + 0x2e0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14928c59e FUN_14928c59e body=59 status=ok
// SIG undefined FUN_14928c59e(void)

undefined8 FUN_14928c59e(longlong *param_1)

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



// FUNCTION 14928c5ea FUN_14928c5ea body=49 status=ok
// SIG undefined FUN_14928c5ea(void)

void FUN_14928c5ea(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x5c) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x5c) = 0;
  }
  return;
}



// FUNCTION 14928c66a FUN_14928c66a body=139 status=ok
// SIG undefined FUN_14928c66a(void)

undefined8 * FUN_14928c66a(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bbd7620;
  param_1[0x4d] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x3e;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x4a] = 0x3f800000;
  param_1[0x4b] = 0x3f80000000000000;
  param_1[0x4c] = &DAT_41200000;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x4e;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x5a) = 1;
  return param_1;
}



// FUNCTION 14928c6f6 FUN_14928c6f6 body=52 status=ok
// SIG undefined FUN_14928c6f6(void)

undefined8 * FUN_14928c6f6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928c760 FUN_14928c760 body=110 status=ok
// SIG undefined FUN_14928c760(void)

undefined8 FUN_14928c760(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      memcpy((void *)(param_2 + 0x1f0 + lVar1),(void *)(param_3 + 0x1f0 + lVar1),0xf1);
      lVar1 = lVar1 + 0x2f0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14928c7f6 FUN_14928c7f6 body=59 status=ok
// SIG undefined FUN_14928c7f6(void)

undefined8 FUN_14928c7f6(longlong *param_1)

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



// FUNCTION 14928c842 FUN_14928c842 body=49 status=ok
// SIG undefined FUN_14928c842(void)

void FUN_14928c842(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x5e) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x5e) = 0;
  }
  return;
}



// FUNCTION 14928c8c2 FUN_14928c8c2 body=149 status=ok
// SIG undefined FUN_14928c8c2(void)

undefined8 * FUN_14928c8c2(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bbd7810;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x3e;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x4a] = 0x3f800000;
  param_1[0x4b] = 0x3f80000000000000;
  param_1[0x4c] = &DAT_41200000;
  *(undefined1 *)(param_1 + 0x4d) = 1;
  *(undefined8 *)((longlong)param_1 + 0x26c) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x50;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x5c) = 1;
  return param_1;
}



// FUNCTION 14928c958 FUN_14928c958 body=52 status=ok
// SIG undefined FUN_14928c958(void)

undefined8 * FUN_14928c958(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928c9c2 FUN_14928c9c2 body=110 status=ok
// SIG undefined FUN_14928c9c2(void)

undefined8 FUN_14928c9c2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      memcpy((void *)(param_2 + 0x1f0 + lVar1),(void *)(param_3 + 0x1f0 + lVar1),0xf1);
      lVar1 = lVar1 + 0x2f0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14928ca58 FUN_14928ca58 body=59 status=ok
// SIG undefined FUN_14928ca58(void)

undefined8 FUN_14928ca58(longlong *param_1)

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



// FUNCTION 14928caa4 FUN_14928caa4 body=49 status=ok
// SIG undefined FUN_14928caa4(void)

void FUN_14928caa4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x5e) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x5e) = 0;
  }
  return;
}



// FUNCTION 14928cb24 FUN_14928cb24 body=152 status=ok
// SIG undefined FUN_14928cb24(void)

undefined8 * FUN_14928cb24(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bbd7a00;
  *(undefined8 *)((longlong)param_1 + 0x274) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x3e;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x4a] = 0x3f800000;
  param_1[0x4b] = 0x3f80000000000000;
  param_1[0x4c] = &DAT_41200000;
  param_1[0x4d] = 0x43b40000;
  *(undefined4 *)(param_1 + 0x4e) = 0x10;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x50;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x5c) = 1;
  return param_1;
}



// FUNCTION 14928cbbc FUN_14928cbbc body=52 status=ok
// SIG undefined FUN_14928cbbc(void)

undefined8 * FUN_14928cbbc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928cc26 FUN_14928cc26 body=110 status=ok
// SIG undefined FUN_14928cc26(void)

undefined8 FUN_14928cc26(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      FUN_1491c05d4(param_2 + 0x10 + lVar1,param_3 + 0x10 + lVar1);
      memcpy((void *)(param_2 + 0x1f0 + lVar1),(void *)(param_3 + 0x1f0 + lVar1),0xf1);
      lVar1 = lVar1 + 0x2f0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14928ccbc FUN_14928ccbc body=59 status=ok
// SIG undefined FUN_14928ccbc(void)

undefined8 FUN_14928ccbc(longlong *param_1)

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



// FUNCTION 14928cd08 FUN_14928cd08 body=49 status=ok
// SIG undefined FUN_14928cd08(void)

void FUN_14928cd08(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x5e) == '\x01') {
    *param_2 = &PTR_FUN_14bb775c0;
    FUN_140f8ccfc(param_2 + 2);
    *(undefined1 *)(param_2 + 0x5e) = 0;
  }
  return;
}



// FUNCTION 14928cd88 FUN_14928cd88 body=162 status=ok
// SIG undefined FUN_14928cd88(void)

undefined8 * FUN_14928cd88(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_1412ca278(param_1 + 2);
  *param_1 = &PTR_FUN_14bbd7bf0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x3e;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x4a] = 0x3f800000;
  param_1[0x4b] = 0x3f80000000000000;
  param_1[0x4c] = &DAT_41200000;
  param_1[0x4d] = 0x43b40000;
  *(undefined4 *)(param_1 + 0x4e) = 0x10;
  *(undefined1 *)((longlong)param_1 + 0x274) = 1;
  param_1[0x4f] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x50;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined1 *)(param_1 + 0x5c) = 1;
  return param_1;
}



// FUNCTION 14928ce2a FUN_14928ce2a body=52 status=ok
// SIG undefined FUN_14928ce2a(void)

undefined8 * FUN_14928ce2a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bb775c0;
  FUN_140f8ccfc(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14928ce60 FUN_14928ce60 body=161 status=ok
// SIG undefined FUN_14928ce60(void)

void FUN_14928ce60(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bbd7de0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x8c) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x14;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  memmove(param_2 + 2,&DAT_14c846480,0x60);
  *(undefined1 *)(param_2 + 0xe) = 1;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0x4120000000000000;
  *(undefined1 *)(param_2 + 0x20) = 1;
  return;
}



// FUNCTION 14928cf02 FUN_14928cf02 body=161 status=ok
// SIG undefined FUN_14928cf02(void)

void FUN_14928cf02(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bbd7de0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3ff00000;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0x3ff0000000000000;
  param_2[0xb] = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_2 + 0x8c) = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x14;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  memmove(param_2 + 2,&DAT_14c846480,0x60);
  *(undefined1 *)(param_2 + 0xe) = 1;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0x3f80000000000000;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0x4120000000000000;
  *(undefined1 *)(param_2 + 0x20) = 1;
  return;
}



// FUNCTION 14928cfc8 FUN_14928cfc8 body=71 status=ok
// SIG undefined FUN_14928cfc8(void)

undefined8 FUN_14928cfc8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0x10;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xf1);
      lVar1 = lVar1 + 0x110;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14928d038 FUN_14928d038 body=59 status=ok
// SIG undefined FUN_14928d038(void)

undefined8 FUN_14928d038(longlong *param_1)

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



// FUNCTION 14928d0e4 FUN_14928d0e4 body=29 status=ok
// SIG undefined FUN_14928d0e4(void)

undefined8 FUN_14928d0e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


