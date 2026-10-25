// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146cfd30c FUN_146cfd30c body=28 status=ok
// SIG undefined FUN_146cfd30c(void)

undefined8 FUN_146cfd30c(undefined8 param_1,undefined8 param_2)

{
  FUN_146cfd328(param_2,param_1);
  return param_1;
}



// FUNCTION 146cfd328 FUN_146cfd328 body=608 status=ok
// SIG undefined FUN_146cfd328(void)

double * FUN_146cfd328(longlong *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong lStack_b0;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pdVar7 = (double *)param_1[2];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar4 = pdVar7[2];
  dVar10 = *pdVar7;
  dVar5 = pdVar7[1];
  dVar8 = dVar5 * dVar3 - dVar2 * dVar4;
  dVar8 = dVar8 + dVar8;
  dVar6 = pdVar7[3];
  dVar11 = dVar10 * dVar2 - dVar1 * dVar5;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar4 * dVar1 - dVar3 * dVar10;
  dVar9 = dVar9 + dVar9;
  local_90 = (dVar10 * dVar9 - dVar8 * dVar5) + dVar6 * dVar11 + dVar3;
  local_98 = (dVar4 * dVar8 - dVar11 * dVar10) + dVar6 * dVar9 + dVar2;
  local_a0 = (dVar5 * dVar11 - dVar9 * dVar4) + dVar8 * dVar6 + dVar1;
  local_b8 = param_1[3];
  lStack_b0 = param_1[4];
  FUN_144916780(*(undefined8 *)(*(longlong *)*param_1 + 0x28),&local_88,&local_a0,
                ((longlong *)*param_1)[1]);
  pdVar7 = (double *)param_1[1];
  dVar5 = *pdVar7;
  dVar6 = pdVar7[1];
  dVar8 = pdVar7[2];
  dVar1 = pdVar7[3];
  dVar2 = pdVar7[3];
  dVar10 = dStack_80 * dVar5 - local_88 * dVar6;
  dVar11 = local_78 * dVar6 - dStack_80 * dVar8;
  dVar9 = local_88 * dVar8 - dVar5 * local_78;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar4 = pdVar7[5];
  dVar3 = pdVar7[6];
  *param_2 = (dVar10 * dVar6 - dVar9 * dVar8) + dVar1 * dVar11 + local_88 + pdVar7[4];
  param_2[1] = (dVar8 * dVar11 - dVar5 * dVar10) + dVar2 * dVar9 + dStack_80 + dVar4;
  param_2[2] = dVar10 * dVar1 + local_78 + (dVar9 * dVar5 - dVar11 * dVar6) + dVar3;
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cfd589 FUN_146cfd589 body=3505 status=ok
// SIG undefined FUN_146cfd589(void)

void FUN_146cfd589(longlong *param_1,longlong param_2,double *param_3,double *param_4,
                  double *param_5,double *param_6,double *param_7,double *param_8,double *param_9,
                  undefined8 param_10,double *param_11,longlong *param_12,double param_13,
                  undefined8 param_14)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  double *pdVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
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
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auStack_338 [32];
  double *local_318;
  double *local_310;
  double *local_308;
  double *local_300;
  undefined8 local_2f8;
  longlong local_2e8;
  double local_2e0;
  double local_2d8;
  double *local_2d0;
  undefined1 local_2c8 [16];
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined1 local_278 [16];
  double *local_268;
  double *local_260;
  undefined8 local_258;
  longlong local_248;
  undefined8 uStack_240;
  longlong local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double local_210;
  uint local_204;
  double local_200;
  double dStack_1f8;
  double dStack_1f0;
  longlong local_1e8;
  double *local_1e0;
  double *local_1d8;
  undefined8 local_1d0;
  double local_1c8;
  double dStack_1c0;
  undefined1 local_1b8 [16];
  longlong *local_1a0;
  double *local_198;
  double *local_190;
  double local_188;
  double local_180;
  code *local_178;
  undefined1 *local_170;
  code *local_168;
  longlong **local_160;
  double local_158 [13];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  local_198 = &local_180;
  local_180 = 0.0;
  local_1d8 = &local_188;
  local_188 = 0.0;
  local_190 = param_9;
  local_1c8 = -*param_3;
  dStack_1c0 = -param_3[1];
  local_1e0 = &local_1c8;
  local_1b8._8_4_ = SUB84(param_3[3] * 1.0,0);
  local_1b8._0_8_ = param_3[2] * -1.0;
  local_1b8._12_4_ = (int)((ulonglong)(param_3[3] * 1.0) >> 0x20);
  local_1d0 = param_10;
  local_200 = -1.0;
  dStack_1f8 = 0.0;
  dStack_1f0 = 0.0;
  local_310 = &local_210;
  local_210 = 3.4028234663852886e+38;
  local_204 = 0;
  local_308 = (double *)param_13;
  local_318 = &local_200;
  local_2d0 = param_4;
  local_1e8 = param_2;
  local_1a0 = param_1;
  FUN_146ced1d0(param_11,param_3,&local_204,local_158);
  dVar29 = -dStack_1f0;
  dVar24 = -local_200;
  dVar25 = -dStack_1f8;
  local_2e0 = (double)param_1[1];
  local_2d8 = *(double *)(param_2 + 8);
  pdVar8 = param_11 + 0xc;
  iVar10 = 0x1e;
  dVar14 = local_210;
  local_2e8 = param_2;
LAB_146cfd77b:
  local_268 = (double *)((ulonglong)dStack_1f0 ^ 0x8000000000000000);
  local_278._8_4_ = SUB84(dStack_1f8,0);
  local_278._0_8_ = -local_200;
  local_278._12_4_ = (uint)((ulonglong)dStack_1f8 >> 0x20) ^ 0x80000000;
  local_318 = (double *)(*param_1 + 0x20);
  local_308 = param_9;
  local_310 = &local_180;
  FUN_144a94486(*(undefined8 *)(*param_1 + 0x88),&local_228,local_278,param_1[1]);
  FUN_146cfe33c(&local_1e8,local_278,&local_200);
  dVar32 = local_180;
  dVar30 = local_188;
  dVar34 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar22 = param_3[3];
  dVar33 = param_3[3];
  dVar18 = (double)local_278._8_8_ * dVar34 - (double)local_278._0_8_ * dVar2;
  dVar20 = (double)local_268 * dVar2 - (double)local_278._8_8_ * dVar3;
  dVar21 = param_3[3] * 0.0;
  dVar23 = (double)local_278._0_8_ * dVar3 - dVar34 * (double)local_268;
  dVar20 = dVar20 + dVar20;
  dVar23 = dVar23 + dVar23;
  dVar18 = dVar18 + dVar18;
  dVar15 = param_3[4];
  dVar19 = param_3[5];
  dVar13 = param_3[6];
  uVar26 = SUB84(local_180,0);
  uVar27 = (undefined4)((ulonglong)local_180 >> 0x20);
  lVar6 = (longlong)(int)local_204;
  local_204 = local_204 + 1;
  param_11[lVar6 * 3 + 2] = local_218;
  param_11[lVar6 * 3] = local_228;
  (param_11 + lVar6 * 3)[1] = dStack_220;
  param_11[lVar6 * 3 + 0xe] = (double)local_268;
  pdVar8[lVar6 * 3] = (double)local_278._0_8_;
  (pdVar8 + lVar6 * 3)[1] = (double)local_278._8_8_;
  local_158[lVar6 * 3] =
       local_228 -
       ((dVar18 * dVar2 - dVar23 * dVar3) + dVar22 * dVar20 + (double)local_278._0_8_ + dVar15);
  local_158[lVar6 * 3 + 1] =
       dStack_220 -
       ((dVar3 * dVar20 - dVar34 * dVar18) + dVar33 * dVar23 + (double)local_278._8_8_ + dVar19);
  local_158[lVar6 * 3 + 2] =
       local_218 -
       (dVar18 * dVar22 + (double)local_268 + (dVar23 * dVar34 - dVar20 * dVar2) + dVar13);
  local_318 = param_11;
  local_310 = pdVar8;
  FUN_146ced5ca(&local_200,local_158,&local_204,param_11 + 0x18);
  uVar4 = local_204;
  dVar22 = SQRT(dStack_1f0 * dStack_1f0 + local_200 * local_200 + dStack_1f8 * dStack_1f8);
  uVar28 = (undefined4)((ulonglong)dVar30 >> 0x20);
  if (param_13 <= dVar22) goto code_r0x000146cfd9d7;
  lVar6 = (longlong)(int)local_204;
  *(uint *)(param_11 + 0x1c) = local_204;
  local_238 = 0;
  uStack_230 = 0;
  local_248 = 0;
  uStack_240 = 0;
  FUN_140268ec4(&local_238,8);
  FUN_140268ec4(&local_248,8);
  if (0 < lVar6) {
    lVar11 = 0;
    do {
      uVar7 = uStack_230;
      lVar9 = (longlong)(int)uStack_230;
      uVar5 = (int)uStack_230 + 1;
      uStack_230 = CONCAT44(uStack_230._4_4_,uVar5);
      if (uStack_230._4_4_ < uVar5) {
        FUN_14026a4e8(&local_238,uVar7 & 0xffffffff);
      }
      uVar7 = uStack_240;
      pdVar8 = (double *)((longlong)param_11 + lVar11 + 0x70);
      *(double *)(local_238 + 0x10 + lVar9 * 0x18) = pdVar8[-0xc];
      dVar14 = pdVar8[-0xd];
      pdVar1 = (double *)(local_238 + lVar9 * 0x18);
      *pdVar1 = pdVar8[-0xe];
      pdVar1[1] = dVar14;
      dVar2 = pdVar8[-2];
      dVar3 = pdVar8[-1];
      dVar18 = *param_3;
      dVar20 = param_3[1];
      dVar23 = param_3[2];
      dVar14 = param_3[3];
      dVar33 = param_3[3];
      dVar16 = dVar3 * dVar18 - dVar2 * dVar20;
      dVar17 = *pdVar8 * dVar20 - dVar3 * dVar23;
      dVar31 = dVar2 * dVar23 - dVar18 * *pdVar8;
      dVar17 = dVar17 + dVar17;
      dVar31 = dVar31 + dVar31;
      dVar16 = dVar16 + dVar16;
      dVar19 = param_3[4];
      dVar34 = param_3[5];
      dVar13 = *pdVar8;
      dVar15 = param_3[6];
      lVar9 = (longlong)(int)uStack_240;
      uVar5 = (int)uStack_240 + 1;
      uStack_240 = CONCAT44(uStack_240._4_4_,uVar5);
      if (uStack_240._4_4_ < uVar5) {
        FUN_14026a4e8(&local_248,uVar7 & 0xffffffff);
      }
      pdVar8 = (double *)(local_248 + lVar9 * 0x18);
      *pdVar8 = (dVar16 * dVar20 - dVar31 * dVar23) + dVar14 * dVar17 + dVar2 + dVar19;
      pdVar8[1] = (dVar23 * dVar17 - dVar18 * dVar16) + dVar33 * dVar31 + dVar3 + dVar34;
      *(double *)(local_248 + 0x10 + lVar9 * 0x18) =
           dVar16 * dVar14 + dVar13 + (dVar31 * dVar18 - dVar17 * dVar20) + dVar15;
      lVar11 = lVar11 + 0x18;
    } while (lVar6 * 0x18 != lVar11);
  }
  if (dVar32 <= dVar30) {
    uVar26 = SUB84(dVar30,0);
    uVar27 = uVar28;
  }
  local_278._8_8_ = param_3;
  local_278._0_8_ = local_2e8;
  local_268 = &local_1c8;
  local_260 = &local_188;
  local_258 = param_10;
  local_160 = &local_1a0;
  local_168 = FUN_146cfe4c2;
  local_170 = local_278;
  local_178 = FUN_146cfe53c;
  local_2f8 = param_14;
  local_300 = &local_2b0;
  local_308 = &local_298;
  local_310 = &local_228;
  local_318 = &local_280;
  uVar5 = FUN_144918d86(&local_238,&local_248);
  if (uVar5 < 2) {
    param_7[2] = local_218;
    *param_7 = local_228;
    param_7[1] = dStack_220;
    dVar14 = *param_3;
    dVar25 = -dVar14;
    dVar22 = -param_3[1];
    dVar29 = param_3[2] * -1.0;
    dVar24 = param_3[3] * 1.0;
    dVar33 = dStack_220 * dVar25 - local_228 * dVar22;
    dVar15 = local_218 * dVar22 - dStack_220 * dVar29;
    dVar13 = local_228 * dVar29 - dVar25 * local_218;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    dVar33 = dVar33 + dVar33;
    *param_8 = (dVar33 * dVar22 - dVar13 * dVar29) + dVar24 * dVar15 + local_228;
    param_8[1] = dVar14 * dVar33 + dVar29 * dVar15 + dVar24 * dVar13 + dStack_220;
    param_8[2] = dVar24 * dVar33 + local_218 + (dVar13 * dVar25 - dVar15 * dVar22);
    *local_2d0 = local_280 + local_2e0 + local_2d8;
    *param_5 = local_2e0 * local_228 + local_298;
    param_5[1] = local_2e0 * dStack_220 + local_290;
    param_5[2] = local_2e0 * local_218 + local_288;
    dVar22 = (local_2b0 - local_2d8 * local_228) - param_3[4];
    dVar33 = (local_2a8 - dStack_220 * local_2d8) - param_3[5];
    dVar25 = (local_2a0 - local_218 * local_2d8) - param_3[6];
    dVar24 = *param_3;
    dVar14 = param_3[2] * -1.0;
    dVar29 = param_3[3] * 1.0;
    dVar21 = -dVar24;
    dVar34 = -param_3[1];
    dVar19 = dVar22 * dVar14 - dVar21 * dVar25;
    dVar13 = dVar33 * dVar21 - dVar22 * dVar34;
    dVar15 = dVar25 * dVar34 - dVar33 * dVar14;
    dVar15 = dVar15 + dVar15;
    dVar19 = dVar19 + dVar19;
    dVar13 = dVar13 + dVar13;
    *param_6 = (dVar13 * dVar34 - dVar19 * dVar14) + dVar29 * dVar15 + dVar22;
    param_6[1] = dVar24 * dVar13 + dVar14 * dVar15 + dVar29 * dVar19 + dVar33;
    param_6[2] = dVar29 * dVar13 + dVar25 + (dVar19 * dVar21 - dVar15 * dVar34);
    *param_12 = CONCAT44(uVar27,uVar26);
    if (local_248 != 0) {
      FUN_1400020a8();
    }
    if (local_238 != 0) {
      FUN_1400020a8();
    }
    goto LAB_146cfdcc8;
  }
  if (uVar5 == 3) {
    dVar21 = -0.0;
    dVar22 = -local_280;
    dVar29 = local_218;
    dVar24 = local_228;
    dVar25 = dStack_220;
  }
  if (local_248 != 0) {
    FUN_1400020a8();
  }
  if (local_238 != 0) {
    FUN_1400020a8();
  }
  goto LAB_146cfda5a;
code_r0x000146cfd9d7:
  dVar33 = dVar14 - param_13;
  dVar14 = 1.0 / dVar22;
  local_200 = local_200 * dVar14;
  dStack_1f8 = dStack_1f8 * dVar14;
  dStack_1f0 = dStack_1f0 * dVar14;
  dVar29 = -dStack_1f0;
  dVar24 = -local_200;
  dVar25 = -dStack_1f8;
  bVar12 = iVar10 == 0;
  iVar10 = iVar10 + -1;
  dVar14 = dVar22;
  if (bVar12 || dVar33 <= dVar22) {
    if (dVar32 <= dVar30) {
      uVar26 = SUB84(dVar30,0);
      uVar27 = uVar28;
    }
    *(uint *)(param_11 + 0x1c) = local_204;
LAB_146cfda5a:
    local_2e8 = CONCAT44(uVar27,uVar26);
    local_2c8._8_4_ = SUB84(dVar21,0);
    local_2c8._0_8_ = dVar22;
    local_2c8._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    if ((int)uVar4 < 1) {
      dVar33 = 0.0;
      dVar13 = 0.0;
      dVar14 = 0.0;
      dVar15 = 0.0;
      dVar19 = 0.0;
      dVar21 = 0.0;
    }
    else {
      pdVar8 = param_11 + 0xe;
      dVar21 = 0.0;
      uVar7 = 0;
      dVar19 = 0.0;
      dVar15 = 0.0;
      dVar14 = 0.0;
      dVar13 = 0.0;
      dVar33 = 0.0;
      do {
        dVar34 = (param_11 + 0x18)[uVar7];
        dVar21 = dVar21 + pdVar8[-0xc] * dVar34;
        dVar19 = dVar19 + pdVar8[-0xd] * dVar34;
        dVar15 = dVar15 + pdVar8[-0xe] * dVar34;
        dVar14 = dVar14 + *pdVar8 * dVar34;
        dVar13 = dVar13 + pdVar8[-1] * dVar34;
        dVar33 = dVar33 + dVar34 * pdVar8[-2];
        uVar7 = uVar7 + 1;
        pdVar8 = pdVar8 + 3;
      } while (uVar4 != uVar7);
    }
    *param_7 = dVar24;
    param_7[1] = dVar25;
    param_7[2] = dVar29;
    dVar3 = *param_3;
    dVar34 = -dVar3;
    dVar2 = -param_3[1];
    dVar20 = param_3[2] * -1.0;
    dVar23 = param_3[3] * 1.0;
    dVar18 = dVar24 * dVar20 - dVar34 * dVar29;
    dVar30 = dVar25 * dVar34 - dVar24 * dVar2;
    dVar32 = dVar29 * dVar2 - dVar25 * dVar20;
    dVar32 = dVar32 + dVar32;
    dVar18 = dVar18 + dVar18;
    dVar30 = dVar30 + dVar30;
    *param_8 = (dVar30 * dVar2 - dVar18 * dVar20) + dVar23 * dVar32 + dVar24;
    param_8[1] = dVar3 * dVar30 + dVar20 * dVar32 + dVar23 * dVar18 + dVar25;
    param_8[2] = dVar23 * dVar30 + dVar29 + (dVar18 * dVar34 - dVar32 * dVar2);
    *local_2d0 = (local_2e0 + local_2d8) - dVar22;
    dVar29 = param_7[2];
    dVar24 = param_7[1];
    *param_5 = local_2e0 * *param_7 + dVar15;
    param_5[1] = dVar24 * local_2e0 + dVar19;
    param_5[2] = dVar29 * local_2e0 + dVar21;
    dVar29 = param_8[2];
    dVar24 = param_8[1];
    *param_6 = dVar33 - local_2d8 * *param_8;
    param_6[1] = dVar13 - dVar24 * local_2d8;
    param_6[2] = dVar14 - dVar29 * local_2d8;
    *param_12 = local_2e8;
LAB_146cfdcc8:
    if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_146cfd77b;
}



// FUNCTION 146cfe33c FUN_146cfe33c body=389 status=ok
// SIG undefined FUN_146cfe33c(void)

undefined8 FUN_146cfe33c(longlong *param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pdVar8 = (double *)param_1[1];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar4 = pdVar8[2];
  dVar5 = *pdVar8;
  dVar6 = pdVar8[1];
  dVar9 = dVar6 * dVar3 - dVar2 * dVar4;
  dVar9 = dVar9 + dVar9;
  dVar7 = pdVar8[3];
  dVar10 = dVar5 * dVar2 - dVar1 * dVar6;
  dVar10 = dVar10 + dVar10;
  dVar11 = dVar4 * dVar1 - dVar3 * dVar5;
  dVar11 = dVar11 + dVar11;
  local_68 = (dVar5 * dVar11 - dVar9 * dVar6) + dVar7 * dVar10 + dVar3;
  local_70 = (dVar4 * dVar9 - dVar10 * dVar5) + dVar7 * dVar11 + dVar2;
  local_78 = (dVar6 * dVar10 - dVar11 * dVar4) + dVar9 * dVar7 + dVar1;
  local_88 = (undefined4)param_1[2];
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_80 = (undefined4)param_1[3];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x1c);
  FUN_144916780(*(undefined8 *)(*(longlong *)*param_1 + 0x28),param_2,&local_78,
                ((longlong *)*param_1)[1]);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cfe4c2 FUN_146cfe4c2 body=121 status=ok
// SIG undefined FUN_146cfe4c2(void)

undefined8 FUN_146cfe4c2(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined4)param_2[1];
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_38 = (undefined4)param_2[2];
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  lVar1 = *(longlong *)*param_2;
  local_48 = lVar1 + 0x20;
  FUN_144a94486(*(undefined8 *)(lVar1 + 0x88),param_1,&local_28,((longlong *)*param_2)[1]);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cfe53c FUN_146cfe53c body=28 status=ok
// SIG undefined FUN_146cfe53c(void)

undefined8 FUN_146cfe53c(undefined8 param_1,undefined8 param_2)

{
  FUN_146cfe558(param_2,param_1);
  return param_1;
}



// FUNCTION 146cfe558 FUN_146cfe558 body=608 status=ok
// SIG undefined FUN_146cfe558(void)

double * FUN_146cfe558(longlong *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong lStack_b0;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pdVar7 = (double *)param_1[2];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar4 = pdVar7[2];
  dVar10 = *pdVar7;
  dVar5 = pdVar7[1];
  dVar8 = dVar5 * dVar3 - dVar2 * dVar4;
  dVar8 = dVar8 + dVar8;
  dVar6 = pdVar7[3];
  dVar11 = dVar10 * dVar2 - dVar1 * dVar5;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar4 * dVar1 - dVar3 * dVar10;
  dVar9 = dVar9 + dVar9;
  local_90 = (dVar10 * dVar9 - dVar8 * dVar5) + dVar6 * dVar11 + dVar3;
  local_98 = (dVar4 * dVar8 - dVar11 * dVar10) + dVar6 * dVar9 + dVar2;
  local_a0 = (dVar5 * dVar11 - dVar9 * dVar4) + dVar8 * dVar6 + dVar1;
  local_b8 = param_1[3];
  lStack_b0 = param_1[4];
  FUN_144916780(*(undefined8 *)(*(longlong *)*param_1 + 0x28),&local_88,&local_a0,
                ((longlong *)*param_1)[1]);
  pdVar7 = (double *)param_1[1];
  dVar5 = *pdVar7;
  dVar6 = pdVar7[1];
  dVar8 = pdVar7[2];
  dVar1 = pdVar7[3];
  dVar2 = pdVar7[3];
  dVar10 = dStack_80 * dVar5 - local_88 * dVar6;
  dVar11 = local_78 * dVar6 - dStack_80 * dVar8;
  dVar9 = local_88 * dVar8 - dVar5 * local_78;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar4 = pdVar7[5];
  dVar3 = pdVar7[6];
  *param_2 = (dVar10 * dVar6 - dVar9 * dVar8) + dVar1 * dVar11 + local_88 + pdVar7[4];
  param_2[1] = (dVar8 * dVar11 - dVar5 * dVar10) + dVar2 * dVar9 + dStack_80 + dVar4;
  param_2[2] = dVar10 * dVar1 + local_78 + (dVar9 * dVar5 - dVar11 * dVar6) + dVar3;
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cfe7b9 FUN_146cfe7b9 body=3493 status=ok
// SIG undefined FUN_146cfe7b9(void)

void FUN_146cfe7b9(longlong *param_1,longlong param_2,double *param_3,double *param_4,
                  double *param_5,double *param_6,double *param_7,double *param_8,undefined8 param_9
                  ,undefined8 param_10,double *param_11,longlong *param_12,double *param_13,
                  undefined8 param_14)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  double *pdVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
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
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auStack_338 [32];
  double *local_318;
  double *local_310;
  double *local_308;
  double *local_300;
  undefined8 local_2f8;
  longlong local_2e8;
  double local_2e0;
  double local_2d8;
  double *local_2d0;
  undefined1 local_2c8 [16];
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined1 local_278 [16];
  double *local_268;
  double *local_260;
  undefined8 local_258;
  longlong local_248;
  undefined8 uStack_240;
  longlong local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double local_210;
  uint local_204;
  double local_200;
  double dStack_1f8;
  double dStack_1f0;
  longlong local_1e8;
  double *local_1e0;
  double *local_1d8;
  undefined8 local_1d0;
  double local_1c8;
  double dStack_1c0;
  undefined1 local_1b8 [16];
  longlong *local_1a0;
  double *local_198;
  undefined8 local_190;
  double local_188;
  double local_180;
  code *local_178;
  undefined1 *local_170;
  code *local_168;
  longlong **local_160;
  double local_158 [13];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  local_198 = &local_180;
  local_180 = 0.0;
  local_1d8 = &local_188;
  local_188 = 0.0;
  local_190 = param_9;
  local_1c8 = -*param_3;
  dStack_1c0 = -param_3[1];
  local_1e0 = &local_1c8;
  local_1b8._8_4_ = SUB84(param_3[3] * 1.0,0);
  local_1b8._0_8_ = param_3[2] * -1.0;
  local_1b8._12_4_ = (int)((ulonglong)(param_3[3] * 1.0) >> 0x20);
  local_1d0 = param_10;
  local_200 = -1.0;
  dStack_1f8 = 0.0;
  dStack_1f0 = 0.0;
  local_310 = &local_210;
  local_210 = 3.4028234663852886e+38;
  local_204 = 0;
  local_308 = param_13;
  local_318 = &local_200;
  local_2d0 = param_4;
  local_1e8 = param_2;
  local_1a0 = param_1;
  FUN_146ced1d0(param_11,param_3,&local_204,local_158);
  dVar29 = -dStack_1f0;
  dVar24 = -local_200;
  dVar25 = -dStack_1f8;
  local_2e0 = (double)param_1[1];
  local_2d8 = *(double *)(param_2 + 8);
  pdVar8 = param_11 + 0xc;
  iVar10 = 0x1e;
  dVar14 = local_210;
  local_2e8 = param_2;
LAB_146cfe9ab:
  local_268 = (double *)((ulonglong)dStack_1f0 ^ 0x8000000000000000);
  local_278._8_4_ = SUB84(dStack_1f8,0);
  local_278._0_8_ = -local_200;
  local_278._12_4_ = (uint)((ulonglong)dStack_1f8 >> 0x20) ^ 0x80000000;
  local_310 = (double *)param_9;
  local_318 = &local_180;
  FUN_144916780(*(undefined8 *)(*param_1 + 0x28),&local_228,local_278,param_1[1]);
  FUN_146cff560(&local_1e8,local_278,&local_200);
  dVar32 = local_180;
  dVar30 = local_188;
  dVar34 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar22 = param_3[3];
  dVar33 = param_3[3];
  dVar18 = (double)local_278._8_8_ * dVar34 - (double)local_278._0_8_ * dVar2;
  dVar20 = (double)local_268 * dVar2 - (double)local_278._8_8_ * dVar3;
  dVar21 = param_3[3] * 0.0;
  dVar23 = (double)local_278._0_8_ * dVar3 - dVar34 * (double)local_268;
  dVar20 = dVar20 + dVar20;
  dVar23 = dVar23 + dVar23;
  dVar18 = dVar18 + dVar18;
  dVar15 = param_3[4];
  dVar19 = param_3[5];
  dVar13 = param_3[6];
  uVar26 = SUB84(local_180,0);
  uVar27 = (undefined4)((ulonglong)local_180 >> 0x20);
  lVar6 = (longlong)(int)local_204;
  local_204 = local_204 + 1;
  param_11[lVar6 * 3 + 2] = local_218;
  param_11[lVar6 * 3] = local_228;
  (param_11 + lVar6 * 3)[1] = dStack_220;
  param_11[lVar6 * 3 + 0xe] = (double)local_268;
  pdVar8[lVar6 * 3] = (double)local_278._0_8_;
  (pdVar8 + lVar6 * 3)[1] = (double)local_278._8_8_;
  local_158[lVar6 * 3] =
       local_228 -
       ((dVar18 * dVar2 - dVar23 * dVar3) + dVar22 * dVar20 + (double)local_278._0_8_ + dVar15);
  local_158[lVar6 * 3 + 1] =
       dStack_220 -
       ((dVar3 * dVar20 - dVar34 * dVar18) + dVar33 * dVar23 + (double)local_278._8_8_ + dVar19);
  local_158[lVar6 * 3 + 2] =
       local_218 -
       (dVar18 * dVar22 + (double)local_268 + (dVar23 * dVar34 - dVar20 * dVar2) + dVar13);
  local_318 = param_11;
  local_310 = pdVar8;
  FUN_146ced5ca(&local_200,local_158,&local_204,param_11 + 0x18);
  uVar4 = local_204;
  dVar22 = SQRT(dStack_1f0 * dStack_1f0 + local_200 * local_200 + dStack_1f8 * dStack_1f8);
  uVar28 = (undefined4)((ulonglong)dVar30 >> 0x20);
  if ((double)param_13 <= dVar22) goto code_r0x000146cfebfb;
  lVar6 = (longlong)(int)local_204;
  *(uint *)(param_11 + 0x1c) = local_204;
  local_238 = 0;
  uStack_230 = 0;
  local_248 = 0;
  uStack_240 = 0;
  FUN_140268ec4(&local_238,8);
  FUN_140268ec4(&local_248,8);
  if (0 < lVar6) {
    lVar11 = 0;
    do {
      uVar7 = uStack_230;
      lVar9 = (longlong)(int)uStack_230;
      uVar5 = (int)uStack_230 + 1;
      uStack_230 = CONCAT44(uStack_230._4_4_,uVar5);
      if (uStack_230._4_4_ < uVar5) {
        FUN_14026a4e8(&local_238,uVar7 & 0xffffffff);
      }
      uVar7 = uStack_240;
      pdVar8 = (double *)((longlong)param_11 + lVar11 + 0x70);
      *(double *)(local_238 + 0x10 + lVar9 * 0x18) = pdVar8[-0xc];
      dVar14 = pdVar8[-0xd];
      pdVar1 = (double *)(local_238 + lVar9 * 0x18);
      *pdVar1 = pdVar8[-0xe];
      pdVar1[1] = dVar14;
      dVar2 = pdVar8[-2];
      dVar3 = pdVar8[-1];
      dVar18 = *param_3;
      dVar20 = param_3[1];
      dVar23 = param_3[2];
      dVar33 = param_3[3];
      dVar14 = param_3[3];
      dVar16 = dVar3 * dVar18 - dVar2 * dVar20;
      dVar17 = *pdVar8 * dVar20 - dVar3 * dVar23;
      dVar31 = dVar2 * dVar23 - dVar18 * *pdVar8;
      dVar17 = dVar17 + dVar17;
      dVar31 = dVar31 + dVar31;
      dVar16 = dVar16 + dVar16;
      dVar19 = param_3[4];
      dVar34 = param_3[5];
      dVar13 = *pdVar8;
      dVar15 = param_3[6];
      lVar9 = (longlong)(int)uStack_240;
      uVar5 = (int)uStack_240 + 1;
      uStack_240 = CONCAT44(uStack_240._4_4_,uVar5);
      if (uStack_240._4_4_ < uVar5) {
        FUN_14026a4e8(&local_248,uVar7 & 0xffffffff);
      }
      pdVar8 = (double *)(local_248 + lVar9 * 0x18);
      *pdVar8 = (dVar16 * dVar20 - dVar31 * dVar23) + dVar33 * dVar17 + dVar2 + dVar19;
      pdVar8[1] = (dVar23 * dVar17 - dVar18 * dVar16) + dVar14 * dVar31 + dVar3 + dVar34;
      *(double *)(local_248 + 0x10 + lVar9 * 0x18) =
           dVar16 * dVar33 + dVar13 + (dVar31 * dVar18 - dVar17 * dVar20) + dVar15;
      lVar11 = lVar11 + 0x18;
    } while (lVar6 * 0x18 != lVar11);
  }
  if (dVar32 <= dVar30) {
    uVar26 = SUB84(dVar30,0);
    uVar27 = uVar28;
  }
  local_278._8_8_ = param_3;
  local_278._0_8_ = local_2e8;
  local_268 = &local_1c8;
  local_260 = &local_188;
  local_258 = param_10;
  local_160 = &local_1a0;
  local_168 = FUN_146cff6f8;
  local_170 = local_278;
  local_178 = FUN_146cff766;
  local_2f8 = param_14;
  local_300 = &local_2b0;
  local_308 = &local_298;
  local_310 = &local_228;
  local_318 = &local_280;
  uVar5 = FUN_144918d86(&local_238,&local_248);
  if (uVar5 < 2) {
    param_7[2] = local_218;
    *param_7 = local_228;
    param_7[1] = dStack_220;
    dVar14 = *param_3;
    dVar25 = -dVar14;
    dVar22 = -param_3[1];
    dVar29 = param_3[2] * -1.0;
    dVar24 = param_3[3] * 1.0;
    dVar33 = dStack_220 * dVar25 - local_228 * dVar22;
    dVar15 = local_218 * dVar22 - dStack_220 * dVar29;
    dVar13 = local_228 * dVar29 - dVar25 * local_218;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    dVar33 = dVar33 + dVar33;
    *param_8 = (dVar33 * dVar22 - dVar13 * dVar29) + dVar24 * dVar15 + local_228;
    param_8[1] = dVar14 * dVar33 + dVar29 * dVar15 + dVar24 * dVar13 + dStack_220;
    param_8[2] = dVar24 * dVar33 + local_218 + (dVar13 * dVar25 - dVar15 * dVar22);
    *local_2d0 = local_280 + local_2e0 + local_2d8;
    *param_5 = local_2e0 * local_228 + local_298;
    param_5[1] = local_2e0 * dStack_220 + local_290;
    param_5[2] = local_2e0 * local_218 + local_288;
    dVar22 = (local_2b0 - local_2d8 * local_228) - param_3[4];
    dVar33 = (local_2a8 - dStack_220 * local_2d8) - param_3[5];
    dVar25 = (local_2a0 - local_218 * local_2d8) - param_3[6];
    dVar24 = *param_3;
    dVar14 = param_3[2] * -1.0;
    dVar29 = param_3[3] * 1.0;
    dVar21 = -dVar24;
    dVar34 = -param_3[1];
    dVar19 = dVar22 * dVar14 - dVar21 * dVar25;
    dVar13 = dVar33 * dVar21 - dVar22 * dVar34;
    dVar15 = dVar25 * dVar34 - dVar33 * dVar14;
    dVar15 = dVar15 + dVar15;
    dVar19 = dVar19 + dVar19;
    dVar13 = dVar13 + dVar13;
    *param_6 = (dVar13 * dVar34 - dVar19 * dVar14) + dVar29 * dVar15 + dVar22;
    param_6[1] = dVar24 * dVar13 + dVar14 * dVar15 + dVar29 * dVar19 + dVar33;
    param_6[2] = dVar29 * dVar13 + dVar25 + (dVar19 * dVar21 - dVar15 * dVar34);
    *param_12 = CONCAT44(uVar27,uVar26);
    if (local_248 != 0) {
      FUN_1400020a8();
    }
    if (local_238 != 0) {
      FUN_1400020a8();
    }
    goto LAB_146cfeeec;
  }
  if (uVar5 == 3) {
    dVar21 = -0.0;
    dVar22 = -local_280;
    dVar29 = local_218;
    dVar24 = local_228;
    dVar25 = dStack_220;
  }
  if (local_248 != 0) {
    FUN_1400020a8();
  }
  if (local_238 != 0) {
    FUN_1400020a8();
  }
  goto LAB_146cfec7e;
code_r0x000146cfebfb:
  dVar33 = dVar14 - (double)param_13;
  dVar14 = 1.0 / dVar22;
  local_200 = local_200 * dVar14;
  dStack_1f8 = dStack_1f8 * dVar14;
  dStack_1f0 = dStack_1f0 * dVar14;
  dVar29 = -dStack_1f0;
  dVar24 = -local_200;
  dVar25 = -dStack_1f8;
  bVar12 = iVar10 == 0;
  iVar10 = iVar10 + -1;
  dVar14 = dVar22;
  if (bVar12 || dVar33 <= dVar22) {
    if (dVar32 <= dVar30) {
      uVar26 = SUB84(dVar30,0);
      uVar27 = uVar28;
    }
    *(uint *)(param_11 + 0x1c) = local_204;
LAB_146cfec7e:
    local_2e8 = CONCAT44(uVar27,uVar26);
    local_2c8._8_4_ = SUB84(dVar21,0);
    local_2c8._0_8_ = dVar22;
    local_2c8._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    if ((int)uVar4 < 1) {
      dVar33 = 0.0;
      dVar13 = 0.0;
      dVar14 = 0.0;
      dVar15 = 0.0;
      dVar19 = 0.0;
      dVar21 = 0.0;
    }
    else {
      pdVar8 = param_11 + 0xe;
      dVar21 = 0.0;
      uVar7 = 0;
      dVar19 = 0.0;
      dVar15 = 0.0;
      dVar14 = 0.0;
      dVar13 = 0.0;
      dVar33 = 0.0;
      do {
        dVar34 = (param_11 + 0x18)[uVar7];
        dVar21 = dVar21 + pdVar8[-0xc] * dVar34;
        dVar19 = dVar19 + pdVar8[-0xd] * dVar34;
        dVar15 = dVar15 + pdVar8[-0xe] * dVar34;
        dVar14 = dVar14 + *pdVar8 * dVar34;
        dVar13 = dVar13 + pdVar8[-1] * dVar34;
        dVar33 = dVar33 + dVar34 * pdVar8[-2];
        uVar7 = uVar7 + 1;
        pdVar8 = pdVar8 + 3;
      } while (uVar4 != uVar7);
    }
    *param_7 = dVar24;
    param_7[1] = dVar25;
    param_7[2] = dVar29;
    dVar3 = *param_3;
    dVar34 = -dVar3;
    dVar2 = -param_3[1];
    dVar20 = param_3[2] * -1.0;
    dVar23 = param_3[3] * 1.0;
    dVar18 = dVar24 * dVar20 - dVar34 * dVar29;
    dVar30 = dVar25 * dVar34 - dVar24 * dVar2;
    dVar32 = dVar29 * dVar2 - dVar25 * dVar20;
    dVar32 = dVar32 + dVar32;
    dVar18 = dVar18 + dVar18;
    dVar30 = dVar30 + dVar30;
    *param_8 = (dVar30 * dVar2 - dVar18 * dVar20) + dVar23 * dVar32 + dVar24;
    param_8[1] = dVar3 * dVar30 + dVar20 * dVar32 + dVar23 * dVar18 + dVar25;
    param_8[2] = dVar23 * dVar30 + dVar29 + (dVar18 * dVar34 - dVar32 * dVar2);
    *local_2d0 = (local_2e0 + local_2d8) - dVar22;
    dVar29 = param_7[2];
    dVar24 = param_7[1];
    *param_5 = local_2e0 * *param_7 + dVar15;
    param_5[1] = dVar24 * local_2e0 + dVar19;
    param_5[2] = dVar29 * local_2e0 + dVar21;
    dVar29 = param_8[2];
    dVar24 = param_8[1];
    *param_6 = dVar33 - local_2d8 * *param_8;
    param_6[1] = dVar13 - dVar24 * local_2d8;
    param_6[2] = dVar14 - dVar29 * local_2d8;
    *param_12 = local_2e8;
LAB_146cfeeec:
    if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_146cfe9ab;
}



// FUNCTION 146cff560 FUN_146cff560 body=407 status=ok
// SIG undefined FUN_146cff560(void)

undefined8 FUN_146cff560(longlong *param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  pdVar8 = (double *)param_1[1];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar4 = pdVar8[2];
  dVar5 = *pdVar8;
  dVar6 = pdVar8[1];
  dVar10 = dVar6 * dVar3 - dVar2 * dVar4;
  dVar10 = dVar10 + dVar10;
  dVar7 = pdVar8[3];
  dVar11 = dVar5 * dVar2 - dVar1 * dVar6;
  dVar11 = dVar11 + dVar11;
  dVar12 = dVar4 * dVar1 - dVar3 * dVar5;
  dVar12 = dVar12 + dVar12;
  local_68 = (dVar5 * dVar12 - dVar10 * dVar6) + dVar7 * dVar11 + dVar3;
  local_70 = (dVar4 * dVar10 - dVar11 * dVar5) + dVar7 * dVar12 + dVar2;
  local_78 = (dVar6 * dVar11 - dVar12 * dVar4) + dVar10 * dVar7 + dVar1;
  local_90 = (undefined4)param_1[2];
  uStack_8c = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_88 = (undefined4)param_1[3];
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x1c);
  lVar9 = *(longlong *)*param_1;
  local_98 = lVar9 + 0x20;
  FUN_144a94486(*(undefined8 *)(lVar9 + 0x88),param_2,&local_78,((longlong *)*param_1)[1]);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cff6f8 FUN_146cff6f8 body=109 status=ok
// SIG undefined FUN_146cff6f8(void)

undefined8 FUN_146cff6f8(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined4)param_2[1];
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = (undefined4)param_2[2];
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_144916780(*(undefined8 *)(*(longlong *)*param_2 + 0x28),param_1,&local_28,
                ((longlong *)*param_2)[1]);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cff766 FUN_146cff766 body=28 status=ok
// SIG undefined FUN_146cff766(void)

undefined8 FUN_146cff766(undefined8 param_1,undefined8 param_2)

{
  FUN_146cff782(param_2,param_1);
  return param_1;
}



// FUNCTION 146cff782 FUN_146cff782 body=620 status=ok
// SIG undefined FUN_146cff782(void)

double * FUN_146cff782(longlong *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  longlong lStack_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pdVar7 = (double *)param_1[2];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar4 = pdVar7[2];
  dVar11 = *pdVar7;
  dVar5 = pdVar7[1];
  dVar9 = dVar5 * dVar3 - dVar2 * dVar4;
  dVar9 = dVar9 + dVar9;
  dVar6 = pdVar7[3];
  dVar12 = dVar11 * dVar2 - dVar1 * dVar5;
  dVar12 = dVar12 + dVar12;
  dVar10 = dVar4 * dVar1 - dVar3 * dVar11;
  dVar10 = dVar10 + dVar10;
  local_90 = (dVar11 * dVar10 - dVar9 * dVar5) + dVar6 * dVar12 + dVar3;
  local_98 = (dVar4 * dVar9 - dVar12 * dVar11) + dVar6 * dVar10 + dVar2;
  local_a0 = (dVar5 * dVar12 - dVar10 * dVar4) + dVar9 * dVar6 + dVar1;
  local_b0 = param_1[3];
  lStack_a8 = param_1[4];
  lVar8 = *(longlong *)*param_1;
  local_b8 = lVar8 + 0x20;
  FUN_144a94486(*(undefined8 *)(lVar8 + 0x88),&local_88,&local_a0,((longlong *)*param_1)[1]);
  pdVar7 = (double *)param_1[1];
  dVar5 = *pdVar7;
  dVar6 = pdVar7[1];
  dVar9 = pdVar7[2];
  dVar1 = pdVar7[3];
  dVar2 = pdVar7[3];
  dVar11 = dStack_80 * dVar5 - local_88 * dVar6;
  dVar12 = local_78 * dVar6 - dStack_80 * dVar9;
  dVar10 = local_88 * dVar9 - dVar5 * local_78;
  dVar12 = dVar12 + dVar12;
  dVar10 = dVar10 + dVar10;
  dVar11 = dVar11 + dVar11;
  dVar4 = pdVar7[5];
  dVar3 = pdVar7[6];
  *param_2 = (dVar11 * dVar6 - dVar10 * dVar9) + dVar1 * dVar12 + local_88 + pdVar7[4];
  param_2[1] = (dVar9 * dVar12 - dVar5 * dVar11) + dVar2 * dVar10 + dStack_80 + dVar4;
  param_2[2] = dVar11 * dVar1 + local_78 + (dVar10 * dVar5 - dVar12 * dVar6) + dVar3;
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cff9ef FUN_146cff9ef body=3505 status=ok
// SIG undefined FUN_146cff9ef(void)

void FUN_146cff9ef(longlong *param_1,longlong param_2,double *param_3,double *param_4,
                  double *param_5,double *param_6,double *param_7,double *param_8,double *param_9,
                  undefined8 param_10,double *param_11,longlong *param_12,double param_13,
                  undefined8 param_14)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  double *pdVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
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
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auStack_338 [32];
  double *local_318;
  double *local_310;
  double *local_308;
  double *local_300;
  undefined8 local_2f8;
  longlong local_2e8;
  double local_2e0;
  double local_2d8;
  double *local_2d0;
  undefined1 local_2c8 [16];
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  undefined1 local_278 [16];
  double *local_268;
  double *local_260;
  undefined8 local_258;
  longlong local_248;
  undefined8 uStack_240;
  longlong local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double local_210;
  uint local_204;
  double local_200;
  double dStack_1f8;
  double dStack_1f0;
  longlong local_1e8;
  double *local_1e0;
  double *local_1d8;
  undefined8 local_1d0;
  double local_1c8;
  double dStack_1c0;
  undefined1 local_1b8 [16];
  longlong *local_1a0;
  double *local_198;
  double *local_190;
  double local_188;
  double local_180;
  code *local_178;
  undefined1 *local_170;
  code *local_168;
  longlong **local_160;
  double local_158 [13];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  local_198 = &local_180;
  local_180 = 0.0;
  local_1d8 = &local_188;
  local_188 = 0.0;
  local_190 = param_9;
  local_1c8 = -*param_3;
  dStack_1c0 = -param_3[1];
  local_1e0 = &local_1c8;
  local_1b8._8_4_ = SUB84(param_3[3] * 1.0,0);
  local_1b8._0_8_ = param_3[2] * -1.0;
  local_1b8._12_4_ = (int)((ulonglong)(param_3[3] * 1.0) >> 0x20);
  local_1d0 = param_10;
  local_200 = -1.0;
  dStack_1f8 = 0.0;
  dStack_1f0 = 0.0;
  local_310 = &local_210;
  local_210 = 3.4028234663852886e+38;
  local_204 = 0;
  local_308 = (double *)param_13;
  local_318 = &local_200;
  local_2d0 = param_4;
  local_1e8 = param_2;
  local_1a0 = param_1;
  FUN_146ced1d0(param_11,param_3,&local_204,local_158);
  dVar29 = -dStack_1f0;
  dVar24 = -local_200;
  dVar25 = -dStack_1f8;
  local_2e0 = (double)param_1[1];
  local_2d8 = *(double *)(param_2 + 8);
  pdVar8 = param_11 + 0xc;
  iVar10 = 0x1e;
  dVar14 = local_210;
  local_2e8 = param_2;
LAB_146cffbe1:
  local_268 = (double *)((ulonglong)dStack_1f0 ^ 0x8000000000000000);
  local_278._8_4_ = SUB84(dStack_1f8,0);
  local_278._0_8_ = -local_200;
  local_278._12_4_ = (uint)((ulonglong)dStack_1f8 >> 0x20) ^ 0x80000000;
  local_318 = (double *)(*param_1 + 0x20);
  local_308 = param_9;
  local_310 = &local_180;
  FUN_144a94486(*(undefined8 *)(*param_1 + 0x88),&local_228,local_278,param_1[1]);
  FUN_146d007a2(&local_1e8,local_278,&local_200);
  dVar32 = local_180;
  dVar30 = local_188;
  dVar34 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar22 = param_3[3];
  dVar33 = param_3[3];
  dVar18 = (double)local_278._8_8_ * dVar34 - (double)local_278._0_8_ * dVar2;
  dVar20 = (double)local_268 * dVar2 - (double)local_278._8_8_ * dVar3;
  dVar21 = param_3[3] * 0.0;
  dVar23 = (double)local_278._0_8_ * dVar3 - dVar34 * (double)local_268;
  dVar20 = dVar20 + dVar20;
  dVar23 = dVar23 + dVar23;
  dVar18 = dVar18 + dVar18;
  dVar15 = param_3[4];
  dVar19 = param_3[5];
  dVar13 = param_3[6];
  uVar26 = SUB84(local_180,0);
  uVar27 = (undefined4)((ulonglong)local_180 >> 0x20);
  lVar6 = (longlong)(int)local_204;
  local_204 = local_204 + 1;
  param_11[lVar6 * 3 + 2] = local_218;
  param_11[lVar6 * 3] = local_228;
  (param_11 + lVar6 * 3)[1] = dStack_220;
  param_11[lVar6 * 3 + 0xe] = (double)local_268;
  pdVar8[lVar6 * 3] = (double)local_278._0_8_;
  (pdVar8 + lVar6 * 3)[1] = (double)local_278._8_8_;
  local_158[lVar6 * 3] =
       local_228 -
       ((dVar18 * dVar2 - dVar23 * dVar3) + dVar22 * dVar20 + (double)local_278._0_8_ + dVar15);
  local_158[lVar6 * 3 + 1] =
       dStack_220 -
       ((dVar3 * dVar20 - dVar34 * dVar18) + dVar33 * dVar23 + (double)local_278._8_8_ + dVar19);
  local_158[lVar6 * 3 + 2] =
       local_218 -
       (dVar18 * dVar22 + (double)local_268 + (dVar23 * dVar34 - dVar20 * dVar2) + dVar13);
  local_318 = param_11;
  local_310 = pdVar8;
  FUN_146ced5ca(&local_200,local_158,&local_204,param_11 + 0x18);
  uVar4 = local_204;
  dVar22 = SQRT(dStack_1f0 * dStack_1f0 + local_200 * local_200 + dStack_1f8 * dStack_1f8);
  uVar28 = (undefined4)((ulonglong)dVar30 >> 0x20);
  if (param_13 <= dVar22) goto code_r0x000146cffe3d;
  lVar6 = (longlong)(int)local_204;
  *(uint *)(param_11 + 0x1c) = local_204;
  local_238 = 0;
  uStack_230 = 0;
  local_248 = 0;
  uStack_240 = 0;
  FUN_140268ec4(&local_238,8);
  FUN_140268ec4(&local_248,8);
  if (0 < lVar6) {
    lVar11 = 0;
    do {
      uVar7 = uStack_230;
      lVar9 = (longlong)(int)uStack_230;
      uVar5 = (int)uStack_230 + 1;
      uStack_230 = CONCAT44(uStack_230._4_4_,uVar5);
      if (uStack_230._4_4_ < uVar5) {
        FUN_14026a4e8(&local_238,uVar7 & 0xffffffff);
      }
      uVar7 = uStack_240;
      pdVar8 = (double *)((longlong)param_11 + lVar11 + 0x70);
      *(double *)(local_238 + 0x10 + lVar9 * 0x18) = pdVar8[-0xc];
      dVar14 = pdVar8[-0xd];
      pdVar1 = (double *)(local_238 + lVar9 * 0x18);
      *pdVar1 = pdVar8[-0xe];
      pdVar1[1] = dVar14;
      dVar2 = pdVar8[-2];
      dVar3 = pdVar8[-1];
      dVar18 = *param_3;
      dVar20 = param_3[1];
      dVar23 = param_3[2];
      dVar14 = param_3[3];
      dVar33 = param_3[3];
      dVar16 = dVar3 * dVar18 - dVar2 * dVar20;
      dVar17 = *pdVar8 * dVar20 - dVar3 * dVar23;
      dVar31 = dVar2 * dVar23 - dVar18 * *pdVar8;
      dVar17 = dVar17 + dVar17;
      dVar31 = dVar31 + dVar31;
      dVar16 = dVar16 + dVar16;
      dVar19 = param_3[4];
      dVar34 = param_3[5];
      dVar13 = *pdVar8;
      dVar15 = param_3[6];
      lVar9 = (longlong)(int)uStack_240;
      uVar5 = (int)uStack_240 + 1;
      uStack_240 = CONCAT44(uStack_240._4_4_,uVar5);
      if (uStack_240._4_4_ < uVar5) {
        FUN_14026a4e8(&local_248,uVar7 & 0xffffffff);
      }
      pdVar8 = (double *)(local_248 + lVar9 * 0x18);
      *pdVar8 = (dVar16 * dVar20 - dVar31 * dVar23) + dVar14 * dVar17 + dVar2 + dVar19;
      pdVar8[1] = (dVar23 * dVar17 - dVar18 * dVar16) + dVar33 * dVar31 + dVar3 + dVar34;
      *(double *)(local_248 + 0x10 + lVar9 * 0x18) =
           dVar16 * dVar14 + dVar13 + (dVar31 * dVar18 - dVar17 * dVar20) + dVar15;
      lVar11 = lVar11 + 0x18;
    } while (lVar6 * 0x18 != lVar11);
  }
  if (dVar32 <= dVar30) {
    uVar26 = SUB84(dVar30,0);
    uVar27 = uVar28;
  }
  local_278._8_8_ = param_3;
  local_278._0_8_ = local_2e8;
  local_268 = &local_1c8;
  local_260 = &local_188;
  local_258 = param_10;
  local_160 = &local_1a0;
  local_168 = FUN_146d0093a;
  local_170 = local_278;
  local_178 = FUN_146d009b4;
  local_2f8 = param_14;
  local_300 = &local_2b0;
  local_308 = &local_298;
  local_310 = &local_228;
  local_318 = &local_280;
  uVar5 = FUN_144918d86(&local_238,&local_248);
  if (uVar5 < 2) {
    param_7[2] = local_218;
    *param_7 = local_228;
    param_7[1] = dStack_220;
    dVar14 = *param_3;
    dVar25 = -dVar14;
    dVar22 = -param_3[1];
    dVar29 = param_3[2] * -1.0;
    dVar24 = param_3[3] * 1.0;
    dVar33 = dStack_220 * dVar25 - local_228 * dVar22;
    dVar15 = local_218 * dVar22 - dStack_220 * dVar29;
    dVar13 = local_228 * dVar29 - dVar25 * local_218;
    dVar15 = dVar15 + dVar15;
    dVar13 = dVar13 + dVar13;
    dVar33 = dVar33 + dVar33;
    *param_8 = (dVar33 * dVar22 - dVar13 * dVar29) + dVar24 * dVar15 + local_228;
    param_8[1] = dVar14 * dVar33 + dVar29 * dVar15 + dVar24 * dVar13 + dStack_220;
    param_8[2] = dVar24 * dVar33 + local_218 + (dVar13 * dVar25 - dVar15 * dVar22);
    *local_2d0 = local_280 + local_2e0 + local_2d8;
    *param_5 = local_2e0 * local_228 + local_298;
    param_5[1] = local_2e0 * dStack_220 + local_290;
    param_5[2] = local_2e0 * local_218 + local_288;
    dVar22 = (local_2b0 - local_2d8 * local_228) - param_3[4];
    dVar33 = (local_2a8 - dStack_220 * local_2d8) - param_3[5];
    dVar25 = (local_2a0 - local_218 * local_2d8) - param_3[6];
    dVar24 = *param_3;
    dVar14 = param_3[2] * -1.0;
    dVar29 = param_3[3] * 1.0;
    dVar21 = -dVar24;
    dVar34 = -param_3[1];
    dVar19 = dVar22 * dVar14 - dVar21 * dVar25;
    dVar13 = dVar33 * dVar21 - dVar22 * dVar34;
    dVar15 = dVar25 * dVar34 - dVar33 * dVar14;
    dVar15 = dVar15 + dVar15;
    dVar19 = dVar19 + dVar19;
    dVar13 = dVar13 + dVar13;
    *param_6 = (dVar13 * dVar34 - dVar19 * dVar14) + dVar29 * dVar15 + dVar22;
    param_6[1] = dVar24 * dVar13 + dVar14 * dVar15 + dVar29 * dVar19 + dVar33;
    param_6[2] = dVar29 * dVar13 + dVar25 + (dVar19 * dVar21 - dVar15 * dVar34);
    *param_12 = CONCAT44(uVar27,uVar26);
    if (local_248 != 0) {
      FUN_1400020a8();
    }
    if (local_238 != 0) {
      FUN_1400020a8();
    }
    goto LAB_146d0012e;
  }
  if (uVar5 == 3) {
    dVar21 = -0.0;
    dVar22 = -local_280;
    dVar29 = local_218;
    dVar24 = local_228;
    dVar25 = dStack_220;
  }
  if (local_248 != 0) {
    FUN_1400020a8();
  }
  if (local_238 != 0) {
    FUN_1400020a8();
  }
  goto LAB_146cffec0;
code_r0x000146cffe3d:
  dVar33 = dVar14 - param_13;
  dVar14 = 1.0 / dVar22;
  local_200 = local_200 * dVar14;
  dStack_1f8 = dStack_1f8 * dVar14;
  dStack_1f0 = dStack_1f0 * dVar14;
  dVar29 = -dStack_1f0;
  dVar24 = -local_200;
  dVar25 = -dStack_1f8;
  bVar12 = iVar10 == 0;
  iVar10 = iVar10 + -1;
  dVar14 = dVar22;
  if (bVar12 || dVar33 <= dVar22) {
    if (dVar32 <= dVar30) {
      uVar26 = SUB84(dVar30,0);
      uVar27 = uVar28;
    }
    *(uint *)(param_11 + 0x1c) = local_204;
LAB_146cffec0:
    local_2e8 = CONCAT44(uVar27,uVar26);
    local_2c8._8_4_ = SUB84(dVar21,0);
    local_2c8._0_8_ = dVar22;
    local_2c8._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    if ((int)uVar4 < 1) {
      dVar33 = 0.0;
      dVar13 = 0.0;
      dVar14 = 0.0;
      dVar15 = 0.0;
      dVar19 = 0.0;
      dVar21 = 0.0;
    }
    else {
      pdVar8 = param_11 + 0xe;
      dVar21 = 0.0;
      uVar7 = 0;
      dVar19 = 0.0;
      dVar15 = 0.0;
      dVar14 = 0.0;
      dVar13 = 0.0;
      dVar33 = 0.0;
      do {
        dVar34 = (param_11 + 0x18)[uVar7];
        dVar21 = dVar21 + pdVar8[-0xc] * dVar34;
        dVar19 = dVar19 + pdVar8[-0xd] * dVar34;
        dVar15 = dVar15 + pdVar8[-0xe] * dVar34;
        dVar14 = dVar14 + *pdVar8 * dVar34;
        dVar13 = dVar13 + pdVar8[-1] * dVar34;
        dVar33 = dVar33 + dVar34 * pdVar8[-2];
        uVar7 = uVar7 + 1;
        pdVar8 = pdVar8 + 3;
      } while (uVar4 != uVar7);
    }
    *param_7 = dVar24;
    param_7[1] = dVar25;
    param_7[2] = dVar29;
    dVar3 = *param_3;
    dVar34 = -dVar3;
    dVar2 = -param_3[1];
    dVar20 = param_3[2] * -1.0;
    dVar23 = param_3[3] * 1.0;
    dVar18 = dVar24 * dVar20 - dVar34 * dVar29;
    dVar30 = dVar25 * dVar34 - dVar24 * dVar2;
    dVar32 = dVar29 * dVar2 - dVar25 * dVar20;
    dVar32 = dVar32 + dVar32;
    dVar18 = dVar18 + dVar18;
    dVar30 = dVar30 + dVar30;
    *param_8 = (dVar30 * dVar2 - dVar18 * dVar20) + dVar23 * dVar32 + dVar24;
    param_8[1] = dVar3 * dVar30 + dVar20 * dVar32 + dVar23 * dVar18 + dVar25;
    param_8[2] = dVar23 * dVar30 + dVar29 + (dVar18 * dVar34 - dVar32 * dVar2);
    *local_2d0 = (local_2e0 + local_2d8) - dVar22;
    dVar29 = param_7[2];
    dVar24 = param_7[1];
    *param_5 = local_2e0 * *param_7 + dVar15;
    param_5[1] = dVar24 * local_2e0 + dVar19;
    param_5[2] = dVar29 * local_2e0 + dVar21;
    dVar29 = param_8[2];
    dVar24 = param_8[1];
    *param_6 = dVar33 - local_2d8 * *param_8;
    param_6[1] = dVar13 - dVar24 * local_2d8;
    param_6[2] = dVar14 - dVar29 * local_2d8;
    *param_12 = local_2e8;
LAB_146d0012e:
    if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_146cffbe1;
}



// FUNCTION 146d007a2 FUN_146d007a2 body=407 status=ok
// SIG undefined FUN_146d007a2(void)

undefined8 FUN_146d007a2(longlong *param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  pdVar8 = (double *)param_1[1];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar4 = pdVar8[2];
  dVar5 = *pdVar8;
  dVar6 = pdVar8[1];
  dVar10 = dVar6 * dVar3 - dVar2 * dVar4;
  dVar10 = dVar10 + dVar10;
  dVar7 = pdVar8[3];
  dVar11 = dVar5 * dVar2 - dVar1 * dVar6;
  dVar11 = dVar11 + dVar11;
  dVar12 = dVar4 * dVar1 - dVar3 * dVar5;
  dVar12 = dVar12 + dVar12;
  local_68 = (dVar5 * dVar12 - dVar10 * dVar6) + dVar7 * dVar11 + dVar3;
  local_70 = (dVar4 * dVar10 - dVar11 * dVar5) + dVar7 * dVar12 + dVar2;
  local_78 = (dVar6 * dVar11 - dVar12 * dVar4) + dVar10 * dVar7 + dVar1;
  local_90 = (undefined4)param_1[2];
  uStack_8c = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_88 = (undefined4)param_1[3];
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x1c);
  lVar9 = *(longlong *)*param_1;
  local_98 = lVar9 + 0x20;
  FUN_144a94486(*(undefined8 *)(lVar9 + 0x88),param_2,&local_78,((longlong *)*param_1)[1]);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0093a FUN_146d0093a body=121 status=ok
// SIG undefined FUN_146d0093a(void)

undefined8 FUN_146d0093a(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined4)param_2[1];
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_38 = (undefined4)param_2[2];
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  lVar1 = *(longlong *)*param_2;
  local_48 = lVar1 + 0x20;
  FUN_144a94486(*(undefined8 *)(lVar1 + 0x88),param_1,&local_28,((longlong *)*param_2)[1]);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d009b4 FUN_146d009b4 body=28 status=ok
// SIG undefined FUN_146d009b4(void)

undefined8 FUN_146d009b4(undefined8 param_1,undefined8 param_2)

{
  FUN_146d009d0(param_2,param_1);
  return param_1;
}



// FUNCTION 146d009d0 FUN_146d009d0 body=620 status=ok
// SIG undefined FUN_146d009d0(void)

double * FUN_146d009d0(longlong *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  longlong lStack_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pdVar7 = (double *)param_1[2];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar4 = pdVar7[2];
  dVar11 = *pdVar7;
  dVar5 = pdVar7[1];
  dVar9 = dVar5 * dVar3 - dVar2 * dVar4;
  dVar9 = dVar9 + dVar9;
  dVar6 = pdVar7[3];
  dVar12 = dVar11 * dVar2 - dVar1 * dVar5;
  dVar12 = dVar12 + dVar12;
  dVar10 = dVar4 * dVar1 - dVar3 * dVar11;
  dVar10 = dVar10 + dVar10;
  local_90 = (dVar11 * dVar10 - dVar9 * dVar5) + dVar6 * dVar12 + dVar3;
  local_98 = (dVar4 * dVar9 - dVar12 * dVar11) + dVar6 * dVar10 + dVar2;
  local_a0 = (dVar5 * dVar12 - dVar10 * dVar4) + dVar9 * dVar6 + dVar1;
  local_b0 = param_1[3];
  lStack_a8 = param_1[4];
  lVar8 = *(longlong *)*param_1;
  local_b8 = lVar8 + 0x20;
  FUN_144a94486(*(undefined8 *)(lVar8 + 0x88),&local_88,&local_a0,((longlong *)*param_1)[1]);
  pdVar7 = (double *)param_1[1];
  dVar5 = *pdVar7;
  dVar6 = pdVar7[1];
  dVar9 = pdVar7[2];
  dVar1 = pdVar7[3];
  dVar2 = pdVar7[3];
  dVar11 = dStack_80 * dVar5 - local_88 * dVar6;
  dVar12 = local_78 * dVar6 - dStack_80 * dVar9;
  dVar10 = local_88 * dVar9 - dVar5 * local_78;
  dVar12 = dVar12 + dVar12;
  dVar10 = dVar10 + dVar10;
  dVar11 = dVar11 + dVar11;
  dVar4 = pdVar7[5];
  dVar3 = pdVar7[6];
  *param_2 = (dVar11 * dVar6 - dVar10 * dVar9) + dVar1 * dVar12 + local_88 + pdVar7[4];
  param_2[1] = (dVar9 * dVar12 - dVar5 * dVar11) + dVar2 * dVar10 + dStack_80 + dVar4;
  param_2[2] = dVar11 * dVar1 + local_78 + (dVar10 * dVar5 - dVar12 * dVar6) + dVar3;
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d00c3d FUN_146d00c3d body=2100 status=ok
// SIG undefined FUN_146d00c3d(void)

void FUN_146d00c3d(undefined8 param_1,undefined8 *param_2,double *param_3,double *param_4,
                  double *param_5,double *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9,double *param_10,double param_11,undefined8 param_12)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  double *pdVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  uint uVar24;
  undefined4 uVar25;
  uint uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  uint uVar30;
  undefined1 local_378 [32];
  double *local_358;
  double *local_350;
  double *local_348;
  undefined4 *local_340;
  undefined8 local_338;
  double *local_328;
  double *local_320;
  double local_318;
  double local_310;
  longlong local_308;
  undefined8 uStack_300;
  longlong local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  double local_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  uint local_2b4;
  undefined8 *local_2b0;
  double *local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  double *local_290;
  undefined8 local_288;
  double local_280;
  double local_278;
  double local_270;
  double dStack_268;
  double local_260;
  code *local_258;
  undefined8 **local_250;
  code *local_248;
  undefined8 *local_240;
  double local_238 [12];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  double local_1c8 [10];
  undefined8 local_178;
  undefined4 auStack_170 [2];
  double local_168 [10];
  double local_118 [4];
  uint local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)local_378;
  local_f8 = 0;
  local_278 = 0.0;
  local_2a8 = &local_280;
  local_280 = 0.0;
  local_288 = param_7;
  local_2a0 = param_8;
  dVar2 = *param_10;
  dVar3 = param_10[1];
  dVar19 = param_10[2];
  local_2b4 = 0;
  uVar24 = (uint)((ulonglong)dVar19 >> 0x20) ^ 0x80000000;
  uVar23 = SUB84(dVar19,0);
  uVar26 = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
  uVar25 = SUB84(dVar3,0);
  uVar30 = (uint)((ulonglong)dVar2 >> 0x20) ^ 0x80000000;
  uVar29 = SUB84(dVar2,0);
  iVar16 = 0x1e;
  dVar20 = 3.4028234663852886e+38;
  local_328 = param_3;
  local_320 = param_4;
  local_2b0 = param_2;
  local_298 = param_1;
  local_290 = &local_278;
LAB_146d00da1:
  local_260 = -dVar19;
  local_270 = -dVar2;
  dStack_268 = -dVar3;
  local_350 = (double *)param_7;
  local_358 = &local_278;
  FUN_1449cbc5a(param_1,&local_2d0,&local_270,0);
  local_270 = dVar2;
  dStack_268 = dVar3;
  local_260 = dVar19;
  FUN_146d01472(*param_2,&local_2e8,&local_270,param_8);
  dVar21 = local_278;
  local_318 = local_280;
  uVar27 = SUB84(local_278,0);
  uVar28 = (undefined4)((ulonglong)local_278 >> 0x20);
  lVar12 = (longlong)(int)local_2b4;
  local_2b4 = local_2b4 + 1;
  local_1c8[lVar12 * 3] = local_2c0;
  (&local_1d8)[lVar12 * 3] = local_2d0;
  (&uStack_1d0)[lVar12 * 3] = dStack_2c8;
  local_168[lVar12 * 3] = local_2d8;
  *(undefined4 *)(&local_178 + lVar12 * 3) = local_2e8;
  auStack_170[lVar12 * 6 + -1] = uStack_2e4;
  auStack_170[lVar12 * 6] = uStack_2e0;
  auStack_170[lVar12 * 6 + 1] = uStack_2dc;
  local_238[lVar12 * 3] = local_2d0 - (double)CONCAT44(uStack_2e4,local_2e8);
  local_238[lVar12 * 3 + 1] = dStack_2c8 - (double)CONCAT44(uStack_2dc,uStack_2e0);
  local_238[lVar12 * 3 + 2] = local_2c0 - local_2d8;
  local_358 = (double *)&local_1d8;
  local_350 = (double *)&local_178;
  FUN_146ced5ca(&local_270,local_238,&local_2b4,local_118);
  uVar10 = local_2b4;
  dVar6 = SQRT(local_260 * local_260 + local_270 * local_270 + dStack_268 * dStack_268);
  if (param_11 <= dVar6) goto code_r0x000146d00f6c;
  lVar12 = (longlong)(int)local_2b4;
  local_f8 = local_2b4;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_308 = 0;
  uStack_300 = 0;
  FUN_140268ec4(&local_2f8,8);
  FUN_140268ec4(&local_308,8);
  if (0 < lVar12) {
    lVar17 = 0;
    do {
      uVar14 = uStack_2f0;
      lVar15 = (longlong)(int)uStack_2f0;
      uVar11 = (int)uStack_2f0 + 1;
      uStack_2f0 = CONCAT44(uStack_2f0._4_4_,uVar11);
      if (uStack_2f0._4_4_ < uVar11) {
        FUN_14026a4e8(&local_2f8,uVar14 & 0xffffffff);
      }
      uVar14 = uStack_300;
      *(undefined8 *)(local_2f8 + 0x10 + lVar15 * 0x18) =
           *(undefined8 *)((longlong)local_1c8 + lVar17);
      uVar7 = *(undefined4 *)((longlong)&local_1d8 + lVar17 + 4);
      uVar8 = *(undefined4 *)((longlong)&uStack_1d0 + lVar17);
      uVar9 = *(undefined4 *)((longlong)local_1c8 + lVar17 + -4);
      puVar1 = (undefined4 *)(local_2f8 + lVar15 * 0x18);
      *puVar1 = *(undefined4 *)((longlong)&local_1d8 + lVar17);
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      lVar15 = (longlong)(int)uStack_300;
      uVar11 = (int)uStack_300 + 1;
      uStack_300 = CONCAT44(uStack_300._4_4_,uVar11);
      if (uStack_300._4_4_ < uVar11) {
        FUN_14026a4e8(&local_308,uVar14 & 0xffffffff);
      }
      *(undefined8 *)(local_308 + 0x10 + lVar15 * 0x18) =
           *(undefined8 *)((longlong)local_168 + lVar17);
      uVar7 = *(undefined4 *)((longlong)auStack_170 + lVar17 + -4);
      uVar8 = *(undefined4 *)((longlong)auStack_170 + lVar17);
      uVar9 = *(undefined4 *)((longlong)auStack_170 + lVar17 + 4);
      puVar1 = (undefined4 *)(local_308 + lVar15 * 0x18);
      *puVar1 = *(undefined4 *)((longlong)&local_178 + lVar17);
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      lVar17 = lVar17 + 0x18;
    } while (lVar12 * 0x18 != lVar17);
  }
  if (dVar21 <= local_318) {
    uVar27 = SUB84(local_318,0);
    uVar28 = (undefined4)((ulonglong)local_318 >> 0x20);
  }
  local_240 = &local_298;
  local_248 = FUN_146d0159c;
  local_250 = &local_2b0;
  local_258 = FUN_146d01602;
  local_338 = param_12;
  local_340 = &local_2e8;
  local_348 = &local_2d0;
  local_358 = &local_310;
  local_350 = &local_270;
  uVar11 = FUN_144918d86(&local_2f8);
  if (uVar11 < 2) {
    param_6[2] = local_260;
    *param_6 = local_270;
    param_6[1] = dStack_268;
    *local_328 = local_310 + 0.0;
    *local_320 = local_2d0 + local_270 * 0.0;
    local_320[1] = dStack_2c8 + dStack_268 * 0.0;
    local_320[2] = local_2c0 + local_260 * 0.0;
    *param_5 = (double)CONCAT44(uStack_2e4,local_2e8) - local_270 * 0.0;
    param_5[1] = (double)CONCAT44(uStack_2dc,uStack_2e0) - dStack_268 * 0.0;
    param_5[2] = local_2d8 - local_260 * 0.0;
    *param_9 = CONCAT44(uVar28,uVar27);
    bVar18 = false;
  }
  else {
    bVar18 = true;
    if (uVar11 == 3) {
      uVar29 = SUB84(local_270,0);
      uVar30 = (uint)((ulonglong)local_270 >> 0x20);
      uVar25 = SUB84(dStack_268,0);
      uVar26 = (uint)((ulonglong)dStack_268 >> 0x20);
      uVar23 = SUB84(local_260,0);
      uVar24 = (uint)((ulonglong)local_260 >> 0x20);
      dVar6 = -local_310;
    }
  }
  if (local_308 != 0) {
    FUN_1400020a8();
  }
  if (local_2f8 != 0) {
    FUN_1400020a8();
  }
  if (!bVar18) goto LAB_146d01111;
  goto LAB_146d00fe3;
code_r0x000146d00f6c:
  dVar22 = dVar20 - param_11;
  dVar19 = 1.0 / dVar6;
  dVar2 = local_270 * dVar19;
  dVar3 = dStack_268 * dVar19;
  dVar19 = local_260 * dVar19;
  uVar24 = (uint)((ulonglong)dVar19 >> 0x20) ^ 0x80000000;
  uVar23 = SUB84(dVar19,0);
  uVar26 = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
  uVar25 = SUB84(dVar3,0);
  uVar30 = (uint)((ulonglong)dVar2 >> 0x20) ^ 0x80000000;
  uVar29 = SUB84(dVar2,0);
  bVar18 = iVar16 == 0;
  iVar16 = iVar16 + -1;
  dVar20 = dVar6;
  if (bVar18 || dVar22 <= dVar6) {
    if (dVar21 <= local_318) {
      uVar27 = SUB84(local_318,0);
      uVar28 = (undefined4)((ulonglong)local_318 >> 0x20);
    }
    local_f8 = local_2b4;
LAB_146d00fe3:
    dVar2 = 0.0;
    dVar20 = 0.0;
    dVar19 = 0.0;
    dVar3 = 0.0;
    dVar22 = 0.0;
    dVar21 = 0.0;
    if (0 < (int)uVar10) {
      pdVar13 = local_168;
      uVar14 = 0;
      dVar3 = 0.0;
      dVar2 = 0.0;
      do {
        dVar4 = local_118[uVar14];
        dVar21 = dVar21 + pdVar13[-0xc] * dVar4;
        dVar22 = dVar22 + pdVar13[-0xd] * dVar4;
        dVar3 = dVar3 + pdVar13[-0xe] * dVar4;
        dVar19 = dVar19 + *pdVar13 * dVar4;
        dVar20 = dVar20 + pdVar13[-1] * dVar4;
        dVar2 = dVar2 + dVar4 * pdVar13[-2];
        uVar14 = uVar14 + 1;
        pdVar13 = pdVar13 + 3;
      } while (uVar10 != uVar14);
    }
    *local_328 = 0.0 - dVar6;
    dVar4 = (double)CONCAT44(uVar24,uVar23) * 0.0;
    dVar5 = (double)CONCAT44(uVar26,uVar25) * 0.0;
    dVar6 = (double)CONCAT44(uVar30,uVar29) * 0.0;
    *local_320 = dVar3 + dVar6;
    local_320[1] = dVar22 + dVar5;
    local_320[2] = dVar21 + dVar4;
    *param_5 = dVar2 - dVar6;
    param_5[1] = dVar20 - dVar5;
    param_5[2] = dVar19 - dVar4;
    *param_6 = (double)CONCAT44(uVar30,uVar29);
    param_6[1] = (double)CONCAT44(uVar26,uVar25);
    param_6[2] = (double)CONCAT44(uVar24,uVar23);
    *param_9 = CONCAT44(uVar28,uVar27);
LAB_146d01111:
    if ((local_f0 ^ (ulonglong)local_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_146d00da1;
}



// FUNCTION 146d01472 FUN_146d01472 body=297 status=ok
// SIG undefined FUN_146d01472(void)

void FUN_146d01472(double *param_1,double *param_2,double *param_3,uint *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar7 = param_3[2] * param_1[5] + *param_3 * param_1[3] + param_3[1] * param_1[4];
  if (0.0 <= dVar7) {
    dVar4 = param_1[6];
    dVar6 = param_1[5] * dVar4 + param_1[2];
    dVar5 = param_1[4] * dVar4 + param_1[1];
    dVar4 = param_1[3] * dVar4 + *param_1;
  }
  else {
    dVar4 = *param_1;
    dVar5 = param_1[1];
    dVar6 = param_1[2];
  }
  *param_4 = (uint)(0.0 <= dVar7);
  dVar7 = *param_3;
  dVar1 = param_3[1];
  dVar2 = param_3[2];
  dVar3 = dVar2 * dVar2 + dVar7 * dVar7 + dVar1 * dVar1;
  if (2.2250738585072014e-308 < dVar3) {
    dVar3 = SQRT(dVar3);
    dVar6 = dVar6 + (dVar2 / dVar3) * 0.0;
    dVar5 = dVar5 + (dVar1 / dVar3) * 0.0;
    dVar4 = dVar4 + (dVar7 / dVar3) * 0.0;
  }
  *param_2 = dVar4;
  param_2[1] = dVar5;
  param_2[2] = dVar6;
  return;
}



// FUNCTION 146d0159c FUN_146d0159c body=100 status=ok
// SIG undefined FUN_146d0159c(void)

undefined8 FUN_146d0159c(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined4 *)(param_2 + 1);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = *(undefined4 *)(param_2 + 2);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1449cbc5a(*param_2,param_1,&local_28,0);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d01602 FUN_146d01602 body=95 status=ok
// SIG undefined FUN_146d01602(void)

undefined8 FUN_146d01602(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_3 + 4);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_146d01472(*(undefined8 *)*param_2,param_1,&local_28,param_2[2]);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d01662 FUN_146d01662 body=2100 status=ok
// SIG undefined FUN_146d01662(void)

void FUN_146d01662(undefined8 param_1,undefined8 *param_2,double *param_3,double *param_4,
                  double *param_5,double *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9,double *param_10,double param_11,undefined8 param_12)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  double *pdVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  uint uVar24;
  undefined4 uVar25;
  uint uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  uint uVar30;
  undefined1 local_378 [32];
  double *local_358;
  double *local_350;
  double *local_348;
  undefined4 *local_340;
  undefined8 local_338;
  double *local_328;
  double *local_320;
  double local_318;
  double local_310;
  longlong local_308;
  undefined8 uStack_300;
  longlong local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  double local_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  uint local_2b4;
  undefined8 *local_2b0;
  double *local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  double *local_290;
  undefined8 local_288;
  double local_280;
  double local_278;
  double local_270;
  double dStack_268;
  double local_260;
  code *local_258;
  undefined8 **local_250;
  code *local_248;
  undefined8 *local_240;
  double local_238 [12];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  double local_1c8 [10];
  undefined8 local_178;
  undefined4 auStack_170 [2];
  double local_168 [10];
  double local_118 [4];
  uint local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)local_378;
  local_f8 = 0;
  local_278 = 0.0;
  local_2a8 = &local_280;
  local_280 = 0.0;
  local_288 = param_7;
  local_2a0 = param_8;
  dVar2 = *param_10;
  dVar3 = param_10[1];
  dVar19 = param_10[2];
  local_2b4 = 0;
  uVar24 = (uint)((ulonglong)dVar19 >> 0x20) ^ 0x80000000;
  uVar23 = SUB84(dVar19,0);
  uVar26 = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
  uVar25 = SUB84(dVar3,0);
  uVar30 = (uint)((ulonglong)dVar2 >> 0x20) ^ 0x80000000;
  uVar29 = SUB84(dVar2,0);
  iVar16 = 0x1e;
  dVar20 = 3.4028234663852886e+38;
  local_328 = param_3;
  local_320 = param_4;
  local_2b0 = param_2;
  local_298 = param_1;
  local_290 = &local_278;
LAB_146d017c6:
  local_260 = -dVar19;
  local_270 = -dVar2;
  dStack_268 = -dVar3;
  local_350 = (double *)param_7;
  local_358 = &local_278;
  FUN_1449cbad8(param_1,&local_2d0,&local_270,0);
  local_270 = dVar2;
  dStack_268 = dVar3;
  local_260 = dVar19;
  FUN_146d01472(*param_2,&local_2e8,&local_270,param_8);
  dVar21 = local_278;
  local_318 = local_280;
  uVar27 = SUB84(local_278,0);
  uVar28 = (undefined4)((ulonglong)local_278 >> 0x20);
  lVar12 = (longlong)(int)local_2b4;
  local_2b4 = local_2b4 + 1;
  local_1c8[lVar12 * 3] = local_2c0;
  (&local_1d8)[lVar12 * 3] = local_2d0;
  (&uStack_1d0)[lVar12 * 3] = dStack_2c8;
  local_168[lVar12 * 3] = local_2d8;
  *(undefined4 *)(&local_178 + lVar12 * 3) = local_2e8;
  auStack_170[lVar12 * 6 + -1] = uStack_2e4;
  auStack_170[lVar12 * 6] = uStack_2e0;
  auStack_170[lVar12 * 6 + 1] = uStack_2dc;
  local_238[lVar12 * 3] = local_2d0 - (double)CONCAT44(uStack_2e4,local_2e8);
  local_238[lVar12 * 3 + 1] = dStack_2c8 - (double)CONCAT44(uStack_2dc,uStack_2e0);
  local_238[lVar12 * 3 + 2] = local_2c0 - local_2d8;
  local_358 = (double *)&local_1d8;
  local_350 = (double *)&local_178;
  FUN_146ced5ca(&local_270,local_238,&local_2b4,local_118);
  uVar10 = local_2b4;
  dVar6 = SQRT(local_260 * local_260 + local_270 * local_270 + dStack_268 * dStack_268);
  if (param_11 <= dVar6) goto code_r0x000146d01991;
  lVar12 = (longlong)(int)local_2b4;
  local_f8 = local_2b4;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_308 = 0;
  uStack_300 = 0;
  FUN_140268ec4(&local_2f8,8);
  FUN_140268ec4(&local_308,8);
  if (0 < lVar12) {
    lVar17 = 0;
    do {
      uVar14 = uStack_2f0;
      lVar15 = (longlong)(int)uStack_2f0;
      uVar11 = (int)uStack_2f0 + 1;
      uStack_2f0 = CONCAT44(uStack_2f0._4_4_,uVar11);
      if (uStack_2f0._4_4_ < uVar11) {
        FUN_14026a4e8(&local_2f8,uVar14 & 0xffffffff);
      }
      uVar14 = uStack_300;
      *(undefined8 *)(local_2f8 + 0x10 + lVar15 * 0x18) =
           *(undefined8 *)((longlong)local_1c8 + lVar17);
      uVar7 = *(undefined4 *)((longlong)&local_1d8 + lVar17 + 4);
      uVar8 = *(undefined4 *)((longlong)&uStack_1d0 + lVar17);
      uVar9 = *(undefined4 *)((longlong)local_1c8 + lVar17 + -4);
      puVar1 = (undefined4 *)(local_2f8 + lVar15 * 0x18);
      *puVar1 = *(undefined4 *)((longlong)&local_1d8 + lVar17);
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      lVar15 = (longlong)(int)uStack_300;
      uVar11 = (int)uStack_300 + 1;
      uStack_300 = CONCAT44(uStack_300._4_4_,uVar11);
      if (uStack_300._4_4_ < uVar11) {
        FUN_14026a4e8(&local_308,uVar14 & 0xffffffff);
      }
      *(undefined8 *)(local_308 + 0x10 + lVar15 * 0x18) =
           *(undefined8 *)((longlong)local_168 + lVar17);
      uVar7 = *(undefined4 *)((longlong)auStack_170 + lVar17 + -4);
      uVar8 = *(undefined4 *)((longlong)auStack_170 + lVar17);
      uVar9 = *(undefined4 *)((longlong)auStack_170 + lVar17 + 4);
      puVar1 = (undefined4 *)(local_308 + lVar15 * 0x18);
      *puVar1 = *(undefined4 *)((longlong)&local_178 + lVar17);
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      lVar17 = lVar17 + 0x18;
    } while (lVar12 * 0x18 != lVar17);
  }
  if (dVar21 <= local_318) {
    uVar27 = SUB84(local_318,0);
    uVar28 = (undefined4)((ulonglong)local_318 >> 0x20);
  }
  local_240 = &local_298;
  local_248 = FUN_146d01e98;
  local_250 = &local_2b0;
  local_258 = FUN_146d01efe;
  local_338 = param_12;
  local_340 = &local_2e8;
  local_348 = &local_2d0;
  local_358 = &local_310;
  local_350 = &local_270;
  uVar11 = FUN_144918d86(&local_2f8);
  if (uVar11 < 2) {
    param_6[2] = local_260;
    *param_6 = local_270;
    param_6[1] = dStack_268;
    *local_328 = local_310 + 0.0;
    *local_320 = local_2d0 + local_270 * 0.0;
    local_320[1] = dStack_2c8 + dStack_268 * 0.0;
    local_320[2] = local_2c0 + local_260 * 0.0;
    *param_5 = (double)CONCAT44(uStack_2e4,local_2e8) - local_270 * 0.0;
    param_5[1] = (double)CONCAT44(uStack_2dc,uStack_2e0) - dStack_268 * 0.0;
    param_5[2] = local_2d8 - local_260 * 0.0;
    *param_9 = CONCAT44(uVar28,uVar27);
    bVar18 = false;
  }
  else {
    bVar18 = true;
    if (uVar11 == 3) {
      uVar29 = SUB84(local_270,0);
      uVar30 = (uint)((ulonglong)local_270 >> 0x20);
      uVar25 = SUB84(dStack_268,0);
      uVar26 = (uint)((ulonglong)dStack_268 >> 0x20);
      uVar23 = SUB84(local_260,0);
      uVar24 = (uint)((ulonglong)local_260 >> 0x20);
      dVar6 = -local_310;
    }
  }
  if (local_308 != 0) {
    FUN_1400020a8();
  }
  if (local_2f8 != 0) {
    FUN_1400020a8();
  }
  if (!bVar18) goto LAB_146d01b36;
  goto LAB_146d01a08;
code_r0x000146d01991:
  dVar22 = dVar20 - param_11;
  dVar19 = 1.0 / dVar6;
  dVar2 = local_270 * dVar19;
  dVar3 = dStack_268 * dVar19;
  dVar19 = local_260 * dVar19;
  uVar24 = (uint)((ulonglong)dVar19 >> 0x20) ^ 0x80000000;
  uVar23 = SUB84(dVar19,0);
  uVar26 = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
  uVar25 = SUB84(dVar3,0);
  uVar30 = (uint)((ulonglong)dVar2 >> 0x20) ^ 0x80000000;
  uVar29 = SUB84(dVar2,0);
  bVar18 = iVar16 == 0;
  iVar16 = iVar16 + -1;
  dVar20 = dVar6;
  if (bVar18 || dVar22 <= dVar6) {
    if (dVar21 <= local_318) {
      uVar27 = SUB84(local_318,0);
      uVar28 = (undefined4)((ulonglong)local_318 >> 0x20);
    }
    local_f8 = local_2b4;
LAB_146d01a08:
    dVar2 = 0.0;
    dVar20 = 0.0;
    dVar19 = 0.0;
    dVar3 = 0.0;
    dVar22 = 0.0;
    dVar21 = 0.0;
    if (0 < (int)uVar10) {
      pdVar13 = local_168;
      uVar14 = 0;
      dVar3 = 0.0;
      dVar2 = 0.0;
      do {
        dVar4 = local_118[uVar14];
        dVar21 = dVar21 + pdVar13[-0xc] * dVar4;
        dVar22 = dVar22 + pdVar13[-0xd] * dVar4;
        dVar3 = dVar3 + pdVar13[-0xe] * dVar4;
        dVar19 = dVar19 + *pdVar13 * dVar4;
        dVar20 = dVar20 + pdVar13[-1] * dVar4;
        dVar2 = dVar2 + dVar4 * pdVar13[-2];
        uVar14 = uVar14 + 1;
        pdVar13 = pdVar13 + 3;
      } while (uVar10 != uVar14);
    }
    *local_328 = 0.0 - dVar6;
    dVar4 = (double)CONCAT44(uVar24,uVar23) * 0.0;
    dVar5 = (double)CONCAT44(uVar26,uVar25) * 0.0;
    dVar6 = (double)CONCAT44(uVar30,uVar29) * 0.0;
    *local_320 = dVar3 + dVar6;
    local_320[1] = dVar22 + dVar5;
    local_320[2] = dVar21 + dVar4;
    *param_5 = dVar2 - dVar6;
    param_5[1] = dVar20 - dVar5;
    param_5[2] = dVar19 - dVar4;
    *param_6 = (double)CONCAT44(uVar30,uVar29);
    param_6[1] = (double)CONCAT44(uVar26,uVar25);
    param_6[2] = (double)CONCAT44(uVar24,uVar23);
    *param_9 = CONCAT44(uVar28,uVar27);
LAB_146d01b36:
    if ((local_f0 ^ (ulonglong)local_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_146d017c6;
}



// FUNCTION 146d01e98 FUN_146d01e98 body=100 status=ok
// SIG undefined FUN_146d01e98(void)

undefined8 FUN_146d01e98(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined4 *)(param_2 + 1);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = *(undefined4 *)(param_2 + 2);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1449cbad8(*param_2,param_1,&local_28,0);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d01efe FUN_146d01efe body=95 status=ok
// SIG undefined FUN_146d01efe(void)

undefined8 FUN_146d01efe(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_3 + 4);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_146d01472(*(undefined8 *)*param_2,param_1,&local_28,param_2[2]);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d01f5e FUN_146d01f5e body=2100 status=ok
// SIG undefined FUN_146d01f5e(void)

void FUN_146d01f5e(undefined8 param_1,undefined8 *param_2,double *param_3,double *param_4,
                  double *param_5,double *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9,double *param_10,double param_11,undefined8 param_12)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  double *pdVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  uint uVar24;
  undefined4 uVar25;
  uint uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  uint uVar30;
  undefined1 local_378 [32];
  double *local_358;
  double *local_350;
  double *local_348;
  undefined4 *local_340;
  undefined8 local_338;
  double *local_328;
  double *local_320;
  double local_318;
  double local_310;
  longlong local_308;
  undefined8 uStack_300;
  longlong local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  double local_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  uint local_2b4;
  undefined8 *local_2b0;
  double *local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  double *local_290;
  undefined8 local_288;
  double local_280;
  double local_278;
  double local_270;
  double dStack_268;
  double local_260;
  code *local_258;
  undefined8 **local_250;
  code *local_248;
  undefined8 *local_240;
  double local_238 [12];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  double local_1c8 [10];
  undefined8 local_178;
  undefined4 auStack_170 [2];
  double local_168 [10];
  double local_118 [4];
  uint local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)local_378;
  local_f8 = 0;
  local_278 = 0.0;
  local_2a8 = &local_280;
  local_280 = 0.0;
  local_288 = param_7;
  local_2a0 = param_8;
  dVar2 = *param_10;
  dVar3 = param_10[1];
  dVar19 = param_10[2];
  local_2b4 = 0;
  uVar24 = (uint)((ulonglong)dVar19 >> 0x20) ^ 0x80000000;
  uVar23 = SUB84(dVar19,0);
  uVar26 = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
  uVar25 = SUB84(dVar3,0);
  uVar30 = (uint)((ulonglong)dVar2 >> 0x20) ^ 0x80000000;
  uVar29 = SUB84(dVar2,0);
  iVar16 = 0x1e;
  dVar20 = 3.4028234663852886e+38;
  local_328 = param_3;
  local_320 = param_4;
  local_2b0 = param_2;
  local_298 = param_1;
  local_290 = &local_278;
LAB_146d020c2:
  local_260 = -dVar19;
  local_270 = -dVar2;
  dStack_268 = -dVar3;
  local_350 = (double *)param_7;
  local_358 = &local_278;
  FUN_1449c37f8(param_1,&local_2d0,&local_270,0);
  local_270 = dVar2;
  dStack_268 = dVar3;
  local_260 = dVar19;
  FUN_146d01472(*param_2,&local_2e8,&local_270,param_8);
  dVar21 = local_278;
  local_318 = local_280;
  uVar27 = SUB84(local_278,0);
  uVar28 = (undefined4)((ulonglong)local_278 >> 0x20);
  lVar12 = (longlong)(int)local_2b4;
  local_2b4 = local_2b4 + 1;
  local_1c8[lVar12 * 3] = local_2c0;
  (&local_1d8)[lVar12 * 3] = local_2d0;
  (&uStack_1d0)[lVar12 * 3] = dStack_2c8;
  local_168[lVar12 * 3] = local_2d8;
  *(undefined4 *)(&local_178 + lVar12 * 3) = local_2e8;
  auStack_170[lVar12 * 6 + -1] = uStack_2e4;
  auStack_170[lVar12 * 6] = uStack_2e0;
  auStack_170[lVar12 * 6 + 1] = uStack_2dc;
  local_238[lVar12 * 3] = local_2d0 - (double)CONCAT44(uStack_2e4,local_2e8);
  local_238[lVar12 * 3 + 1] = dStack_2c8 - (double)CONCAT44(uStack_2dc,uStack_2e0);
  local_238[lVar12 * 3 + 2] = local_2c0 - local_2d8;
  local_358 = (double *)&local_1d8;
  local_350 = (double *)&local_178;
  FUN_146ced5ca(&local_270,local_238,&local_2b4,local_118);
  uVar10 = local_2b4;
  dVar6 = SQRT(local_260 * local_260 + local_270 * local_270 + dStack_268 * dStack_268);
  if (param_11 <= dVar6) goto code_r0x000146d0228d;
  lVar12 = (longlong)(int)local_2b4;
  local_f8 = local_2b4;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_308 = 0;
  uStack_300 = 0;
  FUN_140268ec4(&local_2f8,8);
  FUN_140268ec4(&local_308,8);
  if (0 < lVar12) {
    lVar17 = 0;
    do {
      uVar14 = uStack_2f0;
      lVar15 = (longlong)(int)uStack_2f0;
      uVar11 = (int)uStack_2f0 + 1;
      uStack_2f0 = CONCAT44(uStack_2f0._4_4_,uVar11);
      if (uStack_2f0._4_4_ < uVar11) {
        FUN_14026a4e8(&local_2f8,uVar14 & 0xffffffff);
      }
      uVar14 = uStack_300;
      *(undefined8 *)(local_2f8 + 0x10 + lVar15 * 0x18) =
           *(undefined8 *)((longlong)local_1c8 + lVar17);
      uVar7 = *(undefined4 *)((longlong)&local_1d8 + lVar17 + 4);
      uVar8 = *(undefined4 *)((longlong)&uStack_1d0 + lVar17);
      uVar9 = *(undefined4 *)((longlong)local_1c8 + lVar17 + -4);
      puVar1 = (undefined4 *)(local_2f8 + lVar15 * 0x18);
      *puVar1 = *(undefined4 *)((longlong)&local_1d8 + lVar17);
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      lVar15 = (longlong)(int)uStack_300;
      uVar11 = (int)uStack_300 + 1;
      uStack_300 = CONCAT44(uStack_300._4_4_,uVar11);
      if (uStack_300._4_4_ < uVar11) {
        FUN_14026a4e8(&local_308,uVar14 & 0xffffffff);
      }
      *(undefined8 *)(local_308 + 0x10 + lVar15 * 0x18) =
           *(undefined8 *)((longlong)local_168 + lVar17);
      uVar7 = *(undefined4 *)((longlong)auStack_170 + lVar17 + -4);
      uVar8 = *(undefined4 *)((longlong)auStack_170 + lVar17);
      uVar9 = *(undefined4 *)((longlong)auStack_170 + lVar17 + 4);
      puVar1 = (undefined4 *)(local_308 + lVar15 * 0x18);
      *puVar1 = *(undefined4 *)((longlong)&local_178 + lVar17);
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      lVar17 = lVar17 + 0x18;
    } while (lVar12 * 0x18 != lVar17);
  }
  if (dVar21 <= local_318) {
    uVar27 = SUB84(local_318,0);
    uVar28 = (undefined4)((ulonglong)local_318 >> 0x20);
  }
  local_240 = &local_298;
  local_248 = FUN_146d02794;
  local_250 = &local_2b0;
  local_258 = FUN_146d027fa;
  local_338 = param_12;
  local_340 = &local_2e8;
  local_348 = &local_2d0;
  local_358 = &local_310;
  local_350 = &local_270;
  uVar11 = FUN_144918d86(&local_2f8);
  if (uVar11 < 2) {
    param_6[2] = local_260;
    *param_6 = local_270;
    param_6[1] = dStack_268;
    *local_328 = local_310 + 0.0;
    *local_320 = local_2d0 + local_270 * 0.0;
    local_320[1] = dStack_2c8 + dStack_268 * 0.0;
    local_320[2] = local_2c0 + local_260 * 0.0;
    *param_5 = (double)CONCAT44(uStack_2e4,local_2e8) - local_270 * 0.0;
    param_5[1] = (double)CONCAT44(uStack_2dc,uStack_2e0) - dStack_268 * 0.0;
    param_5[2] = local_2d8 - local_260 * 0.0;
    *param_9 = CONCAT44(uVar28,uVar27);
    bVar18 = false;
  }
  else {
    bVar18 = true;
    if (uVar11 == 3) {
      uVar29 = SUB84(local_270,0);
      uVar30 = (uint)((ulonglong)local_270 >> 0x20);
      uVar25 = SUB84(dStack_268,0);
      uVar26 = (uint)((ulonglong)dStack_268 >> 0x20);
      uVar23 = SUB84(local_260,0);
      uVar24 = (uint)((ulonglong)local_260 >> 0x20);
      dVar6 = -local_310;
    }
  }
  if (local_308 != 0) {
    FUN_1400020a8();
  }
  if (local_2f8 != 0) {
    FUN_1400020a8();
  }
  if (!bVar18) goto LAB_146d02432;
  goto LAB_146d02304;
code_r0x000146d0228d:
  dVar22 = dVar20 - param_11;
  dVar19 = 1.0 / dVar6;
  dVar2 = local_270 * dVar19;
  dVar3 = dStack_268 * dVar19;
  dVar19 = local_260 * dVar19;
  uVar24 = (uint)((ulonglong)dVar19 >> 0x20) ^ 0x80000000;
  uVar23 = SUB84(dVar19,0);
  uVar26 = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
  uVar25 = SUB84(dVar3,0);
  uVar30 = (uint)((ulonglong)dVar2 >> 0x20) ^ 0x80000000;
  uVar29 = SUB84(dVar2,0);
  bVar18 = iVar16 == 0;
  iVar16 = iVar16 + -1;
  dVar20 = dVar6;
  if (bVar18 || dVar22 <= dVar6) {
    if (dVar21 <= local_318) {
      uVar27 = SUB84(local_318,0);
      uVar28 = (undefined4)((ulonglong)local_318 >> 0x20);
    }
    local_f8 = local_2b4;
LAB_146d02304:
    dVar2 = 0.0;
    dVar20 = 0.0;
    dVar19 = 0.0;
    dVar3 = 0.0;
    dVar22 = 0.0;
    dVar21 = 0.0;
    if (0 < (int)uVar10) {
      pdVar13 = local_168;
      uVar14 = 0;
      dVar3 = 0.0;
      dVar2 = 0.0;
      do {
        dVar4 = local_118[uVar14];
        dVar21 = dVar21 + pdVar13[-0xc] * dVar4;
        dVar22 = dVar22 + pdVar13[-0xd] * dVar4;
        dVar3 = dVar3 + pdVar13[-0xe] * dVar4;
        dVar19 = dVar19 + *pdVar13 * dVar4;
        dVar20 = dVar20 + pdVar13[-1] * dVar4;
        dVar2 = dVar2 + dVar4 * pdVar13[-2];
        uVar14 = uVar14 + 1;
        pdVar13 = pdVar13 + 3;
      } while (uVar10 != uVar14);
    }
    *local_328 = 0.0 - dVar6;
    dVar4 = (double)CONCAT44(uVar24,uVar23) * 0.0;
    dVar5 = (double)CONCAT44(uVar26,uVar25) * 0.0;
    dVar6 = (double)CONCAT44(uVar30,uVar29) * 0.0;
    *local_320 = dVar3 + dVar6;
    local_320[1] = dVar22 + dVar5;
    local_320[2] = dVar21 + dVar4;
    *param_5 = dVar2 - dVar6;
    param_5[1] = dVar20 - dVar5;
    param_5[2] = dVar19 - dVar4;
    *param_6 = (double)CONCAT44(uVar30,uVar29);
    param_6[1] = (double)CONCAT44(uVar26,uVar25);
    param_6[2] = (double)CONCAT44(uVar24,uVar23);
    *param_9 = CONCAT44(uVar28,uVar27);
LAB_146d02432:
    if ((local_f0 ^ (ulonglong)local_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_146d020c2;
}



// FUNCTION 146d02794 FUN_146d02794 body=100 status=ok
// SIG undefined FUN_146d02794(void)

undefined8 FUN_146d02794(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined4 *)(param_2 + 1);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = *(undefined4 *)(param_2 + 2);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1449c37f8(*param_2,param_1,&local_28,0);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d027fa FUN_146d027fa body=95 status=ok
// SIG undefined FUN_146d027fa(void)

undefined8 FUN_146d027fa(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_3 + 4);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_146d01472(*(undefined8 *)*param_2,param_1,&local_28,param_2[2]);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0285a FUN_146d0285a body=2073 status=ok
// SIG undefined FUN_146d0285a(void)

void FUN_146d0285a(undefined8 param_1,undefined8 *param_2,double *param_3,double *param_4,
                  double *param_5,double *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9,double *param_10,double param_11,undefined8 param_12)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  double *pdVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  bool bVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  uint uVar24;
  undefined4 uVar25;
  uint uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  uint uVar30;
  undefined1 local_388 [32];
  double *local_368;
  double *local_360;
  double *local_358;
  double *local_350;
  undefined8 local_348;
  double *local_338;
  double *local_330;
  double local_328;
  double local_320;
  longlong local_318;
  undefined8 uStack_310;
  longlong local_308;
  undefined8 uStack_300;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  double local_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double local_2c0;
  double dStack_2b8;
  double local_2b0;
  uint local_2a4;
  undefined8 *local_2a0;
  double *local_298;
  undefined8 local_290;
  undefined8 local_288;
  double *local_280;
  undefined8 local_278;
  double local_270;
  double local_268;
  double local_260;
  double dStack_258;
  double local_250;
  code *local_248;
  undefined8 **local_240;
  double local_238 [12];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  double local_1c8 [10];
  undefined8 local_178;
  undefined4 auStack_170 [2];
  double local_168 [10];
  double local_118 [4];
  uint local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)local_388;
  local_f8 = 0;
  local_280 = &local_268;
  local_268 = 0.0;
  local_298 = &local_270;
  local_270 = 0.0;
  local_278 = param_7;
  local_290 = param_8;
  dVar2 = *param_10;
  dVar3 = param_10[1];
  dVar19 = param_10[2];
  local_2a4 = 0;
  uVar24 = (uint)((ulonglong)dVar19 >> 0x20) ^ 0x80000000;
  uVar23 = SUB84(dVar19,0);
  uVar26 = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
  uVar25 = SUB84(dVar3,0);
  uVar30 = (uint)((ulonglong)dVar2 >> 0x20) ^ 0x80000000;
  uVar29 = SUB84(dVar2,0);
  iVar17 = 0x1e;
  dVar20 = 3.4028234663852886e+38;
  local_338 = param_3;
  local_330 = param_4;
  local_2a0 = param_2;
  local_288 = param_1;
LAB_146d029c2:
  local_2b0 = -dVar19;
  local_2c0 = -dVar2;
  dStack_2b8 = -dVar3;
  FUN_146d03074(&local_288,&local_2d8,&local_2c0);
  local_260 = dVar2;
  dStack_258 = dVar3;
  local_250 = dVar19;
  FUN_146d01472(*param_2,&local_2f0,&local_260,param_8);
  dVar21 = local_268;
  local_328 = local_270;
  uVar27 = SUB84(local_268,0);
  uVar28 = (undefined4)((ulonglong)local_268 >> 0x20);
  lVar12 = (longlong)(int)local_2a4;
  local_2a4 = local_2a4 + 1;
  local_1c8[lVar12 * 3] = local_2c8;
  (&local_1d8)[lVar12 * 3] = local_2d8;
  (&uStack_1d0)[lVar12 * 3] = dStack_2d0;
  local_168[lVar12 * 3] = local_2e0;
  *(undefined4 *)(&local_178 + lVar12 * 3) = (undefined4)local_2f0;
  auStack_170[lVar12 * 6 + -1] = local_2f0._4_4_;
  auStack_170[lVar12 * 6] = (undefined4)uStack_2e8;
  auStack_170[lVar12 * 6 + 1] = uStack_2e8._4_4_;
  local_238[lVar12 * 3] = local_2d8 - (double)local_2f0;
  local_238[lVar12 * 3 + 1] = dStack_2d0 - (double)uStack_2e8;
  local_238[lVar12 * 3 + 2] = local_2c8 - local_2e0;
  local_368 = (double *)&local_1d8;
  local_360 = (double *)&local_178;
  FUN_146ced5ca(&local_260,local_238,&local_2a4,local_118);
  uVar10 = local_2a4;
  dVar6 = SQRT(local_250 * local_250 + local_260 * local_260 + dStack_258 * dStack_258);
  if (param_11 <= dVar6) goto code_r0x000146d02b77;
  lVar12 = (longlong)(int)local_2a4;
  local_f8 = local_2a4;
  local_308 = 0;
  uStack_300 = 0;
  local_318 = 0;
  uStack_310 = 0;
  FUN_140268ec4(&local_308,8);
  FUN_140268ec4(&local_318,8);
  if (0 < lVar12) {
    lVar15 = 0;
    do {
      uVar14 = uStack_300;
      lVar16 = (longlong)(int)uStack_300;
      uVar11 = (int)uStack_300 + 1;
      uStack_300 = CONCAT44(uStack_300._4_4_,uVar11);
      if (uStack_300._4_4_ < uVar11) {
        FUN_14026a4e8(&local_308,uVar14 & 0xffffffff);
      }
      uVar14 = uStack_310;
      *(undefined8 *)(local_308 + 0x10 + lVar16 * 0x18) =
           *(undefined8 *)((longlong)local_1c8 + lVar15);
      uVar7 = *(undefined4 *)((longlong)&local_1d8 + lVar15 + 4);
      uVar8 = *(undefined4 *)((longlong)&uStack_1d0 + lVar15);
      uVar9 = *(undefined4 *)((longlong)local_1c8 + lVar15 + -4);
      puVar1 = (undefined4 *)(local_308 + lVar16 * 0x18);
      *puVar1 = *(undefined4 *)((longlong)&local_1d8 + lVar15);
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      lVar16 = (longlong)(int)uStack_310;
      uVar11 = (int)uStack_310 + 1;
      uStack_310 = CONCAT44(uStack_310._4_4_,uVar11);
      if (uStack_310._4_4_ < uVar11) {
        FUN_14026a4e8(&local_318,uVar14 & 0xffffffff);
      }
      *(undefined8 *)(local_318 + 0x10 + lVar16 * 0x18) =
           *(undefined8 *)((longlong)local_168 + lVar15);
      uVar7 = *(undefined4 *)((longlong)auStack_170 + lVar15 + -4);
      uVar8 = *(undefined4 *)((longlong)auStack_170 + lVar15);
      uVar9 = *(undefined4 *)((longlong)auStack_170 + lVar15 + 4);
      puVar1 = (undefined4 *)(local_318 + lVar16 * 0x18);
      *puVar1 = *(undefined4 *)((longlong)&local_178 + lVar15);
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      lVar15 = lVar15 + 0x18;
    } while (lVar12 * 0x18 != lVar15);
  }
  if (dVar21 <= local_328) {
    uVar27 = SUB84(local_328,0);
    uVar28 = (undefined4)((ulonglong)local_328 >> 0x20);
  }
  local_2f0 = FUN_146d03130;
  local_240 = &local_2a0;
  local_248 = FUN_146d0314c;
  local_348 = param_12;
  local_350 = &local_2d8;
  local_358 = &local_2c0;
  local_368 = &local_320;
  local_360 = &local_260;
  uStack_2e8 = &local_288;
  uVar11 = FUN_144918d86(&local_308);
  if (uVar11 < 2) {
    param_6[2] = local_250;
    *param_6 = local_260;
    param_6[1] = dStack_258;
    *local_338 = local_320 + 0.0;
    *local_330 = local_2c0 + local_260 * 0.0;
    local_330[1] = dStack_2b8 + dStack_258 * 0.0;
    local_330[2] = local_2b0 + local_250 * 0.0;
    *param_5 = local_2d8 - local_260 * 0.0;
    param_5[1] = dStack_2d0 - dStack_258 * 0.0;
    param_5[2] = local_2c8 - local_250 * 0.0;
    *param_9 = CONCAT44(uVar28,uVar27);
    bVar18 = false;
  }
  else {
    bVar18 = true;
    if (uVar11 == 3) {
      uVar29 = SUB84(local_260,0);
      uVar30 = (uint)((ulonglong)local_260 >> 0x20);
      uVar25 = SUB84(dStack_258,0);
      uVar26 = (uint)((ulonglong)dStack_258 >> 0x20);
      uVar23 = SUB84(local_250,0);
      uVar24 = (uint)((ulonglong)local_250 >> 0x20);
      dVar6 = -local_320;
    }
  }
  if (local_318 != 0) {
    FUN_1400020a8();
  }
  if (local_308 != 0) {
    FUN_1400020a8();
  }
  if (!bVar18) goto LAB_146d02d18;
  goto LAB_146d02bea;
code_r0x000146d02b77:
  dVar22 = dVar20 - param_11;
  dVar19 = 1.0 / dVar6;
  dVar2 = local_260 * dVar19;
  dVar3 = dStack_258 * dVar19;
  dVar19 = local_250 * dVar19;
  uVar24 = (uint)((ulonglong)dVar19 >> 0x20) ^ 0x80000000;
  uVar23 = SUB84(dVar19,0);
  uVar26 = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
  uVar25 = SUB84(dVar3,0);
  uVar30 = (uint)((ulonglong)dVar2 >> 0x20) ^ 0x80000000;
  uVar29 = SUB84(dVar2,0);
  bVar18 = iVar17 == 0;
  iVar17 = iVar17 + -1;
  dVar20 = dVar6;
  if (bVar18 || dVar22 <= dVar6) {
    if (dVar21 <= local_328) {
      uVar27 = SUB84(local_328,0);
      uVar28 = (undefined4)((ulonglong)local_328 >> 0x20);
    }
    local_f8 = local_2a4;
LAB_146d02bea:
    dVar2 = 0.0;
    dVar20 = 0.0;
    dVar19 = 0.0;
    dVar3 = 0.0;
    dVar22 = 0.0;
    dVar21 = 0.0;
    if (0 < (int)uVar10) {
      pdVar13 = local_168;
      uVar14 = 0;
      dVar3 = 0.0;
      dVar2 = 0.0;
      do {
        dVar4 = local_118[uVar14];
        dVar21 = dVar21 + pdVar13[-0xc] * dVar4;
        dVar22 = dVar22 + pdVar13[-0xd] * dVar4;
        dVar3 = dVar3 + pdVar13[-0xe] * dVar4;
        dVar19 = dVar19 + *pdVar13 * dVar4;
        dVar20 = dVar20 + pdVar13[-1] * dVar4;
        dVar2 = dVar2 + dVar4 * pdVar13[-2];
        uVar14 = uVar14 + 1;
        pdVar13 = pdVar13 + 3;
      } while (uVar10 != uVar14);
    }
    *local_338 = 0.0 - dVar6;
    dVar4 = (double)CONCAT44(uVar24,uVar23) * 0.0;
    dVar5 = (double)CONCAT44(uVar26,uVar25) * 0.0;
    dVar6 = (double)CONCAT44(uVar30,uVar29) * 0.0;
    *local_330 = dVar3 + dVar6;
    local_330[1] = dVar22 + dVar5;
    local_330[2] = dVar21 + dVar4;
    *param_5 = dVar2 - dVar6;
    param_5[1] = dVar20 - dVar5;
    param_5[2] = dVar19 - dVar4;
    *param_6 = (double)CONCAT44(uVar30,uVar29);
    param_6[1] = (double)CONCAT44(uVar26,uVar25);
    param_6[2] = (double)CONCAT44(uVar24,uVar23);
    *param_9 = CONCAT44(uVar28,uVar27);
LAB_146d02d18:
    if ((local_f0 ^ (ulonglong)local_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_146d029c2;
}



// FUNCTION 146d03074 FUN_146d03074 body=186 status=ok
// SIG undefined FUN_146d03074(void)

undefined4 * FUN_146d03074(undefined8 *param_1,undefined4 *param_2,double *param_3)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  double local_58 [4];
  uint local_34 [3];
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  piVar1 = (int *)param_1[2];
  local_58[2] = param_3[2];
  local_58[0] = *param_3;
  local_58[1] = param_3[1];
  lVar2 = *(longlong *)*param_1;
  lVar6 = 0;
  do {
    bVar3 = local_58[lVar6] == 0.0;
    bVar4 = 0.0 < local_58[lVar6];
    lVar5 = lVar2 + 0x38;
    if (!bVar4 && !bVar3) {
      lVar5 = lVar2 + 0x20;
    }
    (&local_28)[lVar6] = *(undefined8 *)(lVar5 + lVar6 * 8);
    local_34[lVar6] = (uint)(bVar4 || bVar3);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 3);
  *piVar1 = local_34[1] * 2 + local_34[0] + local_34[2] * 4;
  *(undefined8 *)(param_2 + 4) = local_18;
  *param_2 = (undefined4)local_28;
  param_2[1] = local_28._4_4_;
  param_2[2] = uStack_20;
  param_2[3] = uStack_1c;
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d03130 FUN_146d03130 body=28 status=ok
// SIG undefined FUN_146d03130(void)

undefined8 FUN_146d03130(undefined8 param_1,undefined8 param_2)

{
  FUN_146d03074(param_2,param_1);
  return param_1;
}



// FUNCTION 146d0314c FUN_146d0314c body=95 status=ok
// SIG undefined FUN_146d0314c(void)

undefined8 FUN_146d0314c(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_3 + 4);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_146d01472(*(undefined8 *)*param_2,param_1,&local_28,param_2[2]);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d031ac FUN_146d031ac body=2227 status=ok
// SIG undefined FUN_146d031ac(void)

void FUN_146d031ac(undefined8 *param_1,undefined8 param_2,double *param_3,double *param_4,
                  double *param_5,double *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9,double *param_10,double param_11,undefined8 param_12)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  double *pdVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 local_388 [32];
  double *local_368;
  double *local_360;
  double *local_358;
  undefined4 *local_350;
  undefined8 local_348;
  double local_338;
  double *local_330;
  double *local_328;
  double local_320;
  double local_318;
  double local_310;
  longlong local_308;
  undefined8 uStack_300;
  longlong local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  double local_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  uint local_2b4;
  undefined8 local_2b0;
  double *local_2a8;
  undefined8 local_2a0;
  undefined8 *local_298;
  double *local_290;
  undefined8 local_288;
  double local_280;
  double local_278;
  double local_270;
  double dStack_268;
  double local_260;
  code *local_258;
  undefined8 *local_250;
  code *local_248;
  undefined8 **local_240;
  double local_238 [12];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  double local_1c8 [10];
  undefined8 local_178;
  undefined4 auStack_170 [2];
  double local_168 [10];
  double local_118 [4];
  uint local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)local_388;
  local_f8 = 0;
  local_278 = 0.0;
  local_280 = 0.0;
  local_288 = param_7;
  local_2a0 = param_8;
  dVar2 = *param_10;
  dVar3 = param_10[1];
  dVar16 = param_10[2];
  local_2b4 = 0;
  uVar23 = (uint)((ulonglong)dVar16 >> 0x20) ^ 0x80000000;
  uVar22 = SUB84(dVar16,0);
  uVar21 = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
  uVar20 = SUB84(dVar3,0);
  uVar27 = (uint)((ulonglong)dVar2 >> 0x20) ^ 0x80000000;
  uVar26 = SUB84(dVar2,0);
  local_338 = (double)param_1[1];
  local_318 = local_338 + 0.0;
  uVar24 = 0xe0000000;
  uVar25 = 0x47efffff;
  iVar12 = 0x1e;
  local_330 = param_3;
  local_328 = param_4;
  local_2b0 = param_2;
  local_2a8 = &local_280;
  local_298 = param_1;
  local_290 = &local_278;
LAB_146d03323:
  local_260 = -dVar16;
  local_270 = -dVar2;
  dStack_268 = -dVar3;
  local_360 = (double *)param_7;
  local_368 = &local_278;
  FUN_144916780(*param_1,&local_2d0,&local_270,(int)param_1[1]);
  local_360 = (double *)param_8;
  local_368 = &local_280;
  local_270 = dVar2;
  dStack_268 = dVar3;
  local_260 = dVar16;
  FUN_1404b8faa(param_2,&local_2e8,&local_270,0);
  dVar17 = local_278;
  local_320 = local_280;
  uVar28 = SUB84(local_278,0);
  uVar29 = (undefined4)((ulonglong)local_278 >> 0x20);
  lVar9 = (longlong)(int)local_2b4;
  local_2b4 = local_2b4 + 1;
  local_1c8[lVar9 * 3] = local_2c0;
  (&local_1d8)[lVar9 * 3] = local_2d0;
  (&uStack_1d0)[lVar9 * 3] = dStack_2c8;
  local_168[lVar9 * 3] = local_2d8;
  *(undefined4 *)(&local_178 + lVar9 * 3) = local_2e8;
  auStack_170[lVar9 * 6 + -1] = uStack_2e4;
  auStack_170[lVar9 * 6] = uStack_2e0;
  auStack_170[lVar9 * 6 + 1] = uStack_2dc;
  local_238[lVar9 * 3] = local_2d0 - (double)CONCAT44(uStack_2e4,local_2e8);
  local_238[lVar9 * 3 + 1] = dStack_2c8 - (double)CONCAT44(uStack_2dc,uStack_2e0);
  local_238[lVar9 * 3 + 2] = local_2c0 - local_2d8;
  local_368 = (double *)&local_1d8;
  local_360 = (double *)&local_178;
  FUN_146ced5ca(&local_270,local_238,&local_2b4,local_118);
  uVar7 = local_2b4;
  dVar5 = SQRT(local_260 * local_260 + local_270 * local_270 + dStack_268 * dStack_268);
  if (param_11 <= dVar5) goto code_r0x000146d03507;
  lVar9 = (longlong)(int)local_2b4;
  local_f8 = local_2b4;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_308 = 0;
  uStack_300 = 0;
  FUN_140268ec4(&local_2f8,8);
  FUN_140268ec4(&local_308,8);
  if (0 < lVar9) {
    lVar14 = 0;
    do {
      uVar11 = uStack_2f0;
      lVar13 = (longlong)(int)uStack_2f0;
      uVar8 = (int)uStack_2f0 + 1;
      uStack_2f0 = CONCAT44(uStack_2f0._4_4_,uVar8);
      if (uStack_2f0._4_4_ < uVar8) {
        FUN_14026a4e8(&local_2f8,uVar11 & 0xffffffff);
      }
      uVar11 = uStack_300;
      *(undefined8 *)(local_2f8 + 0x10 + lVar13 * 0x18) =
           *(undefined8 *)((longlong)local_1c8 + lVar14);
      uVar24 = *(undefined4 *)((longlong)&local_1d8 + lVar14 + 4);
      uVar25 = *(undefined4 *)((longlong)&uStack_1d0 + lVar14);
      uVar6 = *(undefined4 *)((longlong)local_1c8 + lVar14 + -4);
      puVar1 = (undefined4 *)(local_2f8 + lVar13 * 0x18);
      *puVar1 = *(undefined4 *)((longlong)&local_1d8 + lVar14);
      puVar1[1] = uVar24;
      puVar1[2] = uVar25;
      puVar1[3] = uVar6;
      lVar13 = (longlong)(int)uStack_300;
      uVar8 = (int)uStack_300 + 1;
      uStack_300 = CONCAT44(uStack_300._4_4_,uVar8);
      if (uStack_300._4_4_ < uVar8) {
        FUN_14026a4e8(&local_308,uVar11 & 0xffffffff);
      }
      *(undefined8 *)(local_308 + 0x10 + lVar13 * 0x18) =
           *(undefined8 *)((longlong)local_168 + lVar14);
      uVar24 = *(undefined4 *)((longlong)auStack_170 + lVar14 + -4);
      uVar25 = *(undefined4 *)((longlong)auStack_170 + lVar14);
      uVar6 = *(undefined4 *)((longlong)auStack_170 + lVar14 + 4);
      puVar1 = (undefined4 *)(local_308 + lVar13 * 0x18);
      *puVar1 = *(undefined4 *)((longlong)&local_178 + lVar14);
      puVar1[1] = uVar24;
      puVar1[2] = uVar25;
      puVar1[3] = uVar6;
      lVar14 = lVar14 + 0x18;
    } while (lVar9 * 0x18 != lVar14);
  }
  if (dVar17 <= local_320) {
    uVar28 = SUB84(local_320,0);
    uVar29 = (undefined4)((ulonglong)local_320 >> 0x20);
  }
  local_240 = &local_298;
  local_248 = FUN_146d0431a;
  local_250 = &local_2b0;
  local_258 = FUN_146d04384;
  local_348 = param_12;
  local_350 = &local_2e8;
  local_358 = &local_2d0;
  local_368 = &local_310;
  local_360 = &local_270;
  uVar8 = FUN_144918d86(&local_2f8);
  if (uVar8 < 2) {
    param_6[2] = local_260;
    *param_6 = local_270;
    param_6[1] = dStack_268;
    *local_330 = local_310 + local_338 + 0.0;
    *local_328 = local_338 * local_270 + local_2d0;
    local_328[1] = local_338 * dStack_268 + dStack_2c8;
    local_328[2] = local_338 * local_260 + local_2c0;
    *param_5 = (double)CONCAT44(uStack_2e4,local_2e8) - local_270 * 0.0;
    param_5[1] = (double)CONCAT44(uStack_2dc,uStack_2e0) - dStack_268 * 0.0;
    param_5[2] = local_2d8 - local_260 * 0.0;
    *param_9 = CONCAT44(uVar29,uVar28);
    bVar15 = false;
  }
  else {
    bVar15 = true;
    if (uVar8 == 3) {
      uVar26 = SUB84(local_270,0);
      uVar27 = (uint)((ulonglong)local_270 >> 0x20);
      uVar20 = SUB84(dStack_268,0);
      uVar21 = (uint)((ulonglong)dStack_268 >> 0x20);
      uVar22 = SUB84(local_260,0);
      uVar23 = (uint)((ulonglong)local_260 >> 0x20);
      dVar5 = -local_310;
    }
  }
  if (local_308 != 0) {
    FUN_1400020a8();
  }
  if (local_2f8 != 0) {
    FUN_1400020a8();
  }
  if (!bVar15) goto LAB_146d036cd;
  goto LAB_146d0357e;
code_r0x000146d03507:
  dVar18 = (double)CONCAT44(uVar25,uVar24);
  dVar16 = 1.0 / dVar5;
  dVar2 = local_270 * dVar16;
  dVar3 = dStack_268 * dVar16;
  dVar16 = local_260 * dVar16;
  uVar23 = (uint)((ulonglong)dVar16 >> 0x20) ^ 0x80000000;
  uVar22 = SUB84(dVar16,0);
  uVar21 = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
  uVar20 = SUB84(dVar3,0);
  uVar27 = (uint)((ulonglong)dVar2 >> 0x20) ^ 0x80000000;
  uVar26 = SUB84(dVar2,0);
  bVar15 = iVar12 == 0;
  iVar12 = iVar12 + -1;
  uVar24 = SUB84(dVar5,0);
  uVar25 = (undefined4)((ulonglong)dVar5 >> 0x20);
  if (bVar15 || dVar18 - param_11 <= dVar5) {
    if (dVar17 <= local_320) {
      uVar28 = SUB84(local_320,0);
      uVar29 = (undefined4)((ulonglong)local_320 >> 0x20);
    }
    local_f8 = local_2b4;
LAB_146d0357e:
    dVar2 = 0.0;
    dVar17 = 0.0;
    dVar16 = 0.0;
    dVar18 = 0.0;
    dVar3 = 0.0;
    dVar19 = 0.0;
    if (0 < (int)uVar7) {
      pdVar10 = local_168;
      uVar11 = 0;
      dVar3 = 0.0;
      dVar2 = 0.0;
      do {
        dVar4 = local_118[uVar11];
        dVar19 = dVar19 + pdVar10[-0xc] * dVar4;
        dVar3 = dVar3 + pdVar10[-0xd] * dVar4;
        dVar18 = dVar18 + pdVar10[-0xe] * dVar4;
        dVar16 = dVar16 + *pdVar10 * dVar4;
        dVar17 = dVar17 + pdVar10[-1] * dVar4;
        dVar2 = dVar2 + dVar4 * pdVar10[-2];
        uVar11 = uVar11 + 1;
        pdVar10 = pdVar10 + 3;
      } while (uVar7 != uVar11);
    }
    *local_330 = local_318 - dVar5;
    *local_328 = local_338 * (double)CONCAT44(uVar27,uVar26) + dVar18;
    local_328[1] = local_338 * (double)CONCAT44(uVar21,uVar20) + dVar3;
    local_328[2] = local_338 * (double)CONCAT44(uVar23,uVar22) + dVar19;
    *param_5 = dVar2 - (double)CONCAT44(uVar27,uVar26) * 0.0;
    param_5[1] = dVar17 - (double)CONCAT44(uVar21,uVar20) * 0.0;
    param_5[2] = dVar16 - (double)CONCAT44(uVar23,uVar22) * 0.0;
    *param_6 = (double)CONCAT44(uVar27,uVar26);
    param_6[1] = (double)CONCAT44(uVar21,uVar20);
    param_6[2] = (double)CONCAT44(uVar23,uVar22);
    *param_9 = CONCAT44(uVar29,uVar28);
LAB_146d036cd:
    if ((local_f0 ^ (ulonglong)local_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_146d03323;
}



// FUNCTION 146d03a60 FUN_146d03a60 body=2233 status=ok
// SIG undefined FUN_146d03a60(void)

undefined8
FUN_146d03a60(undefined8 *param_1,undefined8 param_2,double *param_3,double *param_4,double *param_5
             ,double *param_6,undefined8 param_7,undefined8 param_8,undefined8 *param_9,
             double *param_10,double param_11,undefined8 param_12)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  double *pdVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  bool bVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined4 uVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_3a8 [32];
  double *local_388;
  double *local_380;
  double *local_378;
  undefined4 *local_370;
  undefined8 local_368;
  double local_358;
  double *local_350;
  double *local_348;
  double local_340;
  double local_338;
  double local_330;
  longlong local_328;
  undefined8 uStack_320;
  longlong local_318;
  undefined8 uStack_310;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  double local_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  undefined8 local_2d0;
  double *local_2c8;
  undefined8 local_2c0;
  undefined8 *local_2b8;
  double *local_2b0;
  undefined8 local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double dStack_288;
  double local_280;
  code *local_278;
  undefined8 *local_270;
  code *local_268;
  undefined8 **local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  double local_238 [12];
  double local_1d8 [12];
  double local_178;
  undefined4 auStack_170 [2];
  double local_168 [10];
  double local_118 [4];
  uint local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  local_f8 = 0;
  local_2b0 = &local_298;
  local_298 = 0.0;
  local_2c8 = &local_2a0;
  local_2a0 = 0.0;
  local_2a8 = param_7;
  local_2c0 = param_8;
  dVar2 = *param_10;
  dVar3 = param_10[1];
  dVar16 = param_10[2];
  uVar25 = (uint)((ulonglong)dVar16 >> 0x20) ^ 0x80000000;
  uVar24 = SUB84(dVar16,0);
  uVar23 = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
  uVar22 = SUB84(dVar3,0);
  uVar21 = (uint)((ulonglong)dVar2 >> 0x20) ^ 0x80000000;
  uVar20 = SUB84(dVar2,0);
  local_248 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_358 = (double)param_1[1];
  local_338 = local_358 + 0.0;
  iVar13 = 0x1e;
  pdVar11 = local_1d8;
  dVar17 = 3.4028234663852886e+38;
  local_350 = param_3;
  local_348 = param_4;
  local_2d0 = param_2;
  local_2b8 = param_1;
LAB_146d03be8:
  local_280 = -dVar16;
  local_290 = -dVar2;
  dStack_288 = -dVar3;
  local_380 = (double *)param_7;
  local_388 = &local_298;
  FUN_144916780(*param_1,&local_2e8,&local_290,(int)param_1[1]);
  local_380 = (double *)param_8;
  local_388 = &local_2a0;
  local_290 = dVar2;
  dStack_288 = dVar3;
  local_280 = dVar16;
  FUN_1404b8faa(param_2,&local_300,&local_290,0);
  dVar18 = local_298;
  local_340 = local_2a0;
  uVar26 = SUB84(local_298,0);
  uVar27 = (undefined4)((ulonglong)local_298 >> 0x20);
  lVar10 = (longlong)(int)(uint)local_258;
  local_1d8[lVar10 * 3 + 2] = local_2d8;
  local_1d8[lVar10 * 3] = local_2e8;
  local_1d8[lVar10 * 3 + 1] = dStack_2e0;
  local_168[lVar10 * 3] = local_2f0;
  *(undefined4 *)(&local_178 + lVar10 * 3) = local_300;
  auStack_170[lVar10 * 6 + -1] = uStack_2fc;
  auStack_170[lVar10 * 6] = uStack_2f8;
  auStack_170[lVar10 * 6 + 1] = uStack_2f4;
  *(uint *)((longlong)&local_258 + lVar10 * 4 + 4) = (uint)local_258;
  local_258 = CONCAT44(local_258._4_4_,(uint)local_258 + 1);
  local_238[lVar10 * 3] = local_2e8 - (double)CONCAT44(uStack_2fc,local_300);
  local_238[lVar10 * 3 + 1] = dStack_2e0 - (double)CONCAT44(uStack_2f4,uStack_2f8);
  local_238[lVar10 * 3 + 2] = local_2d8 - local_2f0;
  local_388 = pdVar11;
  local_380 = &local_178;
  FUN_1449162b1(&local_290,local_238,&local_258,local_118);
  dVar5 = SQRT(local_280 * local_280 + local_290 * local_290 + dStack_288 * dStack_288);
  if (param_11 <= dVar5) goto code_r0x000146d03dd3;
  local_f8 = (uint)local_258;
  local_318 = 0;
  uStack_310 = 0;
  local_328 = 0;
  uStack_320 = 0;
  FUN_140268ec4(&local_318,8);
  FUN_140268ec4(&local_328,8);
  if (0 < (int)(uint)local_258) {
    lVar10 = 0;
    do {
      uVar12 = uStack_310;
      lVar14 = (longlong)(int)uStack_310;
      uVar9 = (int)uStack_310 + 1;
      uStack_310 = CONCAT44(uStack_310._4_4_,uVar9);
      if (uStack_310._4_4_ < uVar9) {
        FUN_14026a4e8(&local_318,uVar12 & 0xffffffff);
      }
      uVar12 = uStack_320;
      *(double *)(local_318 + 0x10 + lVar14 * 0x18) = pdVar11[2];
      uVar6 = *(undefined4 *)((longlong)pdVar11 + 4);
      uVar7 = *(undefined4 *)(pdVar11 + 1);
      uVar8 = *(undefined4 *)((longlong)pdVar11 + 0xc);
      puVar1 = (undefined4 *)(local_318 + lVar14 * 0x18);
      *puVar1 = *(undefined4 *)pdVar11;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar14 = (longlong)(int)uStack_320;
      uVar9 = (int)uStack_320 + 1;
      uStack_320 = CONCAT44(uStack_320._4_4_,uVar9);
      if (uStack_320._4_4_ < uVar9) {
        FUN_14026a4e8(&local_328,uVar12 & 0xffffffff);
      }
      *(double *)(local_328 + 0x10 + lVar14 * 0x18) = pdVar11[0xe];
      uVar6 = *(undefined4 *)((longlong)pdVar11 + 100);
      uVar7 = *(undefined4 *)(pdVar11 + 0xd);
      uVar8 = *(undefined4 *)((longlong)pdVar11 + 0x6c);
      puVar1 = (undefined4 *)(local_328 + lVar14 * 0x18);
      *puVar1 = *(undefined4 *)(pdVar11 + 0xc);
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar10 = lVar10 + 1;
      pdVar11 = pdVar11 + 3;
    } while (lVar10 < (int)(uint)local_258);
  }
  if (dVar18 <= local_340) {
    uVar26 = SUB84(local_340,0);
    uVar27 = (undefined4)((ulonglong)local_340 >> 0x20);
  }
  local_260 = &local_2b8;
  local_268 = FUN_146d043ea;
  local_270 = &local_2d0;
  local_278 = FUN_146d04454;
  local_368 = param_12;
  local_370 = &local_300;
  local_378 = &local_2e8;
  local_388 = &local_330;
  local_380 = &local_290;
  uVar9 = FUN_144918d86(&local_318);
  if (uVar9 < 2) {
    param_6[2] = local_280;
    *param_6 = local_290;
    param_6[1] = dStack_288;
    *local_350 = local_330 + local_358 + 0.0;
    *local_348 = local_358 * local_290 + local_2e8;
    local_348[1] = local_358 * dStack_288 + dStack_2e0;
    local_348[2] = local_358 * local_280 + local_2d8;
    *param_5 = (double)CONCAT44(uStack_2fc,local_300) - local_290 * 0.0;
    param_5[1] = (double)CONCAT44(uStack_2f4,uStack_2f8) - dStack_288 * 0.0;
    param_5[2] = local_2f0 - local_280 * 0.0;
    *param_9 = CONCAT44(uVar27,uVar26);
    bVar15 = false;
  }
  else {
    bVar15 = true;
    if (uVar9 == 3) {
      uVar20 = SUB84(local_290,0);
      uVar21 = (uint)((ulonglong)local_290 >> 0x20);
      uVar22 = SUB84(dStack_288,0);
      uVar23 = (uint)((ulonglong)dStack_288 >> 0x20);
      uVar24 = SUB84(local_280,0);
      uVar25 = (uint)((ulonglong)local_280 >> 0x20);
      dVar5 = -local_330;
    }
  }
  if (local_328 != 0) {
    FUN_1400020a8();
  }
  if (local_318 != 0) {
    FUN_1400020a8();
  }
  if (!bVar15) goto LAB_146d03f87;
  goto LAB_146d03e3a;
code_r0x000146d03dd3:
  bVar15 = iVar13 == 0;
  iVar13 = iVar13 + -1;
  dVar16 = 1.0 / dVar5;
  dVar2 = local_290 * dVar16;
  dVar3 = dStack_288 * dVar16;
  dVar16 = local_280 * dVar16;
  uVar25 = (uint)((ulonglong)dVar16 >> 0x20) ^ 0x80000000;
  uVar24 = SUB84(dVar16,0);
  uVar23 = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
  uVar22 = SUB84(dVar3,0);
  uVar21 = (uint)((ulonglong)dVar2 >> 0x20) ^ 0x80000000;
  uVar20 = SUB84(dVar2,0);
  if ((dVar17 <= dVar5) || (dVar17 = dVar5, bVar15)) {
    if (dVar18 <= local_340) {
      uVar26 = SUB84(local_340,0);
      uVar27 = (undefined4)((ulonglong)local_340 >> 0x20);
    }
    local_f8 = (uint)local_258;
LAB_146d03e3a:
    dVar2 = 0.0;
    dVar17 = 0.0;
    dVar16 = 0.0;
    dVar18 = 0.0;
    dVar3 = 0.0;
    dVar19 = 0.0;
    if (0 < (int)(uint)local_258) {
      pdVar11 = local_168;
      uVar12 = 0;
      dVar3 = 0.0;
      dVar2 = 0.0;
      do {
        dVar4 = local_118[uVar12];
        dVar19 = dVar19 + pdVar11[-0xc] * dVar4;
        dVar3 = dVar3 + pdVar11[-0xd] * dVar4;
        dVar18 = dVar18 + pdVar11[-0xe] * dVar4;
        dVar16 = dVar16 + *pdVar11 * dVar4;
        dVar17 = dVar17 + pdVar11[-1] * dVar4;
        dVar2 = dVar2 + dVar4 * pdVar11[-2];
        uVar12 = uVar12 + 1;
        pdVar11 = pdVar11 + 3;
      } while ((uint)local_258 != uVar12);
    }
    *local_350 = local_338 - dVar5;
    *local_348 = local_358 * (double)CONCAT44(uVar21,uVar20) + dVar18;
    local_348[1] = local_358 * (double)CONCAT44(uVar23,uVar22) + dVar3;
    local_348[2] = local_358 * (double)CONCAT44(uVar25,uVar24) + dVar19;
    *param_5 = dVar2 - (double)CONCAT44(uVar21,uVar20) * 0.0;
    param_5[1] = dVar17 - (double)CONCAT44(uVar23,uVar22) * 0.0;
    param_5[2] = dVar16 - (double)CONCAT44(uVar25,uVar24) * 0.0;
    *param_6 = (double)CONCAT44(uVar21,uVar20);
    param_6[1] = (double)CONCAT44(uVar23,uVar22);
    param_6[2] = (double)CONCAT44(uVar25,uVar24);
    *param_9 = CONCAT44(uVar27,uVar26);
LAB_146d03f87:
    if ((local_f0 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  goto LAB_146d03be8;
}



// FUNCTION 146d0431a FUN_146d0431a body=105 status=ok
// SIG undefined FUN_146d0431a(void)

undefined8 FUN_146d0431a(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined4)param_2[1];
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = (undefined4)param_2[2];
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_144916780(*(undefined8 *)*param_2,param_1,&local_28,((undefined8 *)*param_2)[1]);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d04384 FUN_146d04384 body=100 status=ok
// SIG undefined FUN_146d04384(void)

undefined8 FUN_146d04384(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined4 *)(param_2 + 1);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = *(undefined4 *)(param_2 + 2);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1404b8faa(*param_2,param_1,&local_28,0);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d043ea FUN_146d043ea body=105 status=ok
// SIG undefined FUN_146d043ea(void)

undefined8 FUN_146d043ea(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined4)param_2[1];
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = (undefined4)param_2[2];
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_144916780(*(undefined8 *)*param_2,param_1,&local_28,((undefined8 *)*param_2)[1]);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d04454 FUN_146d04454 body=100 status=ok
// SIG undefined FUN_146d04454(void)

undefined8 FUN_146d04454(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined4 *)(param_2 + 1);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = *(undefined4 *)(param_2 + 2);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1404b8faa(*param_2,param_1,&local_28,0);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d044b9 FUN_146d044b9 body=2231 status=ok
// SIG undefined FUN_146d044b9(void)

void FUN_146d044b9(longlong *param_1,undefined8 param_2,double *param_3,double *param_4,
                  double *param_5,double *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9,double *param_10,double param_11,undefined8 param_12)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  double *pdVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 local_388 [32];
  double *local_368;
  double *local_360;
  double *local_358;
  undefined4 *local_350;
  undefined8 local_348;
  double local_338;
  double *local_330;
  double *local_328;
  double local_320;
  double local_318;
  double local_310;
  longlong local_308;
  undefined8 uStack_300;
  longlong local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  double local_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  uint local_2b4;
  undefined8 local_2b0;
  double *local_2a8;
  undefined8 local_2a0;
  longlong *local_298;
  double *local_290;
  undefined8 local_288;
  double local_280;
  double local_278;
  double local_270;
  double dStack_268;
  double local_260;
  code *local_258;
  undefined8 *local_250;
  code *local_248;
  longlong **local_240;
  double local_238 [12];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  double local_1c8 [10];
  undefined8 local_178;
  undefined4 auStack_170 [2];
  double local_168 [10];
  double local_118 [4];
  uint local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)local_388;
  local_f8 = 0;
  local_278 = 0.0;
  local_280 = 0.0;
  local_288 = param_7;
  local_2a0 = param_8;
  dVar2 = *param_10;
  dVar3 = param_10[1];
  dVar16 = param_10[2];
  local_2b4 = 0;
  uVar23 = (uint)((ulonglong)dVar16 >> 0x20) ^ 0x80000000;
  uVar22 = SUB84(dVar16,0);
  uVar21 = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
  uVar20 = SUB84(dVar3,0);
  uVar27 = (uint)((ulonglong)dVar2 >> 0x20) ^ 0x80000000;
  uVar26 = SUB84(dVar2,0);
  local_338 = (double)param_1[1];
  local_318 = local_338 + 0.0;
  uVar24 = 0xe0000000;
  uVar25 = 0x47efffff;
  iVar12 = 0x1e;
  local_330 = param_3;
  local_328 = param_4;
  local_2b0 = param_2;
  local_2a8 = &local_280;
  local_298 = param_1;
  local_290 = &local_278;
LAB_146d04630:
  local_260 = -dVar16;
  local_270 = -dVar2;
  dStack_268 = -dVar3;
  local_360 = (double *)param_7;
  local_368 = &local_278;
  FUN_144916780(*(undefined8 *)(*param_1 + 0x28),&local_2d0,&local_270,(int)param_1[1]);
  local_360 = (double *)param_8;
  local_368 = &local_280;
  local_270 = dVar2;
  dStack_268 = dVar3;
  local_260 = dVar16;
  FUN_1404b8faa(param_2,&local_2e8,&local_270,0);
  dVar17 = local_278;
  local_320 = local_280;
  uVar28 = SUB84(local_278,0);
  uVar29 = (undefined4)((ulonglong)local_278 >> 0x20);
  lVar9 = (longlong)(int)local_2b4;
  local_2b4 = local_2b4 + 1;
  local_1c8[lVar9 * 3] = local_2c0;
  (&local_1d8)[lVar9 * 3] = local_2d0;
  (&uStack_1d0)[lVar9 * 3] = dStack_2c8;
  local_168[lVar9 * 3] = local_2d8;
  *(undefined4 *)(&local_178 + lVar9 * 3) = local_2e8;
  auStack_170[lVar9 * 6 + -1] = uStack_2e4;
  auStack_170[lVar9 * 6] = uStack_2e0;
  auStack_170[lVar9 * 6 + 1] = uStack_2dc;
  local_238[lVar9 * 3] = local_2d0 - (double)CONCAT44(uStack_2e4,local_2e8);
  local_238[lVar9 * 3 + 1] = dStack_2c8 - (double)CONCAT44(uStack_2dc,uStack_2e0);
  local_238[lVar9 * 3 + 2] = local_2c0 - local_2d8;
  local_368 = (double *)&local_1d8;
  local_360 = (double *)&local_178;
  FUN_146ced5ca(&local_270,local_238,&local_2b4,local_118);
  uVar7 = local_2b4;
  dVar5 = SQRT(local_260 * local_260 + local_270 * local_270 + dStack_268 * dStack_268);
  if (param_11 <= dVar5) goto code_r0x000146d04818;
  lVar9 = (longlong)(int)local_2b4;
  local_f8 = local_2b4;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_308 = 0;
  uStack_300 = 0;
  FUN_140268ec4(&local_2f8,8);
  FUN_140268ec4(&local_308,8);
  if (0 < lVar9) {
    lVar14 = 0;
    do {
      uVar11 = uStack_2f0;
      lVar13 = (longlong)(int)uStack_2f0;
      uVar8 = (int)uStack_2f0 + 1;
      uStack_2f0 = CONCAT44(uStack_2f0._4_4_,uVar8);
      if (uStack_2f0._4_4_ < uVar8) {
        FUN_14026a4e8(&local_2f8,uVar11 & 0xffffffff);
      }
      uVar11 = uStack_300;
      *(undefined8 *)(local_2f8 + 0x10 + lVar13 * 0x18) =
           *(undefined8 *)((longlong)local_1c8 + lVar14);
      uVar24 = *(undefined4 *)((longlong)&local_1d8 + lVar14 + 4);
      uVar25 = *(undefined4 *)((longlong)&uStack_1d0 + lVar14);
      uVar6 = *(undefined4 *)((longlong)local_1c8 + lVar14 + -4);
      puVar1 = (undefined4 *)(local_2f8 + lVar13 * 0x18);
      *puVar1 = *(undefined4 *)((longlong)&local_1d8 + lVar14);
      puVar1[1] = uVar24;
      puVar1[2] = uVar25;
      puVar1[3] = uVar6;
      lVar13 = (longlong)(int)uStack_300;
      uVar8 = (int)uStack_300 + 1;
      uStack_300 = CONCAT44(uStack_300._4_4_,uVar8);
      if (uStack_300._4_4_ < uVar8) {
        FUN_14026a4e8(&local_308,uVar11 & 0xffffffff);
      }
      *(undefined8 *)(local_308 + 0x10 + lVar13 * 0x18) =
           *(undefined8 *)((longlong)local_168 + lVar14);
      uVar24 = *(undefined4 *)((longlong)auStack_170 + lVar14 + -4);
      uVar25 = *(undefined4 *)((longlong)auStack_170 + lVar14);
      uVar6 = *(undefined4 *)((longlong)auStack_170 + lVar14 + 4);
      puVar1 = (undefined4 *)(local_308 + lVar13 * 0x18);
      *puVar1 = *(undefined4 *)((longlong)&local_178 + lVar14);
      puVar1[1] = uVar24;
      puVar1[2] = uVar25;
      puVar1[3] = uVar6;
      lVar14 = lVar14 + 0x18;
    } while (lVar9 * 0x18 != lVar14);
  }
  if (dVar17 <= local_320) {
    uVar28 = SUB84(local_320,0);
    uVar29 = (undefined4)((ulonglong)local_320 >> 0x20);
  }
  local_240 = &local_298;
  local_248 = FUN_146d05630;
  local_250 = &local_2b0;
  local_258 = FUN_146d0569e;
  local_348 = param_12;
  local_350 = &local_2e8;
  local_358 = &local_2d0;
  local_368 = &local_310;
  local_360 = &local_270;
  uVar8 = FUN_144918d86(&local_2f8);
  if (uVar8 < 2) {
    param_6[2] = local_260;
    *param_6 = local_270;
    param_6[1] = dStack_268;
    *local_330 = local_310 + local_338 + 0.0;
    *local_328 = local_338 * local_270 + local_2d0;
    local_328[1] = local_338 * dStack_268 + dStack_2c8;
    local_328[2] = local_338 * local_260 + local_2c0;
    *param_5 = (double)CONCAT44(uStack_2e4,local_2e8) - local_270 * 0.0;
    param_5[1] = (double)CONCAT44(uStack_2dc,uStack_2e0) - dStack_268 * 0.0;
    param_5[2] = local_2d8 - local_260 * 0.0;
    *param_9 = CONCAT44(uVar29,uVar28);
    bVar15 = false;
  }
  else {
    bVar15 = true;
    if (uVar8 == 3) {
      uVar26 = SUB84(local_270,0);
      uVar27 = (uint)((ulonglong)local_270 >> 0x20);
      uVar20 = SUB84(dStack_268,0);
      uVar21 = (uint)((ulonglong)dStack_268 >> 0x20);
      uVar22 = SUB84(local_260,0);
      uVar23 = (uint)((ulonglong)local_260 >> 0x20);
      dVar5 = -local_310;
    }
  }
  if (local_308 != 0) {
    FUN_1400020a8();
  }
  if (local_2f8 != 0) {
    FUN_1400020a8();
  }
  if (!bVar15) goto LAB_146d049de;
  goto LAB_146d0488f;
code_r0x000146d04818:
  dVar18 = (double)CONCAT44(uVar25,uVar24);
  dVar16 = 1.0 / dVar5;
  dVar2 = local_270 * dVar16;
  dVar3 = dStack_268 * dVar16;
  dVar16 = local_260 * dVar16;
  uVar23 = (uint)((ulonglong)dVar16 >> 0x20) ^ 0x80000000;
  uVar22 = SUB84(dVar16,0);
  uVar21 = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
  uVar20 = SUB84(dVar3,0);
  uVar27 = (uint)((ulonglong)dVar2 >> 0x20) ^ 0x80000000;
  uVar26 = SUB84(dVar2,0);
  bVar15 = iVar12 == 0;
  iVar12 = iVar12 + -1;
  uVar24 = SUB84(dVar5,0);
  uVar25 = (undefined4)((ulonglong)dVar5 >> 0x20);
  if (bVar15 || dVar18 - param_11 <= dVar5) {
    if (dVar17 <= local_320) {
      uVar28 = SUB84(local_320,0);
      uVar29 = (undefined4)((ulonglong)local_320 >> 0x20);
    }
    local_f8 = local_2b4;
LAB_146d0488f:
    dVar2 = 0.0;
    dVar17 = 0.0;
    dVar16 = 0.0;
    dVar18 = 0.0;
    dVar3 = 0.0;
    dVar19 = 0.0;
    if (0 < (int)uVar7) {
      pdVar10 = local_168;
      uVar11 = 0;
      dVar3 = 0.0;
      dVar2 = 0.0;
      do {
        dVar4 = local_118[uVar11];
        dVar19 = dVar19 + pdVar10[-0xc] * dVar4;
        dVar3 = dVar3 + pdVar10[-0xd] * dVar4;
        dVar18 = dVar18 + pdVar10[-0xe] * dVar4;
        dVar16 = dVar16 + *pdVar10 * dVar4;
        dVar17 = dVar17 + pdVar10[-1] * dVar4;
        dVar2 = dVar2 + dVar4 * pdVar10[-2];
        uVar11 = uVar11 + 1;
        pdVar10 = pdVar10 + 3;
      } while (uVar7 != uVar11);
    }
    *local_330 = local_318 - dVar5;
    *local_328 = local_338 * (double)CONCAT44(uVar27,uVar26) + dVar18;
    local_328[1] = local_338 * (double)CONCAT44(uVar21,uVar20) + dVar3;
    local_328[2] = local_338 * (double)CONCAT44(uVar23,uVar22) + dVar19;
    *param_5 = dVar2 - (double)CONCAT44(uVar27,uVar26) * 0.0;
    param_5[1] = dVar17 - (double)CONCAT44(uVar21,uVar20) * 0.0;
    param_5[2] = dVar16 - (double)CONCAT44(uVar23,uVar22) * 0.0;
    *param_6 = (double)CONCAT44(uVar27,uVar26);
    param_6[1] = (double)CONCAT44(uVar21,uVar20);
    param_6[2] = (double)CONCAT44(uVar23,uVar22);
    *param_9 = CONCAT44(uVar29,uVar28);
LAB_146d049de:
    if ((local_f0 ^ (ulonglong)local_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_146d04630;
}



// FUNCTION 146d04d71 FUN_146d04d71 body=2237 status=ok
// SIG undefined FUN_146d04d71(void)

undefined8
FUN_146d04d71(longlong *param_1,undefined8 param_2,double *param_3,double *param_4,double *param_5,
             double *param_6,undefined8 param_7,undefined8 param_8,undefined8 *param_9,
             double *param_10,double param_11,undefined8 param_12)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  double *pdVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  bool bVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined4 uVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_3a8 [32];
  double *local_388;
  double *local_380;
  double *local_378;
  undefined4 *local_370;
  undefined8 local_368;
  double local_358;
  double *local_350;
  double *local_348;
  double local_340;
  double local_338;
  double local_330;
  longlong local_328;
  undefined8 uStack_320;
  longlong local_318;
  undefined8 uStack_310;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  double local_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  undefined8 local_2d0;
  double *local_2c8;
  undefined8 local_2c0;
  longlong *local_2b8;
  double *local_2b0;
  undefined8 local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double dStack_288;
  double local_280;
  code *local_278;
  undefined8 *local_270;
  code *local_268;
  longlong **local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  double local_238 [12];
  double local_1d8 [12];
  double local_178;
  undefined4 auStack_170 [2];
  double local_168 [10];
  double local_118 [4];
  uint local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  local_f8 = 0;
  local_2b0 = &local_298;
  local_298 = 0.0;
  local_2c8 = &local_2a0;
  local_2a0 = 0.0;
  local_2a8 = param_7;
  local_2c0 = param_8;
  dVar2 = *param_10;
  dVar3 = param_10[1];
  dVar16 = param_10[2];
  uVar25 = (uint)((ulonglong)dVar16 >> 0x20) ^ 0x80000000;
  uVar24 = SUB84(dVar16,0);
  uVar23 = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
  uVar22 = SUB84(dVar3,0);
  uVar21 = (uint)((ulonglong)dVar2 >> 0x20) ^ 0x80000000;
  uVar20 = SUB84(dVar2,0);
  local_248 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_358 = (double)param_1[1];
  local_338 = local_358 + 0.0;
  iVar13 = 0x1e;
  pdVar11 = local_1d8;
  dVar17 = 3.4028234663852886e+38;
  local_350 = param_3;
  local_348 = param_4;
  local_2d0 = param_2;
  local_2b8 = param_1;
LAB_146d04ef9:
  local_280 = -dVar16;
  local_290 = -dVar2;
  dStack_288 = -dVar3;
  local_380 = (double *)param_7;
  local_388 = &local_298;
  FUN_144916780(*(undefined8 *)(*param_1 + 0x28),&local_2e8,&local_290,(int)param_1[1]);
  local_380 = (double *)param_8;
  local_388 = &local_2a0;
  local_290 = dVar2;
  dStack_288 = dVar3;
  local_280 = dVar16;
  FUN_1404b8faa(param_2,&local_300,&local_290,0);
  dVar18 = local_298;
  local_340 = local_2a0;
  uVar26 = SUB84(local_298,0);
  uVar27 = (undefined4)((ulonglong)local_298 >> 0x20);
  lVar10 = (longlong)(int)(uint)local_258;
  local_1d8[lVar10 * 3 + 2] = local_2d8;
  local_1d8[lVar10 * 3] = local_2e8;
  local_1d8[lVar10 * 3 + 1] = dStack_2e0;
  local_168[lVar10 * 3] = local_2f0;
  *(undefined4 *)(&local_178 + lVar10 * 3) = local_300;
  auStack_170[lVar10 * 6 + -1] = uStack_2fc;
  auStack_170[lVar10 * 6] = uStack_2f8;
  auStack_170[lVar10 * 6 + 1] = uStack_2f4;
  *(uint *)((longlong)&local_258 + lVar10 * 4 + 4) = (uint)local_258;
  local_258 = CONCAT44(local_258._4_4_,(uint)local_258 + 1);
  local_238[lVar10 * 3] = local_2e8 - (double)CONCAT44(uStack_2fc,local_300);
  local_238[lVar10 * 3 + 1] = dStack_2e0 - (double)CONCAT44(uStack_2f4,uStack_2f8);
  local_238[lVar10 * 3 + 2] = local_2d8 - local_2f0;
  local_388 = pdVar11;
  local_380 = &local_178;
  FUN_1449162b1(&local_290,local_238,&local_258,local_118);
  dVar5 = SQRT(local_280 * local_280 + local_290 * local_290 + dStack_288 * dStack_288);
  if (param_11 <= dVar5) goto code_r0x000146d050e8;
  local_f8 = (uint)local_258;
  local_318 = 0;
  uStack_310 = 0;
  local_328 = 0;
  uStack_320 = 0;
  FUN_140268ec4(&local_318,8);
  FUN_140268ec4(&local_328,8);
  if (0 < (int)(uint)local_258) {
    lVar10 = 0;
    do {
      uVar12 = uStack_310;
      lVar14 = (longlong)(int)uStack_310;
      uVar9 = (int)uStack_310 + 1;
      uStack_310 = CONCAT44(uStack_310._4_4_,uVar9);
      if (uStack_310._4_4_ < uVar9) {
        FUN_14026a4e8(&local_318,uVar12 & 0xffffffff);
      }
      uVar12 = uStack_320;
      *(double *)(local_318 + 0x10 + lVar14 * 0x18) = pdVar11[2];
      uVar6 = *(undefined4 *)((longlong)pdVar11 + 4);
      uVar7 = *(undefined4 *)(pdVar11 + 1);
      uVar8 = *(undefined4 *)((longlong)pdVar11 + 0xc);
      puVar1 = (undefined4 *)(local_318 + lVar14 * 0x18);
      *puVar1 = *(undefined4 *)pdVar11;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar14 = (longlong)(int)uStack_320;
      uVar9 = (int)uStack_320 + 1;
      uStack_320 = CONCAT44(uStack_320._4_4_,uVar9);
      if (uStack_320._4_4_ < uVar9) {
        FUN_14026a4e8(&local_328,uVar12 & 0xffffffff);
      }
      *(double *)(local_328 + 0x10 + lVar14 * 0x18) = pdVar11[0xe];
      uVar6 = *(undefined4 *)((longlong)pdVar11 + 100);
      uVar7 = *(undefined4 *)(pdVar11 + 0xd);
      uVar8 = *(undefined4 *)((longlong)pdVar11 + 0x6c);
      puVar1 = (undefined4 *)(local_328 + lVar14 * 0x18);
      *puVar1 = *(undefined4 *)(pdVar11 + 0xc);
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar10 = lVar10 + 1;
      pdVar11 = pdVar11 + 3;
    } while (lVar10 < (int)(uint)local_258);
  }
  if (dVar18 <= local_340) {
    uVar26 = SUB84(local_340,0);
    uVar27 = (undefined4)((ulonglong)local_340 >> 0x20);
  }
  local_260 = &local_2b8;
  local_268 = FUN_146d05704;
  local_270 = &local_2d0;
  local_278 = FUN_146d05772;
  local_368 = param_12;
  local_370 = &local_300;
  local_378 = &local_2e8;
  local_388 = &local_330;
  local_380 = &local_290;
  uVar9 = FUN_144918d86(&local_318);
  if (uVar9 < 2) {
    param_6[2] = local_280;
    *param_6 = local_290;
    param_6[1] = dStack_288;
    *local_350 = local_330 + local_358 + 0.0;
    *local_348 = local_358 * local_290 + local_2e8;
    local_348[1] = local_358 * dStack_288 + dStack_2e0;
    local_348[2] = local_358 * local_280 + local_2d8;
    *param_5 = (double)CONCAT44(uStack_2fc,local_300) - local_290 * 0.0;
    param_5[1] = (double)CONCAT44(uStack_2f4,uStack_2f8) - dStack_288 * 0.0;
    param_5[2] = local_2f0 - local_280 * 0.0;
    *param_9 = CONCAT44(uVar27,uVar26);
    bVar15 = false;
  }
  else {
    bVar15 = true;
    if (uVar9 == 3) {
      uVar20 = SUB84(local_290,0);
      uVar21 = (uint)((ulonglong)local_290 >> 0x20);
      uVar22 = SUB84(dStack_288,0);
      uVar23 = (uint)((ulonglong)dStack_288 >> 0x20);
      uVar24 = SUB84(local_280,0);
      uVar25 = (uint)((ulonglong)local_280 >> 0x20);
      dVar5 = -local_330;
    }
  }
  if (local_328 != 0) {
    FUN_1400020a8();
  }
  if (local_318 != 0) {
    FUN_1400020a8();
  }
  if (!bVar15) goto LAB_146d0529c;
  goto LAB_146d0514f;
code_r0x000146d050e8:
  bVar15 = iVar13 == 0;
  iVar13 = iVar13 + -1;
  dVar16 = 1.0 / dVar5;
  dVar2 = local_290 * dVar16;
  dVar3 = dStack_288 * dVar16;
  dVar16 = local_280 * dVar16;
  uVar25 = (uint)((ulonglong)dVar16 >> 0x20) ^ 0x80000000;
  uVar24 = SUB84(dVar16,0);
  uVar23 = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
  uVar22 = SUB84(dVar3,0);
  uVar21 = (uint)((ulonglong)dVar2 >> 0x20) ^ 0x80000000;
  uVar20 = SUB84(dVar2,0);
  if ((dVar17 <= dVar5) || (dVar17 = dVar5, bVar15)) {
    if (dVar18 <= local_340) {
      uVar26 = SUB84(local_340,0);
      uVar27 = (undefined4)((ulonglong)local_340 >> 0x20);
    }
    local_f8 = (uint)local_258;
LAB_146d0514f:
    dVar2 = 0.0;
    dVar17 = 0.0;
    dVar16 = 0.0;
    dVar18 = 0.0;
    dVar3 = 0.0;
    dVar19 = 0.0;
    if (0 < (int)(uint)local_258) {
      pdVar11 = local_168;
      uVar12 = 0;
      dVar3 = 0.0;
      dVar2 = 0.0;
      do {
        dVar4 = local_118[uVar12];
        dVar19 = dVar19 + pdVar11[-0xc] * dVar4;
        dVar3 = dVar3 + pdVar11[-0xd] * dVar4;
        dVar18 = dVar18 + pdVar11[-0xe] * dVar4;
        dVar16 = dVar16 + *pdVar11 * dVar4;
        dVar17 = dVar17 + pdVar11[-1] * dVar4;
        dVar2 = dVar2 + dVar4 * pdVar11[-2];
        uVar12 = uVar12 + 1;
        pdVar11 = pdVar11 + 3;
      } while ((uint)local_258 != uVar12);
    }
    *local_350 = local_338 - dVar5;
    *local_348 = local_358 * (double)CONCAT44(uVar21,uVar20) + dVar18;
    local_348[1] = local_358 * (double)CONCAT44(uVar23,uVar22) + dVar3;
    local_348[2] = local_358 * (double)CONCAT44(uVar25,uVar24) + dVar19;
    *param_5 = dVar2 - (double)CONCAT44(uVar21,uVar20) * 0.0;
    param_5[1] = dVar17 - (double)CONCAT44(uVar23,uVar22) * 0.0;
    param_5[2] = dVar16 - (double)CONCAT44(uVar25,uVar24) * 0.0;
    *param_6 = (double)CONCAT44(uVar21,uVar20);
    param_6[1] = (double)CONCAT44(uVar23,uVar22);
    param_6[2] = (double)CONCAT44(uVar25,uVar24);
    *param_9 = CONCAT44(uVar27,uVar26);
LAB_146d0529c:
    if ((local_f0 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  goto LAB_146d04ef9;
}



// FUNCTION 146d05630 FUN_146d05630 body=109 status=ok
// SIG undefined FUN_146d05630(void)

undefined8 FUN_146d05630(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined4)param_2[1];
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = (undefined4)param_2[2];
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_144916780(*(undefined8 *)(*(longlong *)*param_2 + 0x28),param_1,&local_28,
                ((longlong *)*param_2)[1]);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0569e FUN_146d0569e body=100 status=ok
// SIG undefined FUN_146d0569e(void)

undefined8 FUN_146d0569e(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined4 *)(param_2 + 1);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = *(undefined4 *)(param_2 + 2);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1404b8faa(*param_2,param_1,&local_28,0);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d05704 FUN_146d05704 body=109 status=ok
// SIG undefined FUN_146d05704(void)

undefined8 FUN_146d05704(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined4)param_2[1];
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = (undefined4)param_2[2];
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_144916780(*(undefined8 *)(*(longlong *)*param_2 + 0x28),param_1,&local_28,
                ((longlong *)*param_2)[1]);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d05772 FUN_146d05772 body=100 status=ok
// SIG undefined FUN_146d05772(void)

undefined8 FUN_146d05772(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined4 *)(param_2 + 1);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = *(undefined4 *)(param_2 + 2);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1404b8faa(*param_2,param_1,&local_28,0);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d057d7 FUN_146d057d7 body=2243 status=ok
// SIG undefined FUN_146d057d7(void)

void FUN_146d057d7(longlong *param_1,undefined8 param_2,double *param_3,double *param_4,
                  double *param_5,double *param_6,double *param_7,undefined8 param_8,
                  undefined8 *param_9,double *param_10,double param_11,undefined8 param_12)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  double *pdVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 local_388 [32];
  double *local_368;
  double *local_360;
  double *local_358;
  undefined4 *local_350;
  undefined8 local_348;
  double local_338;
  double *local_330;
  double *local_328;
  double local_320;
  double local_318;
  double local_310;
  longlong local_308;
  undefined8 uStack_300;
  longlong local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  double local_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  uint local_2b4;
  undefined8 local_2b0;
  double *local_2a8;
  undefined8 local_2a0;
  longlong *local_298;
  double *local_290;
  double *local_288;
  double local_280;
  double local_278;
  double local_270;
  double dStack_268;
  double local_260;
  code *local_258;
  undefined8 *local_250;
  code *local_248;
  longlong **local_240;
  double local_238 [12];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  double local_1c8 [10];
  undefined8 local_178;
  undefined4 auStack_170 [2];
  double local_168 [10];
  double local_118 [4];
  uint local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)local_388;
  local_f8 = 0;
  local_278 = 0.0;
  local_280 = 0.0;
  local_288 = param_7;
  local_2a0 = param_8;
  dVar2 = *param_10;
  dVar3 = param_10[1];
  dVar16 = param_10[2];
  local_2b4 = 0;
  uVar23 = (uint)((ulonglong)dVar16 >> 0x20) ^ 0x80000000;
  uVar22 = SUB84(dVar16,0);
  uVar21 = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
  uVar20 = SUB84(dVar3,0);
  uVar27 = (uint)((ulonglong)dVar2 >> 0x20) ^ 0x80000000;
  uVar26 = SUB84(dVar2,0);
  local_338 = (double)param_1[1];
  local_318 = local_338 + 0.0;
  uVar24 = 0xe0000000;
  uVar25 = 0x47efffff;
  iVar12 = 0x1e;
  local_330 = param_3;
  local_328 = param_4;
  local_2b0 = param_2;
  local_2a8 = &local_280;
  local_298 = param_1;
  local_290 = &local_278;
LAB_146d0594e:
  local_260 = -dVar16;
  local_270 = -dVar2;
  dStack_268 = -dVar3;
  local_368 = (double *)(*param_1 + 0x20);
  local_358 = param_7;
  local_360 = &local_278;
  FUN_144a94486(*(undefined8 *)(*param_1 + 0x88),&local_2d0,&local_270,(int)param_1[1]);
  local_360 = (double *)param_8;
  local_368 = &local_280;
  local_270 = dVar2;
  dStack_268 = dVar3;
  local_260 = dVar16;
  FUN_1404b8faa(param_2,&local_2e8,&local_270,0);
  dVar17 = local_278;
  local_320 = local_280;
  uVar28 = SUB84(local_278,0);
  uVar29 = (undefined4)((ulonglong)local_278 >> 0x20);
  lVar9 = (longlong)(int)local_2b4;
  local_2b4 = local_2b4 + 1;
  local_1c8[lVar9 * 3] = local_2c0;
  (&local_1d8)[lVar9 * 3] = local_2d0;
  (&uStack_1d0)[lVar9 * 3] = dStack_2c8;
  local_168[lVar9 * 3] = local_2d8;
  *(undefined4 *)(&local_178 + lVar9 * 3) = local_2e8;
  auStack_170[lVar9 * 6 + -1] = uStack_2e4;
  auStack_170[lVar9 * 6] = uStack_2e0;
  auStack_170[lVar9 * 6 + 1] = uStack_2dc;
  local_238[lVar9 * 3] = local_2d0 - (double)CONCAT44(uStack_2e4,local_2e8);
  local_238[lVar9 * 3 + 1] = dStack_2c8 - (double)CONCAT44(uStack_2dc,uStack_2e0);
  local_238[lVar9 * 3 + 2] = local_2c0 - local_2d8;
  local_368 = (double *)&local_1d8;
  local_360 = (double *)&local_178;
  FUN_146ced5ca(&local_270,local_238,&local_2b4,local_118);
  uVar7 = local_2b4;
  dVar5 = SQRT(local_260 * local_260 + local_270 * local_270 + dStack_268 * dStack_268);
  if (param_11 <= dVar5) goto code_r0x000146d05b42;
  lVar9 = (longlong)(int)local_2b4;
  local_f8 = local_2b4;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_308 = 0;
  uStack_300 = 0;
  FUN_140268ec4(&local_2f8,8);
  FUN_140268ec4(&local_308,8);
  if (0 < lVar9) {
    lVar14 = 0;
    do {
      uVar11 = uStack_2f0;
      lVar13 = (longlong)(int)uStack_2f0;
      uVar8 = (int)uStack_2f0 + 1;
      uStack_2f0 = CONCAT44(uStack_2f0._4_4_,uVar8);
      if (uStack_2f0._4_4_ < uVar8) {
        FUN_14026a4e8(&local_2f8,uVar11 & 0xffffffff);
      }
      uVar11 = uStack_300;
      *(undefined8 *)(local_2f8 + 0x10 + lVar13 * 0x18) =
           *(undefined8 *)((longlong)local_1c8 + lVar14);
      uVar24 = *(undefined4 *)((longlong)&local_1d8 + lVar14 + 4);
      uVar25 = *(undefined4 *)((longlong)&uStack_1d0 + lVar14);
      uVar6 = *(undefined4 *)((longlong)local_1c8 + lVar14 + -4);
      puVar1 = (undefined4 *)(local_2f8 + lVar13 * 0x18);
      *puVar1 = *(undefined4 *)((longlong)&local_1d8 + lVar14);
      puVar1[1] = uVar24;
      puVar1[2] = uVar25;
      puVar1[3] = uVar6;
      lVar13 = (longlong)(int)uStack_300;
      uVar8 = (int)uStack_300 + 1;
      uStack_300 = CONCAT44(uStack_300._4_4_,uVar8);
      if (uStack_300._4_4_ < uVar8) {
        FUN_14026a4e8(&local_308,uVar11 & 0xffffffff);
      }
      *(undefined8 *)(local_308 + 0x10 + lVar13 * 0x18) =
           *(undefined8 *)((longlong)local_168 + lVar14);
      uVar24 = *(undefined4 *)((longlong)auStack_170 + lVar14 + -4);
      uVar25 = *(undefined4 *)((longlong)auStack_170 + lVar14);
      uVar6 = *(undefined4 *)((longlong)auStack_170 + lVar14 + 4);
      puVar1 = (undefined4 *)(local_308 + lVar13 * 0x18);
      *puVar1 = *(undefined4 *)((longlong)&local_178 + lVar14);
      puVar1[1] = uVar24;
      puVar1[2] = uVar25;
      puVar1[3] = uVar6;
      lVar14 = lVar14 + 0x18;
    } while (lVar9 * 0x18 != lVar14);
  }
  if (dVar17 <= local_320) {
    uVar28 = SUB84(local_320,0);
    uVar29 = (undefined4)((ulonglong)local_320 >> 0x20);
  }
  local_240 = &local_298;
  local_248 = FUN_146d06966;
  local_250 = &local_2b0;
  local_258 = FUN_146d069e0;
  local_348 = param_12;
  local_350 = &local_2e8;
  local_358 = &local_2d0;
  local_368 = &local_310;
  local_360 = &local_270;
  uVar8 = FUN_144918d86(&local_2f8);
  if (uVar8 < 2) {
    param_6[2] = local_260;
    *param_6 = local_270;
    param_6[1] = dStack_268;
    *local_330 = local_310 + local_338 + 0.0;
    *local_328 = local_338 * local_270 + local_2d0;
    local_328[1] = local_338 * dStack_268 + dStack_2c8;
    local_328[2] = local_338 * local_260 + local_2c0;
    *param_5 = (double)CONCAT44(uStack_2e4,local_2e8) - local_270 * 0.0;
    param_5[1] = (double)CONCAT44(uStack_2dc,uStack_2e0) - dStack_268 * 0.0;
    param_5[2] = local_2d8 - local_260 * 0.0;
    *param_9 = CONCAT44(uVar29,uVar28);
    bVar15 = false;
  }
  else {
    bVar15 = true;
    if (uVar8 == 3) {
      uVar26 = SUB84(local_270,0);
      uVar27 = (uint)((ulonglong)local_270 >> 0x20);
      uVar20 = SUB84(dStack_268,0);
      uVar21 = (uint)((ulonglong)dStack_268 >> 0x20);
      uVar22 = SUB84(local_260,0);
      uVar23 = (uint)((ulonglong)local_260 >> 0x20);
      dVar5 = -local_310;
    }
  }
  if (local_308 != 0) {
    FUN_1400020a8();
  }
  if (local_2f8 != 0) {
    FUN_1400020a8();
  }
  if (!bVar15) goto LAB_146d05d08;
  goto LAB_146d05bb9;
code_r0x000146d05b42:
  dVar18 = (double)CONCAT44(uVar25,uVar24);
  dVar16 = 1.0 / dVar5;
  dVar2 = local_270 * dVar16;
  dVar3 = dStack_268 * dVar16;
  dVar16 = local_260 * dVar16;
  uVar23 = (uint)((ulonglong)dVar16 >> 0x20) ^ 0x80000000;
  uVar22 = SUB84(dVar16,0);
  uVar21 = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
  uVar20 = SUB84(dVar3,0);
  uVar27 = (uint)((ulonglong)dVar2 >> 0x20) ^ 0x80000000;
  uVar26 = SUB84(dVar2,0);
  bVar15 = iVar12 == 0;
  iVar12 = iVar12 + -1;
  uVar24 = SUB84(dVar5,0);
  uVar25 = (undefined4)((ulonglong)dVar5 >> 0x20);
  if (bVar15 || dVar18 - param_11 <= dVar5) {
    if (dVar17 <= local_320) {
      uVar28 = SUB84(local_320,0);
      uVar29 = (undefined4)((ulonglong)local_320 >> 0x20);
    }
    local_f8 = local_2b4;
LAB_146d05bb9:
    dVar2 = 0.0;
    dVar17 = 0.0;
    dVar16 = 0.0;
    dVar18 = 0.0;
    dVar3 = 0.0;
    dVar19 = 0.0;
    if (0 < (int)uVar7) {
      pdVar10 = local_168;
      uVar11 = 0;
      dVar3 = 0.0;
      dVar2 = 0.0;
      do {
        dVar4 = local_118[uVar11];
        dVar19 = dVar19 + pdVar10[-0xc] * dVar4;
        dVar3 = dVar3 + pdVar10[-0xd] * dVar4;
        dVar18 = dVar18 + pdVar10[-0xe] * dVar4;
        dVar16 = dVar16 + *pdVar10 * dVar4;
        dVar17 = dVar17 + pdVar10[-1] * dVar4;
        dVar2 = dVar2 + dVar4 * pdVar10[-2];
        uVar11 = uVar11 + 1;
        pdVar10 = pdVar10 + 3;
      } while (uVar7 != uVar11);
    }
    *local_330 = local_318 - dVar5;
    *local_328 = local_338 * (double)CONCAT44(uVar27,uVar26) + dVar18;
    local_328[1] = local_338 * (double)CONCAT44(uVar21,uVar20) + dVar3;
    local_328[2] = local_338 * (double)CONCAT44(uVar23,uVar22) + dVar19;
    *param_5 = dVar2 - (double)CONCAT44(uVar27,uVar26) * 0.0;
    param_5[1] = dVar17 - (double)CONCAT44(uVar21,uVar20) * 0.0;
    param_5[2] = dVar16 - (double)CONCAT44(uVar23,uVar22) * 0.0;
    *param_6 = (double)CONCAT44(uVar27,uVar26);
    param_6[1] = (double)CONCAT44(uVar21,uVar20);
    param_6[2] = (double)CONCAT44(uVar23,uVar22);
    *param_9 = CONCAT44(uVar29,uVar28);
LAB_146d05d08:
    if ((local_f0 ^ (ulonglong)local_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_146d0594e;
}



// FUNCTION 146d0609b FUN_146d0609b body=2249 status=ok
// SIG undefined FUN_146d0609b(void)

undefined8
FUN_146d0609b(longlong *param_1,undefined8 param_2,double *param_3,double *param_4,double *param_5,
             double *param_6,double *param_7,undefined8 param_8,undefined8 *param_9,double *param_10
             ,double param_11,undefined8 param_12)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  double *pdVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  bool bVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined4 uVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_3a8 [32];
  double *local_388;
  double *local_380;
  double *local_378;
  undefined4 *local_370;
  undefined8 local_368;
  double local_358;
  double *local_350;
  double *local_348;
  double local_340;
  double local_338;
  double local_330;
  longlong local_328;
  undefined8 uStack_320;
  longlong local_318;
  undefined8 uStack_310;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  double local_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  undefined8 local_2d0;
  double *local_2c8;
  undefined8 local_2c0;
  longlong *local_2b8;
  double *local_2b0;
  double *local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double dStack_288;
  double local_280;
  code *local_278;
  undefined8 *local_270;
  code *local_268;
  longlong **local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  double local_238 [12];
  double local_1d8 [12];
  double local_178;
  undefined4 auStack_170 [2];
  double local_168 [10];
  double local_118 [4];
  uint local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  local_f8 = 0;
  local_2b0 = &local_298;
  local_298 = 0.0;
  local_2c8 = &local_2a0;
  local_2a0 = 0.0;
  local_2a8 = param_7;
  local_2c0 = param_8;
  dVar2 = *param_10;
  dVar3 = param_10[1];
  dVar16 = param_10[2];
  uVar25 = (uint)((ulonglong)dVar16 >> 0x20) ^ 0x80000000;
  uVar24 = SUB84(dVar16,0);
  uVar23 = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
  uVar22 = SUB84(dVar3,0);
  uVar21 = (uint)((ulonglong)dVar2 >> 0x20) ^ 0x80000000;
  uVar20 = SUB84(dVar2,0);
  local_248 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_358 = (double)param_1[1];
  local_338 = local_358 + 0.0;
  iVar13 = 0x1e;
  pdVar11 = local_1d8;
  dVar17 = 3.4028234663852886e+38;
  local_350 = param_3;
  local_348 = param_4;
  local_2d0 = param_2;
  local_2b8 = param_1;
LAB_146d06223:
  local_280 = -dVar16;
  local_290 = -dVar2;
  dStack_288 = -dVar3;
  local_388 = (double *)(*param_1 + 0x20);
  local_378 = param_7;
  local_380 = &local_298;
  FUN_144a94486(*(undefined8 *)(*param_1 + 0x88),&local_2e8,&local_290,(int)param_1[1]);
  local_380 = (double *)param_8;
  local_388 = &local_2a0;
  local_290 = dVar2;
  dStack_288 = dVar3;
  local_280 = dVar16;
  FUN_1404b8faa(param_2,&local_300,&local_290,0);
  dVar18 = local_298;
  local_340 = local_2a0;
  uVar26 = SUB84(local_298,0);
  uVar27 = (undefined4)((ulonglong)local_298 >> 0x20);
  lVar10 = (longlong)(int)(uint)local_258;
  local_1d8[lVar10 * 3 + 2] = local_2d8;
  local_1d8[lVar10 * 3] = local_2e8;
  local_1d8[lVar10 * 3 + 1] = dStack_2e0;
  local_168[lVar10 * 3] = local_2f0;
  *(undefined4 *)(&local_178 + lVar10 * 3) = local_300;
  auStack_170[lVar10 * 6 + -1] = uStack_2fc;
  auStack_170[lVar10 * 6] = uStack_2f8;
  auStack_170[lVar10 * 6 + 1] = uStack_2f4;
  *(uint *)((longlong)&local_258 + lVar10 * 4 + 4) = (uint)local_258;
  local_258 = CONCAT44(local_258._4_4_,(uint)local_258 + 1);
  local_238[lVar10 * 3] = local_2e8 - (double)CONCAT44(uStack_2fc,local_300);
  local_238[lVar10 * 3 + 1] = dStack_2e0 - (double)CONCAT44(uStack_2f4,uStack_2f8);
  local_238[lVar10 * 3 + 2] = local_2d8 - local_2f0;
  local_388 = pdVar11;
  local_380 = &local_178;
  FUN_1449162b1(&local_290,local_238,&local_258,local_118);
  dVar5 = SQRT(local_280 * local_280 + local_290 * local_290 + dStack_288 * dStack_288);
  if (param_11 <= dVar5) goto code_r0x000146d0641e;
  local_f8 = (uint)local_258;
  local_318 = 0;
  uStack_310 = 0;
  local_328 = 0;
  uStack_320 = 0;
  FUN_140268ec4(&local_318,8);
  FUN_140268ec4(&local_328,8);
  if (0 < (int)(uint)local_258) {
    lVar10 = 0;
    do {
      uVar12 = uStack_310;
      lVar14 = (longlong)(int)uStack_310;
      uVar9 = (int)uStack_310 + 1;
      uStack_310 = CONCAT44(uStack_310._4_4_,uVar9);
      if (uStack_310._4_4_ < uVar9) {
        FUN_14026a4e8(&local_318,uVar12 & 0xffffffff);
      }
      uVar12 = uStack_320;
      *(double *)(local_318 + 0x10 + lVar14 * 0x18) = pdVar11[2];
      uVar6 = *(undefined4 *)((longlong)pdVar11 + 4);
      uVar7 = *(undefined4 *)(pdVar11 + 1);
      uVar8 = *(undefined4 *)((longlong)pdVar11 + 0xc);
      puVar1 = (undefined4 *)(local_318 + lVar14 * 0x18);
      *puVar1 = *(undefined4 *)pdVar11;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar14 = (longlong)(int)uStack_320;
      uVar9 = (int)uStack_320 + 1;
      uStack_320 = CONCAT44(uStack_320._4_4_,uVar9);
      if (uStack_320._4_4_ < uVar9) {
        FUN_14026a4e8(&local_328,uVar12 & 0xffffffff);
      }
      *(double *)(local_328 + 0x10 + lVar14 * 0x18) = pdVar11[0xe];
      uVar6 = *(undefined4 *)((longlong)pdVar11 + 100);
      uVar7 = *(undefined4 *)(pdVar11 + 0xd);
      uVar8 = *(undefined4 *)((longlong)pdVar11 + 0x6c);
      puVar1 = (undefined4 *)(local_328 + lVar14 * 0x18);
      *puVar1 = *(undefined4 *)(pdVar11 + 0xc);
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar10 = lVar10 + 1;
      pdVar11 = pdVar11 + 3;
    } while (lVar10 < (int)(uint)local_258);
  }
  if (dVar18 <= local_340) {
    uVar26 = SUB84(local_340,0);
    uVar27 = (undefined4)((ulonglong)local_340 >> 0x20);
  }
  local_260 = &local_2b8;
  local_268 = FUN_146d06a46;
  local_270 = &local_2d0;
  local_278 = FUN_146d06ac0;
  local_368 = param_12;
  local_370 = &local_300;
  local_378 = &local_2e8;
  local_388 = &local_330;
  local_380 = &local_290;
  uVar9 = FUN_144918d86(&local_318);
  if (uVar9 < 2) {
    param_6[2] = local_280;
    *param_6 = local_290;
    param_6[1] = dStack_288;
    *local_350 = local_330 + local_358 + 0.0;
    *local_348 = local_358 * local_290 + local_2e8;
    local_348[1] = local_358 * dStack_288 + dStack_2e0;
    local_348[2] = local_358 * local_280 + local_2d8;
    *param_5 = (double)CONCAT44(uStack_2fc,local_300) - local_290 * 0.0;
    param_5[1] = (double)CONCAT44(uStack_2f4,uStack_2f8) - dStack_288 * 0.0;
    param_5[2] = local_2f0 - local_280 * 0.0;
    *param_9 = CONCAT44(uVar27,uVar26);
    bVar15 = false;
  }
  else {
    bVar15 = true;
    if (uVar9 == 3) {
      uVar20 = SUB84(local_290,0);
      uVar21 = (uint)((ulonglong)local_290 >> 0x20);
      uVar22 = SUB84(dStack_288,0);
      uVar23 = (uint)((ulonglong)dStack_288 >> 0x20);
      uVar24 = SUB84(local_280,0);
      uVar25 = (uint)((ulonglong)local_280 >> 0x20);
      dVar5 = -local_330;
    }
  }
  if (local_328 != 0) {
    FUN_1400020a8();
  }
  if (local_318 != 0) {
    FUN_1400020a8();
  }
  if (!bVar15) goto LAB_146d065d2;
  goto LAB_146d06485;
code_r0x000146d0641e:
  bVar15 = iVar13 == 0;
  iVar13 = iVar13 + -1;
  dVar16 = 1.0 / dVar5;
  dVar2 = local_290 * dVar16;
  dVar3 = dStack_288 * dVar16;
  dVar16 = local_280 * dVar16;
  uVar25 = (uint)((ulonglong)dVar16 >> 0x20) ^ 0x80000000;
  uVar24 = SUB84(dVar16,0);
  uVar23 = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
  uVar22 = SUB84(dVar3,0);
  uVar21 = (uint)((ulonglong)dVar2 >> 0x20) ^ 0x80000000;
  uVar20 = SUB84(dVar2,0);
  if ((dVar17 <= dVar5) || (dVar17 = dVar5, bVar15)) {
    if (dVar18 <= local_340) {
      uVar26 = SUB84(local_340,0);
      uVar27 = (undefined4)((ulonglong)local_340 >> 0x20);
    }
    local_f8 = (uint)local_258;
LAB_146d06485:
    dVar2 = 0.0;
    dVar17 = 0.0;
    dVar16 = 0.0;
    dVar18 = 0.0;
    dVar3 = 0.0;
    dVar19 = 0.0;
    if (0 < (int)(uint)local_258) {
      pdVar11 = local_168;
      uVar12 = 0;
      dVar3 = 0.0;
      dVar2 = 0.0;
      do {
        dVar4 = local_118[uVar12];
        dVar19 = dVar19 + pdVar11[-0xc] * dVar4;
        dVar3 = dVar3 + pdVar11[-0xd] * dVar4;
        dVar18 = dVar18 + pdVar11[-0xe] * dVar4;
        dVar16 = dVar16 + *pdVar11 * dVar4;
        dVar17 = dVar17 + pdVar11[-1] * dVar4;
        dVar2 = dVar2 + dVar4 * pdVar11[-2];
        uVar12 = uVar12 + 1;
        pdVar11 = pdVar11 + 3;
      } while ((uint)local_258 != uVar12);
    }
    *local_350 = local_338 - dVar5;
    *local_348 = local_358 * (double)CONCAT44(uVar21,uVar20) + dVar18;
    local_348[1] = local_358 * (double)CONCAT44(uVar23,uVar22) + dVar3;
    local_348[2] = local_358 * (double)CONCAT44(uVar25,uVar24) + dVar19;
    *param_5 = dVar2 - (double)CONCAT44(uVar21,uVar20) * 0.0;
    param_5[1] = dVar17 - (double)CONCAT44(uVar23,uVar22) * 0.0;
    param_5[2] = dVar16 - (double)CONCAT44(uVar25,uVar24) * 0.0;
    *param_6 = (double)CONCAT44(uVar21,uVar20);
    param_6[1] = (double)CONCAT44(uVar23,uVar22);
    param_6[2] = (double)CONCAT44(uVar25,uVar24);
    *param_9 = CONCAT44(uVar27,uVar26);
LAB_146d065d2:
    if ((local_f0 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  goto LAB_146d06223;
}



// FUNCTION 146d06966 FUN_146d06966 body=121 status=ok
// SIG undefined FUN_146d06966(void)

undefined8 FUN_146d06966(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined4)param_2[1];
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_38 = (undefined4)param_2[2];
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  lVar1 = *(longlong *)*param_2;
  local_48 = lVar1 + 0x20;
  FUN_144a94486(*(undefined8 *)(lVar1 + 0x88),param_1,&local_28,((longlong *)*param_2)[1]);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d069e0 FUN_146d069e0 body=100 status=ok
// SIG undefined FUN_146d069e0(void)

undefined8 FUN_146d069e0(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined4 *)(param_2 + 1);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = *(undefined4 *)(param_2 + 2);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1404b8faa(*param_2,param_1,&local_28,0);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d06a46 FUN_146d06a46 body=121 status=ok
// SIG undefined FUN_146d06a46(void)

undefined8 FUN_146d06a46(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined4)param_2[1];
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_38 = (undefined4)param_2[2];
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  lVar1 = *(longlong *)*param_2;
  local_48 = lVar1 + 0x20;
  FUN_144a94486(*(undefined8 *)(lVar1 + 0x88),param_1,&local_28,((longlong *)*param_2)[1]);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d06ac0 FUN_146d06ac0 body=100 status=ok
// SIG undefined FUN_146d06ac0(void)

undefined8 FUN_146d06ac0(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined4 *)(param_2 + 1);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = *(undefined4 *)(param_2 + 2);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1404b8faa(*param_2,param_1,&local_28,0);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d06b25 FUN_146d06b25 body=2226 status=ok
// SIG undefined FUN_146d06b25(void)

void FUN_146d06b25(longlong param_1,undefined8 param_2,double *param_3,double *param_4,
                  double *param_5,double *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9,double *param_10,double param_11,undefined8 param_12)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  double *pdVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 local_388 [32];
  double *local_368;
  double *local_360;
  double *local_358;
  undefined4 *local_350;
  undefined8 local_348;
  double local_338;
  double *local_330;
  double *local_328;
  double local_320;
  double local_318;
  double local_310;
  longlong local_308;
  undefined8 uStack_300;
  longlong local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  double local_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  uint local_2b4;
  undefined8 local_2b0;
  double *local_2a8;
  undefined8 local_2a0;
  longlong local_298;
  double *local_290;
  undefined8 local_288;
  double local_280;
  double local_278;
  double local_270;
  double dStack_268;
  double local_260;
  code *local_258;
  undefined8 *local_250;
  code *local_248;
  longlong *local_240;
  double local_238 [12];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  double local_1c8 [10];
  undefined8 local_178;
  undefined4 auStack_170 [2];
  double local_168 [10];
  double local_118 [4];
  uint local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)local_388;
  local_f8 = 0;
  local_278 = 0.0;
  local_280 = 0.0;
  local_288 = param_7;
  local_2a0 = param_8;
  dVar2 = *param_10;
  dVar3 = param_10[1];
  dVar16 = param_10[2];
  local_2b4 = 0;
  uVar23 = (uint)((ulonglong)dVar16 >> 0x20) ^ 0x80000000;
  uVar22 = SUB84(dVar16,0);
  uVar21 = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
  uVar20 = SUB84(dVar3,0);
  uVar27 = (uint)((ulonglong)dVar2 >> 0x20) ^ 0x80000000;
  uVar26 = SUB84(dVar2,0);
  local_338 = *(double *)(param_1 + 8);
  local_318 = local_338 + 0.0;
  uVar24 = 0xe0000000;
  uVar25 = 0x47efffff;
  iVar12 = 0x1e;
  local_330 = param_3;
  local_328 = param_4;
  local_2b0 = param_2;
  local_2a8 = &local_280;
  local_298 = param_1;
  local_290 = &local_278;
LAB_146d06c9c:
  local_260 = -dVar16;
  local_270 = -dVar2;
  dStack_268 = -dVar3;
  local_360 = (double *)param_7;
  local_368 = &local_278;
  FUN_1404b5d90(param_1,&local_2d0,&local_270,(int)*(undefined8 *)(param_1 + 8));
  local_360 = (double *)param_8;
  local_368 = &local_280;
  local_270 = dVar2;
  dStack_268 = dVar3;
  local_260 = dVar16;
  FUN_1404b8faa(param_2,&local_2e8,&local_270,0);
  dVar17 = local_278;
  local_320 = local_280;
  uVar28 = SUB84(local_278,0);
  uVar29 = (undefined4)((ulonglong)local_278 >> 0x20);
  lVar9 = (longlong)(int)local_2b4;
  local_2b4 = local_2b4 + 1;
  local_1c8[lVar9 * 3] = local_2c0;
  (&local_1d8)[lVar9 * 3] = local_2d0;
  (&uStack_1d0)[lVar9 * 3] = dStack_2c8;
  local_168[lVar9 * 3] = local_2d8;
  *(undefined4 *)(&local_178 + lVar9 * 3) = local_2e8;
  auStack_170[lVar9 * 6 + -1] = uStack_2e4;
  auStack_170[lVar9 * 6] = uStack_2e0;
  auStack_170[lVar9 * 6 + 1] = uStack_2dc;
  local_238[lVar9 * 3] = local_2d0 - (double)CONCAT44(uStack_2e4,local_2e8);
  local_238[lVar9 * 3 + 1] = dStack_2c8 - (double)CONCAT44(uStack_2dc,uStack_2e0);
  local_238[lVar9 * 3 + 2] = local_2c0 - local_2d8;
  local_368 = (double *)&local_1d8;
  local_360 = (double *)&local_178;
  FUN_146ced5ca(&local_270,local_238,&local_2b4,local_118);
  uVar7 = local_2b4;
  dVar5 = SQRT(local_260 * local_260 + local_270 * local_270 + dStack_268 * dStack_268);
  if (param_11 <= dVar5) goto code_r0x000146d06e7f;
  lVar9 = (longlong)(int)local_2b4;
  local_f8 = local_2b4;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_308 = 0;
  uStack_300 = 0;
  FUN_140268ec4(&local_2f8,8);
  FUN_140268ec4(&local_308,8);
  if (0 < lVar9) {
    lVar14 = 0;
    do {
      uVar11 = uStack_2f0;
      lVar13 = (longlong)(int)uStack_2f0;
      uVar8 = (int)uStack_2f0 + 1;
      uStack_2f0 = CONCAT44(uStack_2f0._4_4_,uVar8);
      if (uStack_2f0._4_4_ < uVar8) {
        FUN_14026a4e8(&local_2f8,uVar11 & 0xffffffff);
      }
      uVar11 = uStack_300;
      *(undefined8 *)(local_2f8 + 0x10 + lVar13 * 0x18) =
           *(undefined8 *)((longlong)local_1c8 + lVar14);
      uVar24 = *(undefined4 *)((longlong)&local_1d8 + lVar14 + 4);
      uVar25 = *(undefined4 *)((longlong)&uStack_1d0 + lVar14);
      uVar6 = *(undefined4 *)((longlong)local_1c8 + lVar14 + -4);
      puVar1 = (undefined4 *)(local_2f8 + lVar13 * 0x18);
      *puVar1 = *(undefined4 *)((longlong)&local_1d8 + lVar14);
      puVar1[1] = uVar24;
      puVar1[2] = uVar25;
      puVar1[3] = uVar6;
      lVar13 = (longlong)(int)uStack_300;
      uVar8 = (int)uStack_300 + 1;
      uStack_300 = CONCAT44(uStack_300._4_4_,uVar8);
      if (uStack_300._4_4_ < uVar8) {
        FUN_14026a4e8(&local_308,uVar11 & 0xffffffff);
      }
      *(undefined8 *)(local_308 + 0x10 + lVar13 * 0x18) =
           *(undefined8 *)((longlong)local_168 + lVar14);
      uVar24 = *(undefined4 *)((longlong)auStack_170 + lVar14 + -4);
      uVar25 = *(undefined4 *)((longlong)auStack_170 + lVar14);
      uVar6 = *(undefined4 *)((longlong)auStack_170 + lVar14 + 4);
      puVar1 = (undefined4 *)(local_308 + lVar13 * 0x18);
      *puVar1 = *(undefined4 *)((longlong)&local_178 + lVar14);
      puVar1[1] = uVar24;
      puVar1[2] = uVar25;
      puVar1[3] = uVar6;
      lVar14 = lVar14 + 0x18;
    } while (lVar9 * 0x18 != lVar14);
  }
  if (dVar17 <= local_320) {
    uVar28 = SUB84(local_320,0);
    uVar29 = (undefined4)((ulonglong)local_320 >> 0x20);
  }
  local_240 = &local_298;
  local_248 = FUN_146d07c92;
  local_250 = &local_2b0;
  local_258 = FUN_146d07cfa;
  local_348 = param_12;
  local_350 = &local_2e8;
  local_358 = &local_2d0;
  local_368 = &local_310;
  local_360 = &local_270;
  uVar8 = FUN_144918d86(&local_2f8);
  if (uVar8 < 2) {
    param_6[2] = local_260;
    *param_6 = local_270;
    param_6[1] = dStack_268;
    *local_330 = local_310 + local_338 + 0.0;
    *local_328 = local_338 * local_270 + local_2d0;
    local_328[1] = local_338 * dStack_268 + dStack_2c8;
    local_328[2] = local_338 * local_260 + local_2c0;
    *param_5 = (double)CONCAT44(uStack_2e4,local_2e8) - local_270 * 0.0;
    param_5[1] = (double)CONCAT44(uStack_2dc,uStack_2e0) - dStack_268 * 0.0;
    param_5[2] = local_2d8 - local_260 * 0.0;
    *param_9 = CONCAT44(uVar29,uVar28);
    bVar15 = false;
  }
  else {
    bVar15 = true;
    if (uVar8 == 3) {
      uVar26 = SUB84(local_270,0);
      uVar27 = (uint)((ulonglong)local_270 >> 0x20);
      uVar20 = SUB84(dStack_268,0);
      uVar21 = (uint)((ulonglong)dStack_268 >> 0x20);
      uVar22 = SUB84(local_260,0);
      uVar23 = (uint)((ulonglong)local_260 >> 0x20);
      dVar5 = -local_310;
    }
  }
  if (local_308 != 0) {
    FUN_1400020a8();
  }
  if (local_2f8 != 0) {
    FUN_1400020a8();
  }
  if (!bVar15) goto LAB_146d07045;
  goto LAB_146d06ef6;
code_r0x000146d06e7f:
  dVar18 = (double)CONCAT44(uVar25,uVar24);
  dVar16 = 1.0 / dVar5;
  dVar2 = local_270 * dVar16;
  dVar3 = dStack_268 * dVar16;
  dVar16 = local_260 * dVar16;
  uVar23 = (uint)((ulonglong)dVar16 >> 0x20) ^ 0x80000000;
  uVar22 = SUB84(dVar16,0);
  uVar21 = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
  uVar20 = SUB84(dVar3,0);
  uVar27 = (uint)((ulonglong)dVar2 >> 0x20) ^ 0x80000000;
  uVar26 = SUB84(dVar2,0);
  bVar15 = iVar12 == 0;
  iVar12 = iVar12 + -1;
  uVar24 = SUB84(dVar5,0);
  uVar25 = (undefined4)((ulonglong)dVar5 >> 0x20);
  if (bVar15 || dVar18 - param_11 <= dVar5) {
    if (dVar17 <= local_320) {
      uVar28 = SUB84(local_320,0);
      uVar29 = (undefined4)((ulonglong)local_320 >> 0x20);
    }
    local_f8 = local_2b4;
LAB_146d06ef6:
    dVar2 = 0.0;
    dVar17 = 0.0;
    dVar16 = 0.0;
    dVar18 = 0.0;
    dVar3 = 0.0;
    dVar19 = 0.0;
    if (0 < (int)uVar7) {
      pdVar10 = local_168;
      uVar11 = 0;
      dVar3 = 0.0;
      dVar2 = 0.0;
      do {
        dVar4 = local_118[uVar11];
        dVar19 = dVar19 + pdVar10[-0xc] * dVar4;
        dVar3 = dVar3 + pdVar10[-0xd] * dVar4;
        dVar18 = dVar18 + pdVar10[-0xe] * dVar4;
        dVar16 = dVar16 + *pdVar10 * dVar4;
        dVar17 = dVar17 + pdVar10[-1] * dVar4;
        dVar2 = dVar2 + dVar4 * pdVar10[-2];
        uVar11 = uVar11 + 1;
        pdVar10 = pdVar10 + 3;
      } while (uVar7 != uVar11);
    }
    *local_330 = local_318 - dVar5;
    *local_328 = local_338 * (double)CONCAT44(uVar27,uVar26) + dVar18;
    local_328[1] = local_338 * (double)CONCAT44(uVar21,uVar20) + dVar3;
    local_328[2] = local_338 * (double)CONCAT44(uVar23,uVar22) + dVar19;
    *param_5 = dVar2 - (double)CONCAT44(uVar27,uVar26) * 0.0;
    param_5[1] = dVar17 - (double)CONCAT44(uVar21,uVar20) * 0.0;
    param_5[2] = dVar16 - (double)CONCAT44(uVar23,uVar22) * 0.0;
    *param_6 = (double)CONCAT44(uVar27,uVar26);
    param_6[1] = (double)CONCAT44(uVar21,uVar20);
    param_6[2] = (double)CONCAT44(uVar23,uVar22);
    *param_9 = CONCAT44(uVar29,uVar28);
LAB_146d07045:
    if ((local_f0 ^ (ulonglong)local_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_146d06c9c;
}



// FUNCTION 146d073d8 FUN_146d073d8 body=2232 status=ok
// SIG undefined FUN_146d073d8(void)

undefined8
FUN_146d073d8(longlong param_1,undefined8 param_2,double *param_3,double *param_4,double *param_5,
             double *param_6,undefined8 param_7,undefined8 param_8,undefined8 *param_9,
             double *param_10,double param_11,undefined8 param_12)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  double *pdVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  bool bVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined4 uVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_3a8 [32];
  double *local_388;
  double *local_380;
  double *local_378;
  undefined4 *local_370;
  undefined8 local_368;
  double local_358;
  double *local_350;
  double *local_348;
  double local_340;
  double local_338;
  double local_330;
  longlong local_328;
  undefined8 uStack_320;
  longlong local_318;
  undefined8 uStack_310;
  undefined4 local_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  double local_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  undefined8 local_2d0;
  double *local_2c8;
  undefined8 local_2c0;
  longlong local_2b8;
  double *local_2b0;
  undefined8 local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double dStack_288;
  double local_280;
  code *local_278;
  undefined8 *local_270;
  code *local_268;
  longlong *local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  double local_238 [12];
  double local_1d8 [12];
  double local_178;
  undefined4 auStack_170 [2];
  double local_168 [10];
  double local_118 [4];
  uint local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  local_f8 = 0;
  local_2b0 = &local_298;
  local_298 = 0.0;
  local_2c8 = &local_2a0;
  local_2a0 = 0.0;
  local_2a8 = param_7;
  local_2c0 = param_8;
  dVar2 = *param_10;
  dVar3 = param_10[1];
  dVar16 = param_10[2];
  uVar25 = (uint)((ulonglong)dVar16 >> 0x20) ^ 0x80000000;
  uVar24 = SUB84(dVar16,0);
  uVar23 = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
  uVar22 = SUB84(dVar3,0);
  uVar21 = (uint)((ulonglong)dVar2 >> 0x20) ^ 0x80000000;
  uVar20 = SUB84(dVar2,0);
  local_248 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_358 = *(double *)(param_1 + 8);
  local_338 = local_358 + 0.0;
  iVar13 = 0x1e;
  pdVar11 = local_1d8;
  dVar17 = 3.4028234663852886e+38;
  local_350 = param_3;
  local_348 = param_4;
  local_2d0 = param_2;
  local_2b8 = param_1;
LAB_146d07560:
  local_280 = -dVar16;
  local_290 = -dVar2;
  dStack_288 = -dVar3;
  local_380 = (double *)param_7;
  local_388 = &local_298;
  FUN_1404b5d90(param_1,&local_2e8,&local_290,(int)*(undefined8 *)(param_1 + 8));
  local_380 = (double *)param_8;
  local_388 = &local_2a0;
  local_290 = dVar2;
  dStack_288 = dVar3;
  local_280 = dVar16;
  FUN_1404b8faa(param_2,&local_300,&local_290,0);
  dVar18 = local_298;
  local_340 = local_2a0;
  uVar26 = SUB84(local_298,0);
  uVar27 = (undefined4)((ulonglong)local_298 >> 0x20);
  lVar10 = (longlong)(int)(uint)local_258;
  local_1d8[lVar10 * 3 + 2] = local_2d8;
  local_1d8[lVar10 * 3] = local_2e8;
  local_1d8[lVar10 * 3 + 1] = dStack_2e0;
  local_168[lVar10 * 3] = local_2f0;
  *(undefined4 *)(&local_178 + lVar10 * 3) = local_300;
  auStack_170[lVar10 * 6 + -1] = uStack_2fc;
  auStack_170[lVar10 * 6] = uStack_2f8;
  auStack_170[lVar10 * 6 + 1] = uStack_2f4;
  *(uint *)((longlong)&local_258 + lVar10 * 4 + 4) = (uint)local_258;
  local_258 = CONCAT44(local_258._4_4_,(uint)local_258 + 1);
  local_238[lVar10 * 3] = local_2e8 - (double)CONCAT44(uStack_2fc,local_300);
  local_238[lVar10 * 3 + 1] = dStack_2e0 - (double)CONCAT44(uStack_2f4,uStack_2f8);
  local_238[lVar10 * 3 + 2] = local_2d8 - local_2f0;
  local_388 = pdVar11;
  local_380 = &local_178;
  FUN_1449162b1(&local_290,local_238,&local_258,local_118);
  dVar5 = SQRT(local_280 * local_280 + local_290 * local_290 + dStack_288 * dStack_288);
  if (param_11 <= dVar5) goto code_r0x000146d0774a;
  local_f8 = (uint)local_258;
  local_318 = 0;
  uStack_310 = 0;
  local_328 = 0;
  uStack_320 = 0;
  FUN_140268ec4(&local_318,8);
  FUN_140268ec4(&local_328,8);
  if (0 < (int)(uint)local_258) {
    lVar10 = 0;
    do {
      uVar12 = uStack_310;
      lVar14 = (longlong)(int)uStack_310;
      uVar9 = (int)uStack_310 + 1;
      uStack_310 = CONCAT44(uStack_310._4_4_,uVar9);
      if (uStack_310._4_4_ < uVar9) {
        FUN_14026a4e8(&local_318,uVar12 & 0xffffffff);
      }
      uVar12 = uStack_320;
      *(double *)(local_318 + 0x10 + lVar14 * 0x18) = pdVar11[2];
      uVar6 = *(undefined4 *)((longlong)pdVar11 + 4);
      uVar7 = *(undefined4 *)(pdVar11 + 1);
      uVar8 = *(undefined4 *)((longlong)pdVar11 + 0xc);
      puVar1 = (undefined4 *)(local_318 + lVar14 * 0x18);
      *puVar1 = *(undefined4 *)pdVar11;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar14 = (longlong)(int)uStack_320;
      uVar9 = (int)uStack_320 + 1;
      uStack_320 = CONCAT44(uStack_320._4_4_,uVar9);
      if (uStack_320._4_4_ < uVar9) {
        FUN_14026a4e8(&local_328,uVar12 & 0xffffffff);
      }
      *(double *)(local_328 + 0x10 + lVar14 * 0x18) = pdVar11[0xe];
      uVar6 = *(undefined4 *)((longlong)pdVar11 + 100);
      uVar7 = *(undefined4 *)(pdVar11 + 0xd);
      uVar8 = *(undefined4 *)((longlong)pdVar11 + 0x6c);
      puVar1 = (undefined4 *)(local_328 + lVar14 * 0x18);
      *puVar1 = *(undefined4 *)(pdVar11 + 0xc);
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar10 = lVar10 + 1;
      pdVar11 = pdVar11 + 3;
    } while (lVar10 < (int)(uint)local_258);
  }
  if (dVar18 <= local_340) {
    uVar26 = SUB84(local_340,0);
    uVar27 = (undefined4)((ulonglong)local_340 >> 0x20);
  }
  local_260 = &local_2b8;
  local_268 = FUN_146d07d60;
  local_270 = &local_2d0;
  local_278 = FUN_146d07dc8;
  local_368 = param_12;
  local_370 = &local_300;
  local_378 = &local_2e8;
  local_388 = &local_330;
  local_380 = &local_290;
  uVar9 = FUN_144918d86(&local_318);
  if (uVar9 < 2) {
    param_6[2] = local_280;
    *param_6 = local_290;
    param_6[1] = dStack_288;
    *local_350 = local_330 + local_358 + 0.0;
    *local_348 = local_358 * local_290 + local_2e8;
    local_348[1] = local_358 * dStack_288 + dStack_2e0;
    local_348[2] = local_358 * local_280 + local_2d8;
    *param_5 = (double)CONCAT44(uStack_2fc,local_300) - local_290 * 0.0;
    param_5[1] = (double)CONCAT44(uStack_2f4,uStack_2f8) - dStack_288 * 0.0;
    param_5[2] = local_2f0 - local_280 * 0.0;
    *param_9 = CONCAT44(uVar27,uVar26);
    bVar15 = false;
  }
  else {
    bVar15 = true;
    if (uVar9 == 3) {
      uVar20 = SUB84(local_290,0);
      uVar21 = (uint)((ulonglong)local_290 >> 0x20);
      uVar22 = SUB84(dStack_288,0);
      uVar23 = (uint)((ulonglong)dStack_288 >> 0x20);
      uVar24 = SUB84(local_280,0);
      uVar25 = (uint)((ulonglong)local_280 >> 0x20);
      dVar5 = -local_330;
    }
  }
  if (local_328 != 0) {
    FUN_1400020a8();
  }
  if (local_318 != 0) {
    FUN_1400020a8();
  }
  if (!bVar15) goto LAB_146d078fe;
  goto LAB_146d077b1;
code_r0x000146d0774a:
  bVar15 = iVar13 == 0;
  iVar13 = iVar13 + -1;
  dVar16 = 1.0 / dVar5;
  dVar2 = local_290 * dVar16;
  dVar3 = dStack_288 * dVar16;
  dVar16 = local_280 * dVar16;
  uVar25 = (uint)((ulonglong)dVar16 >> 0x20) ^ 0x80000000;
  uVar24 = SUB84(dVar16,0);
  uVar23 = (uint)((ulonglong)dVar3 >> 0x20) ^ 0x80000000;
  uVar22 = SUB84(dVar3,0);
  uVar21 = (uint)((ulonglong)dVar2 >> 0x20) ^ 0x80000000;
  uVar20 = SUB84(dVar2,0);
  if ((dVar17 <= dVar5) || (dVar17 = dVar5, bVar15)) {
    if (dVar18 <= local_340) {
      uVar26 = SUB84(local_340,0);
      uVar27 = (undefined4)((ulonglong)local_340 >> 0x20);
    }
    local_f8 = (uint)local_258;
LAB_146d077b1:
    dVar2 = 0.0;
    dVar17 = 0.0;
    dVar16 = 0.0;
    dVar18 = 0.0;
    dVar3 = 0.0;
    dVar19 = 0.0;
    if (0 < (int)(uint)local_258) {
      pdVar11 = local_168;
      uVar12 = 0;
      dVar3 = 0.0;
      dVar2 = 0.0;
      do {
        dVar4 = local_118[uVar12];
        dVar19 = dVar19 + pdVar11[-0xc] * dVar4;
        dVar3 = dVar3 + pdVar11[-0xd] * dVar4;
        dVar18 = dVar18 + pdVar11[-0xe] * dVar4;
        dVar16 = dVar16 + *pdVar11 * dVar4;
        dVar17 = dVar17 + pdVar11[-1] * dVar4;
        dVar2 = dVar2 + dVar4 * pdVar11[-2];
        uVar12 = uVar12 + 1;
        pdVar11 = pdVar11 + 3;
      } while ((uint)local_258 != uVar12);
    }
    *local_350 = local_338 - dVar5;
    *local_348 = local_358 * (double)CONCAT44(uVar21,uVar20) + dVar18;
    local_348[1] = local_358 * (double)CONCAT44(uVar23,uVar22) + dVar3;
    local_348[2] = local_358 * (double)CONCAT44(uVar25,uVar24) + dVar19;
    *param_5 = dVar2 - (double)CONCAT44(uVar21,uVar20) * 0.0;
    param_5[1] = dVar17 - (double)CONCAT44(uVar23,uVar22) * 0.0;
    param_5[2] = dVar16 - (double)CONCAT44(uVar25,uVar24) * 0.0;
    *param_6 = (double)CONCAT44(uVar21,uVar20);
    param_6[1] = (double)CONCAT44(uVar23,uVar22);
    param_6[2] = (double)CONCAT44(uVar25,uVar24);
    *param_9 = CONCAT44(uVar27,uVar26);
LAB_146d078fe:
    if ((local_f0 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  goto LAB_146d07560;
}



// FUNCTION 146d07c92 FUN_146d07c92 body=102 status=ok
// SIG undefined FUN_146d07c92(void)

undefined8 FUN_146d07c92(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined4)param_2[1];
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = (undefined4)param_2[2];
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1404b5d90(*param_2,param_1,&local_28,*(undefined8 *)(*param_2 + 8));
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d07cfa FUN_146d07cfa body=100 status=ok
// SIG undefined FUN_146d07cfa(void)

undefined8 FUN_146d07cfa(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined4 *)(param_2 + 1);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = *(undefined4 *)(param_2 + 2);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1404b8faa(*param_2,param_1,&local_28,0);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d07d60 FUN_146d07d60 body=102 status=ok
// SIG undefined FUN_146d07d60(void)

undefined8 FUN_146d07d60(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined4)param_2[1];
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = (undefined4)param_2[2];
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1404b5d90(*param_2,param_1,&local_28,*(undefined8 *)(*param_2 + 8));
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d07dc8 FUN_146d07dc8 body=100 status=ok
// SIG undefined FUN_146d07dc8(void)

undefined8 FUN_146d07dc8(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined4 *)(param_2 + 1);
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0xc);
  uStack_30 = *(undefined4 *)(param_2 + 2);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x14);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_1404b8faa(*param_2,param_1,&local_28,0);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d07e2d FUN_146d07e2d body=3511 status=ok
// SIG undefined FUN_146d07e2d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d07e2d(longlong *param_1,double param_2,double *param_3,double *param_4,double *param_5,
                  double *param_6,double *param_7,double *param_8,uint *param_9,undefined8 param_10,
                  double *param_11,double *param_12,double *param_13,undefined8 param_14)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  double *pdVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_338 [32];
  double *local_318;
  double *local_310;
  double *local_308;
  double *local_300;
  undefined8 local_2f8;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double *local_2d0;
  undefined1 local_2c8 [16];
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double dStack_280;
  double local_278;
  double local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  double *local_258;
  double *local_250;
  undefined8 local_248;
  longlong local_238;
  undefined8 uStack_230;
  longlong local_228;
  undefined8 uStack_220;
  double local_210;
  uint local_204;
  double local_200;
  double dStack_1f8;
  double dStack_1f0;
  double local_1e8;
  double *local_1e0;
  double *local_1d8;
  undefined8 local_1d0;
  double local_1c8;
  double dStack_1c0;
  undefined1 local_1b8 [16];
  longlong *local_1a0;
  double *local_198;
  uint *local_190;
  double local_188;
  double local_180;
  code *local_178;
  undefined8 *local_170;
  code *local_168;
  longlong **local_160;
  double local_158 [13];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  local_198 = &local_180;
  local_180 = 0.0;
  local_1d8 = &local_188;
  local_188 = 0.0;
  local_190 = param_9;
  local_1c8 = -*param_3;
  dStack_1c0 = -param_3[1];
  local_1e0 = &local_1c8;
  local_1b8._8_4_ = SUB84(param_3[3] * 1.0,0);
  local_1b8._0_8_ = param_3[2] * -1.0;
  local_1b8._12_4_ = (int)((ulonglong)(param_3[3] * 1.0) >> 0x20);
  local_1d0 = param_10;
  local_200 = -1.0;
  dStack_1f8 = 0.0;
  dStack_1f0 = 0.0;
  local_310 = &local_210;
  local_210 = 3.4028234663852886e+38;
  local_204 = 0;
  local_308 = param_13;
  local_318 = &local_200;
  local_2d0 = param_4;
  local_1e8 = param_2;
  local_1a0 = param_1;
  FUN_146ced1d0(param_11,param_3,&local_204,local_158);
  dVar24 = -dStack_1f0;
  dVar27 = -local_200;
  dVar28 = -dStack_1f8;
  local_2e0 = (double)param_1[1];
  local_2d8 = *(double *)((longlong)param_2 + 8);
  iVar8 = 0x1e;
  dVar13 = local_210;
  local_2e8 = param_2;
LAB_146d0801c:
  lVar5 = *param_1;
  dVar18 = (-local_200 * *(double *)(lVar5 + 0x38) - dStack_1f8 * *(double *)(lVar5 + 0x40)) -
           dStack_1f0 * *(double *)(lVar5 + 0x48);
  if (dVar18 < 0.0) {
    dVar19 = *(double *)(lVar5 + 0x20);
    dVar12 = *(double *)(lVar5 + 0x28);
    dVar31 = *(double *)(lVar5 + 0x30);
  }
  else {
    dVar19 = *(double *)(lVar5 + 0x50);
    dVar31 = *(double *)(lVar5 + 0x48) * dVar19 + *(double *)(lVar5 + 0x30);
    dVar12 = *(double *)(lVar5 + 0x40) * dVar19 + *(double *)(lVar5 + 0x28);
    dVar19 = *(double *)(lVar5 + 0x38) * dVar19 + *(double *)(lVar5 + 0x20);
  }
  *param_9 = (uint)(0.0 <= dVar18);
  FUN_146d09a50(&local_1e8,&local_268,&local_200);
  dVar35 = local_180;
  dVar32 = local_188;
  dVar20 = *param_3;
  dVar29 = param_3[1];
  dVar30 = param_3[2];
  dVar18 = param_3[3];
  dVar15 = param_3[3];
  dVar14 = (double)uStack_260 * dVar20 - local_268 * dVar29;
  dVar16 = (double)local_258 * dVar29 - (double)uStack_260 * dVar30;
  dVar33 = local_268 * dVar30 - dVar20 * (double)local_258;
  dVar16 = dVar16 + dVar16;
  dVar33 = dVar33 + dVar33;
  dVar14 = dVar14 + dVar14;
  dVar34 = param_3[4];
  dVar2 = param_3[5];
  dVar17 = param_3[6];
  uVar21 = SUB84(local_180,0);
  uVar22 = (undefined4)((ulonglong)local_180 >> 0x20);
  lVar5 = (longlong)(int)local_204;
  local_204 = local_204 + 1;
  param_11[lVar5 * 3] = dVar19;
  param_11[lVar5 * 3 + 1] = dVar12;
  param_11[lVar5 * 3 + 2] = dVar31;
  param_11[lVar5 * 3 + 0xe] = (double)local_258;
  pdVar7 = param_11 + 0xc + lVar5 * 3;
  *(undefined4 *)pdVar7 = (undefined4)local_268;
  *(undefined4 *)((longlong)pdVar7 + 4) = local_268._4_4_;
  *(undefined4 *)(pdVar7 + 1) = (undefined4)uStack_260;
  *(undefined4 *)((longlong)pdVar7 + 0xc) = uStack_260._4_4_;
  local_158[lVar5 * 3] =
       dVar19 - ((dVar14 * dVar29 - dVar33 * dVar30) + dVar18 * dVar16 + local_268 + dVar34);
  local_158[lVar5 * 3 + 1] =
       dVar12 - ((dVar30 * dVar16 - dVar20 * dVar14) + dVar15 * dVar33 + (double)uStack_260 + dVar2)
  ;
  local_158[lVar5 * 3 + 2] =
       dVar31 - (dVar14 * dVar18 + (double)local_258 + (dVar33 * dVar20 - dVar16 * dVar29) + dVar17)
  ;
  local_318 = param_11;
  local_310 = param_11 + 0xc;
  FUN_146ced5ca(&local_200,local_158,&local_204,param_11 + 0x18);
  uVar3 = local_204;
  uVar25 = 0;
  uVar26 = 0;
  dVar18 = SQRT(dStack_1f0 * dStack_1f0 + local_200 * local_200 + dStack_1f8 * dStack_1f8);
  uVar23 = (undefined4)((ulonglong)dVar32 >> 0x20);
  if ((double)param_13 <= dVar18) goto code_r0x000146d08290;
  lVar5 = (longlong)(int)local_204;
  *(uint *)(param_11 + 0x1c) = local_204;
  local_228 = 0;
  uStack_220 = 0;
  local_238 = 0;
  uStack_230 = 0;
  FUN_140268ec4(&local_228,8);
  FUN_140268ec4(&local_238,8);
  if (0 < lVar5) {
    lVar10 = 0;
    do {
      uVar6 = uStack_220;
      lVar9 = (longlong)(int)uStack_220;
      uVar4 = (int)uStack_220 + 1;
      uStack_220 = CONCAT44(uStack_220._4_4_,uVar4);
      if (uStack_220._4_4_ < uVar4) {
        FUN_14026a4e8(&local_228,uVar6 & 0xffffffff);
      }
      uVar6 = uStack_230;
      pdVar7 = (double *)((longlong)param_11 + lVar10 + 0x70);
      *(double *)(local_228 + 0x10 + lVar9 * 0x18) = pdVar7[-0xc];
      dVar13 = pdVar7[-0xd];
      pdVar1 = (double *)(local_228 + lVar9 * 0x18);
      *pdVar1 = pdVar7[-0xe];
      pdVar1[1] = dVar13;
      dVar34 = pdVar7[-2];
      dVar2 = pdVar7[-1];
      dVar14 = *param_3;
      dVar20 = param_3[1];
      dVar29 = param_3[2];
      dVar19 = param_3[3];
      dVar13 = param_3[3];
      dVar30 = dVar2 * dVar14 - dVar34 * dVar20;
      dVar16 = *pdVar7 * dVar20 - dVar2 * dVar29;
      dVar33 = dVar34 * dVar29 - dVar14 * *pdVar7;
      dVar16 = dVar16 + dVar16;
      dVar33 = dVar33 + dVar33;
      dVar30 = dVar30 + dVar30;
      dVar15 = param_3[4];
      dVar17 = param_3[5];
      dVar12 = *pdVar7;
      dVar31 = param_3[6];
      lVar9 = (longlong)(int)uStack_230;
      uVar4 = (int)uStack_230 + 1;
      uStack_230 = CONCAT44(uStack_230._4_4_,uVar4);
      if (uStack_230._4_4_ < uVar4) {
        FUN_14026a4e8(&local_238,uVar6 & 0xffffffff);
      }
      pdVar7 = (double *)(local_238 + lVar9 * 0x18);
      *pdVar7 = (dVar30 * dVar20 - dVar33 * dVar29) + dVar19 * dVar16 + dVar34 + dVar15;
      pdVar7[1] = (dVar29 * dVar16 - dVar14 * dVar30) + dVar13 * dVar33 + dVar2 + dVar17;
      *(double *)(local_238 + 0x10 + lVar9 * 0x18) =
           dVar30 * dVar19 + dVar12 + (dVar33 * dVar14 - dVar16 * dVar20) + dVar31;
      lVar10 = lVar10 + 0x18;
    } while (lVar5 * 0x18 != lVar10);
  }
  if (dVar35 <= dVar32) {
    uVar21 = SUB84(dVar32,0);
    uVar22 = uVar23;
  }
  local_268 = local_2e8;
  local_258 = &local_1c8;
  local_250 = &local_188;
  local_248 = param_10;
  local_160 = &local_1a0;
  local_168 = FUN_146d09c80;
  local_170 = &local_268;
  local_178 = FUN_146d09c9c;
  local_2f8 = param_14;
  local_300 = &local_2b8;
  local_308 = &local_2a0;
  local_310 = &local_288;
  local_318 = &local_270;
  uStack_260 = param_3;
  uVar4 = FUN_144918d86(&local_228,&local_238);
  if (uVar4 < 2) {
    param_7[2] = local_278;
    *param_7 = local_288;
    param_7[1] = dStack_280;
    dVar24 = *param_3;
    dVar18 = -dVar24;
    dVar19 = -param_3[1];
    dVar27 = param_3[2] * -1.0;
    dVar28 = param_3[3] * 1.0;
    dVar13 = dStack_280 * dVar18 - local_288 * dVar19;
    dVar12 = local_278 * dVar19 - dStack_280 * dVar27;
    dVar31 = local_288 * dVar27 - dVar18 * local_278;
    dVar12 = dVar12 + dVar12;
    dVar31 = dVar31 + dVar31;
    dVar13 = dVar13 + dVar13;
    *param_8 = (dVar13 * dVar19 - dVar31 * dVar27) + dVar28 * dVar12 + local_288;
    param_8[1] = dVar24 * dVar13 + dVar27 * dVar12 + dVar28 * dVar31 + dStack_280;
    param_8[2] = dVar28 * dVar13 + local_278 + (dVar31 * dVar18 - dVar12 * dVar19);
    *local_2d0 = local_270 + local_2e0 + local_2d8;
    *param_5 = local_2e0 * local_288 + local_2a0;
    param_5[1] = local_2e0 * dStack_280 + local_298;
    param_5[2] = local_2e0 * local_278 + local_290;
    dVar18 = (local_2b8 - local_2d8 * local_288) - param_3[4];
    dVar19 = (local_2b0 - dStack_280 * local_2d8) - param_3[5];
    dVar28 = (local_2a8 - local_278 * local_2d8) - param_3[6];
    dVar27 = *param_3;
    dVar13 = param_3[2] * -1.0;
    dVar24 = param_3[3] * 1.0;
    dVar17 = -dVar27;
    dVar34 = -param_3[1];
    dVar15 = dVar18 * dVar13 - dVar17 * dVar28;
    dVar12 = dVar19 * dVar17 - dVar18 * dVar34;
    dVar31 = dVar28 * dVar34 - dVar19 * dVar13;
    dVar31 = dVar31 + dVar31;
    dVar15 = dVar15 + dVar15;
    dVar12 = dVar12 + dVar12;
    *param_6 = (dVar12 * dVar34 - dVar15 * dVar13) + dVar24 * dVar31 + dVar18;
    param_6[1] = dVar27 * dVar12 + dVar13 * dVar31 + dVar24 * dVar15 + dVar19;
    param_6[2] = dVar24 * dVar12 + dVar28 + (dVar15 * dVar17 - dVar31 * dVar34);
    *param_12 = (double)CONCAT44(uVar22,uVar21);
    if (local_238 != 0) {
      FUN_1400020a8();
    }
    if (local_228 != 0) {
      FUN_1400020a8();
    }
    goto LAB_146d0857d;
  }
  if (uVar4 == 3) {
    dVar18 = (double)((ulonglong)local_270 ^ DAT_149931e80);
    uVar25 = DAT_149931e80._8_4_;
    uVar26 = DAT_149931e80._12_4_;
    dVar24 = local_278;
    dVar27 = local_288;
    dVar28 = dStack_280;
  }
  if (local_238 != 0) {
    FUN_1400020a8();
  }
  if (local_228 != 0) {
    FUN_1400020a8();
  }
  goto LAB_146d08321;
code_r0x000146d08290:
  dVar19 = dVar13 - (double)param_13;
  dVar13 = 1.0 / dVar18;
  local_200 = local_200 * dVar13;
  dStack_1f8 = dStack_1f8 * dVar13;
  dStack_1f0 = dStack_1f0 * dVar13;
  dVar24 = -dStack_1f0;
  dVar27 = -local_200;
  dVar28 = -dStack_1f8;
  bVar11 = iVar8 == 0;
  iVar8 = iVar8 + -1;
  dVar13 = dVar18;
  if (bVar11 || dVar19 <= dVar18) {
    if (dVar35 <= dVar32) {
      uVar21 = SUB84(dVar32,0);
      uVar22 = uVar23;
    }
    *(uint *)(param_11 + 0x1c) = local_204;
LAB_146d08321:
    local_2e8 = (double)CONCAT44(uVar22,uVar21);
    local_2c8._8_4_ = uVar25;
    local_2c8._0_8_ = dVar18;
    local_2c8._12_4_ = uVar26;
    if ((int)uVar3 < 1) {
      dVar19 = 0.0;
      dVar12 = 0.0;
      dVar13 = 0.0;
      dVar31 = 0.0;
      dVar15 = 0.0;
      dVar17 = 0.0;
    }
    else {
      pdVar7 = param_11 + 0xe;
      dVar17 = 0.0;
      uVar6 = 0;
      dVar15 = 0.0;
      dVar31 = 0.0;
      dVar13 = 0.0;
      dVar12 = 0.0;
      dVar19 = 0.0;
      do {
        dVar34 = (param_11 + 0x18)[uVar6];
        dVar17 = dVar17 + pdVar7[-0xc] * dVar34;
        dVar15 = dVar15 + pdVar7[-0xd] * dVar34;
        dVar31 = dVar31 + pdVar7[-0xe] * dVar34;
        dVar13 = dVar13 + *pdVar7 * dVar34;
        dVar12 = dVar12 + pdVar7[-1] * dVar34;
        dVar19 = dVar19 + dVar34 * pdVar7[-2];
        uVar6 = uVar6 + 1;
        pdVar7 = pdVar7 + 3;
      } while (uVar3 != uVar6);
    }
    *param_7 = dVar27;
    param_7[1] = dVar28;
    param_7[2] = dVar24;
    dVar2 = *param_3;
    dVar29 = -dVar2;
    dVar30 = -param_3[1];
    dVar14 = param_3[2] * -1.0;
    dVar20 = param_3[3] * 1.0;
    dVar32 = dVar27 * dVar14 - dVar29 * dVar24;
    dVar34 = dVar28 * dVar29 - dVar27 * dVar30;
    dVar35 = dVar24 * dVar30 - dVar28 * dVar14;
    dVar35 = dVar35 + dVar35;
    dVar32 = dVar32 + dVar32;
    dVar34 = dVar34 + dVar34;
    *param_8 = (dVar34 * dVar30 - dVar32 * dVar14) + dVar20 * dVar35 + dVar27;
    param_8[1] = dVar2 * dVar34 + dVar14 * dVar35 + dVar20 * dVar32 + dVar28;
    param_8[2] = dVar20 * dVar34 + dVar24 + (dVar32 * dVar29 - dVar35 * dVar30);
    *local_2d0 = (local_2e0 + local_2d8) - dVar18;
    dVar24 = param_7[2];
    dVar27 = param_7[1];
    *param_5 = local_2e0 * *param_7 + dVar31;
    param_5[1] = dVar27 * local_2e0 + dVar15;
    param_5[2] = dVar24 * local_2e0 + dVar17;
    dVar24 = param_8[2];
    dVar27 = param_8[1];
    *param_6 = dVar19 - local_2d8 * *param_8;
    param_6[1] = dVar12 - dVar27 * local_2d8;
    param_6[2] = dVar13 - dVar24 * local_2d8;
    *param_12 = local_2e8;
LAB_146d0857d:
    if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_146d0801c;
}



// FUNCTION 146d08be5 FUN_146d08be5 body=3530 status=ok
// SIG undefined FUN_146d08be5(void)

void FUN_146d08be5(longlong *param_1,double param_2,double *param_3,double *param_4,double *param_5,
                  double *param_6,double *param_7,double *param_8,uint *param_9,undefined8 param_10,
                  double *param_11,double *param_12,double *param_13,undefined8 param_14)

{
  double *pdVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  double *pdVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  uint uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auStack_348 [32];
  double *local_328;
  double *local_320;
  double *local_318;
  double *local_310;
  undefined8 local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double *local_2e8;
  double local_2e0;
  double local_2d8;
  undefined8 uStack_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  double *local_268;
  double *local_260;
  undefined8 local_258;
  longlong local_248;
  undefined8 uStack_240;
  longlong local_238;
  undefined8 uStack_230;
  double local_228;
  double local_220;
  double dStack_218;
  double dStack_210;
  double local_208;
  double *local_200;
  double *local_1f8;
  undefined8 local_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined1 local_1d8 [16];
  longlong *local_1c0;
  double *local_1b8;
  uint *local_1b0;
  double local_1a8;
  double local_1a0;
  code *local_198;
  undefined8 *local_190;
  code *local_188;
  longlong **local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  double local_158 [13];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  local_1b8 = &local_1a0;
  local_1a0 = 0.0;
  local_1f8 = &local_1a8;
  local_1a8 = 0.0;
  local_1b0 = param_9;
  local_1e8 = -*param_3;
  dStack_1e0 = -param_3[1];
  local_200 = &local_1e8;
  local_1d8._8_4_ = SUB84(param_3[3] * 1.0,0);
  local_1d8._0_8_ = param_3[2] * -1.0;
  local_1d8._12_4_ = (int)((ulonglong)(param_3[3] * 1.0) >> 0x20);
  local_1f0 = param_10;
  local_220 = -1.0;
  dStack_218 = 0.0;
  dStack_210 = 0.0;
  local_320 = &local_228;
  local_228 = 3.4028234663852886e+38;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  local_318 = param_13;
  local_328 = &local_220;
  local_2e8 = param_4;
  local_208 = param_2;
  local_1c0 = param_1;
  FUN_144917018(param_11,param_3,&local_178,local_158);
  uVar24 = (uint)((ulonglong)dStack_210 >> 0x20) ^ 0x80000000;
  uVar23 = SUB84(dStack_210,0);
  dVar28 = -local_220;
  dVar29 = -dStack_218;
  local_2f8 = (double)param_1[1];
  local_2f0 = *(double *)((longlong)param_2 + 8);
  local_2e0 = local_2f8 + local_2f0;
  iVar7 = 0x1e;
  dVar10 = local_228;
  local_300 = param_2;
LAB_146d08de4:
  lVar4 = *param_1;
  dVar21 = (-local_220 * *(double *)(lVar4 + 0x38) - dStack_218 * *(double *)(lVar4 + 0x40)) -
           dStack_210 * *(double *)(lVar4 + 0x48);
  if (dVar21 < 0.0) {
    dVar15 = *(double *)(lVar4 + 0x20);
    dVar20 = *(double *)(lVar4 + 0x28);
    dVar25 = *(double *)(lVar4 + 0x30);
  }
  else {
    dVar15 = *(double *)(lVar4 + 0x50);
    dVar25 = *(double *)(lVar4 + 0x48) * dVar15 + *(double *)(lVar4 + 0x30);
    dVar20 = *(double *)(lVar4 + 0x40) * dVar15 + *(double *)(lVar4 + 0x28);
    dVar15 = *(double *)(lVar4 + 0x38) * dVar15 + *(double *)(lVar4 + 0x20);
  }
  *param_9 = (uint)(0.0 <= dVar21);
  FUN_146d09fa2(&local_208,&local_278,&local_220);
  dVar34 = local_1a0;
  dVar32 = local_1a8;
  dVar16 = *param_3;
  dVar26 = param_3[1];
  dVar27 = param_3[2];
  dVar21 = param_3[3];
  dVar12 = param_3[3];
  dVar11 = (double)uStack_270 * dVar16 - local_278 * dVar26;
  dVar13 = (double)local_268 * dVar26 - (double)uStack_270 * dVar27;
  dVar30 = local_278 * dVar27 - dVar16 * (double)local_268;
  dVar13 = dVar13 + dVar13;
  dVar30 = dVar30 + dVar30;
  dVar11 = dVar11 + dVar11;
  dVar33 = param_3[4];
  dVar31 = param_3[5];
  dVar14 = param_3[6];
  uVar17 = SUB84(local_1a0,0);
  uVar18 = (undefined4)((ulonglong)local_1a0 >> 0x20);
  lVar4 = (longlong)(int)(uint)local_178;
  param_11[lVar4 * 3] = dVar15;
  param_11[lVar4 * 3 + 1] = dVar20;
  param_11[lVar4 * 3 + 2] = dVar25;
  param_11[lVar4 * 3 + 0xe] = (double)local_268;
  pdVar6 = param_11 + 0xc + lVar4 * 3;
  *(undefined4 *)pdVar6 = (undefined4)local_278;
  *(undefined4 *)((longlong)pdVar6 + 4) = local_278._4_4_;
  *(undefined4 *)(pdVar6 + 1) = (undefined4)uStack_270;
  *(undefined4 *)((longlong)pdVar6 + 0xc) = uStack_270._4_4_;
  *(uint *)((longlong)&local_178 + lVar4 * 4 + 4) = (uint)local_178;
  local_178 = CONCAT44(local_178._4_4_,(uint)local_178 + 1);
  local_158[lVar4 * 3] =
       dVar15 - ((dVar11 * dVar26 - dVar30 * dVar27) + dVar21 * dVar13 + local_278 + dVar33);
  local_158[lVar4 * 3 + 1] =
       dVar20 - ((dVar27 * dVar13 - dVar16 * dVar11) + dVar12 * dVar30 + (double)uStack_270 + dVar31
                );
  local_158[lVar4 * 3 + 2] =
       dVar25 - (dVar11 * dVar21 + (double)local_268 + (dVar30 * dVar16 - dVar13 * dVar26) + dVar14)
  ;
  local_328 = param_11;
  local_320 = param_11 + 0xc;
  FUN_1449162b1(&local_220,local_158,&local_178,param_11 + 0x18);
  dVar21 = SQRT(dStack_210 * dStack_210 + local_220 * local_220 + dStack_218 * dStack_218);
  uVar22 = 0;
  uVar19 = (undefined4)((ulonglong)dVar32 >> 0x20);
  if ((double)param_13 <= dVar21) goto code_r0x000146d09063;
  *(uint *)(param_11 + 0x1c) = (uint)local_178;
  local_238 = 0;
  uStack_230 = 0;
  local_248 = 0;
  uStack_240 = 0;
  FUN_140268ec4(&local_238,8);
  FUN_140268ec4(&local_248,8);
  if (0 < (int)(uint)local_178) {
    pdVar6 = param_11 + 0xe;
    lVar4 = 0;
    do {
      uVar5 = uStack_230;
      lVar8 = (longlong)(int)uStack_230;
      uVar3 = (int)uStack_230 + 1;
      uStack_230 = CONCAT44(uStack_230._4_4_,uVar3);
      if (uStack_230._4_4_ < uVar3) {
        FUN_14026a4e8(&local_238,uVar5 & 0xffffffff);
      }
      uVar5 = uStack_240;
      *(double *)(local_238 + 0x10 + lVar8 * 0x18) = pdVar6[-0xc];
      dVar10 = pdVar6[-0xd];
      pdVar1 = (double *)(local_238 + lVar8 * 0x18);
      *pdVar1 = pdVar6[-0xe];
      pdVar1[1] = dVar10;
      dVar33 = pdVar6[-2];
      dVar31 = pdVar6[-1];
      dVar11 = *param_3;
      dVar16 = param_3[1];
      dVar26 = param_3[2];
      dVar15 = param_3[3];
      dVar10 = param_3[3];
      dVar27 = dVar31 * dVar11 - dVar33 * dVar16;
      dVar13 = *pdVar6 * dVar16 - dVar31 * dVar26;
      dVar30 = dVar33 * dVar26 - dVar11 * *pdVar6;
      dVar13 = dVar13 + dVar13;
      dVar30 = dVar30 + dVar30;
      dVar27 = dVar27 + dVar27;
      dVar12 = param_3[4];
      dVar14 = param_3[5];
      dVar20 = *pdVar6;
      dVar25 = param_3[6];
      lVar8 = (longlong)(int)uStack_240;
      uVar3 = (int)uStack_240 + 1;
      uStack_240 = CONCAT44(uStack_240._4_4_,uVar3);
      if (uStack_240._4_4_ < uVar3) {
        FUN_14026a4e8(&local_248,uVar5 & 0xffffffff);
      }
      pdVar1 = (double *)(local_248 + lVar8 * 0x18);
      *pdVar1 = (dVar27 * dVar16 - dVar30 * dVar26) + dVar15 * dVar13 + dVar33 + dVar12;
      pdVar1[1] = (dVar26 * dVar13 - dVar11 * dVar27) + dVar10 * dVar30 + dVar31 + dVar14;
      *(double *)(local_248 + 0x10 + lVar8 * 0x18) =
           dVar27 * dVar15 + dVar20 + (dVar30 * dVar11 - dVar13 * dVar16) + dVar25;
      lVar4 = lVar4 + 1;
      pdVar6 = pdVar6 + 3;
    } while (lVar4 < (int)(uint)local_178);
  }
  if (dVar34 <= dVar32) {
    uVar17 = SUB84(dVar32,0);
    uVar18 = uVar19;
  }
  local_278 = local_300;
  local_268 = &local_1e8;
  local_260 = &local_1a8;
  local_258 = param_10;
  local_180 = &local_1c0;
  local_188 = FUN_146d0a114;
  local_190 = &local_278;
  local_198 = FUN_146d0a130;
  local_308 = param_14;
  local_310 = &local_2c8;
  local_318 = &local_2b0;
  local_320 = &local_298;
  local_328 = &local_280;
  uStack_270 = param_3;
  uVar3 = FUN_144918d86(&local_238,&local_248);
  if (uVar3 < 2) {
    param_7[2] = local_288;
    *param_7 = local_298;
    param_7[1] = dStack_290;
    dVar28 = *param_3;
    dVar15 = -dVar28;
    dVar20 = -param_3[1];
    dVar29 = param_3[2] * -1.0;
    dVar21 = param_3[3] * 1.0;
    dVar10 = dStack_290 * dVar15 - local_298 * dVar20;
    dVar25 = local_288 * dVar20 - dStack_290 * dVar29;
    dVar12 = local_298 * dVar29 - dVar15 * local_288;
    dVar25 = dVar25 + dVar25;
    dVar12 = dVar12 + dVar12;
    dVar10 = dVar10 + dVar10;
    *param_8 = (dVar10 * dVar20 - dVar12 * dVar29) + dVar21 * dVar25 + local_298;
    param_8[1] = dVar28 * dVar10 + dVar29 * dVar25 + dVar21 * dVar12 + dStack_290;
    param_8[2] = dVar21 * dVar10 + local_288 + (dVar12 * dVar15 - dVar25 * dVar20);
    *local_2e8 = local_280 + local_2f8 + local_2f0;
    *param_5 = local_2f8 * local_298 + local_2b0;
    param_5[1] = local_2f8 * dStack_290 + local_2a8;
    param_5[2] = local_2f8 * local_288 + local_2a0;
    dVar15 = (local_2c8 - local_2f0 * local_298) - param_3[4];
    dVar20 = (local_2c0 - dStack_290 * local_2f0) - param_3[5];
    dVar21 = (local_2b8 - local_288 * local_2f0) - param_3[6];
    dVar29 = *param_3;
    dVar10 = param_3[2] * -1.0;
    dVar28 = param_3[3] * 1.0;
    dVar33 = -dVar29;
    dVar31 = -param_3[1];
    dVar14 = dVar15 * dVar10 - dVar33 * dVar21;
    dVar25 = dVar20 * dVar33 - dVar15 * dVar31;
    dVar12 = dVar21 * dVar31 - dVar20 * dVar10;
    dVar12 = dVar12 + dVar12;
    dVar14 = dVar14 + dVar14;
    dVar25 = dVar25 + dVar25;
    *param_6 = (dVar25 * dVar31 - dVar14 * dVar10) + dVar28 * dVar12 + dVar15;
    param_6[1] = dVar29 * dVar25 + dVar10 * dVar12 + dVar28 * dVar14 + dVar20;
    param_6[2] = dVar28 * dVar25 + dVar21 + (dVar14 * dVar33 - dVar12 * dVar31);
    *param_12 = (double)CONCAT44(uVar18,uVar17);
    if (local_248 != 0) {
      FUN_1400020a8();
    }
    if (local_238 != 0) {
      FUN_1400020a8();
    }
    goto LAB_146d0933e;
  }
  if (uVar3 == 3) {
    uVar23 = SUB84(local_288,0);
    uVar24 = (uint)((ulonglong)local_288 >> 0x20);
    uVar22 = 0x8000000000000000;
    dVar21 = -local_280;
    dVar28 = local_298;
    dVar29 = dStack_290;
  }
  if (local_248 != 0) {
    FUN_1400020a8();
  }
  if (local_238 != 0) {
    FUN_1400020a8();
  }
  goto LAB_146d090ed;
code_r0x000146d09063:
  bVar2 = dVar10 <= dVar21;
  dVar10 = 1.0 / dVar21;
  local_220 = local_220 * dVar10;
  dStack_218 = dStack_218 * dVar10;
  dStack_210 = dStack_210 * dVar10;
  uVar24 = (uint)((ulonglong)dStack_210 >> 0x20) ^ 0x80000000;
  uVar23 = SUB84(dStack_210,0);
  dVar28 = -local_220;
  dVar29 = -dStack_218;
  bVar9 = iVar7 == 0;
  iVar7 = iVar7 + -1;
  dVar10 = dVar21;
  if (bVar9 || bVar2) {
    if (dVar34 <= dVar32) {
      uVar17 = SUB84(dVar32,0);
      uVar18 = uVar19;
    }
    *(uint *)(param_11 + 0x1c) = (uint)local_178;
LAB_146d090ed:
    local_300 = (double)CONCAT44(uVar18,uVar17);
    if ((int)(uint)local_178 < 1) {
      dVar15 = 0.0;
      dVar20 = 0.0;
      dVar10 = 0.0;
      dVar25 = 0.0;
      dVar12 = 0.0;
      dVar14 = 0.0;
    }
    else {
      pdVar6 = param_11 + 0xe;
      dVar14 = 0.0;
      uVar5 = 0;
      dVar12 = 0.0;
      dVar25 = 0.0;
      dVar10 = 0.0;
      dVar20 = 0.0;
      dVar15 = 0.0;
      do {
        dVar33 = (param_11 + 0x18)[uVar5];
        dVar14 = dVar14 + pdVar6[-0xc] * dVar33;
        dVar12 = dVar12 + pdVar6[-0xd] * dVar33;
        dVar25 = dVar25 + pdVar6[-0xe] * dVar33;
        dVar10 = dVar10 + *pdVar6 * dVar33;
        dVar20 = dVar20 + pdVar6[-1] * dVar33;
        dVar15 = dVar15 + dVar33 * pdVar6[-2];
        uVar5 = uVar5 + 1;
        pdVar6 = pdVar6 + 3;
      } while ((uint)local_178 != uVar5);
    }
    *param_7 = dVar28;
    param_7[1] = dVar29;
    param_7[2] = (double)CONCAT44(uVar24,uVar23);
    dVar31 = *param_3;
    dVar26 = -dVar31;
    dVar27 = -param_3[1];
    dVar11 = param_3[2] * -1.0;
    dVar16 = param_3[3] * 1.0;
    dVar32 = dVar28 * dVar11 - dVar26 * (double)CONCAT44(uVar24,uVar23);
    dVar33 = dVar29 * dVar26 - dVar28 * dVar27;
    dVar34 = (double)CONCAT44(uVar24,uVar23) * dVar27 - dVar29 * dVar11;
    dVar34 = dVar34 + dVar34;
    dVar32 = dVar32 + dVar32;
    dVar33 = dVar33 + dVar33;
    *param_8 = (dVar33 * dVar27 - dVar32 * dVar11) + dVar16 * dVar34 + dVar28;
    param_8[1] = dVar31 * dVar33 + dVar11 * dVar34 + dVar16 * dVar32 + dVar29;
    param_8[2] = dVar16 * dVar33 + (double)CONCAT44(uVar24,uVar23) +
                 (dVar32 * dVar26 - dVar34 * dVar27);
    *local_2e8 = local_2e0 - dVar21;
    dVar28 = param_7[2];
    dVar29 = param_7[1];
    *param_5 = local_2f8 * *param_7 + dVar25;
    param_5[1] = dVar29 * local_2f8 + dVar12;
    param_5[2] = dVar28 * local_2f8 + dVar14;
    dVar28 = param_8[2];
    dVar29 = param_8[1];
    *param_6 = dVar15 - local_2f0 * *param_8;
    param_6[1] = dVar20 - dVar29 * local_2f0;
    param_6[2] = dVar10 - dVar28 * local_2f0;
    *param_12 = local_300;
    local_2d8 = dVar21;
    uStack_2d0 = uVar22;
LAB_146d0933e:
    if ((local_f0 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  goto LAB_146d08de4;
}



// FUNCTION 146d099b0 FUN_146d099b0 body=159 status=ok
// SIG undefined FUN_146d099b0(void)

void FUN_146d099b0(undefined8 *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint *puVar6;
  longlong lVar7;
  double dVar8;
  
  puVar6 = (uint *)param_1[2];
  lVar7 = *(longlong *)*param_1;
  dVar1 = *(double *)(lVar7 + 0x40);
  dVar2 = *(double *)(lVar7 + 0x48);
  dVar8 = param_3[2] * dVar2 + *param_3 * *(double *)(lVar7 + 0x38) + param_3[1] * dVar1;
  if (dVar8 < 0.0) {
    param_2[2] = *(double *)(lVar7 + 0x30);
    dVar1 = *(double *)(lVar7 + 0x28);
    *param_2 = *(double *)(lVar7 + 0x20);
    param_2[1] = dVar1;
  }
  else {
    dVar3 = *(double *)(lVar7 + 0x50);
    dVar4 = *(double *)(lVar7 + 0x30);
    dVar5 = *(double *)(lVar7 + 0x28);
    *param_2 = *(double *)(lVar7 + 0x38) * dVar3 + *(double *)(lVar7 + 0x20);
    param_2[1] = dVar1 * dVar3 + dVar5;
    param_2[2] = dVar2 * dVar3 + dVar4;
  }
  *puVar6 = (uint)(0.0 <= dVar8);
  return;
}



// FUNCTION 146d09a50 FUN_146d09a50 body=369 status=ok
// SIG undefined FUN_146d09a50(void)

undefined8 FUN_146d09a50(undefined8 *param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  pdVar8 = (double *)param_1[1];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar4 = pdVar8[2];
  dVar5 = *pdVar8;
  dVar6 = pdVar8[1];
  dVar9 = dVar6 * dVar3 - dVar2 * dVar4;
  dVar9 = dVar9 + dVar9;
  dVar7 = pdVar8[3];
  dVar10 = dVar5 * dVar2 - dVar1 * dVar6;
  dVar10 = dVar10 + dVar10;
  dVar11 = dVar4 * dVar1 - dVar3 * dVar5;
  dVar11 = dVar11 + dVar11;
  local_68 = (dVar5 * dVar11 - dVar9 * dVar6) + dVar7 * dVar10 + dVar3;
  local_70 = (dVar4 * dVar9 - dVar10 * dVar5) + dVar7 * dVar11 + dVar2;
  local_78 = (dVar6 * dVar10 - dVar11 * dVar4) + dVar9 * dVar7 + dVar1;
  FUN_146d09bc2(*param_1,param_2,&local_78,param_1[3]);
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d09bc2 FUN_146d09bc2 body=190 status=ok
// SIG undefined FUN_146d09bc2(void)

void FUN_146d09bc2(undefined8 *param_1,double *param_2,double *param_3,int *param_4)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  uint uVar4;
  double *pdVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  pdVar3 = (double *)*param_1;
  dVar8 = *param_3;
  dVar1 = param_3[1];
  dVar2 = param_3[2];
  dVar7 = pdVar3[2] * dVar2 + *pdVar3 * dVar8 + pdVar3[1] * dVar1;
  dVar9 = pdVar3[5] * dVar2 + pdVar3[3] * dVar8 + pdVar3[4] * dVar1;
  dVar8 = dVar2 * pdVar3[8] + dVar8 * pdVar3[6] + dVar1 * pdVar3[7];
  if ((dVar7 < dVar9) || (iVar6 = 0, pdVar5 = pdVar3, dVar7 < dVar8)) {
    uVar4 = (uint)(dVar9 < dVar8 || dVar9 < dVar7);
    iVar6 = uVar4 + 1;
    pdVar5 = pdVar3 + 6;
    if ((-uVar4 & 1) == 0) {
      pdVar5 = pdVar3 + 3;
    }
  }
  *param_4 = iVar6;
  param_2[2] = pdVar5[2];
  dVar8 = pdVar5[1];
  *param_2 = *pdVar5;
  param_2[1] = dVar8;
  return;
}



// FUNCTION 146d09c80 FUN_146d09c80 body=28 status=ok
// SIG undefined FUN_146d09c80(void)

undefined8 FUN_146d09c80(undefined8 param_1,undefined8 param_2)

{
  FUN_146d099b0(param_2,param_1);
  return param_1;
}



// FUNCTION 146d09c9c FUN_146d09c9c body=28 status=ok
// SIG undefined FUN_146d09c9c(void)

undefined8 FUN_146d09c9c(undefined8 param_1,undefined8 param_2)

{
  FUN_146d09cb8(param_2,param_1);
  return param_1;
}



// FUNCTION 146d09cb8 FUN_146d09cb8 body=585 status=ok
// SIG undefined FUN_146d09cb8(void)

double * FUN_146d09cb8(undefined8 *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  pdVar7 = (double *)param_1[2];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar4 = pdVar7[2];
  dVar10 = *pdVar7;
  dVar5 = pdVar7[1];
  dVar8 = dVar5 * dVar3 - dVar2 * dVar4;
  dVar8 = dVar8 + dVar8;
  dVar6 = pdVar7[3];
  dVar11 = dVar10 * dVar2 - dVar1 * dVar5;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar4 * dVar1 - dVar3 * dVar10;
  dVar9 = dVar9 + dVar9;
  local_90 = (dVar10 * dVar9 - dVar8 * dVar5) + dVar6 * dVar11 + dVar3;
  local_98 = (dVar4 * dVar8 - dVar11 * dVar10) + dVar6 * dVar9 + dVar2;
  local_a0 = (dVar5 * dVar11 - dVar9 * dVar4) + dVar8 * dVar6 + dVar1;
  FUN_146d09bc2(*param_1,&local_88,&local_a0,param_1[4]);
  pdVar7 = (double *)param_1[1];
  dVar5 = *pdVar7;
  dVar6 = pdVar7[1];
  dVar8 = pdVar7[2];
  dVar1 = pdVar7[3];
  dVar2 = pdVar7[3];
  dVar10 = dStack_80 * dVar5 - local_88 * dVar6;
  dVar11 = local_78 * dVar6 - dStack_80 * dVar8;
  dVar9 = local_88 * dVar8 - dVar5 * local_78;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar4 = pdVar7[5];
  dVar3 = pdVar7[6];
  *param_2 = (dVar10 * dVar6 - dVar9 * dVar8) + dVar1 * dVar11 + local_88 + pdVar7[4];
  param_2[1] = (dVar8 * dVar11 - dVar5 * dVar10) + dVar2 * dVar9 + dStack_80 + dVar4;
  param_2[2] = dVar10 * dVar1 + local_78 + (dVar9 * dVar5 - dVar11 * dVar6) + dVar3;
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d09f02 FUN_146d09f02 body=159 status=ok
// SIG undefined FUN_146d09f02(void)

void FUN_146d09f02(undefined8 *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint *puVar6;
  longlong lVar7;
  double dVar8;
  
  puVar6 = (uint *)param_1[2];
  lVar7 = *(longlong *)*param_1;
  dVar1 = *(double *)(lVar7 + 0x40);
  dVar2 = *(double *)(lVar7 + 0x48);
  dVar8 = param_3[2] * dVar2 + *param_3 * *(double *)(lVar7 + 0x38) + param_3[1] * dVar1;
  if (dVar8 < 0.0) {
    param_2[2] = *(double *)(lVar7 + 0x30);
    dVar1 = *(double *)(lVar7 + 0x28);
    *param_2 = *(double *)(lVar7 + 0x20);
    param_2[1] = dVar1;
  }
  else {
    dVar3 = *(double *)(lVar7 + 0x50);
    dVar4 = *(double *)(lVar7 + 0x30);
    dVar5 = *(double *)(lVar7 + 0x28);
    *param_2 = *(double *)(lVar7 + 0x38) * dVar3 + *(double *)(lVar7 + 0x20);
    param_2[1] = dVar1 * dVar3 + dVar5;
    param_2[2] = dVar2 * dVar3 + dVar4;
  }
  *puVar6 = (uint)(0.0 <= dVar8);
  return;
}



// FUNCTION 146d09fa2 FUN_146d09fa2 body=369 status=ok
// SIG undefined FUN_146d09fa2(void)

undefined8 FUN_146d09fa2(undefined8 *param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  pdVar8 = (double *)param_1[1];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar4 = pdVar8[2];
  dVar5 = *pdVar8;
  dVar6 = pdVar8[1];
  dVar9 = dVar6 * dVar3 - dVar2 * dVar4;
  dVar9 = dVar9 + dVar9;
  dVar7 = pdVar8[3];
  dVar10 = dVar5 * dVar2 - dVar1 * dVar6;
  dVar10 = dVar10 + dVar10;
  dVar11 = dVar4 * dVar1 - dVar3 * dVar5;
  dVar11 = dVar11 + dVar11;
  local_68 = (dVar5 * dVar11 - dVar9 * dVar6) + dVar7 * dVar10 + dVar3;
  local_70 = (dVar4 * dVar9 - dVar10 * dVar5) + dVar7 * dVar11 + dVar2;
  local_78 = (dVar6 * dVar10 - dVar11 * dVar4) + dVar9 * dVar7 + dVar1;
  FUN_146d09bc2(*param_1,param_2,&local_78,param_1[3]);
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0a114 FUN_146d0a114 body=28 status=ok
// SIG undefined FUN_146d0a114(void)

undefined8 FUN_146d0a114(undefined8 param_1,undefined8 param_2)

{
  FUN_146d09f02(param_2,param_1);
  return param_1;
}



// FUNCTION 146d0a130 FUN_146d0a130 body=28 status=ok
// SIG undefined FUN_146d0a130(void)

undefined8 FUN_146d0a130(undefined8 param_1,undefined8 param_2)

{
  FUN_146d0a14c(param_2,param_1);
  return param_1;
}



// FUNCTION 146d0a14c FUN_146d0a14c body=585 status=ok
// SIG undefined FUN_146d0a14c(void)

double * FUN_146d0a14c(undefined8 *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  pdVar7 = (double *)param_1[2];
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar4 = pdVar7[2];
  dVar10 = *pdVar7;
  dVar5 = pdVar7[1];
  dVar8 = dVar5 * dVar3 - dVar2 * dVar4;
  dVar8 = dVar8 + dVar8;
  dVar6 = pdVar7[3];
  dVar11 = dVar10 * dVar2 - dVar1 * dVar5;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar4 * dVar1 - dVar3 * dVar10;
  dVar9 = dVar9 + dVar9;
  local_90 = (dVar10 * dVar9 - dVar8 * dVar5) + dVar6 * dVar11 + dVar3;
  local_98 = (dVar4 * dVar8 - dVar11 * dVar10) + dVar6 * dVar9 + dVar2;
  local_a0 = (dVar5 * dVar11 - dVar9 * dVar4) + dVar8 * dVar6 + dVar1;
  FUN_146d09bc2(*param_1,&local_88,&local_a0,param_1[4]);
  pdVar7 = (double *)param_1[1];
  dVar5 = *pdVar7;
  dVar6 = pdVar7[1];
  dVar8 = pdVar7[2];
  dVar1 = pdVar7[3];
  dVar2 = pdVar7[3];
  dVar10 = dStack_80 * dVar5 - local_88 * dVar6;
  dVar11 = local_78 * dVar6 - dStack_80 * dVar8;
  dVar9 = local_88 * dVar8 - dVar5 * local_78;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar4 = pdVar7[5];
  dVar3 = pdVar7[6];
  *param_2 = (dVar10 * dVar6 - dVar9 * dVar8) + dVar1 * dVar11 + local_88 + pdVar7[4];
  param_2[1] = (dVar8 * dVar11 - dVar5 * dVar10) + dVar2 * dVar9 + dStack_80 + dVar4;
  param_2[2] = dVar10 * dVar1 + local_78 + (dVar9 * dVar5 - dVar11 * dVar6) + dVar3;
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0a396 FUN_146d0a396 body=462 status=ok
// SIG undefined FUN_146d0a396(void)

void FUN_146d0a396(double *param_1,double *param_2,double *param_3,double param_4,
                  undefined4 *param_5,double *param_6)

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
  
  dVar6 = param_1[2];
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar4 = (param_1[3] - dVar1) * (param_1[7] - dVar2) - (param_1[6] - dVar1) * (param_1[4] - dVar2);
  dVar9 = (param_1[5] - dVar6) * (param_1[6] - dVar1) - (param_1[8] - dVar6) * (param_1[3] - dVar1);
  dVar7 = (param_1[4] - dVar2) * (param_1[8] - dVar6) - (param_1[5] - dVar6) * (param_1[7] - dVar2);
  dVar3 = dVar4 * dVar4 + dVar7 * dVar7 + dVar9 * dVar9;
  if (((dVar3 != 1.0) || (dVar5 = dVar4, dVar8 = dVar7, dVar10 = dVar9, NAN(dVar3))) &&
     (dVar5 = DAT_14c8464f0, dVar8 = DAT_14c8464e0, dVar10 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar3)) {
    dVar3 = 1.0 / SQRT(dVar3);
    dVar5 = dVar4 * dVar3;
    dVar8 = dVar7 * dVar3;
    dVar10 = dVar9 * dVar3;
  }
  if (((ABS((param_2[2] - dVar6) * dVar5 +
            (*param_2 - dVar1) * dVar8 + (param_2[1] - dVar2) * dVar10) <= param_4) &&
      (dVar6 = dVar5 * param_3[2] + dVar8 * *param_3 + dVar10 * param_3[1],
      dVar6 <= -9.99999993922529e-09)) && (dVar6 < *param_6)) {
    *param_6 = dVar6;
    *param_5 = 0;
  }
  return;
}



// FUNCTION 146d0a564 FUN_146d0a564 body=968 status=ok
// SIG undefined FUN_146d0a564(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146d0a564(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  char cVar2;
  double dVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_1e8 [32];
  undefined8 *local_1c8;
  double local_1c0;
  undefined8 *local_1b8;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_178;
  double dStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  int iStack_118;
  ulonglong local_114;
  undefined *local_108;
  ulonglong local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  int local_e8;
  undefined8 local_e4;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  double local_a8;
  double local_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_198 = 0x3ff0000000000000;
  uStack_190 = 0x3ff0000000000000;
  local_188 = 0x3ff0000000000000;
  cVar2 = *(char *)(param_3 + 0x1c);
  if (param_3 == 0 || cVar2 != -0x75) {
    if (cVar2 == 'K' && param_3 != 0) {
      lVar6 = *(longlong *)(param_3 + 0x28);
    }
    else {
      lVar6 = 0;
      if (cVar2 == '\v') {
        lVar6 = param_3;
      }
    }
  }
  else {
    local_188 = *(undefined8 *)(param_3 + 0x30);
    local_198 = *(undefined8 *)(param_3 + 0x20);
    uStack_190 = *(undefined8 *)(param_3 + 0x28);
    lVar6 = *(longlong *)(param_3 + 0x88);
  }
  dVar3 = (double)*(float *)(param_5 + 300);
  if (DAT_14c75f044 == '\x01') {
    uVar1 = (ulonglong)(DAT_14c75f074 + -1 + (uint)(DAT_14c75f074 == 0)) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_118 = 1 << ((byte)lVar6 & 0x1f);
    dStack_170 = (double)_DAT_14c75f078;
    local_178 = 0x3fefff2e48e8a71e;
    local_168 = 0x3eb0c6f7a0b5ed8d;
    uStack_160 = 0x3f50624dd2f1a9fc;
    local_158 = CONCAT44(iStack_118,1000);
    uStack_150 = CONCAT44(uStack_150._4_4_,(uint)DAT_14c992e78 * 4 + 3);
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    local_114 = 0;
    local_108 = &DAT_14c7585e0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    local_e4 = 0;
    local_d8 = &DAT_14c7585e0;
    local_c0 = 0;
    local_d0 = 0;
    uStack_cc = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    local_e8 = iStack_118;
    if (param_1 == 0 || *(char *)(param_1 + 0x1c) != '\0') {
      if (*(char *)(param_1 + 0x1c) == '\x03' && param_1 != 0) {
        local_1b8 = &local_178;
        local_1c8 = &local_198;
        local_1c0 = dVar3;
        FUN_146d0aac2(param_1);
      }
    }
    else {
      local_1b8 = &local_178;
      local_1c8 = &local_198;
      local_1c0 = dVar3;
      FUN_146d0a92d(param_1);
    }
    local_1a8 = local_138;
    local_1a0 = (undefined4)uStack_130;
    FUN_1404af2c6(param_5);
    FUN_1404af016(&local_178);
  }
  else {
    local_a8 = (double)_DAT_14c75f048 * dVar3;
    local_a0 = (double)_DAT_14c75f04c;
    local_128 = 0;
    uStack_120 = 0;
    local_178 = 0;
    dStack_170 = 0.0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    uStack_11c = 0x80;
    iStack_118 = -1;
    local_114 = local_114 & 0xffffffff00000000;
    local_108 = (undefined *)0x0;
    local_100 = local_100 & 0xffffffff00000000;
    local_d8 = (undefined *)0x0;
    local_d0 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    uStack_cc = 0x80;
    uStack_c8 = 0xffffffff;
    uStack_c4 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_98 = 0;
    local_94 = DAT_14c75f046;
    puVar5 = local_88;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar5 = *param_2;
      param_2 = param_2 + 1;
      puVar5 = puVar5 + 1;
    }
    if (param_1 == 0 || *(char *)(param_1 + 0x1c) != '\0') {
      if (*(char *)(param_1 + 0x1c) == '\x03' && param_1 != 0) {
        local_1b8 = &local_178;
        local_1c8 = &local_198;
        local_1c0 = dVar3;
        FUN_146d0ae26(param_1);
      }
    }
    else {
      local_1b8 = &local_178;
      local_1c8 = &local_198;
      local_1c0 = dVar3;
      FUN_146d0ac6b(param_1,SUB84(local_a8,0),lVar6);
    }
    local_1a8 = local_178;
    local_1a0 = dStack_170._0_4_;
    FUN_1404af2c6(param_5);
    FUN_146d0af8e(&local_178);
  }
  if ((local_20 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d0a92d FUN_146d0a92d body=404 status=ok
// SIG undefined FUN_146d0a92d(void)

void FUN_146d0a92d(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,double param_6,undefined8 param_7)

{
  double dVar1;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  longlong local_150;
  undefined8 local_148;
  double local_140;
  undefined1 local_138 [48];
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined1 local_d8 [64];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1404cdb8a(param_4,local_d8,param_2);
  local_98 = *param_5;
  uStack_90 = param_5[1];
  local_88 = param_5[2];
  uStack_80 = 0;
  dVar1 = *(double *)(param_1 + 0x10);
  local_108 = (*(double *)(param_1 + 0x20) - dVar1) - param_6;
  local_100 = (*(double *)(param_1 + 0x28) - dVar1) - param_6;
  local_f8 = (*(double *)(param_1 + 0x30) - dVar1) - param_6;
  local_f0 = dVar1 + *(double *)(param_1 + 0x20) + param_6;
  local_e8 = dVar1 + *(double *)(param_1 + 0x28) + param_6;
  local_e0 = dVar1 + *(double *)(param_1 + 0x30) + param_6;
  FUN_1449c5bc8(&local_108,local_138,local_d8);
  local_140 = param_6;
  local_158 = param_7;
  local_150 = param_1;
  local_148 = param_2;
  FUN_1404c7e5c(param_3,local_138,local_d8,&local_108);
  FUN_146d3b5c6(param_7,&local_150);
  FUN_1404aed08(param_7,param_2,local_d8);
  if ((local_70 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0aac2 FUN_146d0aac2 body=424 status=ok
// SIG undefined FUN_146d0aac2(void)

void FUN_146d0aac2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,double param_6,undefined8 param_7)

{
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double dStack_108;
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  undefined1 local_c8 [64];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1404cdb8a(param_4,local_c8,param_2);
  local_88 = *param_5;
  uStack_84 = param_5[1];
  uStack_80 = param_5[2];
  uStack_7c = param_5[3];
  local_78 = *(undefined8 *)(param_5 + 4);
  uStack_70 = 0;
  FUN_144b0186e(param_1,&local_128);
  local_128 = local_128 - param_6;
  dStack_120 = dStack_120 - param_6;
  local_118 = local_118 - param_6;
  local_110 = local_110 + param_6;
  dStack_108 = dStack_108 + param_6;
  local_100 = local_100 + param_6;
  local_f8 = local_128;
  dStack_f0 = dStack_120;
  local_e8 = local_118;
  local_d0 = local_100;
  local_e0 = local_110;
  dStack_d8 = dStack_108;
  FUN_1449c5bc8(&local_f8,&local_128,local_c8);
  local_130 = param_6;
  local_148 = param_7;
  local_140 = param_1;
  local_138 = param_2;
  FUN_1404c7e5c(param_3,&local_128,local_c8,&local_f8);
  FUN_146d3b79c(param_7,&local_140);
  FUN_1404aed08(param_7,param_2,local_c8);
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0ac6b FUN_146d0ac6b body=442 status=ok
// SIG undefined FUN_146d0ac6b(void)

void FUN_146d0ac6b(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,double param_6,undefined8 param_7)

{
  undefined1 auStack_178 [32];
  double local_158;
  undefined8 local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  undefined1 local_b8 [64];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1404cdb8a(param_4,local_b8,param_2);
  local_78 = *param_5;
  uStack_70 = param_5[1];
  local_68 = param_5[2];
  uStack_60 = 0;
  local_148 = *(double *)(param_1 + 0x10);
  local_120 = local_148 + *(double *)(param_1 + 0x30);
  local_128 = local_148 + *(double *)(param_1 + 0x28);
  local_130 = local_148 + *(double *)(param_1 + 0x20);
  local_138 = *(double *)(param_1 + 0x30) - local_148;
  local_140 = *(double *)(param_1 + 0x28) - local_148;
  local_148 = *(double *)(param_1 + 0x20) - local_148;
  FUN_1449c5bc8(&local_148,&local_118,local_b8);
  local_118 = local_118 - param_6;
  dStack_110 = dStack_110 - param_6;
  local_108 = local_108 - param_6;
  local_100 = local_100 + param_6;
  dStack_f8 = dStack_f8 + param_6;
  local_f0 = local_f0 + param_6;
  local_150 = param_7;
  local_158 = param_6;
  local_e8 = local_118;
  dStack_e0 = dStack_110;
  local_d8 = local_108;
  local_c0 = local_f0;
  local_d0 = local_100;
  dStack_c8 = dStack_f8;
  FUN_146d3b98a(param_1,param_3,&local_e8,local_b8);
  if ((local_50 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0ae26 FUN_146d0ae26 body=359 status=ok
// SIG undefined FUN_146d0ae26(void)

void FUN_146d0ae26(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,double param_6,undefined8 param_7)

{
  undefined1 auStack_178 [32];
  double local_158;
  undefined8 local_150;
  undefined1 local_148 [48];
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  undefined1 local_b8 [64];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1404cdb8a(param_4,local_b8,param_2);
  local_78 = *param_5;
  uStack_74 = param_5[1];
  uStack_70 = param_5[2];
  uStack_6c = param_5[3];
  local_68 = *(undefined8 *)(param_5 + 4);
  uStack_60 = 0;
  FUN_144b0186e(param_1,local_148);
  FUN_1449c5bc8(local_148,&local_118,local_b8);
  local_118 = local_118 - param_6;
  dStack_110 = dStack_110 - param_6;
  local_108 = local_108 - param_6;
  local_100 = local_100 + param_6;
  dStack_f8 = dStack_f8 + param_6;
  local_f0 = local_f0 + param_6;
  local_150 = param_7;
  local_158 = param_6;
  local_e8 = local_118;
  dStack_e0 = dStack_110;
  local_d8 = local_108;
  local_c0 = local_f0;
  local_d0 = local_100;
  dStack_c8 = dStack_f8;
  FUN_146d3c31a(param_1,param_3,&local_e8,local_b8);
  if ((local_50 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0af8e FUN_146d0af8e body=139 status=ok
// SIG undefined FUN_146d0af8e(void)

void FUN_146d0af8e(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_146d0f0be(param_1 + 6);
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



// FUNCTION 146d0b019 FUN_146d0b019 body=442 status=ok
// SIG undefined FUN_146d0b019(void)

void FUN_146d0b019(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,double param_6,undefined8 param_7)

{
  undefined1 auStack_178 [32];
  double local_158;
  undefined8 local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  undefined1 local_b8 [64];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1404cdb8a(param_4,local_b8,param_2);
  local_78 = *param_5;
  uStack_70 = param_5[1];
  local_68 = param_5[2];
  uStack_60 = 0;
  local_148 = *(double *)(param_1 + 0x10);
  local_120 = local_148 + *(double *)(param_1 + 0x30);
  local_128 = local_148 + *(double *)(param_1 + 0x28);
  local_130 = local_148 + *(double *)(param_1 + 0x20);
  local_138 = *(double *)(param_1 + 0x30) - local_148;
  local_140 = *(double *)(param_1 + 0x28) - local_148;
  local_148 = *(double *)(param_1 + 0x20) - local_148;
  FUN_1449c5bc8(&local_148,&local_118,local_b8);
  local_118 = local_118 - param_6;
  dStack_110 = dStack_110 - param_6;
  local_108 = local_108 - param_6;
  local_100 = local_100 + param_6;
  dStack_f8 = dStack_f8 + param_6;
  local_f0 = local_f0 + param_6;
  local_150 = param_7;
  local_158 = param_6;
  local_e8 = local_118;
  dStack_e0 = dStack_110;
  local_d8 = local_108;
  local_c0 = local_f0;
  local_d0 = local_100;
  dStack_c8 = dStack_f8;
  FUN_146d3c920(param_1,param_3,&local_e8,local_b8);
  if ((local_50 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0b1d4 FUN_146d0b1d4 body=359 status=ok
// SIG undefined FUN_146d0b1d4(void)

void FUN_146d0b1d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,double param_6,undefined8 param_7)

{
  undefined1 auStack_178 [32];
  double local_158;
  undefined8 local_150;
  undefined1 local_148 [48];
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  undefined1 local_b8 [64];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1404cdb8a(param_4,local_b8,param_2);
  local_78 = *param_5;
  uStack_74 = param_5[1];
  uStack_70 = param_5[2];
  uStack_6c = param_5[3];
  local_68 = *(undefined8 *)(param_5 + 4);
  uStack_60 = 0;
  FUN_144b0186e(param_1,local_148);
  FUN_1449c5bc8(local_148,&local_118,local_b8);
  local_118 = local_118 - param_6;
  dStack_110 = dStack_110 - param_6;
  local_108 = local_108 - param_6;
  local_100 = local_100 + param_6;
  dStack_f8 = dStack_f8 + param_6;
  local_f0 = local_f0 + param_6;
  local_150 = param_7;
  local_158 = param_6;
  local_e8 = local_118;
  dStack_e0 = dStack_110;
  local_d8 = local_108;
  local_c0 = local_f0;
  local_d0 = local_100;
  dStack_c8 = dStack_f8;
  FUN_146d3d2f8(param_1,param_3,&local_e8,local_b8);
  if ((local_50 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0b33c FUN_146d0b33c body=1006 status=ok
// SIG undefined FUN_146d0b33c(void)

void FUN_146d0b33c(longlong param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,double *param_6,double param_7,longlong param_8)

{
  double dVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_358 [32];
  undefined8 *local_338;
  double local_330;
  longlong local_328;
  longlong local_320;
  double *local_318;
  double *local_310;
  double local_308;
  undefined4 *local_300;
  undefined1 local_2f8 [48];
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  undefined1 local_278 [64];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_228 [8];
  undefined8 uStack_220;
  undefined4 local_218 [90];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  if ((*param_6 == 0.0) && (!NAN(*param_6))) {
    if ((param_6[1] == 0.0) && (!NAN(param_6[1]))) {
      if ((param_6[2] == 0.0) && (!NAN(param_6[2]))) {
        local_328 = param_8;
        local_330 = param_7;
        local_338 = param_5;
        FUN_146d3f22c(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_358);
      }
    }
  }
  FUN_1404cdb8a(param_4,local_278,param_2);
  local_238 = *param_5;
  uStack_230 = param_5[1];
  local_228 = (undefined1  [8])param_5[2];
  uStack_220 = 0;
  dVar6 = *param_6;
  dVar9 = param_6[1];
  dVar1 = -*param_2;
  dVar5 = -param_2[1];
  dVar7 = param_2[2] * -1.0;
  dVar8 = param_2[3] * 1.0;
  dVar10 = dVar9 * dVar1 - dVar6 * dVar5;
  dVar11 = param_6[2] * dVar5 - dVar9 * dVar7;
  dVar12 = dVar6 * dVar7 - dVar1 * param_6[2];
  dVar11 = dVar11 + dVar11;
  dVar12 = dVar12 + dVar12;
  dVar10 = dVar10 + dVar10;
  local_288 = dVar8 * dVar10 + param_6[2] + (dVar12 * dVar1 - dVar11 * dVar5);
  local_298 = (dVar10 * dVar5 - dVar12 * dVar7) + dVar8 * dVar11 + dVar6;
  dStack_290 = *param_2 * dVar10 + dVar7 * dVar11 + dVar8 * dVar12 + dVar9;
  dVar1 = -local_288;
  dVar6 = -dStack_290;
  dVar10 = -local_298;
  dVar5 = dVar10;
  if (0.0 <= dVar10) {
    dVar5 = 0.0;
  }
  dVar9 = dVar6;
  if (0.0 <= dVar6) {
    dVar9 = 0.0;
  }
  dVar7 = dVar1;
  if (0.0 <= dVar1) {
    dVar7 = 0.0;
  }
  if (dVar10 <= 0.0) {
    dVar10 = 0.0;
  }
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  uVar3 = SUB84(local_288,0);
  uVar4 = (int)((ulonglong)dVar1 >> 0x20);
  if (dVar1 <= 0.0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  local_2c8 = (dVar5 + *(double *)(param_1 + 0x58)) - param_7;
  local_2c0 = (dVar9 + *(double *)(param_1 + 0x60)) - param_7;
  local_2b8 = (dVar7 + *(double *)(param_1 + 0x68)) - param_7;
  local_2b0 = dVar10 + *(double *)(param_1 + 0x70) + param_7;
  local_2a8 = dVar6 + *(double *)(param_1 + 0x78) + param_7;
  local_2a0 = (double)CONCAT44(uVar4,uVar3) + *(double *)(param_1 + 0x80) + param_7;
  FUN_1449c5bc8(&local_2c8,local_2f8,local_278);
  local_338 = (undefined8 *)param_8;
  FUN_1404c7e5c(param_3,local_2f8,local_278,&local_2c8);
  local_218[0] = 0;
  lVar2 = 0x5c;
  do {
    *(undefined8 *)(local_228 + lVar2 + 4) = 0x7fefffffffffffff;
    *(undefined4 *)((longlong)local_218 + lVar2 + -4) = 0xffffffff;
    *(undefined1 *)((longlong)local_218 + lVar2) = 0;
    lVar2 = lVar2 + 0x58;
  } while (lVar2 != 0x1bc);
  local_310 = &local_298;
  local_308 = param_7;
  local_300 = local_218;
  local_320 = param_1;
  local_318 = param_2;
  FUN_146d3f39c(param_8);
  *(byte *)(param_8 + 0x28) = *(byte *)(param_8 + 0x28) & 0xfd;
  FUN_1404aed08(param_8,param_2,local_278);
  if ((local_b0 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d0b72b FUN_146d0b72b body=1061 status=ok
// SIG undefined FUN_146d0b72b(void)

void FUN_146d0b72b(longlong param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,double *param_6,double param_7,longlong param_8)

{
  double dVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_358 [32];
  undefined8 *local_338;
  double local_330;
  longlong local_328;
  longlong local_320;
  double *local_318;
  double *local_310;
  double local_308;
  undefined4 *local_300;
  undefined1 local_2f8 [48];
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  undefined1 local_278 [64];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_228 [8];
  undefined8 uStack_220;
  undefined4 local_218 [90];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  if ((*param_6 == 0.0) && (!NAN(*param_6))) {
    if ((param_6[1] == 0.0) && (!NAN(param_6[1]))) {
      if ((param_6[2] == 0.0) && (!NAN(param_6[2]))) {
        local_328 = param_8;
        local_330 = param_7;
        local_338 = param_5;
        FUN_146d405bb(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_358);
      }
    }
  }
  FUN_1404cdb8a(param_4,local_278,param_2);
  local_238 = *param_5;
  uStack_230 = param_5[1];
  local_228 = (undefined1  [8])param_5[2];
  uStack_220 = 0;
  dVar6 = *param_6;
  dVar10 = param_6[1];
  dVar1 = -*param_2;
  dVar5 = -param_2[1];
  dVar7 = param_2[2] * -1.0;
  dVar8 = param_2[3] * 1.0;
  dVar9 = dVar10 * dVar1 - dVar6 * dVar5;
  dVar11 = param_6[2] * dVar5 - dVar10 * dVar7;
  dVar12 = dVar6 * dVar7 - dVar1 * param_6[2];
  dVar11 = dVar11 + dVar11;
  dVar12 = dVar12 + dVar12;
  dVar9 = dVar9 + dVar9;
  local_288 = dVar8 * dVar9 + param_6[2] + (dVar12 * dVar1 - dVar11 * dVar5);
  local_298 = (dVar9 * dVar5 - dVar12 * dVar7) + dVar8 * dVar11 + dVar6;
  dStack_290 = *param_2 * dVar9 + dVar7 * dVar11 + dVar8 * dVar12 + dVar10;
  lVar2 = *(longlong *)(param_1 + 0x28);
  dVar1 = -local_288;
  dVar6 = -dStack_290;
  dVar9 = -local_298;
  dVar5 = dVar9;
  if (0.0 <= dVar9) {
    dVar5 = 0.0;
  }
  dVar10 = dVar6;
  if (0.0 <= dVar6) {
    dVar10 = 0.0;
  }
  dVar7 = dVar1;
  if (0.0 <= dVar1) {
    dVar7 = 0.0;
  }
  if (dVar9 <= 0.0) {
    dVar9 = 0.0;
  }
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  uVar3 = SUB84(local_288,0);
  uVar4 = (int)((ulonglong)dVar1 >> 0x20);
  if (dVar1 <= 0.0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  local_2c8 = (dVar5 + (double)*(float *)(lVar2 + 0x40)) - param_7;
  local_2c0 = (dVar10 + (double)*(float *)(lVar2 + 0x44)) - param_7;
  local_2b8 = (dVar7 + (double)*(float *)(lVar2 + 0x48)) - param_7;
  local_2b0 = dVar9 + (double)*(float *)(lVar2 + 0x4c) + param_7;
  local_2a8 = dVar6 + (double)*(float *)(lVar2 + 0x50) + param_7;
  local_2a0 = (double)CONCAT44(uVar4,uVar3) + (double)*(float *)(lVar2 + 0x54) + param_7;
  FUN_1449c5bc8(&local_2c8,local_2f8,local_278);
  local_338 = (undefined8 *)param_8;
  FUN_1404c7e5c(param_3,local_2f8,local_278,&local_2c8);
  local_218[0] = 0;
  lVar2 = 0x5c;
  do {
    *(undefined8 *)(local_228 + lVar2 + 4) = 0x7fefffffffffffff;
    *(undefined4 *)((longlong)local_218 + lVar2 + -4) = 0xffffffff;
    *(undefined1 *)((longlong)local_218 + lVar2) = 0;
    lVar2 = lVar2 + 0x58;
  } while (lVar2 != 0x1bc);
  local_310 = &local_298;
  local_308 = param_7;
  local_300 = local_218;
  local_320 = param_1;
  local_318 = param_2;
  FUN_146d4072c(param_8);
  *(byte *)(param_8 + 0x28) = *(byte *)(param_8 + 0x28) & 0xfd;
  FUN_1404aed08(param_8,param_2,local_278);
  if ((local_b0 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d0bb51 FUN_146d0bb51 body=1060 status=ok
// SIG undefined FUN_146d0bb51(void)

void FUN_146d0bb51(longlong param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,double *param_6,double param_7,longlong param_8)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_358 [32];
  undefined8 *local_338;
  double local_330;
  longlong local_328;
  longlong local_320;
  double *local_318;
  double *local_310;
  double local_308;
  undefined4 *local_300;
  undefined1 local_2f8 [48];
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  undefined1 local_278 [64];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_228 [8];
  undefined8 uStack_220;
  undefined4 local_218 [90];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  if ((*param_6 == 0.0) && (!NAN(*param_6))) {
    if ((param_6[1] == 0.0) && (!NAN(param_6[1]))) {
      if ((param_6[2] == 0.0) && (!NAN(param_6[2]))) {
        local_328 = param_8;
        local_330 = param_7;
        local_338 = param_5;
        FUN_146d41904(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_358);
      }
    }
  }
  FUN_1404cdb8a(param_4,local_278,param_2);
  local_238 = *param_5;
  uStack_230 = param_5[1];
  local_228 = (undefined1  [8])param_5[2];
  uStack_220 = 0;
  dVar4 = *param_6;
  dVar6 = param_6[1];
  dVar5 = param_2[2] * -1.0;
  dVar7 = param_2[3] * 1.0;
  dVar8 = -*param_2;
  dVar9 = -param_2[1];
  dVar10 = dVar6 * dVar8 - dVar4 * dVar9;
  dVar11 = param_6[2] * dVar9 - dVar6 * dVar5;
  dVar12 = dVar4 * dVar5 - dVar8 * param_6[2];
  dVar11 = dVar11 + dVar11;
  dVar12 = dVar12 + dVar12;
  dVar10 = dVar10 + dVar10;
  local_288 = dVar7 * dVar10 + param_6[2] + (dVar12 * dVar8 - dVar11 * dVar9);
  local_298 = (dVar10 * dVar9 - dVar12 * dVar5) + dVar7 * dVar11 + dVar4;
  dStack_290 = *param_2 * dVar10 + dVar5 * dVar11 + dVar7 * dVar12 + dVar6;
  dVar10 = -local_288;
  dVar5 = -dStack_290;
  dVar6 = -local_298;
  dVar4 = dVar6;
  if (0.0 <= dVar6) {
    dVar4 = 0.0;
  }
  dVar7 = dVar5;
  if (0.0 <= dVar5) {
    dVar7 = 0.0;
  }
  dVar8 = dVar10;
  if (0.0 <= dVar10) {
    dVar8 = 0.0;
  }
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  if (dVar5 <= 0.0) {
    dVar5 = 0.0;
  }
  uVar2 = SUB84(local_288,0);
  uVar3 = (int)((ulonglong)dVar10 >> 0x20);
  if (dVar10 <= 0.0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  local_2c8 = (dVar4 + (double)*(float *)(param_1 + 0x40)) - param_7;
  local_2c0 = (dVar7 + (double)*(float *)(param_1 + 0x44)) - param_7;
  local_2b8 = (dVar8 + (double)*(float *)(param_1 + 0x48)) - param_7;
  local_2b0 = dVar6 + (double)*(float *)(param_1 + 0x4c) + param_7;
  local_2a8 = dVar5 + (double)*(float *)(param_1 + 0x50) + param_7;
  local_2a0 = (double)CONCAT44(uVar3,uVar2) + (double)*(float *)(param_1 + 0x54) + param_7;
  FUN_1449c5bc8(&local_2c8,local_2f8,local_278);
  local_338 = (undefined8 *)param_8;
  FUN_1404c7e5c(param_3,local_2f8,local_278,&local_2c8);
  local_218[0] = 0;
  lVar1 = 0x5c;
  do {
    *(undefined8 *)(local_228 + lVar1 + 4) = 0x7fefffffffffffff;
    *(undefined4 *)((longlong)local_218 + lVar1 + -4) = 0xffffffff;
    *(undefined1 *)((longlong)local_218 + lVar1) = 0;
    lVar1 = lVar1 + 0x58;
  } while (lVar1 != 0x1bc);
  local_310 = &local_298;
  local_308 = param_7;
  local_300 = local_218;
  local_320 = param_1;
  local_318 = param_2;
  FUN_146d41a78(param_8);
  *(byte *)(param_8 + 0x28) = *(byte *)(param_8 + 0x28) & 0xfd;
  FUN_1404aed08(param_8,param_2,local_278);
  if ((local_b0 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d0bf76 FUN_146d0bf76 body=372 status=ok
// SIG undefined FUN_146d0bf76(void)

void FUN_146d0bf76(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,double param_6,undefined8 param_7)

{
  undefined1 auStack_168 [32];
  double local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  undefined1 local_a8 [64];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1404cdb8a(param_4,local_a8,param_2);
  local_68 = *param_5;
  uStack_60 = param_5[1];
  local_58 = param_5[2];
  uStack_50 = 0;
  local_128 = *(undefined8 *)(param_1 + 0x30);
  local_138 = *(undefined8 *)(param_1 + 0x20);
  uStack_130 = *(undefined8 *)(param_1 + 0x28);
  local_120 = *(undefined4 *)(param_1 + 0x38);
  uStack_11c = *(undefined4 *)(param_1 + 0x3c);
  uStack_118 = *(undefined4 *)(param_1 + 0x40);
  uStack_114 = *(undefined4 *)(param_1 + 0x44);
  local_110 = *(undefined8 *)(param_1 + 0x48);
  FUN_1449c5bc8(&local_138,&local_108,local_a8);
  local_108 = local_108 - param_6;
  dStack_100 = dStack_100 - param_6;
  local_f8 = local_f8 - param_6;
  local_f0 = local_f0 + param_6;
  dStack_e8 = dStack_e8 + param_6;
  local_e0 = local_e0 + param_6;
  local_140 = param_7;
  local_148 = param_6;
  local_d8 = local_108;
  dStack_d0 = dStack_100;
  local_c8 = local_f8;
  local_b0 = local_e0;
  local_c0 = local_f0;
  dStack_b8 = dStack_e8;
  FUN_146d42c46(param_1,param_3,&local_d8,local_a8);
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0c0eb FUN_146d0c0eb body=375 status=ok
// SIG undefined FUN_146d0c0eb(void)

void FUN_146d0c0eb(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,double param_6,undefined8 param_7)

{
  undefined1 auStack_168 [32];
  double local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  undefined1 local_a8 [64];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1404cdb8a(param_4,local_a8,param_2);
  local_68 = *param_5;
  uStack_60 = param_5[1];
  local_58 = param_5[2];
  uStack_50 = 0;
  local_128 = *(undefined8 *)(param_1 + 0x68);
  local_138 = *(undefined8 *)(param_1 + 0x58);
  uStack_130 = *(undefined8 *)(param_1 + 0x60);
  local_120 = *(undefined4 *)(param_1 + 0x70);
  uStack_11c = *(undefined4 *)(param_1 + 0x74);
  uStack_118 = *(undefined4 *)(param_1 + 0x78);
  uStack_114 = *(undefined4 *)(param_1 + 0x7c);
  local_110 = *(undefined8 *)(param_1 + 0x80);
  FUN_1449c5bc8(&local_138,&local_108,local_a8);
  local_108 = local_108 - param_6;
  dStack_100 = dStack_100 - param_6;
  local_f8 = local_f8 - param_6;
  local_f0 = local_f0 + param_6;
  dStack_e8 = dStack_e8 + param_6;
  local_e0 = local_e0 + param_6;
  local_140 = param_7;
  local_148 = param_6;
  local_d8 = local_108;
  dStack_d0 = dStack_100;
  local_c8 = local_f8;
  local_b0 = local_e0;
  local_c0 = local_f0;
  dStack_b8 = dStack_e8;
  FUN_146d42f60(param_1,param_3,&local_d8,local_a8);
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0c263 FUN_146d0c263 body=410 status=ok
// SIG undefined FUN_146d0c263(void)

void FUN_146d0c263(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,double param_6,undefined8 param_7)

{
  longlong lVar1;
  undefined1 auStack_168 [32];
  double local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  undefined1 local_a8 [64];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1404cdb8a(param_4,local_a8,param_2);
  local_68 = *param_5;
  uStack_60 = param_5[1];
  local_58 = param_5[2];
  uStack_50 = 0;
  lVar1 = *(longlong *)(param_1 + 0x28);
  local_110 = (double)*(float *)(lVar1 + 0x54);
  local_118 = (double)*(float *)(lVar1 + 0x50);
  local_120 = (double)*(float *)(lVar1 + 0x4c);
  local_128 = (double)*(float *)(lVar1 + 0x48);
  local_130 = (double)*(float *)(lVar1 + 0x44);
  local_138 = (double)*(float *)(lVar1 + 0x40);
  FUN_1449c5bc8(&local_138,&local_108,local_a8);
  local_108 = local_108 - param_6;
  dStack_100 = dStack_100 - param_6;
  local_f8 = local_f8 - param_6;
  local_f0 = local_f0 + param_6;
  dStack_e8 = dStack_e8 + param_6;
  local_e0 = local_e0 + param_6;
  local_140 = param_7;
  local_148 = param_6;
  local_d8 = local_108;
  dStack_d0 = dStack_100;
  local_c8 = local_f8;
  local_b0 = local_e0;
  local_c0 = local_f0;
  dStack_b8 = dStack_e8;
  FUN_146d4327a(param_1,param_3,&local_d8,local_a8);
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0c3fe FUN_146d0c3fe body=406 status=ok
// SIG undefined FUN_146d0c3fe(void)

void FUN_146d0c3fe(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,double param_6,undefined8 param_7)

{
  undefined1 auStack_168 [32];
  double local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  undefined1 local_a8 [64];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1404cdb8a(param_4,local_a8,param_2);
  local_68 = *param_5;
  uStack_60 = param_5[1];
  local_58 = param_5[2];
  uStack_50 = 0;
  local_110 = (double)*(float *)(param_1 + 0x54);
  local_118 = (double)*(float *)(param_1 + 0x50);
  local_120 = (double)*(float *)(param_1 + 0x4c);
  local_128 = (double)*(float *)(param_1 + 0x48);
  local_130 = (double)*(float *)(param_1 + 0x44);
  local_138 = (double)*(float *)(param_1 + 0x40);
  FUN_1449c5bc8(&local_138,&local_108,local_a8);
  local_108 = local_108 - param_6;
  dStack_100 = dStack_100 - param_6;
  local_f8 = local_f8 - param_6;
  local_f0 = local_f0 + param_6;
  dStack_e8 = dStack_e8 + param_6;
  local_e0 = local_e0 + param_6;
  local_140 = param_7;
  local_148 = param_6;
  local_d8 = local_108;
  dStack_d0 = dStack_100;
  local_c8 = local_f8;
  local_b0 = local_e0;
  local_c0 = local_f0;
  dStack_b8 = dStack_e8;
  FUN_146d43594(param_1,param_3,&local_d8,local_a8);
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0c595 FUN_146d0c595 body=372 status=ok
// SIG undefined FUN_146d0c595(void)

void FUN_146d0c595(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,double param_6,undefined8 param_7)

{
  undefined1 auStack_168 [32];
  double local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  undefined1 local_a8 [64];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1404cdb8a(param_4,local_a8,param_2);
  local_68 = *param_5;
  uStack_60 = param_5[1];
  local_58 = param_5[2];
  uStack_50 = 0;
  local_128 = *(undefined8 *)(param_1 + 0x30);
  local_138 = *(undefined8 *)(param_1 + 0x20);
  uStack_130 = *(undefined8 *)(param_1 + 0x28);
  local_120 = *(undefined4 *)(param_1 + 0x38);
  uStack_11c = *(undefined4 *)(param_1 + 0x3c);
  uStack_118 = *(undefined4 *)(param_1 + 0x40);
  uStack_114 = *(undefined4 *)(param_1 + 0x44);
  local_110 = *(undefined8 *)(param_1 + 0x48);
  FUN_1449c5bc8(&local_138,&local_108,local_a8);
  local_108 = local_108 - param_6;
  dStack_100 = dStack_100 - param_6;
  local_f8 = local_f8 - param_6;
  local_f0 = local_f0 + param_6;
  dStack_e8 = dStack_e8 + param_6;
  local_e0 = local_e0 + param_6;
  local_140 = param_7;
  local_148 = param_6;
  local_d8 = local_108;
  dStack_d0 = dStack_100;
  local_c8 = local_f8;
  local_b0 = local_e0;
  local_c0 = local_f0;
  dStack_b8 = dStack_e8;
  FUN_146d44198(param_1,param_3,&local_d8,local_a8);
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0c70a FUN_146d0c70a body=375 status=ok
// SIG undefined FUN_146d0c70a(void)

void FUN_146d0c70a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,double param_6,undefined8 param_7)

{
  undefined1 auStack_168 [32];
  double local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  undefined1 local_a8 [64];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1404cdb8a(param_4,local_a8,param_2);
  local_68 = *param_5;
  uStack_60 = param_5[1];
  local_58 = param_5[2];
  uStack_50 = 0;
  local_128 = *(undefined8 *)(param_1 + 0x68);
  local_138 = *(undefined8 *)(param_1 + 0x58);
  uStack_130 = *(undefined8 *)(param_1 + 0x60);
  local_120 = *(undefined4 *)(param_1 + 0x70);
  uStack_11c = *(undefined4 *)(param_1 + 0x74);
  uStack_118 = *(undefined4 *)(param_1 + 0x78);
  uStack_114 = *(undefined4 *)(param_1 + 0x7c);
  local_110 = *(undefined8 *)(param_1 + 0x80);
  FUN_1449c5bc8(&local_138,&local_108,local_a8);
  local_108 = local_108 - param_6;
  dStack_100 = dStack_100 - param_6;
  local_f8 = local_f8 - param_6;
  local_f0 = local_f0 + param_6;
  dStack_e8 = dStack_e8 + param_6;
  local_e0 = local_e0 + param_6;
  local_140 = param_7;
  local_148 = param_6;
  local_d8 = local_108;
  dStack_d0 = dStack_100;
  local_c8 = local_f8;
  local_b0 = local_e0;
  local_c0 = local_f0;
  dStack_b8 = dStack_e8;
  FUN_146d44b86(param_1,param_3,&local_d8,local_a8);
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0c882 FUN_146d0c882 body=410 status=ok
// SIG undefined FUN_146d0c882(void)

void FUN_146d0c882(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,double param_6,undefined8 param_7)

{
  longlong lVar1;
  undefined1 auStack_168 [32];
  double local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  undefined1 local_a8 [64];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1404cdb8a(param_4,local_a8,param_2);
  local_68 = *param_5;
  uStack_60 = param_5[1];
  local_58 = param_5[2];
  uStack_50 = 0;
  lVar1 = *(longlong *)(param_1 + 0x28);
  local_110 = (double)*(float *)(lVar1 + 0x54);
  local_118 = (double)*(float *)(lVar1 + 0x50);
  local_120 = (double)*(float *)(lVar1 + 0x4c);
  local_128 = (double)*(float *)(lVar1 + 0x48);
  local_130 = (double)*(float *)(lVar1 + 0x44);
  local_138 = (double)*(float *)(lVar1 + 0x40);
  FUN_1449c5bc8(&local_138,&local_108,local_a8);
  local_108 = local_108 - param_6;
  dStack_100 = dStack_100 - param_6;
  local_f8 = local_f8 - param_6;
  local_f0 = local_f0 + param_6;
  dStack_e8 = dStack_e8 + param_6;
  local_e0 = local_e0 + param_6;
  local_140 = param_7;
  local_148 = param_6;
  local_d8 = local_108;
  dStack_d0 = dStack_100;
  local_c8 = local_f8;
  local_b0 = local_e0;
  local_c0 = local_f0;
  dStack_b8 = dStack_e8;
  FUN_146d45574(param_1,param_3,&local_d8,local_a8);
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0ca1d FUN_146d0ca1d body=406 status=ok
// SIG undefined FUN_146d0ca1d(void)

void FUN_146d0ca1d(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,double param_6,undefined8 param_7)

{
  undefined1 auStack_168 [32];
  double local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  undefined1 local_a8 [64];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1404cdb8a(param_4,local_a8,param_2);
  local_68 = *param_5;
  uStack_60 = param_5[1];
  local_58 = param_5[2];
  uStack_50 = 0;
  local_110 = (double)*(float *)(param_1 + 0x54);
  local_118 = (double)*(float *)(param_1 + 0x50);
  local_120 = (double)*(float *)(param_1 + 0x4c);
  local_128 = (double)*(float *)(param_1 + 0x48);
  local_130 = (double)*(float *)(param_1 + 0x44);
  local_138 = (double)*(float *)(param_1 + 0x40);
  FUN_1449c5bc8(&local_138,&local_108,local_a8);
  local_108 = local_108 - param_6;
  dStack_100 = dStack_100 - param_6;
  local_f8 = local_f8 - param_6;
  local_f0 = local_f0 + param_6;
  dStack_e8 = dStack_e8 + param_6;
  local_e0 = local_e0 + param_6;
  local_140 = param_7;
  local_148 = param_6;
  local_d8 = local_108;
  dStack_d0 = dStack_100;
  local_c8 = local_f8;
  local_b0 = local_e0;
  local_c0 = local_f0;
  dStack_b8 = dStack_e8;
  FUN_146d45f62(param_1,param_3,&local_d8,local_a8);
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0cbb4 FUN_146d0cbb4 body=155 status=ok
// SIG undefined FUN_146d0cbb4(void)

void FUN_146d0cbb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_88 [72];
  double local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1449cbdd8(param_5);
  local_98 = param_4;
  FUN_146d4ac07(local_88,param_1,param_2,param_3);
  if (local_40 < (double)*(float *)(param_5 + 300)) {
    FUN_1404c649e(param_5,local_88);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0cc50 FUN_146d0cc50 body=1754 status=ok
// SIG undefined FUN_146d0cc50(void)

/* WARNING: Removing unreachable block (ram,0x000146d0d09e) */

void FUN_146d0cc50(longlong param_1,longlong param_2,double *param_3,double param_4,int *param_5)

{
  double dVar1;
  short sVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  int *piVar14;
  ulonglong uVar15;
  int iVar16;
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
  double dVar31;
  undefined1 auStack_1c8 [32];
  int *local_1a8;
  double local_1a0;
  double local_198;
  double dStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [24];
  undefined1 local_160 [16];
  double local_150;
  undefined8 local_148 [6];
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_1404c4420(local_148,param_1,param_2,param_3);
  if (local_100 <= param_4) {
    piVar14 = param_5 + (longlong)*param_5 * 0x16;
    puVar12 = local_148;
    for (lVar8 = 0xb; piVar14 = piVar14 + 2, lVar8 != 0; lVar8 = lVar8 + -1) {
      *(undefined8 *)piVar14 = *puVar12;
      puVar12 = puVar12 + 1;
    }
    *param_5 = *param_5 + 1;
    dVar1 = *(double *)(param_1 + 0x10);
    dVar20 = ABS(*(double *)(param_2 + 0x48) - *(double *)(param_2 + 0x30));
    dVar19 = ABS(*(double *)(param_2 + 0x40) - *(double *)(param_2 + 0x28));
    dVar18 = ABS(*(double *)(param_2 + 0x38) - *(double *)(param_2 + 0x20));
    if (dVar18 <= dVar19) {
      dVar18 = dVar19;
    }
    if (dVar18 <= dVar20) {
      dVar18 = dVar20;
    }
    if (dVar18 < dVar1) {
      dVar27 = *(double *)(param_1 + 0x20);
      dVar29 = *(double *)(param_1 + 0x28);
      dVar3 = *param_3;
      dVar4 = param_3[1];
      dVar31 = param_3[2];
      dVar18 = param_3[3];
      dVar19 = dVar29 * dVar3 - dVar27 * dVar4;
      dVar23 = *(double *)(param_1 + 0x30) * dVar4 - dVar29 * dVar31;
      dVar26 = dVar27 * dVar31 - dVar3 * *(double *)(param_1 + 0x30);
      dVar20 = param_3[3] * 0.0 - param_3[3] * 0.0;
      dVar23 = dVar23 + dVar23;
      dVar26 = dVar26 + dVar26;
      dVar19 = dVar19 + dVar19;
      dVar20 = dVar20 + dVar20;
      dVar27 = (dVar19 * dVar4 - dVar26 * dVar31) + dVar18 * dVar23 + dVar27 + param_3[4];
      dVar29 = (dVar31 * dVar23 - dVar3 * dVar19) + param_3[3] * dVar26 + dVar29 + param_3[5];
      dVar18 = dVar19 * dVar18 + *(double *)(param_1 + 0x30) + (dVar26 * dVar3 - dVar23 * dVar4) +
               param_3[6];
      uVar6 = (ABS(dStack_110) <= ABS(local_108)) + 1;
      uVar15 = 0;
      uVar9 = (ulonglong)uVar6;
      if (ABS(local_108) < ABS(local_118)) {
        uVar9 = uVar15;
      }
      local_160._8_4_ = SUB84(dStack_110,0);
      local_160._0_8_ = -local_118;
      local_160._12_4_ = (uint)((ulonglong)dStack_110 >> 0x20) ^ 0x80000000;
      local_150 = -local_108;
      if (ABS(local_118) <= ABS(dStack_110)) {
        uVar9 = (ulonglong)uVar6;
      }
      uVar13 = (ulonglong)((int)uVar9 + 3);
      if (0.0 < *(double *)(local_160 + uVar9 * 8) || *(double *)(local_160 + uVar9 * 8) == 0.0) {
        uVar13 = uVar9;
      }
      FUN_1404b254c(param_2,uVar13,local_178);
      sVar2 = *(short *)(DAT_14c992a40 + 2 + uVar13 * 4);
      iVar16 = (int)sVar2;
      uVar7 = (iVar16 / 3 + (iVar16 >> 0x1f)) - (iVar16 * 0x5556 >> 0x1f);
      uVar6 = 1;
      if (1 < (short)uVar7) {
        uVar6 = uVar7;
      }
      if (0 < sVar2) {
        local_1a8 = param_5 + 2;
        local_188._8_4_ = SUB84(dVar20,0);
        local_188._0_8_ = dVar18;
        local_188._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
        lVar8 = DAT_14c992a50;
        lVar10 = DAT_14c992a20;
        do {
          lVar11 = (longlong)
                   *(short *)(lVar8 + 2 +
                             ((longlong)(int)uVar15 +
                             (longlong)*(short *)(DAT_14c992a40 + uVar13 * 4)) * 6);
          dVar19 = *(double *)(param_2 + 0x48) - *(double *)(param_2 + 0x30);
          dVar20 = *(double *)(param_2 + 0x40) - *(double *)(param_2 + 0x28);
          dVar31 = *(double *)(param_2 + 0x38) - *(double *)(param_2 + 0x20);
          dVar3 = dVar19 * *(double *)(lVar10 + 0x10 + lVar11 * 0x18) * 0.5 +
                  dVar19 * 0.5 + *(double *)(param_2 + 0x30);
          dVar4 = dVar20 * *(double *)(lVar10 + 8 + lVar11 * 0x18) * 0.5 +
                  dVar20 * 0.5 + *(double *)(param_2 + 0x28);
          dVar26 = dVar31 * *(double *)(lVar10 + lVar11 * 0x18) * 0.5 +
                   dVar31 * 0.5 + *(double *)(param_2 + 0x20);
          dVar31 = dVar18 - dVar3;
          dVar20 = dVar29 - dVar4;
          dVar23 = dVar27 - dVar26;
          dVar19 = local_108 * dVar31 + local_118 * dVar23 + dStack_110 * dVar20;
          dVar31 = dVar1 * dVar1 -
                   ((dVar31 * dVar31 + dVar23 * dVar23 + dVar20 * dVar20) - dVar19 * dVar19);
          dVar20 = 1.79769313486232e+308;
          if (0.0 <= dVar31) {
            dVar20 = dVar19 - SQRT(dVar31);
            lVar8 = DAT_14c992a50;
            lVar10 = DAT_14c992a20;
          }
          local_1a0 = param_4;
          local_198 = dVar27;
          dStack_190 = dVar29;
          if (dVar20 < param_4) {
            lVar11 = (longlong)*param_5;
            *param_5 = *param_5 + 1;
            dVar21 = (local_118 * dVar20 + dVar26) - param_3[4];
            dVar22 = (dStack_110 * dVar20 + dVar4) - param_3[5];
            dVar17 = (local_108 * dVar20 + dVar3) - param_3[6];
            dVar5 = *param_3;
            dVar24 = -dVar5;
            dVar25 = -param_3[1];
            dVar28 = param_3[2] * -1.0;
            dVar30 = param_3[3] * 1.0;
            dVar23 = dVar21 * dVar28 - dVar24 * dVar17;
            dVar19 = dVar22 * dVar24 - dVar21 * dVar25;
            dVar31 = dVar17 * dVar25 - dVar22 * dVar28;
            dVar31 = dVar31 + dVar31;
            dVar23 = dVar23 + dVar23;
            dVar19 = dVar19 + dVar19;
            *(double *)(local_1a8 + lVar11 * 0x16) =
                 (dVar19 * dVar25 - dVar23 * dVar28) + dVar30 * dVar31 + dVar21;
            *(double *)((longlong)(local_1a8 + lVar11 * 0x16) + 8) =
                 dVar5 * dVar19 + dVar28 * dVar31 + dVar30 * dVar23 + dVar22;
            *(double *)(param_5 + lVar11 * 0x16 + 6) =
                 dVar30 * dVar19 + dVar17 + (dVar23 * dVar24 - dVar31 * dVar25);
            *(double *)(param_5 + lVar11 * 0x16 + 8) = dVar26;
            *(double *)(param_5 + lVar11 * 0x16 + 10) = dVar4;
            *(double *)(param_5 + lVar11 * 0x16 + 0xc) = dVar3;
            *(double *)(param_5 + lVar11 * 0x16 + 0xe) = local_118;
            *(double *)((longlong)(param_5 + lVar11 * 0x16 + 0xe) + 8) = dStack_110;
            *(double *)(param_5 + lVar11 * 0x16 + 0x12) = local_108;
            *(double *)(param_5 + lVar11 * 0x16 + 0x14) = dVar20;
            param_5[lVar11 * 0x16 + 0x16] = -1;
            *(undefined1 *)(param_5 + lVar11 * 0x16 + 0x17) = 1;
            if (*param_5 == 4) break;
          }
          uVar7 = (int)uVar15 + (uVar6 & 0xffff);
          uVar15 = (ulonglong)uVar7;
        } while ((int)uVar7 < iVar16);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0d32b FUN_146d0d32b body=86 status=ok
// SIG undefined FUN_146d0d32b(void)

void FUN_146d0d32b(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  double *pdVar2;
  float fVar3;
  double dVar4;
  undefined8 uVar5;
  char cVar6;
  ushort uVar7;
  longlong *plVar8;
  longlong *plVar9;
  float *pfVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  longlong lVar23;
  longlong lVar24;
  bool bVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined1 auStack_2e8 [32];
  double dStack_2c8;
  undefined8 uStack_2c0;
  undefined8 auStack_2b8 [12];
  undefined1 auStack_258 [16];
  double dStack_248;
  double dStack_240;
  undefined1 auStack_238 [16];
  double dStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [16];
  double dStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 auStack_178 [16];
  double dStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 auStack_118 [16];
  double dStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulonglong uStack_d0;
  
  uVar7 = *(ushort *)(param_1 + 0x374);
  dVar37 = *(double *)(param_2 + 0x48);
  if ((((byte)uVar7 >> 2 & 0 < *(int *)(param_1 + 0x5b0)) == 0) &&
     ((double)*(float *)(param_1 + 300) < dVar37)) {
    *(ushort *)(param_1 + 0x374) = uVar7 | 2;
    return;
  }
  if ((dVar37 != 1.79769313486232e+308) || (NAN(dVar37))) {
    FUN_140bd3cd0();
    return;
  }
  if ((uVar7 & 4) == 0) {
    return;
  }
  uStack_d0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if ((*(longlong *)(param_1 + 0x648) == 0) || (*(longlong *)(param_1 + 0x650) == 0))
  goto LAB_140c2a12b;
  plVar8 = *(longlong **)(param_1 + 0xe0);
  plVar9 = *(longlong **)(param_1 + 0xe8);
  FUN_14013713e(*(longlong *)(param_1 + 0x648),&uStack_198);
  pfVar10 = *(float **)(param_1 + 0x648);
  dStack_108 = (double)pfVar10[2] + *(double *)(pfVar10 + 0x48);
  uStack_138 = uStack_198;
  uStack_130 = uStack_190;
  uStack_128 = (undefined4)uStack_188;
  uStack_124 = uStack_188._4_4_;
  uStack_120 = (undefined4)uStack_180;
  uStack_11c = uStack_180._4_4_;
  auStack_118._8_4_ = SUB84((double)pfVar10[1] + *(double *)(pfVar10 + 0x46),0);
  auStack_118._0_8_ = (double)*pfVar10 + *(double *)(pfVar10 + 0x44);
  auStack_118._12_4_ = (int)((ulonglong)((double)pfVar10[1] + *(double *)(pfVar10 + 0x46)) >> 0x20);
  uStack_100 = 0;
  uStack_f8 = 0x3ff0000000000000;
  uStack_f0 = 0x3ff0000000000000;
  uStack_e8 = 0x3ff0000000000000;
  uStack_e0 = 0;
  FUN_14013713e(*(undefined8 *)(param_1 + 0x650),auStack_1f8);
  pfVar10 = *(float **)(param_1 + 0x650);
  dStack_168 = (double)pfVar10[2] + *(double *)(pfVar10 + 0x48);
  uStack_198 = auStack_1f8._0_8_;
  uStack_190 = auStack_1f8._8_8_;
  uStack_188 = dStack_1e8;
  uStack_180 = dStack_1e0;
  auStack_178._8_4_ = SUB84((double)pfVar10[1] + *(double *)(pfVar10 + 0x46),0);
  auStack_178._0_8_ = (double)*pfVar10 + *(double *)(pfVar10 + 0x44);
  auStack_178._12_4_ = (int)((ulonglong)((double)pfVar10[1] + *(double *)(pfVar10 + 0x46)) >> 0x20);
  uStack_160 = 0;
  uStack_158 = 0x3ff0000000000000;
  uStack_150 = 0x3ff0000000000000;
  uStack_148 = 0x3ff0000000000000;
  uStack_140 = 0;
  bVar25 = 1 < *(byte *)((longlong)plVar8 + 0xc);
  dVar37 = -0.0;
  dVar38 = 1.0;
  uVar29 = 0;
  uVar31 = 0;
  uVar33 = 0;
  uVar34 = 0;
  if (bVar25 && plVar8 != (longlong *)0x0) {
    cVar6 = *(char *)(*(longlong *)(*plVar8 + 0x2c0) + 0xb + (longlong)(int)plVar8[1] * 0x10);
    if ((cVar6 == '\x04') || (cVar6 == '\x01')) {
      lVar19 = *(longlong *)(*plVar8 + 0x3f8);
      lVar20 = (longlong)(int)plVar8[1] * 0x20;
      puVar1 = (undefined4 *)(lVar19 + lVar20);
      uVar29 = *puVar1;
      uVar31 = puVar1[1];
      uVar33 = puVar1[2];
      uVar34 = puVar1[3];
      pdVar2 = (double *)(lVar19 + 0x10 + lVar20);
      dVar37 = *pdVar2 * -1.0;
      dVar38 = pdVar2[1] * 1.0;
    }
  }
  dVar40 = *(double *)(param_1 + 0x20);
  dVar11 = *(double *)(param_1 + 0x28);
  dVar13 = *(double *)(param_1 + 0x30);
  dVar12 = *(double *)(param_1 + 0x38);
  dVar4 = dVar40 * dVar37 * 1.0 +
          ((dVar38 * dVar11 - (double)CONCAT44(uVar31,uVar29) * dVar13 * -1.0) -
          dVar12 * (double)CONCAT44(uVar34,uVar33));
  dStack_1e8 = dVar12 * dVar37 * 1.0 +
               (double)CONCAT44(uVar34,uVar33) * dVar40 +
               (dVar38 * dVar13 - (double)CONCAT44(uVar31,uVar29) * dVar11 * 1.0);
  dStack_1e0 = dVar13 * dVar37 * -1.0 +
               (double)CONCAT44(uVar34,uVar33) * dVar11 +
               (dVar38 * dVar12 - (double)CONCAT44(uVar31,uVar29) * dVar40 * -1.0);
  if (bVar25 && plVar8 != (longlong *)0x0) {
    lVar19 = *plVar8;
    lVar20 = (longlong)(int)plVar8[1];
    cVar6 = *(char *)(*(longlong *)(lVar19 + 0x2c0) + 0xb + lVar20 * 0x10);
    if ((cVar6 == '\x04') || (cVar6 == '\x01')) {
      lVar23 = *(longlong *)(lVar19 + 0x3f8);
      lVar24 = lVar20 * 0x20;
      uVar30 = (undefined4)*(undefined8 *)(lVar23 + lVar24);
      uVar32 = (undefined4)((ulonglong)*(undefined8 *)(lVar23 + lVar24) >> 0x20);
      dVar44 = *(double *)(lVar23 + 8 + lVar24);
      dVar36 = *(double *)(lVar23 + 0x10 + lVar24);
      uVar5 = *(undefined8 *)(lVar23 + 0x18 + lVar24);
      uVar42 = (undefined4)uVar5;
      uVar43 = (undefined4)((ulonglong)uVar5 >> 0x20);
    }
    else {
      uVar42 = 0;
      uVar43 = 0x3ff00000;
      uVar30 = 0;
      uVar32 = 0;
      dVar44 = 0.0;
      dVar36 = 0.0;
    }
    dVar46 = *(double *)(param_1 + 0x40);
    dVar47 = *(double *)(param_1 + 0x48);
    uVar48 = (undefined4)*(undefined8 *)(param_1 + 0x50);
    uVar49 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x50) >> 0x20);
    if ((cVar6 != '\x04') && (cVar6 != '\x01')) goto LAB_140c2a717;
    lVar19 = *(longlong *)(lVar19 + 0x3e0);
    dVar51 = *(double *)(lVar19 + lVar20 * 0x18);
    uVar5 = *(undefined8 *)(lVar19 + 8 + lVar20 * 0x18);
    uVar54 = (undefined4)uVar5;
    uVar55 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar5 = *(undefined8 *)(lVar19 + 0x10 + lVar20 * 0x18);
    uVar56 = (undefined4)uVar5;
    uVar57 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  else {
    dVar46 = *(double *)(param_1 + 0x40);
    dVar47 = *(double *)(param_1 + 0x48);
    uVar48 = (undefined4)*(undefined8 *)(param_1 + 0x50);
    uVar49 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x50) >> 0x20);
    uVar42 = 0;
    uVar43 = 0x3ff00000;
    uVar30 = 0;
    uVar32 = 0;
    dVar44 = 0.0;
    dVar36 = 0.0;
LAB_140c2a717:
    dVar51 = 0.0;
    uVar54 = 0;
    uVar55 = 0;
    uVar56 = 0;
    uVar57 = 0;
  }
  dVar45 = (double)CONCAT44(uVar49,uVar48) - (double)CONCAT44(uVar57,uVar56);
  dVar47 = dVar47 - (double)CONCAT44(uVar55,uVar54);
  dVar46 = dVar46 - dVar51;
  dVar51 = dVar44 * dVar46 - (double)CONCAT44(uVar32,uVar30) * dVar47;
  dVar52 = (double)CONCAT44(uVar32,uVar30) * dVar45 - dVar36 * dVar46;
  dVar28 = dVar36 * dVar47 - dVar44 * dVar45;
  dVar51 = dVar51 + dVar51;
  dVar52 = dVar52 + dVar52;
  dVar28 = dVar28 + dVar28;
  dStack_1c8 = (dVar44 * dVar28 - (double)CONCAT44(uVar32,uVar30) * dVar52) +
               (double)CONCAT44(uVar43,uVar42) * dVar51 + dVar45;
  dStack_1d0 = ((double)CONCAT44(uVar32,uVar30) * dVar51 - dVar28 * dVar36) +
               (double)CONCAT44(uVar43,uVar42) * dVar52 + dVar47;
  dStack_1d8 = (dVar52 * dVar36 - dVar51 * dVar44) +
               (double)CONCAT44(uVar43,uVar42) * dVar28 + dVar46;
  auStack_1f8._8_4_ = SUB84(dVar4,0);
  auStack_1f8._0_8_ =
       dVar11 * dVar37 * -1.0 +
       ((dVar38 * dVar40 - (double)CONCAT44(uVar31,uVar29) * dVar12 * 1.0) -
       dVar13 * (double)CONCAT44(uVar34,uVar33));
  auStack_1f8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  uStack_1c0 = 0;
  uStack_1b8 = 0x3ff0000000000000;
  uStack_1b0 = 0x3ff0000000000000;
  uStack_1a8 = 0x3ff0000000000000;
  uStack_1a0 = 0;
  bVar25 = 1 < *(byte *)((longlong)plVar9 + 0xc);
  dVar37 = -0.0;
  dVar38 = 1.0;
  uVar29 = 0;
  uVar31 = 0;
  uVar33 = 0;
  uVar34 = 0;
  if (bVar25 && plVar9 != (longlong *)0x0) {
    cVar6 = *(char *)(*(longlong *)(*plVar9 + 0x2c0) + 0xb + (longlong)(int)plVar9[1] * 0x10);
    if ((cVar6 == '\x04') || (cVar6 == '\x01')) {
      lVar19 = *(longlong *)(*plVar9 + 0x3f8);
      lVar20 = (longlong)(int)plVar9[1] * 0x20;
      puVar1 = (undefined4 *)(lVar19 + lVar20);
      uVar29 = *puVar1;
      uVar31 = puVar1[1];
      uVar33 = puVar1[2];
      uVar34 = puVar1[3];
      pdVar2 = (double *)(lVar19 + 0x10 + lVar20);
      dVar37 = *pdVar2 * -1.0;
      dVar38 = pdVar2[1] * 1.0;
    }
  }
  dVar40 = *(double *)(param_1 + 0x80);
  dVar11 = *(double *)(param_1 + 0x88);
  dVar13 = *(double *)(param_1 + 0x90);
  dVar12 = *(double *)(param_1 + 0x98);
  dVar4 = dVar40 * dVar37 * 1.0 +
          ((dVar38 * dVar11 - (double)CONCAT44(uVar31,uVar29) * dVar13 * -1.0) -
          dVar12 * (double)CONCAT44(uVar34,uVar33));
  dStack_248 = dVar12 * dVar37 * 1.0 +
               (double)CONCAT44(uVar34,uVar33) * dVar40 +
               (dVar38 * dVar13 - (double)CONCAT44(uVar31,uVar29) * dVar11 * 1.0);
  dStack_240 = dVar13 * dVar37 * -1.0 +
               (double)CONCAT44(uVar34,uVar33) * dVar11 +
               (dVar38 * dVar12 - (double)CONCAT44(uVar31,uVar29) * dVar40 * -1.0);
  if (bVar25 && plVar9 != (longlong *)0x0) {
    lVar19 = *plVar9;
    lVar20 = (longlong)(int)plVar9[1];
    cVar6 = *(char *)(*(longlong *)(lVar19 + 0x2c0) + 0xb + lVar20 * 0x10);
    if ((cVar6 == '\x04') || (cVar6 == '\x01')) {
      lVar23 = *(longlong *)(lVar19 + 0x3f8);
      lVar24 = lVar20 * 0x20;
      uVar30 = (undefined4)*(undefined8 *)(lVar23 + lVar24);
      uVar32 = (undefined4)((ulonglong)*(undefined8 *)(lVar23 + lVar24) >> 0x20);
      dVar44 = *(double *)(lVar23 + 8 + lVar24);
      dVar36 = *(double *)(lVar23 + 0x10 + lVar24);
      dVar47 = *(double *)(lVar23 + 0x18 + lVar24);
    }
    else {
      dVar36 = 0.0;
      dVar47 = 1.0;
      dVar44 = 0.0;
      uVar30 = 0;
      uVar32 = 0;
    }
    dVar45 = *(double *)(param_1 + 0xa0);
    dVar51 = *(double *)(param_1 + 0xa8);
    dVar46 = *(double *)(param_1 + 0xb0);
    if ((cVar6 != '\x04') && (cVar6 != '\x01')) goto LAB_140c2a930;
    lVar19 = *(longlong *)(lVar19 + 0x3e0);
    dVar28 = *(double *)(lVar19 + lVar20 * 0x18);
    uVar5 = *(undefined8 *)(lVar19 + 8 + lVar20 * 0x18);
    uVar48 = (undefined4)uVar5;
    uVar49 = (undefined4)((ulonglong)uVar5 >> 0x20);
    uVar5 = *(undefined8 *)(lVar19 + 0x10 + lVar20 * 0x18);
    uVar42 = (undefined4)uVar5;
    uVar43 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  else {
    dVar45 = *(double *)(param_1 + 0xa0);
    dVar51 = *(double *)(param_1 + 0xa8);
    dVar46 = *(double *)(param_1 + 0xb0);
    dVar36 = 0.0;
    dVar47 = 1.0;
    dVar44 = 0.0;
    uVar30 = 0;
    uVar32 = 0;
LAB_140c2a930:
    uVar43 = 0;
    uVar42 = 0;
    uVar48 = 0;
    uVar49 = 0;
    dVar28 = 0.0;
  }
  dVar46 = dVar46 - (double)CONCAT44(uVar43,uVar42);
  dVar51 = dVar51 - (double)CONCAT44(uVar49,uVar48);
  dVar45 = dVar45 - dVar28;
  dVar53 = dVar44 * dVar45 - (double)CONCAT44(uVar32,uVar30) * dVar51;
  dVar28 = (double)CONCAT44(uVar32,uVar30) * dVar46 - dVar36 * dVar45;
  dVar52 = dVar36 * dVar51 - dVar44 * dVar46;
  dVar53 = dVar53 + dVar53;
  dVar28 = dVar28 + dVar28;
  dVar52 = dVar52 + dVar52;
  dStack_228 = (dVar44 * dVar52 - (double)CONCAT44(uVar32,uVar30) * dVar28) +
               dVar47 * dVar53 + dVar46;
  dVar46 = ((double)CONCAT44(uVar32,uVar30) * dVar53 - dVar52 * dVar36) + dVar47 * dVar28 + dVar51;
  auStack_258._8_4_ = SUB84(dVar4,0);
  auStack_258._0_8_ =
       dVar11 * dVar37 * -1.0 +
       ((dVar38 * dVar40 - (double)CONCAT44(uVar31,uVar29) * dVar12 * 1.0) -
       dVar13 * (double)CONCAT44(uVar34,uVar33));
  auStack_258._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  auStack_238._8_4_ = SUB84(dVar46,0);
  auStack_238._0_8_ = (dVar28 * dVar36 - dVar53 * dVar44) + dVar47 * dVar52 + dVar45;
  auStack_238._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
  uStack_220 = 0;
  uStack_218 = 0x3ff0000000000000;
  uStack_210 = 0x3ff0000000000000;
  uStack_208 = 0x3ff0000000000000;
  uStack_200 = 0;
  FUN_1447dc19e(auStack_1f8,auStack_2b8,&uStack_138);
  puVar21 = auStack_2b8;
  puVar22 = (undefined8 *)(param_1 + 0x170);
  for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
    *puVar22 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar22 = puVar22 + 1;
  }
  FUN_1447dc19e(auStack_258,auStack_2b8,&uStack_198);
  puVar21 = auStack_2b8;
  puVar22 = (undefined8 *)(param_1 + 0x1d0);
  for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
    *puVar22 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar22 = puVar22 + 1;
  }
LAB_140c2a12b:
  *(undefined4 *)(param_1 + 0x16c) = 0xffffffff;
  if (0 < *(int *)(param_1 + 0x5b0)) {
    lVar19 = 0x24;
    lVar20 = 0;
    do {
      lVar23 = *(longlong *)(param_1 + 0x5a8);
      if (*(longlong *)(param_1 + 0x5a8) == 0) {
        lVar23 = param_1 + 0x3f8;
      }
      dVar35 = (double)*(float *)(lVar23 + -0x1c + lVar19);
      dVar39 = (double)*(float *)(lVar23 + -0x20 + lVar19);
      dVar11 = (double)*(float *)(lVar23 + -0x24 + lVar19);
      dVar37 = *(double *)(param_1 + 0x188);
      dVar53 = *(double *)(param_1 + 0x170);
      dVar14 = *(double *)(param_1 + 0x178);
      dVar15 = *(double *)(param_1 + 0x180);
      dVar16 = *(double *)(param_1 + 0x1d0);
      dVar17 = *(double *)(param_1 + 0x1d8);
      dVar18 = *(double *)(param_1 + 0x1e0);
      dVar50 = dVar11 * dVar15 - dVar53 * dVar35;
      dVar40 = dVar39 * dVar53 - dVar14 * dVar11;
      dVar41 = dVar35 * dVar14 - dVar15 * dVar39;
      dVar41 = dVar41 + dVar41;
      dVar50 = dVar50 + dVar50;
      dVar40 = dVar40 + dVar40;
      dStack_2c8 = (double)*(float *)(lVar23 + -0x10 + lVar19);
      uStack_2c0 = 0;
      dVar12 = (double)*(float *)(lVar23 + -0x14 + lVar19);
      dVar27 = (double)*(float *)(lVar23 + -0x18 + lVar19);
      dVar38 = *(double *)(param_1 + 0x1e8);
      dVar4 = *(double *)(param_1 + 0x1e8);
      dVar44 = dVar12 * dVar16 - dVar17 * dVar27;
      dVar36 = dStack_2c8 * dVar17 - dVar18 * dVar12;
      dVar46 = dVar27 * dVar18 - dStack_2c8 * dVar16;
      dVar36 = dVar36 + dVar36;
      dVar46 = dVar46 + dVar46;
      dVar44 = dVar44 + dVar44;
      dVar47 = (double)*(float *)(lVar23 + -4 + lVar19);
      dVar51 = (double)*(float *)(lVar23 + -8 + lVar19);
      dVar52 = (double)*(float *)(lVar23 + -0xc + lVar19);
      dVar13 = dVar51 * dVar16 - dVar17 * dVar52;
      dVar45 = dVar47 * dVar17 - dVar18 * dVar51;
      dVar28 = dVar52 * dVar18 - dVar47 * dVar16;
      dVar45 = dVar45 + dVar45;
      dVar28 = dVar28 + dVar28;
      dVar13 = dVar13 + dVar13;
      fVar26 = (float)(((dVar13 * dVar17 - dVar28 * dVar18) + dVar38 * dVar45 + dVar52) *
                       (((dVar40 * dVar14 - dVar50 * dVar15) + dVar37 * dVar41 + dVar11 +
                        *(double *)(param_1 + 400)) -
                       ((dVar44 * dVar17 - dVar46 * dVar18) + dVar38 * dVar36 + dVar27 +
                       *(double *)(param_1 + 0x1f0))) +
                       (((dVar15 * dVar41 - dVar53 * dVar40) +
                         *(double *)(param_1 + 0x188) * dVar50 + dVar39 +
                        *(double *)(param_1 + 0x198)) -
                       ((dVar18 * dVar36 - dVar16 * dVar44) + dVar4 * dVar46 + dVar12 +
                       *(double *)(param_1 + 0x1f8))) *
                       ((dVar18 * dVar45 - dVar16 * dVar13) + dVar4 * dVar28 + dVar51) +
                      (dVar13 * dVar38 + dVar47 + (dVar28 * dVar16 - dVar45 * dVar17)) *
                      ((dVar40 * dVar37 + dVar35 + (dVar50 * dVar53 - dVar41 * dVar14) +
                       *(double *)(param_1 + 0x1a0)) -
                      (dVar44 * dVar38 + dStack_2c8 + (dVar46 * dVar16 - dVar36 * dVar17) +
                      *(double *)(param_1 + 0x200))));
      *(float *)(lVar23 + lVar19) = fVar26;
      fVar3 = INFINITY;
      if ((longlong)*(int *)(param_1 + 0x16c) != -1) {
        lVar23 = *(longlong *)(param_1 + 0x5a8);
        if (*(longlong *)(param_1 + 0x5a8) == 0) {
          lVar23 = param_1 + 0x3f8;
        }
        fVar3 = *(float *)(lVar23 + 0x24 + (longlong)*(int *)(param_1 + 0x16c) * 0x6c);
      }
      if (fVar26 < fVar3) {
        *(int *)(param_1 + 0x16c) = (int)lVar20;
      }
      lVar20 = lVar20 + 1;
      lVar19 = lVar19 + 0x6c;
    } while (lVar20 < *(int *)(param_1 + 0x5b0));
  }
  if ((uStack_d0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d0d381 FUN_146d0d381 body=2207 status=ok
// SIG undefined FUN_146d0d381(void)

double * FUN_146d0d381(double *param_1,longlong param_2,longlong param_3,undefined8 param_4,
                      undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  uint uVar7;
  double *pdVar8;
  longlong lVar9;
  longlong lVar10;
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
  uint uVar22;
  undefined1 local_2f8 [40];
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double adStack_258 [24];
  double local_198 [6];
  double local_168;
  double local_158;
  double dStack_150;
  double local_148;
  double adStack_140 [14];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)local_2f8;
  param_1[9] = 1.79769313486232e+308;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  FUN_1449437a2(param_4,local_198,param_5);
  dVar19 = local_198[5];
  dVar17 = local_198[4];
  dVar4 = local_198[3];
  dVar3 = local_198[2];
  dVar2 = local_198[1];
  dVar5 = local_198[0];
  local_2b8 = local_198[4];
  dStack_2b0 = local_198[5];
  local_268 = *(double *)(param_2 + 0x38);
  dStack_260 = *(double *)(param_2 + 0x40);
  dVar16 = local_158 * local_268;
  dVar11 = dStack_150 * dStack_260;
  dVar15 = *(double *)(param_2 + 0x48) * local_148;
  dVar12 = dVar11 * local_198[0] - local_198[1] * dVar16;
  dVar18 = dVar15 * local_198[1] - local_198[2] * dVar11;
  dVar20 = dVar16 * local_198[2] - local_198[0] * dVar15;
  dVar18 = dVar18 + dVar18;
  dVar20 = dVar20 + dVar20;
  dVar12 = dVar12 + dVar12;
  dVar21 = dVar20 * local_198[0];
  dVar13 = dVar18 * local_198[1];
  dVar14 = local_198[0] * dVar12;
  local_2c8 = *(double *)(param_2 + 0x48);
  local_2d0 = *(double *)(param_2 + 0x28);
  local_2a0 = *(double *)(param_2 + 0x30);
  local_2c0 = *(double *)(param_2 + 0x38) - *(double *)(param_2 + 0x20);
  local_2a8 = *(double *)(param_2 + 0x40);
  local_198[0] = (dVar12 * local_198[1] - dVar20 * local_198[2]) + local_198[3] * dVar18 + dVar16 +
                 local_198[4];
  local_198[1] = (local_198[2] * dVar18 - dVar14) + local_198[3] * dVar20 + dVar11 + local_198[5];
  local_198[2] = dVar12 * local_198[3] + dVar15 + (dVar21 - dVar13) + local_168;
  local_278 = *(double *)(param_2 + 0x20);
  dStack_270 = *(double *)(param_2 + 0x28);
  local_288 = local_158;
  dStack_280 = dStack_150;
  dVar13 = local_158 * local_278;
  dVar14 = dStack_150 * dStack_270;
  local_298 = local_148;
  dStack_290 = adStack_140[0];
  dVar11 = *(double *)(param_2 + 0x30) * local_148;
  dVar15 = dVar14 * dVar5 - dVar2 * dVar13;
  dVar12 = dVar11 * dVar2 - dVar3 * dVar14;
  dVar18 = dVar13 * dVar3 - dVar5 * dVar11;
  dVar12 = dVar12 + dVar12;
  dVar18 = dVar18 + dVar18;
  dVar20 = local_198[3] * dVar18;
  dVar15 = dVar15 + dVar15;
  dVar16 = dVar15 * local_198[3];
  local_198[3] = (dVar15 * dVar2 - dVar18 * dVar3) + local_198[3] * dVar12 + dVar13 + local_198[4];
  local_198[4] = (dVar3 * dVar12 - dVar5 * dVar15) + dVar20 + dVar14 + local_198[5];
  local_198[5] = dVar16 + dVar11 + (dVar18 * dVar5 - dVar12 * dVar2) + local_168;
  iVar6 = 0;
  pdVar8 = adStack_140;
  do {
    dVar16 = 0.0;
    uVar7 = 0x3ff00000;
    dVar15 = 0.0;
    uVar22 = 0;
    if (iVar6 != 0) {
      uVar7 = 0;
      if (iVar6 == 1) {
        dVar15 = 1.0;
      }
      else {
        uVar22 = 0x3ff00000;
      }
    }
    dVar11 = ((double)((ulonglong)uVar7 << 0x20) * local_2c0 + local_278) * local_158;
    dVar15 = (dVar15 * (local_2a8 - local_2d0) + local_2d0) * dStack_150;
    dVar14 = ((double)((ulonglong)uVar22 << 0x20) * (local_2c8 - local_2a0) + local_2a0) * local_148
    ;
    dVar12 = dVar15 * dVar5 - dVar2 * dVar11;
    dVar18 = dVar14 * dVar2 - dVar3 * dVar15;
    dVar13 = dVar11 * dVar3 - dVar5 * dVar14;
    dVar18 = dVar18 + dVar18;
    dVar13 = dVar13 + dVar13;
    dVar12 = dVar12 + dVar12;
    dVar15 = (dVar3 * dVar18 - dVar5 * dVar12) + dVar4 * dVar13 + dVar15 + dVar19;
    auVar1._8_4_ = SUB84(dVar15,0);
    auVar1._0_8_ = (dVar12 * dVar2 - dVar13 * dVar3) + dVar4 * dVar18 + dVar11 + dVar17;
    auVar1._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    *(undefined1 (*) [16])(pdVar8 + -5) = auVar1;
    pdVar8[-3] = dVar12 * dVar4 + dVar14 + (dVar13 * dVar5 - dVar18 * dVar2) + local_168;
    uVar7 = 0x3ff00000;
    dVar15 = 0.0;
    if (iVar6 != 0) {
      uVar7 = 0;
      if (iVar6 == 1) {
        dVar16 = 1.0;
      }
      else {
        dVar15 = 1.0;
      }
    }
    dVar12 = (local_268 - (double)((ulonglong)uVar7 << 0x20) * local_2c0) * local_158;
    dVar18 = (local_2a8 - dVar16 * (local_2a8 - local_2d0)) * dStack_150;
    dVar13 = (local_2c8 - dVar15 * (local_2c8 - local_2a0)) * local_148;
    dVar15 = dVar18 * dVar5 - dVar2 * dVar12;
    dVar16 = dVar13 * dVar2 - dVar3 * dVar18;
    dVar11 = dVar12 * dVar3 - dVar5 * dVar13;
    dVar16 = dVar16 + dVar16;
    dVar11 = dVar11 + dVar11;
    dVar15 = dVar15 + dVar15;
    pdVar8[-2] = (dVar15 * dVar2 - dVar11 * dVar3) + dVar4 * dVar16 + dVar12 + dVar17;
    pdVar8[-1] = (dVar3 * dVar16 - dVar5 * dVar15) + dVar4 * dVar11 + dVar18 + dVar19;
    *pdVar8 = dVar15 * dVar4 + dVar13 + (dVar11 * dVar5 - dVar16 * dVar2) + local_168;
    iVar6 = iVar6 + 1;
    pdVar8 = pdVar8 + 6;
  } while (iVar6 != 3);
  dVar15 = *(double *)(param_3 + 0x38);
  dVar16 = *(double *)(param_3 + 0x40);
  dVar11 = *(double *)(param_3 + 0x48);
  dVar12 = *(double *)(param_3 + 0x20);
  dVar18 = *(double *)(param_3 + 0x28);
  dVar13 = *(double *)(param_3 + 0x30);
  dVar14 = 1.79769313486232e+308;
  lVar9 = 0;
  uVar7 = 0;
  do {
    dVar20 = (*(double *)((longlong)local_198 + lVar9 + 8) - dVar18) * dVar16 +
             (*(double *)((longlong)local_198 + lVar9) - dVar12) * dVar15 +
             (*(double *)((longlong)local_198 + lVar9 + 0x10) - dVar13) * dVar11;
    if (dVar20 < dVar14 + 9.999999747378752e-05) {
      if (dVar20 <= dVar14 + -9.999999747378752e-05) {
        uVar7 = 0;
      }
      param_1[5] = *(double *)((longlong)local_198 + lVar9 + 0x10);
      dVar14 = *(double *)((longlong)local_198 + lVar9 + 8);
      param_1[3] = *(double *)((longlong)local_198 + lVar9);
      param_1[4] = dVar14;
      param_1[8] = *(double *)(param_3 + 0x48);
      dVar14 = *(double *)(param_3 + 0x40);
      param_1[6] = *(double *)(param_3 + 0x38);
      param_1[7] = dVar14;
      lVar10 = (longlong)(int)uVar7;
      uVar7 = uVar7 + 1;
      adStack_258[lVar10 * 3 + 2] = *(double *)((longlong)local_198 + lVar9 + 0x10);
      dVar14 = *(double *)((longlong)local_198 + lVar9 + 8);
      adStack_258[lVar10 * 3] = *(double *)((longlong)local_198 + lVar9);
      adStack_258[lVar10 * 3 + 1] = dVar14;
      dVar14 = dVar20;
    }
    lVar9 = lVar9 + 0x18;
  } while (lVar9 != 0xc0);
  param_1[9] = dVar14;
  if ((int)uVar7 < 2) {
    dVar15 = param_1[5];
  }
  else {
    dVar15 = 0.0;
    lVar9 = 0;
    dVar16 = 0.0;
    dVar11 = 0.0;
    do {
      dVar11 = dVar11 + *(double *)((longlong)adStack_258 + lVar9);
      dVar16 = dVar16 + *(double *)((longlong)adStack_258 + lVar9 + 8);
      dVar15 = dVar15 + *(double *)((longlong)adStack_258 + lVar9 + 0x10);
      lVar9 = lVar9 + 0x18;
    } while ((ulonglong)uVar7 * 0x18 != lVar9);
    dVar12 = (double)(int)uVar7;
    dVar15 = dVar15 / dVar12;
    param_1[3] = dVar11 / dVar12;
    param_1[4] = dVar16 / dVar12;
  }
  dVar17 = param_1[3] - dVar17;
  dVar19 = param_1[4] - dVar19;
  local_168 = dVar15 - local_168;
  dVar16 = -dVar5;
  dVar2 = -dVar2;
  dVar3 = dVar3 * -1.0;
  dVar4 = dVar4 * 1.0;
  dVar18 = dVar17 * dVar3 - dVar16 * local_168;
  dVar11 = dVar19 * dVar16 - dVar2 * dVar17;
  dVar12 = local_168 * dVar2 - dVar3 * dVar19;
  dVar12 = dVar12 + dVar12;
  dVar18 = dVar18 + dVar18;
  dVar11 = dVar11 + dVar11;
  *param_1 = (dVar11 * dVar2 - dVar18 * dVar3) + dVar4 * dVar12 + dVar17;
  param_1[1] = dVar5 * dVar11 + dVar3 * dVar12 + dVar4 * dVar18 + dVar19;
  param_1[2] = dVar4 * dVar11 + local_168 + (dVar18 * dVar16 - dVar12 * dVar2);
  param_1[3] = param_1[3] - param_1[6] * dVar14;
  param_1[4] = param_1[4] - param_1[7] * dVar14;
  param_1[5] = dVar15 - dVar14 * param_1[8];
  if ((local_d0 ^ (ulonglong)local_2f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0dc21 FUN_146d0dc21 body=156 status=ok
// SIG undefined FUN_146d0dc21(void)

void FUN_146d0dc21(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined1 local_70 [88];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte *)(param_6 + 0x374) & 4) != 0) {
    local_78 = param_6;
    FUN_146d0cbb4(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  local_78 = param_4;
  FUN_146d4ac07(local_70,param_1,param_2,param_3);
  FUN_146d0d32b(param_6,local_70);
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146d0dcbe FUN_146d0dcbe body=470 status=ok
// SIG undefined FUN_146d0dcbe(void)

undefined1 (*) [16] FUN_146d0dcbe(undefined1 (*param_1) [16],longlong *param_2,double *param_3)

{
  undefined4 *puVar1;
  double *pdVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar9 = *param_3;
  dVar10 = param_3[1];
  dVar11 = param_3[2];
  dVar12 = param_3[3];
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  uVar17 = 0;
  dVar18 = -0.0;
  dVar19 = 1.0;
  if ((param_2 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_2 + 0xc))) {
    cVar3 = *(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xb + (longlong)(int)param_2[1] * 0x10);
    if ((cVar3 == '\x04') || (cVar3 == '\x01')) {
      lVar4 = *(longlong *)(*param_2 + 0x3f8);
      lVar13 = (longlong)(int)param_2[1] * 0x20;
      puVar1 = (undefined4 *)(lVar4 + lVar13);
      uVar14 = *puVar1;
      uVar15 = puVar1[1];
      uVar16 = puVar1[2];
      uVar17 = puVar1[3];
      pdVar2 = (double *)(lVar4 + 0x10 + lVar13);
      dVar18 = *pdVar2 * -1.0;
      dVar19 = pdVar2[1] * 1.0;
    }
  }
  dVar8 = dVar9 * dVar18 * 1.0 +
          ((dVar10 * dVar19 - dVar11 * (double)CONCAT44(uVar15,uVar14) * -1.0) -
          dVar12 * (double)CONCAT44(uVar17,uVar16));
  dVar6 = dVar11 * dVar18 * -1.0 +
          (double)CONCAT44(uVar17,uVar16) * dVar10 +
          (dVar19 * dVar12 - (double)CONCAT44(uVar15,uVar14) * dVar9 * -1.0);
  local_a8 = *(undefined4 *)(param_3 + 4);
  uStack_a4 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_a0 = *(undefined4 *)(param_3 + 5);
  uStack_9c = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_98 = param_3[6];
  FUN_146d46d88(&local_88);
  auVar7._8_4_ = SUB84(dVar8,0);
  auVar7._0_8_ = dVar10 * dVar18 * -1.0 +
                 ((dVar9 * dVar19 - dVar12 * (double)CONCAT44(uVar15,uVar14) * 1.0) -
                 dVar11 * (double)CONCAT44(uVar17,uVar16));
  auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  *param_1 = auVar7;
  auVar5._8_4_ = SUB84(dVar6,0);
  auVar5._0_8_ = dVar12 * dVar18 * 1.0 +
                 (double)CONCAT44(uVar17,uVar16) * dVar9 +
                 (dVar19 * dVar11 - (double)CONCAT44(uVar15,uVar14) * dVar10 * 1.0);
  auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  param_1[1] = auVar5;
  *(undefined4 *)param_1[2] = local_88;
  *(undefined4 *)(param_1[2] + 4) = uStack_84;
  *(int *)(param_1[2] + 8) = (int)uStack_80;
  *(int *)(param_1[2] + 0xc) = (int)((ulonglong)uStack_80 >> 0x20);
  *(undefined8 *)param_1[3] = local_78;
  *(undefined8 *)(param_1[3] + 8) = 0;
  *(undefined8 *)param_1[4] = 0x3ff0000000000000;
  *(undefined8 *)(param_1[4] + 8) = 0x3ff0000000000000;
  *(undefined8 *)param_1[5] = 0x3ff0000000000000;
  *(undefined8 *)(param_1[5] + 8) = 0;
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0de96 FUN_146d0de96 body=147 status=ok
// SIG undefined FUN_146d0de96(void)

undefined8 * FUN_146d0de96(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = param_2;
  FUN_144b017f6(&local_28,&local_48);
  puVar4 = (undefined4 *)FUN_146d46f8e(param_2);
  *param_1 = local_48;
  param_1[1] = uStack_40;
  param_1[2] = local_38;
  param_1[3] = uStack_30;
  uVar3 = puVar4[1];
  uVar1 = *(undefined8 *)(puVar4 + 2);
  uVar2 = *(undefined8 *)(puVar4 + 4);
  *(undefined4 *)(param_1 + 4) = *puVar4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *(int *)(param_1 + 5) = (int)uVar1;
  *(int *)((longlong)param_1 + 0x2c) = (int)((ulonglong)uVar1 >> 0x20);
  param_1[6] = uVar2;
  param_1[7] = 0;
  param_1[8] = 0x3ff0000000000000;
  param_1[9] = 0x3ff0000000000000;
  param_1[10] = 0x3ff0000000000000;
  param_1[0xb] = 0;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0df2a FUN_146d0df2a body=453 status=ok
// SIG undefined FUN_146d0df2a(void)

void FUN_146d0df2a(longlong *param_1,double *param_2,double *param_3,double param_4,double *param_5,
                  double *param_6)

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
  undefined1 auStack_b8 [40];
  undefined1 local_90 [24];
  double local_78;
  double dStack_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = *param_2;
  dVar4 = param_2[1];
  dVar5 = param_2[2];
  dVar7 = param_2[3];
  dVar8 = dVar2 * dVar3 - dVar1 * dVar4;
  dVar9 = param_3[2] * dVar4 - dVar2 * dVar5;
  dVar10 = dVar1 * dVar5 - dVar3 * param_3[2];
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar8 = dVar8 + dVar8;
  dVar6 = dVar5 * dVar9 - dVar3 * dVar8;
  local_78 = (dVar8 * dVar4 - dVar10 * dVar5) + dVar7 * dVar9 + dVar1 + param_2[4];
  dStack_70 = dVar6 + param_2[3] * dVar10 + dVar2 + param_2[5];
  local_68 = dVar8 * dVar7 + param_3[2] + (dVar10 * dVar3 - dVar9 * dVar4) + param_2[6];
  dVar7 = (double)(**(code **)(*param_1 + 0x70))(dVar6,&local_78,local_90);
  dVar7 = dVar7 - param_4;
  if (dVar7 < -9.999999747378752e-05) {
    *param_6 = local_78 * dVar7 + *param_6;
    param_6[1] = dStack_70 * dVar7 + param_6[1];
    param_6[2] = local_68 * dVar7 + param_6[2];
    *param_5 = dVar7 + *param_5;
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0e0f0 FUN_146d0e0f0 body=152 status=ok
// SIG undefined FUN_146d0e0f0(void)

longlong FUN_146d0e0f0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  
  cVar1 = *(char *)(param_4 + 0x1c);
  if (param_4 == 0 || cVar1 != 'H') {
    if (cVar1 == -0x78 && param_4 != 0) {
      FUN_146d0e51d(param_1);
    }
    else if (cVar1 == '\b' && param_4 != 0) {
      FUN_146d0e8b5(param_1);
    }
    else {
      *(undefined8 *)(param_1 + 0x48) = 0x7fefffffffffffff;
      *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x54) = 0;
    }
  }
  else {
    FUN_146d0e188(param_1);
  }
  return param_1;
}



// FUNCTION 146d0e188 FUN_146d0e188 body=916 status=ok
// SIG undefined FUN_146d0e188(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_146d0e188(double *param_1,longlong param_2,undefined8 param_3,longlong param_4,
                      undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auStack_218 [32];
  double *local_1f8;
  double *local_1f0;
  undefined4 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 local_180 [4];
  undefined1 local_17c [4];
  double local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined1 local_e8 [16];
  double local_d8;
  longlong *local_c0;
  code *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_218;
  param_1[9] = 1.79769313486232e+308;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  if (0 < *(int *)(*(longlong *)(param_4 + 0x28) + 0x28)) {
    FUN_1449437a2(param_3,&local_128,param_5);
    local_1c0 = &local_198;
    local_198 = 0x3ff0000000000000;
    local_190 = 0;
    uStack_188 = 0;
    local_a8 = &local_1a8;
    local_1a0 = *(undefined8 *)(param_2 + 0x10);
    local_c0 = &local_1b0;
    local_a0 = &LAB_146d46fd8;
    local_b8 = FUN_146d47070;
    local_b0 = 0;
    local_1b8 = 0x3f50624de0000000;
    local_1d0 = 0;
    uStack_1c8 = 0;
    local_1d8 = local_180;
    local_1e0 = local_17c;
    local_1e8 = &local_170;
    local_1f0 = &local_158;
    local_1f8 = &local_140;
    local_1b0 = param_4;
    local_1a8 = param_2;
    local_98 = local_1a0;
    cVar4 = FUN_146d0f62b(&local_c0,&local_a8,&local_128,&local_178);
    if (cVar4 != '\0') {
      local_158 = local_158 - local_108;
      dStack_150 = dStack_150 - dStack_100;
      local_148 = local_148 - local_f8;
      local_118 = local_118 * -1.0;
      dStack_110 = dStack_110 * 1.0;
      dVar1 = -local_128;
      dStack_120 = -dStack_120;
      dVar6 = local_158 * local_118 - dVar1 * local_148;
      dVar2 = dStack_150 * dVar1 - local_158 * dStack_120;
      dVar3 = local_148 * dStack_120 - dStack_150 * local_118;
      dVar3 = dVar3 + dVar3;
      dVar6 = dVar6 + dVar6;
      dVar2 = dVar2 + dVar2;
      auVar5 = divpd(_DAT_149934d80,local_e8);
      *param_1 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_e8._0_8_)) & auVar5._0_8_) *
                 ((dVar2 * dStack_120 - dVar6 * local_118) + dStack_110 * dVar3 + local_158);
      param_1[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_e8._8_8_)) & auVar5._8_8_)
                   * (local_128 * dVar2 + local_118 * dVar3 + dStack_110 * dVar6 + dStack_150);
      param_1[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_d8)) &
                           (ulonglong)(1.0 / local_d8)) *
                   (dStack_110 * dVar2 + local_148 + (dVar6 * dVar1 - dVar3 * dStack_120));
      param_1[3] = local_140;
      param_1[4] = dStack_138;
      param_1[5] = local_130;
      *(undefined4 *)(param_1 + 6) = local_170;
      *(undefined4 *)((longlong)param_1 + 0x34) = uStack_16c;
      *(undefined4 *)(param_1 + 7) = uStack_168;
      *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_164;
      param_1[8] = local_160;
      param_1[9] = -local_178;
    }
  }
  if ((local_90 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0e51d FUN_146d0e51d body=919 status=ok
// SIG undefined FUN_146d0e51d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_146d0e51d(double *param_1,longlong param_2,undefined8 param_3,longlong param_4,
                      undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auStack_218 [32];
  double *local_1f8;
  double *local_1f0;
  undefined4 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 local_180 [4];
  undefined1 local_17c [4];
  double local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined1 local_e8 [16];
  double local_d8;
  longlong *local_c0;
  code *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_218;
  param_1[9] = 1.79769313486232e+308;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  if (0 < *(int *)(*(longlong *)(param_4 + 0x88) + 0x28)) {
    FUN_1449437a2(param_3,&local_128,param_5);
    local_1c0 = &local_198;
    local_198 = 0x3ff0000000000000;
    local_190 = 0;
    uStack_188 = 0;
    local_a8 = &local_1a8;
    local_1a0 = *(undefined8 *)(param_2 + 0x10);
    local_c0 = &local_1b0;
    local_a0 = &LAB_146d46fd8;
    local_b8 = FUN_146d470de;
    local_b0 = 0;
    local_1b8 = 0x3f50624de0000000;
    local_1d0 = 0;
    uStack_1c8 = 0;
    local_1d8 = local_180;
    local_1e0 = local_17c;
    local_1e8 = &local_170;
    local_1f0 = &local_158;
    local_1f8 = &local_140;
    local_1b0 = param_4;
    local_1a8 = param_2;
    local_98 = local_1a0;
    cVar4 = FUN_146d0f62b(&local_c0,&local_a8,&local_128,&local_178);
    if (cVar4 != '\0') {
      local_158 = local_158 - local_108;
      dStack_150 = dStack_150 - dStack_100;
      local_148 = local_148 - local_f8;
      local_118 = local_118 * -1.0;
      dStack_110 = dStack_110 * 1.0;
      dVar1 = -local_128;
      dStack_120 = -dStack_120;
      dVar6 = local_158 * local_118 - dVar1 * local_148;
      dVar2 = dStack_150 * dVar1 - local_158 * dStack_120;
      dVar3 = local_148 * dStack_120 - dStack_150 * local_118;
      dVar3 = dVar3 + dVar3;
      dVar6 = dVar6 + dVar6;
      dVar2 = dVar2 + dVar2;
      auVar5 = divpd(_DAT_149934d80,local_e8);
      *param_1 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_e8._0_8_)) & auVar5._0_8_) *
                 ((dVar2 * dStack_120 - dVar6 * local_118) + dStack_110 * dVar3 + local_158);
      param_1[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_e8._8_8_)) & auVar5._8_8_)
                   * (local_128 * dVar2 + local_118 * dVar3 + dStack_110 * dVar6 + dStack_150);
      param_1[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_d8)) &
                           (ulonglong)(1.0 / local_d8)) *
                   (dStack_110 * dVar2 + local_148 + (dVar6 * dVar1 - dVar3 * dStack_120));
      param_1[3] = local_140;
      param_1[4] = dStack_138;
      param_1[5] = local_130;
      *(undefined4 *)(param_1 + 6) = local_170;
      *(undefined4 *)((longlong)param_1 + 0x34) = uStack_16c;
      *(undefined4 *)(param_1 + 7) = uStack_168;
      *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_164;
      param_1[8] = local_160;
      param_1[9] = -local_178;
    }
  }
  if ((local_90 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0e8b5 FUN_146d0e8b5 body=913 status=ok
// SIG undefined FUN_146d0e8b5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_146d0e8b5(double *param_1,longlong param_2,undefined8 param_3,longlong param_4,
                      undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auStack_218 [32];
  double *local_1f8;
  double *local_1f0;
  undefined4 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 *local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 local_180 [4];
  undefined1 local_17c [4];
  double local_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined1 local_e8 [16];
  double local_d8;
  longlong *local_c0;
  code *local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_218;
  param_1[9] = 1.79769313486232e+308;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  if (0 < *(int *)(param_4 + 0x28)) {
    FUN_1449437a2(param_3,&local_128,param_5);
    local_1c0 = &local_198;
    local_198 = 0x3ff0000000000000;
    local_190 = 0;
    uStack_188 = 0;
    local_a8 = &local_1a8;
    local_1a0 = *(undefined8 *)(param_2 + 0x10);
    local_c0 = &local_1b0;
    local_a0 = &LAB_146d46fd8;
    local_b8 = FUN_146d4714c;
    local_b0 = 0;
    local_1b8 = 0x3f50624de0000000;
    local_1d0 = 0;
    uStack_1c8 = 0;
    local_1d8 = local_180;
    local_1e0 = local_17c;
    local_1e8 = &local_170;
    local_1f0 = &local_158;
    local_1f8 = &local_140;
    local_1b0 = param_4;
    local_1a8 = param_2;
    local_98 = local_1a0;
    cVar4 = FUN_146d0f62b(&local_c0,&local_a8,&local_128,&local_178);
    if (cVar4 != '\0') {
      local_158 = local_158 - local_108;
      dStack_150 = dStack_150 - dStack_100;
      local_148 = local_148 - local_f8;
      local_118 = local_118 * -1.0;
      dStack_110 = dStack_110 * 1.0;
      dVar1 = -local_128;
      dStack_120 = -dStack_120;
      dVar6 = local_158 * local_118 - dVar1 * local_148;
      dVar2 = dStack_150 * dVar1 - local_158 * dStack_120;
      dVar3 = local_148 * dStack_120 - dStack_150 * local_118;
      dVar3 = dVar3 + dVar3;
      dVar6 = dVar6 + dVar6;
      dVar2 = dVar2 + dVar2;
      auVar5 = divpd(_DAT_149934d80,local_e8);
      *param_1 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_e8._0_8_)) & auVar5._0_8_) *
                 ((dVar2 * dStack_120 - dVar6 * local_118) + dStack_110 * dVar3 + local_158);
      param_1[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_e8._8_8_)) & auVar5._8_8_)
                   * (local_128 * dVar2 + local_118 * dVar3 + dStack_110 * dVar6 + dStack_150);
      param_1[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_d8)) &
                           (ulonglong)(1.0 / local_d8)) *
                   (dStack_110 * dVar2 + local_148 + (dVar6 * dVar1 - dVar3 * dStack_120));
      param_1[3] = local_140;
      param_1[4] = dStack_138;
      param_1[5] = local_130;
      *(undefined4 *)(param_1 + 6) = local_170;
      *(undefined4 *)((longlong)param_1 + 0x34) = uStack_16c;
      *(undefined4 *)(param_1 + 7) = uStack_168;
      *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_164;
      param_1[8] = local_160;
      param_1[9] = -local_178;
    }
  }
  if ((local_90 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0ec47 FUN_146d0ec47 body=1141 status=ok
// SIG undefined FUN_146d0ec47(void)

void FUN_146d0ec47(double *param_1,double *param_2,double *param_3,double *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  double *pdVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_148 [32];
  undefined8 local_128;
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
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  dVar1 = param_3[2];
  dVar6 = param_4[2] - dVar1;
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar5 = param_4[1] - dVar3;
  dVar4 = *param_4 - dVar2;
  dVar11 = dVar6 * dVar6 + dVar4 * dVar4 + dVar5 * dVar5;
  if (1.0000000000000002e-10 < dVar11) {
    local_d8 = *param_1;
    dVar10 = ((param_1[2] - dVar1) * dVar6 +
             (local_d8 - dVar2) * dVar4 + (param_1[1] - dVar3) * dVar5) / dVar11;
    local_f0 = *param_2;
    dVar11 = ((param_2[2] - dVar1) * dVar6 +
             (local_f0 - dVar2) * dVar4 + (param_2[1] - dVar3) * dVar5) / dVar11;
    if ((dVar10 <= 1.0 && 0.0 <= dVar10) || (0.0 <= dVar11 && dVar11 <= 1.0)) {
      local_c8 = param_1[2] - (dVar6 * dVar10 + dVar1);
      local_d0 = param_1[1] - (dVar5 * dVar10 + dVar3);
      local_d8 = local_d8 - (dVar4 * dVar10 + dVar2);
      if (1.0 <= dVar10) {
        dVar10 = 1.0;
      }
      if (dVar10 <= 0.0) {
        dVar10 = 0.0;
      }
      local_e0 = dVar10 * dVar6 + dVar1;
      local_e8 = dVar5 * dVar10 + dVar3;
      local_f0 = dVar4 * dVar10 + dVar2;
      local_128 = param_7;
      FUN_142997aa2(&local_f0,&local_d8,param_5,param_6);
      local_f8 = param_2[2] - (dVar6 * dVar11 + param_3[2]);
      local_108 = *param_2 - (dVar4 * dVar11 + *param_3);
      local_100 = param_2[1] - (dVar5 * dVar11 + param_3[1]);
      pdVar8 = &local_108;
      if (1.0 <= dVar11) {
        dVar11 = 1.0;
      }
      if (dVar11 <= 0.0) {
        dVar11 = 0.0;
      }
      local_110 = dVar11 * dVar6 + param_3[2];
      local_118 = dVar5 * dVar11 + param_3[1];
      local_120 = dVar4 * dVar11 + *param_3;
      pdVar7 = &local_120;
    }
    else {
      if ((0.0 <= dVar10) || (0.0 <= dVar11)) {
        bVar9 = dVar11 < dVar10;
      }
      else {
        bVar9 = dVar10 < dVar11;
      }
      if (!bVar9 && dVar10 != dVar11) {
        param_2 = param_1;
        dVar11 = dVar10;
        local_f0 = local_d8;
      }
      if (1.0 <= dVar11) {
        dVar11 = 1.0;
      }
      if (dVar11 <= 0.0) {
        dVar11 = 0.0;
      }
      local_c8 = dVar1 + dVar6 * dVar11;
      local_d0 = dVar3 + dVar5 * dVar11;
      local_d8 = dVar2 + dVar4 * dVar11;
      pdVar7 = &local_d8;
      local_e0 = param_2[2] - local_c8;
      local_e8 = param_2[1] - local_d0;
      local_f0 = local_f0 - local_d8;
      pdVar8 = &local_f0;
    }
    local_128 = param_7;
    FUN_142997aa2(pdVar7,pdVar8,param_5,param_6);
  }
  if ((local_c0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0f0be FUN_146d0f0be body=52 status=ok
// SIG undefined FUN_146d0f0be(void)

void FUN_146d0f0be(longlong *param_1)

{
  FUN_146d0f0f2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146d0f0f2 FUN_146d0f0f2 body=89 status=ok
// SIG undefined FUN_146d0f0f2(void)

void FUN_146d0f0f2(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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



// FUNCTION 146d0f14c FUN_146d0f14c body=172 status=ok
// SIG undefined FUN_146d0f14c(void)

void FUN_146d0f14c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d0f1f9(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0f1f9 FUN_146d0f1f9 body=1073 status=ok
// SIG undefined FUN_146d0f1f9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d0f1f9(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_1406863be;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_1406863be;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d0f62b FUN_146d0f62b body=2603 status=ok
// SIG undefined FUN_146d0f62b(void)

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_146d0f62b(undefined8 *param_1,longlong param_2,undefined4 *param_3,double *param_4,
             double *param_5,double *param_6,double *param_7,undefined4 *param_8,undefined4 *param_9
             ,double param_10,double param_11,double *param_12,double param_13)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  bool bVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined4 uVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 local_3d8 [32];
  double *local_3b8;
  double *local_3b0;
  double *local_3a8;
  double *local_3a0;
  undefined8 local_398;
  double *local_390;
  double local_388;
  double local_380;
  double local_378;
  double local_370;
  double local_368;
  double local_360;
  double local_358;
  double local_350;
  double local_348;
  double local_340;
  undefined1 local_338 [16];
  undefined4 *local_328;
  undefined4 *local_320;
  undefined8 *local_318;
  longlong local_310;
  longlong local_308;
  undefined8 uStack_300;
  longlong local_2f8;
  undefined8 uStack_2f0;
  double local_2e0;
  double dStack_2d8;
  double local_2d0;
  double local_2c8;
  double dStack_2c0;
  double dStack_2b8;
  undefined4 local_2a8;
  uint uStack_2a4;
  undefined4 uStack_2a0;
  uint uStack_29c;
  double local_298;
  double dStack_290;
  undefined4 local_280;
  undefined4 local_27c;
  code *local_278;
  undefined1 *local_270;
  code *local_268;
  undefined8 **local_260;
  double local_258 [16];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8 [10];
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148 [11];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)local_3d8;
  local_27c = 0xffffffff;
  local_280 = 0xffffffff;
  local_2a8 = *param_3;
  uStack_2a0 = param_3[2];
  uStack_2a4 = param_3[1] ^ 0x80000000;
  uStack_29c = param_3[3] ^ 0x80000000;
  local_298 = *(double *)(param_3 + 4) * -1.0;
  dStack_290 = *(double *)(param_3 + 6) * 1.0;
  dVar2 = param_12[2];
  dVar3 = *param_12;
  dVar4 = param_12[1];
  dVar15 = dVar2 * dVar2 + dVar3 * dVar3 + dVar4 * dVar4;
  if (9.999999747378752e-05 <= dVar15) {
    dVar15 = SQRT(dVar15);
    dStack_2b8 = -dVar2 / dVar15;
    dStack_2c0 = -dVar4 / dVar15;
    local_2c8 = -dVar3 / dVar15;
    if ((dVar15 != 0.0) || (NAN(dVar15))) goto LAB_146d0f7c6;
  }
  local_2c8 = -1.0;
  dStack_2c0 = 0.0;
  dStack_2b8 = 0.0;
LAB_146d0f7c6:
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  pdVar13 = local_258;
  local_258[2] = -1.0;
  local_258[3] = -1.0;
  local_258[0] = -1.0;
  local_258[1] = -1.0;
  uVar20 = (uint)((ulonglong)dStack_2b8 >> 0x20) ^ 0x80000000;
  uVar19 = SUB84(dStack_2b8,0);
  uVar22 = (uint)((ulonglong)dStack_2c0 >> 0x20) ^ 0x80000000;
  uVar21 = SUB84(dStack_2c0,0);
  local_388 = param_10 + (double)param_1[2];
  local_380 = param_11 + *(double *)(param_2 + 0x10);
  uVar24 = (uint)((ulonglong)local_2c8 >> 0x20) ^ 0x80000000;
  uVar23 = SUB84(local_2c8,0);
  local_378 = local_388 + local_380;
  uVar25 = 0xe0000000;
  uVar26 = 0x47efffff;
  iVar11 = 0x21;
  local_390 = param_4;
  while( true ) {
    dVar2 = (double)CONCAT44(uVar26,uVar25);
    iVar11 = iVar11 + -1;
    if (iVar11 == 0) goto LAB_146d0faf5;
    local_328 = (undefined4 *)((ulonglong)dStack_2b8 ^ 0x8000000000000000);
    local_338._8_4_ = SUB84(dStack_2c0,0);
    local_338._0_8_ = -local_2c8;
    local_338._12_4_ = (uint)((ulonglong)dStack_2c0 >> 0x20) ^ 0x80000000;
    local_3b8 = (double *)&local_27c;
    (*(code *)param_1[1])(&local_2e0,*param_1,local_338,0);
    dVar16 = local_2d0;
    dVar15 = dStack_2d8;
    dVar4 = local_2e0;
    local_3b0 = (double *)&local_280;
    local_3b8 = &local_2c8;
    FUN_140686164(param_2,&local_2e0,param_3,&local_2a8);
    dVar3 = dVar16 - local_2d0;
    dVar17 = dVar15 - dStack_2d8;
    dVar18 = dVar4 - local_2e0;
    if ((double)CONCAT44(uVar26,uVar25) * 0.9999000000025262 <
        dStack_2b8 * dVar3 + local_2c8 * dVar18 + dStack_2c0 * dVar17) goto LAB_146d0faf5;
    lVar10 = (longlong)(int)local_1d8;
    *(int *)((longlong)&local_1d8 + lVar10 * 4 + 4) = (int)local_1d8;
    (&local_158)[lVar10 * 3] = dVar4;
    (&uStack_150)[lVar10 * 3] = dVar15;
    local_148[lVar10 * 3] = dVar16;
    (&local_1b8)[lVar10 * 3] = local_2e0;
    (&uStack_1b0)[lVar10 * 3] = dStack_2d8;
    local_1a8[lVar10 * 3] = local_2d0;
    local_1d8 = CONCAT44(local_1d8._4_4_,(int)local_1d8 + 1);
    local_258[lVar10 * 3 + 4] = dVar18;
    local_258[lVar10 * 3 + 5] = dVar17;
    local_258[lVar10 * 3 + 6] = dVar3;
    local_3b0 = (double *)&local_1b8;
    local_3b8 = (double *)&local_158;
    FUN_1449162b1(&local_2e0,local_258 + 4,&local_1d8);
    dStack_2b8 = local_2d0;
    local_2c8 = local_2e0;
    dStack_2c0 = dStack_2d8;
    dVar2 = SQRT(local_2d0 * local_2d0 + local_2e0 * local_2e0 + dStack_2d8 * dStack_2d8);
    if (dVar2 < param_13) break;
    dVar3 = (double)CONCAT44(uVar26,uVar25);
    dStack_2b8 = 1.0 / dVar2;
    local_2c8 = local_2e0 * dStack_2b8;
    dStack_2c0 = dStack_2d8 * dStack_2b8;
    dStack_2b8 = local_2d0 * dStack_2b8;
    uVar20 = (uint)((ulonglong)dStack_2b8 >> 0x20) ^ 0x80000000;
    uVar19 = SUB84(dStack_2b8,0);
    uVar22 = (uint)((ulonglong)dStack_2c0 >> 0x20) ^ 0x80000000;
    uVar21 = SUB84(dStack_2c0,0);
    uVar24 = (uint)((ulonglong)local_2c8 >> 0x20) ^ 0x80000000;
    uVar23 = SUB84(local_2c8,0);
    uVar25 = SUB84(dVar2,0);
    uVar26 = (undefined4)((ulonglong)dVar2 >> 0x20);
    if (dVar3 <= dVar2) goto LAB_146d0faf5;
  }
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_308 = 0;
  uStack_300 = 0;
  FUN_140268ec4(&local_2f8,8);
  FUN_140268ec4(&local_308,8);
  if (0 < (int)local_1d8) {
    lVar10 = 0;
    lVar14 = 0;
    do {
      uVar8 = uStack_2f0;
      lVar12 = (longlong)(int)uStack_2f0;
      uVar9 = (int)uStack_2f0 + 1;
      uStack_2f0 = CONCAT44(uStack_2f0._4_4_,uVar9);
      if (uStack_2f0._4_4_ < uVar9) {
        FUN_14026a4e8(&local_2f8,uVar8 & 0xffffffff);
      }
      uVar8 = uStack_300;
      *(undefined8 *)(local_2f8 + 0x10 + lVar12 * 0x18) =
           *(undefined8 *)((longlong)local_148 + lVar10);
      uVar25 = *(undefined4 *)((longlong)&local_158 + lVar10 + 4);
      uVar26 = *(undefined4 *)((longlong)&uStack_150 + lVar10);
      uVar6 = *(undefined4 *)((longlong)local_148 + lVar10 + -4);
      puVar1 = (undefined4 *)(local_2f8 + lVar12 * 0x18);
      *puVar1 = *(undefined4 *)((longlong)&local_158 + lVar10);
      puVar1[1] = uVar25;
      puVar1[2] = uVar26;
      puVar1[3] = uVar6;
      lVar12 = (longlong)(int)uStack_300;
      uVar9 = (int)uStack_300 + 1;
      uStack_300 = CONCAT44(uStack_300._4_4_,uVar9);
      if (uStack_300._4_4_ < uVar9) {
        FUN_14026a4e8(&local_308,uVar8 & 0xffffffff);
      }
      *(undefined8 *)(local_308 + 0x10 + lVar12 * 0x18) =
           *(undefined8 *)((longlong)local_1a8 + lVar10);
      uVar25 = *(undefined4 *)((longlong)&local_1b8 + lVar10 + 4);
      uVar26 = *(undefined4 *)((longlong)&uStack_1b0 + lVar10);
      uVar6 = *(undefined4 *)((longlong)local_1a8 + lVar10 + -4);
      puVar1 = (undefined4 *)(local_308 + lVar12 * 0x18);
      *puVar1 = *(undefined4 *)((longlong)&local_1b8 + lVar10);
      puVar1[1] = uVar25;
      puVar1[2] = uVar26;
      puVar1[3] = uVar6;
      lVar14 = lVar14 + 1;
      lVar10 = lVar10 + 0x18;
    } while (lVar14 < (int)local_1d8);
  }
  local_260 = &local_318;
  local_310 = (longlong)&local_27c;
  local_338._8_8_ = &local_280;
  local_338._0_8_ = param_2;
  local_320 = &local_2a8;
  local_268 = FUN_146d10058;
  local_270 = local_338;
  local_278 = FUN_146d10082;
  local_398 = 0x3f847ae140000000;
  local_3a0 = &local_370;
  local_3a8 = &local_358;
  local_3b8 = &local_340;
  local_3b0 = &local_2e0;
  local_328 = param_3;
  local_318 = param_1;
  uVar9 = FUN_144918d86(&local_2f8,&local_308);
  if (uVar9 < 2) {
    param_7[2] = local_2d0;
    *param_7 = local_2e0;
    param_7[1] = dStack_2d8;
    *local_390 = local_340 + local_388 + local_380;
    *param_5 = local_388 * local_2e0 + local_358;
    param_5[1] = local_388 * dStack_2d8 + local_350;
    param_5[2] = local_388 * local_2d0 + local_348;
    *param_6 = local_370 - local_2e0 * local_380;
    param_6[1] = local_368 - dStack_2d8 * local_380;
    param_6[2] = local_360 - local_2d0 * local_380;
    *param_8 = local_27c;
    *param_9 = local_280;
    bVar7 = false;
  }
  else {
    bVar7 = true;
    if (uVar9 == 3) {
      uVar23 = SUB84(local_2e0,0);
      uVar24 = (uint)((ulonglong)local_2e0 >> 0x20);
      uVar21 = SUB84(dStack_2d8,0);
      uVar22 = (uint)((ulonglong)dStack_2d8 >> 0x20);
      uVar19 = SUB84(local_2d0,0);
      uVar20 = (uint)((ulonglong)local_2d0 >> 0x20);
      dVar2 = -local_340;
    }
  }
  if (local_308 != 0) {
    FUN_1400020a8();
  }
  if (local_2f8 != 0) {
    FUN_1400020a8();
  }
  if (bVar7) {
LAB_146d0faf5:
    if ((longlong)(int)local_1d8 < 1) {
      dVar15 = 0.0;
      dVar16 = 0.0;
      dVar3 = 0.0;
      dVar4 = 0.0;
      dVar18 = 0.0;
      dVar17 = 0.0;
    }
    else {
      dVar17 = 0.0;
      lVar10 = 0;
      dVar18 = 0.0;
      dVar4 = 0.0;
      dVar3 = 0.0;
      dVar16 = 0.0;
      dVar15 = 0.0;
      do {
        dVar5 = *pdVar13;
        dVar17 = dVar17 + local_148[lVar10] * dVar5;
        dVar18 = dVar18 + (double)(&uStack_150)[lVar10] * dVar5;
        dVar4 = dVar4 + (double)(&local_158)[lVar10] * dVar5;
        dVar3 = dVar3 + local_1a8[lVar10] * dVar5;
        dVar16 = dVar16 + (double)(&uStack_1b0)[lVar10] * dVar5;
        dVar15 = dVar15 + dVar5 * (double)(&local_1b8)[lVar10];
        lVar10 = lVar10 + 3;
        pdVar13 = pdVar13 + 1;
      } while ((longlong)(int)local_1d8 * 3 != lVar10);
    }
    *param_7 = (double)CONCAT44(uVar24,uVar23);
    param_7[1] = (double)CONCAT44(uVar22,uVar21);
    param_7[2] = (double)CONCAT44(uVar20,uVar19);
    *local_390 = local_378 - dVar2;
    *param_5 = local_388 * (double)CONCAT44(uVar24,uVar23) + dVar4;
    param_5[1] = local_388 * (double)CONCAT44(uVar22,uVar21) + dVar18;
    param_5[2] = local_388 * (double)CONCAT44(uVar20,uVar19) + dVar17;
    *param_6 = dVar15 - local_380 * (double)CONCAT44(uVar24,uVar23);
    param_6[1] = dVar16 - (double)CONCAT44(uVar22,uVar21) * local_380;
    param_6[2] = dVar3 - (double)CONCAT44(uVar20,uVar19) * local_380;
    *param_8 = local_27c;
    *param_9 = local_280;
  }
  if ((local_f0 ^ (ulonglong)local_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 146d10058 FUN_146d10058 body=41 status=ok
// SIG undefined FUN_146d10058(void)

undefined8 FUN_146d10058(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  (*(code *)((undefined8 *)*param_2)[1])(param_1,*(undefined8 *)*param_2,param_3,0,param_2[1]);
  return param_1;
}



// FUNCTION 146d10082 FUN_146d10082 body=53 status=ok
// SIG undefined FUN_146d10082(void)

undefined8 FUN_146d10082(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_140686164(*param_2,param_1,param_2[2],param_2[3],param_3,param_2[1]);
  return param_1;
}



// FUNCTION 146d100b8 FUN_146d100b8 body=172 status=ok
// SIG undefined FUN_146d100b8(void)

void FUN_146d100b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d10165(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d10165 FUN_146d10165 body=1080 status=ok
// SIG undefined FUN_146d10165(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d10165(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_1406863dc;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_1406863be;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1059e FUN_146d1059e body=172 status=ok
// SIG undefined FUN_146d1059e(void)

void FUN_146d1059e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d1064b(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1064b FUN_146d1064b body=1080 status=ok
// SIG undefined FUN_146d1064b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d1064b(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_1406864a0;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_1406863be;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d10a84 FUN_146d10a84 body=172 status=ok
// SIG undefined FUN_146d10a84(void)

void FUN_146d10a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d10b31(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d10b31 FUN_146d10b31 body=1080 status=ok
// SIG undefined FUN_146d10b31(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d10b31(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_14172543a;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_1406863be;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d10f6a FUN_146d10f6a body=172 status=ok
// SIG undefined FUN_146d10f6a(void)

void FUN_146d10f6a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d11017(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d11017 FUN_146d11017 body=1080 status=ok
// SIG undefined FUN_146d11017(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d11017(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_140686536;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_1406863be;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d11450 FUN_146d11450 body=172 status=ok
// SIG undefined FUN_146d11450(void)

void FUN_146d11450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d114fd(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d114fd FUN_146d114fd body=1080 status=ok
// SIG undefined FUN_146d114fd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d114fd(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_146cc490a;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_1406863be;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d11936 FUN_146d11936 body=172 status=ok
// SIG undefined FUN_146d11936(void)

void FUN_146d11936(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d119e3(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d119e3 FUN_146d119e3 body=1080 status=ok
// SIG undefined FUN_146d119e3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d119e3(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_146cc4a26;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_1406863be;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d11e1c FUN_146d11e1c body=172 status=ok
// SIG undefined FUN_146d11e1c(void)

void FUN_146d11e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d11ec9(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d11ec9 FUN_146d11ec9 body=1080 status=ok
// SIG undefined FUN_146d11ec9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d11ec9(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_14068657c;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_1406863be;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d12302 FUN_146d12302 body=172 status=ok
// SIG undefined FUN_146d12302(void)

void FUN_146d12302(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d123af(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d123af FUN_146d123af body=1080 status=ok
// SIG undefined FUN_146d123af(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d123af(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_146d127e8;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_1406863be;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1280a FUN_146d1280a body=172 status=ok
// SIG undefined FUN_146d1280a(void)

void FUN_146d1280a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d128b7(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d128b7 FUN_146d128b7 body=1080 status=ok
// SIG undefined FUN_146d128b7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d128b7(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_146d12cf0;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_1406863be;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d12cf0 FUN_146d12cf0 body=195 status=ok
// SIG undefined FUN_146d12cf0(void)

undefined4 *
FUN_146d12cf0(undefined4 *param_1,longlong param_2,longlong param_3,double *param_4,int *param_5)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  uint local_14 [3];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  dVar2 = *(double *)(param_2 + 0x10);
  lVar3 = *(longlong *)(param_2 + 0x28);
  lVar5 = 0;
  do {
    pdVar1 = (double *)(param_3 + lVar5 * 2);
    bVar4 = 0.0 < *pdVar1 || *pdVar1 == 0.0;
    if (bVar4) {
      dVar6 = *(double *)(lVar3 + 0x38 + lVar5 * 2) - dVar2;
    }
    else {
      dVar6 = *(double *)(lVar3 + 0x20 + lVar5 * 2) + dVar2;
    }
    *(double *)((longlong)&local_30 + lVar5 * 2) = dVar6;
    *(uint *)((longlong)local_14 + lVar5) = (uint)bVar4;
    lVar5 = lVar5 + 4;
  } while (lVar5 != 0xc);
  *param_5 = local_14[1] * 2 + local_14[0] + local_14[2] * 4;
  if (param_4 != (double *)0x0) {
    *param_4 = dVar2 * 0.7320508075688772;
  }
  *(undefined8 *)(param_1 + 4) = local_20;
  *param_1 = (undefined4)local_30;
  param_1[1] = local_30._4_4_;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_58);
}



// FUNCTION 146d12db4 FUN_146d12db4 body=172 status=ok
// SIG undefined FUN_146d12db4(void)

void FUN_146d12db4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d12e61(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d12e61 FUN_146d12e61 body=1080 status=ok
// SIG undefined FUN_146d12e61(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d12e61(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_146d1329a;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_1406863be;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d13334 FUN_146d13334 body=172 status=ok
// SIG undefined FUN_146d13334(void)

void FUN_146d13334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d133e1(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d133e1 FUN_146d133e1 body=1080 status=ok
// SIG undefined FUN_146d133e1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d133e1(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_146d1381a;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_1406863be;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1381a FUN_146d1381a body=49 status=ok
// SIG undefined FUN_146d1381a(void)

undefined8
FUN_146d1381a(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_144916780(*(undefined8 *)(param_2 + 0x28),param_1,param_3,*(undefined8 *)(param_2 + 0x10),
                param_4,param_5);
  return param_1;
}



// FUNCTION 146d1384c FUN_146d1384c body=172 status=ok
// SIG undefined FUN_146d1384c(void)

void FUN_146d1384c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d138f9(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d138f9 FUN_146d138f9 body=1080 status=ok
// SIG undefined FUN_146d138f9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d138f9(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_1406863be;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_1406863dc;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d13d32 FUN_146d13d32 body=218 status=ok
// SIG undefined FUN_146d13d32(void)

void FUN_146d13d32(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  undefined8 *local_120;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [96];
  undefined1 local_98 [88];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((*(byte *)(param_6 + 0x374) & 4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_148);
  }
  local_110 = 0x3ff0000000000000;
  local_108 = 0;
  uStack_100 = 0;
  FUN_1449437a2(param_4,local_f8,param_2);
  local_128 = local_f8;
  local_120 = &local_110;
  FUN_146d46950(local_98,param_1,param_3,param_2);
  FUN_146d0d32b(param_6,local_98);
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d13e30 FUN_146d13e30 body=172 status=ok
// SIG undefined FUN_146d13e30(void)

void FUN_146d13e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d13edd(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d13edd FUN_146d13edd body=1080 status=ok
// SIG undefined FUN_146d13edd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d13edd(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_1406864a0;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_1406863dc;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d14316 FUN_146d14316 body=1080 status=ok
// SIG undefined FUN_146d14316(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d14316(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_14172543a;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_1406863dc;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d14750 FUN_146d14750 body=172 status=ok
// SIG undefined FUN_146d14750(void)

void FUN_146d14750(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d147fd(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d147fd FUN_146d147fd body=1080 status=ok
// SIG undefined FUN_146d147fd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d147fd(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_140686536;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_1406863dc;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d14c36 FUN_146d14c36 body=172 status=ok
// SIG undefined FUN_146d14c36(void)

void FUN_146d14c36(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d14ce3(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d14ce3 FUN_146d14ce3 body=1080 status=ok
// SIG undefined FUN_146d14ce3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d14ce3(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_146cc490a;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_1406863dc;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1511c FUN_146d1511c body=172 status=ok
// SIG undefined FUN_146d1511c(void)

void FUN_146d1511c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d151c9(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d151c9 FUN_146d151c9 body=1080 status=ok
// SIG undefined FUN_146d151c9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d151c9(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_146cc4a26;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_1406863dc;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d15602 FUN_146d15602 body=1080 status=ok
// SIG undefined FUN_146d15602(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d15602(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_14068657c;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_1406863dc;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d15a3c FUN_146d15a3c body=172 status=ok
// SIG undefined FUN_146d15a3c(void)

void FUN_146d15a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d15ae9(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d15ae9 FUN_146d15ae9 body=1080 status=ok
// SIG undefined FUN_146d15ae9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d15ae9(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_146d127e8;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_1406863dc;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d15f22 FUN_146d15f22 body=172 status=ok
// SIG undefined FUN_146d15f22(void)

void FUN_146d15f22(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d15fcf(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d15fcf FUN_146d15fcf body=1080 status=ok
// SIG undefined FUN_146d15fcf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d15fcf(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_146d12cf0;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_1406863dc;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d16408 FUN_146d16408 body=172 status=ok
// SIG undefined FUN_146d16408(void)

void FUN_146d16408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d164b5(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d164b5 FUN_146d164b5 body=1080 status=ok
// SIG undefined FUN_146d164b5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d164b5(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_146d1329a;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_1406863dc;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d168ee FUN_146d168ee body=1080 status=ok
// SIG undefined FUN_146d168ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d168ee(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_146d1381a;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_1406863dc;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d16d28 FUN_146d16d28 body=172 status=ok
// SIG undefined FUN_146d16d28(void)

void FUN_146d16d28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d16dd5(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d16dd5 FUN_146d16dd5 body=1080 status=ok
// SIG undefined FUN_146d16dd5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d16dd5(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_1406863be;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_1406864a0;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1720e FUN_146d1720e body=186 status=ok
// SIG undefined FUN_146d1720e(void)

void FUN_146d1720e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  undefined8 *local_120;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [104];
  undefined1 local_90 [88];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_110 = 0x3ff0000000000000;
  local_108 = 0;
  uStack_100 = 0;
  FUN_1449437a2(param_4,local_f8,param_2);
  local_128 = local_f8;
  local_120 = &local_110;
  FUN_146d172c9(local_90,param_1,param_3,param_2);
  FUN_146d0d32b(param_5,local_90);
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d172c9 FUN_146d172c9 body=1085 status=ok
// SIG undefined FUN_146d172c9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d172c9(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4,
             double *param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_1406863dc;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_1406864a0;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_6;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_5,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_5[4];
    dStack_120 = dStack_120 - param_5[5];
    local_118 = local_118 - param_5[6];
    dVar8 = *param_5;
    dVar10 = param_5[2] * -1.0;
    dVar11 = param_5[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_5[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_5 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_5[10])) &
                     (ulonglong)(1.0 / param_5[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d17708 FUN_146d17708 body=172 status=ok
// SIG undefined FUN_146d17708(void)

void FUN_146d17708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d177b5(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d177b5 FUN_146d177b5 body=1073 status=ok
// SIG undefined FUN_146d177b5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d177b5(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_1406864a0;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_1406864a0;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d17be8 FUN_146d17be8 body=172 status=ok
// SIG undefined FUN_146d17be8(void)

void FUN_146d17be8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d17c95(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d17c95 FUN_146d17c95 body=1080 status=ok
// SIG undefined FUN_146d17c95(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d17c95(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_14172543a;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_1406864a0;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d180ce FUN_146d180ce body=172 status=ok
// SIG undefined FUN_146d180ce(void)

void FUN_146d180ce(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d1817b(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1817b FUN_146d1817b body=1080 status=ok
// SIG undefined FUN_146d1817b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d1817b(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_140686536;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_1406864a0;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d185b4 FUN_146d185b4 body=172 status=ok
// SIG undefined FUN_146d185b4(void)

void FUN_146d185b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d18661(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d18661 FUN_146d18661 body=1080 status=ok
// SIG undefined FUN_146d18661(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d18661(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_146cc490a;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_1406864a0;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d18a9a FUN_146d18a9a body=172 status=ok
// SIG undefined FUN_146d18a9a(void)

void FUN_146d18a9a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d18b47(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d18b47 FUN_146d18b47 body=1080 status=ok
// SIG undefined FUN_146d18b47(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d18b47(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_146cc4a26;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_1406864a0;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d18f80 FUN_146d18f80 body=172 status=ok
// SIG undefined FUN_146d18f80(void)

void FUN_146d18f80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d1902d(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1902d FUN_146d1902d body=1080 status=ok
// SIG undefined FUN_146d1902d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d1902d(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_14068657c;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_1406864a0;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d19466 FUN_146d19466 body=172 status=ok
// SIG undefined FUN_146d19466(void)

void FUN_146d19466(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d19513(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d19513 FUN_146d19513 body=1080 status=ok
// SIG undefined FUN_146d19513(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d19513(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_146d127e8;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_1406864a0;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1994c FUN_146d1994c body=172 status=ok
// SIG undefined FUN_146d1994c(void)

void FUN_146d1994c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d199f9(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d199f9 FUN_146d199f9 body=1080 status=ok
// SIG undefined FUN_146d199f9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d199f9(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_146d12cf0;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_1406864a0;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d19e32 FUN_146d19e32 body=172 status=ok
// SIG undefined FUN_146d19e32(void)

void FUN_146d19e32(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d19edf(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d19edf FUN_146d19edf body=1080 status=ok
// SIG undefined FUN_146d19edf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d19edf(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_146d1329a;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_1406864a0;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1a318 FUN_146d1a318 body=172 status=ok
// SIG undefined FUN_146d1a318(void)

void FUN_146d1a318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d1a3c5(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1a3c5 FUN_146d1a3c5 body=1080 status=ok
// SIG undefined FUN_146d1a3c5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d1a3c5(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_146d1381a;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_1406864a0;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1a7fe FUN_146d1a7fe body=172 status=ok
// SIG undefined FUN_146d1a7fe(void)

void FUN_146d1a7fe(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d1a8ab(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1a8ab FUN_146d1a8ab body=1080 status=ok
// SIG undefined FUN_146d1a8ab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d1a8ab(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_1406863be;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_14172543a;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1ace4 FUN_146d1ace4 body=1080 status=ok
// SIG undefined FUN_146d1ace4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d1ace4(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_1406863dc;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_14172543a;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1b11e FUN_146d1b11e body=172 status=ok
// SIG undefined FUN_146d1b11e(void)

void FUN_146d1b11e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d1b1cb(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1b1cb FUN_146d1b1cb body=1080 status=ok
// SIG undefined FUN_146d1b1cb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d1b1cb(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_1406864a0;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_14172543a;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1b604 FUN_146d1b604 body=1073 status=ok
// SIG undefined FUN_146d1b604(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d1b604(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_14172543a;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_14172543a;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1ba36 FUN_146d1ba36 body=172 status=ok
// SIG undefined FUN_146d1ba36(void)

void FUN_146d1ba36(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d1bae3(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1bae3 FUN_146d1bae3 body=1080 status=ok
// SIG undefined FUN_146d1bae3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d1bae3(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_140686536;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_14172543a;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1bf1c FUN_146d1bf1c body=172 status=ok
// SIG undefined FUN_146d1bf1c(void)

void FUN_146d1bf1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d1bfc9(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1bfc9 FUN_146d1bfc9 body=1080 status=ok
// SIG undefined FUN_146d1bfc9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d1bfc9(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_146cc490a;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_14172543a;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1c402 FUN_146d1c402 body=172 status=ok
// SIG undefined FUN_146d1c402(void)

void FUN_146d1c402(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d1c4af(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1c4af FUN_146d1c4af body=1080 status=ok
// SIG undefined FUN_146d1c4af(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d1c4af(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_146cc4a26;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_14172543a;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1c8e8 FUN_146d1c8e8 body=1080 status=ok
// SIG undefined FUN_146d1c8e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d1c8e8(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_14068657c;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_14172543a;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1cd22 FUN_146d1cd22 body=172 status=ok
// SIG undefined FUN_146d1cd22(void)

void FUN_146d1cd22(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d1cdcf(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1cdcf FUN_146d1cdcf body=1080 status=ok
// SIG undefined FUN_146d1cdcf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d1cdcf(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_146d127e8;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_14172543a;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1d208 FUN_146d1d208 body=172 status=ok
// SIG undefined FUN_146d1d208(void)

void FUN_146d1d208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d1d2b5(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1d2b5 FUN_146d1d2b5 body=1080 status=ok
// SIG undefined FUN_146d1d2b5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d1d2b5(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_146d12cf0;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_14172543a;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1d6ee FUN_146d1d6ee body=172 status=ok
// SIG undefined FUN_146d1d6ee(void)

void FUN_146d1d6ee(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d1d79b(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1d79b FUN_146d1d79b body=1080 status=ok
// SIG undefined FUN_146d1d79b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d1d79b(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_146d1329a;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_14172543a;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1dbd4 FUN_146d1dbd4 body=1080 status=ok
// SIG undefined FUN_146d1dbd4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d1dbd4(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_146d1381a;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_14172543a;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1e00e FUN_146d1e00e body=172 status=ok
// SIG undefined FUN_146d1e00e(void)

void FUN_146d1e00e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d1e0bb(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1e0bb FUN_146d1e0bb body=1080 status=ok
// SIG undefined FUN_146d1e0bb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d1e0bb(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_1406863be;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_140686536;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1e4f4 FUN_146d1e4f4 body=172 status=ok
// SIG undefined FUN_146d1e4f4(void)

void FUN_146d1e4f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d1e5a1(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1e5a1 FUN_146d1e5a1 body=1080 status=ok
// SIG undefined FUN_146d1e5a1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d1e5a1(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_1406863dc;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_140686536;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1e9da FUN_146d1e9da body=172 status=ok
// SIG undefined FUN_146d1e9da(void)

void FUN_146d1e9da(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d1ea87(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1ea87 FUN_146d1ea87 body=1080 status=ok
// SIG undefined FUN_146d1ea87(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d1ea87(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_1406864a0;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_140686536;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1eec0 FUN_146d1eec0 body=172 status=ok
// SIG undefined FUN_146d1eec0(void)

void FUN_146d1eec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d1ef6d(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1ef6d FUN_146d1ef6d body=1080 status=ok
// SIG undefined FUN_146d1ef6d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d1ef6d(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_14172543a;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_140686536;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1f3a6 FUN_146d1f3a6 body=172 status=ok
// SIG undefined FUN_146d1f3a6(void)

void FUN_146d1f3a6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d1f453(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1f453 FUN_146d1f453 body=1073 status=ok
// SIG undefined FUN_146d1f453(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d1f453(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_140686536;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_140686536;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1f886 FUN_146d1f886 body=172 status=ok
// SIG undefined FUN_146d1f886(void)

void FUN_146d1f886(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d1f933(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1f933 FUN_146d1f933 body=1080 status=ok
// SIG undefined FUN_146d1f933(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d1f933(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_146cc490a;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_140686536;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1fd6c FUN_146d1fd6c body=172 status=ok
// SIG undefined FUN_146d1fd6c(void)

void FUN_146d1fd6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d1fe19(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d1fe19 FUN_146d1fe19 body=1080 status=ok
// SIG undefined FUN_146d1fe19(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d1fe19(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_146cc4a26;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_140686536;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d20252 FUN_146d20252 body=172 status=ok
// SIG undefined FUN_146d20252(void)

void FUN_146d20252(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d202ff(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d202ff FUN_146d202ff body=1080 status=ok
// SIG undefined FUN_146d202ff(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d202ff(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_14068657c;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_140686536;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d20738 FUN_146d20738 body=172 status=ok
// SIG undefined FUN_146d20738(void)

void FUN_146d20738(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d207e5(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d207e5 FUN_146d207e5 body=1080 status=ok
// SIG undefined FUN_146d207e5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d207e5(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_146d127e8;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_140686536;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d20c1e FUN_146d20c1e body=172 status=ok
// SIG undefined FUN_146d20c1e(void)

void FUN_146d20c1e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d20ccb(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d20ccb FUN_146d20ccb body=1080 status=ok
// SIG undefined FUN_146d20ccb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d20ccb(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_146d12cf0;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_140686536;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d21104 FUN_146d21104 body=172 status=ok
// SIG undefined FUN_146d21104(void)

void FUN_146d21104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d211b1(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d211b1 FUN_146d211b1 body=1080 status=ok
// SIG undefined FUN_146d211b1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d211b1(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_146d1329a;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_140686536;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d215ea FUN_146d215ea body=172 status=ok
// SIG undefined FUN_146d215ea(void)

void FUN_146d215ea(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d21697(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d21697 FUN_146d21697 body=1080 status=ok
// SIG undefined FUN_146d21697(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d21697(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_146d1381a;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_140686536;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d21ad0 FUN_146d21ad0 body=172 status=ok
// SIG undefined FUN_146d21ad0(void)

void FUN_146d21ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d21b7d(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d21b7d FUN_146d21b7d body=1080 status=ok
// SIG undefined FUN_146d21b7d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d21b7d(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_1406863be;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_146cc490a;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d21fb6 FUN_146d21fb6 body=172 status=ok
// SIG undefined FUN_146d21fb6(void)

void FUN_146d21fb6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d22063(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d22063 FUN_146d22063 body=1080 status=ok
// SIG undefined FUN_146d22063(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d22063(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_1406863dc;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_146cc490a;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d2249c FUN_146d2249c body=172 status=ok
// SIG undefined FUN_146d2249c(void)

void FUN_146d2249c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d22549(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d22549 FUN_146d22549 body=1080 status=ok
// SIG undefined FUN_146d22549(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d22549(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_1406864a0;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_146cc490a;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d22982 FUN_146d22982 body=172 status=ok
// SIG undefined FUN_146d22982(void)

void FUN_146d22982(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d22a2f(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d22a2f FUN_146d22a2f body=1080 status=ok
// SIG undefined FUN_146d22a2f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d22a2f(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_14172543a;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_146cc490a;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d22e68 FUN_146d22e68 body=172 status=ok
// SIG undefined FUN_146d22e68(void)

void FUN_146d22e68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d22f15(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d22f15 FUN_146d22f15 body=1080 status=ok
// SIG undefined FUN_146d22f15(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d22f15(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_140686536;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_146cc490a;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d2334e FUN_146d2334e body=172 status=ok
// SIG undefined FUN_146d2334e(void)

void FUN_146d2334e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d233fb(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d233fb FUN_146d233fb body=1073 status=ok
// SIG undefined FUN_146d233fb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d233fb(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_146cc490a;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_146cc490a;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d2382e FUN_146d2382e body=172 status=ok
// SIG undefined FUN_146d2382e(void)

void FUN_146d2382e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d238db(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d238db FUN_146d238db body=1080 status=ok
// SIG undefined FUN_146d238db(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d238db(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_146cc4a26;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_146cc490a;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d23d14 FUN_146d23d14 body=172 status=ok
// SIG undefined FUN_146d23d14(void)

void FUN_146d23d14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d23dc1(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d23dc1 FUN_146d23dc1 body=1080 status=ok
// SIG undefined FUN_146d23dc1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d23dc1(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_14068657c;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_146cc490a;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d241fa FUN_146d241fa body=172 status=ok
// SIG undefined FUN_146d241fa(void)

void FUN_146d241fa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d242a7(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d242a7 FUN_146d242a7 body=1080 status=ok
// SIG undefined FUN_146d242a7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d242a7(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_146d127e8;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_146cc490a;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d246e0 FUN_146d246e0 body=172 status=ok
// SIG undefined FUN_146d246e0(void)

void FUN_146d246e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d2478d(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d2478d FUN_146d2478d body=1080 status=ok
// SIG undefined FUN_146d2478d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d2478d(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_146d12cf0;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_146cc490a;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d24bc6 FUN_146d24bc6 body=172 status=ok
// SIG undefined FUN_146d24bc6(void)

void FUN_146d24bc6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d24c73(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d24c73 FUN_146d24c73 body=1080 status=ok
// SIG undefined FUN_146d24c73(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d24c73(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_146d1329a;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_146cc490a;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d250ac FUN_146d250ac body=172 status=ok
// SIG undefined FUN_146d250ac(void)

void FUN_146d250ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d25159(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d25159 FUN_146d25159 body=1080 status=ok
// SIG undefined FUN_146d25159(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d25159(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_146d1381a;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = FUN_146cc490a;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d25592 FUN_146d25592 body=172 status=ok
// SIG undefined FUN_146d25592(void)

void FUN_146d25592(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d2563f(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d2563f FUN_146d2563f body=1080 status=ok
// SIG undefined FUN_146d2563f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d2563f(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_1406863be;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_146cc4a26;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d25a78 FUN_146d25a78 body=172 status=ok
// SIG undefined FUN_146d25a78(void)

void FUN_146d25a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d25b25(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d25b25 FUN_146d25b25 body=1080 status=ok
// SIG undefined FUN_146d25b25(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d25b25(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  code *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = FUN_1406863dc;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_146cc4a26;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d25f5e FUN_146d25f5e body=172 status=ok
// SIG undefined FUN_146d25f5e(void)

void FUN_146d25f5e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_100 = 0x3ff0000000000000;
  local_f8 = 0;
  uStack_f0 = 0;
  FUN_1449437a2(param_4,local_e8,param_2);
  local_108 = &local_100;
  FUN_146d2600b(local_88,param_1,param_3,local_e8);
  FUN_146d0d32b(param_5,local_88);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146d2600b FUN_146d2600b body=1080 status=ok
// SIG undefined FUN_146d2600b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_146d2600b(undefined8 *param_1,longlong param_2,longlong param_3,double *param_4,
             undefined8 param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  double *local_190;
  double *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_150 [4];
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  param_1[9] = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  local_d0 = &LAB_1406864a0;
  local_c8 = *(undefined8 *)(param_3 + 0x10);
  local_e8 = &LAB_146cc4a26;
  local_e0 = *(undefined8 *)(param_2 + 0x10);
  local_158 = 0x3f689374c0000000;
  local_160 = param_5;
  local_170 = 0;
  uStack_168 = 0;
  local_178 = local_150;
  local_180 = local_14c;
  local_188 = &local_148;
  local_190 = &local_128;
  local_198 = &local_110;
  local_f0 = param_2;
  local_d8 = param_3;
  cVar9 = FUN_146d0f62b(&local_f0,&local_d8,param_4,&local_f8);
  if (cVar9 != '\0') {
    param_1[2] = local_100;
    *param_1 = local_110;
    param_1[1] = uStack_108;
    local_128 = local_128 - param_4[4];
    dStack_120 = dStack_120 - param_4[5];
    local_118 = local_118 - param_4[6];
    dVar8 = *param_4;
    dVar10 = param_4[2] * -1.0;
    dVar11 = param_4[3] * 1.0;
    dVar12 = -dVar8;
    dVar13 = -param_4[1];
    dVar16 = dStack_120 * dVar12 - local_128 * dVar13;
    dVar6 = local_118 * dVar13 - dStack_120 * dVar10;
    dVar17 = local_128 * dVar10 - local_118 * dVar12;
    dVar6 = dVar6 + dVar6;
    dVar17 = dVar17 + dVar17;
    dVar16 = dVar16 + dVar16;
    dVar5 = dStack_140 * dVar12 - dVar13 * local_148;
    dVar7 = local_138 * dVar13 - dVar10 * dStack_140;
    dVar18 = local_148 * dVar10 - dVar12 * local_138;
    dVar7 = dVar7 + dVar7;
    dVar18 = dVar18 + dVar18;
    dVar5 = dVar5 + dVar5;
    auVar1 = *(undefined1 (*) [16])(param_4 + 8);
    auVar15 = divpd(_DAT_149934d80,auVar1);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar15._0_8_);
    dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar15._8_8_);
    dVar2 = (dVar8 * dVar16 + dVar10 * dVar6 + dVar11 * dVar17 + dStack_120) * dVar4;
    dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_4[10])) &
                     (ulonglong)(1.0 / param_4[10]));
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = ((dVar16 * dVar13 - dVar17 * dVar10) + dVar11 * dVar6 + local_128) * dVar3;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 3) = auVar1;
    param_1[5] = (dVar16 * dVar11 + local_118 + (dVar17 * dVar12 - dVar6 * dVar13)) * dVar14;
    param_1[6] = -(((dVar5 * dVar13 - dVar18 * dVar10) + dVar11 * dVar7 + local_148) * dVar3);
    param_1[7] = -((dVar8 * dVar5 + dVar10 * dVar7 + dVar11 * dVar18 + dStack_140) * dVar4);
    param_1[8] = -(dVar5 * dVar11 + local_138 + (dVar18 * dVar12 - dVar7 * dVar13)) * dVar14;
    param_1[9] = local_f8 ^ 0x8000000000000000;
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


