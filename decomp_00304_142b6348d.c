// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142b6348d FUN_142b6348d body=2709 status=ok
// SIG undefined FUN_142b6348d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_142b6348d(double *param_1,longlong *param_2,uint param_3,uint param_4)

{
  longlong *plVar1;
  longlong lVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  longlong lVar10;
  double *pdVar11;
  uint uVar12;
  double *pdVar13;
  longlong lVar14;
  undefined1 (*pauVar15) [16];
  longlong *plVar16;
  double *pdVar17;
  uint uVar18;
  double *pdVar19;
  undefined1 (*pauVar20) [16];
  ulonglong uVar21;
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  double dVar33;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  double dVar39;
  undefined1 auVar38 [16];
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auStack_318 [32];
  undefined1 local_2f8 [16];
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  pdVar13 = (double *)&DAT_14c846480;
  pdVar11 = param_1;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *pdVar11 = *pdVar13;
    pdVar13 = pdVar13 + 1;
    pdVar11 = pdVar11 + 1;
  }
  dVar46 = *param_1;
  dVar22 = param_1[1];
  auVar38 = *(undefined1 (*) [16])(param_1 + 2);
  dVar26 = param_1[6];
  dVar24 = param_1[7];
  auVar45 = *(undefined1 (*) [16])(param_1 + 10);
  auVar32 = *(undefined1 (*) [16])(param_1 + 8);
  dVar27 = param_1[4];
  dVar29 = param_1[5];
  do {
    plVar1 = (longlong *)param_2[1];
    if (plVar1 == (longlong *)0x0) {
      lVar10 = *param_2;
    }
    else {
      lVar10 = *param_2;
      if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
        lVar2 = *(longlong *)(*(longlong *)(lVar10 + 0x20) + (longlong)(int)param_3 * 0xc);
        uVar12 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar18 = (uint)lVar2 & 0xffff;
        plVar16 = plVar1 + 7;
        if ((longlong *)plVar1[8] != (longlong *)0x0) {
          plVar16 = (longlong *)plVar1[8];
        }
        iVar9 = *(int *)((longlong)plVar16 +
                        (ulonglong)
                        ((int)plVar1[9] - 1U &
                        (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar18) +
                        (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar18 >> 4)) * 4);
        if (iVar9 != -1) {
          do {
            lVar14 = *plVar1 + (longlong)iVar9 * 0x80;
            if (*(longlong *)(*plVar1 + (longlong)iVar9 * 0x80) == lVar2) {
              pdVar13 = (double *)(lVar14 + 0x10);
              if (pdVar13 != (double *)0x0 && lVar14 != 0) {
                pdVar11 = (double *)(lVar14 + 0x20);
                pdVar17 = (double *)(lVar14 + 0x30);
                pdVar19 = (double *)(lVar14 + 0x40);
                pauVar20 = (undefined1 (*) [16])(lVar14 + 0x50);
                pauVar15 = (undefined1 (*) [16])(lVar14 + 0x60);
                goto LAB_142b63651;
              }
              break;
            }
            iVar9 = *(int *)(lVar14 + 0x70);
          } while (iVar9 != -1);
        }
      }
    }
    lVar2 = *(longlong *)(lVar10 + 0x30);
    lVar14 = (longlong)(int)param_3 * 0x60;
    pdVar13 = (double *)(lVar2 + lVar14);
    pdVar11 = (double *)(lVar2 + lVar14 + 0x10);
    pdVar17 = (double *)(lVar2 + lVar14 + 0x20);
    pdVar19 = (double *)(lVar2 + lVar14 + 0x30);
    pauVar20 = (undefined1 (*) [16])(lVar2 + lVar14 + 0x40);
    pauVar15 = (undefined1 (*) [16])(lVar2 + lVar14 + 0x50);
LAB_142b63651:
    dVar5 = *pdVar13;
    dVar6 = pdVar13[1];
    dVar7 = *pdVar11;
    dVar8 = pdVar11[1];
    local_2d8 = *pdVar17;
    dStack_2d0 = pdVar17[1];
    auVar34 = *pauVar20;
    dVar33 = auVar34._0_8_;
    dVar44 = auVar34._8_8_;
    auVar35 = *pauVar15;
    dVar41 = auVar35._0_8_;
    dVar3 = auVar35._8_8_;
    auVar34 = minpd(auVar32,auVar34);
    dVar25 = auVar45._0_8_;
    auVar42 = minpd(auVar45,auVar35);
    auVar35._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
    auVar35._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
    iVar9 = movmskpd((int)pdVar11,auVar35);
    auVar34._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
    auVar34._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
    uVar12 = movmskpd((int)pdVar13,auVar34);
    dVar36 = auVar38._0_8_;
    dVar39 = auVar38._8_8_;
    local_2c8._0_8_ = auVar32._0_8_;
    local_2c8._8_8_ = auVar32._8_8_;
    local_2e8 = dVar27;
    dStack_2e0 = dVar29;
    local_2c8 = auVar32;
    if ((uVar12 & 0x3fffffff) == 0 && iVar9 == 0) {
      dVar30 = dVar6 * dVar46;
      dVar49 = dVar6 * dVar22;
      dVar47 = dVar5 * dVar22;
      dVar48 = dVar5 * dVar46;
      dVar43 = dVar46 * dVar7;
      dVar46 = dVar22 * dVar7 * -1.0 + dVar36 * dVar6 + dVar39 * dVar5 * 1.0 + dVar46 * dVar8;
      dVar22 = dVar43 * 1.0 + dVar39 * dVar6 + dVar36 * dVar5 * -1.0 + dVar22 * dVar8;
      dVar27 = dVar27 * dVar33;
      dVar29 = dVar29 * dVar44;
      dVar26 = dVar26 * dVar41;
      dVar24 = dVar24 * dVar3;
      dVar37 = dVar29 * dVar5 - dVar6 * dVar27;
      dVar40 = dVar26 * dVar6 - dVar7 * dVar29;
      dVar43 = dVar27 * dVar7 - dVar5 * dVar26;
      dVar50 = dVar24 * dVar8 - dVar8 * dVar24;
      dVar40 = dVar40 + dVar40;
      dVar43 = dVar43 + dVar43;
      dVar37 = dVar37 + dVar37;
      dVar50 = dVar50 + dVar50;
      dVar27 = local_2d8 + (dVar37 * dVar6 - dVar7 * dVar43) + dVar8 * dVar40 + dVar27;
      dVar29 = dStack_2d0 + (dVar40 * dVar7 - dVar37 * dVar5) + dVar8 * dVar43 + dVar29;
      dVar26 = *pdVar19 + (dVar43 * dVar5 - dVar6 * dVar40) + dVar8 * dVar37 + dVar26;
      dVar24 = pdVar19[1] + (dVar50 * dVar8 - dVar50 * dVar8) + dVar8 * dVar50 + dVar24;
      auVar32._0_8_ = (double)local_2c8._0_8_ * dVar33;
      auVar32._8_8_ = (double)local_2c8._8_8_ * dVar44;
      auVar42._0_8_ = dVar25 * dVar41;
      auVar42._8_8_ = auVar45._8_8_ * dVar3;
      auVar38._8_8_ = dVar36 * dVar7 * -1.0 + ((dVar48 * -1.0 + dVar39 * dVar8) - dVar49);
      auVar38._0_8_ = dVar39 * dVar7 * 1.0 + ((dVar47 * 1.0 + dVar36 * dVar8) - dVar30);
      local_2f8 = auVar45;
    }
    else {
      dVar43 = dVar6 + dVar6;
      dVar49 = dVar7 + dVar7;
      dVar30 = dVar5 * (dVar5 + dVar5);
      local_2b8._8_4_ = SUB84(dVar24,0);
      local_2b8._0_8_ = dVar26;
      local_2b8._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
      dVar50 = (dVar5 + dVar5) * dVar8;
      local_2a8 = dVar25 * dVar41;
      dStack_2a0 = auVar45._8_8_ * dVar3;
      local_1a8 = (1.0 - (dVar30 + dVar6 * dVar43)) * dVar41;
      local_1d8 = (dVar43 * dVar5 - dVar49 * dVar8) * dVar44;
      dVar24 = (dVar49 * dVar6 - dVar50) * dVar41;
      local_2f8._8_8_ = (double)local_2c8._8_8_ * dVar44;
      local_2f8._0_8_ = (double)local_2c8._0_8_ * dVar33;
      local_1f8 = (1.0 - (dVar7 * dVar49 + dVar6 * dVar43)) * dVar33;
      dStack_1d0 = (1.0 - (dVar7 * dVar49 + dVar30)) * dVar44;
      dStack_1f0 = (dVar43 * dVar5 + dVar49 * dVar8) * dVar33;
      local_1c8 = (dVar49 * dVar6 + dVar50) * dVar44;
      local_1e8 = (dVar5 * dVar49 - dVar43 * dVar8) * dVar33;
      uStack_1e0 = 0;
      uStack_1c0 = 0;
      local_1b8._8_4_ = SUB84(dVar24,0);
      local_1b8._0_8_ = (dVar43 * dVar8 + dVar5 * dVar49) * dVar41;
      local_1b8._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
      uStack_1a0 = 0;
      uStack_180 = 0x3ff0000000000000;
      dVar33 = dVar22 + dVar22;
      dVar41 = dVar36 + dVar36;
      dVar24 = dVar46 * (dVar46 + dVar46);
      local_228 = (1.0 - (dVar24 + dVar22 * dVar33)) * dVar25;
      dVar44 = (dVar46 + dVar46) * dVar39;
      local_238 = (dVar33 * dVar39 + dVar46 * dVar41) * dVar25;
      local_258 = (dVar33 * dVar46 - dVar41 * dVar39) * (double)local_2c8._8_8_;
      dStack_230 = (dVar41 * dVar22 - dVar44) * dVar25;
      local_278 = (1.0 - (dVar36 * dVar41 + dVar22 * dVar33)) * (double)local_2c8._0_8_;
      dStack_250 = (1.0 - (dVar36 * dVar41 + dVar24)) * (double)local_2c8._8_8_;
      dStack_270 = (dVar33 * dVar46 + dVar41 * dVar39) * (double)local_2c8._0_8_;
      local_248 = (dVar41 * dVar22 + dVar44) * (double)local_2c8._8_8_;
      local_268 = (dVar46 * dVar41 - dVar33 * dVar39) * (double)local_2c8._0_8_;
      uStack_260 = 0;
      uStack_240 = 0;
      uStack_220 = 0;
      uStack_200 = 0x3ff0000000000000;
      local_218 = dVar27;
      dStack_210 = dVar29;
      local_208 = dVar26;
      local_198 = local_2d8;
      dStack_190 = dStack_2d0;
      local_188 = *pdVar19;
      FUN_1447fea8d(&local_178,&local_278,&local_1f8);
      auVar38 = _DAT_149934d80;
      local_2e8 = local_168;
      dVar46 = local_168 * local_168 + local_178 * local_178 + local_170 * local_170;
      dVar26 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
      dVar24 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
      uVar21 = -(ulonglong)(0.0 <= dVar46 + -9.99999993922529e-09);
      dVar46 = (double)(~uVar21 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar46)) & uVar21);
      uVar21 = -(ulonglong)(0.0 <= dVar26 + -9.99999993922529e-09);
      dVar26 = (double)(~uVar21 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar26)) & uVar21);
      uVar21 = -(ulonglong)(0.0 <= dVar24 + -9.99999993922529e-09);
      dVar24 = (double)(~uVar21 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar24)) & uVar21);
      auVar45._8_8_ = -(ulonglong)(0.0 <= (double)local_2f8._8_8_);
      auVar45._0_8_ = -(ulonglong)(0.0 <= (double)local_2f8._0_8_);
      auVar45 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar45);
      auVar42._8_8_ = dStack_2a0;
      auVar42._0_8_ = local_2a8;
      dVar22 = (double)(~-(ulonglong)(0.0 <= local_2a8) & 0xbff0000000000000 |
                       (ulonglong)((uint)(-(ulonglong)(0.0 <= local_2a8) >> 0x20) & 0x3ff00000) <<
                       0x20);
      dVar27 = auVar45._0_8_;
      local_178 = local_178 * dVar46 * dVar27;
      local_170 = local_170 * dVar46 * dVar27;
      local_168 = dVar46 * local_168 * dVar27;
      dVar46 = auVar45._8_8_;
      local_148 = dVar26 * local_148 * dVar46;
      local_150 = local_150 * dVar26 * dVar46;
      local_158 = dVar46 * local_158 * dVar26;
      local_128 = dVar24 * local_128 * dVar22;
      local_130 = local_130 * dVar24 * dVar22;
      local_138 = dVar22 * local_138 * dVar24;
      FUN_14481fd10(&local_298,&local_178);
      dVar26 = local_288 * local_288 + local_298 * local_298;
      dVar24 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
      auVar28._0_8_ = dVar26 + dVar24;
      auVar28._8_8_ = dVar26 + dVar24;
      auVar23._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_);
      auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_);
      auVar45 = sqrtpd(auVar28,auVar28);
      auVar45 = divpd(auVar38,auVar45);
      auVar31._0_8_ = auVar45._0_8_ * local_288;
      auVar31._8_8_ = auVar45._8_8_ * dStack_280;
      auVar38 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar31,auVar23);
      dVar46 = (double)((ulonglong)(local_298 * auVar45._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_));
      dVar22 = (double)((ulonglong)(dStack_290 * auVar45._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_));
      dVar24 = 0.0;
      lVar10 = *param_2;
      auVar32 = local_2f8;
      dVar26 = local_108;
      dVar27 = local_118;
      dVar29 = dStack_110;
    }
    uVar12 = 0xffffffff;
    if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(lVar10 + 0x28))) {
      uVar12 = *(uint *)(*(longlong *)(lVar10 + 0x20) + 8 + (ulonglong)param_3 * 0xc);
    }
    auVar45 = auVar42;
    param_3 = uVar12;
    if (uVar12 == param_4) {
      *(undefined1 (*) [16])(param_1 + 8) = auVar32;
      *(undefined1 (*) [16])(param_1 + 10) = auVar42;
      *(undefined1 (*) [16])(param_1 + 2) = auVar38;
      param_1[4] = dVar27;
      param_1[5] = dVar29;
      auVar4._8_4_ = SUB84(dVar24,0);
      auVar4._0_8_ = dVar26;
      auVar4._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 6) = auVar4;
      *param_1 = dVar46;
      param_1[1] = dVar22;
      if ((local_f0 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
  } while( true );
}



// FUNCTION 142b63f24 FUN_142b63f24 body=180 status=ok
// SIG undefined FUN_142b63f24(void)

void FUN_142b63f24(int *param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = param_1[6];
  if ((longlong)iVar1 != 0) {
    lVar4 = *(longlong *)(param_1 + 4);
    lVar5 = 0;
    do {
      *param_1 = *param_1 + *(int *)(lVar4 + 8 + lVar5);
      if (*(longlong *)(lVar4 + lVar5) != 0) {
        FUN_1400020a8();
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar5);
    param_1[6] = 0;
    if (param_1[7] != 0) {
      FUN_147121d9a(param_1 + 4);
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (longlong)*param_1;
    lVar5 = SUB168(auVar2 * ZEXT816(0x28),0);
    lVar4 = -1;
    if (SUB168(auVar2 * ZEXT816(0x28),8) == 0) {
      lVar4 = lVar5 + (ulonglong)(lVar5 == 0);
    }
    uVar3 = FUN_14001cc68(lVar4,0x10);
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 2) = uVar3;
  }
  param_1[1] = 0;
  return;
}



// FUNCTION 142b63fd8 FUN_142b63fd8 body=206 status=ok
// SIG undefined FUN_142b63fd8(void)

void FUN_142b63fd8(longlong param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined1 *local_58;
  undefined4 *local_50;
  longlong local_48;
  code *local_40;
  undefined1 **local_38;
  undefined4 local_30;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  local_29 = param_2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  local_50 = &local_30;
  local_30 = 0;
  local_38 = &local_58;
  local_40 = FUN_142b714f8;
  local_68 = puVar2;
  local_58 = &local_29;
  local_48 = param_1;
  FUN_1449d23e6(param_1);
  FUN_14117429c(param_1 + 0x420);
  *(undefined4 *)(param_1 + 0x74) = local_30;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    FUN_1400020a8(puVar2);
    puVar2 = puVar1;
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b640a8 FUN_142b640a8 body=3643 status=ok
// SIG undefined FUN_142b640a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b640a8(longlong *param_1,longlong param_2,longlong param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  double *pdVar18;
  ulonglong uVar19;
  double *pdVar20;
  double *pdVar21;
  ulonglong uVar22;
  double dVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  double dVar31;
  undefined1 auVar30 [16];
  undefined1 auVar32 [16];
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
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  double dVar47;
  undefined1 auStack_3f8 [32];
  double local_3d8;
  double local_3d0;
  longlong *local_3c8;
  double *local_3c0;
  undefined1 local_3b8 [16];
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  double local_348;
  double dStack_340;
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  double local_318;
  double dStack_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8 [8];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  double local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  double local_258;
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
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  double *pdVar17;
  
  uVar19 = (ulonglong)param_4;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  puVar4 = *(undefined8 **)(param_2 + 0x20 + (ulonglong)(param_4 != 0) * 0x10);
  if (puVar4 == (undefined8 *)0x0) {
    local_2c8[2] = DAT_14c8464f0;
    local_2c8[0] = DAT_14c8464e0;
    local_2c8[1] = DAT_14c8464e8;
    lVar15 = uVar19 * 0xd0;
    memmove((void *)(param_3 + lVar15),&DAT_14c846480,0x60);
    *(undefined **)(param_3 + 0x60 + lVar15) = &DAT_14c9abd20;
    *(undefined **)(param_3 + 0x68 + lVar15) = &DAT_14c9abd20;
    pdVar17 = (double *)(param_3 + 0x70 + lVar15);
    *pdVar17 = local_2c8[0];
    pdVar17[1] = local_2c8[1];
    *(double *)(param_3 + 0x80 + lVar15) = local_2c8[2];
    puVar4 = (undefined8 *)(param_3 + 0x88 + lVar15);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = (undefined8 *)(param_3 + 0x98 + lVar15);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = (undefined8 *)(param_3 + 0xa8 + lVar15);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = (undefined8 *)(param_3 + 0xb8 + lVar15);
    *puVar4 = 0;
    puVar4[1] = 0;
    *(undefined8 *)(param_3 + 200 + lVar15) = 0;
  }
  else {
    iVar11 = (**(code **)*puVar4)(puVar4);
    if (((iVar11 == 1) && (lVar15 = puVar4[0x56], lVar15 != 0)) &&
       (*(char *)(lVar15 + 0x151) == '\x01')) {
      if (*(int *)(lVar15 + 0x10) < 1) {
        lVar16 = 0;
      }
      else {
        lVar16 = **(longlong **)(lVar15 + 8);
      }
      pdVar17 = (double *)(param_3 + uVar19 * 0xd0);
      param_3 = param_3 + uVar19 * 0xd0;
      *(undefined8 *)(param_3 + 0x80) = *(undefined8 *)(lVar15 + 0x108);
      uVar13 = *(undefined4 *)(lVar15 + 0xfc);
      uVar9 = *(undefined4 *)(lVar15 + 0x100);
      uVar10 = *(undefined4 *)(lVar15 + 0x104);
      *(undefined4 *)(param_3 + 0x70) = *(undefined4 *)(lVar15 + 0xf8);
      *(undefined4 *)(param_3 + 0x74) = uVar13;
      *(undefined4 *)(param_3 + 0x78) = uVar9;
      *(undefined4 *)(param_3 + 0x7c) = uVar10;
      local_3c8 = param_1;
      FUN_140b8ccd6(lVar15,local_2c8);
      pdVar21 = local_2c8;
      pdVar18 = (double *)(param_3 + 0x88);
      for (lVar14 = 9; lVar14 != 0; lVar14 = lVar14 + -1) {
        *pdVar18 = *pdVar21;
        pdVar21 = pdVar21 + 1;
        pdVar18 = pdVar18 + 1;
      }
      pdVar21 = local_2c8;
      FUN_1409acb1a(lVar15,pdVar21);
      pdVar18 = pdVar21;
      pdVar20 = pdVar17;
      for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
        *pdVar20 = *pdVar18;
        pdVar18 = pdVar18 + 1;
        pdVar20 = pdVar20 + 1;
      }
      *(longlong *)(param_3 + 0x60) = lVar16 + 0xf0;
      *(longlong *)(param_3 + 0x68) = lVar16 + 0xd8;
      local_3c0 = pdVar17;
      FUN_144941734(puVar4,&local_3a8);
      param_1 = local_3c8;
      lVar15 = local_3c8[2];
      lVar16 = uVar19 * 0x60;
      dVar25 = *(double *)(lVar15 + lVar16);
      dVar28 = ((double *)(lVar15 + lVar16))[1];
      pdVar17 = (double *)(lVar15 + 0x10 + lVar16);
      dVar31 = *pdVar17;
      dVar35 = pdVar17[1];
      pdVar17 = (double *)(lVar15 + 0x20 + lVar16);
      dVar38 = *pdVar17;
      dVar8 = pdVar17[1];
      dVar37 = *(double *)(lVar15 + 0x30 + lVar16);
      local_318 = 0.0;
      dStack_310 = 0.0;
      local_328 = ZEXT816(0);
      dVar44 = local_368._0_8_;
      dVar40 = local_368._8_8_;
      dVar42 = local_358._0_8_;
      auVar29 = minpd(local_368,_DAT_149934d80);
      auVar32 = minpd(local_358,ZEXT816(0x3ff0000000000000));
      auVar23._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
      auVar23._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
      iVar11 = movmskpd((int)lVar15,auVar23);
      auVar29._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
      auVar29._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
      uVar12 = movmskpd((int)lVar16,auVar29);
      local_3b8 = local_368;
      if ((uVar12 & 0x3fffffff) == 0 && iVar11 == 0) {
        dVar36 = dStack_3a0 * dVar31 * -1.0 +
                 local_398 * dVar28 + dVar25 * dStack_390 * 1.0 + dVar35 * local_3a8;
        dVar39 = local_3a8 * dVar31 * 1.0 +
                 dStack_390 * dVar28 + dVar25 * local_398 * -1.0 + dVar35 * dStack_3a0;
        auVar46._0_8_ =
             dStack_390 * dVar31 * 1.0 +
             ((dVar25 * dStack_3a0 * 1.0 + dVar35 * local_398) - dVar28 * local_3a8);
        auVar46._8_8_ =
             local_398 * dVar31 * -1.0 +
             ((dVar25 * local_3a8 * -1.0 + dVar35 * dStack_390) - dVar28 * dStack_3a0);
        local_378 = local_378 * 1.0;
        dStack_370 = dStack_370 * 0.0;
        dVar44 = dStack_380 * dVar25 - dVar28 * local_388;
        dVar40 = local_378 * dVar28 - dVar31 * dStack_380;
        dVar33 = local_388 * dVar31 - dVar25 * local_378;
        dVar34 = dStack_370 * dVar35 - dVar35 * dStack_370;
        dVar40 = dVar40 + dVar40;
        dVar33 = dVar33 + dVar33;
        dVar44 = dVar44 + dVar44;
        dVar34 = dVar34 + dVar34;
        dVar38 = dVar38 + (dVar44 * dVar28 - dVar31 * dVar33) + dVar35 * dVar40 + local_388;
        dVar8 = dVar8 + (dVar40 * dVar31 - dVar44 * dVar25) + dVar35 * dVar33 + dStack_380;
        dVar37 = dVar37 + (dVar33 * dVar25 - dVar28 * dVar40) + dVar35 * dVar44 + local_378;
        dStack_310 = (dVar34 * dVar35 - dVar34 * dVar35) + dVar35 * dVar34 + dStack_370 + 0.0;
        local_328._8_4_ = SUB84(dVar8,0);
        local_328._0_8_ = dVar38;
        local_328._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        auVar32._8_8_ = local_358._8_8_ * 0.0;
        auVar32._0_8_ = dVar42 * 1.0;
        uVar13 = 0;
      }
      else {
        dVar33 = dVar28 + dVar28;
        dVar36 = dVar31 + dVar31;
        dVar34 = dVar25 * (dVar25 + dVar25);
        local_178 = 1.0 - (dVar31 * dVar36 + dVar28 * dVar33);
        dStack_150 = 1.0 - (dVar31 * dVar36 + dVar34);
        local_128 = 1.0 - (dVar34 + dVar28 * dVar33);
        dStack_130 = (dVar25 + dVar25) * dVar35;
        dStack_170 = dVar33 * dVar25 + dVar36 * dVar35;
        local_148 = dVar36 * dVar28 + dStack_130;
        local_158 = dVar33 * dVar25 - dVar36 * dVar35;
        dStack_130 = dVar36 * dVar28 - dStack_130;
        local_138 = dVar33 * dVar35 + dVar25 * dVar36;
        local_168 = dVar25 * dVar36 - dVar33 * dVar35;
        uStack_160 = 0;
        uStack_140 = 0;
        uStack_120 = 0;
        uStack_100 = 0x3ff0000000000000;
        dVar25 = dStack_3a0 + dStack_3a0;
        dVar28 = local_398 + local_398;
        dVar35 = local_3a8 * (local_3a8 + local_3a8);
        local_1f8 = (1.0 - (local_398 * dVar28 + dStack_3a0 * dVar25)) * dVar44;
        dStack_1d0 = (1.0 - (local_398 * dVar28 + dVar35)) * dVar40;
        dVar31 = (local_3a8 + local_3a8) * dStack_390;
        local_1d8 = (dVar25 * local_3a8 - dVar28 * dStack_390) * dVar40;
        dStack_1b0 = (dVar28 * dStack_3a0 - dVar31) * dVar42;
        local_1b8 = (dVar25 * dStack_390 + local_3a8 * dVar28) * dVar42;
        dStack_1f0 = (dVar25 * local_3a8 + dVar28 * dStack_390) * dVar44;
        local_1c8 = (dVar28 * dStack_3a0 + dVar31) * dVar40;
        local_1e8 = (local_3a8 * dVar28 - dVar25 * dStack_390) * dVar44;
        uStack_1e0 = 0;
        uStack_1c0 = 0;
        local_1a8 = (1.0 - (dVar35 + dStack_3a0 * dVar25)) * dVar42;
        uStack_1a0 = 0;
        local_198 = local_388;
        dStack_190 = dStack_380;
        local_188 = local_378;
        uStack_180 = 0x3ff0000000000000;
        auVar32._0_8_ = dVar42 * 1.0;
        auVar32._8_8_ = local_358._8_8_ * 0.0;
        local_118 = dVar38;
        dStack_110 = dVar8;
        local_108 = dVar37;
        FUN_1447fea8d(local_2c8);
        local_3d0 = local_2c8[2];
        dVar37 = local_2c8[2] * local_2c8[2] +
                 local_2c8[0] * local_2c8[0] + local_2c8[1] * local_2c8[1];
        local_3d8 = local_2c8[6];
        dVar44 = local_2c8[6] * local_2c8[6] +
                 local_2c8[4] * local_2c8[4] + local_2c8[5] * local_2c8[5];
        dVar42 = (double)local_278._0_8_ * (double)local_278._0_8_ +
                 (double)local_288._0_8_ * (double)local_288._0_8_ +
                 (double)local_288._8_8_ * (double)local_288._8_8_;
        uVar22 = -(ulonglong)(0.0 <= dVar37 + -9.99999993922529e-09);
        dVar37 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar37)) & uVar22);
        uVar22 = -(ulonglong)(0.0 <= dVar44 + -9.99999993922529e-09);
        dVar44 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar44)) & uVar22);
        uVar22 = -(ulonglong)(0.0 <= dVar42 + -9.99999993922529e-09);
        dVar42 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar42)) & uVar22);
        auVar5._8_4_ = (int)-(ulonglong)(0.0 <= (double)local_3b8._8_8_);
        auVar5._0_8_ = -(ulonglong)(0.0 <= (double)local_3b8._0_8_);
        auVar5._12_4_ = (int)(-(ulonglong)(0.0 <= (double)local_3b8._8_8_) >> 0x20);
        auVar29 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar5);
        dVar38 = (double)(~-(ulonglong)(0.0 <= auVar32._0_8_) & 0xbff0000000000000 |
                         (ulonglong)
                         ((uint)(-(ulonglong)(0.0 <= auVar32._0_8_) >> 0x20) & 0x3ff00000) << 0x20);
        dVar40 = auVar29._0_8_;
        local_2c8[0] = local_2c8[0] * dVar37 * dVar40;
        local_2c8[1] = local_2c8[1] * dVar37 * dVar40;
        local_2c8[2] = dVar37 * local_2c8[2] * dVar40;
        dVar37 = auVar29._8_8_;
        local_2c8[6] = dVar44 * local_2c8[6] * dVar37;
        local_2c8[5] = local_2c8[5] * dVar44 * dVar37;
        local_2c8[4] = dVar37 * local_2c8[4] * dVar44;
        local_288._8_8_ = (double)local_288._8_8_ * dVar42 * dVar38;
        local_288._0_8_ = dVar38 * (double)local_288._0_8_ * dVar42;
        local_278._0_8_ = dVar42 * (double)local_278._0_8_ * dVar38;
        pdVar17 = &local_2e8;
        iVar11 = FUN_14481fd10(pdVar17,local_2c8);
        uVar13 = SUB84(pdVar17,0);
        dVar37 = local_2d8 * local_2d8 + local_2e8 * local_2e8;
        dVar44 = dStack_2d0 * dStack_2d0 + dStack_2e0 * dStack_2e0;
        auVar26._0_8_ = dVar37 + dVar44;
        auVar26._8_8_ = dVar37 + dVar44;
        uVar22 = -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_);
        auVar29 = sqrtpd(auVar26,auVar26);
        auVar29 = divpd(_DAT_149934d80,auVar29);
        auVar30._0_8_ = auVar29._0_8_ * local_2d8;
        auVar30._8_8_ = auVar29._8_8_ * dStack_2d0;
        dVar36 = (double)((ulonglong)(local_2e8 * auVar29._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_));
        dVar39 = (double)((ulonglong)(dStack_2e0 * auVar29._8_8_) & uVar22);
        auVar6._8_4_ = (int)uVar22;
        auVar6._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_);
        auVar6._12_4_ = (int)(uVar22 >> 0x20);
        auVar46 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar30,auVar6);
        dVar8 = (double)CONCAT44(uStack_25c,uStack_260);
        local_328._8_4_ = uStack_260;
        local_328._0_8_ = local_268;
        local_328._12_4_ = uStack_25c;
        dStack_310 = 0.0;
        dVar38 = local_268;
        dVar37 = local_258;
      }
      pdVar17 = local_3c0;
      auVar29 = _DAT_149934d80;
      local_308 = local_3b8;
      local_2c8[0] = 0.0;
      local_2c8[1] = 0.0;
      local_2c8[2] = 0.0;
      local_2c8[3] = 1.0;
      local_2c8[4] = 0.0;
      local_2c8[5] = 0.0;
      local_2c8[6] = 0.0;
      local_2c8[7] = 0.0;
      local_288 = _DAT_149934d80;
      local_278 = ZEXT816(0x3ff0000000000000);
      dVar44 = local_3c0[2] * local_3c0[2] + *local_3c0 * *local_3c0;
      dVar42 = local_3c0[3] * local_3c0[3] + local_3c0[1] * local_3c0[1];
      auVar27._8_8_ =
           -(ulonglong)(0.009999999776482582 < ABS(DAT_149934d80._8_8_ - (dVar44 + dVar42)));
      auVar27._0_8_ =
           -(ulonglong)(0.009999999776482582 < ABS((double)DAT_149934d80 - (dVar44 + dVar42)));
      iVar11 = movmskpd(iVar11,auVar27);
      local_348 = dVar36;
      dStack_340 = dVar39;
      local_338 = auVar46;
      local_318 = dVar37;
      local_2f8 = auVar32;
      if (iVar11 == 0) {
        auVar23 = minpd(local_3b8,*(undefined1 (*) [16])(local_3c0 + 8));
        auVar32 = minpd(auVar32,*(undefined1 (*) [16])(local_3c0 + 10));
        auVar24._8_8_ = -(ulonglong)(auVar23._8_8_ < 0.0);
        auVar24._0_8_ = -(ulonglong)(auVar23._0_8_ < 0.0);
        iVar11 = movmskpd(0,auVar24);
        auVar43._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
        auVar43._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
        uVar12 = movmskpd(uVar13,auVar43);
        if ((uVar12 & 0x3fffffff) == 0 && iVar11 == 0) {
          if (*(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110) <
              DAT_14c8460b0) {
            FUN_144b3d300(&DAT_14c8460b0);
            if (DAT_14c8460b0 == -1) {
              DAT_14c8460a0._0_4_ = 1e-08;
              DAT_14c8460a0._4_4_ = 1e-08;
              DAT_14c8460a8._0_4_ = 1e-08;
              DAT_14c8460a8._4_4_ = 0x322bcc77;
              _Init_thread_footer(&DAT_14c8460b0);
            }
          }
          auVar23 = *(undefined1 (*) [16])(pdVar17 + 8);
          auVar29 = divpd(auVar29,auVar23);
          auVar32 = divpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(pdVar17 + 10));
          dVar38 = dVar38 - pdVar17[4];
          dVar8 = dVar8 - pdVar17[5];
          dVar37 = dVar37 - pdVar17[6];
          dVar35 = -*pdVar17;
          dVar33 = -pdVar17[1];
          dVar34 = pdVar17[2] * -1.0;
          dVar41 = pdVar17[3] * 1.0;
          dVar40 = dVar8 * dVar35 - dVar38 * dVar33;
          dVar28 = dVar37 * dVar33 - dVar8 * dVar34;
          dVar31 = dVar38 * dVar34 - dVar37 * dVar35;
          dVar28 = dVar28 + dVar28;
          dVar31 = dVar31 + dVar31;
          dVar40 = dVar40 + dVar40;
          dVar45 = auVar46._0_8_;
          dVar47 = auVar46._8_8_;
          dVar42 = pdVar17[1];
          dVar44 = pdVar17[1];
          local_2c8[0] = dVar39 * dVar34 * -1.0 +
                         ((dVar36 * dVar41 - *pdVar17 * dVar47 * 1.0) - dVar45 * dVar42);
          local_2c8[1] = dVar36 * dVar34 * 1.0 +
                         ((dVar39 * dVar41 - *pdVar17 * dVar45 * -1.0) - dVar47 * dVar44);
          dVar25 = ((dVar31 * dVar35 - dVar33 * dVar28) + dVar41 * dVar40 + dVar37) *
                   (double)(-(ulonglong)
                             ((double)(float)DAT_14c8460a8 <
                             ABS(SUB168(*(undefined1 (*) [16])(pdVar17 + 10),0))) & auVar32._0_8_);
          dVar38 = ((dVar40 * dVar33 - dVar34 * dVar31) + dVar41 * dVar28 + dVar38) *
                   (double)(-(ulonglong)((double)(float)DAT_14c8460a0 < ABS(auVar23._0_8_)) &
                           auVar29._0_8_);
          dVar8 = ((dVar28 * dVar34 - dVar40 * dVar35) + dVar41 * dVar31 + dVar8) *
                  (double)(-(ulonglong)((double)DAT_14c8460a0._4_4_ < ABS(auVar23._8_8_)) &
                          auVar29._8_8_);
          dVar37 = dVar47 * dVar34 * 1.0 +
                   dVar42 * dVar36 + (dVar41 * dVar45 - *pdVar17 * dVar39 * 1.0);
          dVar44 = dVar45 * dVar34 * -1.0 +
                   dVar44 * dVar39 + (dVar41 * dVar47 - *pdVar17 * dVar36 * -1.0);
        }
        else {
          FUN_1402db8fa(pdVar21,&local_348,local_3c0);
          dVar25 = local_2c8[6];
          dVar38 = local_2c8[4];
          dVar8 = local_2c8[5];
          dVar37 = local_2c8[2];
          dVar44 = local_2c8[3];
        }
      }
      else {
        pdVar21 = (double *)&DAT_14c846480;
        dVar25 = DAT_14c8464b0;
        dVar38 = DAT_14c8464a0;
        dVar8 = DAT_14c8464a8;
        dVar37 = DAT_14c846490;
        dVar44 = DAT_14c846498;
      }
      dVar42 = *pdVar21;
      dVar40 = pdVar21[1];
      lVar15 = *param_1;
      auVar7._8_4_ = SUB84(dVar8,0);
      auVar7._0_8_ = dVar38;
      auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      *(undefined1 (*) [16])(lVar15 + uVar19 * 0x18) = auVar7;
      *(double *)(lVar15 + 0x10 + uVar19 * 0x18) = dVar25;
      goto LAB_142b642ae;
    }
    FUN_14481f014(local_2c8,puVar4,*(undefined8 *)(param_2 + 0x230 + (ulonglong)param_4 * 8),0);
    memcpy((void *)(param_3 + (ulonglong)param_4 * 0xd0),local_2c8,0xd0);
  }
  uVar19 = (ulonglong)param_4;
  lVar15 = *param_1;
  lVar16 = uVar19 * 0x60;
  puVar2 = (undefined4 *)(param_1[2] + 0x20 + lVar16);
  uVar13 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  uVar3 = *(undefined8 *)(param_1[2] + 0x30 + lVar16);
  puVar1 = (undefined4 *)(lVar15 + uVar19 * 0x18);
  *puVar1 = *puVar2;
  puVar1[1] = uVar13;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  *(undefined8 *)(lVar15 + 0x10 + uVar19 * 0x18) = uVar3;
  pdVar17 = (double *)(param_1[2] + lVar16);
  dVar42 = *pdVar17;
  dVar40 = pdVar17[1];
  pdVar17 = (double *)(param_1[2] + 0x10 + lVar16);
  dVar37 = *pdVar17;
  dVar44 = pdVar17[1];
LAB_142b642ae:
  lVar15 = param_1[1];
  pdVar17 = (double *)(lVar15 + (ulonglong)param_4 * 0x20);
  *pdVar17 = dVar42;
  pdVar17[1] = dVar40;
  pdVar17 = (double *)(lVar15 + 0x10 + (ulonglong)param_4 * 0x20);
  *pdVar17 = dVar37;
  pdVar17[1] = dVar44;
  if ((local_f0 ^ (ulonglong)auStack_3f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b64ee4 FUN_142b64ee4 body=480 status=ok
// SIG undefined FUN_142b64ee4(void)

void FUN_142b64ee4(longlong param_1,undefined1 param_2)

{
  int iVar1;
  void *_Dst;
  int *piVar2;
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  void **local_d0;
  undefined4 *local_c8;
  undefined1 *local_c0;
  undefined4 *local_b8;
  undefined4 *local_b0;
  double *local_a8;
  double *local_a0;
  undefined4 *local_98;
  code *local_90;
  undefined4 **local_88;
  undefined4 local_7c;
  void *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  double local_60;
  double local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_49 = param_2;
  FUN_1410ab75e(param_1 + 0x3e0);
  local_58 = 1.0 / *(double *)(param_1 + 0x50);
  local_60 = SQRT(*(double *)(param_1 + 0x68) * *(double *)(param_1 + 0x68) +
                  *(double *)(param_1 + 0x58) * *(double *)(param_1 + 0x58) +
                  *(double *)(param_1 + 0x60) * *(double *)(param_1 + 0x60));
  local_64 = 0;
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  iVar1 = *(int *)(param_1 + 0x74);
  _Dst = (void *)FUN_1409be4aa(param_1 + 0x3e0);
  local_78 = _Dst;
  memset(_Dst,0,(longlong)iVar1 * 0x2a0);
  piVar2 = (int *)FUN_142b6ca3c(param_1 + 0x400);
  *(void **)(piVar2 + 2) = _Dst;
  *(double *)(piVar2 + 4) =
       SQRT(*(double *)(param_1 + 0x68) * *(double *)(param_1 + 0x68) +
            *(double *)(param_1 + 0x58) * *(double *)(param_1 + 0x58) +
            *(double *)(param_1 + 0x60) * *(double *)(param_1 + 0x60));
  *piVar2 = iVar1;
  local_d8 = &local_7c;
  local_7c = 0xffffffff;
  local_88 = &local_d8;
  local_c0 = &local_49;
  local_b8 = &local_68;
  local_a8 = &local_60;
  local_a0 = &local_58;
  local_90 = FUN_142b719f6;
  local_d0 = &local_78;
  local_c8 = &local_64;
  local_b0 = &local_6c;
  local_98 = &local_70;
  FUN_1449d23e6(param_1);
  *(undefined2 *)(piVar2 + 6) = (undefined2)local_7c;
  *(undefined2 *)((longlong)piVar2 + 0x1a) = 0;
  piVar2[7] = 0;
  piVar2[8] = 0;
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b650c6 FUN_142b650c6 body=1569 status=ok
// SIG undefined FUN_142b650c6(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_142b650c6(longlong param_1)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  void *_Src;
  double *pdVar5;
  longlong lVar6;
  size_t _Size;
  undefined1 ****ppppuVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  void *pvVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint *puVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  undefined4 uVar25;
  double dVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 auStack_c0 [4];
  undefined8 uStack_a0;
  int aiStack_98 [2];
  undefined1 ****local_90 [4];
  ulonglong local_70;
  undefined1 local_48 [8];
  
  local_70 = DAT_14c707940 ^ (ulonglong)local_48;
  iVar10 = *(int *)(param_1 + 0x404);
  lVar8 = *(longlong *)(param_1 + 0x410);
  iVar20 = *(int *)(param_1 + 0x418);
  lVar23 = (longlong)iVar20;
  iVar9 = iVar10;
  if (lVar23 != 0) {
    lVar16 = 0;
    do {
      iVar9 = iVar9 + *(int *)(lVar8 + 8 + lVar16);
      lVar16 = lVar16 + 0x10;
    } while (lVar23 << 4 != lVar16);
  }
  piVar13 = aiStack_98;
  if (iVar9 != 0) {
    uStack_a0 = 0x142b6514e;
    lVar16 = -((longlong)iVar9 * 0x28 + 0x1eU & 0xfffffffffffffff0);
    local_90[3] = (undefined1 ****)((longlong)aiStack_98 + lVar16);
    pvVar12 = *(void **)(param_1 + 0x408);
    *(undefined8 *)((longlong)auStack_c0 + lVar16) = 0x142b65177;
    memcpy((void *)((longlong)aiStack_98 + lVar16),pvVar12,(longlong)iVar10 * 0x28);
    if (iVar20 != 0) {
      pvVar12 = (void *)((longlong)aiStack_98 + (longlong)iVar10 * 0x28 + lVar16);
      lVar24 = 0;
      do {
        _Size = (longlong)*(int *)(lVar8 + 8 + lVar24) * 0x28;
        _Src = *(void **)(lVar8 + lVar24);
        *(undefined8 *)((longlong)auStack_c0 + lVar16) = 0x142b651af;
        memcpy(pvVar12,_Src,_Size);
        pvVar12 = (void *)((longlong)pvVar12 + _Size);
        lVar24 = lVar24 + 0x10;
      } while (lVar23 * 0x10 != lVar24);
    }
    ppppuVar7 = local_90[3];
    uVar25 = 0xe0000000;
    uVar27 = 0x3e45798e;
    dVar26 = *(double *)(param_1 + 0x38);
    if (9.99999993922529e-09 <= dVar26) {
      uVar25 = SUB84(dVar26,0);
      uVar27 = (undefined4)((ulonglong)dVar26 >> 0x20);
    }
    iVar10 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x70);
    if (iVar10 < DAT_14c75f918) {
      iVar10 = DAT_14c75f918;
    }
    if (0 < *(int *)((longlong)aiStack_98 + lVar16)) {
      lVar8 = 0x298;
      lVar23 = 0;
      do {
        lVar24 = *(longlong *)((longlong)local_90 + lVar16);
        dVar26 = *(double *)(lVar24 + lVar8);
        dVar2 = *(double *)(lVar24 + -0x88 + lVar8);
        dVar3 = *(double *)(lVar24 + -0x90 + lVar8);
        pdVar5 = *(double **)(lVar24 + -0x238 + lVar8);
        *pdVar5 = *pdVar5 - dVar26 * *(double *)(lVar24 + -0x98 + lVar8);
        pdVar5[1] = pdVar5[1] - dVar3 * dVar26;
        pdVar5[2] = pdVar5[2] - dVar2 * dVar26;
        dVar26 = *(double *)(lVar24 + lVar8);
        dVar2 = *(double *)(lVar24 + -0x70 + lVar8);
        dVar3 = *(double *)(lVar24 + -0x78 + lVar8);
        pdVar5 = *(double **)(lVar24 + -0x230 + lVar8);
        *pdVar5 = *pdVar5 - dVar26 * *(double *)(lVar24 + -0x80 + lVar8);
        pdVar5[1] = pdVar5[1] - dVar3 * dVar26;
        pdVar5[2] = pdVar5[2] - dVar2 * dVar26;
        dVar26 = *(double *)(lVar24 + lVar8);
        dVar2 = *(double *)(lVar24 + -0x58 + lVar8);
        dVar3 = *(double *)(lVar24 + -0x60 + lVar8);
        pdVar5 = *(double **)(lVar24 + -0x168 + lVar8);
        *pdVar5 = *pdVar5 - dVar26 * *(double *)(lVar24 + -0x68 + lVar8);
        pdVar5[1] = pdVar5[1] - dVar3 * dVar26;
        pdVar5[2] = pdVar5[2] - dVar2 * dVar26;
        dVar26 = *(double *)(lVar24 + lVar8);
        dVar2 = *(double *)(lVar24 + -0x40 + lVar8);
        dVar3 = *(double *)(lVar24 + -0x48 + lVar8);
        pdVar5 = *(double **)(lVar24 + -0x160 + lVar8);
        *pdVar5 = *pdVar5 - dVar26 * *(double *)(lVar24 + -0x50 + lVar8);
        pdVar5[1] = pdVar5[1] - dVar3 * dVar26;
        pdVar5[2] = pdVar5[2] - dVar2 * dVar26;
        lVar23 = lVar23 + 1;
        lVar8 = lVar8 + 0x2a0;
      } while (lVar23 < *(int *)((longlong)aiStack_98 + lVar16));
    }
    if (0 < iVar10) {
      do {
        iVar10 = iVar10 + -1;
        *(undefined8 *)((longlong)auStack_c0 + lVar16) = 0x142b65377;
        dVar26 = (double)FUN_144b0c238(ppppuVar7);
        if (dVar26 <= (double)CONCAT44(uVar27,uVar25) && (double)CONCAT44(uVar27,uVar25) != dVar26)
        break;
      } while (iVar10 != 0);
    }
    iVar10 = *(int *)(param_1 + 0xb0);
    if (0 < iVar10) {
      lVar8 = 0;
      do {
        lVar23 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + lVar8 * 8);
        if (0 < *(int *)(lVar23 + 0x20)) {
          lVar24 = 0;
          do {
            lVar6 = *(longlong *)(*(longlong *)(lVar23 + 0x18) + lVar24 * 8);
            iVar10 = *(int *)(lVar6 + 0x7f4);
            if (iVar10 == -1) {
              *(undefined4 *)(lVar6 + 0x818) = 0xffffffff;
              *(undefined4 *)(lVar6 + 0x81c) = 0xffffffff;
              *(undefined4 *)(lVar6 + 0x820) = 0xffffffff;
              *(undefined4 *)(lVar6 + 0x824) = 0xffffffff;
              *(undefined4 *)(lVar6 + 0x808) = 0xffffffff;
              *(undefined4 *)(lVar6 + 0x80c) = 0xffffffff;
              *(undefined4 *)(lVar6 + 0x810) = 0xffffffff;
              *(undefined4 *)(lVar6 + 0x814) = 0xffffffff;
              *(undefined4 *)(lVar6 + 0x7f8) = 0xffffffff;
              *(undefined4 *)(lVar6 + 0x7fc) = 0xffffffff;
              *(undefined4 *)(lVar6 + 0x800) = 0xffffffff;
              *(undefined4 *)(lVar6 + 0x804) = 0xffffffff;
            }
            else {
              iVar20 = *(int *)(lVar6 + 0x7f0);
              lVar22 = 0;
              do {
                iVar9 = *(int *)(lVar6 + 0x7f8 + lVar22);
                uVar28 = 0;
                uVar29 = 0;
                if (iVar9 != -1) {
                  uVar29 = *(undefined8 *)
                            (*(longlong *)((longlong)local_90[3] + (longlong)iVar20 * 0x28 + 8) +
                             0x298 + (longlong)(iVar9 + iVar10) * 0x2a0);
                }
                *(undefined8 *)(lVar6 + 0x828 + lVar22 * 2) = uVar29;
                *(undefined4 *)(lVar6 + 0x7f8 + lVar22) = 0xffffffff;
                iVar9 = *(int *)(lVar6 + 0x7fc + lVar22);
                if (iVar9 != -1) {
                  uVar28 = *(undefined8 *)
                            (*(longlong *)((longlong)local_90[3] + (longlong)iVar20 * 0x28 + 8) +
                             0x298 + (longlong)(iVar9 + iVar10) * 0x2a0);
                }
                *(undefined8 *)(lVar6 + 0x830 + lVar22 * 2) = uVar28;
                *(undefined4 *)(lVar6 + 0x7fc + lVar22) = 0xffffffff;
                lVar22 = lVar22 + 8;
              } while (lVar22 != 0x30);
              *(undefined8 *)(lVar6 + 0x7f0) = 0xffffffffffffffff;
            }
            lVar24 = lVar24 + 1;
          } while (lVar24 < *(int *)(lVar23 + 0x20));
          iVar10 = *(int *)(param_1 + 0xb0);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < iVar10);
    }
    local_90[0] = (undefined1 ****)(local_90 + 3);
    local_90[2] = (undefined1 ****)local_90;
    local_90[1] = (undefined1 ****)&LAB_142b7305c;
    *(undefined8 *)((longlong)auStack_c0 + lVar16) = 0x142b654ed;
    FUN_144b0be26(param_1);
    iVar10 = *(int *)(param_1 + 0x118);
    if (iVar10 == 0) {
      uVar19 = 1;
      iVar9 = 0;
      uVar17 = 0;
      iVar20 = 0;
    }
    else {
      puVar18 = *(uint **)(param_1 + 0x110);
      if (*(uint **)(param_1 + 0x110) == (uint *)0x0) {
        puVar18 = (uint *)(param_1 + 0x100);
      }
      uVar21 = *puVar18;
      if (uVar21 == 0) {
        iVar20 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar20 = iVar10 + -1;
        }
        uVar17 = 0;
        uVar19 = (ulonglong)(uint)(iVar20 >> 5);
        if (iVar20 >> 5 < 1) {
          uVar19 = uVar17;
        }
        iVar9 = 0;
        do {
          piVar13 = (int *)((longlong)aiStack_98 + lVar16);
          if (uVar19 == uVar17) goto LAB_142b6558d;
          iVar9 = iVar9 + 0x20;
          uVar21 = puVar18[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar21 == 0);
      }
      else {
        iVar9 = 0;
        uVar17 = 0;
      }
      uVar19 = (ulonglong)(-uVar21 & uVar21);
      uVar1 = uVar19 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar20 = (iVar9 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
      if (iVar10 <= iVar20) {
        iVar20 = iVar10;
      }
    }
    piVar13 = (int *)((longlong)aiStack_98 + lVar16);
    if (iVar20 != iVar10) {
      uVar21 = 0xffffffff;
      do {
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar20 * 8);
        uVar25 = 0;
        uVar27 = 0;
        if ((9.99999993922529e-09 < *(double *)(lVar8 + 0x1f0)) &&
           (((*(char *)(lVar8 + 0x200) != '\x01' ||
             (9.99999993922529e-09 < *(double *)(lVar8 + 0x1f8))) &&
            (*(longlong *)(lVar8 + 0x10) != 0)))) {
          uVar29 = *(undefined8 *)(*(longlong *)(lVar8 + 0x10) + 0x298);
          uVar25 = (undefined4)uVar29;
          uVar27 = (undefined4)((ulonglong)uVar29 >> 0x20);
        }
        *(ulonglong *)(lVar8 + 0x218) = CONCAT44(uVar27,uVar25);
        uVar21 = uVar21 & ~(uint)uVar19;
        puVar18 = *(uint **)(param_1 + 0x110);
        if (*(uint **)(param_1 + 0x110) == (uint *)0x0) {
          puVar18 = (uint *)(param_1 + 0x100);
        }
        iVar4 = *(int *)(param_1 + 0x118);
        iVar20 = (int)uVar17;
        lVar8 = (longlong)iVar20;
        uVar11 = puVar18[lVar8] & uVar21;
        if (uVar11 == 0) {
          iVar14 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar14 = iVar4 + -1;
          }
          iVar14 = iVar14 >> 5;
          iVar9 = iVar9 + 0x20;
          iVar15 = iVar14;
          if (iVar14 < iVar20) {
            iVar15 = iVar20;
          }
          if (iVar20 < iVar14) {
            lVar23 = 0;
            do {
              uVar11 = puVar18[lVar8 + lVar23 + 1];
              if (uVar11 != 0) {
                uVar17 = (ulonglong)(iVar20 + (int)lVar23 + 1);
                uVar21 = 0xffffffff;
                goto LAB_142b656a0;
              }
              iVar9 = iVar9 + 0x20;
              lVar23 = lVar23 + 1;
            } while (iVar15 - lVar8 != lVar23);
            uVar21 = 0xffffffff;
            iVar20 = iVar15;
          }
          uVar17 = (ulonglong)(iVar20 + 1);
          iVar20 = iVar4;
        }
        else {
LAB_142b656a0:
          uVar19 = (ulonglong)(-uVar11 & uVar11);
          uVar1 = uVar19 * 2 + 1;
          lVar8 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          iVar20 = (iVar9 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar20) {
            iVar20 = iVar4;
          }
        }
        piVar13 = (int *)((longlong)aiStack_98 + lVar16);
      } while (iVar20 != iVar10);
    }
  }
LAB_142b6558d:
  if ((local_70 ^ (ulonglong)local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)piVar13 + -0x28) = &UNK_142b655bf;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b656ec FUN_142b656ec body=722 status=ok
// SIG undefined FUN_142b656ec(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_142b656ec(longlong param_1)

{
  void *_Src;
  code *pcVar1;
  size_t _Size;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  void *pvVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 auStack_e0 [4];
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  longlong local_b0 [2];
  undefined4 local_a0;
  int local_9c;
  undefined8 local_98 [7];
  ulonglong local_60;
  undefined1 local_48 [8];
  
  puVar7 = auStack_b8;
  local_60 = DAT_14c707940 ^ (ulonglong)local_48;
  iVar8 = *(int *)(param_1 + 0x404);
  lVar10 = *(longlong *)(param_1 + 0x410);
  iVar13 = *(int *)(param_1 + 0x418);
  lVar12 = (longlong)iVar13;
  iVar3 = iVar8;
  if (lVar12 != 0) {
    lVar11 = 0;
    do {
      iVar3 = iVar3 + *(int *)(lVar10 + 8 + lVar11);
      lVar11 = lVar11 + 0x10;
    } while (lVar12 << 4 != lVar11);
  }
  if (iVar3 != 0) {
    uStack_c0 = 0x142b6576f;
    lVar11 = -((longlong)iVar3 * 0x28 + 0x1eU & 0xfffffffffffffff0);
    pvVar14 = *(void **)(param_1 + 0x408);
    *(undefined8 *)((longlong)auStack_e0 + lVar11) = 0x142b65794;
    memcpy(auStack_b8 + lVar11,pvVar14,(longlong)iVar8 * 0x28);
    puVar7 = auStack_b8 + lVar11;
    if (iVar13 != 0) {
      puVar6 = auStack_b8 + (longlong)iVar8 * 0x28 + lVar11;
      lVar9 = 0;
      do {
        _Size = (longlong)*(int *)(lVar10 + 8 + lVar9) * 0x28;
        pvVar14 = *(void **)(lVar10 + lVar9);
        *(undefined8 *)((longlong)auStack_e0 + lVar11) = 0x142b657cb;
        memcpy(puVar6,pvVar14,_Size);
        puVar6 = puVar6 + _Size;
        lVar9 = lVar9 + 0x10;
      } while (lVar12 * 0x10 != lVar9);
    }
    iVar8 = *(int *)(param_1 + 0x8c);
    if ((longlong)iVar8 == 0) {
      puVar6 = (undefined1 *)0x0;
    }
    else {
      *(undefined8 *)(auStack_b8 + lVar11 + -8) = 0x142b657f8;
      lVar10 = -((longlong)iVar8 * 8 + 0x1eU & 0xfffffffffffffff0);
      puVar7 = auStack_b8 + lVar10 + lVar11;
      puVar6 = auStack_b8 + lVar10 + lVar11;
    }
    if (*(int *)(param_1 + 0x90) != 0) {
      iVar8 = *(int *)(param_1 + 0x424);
      pvVar14 = *(void **)(param_1 + 0x428);
      *(undefined8 *)(puVar7 + -0x28) = 0x142b6582a;
      memcpy(puVar6,pvVar14,(longlong)iVar8 << 3);
      iVar8 = *(int *)(param_1 + 0x438);
      if ((longlong)iVar8 != 0) {
        lVar10 = *(longlong *)(param_1 + 0x430);
        pvVar14 = puVar6 + (longlong)*(int *)(param_1 + 0x424) * 8;
        lVar12 = 0;
        do {
          iVar13 = *(int *)(lVar10 + 8 + lVar12);
          _Src = *(void **)(lVar10 + lVar12);
          *(undefined8 *)(puVar7 + -0x28) = 0x142b6586c;
          memcpy(pvVar14,_Src,(longlong)iVar13 << 3);
          pvVar14 = (void *)((longlong)pvVar14 + (longlong)*(int *)(lVar10 + 8 + lVar12) * 8);
          lVar12 = lVar12 + 0x10;
        } while ((longlong)iVar8 * 0x10 != lVar12);
      }
    }
    iVar8 = *(int *)(param_1 + 0xc);
    local_a0 = DAT_14c75f910;
    if (DAT_14c75f910 == 3) {
      iVar8 = iVar8 * *(short *)((longlong)&local_a0 + lVar11);
    }
    else {
      *(undefined2 *)((longlong)&local_a0 + lVar11 + 2) = 0xffff;
    }
    local_b0[0] = param_1 + 0x400;
    local_b0[1] = param_1;
    if (0 < iVar8) {
      uVar16 = 0xe0000000;
      uVar17 = 0x3e45798e;
      dVar15 = *(double *)(param_1 + 0x28);
      if (9.99999993922529e-09 <= dVar15) {
        uVar16 = SUB84(dVar15,0);
        uVar17 = (undefined4)((ulonglong)dVar15 >> 0x20);
      }
      iVar13 = 0;
      local_9c = iVar8;
      do {
        *(undefined8 *)(puVar7 + -0x28) = 0x142b658e7;
        dVar15 = (double)FUN_14711ae28(auStack_b8 + lVar11);
        if (dVar15 <= (double)CONCAT44(uVar17,uVar16) && (double)CONCAT44(uVar17,uVar16) != dVar15)
        break;
        if (local_a0 == 3) {
          *(undefined8 *)(puVar7 + -0x28) = 0x142b65976;
          FUN_14711bf1a(auStack_b8 + lVar11);
        }
        iVar8 = *(int *)(local_b0[1] + 0x90);
        if (0 < (longlong)iVar8) {
          lVar10 = 0;
          do {
            if ((*(longlong **)(puVar6 + lVar10 * 8))[2] != 0) {
              pcVar1 = *(code **)(**(longlong **)(puVar6 + lVar10 * 8) + 8);
              *(undefined8 *)(puVar7 + -0x28) = 0x142b65925;
              uVar2 = (*pcVar1)();
              if (0 < (int)uVar2) {
                puVar4 = (undefined8 *)(*(longlong *)((longlong)local_b0 + lVar11) + 0x260);
                uVar5 = 0;
                do {
                  *puVar4 = local_98[uVar5];
                  uVar5 = uVar5 + 1;
                  puVar4 = puVar4 + 0x54;
                } while (uVar2 != uVar5);
              }
            }
            lVar10 = lVar10 + 1;
          } while (lVar10 != iVar8);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 != local_9c);
    }
    lVar10 = local_b0[0];
    *(undefined8 *)(puVar7 + -0x28) = 0x142b6598c;
    FUN_142b63f24(lVar10);
  }
  if ((local_60 ^ (ulonglong)local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar7 + -0x28) = &UNK_142b659be;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b659c4 FUN_142b659c4 body=22774 status=ok
// SIG undefined FUN_142b659c4(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b659c4(code ***param_1,undefined8 param_2,double *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  double dVar5;
  code *pcVar6;
  byte bVar7;
  code cVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  code *pcVar13;
  code *pcVar14;
  code *pcVar15;
  code *pcVar16;
  double dVar17;
  longlong lVar18;
  code *pcVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  code ***pppcVar25;
  code **ppcVar26;
  code ***pppcVar27;
  code ****ppppcVar28;
  undefined8 uVar29;
  longlong *plVar30;
  ulonglong *puVar31;
  longlong lVar32;
  code ***pppcVar33;
  code *pcVar34;
  undefined ***pppuVar35;
  code *pcVar36;
  uint uVar37;
  longlong lVar38;
  code ****ppppcVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  bool bVar42;
  code **ppcVar43;
  uint uVar44;
  uint uVar45;
  longlong lVar46;
  bool bVar47;
  double *pdVar48;
  longlong lVar49;
  ulonglong uVar50;
  uint uVar51;
  double *pdVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  uint uVar56;
  code ***pppcVar57;
  longlong lVar58;
  code *pcVar59;
  code **ppcVar60;
  undefined4 uVar61;
  code *pcVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined4 uVar71;
  undefined1 auVar70 [16];
  code *pcVar72;
  code *pcVar73;
  undefined1 in_XMM1 [16];
  undefined1 auVar74 [16];
  code *pcVar75;
  double dVar76;
  double dVar78;
  undefined1 auVar77 [16];
  code *pcVar79;
  code *pcVar80;
  code *pcVar81;
  code *pcVar82;
  double dVar86;
  double dVar87;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  code *pcVar88;
  undefined1 auStack_628 [32];
  code ***local_608;
  code **local_600;
  undefined4 local_5f8;
  code ***local_5f0;
  uint local_5e4;
  code ***local_5e0;
  code ***local_5d8;
  code ***local_5d0;
  code **local_5c8;
  code **local_5c0;
  code ***local_5b8;
  code ***pppcStack_5b0;
  ulonglong local_5a8;
  ulonglong local_5a0;
  code ***local_598;
  code ***pppcStack_590;
  code ***local_580;
  code ***local_578;
  code *local_570;
  code ***local_568;
  code ***local_560;
  code **local_558;
  code ***local_550;
  code ****local_548;
  code **local_538;
  code ****local_530;
  int local_524;
  code **local_520;
  code **local_518;
  code **local_510;
  code *local_508;
  undefined ***local_4f8;
  undefined **local_4e8;
  code ****local_4e0;
  code *local_4c8;
  double local_4c0;
  undefined ***local_4b8;
  undefined **local_4a8;
  code **local_4a0 [7];
  code **local_468;
  double local_460;
  double local_458;
  code *local_428;
  code ****local_420;
  code ***local_3f8 [4];
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  code ***local_3c8 [7];
  code ****ppppcStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  code ***pppcStack_378;
  code ***pppcStack_370;
  code ***local_368 [3];
  code ***apppcStack_350 [3];
  code ****local_338;
  code ****ppppcStack_330;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined8 local_308 [20];
  code ****local_268;
  code ****local_260;
  undefined4 local_110;
  ulonglong local_f0;
  undefined1 auVar69 [16];
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_628;
  if ((9.99999993922529e-09 <= (double)in_XMM1._0_8_) && (*(char *)(param_1 + 0x88) == '\0')) {
    param_1[10] = in_XMM1._0_8_;
    ppcVar26 = (code **)param_3[1];
    param_1[0xb] = (code **)*param_3;
    param_1[0xc] = ppcVar26;
    param_1[0xd] = (code **)param_3[2];
    *(int *)(param_1 + 0xe) = 0;
    FUN_14051cd88(param_1);
    *(int *)(param_1 + 0x31) = -1;
    *(int *)(param_1 + 0x35) = 0;
    if (*(int *)((longlong)param_1 + 0x1ac) != 0) {
      FUN_141745cc8(param_1 + 0x34);
    }
    *(int *)(param_1 + 0x33) = 0;
    if (*(int *)((longlong)param_1 + 0x19c) != 0) {
      FUN_14480809c(param_1 + 0x32);
    }
    local_580 = param_1 + 0x2f;
    local_5d0 = param_1 + 0x19;
    uVar51 = *(uint *)(param_1 + 0x1c);
    pppcVar27 = (code ***)(ulonglong)uVar51;
    local_5f0 = param_1;
    if (uVar51 == 0) {
      pppcVar57 = (code ***)0x0;
      uVar40 = 1;
      iVar22 = 0;
      uVar37 = 0;
    }
    else {
      pppcVar25 = (code ***)param_1[0x1b];
      if ((code ***)param_1[0x1b] == (code ***)0x0) {
        pppcVar25 = local_5d0;
      }
      uVar37 = *(uint *)pppcVar25;
      if (uVar37 == 0) {
        iVar22 = uVar51 + 0x1e;
        if (-1 < (int)(uVar51 - 1)) {
          iVar22 = uVar51 - 1;
        }
        pppcVar57 = (code ***)0x0;
        pppcVar33 = (code ***)(ulonglong)(uint)(iVar22 >> 5);
        if (iVar22 >> 5 < 1) {
          pppcVar33 = pppcVar57;
        }
        iVar22 = 0;
        do {
          if (pppcVar33 == pppcVar57) goto LAB_142b66148;
          iVar22 = iVar22 + 0x20;
          uVar37 = *(uint *)((longlong)pppcVar25 + (longlong)pppcVar57 * 4 + 4);
          pppcVar57 = (code ***)((longlong)pppcVar57 + 1);
        } while (uVar37 == 0);
      }
      else {
        pppcVar57 = (code ***)0x0;
        iVar22 = 0;
      }
      uVar40 = (ulonglong)(-uVar37 & uVar37);
      uVar41 = uVar40 * 2 + 1;
      lVar58 = 0x3f;
      if (uVar41 != 0) {
        for (; uVar41 >> lVar58 == 0; lVar58 = lVar58 + -1) {
        }
      }
      uVar37 = (iVar22 - ((uint)lVar58 ^ 0x3f)) + 0x3e;
      if ((int)uVar51 <= (int)uVar37) {
        uVar37 = uVar51;
      }
    }
    if (uVar37 != uVar51) {
      uVar51 = 0xffffffff;
      local_598 = pppcVar27;
      do {
        local_5e0 = (code ***)CONCAT44(local_5e0._4_4_,uVar51);
        pcVar59 = param_1[0x17][(int)uVar37];
        FUN_144941734(pcVar59,local_3c8 + 6);
        dVar63 = *(double *)(pcVar59 + 600);
        pcVar34 = (code *)((double)local_368[0] + dVar63);
        pcVar13 = (code *)((double)pppcStack_370 + dVar63);
        pcVar36 = (code *)(dVar63 + (double)pppcStack_378);
        FUN_144941734(pcVar59,local_3f8);
        pppcVar25 = local_580;
        dVar63 = *(double *)(pcVar59 + 600);
        pcVar14 = (code *)((double)local_3c8[0] - dVar63);
        pcVar15 = (code *)((double)local_3d0 - dVar63);
        pcVar16 = (code *)((double)uStack_3d8 - dVar63);
        iVar24 = *(int *)(param_1 + 0x31);
        lVar58 = (longlong)iVar24;
        if (lVar58 == -1) {
          iVar24 = FUN_144a1fd9a(local_580);
          *(int *)(param_1 + 0x31) = iVar24;
          ppcVar26 = param_1[0x34];
          lVar58 = (longlong)iVar24;
          ppcVar26[lVar58 * 10 + 3] = pcVar16;
          ppcVar26[lVar58 * 10 + 4] = pcVar15;
          ppcVar26[lVar58 * 10 + 5] = pcVar14;
          ppcVar26[lVar58 * 10 + 6] = pcVar36;
          ppcVar26[lVar58 * 10 + 7] = pcVar13;
          ppcVar26[lVar58 * 10 + 8] = pcVar34;
          *(undefined1 *)(ppcVar26 + lVar58 * 10 + 9) = 1;
          param_1[0x34][(longlong)*(int *)(param_1 + 0x31) * 10] = pcVar59;
        }
        else {
          local_5b8 = (code ***)CONCAT44(local_5b8._4_4_,iVar22);
          ppcVar26 = param_1[0x34];
          iVar22 = *(int *)((longlong)ppcVar26 + lVar58 * 0x50 + 0xc);
          while (iVar22 != -1) {
            lVar46 = (longlong)*(int *)(ppcVar26 + lVar58 * 10 + 1);
            pcVar72 = pcVar34;
            if ((double)pcVar34 <= (double)ppcVar26[lVar46 * 10 + 8]) {
              pcVar72 = ppcVar26[lVar46 * 10 + 8];
            }
            iVar22 = *(int *)((longlong)ppcVar26 + lVar58 * 0x50 + 0xc);
            lVar32 = (longlong)iVar22;
            pcVar82 = pcVar13;
            if ((double)pcVar13 <= (double)ppcVar26[lVar46 * 10 + 7]) {
              pcVar82 = ppcVar26[lVar46 * 10 + 7];
            }
            pcVar62 = pcVar36;
            if ((double)pcVar36 <= (double)ppcVar26[lVar46 * 10 + 6]) {
              pcVar62 = ppcVar26[lVar46 * 10 + 6];
            }
            pcVar4 = pcVar14;
            if ((double)ppcVar26[lVar46 * 10 + 5] <= (double)pcVar14) {
              pcVar4 = ppcVar26[lVar46 * 10 + 5];
            }
            pcVar88 = pcVar15;
            if ((double)ppcVar26[lVar46 * 10 + 4] <= (double)pcVar15) {
              pcVar88 = ppcVar26[lVar46 * 10 + 4];
            }
            pcVar6 = pcVar16;
            if ((double)ppcVar26[lVar46 * 10 + 3] <= (double)pcVar16) {
              pcVar6 = ppcVar26[lVar46 * 10 + 3];
            }
            pcVar19 = pcVar34;
            if ((double)pcVar34 <= (double)ppcVar26[lVar32 * 10 + 8]) {
              pcVar19 = ppcVar26[lVar32 * 10 + 8];
            }
            pcVar75 = pcVar13;
            if ((double)pcVar13 <= (double)ppcVar26[lVar32 * 10 + 7]) {
              pcVar75 = ppcVar26[lVar32 * 10 + 7];
            }
            pcVar73 = pcVar36;
            if ((double)pcVar36 <= (double)ppcVar26[lVar32 * 10 + 6]) {
              pcVar73 = ppcVar26[lVar32 * 10 + 6];
            }
            pcVar79 = pcVar14;
            if ((double)ppcVar26[lVar32 * 10 + 5] <= (double)pcVar14) {
              pcVar79 = ppcVar26[lVar32 * 10 + 5];
            }
            pcVar80 = pcVar15;
            if ((double)ppcVar26[lVar32 * 10 + 4] <= (double)pcVar15) {
              pcVar80 = ppcVar26[lVar32 * 10 + 4];
            }
            pcVar81 = pcVar16;
            if ((double)ppcVar26[lVar32 * 10 + 3] <= (double)pcVar16) {
              pcVar81 = ppcVar26[lVar32 * 10 + 3];
            }
            iVar24 = *(int *)(ppcVar26 + lVar58 * 10 + 1);
            if (((double)pcVar73 - (double)pcVar81) * ((double)pcVar75 - (double)pcVar80) *
                ((double)pcVar19 - (double)pcVar79) <=
                ((double)pcVar62 - (double)pcVar6) * ((double)pcVar82 - (double)pcVar88) *
                ((double)pcVar72 - (double)pcVar4)) {
              iVar24 = iVar22;
            }
            lVar58 = (longlong)iVar24;
            iVar22 = *(int *)((longlong)ppcVar26 + lVar58 * 0x50 + 0xc);
          }
          local_5d8 = pppcVar57;
          iVar22 = FUN_144a1fd9a(local_580);
          ppcVar26 = param_1[0x34];
          lVar32 = (longlong)iVar22;
          ppcVar26[lVar32 * 10 + 3] = pcVar16;
          ppcVar26[lVar32 * 10 + 4] = pcVar15;
          ppcVar26[lVar32 * 10 + 5] = pcVar14;
          ppcVar26[lVar32 * 10 + 6] = pcVar36;
          ppcVar26[lVar32 * 10 + 7] = pcVar13;
          ppcVar26[lVar32 * 10 + 8] = pcVar34;
          *(undefined1 *)(ppcVar26 + lVar32 * 10 + 9) = 1;
          local_5f0[0x34][lVar32 * 10] = pcVar59;
          iVar23 = FUN_144a1fd9a(pppcVar25);
          lVar46 = (longlong)iVar23;
          *(int *)(local_5f0[0x34] + lVar46 * 10 + 1) = iVar24;
          *(int *)((longlong)local_5f0[0x34] + lVar46 * 0x50 + 0xc) = iVar22;
          ppcVar26 = local_5f0[0x34];
          pcVar59 = ppcVar26[lVar58 * 10 + 8];
          if ((double)ppcVar26[lVar58 * 10 + 8] <= (double)ppcVar26[lVar32 * 10 + 8]) {
            pcVar59 = ppcVar26[lVar32 * 10 + 8];
          }
          pcVar34 = ppcVar26[lVar58 * 10 + 7];
          if ((double)ppcVar26[lVar58 * 10 + 7] <= (double)ppcVar26[lVar32 * 10 + 7]) {
            pcVar34 = ppcVar26[lVar32 * 10 + 7];
          }
          in_XMM1._8_8_ = 0;
          in_XMM1._0_8_ = pcVar34;
          pcVar36 = ppcVar26[lVar58 * 10 + 6];
          if ((double)ppcVar26[lVar58 * 10 + 6] <= (double)ppcVar26[lVar32 * 10 + 6]) {
            pcVar36 = ppcVar26[lVar32 * 10 + 6];
          }
          pcVar13 = ppcVar26[lVar58 * 10 + 5];
          uVar61 = SUB84(pcVar13,0);
          uVar71 = (undefined4)((ulonglong)pcVar13 >> 0x20);
          pcVar14 = ppcVar26[lVar32 * 10 + 5];
          if ((double)pcVar14 <= (double)pcVar13) {
            uVar61 = SUB84(pcVar14,0);
            uVar71 = (undefined4)((ulonglong)pcVar14 >> 0x20);
          }
          pcVar13 = ppcVar26[lVar58 * 10 + 4];
          if ((double)ppcVar26[lVar32 * 10 + 4] <= (double)ppcVar26[lVar58 * 10 + 4]) {
            pcVar13 = ppcVar26[lVar32 * 10 + 4];
          }
          pcVar14 = ppcVar26[lVar58 * 10 + 3];
          if ((double)ppcVar26[lVar32 * 10 + 3] <= (double)ppcVar26[lVar58 * 10 + 3]) {
            pcVar14 = ppcVar26[lVar32 * 10 + 3];
          }
          ppcVar26[lVar46 * 10 + 3] = pcVar14;
          ppcVar26[lVar46 * 10 + 4] = pcVar13;
          ppcVar26[lVar46 * 10 + 5] = (code *)CONCAT44(uVar71,uVar61);
          ppcVar26[lVar46 * 10 + 6] = pcVar36;
          ppcVar26[lVar46 * 10 + 7] = pcVar34;
          ppcVar26[lVar46 * 10 + 8] = pcVar59;
          *(undefined1 *)(ppcVar26 + lVar46 * 10 + 9) = 1;
          *(undefined4 *)((longlong)local_5f0[0x34] + lVar46 * 0x50 + 0x14) = 1;
          iVar22 = *(int *)(local_5f0[0x34] + lVar58 * 10 + 2);
          lVar38 = (longlong)iVar22;
          *(int *)(local_5f0[0x34] + lVar58 * 10 + 2) = iVar23;
          *(int *)(local_5f0[0x34] + lVar32 * 10 + 2) = iVar23;
          if (lVar38 == -1) {
            *(int *)(local_5f0 + 0x31) = iVar23;
          }
          else {
            *(int *)(local_5f0[0x34] + lVar46 * 10 + 2) = iVar22;
            ppcVar26 = local_5f0[0x34];
            if (*(int *)(ppcVar26 + lVar38 * 10 + 1) == iVar24) {
              *(int *)(ppcVar26 + lVar38 * 10 + 1) = iVar23;
            }
            else {
              *(int *)((longlong)ppcVar26 + lVar38 * 0x50 + 0xc) = iVar23;
            }
          }
          param_1 = local_5f0;
          pppcVar27 = local_598;
          pppcVar57 = local_5d8;
          iVar22 = (int)local_5b8;
          if (iVar23 != -1) {
            ppcVar26 = local_5f0[0x34];
            do {
              lVar58 = (longlong)iVar23;
              lVar46 = (longlong)*(int *)(ppcVar26 + lVar58 * 10 + 1);
              lVar32 = (longlong)*(int *)((longlong)ppcVar26 + lVar58 * 0x50 + 0xc);
              pcVar59 = ppcVar26[lVar46 * 10 + 8];
              if ((double)ppcVar26[lVar46 * 10 + 8] <= (double)ppcVar26[lVar32 * 10 + 8]) {
                pcVar59 = ppcVar26[lVar32 * 10 + 8];
              }
              pcVar34 = ppcVar26[lVar46 * 10 + 7];
              if ((double)ppcVar26[lVar46 * 10 + 7] <= (double)ppcVar26[lVar32 * 10 + 7]) {
                pcVar34 = ppcVar26[lVar32 * 10 + 7];
              }
              in_XMM1._8_8_ = 0;
              in_XMM1._0_8_ = pcVar34;
              pcVar36 = ppcVar26[lVar46 * 10 + 6];
              if ((double)ppcVar26[lVar46 * 10 + 6] <= (double)ppcVar26[lVar32 * 10 + 6]) {
                pcVar36 = ppcVar26[lVar32 * 10 + 6];
              }
              pcVar13 = ppcVar26[lVar46 * 10 + 5];
              uVar61 = SUB84(pcVar13,0);
              uVar71 = (undefined4)((ulonglong)pcVar13 >> 0x20);
              pcVar14 = ppcVar26[lVar32 * 10 + 5];
              if ((double)pcVar14 <= (double)pcVar13) {
                uVar61 = SUB84(pcVar14,0);
                uVar71 = (undefined4)((ulonglong)pcVar14 >> 0x20);
              }
              pcVar13 = ppcVar26[lVar46 * 10 + 4];
              if ((double)ppcVar26[lVar32 * 10 + 4] <= (double)ppcVar26[lVar46 * 10 + 4]) {
                pcVar13 = ppcVar26[lVar32 * 10 + 4];
              }
              pcVar14 = ppcVar26[lVar46 * 10 + 3];
              if ((double)ppcVar26[lVar32 * 10 + 3] <= (double)ppcVar26[lVar46 * 10 + 3]) {
                pcVar14 = ppcVar26[lVar32 * 10 + 3];
              }
              ppcVar26[lVar58 * 10 + 3] = pcVar14;
              ppcVar26[lVar58 * 10 + 4] = pcVar13;
              ppcVar26[lVar58 * 10 + 5] = (code *)CONCAT44(uVar71,uVar61);
              ppcVar26[lVar58 * 10 + 6] = pcVar36;
              ppcVar26[lVar58 * 10 + 7] = pcVar34;
              ppcVar26[lVar58 * 10 + 8] = pcVar59;
              *(undefined1 *)(ppcVar26 + lVar58 * 10 + 9) = 1;
              uVar51 = *(uint *)((longlong)ppcVar26 + lVar46 * 0x50 + 0x14);
              uVar37 = *(uint *)((longlong)ppcVar26 + lVar32 * 0x50 + 0x14);
              if (uVar37 < uVar51) {
                uVar37 = uVar51;
              }
              *(uint *)((longlong)local_5f0[0x34] + lVar58 * 0x50 + 0x14) = uVar37 + 1;
              ppcVar26 = local_5f0[0x34];
              iVar23 = *(int *)(ppcVar26 + lVar58 * 10 + 2);
            } while (iVar23 != -1);
          }
        }
        uVar51 = (uint)local_5e0 & ~(uint)uVar40;
        pppcVar25 = (code ***)param_1[0x1b];
        if ((code ***)param_1[0x1b] == (code ***)0x0) {
          pppcVar25 = local_5d0;
        }
        uVar56 = *(uint *)(param_1 + 0x1c);
        iVar24 = (int)pppcVar57;
        lVar58 = (longlong)iVar24;
        uVar37 = *(uint *)((longlong)pppcVar25 + lVar58 * 4) & uVar51;
        if (uVar37 == 0) {
          iVar23 = uVar56 + 0x1e;
          if (-1 < (int)(uVar56 - 1)) {
            iVar23 = uVar56 - 1;
          }
          iVar23 = iVar23 >> 5;
          iVar22 = iVar22 + 0x20;
          iVar55 = iVar23;
          if (iVar23 < iVar24) {
            iVar55 = iVar24;
          }
          if (iVar24 < iVar23) {
            lVar46 = 0;
            do {
              uVar37 = *(uint *)((longlong)pppcVar25 + lVar46 * 4 + lVar58 * 4 + 4);
              if (uVar37 != 0) {
                pppcVar57 = (code ***)(ulonglong)(iVar24 + (int)lVar46 + 1);
                uVar51 = 0xffffffff;
                goto LAB_142b65fee;
              }
              iVar22 = iVar22 + 0x20;
              lVar46 = lVar46 + 1;
            } while (iVar55 - lVar58 != lVar46);
            uVar51 = 0xffffffff;
            iVar24 = iVar55;
          }
          pppcVar57 = (code ***)(ulonglong)(iVar24 + 1);
          param_1 = local_5f0;
          pppcVar27 = local_598;
          uVar37 = uVar56;
        }
        else {
LAB_142b65fee:
          uVar40 = (ulonglong)(-uVar37 & uVar37);
          uVar41 = uVar40 * 2 + 1;
          lVar58 = 0x3f;
          if (uVar41 != 0) {
            for (; uVar41 >> lVar58 == 0; lVar58 = lVar58 + -1) {
            }
          }
          uVar37 = (iVar22 - ((uint)lVar58 ^ 0x3f)) + 0x3e;
          if ((int)uVar56 <= (int)uVar37) {
            uVar37 = uVar56;
          }
        }
      } while (uVar37 != (uint)pppcVar27);
    }
LAB_142b66148:
    FUN_1410043ae(param_1);
    if ((longlong)*(int *)(param_1 + 0x57) != 0) {
      ppcVar26 = param_1[0x56];
      ppcVar60 = ppcVar26 + (longlong)*(int *)(param_1 + 0x57) * 2;
      do {
        *(int *)(local_5f0 + 0x54) = *(int *)(local_5f0 + 0x54) + *(int *)(ppcVar26 + 1);
        pcVar59 = *ppcVar26;
        if (pcVar59 != (code *)0x0) {
          if (*(longlong *)(pcVar59 + -0x10) != 0) {
            lVar58 = *(longlong *)(pcVar59 + -0x10) * 0x2d0;
            do {
              FUN_142b4e8f4(pcVar59 + lVar58 + -0x2d0);
              lVar58 = lVar58 + -0x2d0;
            } while (lVar58 != 0);
          }
          FUN_1400020a8(pcVar59 + -0x10);
        }
        ppcVar26 = ppcVar26 + 2;
      } while (ppcVar26 != ppcVar60);
      *(int *)(local_5f0 + 0x57) = 0;
      if (*(int *)((longlong)local_5f0 + 700) != 0) {
        FUN_147121c1a(param_1 + 0x56);
      }
      uVar40 = (ulonglong)*(int *)(local_5f0 + 0x54);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar40;
      uVar41 = SUB168(auVar9 * ZEXT816(0x2d0),0);
      lVar58 = uVar41 + 0x10;
      lVar58 = lVar58 + (ulonglong)(lVar58 == 0);
      if (0xffffffffffffffef < uVar41) {
        lVar58 = -1;
      }
      if (SUB168(auVar9 * ZEXT816(0x2d0),8) != 0) {
        lVar58 = -1;
      }
      puVar31 = (ulonglong *)FUN_14001cc68(lVar58);
      *puVar31 = uVar40;
      if (uVar40 != 0) {
        in_XMM1 = ZEXT816(0);
        lVar58 = 0;
        do {
          *(undefined1 *)((longlong)puVar31 + lVar58 + 0x18) = 0;
          *(undefined8 *)((longlong)puVar31 + lVar58 + 0x20) = 0;
          *(undefined ***)((longlong)puVar31 + lVar58 + 0x10) = &PTR_LAB_14a1e1990;
          *(undefined1 (*) [16])((longlong)puVar31 + lVar58 + 0xb0) = in_XMM1;
          *(undefined1 (*) [16])((longlong)puVar31 + lVar58 + 0xc0) = in_XMM1;
          *(undefined1 (*) [16])((longlong)puVar31 + lVar58 + 0xd0) = in_XMM1;
          *(undefined1 (*) [16])((longlong)puVar31 + lVar58 + 0xe0) = in_XMM1;
          *(undefined1 (*) [16])((longlong)puVar31 + lVar58 + 0xf0) = in_XMM1;
          *(undefined1 (*) [16])((longlong)puVar31 + lVar58 + 0x100) = in_XMM1;
          *(undefined1 (*) [16])((longlong)puVar31 + lVar58 + 0x180) = in_XMM1;
          puVar2 = (undefined8 *)((longlong)puVar31 + lVar58 + 400);
          *puVar2 = 0;
          puVar2[1] = 0x3ff0000000000000;
          *(undefined1 (*) [16])((longlong)puVar31 + lVar58 + 0x1a0) = in_XMM1;
          *(undefined1 (*) [16])((longlong)puVar31 + lVar58 + 0x1b0) = in_XMM1;
          puVar3 = (undefined4 *)((longlong)puVar31 + lVar58 + 0x1c0);
          *puVar3 = 0;
          puVar3[1] = 0x3ff00000;
          puVar3[2] = 0;
          puVar3[3] = 0x3ff00000;
          *(undefined1 (*) [16])((longlong)puVar31 + lVar58 + 0x1d0) = ZEXT816(0x3ff0000000000000);
          *(undefined1 *)((longlong)puVar31 + lVar58 + 0x210) = 0;
          *(undefined8 *)((longlong)puVar31 + lVar58 + 0x260) = 0;
          *(undefined8 *)((longlong)puVar31 + lVar58 + 0x270) = 0;
          *(undefined8 *)((longlong)puVar31 + lVar58 + 0x2a0) = 0;
          *(undefined8 *)((longlong)puVar31 + lVar58 + 0x2b0) = 0;
          lVar58 = lVar58 + 0x2d0;
        } while (uVar40 * 0x2d0 - lVar58 != 0);
      }
      ppcVar26 = local_5f0[0x55];
      if (ppcVar26 != (code **)0x0) {
        if (ppcVar26[-2] != (code *)0x0) {
          lVar58 = (longlong)ppcVar26[-2] * 0x2d0;
          do {
            FUN_142b4e8f4((longlong)ppcVar26 + lVar58 + -0x2d0);
            lVar58 = lVar58 + -0x2d0;
          } while (lVar58 != 0);
        }
        FUN_1400020a8(ppcVar26 + -2);
      }
      local_5f0[0x55] = (code **)(puVar31 + 2);
      param_1 = local_5f0;
    }
    *(int *)((longlong)param_1 + 0x2a4) = 0;
    iVar22 = *(int *)(param_1 + 0x5b);
    if ((longlong)iVar22 != 0) {
      ppcVar26 = param_1[0x5a];
      lVar58 = 0;
      do {
        *(int *)(local_5f0 + 0x58) =
             *(int *)(local_5f0 + 0x58) + *(int *)((longlong)ppcVar26 + lVar58 + 8);
        if (*(longlong *)((longlong)ppcVar26 + lVar58) != 0) {
          FUN_1400020a8();
        }
        lVar58 = lVar58 + 0x10;
      } while ((longlong)iVar22 * 0x10 != lVar58);
      *(int *)(local_5f0 + 0x5b) = 0;
      if (*(int *)((longlong)local_5f0 + 0x2dc) != 0) {
        FUN_1462b4328(param_1 + 0x5a);
      }
      pppcVar27 = local_5f0;
      lVar58 = (longlong)*(int *)(local_5f0 + 0x58) * 4;
      lVar46 = -1;
      if (-1 < (longlong)*(int *)(local_5f0 + 0x58)) {
        lVar46 = lVar58 + (ulonglong)(lVar58 == 0);
      }
      ppcVar26 = (code **)FUN_14001cc68(lVar46);
      if (pppcVar27[0x59] != (code **)0x0) {
        FUN_1400020a8();
      }
      local_5f0[0x59] = ppcVar26;
      param_1 = local_5f0;
    }
    *(int *)((longlong)param_1 + 0x2c4) = 0;
    iVar22 = *(int *)(param_1 + 0x5f);
    if ((longlong)iVar22 != 0) {
      ppcVar26 = param_1[0x5e];
      lVar58 = 0;
      do {
        *(int *)(local_5f0 + 0x5c) =
             *(int *)(local_5f0 + 0x5c) + *(int *)((longlong)ppcVar26 + lVar58 + 8);
        if (*(longlong *)((longlong)ppcVar26 + lVar58) != 0) {
          FUN_1400020a8();
        }
        lVar58 = lVar58 + 0x10;
      } while ((longlong)iVar22 * 0x10 != lVar58);
      *(int *)(local_5f0 + 0x5f) = 0;
      if (*(int *)((longlong)local_5f0 + 0x2fc) != 0) {
        FUN_147121c4a(param_1 + 0x5e);
      }
      pppcVar27 = local_5f0;
      lVar58 = (longlong)*(int *)(local_5f0 + 0x5c) * 8;
      lVar46 = -1;
      if (-1 < (longlong)*(int *)(local_5f0 + 0x5c)) {
        lVar46 = lVar58 + (ulonglong)(lVar58 == 0);
      }
      ppcVar26 = (code **)FUN_14001cc68(lVar46);
      if (pppcVar27[0x5d] != (code **)0x0) {
        FUN_1400020a8();
      }
      local_5f0[0x5d] = ppcVar26;
      param_1 = local_5f0;
    }
    *(int *)((longlong)param_1 + 0x2e4) = 0;
    iVar22 = *(int *)(param_1 + 99);
    if ((longlong)iVar22 != 0) {
      ppcVar26 = param_1[0x62];
      lVar58 = 0;
      do {
        *(int *)(local_5f0 + 0x60) =
             *(int *)(local_5f0 + 0x60) + *(int *)((longlong)ppcVar26 + lVar58 + 8);
        if (*(longlong *)((longlong)ppcVar26 + lVar58) != 0) {
          FUN_1400020a8();
        }
        lVar58 = lVar58 + 0x10;
      } while ((longlong)iVar22 * 0x10 != lVar58);
      *(int *)(local_5f0 + 99) = 0;
      if (*(int *)((longlong)local_5f0 + 0x31c) != 0) {
        FUN_147121c7a(param_1 + 0x62);
      }
      iVar22 = *(int *)(local_5f0 + 0x60);
      auVar74._8_8_ = 0;
      auVar74._0_8_ = (longlong)iVar22;
      lVar46 = SUB168(auVar74 * ZEXT816(0x30),0);
      lVar58 = -1;
      if (SUB168(auVar74 * ZEXT816(0x30),8) == 0) {
        lVar58 = lVar46 + (ulonglong)(lVar46 == 0);
      }
      ppcVar26 = (code **)FUN_14001cc68(lVar58);
      if (iVar22 != 0) {
        memset(ppcVar26,0,((lVar46 - 0x30U) / 0x30) * 0x30 + 0x30);
      }
      if (local_5f0[0x61] != (code **)0x0) {
        FUN_1400020a8();
      }
      local_5f0[0x61] = ppcVar26;
      param_1 = local_5f0;
    }
    *(int *)((longlong)param_1 + 0x304) = 0;
    iVar22 = *(int *)(param_1 + 0x67);
    if ((longlong)iVar22 != 0) {
      ppcVar26 = param_1[0x66];
      lVar58 = 0;
      do {
        *(int *)(local_5f0 + 100) =
             *(int *)(local_5f0 + 100) + *(int *)((longlong)ppcVar26 + lVar58 + 8);
        if (*(longlong *)((longlong)ppcVar26 + lVar58) != 0) {
          FUN_1400020a8();
        }
        lVar58 = lVar58 + 0x10;
      } while ((longlong)iVar22 * 0x10 != lVar58);
      *(int *)(local_5f0 + 0x67) = 0;
      if (*(int *)((longlong)local_5f0 + 0x33c) != 0) {
        FUN_147121caa(param_1 + 0x66);
      }
      iVar22 = *(int *)(local_5f0 + 100);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (longlong)iVar22;
      lVar46 = SUB168(auVar10 * ZEXT816(0x30),0);
      lVar58 = -1;
      if (SUB168(auVar10 * ZEXT816(0x30),8) == 0) {
        lVar58 = lVar46 + (ulonglong)(lVar46 == 0);
      }
      ppcVar26 = (code **)FUN_14001cc68(lVar58);
      if (iVar22 != 0) {
        memset(ppcVar26,0,((lVar46 - 0x30U) / 0x30) * 0x30 + 0x30);
      }
      if (local_5f0[0x65] != (code **)0x0) {
        FUN_1400020a8();
      }
      local_5f0[0x65] = ppcVar26;
      param_1 = local_5f0;
    }
    *(int *)((longlong)param_1 + 0x324) = 0;
    iVar22 = *(int *)(param_1 + 0x6b);
    if ((longlong)iVar22 != 0) {
      ppcVar26 = param_1[0x6a];
      lVar58 = 0;
      do {
        *(int *)(param_1 + 0x68) =
             *(int *)(param_1 + 0x68) + *(int *)((longlong)ppcVar26 + lVar58 + 8);
        if (*(longlong *)((longlong)ppcVar26 + lVar58) != 0) {
          FUN_1400020a8();
        }
        lVar58 = lVar58 + 0x10;
      } while ((longlong)iVar22 * 0x10 != lVar58);
      *(int *)(param_1 + 0x6b) = 0;
      if (*(int *)((longlong)param_1 + 0x35c) != 0) {
        FUN_141745cf8(param_1 + 0x6a);
      }
      lVar58 = (longlong)*(int *)(param_1 + 0x68) * 8;
      lVar46 = -1;
      if (-1 < (longlong)*(int *)(param_1 + 0x68)) {
        lVar46 = lVar58 + (ulonglong)(lVar58 == 0);
      }
      ppcVar26 = (code **)FUN_14001cc68(lVar46);
      if (param_1[0x69] != (code **)0x0) {
        FUN_1400020a8();
      }
      param_1[0x69] = ppcVar26;
    }
    *(int *)((longlong)param_1 + 0x344) = 0;
    iVar22 = *(int *)(param_1 + 0x6f);
    if ((longlong)iVar22 != 0) {
      ppcVar26 = param_1[0x6e];
      lVar58 = 0;
      do {
        *(int *)(local_5f0 + 0x6c) =
             *(int *)(local_5f0 + 0x6c) + *(int *)((longlong)ppcVar26 + lVar58 + 8);
        if (*(longlong *)((longlong)ppcVar26 + lVar58) != 0) {
          FUN_1400020a8();
        }
        lVar58 = lVar58 + 0x10;
      } while ((longlong)iVar22 * 0x10 != lVar58);
      *(int *)(local_5f0 + 0x6f) = 0;
      if (*(int *)((longlong)local_5f0 + 0x37c) != 0) {
        FUN_147121cda(param_1 + 0x6e);
      }
      lVar46 = (longlong)*(int *)(local_5f0 + 0x6c);
      lVar58 = -1;
      if (-1 < lVar46) {
        lVar58 = lVar46 * 0x20 + (ulonglong)(lVar46 * 0x20 == 0);
      }
      ppcVar26 = (code **)FUN_14001cc68(lVar58);
      auVar9 = _DAT_149931e80;
      if (lVar46 != 0) {
        uVar41 = lVar46 + 0x7ffffffffffffffU & 0x7ffffffffffffff;
        auVar67._8_4_ = (int)uVar41;
        auVar67._0_8_ = uVar41;
        auVar67._12_4_ = (int)(uVar41 >> 0x20);
        ppcVar60 = ppcVar26 + 4;
        uVar40 = 0;
        in_XMM1 = pmovsxbq(in_XMM1,0x100);
        auVar67 = auVar67 | _DAT_149931e80;
        do {
          if ((bool)(~(auVar67._0_8_ < (longlong)(uVar40 ^ auVar9._0_8_)) & 1)) {
            ppcVar60[-4] = (code *)&PTR_LAB_14a1e3a30;
          }
          auVar83._8_4_ = (int)uVar40;
          auVar83._0_8_ = uVar40;
          auVar83._12_4_ = (int)(uVar40 >> 0x20);
          if ((longlong)((auVar83._8_8_ | in_XMM1._8_8_) ^ auVar9._8_8_) <= auVar67._8_8_) {
            *ppcVar60 = (code *)&PTR_LAB_14a1e3a30;
          }
          uVar40 = uVar40 + 2;
          ppcVar60 = ppcVar60 + 8;
        } while ((uVar41 - ((uint)(lVar46 + 0x7ffffffffffffffU) & 1)) + 2 != uVar40);
      }
      if (local_5f0[0x6d] != (code **)0x0) {
        FUN_1400020a8();
      }
      local_5f0[0x6d] = ppcVar26;
      param_1 = local_5f0;
    }
    *(int *)((longlong)param_1 + 0x364) = 0;
    iVar22 = *(int *)(param_1 + 0x73);
    if ((longlong)iVar22 != 0) {
      ppcVar26 = param_1[0x72];
      lVar58 = 0;
      do {
        *(int *)(local_5f0 + 0x70) =
             *(int *)(local_5f0 + 0x70) + *(int *)((longlong)ppcVar26 + lVar58 + 8);
        if (*(longlong *)((longlong)ppcVar26 + lVar58) != 0) {
          FUN_1400020a8();
        }
        lVar58 = lVar58 + 0x10;
      } while ((longlong)iVar22 * 0x10 != lVar58);
      *(int *)(local_5f0 + 0x73) = 0;
      if (*(int *)((longlong)local_5f0 + 0x39c) != 0) {
        FUN_147121d0a(param_1 + 0x72);
      }
      lVar46 = (longlong)*(int *)(local_5f0 + 0x70);
      lVar58 = -1;
      if (-1 < lVar46) {
        lVar58 = lVar46 * 0x20 + (ulonglong)(lVar46 * 0x20 == 0);
      }
      ppcVar26 = (code **)FUN_14001cc68(lVar58);
      auVar9 = _DAT_149931e80;
      if (lVar46 != 0) {
        uVar41 = lVar46 + 0x7ffffffffffffffU & 0x7ffffffffffffff;
        auVar68._8_4_ = (int)uVar41;
        auVar68._0_8_ = uVar41;
        auVar68._12_4_ = (int)(uVar41 >> 0x20);
        ppcVar60 = ppcVar26 + 4;
        uVar40 = 0;
        in_XMM1 = pmovsxbq(in_XMM1,0x100);
        auVar68 = auVar68 | _DAT_149931e80;
        do {
          if ((bool)(~(auVar68._0_8_ < (longlong)(uVar40 ^ auVar9._0_8_)) & 1)) {
            ppcVar60[-4] = (code *)&PTR_LAB_14a1e3a60;
          }
          auVar84._8_4_ = (int)uVar40;
          auVar84._0_8_ = uVar40;
          auVar84._12_4_ = (int)(uVar40 >> 0x20);
          if ((longlong)((auVar84._8_8_ | in_XMM1._8_8_) ^ auVar9._8_8_) <= auVar68._8_8_) {
            *ppcVar60 = (code *)&PTR_LAB_14a1e3a60;
          }
          uVar40 = uVar40 + 2;
          ppcVar60 = ppcVar60 + 8;
        } while ((uVar41 - ((uint)(lVar46 + 0x7ffffffffffffffU) & 1)) + 2 != uVar40);
      }
      if (local_5f0[0x71] != (code **)0x0) {
        FUN_1400020a8();
      }
      local_5f0[0x71] = ppcVar26;
      param_1 = local_5f0;
    }
    *(int *)((longlong)param_1 + 900) = 0;
    iVar22 = *(int *)(param_1 + 0x77);
    if ((longlong)iVar22 != 0) {
      ppcVar26 = param_1[0x76];
      lVar58 = 0;
      do {
        *(int *)(local_5f0 + 0x74) =
             *(int *)(local_5f0 + 0x74) + *(int *)((longlong)ppcVar26 + lVar58 + 8);
        if (*(longlong *)((longlong)ppcVar26 + lVar58) != 0) {
          FUN_1400020a8();
        }
        lVar58 = lVar58 + 0x10;
      } while ((longlong)iVar22 * 0x10 != lVar58);
      *(int *)(local_5f0 + 0x77) = 0;
      if (*(int *)((longlong)local_5f0 + 0x3bc) != 0) {
        FUN_147121d3a(param_1 + 0x76);
      }
      uVar41 = (ulonglong)*(int *)(local_5f0 + 0x74);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar41;
      lVar46 = SUB168(auVar11 * ZEXT816(0x60),0);
      lVar58 = -1;
      if (SUB168(auVar11 * ZEXT816(0x60),8) == 0) {
        lVar58 = lVar46 + (ulonglong)(lVar46 == 0);
      }
      ppcVar26 = (code **)FUN_14001cc68(lVar58);
      auVar9 = _DAT_149931e80;
      if (uVar41 != 0) {
        uVar41 = uVar41 * 0x60 - 0x60;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar41;
        uVar61 = SUB164(auVar12 * ZEXT816(0xaaaaaaaaaaaaaaab),8);
        uVar71 = (undefined4)(uVar41 / 0x180000000);
        auVar69._0_8_ = CONCAT44(uVar71,uVar61);
        auVar69._8_4_ = uVar61;
        auVar69._12_4_ = uVar71;
        auVar70._0_8_ = auVar69._0_8_ >> 6;
        auVar70._8_8_ = auVar69._8_8_ >> 6;
        uVar40 = 0;
        auVar74 = pmovsxbq(in_XMM1,0x100);
        auVar70 = auVar70 | _DAT_149931e80;
        ppcVar60 = ppcVar26;
        do {
          if ((bool)(~(auVar70._0_8_ < (longlong)(uVar40 ^ auVar9._0_8_)) & 1)) {
            *ppcVar60 = (code *)&PTR_LAB_14a1e1ab0;
          }
          auVar85._8_4_ = (int)uVar40;
          auVar85._0_8_ = uVar40;
          auVar85._12_4_ = (int)(uVar40 >> 0x20);
          if ((longlong)((auVar85._8_8_ | auVar74._8_8_) ^ auVar9._8_8_) <= auVar70._8_8_) {
            ppcVar60[0xc] = (code *)&PTR_LAB_14a1e1ab0;
          }
          uVar40 = uVar40 + 2;
          ppcVar60 = ppcVar60 + 0x18;
        } while ((uVar41 / 0x60 + 2 & 0x7fffffffffffffe) != uVar40);
      }
      if (local_5f0[0x75] != (code **)0x0) {
        FUN_1400020a8();
      }
      local_5f0[0x75] = ppcVar26;
      param_1 = local_5f0;
    }
    *(int *)((longlong)param_1 + 0x3a4) = 0;
    iVar22 = *(int *)(param_1 + 0x7b);
    if ((longlong)iVar22 != 0) {
      ppcVar26 = param_1[0x7a];
      lVar58 = 0;
      do {
        *(int *)(local_5f0 + 0x78) =
             *(int *)(local_5f0 + 0x78) + *(int *)((longlong)ppcVar26 + lVar58 + 8);
        if (*(longlong *)((longlong)ppcVar26 + lVar58) != 0) {
          FUN_1400020a8();
        }
        lVar58 = lVar58 + 0x10;
      } while ((longlong)iVar22 * 0x10 != lVar58);
      *(int *)(local_5f0 + 0x7b) = 0;
      if (*(int *)((longlong)local_5f0 + 0x3dc) != 0) {
        FUN_147121d6a(param_1 + 0x7a);
      }
      pppcVar27 = local_5f0;
      lVar58 = (longlong)*(int *)(local_5f0 + 0x78) * 8;
      lVar46 = -1;
      if (-1 < (longlong)*(int *)(local_5f0 + 0x78)) {
        lVar46 = lVar58 + (ulonglong)(lVar58 == 0);
      }
      ppcVar26 = (code **)FUN_14001cc68(lVar46);
      if (pppcVar27[0x79] != (code **)0x0) {
        FUN_1400020a8();
      }
      local_5f0[0x79] = ppcVar26;
      param_1 = local_5f0;
    }
    *(int *)((longlong)param_1 + 0x3c4) = 0;
    local_568 = param_1 + 0x7c;
    FUN_1410ab75e();
    local_560 = param_1 + 0x80;
    FUN_142b63f24();
    FUN_14117429c(param_1 + 0x84);
    lVar58 = DAT_14c9abbe8;
    if (DAT_14c9abbe8 == 0) {
      plVar30 = (longlong *)FUN_145a10a92();
      param_1 = local_5f0;
      lVar58 = plVar30[0x22];
      if (plVar30[0x22] == 0) {
        (**(code **)(*plVar30 + 1000))(plVar30);
        param_1 = local_5f0;
        lVar58 = plVar30[0x22];
      }
    }
    DAT_14c9abbe8 = lVar58;
    dVar63 = (double)*(float *)(DAT_14c9abbe8 + 0x38);
    if ((longlong)*(int *)(param_1 + 0x16) != 0) {
      ppcVar60 = param_1[0x15];
      ppcVar26 = ppcVar60 + *(int *)(param_1 + 0x16);
      do {
        lVar58 = (longlong)*(int *)(*ppcVar60 + 0x10);
        if (lVar58 != 0) {
          lVar46 = *(longlong *)(*ppcVar60 + 8);
          lVar32 = 0;
          do {
            lVar38 = *(longlong *)(lVar46 + lVar32);
            *(double *)(lVar38 + 0xc0) = *(double *)(lVar38 + 0xc0) * dVar63;
            *(double *)(lVar38 + 200) = *(double *)(lVar38 + 200) * dVar63;
            *(double *)(lVar38 + 0xd0) = *(double *)(lVar38 + 0xd0) * dVar63;
            *(double *)(lVar38 + 0xa8) = *(double *)(lVar38 + 0xa8) * dVar63;
            *(double *)(lVar38 + 0xb0) = *(double *)(lVar38 + 0xb0) * dVar63;
            *(double *)(lVar38 + 0xb8) = *(double *)(lVar38 + 0xb8) * dVar63;
            lVar32 = lVar32 + 8;
          } while (lVar58 * 8 != lVar32);
        }
        ppcVar60 = ppcVar60 + 1;
      } while (ppcVar60 != ppcVar26);
    }
    iVar22 = *(int *)(param_1 + 0x1c);
    iVar24 = iVar22;
    if (iVar22 == 0) {
      uVar41 = 0;
      uVar50 = 1;
      iVar23 = 0;
      iVar55 = 0;
    }
    else {
      pppcVar27 = (code ***)param_1[0x1b];
      if ((code ***)param_1[0x1b] == (code ***)0x0) {
        pppcVar27 = local_5d0;
      }
      uVar51 = *(uint *)pppcVar27;
      if (uVar51 == 0) {
        iVar23 = iVar22 + 0x1e;
        if (-1 < iVar22 + -1) {
          iVar23 = iVar22 + -1;
        }
        uVar41 = 0;
        uVar40 = (ulonglong)(uint)(iVar23 >> 5);
        if (iVar23 >> 5 < 1) {
          uVar40 = uVar41;
        }
        iVar23 = 0;
        do {
          if (uVar40 == uVar41) goto LAB_142b665af;
          iVar23 = iVar23 + 0x20;
          uVar51 = *(uint *)((longlong)pppcVar27 + uVar41 * 4 + 4);
          uVar41 = uVar41 + 1;
        } while (uVar51 == 0);
      }
      else {
        uVar41 = 0;
        iVar23 = 0;
      }
      uVar50 = (ulonglong)(-uVar51 & uVar51);
      uVar40 = uVar50 * 2 + 1;
      lVar58 = 0x3f;
      if (uVar40 != 0) {
        for (; uVar40 >> lVar58 == 0; lVar58 = lVar58 + -1) {
        }
      }
      iVar55 = (iVar23 - ((uint)lVar58 ^ 0x3f)) + 0x3e;
      if (iVar22 <= iVar55) {
        iVar55 = iVar22;
      }
    }
    if (iVar55 != iVar22) {
      uVar51 = 0xffffffff;
      do {
        pcVar59 = param_1[0x17][iVar55];
        *(double *)(pcVar59 + 0xc0) = *(double *)(pcVar59 + 0xc0) * dVar63;
        *(double *)(pcVar59 + 200) = *(double *)(pcVar59 + 200) * dVar63;
        *(double *)(pcVar59 + 0xd0) = *(double *)(pcVar59 + 0xd0) * dVar63;
        *(double *)(pcVar59 + 0xa8) = *(double *)(pcVar59 + 0xa8) * dVar63;
        *(double *)(pcVar59 + 0xb0) = *(double *)(pcVar59 + 0xb0) * dVar63;
        *(double *)(pcVar59 + 0xb8) = *(double *)(pcVar59 + 0xb8) * dVar63;
        uVar51 = ~(uint)uVar50 & uVar51;
        pppcVar27 = (code ***)param_1[0x1b];
        if ((code ***)param_1[0x1b] == (code ***)0x0) {
          pppcVar27 = local_5d0;
        }
        iVar24 = *(int *)(param_1 + 0x1c);
        iVar55 = (int)uVar41;
        lVar58 = (longlong)iVar55;
        uVar37 = *(uint *)((longlong)pppcVar27 + lVar58 * 4) & uVar51;
        if (uVar37 == 0) {
          iVar53 = iVar24 + 0x1e;
          if (-1 < iVar24 + -1) {
            iVar53 = iVar24 + -1;
          }
          iVar53 = iVar53 >> 5;
          iVar23 = iVar23 + 0x20;
          iVar54 = iVar53;
          if (iVar53 < iVar55) {
            iVar54 = iVar55;
          }
          if (iVar55 < iVar53) {
            lVar46 = 0;
            do {
              uVar37 = *(uint *)((longlong)pppcVar27 + lVar46 * 4 + lVar58 * 4 + 4);
              if (uVar37 != 0) {
                uVar41 = (ulonglong)(iVar55 + (int)lVar46 + 1);
                uVar51 = 0xffffffff;
                goto LAB_142b664ac;
              }
              iVar23 = iVar23 + 0x20;
              lVar46 = lVar46 + 1;
            } while (iVar54 - lVar58 != lVar46);
            uVar51 = 0xffffffff;
            lVar58 = (longlong)iVar54;
          }
          uVar41 = lVar58 + 1U & 0xffffffff;
          param_1 = local_5f0;
          iVar55 = iVar24;
        }
        else {
LAB_142b664ac:
          uVar50 = (ulonglong)(-uVar37 & uVar37);
          uVar40 = uVar50 * 2 + 1;
          lVar58 = 0x3f;
          if (uVar40 != 0) {
            for (; uVar40 >> lVar58 == 0; lVar58 = lVar58 + -1) {
            }
          }
          iVar55 = (iVar23 - ((uint)lVar58 ^ 0x3f)) + 0x3e;
          if (iVar24 <= iVar55) {
            iVar55 = iVar24;
          }
        }
      } while (iVar55 != iVar22);
    }
LAB_142b665af:
    iVar22 = *(int *)(param_1 + 0x16);
    if (0 < iVar22) {
      ppcVar26 = param_1[0x15];
      lVar58 = 0;
      do {
        pcVar59 = ppcVar26[lVar58];
        if (0 < *(int *)(pcVar59 + 0x10)) {
          lVar46 = 0;
          do {
            lVar32 = *(longlong *)(*(longlong *)(pcVar59 + 8) + lVar46 * 8);
            if (((((9.999999747378752e-05 < ABS(*(double *)(lVar32 + 0xc0))) ||
                  (9.999999747378752e-05 < ABS(*(double *)(lVar32 + 200)))) ||
                 (9.999999747378752e-05 < ABS(*(double *)(lVar32 + 0xd0)))) ||
                ((9.999999747378752e-05 < ABS(*(double *)(lVar32 + 0xa8)) ||
                 (9.999999747378752e-05 < ABS(*(double *)(lVar32 + 0xb0)))))) ||
               (9.999999747378752e-05 < ABS(*(double *)(lVar32 + 0xb8)))) {
              if (*(char *)(lVar32 + 0x270) == '\x01') {
                *(byte *)(lVar32 + 0x284) = *(byte *)(lVar32 + 0x284) | 1;
              }
              *(undefined1 *)(lVar32 + 0x270) = 0;
              *(double *)(lVar32 + 0x268) = *(double *)(lVar32 + 0x278) * 10.0;
              ppcVar26 = param_1[0x15];
            }
            lVar46 = lVar46 + 1;
            pcVar59 = ppcVar26[lVar58];
          } while (lVar46 < *(int *)(pcVar59 + 0x10));
          iVar22 = *(int *)(param_1 + 0x16);
        }
        lVar58 = lVar58 + 1;
      } while (lVar58 < iVar22);
      iVar24 = *(int *)(param_1 + 0x1c);
    }
    if (iVar24 == 0) {
      uVar41 = 0;
      uVar50 = 1;
      iVar23 = 0;
      iVar55 = 0;
    }
    else {
      pppcVar27 = (code ***)param_1[0x1b];
      if ((code ***)param_1[0x1b] == (code ***)0x0) {
        pppcVar27 = local_5d0;
      }
      uVar51 = *(uint *)pppcVar27;
      if (uVar51 == 0) {
        iVar23 = iVar24 + 0x1e;
        if (-1 < iVar24 + -1) {
          iVar23 = iVar24 + -1;
        }
        uVar41 = 0;
        uVar40 = (ulonglong)(uint)(iVar23 >> 5);
        if (iVar23 >> 5 < 1) {
          uVar40 = uVar41;
        }
        iVar23 = 0;
        do {
          if (uVar40 == uVar41) goto LAB_142b6689c;
          iVar23 = iVar23 + 0x20;
          uVar51 = *(uint *)((longlong)pppcVar27 + uVar41 * 4 + 4);
          uVar41 = uVar41 + 1;
        } while (uVar51 == 0);
      }
      else {
        uVar41 = 0;
        iVar23 = 0;
      }
      uVar50 = (ulonglong)(-uVar51 & uVar51);
      uVar40 = uVar50 * 2 + 1;
      lVar58 = 0x3f;
      if (uVar40 != 0) {
        for (; uVar40 >> lVar58 == 0; lVar58 = lVar58 + -1) {
        }
      }
      iVar55 = (iVar23 - ((uint)lVar58 ^ 0x3f)) + 0x3e;
      if (iVar24 <= iVar55) {
        iVar55 = iVar24;
      }
    }
    if (iVar55 != iVar24) {
      uVar51 = 0xffffffff;
      iVar53 = iVar24;
      do {
        pcVar59 = param_1[0x17][iVar55];
        if (((9.999999747378752e-05 < ABS(*(double *)(pcVar59 + 0xc0))) ||
            (9.999999747378752e-05 < ABS(*(double *)(pcVar59 + 200)))) ||
           ((9.999999747378752e-05 < ABS(*(double *)(pcVar59 + 0xd0)) ||
            (((9.999999747378752e-05 < ABS(*(double *)(pcVar59 + 0xa8)) ||
              (9.999999747378752e-05 < ABS(*(double *)(pcVar59 + 0xb0)))) ||
             (9.999999747378752e-05 < ABS(*(double *)(pcVar59 + 0xb8)))))))) {
          if (pcVar59[0x270] == (code)0x1) {
            pcVar59[0x284] = (code)((byte)pcVar59[0x284] | 1);
          }
          pcVar59[0x270] = (code)0x0;
          iVar53 = *(int *)(local_5f0 + 0x1c);
          param_1 = local_5f0;
        }
        uVar51 = uVar51 & ~(uint)uVar50;
        pppcVar27 = (code ***)param_1[0x1b];
        if ((code ***)param_1[0x1b] == (code ***)0x0) {
          pppcVar27 = local_5d0;
        }
        iVar22 = (int)uVar41;
        lVar58 = (longlong)iVar22;
        uVar37 = *(uint *)((longlong)pppcVar27 + lVar58 * 4) & uVar51;
        if (uVar37 == 0) {
          iVar55 = iVar53 + 0x1e;
          if (-1 < iVar53 + -1) {
            iVar55 = iVar53 + -1;
          }
          iVar55 = iVar55 >> 5;
          iVar23 = iVar23 + 0x20;
          iVar54 = iVar55;
          if (iVar55 < iVar22) {
            iVar54 = iVar22;
          }
          if (iVar22 < iVar55) {
            lVar46 = 0;
            do {
              uVar37 = *(uint *)((longlong)pppcVar27 + lVar46 * 4 + lVar58 * 4 + 4);
              if (uVar37 != 0) {
                uVar41 = (ulonglong)(iVar22 + (int)lVar46 + 1);
                uVar51 = 0xffffffff;
                goto LAB_142b66826;
              }
              iVar23 = iVar23 + 0x20;
              lVar46 = lVar46 + 1;
            } while (iVar54 - lVar58 != lVar46);
            uVar51 = 0xffffffff;
            lVar58 = (longlong)iVar54;
          }
          uVar41 = lVar58 + 1U & 0xffffffff;
          param_1 = local_5f0;
          iVar55 = iVar53;
        }
        else {
LAB_142b66826:
          uVar50 = (ulonglong)(-uVar37 & uVar37);
          uVar40 = uVar50 * 2 + 1;
          lVar58 = 0x3f;
          if (uVar40 != 0) {
            for (; uVar40 >> lVar58 == 0; lVar58 = lVar58 + -1) {
            }
          }
          iVar55 = (iVar23 - ((uint)lVar58 ^ 0x3f)) + 0x3e;
          if (iVar53 <= iVar55) {
            iVar55 = iVar53;
          }
        }
      } while (iVar55 != iVar24);
      iVar22 = *(int *)(param_1 + 0x16);
      iVar24 = iVar53;
    }
LAB_142b6689c:
    if (0 < iVar22) {
      ppcVar26 = param_1[0x15];
      lVar58 = 0;
      do {
        if ((ppcVar26[lVar58][0x151] == (code)0x0) &&
           (pcVar59 = ppcVar26[lVar58], 0 < *(int *)(pcVar59 + 0x10))) {
          lVar46 = 0;
          do {
            lVar32 = *(longlong *)(*(longlong *)(pcVar59 + 8) + lVar46 * 8);
            bVar7 = *(byte *)(lVar32 + 0x20);
            if ((bVar7 & 1) == 0) {
              if (((9.99999993922529e-09 < ABS(*(double *)(lVar32 + 0x60))) ||
                  (9.99999993922529e-09 < ABS(*(double *)(lVar32 + 0x68)))) ||
                 ((9.99999993922529e-09 < ABS(*(double *)(lVar32 + 0x70)) ||
                  ((9.99999993922529e-09 < ABS(*(double *)(lVar32 + 0x48)) ||
                   (9.99999993922529e-09 < ABS(*(double *)(lVar32 + 0x50)))))))) {
                if ((bVar7 & 2) != 0) goto LAB_142b6691f;
              }
              else {
                param_1 = local_5f0;
                if (((bVar7 & 2) != 0) && (9.99999993922529e-09 < ABS(*(double *)(lVar32 + 0x58))))
                {
LAB_142b6691f:
                  if (*(char *)(lVar32 + 0x270) == '\0') {
                    pdVar52 = (double *)(*(longlong *)(lVar32 + 8) + 0x58);
                    if (*(longlong *)(lVar32 + 8) == 0) {
                      pdVar52 = (double *)&DAT_14c8464e0;
                    }
                    pdVar48 = (double *)(lVar32 + 0x28);
                    if (*(char *)(lVar32 + 0x40) == '\0') {
                      pdVar48 = pdVar52;
                    }
                    dVar63 = pdVar48[1];
                    dVar66 = pdVar48[2];
                    *(double *)(lVar32 + 0xc0) =
                         *(double *)(lVar32 + 0x60) * *pdVar48 + *(double *)(lVar32 + 0xc0);
                    *(double *)(lVar32 + 200) =
                         dVar63 * *(double *)(lVar32 + 0x68) + *(double *)(lVar32 + 200);
                    *(double *)(lVar32 + 0xd0) =
                         dVar66 * *(double *)(lVar32 + 0x70) + *(double *)(lVar32 + 0xd0);
                    ppcVar26 = param_1[0x15];
                  }
                }
              }
            }
            lVar46 = lVar46 + 1;
            pcVar59 = ppcVar26[lVar58];
          } while (lVar46 < *(int *)(pcVar59 + 0x10));
          iVar22 = *(int *)(param_1 + 0x16);
        }
        lVar58 = lVar58 + 1;
      } while (lVar58 < iVar22);
      iVar24 = *(int *)(param_1 + 0x1c);
    }
    if (iVar24 == 0) {
      uVar41 = 0;
      uVar50 = 1;
      iVar23 = 0;
      iVar55 = 0;
    }
    else {
      pppcVar27 = (code ***)param_1[0x1b];
      if ((code ***)param_1[0x1b] == (code ***)0x0) {
        pppcVar27 = local_5d0;
      }
      uVar51 = *(uint *)pppcVar27;
      if (uVar51 == 0) {
        iVar23 = iVar24 + 0x1e;
        if (-1 < iVar24 + -1) {
          iVar23 = iVar24 + -1;
        }
        uVar41 = 0;
        uVar40 = (ulonglong)(uint)(iVar23 >> 5);
        if (iVar23 >> 5 < 1) {
          uVar40 = uVar41;
        }
        iVar23 = 0;
        do {
          if (uVar40 == uVar41) goto LAB_142b66cc9;
          iVar23 = iVar23 + 0x20;
          uVar51 = *(uint *)((longlong)pppcVar27 + uVar41 * 4 + 4);
          uVar41 = uVar41 + 1;
        } while (uVar51 == 0);
      }
      else {
        uVar41 = 0;
        iVar23 = 0;
      }
      uVar50 = (ulonglong)(-uVar51 & uVar51);
      uVar40 = uVar50 * 2 + 1;
      lVar58 = 0x3f;
      if (uVar40 != 0) {
        for (; uVar40 >> lVar58 == 0; lVar58 = lVar58 + -1) {
        }
      }
      iVar55 = (iVar23 - ((uint)lVar58 ^ 0x3f)) + 0x3e;
      if (iVar24 <= iVar55) {
        iVar55 = iVar24;
      }
    }
    if (iVar55 != iVar24) {
      uVar51 = 0xffffffff;
      iVar22 = iVar24;
      do {
        pcVar59 = param_1[0x17][iVar55];
        cVar8 = pcVar59[0x20];
        if (((byte)cVar8 & 1) == 0) {
          if ((((9.99999993922529e-09 < ABS(*(double *)(pcVar59 + 0x60))) ||
               (9.99999993922529e-09 < ABS(*(double *)(pcVar59 + 0x68)))) ||
              (9.99999993922529e-09 < ABS(*(double *)(pcVar59 + 0x70)))) ||
             ((9.99999993922529e-09 < ABS(*(double *)(pcVar59 + 0x48)) ||
              (9.99999993922529e-09 < ABS(*(double *)(pcVar59 + 0x50)))))) {
            if (((byte)cVar8 & 2) != 0) goto LAB_142b66aec;
          }
          else {
            param_1 = local_5f0;
            if ((((byte)cVar8 & 2) != 0) &&
               (9.99999993922529e-09 < ABS(*(double *)(pcVar59 + 0x58)))) {
LAB_142b66aec:
              if (pcVar59[0x270] == (code)0x0) {
                pdVar52 = (double *)(*(longlong *)(pcVar59 + 8) + 0x58);
                if (*(longlong *)(pcVar59 + 8) == 0) {
                  pdVar52 = (double *)&DAT_14c8464e0;
                }
                pdVar48 = (double *)(pcVar59 + 0x28);
                if (pcVar59[0x40] == (code)0x0) {
                  pdVar48 = pdVar52;
                }
                dVar63 = pdVar48[1];
                dVar66 = pdVar48[2];
                *(double *)(pcVar59 + 0xc0) =
                     *(double *)(pcVar59 + 0x60) * *pdVar48 + *(double *)(pcVar59 + 0xc0);
                *(double *)(pcVar59 + 200) =
                     dVar63 * *(double *)(pcVar59 + 0x68) + *(double *)(pcVar59 + 200);
                *(double *)(pcVar59 + 0xd0) =
                     dVar66 * *(double *)(pcVar59 + 0x70) + *(double *)(pcVar59 + 0xd0);
                iVar22 = *(int *)(param_1 + 0x1c);
              }
            }
          }
        }
        uVar51 = uVar51 & ~(uint)uVar50;
        pppcVar27 = (code ***)param_1[0x1b];
        if ((code ***)param_1[0x1b] == (code ***)0x0) {
          pppcVar27 = local_5d0;
        }
        iVar55 = (int)uVar41;
        lVar58 = (longlong)iVar55;
        uVar37 = *(uint *)((longlong)pppcVar27 + lVar58 * 4) & uVar51;
        if (uVar37 == 0) {
          iVar53 = iVar22 + 0x1e;
          if (-1 < iVar22 + -1) {
            iVar53 = iVar22 + -1;
          }
          iVar53 = iVar53 >> 5;
          iVar23 = iVar23 + 0x20;
          iVar54 = iVar53;
          if (iVar53 < iVar55) {
            iVar54 = iVar55;
          }
          if (iVar55 < iVar53) {
            lVar46 = 0;
            do {
              uVar37 = *(uint *)((longlong)pppcVar27 + lVar46 * 4 + lVar58 * 4 + 4);
              if (uVar37 != 0) {
                uVar41 = (ulonglong)(iVar55 + (int)lVar46 + 1);
                uVar51 = 0xffffffff;
                goto LAB_142b66bdd;
              }
              iVar23 = iVar23 + 0x20;
              lVar46 = lVar46 + 1;
            } while (iVar54 - lVar58 != lVar46);
            uVar51 = 0xffffffff;
            lVar58 = (longlong)iVar54;
          }
          uVar41 = lVar58 + 1U & 0xffffffff;
          param_1 = local_5f0;
          iVar55 = iVar22;
        }
        else {
LAB_142b66bdd:
          uVar50 = (ulonglong)(-uVar37 & uVar37);
          uVar40 = uVar50 * 2 + 1;
          lVar58 = 0x3f;
          if (uVar40 != 0) {
            for (; uVar40 >> lVar58 == 0; lVar58 = lVar58 + -1) {
            }
          }
          iVar55 = (iVar23 - ((uint)lVar58 ^ 0x3f)) + 0x3e;
          if (iVar22 <= iVar55) {
            iVar55 = iVar22;
          }
        }
      } while (iVar55 != iVar24);
      iVar22 = *(int *)(param_1 + 0x16);
    }
LAB_142b66cc9:
    if (iVar22 != 0) {
      ppcVar60 = param_1[0x15];
      ppcVar26 = ppcVar60 + iVar22;
      do {
        uVar21 = DAT_14c846520;
        uVar20 = DAT_14c846518;
        uVar29 = DAT_14c846510;
        pcVar59 = *ppcVar60;
        if (0 < *(int *)(pcVar59 + 0x10)) {
          lVar58 = 0;
          do {
            lVar46 = *(longlong *)(*(longlong *)(pcVar59 + 8) + lVar58 * 8);
            *(undefined8 *)(lVar46 + 0x368) = 0;
            *(undefined8 *)(lVar46 + 0x370) = 0;
            *(undefined8 *)(lVar46 + 0x358) = 0;
            *(undefined8 *)(lVar46 + 0x360) = 0;
            *(undefined8 *)(lVar46 + 0x348) = 0;
            *(undefined8 *)(lVar46 + 0x350) = 0;
            memset((void *)(lVar46 + 0x3a8),0,0x138);
            *(undefined8 *)(lVar46 + 0x170) = uVar29;
            *(undefined8 *)(lVar46 + 0x178) = uVar20;
            *(undefined8 *)(lVar46 + 0x180) = uVar21;
            *(undefined8 *)(lVar46 + 0x188) = 0;
            lVar58 = lVar58 + 1;
          } while (lVar58 < *(int *)(pcVar59 + 0x10));
        }
        FUN_144992738(pcVar59);
        FUN_144b08cbe(pcVar59);
        FUN_1449acef0(pcVar59);
        FUN_1449359f6(pcVar59);
        ppcVar60 = ppcVar60 + 1;
      } while (ppcVar60 != ppcVar26);
      iVar22 = *(int *)(param_1 + 0x16);
      if ((longlong)iVar22 != 0) {
        ppcVar26 = param_1[0x15];
        lVar58 = 0;
        do {
          FUN_1409a8518(*(undefined8 *)((longlong)ppcVar26 + lVar58),param_1[10]);
          lVar58 = lVar58 + 8;
        } while ((longlong)iVar22 * 8 != lVar58);
      }
    }
    pppcVar27 = local_5f0;
    iVar22 = *(int *)(param_1 + 0x1c);
    if (iVar22 == 0) {
      uVar40 = 1;
      iVar23 = 0;
      uVar41 = 0;
      iVar24 = 0;
    }
    else {
      pppcVar25 = (code ***)param_1[0x1b];
      if ((code ***)param_1[0x1b] == (code ***)0x0) {
        pppcVar25 = local_5d0;
      }
      uVar51 = *(uint *)pppcVar25;
      if (uVar51 == 0) {
        iVar24 = iVar22 + 0x1e;
        if (-1 < iVar22 + -1) {
          iVar24 = iVar22 + -1;
        }
        uVar41 = 0;
        uVar40 = (ulonglong)(uint)(iVar24 >> 5);
        if (iVar24 >> 5 < 1) {
          uVar40 = uVar41;
        }
        iVar23 = 0;
        do {
          if (uVar40 == uVar41) goto LAB_142b66e3a;
          iVar23 = iVar23 + 0x20;
          uVar51 = *(uint *)((longlong)pppcVar25 + uVar41 * 4 + 4);
          uVar41 = uVar41 + 1;
        } while (uVar51 == 0);
      }
      else {
        iVar23 = 0;
        uVar41 = 0;
      }
      uVar40 = (ulonglong)(-uVar51 & uVar51);
      uVar50 = uVar40 * 2 + 1;
      lVar58 = 0x3f;
      if (uVar50 != 0) {
        for (; uVar50 >> lVar58 == 0; lVar58 = lVar58 + -1) {
        }
      }
      iVar24 = (iVar23 - ((uint)lVar58 ^ 0x3f)) + 0x3e;
      if (iVar22 <= iVar24) {
        iVar24 = iVar22;
      }
    }
    if (iVar24 != iVar22) {
      uVar51 = 0xffffffff;
      do {
        FUN_144b094ce(pppcVar27[0x17][iVar24],pppcVar27[10]);
        uVar51 = ~(uint)uVar40 & uVar51;
        pppcVar25 = (code ***)pppcVar27[0x1b];
        if ((code ***)pppcVar27[0x1b] == (code ***)0x0) {
          pppcVar25 = local_5d0;
        }
        iVar55 = *(int *)(pppcVar27 + 0x1c);
        iVar24 = (int)uVar41;
        lVar58 = (longlong)iVar24;
        uVar37 = *(uint *)((longlong)pppcVar25 + lVar58 * 4) & uVar51;
        if (uVar37 == 0) {
          iVar53 = iVar55 + 0x1e;
          if (-1 < iVar55 + -1) {
            iVar53 = iVar55 + -1;
          }
          iVar53 = iVar53 >> 5;
          iVar23 = iVar23 + 0x20;
          iVar54 = iVar53;
          if (iVar53 < iVar24) {
            iVar54 = iVar24;
          }
          if (iVar24 < iVar53) {
            lVar46 = 0;
            do {
              uVar37 = *(uint *)((longlong)pppcVar25 + lVar46 * 4 + lVar58 * 4 + 4);
              if (uVar37 != 0) {
                uVar41 = (ulonglong)(iVar24 + (int)lVar46 + 1);
                uVar51 = 0xffffffff;
                goto LAB_142b66f78;
              }
              iVar23 = iVar23 + 0x20;
              lVar46 = lVar46 + 1;
            } while (iVar54 - lVar58 != lVar46);
            uVar51 = 0xffffffff;
            iVar24 = iVar54;
          }
          uVar41 = (ulonglong)(iVar24 + 1);
          iVar24 = iVar55;
        }
        else {
LAB_142b66f78:
          uVar40 = (ulonglong)(-uVar37 & uVar37);
          uVar50 = uVar40 * 2 + 1;
          lVar58 = 0x3f;
          if (uVar50 != 0) {
            for (; uVar50 >> lVar58 == 0; lVar58 = lVar58 + -1) {
            }
          }
          iVar24 = (iVar23 - ((uint)lVar58 ^ 0x3f)) + 0x3e;
          if (iVar55 <= iVar24) {
            iVar24 = iVar55;
          }
        }
      } while (iVar24 != iVar22);
    }
LAB_142b66e3a:
    pppcVar27 = local_5f0;
    local_578 = local_5f0 + 0x43;
    uVar51 = *(uint *)(local_5f0 + 0x46);
    if (uVar51 == 0) {
      uVar41 = 1;
      pcVar59 = (code *)0x0;
      uVar56 = 0;
      uVar37 = 0;
    }
    else {
      pppcVar25 = (code ***)local_5f0[0x45];
      if ((code ***)local_5f0[0x45] == (code ***)0x0) {
        pppcVar25 = local_578;
      }
      uVar37 = *(uint *)pppcVar25;
      if (uVar37 == 0) {
        iVar22 = uVar51 + 0x1e;
        if (-1 < (int)(uVar51 - 1)) {
          iVar22 = uVar51 - 1;
        }
        pcVar59 = (code *)0x0;
        pcVar34 = (code *)(ulonglong)(uint)(iVar22 >> 5);
        if (iVar22 >> 5 < 1) {
          pcVar34 = pcVar59;
        }
        uVar56 = 0;
        do {
          if (pcVar34 == pcVar59) goto LAB_142b66fd6;
          uVar56 = uVar56 + 0x20;
          uVar37 = *(uint *)((longlong)pppcVar25 + (longlong)pcVar59 * 4 + 4);
          pcVar59 = pcVar59 + 1;
        } while (uVar37 == 0);
      }
      else {
        pcVar59 = (code *)0x0;
        uVar56 = 0;
      }
      uVar41 = (ulonglong)(-uVar37 & uVar37);
      uVar40 = uVar41 * 2 + 1;
      lVar58 = 0x3f;
      if (uVar40 != 0) {
        for (; uVar40 >> lVar58 == 0; lVar58 = lVar58 + -1) {
        }
      }
      uVar37 = (uVar56 - ((uint)lVar58 ^ 0x3f)) + 0x3e;
      if ((int)uVar51 <= (int)uVar37) {
        uVar37 = uVar51;
      }
    }
    if (uVar37 != uVar51) {
      uVar44 = 0xffffffff;
      uVar45 = uVar51;
      do {
        local_5e0 = (code ***)CONCAT44(local_5e0._4_4_,uVar44);
        ppcVar26 = local_5f0[0x41];
        lVar58 = (longlong)(int)uVar37;
        uVar37 = *(uint *)(ppcVar26 + lVar58 * 0xa7 + 0xa1);
        if (0 < (int)uVar37) {
          iVar22 = 0;
          do {
            if (0 < (int)uVar37) {
              uVar40 = (ulonglong)uVar37;
              do {
                if (*(int *)(ppcVar26 + lVar58 * 0xa7 + 0xa2) == 5) {
                  pcVar34 = ppcVar26[lVar58 * 0xa7 + 0xa3];
                }
                else {
                  pcVar34 = (code *)0x0;
                }
                if (*(int *)(ppcVar26 + lVar58 * 0xa7 + 0xa4) == 5) {
                  pcVar36 = ppcVar26[lVar58 * 0xa7 + 0xa5];
                }
                else {
                  pcVar36 = (code *)0x0;
                }
                ppcVar60 = ppcVar26 + lVar58 * 0xa7 + (uVar40 - 1) * 0x27 + 5;
                if (pcVar34 == (code *)0x0) {
                  pcVar13 = ppcVar60[0xc];
                  pcVar14 = ppcVar60[0xd];
                  pcVar15 = ppcVar60[0xe];
                }
                else {
                  pcVar13 = ppcVar60[0xc];
                  pcVar14 = ppcVar60[0xd];
                  pcVar15 = ppcVar60[0xe];
                  dVar63 = *(double *)(pcVar34 + 0x140);
                  dVar66 = *(double *)(pcVar34 + 0x130);
                  dVar87 = *(double *)(pcVar34 + 0x138);
                  dVar17 = dVar87 * (double)pcVar15 - (double)pcVar14 * dVar63;
                  dVar17 = dVar17 + dVar17;
                  dVar5 = *(double *)(pcVar34 + 0x148);
                  dVar64 = dVar66 * (double)pcVar14 - (double)pcVar13 * dVar87;
                  dVar64 = dVar64 + dVar64;
                  dVar65 = dVar63 * (double)pcVar13 - (double)pcVar15 * dVar66;
                  dVar65 = dVar65 + dVar65;
                  pcVar15 = (code *)((dVar66 * dVar65 - dVar17 * dVar87) +
                                    dVar5 * dVar64 + (double)pcVar15);
                  pcVar14 = (code *)((dVar63 * dVar17 - dVar64 * dVar66) +
                                    dVar5 * dVar65 + (double)pcVar14);
                  pcVar13 = (code *)((dVar87 * dVar64 - dVar65 * dVar63) +
                                    dVar5 * dVar17 + (double)pcVar13);
                }
                if (pcVar36 == (code *)0x0) {
                  dVar65 = -(double)ppcVar60[0x11];
                  dVar66 = -(double)ppcVar60[0x10];
                  dVar63 = -(double)ppcVar60[0xf];
                }
                else {
                  pcVar16 = ppcVar60[0x11];
                  pcVar72 = ppcVar60[0xf];
                  pcVar82 = ppcVar60[0x10];
                  dVar63 = *(double *)(pcVar36 + 0x140);
                  dVar66 = *(double *)(pcVar36 + 0x130);
                  dVar87 = *(double *)(pcVar36 + 0x138);
                  dVar17 = dVar87 * (double)pcVar72 - dVar66 * (double)pcVar82;
                  dVar64 = dVar66 * (double)pcVar16 - dVar63 * (double)pcVar72;
                  dVar76 = dVar63 * (double)pcVar82 - dVar87 * (double)pcVar16;
                  dVar17 = dVar17 + dVar17;
                  dVar64 = dVar64 + dVar64;
                  dVar76 = dVar76 + dVar76;
                  dVar5 = *(double *)(pcVar36 + 0x148);
                  dVar65 = (dVar66 * dVar64 - dVar76 * dVar87) + (dVar5 * dVar17 - (double)pcVar16);
                  dVar66 = (dVar63 * dVar76 - dVar17 * dVar66) + (dVar5 * dVar64 - (double)pcVar82);
                  dVar63 = (dVar87 * dVar17 - dVar64 * dVar63) + (dVar5 * dVar76 - (double)pcVar72);
                }
                if (0.05000000074505806 <
                    1.0 - (dVar65 * (double)pcVar15 +
                          dVar63 * (double)pcVar13 + dVar66 * (double)pcVar14)) {
                  lVar46 = (longlong)*(int *)(ppcVar26 + lVar58 * 0xa7 + 0xa1);
                  ppcVar60[0x13] = ppcVar26[lVar58 * 0xa7 + lVar46 * 0x27 + -0xf];
                  ppcVar60[0x14] = ppcVar26[lVar58 * 0xa7 + lVar46 * 0x27 + -0xe];
                  ppcVar60[0x12] = ppcVar26[lVar58 * 0xa7 + lVar46 * 0x27 + -0x10];
                  ppcVar60[0x21] = ppcVar26[lVar58 * 0xa7 + lVar46 * 0x27 + -1];
                  *(undefined4 *)(ppcVar60 + 0x22) =
                       *(undefined4 *)(ppcVar26 + lVar58 * 0xa7 + lVar46 * 0x27);
                  ppcVar60[0x26] = ppcVar26[lVar58 * 0xa7 + lVar46 * 0x27 + 4];
                  ppcVar60[0x25] = ppcVar26[lVar58 * 0xa7 + lVar46 * 0x27 + 3];
                  pcVar34 = (ppcVar26 + lVar58 * 0xa7 + lVar46 * 0x27 + 1)[1];
                  ppcVar60[0x23] = ppcVar26[lVar58 * 0xa7 + lVar46 * 0x27 + 1];
                  ppcVar60[0x24] = pcVar34;
                  if (10000.0 < (double)ppcVar26[lVar58 * 0xa7 + lVar46 * 0x27 + -0x10] ||
                      (double)ppcVar26[lVar58 * 0xa7 + lVar46 * 0x27 + -0x10] == 10000.0) {
                    ppcVar60[0x12] = (code *)0x0;
                  }
                  local_5b8 = (code ***)(ppcVar26 + lVar58 * 0xa7 + lVar46 * 0x27 + -0x1c);
                  local_5d8 = (code ***)(ppcVar60 + 6);
                  local_598 = (code ***)(ppcVar26 + lVar58 * 0xa7 + lVar46 * 0x27 + -0x16);
                  local_5c8 = ppcVar26 + lVar58 * 0xa7 + lVar46 * 0x27 + -0xd;
                  lVar32 = 0;
                  bVar42 = true;
                  do {
                    bVar47 = bVar42;
                    ppcVar60[lVar32 * 3 + 2] =
                         ppcVar26[lVar58 * 0xa7 + lVar46 * 0x27 + lVar32 * 3 + -0x20];
                    pcVar34 = (ppcVar26 + lVar58 * 0xa7 + lVar46 * 0x27 + lVar32 * 3 + -0x22)[1];
                    ppcVar60[lVar32 * 3] =
                         ppcVar26[lVar58 * 0xa7 + lVar46 * 0x27 + lVar32 * 3 + -0x22];
                    (ppcVar60 + lVar32 * 3)[1] = pcVar34;
                    ppcVar60[lVar32 * 3 + 8] =
                         ppcVar26[lVar58 * 0xa7 + lVar46 * 0x27 + lVar32 * 3 + -0x1a];
                    ppcVar43 = (local_5b8 + lVar32 * 3)[1];
                    local_5d8[lVar32 * 3] = local_5b8[lVar32 * 3];
                    (local_5d8 + lVar32 * 3)[1] = ppcVar43;
                    ppcVar60[lVar32 * 3 + 0xe] =
                         ppcVar26[lVar58 * 0xa7 + lVar46 * 0x27 + lVar32 * 3 + -0x14];
                    ppcVar43 = (local_598 + lVar32 * 3)[1];
                    ppcVar60[lVar32 * 3 + 0xc] = (code *)local_598[lVar32 * 3];
                    (ppcVar60 + lVar32 * 3 + 0xc)[1] = (code *)ppcVar43;
                    ppcVar60[lVar32 * 3 + 0x17] =
                         ppcVar26[lVar58 * 0xa7 + lVar46 * 0x27 + lVar32 * 3 + -0xb];
                    pcVar34 = (local_5c8 + lVar32 * 3)[1];
                    ppcVar60[lVar32 * 3 + 0x15] = local_5c8[lVar32 * 3];
                    (ppcVar60 + lVar32 * 3 + 0x15)[1] = pcVar34;
                    ppcVar60[lVar32 * 3 + 0x1d] =
                         ppcVar26[lVar58 * 0xa7 + lVar46 * 0x27 + lVar32 * 3 + -5];
                    *(undefined1 (*) [16])(ppcVar60 + lVar32 * 3 + 0x1b) =
                         *(undefined1 (*) [16])
                          (ppcVar26 + lVar58 * 0xa7 + lVar46 * 0x27 + lVar32 * 3 + -7);
                    lVar32 = 1;
                    bVar42 = false;
                  } while (bVar47);
LAB_142b678b9:
                  local_5c0 = ppcVar60 + 0xc;
                  *(int *)(ppcVar26 + lVar58 * 0xa7 + 0xa1) =
                       *(int *)(ppcVar26 + lVar58 * 0xa7 + 0xa1) + -1;
                  local_5e4 = uVar56;
                  local_5a0 = uVar41;
                }
                else {
                  if (pcVar34 == (code *)0x0) {
                    pcVar16 = *ppcVar60;
                    pcVar72 = ppcVar60[1];
                    pcVar34 = ppcVar60[2];
                  }
                  else {
                    dVar5 = (double)*ppcVar60 * *(double *)(pcVar34 + 0x170);
                    dVar17 = (double)ppcVar60[1] * *(double *)(pcVar34 + 0x178);
                    dVar87 = (double)ppcVar60[2] * *(double *)(pcVar34 + 0x180);
                    dVar76 = *(double *)(pcVar34 + 0x130);
                    dVar78 = *(double *)(pcVar34 + 0x138);
                    dVar86 = *(double *)(pcVar34 + 0x140);
                    dVar63 = *(double *)(pcVar34 + 0x148);
                    dVar66 = dVar17 * dVar76 - dVar5 * dVar78;
                    dVar65 = dVar87 * dVar78 - dVar17 * dVar86;
                    dVar64 = dVar5 * dVar86 - dVar76 * dVar87;
                    dVar65 = dVar65 + dVar65;
                    dVar64 = dVar64 + dVar64;
                    dVar66 = dVar66 + dVar66;
                    pcVar16 = (code *)((dVar66 * dVar78 - dVar64 * dVar86) + dVar63 * dVar65 + dVar5
                                      + *(double *)(pcVar34 + 0x150));
                    pcVar72 = (code *)((dVar86 * dVar65 - dVar76 * dVar66) +
                                       *(double *)(pcVar34 + 0x148) * dVar64 + dVar17 +
                                      *(double *)(pcVar34 + 0x158));
                    pcVar34 = (code *)(dVar66 * dVar63 + dVar87 +
                                       (dVar64 * dVar76 - dVar65 * dVar78) +
                                      *(double *)(pcVar34 + 0x160));
                  }
                  if (pcVar36 == (code *)0x0) {
                    pcVar82 = ppcVar60[3];
                    pcVar62 = ppcVar60[4];
                    pcVar36 = ppcVar60[5];
                  }
                  else {
                    dVar66 = (double)ppcVar60[3] * *(double *)(pcVar36 + 0x170);
                    dVar87 = (double)ppcVar60[4] * *(double *)(pcVar36 + 0x178);
                    dVar86 = (double)ppcVar60[5] * *(double *)(pcVar36 + 0x180);
                    dVar64 = *(double *)(pcVar36 + 0x130);
                    dVar76 = *(double *)(pcVar36 + 0x138);
                    dVar78 = *(double *)(pcVar36 + 0x140);
                    dVar63 = *(double *)(pcVar36 + 0x148);
                    dVar5 = dVar87 * dVar64 - dVar66 * dVar76;
                    dVar17 = dVar86 * dVar76 - dVar87 * dVar78;
                    dVar65 = dVar66 * dVar78 - dVar64 * dVar86;
                    dVar17 = dVar17 + dVar17;
                    dVar65 = dVar65 + dVar65;
                    dVar5 = dVar5 + dVar5;
                    pcVar82 = (code *)((dVar5 * dVar76 - dVar65 * dVar78) + dVar63 * dVar17 + dVar66
                                      + *(double *)(pcVar36 + 0x150));
                    pcVar62 = (code *)((dVar78 * dVar17 - dVar64 * dVar5) +
                                       *(double *)(pcVar36 + 0x148) * dVar65 + dVar87 +
                                      *(double *)(pcVar36 + 0x158));
                    pcVar36 = (code *)(dVar5 * dVar63 + dVar86 + (dVar65 * dVar64 - dVar17 * dVar76)
                                      + *(double *)(pcVar36 + 0x160));
                  }
                  if (625.0 < ABS((((double)pcVar36 - (double)pcVar34) *
                                   ((double)pcVar36 - (double)pcVar34) +
                                  ((double)pcVar62 - (double)pcVar72) *
                                  ((double)pcVar62 - (double)pcVar72) +
                                  ((double)pcVar82 - (double)pcVar16) *
                                  ((double)pcVar82 - (double)pcVar16)) -
                                  (((double)ppcVar60[0xb] - (double)ppcVar60[8]) *
                                   ((double)ppcVar60[0xb] - (double)ppcVar60[8]) +
                                  ((double)ppcVar60[10] - (double)ppcVar60[7]) *
                                  ((double)ppcVar60[10] - (double)ppcVar60[7]) +
                                  ((double)ppcVar60[9] - (double)ppcVar60[6]) *
                                  ((double)ppcVar60[9] - (double)ppcVar60[6])))) {
                    lVar46 = (longlong)*(int *)(ppcVar26 + lVar58 * 0xa7 + 0xa1);
                    ppcVar60[0x13] = ppcVar26[lVar58 * 0xa7 + lVar46 * 0x27 + -0xf];
                    ppcVar60[0x14] = ppcVar26[lVar58 * 0xa7 + lVar46 * 0x27 + -0xe];
                    ppcVar60[0x12] = ppcVar26[lVar58 * 0xa7 + lVar46 * 0x27 + -0x10];
                    ppcVar60[0x21] = ppcVar26[lVar58 * 0xa7 + lVar46 * 0x27 + -1];
                    *(undefined4 *)(ppcVar60 + 0x22) =
                         *(undefined4 *)(ppcVar26 + lVar58 * 0xa7 + lVar46 * 0x27);
                    ppcVar60[0x26] = ppcVar26[lVar58 * 0xa7 + lVar46 * 0x27 + 4];
                    ppcVar60[0x25] = ppcVar26[lVar58 * 0xa7 + lVar46 * 0x27 + 3];
                    pcVar34 = (ppcVar26 + lVar58 * 0xa7 + lVar46 * 0x27 + 1)[1];
                    ppcVar60[0x23] = ppcVar26[lVar58 * 0xa7 + lVar46 * 0x27 + 1];
                    ppcVar60[0x24] = pcVar34;
                    if (10000.0 < (double)ppcVar26[lVar58 * 0xa7 + lVar46 * 0x27 + -0x10] ||
                        (double)ppcVar26[lVar58 * 0xa7 + lVar46 * 0x27 + -0x10] == 10000.0) {
                      ppcVar60[0x12] = (code *)0x0;
                    }
                    local_5b8 = (code ***)(ppcVar60 + 6);
                    local_5d8 = (code ***)(ppcVar26 + lVar58 * 0xa7 + lVar46 * 0x27 + -0x1c);
                    local_598 = (code ***)(ppcVar26 + lVar58 * 0xa7 + lVar46 * 0x27 + -0x16);
                    local_5c8 = ppcVar26 + lVar58 * 0xa7 + lVar46 * 0x27 + -0xd;
                    lVar32 = 0;
                    bVar42 = true;
                    do {
                      bVar47 = bVar42;
                      ppcVar60[lVar32 * 3 + 2] =
                           ppcVar26[lVar58 * 0xa7 + lVar46 * 0x27 + lVar32 * 3 + -0x20];
                      pcVar34 = (ppcVar26 + lVar58 * 0xa7 + lVar46 * 0x27 + lVar32 * 3 + -0x22)[1];
                      ppcVar60[lVar32 * 3] =
                           ppcVar26[lVar58 * 0xa7 + lVar46 * 0x27 + lVar32 * 3 + -0x22];
                      (ppcVar60 + lVar32 * 3)[1] = pcVar34;
                      ppcVar60[lVar32 * 3 + 8] =
                           ppcVar26[lVar58 * 0xa7 + lVar46 * 0x27 + lVar32 * 3 + -0x1a];
                      ppcVar43 = (local_5d8 + lVar32 * 3)[1];
                      local_5b8[lVar32 * 3] = local_5d8[lVar32 * 3];
                      (local_5b8 + lVar32 * 3)[1] = ppcVar43;
                      ppcVar60[lVar32 * 3 + 0xe] =
                           ppcVar26[lVar58 * 0xa7 + lVar46 * 0x27 + lVar32 * 3 + -0x14];
                      ppcVar43 = (local_598 + lVar32 * 3)[1];
                      ppcVar60[lVar32 * 3 + 0xc] = (code *)local_598[lVar32 * 3];
                      (ppcVar60 + lVar32 * 3 + 0xc)[1] = (code *)ppcVar43;
                      ppcVar60[lVar32 * 3 + 0x17] =
                           ppcVar26[lVar58 * 0xa7 + lVar46 * 0x27 + lVar32 * 3 + -0xb];
                      pcVar34 = (local_5c8 + lVar32 * 3)[1];
                      ppcVar60[lVar32 * 3 + 0x15] = local_5c8[lVar32 * 3];
                      (ppcVar60 + lVar32 * 3 + 0x15)[1] = pcVar34;
                      ppcVar60[lVar32 * 3 + 0x1d] =
                           ppcVar26[lVar58 * 0xa7 + lVar46 * 0x27 + lVar32 * 3 + -5];
                      *(undefined1 (*) [16])(ppcVar60 + lVar32 * 3 + 0x1b) =
                           *(undefined1 (*) [16])
                            (ppcVar26 + lVar58 * 0xa7 + lVar46 * 0x27 + lVar32 * 3 + -7);
                      lVar32 = 1;
                      bVar42 = false;
                    } while (bVar47);
                    goto LAB_142b678b9;
                  }
                  ppcVar60[0x12] =
                       (code *)(((double)pcVar34 - (double)pcVar36) * (double)pcVar15 +
                               ((double)pcVar16 - (double)pcVar82) * (double)pcVar13 +
                               (double)pcVar14 * ((double)pcVar72 - (double)pcVar62));
                  ppcVar60[0x26] = (code *)0x0;
                }
                bVar42 = 1 < (longlong)uVar40;
                uVar40 = uVar40 - 1;
              } while (bVar42);
              uVar37 = *(uint *)(ppcVar26 + lVar58 * 0xa7 + 0xa1);
            }
            iVar22 = iVar22 + 1;
          } while (iVar22 < (int)uVar37);
          uVar45 = *(uint *)(local_5f0 + 0x46);
          local_570 = pcVar59;
        }
        uVar44 = uVar44 & ~(uint)uVar41;
        pppcVar25 = (code ***)local_5f0[0x45];
        if ((code ***)local_5f0[0x45] == (code ***)0x0) {
          pppcVar25 = local_578;
        }
        iVar22 = (int)pcVar59;
        lVar58 = (longlong)iVar22;
        uVar37 = *(uint *)((longlong)pppcVar25 + lVar58 * 4) & uVar44;
        if (uVar37 == 0) {
          iVar24 = uVar45 + 0x1e;
          if (-1 < (int)(uVar45 - 1)) {
            iVar24 = uVar45 - 1;
          }
          iVar24 = iVar24 >> 5;
          uVar56 = uVar56 + 0x20;
          iVar23 = iVar24;
          if (iVar24 < iVar22) {
            iVar23 = iVar22;
          }
          if (iVar22 < iVar24) {
            lVar46 = 0;
            do {
              uVar37 = *(uint *)((longlong)pppcVar25 + lVar46 * 4 + lVar58 * 4 + 4);
              if (uVar37 != 0) {
                pcVar59 = (code *)(ulonglong)(iVar22 + (int)lVar46 + 1);
                uVar44 = 0xffffffff;
                goto LAB_142b67b71;
              }
              uVar56 = uVar56 + 0x20;
              lVar46 = lVar46 + 1;
            } while (iVar23 - lVar58 != lVar46);
            uVar44 = 0xffffffff;
            iVar22 = iVar23;
          }
          pcVar59 = (code *)(ulonglong)(iVar22 + 1);
          uVar37 = uVar45;
        }
        else {
LAB_142b67b71:
          uVar41 = (ulonglong)(-uVar37 & uVar37);
          uVar40 = uVar41 * 2 + 1;
          lVar58 = 0x3f;
          if (uVar40 != 0) {
            for (; uVar40 >> lVar58 == 0; lVar58 = lVar58 + -1) {
            }
          }
          uVar37 = (uVar56 - ((uint)lVar58 ^ 0x3f)) + 0x3e;
          if ((int)uVar45 <= (int)uVar37) {
            uVar37 = uVar45;
          }
        }
        local_5a8 = (ulonglong)uVar51;
      } while (uVar37 != uVar51);
    }
LAB_142b66fd6:
    if (0 < *(int *)(local_5f0 + 0x16)) {
      lVar58 = 0;
      do {
        FUN_1449a8698(pppcVar27[0x15][lVar58]);
        lVar58 = lVar58 + 1;
      } while (lVar58 < *(int *)(pppcVar27 + 0x16));
    }
    local_388 = (code ****)0x0;
    pppcStack_378 = (code ***)&PTR_LAB_14a1e3ad0;
    pppcStack_370 = pppcVar27;
    local_3c8[6] = (code ***)&LAB_142b70d00;
    FUN_141744ba6(local_580,local_3c8 + 6);
    if (local_3c8[6] != (code ***)0x0) {
      ppppcVar28 = local_388;
      if (local_388 == (code ****)0x0) {
        ppppcVar28 = &pppcStack_378;
      }
      (*(code *)(*ppppcVar28)[2])();
    }
    local_388 = (code ****)0x0;
    pppcStack_378 = (code ***)&PTR_LAB_14a1e3af0;
    pppcStack_370 = pppcVar27;
    local_3c8[6] = (code ***)FUN_142b70d56;
    AcquireSRWLockShared((PSRWLOCK)pppcVar27[0x2d]);
    FUN_142b70d56(&pppcStack_370,pppcVar27[0x2c]);
    ReleaseSRWLockShared((PSRWLOCK)pppcVar27[0x2d]);
    uVar51 = *(uint *)(pppcVar27 + 0x46);
    uVar41 = (ulonglong)uVar51;
    if (uVar51 == 0) {
      uVar50 = 1;
      uVar40 = 0;
      iVar22 = 0;
      uVar37 = 0;
    }
    else {
      pppcVar25 = (code ***)pppcVar27[0x45];
      if ((code ***)pppcVar27[0x45] == (code ***)0x0) {
        pppcVar25 = local_578;
      }
      uVar37 = *(uint *)pppcVar25;
      if (uVar37 == 0) {
        iVar22 = uVar51 + 0x1e;
        if (-1 < (int)(uVar51 - 1)) {
          iVar22 = uVar51 - 1;
        }
        uVar40 = 0;
        uVar50 = (ulonglong)(uint)(iVar22 >> 5);
        if (iVar22 >> 5 < 1) {
          uVar50 = uVar40;
        }
        iVar22 = 0;
        do {
          if (uVar50 == uVar40) goto LAB_142b67be2;
          iVar22 = iVar22 + 0x20;
          uVar37 = *(uint *)((longlong)pppcVar25 + uVar40 * 4 + 4);
          uVar40 = uVar40 + 1;
        } while (uVar37 == 0);
      }
      else {
        uVar40 = 0;
        iVar22 = 0;
      }
      uVar50 = (ulonglong)(-uVar37 & uVar37);
      uVar1 = uVar50 * 2 + 1;
      lVar58 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar58 == 0; lVar58 = lVar58 + -1) {
        }
      }
      uVar37 = (iVar22 - ((uint)lVar58 ^ 0x3f)) + 0x3e;
      if ((int)uVar51 <= (int)uVar37) {
        uVar37 = uVar51;
      }
    }
    if (uVar37 != uVar51) {
      local_5e4 = 0xffffffff;
      pppcVar25 = local_578;
      local_5a8 = uVar41;
      do {
        ppcVar26 = pppcVar27[0x41];
        lVar58 = (longlong)(int)uVar37;
        if (0 < *(int *)(ppcVar26 + lVar58 * 0xa7 + 0xa1)) {
          local_5a0 = CONCAT44(local_5a0._4_4_,iVar22);
          ppcVar60 = ppcVar26 + lVar58 * 0xa7 + 0x25;
          lVar46 = 0;
          do {
            pcVar59 = ppcVar60[-0xd];
            if (pcVar59 == (code *)0x0) {
              pcVar36 = ppcVar60[-0x20];
              pcVar13 = ppcVar60[-0x1f];
              pcVar34 = ppcVar60[-0x1e];
            }
            else {
              dVar76 = (double)ppcVar60[-0x20] * *(double *)(pcVar59 + 0x170);
              dVar78 = (double)ppcVar60[-0x1f] * *(double *)(pcVar59 + 0x178);
              dVar64 = (double)ppcVar60[-0x1e] * *(double *)(pcVar59 + 0x180);
              dVar5 = *(double *)(pcVar59 + 0x130);
              dVar17 = *(double *)(pcVar59 + 0x138);
              dVar65 = *(double *)(pcVar59 + 0x140);
              dVar63 = *(double *)(pcVar59 + 0x148);
              dVar66 = dVar78 * dVar5 - dVar76 * dVar17;
              dVar86 = dVar64 * dVar17 - dVar78 * dVar65;
              dVar87 = dVar76 * dVar65 - dVar5 * dVar64;
              dVar86 = dVar86 + dVar86;
              dVar87 = dVar87 + dVar87;
              dVar66 = dVar66 + dVar66;
              pcVar36 = (code *)((dVar66 * dVar17 - dVar87 * dVar65) + dVar63 * dVar86 + dVar76 +
                                *(double *)(pcVar59 + 0x150));
              pcVar13 = (code *)((dVar65 * dVar86 - dVar5 * dVar66) +
                                 *(double *)(pcVar59 + 0x148) * dVar87 + dVar78 +
                                *(double *)(pcVar59 + 0x158));
              pcVar34 = (code *)(dVar66 * dVar63 + dVar64 + (dVar87 * dVar5 - dVar86 * dVar17) +
                                *(double *)(pcVar59 + 0x160));
            }
            pcVar14 = ppcVar60[-0xc];
            if (pcVar14 == (code *)0x0) {
              pcVar16 = ppcVar60[-0x1d];
              pcVar72 = ppcVar60[-0x1c];
              pcVar15 = ppcVar60[-0x1b];
            }
            else {
              dVar76 = (double)ppcVar60[-0x1d] * *(double *)(pcVar14 + 0x170);
              dVar78 = (double)ppcVar60[-0x1c] * *(double *)(pcVar14 + 0x178);
              dVar64 = (double)ppcVar60[-0x1b] * *(double *)(pcVar14 + 0x180);
              dVar5 = *(double *)(pcVar14 + 0x130);
              dVar17 = *(double *)(pcVar14 + 0x138);
              dVar65 = *(double *)(pcVar14 + 0x140);
              dVar63 = *(double *)(pcVar14 + 0x148);
              dVar66 = dVar78 * dVar5 - dVar76 * dVar17;
              dVar86 = dVar64 * dVar17 - dVar78 * dVar65;
              dVar87 = dVar76 * dVar65 - dVar5 * dVar64;
              dVar86 = dVar86 + dVar86;
              dVar87 = dVar87 + dVar87;
              dVar66 = dVar66 + dVar66;
              pcVar16 = (code *)((dVar66 * dVar17 - dVar87 * dVar65) + dVar63 * dVar86 + dVar76 +
                                *(double *)(pcVar14 + 0x150));
              pcVar72 = (code *)((dVar65 * dVar86 - dVar5 * dVar66) +
                                 *(double *)(pcVar14 + 0x148) * dVar87 + dVar78 +
                                *(double *)(pcVar14 + 0x158));
              pcVar15 = (code *)(dVar66 * dVar63 + dVar64 + (dVar87 * dVar5 - dVar86 * dVar17) +
                                *(double *)(pcVar14 + 0x160));
            }
            if (pcVar59 == (code *)0x0) {
              local_5b8 = DAT_14c8464e0;
              pppcStack_5b0 = DAT_14c8464e8;
              local_5e0 = DAT_14c8464f0;
            }
            else {
              FUN_144941734(pcVar59,local_3c8 + 6);
              local_5b8 = pppcStack_378;
              pppcStack_5b0 = pppcStack_370;
              local_5e0 = local_368[0];
            }
            if (pcVar14 == (code *)0x0) {
              local_598 = DAT_14c8464e0;
              pppcStack_590 = DAT_14c8464e8;
              local_5d8 = DAT_14c8464f0;
            }
            else {
              FUN_144941734(pcVar14,local_3c8 + 6);
              local_598 = pppcStack_378;
              pppcStack_590 = pppcStack_370;
              local_5d8 = local_368[0];
            }
            if (pcVar59 == (code *)0x0) {
              pcVar59 = ppcVar60[-0x14];
              pcVar82 = ppcVar60[-0x13];
              pcVar62 = ppcVar60[-0x12];
            }
            else {
              pcVar4 = ppcVar60[-0x14];
              pcVar82 = ppcVar60[-0x13];
              pcVar62 = ppcVar60[-0x12];
              dVar63 = *(double *)(pcVar59 + 0x140);
              dVar66 = *(double *)(pcVar59 + 0x130);
              dVar87 = *(double *)(pcVar59 + 0x138);
              dVar65 = dVar87 * (double)pcVar62 - (double)pcVar82 * dVar63;
              dVar65 = dVar65 + dVar65;
              dVar5 = *(double *)(pcVar59 + 0x148);
              dVar64 = dVar66 * (double)pcVar82 - (double)pcVar4 * dVar87;
              dVar64 = dVar64 + dVar64;
              dVar17 = dVar63 * (double)pcVar4 - (double)pcVar62 * dVar66;
              dVar17 = dVar17 + dVar17;
              pcVar62 = (code *)((dVar66 * dVar17 - dVar65 * dVar87) +
                                dVar5 * dVar64 + (double)pcVar62);
              pcVar82 = (code *)((dVar63 * dVar65 - dVar64 * dVar66) +
                                dVar5 * dVar17 + (double)pcVar82);
              pcVar59 = (code *)((dVar87 * dVar64 - dVar17 * dVar63) +
                                dVar5 * dVar65 + (double)pcVar4);
            }
            if (pcVar14 == (code *)0x0) {
              pcVar14 = ppcVar60[-0x11];
              pcVar4 = ppcVar60[-0x10];
              pcVar88 = ppcVar60[-0xf];
            }
            else {
              pcVar6 = ppcVar60[-0x11];
              local_5c8 = (code **)ppcVar60[-0x10];
              local_570 = ppcVar60[-0xf];
              local_5c0 = *(code ***)(pcVar14 + 0x140);
              dVar63 = *(double *)(pcVar14 + 0x130);
              dVar66 = *(double *)(pcVar14 + 0x138);
              dVar5 = dVar66 * (double)local_570 - (double)local_5c8 * (double)local_5c0;
              dVar5 = dVar5 + dVar5;
              dVar87 = *(double *)(pcVar14 + 0x148);
              dVar65 = dVar63 * (double)local_5c8 - (double)pcVar6 * dVar66;
              dVar65 = dVar65 + dVar65;
              dVar17 = (double)local_5c0 * (double)pcVar6 - (double)local_570 * dVar63;
              dVar17 = dVar17 + dVar17;
              pcVar88 = (code *)((dVar63 * dVar17 - dVar5 * dVar66) +
                                dVar87 * dVar65 + (double)local_570);
              pcVar4 = (code *)(((double)local_5c0 * dVar5 - dVar65 * dVar63) +
                               dVar87 * dVar17 + (double)local_5c8);
              pcVar14 = (code *)((dVar66 * dVar65 - dVar17 * (double)local_5c0) +
                                dVar87 * dVar5 + (double)pcVar6);
            }
            auVar77._0_8_ = (double)pcVar16 - (double)local_598;
            auVar77._8_8_ = (double)pcVar72 - (double)pppcStack_590;
            ppcVar60[-0xe] =
                 (code *)(((double)pcVar34 - (double)pcVar15) * (double)pcVar62 +
                         ((double)pcVar36 - (double)pcVar16) * (double)pcVar59 +
                         ((double)pcVar13 - (double)pcVar72) * (double)pcVar82);
            ppcVar60[-5] = (code *)((double)pcVar36 - (double)local_5b8);
            ppcVar60[-4] = (code *)((double)pcVar13 - (double)pppcStack_5b0);
            ppcVar60[-3] = (code *)((double)pcVar34 - (double)local_5e0);
            ppcVar60[-0xb] = pcVar59;
            ppcVar60[-10] = pcVar82;
            ppcVar60[-9] = pcVar62;
            *(undefined1 (*) [16])(ppcVar60 + -2) = auVar77;
            *ppcVar60 = (code *)((double)pcVar15 - (double)local_5d8);
            ppcVar60[-8] = pcVar14;
            ppcVar60[-7] = pcVar4;
            ppcVar60[-6] = pcVar88;
            lVar46 = lVar46 + 1;
            ppcVar60 = ppcVar60 + 0x27;
          } while (lVar46 < *(int *)(ppcVar26 + lVar58 * 0xa7 + 0xa1));
          uVar51 = *(uint *)(local_5f0 + 0x46);
          pppcVar27 = local_5f0;
          uVar41 = local_5a8;
          pppcVar25 = local_578;
          iVar22 = (int)local_5a0;
        }
        local_5e4 = local_5e4 & ~(uint)uVar50;
        pppcVar57 = (code ***)pppcVar27[0x45];
        if ((code ***)pppcVar27[0x45] == (code ***)0x0) {
          pppcVar57 = pppcVar25;
        }
        iVar24 = (int)uVar40;
        lVar58 = (longlong)iVar24;
        uVar37 = *(uint *)((longlong)pppcVar57 + lVar58 * 4) & local_5e4;
        if (uVar37 == 0) {
          iVar23 = uVar51 + 0x1e;
          if (-1 < (int)(uVar51 - 1)) {
            iVar23 = uVar51 - 1;
          }
          iVar23 = iVar23 >> 5;
          iVar22 = iVar22 + 0x20;
          iVar55 = iVar23;
          if (iVar23 < iVar24) {
            iVar55 = iVar24;
          }
          if (iVar24 < iVar23) {
            lVar46 = 0;
            do {
              uVar37 = *(uint *)((longlong)pppcVar57 + lVar46 * 4 + lVar58 * 4 + 4);
              if (uVar37 != 0) {
                uVar40 = (ulonglong)(iVar24 + (int)lVar46 + 1);
                local_5e4 = 0xffffffff;
                goto LAB_142b684cb;
              }
              iVar22 = iVar22 + 0x20;
              lVar46 = lVar46 + 1;
            } while (iVar55 - lVar58 != lVar46);
            local_5e4 = 0xffffffff;
            lVar58 = (longlong)iVar55;
          }
          uVar40 = lVar58 + 1U & 0xffffffff;
          pppcVar27 = local_5f0;
          pppcVar25 = local_578;
          uVar37 = uVar51;
        }
        else {
LAB_142b684cb:
          uVar50 = (ulonglong)(-uVar37 & uVar37);
          uVar1 = uVar50 * 2 + 1;
          lVar58 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar58 == 0; lVar58 = lVar58 + -1) {
            }
          }
          uVar37 = (iVar22 - ((uint)lVar58 ^ 0x3f)) + 0x3e;
          if ((int)uVar51 <= (int)uVar37) {
            uVar37 = uVar51;
          }
        }
      } while (uVar37 != (uint)uVar41);
    }
LAB_142b67be2:
    if ((longlong)*(int *)(pppcVar27 + 0x16) != 0) {
      ppcVar60 = pppcVar27[0x15];
      ppcVar26 = ppcVar60 + *(int *)(pppcVar27 + 0x16);
      do {
        lVar58 = (longlong)*(int *)(*ppcVar60 + 0x10);
        if (lVar58 != 0) {
          lVar46 = *(longlong *)(*ppcVar60 + 8);
          lVar32 = 0;
          do {
            lVar38 = *(longlong *)(lVar46 + lVar32);
            iVar22 = *(int *)(lVar38 + 0x298);
            if (iVar22 < 0) goto LAB_142b6a893;
            *(undefined4 *)(lVar38 + 0x298) = 0;
            if (*(int *)(lVar38 + 0x29c) != iVar22) {
              FUN_1462b4164(lVar38 + 0x290);
            }
            iVar22 = *(int *)(lVar38 + 0x2a8);
            if (iVar22 < 0) goto LAB_142b6a893;
            *(undefined4 *)(lVar38 + 0x2a8) = 0;
            if (*(int *)(lVar38 + 0x2ac) != iVar22) {
              FUN_141745d28(lVar38 + 0x2a0);
            }
            *(undefined1 *)(lVar38 + 0x284) = 0;
            lVar32 = lVar32 + 8;
          } while (lVar58 * 8 != lVar32);
        }
        ppcVar60 = ppcVar60 + 1;
      } while (ppcVar60 != ppcVar26);
    }
    iVar24 = *(int *)(pppcVar27 + 0x1c);
    if (iVar24 == 0) {
      uVar41 = 0;
      uVar50 = 1;
      iVar23 = 0;
      iVar22 = 0;
    }
    else {
      pppcVar25 = (code ***)pppcVar27[0x1b];
      if ((code ***)pppcVar27[0x1b] == (code ***)0x0) {
        pppcVar25 = local_5d0;
      }
      uVar51 = *(uint *)pppcVar25;
      if (uVar51 == 0) {
        iVar22 = iVar24 + 0x1e;
        if (-1 < iVar24 + -1) {
          iVar22 = iVar24 + -1;
        }
        uVar41 = 0;
        uVar40 = (ulonglong)(uint)(iVar22 >> 5);
        if (iVar22 >> 5 < 1) {
          uVar40 = uVar41;
        }
        iVar23 = 0;
        do {
          if (uVar40 == uVar41) goto LAB_142b685a1;
          iVar23 = iVar23 + 0x20;
          uVar51 = *(uint *)((longlong)pppcVar25 + uVar41 * 4 + 4);
          uVar41 = uVar41 + 1;
        } while (uVar51 == 0);
      }
      else {
        uVar41 = 0;
        iVar23 = 0;
      }
      uVar50 = (ulonglong)(-uVar51 & uVar51);
      uVar40 = uVar50 * 2 + 1;
      lVar58 = 0x3f;
      if (uVar40 != 0) {
        for (; uVar40 >> lVar58 == 0; lVar58 = lVar58 + -1) {
        }
      }
      iVar22 = (iVar23 - ((uint)lVar58 ^ 0x3f)) + 0x3e;
      if (iVar24 <= iVar22) {
        iVar22 = iVar24;
      }
    }
    if (iVar22 != iVar24) {
      uVar51 = 0xffffffff;
      do {
        pcVar59 = local_5f0[0x17][iVar22];
        iVar22 = *(int *)(pcVar59 + 0x298);
        if (iVar22 < 0) {
LAB_142b6a893:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar22);
        }
        *(undefined4 *)(pcVar59 + 0x298) = 0;
        if (*(int *)(pcVar59 + 0x29c) != iVar22) {
          FUN_1462b4164(pcVar59 + 0x290);
        }
        iVar22 = *(int *)(pcVar59 + 0x2a8);
        if (iVar22 < 0) goto LAB_142b6a893;
        *(undefined4 *)(pcVar59 + 0x2a8) = 0;
        if (*(int *)(pcVar59 + 0x2ac) != iVar22) {
          FUN_141745d28(pcVar59 + 0x2a0);
        }
        pcVar59[0x284] = (code)0x0;
        uVar51 = uVar51 & ~(uint)uVar50;
        pppcVar27 = (code ***)local_5f0[0x1b];
        if ((code ***)local_5f0[0x1b] == (code ***)0x0) {
          pppcVar27 = local_5d0;
        }
        iVar55 = *(int *)(local_5f0 + 0x1c);
        iVar22 = (int)uVar41;
        lVar58 = (longlong)iVar22;
        uVar37 = *(uint *)((longlong)pppcVar27 + lVar58 * 4) & uVar51;
        if (uVar37 == 0) {
          iVar53 = iVar55 + 0x1e;
          if (-1 < iVar55 + -1) {
            iVar53 = iVar55 + -1;
          }
          iVar53 = iVar53 >> 5;
          iVar23 = iVar23 + 0x20;
          iVar54 = iVar53;
          if (iVar53 < iVar22) {
            iVar54 = iVar22;
          }
          if (iVar22 < iVar53) {
            lVar46 = 0;
            do {
              uVar37 = *(uint *)((longlong)pppcVar27 + lVar46 * 4 + lVar58 * 4 + 4);
              if (uVar37 != 0) {
                uVar41 = (ulonglong)(iVar22 + (int)lVar46 + 1);
                uVar51 = 0xffffffff;
                goto LAB_142b67db4;
              }
              iVar23 = iVar23 + 0x20;
              lVar46 = lVar46 + 1;
            } while (iVar54 - lVar58 != lVar46);
            uVar51 = 0xffffffff;
            iVar22 = iVar54;
          }
          uVar41 = (ulonglong)(iVar22 + 1);
          iVar22 = iVar55;
        }
        else {
LAB_142b67db4:
          uVar50 = (ulonglong)(-uVar37 & uVar37);
          uVar40 = uVar50 * 2 + 1;
          lVar58 = 0x3f;
          if (uVar40 != 0) {
            for (; uVar40 >> lVar58 == 0; lVar58 = lVar58 + -1) {
            }
          }
          iVar22 = (iVar23 - ((uint)lVar58 ^ 0x3f)) + 0x3e;
          if (iVar55 <= iVar22) {
            iVar22 = iVar55;
          }
        }
      } while (iVar22 != iVar24);
    }
LAB_142b685a1:
    local_5e0 = local_5f0 + 0x20;
    iVar22 = *(int *)(local_5f0 + 0x23);
    if (iVar22 == 0) {
      uVar41 = 0;
      uVar50 = 1;
      iVar24 = 0;
      iVar23 = 0;
    }
    else {
      pppcVar27 = (code ***)local_5f0[0x22];
      if ((code ***)local_5f0[0x22] == (code ***)0x0) {
        pppcVar27 = local_5e0;
      }
      uVar51 = *(uint *)pppcVar27;
      if (uVar51 == 0) {
        iVar24 = iVar22 + 0x1e;
        if (-1 < iVar22 + -1) {
          iVar24 = iVar22 + -1;
        }
        uVar41 = 0;
        uVar40 = (ulonglong)(uint)(iVar24 >> 5);
        if (iVar24 >> 5 < 1) {
          uVar40 = uVar41;
        }
        iVar24 = 0;
        do {
          if (uVar40 == uVar41) goto LAB_142b687a4;
          iVar24 = iVar24 + 0x20;
          uVar51 = *(uint *)((longlong)pppcVar27 + uVar41 * 4 + 4);
          uVar41 = uVar41 + 1;
        } while (uVar51 == 0);
      }
      else {
        uVar41 = 0;
        iVar24 = 0;
      }
      uVar50 = (ulonglong)(-uVar51 & uVar51);
      uVar40 = uVar50 * 2 + 1;
      lVar58 = 0x3f;
      if (uVar40 != 0) {
        for (; uVar40 >> lVar58 == 0; lVar58 = lVar58 + -1) {
        }
      }
      iVar23 = (iVar24 - ((uint)lVar58 ^ 0x3f)) + 0x3e;
      if (iVar22 <= iVar23) {
        iVar23 = iVar22;
      }
    }
    if (iVar23 != iVar22) {
      uVar51 = 0xffffffff;
      do {
        pcVar59 = local_5f0[0x1e][iVar23];
        lVar58 = *(longlong *)(pcVar59 + 0x20);
        if (lVar58 != 0) {
          iVar23 = *(int *)(lVar58 + 0x298);
          *(uint *)(lVar58 + 0x298) = iVar23 + 1U;
          if (*(uint *)(lVar58 + 0x29c) < iVar23 + 1U) {
            FUN_141743918((longlong *)(lVar58 + 0x290),iVar23);
          }
          *(code **)(*(longlong *)(lVar58 + 0x290) + (longlong)iVar23 * 8) = pcVar59;
        }
        lVar58 = *(longlong *)(pcVar59 + 0x30);
        if (lVar58 != 0) {
          iVar23 = *(int *)(lVar58 + 0x298);
          *(uint *)(lVar58 + 0x298) = iVar23 + 1U;
          if (*(uint *)(lVar58 + 0x29c) < iVar23 + 1U) {
            FUN_141743918((longlong *)(lVar58 + 0x290),iVar23);
          }
          *(code **)(*(longlong *)(lVar58 + 0x290) + (longlong)iVar23 * 8) = pcVar59;
        }
        uVar51 = uVar51 & ~(uint)uVar50;
        pppcVar27 = (code ***)local_5f0[0x22];
        if ((code ***)local_5f0[0x22] == (code ***)0x0) {
          pppcVar27 = local_5e0;
        }
        iVar55 = *(int *)(local_5f0 + 0x23);
        iVar23 = (int)uVar41;
        lVar58 = (longlong)iVar23;
        uVar37 = *(uint *)((longlong)pppcVar27 + lVar58 * 4) & uVar51;
        if (uVar37 == 0) {
          iVar53 = iVar55 + 0x1e;
          if (-1 < iVar55 + -1) {
            iVar53 = iVar55 + -1;
          }
          iVar53 = iVar53 >> 5;
          iVar24 = iVar24 + 0x20;
          iVar54 = iVar53;
          if (iVar53 < iVar23) {
            iVar54 = iVar23;
          }
          if (iVar23 < iVar53) {
            lVar46 = 0;
            do {
              uVar37 = *(uint *)((longlong)pppcVar27 + lVar46 * 4 + lVar58 * 4 + 4);
              if (uVar37 != 0) {
                uVar41 = (ulonglong)(iVar23 + (int)lVar46 + 1);
                uVar51 = 0xffffffff;
                goto LAB_142b68720;
              }
              iVar24 = iVar24 + 0x20;
              lVar46 = lVar46 + 1;
            } while (iVar54 - lVar58 != lVar46);
            uVar51 = 0xffffffff;
            iVar23 = iVar54;
          }
          uVar41 = (ulonglong)(iVar23 + 1);
          iVar23 = iVar55;
        }
        else {
LAB_142b68720:
          uVar50 = (ulonglong)(-uVar37 & uVar37);
          uVar40 = uVar50 * 2 + 1;
          lVar58 = 0x3f;
          if (uVar40 != 0) {
            for (; uVar40 >> lVar58 == 0; lVar58 = lVar58 + -1) {
            }
          }
          iVar23 = (iVar24 - ((uint)lVar58 ^ 0x3f)) + 0x3e;
          if (iVar55 <= iVar23) {
            iVar23 = iVar55;
          }
        }
      } while (iVar23 != iVar22);
    }
LAB_142b687a4:
    uVar51 = *(uint *)(local_5f0 + 0x46);
    pppcVar27 = (code ***)(ulonglong)uVar51;
    if (uVar51 == 0) {
      uVar50 = 1;
      uVar41 = 0;
      iVar22 = 0;
      uVar37 = 0;
    }
    else {
      pppcVar25 = (code ***)local_5f0[0x45];
      if ((code ***)local_5f0[0x45] == (code ***)0x0) {
        pppcVar25 = local_578;
      }
      uVar37 = *(uint *)pppcVar25;
      if (uVar37 == 0) {
        iVar22 = uVar51 + 0x1e;
        if (-1 < (int)(uVar51 - 1)) {
          iVar22 = uVar51 - 1;
        }
        uVar41 = 0;
        uVar40 = (ulonglong)(uint)(iVar22 >> 5);
        if (iVar22 >> 5 < 1) {
          uVar40 = uVar41;
        }
        iVar22 = 0;
        do {
          if (uVar40 == uVar41) goto LAB_142b68fc1;
          iVar22 = iVar22 + 0x20;
          uVar37 = *(uint *)((longlong)pppcVar25 + uVar41 * 4 + 4);
          uVar41 = uVar41 + 1;
        } while (uVar37 == 0);
      }
      else {
        uVar41 = 0;
        iVar22 = 0;
      }
      uVar50 = (ulonglong)(-uVar37 & uVar37);
      uVar40 = uVar50 * 2 + 1;
      lVar58 = 0x3f;
      if (uVar40 != 0) {
        for (; uVar40 >> lVar58 == 0; lVar58 = lVar58 + -1) {
        }
      }
      uVar37 = (iVar22 - ((uint)lVar58 ^ 0x3f)) + 0x3e;
      if ((int)uVar51 <= (int)uVar37) {
        uVar37 = uVar51;
      }
    }
    if (uVar37 != uVar51) {
      uVar51 = 0xffffffff;
      local_580 = pppcVar27;
      do {
        ppcVar26 = local_5f0[0x41];
        lVar58 = (longlong)(int)uVar37;
        ppcVar60 = ppcVar26 + lVar58 * 0xa7 + 0xa2;
        if ((*(int *)ppcVar60 == 5) &&
           (pcVar59 = ppcVar26[lVar58 * 0xa7 + 0xa3], pcVar59 != (code *)0x0)) {
          iVar24 = *(int *)(pcVar59 + 0x2a8);
          *(uint *)(pcVar59 + 0x2a8) = iVar24 + 1U;
          if (*(uint *)(pcVar59 + 0x2ac) < iVar24 + 1U) {
            local_5e4 = uVar51;
            FUN_141745e0c(pcVar59 + 0x2a0,iVar24);
            uVar51 = local_5e4;
          }
          lVar32 = *(longlong *)(pcVar59 + 0x2a0);
          lVar38 = (longlong)iVar24 * 0x520;
          lVar46 = lVar32 + lVar38;
          *(undefined1 *)(lVar32 + 8 + lVar38) = 0;
          *(undefined8 *)(lVar32 + 0x10 + lVar38) = 0;
          *(undefined ***)(lVar32 + lVar38) = &PTR_LAB_14a1e1920;
          lVar32 = 0x130;
          do {
            puVar2 = (undefined8 *)(lVar46 + -0x88 + lVar32);
            *puVar2 = 0;
            puVar2[1] = 0;
            *(undefined8 *)(lVar46 + -0x78 + lVar32) = 0;
            *(undefined8 *)(lVar46 + -0x10 + lVar32) = 0xffffffffffffffff;
            *(undefined4 *)(lVar46 + -8 + lVar32) = 0xffffffff;
            *(undefined8 *)(lVar46 + lVar32) = 0;
            ((undefined8 *)(lVar46 + lVar32))[1] = 0;
            puVar2 = (undefined8 *)(lVar46 + 0x10 + lVar32);
            *puVar2 = 0;
            puVar2[1] = 0;
            lVar32 = lVar32 + 0x138;
          } while (lVar32 != 0x610);
          *(undefined4 *)(lVar46 + 0x500) = 0;
          *(undefined8 *)(lVar46 + 0x508) = 0;
          *(undefined4 *)(lVar46 + 0x510) = 0;
          *(undefined8 *)(lVar46 + 0x518) = 0;
          *(undefined4 *)(lVar46 + 0x4f8) = *(undefined4 *)(ppcVar26 + lVar58 * 0xa7 + 0xa1);
          *(undefined4 *)(lVar46 + 0x4fc) =
               *(undefined4 *)((longlong)ppcVar26 + lVar58 * 0x538 + 0x50c);
          pcVar59 = ppcVar26[lVar58 * 0xa7 + 0xa3];
          *(code **)(lVar46 + 0x500) = *ppcVar60;
          *(code **)(lVar46 + 0x508) = pcVar59;
          pcVar59 = ppcVar26[lVar58 * 0xa7 + 0xa5];
          *(code **)(lVar46 + 0x510) = ppcVar26[lVar58 * 0xa7 + 0xa4];
          *(code **)(lVar46 + 0x518) = pcVar59;
          if (0 < *(int *)(ppcVar26 + lVar58 * 0xa7 + 0xa1)) {
            lVar32 = 0;
            local_5a0 = CONCAT44(local_5a0._4_4_,iVar22);
            do {
              lVar49 = lVar32 * 0x138;
              lVar38 = lVar46 + 0x18 + lVar49;
              *(code **)(lVar46 + 0xb0 + lVar49) = ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + 0x18];
              *(code **)(lVar46 + 0xb8 + lVar49) = ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + 0x19];
              *(code **)(lVar46 + 0xa8 + lVar49) = ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + 0x17];
              *(code **)(lVar46 + 0x120 + lVar49) = ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + 0x26];
              *(undefined4 *)(lVar46 + 0x128 + lVar49) =
                   *(undefined4 *)(ppcVar26 + lVar58 * 0xa7 + lVar32 * 0x27 + 0x27);
              *(code **)(lVar46 + 0x148 + lVar49) = ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + 0x2b];
              *(code **)(lVar46 + 0x140 + lVar49) = ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + 0x2a];
              pcVar59 = (ppcVar26 + lVar58 * 0xa7 + lVar32 * 0x27 + 0x28)[1];
              puVar2 = (undefined8 *)(lVar46 + 0x130 + lVar49);
              *puVar2 = ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + 0x28];
              puVar2[1] = pcVar59;
              if (10000.0 < (double)ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + 0x17] ||
                  (double)ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + 0x17] == 10000.0) {
                *(undefined8 *)(lVar38 + 0x90) = 0;
              }
              local_5b8 = (code ***)(ppcVar26 + lVar58 * 0xa7 + lVar32 * 0x27 + 0xb);
              local_5d8 = (code ***)(lVar38 + 0x30);
              local_598 = (code ***)(ppcVar26 + lVar58 * 0xa7 + lVar32 * 0x27 + 0x11);
              local_5c0 = (code **)(lVar38 + 0x60);
              local_5c8 = ppcVar26 + lVar58 * 0xa7 + lVar32 * 0x27 + 0x1a;
              local_570 = (code *)(lVar38 + 0xa8);
              lVar49 = 0;
              bVar42 = true;
              do {
                bVar47 = bVar42;
                lVar18 = lVar49 * 0x18;
                *(code **)(lVar38 + 0x10 + lVar18) =
                     ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + lVar49 * 3 + 7];
                pcVar59 = (ppcVar26 + lVar58 * 0xa7 + lVar32 * 0x27 + lVar49 * 3 + 5)[1];
                *(undefined8 *)(lVar38 + lVar18) =
                     ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + lVar49 * 3 + 5];
                ((undefined8 *)(lVar38 + lVar18))[1] = pcVar59;
                *(code **)(lVar38 + 0x40 + lVar18) =
                     ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + lVar49 * 3 + 0xd];
                ppcVar43 = (local_5b8 + lVar49 * 3)[1];
                local_5d8[lVar49 * 3] = local_5b8[lVar49 * 3];
                (local_5d8 + lVar49 * 3)[1] = ppcVar43;
                *(code **)(lVar38 + 0x70 + lVar18) =
                     ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + lVar49 * 3 + 0x13];
                ppcVar43 = (local_598 + lVar49 * 3)[1];
                local_5c0[lVar49 * 3] = (code *)local_598[lVar49 * 3];
                (local_5c0 + lVar49 * 3)[1] = (code *)ppcVar43;
                *(code **)(lVar38 + 0xb8 + lVar18) =
                     ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + lVar49 * 3 + 0x1c];
                pcVar59 = (local_5c8 + lVar49 * 3)[1];
                *(code **)(local_570 + lVar18) = local_5c8[lVar49 * 3];
                *(code **)(local_570 + lVar18 + 8) = pcVar59;
                *(code **)(lVar38 + 0xe8 + lVar18) =
                     ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + lVar49 * 3 + 0x22];
                pcVar59 = (ppcVar26 + lVar58 * 0xa7 + lVar32 * 0x27 + lVar49 * 3 + 0x20)[1];
                puVar2 = (undefined8 *)(lVar38 + 0xd8 + lVar18);
                *puVar2 = ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + lVar49 * 3 + 0x20];
                puVar2[1] = pcVar59;
                lVar49 = 1;
                bVar42 = false;
              } while (bVar47);
              lVar32 = lVar32 + 1;
              pppcVar27 = local_580;
              local_5e4 = uVar51;
              local_5a8 = uVar41;
            } while (lVar32 < *(int *)(ppcVar26 + lVar58 * 0xa7 + 0xa1));
          }
        }
        if ((*(int *)(ppcVar26 + lVar58 * 0xa7 + 0xa4) == 5) &&
           (pcVar59 = ppcVar26[lVar58 * 0xa7 + 0xa5], pcVar59 != (code *)0x0)) {
          iVar24 = *(int *)(pcVar59 + 0x2a8);
          *(uint *)(pcVar59 + 0x2a8) = iVar24 + 1U;
          if (*(uint *)(pcVar59 + 0x2ac) < iVar24 + 1U) {
            local_5e4 = uVar51;
            FUN_141745e0c(pcVar59 + 0x2a0,iVar24);
            uVar51 = local_5e4;
          }
          lVar32 = *(longlong *)(pcVar59 + 0x2a0);
          lVar38 = (longlong)iVar24 * 0x520;
          lVar46 = lVar32 + lVar38;
          *(undefined1 *)(lVar32 + 8 + lVar38) = 0;
          *(undefined8 *)(lVar32 + 0x10 + lVar38) = 0;
          *(undefined ***)(lVar32 + lVar38) = &PTR_LAB_14a1e1920;
          lVar32 = 0x130;
          do {
            puVar2 = (undefined8 *)(lVar46 + -0x88 + lVar32);
            *puVar2 = 0;
            puVar2[1] = 0;
            *(undefined8 *)(lVar46 + -0x78 + lVar32) = 0;
            *(undefined8 *)(lVar46 + -0x10 + lVar32) = 0xffffffffffffffff;
            *(undefined4 *)(lVar46 + -8 + lVar32) = 0xffffffff;
            *(undefined8 *)(lVar46 + lVar32) = 0;
            ((undefined8 *)(lVar46 + lVar32))[1] = 0;
            puVar2 = (undefined8 *)(lVar46 + 0x10 + lVar32);
            *puVar2 = 0;
            puVar2[1] = 0;
            lVar32 = lVar32 + 0x138;
          } while (lVar32 != 0x610);
          *(undefined4 *)(lVar46 + 0x500) = 0;
          *(undefined8 *)(lVar46 + 0x508) = 0;
          *(undefined4 *)(lVar46 + 0x510) = 0;
          *(undefined8 *)(lVar46 + 0x518) = 0;
          *(undefined4 *)(lVar46 + 0x4f8) = *(undefined4 *)(ppcVar26 + lVar58 * 0xa7 + 0xa1);
          *(undefined4 *)(lVar46 + 0x4fc) =
               *(undefined4 *)((longlong)ppcVar26 + lVar58 * 0x538 + 0x50c);
          pcVar59 = ppcVar26[lVar58 * 0xa7 + 0xa3];
          *(code **)(lVar46 + 0x500) = *ppcVar60;
          *(code **)(lVar46 + 0x508) = pcVar59;
          pcVar59 = ppcVar26[lVar58 * 0xa7 + 0xa5];
          *(code **)(lVar46 + 0x510) = ppcVar26[lVar58 * 0xa7 + 0xa4];
          *(code **)(lVar46 + 0x518) = pcVar59;
          if (0 < *(int *)(ppcVar26 + lVar58 * 0xa7 + 0xa1)) {
            lVar32 = 0;
            local_5a0 = CONCAT44(local_5a0._4_4_,iVar22);
            do {
              lVar49 = lVar32 * 0x138;
              lVar38 = lVar46 + 0x18 + lVar49;
              *(code **)(lVar46 + 0xb0 + lVar49) = ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + 0x18];
              *(code **)(lVar46 + 0xb8 + lVar49) = ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + 0x19];
              *(code **)(lVar46 + 0xa8 + lVar49) = ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + 0x17];
              *(code **)(lVar46 + 0x120 + lVar49) = ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + 0x26];
              *(undefined4 *)(lVar46 + 0x128 + lVar49) =
                   *(undefined4 *)(ppcVar26 + lVar58 * 0xa7 + lVar32 * 0x27 + 0x27);
              *(code **)(lVar46 + 0x148 + lVar49) = ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + 0x2b];
              *(code **)(lVar46 + 0x140 + lVar49) = ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + 0x2a];
              pcVar59 = (ppcVar26 + lVar58 * 0xa7 + lVar32 * 0x27 + 0x28)[1];
              puVar2 = (undefined8 *)(lVar46 + 0x130 + lVar49);
              *puVar2 = ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + 0x28];
              puVar2[1] = pcVar59;
              if (10000.0 < (double)ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + 0x17] ||
                  (double)ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + 0x17] == 10000.0) {
                *(undefined8 *)(lVar38 + 0x90) = 0;
              }
              local_5b8 = (code ***)(ppcVar26 + lVar58 * 0xa7 + lVar32 * 0x27 + 0xb);
              local_5d8 = (code ***)(lVar38 + 0x30);
              local_598 = (code ***)(ppcVar26 + lVar58 * 0xa7 + lVar32 * 0x27 + 0x11);
              local_5c0 = (code **)(lVar38 + 0x60);
              local_5c8 = ppcVar26 + lVar58 * 0xa7 + lVar32 * 0x27 + 0x1a;
              lVar49 = 0;
              bVar42 = true;
              do {
                bVar47 = bVar42;
                lVar18 = lVar49 * 0x18;
                *(code **)(lVar38 + 0x10 + lVar18) =
                     ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + lVar49 * 3 + 7];
                pcVar59 = (ppcVar26 + lVar58 * 0xa7 + lVar32 * 0x27 + lVar49 * 3 + 5)[1];
                *(undefined8 *)(lVar38 + lVar18) =
                     ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + lVar49 * 3 + 5];
                ((undefined8 *)(lVar38 + lVar18))[1] = pcVar59;
                *(code **)(lVar38 + 0x40 + lVar18) =
                     ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + lVar49 * 3 + 0xd];
                ppcVar60 = (local_5b8 + lVar49 * 3)[1];
                local_5d8[lVar49 * 3] = local_5b8[lVar49 * 3];
                (local_5d8 + lVar49 * 3)[1] = ppcVar60;
                *(code **)(lVar38 + 0x70 + lVar18) =
                     ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + lVar49 * 3 + 0x13];
                ppcVar60 = (local_598 + lVar49 * 3)[1];
                local_5c0[lVar49 * 3] = (code *)local_598[lVar49 * 3];
                (local_5c0 + lVar49 * 3)[1] = (code *)ppcVar60;
                *(code **)(lVar38 + 0xb8 + lVar18) =
                     ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + lVar49 * 3 + 0x1c];
                pcVar59 = (local_5c8 + lVar49 * 3)[1];
                puVar2 = (undefined8 *)(lVar38 + 0xa8 + lVar18);
                *puVar2 = local_5c8[lVar49 * 3];
                puVar2[1] = pcVar59;
                *(code **)(lVar38 + 0xe8 + lVar18) =
                     ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + lVar49 * 3 + 0x22];
                pcVar59 = (ppcVar26 + lVar58 * 0xa7 + lVar32 * 0x27 + lVar49 * 3 + 0x20)[1];
                puVar2 = (undefined8 *)(lVar38 + 0xd8 + lVar18);
                *puVar2 = ppcVar26[lVar58 * 0xa7 + lVar32 * 0x27 + lVar49 * 3 + 0x20];
                puVar2[1] = pcVar59;
                lVar49 = 1;
                bVar42 = false;
              } while (bVar47);
              lVar32 = lVar32 + 1;
              pppcVar27 = local_580;
              local_5e4 = uVar51;
              local_5a8 = uVar41;
            } while (lVar32 < *(int *)(ppcVar26 + lVar58 * 0xa7 + 0xa1));
          }
        }
        uVar51 = uVar51 & ~(uint)uVar50;
        pppcVar25 = (code ***)local_5f0[0x45];
        if ((code ***)local_5f0[0x45] == (code ***)0x0) {
          pppcVar25 = local_578;
        }
        uVar56 = *(uint *)(local_5f0 + 0x46);
        iVar24 = (int)uVar41;
        lVar58 = (longlong)iVar24;
        uVar37 = *(uint *)((longlong)pppcVar25 + lVar58 * 4) & uVar51;
        if (uVar37 == 0) {
          iVar23 = uVar56 + 0x1e;
          if (-1 < (int)(uVar56 - 1)) {
            iVar23 = uVar56 - 1;
          }
          iVar23 = iVar23 >> 5;
          iVar22 = iVar22 + 0x20;
          iVar55 = iVar23;
          if (iVar23 < iVar24) {
            iVar55 = iVar24;
          }
          if (iVar24 < iVar23) {
            lVar46 = 0;
            do {
              uVar37 = *(uint *)((longlong)pppcVar25 + lVar46 * 4 + lVar58 * 4 + 4);
              if (uVar37 != 0) {
                uVar41 = (ulonglong)(iVar24 + (int)lVar46 + 1);
                uVar51 = 0xffffffff;
                goto LAB_142b68b18;
              }
              iVar22 = iVar22 + 0x20;
              lVar46 = lVar46 + 1;
            } while (iVar55 - lVar58 != lVar46);
            uVar51 = 0xffffffff;
            iVar24 = iVar55;
          }
          uVar41 = (ulonglong)(iVar24 + 1);
          pppcVar27 = local_580;
          uVar37 = uVar56;
        }
        else {
LAB_142b68b18:
          uVar50 = (ulonglong)(-uVar37 & uVar37);
          uVar40 = uVar50 * 2 + 1;
          lVar58 = 0x3f;
          if (uVar40 != 0) {
            for (; uVar40 >> lVar58 == 0; lVar58 = lVar58 + -1) {
            }
          }
          uVar37 = (iVar22 - ((uint)lVar58 ^ 0x3f)) + 0x3e;
          if ((int)uVar56 <= (int)uVar37) {
            uVar37 = uVar56;
          }
        }
      } while (uVar37 != (uint)pppcVar27);
    }
LAB_142b68fc1:
    pppcVar27 = local_5f0;
    if ((0 < *(int *)((longlong)local_5f0 + 0xc)) && (DAT_14c75f910 != 1)) {
      FUN_142b63fd8(local_5f0,1);
      FUN_142b64ee4(pppcVar27,1);
      FUN_142b656ec(pppcVar27);
    }
    if (0 < *(int *)(pppcVar27 + 0x16)) {
      ppcVar26 = pppcVar27[0xb];
      ppcVar60 = pppcVar27[0xc];
      ppcVar43 = pppcVar27[0xd];
      lVar58 = 0;
      do {
        FUN_144a4a830(pppcVar27[0x15][lVar58],
                      SQRT((double)ppcVar43 * (double)ppcVar43 +
                           (double)ppcVar26 * (double)ppcVar26 + (double)ppcVar60 * (double)ppcVar60
                          ));
        lVar58 = lVar58 + 1;
      } while (lVar58 < *(int *)(pppcVar27 + 0x16));
    }
    if (DAT_14c75f910 < 2) {
      ((int *)((longlong)pppcVar27 + 0x74))[0] = 0;
      ((int *)((longlong)pppcVar27 + 0x74))[1] = 0;
      ((int *)((longlong)pppcVar27 + 0x7c))[0] = 0;
      ((int *)((longlong)pppcVar27 + 0x7c))[1] = 0;
      ((int *)((longlong)pppcVar27 + 0x84))[0] = 0;
      ((int *)((longlong)pppcVar27 + 0x84))[1] = 0;
      ppppcStack_390 = local_3f8;
      local_3c8[6] = (code ***)FUN_142b713ae;
      local_3f8[0] = pppcVar27;
      FUN_144b0be26(pppcVar27);
      if (*(int *)(pppcVar27 + 0x16) < 1) {
        iVar22 = *(int *)(pppcVar27 + 0x11);
      }
      else {
        lVar58 = 0;
        do {
          iVar22 = FUN_1471006ae(pppcVar27[0x15][lVar58],1);
          iVar22 = iVar22 + *(int *)(pppcVar27 + 0x11);
          *(int *)(pppcVar27 + 0x11) = iVar22;
          lVar58 = lVar58 + 1;
        } while (lVar58 < *(int *)(pppcVar27 + 0x16));
      }
      pppcVar25 = local_5f0;
      iVar23 = (*(int *)(pppcVar27 + 0xf) + *(int *)((longlong)pppcVar27 + 0x7c)) * 3 +
               *(int *)(pppcVar27 + 0x10);
      iVar24 = *(int *)(pppcVar27 + 0x23);
      *(int *)((longlong)pppcVar27 + 0x84) = iVar23;
      iVar23 = iVar23 + iVar22;
      if (iVar24 == 0) {
        uVar40 = 1;
        iVar55 = 0;
        uVar41 = 0;
        iVar22 = 0;
      }
      else {
        pppcVar57 = (code ***)pppcVar27[0x22];
        if ((code ***)pppcVar27[0x22] == (code ***)0x0) {
          pppcVar57 = local_5e0;
        }
        uVar51 = *(uint *)pppcVar57;
        if (uVar51 == 0) {
          iVar22 = iVar24 + 0x1e;
          if (-1 < iVar24 + -1) {
            iVar22 = iVar24 + -1;
          }
          uVar41 = 0;
          uVar40 = (ulonglong)(uint)(iVar22 >> 5);
          if (iVar22 >> 5 < 1) {
            uVar40 = uVar41;
          }
          iVar55 = 0;
          do {
            if (uVar40 == uVar41) goto LAB_142b69297;
            iVar55 = iVar55 + 0x20;
            uVar51 = *(uint *)((longlong)pppcVar57 + uVar41 * 4 + 4);
            uVar41 = uVar41 + 1;
          } while (uVar51 == 0);
        }
        else {
          iVar55 = 0;
          uVar41 = 0;
        }
        uVar40 = (ulonglong)(-uVar51 & uVar51);
        uVar50 = uVar40 * 2 + 1;
        lVar58 = 0x3f;
        if (uVar50 != 0) {
          for (; uVar50 >> lVar58 == 0; lVar58 = lVar58 + -1) {
          }
        }
        iVar22 = (iVar55 - ((uint)lVar58 ^ 0x3f)) + 0x3e;
        if (iVar24 <= iVar22) {
          iVar22 = iVar24;
        }
      }
      if (iVar22 != iVar24) {
        pppcVar27 = (code ***)local_5f0[0x22];
        if ((code ***)local_5f0[0x22] == (code ***)0x0) {
          pppcVar27 = local_5e0;
        }
        iVar53 = iVar24 + 0x1e;
        if (-1 < iVar24 + -1) {
          iVar53 = iVar24 + -1;
        }
        iVar53 = iVar53 >> 5;
        uVar51 = 0xffffffff;
        do {
          pcVar59 = local_5f0[0x1e][iVar22];
          if (*(double *)(pcVar59 + 0x1f0) <= 9.99999993922529e-09) {
            bVar42 = false;
          }
          else {
            bVar42 = true;
            if (pcVar59[0x200] == (code)0x1) {
              bVar42 = 9.99999993922529e-09 < *(double *)(pcVar59 + 0x1f8);
            }
          }
          iVar23 = iVar23 + (uint)bVar42;
          uVar51 = uVar51 & ~(uint)uVar40;
          iVar22 = (int)uVar41;
          lVar58 = (longlong)iVar22;
          uVar37 = *(uint *)((longlong)pppcVar27 + lVar58 * 4) & uVar51;
          if (uVar37 == 0) {
            iVar54 = iVar53;
            if (iVar53 < iVar22) {
              iVar54 = iVar22;
            }
            if (iVar53 <= iVar22) break;
            lVar46 = 0;
            while( true ) {
              iVar55 = iVar55 + 0x20;
              uVar37 = *(uint *)((longlong)pppcVar27 + lVar46 * 4 + lVar58 * 4 + 4);
              if (uVar37 != 0) break;
              lVar46 = lVar46 + 1;
              if (iVar54 - lVar58 == lVar46) goto LAB_142b69297;
            }
            uVar41 = (ulonglong)(iVar22 + (int)lVar46 + 1);
            uVar51 = 0xffffffff;
          }
          uVar40 = (ulonglong)(-uVar37 & uVar37);
          uVar50 = uVar40 * 2 + 1;
          lVar58 = 0x3f;
          if (uVar50 != 0) {
            for (; uVar50 >> lVar58 == 0; lVar58 = lVar58 + -1) {
            }
          }
          iVar22 = (iVar55 - ((uint)lVar58 ^ 0x3f)) + 0x3e;
        } while (iVar22 < iVar24);
      }
LAB_142b69297:
      *(int *)((longlong)local_5f0 + 0x74) = iVar23;
      local_518 = (code **)(1.0 / (double)local_5f0[10]);
      local_510 = (code **)SQRT((double)local_5f0[0xd] * (double)local_5f0[0xd] +
                                (double)local_5f0[0xb] * (double)local_5f0[0xb] +
                                (double)local_5f0[0xc] * (double)local_5f0[0xc]);
      ppcVar26 = (code **)FUN_1409be4aa(local_568);
      iVar22 = 0;
      local_520 = ppcVar26;
      memset(ppcVar26,0,(longlong)*(int *)((longlong)pppcVar25 + 0x74) * 0x2a0);
      pppcVar27 = (code ***)FUN_142b6ca3c(local_560);
      pppcVar27[1] = ppcVar26;
      pppcVar27[2] = (code **)SQRT((double)pppcVar25[0xd] * (double)pppcVar25[0xd] +
                                   (double)pppcVar25[0xb] * (double)pppcVar25[0xb] +
                                   (double)pppcVar25[0xc] * (double)pppcVar25[0xc]);
      *(int *)pppcVar27 = *(int *)((longlong)pppcVar25 + 0x74);
      local_3c8[6] = (code ***)&local_524;
      local_524 = 0;
      local_530 = local_3c8 + 6;
      local_538 = (code **)FUN_142b71880;
      ppppcStack_390 = (code ****)&local_510;
      local_388 = (code ****)&local_518;
      uStack_380 = &local_520;
      FUN_144b0be26();
      if (0 < *(int *)(pppcVar25 + 0x16)) {
        lVar58 = 0;
        do {
          ppcVar26 = local_520;
          local_608 = (code ***)CONCAT71(local_608._1_7_,1);
          FUN_142b5c306(pppcVar25[0x15][lVar58],&local_520,0,local_524);
          local_524 = (int)((ulonglong)((longlong)local_520 - (longlong)ppcVar26) >> 5) * 0x3cf3cf3d
                      + local_524;
          lVar58 = lVar58 + 1;
        } while (lVar58 < *(int *)(pppcVar25 + 0x16));
      }
      uVar51 = *(uint *)(pppcVar25 + 0x23);
      pppcVar57 = (code ***)(ulonglong)uVar51;
      local_5d8 = pppcVar27;
      if (uVar51 == 0) {
        uVar41 = 1;
        uVar40 = 0;
        uVar37 = 0;
      }
      else {
        pppcVar27 = (code ***)pppcVar25[0x22];
        if ((code ***)pppcVar25[0x22] == (code ***)0x0) {
          pppcVar27 = local_5e0;
        }
        uVar37 = *(uint *)pppcVar27;
        if (uVar37 == 0) {
          iVar22 = uVar51 + 0x1e;
          if (-1 < (int)(uVar51 - 1)) {
            iVar22 = uVar51 - 1;
          }
          uVar40 = 0;
          uVar41 = (ulonglong)(uint)(iVar22 >> 5);
          if (iVar22 >> 5 < 1) {
            uVar41 = uVar40;
          }
          iVar22 = 0;
          do {
            if (uVar41 == uVar40) goto LAB_142b694d8;
            iVar22 = iVar22 + 0x20;
            uVar37 = *(uint *)((longlong)pppcVar27 + uVar40 * 4 + 4);
            uVar40 = uVar40 + 1;
          } while (uVar37 == 0);
        }
        else {
          iVar22 = 0;
          uVar40 = 0;
        }
        uVar41 = (ulonglong)(-uVar37 & uVar37);
        uVar50 = uVar41 * 2 + 1;
        lVar58 = 0x3f;
        if (uVar50 != 0) {
          for (; uVar50 >> lVar58 == 0; lVar58 = lVar58 + -1) {
          }
        }
        uVar37 = (iVar22 - ((uint)lVar58 ^ 0x3f)) + 0x3e;
        if ((int)uVar51 <= (int)uVar37) {
          uVar37 = uVar51;
        }
      }
      if (uVar37 != uVar51) {
        uVar56 = 0xffffffff;
        pppcVar27 = local_5e0;
        local_5b8 = pppcVar57;
        do {
          pcVar59 = local_5f0[0x1e][(int)uVar37];
          if ((9.99999993922529e-09 < *(double *)(pcVar59 + 0x1f0)) &&
             ((pcVar59[0x200] != (code)0x1 || (9.99999993922529e-09 < *(double *)(pcVar59 + 0x1f8)))
             )) {
            lVar58 = 0x50;
            do {
              *(undefined8 *)((longlong)local_3f8 + lVar58 + 0x10) = 0;
              *(undefined8 *)((longlong)local_3f8 + lVar58 + 0x18) = 0;
              *(undefined4 *)((longlong)&uStack_3d8 + lVar58) = 0;
              *(undefined4 *)((longlong)&uStack_3d8 + lVar58 + 4) = 0;
              *(undefined4 *)((longlong)&local_3d0 + lVar58) = 0;
              *(undefined4 *)((longlong)&local_3d0 + lVar58 + 4) = 0x3ff00000;
              *(undefined8 *)((longlong)local_3c8 + lVar58) = 0;
              *(undefined8 *)((longlong)local_3c8 + lVar58 + 8) = 0;
              *(undefined8 *)((longlong)local_3c8 + lVar58 + 0x10) = 0;
              *(undefined8 *)((longlong)local_3c8 + lVar58 + 0x18) = 0;
              *(undefined8 *)((longlong)local_3c8 + lVar58 + 0x20) = 0x3ff0000000000000;
              *(undefined8 *)((longlong)local_3c8 + lVar58 + 0x28) = 0x3ff0000000000000;
              *(undefined8 *)((longlong)local_3c8 + lVar58 + 0x30) = 0x3ff0000000000000;
              *(undefined8 *)((longlong)local_3c8 + lVar58 + 0x38) = 0;
              lVar58 = lVar58 + 0x60;
            } while (lVar58 != 0x110);
            local_3c8[6] = *(code ****)(pcVar59 + 0x100);
            ppppcStack_390 = *(code *****)(pcVar59 + 0x108);
            local_388 = *(code *****)(pcVar59 + 0x110);
            uStack_380 = *(code ****)(pcVar59 + 0x118);
            pppcStack_378 = *(code ****)(pcVar59 + 0x140);
            pppcStack_370 = *(code ****)(pcVar59 + 0x148);
            local_368[0] = *(code ****)(pcVar59 + 0x150);
            local_368[1] = (code ***)0x0;
            local_368[2] = (code ***)&DAT_3ff0000000000000;
            apppcStack_350[0] = (code ***)&DAT_3ff0000000000000;
            apppcStack_350[1] = (code ***)&DAT_3ff0000000000000;
            apppcStack_350[2] = (code ***)0x0;
            local_338 = *(code *****)(pcVar59 + 0x120);
            ppppcStack_330 = *(code *****)(pcVar59 + 0x128);
            local_328 = *(undefined1 (*) [16])(pcVar59 + 0x130);
            local_318 = *(undefined1 (*) [16])(pcVar59 + 0x158);
            local_308[0] = *(undefined8 *)(pcVar59 + 0x168);
            local_308[1] = 0;
            local_308[2] = 0x3ff0000000000000;
            local_308[3] = 0x3ff0000000000000;
            local_308[4] = 0x3ff0000000000000;
            local_308[5] = 0;
            local_558 = &local_428;
            local_548 = local_3c8 + 6;
            local_550 = &local_468;
            FUN_142b640a8(&local_558,pcVar59,local_520,0);
            FUN_142b640a8(&local_558,pcVar59,local_520,1);
            iVar24 = *(int *)(pcVar59 + 0x38);
            if (iVar24 == 6) {
              pcVar34 = *(code **)(pcVar59 + 0x250);
              if (pcVar34 != (code *)0x0) {
                pcVar36 = pcVar59 + 0x270;
                if (*(code **)(pcVar59 + 0x260) != (code *)0x0) {
                  pcVar36 = *(code **)(pcVar59 + 0x260);
                }
                uVar29 = (**(code **)(*(longlong *)pcVar36 + 8))();
                (*pcVar34)(uVar29,pcVar59);
              }
              ppcVar26 = (code **)(pcVar59 + 0x40);
              ppcVar60 = local_520 + 0x34;
            }
            else {
              local_600 = local_520 + 0x34;
              ppcVar26 = local_520 + 0x1a;
              ppppcVar28 = local_3f8;
              for (lVar58 = 0xc; lVar58 != 0; lVar58 = lVar58 + -1) {
                *ppppcVar28 = (code ***)*ppcVar26;
                ppcVar26 = ppcVar26 + 1;
                ppppcVar28 = ppppcVar28 + 1;
              }
              ppcVar26 = local_520;
              ppcVar60 = &local_4c8;
              for (lVar58 = 0xc; lVar58 != 0; lVar58 = lVar58 + -1) {
                *ppcVar60 = *ppcVar26;
                ppcVar26 = ppcVar26 + 1;
                ppcVar60 = ppcVar60 + 1;
              }
              local_5f8 = 0;
              local_608 = &local_468;
              FUN_14481ffa2(iVar24,&local_4c8,local_3f8,&local_428);
              ppcVar26 = local_520 + 0x34;
              ppcVar60 = (code **)(pcVar59 + 0x40);
              pppcVar57 = local_5b8;
            }
            ppcVar43 = local_520;
            memcpy(ppcVar60,ppcVar26,0x60);
            FUN_14491be5a(ppcVar43);
            local_520[0x4c] = *(code **)(pcVar59 + 0x1d0);
            local_520[0x4e] = *(code **)(pcVar59 + 0x220);
            local_520[0x53] = *(code **)(pcVar59 + 0x218);
            pcVar34 = *(code **)(pcVar59 + 0x1f0);
            local_520[0x4f] = pcVar34;
            local_520[0x50] = (code *)((ulonglong)pcVar34 ^ 0x8000000000000000);
            if (pcVar59[0x200] == (code)0x1) {
              dVar63 = *(double *)(pcVar59 + 0x1f8);
              dVar66 = (double)FUN_14711a87c(pcVar59);
              pcVar34 = *(code **)(pcVar59 + 0x1f0);
              if (dVar66 * dVar63 <= (double)*(code **)(pcVar59 + 0x1f0)) {
                pcVar34 = (code *)(dVar66 * dVar63);
              }
              local_520[0x4f] = pcVar34;
              local_520[0x50] = (code *)((ulonglong)pcVar34 ^ 0x8000000000000000);
            }
            local_520 = local_520 + 0x54;
            local_524 = local_524 + 1;
            uVar51 = *(uint *)(local_5f0 + 0x23);
            pppcVar27 = local_5e0;
          }
          uVar56 = uVar56 & ~(uint)uVar41;
          pppcVar25 = (code ***)local_5f0[0x22];
          if ((code ***)local_5f0[0x22] == (code ***)0x0) {
            pppcVar25 = pppcVar27;
          }
          iVar24 = (int)uVar40;
          lVar58 = (longlong)iVar24;
          uVar37 = *(uint *)((longlong)pppcVar25 + lVar58 * 4) & uVar56;
          if (uVar37 == 0) {
            iVar23 = uVar51 + 0x1e;
            if (-1 < (int)(uVar51 - 1)) {
              iVar23 = uVar51 - 1;
            }
            iVar23 = iVar23 >> 5;
            iVar22 = iVar22 + 0x20;
            iVar55 = iVar23;
            if (iVar23 < iVar24) {
              iVar55 = iVar24;
            }
            if (iVar24 < iVar23) {
              lVar46 = 0;
              do {
                uVar37 = *(uint *)((longlong)pppcVar25 + lVar46 * 4 + lVar58 * 4 + 4);
                if (uVar37 != 0) {
                  uVar40 = (ulonglong)(iVar24 + (int)lVar46 + 1);
                  uVar56 = 0xffffffff;
                  goto LAB_142b6a531;
                }
                iVar22 = iVar22 + 0x20;
                lVar46 = lVar46 + 1;
              } while (iVar55 - lVar58 != lVar46);
              uVar56 = 0xffffffff;
              iVar24 = iVar55;
            }
            uVar40 = (ulonglong)(iVar24 + 1);
            pppcVar57 = local_5b8;
            pppcVar27 = local_5e0;
            uVar37 = uVar51;
          }
          else {
LAB_142b6a531:
            uVar41 = (ulonglong)(-uVar37 & uVar37);
            uVar50 = uVar41 * 2 + 1;
            lVar58 = 0x3f;
            if (uVar50 != 0) {
              for (; uVar50 >> lVar58 == 0; lVar58 = lVar58 + -1) {
              }
            }
            uVar37 = (iVar22 - ((uint)lVar58 ^ 0x3f)) + 0x3e;
            if ((int)uVar51 <= (int)uVar37) {
              uVar37 = uVar51;
            }
          }
        } while (uVar37 != (uint)pppcVar57);
      }
LAB_142b694d8:
      *(int *)(local_5d8 + 3) = 0xfffe;
      ((int *)((longlong)local_5d8 + 0x1c))[0] = 0;
      ((int *)((longlong)local_5d8 + 0x1c))[1] = 0;
      pppcVar27 = local_5f0;
    }
    else {
      FUN_142b63fd8(pppcVar27,0);
      FUN_142b64ee4(pppcVar27,0);
    }
    FUN_142b650c6(pppcVar27);
    iVar22 = *(int *)(pppcVar27 + 0x16);
    if ((longlong)iVar22 != 0) {
      ppcVar26 = pppcVar27[0x15];
      lVar58 = 0;
      do {
        FUN_1405d3692(*(undefined8 *)((longlong)ppcVar26 + lVar58),pppcVar27[10]);
        lVar58 = lVar58 + 8;
      } while ((longlong)iVar22 * 8 != lVar58);
    }
    pppcVar25 = local_5f0;
    iVar22 = *(int *)(pppcVar27 + 0x1c);
    if (iVar22 == 0) {
      uVar40 = 1;
      iVar23 = 0;
      uVar41 = 0;
      iVar24 = 0;
    }
    else {
      pppcVar57 = (code ***)pppcVar27[0x1b];
      if ((code ***)pppcVar27[0x1b] == (code ***)0x0) {
        pppcVar57 = local_5d0;
      }
      uVar51 = *(uint *)pppcVar57;
      if (uVar51 == 0) {
        iVar24 = iVar22 + 0x1e;
        if (-1 < iVar22 + -1) {
          iVar24 = iVar22 + -1;
        }
        uVar41 = 0;
        uVar40 = (ulonglong)(uint)(iVar24 >> 5);
        if (iVar24 >> 5 < 1) {
          uVar40 = uVar41;
        }
        iVar23 = 0;
        do {
          if (uVar40 == uVar41) goto LAB_142b695b3;
          iVar23 = iVar23 + 0x20;
          uVar51 = *(uint *)((longlong)pppcVar57 + uVar41 * 4 + 4);
          uVar41 = uVar41 + 1;
        } while (uVar51 == 0);
      }
      else {
        iVar23 = 0;
        uVar41 = 0;
      }
      uVar40 = (ulonglong)(-uVar51 & uVar51);
      uVar50 = uVar40 * 2 + 1;
      lVar58 = 0x3f;
      if (uVar50 != 0) {
        for (; uVar50 >> lVar58 == 0; lVar58 = lVar58 + -1) {
        }
      }
      iVar24 = (iVar23 - ((uint)lVar58 ^ 0x3f)) + 0x3e;
      if (iVar22 <= iVar24) {
        iVar24 = iVar22;
      }
    }
    if (iVar24 != iVar22) {
      uVar51 = 0xffffffff;
      do {
        FUN_1449ee33c(pppcVar25[0x17][iVar24],pppcVar25[10]);
        uVar51 = ~(uint)uVar40 & uVar51;
        pppcVar27 = (code ***)pppcVar25[0x1b];
        if ((code ***)pppcVar25[0x1b] == (code ***)0x0) {
          pppcVar27 = local_5d0;
        }
        iVar55 = *(int *)(pppcVar25 + 0x1c);
        iVar24 = (int)uVar41;
        lVar58 = (longlong)iVar24;
        uVar37 = *(uint *)((longlong)pppcVar27 + lVar58 * 4) & uVar51;
        if (uVar37 == 0) {
          iVar53 = iVar55 + 0x1e;
          if (-1 < iVar55 + -1) {
            iVar53 = iVar55 + -1;
          }
          iVar53 = iVar53 >> 5;
          iVar23 = iVar23 + 0x20;
          iVar54 = iVar53;
          if (iVar53 < iVar24) {
            iVar54 = iVar24;
          }
          if (iVar24 < iVar53) {
            lVar46 = 0;
            do {
              uVar37 = *(uint *)((longlong)pppcVar27 + lVar46 * 4 + lVar58 * 4 + 4);
              if (uVar37 != 0) {
                uVar41 = (ulonglong)(iVar24 + (int)lVar46 + 1);
                uVar51 = 0xffffffff;
                goto LAB_142b6a102;
              }
              iVar23 = iVar23 + 0x20;
              lVar46 = lVar46 + 1;
            } while (iVar54 - lVar58 != lVar46);
            uVar51 = 0xffffffff;
            iVar24 = iVar54;
          }
          uVar41 = (ulonglong)(iVar24 + 1);
          iVar24 = iVar55;
        }
        else {
LAB_142b6a102:
          uVar40 = (ulonglong)(-uVar37 & uVar37);
          uVar50 = uVar40 * 2 + 1;
          lVar58 = 0x3f;
          if (uVar50 != 0) {
            for (; uVar50 >> lVar58 == 0; lVar58 = lVar58 + -1) {
            }
          }
          iVar24 = (iVar23 - ((uint)lVar58 ^ 0x3f)) + 0x3e;
          if (iVar55 <= iVar24) {
            iVar24 = iVar55;
          }
        }
      } while (iVar24 != iVar22);
    }
LAB_142b695b3:
    pppcVar27 = local_5f0;
    if (1e-08 < DAT_14c9abca0) {
      iVar22 = 0;
      pppcVar25 = local_5e0;
      do {
        local_5b8 = (code ***)CONCAT44(local_5b8._4_4_,iVar22);
        uVar51 = *(uint *)(local_5f0 + 0x23);
        pppcVar57 = (code ***)(ulonglong)uVar51;
        iVar22 = 0;
        uVar41 = 1;
        uVar40 = 0;
        pppcVar27 = (code ***)0x0;
        if (uVar51 != 0) {
          pppcVar27 = (code ***)local_5f0[0x22];
          if ((code ***)local_5f0[0x22] == (code ***)0x0) {
            pppcVar27 = pppcVar25;
          }
          uVar37 = *(uint *)pppcVar27;
          if (uVar37 == 0) {
            iVar22 = uVar51 + 0x1e;
            if (-1 < (int)(uVar51 - 1)) {
              iVar22 = uVar51 - 1;
            }
            uVar40 = 0;
            uVar41 = (ulonglong)(uint)(iVar22 >> 5);
            if (iVar22 >> 5 < 1) {
              uVar41 = 0;
            }
            iVar22 = 0;
            do {
              if (uVar41 == uVar40) goto LAB_142b696a0;
              iVar22 = iVar22 + 0x20;
              uVar37 = *(uint *)((longlong)pppcVar27 + uVar40 * 4 + 4);
              uVar40 = uVar40 + 1;
            } while (uVar37 == 0);
          }
          else {
            iVar22 = 0;
            uVar40 = 0;
          }
          uVar41 = (ulonglong)(-uVar37 & uVar37);
          uVar50 = uVar41 * 2 + 1;
          lVar58 = 0x3f;
          if (uVar50 != 0) {
            for (; uVar50 >> lVar58 == 0; lVar58 = lVar58 + -1) {
            }
          }
          uVar37 = (iVar22 - ((uint)lVar58 ^ 0x3f)) + 0x3e;
          pppcVar27 = (code ***)(ulonglong)uVar37;
          if ((int)uVar51 <= (int)uVar37) {
            pppcVar27 = pppcVar57;
          }
        }
        if ((uint)pppcVar27 != uVar51) {
          uVar51 = 0xffffffff;
          pppcVar33 = pppcVar57;
          local_598 = pppcVar57;
          do {
            ppcVar26 = local_5f0[0x1e];
            iVar24 = (int)pppcVar27;
            if ((ppcVar26[iVar24] != (code *)0x0) &&
               (pdVar52 = (double *)(ppcVar26[iVar24] + 0x228),
               9.99999993922529e-09 < *pdVar52 || *pdVar52 == 9.99999993922529e-09)) {
              local_5d8 = (code ***)CONCAT44(local_5d8._4_4_,iVar22);
              lVar58 = 0;
              do {
                *(undefined8 *)((longlong)local_3c8 + lVar58 + 0x30) = 0;
                *(undefined8 *)((longlong)local_3c8 + lVar58 + 0x38) = 0;
                *(undefined4 *)((longlong)&local_388 + lVar58) = 0;
                *(undefined4 *)((longlong)&local_388 + lVar58 + 4) = 0;
                *(undefined4 *)((longlong)&uStack_380 + lVar58) = 0;
                *(undefined4 *)((longlong)&uStack_380 + lVar58 + 4) = 0x3ff00000;
                *(undefined8 *)((longlong)&pppcStack_378 + lVar58) = 0;
                *(undefined8 *)((longlong)local_368 + lVar58 + 0xfffffffffffffff8U) = 0;
                *(undefined8 *)((longlong)local_368 + lVar58) = 0;
                *(undefined8 *)((longlong)local_368 + lVar58 + 8U) = 0;
                *(undefined8 *)((longlong)local_368 + lVar58 + 0x10U) = 0x3ff0000000000000;
                *(undefined8 *)((longlong)apppcStack_350 + lVar58) = 0x3ff0000000000000;
                *(undefined8 *)((longlong)apppcStack_350 + lVar58 + 8U) = 0x3ff0000000000000;
                *(undefined8 *)((longlong)apppcStack_350 + lVar58 + 0x10U) = 0;
                *(undefined8 *)(local_318 + lVar58 + 8) = 0;
                *(undefined8 *)((longlong)local_308 + lVar58) = 0;
                *(undefined8 *)((longlong)local_308 + lVar58 + 8) = 0;
                *(undefined8 *)((longlong)local_308 + lVar58 + 0x10) = 0;
                *(undefined8 *)((longlong)local_308 + lVar58 + 0x18) = 0;
                *(undefined8 *)((longlong)local_308 + lVar58 + 0x20) = 0;
                *(undefined8 *)((longlong)local_308 + lVar58 + 0x28) = 0;
                *(undefined8 *)((longlong)local_308 + lVar58 + 0x30) = 0;
                *(undefined8 *)((longlong)local_308 + lVar58 + 0x38) = 0;
                lVar58 = lVar58 + 0xd0;
              } while (lVar58 != 0x1a0);
              local_110 = 0xffffffff;
              FUN_14711bfec(ppcVar26[iVar24],local_3c8 + 6);
              local_3f8[2] = DAT_14c8464f0;
              local_3f8[0] = DAT_14c8464e0;
              local_3f8[1] = DAT_14c8464e8;
              ppppcStack_330 = local_3f8 + 3;
              local_3d0 = DAT_14c8464f0;
              local_3f8[3] = DAT_14c8464e0;
              uStack_3d8 = DAT_14c8464e8;
              local_268 = local_3c8;
              local_3c8[2] = DAT_14c8464f0;
              local_3c8[0] = DAT_14c8464e0;
              local_3c8[1] = DAT_14c8464e8;
              local_260 = local_3c8 + 3;
              local_3c8[5] = DAT_14c8464f0;
              local_3c8[3] = DAT_14c8464e0;
              local_3c8[4] = DAT_14c8464e8;
              local_338 = local_3f8;
              FUN_14711c210(local_3c8 + 6);
              ppcVar60 = *(code ***)(ppcVar26[iVar24] + 0x20);
              local_558 = ppcVar60;
              ppcVar43 = *(code ***)(ppcVar26[iVar24] + 0x30);
              local_538 = ppcVar43;
              if (ppcVar60 == (code **)0x0) {
                ppcVar60 = (code **)0x0;
              }
              else {
                iVar22 = (**(code **)*ppcVar60)(ppcVar60);
                if (iVar22 != 1) {
                  ppcVar60 = (code **)0x0;
                }
                ppcVar43 = *(code ***)(ppcVar26[iVar24] + 0x30);
              }
              if (ppcVar43 == (code **)0x0) {
                ppcVar43 = (code **)0x0;
              }
              else {
                iVar22 = (**(code **)*ppcVar43)(ppcVar43);
                if (iVar22 != 1) {
                  ppcVar43 = (code **)0x0;
                }
              }
              pppcVar27 = &local_558;
              ppppcVar28 = local_3f8;
              ppppcVar39 = local_3f8;
              bVar42 = true;
              do {
                bVar47 = bVar42;
                ppppcVar39 = ppppcVar39 + 3;
                if (ppcVar60 == (code **)0x0) {
                  if (*pppcVar27 != (code **)0x0) {
                    dVar63 = (double)DAT_14c9abca0;
                    local_4b8 = (undefined ***)((double)ppppcVar39[2] * dVar63);
                    local_4c8 = (code *)((double)*ppppcVar39 * dVar63);
                    local_4c0 = (double)ppppcVar39[1] * dVar63;
                    local_458 = (double)ppppcVar28[2] * dVar63;
                    local_460 = (double)ppppcVar28[1] * dVar63;
                    local_468 = (code **)(dVar63 * (double)*ppppcVar28);
                    FUN_1470ff5f8(*pppcVar27,&local_468,&local_4c8);
                  }
                }
                else {
                  dVar63 = (double)DAT_14c9abca0;
                  local_4b8 = (undefined ***)((double)ppppcVar39[2] * dVar63);
                  local_4c8 = (code *)((double)*ppppcVar39 * dVar63);
                  local_4c0 = (double)ppppcVar39[1] * dVar63;
                  local_458 = (double)ppppcVar28[2] * dVar63;
                  local_460 = (double)ppppcVar28[1] * dVar63;
                  local_468 = (code **)(dVar63 * (double)*ppppcVar28);
                  FUN_1470ff5f8(ppcVar60,&local_468,&local_4c8);
                  local_4b8 = (undefined ***)0x0;
                  local_4a8 = &PTR_LAB_14a1e3b30;
                  local_4c8 = FUN_142b73114;
                  local_4a0[0] = &local_4c8;
                  local_468 = ppcVar60;
                  FUN_142b73114(local_4a0,&local_468);
                  if (local_4c8 != (code *)0x0) {
                    pppuVar35 = local_4b8;
                    if (local_4b8 == (undefined ***)0x0) {
                      pppuVar35 = &local_4a8;
                    }
                    (*(code *)(*pppuVar35)[2])();
                  }
                }
                pppcVar27 = &local_538;
                ppppcVar28 = local_3c8;
                ppppcVar39 = local_3c8;
                ppcVar60 = ppcVar43;
                bVar42 = false;
              } while (bVar47);
              pppcVar57 = (code ***)(ulonglong)*(uint *)(local_5f0 + 0x23);
              pppcVar25 = local_5e0;
              pppcVar33 = local_598;
              iVar22 = (int)local_5d8;
            }
            uVar51 = uVar51 & ~(uint)uVar41;
            pppcVar27 = (code ***)local_5f0[0x22];
            if ((code ***)local_5f0[0x22] == (code ***)0x0) {
              pppcVar27 = pppcVar25;
            }
            iVar24 = (int)uVar40;
            lVar58 = (longlong)iVar24;
            uVar37 = *(uint *)((longlong)pppcVar27 + lVar58 * 4) & uVar51;
            iVar23 = (int)pppcVar57;
            if (uVar37 == 0) {
              iVar55 = iVar23 + 0x1e;
              if (-1 < iVar23 + -1) {
                iVar55 = iVar23 + -1;
              }
              iVar55 = iVar55 >> 5;
              iVar22 = iVar22 + 0x20;
              iVar53 = iVar55;
              if (iVar55 < iVar24) {
                iVar53 = iVar24;
              }
              if (iVar24 < iVar55) {
                lVar46 = 0;
                do {
                  uVar37 = *(uint *)((longlong)pppcVar27 + lVar46 * 4 + lVar58 * 4 + 4);
                  if (uVar37 != 0) {
                    uVar40 = (ulonglong)(iVar24 + (int)lVar46 + 1);
                    uVar51 = 0xffffffff;
                    goto LAB_142b69824;
                  }
                  iVar22 = iVar22 + 0x20;
                  lVar46 = lVar46 + 1;
                } while (iVar53 - lVar58 != lVar46);
                uVar51 = 0xffffffff;
                iVar24 = iVar53;
              }
              uVar40 = (ulonglong)(iVar24 + 1);
              pppcVar27 = pppcVar57;
              pppcVar25 = local_5e0;
            }
            else {
LAB_142b69824:
              uVar41 = (ulonglong)(-uVar37 & uVar37);
              uVar50 = uVar41 * 2 + 1;
              lVar58 = 0x3f;
              if (uVar50 != 0) {
                for (; uVar50 >> lVar58 == 0; lVar58 = lVar58 + -1) {
                }
              }
              uVar37 = (iVar22 - ((uint)lVar58 ^ 0x3f)) + 0x3e;
              pppcVar27 = (code ***)(ulonglong)uVar37;
              if (iVar23 <= (int)uVar37) {
                pppcVar27 = pppcVar57;
              }
            }
          } while ((int)pppcVar27 != (int)pppcVar33);
        }
LAB_142b696a0:
        pppcVar27 = local_5f0;
        local_468 = (code **)0x0;
        local_558 = (code **)(double)DAT_14c75f91c;
        local_3c8[6] = &local_558;
        ppppcStack_390 = (code ****)&local_468;
        local_420 = local_3c8 + 6;
        local_428 = FUN_142b73222;
        FUN_144b0be26(local_5f0,&local_428);
        ppcVar26 = local_468;
        if (local_468 == (code **)0x0) break;
        ppcVar60 = (code **)local_468[0x13];
        ppcVar43 = (code **)local_468[0x14];
        local_538 = ppcVar43;
        if (ppcVar43 < ppcVar60) {
          local_538 = ppcVar60;
        }
        local_518 = ppcVar43;
        if (ppcVar60 < ppcVar43) {
          local_518 = ppcVar60;
        }
        if (ppcVar60 == (code **)0x0) {
          ppcVar60 = (code **)0x0;
        }
        else {
          iVar22 = (**(code **)*ppcVar60)(ppcVar60);
          if (iVar22 != 1) {
            ppcVar60 = (code **)0x0;
          }
          ppcVar43 = (code **)ppcVar26[0x14];
        }
        if (ppcVar43 == (code **)0x0) {
          ppcVar43 = (code **)0x0;
        }
        else {
          iVar22 = (**(code **)*ppcVar43)(ppcVar43);
          if (iVar22 != 1) {
            ppcVar43 = (code **)0x0;
          }
        }
        pcVar59 = ppcVar26[0x26];
        if (pcVar59 == (code *)0x0) {
          pcVar59 = (code *)FUN_1409be4aa(local_568,1);
          ppcVar26[0x26] = pcVar59;
          *(undefined8 *)(pcVar59 + 0x298) = 0;
          pcVar59 = ppcVar26[0x26];
        }
        if (ppcVar60 == (code **)0x0) {
          pcVar34 = (code *)0x0;
        }
        else {
          pcVar34 = ppcVar60[0x56];
        }
        if (ppcVar43 == (code **)0x0) {
          pcVar36 = (code *)0x0;
        }
        else {
          pcVar36 = ppcVar43[0x56];
        }
        if (pcVar34 != (code *)0x0) {
          FUN_1449940fa(pcVar34);
        }
        if ((pcVar36 != (code *)0x0) && (pcVar34 != pcVar36)) {
          FUN_1449940fa(pcVar36);
        }
        FUN_14711c38c(ppcVar26,pcVar59);
        local_388 = (code ****)DAT_14c8464f0;
        local_3c8[6] = DAT_14c8464e0;
        ppppcStack_390 = (code ****)DAT_14c8464e8;
        pppcStack_370 = DAT_14c8464f0;
        uStack_380 = DAT_14c8464e0;
        pppcStack_378 = DAT_14c8464e8;
        local_368[2] = DAT_14c8464f0;
        local_368[0] = DAT_14c8464e0;
        local_368[1] = DAT_14c8464e8;
        apppcStack_350[2] = DAT_14c8464f0;
        apppcStack_350[0] = DAT_14c8464e0;
        apppcStack_350[1] = DAT_14c8464e8;
        *(code *****)(pcVar59 + 0x60) = local_3c8 + 6;
        *(undefined8 **)(pcVar59 + 0x68) = &uStack_380;
        *(code *****)(pcVar59 + 0x130) = local_368;
        *(code *****)(pcVar59 + 0x138) = apppcStack_350;
        FUN_14711c210(pcVar59);
        pppcVar27 = &local_538;
        ppppcVar28 = local_3c8 + 6;
        pdVar52 = (double *)&uStack_380;
        pppcVar25 = local_5e0;
        bVar42 = true;
        do {
          bVar47 = bVar42;
          if (ppcVar60 == (code **)0x0) {
            if (*pppcVar27 != (code **)0x0) {
              dVar63 = (double)DAT_14c9abca0;
              local_3f8[2] = (code ***)(pdVar52[2] * dVar63);
              local_3f8[0] = (code ***)(*pdVar52 * dVar63);
              local_3f8[1] = (code ***)(pdVar52[1] * dVar63);
              local_4b8 = (undefined ***)((double)ppppcVar28[2] * dVar63);
              local_4c0 = (double)ppppcVar28[1] * dVar63;
              local_4c8 = (code *)(dVar63 * (double)*ppppcVar28);
              FUN_1470ff5f8(*pppcVar27,&local_4c8,local_3f8);
            }
          }
          else {
            pcVar59 = ppcVar60[0x56];
            if (*(int *)(pcVar59 + 0x10) < 1) {
              uVar29 = 0;
            }
            else {
              uVar29 = **(undefined8 **)(pcVar59 + 8);
            }
            dVar63 = (double)DAT_14c9abca0;
            local_3f8[2] = (code ***)(pdVar52[2] * dVar63);
            local_3f8[0] = (code ***)(*pdVar52 * dVar63);
            local_3f8[1] = (code ***)(pdVar52[1] * dVar63);
            local_4b8 = (undefined ***)((double)ppppcVar28[2] * dVar63);
            local_4c0 = (double)ppppcVar28[1] * dVar63;
            local_4c8 = (code *)(dVar63 * (double)*ppppcVar28);
            FUN_1470ff5f8(uVar29,&local_4c8,local_3f8);
            local_510._0_2_ = (ushort)(byte)local_510;
            FUN_1448f22e4(pcVar59,&local_510);
            pppcVar25 = local_5e0;
          }
          pppcVar27 = &local_518;
          ppppcVar28 = local_368;
          pdVar52 = (double *)apppcStack_350;
          ppcVar60 = ppcVar43;
          bVar42 = false;
        } while (bVar47);
        iVar22 = (int)local_5b8 + 1;
        pppcVar27 = local_5f0;
      } while (iVar22 != 5);
    }
    if (*(char *)(pppcVar27 + 1) == '\x01') {
      FUN_14499f3dc(pppcVar27);
    }
    local_3c8[6] = (code ***)((ulonglong)local_3c8[6] & 0xffffffff00000000);
    local_4f8 = (undefined ***)0x0;
    local_4e8 = &PTR_LAB_14a1e3b50;
    local_4e0 = local_3c8 + 6;
    local_508 = FUN_142b736a6;
    if ((pppcVar27[0x2c] != (code **)0x0) && ((PSRWLOCK)pppcVar27[0x2d] != (PSRWLOCK)0x0)) {
      AcquireSRWLockShared((PSRWLOCK)pppcVar27[0x2d]);
      pcVar59 = local_508;
      ppcVar26 = pppcVar27[0x2c];
      pppuVar35 = local_4f8;
      if (local_4f8 == (undefined ***)0x0) {
        pppuVar35 = &local_4e8;
      }
      uVar29 = (*(code *)(*pppuVar35)[1])();
      (*pcVar59)(uVar29,ppcVar26);
      ReleaseSRWLockShared((PSRWLOCK)pppcVar27[0x2d]);
      if (local_508 == (code *)0x0) goto LAB_142b69fdb;
    }
    pppuVar35 = &local_4e8;
    if (local_4f8 != (undefined ***)0x0) {
      pppuVar35 = local_4f8;
    }
    (*(code *)(*pppuVar35)[2])(pppuVar35);
  }
LAB_142b69fdb:
  if ((local_f0 ^ (ulonglong)auStack_628) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b6b2bb FUN_142b6b2bb body=69 status=ok
// SIG undefined FUN_142b6b2bb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b6b2bb(void)

{
  _DAT_14c9abca8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b6b2fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abcb0,1);
  return;
}



// FUNCTION 142b6b300 FUN_142b6b300 body=474 status=ok
// SIG undefined FUN_142b6b300(void)

void FUN_142b6b300(longlong param_1,double *param_2,uint *param_3,uint *param_4,uint *param_5,
                  uint *param_6,byte param_7)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar4 = param_2[2] - *(double *)(param_1 + 0x20);
  dVar7 = param_2[1] - *(double *)(param_1 + 0x18);
  dVar6 = *param_2 - *(double *)(param_1 + 0x10);
  dVar3 = param_2[5] - *(double *)(param_1 + 0x20);
  dVar5 = param_2[4] - *(double *)(param_1 + 0x18);
  dVar8 = param_2[3] - *(double *)(param_1 + 0x10);
  *param_3 = (int)((*(double *)(param_1 + 0x38) * dVar4 +
                   *(double *)(param_1 + 0x28) * dVar6 + *(double *)(param_1 + 0x30) * dVar7) /
                  *(double *)(param_1 + 0x88));
  *param_4 = (int)((*(double *)(param_1 + 0x38) * dVar3 +
                   *(double *)(param_1 + 0x28) * dVar8 + *(double *)(param_1 + 0x30) * dVar5) /
                  *(double *)(param_1 + 0x88)) + 1;
  *param_5 = (int)((dVar4 * *(double *)(param_1 + 0x50) +
                   dVar6 * *(double *)(param_1 + 0x40) + dVar7 * *(double *)(param_1 + 0x48)) /
                  *(double *)(param_1 + 0x90));
  uVar2 = (int)((dVar3 * *(double *)(param_1 + 0x50) +
                dVar8 * *(double *)(param_1 + 0x40) + dVar5 * *(double *)(param_1 + 0x48)) /
               *(double *)(param_1 + 0x90)) + 1;
  *param_6 = uVar2;
  uVar1 = *param_3;
  if ((int)*param_4 < (int)uVar1) {
    *param_3 = *param_4;
    *param_4 = uVar1;
    uVar2 = *param_6;
  }
  uVar1 = *param_5;
  if ((int)uVar2 < (int)uVar1) {
    *param_5 = uVar2;
    *param_6 = uVar1;
  }
  uVar1 = *(uint *)(param_1 + 0x80);
  if ((int)*param_3 < (int)*(uint *)(param_1 + 0x80)) {
    uVar1 = *param_3;
  }
  if ((int)uVar1 < (int)(uint)param_7) {
    uVar1 = (uint)param_7;
  }
  *param_3 = uVar1;
  uVar2 = (uint)param_7;
  uVar1 = *(int *)(param_1 + 0x80) - uVar2;
  if ((int)*param_4 < (int)uVar1) {
    uVar1 = *param_4;
  }
  if ((int)uVar1 < 1) {
    uVar1 = 0;
  }
  *param_4 = uVar1;
  uVar1 = *(uint *)(param_1 + 0x84);
  if ((int)*param_5 < (int)*(uint *)(param_1 + 0x84)) {
    uVar1 = *param_5;
  }
  if ((int)uVar1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *param_5 = uVar1;
  uVar2 = *(int *)(param_1 + 0x84) - uVar2;
  if ((int)*param_6 < (int)uVar2) {
    uVar2 = *param_6;
  }
  if ((int)uVar2 < 1) {
    uVar2 = 0;
  }
  *param_6 = uVar2;
  return;
}



// FUNCTION 142b6b4da FUN_142b6b4da body=3897 status=ok
// SIG undefined FUN_142b6b4da(void)

int FUN_142b6b4da(longlong param_1,double *param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_288 [32];
  longlong local_268;
  undefined8 *local_260;
  undefined1 local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  int local_200;
  int local_1fc;
  longlong local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined **local_188 [2];
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
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_260 = &local_198;
  local_268 = (longlong)&local_198 + 4;
  local_258 = 1;
  FUN_142b6b300(param_1,param_2,(longlong)&local_190 + 4,&local_190);
  iVar7 = 0;
  local_1fc = (int)local_190;
  if (local_190._4_4_ <= (int)local_190) {
    iVar7 = 0;
    local_200 = local_198._4_4_;
    iVar10 = local_190._4_4_;
    local_1f8 = param_3;
    do {
      if (local_200 <= (int)local_198) {
        dVar12 = (double)iVar10;
        iVar2 = iVar10 + -1;
        local_1e8 = (double)iVar2;
        iVar4 = local_200;
        local_210 = dVar12;
        do {
          dVar14 = local_210;
          iVar6 = *(int *)(param_1 + 0x80) * iVar4;
          lVar9 = (longlong)(iVar6 + iVar10);
          if (*(char *)(*(longlong *)(param_1 + 0x78) + lVar9) == '\x01') {
            local_188[1] = (undefined **)0x0;
            local_188[0] = &PTR_LAB_14a1e38d0;
            local_f8 = *(undefined8 *)(param_1 + 0xa0);
            dVar15 = *(double *)(param_1 + 0x88);
            local_218 = *(double *)(param_1 + 0x20);
            local_220 = *(double *)(param_1 + 0x18);
            local_1a0 = (double)iVar4;
            local_1e0 = *(double *)(param_1 + 0x90);
            local_250 = *(double *)(param_1 + 0x50) * local_1a0 * local_1e0;
            lVar5 = *(longlong *)(param_1 + 0x70);
            dVar16 = *(double *)(lVar5 + lVar9 * 8);
            local_238 = *(double *)(param_1 + 0x68);
            local_1d0 = *(double *)(param_1 + 0x98);
            local_1a8 = dVar16 * local_238 * local_1d0 +
                        *(double *)(param_1 + 0x38) * dVar12 * dVar15 + local_218 + local_250;
            local_248 = *(double *)(param_1 + 0x48) * local_1a0 * local_1e0;
            local_208 = *(double *)(param_1 + 0x60);
            local_1c0 = dVar16 * local_208 * local_1d0 +
                        *(double *)(param_1 + 0x30) * dVar12 * dVar15 + local_220 + local_248;
            local_228 = *(double *)(param_1 + 0x10);
            local_240 = *(double *)(param_1 + 0x40) * local_1a0 * local_1e0;
            local_230 = *(double *)(param_1 + 0x58);
            local_1b0 = dVar16 * local_230 * local_1d0 +
                        *(double *)(param_1 + 0x28) * dVar12 * dVar15 + local_228 + local_240;
            iVar8 = iVar4 + -1;
            local_1b8 = (double)iVar8;
            local_1d8 = *(double *)(param_1 + 0x50) * local_1b8 * local_1e0;
            local_1c8 = *(double *)(param_1 + 0x48) * local_1b8 * local_1e0;
            local_1e0 = *(double *)(param_1 + 0x40) * local_1b8 * local_1e0;
            local_170 = local_1b0;
            local_168 = local_1c0;
            local_160 = local_1a8;
            dVar16 = *(double *)(param_1 + 0x38) * local_1e8 * dVar15 + local_218;
            dVar12 = *(double *)(lVar5 + (longlong)(*(int *)(param_1 + 0x80) * iVar8 + iVar2) * 8);
            local_148 = local_238 * dVar12 * local_1d0 + dVar16 + local_1d8;
            dVar17 = *(double *)(param_1 + 0x30) * local_1e8 * dVar15 + local_220;
            local_1f0 = local_208 * dVar12 * local_1d0 + dVar17 + local_1c8;
            dVar15 = *(double *)(param_1 + 0x28) * local_1e8 * dVar15 + local_228;
            local_158 = dVar12 * local_230 * local_1d0 + dVar15 + local_1e0;
            local_150 = local_1f0;
            dVar12 = *(double *)(lVar5 + (longlong)(iVar6 + iVar2) * 8);
            local_130 = local_238 * dVar12 * local_1d0 + dVar16 + local_250;
            local_138 = local_208 * dVar12 * local_1d0 + dVar17 + local_248;
            local_140 = dVar12 * local_230 * local_1d0 + dVar15 + local_240;
            bVar11 = true;
            lVar9 = 0x28;
            uVar18 = 0;
            uVar19 = 0;
            dVar15 = 0.0;
            dVar12 = 0.0;
            uVar20 = 0;
            uVar21 = 0;
            uVar23 = 0;
            uVar24 = 0;
            dVar16 = 0.0;
            do {
              dVar17 = *(double *)((longlong)&local_198 + lVar9);
              if (bVar11) {
                dVar12 = *(double *)((longlong)&local_190 + lVar9);
                uVar18 = (undefined4)*(undefined8 *)((longlong)local_188 + lVar9);
                uVar19 = (undefined4)
                         ((ulonglong)*(undefined8 *)((longlong)local_188 + lVar9) >> 0x20);
                uVar23 = SUB84(dVar12,0);
                uVar24 = (undefined4)((ulonglong)dVar12 >> 0x20);
                dVar15 = dVar17;
                dVar16 = dVar17;
                uVar20 = uVar18;
                uVar21 = uVar19;
              }
              else {
                if (dVar17 <= dVar16) {
                  dVar16 = dVar17;
                }
                dVar13 = *(double *)((longlong)&local_190 + lVar9);
                dVar3 = *(double *)((longlong)local_188 + lVar9);
                uVar22 = (undefined4)((ulonglong)dVar3 >> 0x20);
                if (dVar13 <= (double)CONCAT44(uVar24,uVar23)) {
                  uVar23 = SUB84(dVar13,0);
                  uVar24 = (undefined4)((ulonglong)dVar13 >> 0x20);
                }
                if (dVar3 <= (double)CONCAT44(uVar19,uVar18)) {
                  uVar18 = SUB84(dVar3,0);
                  uVar19 = uVar22;
                }
                if (dVar15 <= dVar17) {
                  dVar15 = dVar17;
                }
                if (dVar12 <= dVar13) {
                  dVar12 = dVar13;
                }
                if ((double)CONCAT44(uVar21,uVar20) <= dVar3) {
                  uVar20 = SUB84(dVar3,0);
                  uVar21 = uVar22;
                }
              }
              lVar9 = lVar9 + 0x18;
              bVar11 = false;
            } while (lVar9 != 0x70);
            if (((((*param_2 <= dVar15) && (dVar16 < param_2[3] || dVar16 == param_2[3])) &&
                 (param_2[1] <= dVar12)) &&
                (((double)CONCAT44(uVar24,uVar23) < param_2[4] ||
                  (double)CONCAT44(uVar24,uVar23) == param_2[4] &&
                 (param_2[2] < (double)CONCAT44(uVar21,uVar20) ||
                  param_2[2] == (double)CONCAT44(uVar21,uVar20))))) &&
               ((double)CONCAT44(uVar19,uVar18) < param_2[5] ||
                (double)CONCAT44(uVar19,uVar18) == param_2[5])) {
              if (param_3 != 0) {
                dVar17 = (local_140 - local_1b0) * (local_1f0 - local_1c0) -
                         (local_158 - local_1b0) * (local_138 - local_1c0);
                dVar12 = (local_130 - local_1a8) * (local_158 - local_1b0) -
                         (local_148 - local_1a8) * (local_140 - local_1b0);
                dVar15 = (local_138 - local_1c0) * (local_148 - local_1a8) -
                         (local_130 - local_1a8) * (local_1f0 - local_1c0);
                dVar16 = dVar17 * dVar17 + dVar15 * dVar15 + dVar12 * dVar12;
                if (((dVar16 != 1.0) ||
                    (local_128 = dVar15, local_118 = dVar17, local_120 = dVar12, NAN(dVar16))) &&
                   (local_128 = DAT_14c8464e0, local_118 = DAT_14c8464f0, local_120 = DAT_14c8464e8,
                   9.99999993922529e-09 <= dVar16)) {
                  dVar16 = 1.0 / SQRT(dVar16);
                  local_128 = dVar15 * dVar16;
                  local_118 = dVar17 * dVar16;
                  local_120 = dVar12 * dVar16;
                }
                local_100 = (local_148 + local_1a8 + local_130) * 0.3333333333333333;
                local_108 = (local_1f0 + local_1c0 + local_138) * 0.3333333333333333;
                local_110 = (local_1b0 + local_158 + local_140) * 0.3333333333333333;
                dVar15 = (local_130 - local_100) * (local_130 - local_100) +
                         (local_140 - local_110) * (local_140 - local_110) +
                         (local_138 - local_108) * (local_138 - local_108);
                dVar12 = (local_148 - local_100) * (local_148 - local_100) +
                         (local_158 - local_110) * (local_158 - local_110) +
                         (local_1f0 - local_108) * (local_1f0 - local_108);
                local_178 = (local_1a8 - local_100) * (local_1a8 - local_100) +
                            (local_1b0 - local_110) * (local_1b0 - local_110) +
                            (local_1c0 - local_108) * (local_1c0 - local_108);
                if (local_178 <= dVar12) {
                  local_178 = dVar12;
                }
                if (local_178 <= dVar15) {
                  local_178 = dVar15;
                }
                local_178 = SQRT(local_178);
                puVar1 = (undefined8 *)(param_3 + (longlong)iVar7 * 0x98);
                puVar1[1] = 0;
                *puVar1 = &PTR_LAB_14a1e38d0;
                memcpy(puVar1 + 2,&local_178,0x88);
                local_218 = *(double *)(param_1 + 0x20);
                local_228 = *(double *)(param_1 + 0x10);
                local_220 = *(double *)(param_1 + 0x18);
                local_1e0 = *(double *)(param_1 + 0x90);
                lVar5 = *(longlong *)(param_1 + 0x70);
                local_238 = *(double *)(param_1 + 0x68);
                local_208 = *(double *)(param_1 + 0x60);
                local_230 = *(double *)(param_1 + 0x58);
                local_1d0 = *(double *)(param_1 + 0x98);
                local_250 = *(double *)(param_1 + 0x50) * local_1a0 * local_1e0;
                local_248 = *(double *)(param_1 + 0x48) * local_1a0 * local_1e0;
                local_240 = local_1a0 * *(double *)(param_1 + 0x40) * local_1e0;
                local_1d8 = *(double *)(param_1 + 0x50) * local_1b8 * local_1e0;
                local_1c8 = *(double *)(param_1 + 0x48) * local_1b8 * local_1e0;
                local_1e0 = *(double *)(param_1 + 0x40) * local_1b8 * local_1e0;
                param_3 = local_1f8;
              }
              iVar7 = iVar7 + 1;
            }
            dVar12 = *(double *)(param_1 + 0x88);
            dVar17 = *(double *)(param_1 + 0x38) * dVar14 * dVar12 + local_218;
            dVar15 = *(double *)(lVar5 + (longlong)(*(int *)(param_1 + 0x80) * iVar4 + iVar10) * 8);
            local_250 = dVar15 * local_238 * local_1d0 + local_250 + dVar17;
            dVar13 = *(double *)(param_1 + 0x30) * dVar14 * dVar12 + local_220;
            local_248 = dVar15 * local_208 * local_1d0 + local_248 + dVar13;
            dVar16 = *(double *)(param_1 + 0x28) * dVar14 * dVar12 + local_228;
            local_240 = dVar15 * local_230 * local_1d0 + local_240 + dVar16;
            iVar8 = iVar8 * *(int *)(param_1 + 0x80);
            local_170 = local_240;
            local_168 = local_248;
            local_160 = local_250;
            dVar14 = *(double *)(lVar5 + (longlong)(iVar8 + iVar10) * 8);
            local_148 = local_238 * dVar14 * local_1d0 + dVar17 + local_1d8;
            local_150 = local_208 * dVar14 * local_1d0 + dVar13 + local_1c8;
            local_158 = dVar14 * local_230 * local_1d0 + dVar16 + local_1e0;
            dVar14 = *(double *)(lVar5 + (longlong)(iVar8 + iVar2) * 8);
            local_238 = local_238 * dVar14 * local_1d0 +
                        *(double *)(param_1 + 0x38) * local_1e8 * dVar12 + local_218 + local_1d8;
            local_138 = local_208 * dVar14 * local_1d0 +
                        *(double *)(param_1 + 0x30) * local_1e8 * dVar12 + local_220 + local_1c8;
            local_230 = local_230 * dVar14 * local_1d0 +
                        *(double *)(param_1 + 0x28) * local_1e8 * dVar12 + local_228 + local_1e0;
            local_140 = local_230;
            local_130 = local_238;
            bVar11 = true;
            dVar15 = 0.0;
            lVar9 = 0x28;
            uVar18 = 0;
            uVar19 = 0;
            dVar14 = 0.0;
            uVar22 = 0;
            uVar25 = 0;
            uVar23 = 0;
            uVar24 = 0;
            uVar20 = 0;
            uVar21 = 0;
            do {
              dVar12 = *(double *)((longlong)&local_198 + lVar9);
              uVar26 = (undefined4)((ulonglong)dVar12 >> 0x20);
              if (bVar11) {
                uVar18 = (undefined4)*(undefined8 *)((longlong)&local_190 + lVar9);
                uVar19 = (undefined4)
                         ((ulonglong)*(undefined8 *)((longlong)&local_190 + lVar9) >> 0x20);
                dVar14 = *(double *)((longlong)local_188 + lVar9);
                dVar15 = dVar12;
                uVar20 = SUB84(dVar14,0);
                uVar21 = (int)((ulonglong)dVar14 >> 0x20);
                uVar23 = uVar18;
                uVar24 = uVar19;
                uVar22 = SUB84(dVar12,0);
                uVar25 = uVar26;
              }
              else {
                if (dVar12 <= dVar15) {
                  dVar15 = dVar12;
                }
                dVar16 = *(double *)((longlong)&local_190 + lVar9);
                uVar27 = (undefined4)((ulonglong)dVar16 >> 0x20);
                dVar17 = *(double *)((longlong)local_188 + lVar9);
                if (dVar16 <= (double)CONCAT44(uVar19,uVar18)) {
                  uVar18 = SUB84(dVar16,0);
                  uVar19 = uVar27;
                }
                if (dVar17 <= dVar14) {
                  dVar14 = dVar17;
                }
                if ((double)CONCAT44(uVar25,uVar22) <= dVar12) {
                  uVar22 = SUB84(dVar12,0);
                  uVar25 = uVar26;
                }
                if ((double)CONCAT44(uVar24,uVar23) <= dVar16) {
                  uVar23 = SUB84(dVar16,0);
                  uVar24 = uVar27;
                }
                if ((double)CONCAT44(uVar21,uVar20) <= dVar17) {
                  uVar20 = SUB84(dVar17,0);
                  uVar21 = (int)((ulonglong)dVar17 >> 0x20);
                }
              }
              lVar9 = lVar9 + 0x18;
              bVar11 = false;
            } while (lVar9 != 0x70);
            dVar12 = local_210;
            if (((((*param_2 < (double)CONCAT44(uVar25,uVar22) ||
                    *param_2 == (double)CONCAT44(uVar25,uVar22)) &&
                  (dVar15 < param_2[3] || dVar15 == param_2[3])) &&
                 (param_2[1] < (double)CONCAT44(uVar24,uVar23) ||
                  param_2[1] == (double)CONCAT44(uVar24,uVar23))) &&
                (((double)CONCAT44(uVar19,uVar18) < param_2[4] ||
                  (double)CONCAT44(uVar19,uVar18) == param_2[4] &&
                 (param_2[2] < (double)CONCAT44(uVar21,uVar20) ||
                  param_2[2] == (double)CONCAT44(uVar21,uVar20))))) &&
               (dVar14 < param_2[5] || dVar14 == param_2[5])) {
              if (param_3 != 0) {
                dVar16 = (local_230 - local_240) * (local_150 - local_248) -
                         (local_158 - local_240) * (local_138 - local_248);
                dVar12 = (local_238 - local_250) * (local_158 - local_240) -
                         (local_148 - local_250) * (local_230 - local_240);
                dVar15 = (local_138 - local_248) * (local_148 - local_250) -
                         (local_238 - local_250) * (local_150 - local_248);
                dVar14 = dVar16 * dVar16 + dVar15 * dVar15 + dVar12 * dVar12;
                if (((dVar14 != 1.0) ||
                    (local_128 = dVar15, local_118 = dVar16, local_120 = dVar12, NAN(dVar14))) &&
                   (local_128 = DAT_14c8464e0, local_118 = DAT_14c8464f0, local_120 = DAT_14c8464e8,
                   9.99999993922529e-09 <= dVar14)) {
                  dVar14 = 1.0 / SQRT(dVar14);
                  local_128 = dVar15 * dVar14;
                  local_118 = dVar16 * dVar14;
                  local_120 = dVar12 * dVar14;
                }
                local_100 = (local_148 + local_250 + local_238) * 0.3333333333333333;
                local_108 = (local_150 + local_248 + local_138) * 0.3333333333333333;
                local_110 = (local_240 + local_158 + local_230) * 0.3333333333333333;
                dVar14 = (local_238 - local_100) * (local_238 - local_100) +
                         (local_230 - local_110) * (local_230 - local_110) +
                         (local_138 - local_108) * (local_138 - local_108);
                dVar12 = (local_148 - local_100) * (local_148 - local_100) +
                         (local_158 - local_110) * (local_158 - local_110) +
                         (local_150 - local_108) * (local_150 - local_108);
                local_178 = (local_250 - local_100) * (local_250 - local_100) +
                            (local_240 - local_110) * (local_240 - local_110) +
                            (local_248 - local_108) * (local_248 - local_108);
                if (local_178 <= dVar12) {
                  local_178 = dVar12;
                }
                if (local_178 <= dVar14) {
                  local_178 = dVar14;
                }
                local_178 = SQRT(local_178);
                puVar1 = (undefined8 *)(param_3 + (longlong)iVar7 * 0x98);
                puVar1[1] = 0;
                *puVar1 = &PTR_LAB_14a1e38d0;
                memcpy(puVar1 + 2,&local_178,0x88);
                param_3 = local_1f8;
              }
              iVar7 = iVar7 + 1;
              dVar12 = local_210;
            }
          }
          bVar11 = iVar4 != (int)local_198;
          iVar4 = iVar4 + 1;
        } while (bVar11);
      }
      bVar11 = iVar10 != local_1fc;
      iVar10 = iVar10 + 1;
    } while (bVar11);
  }
  if ((local_f0 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar7;
}



// FUNCTION 142b6c414 FUN_142b6c414 body=69 status=ok
// SIG undefined FUN_142b6c414(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b6c414(void)

{
  _DAT_14c9abd38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b6c456. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abd40,1);
  return;
}



// FUNCTION 142b6c459 FUN_142b6c459 body=69 status=ok
// SIG undefined FUN_142b6c459(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b6c459(void)

{
  _DAT_14c9abd48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b6c49b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abd50,1);
  return;
}



// FUNCTION 142b6c49e FUN_142b6c49e body=69 status=ok
// SIG undefined FUN_142b6c49e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b6c49e(void)

{
  _DAT_14c9abd58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b6c4e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abd60,1);
  return;
}



// FUNCTION 142b6c4e3 FUN_142b6c4e3 body=69 status=ok
// SIG undefined FUN_142b6c4e3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b6c4e3(void)

{
  _DAT_14c9abd68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b6c525. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abd70,1);
  return;
}



// FUNCTION 142b6c528 FUN_142b6c528 body=69 status=ok
// SIG undefined FUN_142b6c528(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b6c528(void)

{
  _DAT_14c9abd78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b6c56a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abd80,1);
  return;
}



// FUNCTION 142b6c56d FUN_142b6c56d body=69 status=ok
// SIG undefined FUN_142b6c56d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b6c56d(void)

{
  _DAT_14c9abd88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b6c5af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abd90,1);
  return;
}



// FUNCTION 142b6c5b2 FUN_142b6c5b2 body=69 status=ok
// SIG undefined FUN_142b6c5b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b6c5b2(void)

{
  _DAT_14c9abd98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b6c5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abda0,1);
  return;
}



// FUNCTION 142b6c5f7 FUN_142b6c5f7 body=69 status=ok
// SIG undefined FUN_142b6c5f7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b6c5f7(void)

{
  _DAT_14c9abda8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b6c639. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abdb0,1);
  return;
}



// FUNCTION 142b6c63c FUN_142b6c63c body=69 status=ok
// SIG undefined FUN_142b6c63c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b6c63c(void)

{
  _DAT_14c9abdb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b6c67e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abdc0,1);
  return;
}



// FUNCTION 142b6c681 FUN_142b6c681 body=69 status=ok
// SIG undefined FUN_142b6c681(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b6c681(void)

{
  _DAT_14c9abdc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b6c6c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abdd0,1);
  return;
}



// FUNCTION 142b6c6c6 FUN_142b6c6c6 body=69 status=ok
// SIG undefined FUN_142b6c6c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b6c6c6(void)

{
  _DAT_14c9abdd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b6c708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abde0,1);
  return;
}



// FUNCTION 142b6c70b FUN_142b6c70b body=69 status=ok
// SIG undefined FUN_142b6c70b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b6c70b(void)

{
  _DAT_14c9abde8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b6c74d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abdf0,1);
  return;
}



// FUNCTION 142b6c750 FUN_142b6c750 body=69 status=ok
// SIG undefined FUN_142b6c750(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b6c750(void)

{
  _DAT_14c9abdf8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b6c792. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abe00,1);
  return;
}



// FUNCTION 142b6c795 FUN_142b6c795 body=69 status=ok
// SIG undefined FUN_142b6c795(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b6c795(void)

{
  _DAT_14c9abe08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b6c7d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abe10,1);
  return;
}



// FUNCTION 142b6c7da FUN_142b6c7da body=69 status=ok
// SIG undefined FUN_142b6c7da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b6c7da(void)

{
  _DAT_14c9abe18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b6c81c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abe20,1);
  return;
}



// FUNCTION 142b6c81f FUN_142b6c81f body=69 status=ok
// SIG undefined FUN_142b6c81f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b6c81f(void)

{
  _DAT_14c9abe28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b6c861. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abe30,1);
  return;
}



// FUNCTION 142b6c896 FUN_142b6c896 body=420 status=ok
// SIG undefined FUN_142b6c896(void)

longlong FUN_142b6c896(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong local_88;
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_14711f784(&local_c8);
  uVar4 = local_b8 & 0xffffffff;
  lVar1 = 0;
  if ((-1 < (int)local_b8) && ((int)local_b8 < (int)uStack_c0)) {
    while( true ) {
      lVar1 = FUN_1447210f0(*(undefined8 *)(local_c8 + (uVar4 & 0xffffffff) * 8));
      if (((lVar1 == param_1) &&
          (lVar1 = *(longlong *)(local_c8 + (longlong)(int)local_b8 * 8), lVar1 != 0)) &&
         ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) break;
      uVar4 = (longlong)(int)local_b8;
      do {
        uVar5 = uVar4;
        uVar4 = uVar5 + 1;
        local_b8 = CONCAT44(local_b8._4_4_,(int)uVar4);
        if ((longlong)(int)uStack_c0 <= (longlong)uVar4) break;
      } while (*(longlong *)(local_c8 + uVar4 * 8) == 0);
      lVar1 = 0;
      if (((longlong)uVar5 < -1) || (lVar1 = 0, (int)uStack_c0 <= (int)uVar4)) break;
    }
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if (lVar1 == 0) {
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_98 = 0x800000100;
    local_88 = 0;
    local_78 = (longlong *)0x0;
    uVar2 = FUN_145b2f1c6();
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0x3ff00000;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e4 = 0x3ff00000;
    uStack_e0 = 0;
    uStack_dc = 0x3ff00000;
    local_d8 = 0x3ff0000000000000;
    uStack_d0 = 0;
    lVar1 = FUN_141037e38(param_1,uVar2,&local_128,&local_c8);
    if (local_88 != 0) {
      plVar3 = local_78;
      if (local_78 == (longlong *)0x0) {
        plVar3 = local_68;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 142b6ca3c FUN_142b6ca3c body=115 status=ok
// SIG undefined FUN_142b6ca3c(void)

longlong FUN_142b6ca3c(int *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = param_1[1];
  if (iVar1 < *param_1) {
    lVar3 = (longlong)iVar1 * 0x28 + *(longlong *)(param_1 + 2);
    param_1[1] = iVar1 + 1;
  }
  else {
    iVar1 = param_1[6];
    param_1[6] = iVar1 + 1U;
    if ((uint)param_1[7] < iVar1 + 1U) {
      FUN_14711f816(param_1 + 4,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 4);
    lVar4 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + 8 + lVar4) = 0;
    lVar3 = FUN_14001cc68(0x28,0x10);
    *(longlong *)(lVar2 + lVar4) = lVar3;
    *(undefined4 *)(lVar2 + 8 + lVar4) = 1;
  }
  return lVar3;
}



// FUNCTION 142b6cab0 FUN_142b6cab0 body=144 status=ok
// SIG undefined FUN_142b6cab0(void)

void FUN_142b6cab0(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x400);
  if ((uint)param_3 < 0x101) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x400,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 0x400),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x400,param_2,param_3,4);
  return;
}



// FUNCTION 142b6cb40 FUN_142b6cb40 body=144 status=ok
// SIG undefined FUN_142b6cb40(void)

void FUN_142b6cb40(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x2000);
  if ((uint)param_3 < 0x101) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x2000,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x2000),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x2000,param_2,param_3,0x20);
  return;
}



// FUNCTION 142b6cbd0 FUN_142b6cbd0 body=281 status=ok
// SIG undefined FUN_142b6cbd0(void)

void FUN_142b6cbd0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  uint local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14711fc48(&local_48);
  uVar8 = (ulonglong)local_38;
  if ((-1 < (int)local_38) && ((int)local_38 < local_40)) {
    do {
      lVar5 = *(longlong *)(*(longlong *)(local_48 + (uVar8 & 0xffffffff) * 8) + 0xb0);
      if (lVar5 == 0) {
        lVar5 = FUN_1448abda6();
      }
      if (lVar5 == *(longlong *)*param_1) {
        uVar1 = *(undefined8 *)(local_48 + (longlong)(int)local_38 * 8);
        puVar2 = (undefined8 *)param_1[1];
        pcVar3 = (code *)*puVar2;
        plVar7 = puVar2 + 4;
        if ((longlong *)puVar2[2] != (longlong *)0x0) {
          plVar7 = (longlong *)puVar2[2];
        }
        local_30 = uVar1;
        uVar6 = (**(code **)(*plVar7 + 8))();
        cVar4 = (*pcVar3)(uVar6,&local_30);
        if (cVar4 == '\0') {
          FUN_140ac6e0a(param_1[2],uVar1,1,0);
        }
      }
      uVar8 = (longlong)(int)local_38;
      do {
        uVar9 = uVar8;
        uVar8 = uVar9 + 1;
        local_38 = (uint)uVar8;
        if ((longlong)local_40 <= (longlong)uVar8) break;
      } while (*(longlong *)(local_48 + uVar8 * 8) == 0);
    } while ((-2 < (longlong)uVar9) && ((int)local_38 < local_40));
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b6cd2e FUN_142b6cd2e body=9 status=ok
// SIG undefined FUN_142b6cd2e(void)

void FUN_142b6cd2e(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    return;
  }
  if (param_1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
    return;
  }
  return;
}



// FUNCTION 142b6cd3d FUN_142b6cd3d body=11700 status=ok
// SIG undefined FUN_142b6cd3d(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b6cd3d(longlong param_1,double *param_2,double *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined ***pppuVar17;
  double *pdVar18;
  undefined **ppuVar19;
  ulonglong uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
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
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
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
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  undefined1 auStack_3e88 [32];
  double *local_3e68;
  double *local_3e60;
  undefined ***local_3e58;
  undefined ***local_3e50;
  double *local_3e48;
  undefined ***local_3e40;
  undefined1 *local_3e38;
  undefined ***local_3e30;
  double *local_3e28;
  undefined ***local_3e20;
  undefined **local_3e18;
  double *local_3e10;
  undefined **local_3e08;
  double dStack_3e00;
  undefined **local_3df0;
  undefined1 local_3de8 [16];
  double local_3dd8;
  double dStack_3dd0;
  undefined **local_3dc8;
  undefined **local_3dc0;
  double *local_3db8;
  undefined **local_3db0;
  undefined8 local_3da8;
  double local_3da0 [4];
  double dStack_3d80;
  double dStack_3d78;
  double local_3d70;
  double dStack_3d68;
  double local_3d60;
  double local_3d58;
  double dStack_3d50;
  double local_3d48;
  double local_3d38;
  double dStack_3d30;
  undefined1 local_3d28 [16];
  undefined **local_3d18;
  undefined **ppuStack_3d10;
  double local_3d08;
  double dStack_3d00;
  undefined1 local_3cf8 [16];
  double local_3ce8;
  double dStack_3ce0;
  double local_3cd8 [12];
  double local_3c78 [3];
  double local_3c60 [3];
  double local_3c48;
  double dStack_3c40;
  double local_3c38;
  double dStack_3c30;
  double local_3c28;
  double local_3c20;
  double local_3c18;
  undefined8 local_3c10;
  undefined8 uStack_3c08;
  undefined **local_3bf8;
  double dStack_3bf0;
  double local_3be8;
  double dStack_3be0;
  double local_3bd8;
  double dStack_3bd0;
  double local_3bc8;
  double dStack_3bc0;
  double local_3bb8;
  double dStack_3bb0;
  double local_3ba8;
  double dStack_3ba0;
  double local_3b98;
  double dStack_3b90;
  double local_3b88;
  double dStack_3b80;
  double local_3b78;
  double local_3b70;
  double local_3b68 [2];
  longlong local_3b58;
  undefined8 local_3af0;
  undefined4 local_3ae8;
  undefined8 local_3ae0;
  undefined8 uStack_3ad8;
  undefined8 local_3ad0;
  double adStack_3ac8 [2];
  undefined **local_3ab8 [3];
  double local_3aa0;
  undefined **local_3a98;
  undefined **ppuStack_3a90;
  undefined **local_3a88;
  double local_3a80;
  undefined **ppuStack_3a78;
  double local_3a70;
  double local_3a68;
  undefined **ppuStack_3a60;
  undefined **ppuStack_3a58;
  undefined **ppuStack_3a50;
  double local_3a48;
  double dStack_3a40;
  undefined **ppuStack_3a38;
  double local_3a30;
  undefined **ppuStack_3a28;
  double local_3a20;
  double dStack_3a18;
  double local_3a10;
  double local_3a08;
  double local_3a00;
  longlong local_15c8;
  longlong local_13b8;
  longlong local_3a8;
  undefined **local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358;
  undefined8 uStack_350;
  double dStack_348;
  double dStack_340;
  double local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  char local_116;
  ulonglong local_f0;
  undefined8 uStack_48;
  
  uStack_48 = 0x142b6cd53;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3e88;
  local_3e10 = param_3;
  if (*(char *)(param_1 + 0x250) == '\x01') {
    if ((longlong)*(int *)(param_1 + 0x218) != 0) {
      lVar15 = *(longlong *)(param_1 + 0x210);
      local_3de8._0_8_ = (longlong)*(int *)(param_1 + 0x218) * 0x58 + lVar15;
      local_3dd8 = (double)(param_1 + 0x130);
      do {
        local_3da8 = *(undefined8 *)(lVar15 + 8);
        local_3db0 = &PTR_LAB_14a1e1978;
        pdVar13 = (double *)(lVar15 + 0x10);
        pdVar18 = local_3da0;
        for (lVar12 = 9; lVar12 != 0; lVar12 = lVar12 + -1) {
          *pdVar18 = *pdVar13;
          pdVar13 = pdVar13 + 1;
          pdVar18 = pdVar18 + 1;
        }
        pdVar13 = &DAT_14c846480;
        pdVar18 = local_3cd8;
        for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
          *pdVar18 = *pdVar13;
          pdVar13 = pdVar13 + 1;
          pdVar18 = pdVar18 + 1;
        }
        auVar24._8_8_ = dStack_3d80;
        auVar24._0_8_ = local_3da0[3];
        auVar24 = divpd(auVar24,_DAT_1499387d0);
        auVar30._8_8_ = 0;
        auVar30._0_8_ = dStack_3d78;
        auVar30 = divpd(auVar30,_DAT_1499387d0);
        auVar24 = roundpd(auVar24,auVar24,3);
        auVar30 = roundpd(auVar30,auVar30,3);
        dVar47 = (local_3da0[3] - auVar24._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar49 = (dStack_3d80 - auVar24._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar51 = (dStack_3d78 - auVar30._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar52 = (0.0 - auVar30._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar21 = sin(dVar47);
        uVar10 = (undefined4)lVar12;
        dVar22 = sin(dVar49);
        dVar23 = sin(dVar51);
        sin(dVar52);
        dVar47 = cos(dVar47);
        dVar49 = cos(dVar49);
        dVar51 = cos(dVar51);
        cos(dVar52);
        dVar48 = -(dVar49 * dVar21 * dVar23) + dVar22 * dVar47 * dVar51;
        dVar50 = dVar22 * dVar21 * dVar23 + dVar49 * dVar47 * dVar51;
        dVar52 = dVar21 * dVar22 * dVar51 - dVar47 * dVar49 * dVar23;
        dVar47 = -(dVar21 * dVar49 * dVar51) - dVar47 * dVar22 * dVar23;
        local_3d18 = (undefined **)0x0;
        ppuStack_3d10 = (undefined **)0x0;
        auVar24 = *(undefined1 (*) [16])(param_1 + 0x170);
        dVar21 = auVar24._0_8_;
        dVar23 = auVar24._8_8_;
        auVar30 = *(undefined1 (*) [16])(param_1 + 0x180);
        dVar22 = auVar30._0_8_;
        auVar31 = minpd(_DAT_149934d80,auVar24);
        auVar34 = minpd(ZEXT816(0x3ff0000000000000),auVar30);
        auVar41._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
        auVar41._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
        iVar9 = movmskpd((int)&local_3d18,auVar41);
        auVar31._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
        auVar31._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
        uVar11 = movmskpd(uVar10,auVar31);
        if ((uVar11 & 0x3fffffff) == 0 && iVar9 == 0) {
          dVar54 = *(double *)(param_1 + 0x130);
          dVar55 = *(double *)(param_1 + 0x138);
          dVar3 = *(double *)(param_1 + 0x140);
          dVar4 = *(double *)(param_1 + 0x148);
          dVar49 = *(double *)(param_1 + 0x148);
          dVar51 = *(double *)(param_1 + 0x148);
          dVar46 = *(double *)(param_1 + 0x130);
          dVar44 = *(double *)(param_1 + 0x130);
          dVar56 = *(double *)(param_1 + 0x138);
          dVar57 = *(double *)(param_1 + 0x138);
          dVar58 = *(double *)(param_1 + 0x140);
          dVar53 = *(double *)(param_1 + 0x140);
          local_3d38 = dVar47 * dVar58 * -1.0 +
                       dVar48 * dVar56 + dVar50 * dVar46 * 1.0 + dVar52 * dVar49;
          dStack_3d30 = dVar52 * dVar53 * 1.0 +
                        dVar50 * dVar57 + dVar48 * dVar44 * -1.0 + dVar47 * dVar51;
          local_3d28._0_8_ =
               dVar50 * dVar58 * 1.0 + ((dVar46 * dVar47 * 1.0 + dVar48 * dVar49) - dVar52 * dVar56)
          ;
          local_3d28._8_8_ =
               dVar48 * dVar53 * -1.0 +
               ((dVar44 * dVar52 * -1.0 + dVar50 * dVar51) - dVar47 * dVar57);
          dVar48 = local_3da0[0] * dVar21;
          dVar50 = local_3da0[1] * dVar23;
          dVar47 = local_3da0[2] * dVar22;
          dVar52 = auVar30._8_8_ * 0.0;
          dVar44 = dVar50 * dVar54 - dVar48 * dVar55;
          dVar46 = dVar47 * dVar55 - dVar50 * dVar3;
          dVar56 = dVar48 * dVar3 - dVar47 * dVar54;
          dVar57 = dVar52 * dVar4 - dVar52 * dVar4;
          dVar46 = dVar46 + dVar46;
          dVar56 = dVar56 + dVar56;
          dVar44 = dVar44 + dVar44;
          dVar57 = dVar57 + dVar57;
          local_3d18 = (undefined **)
                       ((dVar44 * dVar55 - dVar3 * dVar56) + dVar49 * dVar46 + dVar48 +
                       *(double *)(param_1 + 0x150));
          ppuStack_3d10 =
               (undefined **)
               ((dVar46 * dVar3 - dVar44 * dVar54) + dVar51 * dVar56 + dVar50 +
               *(double *)(param_1 + 0x158));
          dStack_3d00 = (dVar57 * dVar4 - dVar57 * dVar4) + dVar51 * dVar57 + dVar52 +
                        *(double *)(param_1 + 0x168);
          local_3d08 = (dVar56 * dVar54 - dVar55 * dVar46) + dVar49 * dVar44 + dVar47 +
                       *(double *)(param_1 + 0x160);
        }
        else {
          dVar51 = *(double *)(param_1 + 0x130);
          dVar44 = *(double *)(param_1 + 0x138);
          dVar49 = *(double *)(param_1 + 0x140);
          dVar46 = dVar44 + dVar44;
          dVar56 = dVar49 + dVar49;
          dVar53 = dVar51 * (dVar51 + dVar51);
          local_388 = (undefined **)((1.0 - (dVar49 * dVar56 + dVar44 * dVar46)) * dVar21);
          dStack_360 = (1.0 - (dVar49 * dVar56 + dVar53)) * dVar23;
          dVar54 = *(double *)(param_1 + 0x130) * dVar56;
          dVar49 = *(double *)(param_1 + 0x148);
          dVar57 = dVar56 * dVar49;
          dVar58 = (dVar51 + dVar51) * *(double *)(param_1 + 0x148);
          dVar49 = dVar46 * dVar49;
          local_368 = (dVar46 * dVar51 - dVar57) * dVar23;
          dStack_340 = (dVar56 * dVar44 - dVar58) * dVar22;
          dStack_348 = (dVar49 + dVar54) * dVar22;
          dStack_380 = (dVar46 * dVar51 + dVar57) * dVar21;
          local_358 = (dVar56 * dVar44 + dVar58) * dVar23;
          local_338 = (1.0 - (dVar53 + dVar44 * dVar46)) * dVar22;
          local_378 = (dVar54 - dVar49) * dVar21;
          dStack_370 = 0.0;
          uStack_350 = 0;
          uStack_330 = 0;
          local_328 = *(undefined8 *)(param_1 + 0x150);
          uStack_320 = *(undefined8 *)(param_1 + 0x158);
          local_318 = *(undefined8 *)(param_1 + 0x160);
          uStack_310 = 0x3ff0000000000000;
          dVar49 = dVar47 + dVar47;
          dVar44 = dVar48 + dVar48;
          dVar51 = dVar52 * (dVar52 + dVar52);
          local_3bf8 = (undefined **)(1.0 - (dVar48 * dVar44 + dVar47 * dVar49));
          dStack_3bd0 = 1.0 - (dVar48 * dVar44 + dVar51);
          local_3ba8 = 1.0 - (dVar51 + dVar47 * dVar49);
          dStack_3bb0 = (dVar52 + dVar52) * dVar50;
          dStack_3bf0 = dVar49 * dVar52 + dVar44 * dVar50;
          local_3bc8 = dVar44 * dVar47 + dStack_3bb0;
          local_3bd8 = dVar49 * dVar52 - dVar44 * dVar50;
          dStack_3bb0 = dVar44 * dVar47 - dStack_3bb0;
          local_3bb8 = dVar49 * dVar50 + dVar52 * dVar44;
          local_3be8 = dVar52 * dVar44 - dVar49 * dVar50;
          dStack_3be0 = 0.0;
          dStack_3bc0 = 0.0;
          dStack_3ba0 = 0.0;
          local_3b98 = local_3da0[0];
          dStack_3b90 = local_3da0[1];
          local_3b88 = local_3da0[2];
          dStack_3b80 = 1.0;
          FUN_1447fea8d(local_3ab8,&local_3bf8,&local_388);
          local_3e08 = local_3ab8[2];
          dVar47 = (double)local_3ab8[2] * (double)local_3ab8[2] +
                   (double)local_3ab8[0] * (double)local_3ab8[0] +
                   (double)local_3ab8[1] * (double)local_3ab8[1];
          local_3e18 = local_3a98;
          local_3df0 = local_3a88;
          dVar49 = (double)local_3a88 * (double)local_3a88 +
                   (double)local_3a98 * (double)local_3a98 +
                   (double)ppuStack_3a90 * (double)ppuStack_3a90;
          dVar51 = local_3a68 * local_3a68 +
                   (double)ppuStack_3a78 * (double)ppuStack_3a78 + local_3a70 * local_3a70;
          uVar20 = -(ulonglong)(0.0 <= dVar47 + -9.99999993922529e-09);
          dVar47 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar47)) & uVar20)
          ;
          uVar20 = -(ulonglong)(0.0 <= dVar49 + -9.99999993922529e-09);
          dVar49 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar49)) & uVar20)
          ;
          uVar20 = -(ulonglong)(0.0 <= dVar51 + -9.99999993922529e-09);
          dVar51 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar51)) & uVar20)
          ;
          auVar34._8_8_ = -(ulonglong)(0.0 <= dVar23);
          auVar34._0_8_ = -(ulonglong)(0.0 <= dVar21);
          auVar31 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar34);
          uVar20 = -(ulonglong)(0.0 <= dVar22 * 1.0);
          dVar52 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
          dVar48 = auVar31._0_8_;
          local_3ab8[0] = (undefined **)((double)local_3ab8[0] * dVar47 * dVar48);
          local_3ab8[1] = (undefined **)((double)local_3ab8[1] * dVar47 * dVar48);
          local_3ab8[2] = (undefined **)(dVar47 * (double)local_3ab8[2] * dVar48);
          dVar47 = auVar31._8_8_;
          local_3a88 = (undefined **)(dVar49 * (double)local_3a88 * dVar47);
          ppuStack_3a90 = (undefined **)((double)ppuStack_3a90 * dVar49 * dVar47);
          local_3a98 = (undefined **)(dVar47 * (double)local_3a98 * dVar49);
          local_3a68 = dVar51 * local_3a68 * dVar52;
          local_3a70 = local_3a70 * dVar51 * dVar52;
          ppuStack_3a78 = (undefined **)(dVar52 * (double)ppuStack_3a78 * dVar51);
          FUN_14481fd10(&local_3c48,local_3ab8);
          dVar47 = local_3c38 * local_3c38 + local_3c48 * local_3c48;
          dVar49 = dStack_3c30 * dStack_3c30 + dStack_3c40 * dStack_3c40;
          auVar36._0_8_ = dVar47 + dVar49;
          auVar36._8_8_ = dVar47 + dVar49;
          auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
          auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
          auVar31 = sqrtpd(auVar36,auVar36);
          auVar31 = divpd(_DAT_149934d80,auVar31);
          auVar40._0_8_ = auVar31._0_8_ * local_3c38;
          auVar40._8_8_ = auVar31._8_8_ * dStack_3c30;
          local_3d28 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar40,auVar25);
          local_3d38 = (double)((ulonglong)(local_3c48 * auVar31._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_));
          dStack_3d30 = (double)((ulonglong)(dStack_3c40 * auVar31._8_8_) &
                                -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_));
          dStack_3d00 = 0.0;
          local_3d18 = ppuStack_3a58;
          ppuStack_3d10 = ppuStack_3a50;
          local_3d08 = local_3a48;
        }
        dStack_3ce0 = auVar30._8_8_ * 0.0;
        local_3ce8 = dVar22 * 1.0;
        local_378 = param_2[0xb] - param_2[5];
        dStack_380 = param_2[10] - param_2[4];
        local_388 = (undefined **)(param_2[9] - param_2[3]);
        dStack_360 = param_2[8] - param_2[5];
        local_368 = param_2[7] - param_2[4];
        dStack_370 = param_2[6] - param_2[3];
        local_358 = param_2[0xe] * *(double *)(param_1 + 0x100) +
                    param_2[0xc] * *(double *)(param_1 + 0xf0) +
                    param_2[0xd] * *(double *)(param_1 + 0xf8);
        if (-param_2[0x12] <= local_358) {
          local_358 = -param_2[0x12];
        }
        local_358 = ABS(local_358);
        uStack_350 = 0;
        dStack_348 = 0.0;
        local_3a48 = local_3d60 * 0.5;
        local_3a80 = dStack_3d68 * 0.5;
        local_3aa0 = local_3d70 * 0.5;
        local_3ab8[2] = (undefined **)-local_3a48;
        local_3ab8[1] = (undefined **)-local_3a80;
        local_3ab8[0] = (undefined **)-local_3aa0;
        local_3a98 = local_3ab8[1];
        ppuStack_3a90 = local_3ab8[2];
        local_3a88 = local_3ab8[0];
        ppuStack_3a78 = local_3ab8[2];
        local_3a70 = local_3aa0;
        local_3a68 = local_3a80;
        ppuStack_3a60 = local_3ab8[2];
        ppuStack_3a58 = local_3ab8[0];
        ppuStack_3a50 = local_3ab8[1];
        dStack_3a40 = local_3aa0;
        ppuStack_3a38 = local_3ab8[1];
        local_3a30 = local_3a48;
        ppuStack_3a28 = local_3ab8[0];
        local_3a20 = local_3a80;
        dStack_3a18 = local_3a48;
        local_3a10 = local_3aa0;
        local_3a08 = local_3a80;
        local_3a00 = local_3a48;
        dVar22 = local_3d28._0_8_;
        dVar47 = local_3d28._8_8_;
        lVar12 = 0x10;
        do {
          dVar50 = *(double *)((longlong)adStack_3ac8 + lVar12) * dVar21;
          dVar44 = *(double *)((longlong)adStack_3ac8 + lVar12 + 8) * dVar23;
          dVar49 = *(double *)((longlong)local_3ab8 + lVar12) * local_3ce8;
          dVar51 = dVar44 * local_3d38 - dStack_3d30 * dVar50;
          dVar52 = dVar49 * dStack_3d30 - dVar22 * dVar44;
          dVar48 = dVar50 * dVar22 - local_3d38 * dVar49;
          dVar52 = dVar52 + dVar52;
          dVar48 = dVar48 + dVar48;
          dVar51 = dVar51 + dVar51;
          *(double *)((longlong)adStack_3ac8 + lVar12) =
               (dVar51 * dStack_3d30 - dVar48 * dVar22) + dVar47 * dVar52 + dVar50;
          *(double *)((longlong)adStack_3ac8 + lVar12 + 8) =
               (dVar22 * dVar52 - local_3d38 * dVar51) + dVar47 * dVar48 + dVar44;
          *(double *)((longlong)local_3ab8 + lVar12) =
               dVar51 * dVar47 + dVar49 + (dVar48 * local_3d38 - dVar52 * dStack_3d30);
          lVar12 = lVar12 + 0x18;
        } while (lVar12 != 0xd0);
        local_3be8 = param_2[0xe];
        local_3bf8 = (undefined **)param_2[0xc];
        dStack_3bf0 = param_2[0xd];
        local_3e20 = &local_3bf8;
        local_3e28 = local_3e10;
        local_3e30 = local_3ab8;
        local_3e38 = &LAB_142b5f570;
        local_3e40 = &local_3db0;
        local_3e48 = &local_3d38;
        local_3e50 = &local_388;
        local_3e58 = (undefined ***)FUN_1471053b7;
        local_3e68 = local_3cd8;
        local_3e60 = param_2;
        local_3cf8 = auVar24;
        FUN_14044bf58(0,param_1,&DAT_14c846480,local_3dd8);
        lVar15 = lVar15 + 0x58;
      } while (lVar15 != local_3de8._0_8_);
    }
    if ((longlong)*(int *)(param_1 + 0x228) != 0) {
      dVar21 = *(double *)(param_1 + 0x220);
      local_3dd8 = (double)((longlong)*(int *)(param_1 + 0x228) * 0x50 + (longlong)dVar21);
      do {
        local_3da8 = *(undefined8 *)((longlong)dVar21 + 8);
        local_3db0 = &PTR_LAB_14a1e1948;
        local_3da0[0] = *(double *)((longlong)dVar21 + 0x10);
        local_3da0[1] = *(double *)((longlong)dVar21 + 0x18);
        local_3da0[2] = *(double *)((longlong)dVar21 + 0x20);
        local_3da0[3] = *(double *)*(undefined1 (*) [16])((longlong)dVar21 + 0x28);
        dStack_3d80 = *(double *)((longlong)dVar21 + 0x30);
        auVar24 = *(undefined1 (*) [16])((longlong)dVar21 + 0x28);
        dStack_3d78 = *(double *)((longlong)dVar21 + 0x38);
        local_3d70 = *(double *)((longlong)dVar21 + 0x40);
        dStack_3d68 = *(double *)((longlong)dVar21 + 0x48);
        pdVar13 = &DAT_14c846480;
        pdVar18 = local_3cd8;
        for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
          *pdVar18 = *pdVar13;
          pdVar13 = pdVar13 + 1;
          pdVar18 = pdVar18 + 1;
        }
        auVar24 = divpd(auVar24,_DAT_1499387d0);
        auVar32._8_8_ = 0;
        auVar32._0_8_ = dStack_3d78;
        auVar30 = divpd(auVar32,_DAT_1499387d0);
        auVar24 = roundpd(auVar24,auVar24,3);
        auVar30 = roundpd(auVar30,auVar30,3);
        dVar49 = (local_3da0[3] - auVar24._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar51 = (dStack_3d80 - auVar24._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar52 = (dStack_3d78 - auVar30._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar48 = (0.0 - auVar30._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar22 = sin(dVar49);
        uVar10 = (undefined4)lVar15;
        dVar23 = sin(dVar51);
        dVar47 = sin(dVar52);
        sin(dVar48);
        dVar49 = cos(dVar49);
        dVar51 = cos(dVar51);
        dVar52 = cos(dVar52);
        cos(dVar48);
        dVar50 = -(dVar51 * dVar22 * dVar47) + dVar23 * dVar49 * dVar52;
        dVar44 = dVar23 * dVar22 * dVar47 + dVar51 * dVar49 * dVar52;
        dVar48 = dVar22 * dVar23 * dVar52 - dVar49 * dVar51 * dVar47;
        dVar49 = -(dVar22 * dVar51 * dVar52) - dVar49 * dVar23 * dVar47;
        local_3d18 = (undefined **)0x0;
        ppuStack_3d10 = (undefined **)0x0;
        auVar24 = *(undefined1 (*) [16])(param_1 + 0x170);
        dVar22 = auVar24._0_8_;
        dVar47 = auVar24._8_8_;
        auVar30 = *(undefined1 (*) [16])(param_1 + 0x180);
        dVar23 = auVar30._0_8_;
        auVar31 = minpd(_DAT_149934d80,auVar24);
        auVar41 = minpd(ZEXT816(0x3ff0000000000000),auVar30);
        auVar33._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
        auVar33._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
        iVar9 = movmskpd((int)&local_3d18,auVar33);
        auVar42._8_8_ = -(ulonglong)(auVar41._8_8_ < 0.0);
        auVar42._0_8_ = -(ulonglong)(auVar41._0_8_ < 0.0);
        uVar11 = movmskpd(uVar10,auVar42);
        if ((uVar11 & 0x3fffffff) == 0 && iVar9 == 0) {
          dVar55 = *(double *)(param_1 + 0x130);
          dVar3 = *(double *)(param_1 + 0x138);
          dVar4 = *(double *)(param_1 + 0x140);
          dVar5 = *(double *)(param_1 + 0x148);
          dVar51 = *(double *)(param_1 + 0x148);
          dVar52 = *(double *)(param_1 + 0x148);
          dVar46 = *(double *)(param_1 + 0x130);
          dVar56 = *(double *)(param_1 + 0x130);
          dVar57 = *(double *)(param_1 + 0x138);
          dVar58 = *(double *)(param_1 + 0x138);
          dVar54 = *(double *)(param_1 + 0x140);
          dVar53 = *(double *)(param_1 + 0x140);
          local_3d38 = dVar49 * dVar54 * -1.0 +
                       dVar50 * dVar57 + dVar44 * dVar46 * 1.0 + dVar48 * dVar51;
          dStack_3d30 = dVar48 * dVar53 * 1.0 +
                        dVar44 * dVar58 + dVar50 * dVar56 * -1.0 + dVar49 * dVar52;
          local_3d28._0_8_ =
               dVar44 * dVar54 * 1.0 + ((dVar46 * dVar49 * 1.0 + dVar50 * dVar51) - dVar48 * dVar57)
          ;
          local_3d28._8_8_ =
               dVar50 * dVar53 * -1.0 +
               ((dVar56 * dVar48 * -1.0 + dVar44 * dVar52) - dVar49 * dVar58);
          dVar50 = local_3da0[0] * dVar22;
          dVar44 = local_3da0[1] * dVar47;
          dVar49 = local_3da0[2] * dVar23;
          dVar48 = auVar30._8_8_ * 0.0;
          dVar46 = dVar44 * dVar55 - dVar50 * dVar3;
          dVar56 = dVar49 * dVar3 - dVar44 * dVar4;
          dVar57 = dVar50 * dVar4 - dVar49 * dVar55;
          dVar58 = dVar48 * dVar5 - dVar48 * dVar5;
          dVar56 = dVar56 + dVar56;
          dVar57 = dVar57 + dVar57;
          dVar46 = dVar46 + dVar46;
          dVar58 = dVar58 + dVar58;
          local_3d18 = (undefined **)
                       ((dVar46 * dVar3 - dVar4 * dVar57) + dVar51 * dVar56 + dVar50 +
                       *(double *)(param_1 + 0x150));
          ppuStack_3d10 =
               (undefined **)
               ((dVar56 * dVar4 - dVar46 * dVar55) + dVar52 * dVar57 + dVar44 +
               *(double *)(param_1 + 0x158));
          dStack_3d00 = (dVar58 * dVar5 - dVar58 * dVar5) + dVar52 * dVar58 + dVar48 +
                        *(double *)(param_1 + 0x168);
          local_3d08 = (dVar57 * dVar55 - dVar3 * dVar56) + dVar51 * dVar46 + dVar49 +
                       *(double *)(param_1 + 0x160);
        }
        else {
          dVar52 = *(double *)(param_1 + 0x130);
          dVar46 = *(double *)(param_1 + 0x138);
          dVar51 = *(double *)(param_1 + 0x140);
          dVar56 = dVar46 + dVar46;
          dVar57 = dVar51 + dVar51;
          dVar54 = dVar52 * (dVar52 + dVar52);
          local_388 = (undefined **)((1.0 - (dVar51 * dVar57 + dVar46 * dVar56)) * dVar22);
          dStack_360 = (1.0 - (dVar51 * dVar57 + dVar54)) * dVar47;
          dVar55 = *(double *)(param_1 + 0x130) * dVar57;
          dVar51 = *(double *)(param_1 + 0x148);
          dVar58 = dVar57 * dVar51;
          dVar53 = (dVar52 + dVar52) * *(double *)(param_1 + 0x148);
          dVar51 = dVar56 * dVar51;
          local_368 = (dVar56 * dVar52 - dVar58) * dVar47;
          dStack_340 = (dVar57 * dVar46 - dVar53) * dVar23;
          dStack_348 = (dVar51 + dVar55) * dVar23;
          dStack_380 = (dVar56 * dVar52 + dVar58) * dVar22;
          local_358 = (dVar57 * dVar46 + dVar53) * dVar47;
          local_338 = (1.0 - (dVar54 + dVar46 * dVar56)) * dVar23;
          local_378 = (dVar55 - dVar51) * dVar22;
          dStack_370 = 0.0;
          uStack_350 = 0;
          uStack_330 = 0;
          local_328 = *(undefined8 *)(param_1 + 0x150);
          uStack_320 = *(undefined8 *)(param_1 + 0x158);
          local_318 = *(undefined8 *)(param_1 + 0x160);
          uStack_310 = 0x3ff0000000000000;
          dVar51 = dVar49 + dVar49;
          dVar46 = dVar50 + dVar50;
          dVar52 = dVar48 * (dVar48 + dVar48);
          local_3bf8 = (undefined **)(1.0 - (dVar50 * dVar46 + dVar49 * dVar51));
          dStack_3bd0 = 1.0 - (dVar50 * dVar46 + dVar52);
          local_3ba8 = 1.0 - (dVar52 + dVar49 * dVar51);
          dStack_3bb0 = (dVar48 + dVar48) * dVar44;
          dStack_3bf0 = dVar51 * dVar48 + dVar46 * dVar44;
          local_3bc8 = dVar46 * dVar49 + dStack_3bb0;
          local_3bd8 = dVar51 * dVar48 - dVar46 * dVar44;
          dStack_3bb0 = dVar46 * dVar49 - dStack_3bb0;
          local_3bb8 = dVar51 * dVar44 + dVar48 * dVar46;
          local_3be8 = dVar48 * dVar46 - dVar51 * dVar44;
          dStack_3be0 = 0.0;
          dStack_3bc0 = 0.0;
          dStack_3ba0 = 0.0;
          local_3b98 = local_3da0[0];
          dStack_3b90 = local_3da0[1];
          local_3b88 = local_3da0[2];
          dStack_3b80 = 1.0;
          FUN_1447fea8d(local_3ab8,&local_3bf8,&local_388);
          local_3de8._0_8_ = local_3ab8[2];
          dVar49 = (double)local_3ab8[2] * (double)local_3ab8[2] +
                   (double)local_3ab8[0] * (double)local_3ab8[0] +
                   (double)local_3ab8[1] * (double)local_3ab8[1];
          local_3e08 = local_3a98;
          local_3e18 = local_3a88;
          dVar51 = (double)local_3a88 * (double)local_3a88 +
                   (double)local_3a98 * (double)local_3a98 +
                   (double)ppuStack_3a90 * (double)ppuStack_3a90;
          dVar52 = local_3a68 * local_3a68 +
                   (double)ppuStack_3a78 * (double)ppuStack_3a78 + local_3a70 * local_3a70;
          uVar20 = -(ulonglong)(0.0 <= dVar49 + -9.99999993922529e-09);
          dVar49 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar49)) & uVar20)
          ;
          uVar20 = -(ulonglong)(0.0 <= dVar51 + -9.99999993922529e-09);
          dVar51 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar51)) & uVar20)
          ;
          uVar20 = -(ulonglong)(0.0 <= dVar52 + -9.99999993922529e-09);
          dVar52 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar52)) & uVar20)
          ;
          auVar26._8_8_ = -(ulonglong)(0.0 <= dVar47);
          auVar26._0_8_ = -(ulonglong)(0.0 <= dVar22);
          auVar31 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar26);
          uVar20 = -(ulonglong)(0.0 <= dVar23 * 1.0);
          dVar48 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
          dVar50 = auVar31._0_8_;
          local_3ab8[0] = (undefined **)((double)local_3ab8[0] * dVar49 * dVar50);
          local_3ab8[1] = (undefined **)((double)local_3ab8[1] * dVar49 * dVar50);
          local_3ab8[2] = (undefined **)(dVar49 * (double)local_3ab8[2] * dVar50);
          dVar49 = auVar31._8_8_;
          local_3a88 = (undefined **)(dVar51 * (double)local_3a88 * dVar49);
          ppuStack_3a90 = (undefined **)((double)ppuStack_3a90 * dVar51 * dVar49);
          local_3a98 = (undefined **)(dVar49 * (double)local_3a98 * dVar51);
          local_3a68 = dVar52 * local_3a68 * dVar48;
          local_3a70 = local_3a70 * dVar52 * dVar48;
          ppuStack_3a78 = (undefined **)(dVar48 * (double)ppuStack_3a78 * dVar52);
          FUN_14481fd10(&local_3c48,local_3ab8);
          dVar49 = local_3c38 * local_3c38 + local_3c48 * local_3c48;
          dVar51 = dStack_3c30 * dStack_3c30 + dStack_3c40 * dStack_3c40;
          auVar37._0_8_ = dVar49 + dVar51;
          auVar37._8_8_ = dVar49 + dVar51;
          auVar27._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_);
          auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_);
          auVar31 = sqrtpd(auVar37,auVar37);
          auVar31 = divpd(_DAT_149934d80,auVar31);
          auVar45._0_8_ = auVar31._0_8_ * local_3c38;
          auVar45._8_8_ = auVar31._8_8_ * dStack_3c30;
          local_3d28 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar45,auVar27);
          local_3d38 = (double)((ulonglong)(local_3c48 * auVar31._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_));
          dStack_3d30 = (double)((ulonglong)(dStack_3c40 * auVar31._8_8_) &
                                -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_));
          dStack_3d00 = 0.0;
          local_3d18 = ppuStack_3a58;
          ppuStack_3d10 = ppuStack_3a50;
          local_3d08 = local_3a48;
        }
        dStack_3ce0 = auVar30._8_8_ * 0.0;
        local_3ce8 = dVar23 * 1.0;
        local_3c38 = param_2[0xb] - param_2[5];
        dStack_3c40 = param_2[10] - param_2[4];
        local_3c48 = param_2[9] - param_2[3];
        local_3c20 = param_2[8] - param_2[5];
        local_3c28 = param_2[7] - param_2[4];
        dStack_3c30 = param_2[6] - param_2[3];
        local_3c18 = param_2[0xe] * *(double *)(param_1 + 0x100) +
                     param_2[0xc] * *(double *)(param_1 + 0xf0) +
                     param_2[0xd] * *(double *)(param_1 + 0xf8);
        if (-param_2[0x12] <= local_3c18) {
          local_3c18 = -param_2[0x12];
        }
        local_3c18 = ABS(local_3c18);
        local_3c10 = 0;
        uStack_3c08 = 0;
        local_3c78[0] = 0.0;
        local_3c78[1] = 0.0;
        local_3c78[2] = dStack_3d68 * 0.5 * local_3ce8;
        local_3c60[0] = 0.0;
        local_3c60[1] = 0.0;
        local_3c60[2] = dStack_3d68 * -0.5 * local_3ce8;
        dVar23 = local_3d28._0_8_;
        dVar49 = local_3d28._8_8_;
        pdVar13 = local_3c78;
        bVar7 = true;
        do {
          bVar8 = bVar7;
          dVar44 = *pdVar13 * dVar22;
          dVar46 = pdVar13[1] * dVar47;
          dVar51 = pdVar13[2] * local_3ce8;
          dVar52 = dVar46 * local_3d38 - dStack_3d30 * dVar44;
          dVar48 = dVar51 * dStack_3d30 - dVar23 * dVar46;
          dVar50 = dVar44 * dVar23 - local_3d38 * dVar51;
          dVar48 = dVar48 + dVar48;
          dVar50 = dVar50 + dVar50;
          dVar52 = dVar52 + dVar52;
          *pdVar13 = (dVar52 * dStack_3d30 - dVar50 * dVar23) + dVar49 * dVar48 + dVar44;
          pdVar13[1] = (dVar23 * dVar48 - local_3d38 * dVar52) + dVar49 * dVar50 + dVar46;
          pdVar13[2] = dVar52 * dVar49 + dVar51 + (dVar50 * local_3d38 - dVar48 * dStack_3d30);
          pdVar13 = local_3c60;
          bVar7 = false;
        } while (bVar8);
        local_3d48 = param_2[0xe];
        local_3d58 = param_2[0xc];
        dStack_3d50 = param_2[0xd];
        local_3e48 = local_3c78;
        local_3e50 = (undefined ***)FUN_14710519c;
        local_3e58 = &local_3db0;
        local_3e60 = &local_3d38;
        local_3e68 = &local_3c48;
        local_3cf8 = auVar24;
        FUN_1404460b8(&local_388,local_3cd8,param_2,FUN_1471053b7);
        if (local_116 == '\x01') {
          FUN_140449758(local_3ab8,&local_388);
          local_3b68[0] = 0.0;
          local_3af0 = 0xffffffffffffffff;
          local_3ae8 = 0xffffffff;
          local_3e68 = local_3b68;
          local_3ad0 = 0;
          adStack_3ac8[0] = 0.0;
          local_3ae0 = 0;
          uStack_3ad8 = 0;
          local_3b68[1] = 0.0;
          local_3b58 = param_1;
          FUN_1404461a8(local_3ab8,&local_3bc8,&dStack_3bb0,&local_3b98);
          local_3b68[0] =
               (local_3bb8 - dStack_3ba0) * local_3d48 +
               (local_3bc8 - dStack_3bb0) * local_3d58 + (dStack_3bc0 - local_3ba8) * dStack_3d50;
          dVar47 = -DAT_14c846480;
          dVar49 = -DAT_14c846488;
          dVar22 = DAT_14c846490 * -1.0;
          dVar23 = DAT_14c846498 * 1.0;
          dVar52 = dVar47 * dStack_3d50 - local_3d58 * dVar49;
          dVar51 = dVar22 * local_3d58 - local_3d48 * dVar47;
          dVar48 = dVar49 * local_3d48 - dStack_3d50 * dVar22;
          dVar52 = dVar52 + dVar52;
          dVar51 = dVar51 + dVar51;
          dVar48 = dVar48 + dVar48;
          local_3b88 = (dVar47 * dVar51 - dVar48 * dVar49) + dVar23 * dVar52 + local_3d48;
          dStack_3b90 = (dVar22 * dVar48 - dVar52 * dVar47) + dVar23 * dVar51 + dStack_3d50;
          local_3b98 = (dVar49 * dVar52 - dVar51 * dVar22) + dVar23 * dVar48 + local_3d58;
          dVar48 = local_3bc8 - DAT_14c8464a0;
          dVar50 = dStack_3bc0 - DAT_14c8464a8;
          dVar51 = local_3bb8 - DAT_14c8464b0;
          dVar46 = dVar48 * dVar22 - dVar47 * dVar51;
          dVar52 = dVar50 * dVar47 - dVar49 * dVar48;
          dVar44 = dVar51 * dVar49 - dVar22 * dVar50;
          dVar44 = dVar44 + dVar44;
          dVar46 = dVar46 + dVar46;
          dVar52 = dVar52 + dVar52;
          auVar24 = divpd(_DAT_149934d80,_DAT_14c8464c0);
          local_3bf8 = (undefined **)
                       ((double)(-(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8464c0)) &
                                auVar24._0_8_) *
                       ((dVar52 * dVar49 - dVar46 * dVar22) + dVar23 * dVar44 + dVar48));
          dStack_3bf0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8464c0._8_8_)) &
                                auVar24._8_8_) *
                        (DAT_14c846480 * dVar52 + dVar22 * dVar44 + dVar23 * dVar46 + dVar50);
          local_3be8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8464d0)) &
                               (ulonglong)(1.0 / DAT_14c8464d0)) *
                       (dVar52 * dVar23 + dVar51 + (dVar46 * dVar47 - dVar44 * dVar49));
          dVar48 = -*(double *)(param_1 + 0x130);
          dVar50 = -*(double *)(param_1 + 0x138);
          dVar51 = *(double *)(param_1 + 0x140) * -1.0;
          dVar52 = *(double *)(param_1 + 0x148) * 1.0;
          dVar47 = dStack_3d50 * dVar51 - dVar50 * local_3d48;
          dVar47 = dVar47 + dVar47;
          dVar23 = local_3d58 * dVar50 - dVar48 * dStack_3d50;
          dVar23 = dVar23 + dVar23;
          dVar22 = local_3d48 * dVar48 - dVar51 * local_3d58;
          dVar22 = dVar22 + dVar22;
          local_3b70 = (dVar48 * dVar22 - dVar47 * dVar50) + (dVar52 * dVar23 - local_3d48);
          local_3b78 = (dVar51 * dVar47 - dVar23 * dVar48) + (dVar52 * dVar22 - dStack_3d50);
          dStack_3b80 = (dVar50 * dVar23 - dVar22 * dVar51) + (dVar52 * dVar47 - local_3d58);
          dVar47 = dStack_3bb0 - *(double *)(param_1 + 0x150);
          dVar49 = local_3ba8 - *(double *)(param_1 + 0x158);
          dVar22 = dStack_3ba0 - *(double *)(param_1 + 0x160);
          dVar46 = dVar47 * dVar51 - dVar48 * dVar22;
          dVar23 = dVar49 * dVar48 - dVar50 * dVar47;
          dVar44 = dVar22 * dVar50 - dVar51 * dVar49;
          dVar44 = dVar44 + dVar44;
          dVar46 = dVar46 + dVar46;
          dVar23 = dVar23 + dVar23;
          auVar24 = *(undefined1 (*) [16])(param_1 + 0x170);
          auVar30 = divpd(_DAT_149934d80,auVar24);
          dStack_3be0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar24._0_8_)) &
                                auVar30._0_8_) *
                        ((dVar23 * dVar50 - dVar46 * dVar51) + dVar52 * dVar44 + dVar47);
          local_3bd8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar24._8_8_)) &
                               auVar30._8_8_) *
                       (*(double *)(param_1 + 0x130) * dVar23 + dVar51 * dVar44 +
                       dVar52 * dVar46 + dVar49);
          dStack_3bd0 = (double)(-(ulonglong)
                                  (9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x180))) &
                                (ulonglong)(1.0 / *(double *)(param_1 + 0x180))) *
                        (dVar23 * dVar52 + dVar22 + (dVar46 * dVar48 - dVar44 * dVar50));
          FUN_1404486c6(local_3e10,&local_3bf8);
          if (local_3a8 != 0) {
            FUN_1400020a8();
          }
          if (local_13b8 != 0) {
            FUN_1400020a8();
          }
          if (local_15c8 != 0) {
            FUN_1400020a8();
          }
        }
        dVar21 = (double)((longlong)dVar21 + 0x50);
      } while (dVar21 != local_3dd8);
    }
    iVar9 = *(int *)(param_1 + 0x248);
    if ((longlong)iVar9 != 0) {
      lVar15 = *(longlong *)(param_1 + 0x240);
      lVar12 = 0;
      do {
        local_3ab8[1] = *(undefined ***)(lVar15 + 8 + lVar12);
        local_3ab8[0] = &PTR_LAB_14a1e1968;
        puVar16 = (undefined8 *)(lVar15 + 0x10 + lVar12);
        pppuVar17 = local_3ab8 + 2;
        for (lVar14 = 9; lVar14 != 0; lVar14 = lVar14 + -1) {
          *pppuVar17 = (undefined **)*puVar16;
          puVar16 = puVar16 + 1;
          pppuVar17 = pppuVar17 + 1;
        }
        local_3e68 = local_3e10;
        FUN_14710c198(param_1,param_1 + 0x130,local_3ab8,param_2);
        lVar12 = lVar12 + 0x58;
      } while ((longlong)iVar9 * 0x58 - lVar12 != 0);
    }
    if ((longlong)*(int *)(param_1 + 0x208) != 0) {
      lVar15 = *(longlong *)(param_1 + 0x200);
      local_3e18 = (undefined **)(param_1 + 0x130);
      local_3db8 = param_2 + 0xc;
      local_3df0 = (undefined **)((longlong)*(int *)(param_1 + 0x208) * 0x30);
      ppuVar19 = (undefined **)0x0;
      local_3dd8 = 0.0;
      dStack_3dd0 = 1.0;
      do {
        local_3da8 = *(undefined8 *)(lVar15 + 8 + (longlong)ppuVar19);
        local_3db0 = &PTR_LAB_14a1e1938;
        pdVar13 = (double *)(lVar15 + 0x10 + (longlong)ppuVar19);
        local_3da0[0] = *pdVar13;
        local_3da0[1] = pdVar13[1];
        pdVar13 = (double *)(lVar15 + 0x20 + (longlong)ppuVar19);
        local_3da0[2] = *pdVar13;
        local_3da0[3] = pdVar13[1];
        pdVar13 = &DAT_14c846480;
        pdVar18 = local_3cd8;
        for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
          *pdVar18 = *pdVar13;
          pdVar13 = pdVar13 + 1;
          pdVar18 = pdVar18 + 1;
        }
        local_3d18 = (undefined **)0x0;
        ppuStack_3d10 = (undefined **)0x0;
        local_3de8 = *(undefined1 (*) [16])(param_1 + 0x170);
        local_378 = local_3de8._0_8_;
        dVar22 = local_3de8._8_8_;
        auVar24 = *(undefined1 (*) [16])(param_1 + 0x180);
        dVar21 = auVar24._0_8_;
        auVar30 = minpd(_DAT_149934d80,local_3de8);
        auVar31 = minpd(ZEXT816(0x3ff0000000000000),auVar24);
        auVar35._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
        auVar35._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
        iVar9 = movmskpd((int)&local_3d18,auVar35);
        auVar38._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
        auVar38._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
        uVar11 = movmskpd(0,auVar38);
        if ((uVar11 & 0x3fffffff) == 0 && iVar9 == 0) {
          dVar52 = *(double *)(param_1 + 0x130);
          dVar48 = *(double *)(param_1 + 0x138);
          dVar50 = *(double *)(param_1 + 0x140);
          dVar44 = *(double *)(param_1 + 0x148);
          dVar23 = *(double *)(param_1 + 0x148);
          dVar47 = *(double *)(param_1 + 0x148);
          local_378 = local_3da0[0] * local_378;
          dVar22 = local_3da0[1] * dVar22;
          local_3e08 = (undefined **)(local_3da0[2] * dVar21);
          dStack_3e00 = auVar24._8_8_ * 0.0;
          dVar46 = dVar22 * dVar52 - local_378 * dVar48;
          dVar56 = (double)local_3e08 * dVar48 - dVar22 * dVar50;
          dVar57 = local_378 * dVar50 - (double)local_3e08 * dVar52;
          dVar58 = dStack_3e00 * dVar44 - dStack_3e00 * dVar44;
          dVar56 = dVar56 + dVar56;
          dVar57 = dVar57 + dVar57;
          dVar46 = dVar46 + dVar46;
          dVar58 = dVar58 + dVar58;
          dVar51 = *(double *)(param_1 + 0x138);
          dVar49 = *(double *)(param_1 + 0x138);
          local_3d38 = dVar50 * 0.0 * -1.0 +
                       dVar51 * local_3dd8 + *(double *)(param_1 + 0x130) * 1.0 * 1.0 + dVar23 * 0.0
          ;
          dStack_3d30 = dVar50 * 0.0 * 1.0 +
                        dVar49 * dStack_3dd0 +
                        *(double *)(param_1 + 0x130) * 0.0 * -1.0 + dVar47 * 0.0;
          local_3d18 = (undefined **)
                       ((dVar46 * dVar48 - dVar50 * dVar57) + dVar23 * dVar56 + local_378 +
                       *(double *)(param_1 + 0x150));
          ppuStack_3d10 =
               (undefined **)
               ((dVar56 * dVar50 - dVar46 * dVar52) + dVar47 * dVar57 + dVar22 +
               *(double *)(param_1 + 0x158));
          dStack_3d00 = (dVar58 * dVar44 - dVar58 * dVar44) + dVar47 * dVar58 + dStack_3e00 +
                        *(double *)(param_1 + 0x168);
          local_3d28._8_8_ =
               *(double *)(param_1 + 0x140) * 0.0 * -1.0 +
               ((dVar52 * 0.0 * -1.0 + dVar47 * dStack_3dd0) - dVar49 * 0.0);
          local_3d28._0_8_ =
               *(double *)(param_1 + 0x140) * 1.0 * 1.0 +
               ((dVar52 * 0.0 * 1.0 + dVar23 * local_3dd8) - dVar51 * 0.0);
          local_3d08 = (dVar57 * dVar52 - dVar48 * dVar56) + dVar23 * dVar46 + (double)local_3e08 +
                       *(double *)(param_1 + 0x160);
        }
        else {
          dVar47 = *(double *)(param_1 + 0x130);
          dVar49 = *(double *)(param_1 + 0x138);
          dVar23 = *(double *)(param_1 + 0x140);
          dVar51 = dVar49 + dVar49;
          dVar52 = dVar23 + dVar23;
          dVar44 = dVar47 * (dVar47 + dVar47);
          local_388 = (undefined **)((1.0 - (dVar23 * dVar52 + dVar49 * dVar51)) * local_378);
          dStack_360 = (1.0 - (dVar23 * dVar52 + dVar44)) * dVar22;
          dVar46 = *(double *)(param_1 + 0x130) * dVar52;
          dVar23 = *(double *)(param_1 + 0x148);
          dVar48 = dVar52 * dVar23;
          dVar50 = (dVar47 + dVar47) * *(double *)(param_1 + 0x148);
          dVar23 = dVar51 * dVar23;
          local_368 = (dVar51 * dVar47 - dVar48) * dVar22;
          dStack_340 = (dVar52 * dVar49 - dVar50) * dVar21;
          dStack_348 = (dVar23 + dVar46) * dVar21;
          dStack_380 = (dVar51 * dVar47 + dVar48) * local_378;
          local_358 = (dVar52 * dVar49 + dVar50) * dVar22;
          local_378 = (dVar46 - dVar23) * local_378;
          dStack_370 = 0.0;
          uStack_350 = 0;
          local_338 = (1.0 - (dVar44 + dVar49 * dVar51)) * dVar21;
          uStack_330 = 0;
          local_328 = *(undefined8 *)(param_1 + 0x150);
          uStack_320 = *(undefined8 *)(param_1 + 0x158);
          local_318 = *(undefined8 *)(param_1 + 0x160);
          uStack_310 = 0x3ff0000000000000;
          local_3bf8 = (undefined **)0x3ff0000000000000;
          dStack_3bf0 = 0.0;
          local_3be8 = 0.0;
          dStack_3be0 = 0.0;
          local_3e08 = (undefined **)0x0;
          dStack_3e00 = 1.0;
          local_3bd8 = 0.0;
          dStack_3bd0 = 1.0;
          local_3bb8 = 0.0;
          dStack_3bb0 = 0.0;
          local_3bc8 = 0.0;
          dStack_3bc0 = 0.0;
          local_3ba8 = 1.0;
          dStack_3ba0 = 0.0;
          dStack_3b80 = 1.0;
          local_3b98 = local_3da0[0];
          dStack_3b90 = local_3da0[1];
          local_3b88 = local_3da0[2];
          FUN_1447fea8d(local_3ab8,&local_3bf8,&local_388);
          auVar30 = _DAT_149934d80;
          local_3dc0 = local_3ab8[2];
          dVar22 = (double)local_3ab8[2] * (double)local_3ab8[2] +
                   (double)local_3ab8[0] * (double)local_3ab8[0] +
                   (double)local_3ab8[1] * (double)local_3ab8[1];
          local_3dc8 = local_3a98;
          dVar23 = (double)local_3a88 * (double)local_3a88 +
                   (double)local_3a98 * (double)local_3a98 +
                   (double)ppuStack_3a90 * (double)ppuStack_3a90;
          dVar47 = local_3a68 * local_3a68 +
                   (double)ppuStack_3a78 * (double)ppuStack_3a78 + local_3a70 * local_3a70;
          uVar20 = -(ulonglong)(0.0 <= dVar22 + -9.99999993922529e-09);
          dVar22 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar22)) & uVar20)
          ;
          uVar20 = -(ulonglong)(0.0 <= dVar23 + -9.99999993922529e-09);
          dVar23 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar23)) & uVar20)
          ;
          uVar20 = -(ulonglong)(0.0 <= dVar47 + -9.99999993922529e-09);
          dVar47 = (double)(~uVar20 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar47)) & uVar20)
          ;
          auVar28._8_8_ = -(ulonglong)(0.0 <= (double)local_3de8._8_8_);
          auVar28._0_8_ = -(ulonglong)(0.0 <= (double)local_3de8._0_8_);
          auVar31 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar28);
          uVar20 = -(ulonglong)(0.0 <= dVar21 * 1.0);
          dVar49 = (double)(~uVar20 & 0xbff0000000000000 | uVar20 & 0x3ff0000000000000);
          dVar51 = auVar31._0_8_;
          local_3ab8[0] = (undefined **)((double)local_3ab8[0] * dVar22 * dVar51);
          local_3ab8[1] = (undefined **)((double)local_3ab8[1] * dVar22 * dVar51);
          local_3ab8[2] = (undefined **)(dVar22 * (double)local_3ab8[2] * dVar51);
          dVar22 = auVar31._8_8_;
          local_3a88 = (undefined **)(dVar23 * (double)local_3a88 * dVar22);
          ppuStack_3a90 = (undefined **)((double)ppuStack_3a90 * dVar23 * dVar22);
          local_3a98 = (undefined **)(dVar22 * (double)local_3a98 * dVar23);
          local_3a68 = dVar47 * local_3a68 * dVar49;
          local_3a70 = local_3a70 * dVar47 * dVar49;
          ppuStack_3a78 = (undefined **)(dVar49 * (double)ppuStack_3a78 * dVar47);
          FUN_14481fd10(&local_3c48,local_3ab8);
          dVar22 = local_3c38 * local_3c38 + local_3c48 * local_3c48;
          dVar23 = dStack_3c30 * dStack_3c30 + dStack_3c40 * dStack_3c40;
          auVar39._0_8_ = dVar22 + dVar23;
          auVar39._8_8_ = dVar22 + dVar23;
          auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
          auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
          auVar31 = sqrtpd(auVar39,auVar39);
          auVar30 = divpd(auVar30,auVar31);
          auVar43._0_8_ = auVar30._0_8_ * local_3c38;
          auVar43._8_8_ = auVar30._8_8_ * dStack_3c30;
          auVar6._8_8_ = dStack_3e00;
          auVar6._0_8_ = local_3e08;
          local_3d28 = blendvpd(auVar6,auVar43,auVar29);
          local_3d38 = (double)((ulonglong)(local_3c48 * auVar30._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_));
          dStack_3d30 = (double)((ulonglong)(dStack_3c40 * auVar30._8_8_) &
                                -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_));
          dStack_3d00 = 0.0;
          local_3d18 = ppuStack_3a58;
          ppuStack_3d10 = ppuStack_3a50;
          local_3d08 = local_3a48;
        }
        dStack_3ce0 = auVar24._8_8_ * 0.0;
        local_3ce8 = dVar21 * 1.0;
        local_3cf8 = local_3de8;
        local_3ab8[2] = (undefined **)(param_2[0xb] - param_2[5]);
        local_3ab8[1] = (undefined **)(param_2[10] - param_2[4]);
        local_3ab8[0] = (undefined **)(param_2[9] - param_2[3]);
        ppuStack_3a90 = (undefined **)(param_2[8] - param_2[5]);
        local_3a98 = (undefined **)(param_2[7] - param_2[4]);
        local_3aa0 = param_2[6] - param_2[3];
        dVar21 = param_2[0xe] * *(double *)(param_1 + 0x100) +
                 param_2[0xc] * *(double *)(param_1 + 0xf0) +
                 param_2[0xd] * *(double *)(param_1 + 0xf8);
        if (-param_2[0x12] <= dVar21) {
          dVar21 = -param_2[0x12];
        }
        local_3a88 = (undefined **)((ulonglong)dVar21 & 0x7fffffffffffffff);
        local_3a80 = 0.0;
        ppuStack_3a78 = (undefined **)0x0;
        local_378 = local_3db8[2];
        local_388 = (undefined **)*local_3db8;
        dStack_380 = local_3db8[1];
        local_3e20 = &local_388;
        local_3e28 = local_3e10;
        local_3e38 = &LAB_14083879e;
        local_3e40 = &local_3db0;
        local_3e48 = &local_3d38;
        local_3e50 = local_3ab8;
        local_3e58 = (undefined ***)FUN_1471053b7;
        local_3e30 = (undefined ***)0x0;
        local_3e68 = local_3cd8;
        local_3e60 = param_2;
        FUN_14044bf58(0,param_1,&DAT_14c846480,local_3e18);
        ppuVar19 = ppuVar19 + 6;
      } while (local_3df0 != ppuVar19);
    }
    iVar9 = *(int *)(param_1 + 0x238);
    if ((longlong)iVar9 != 0) {
      lVar15 = *(longlong *)(param_1 + 0x230);
      lVar12 = 0;
      do {
        local_3ab8[1] = *(undefined ***)(lVar15 + 8 + lVar12);
        local_3ab8[0] = &PTR_LAB_14a1e27b0;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = (longlong)*(int *)(lVar15 + 0x18 + lVar12);
        lVar14 = SUB168(auVar2 * ZEXT816(0x18),0);
        lVar14 = lVar14 + (ulonglong)(lVar14 == 0);
        if (SUB168(auVar2 * ZEXT816(0x18),8) != 0) {
          lVar14 = -1;
        }
        local_3ab8[2] = (undefined **)FUN_14001cc68(lVar14,0x10);
        iVar1 = *(int *)(lVar15 + 0x18 + lVar12);
        local_3aa0 = (double)CONCAT44(local_3aa0._4_4_,iVar1);
        local_3a88 = *(undefined ***)(lVar15 + 0x30 + lVar12);
        puVar16 = (undefined8 *)(lVar15 + 0x20 + lVar12);
        local_3a98 = (undefined **)*puVar16;
        ppuStack_3a90 = (undefined **)puVar16[1];
        puVar16 = (undefined8 *)(lVar15 + 0x40 + lVar12);
        ppuStack_3a78 = (undefined **)*puVar16;
        local_3a70 = (double)puVar16[1];
        pdVar13 = (double *)(lVar15 + 0x50 + lVar12);
        local_3a68 = *pdVar13;
        ppuStack_3a60 = (undefined **)pdVar13[1];
        memcpy(local_3ab8[2],*(void **)(lVar15 + 0x10 + lVar12),(longlong)iVar1 * 0x18);
        local_3e68 = local_3e10;
        FUN_1471076b3(param_1,param_2,param_1 + 0x130,local_3ab8);
        local_3ab8[0] = &PTR_LAB_14a1e27b0;
        if (local_3ab8[2] != (undefined **)0x0) {
          FUN_1400020a8();
        }
        lVar12 = lVar12 + 0x60;
      } while ((longlong)iVar9 * 0x60 != lVar12);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_3e88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b6faf2 FUN_142b6faf2 body=264 status=ok
// SIG undefined FUN_142b6faf2(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_142b6faf2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int *apiStack_90 [3];
  undefined1 local_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  uVar1 = *param_1;
  apiStack_90[2] = &local_58;
  apiStack_90[1] = &local_54;
  local_78 = 0;
  local_60 = param_2;
  FUN_142b6b300(param_2,uVar1,&local_4c,&local_50);
  uVar3 = local_60;
  iVar4 = ((local_58 - local_54) + 1) * ((local_50 - local_4c) + 1);
  puVar7 = auStack_68;
  if (iVar4 != 0) {
    uStack_70 = 0x142b6fb8a;
    lVar2 = -((longlong)(iVar4 * 2) * 0x98 + 0x10);
    puVar8 = auStack_68 + lVar2;
    *(undefined8 *)((longlong)apiStack_90 + lVar2) = 0x142b6fba3;
    uVar5 = FUN_142b6b4da(uVar3,uVar1,auStack_68 + lVar2);
    puVar7 = auStack_68 + lVar2;
    if (0 < (int)uVar5) {
      uVar6 = (ulonglong)uVar5;
      do {
        uVar1 = param_1[1];
        *(undefined8 *)((longlong)apiStack_90 + lVar2) = 0x142b6fbc0;
        FUN_142b6cd3d(uVar1,puVar8,param_3);
        puVar8 = puVar8 + 0x98;
        uVar6 = uVar6 - 1;
        puVar7 = auStack_68 + lVar2;
      } while (uVar6 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)&local_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar7 + -0x28) = &UNK_142b6fbfa;
  FUN_144d8e3a0();
}



// FUNCTION 142b6fc00 FUN_142b6fc00 body=170 status=ok
// SIG undefined FUN_142b6fc00(void)

void FUN_142b6fc00(undefined8 *param_1,int *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = (longlong)*param_2;
  if (*(char *)(*(longlong *)*param_1 + lVar5) == '\0') {
    puVar1 = (undefined8 *)param_1[1];
    local_38 = *(undefined4 *)(*(longlong *)(param_1[2] + 0x28) + 8 + lVar5 * 0x50);
    local_34 = *(undefined4 *)(*(longlong *)(param_1[2] + 0x28) + 0xc + lVar5 * 0x50);
    pcVar2 = (code *)*puVar1;
    plVar4 = puVar1 + 4;
    if ((longlong *)puVar1[2] != (longlong *)0x0) {
      plVar4 = (longlong *)puVar1[2];
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,&local_38,&local_34);
    *(undefined1 *)(*(longlong *)*param_1 + lVar5) = 1;
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b6fcd2 FUN_142b6fcd2 body=12 status=ok
// SIG undefined FUN_142b6fcd2(void)

void FUN_142b6fcd2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142b6fcdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142b6fcde FUN_142b6fcde body=29 status=ok
// SIG undefined FUN_142b6fcde(void)

undefined8 FUN_142b6fcde(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b6fcfc FUN_142b6fcfc body=1287 status=ok
// SIG undefined FUN_142b6fcfc(void)

void FUN_142b6fcfc(longlong *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  bool bVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *param_3;
  iVar2 = *param_2;
  lVar4 = *(longlong *)(*param_1 + 0x28);
  lVar12 = (longlong)iVar2;
  lVar13 = (longlong)iVar1;
  iVar3 = *(int *)(lVar4 + 0xc + lVar13 * 0x50);
  if (*(int *)(lVar4 + 0xc + lVar12 * 0x50) == -1) {
    if (iVar3 == -1) {
      lVar12 = *(longlong *)(lVar4 + lVar12 * 0x50);
      lVar4 = *(longlong *)(lVar4 + lVar13 * 0x50);
      if ((*(byte *)(lVar12 + 0x20) & 1) == 0) {
        bVar10 = true;
        if (((((ABS(*(double *)(lVar12 + 0x60)) <= 9.99999993922529e-09) &&
              (ABS(*(double *)(lVar12 + 0x68)) <= 9.99999993922529e-09)) &&
             (ABS(*(double *)(lVar12 + 0x70)) <= 9.99999993922529e-09)) &&
            ((ABS(*(double *)(lVar12 + 0x48)) <= 9.99999993922529e-09 &&
             (ABS(*(double *)(lVar12 + 0x50)) <= 9.99999993922529e-09)))) &&
           (ABS(*(double *)(lVar12 + 0x58)) <= 9.99999993922529e-09)) goto LAB_142b70150;
      }
      else {
LAB_142b70150:
        if ((*(byte *)(lVar4 + 0x20) & 1) == 0) {
          bVar10 = true;
          if (((ABS(*(double *)(lVar4 + 0x60)) <= 9.99999993922529e-09) &&
              (ABS(*(double *)(lVar4 + 0x68)) <= 9.99999993922529e-09)) &&
             ((ABS(*(double *)(lVar4 + 0x70)) <= 9.99999993922529e-09 &&
              ((ABS(*(double *)(lVar4 + 0x48)) <= 9.99999993922529e-09 &&
               (ABS(*(double *)(lVar4 + 0x50)) <= 9.99999993922529e-09)))))) {
            bVar10 = 9.99999993922529e-09 < ABS(*(double *)(lVar4 + 0x58));
          }
        }
        else {
          bVar10 = false;
        }
      }
      bVar11 = 1;
      if (*(char *)(lVar12 + 0x270) == '\x01') {
        bVar11 = *(byte *)(lVar4 + 0x270) ^ 1;
      }
      cVar6 = FUN_14711fcb4(*param_1,iVar2,iVar1);
      if ((cVar6 != '\0') && ((bVar11 & bVar10) != 0)) {
        puVar8 = (undefined8 *)param_1[1];
        pcVar5 = (code *)*puVar8;
        plVar9 = puVar8 + 4;
        if ((longlong *)puVar8[2] != (longlong *)0x0) {
          plVar9 = (longlong *)puVar8[2];
        }
        local_50 = lVar12;
        local_48 = lVar4;
        uVar7 = (**(code **)(*plVar9 + 8))();
        uVar7 = (*pcVar5)(uVar7,&local_50,&local_48);
        FUN_1404453ed(lVar12,lVar4,uVar7);
      }
      goto LAB_142b6fff9;
    }
    puVar8 = (undefined8 *)param_1[2];
    pcVar5 = (code *)*puVar8;
    plVar9 = puVar8 + 4;
    if ((longlong *)puVar8[2] != (longlong *)0x0) {
      plVar9 = (longlong *)puVar8[2];
    }
    local_48._0_4_ = iVar1;
    uVar7 = (**(code **)(*plVar9 + 8))();
    (*pcVar5)(uVar7,&local_48);
    puVar8 = (undefined8 *)param_1[3];
    local_48._0_4_ = *(undefined4 *)(*(longlong *)(*param_1 + 0x28) + 8 + lVar13 * 0x50);
    pcVar5 = (code *)*puVar8;
    plVar9 = puVar8 + 4;
    if ((longlong *)puVar8[2] != (longlong *)0x0) {
      plVar9 = (longlong *)puVar8[2];
    }
    local_50._0_4_ = iVar2;
    uVar7 = (**(code **)(*plVar9 + 8))();
    (*pcVar5)(uVar7,&local_50,&local_48);
    puVar8 = (undefined8 *)param_1[3];
    local_48 = CONCAT44(local_48._4_4_,
                        *(undefined4 *)(*(longlong *)(*param_1 + 0x28) + 0xc + lVar13 * 0x50));
    local_50 = CONCAT44(local_50._4_4_,iVar2);
  }
  else {
    puVar8 = (undefined8 *)param_1[2];
    local_48._0_4_ = iVar2;
    if (iVar3 == -1) {
      pcVar5 = (code *)*puVar8;
      plVar9 = puVar8 + 4;
      if ((longlong *)puVar8[2] != (longlong *)0x0) {
        plVar9 = (longlong *)puVar8[2];
      }
      uVar7 = (**(code **)(*plVar9 + 8))();
      (*pcVar5)(uVar7,&local_48);
      puVar8 = (undefined8 *)param_1[3];
      local_50._0_4_ = *(undefined4 *)(*(longlong *)(*param_1 + 0x28) + 8 + lVar12 * 0x50);
      pcVar5 = (code *)*puVar8;
      plVar9 = puVar8 + 4;
      if ((longlong *)puVar8[2] != (longlong *)0x0) {
        plVar9 = (longlong *)puVar8[2];
      }
      local_48._0_4_ = iVar1;
      uVar7 = (**(code **)(*plVar9 + 8))();
      (*pcVar5)(uVar7,&local_50,&local_48);
      puVar8 = (undefined8 *)param_1[3];
      local_48 = CONCAT44(local_48._4_4_,iVar1);
      local_50 = CONCAT44(local_50._4_4_,
                          *(undefined4 *)(*(longlong *)(*param_1 + 0x28) + 0xc + lVar12 * 0x50));
    }
    else {
      pcVar5 = (code *)*puVar8;
      plVar9 = puVar8 + 4;
      if ((longlong *)puVar8[2] != (longlong *)0x0) {
        plVar9 = (longlong *)puVar8[2];
      }
      uVar7 = (**(code **)(*plVar9 + 8))();
      (*pcVar5)(uVar7,&local_48);
      puVar8 = (undefined8 *)param_1[2];
      pcVar5 = (code *)*puVar8;
      plVar9 = puVar8 + 4;
      if ((longlong *)puVar8[2] != (longlong *)0x0) {
        plVar9 = (longlong *)puVar8[2];
      }
      local_48._0_4_ = iVar1;
      uVar7 = (**(code **)(*plVar9 + 8))();
      (*pcVar5)(uVar7,&local_48);
      puVar8 = (undefined8 *)param_1[3];
      lVar13 = lVar13 * 0x50;
      local_48._0_4_ = *(undefined4 *)(*(longlong *)(*param_1 + 0x28) + 8 + lVar13);
      lVar12 = lVar12 * 0x50;
      local_50._0_4_ = *(undefined4 *)(*(longlong *)(*param_1 + 0x28) + 8 + lVar12);
      pcVar5 = (code *)*puVar8;
      plVar9 = puVar8 + 4;
      if ((longlong *)puVar8[2] != (longlong *)0x0) {
        plVar9 = (longlong *)puVar8[2];
      }
      uVar7 = (**(code **)(*plVar9 + 8))();
      (*pcVar5)(uVar7,&local_50,&local_48);
      puVar8 = (undefined8 *)param_1[3];
      local_48._0_4_ = *(undefined4 *)(*(longlong *)(*param_1 + 0x28) + 0xc + lVar13);
      local_50._0_4_ = *(undefined4 *)(*(longlong *)(*param_1 + 0x28) + 8 + lVar12);
      pcVar5 = (code *)*puVar8;
      plVar9 = puVar8 + 4;
      if ((longlong *)puVar8[2] != (longlong *)0x0) {
        plVar9 = (longlong *)puVar8[2];
      }
      uVar7 = (**(code **)(*plVar9 + 8))();
      (*pcVar5)(uVar7,&local_50,&local_48);
      puVar8 = (undefined8 *)param_1[3];
      local_48._0_4_ = *(undefined4 *)(*(longlong *)(*param_1 + 0x28) + 8 + lVar13);
      local_50._0_4_ = *(undefined4 *)(*(longlong *)(*param_1 + 0x28) + 0xc + lVar12);
      pcVar5 = (code *)*puVar8;
      plVar9 = puVar8 + 4;
      if ((longlong *)puVar8[2] != (longlong *)0x0) {
        plVar9 = (longlong *)puVar8[2];
      }
      uVar7 = (**(code **)(*plVar9 + 8))();
      (*pcVar5)(uVar7,&local_50,&local_48);
      puVar8 = (undefined8 *)param_1[3];
      local_48 = CONCAT44(local_48._4_4_,
                          *(undefined4 *)(*(longlong *)(*param_1 + 0x28) + 0xc + lVar13));
      local_50 = CONCAT44(local_50._4_4_,
                          *(undefined4 *)(*(longlong *)(*param_1 + 0x28) + 0xc + lVar12));
    }
  }
  pcVar5 = (code *)*puVar8;
  plVar9 = puVar8 + 4;
  if ((longlong *)puVar8[2] != (longlong *)0x0) {
    plVar9 = (longlong *)puVar8[2];
  }
  uVar7 = (**(code **)(*plVar9 + 8))();
  (*pcVar5)(uVar7,&local_50,&local_48);
LAB_142b6fff9:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b70204 FUN_142b70204 body=70 status=ok
// SIG undefined FUN_142b70204(void)

undefined8 * FUN_142b70204(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14a1e3930;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 142b70250 FUN_142b70250 body=29 status=ok
// SIG undefined FUN_142b70250(void)

void FUN_142b70250(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142b7026e FUN_142b7026e body=29 status=ok
// SIG undefined FUN_142b7026e(void)

undefined8 FUN_142b7026e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b702c8 FUN_142b702c8 body=412 status=ok
// SIG undefined FUN_142b702c8(void)

void FUN_142b702c8(longlong param_1,int *param_2)

{
  longlong lVar1;
  double dVar2;
  double *pdVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar3 = *(double **)(param_1 + 8);
  lVar8 = *(longlong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(lVar8 + 0x28);
  lVar9 = (longlong)*param_2 * 200;
  dVar2 = *(double *)(lVar4 + 0x90 + lVar9);
  if ((((dVar2 < pdVar3[3] || dVar2 == pdVar3[3]) &&
       (lVar1 = lVar4 + lVar9,
       *pdVar3 < *(double *)(lVar1 + 0xa8) || *pdVar3 == *(double *)(lVar1 + 0xa8))) &&
      (*(double *)(lVar1 + 0x98) < pdVar3[4] || *(double *)(lVar1 + 0x98) == pdVar3[4])) &&
     (((pdVar3[1] < *(double *)(lVar1 + 0xb0) || pdVar3[1] == *(double *)(lVar1 + 0xb0) &&
       (*(double *)(lVar1 + 0xa0) < pdVar3[5] || *(double *)(lVar1 + 0xa0) == pdVar3[5])) &&
      (pdVar3[2] < *(double *)(lVar1 + 0xb8) || pdVar3[2] == *(double *)(lVar1 + 0xb8))))) {
    if (*(int *)(lVar4 + 0x84 + lVar9) != -1) {
      local_2c = *(undefined4 *)(lVar4 + 0x80 + lVar9);
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x38);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,&local_2c);
        local_2c = *(undefined4 *)(*(longlong *)(lVar8 + 0x28) + 0x84 + lVar9);
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x38);
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,&local_2c);
          goto LAB_142b703b8;
        }
      }
                    /* WARNING: Subroutine does not return */
      std::_Xbad_function_call();
    }
    plVar5 = *(longlong **)(param_1 + 0x18);
    FUN_1471205ac(plVar5[1],lVar9 + *(longlong *)(*plVar5 + 0x28));
    uVar10 = (ulonglong)*(int *)(plVar5[1] + 0x68);
    if (0 < (longlong)uVar10) {
      lVar8 = uVar10 * 0xb8;
      do {
        lVar8 = lVar8 + -0xb8;
        iVar7 = FUN_142b6b4da(*(longlong *)(plVar5[1] + 0x60) + lVar8,plVar5[2],0);
        if (iVar7 == 0) {
          FUN_14712085c((longlong *)(plVar5[1] + 0x60),(int)uVar10 + -1);
        }
        else {
          FUN_14711cd74(*(longlong *)(plVar5[1] + 0x60) + lVar8,plVar5[2]);
        }
        bVar6 = 1 < uVar10;
        uVar10 = uVar10 - 1;
      } while (bVar6);
    }
  }
LAB_142b703b8:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b7046e FUN_142b7046e body=9 status=ok
// SIG undefined FUN_142b7046e(void)

void FUN_142b7046e(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    return;
  }
  if (param_1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
    return;
  }
  return;
}



// FUNCTION 142b7047e FUN_142b7047e body=70 status=ok
// SIG undefined FUN_142b7047e(void)

ulonglong FUN_142b7047e(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined7 uVar5;
  
  plVar1 = (longlong *)*param_2;
  cVar2 = (**(code **)(*plVar1 + 0x568))(plVar1);
  uVar5 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar4 = CONCAT71(uVar5,1);
  if (cVar2 != '\0') {
    iVar3 = (**(code **)(*plVar1 + 0x570))(plVar1);
    if (iVar3 != 1) {
      iVar3 = (**(code **)(*plVar1 + 0x570))(plVar1);
      uVar4 = CONCAT71(uVar5,iVar3 == 0);
    }
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 142b704e6 FUN_142b704e6 body=29 status=ok
// SIG undefined FUN_142b704e6(void)

undefined8 FUN_142b704e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b70514 FUN_142b70514 body=214 status=ok
// SIG undefined FUN_142b70514(void)

longlong FUN_142b70514(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *param_1;
  if (*(int *)((undefined8 *)param_1[1] + 1) == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = *(undefined2 **)param_1[1];
  }
  lVar2 = *(longlong *)(lVar3 + 0x40);
  FUN_1446f470e(&local_30,puVar4,1);
  lVar3 = FUN_14712173d(*(undefined8 *)(lVar3 + 0x40),local_30);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  iVar1 = *(int *)(lVar2 + 0x30);
  *(uint *)(lVar2 + 0x30) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x34) < iVar1 + 1U) {
    FUN_1471217f6((longlong *)(lVar2 + 0x28),iVar1);
  }
  lVar2 = *(longlong *)(lVar2 + 0x28);
  *(longlong *)(lVar2 + (longlong)iVar1 * 8) = lVar3;
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
    lVar3 = *(longlong *)(lVar2 + (longlong)iVar1 * 8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b70616 FUN_142b70616 body=29 status=ok
// SIG undefined FUN_142b70616(void)

undefined8 FUN_142b70616(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b70634 FUN_142b70634 body=1158 status=ok
// SIG undefined FUN_142b70634(void)

void FUN_142b70634(undefined8 *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  double *pdVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  code **local_100;
  undefined1 *local_f8;
  code *local_f0;
  undefined8 local_e0;
  code *local_d8;
  int local_d0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  undefined8 uStack_80;
  undefined1 local_6a;
  char local_69;
  double local_68;
  double dStack_60;
  double local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_e0 = param_1[3];
  uVar12 = ((uint *)*param_1)[1];
  if ((((uVar12 != 0) && (uVar1 = *(uint *)*param_1, -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar10 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar10 != (longlong *)0x0 && (*(uint *)(plVar10 + 2) == uVar12)) &&
      (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && (lVar6 = *plVar10, lVar6 != 0)))))) {
    if (DAT_14cad2858 == 0) {
      local_100 = &local_d8;
      local_d8 = FUN_144a7958c;
      local_f0 = FUN_14081d0ea;
      local_f8 = &LAB_146395584;
      local_108 = &LAB_147a0ba80;
      local_110 = &LAB_14575ccce;
      local_118 = L"Engine";
      local_120 = 0x40000000000;
      local_128 = 0x10000004;
      local_130 = 0x10;
      local_138 = CONCAT44(local_138._4_4_,0x1180);
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) {
      iVar2 = *(int *)(lVar6 + 0xd78);
      if ((longlong)iVar2 != 0) {
        lVar6 = *(longlong *)(lVar6 + 0xd70);
        lVar11 = 0;
        do {
          lVar4 = *(longlong *)(lVar6 + lVar11);
          if (lVar4 != 0) {
            lVar8 = FUN_140aa2aee(lVar4);
            if (lVar8 != 0) {
              local_d8 = *(code **)*param_1;
              local_d0 = *(int *)(lVar4 + 0xc);
              uVar12 = (uint)((ulonglong)local_d8 >> 0x20) ^ (uint)local_d8;
              plVar10 = (longlong *)
                        FUN_14048502e(param_2,(uVar12 >> 2) + uVar12 * 0x40 + local_d0 + 0x9e3779b9
                                              ^ uVar12,&local_d8);
              if (*plVar10 == 0) {
                pdVar9 = (double *)param_1[2];
                local_50 = *(char *)(pdVar9 + 3);
                if (local_50 == '\x01') {
                  local_58 = pdVar9[2];
                  local_68 = *pdVar9;
                  dStack_60 = pdVar9[1];
                }
                local_69 = ((undefined1 *)param_1[1])[1];
                if (local_69 == '\x01') {
                  local_6a = *(undefined1 *)param_1[1];
                }
                FUN_1447f067c(lVar4,&local_d8,1,0);
                uVar7 = FUN_140aa2aee(lVar4);
                local_138 = local_e0;
                lVar8 = FUN_14167f218(uVar7,&local_d8,&local_6a);
                *plVar10 = lVar8;
                lVar8 = *plVar10;
                *(undefined4 *)(lVar8 + 0x10) = 1;
                *(longlong *)(lVar8 + 0x18) = lVar4;
              }
            }
          }
          lVar11 = lVar11 + 8;
        } while ((longlong)iVar2 * 8 != lVar11);
      }
      goto LAB_142b709e6;
    }
  }
  puVar3 = (uint *)*param_1;
  if (((((puVar3[1] != 0) && (uVar12 = *puVar3, -1 < (int)uVar12)) && ((int)uVar12 < DAT_14c9647dc))
      && ((plVar10 = (longlong *)
                     ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
          plVar10 != (longlong *)0x0 && (*(uint *)(plVar10 + 2) == puVar3[1])))) &&
     (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 &&
      (plVar10 = (longlong *)*plVar10, plVar10 != (longlong *)0x0)))) {
    local_d8 = *(code **)puVar3;
    local_d0 = *(int *)param_1[4];
    uVar12 = (uint)((ulonglong)local_d8 >> 0x20) ^ (uint)local_d8;
    plVar5 = (longlong *)
             FUN_14048502e(param_2,(uVar12 >> 2) + uVar12 * 0x40 + local_d0 + 0x9e3779b9 ^ uVar12);
    if (*plVar5 == 0) {
      lVar6 = (**(code **)(*plVar10 + 0x7a0))(plVar10);
      if (lVar6 != 0) {
        FUN_142b70b4b(&local_d8,plVar10,*(undefined4 *)param_1[4],0);
        pdVar9 = (double *)&DAT_14c846510;
        if (*(char *)((double *)param_1[2] + 3) != '\0') {
          pdVar9 = (double *)param_1[2];
        }
        local_58 = pdVar9[2] * local_88;
        dStack_60 = (double)CONCAT44(uStack_8c,uStack_90) * pdVar9[1];
        local_68 = (double)CONCAT44(uStack_94,local_98) * *pdVar9;
        local_98 = (undefined4)DAT_14c846510;
        uStack_94 = DAT_14c846510._4_4_;
        uStack_90 = (undefined4)DAT_14c846518;
        uStack_8c = DAT_14c846518._4_4_;
        local_88 = DAT_14c846520;
        uStack_80 = 0;
        local_50 = '\x01';
        local_69 = ((undefined1 *)param_1[1])[1];
        if (local_69 == '\x01') {
          local_6a = *(undefined1 *)param_1[1];
        }
        uVar7 = (**(code **)(*plVar10 + 0x7a0))(plVar10);
        local_138 = local_e0;
        lVar6 = FUN_14167f218(uVar7,&local_d8,&local_6a,&local_68);
        *plVar5 = lVar6;
        uVar7 = *(undefined8 *)*param_1;
        *(undefined4 *)(lVar6 + 0x10) = 3;
        *(undefined8 *)(lVar6 + 0x18) = uVar7;
      }
    }
  }
LAB_142b709e6:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b70abc FUN_142b70abc body=78 status=ok
// SIG undefined FUN_142b70abc(void)

undefined8 * FUN_142b70abc(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14a1e3a90;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 142b70b0a FUN_142b70b0a body=5 status=ok
// SIG undefined FUN_142b70b0a(void)

longlong FUN_142b70b0a(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 142b70b10 FUN_142b70b10 body=29 status=ok
// SIG undefined FUN_142b70b10(void)

void FUN_142b70b10(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142b70b2e FUN_142b70b2e body=29 status=ok
// SIG undefined FUN_142b70b2e(void)

undefined8 FUN_142b70b2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b70b4b FUN_142b70b4b body=355 status=ok
// SIG undefined FUN_142b70b4b(void)

undefined8 * FUN_142b70b4b(undefined8 *param_1,longlong param_2,int param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar6 = (undefined8 *)(param_2 + 0x240);
  puVar7 = param_1;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  if (param_3 != -1) {
    if (DAT_14cac1d70 == 0) {
      local_60 = &local_40;
      local_40 = FUN_144b223ce;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_1432411d6;
      local_68 = &LAB_147878f54;
      local_70 = &LAB_1417ad3ba;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0xb10;
      FUN_14081cfa3(L"/Script/Engine",L"InstancedStaticMeshComponent",&DAT_14cac1d70,FUN_14637c2da);
    }
    if ((*(int *)(DAT_14cac1d70 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac1d70 + 0x38) * 8) == DAT_14cac1d70 + 0x30)) {
      FUN_1410499a6(param_2,param_3,param_1,1);
    }
  }
  uVar4 = DAT_14c846520;
  uVar3 = DAT_14c846518._4_4_;
  uVar2 = (undefined4)DAT_14c846518;
  uVar1 = DAT_14c846510._4_4_;
  if (param_4 != '\0') {
    *(undefined4 *)(param_1 + 8) = (undefined4)DAT_14c846510;
    *(undefined4 *)((longlong)param_1 + 0x44) = uVar1;
    *(undefined4 *)(param_1 + 9) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x4c) = uVar3;
    param_1[10] = uVar4;
    param_1[0xb] = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b70ce2 FUN_142b70ce2 body=29 status=ok
// SIG undefined FUN_142b70ce2(void)

undefined8 FUN_142b70ce2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b70d2c FUN_142b70d2c body=12 status=ok
// SIG undefined FUN_142b70d2c(void)

void FUN_142b70d2c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142b70d35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142b70d38 FUN_142b70d38 body=29 status=ok
// SIG undefined FUN_142b70d38(void)

undefined8 FUN_142b70d38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b70d56 FUN_142b70d56 body=1091 status=ok
// SIG undefined FUN_142b70d56(void)

void FUN_142b70d56(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint *puVar5;
  undefined **ppuVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined ***pppuVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStack_1a8 [40];
  longlong local_180;
  code **local_178;
  longlong *local_170;
  double **local_168;
  double *local_160;
  longlong local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined1 local_120;
  longlong local_118;
  uint local_10c;
  code *local_108 [2];
  undefined ***local_f8;
  undefined **local_e8;
  longlong local_e0;
  undefined **local_c0;
  double *local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined ***local_a0;
  undefined ***local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar3 = *param_1;
  iVar2 = *(int *)(lVar3 + 0xe0);
  if (iVar2 == 0) {
    uVar12 = 1;
    iVar13 = 0;
    uVar16 = 0;
    iVar7 = 0;
  }
  else {
    puVar5 = *(uint **)(lVar3 + 0xd8);
    if (*(uint **)(lVar3 + 0xd8) == (uint *)0x0) {
      puVar5 = (uint *)(lVar3 + 200);
    }
    uVar17 = *puVar5;
    if (uVar17 == 0) {
      iVar7 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar7 = iVar2 + -1;
      }
      uVar16 = 0;
      uVar12 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar12 = uVar16;
      }
      iVar13 = 0;
      do {
        if (uVar12 == uVar16) goto LAB_142b70e2f;
        iVar13 = iVar13 + 0x20;
        uVar17 = puVar5[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar17 == 0);
    }
    else {
      iVar13 = 0;
      uVar16 = 0;
    }
    uVar12 = (ulonglong)(-uVar17 & uVar17);
    uVar1 = uVar12 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar7) {
      iVar7 = iVar2;
    }
  }
  if (iVar7 != iVar2) {
    uVar17 = 0xffffffff;
    iVar4 = iVar2;
    do {
      lVar14 = *(longlong *)(*(longlong *)(lVar3 + 0xb8) + (longlong)iVar7 * 8);
      if (((*(char *)(lVar14 + 0x270) == '\0') && ((*(byte *)(lVar14 + 0x20) & 1) == 0)) &&
         (((9.99999993922529e-09 < ABS(*(double *)(lVar14 + 0x60)) ||
           (((9.99999993922529e-09 < ABS(*(double *)(lVar14 + 0x68)) ||
             (9.99999993922529e-09 < ABS(*(double *)(lVar14 + 0x70)))) ||
            (9.99999993922529e-09 < ABS(*(double *)(lVar14 + 0x48)))))) ||
          ((9.99999993922529e-09 < ABS(*(double *)(lVar14 + 0x50)) ||
           (9.99999993922529e-09 < ABS(*(double *)(lVar14 + 0x58)))))))) {
        local_f8 = (undefined ***)0x0;
        local_e8 = &PTR_LAB_14a1e3b10;
        local_108[0] = FUN_142b711e2;
        local_120 = 0;
        local_138 = *(double *)(lVar14 + 600);
        local_140 = *(double *)(lVar14 + 0x160) - local_138;
        local_148 = *(double *)(lVar14 + 0x158) - local_138;
        local_150 = *(double *)(lVar14 + 0x150) - local_138;
        local_128 = *(double *)(lVar14 + 0x160) + local_138;
        local_130 = *(double *)(lVar14 + 0x158) + local_138;
        local_138 = *(double *)(lVar14 + 0x150) + local_138;
        local_160 = &local_150;
        local_178 = local_108;
        local_170 = &local_118;
        local_168 = &local_160;
        local_c0 = &PTR_LAB_14a1e38e0;
        local_a8 = &local_180;
        local_a0 = &local_c0;
        ppuVar6 = &PTR_LAB_14a1e38e0;
        local_180 = param_2;
        local_158 = lVar14;
        local_118 = lVar14;
        local_e0 = lVar3;
        local_b8 = local_160;
        local_b0 = param_2;
        local_88 = local_a0;
        if (*(uint *)(param_2 + 0x10) == 0xffffffff) {
LAB_142b71005:
          (*(code *)ppuVar6[4])(local_88,local_88 != &local_c0);
        }
        else {
          local_10c = *(uint *)(param_2 + 0x10);
          FUN_1406024d4(local_a0,&local_10c);
          if (local_88 != (undefined ***)0x0) {
            ppuVar6 = *local_88;
            goto LAB_142b71005;
          }
        }
        if (local_108[0] != (code *)0x0) {
          pppuVar11 = local_f8;
          if (local_f8 == (undefined ***)0x0) {
            pppuVar11 = &local_e8;
          }
          (*(code *)(*pppuVar11)[2])();
        }
        iVar4 = *(int *)(lVar3 + 0xe0);
      }
      uVar17 = uVar17 & ~(uint)uVar12;
      puVar5 = *(uint **)(lVar3 + 0xd8);
      if (*(uint **)(lVar3 + 0xd8) == (uint *)0x0) {
        puVar5 = (uint *)(lVar3 + 200);
      }
      iVar7 = (int)uVar16;
      lVar14 = (longlong)iVar7;
      uVar8 = puVar5[lVar14] & uVar17;
      if (uVar8 == 0) {
        iVar9 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar9 = iVar4 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar7) {
          iVar10 = iVar7;
        }
        if (iVar7 < iVar9) {
          lVar15 = 0;
          do {
            uVar8 = puVar5[lVar14 + lVar15 + 1];
            if (uVar8 != 0) {
              uVar16 = (ulonglong)(iVar7 + (int)lVar15 + 1);
              uVar17 = 0xffffffff;
              goto LAB_142b710b8;
            }
            iVar13 = iVar13 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar10 - lVar14 != lVar15);
          uVar17 = 0xffffffff;
          lVar14 = (longlong)iVar10;
        }
        uVar16 = lVar14 + 1U & 0xffffffff;
        iVar7 = iVar4;
      }
      else {
LAB_142b710b8:
        uVar12 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar12 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar7) {
          iVar7 = iVar4;
        }
      }
    } while (iVar7 != iVar2);
  }
LAB_142b70e2f:
  if ((local_80 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b711c4 FUN_142b711c4 body=29 status=ok
// SIG undefined FUN_142b711c4(void)

undefined8 FUN_142b711c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b711e2 FUN_142b711e2 body=386 status=ok
// SIG undefined FUN_142b711e2(void)

longlong FUN_142b711e2(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_3;
  local_30 = *param_2;
  lVar3 = *param_1;
  plVar1 = (longlong *)(lVar3 + 0x208);
  local_38 = uVar2;
  if (local_30 < uVar2) {
    local_38 = local_30;
    local_30 = uVar2;
  }
  uVar6 = ((uint)(local_38 >> 0x14) & 0xffff ^ (uint)(local_38 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  uVar7 = ((uint)(local_30 >> 0x14) & 0xffff ^ (uint)(local_30 >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  if (*(int *)(lVar3 + 0x210) != *(int *)(lVar3 + 0x23c)) {
    lVar5 = lVar3 + 0x240;
    if (*(longlong *)(lVar3 + 0x248) != 0) {
      lVar5 = *(longlong *)(lVar3 + 0x248);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar3 + 0x250) - 1U &
                             (uVar6 * 0x40 + (uVar7 >> 0x10 ^ uVar7) + (uVar6 >> 2) + 0x9e3779b9 ^
                             uVar6)) * 4);
    if (iVar4 != -1) {
      lVar3 = *plVar1;
      do {
        lVar8 = (longlong)iVar4 * 0x538;
        lVar5 = lVar3 + lVar8;
        if ((*(ulonglong *)(lVar3 + lVar8) == local_38) &&
           (*(ulonglong *)(lVar3 + 8 + lVar8) == local_30)) {
          if (lVar5 != 0) goto LAB_142b7130b;
          break;
        }
        iVar4 = *(int *)(lVar5 + 0x530);
      } while (iVar4 != -1);
    }
  }
  local_28 = &local_38;
  local_48 = 0;
  FUN_140852f9c(plVar1,&local_1c);
  lVar5 = (longlong)local_1c * 0x538 + *plVar1;
LAB_142b7130b:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar5 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b71384 FUN_142b71384 body=12 status=ok
// SIG undefined FUN_142b71384(void)

void FUN_142b71384(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142b7138d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142b71390 FUN_142b71390 body=29 status=ok
// SIG undefined FUN_142b71390(void)

undefined8 FUN_142b71390(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b713ae FUN_142b713ae body=329 status=ok
// SIG undefined FUN_142b713ae(void)

void FUN_142b713ae(longlong *param_1,longlong *param_2,longlong *param_3,char *param_4,
                  longlong param_5)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  uVar1 = *(uint *)(param_5 + 0x4f8);
  if (*param_4 == '\0') {
    if ((int)uVar1 < 1) {
      iVar4 = 0;
    }
    else {
      lVar7 = 0;
      iVar4 = 0;
      do {
        iVar4 = iVar4 + (uint)(0.0 < *(double *)(param_5 + 0xa8 + lVar7));
        lVar7 = lVar7 + 0x138;
      } while ((ulonglong)uVar1 * 0x138 - lVar7 != 0);
    }
    *(int *)(lVar2 + 0x78) = *(int *)(lVar2 + 0x78) + iVar4;
  }
  else {
    if ((int)uVar1 < 1) {
      iVar4 = 0;
    }
    else {
      lVar7 = 0;
      iVar4 = 0;
      do {
        iVar4 = iVar4 + (uint)(0.0 < *(double *)(param_5 + 0xa8 + lVar7));
        lVar7 = lVar7 + 0x138;
      } while ((ulonglong)uVar1 * 0x138 - lVar7 != 0);
    }
    puVar5 = (undefined8 *)*param_3;
    puVar3 = (undefined8 *)*param_2;
    *(int *)(lVar2 + 0x7c) = *(int *)(lVar2 + 0x7c) + iVar4;
    if (DAT_14c75f910 == 1) {
      if ((puVar3 == (undefined8 *)0x0) || (iVar4 = (**(code **)*puVar3)(puVar3), iVar4 != 1)) {
        iVar4 = (**(code **)*puVar5)(puVar5);
      }
      else {
        iVar4 = (**(code **)*puVar3)(puVar3);
        puVar5 = puVar3;
      }
      iVar6 = 0;
      if (iVar4 != 1) {
        puVar5 = (undefined8 *)0x0;
      }
      iVar4 = FUN_14710089a(puVar5[0x56]);
      if (0 < (longlong)*(int *)(param_5 + 0x4f8)) {
        lVar7 = 0;
        iVar6 = 0;
        do {
          iVar6 = iVar6 + (uint)(0.0 < *(double *)(param_5 + 0xa8 + lVar7));
          lVar7 = lVar7 + 0x138;
        } while ((longlong)*(int *)(param_5 + 0x4f8) * 0x138 - lVar7 != 0);
      }
      *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + iVar6 * iVar4;
      if (DAT_14c75f914 == '\x01') {
        *(int *)(lVar2 + 0x70) = *(int *)(lVar2 + 0x70) + 1;
      }
    }
  }
  return;
}



// FUNCTION 142b714f8 FUN_142b714f8 body=903 status=ok
// SIG undefined FUN_142b714f8(void)

undefined8 * FUN_142b714f8(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  double dVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  
  puVar3 = (undefined8 *)*param_3;
  puVar9 = (undefined8 *)*param_2;
  lVar4 = param_1[2];
  iVar5 = (**(code **)*puVar3)(puVar3);
  if ((puVar3 != (undefined8 *)0x0) && (iVar5 == 0xd)) {
    iVar5 = (**(code **)*puVar9)(puVar9);
    if (iVar5 != 1) {
      puVar9 = (undefined8 *)0x0;
    }
    lVar12 = puVar9[0x56];
    if (*(char *)(lVar12 + 0x151) != '\0') {
      return (undefined8 *)0x0;
    }
    if (*(int *)(lVar12 + 0x10) < 1) {
      lVar7 = 0;
    }
    else {
      lVar7 = **(longlong **)(lVar12 + 8);
    }
    if (*(char *)(lVar7 + 0x270) != '\0') {
      return (undefined8 *)0x0;
    }
    puVar8 = (undefined8 *)puVar3[3];
    if (puVar8 == puVar9) {
      puVar8 = (undefined8 *)puVar3[4];
    }
    iVar5 = FUN_144b09252(lVar12,puVar3,*(undefined1 *)*param_1);
    *(int *)param_1[1] = *(int *)param_1[1] + iVar5;
    piVar1 = (int *)(lVar4 + 0x88);
    *piVar1 = *piVar1 + iVar5;
    return puVar8;
  }
  iVar5 = (**(code **)*puVar3)(puVar3);
  if ((puVar3 == (undefined8 *)0x0) || (iVar5 != 0xc)) {
    iVar5 = (**(code **)*puVar3)(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    if (iVar5 != 0xe) {
      return (undefined8 *)0x0;
    }
    iVar5 = 0;
    if (*(int *)(puVar3 + 0x9f) < 1) {
      return (undefined8 *)0x0;
    }
    plVar10 = puVar3 + 0x17;
    lVar12 = 0;
    do {
      if (0.0 < (double)plVar10[-2]) {
        puVar8 = (undefined8 *)plVar10[-1];
        if ((puVar8 == (undefined8 *)0x0) || (iVar6 = (**(code **)*puVar8)(puVar8), iVar6 != 1)) {
          puVar8 = (undefined8 *)0x0;
        }
        puVar11 = (undefined8 *)*plVar10;
        if (((((puVar11 == (undefined8 *)0x0) ||
              (iVar6 = (**(code **)*puVar11)(puVar11), puVar8 == (undefined8 *)0x0)) || (iVar6 != 1)
             ) || ((lVar7 = puVar8[0x56], lVar7 == 0 || (lVar7 != puVar11[0x56])))) ||
           (*(char *)(lVar7 + 0x151) == '\0')) {
          iVar5 = iVar5 + 1;
        }
      }
      lVar12 = lVar12 + 1;
      plVar10 = plVar10 + 0x27;
    } while (lVar12 < *(int *)(puVar3 + 0x9f));
    if (iVar5 == 0) {
      return (undefined8 *)0x0;
    }
    if (*(int *)(puVar3 + 0xa0) == 5) {
      puVar8 = (undefined8 *)puVar3[0xa1];
    }
    else {
      puVar8 = (undefined8 *)0x0;
    }
    if (*(int *)(puVar3 + 0xa2) == 5) {
      puVar11 = (undefined8 *)puVar3[0xa3];
    }
    else {
      puVar11 = (undefined8 *)0x0;
    }
    if ((puVar8 == (undefined8 *)0x0) || (*(char *)(puVar8 + 0x4e) == '\x01')) {
      if (puVar11 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      if (*(char *)(puVar11 + 0x4e) != '\0') {
        return (undefined8 *)0x0;
      }
    }
    iVar6 = iVar5 * 3;
    if (*(char *)*param_1 != '\0') {
      iVar6 = iVar5;
    }
    *(int *)param_1[1] = *(int *)param_1[1] + iVar6;
    piVar1 = (int *)(lVar4 + 0x84);
    *piVar1 = *piVar1 + iVar6;
    if (puVar8 != puVar9) {
      puVar11 = puVar8;
    }
  }
  else {
    if (*(char *)*param_1 == '\0') {
      *(int *)param_1[1] = *(int *)param_1[1] + 1;
    }
    puVar8 = (undefined8 *)puVar3[4];
    puVar11 = (undefined8 *)puVar3[6];
    if (puVar8 != puVar9) {
      if (puVar8 == (undefined8 *)0x0 || (undefined8 *)puVar3[6] != puVar9) {
        return (undefined8 *)0x0;
      }
      if ((*(byte *)(puVar8 + 4) & 1) != 0) {
        return (undefined8 *)0x0;
      }
      if (9.99999993922529e-09 < ABS((double)puVar8[0xc])) {
        return puVar8;
      }
      if (9.99999993922529e-09 < ABS((double)puVar8[0xd])) {
        return puVar8;
      }
      if (9.99999993922529e-09 < ABS((double)puVar8[0xe])) {
        return puVar8;
      }
      if (9.99999993922529e-09 < ABS((double)puVar8[9])) {
        return puVar8;
      }
      if (9.99999993922529e-09 < ABS((double)puVar8[10])) {
        return puVar8;
      }
      dVar2 = (double)puVar8[0xb];
      goto joined_r0x000142b717ed;
    }
  }
  if (puVar11 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if ((*(byte *)(puVar11 + 4) & 1) != 0) {
    return (undefined8 *)0x0;
  }
  if (9.99999993922529e-09 < ABS((double)puVar11[0xc])) {
    return puVar11;
  }
  if (9.99999993922529e-09 < ABS((double)puVar11[0xd])) {
    return puVar11;
  }
  if (9.99999993922529e-09 < ABS((double)puVar11[0xe])) {
    return puVar11;
  }
  if (9.99999993922529e-09 < ABS((double)puVar11[9])) {
    return puVar11;
  }
  if (9.99999993922529e-09 < ABS((double)puVar11[10])) {
    return puVar11;
  }
  dVar2 = (double)puVar11[0xb];
  puVar8 = puVar11;
joined_r0x000142b717ed:
  if (ABS(dVar2) <= 9.99999993922529e-09) {
    return (undefined8 *)0x0;
  }
  return puVar8;
}



// FUNCTION 142b71880 FUN_142b71880 body=373 status=ok
// SIG undefined FUN_142b71880(void)

void FUN_142b71880(undefined8 *param_1,longlong *param_2,longlong *param_3,char *param_4,
                  longlong param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint *puVar9;
  longlong lVar10;
  undefined4 uVar11;
  
  if (0 < *(int *)(param_5 + 0x4f8)) {
    cVar1 = *param_4;
    puVar2 = (undefined8 *)*param_3;
    puVar3 = (undefined8 *)*param_2;
    puVar9 = (uint *)(param_5 + 0x128);
    lVar8 = 0;
    do {
      puVar9[-2] = 0;
      puVar9[-1] = *(uint *)*param_1;
      lVar4 = *(longlong *)param_1[3];
      lVar10 = lVar4 + 0x2a0;
      uVar5 = FUN_140271278(puVar9 + -0x44,*(undefined8 *)param_1[1],*(undefined8 *)param_1[2],lVar4
                            ,lVar10,lVar4 + 0x540);
      uVar11 = (undefined4)((ulonglong)lVar10 >> 0x20);
      *puVar9 = uVar5;
      *(longlong *)param_1[3] = *(longlong *)param_1[3] + (ulonglong)uVar5 * 0x2a0;
      *(int *)*param_1 = *(int *)*param_1 + uVar5;
      if (((cVar1 != '\0') && (0.0 < *(double *)(puVar9 + -0x20))) && (DAT_14c75f910 == 1)) {
        if (puVar3 == (undefined8 *)0x0) {
LAB_142b7196d:
          iVar6 = (**(code **)*puVar2)(puVar2);
          puVar7 = puVar2;
        }
        else {
          iVar6 = (**(code **)*puVar3)(puVar3);
          if (iVar6 != 1) goto LAB_142b7196d;
          iVar6 = (**(code **)*puVar3)(puVar3);
          puVar7 = puVar3;
        }
        if (iVar6 != 1) {
          puVar7 = (undefined8 *)0x0;
        }
        lVar10 = *(longlong *)param_1[3];
        FUN_142b5c588(puVar7[0x56],(longlong *)param_1[3],0,*(undefined4 *)*param_1,
                      CONCAT44(uVar11,*(undefined4 *)((longlong)puVar7 + 0x1fc)));
        *(int *)*param_1 =
             *(int *)*param_1 +
             (int)((ulonglong)(*(longlong *)param_1[3] - lVar10) >> 5) * 0x3cf3cf3d;
      }
      lVar8 = lVar8 + 1;
      puVar9 = puVar9 + 0x4e;
    } while (lVar8 < *(int *)(param_5 + 0x4f8));
  }
  return;
}



// FUNCTION 142b719f6 FUN_142b719f6 body=2067 status=ok
// SIG undefined FUN_142b719f6(void)

undefined8 * FUN_142b719f6(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  double dVar1;
  char *pcVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  int iVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint *puVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_2c8 [32];
  undefined8 *local_2a8;
  undefined8 *local_2a0;
  undefined8 *local_298;
  int local_290;
  undefined1 local_288;
  undefined8 *local_280;
  undefined8 local_278 [12];
  undefined8 local_218 [6];
  undefined8 auStack_1e8 [2];
  undefined4 auStack_1d8 [4];
  char *apcStack_1c8 [4];
  char **local_1a8;
  char *local_1a0 [6];
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8 [8];
  undefined1 local_98 [56];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  puVar14 = (undefined8 *)*param_3;
  param_2 = (undefined8 *)*param_2;
  iVar12 = *(int *)(param_2 + 0x51) + 1;
  iVar4 = *(int *)*param_1;
  if (iVar4 < iVar12) {
    iVar4 = iVar12;
  }
  *(int *)*param_1 = iVar4;
  iVar4 = (**(code **)*puVar14)(puVar14);
  if ((puVar14 == (undefined8 *)0x0) || (iVar4 != 0xd)) {
    iVar4 = (**(code **)*puVar14)(puVar14);
    if ((puVar14 == (undefined8 *)0x0) || (iVar4 != 0xc)) {
      iVar4 = (**(code **)*puVar14)(puVar14);
      puVar15 = (undefined8 *)0x0;
      if ((puVar14 == (undefined8 *)0x0) || (iVar4 != 0xe)) goto LAB_142b72159;
      if (*(int *)(puVar14 + 0xa0) == 5) {
        puVar11 = (undefined8 *)puVar14[0xa1];
      }
      else {
        puVar11 = (undefined8 *)0x0;
      }
      if (*(int *)(puVar14 + 0xa2) == 5) {
        puVar8 = (undefined8 *)puVar14[0xa3];
      }
      else {
        puVar8 = (undefined8 *)0x0;
      }
      if (((puVar11 != (undefined8 *)0x0) && (*(char *)(puVar11 + 0x4e) != '\x01')) ||
         ((puVar8 != (undefined8 *)0x0 && (*(char *)(puVar8 + 0x4e) == '\0')))) {
        uVar13 = 0;
        puVar15 = (undefined8 *)0x0;
        if (*(int *)(puVar14 + 0x9f) < 1) goto LAB_142b72159;
        puVar16 = (uint *)(puVar14 + 0x25);
        lVar9 = 0;
        local_280 = puVar8;
        do {
          puVar16[-2] = 0;
          puVar16[-1] = *(uint *)param_1[2];
          lVar7 = *(longlong *)param_1[1];
          if (*(char *)param_1[3] == '\x01') {
            uVar5 = FUN_14711f01e(puVar16 + -0x44,lVar7,iVar12);
          }
          else {
            local_2a0 = (undefined8 *)(lVar7 + 0x540);
            local_2a8 = (undefined8 *)(lVar7 + 0x2a0);
            uVar5 = FUN_140271278(puVar16 + -0x44,*(undefined8 *)param_1[6],
                                  (int)*(undefined8 *)param_1[7]);
          }
          *puVar16 = uVar5;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + (ulonglong)uVar5 * 0x2a0;
          *(int *)param_1[2] = *(int *)param_1[2] + uVar5;
          uVar5 = (int)uVar13 + uVar5;
          uVar13 = (ulonglong)uVar5;
          lVar9 = lVar9 + 1;
          puVar16 = puVar16 + 0x4e;
        } while (lVar9 < *(int *)(puVar14 + 0x9f));
        if (uVar5 != 0) {
          puVar14[2] = uVar13 * -0x2a0 + *(longlong *)param_1[1];
          *(int *)param_1[8] = *(int *)param_1[8] + uVar5;
          puVar14 = local_280;
          if (puVar11 != param_2) {
            puVar14 = puVar11;
          }
          if (((puVar14 != (undefined8 *)0x0) && ((*(byte *)(puVar14 + 4) & 1) == 0)) &&
             ((9.99999993922529e-09 < ABS((double)puVar14[0xc]) ||
              ((((9.99999993922529e-09 < ABS((double)puVar14[0xd]) ||
                 (9.99999993922529e-09 < ABS((double)puVar14[0xe]))) ||
                (9.99999993922529e-09 < ABS((double)puVar14[9]))) ||
               ((9.99999993922529e-09 < ABS((double)puVar14[10]) ||
                (9.99999993922529e-09 < ABS((double)puVar14[0xb]))))))))) {
            iVar4 = (**(code **)*puVar14)(puVar14);
            puVar15 = (undefined8 *)0x0;
            if (iVar4 == 1) {
              puVar15 = puVar14;
            }
            goto LAB_142b72159;
          }
        }
      }
    }
    else {
      pcVar2 = (char *)param_1[3];
      if (*pcVar2 == '\0') {
        lVar9 = 0x50;
        do {
          *(undefined8 *)((longlong)auStack_1e8 + lVar9) = 0;
          *(undefined8 *)((longlong)auStack_1e8 + lVar9 + 8) = 0;
          *(undefined4 *)((longlong)auStack_1d8 + lVar9) = 0;
          *(undefined4 *)((longlong)auStack_1d8 + lVar9 + 4) = 0;
          *(undefined4 *)((longlong)auStack_1d8 + lVar9 + 8) = 0;
          *(undefined4 *)((longlong)auStack_1d8 + lVar9 + 0xc) = 0x3ff00000;
          *(undefined8 *)((longlong)apcStack_1c8 + lVar9) = 0;
          *(undefined8 *)((longlong)apcStack_1c8 + lVar9 + 8) = 0;
          *(undefined8 *)((longlong)apcStack_1c8 + lVar9 + 0x10) = 0;
          *(undefined8 *)((longlong)apcStack_1c8 + lVar9 + 0x18) = 0;
          *(undefined8 *)((longlong)apcStack_1c8 + lVar9 + 0x20) = 0x3ff0000000000000;
          *(undefined8 *)((longlong)apcStack_1c8 + lVar9 + 0x28) = 0x3ff0000000000000;
          *(undefined8 *)((longlong)apcStack_1c8 + lVar9 + 0x30) = 0x3ff0000000000000;
          *(undefined8 *)((longlong)apcStack_1c8 + lVar9 + 0x38) = 0;
          lVar9 = lVar9 + 0x60;
        } while (lVar9 != 0x110);
        local_1a0[1] = (char *)puVar14[0x20];
        local_1a0[2] = (char *)puVar14[0x21];
        local_1a0[3] = (char *)puVar14[0x22];
        local_1a0[4] = (char *)puVar14[0x23];
        local_1a0[5] = (char *)puVar14[0x28];
        uStack_170 = puVar14[0x29];
        local_168 = puVar14[0x2a];
        local_1a8 = apcStack_1c8 + 6;
        uStack_160 = 0;
        local_158 = 0x3ff0000000000000;
        uStack_150 = 0x3ff0000000000000;
        local_148 = 0x3ff0000000000000;
        uStack_140 = 0;
        local_138 = *(undefined4 *)(puVar14 + 0x24);
        uStack_134 = *(undefined4 *)((longlong)puVar14 + 0x124);
        uStack_130 = *(undefined4 *)(puVar14 + 0x25);
        uStack_12c = *(undefined4 *)((longlong)puVar14 + 300);
        local_128 = *(undefined4 *)(puVar14 + 0x26);
        uStack_124 = *(undefined4 *)((longlong)puVar14 + 0x134);
        uStack_120 = *(undefined4 *)(puVar14 + 0x27);
        uStack_11c = *(undefined4 *)((longlong)puVar14 + 0x13c);
        local_118 = puVar14[0x2b];
        uStack_110 = puVar14[0x2c];
        local_108 = puVar14[0x2d];
        uStack_100 = 0;
        local_f8 = 0x3ff0000000000000;
        uStack_f0 = 0x3ff0000000000000;
        local_e8 = 0x3ff0000000000000;
        uStack_e0 = 0;
        apcStack_1c8[2] = local_98;
        apcStack_1c8[3] = (char *)local_d8;
        local_1a0[0] = pcVar2;
        FUN_142b7220a(apcStack_1c8 + 2,puVar14,*(undefined8 *)param_1[1],0);
        FUN_142b7220a(apcStack_1c8 + 2,puVar14,*(undefined8 *)param_1[1],1);
        iVar4 = *(int *)(puVar14 + 7);
        if (iVar4 == 6) {
          pcVar3 = (code *)puVar14[0x4a];
          if (pcVar3 != (code *)0x0) {
            plVar10 = puVar14 + 0x4e;
            if ((longlong *)puVar14[0x4c] != (longlong *)0x0) {
              plVar10 = (longlong *)puVar14[0x4c];
            }
            uVar6 = (**(code **)(*plVar10 + 8))();
            (*pcVar3)(uVar6,puVar14);
          }
          puVar15 = puVar14 + 8;
          puVar11 = (undefined8 *)(*(longlong *)param_1[1] + 0x1a0);
        }
        else {
          puVar15 = *(undefined8 **)param_1[1];
          local_2a0 = puVar15 + 0x34;
          puVar11 = puVar15 + 0x1a;
          puVar8 = local_218;
          for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
            *puVar8 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar8 = puVar8 + 1;
          }
          puVar11 = local_278;
          for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
            *puVar11 = *puVar15;
            puVar15 = puVar15 + 1;
            puVar11 = puVar11 + 1;
          }
          local_298 = (undefined8 *)((ulonglong)local_298 & 0xffffffff00000000);
          local_2a8 = local_d8;
          FUN_14481ffa2(iVar4,local_278,local_218,local_98);
          puVar15 = (undefined8 *)(*(longlong *)param_1[1] + 0x1a0);
          puVar11 = puVar14 + 8;
        }
        memcpy(puVar11,puVar15,0x60);
        FUN_14491be5a(*(undefined8 *)param_1[1]);
        *(undefined8 *)(*(longlong *)param_1[1] + 0x260) = puVar14[0x3a];
        *(undefined8 *)(*(longlong *)param_1[1] + 0x270) = puVar14[0x44];
        *(undefined8 *)(*(longlong *)param_1[1] + 0x298) = puVar14[0x43];
        uVar13 = puVar14[0x3e];
        *(ulonglong *)(*(longlong *)param_1[1] + 0x278) = uVar13;
        *(ulonglong *)(*(longlong *)param_1[1] + 0x280) = uVar13 ^ 0x8000000000000000;
        *(short *)(*(longlong *)param_1[1] + 0x288) = (short)iVar12;
        if (*(char *)(puVar14 + 0x40) == '\x01') {
          dVar1 = (double)puVar14[0x3f];
          dVar17 = (double)FUN_14711a87c(puVar14);
          dVar18 = (double)puVar14[0x3e];
          if (dVar17 * dVar1 <= (double)puVar14[0x3e]) {
            dVar18 = dVar17 * dVar1;
          }
          *(double *)(*(longlong *)param_1[1] + 0x278) = dVar18;
          *(ulonglong *)(*(longlong *)param_1[1] + 0x280) =
               *(ulonglong *)(*(longlong *)param_1[1] + 0x278) ^ 0x8000000000000000;
        }
        puVar14[2] = *(undefined8 *)param_1[1];
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 0x2a0;
        *(int *)param_1[2] = *(int *)param_1[2] + 1;
        *(int *)param_1[5] = *(int *)param_1[5] + 1;
      }
      puVar15 = (undefined8 *)puVar14[4];
      puVar14 = (undefined8 *)puVar14[6];
      if (puVar15 == param_2) {
        if ((puVar14 != (undefined8 *)0x0) && ((*(byte *)(puVar14 + 4) & 1) == 0)) {
          puVar15 = puVar14;
          if (((9.99999993922529e-09 < ABS((double)puVar14[0xc])) ||
              (((9.99999993922529e-09 < ABS((double)puVar14[0xd]) ||
                (9.99999993922529e-09 < ABS((double)puVar14[0xe]))) ||
               (9.99999993922529e-09 < ABS((double)puVar14[9]))))) ||
             (9.99999993922529e-09 < ABS((double)puVar14[10]))) goto LAB_142b72159;
          dVar1 = (double)puVar14[0xb];
          goto joined_r0x000142b7200d;
        }
      }
      else if ((puVar15 != (undefined8 *)0x0 && puVar14 == param_2) &&
              ((*(byte *)(puVar15 + 4) & 1) == 0)) {
        if (((9.99999993922529e-09 < ABS((double)puVar15[0xc])) ||
            ((9.99999993922529e-09 < ABS((double)puVar15[0xd]) ||
             (9.99999993922529e-09 < ABS((double)puVar15[0xe]))))) ||
           ((9.99999993922529e-09 < ABS((double)puVar15[9]) ||
            (9.99999993922529e-09 < ABS((double)puVar15[10]))))) goto LAB_142b72159;
        dVar1 = (double)puVar15[0xb];
joined_r0x000142b7200d:
        if (9.99999993922529e-09 < ABS(dVar1)) goto LAB_142b72159;
      }
    }
  }
  else {
    iVar4 = (**(code **)*param_2)(param_2);
    if (iVar4 != 1) {
      param_2 = (undefined8 *)0x0;
    }
    lVar9 = param_2[0x56];
    puVar15 = (undefined8 *)0x0;
    if (*(char *)(lVar9 + 0x151) != '\0') goto LAB_142b72159;
    if (*(int *)(lVar9 + 0x10) < 1) {
      lVar7 = 0;
    }
    else {
      lVar7 = **(longlong **)(lVar9 + 8);
    }
    if (*(char *)(lVar7 + 0x270) == '\0') {
      puVar15 = (undefined8 *)puVar14[3];
      if (puVar15 == param_2) {
        puVar15 = (undefined8 *)puVar14[4];
      }
      lVar7 = *(longlong *)param_1[1];
      local_288 = *(undefined1 *)param_1[3];
      local_2a8 = puVar14;
      local_2a0 = param_2;
      local_298 = puVar15;
      local_290 = iVar12;
      FUN_14481825c(lVar9,(longlong *)param_1[1],0,*(undefined4 *)param_1[2]);
      iVar4 = (int)((ulonglong)(*(longlong *)param_1[1] - lVar7) >> 5) * 0x3cf3cf3d;
      *(int *)param_1[2] = *(int *)param_1[2] + iVar4;
      *(int *)param_1[4] = *(int *)param_1[4] + iVar4;
      puVar14[2] = lVar7;
      goto LAB_142b72159;
    }
  }
  puVar15 = (undefined8 *)0x0;
LAB_142b72159:
  if ((local_60 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return puVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b7220a FUN_142b7220a body=3665 status=ok
// SIG undefined FUN_142b7220a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b7220a(longlong *param_1,longlong param_2,longlong param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  double *pdVar17;
  double *pdVar18;
  double *pdVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  double dVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  double dVar31;
  undefined1 auVar30 [16];
  undefined1 auVar32 [16];
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
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  double dVar47;
  undefined1 auStack_3f8 [32];
  double local_3d8;
  double local_3d0;
  longlong *local_3c8;
  double *local_3c0;
  undefined1 local_3b8 [16];
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  double local_348;
  double dStack_340;
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  double local_318;
  double dStack_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8 [8];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  double local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  double local_258;
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
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  double *pdVar16;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  puVar20 = *(undefined8 **)(param_2 + 0x20 + (ulonglong)(param_4 != 0) * 0x10);
  if (puVar20 == (undefined8 *)0x0) {
    local_2c8[2] = DAT_14c8464f0;
    puVar20 = (undefined8 *)&DAT_14c9abd20;
    if (*(char *)param_1[3] != '\0') {
      puVar20 = &DAT_14c9abcc0;
    }
    local_2c8[0] = DAT_14c8464e0;
    local_2c8[1] = DAT_14c8464e8;
    lVar14 = (ulonglong)param_4 * 0xd0;
    memmove((void *)(param_3 + lVar14),&DAT_14c846480,0x60);
    *(undefined8 **)(param_3 + 0x60 + lVar14) = puVar20;
    *(undefined8 **)(param_3 + 0x68 + lVar14) = puVar20;
    pdVar16 = (double *)(param_3 + 0x70 + lVar14);
    *pdVar16 = local_2c8[0];
    pdVar16[1] = local_2c8[1];
    *(double *)(param_3 + 0x80 + lVar14) = local_2c8[2];
    puVar20 = (undefined8 *)(param_3 + 0x88 + lVar14);
    *puVar20 = 0;
    puVar20[1] = 0;
    puVar20 = (undefined8 *)(param_3 + 0x98 + lVar14);
    *puVar20 = 0;
    puVar20[1] = 0;
    puVar20 = (undefined8 *)(param_3 + 0xa8 + lVar14);
    *puVar20 = 0;
    puVar20[1] = 0;
    puVar20 = (undefined8 *)(param_3 + 0xb8 + lVar14);
    *puVar20 = 0;
    puVar20[1] = 0;
    *(undefined8 *)(param_3 + 200 + lVar14) = 0;
  }
  else {
    iVar10 = (**(code **)*puVar20)(puVar20);
    if (((iVar10 == 1) && (lVar14 = puVar20[0x56], lVar14 != 0)) &&
       (*(char *)(lVar14 + 0x151) == '\x01')) {
      if (*(int *)(lVar14 + 0x10) < 1) {
        lVar15 = 0;
      }
      else {
        lVar15 = **(longlong **)(lVar14 + 8);
      }
      uVar21 = (ulonglong)param_4;
      pdVar16 = (double *)(param_3 + uVar21 * 0xd0);
      param_3 = param_3 + uVar21 * 0xd0;
      *(undefined8 *)(param_3 + 0x80) = *(undefined8 *)(lVar14 + 0x108);
      uVar12 = *(undefined4 *)(lVar14 + 0xfc);
      uVar8 = *(undefined4 *)(lVar14 + 0x100);
      uVar9 = *(undefined4 *)(lVar14 + 0x104);
      *(undefined4 *)(param_3 + 0x70) = *(undefined4 *)(lVar14 + 0xf8);
      *(undefined4 *)(param_3 + 0x74) = uVar12;
      *(undefined4 *)(param_3 + 0x78) = uVar8;
      *(undefined4 *)(param_3 + 0x7c) = uVar9;
      local_3c8 = param_1;
      FUN_140b8ccd6(lVar14,local_2c8);
      pdVar19 = local_2c8;
      pdVar17 = (double *)(param_3 + 0x88);
      for (lVar13 = 9; lVar13 != 0; lVar13 = lVar13 + -1) {
        *pdVar17 = *pdVar19;
        pdVar19 = pdVar19 + 1;
        pdVar17 = pdVar17 + 1;
      }
      pdVar19 = local_2c8;
      FUN_1409acb1a(lVar14,pdVar19);
      pdVar17 = pdVar19;
      pdVar18 = pdVar16;
      for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
        *pdVar18 = *pdVar17;
        pdVar17 = pdVar17 + 1;
        pdVar18 = pdVar18 + 1;
      }
      *(longlong *)(param_3 + 0x60) = lVar15 + 0xf0;
      *(longlong *)(param_3 + 0x68) = lVar15 + 0xd8;
      local_3c0 = pdVar16;
      FUN_144941734(puVar20,&local_3a8);
      param_1 = local_3c8;
      lVar14 = local_3c8[2];
      lVar15 = uVar21 * 0x60;
      dVar25 = *(double *)(lVar14 + lVar15);
      dVar28 = ((double *)(lVar14 + lVar15))[1];
      pdVar16 = (double *)(lVar14 + 0x10 + lVar15);
      dVar31 = *pdVar16;
      dVar35 = pdVar16[1];
      pdVar16 = (double *)(lVar14 + 0x20 + lVar15);
      dVar38 = *pdVar16;
      dVar7 = pdVar16[1];
      dVar37 = *(double *)(lVar14 + 0x30 + lVar15);
      local_318 = 0.0;
      dStack_310 = 0.0;
      local_328 = ZEXT816(0);
      dVar44 = local_368._0_8_;
      dVar40 = local_368._8_8_;
      dVar42 = local_358._0_8_;
      auVar29 = minpd(local_368,_DAT_149934d80);
      auVar32 = minpd(local_358,ZEXT816(0x3ff0000000000000));
      auVar23._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
      auVar23._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
      iVar10 = movmskpd((int)lVar14,auVar23);
      auVar29._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
      auVar29._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
      uVar11 = movmskpd((int)lVar15,auVar29);
      local_3b8 = local_368;
      if ((uVar11 & 0x3fffffff) == 0 && iVar10 == 0) {
        dVar36 = dStack_3a0 * dVar31 * -1.0 +
                 local_398 * dVar28 + dVar25 * dStack_390 * 1.0 + dVar35 * local_3a8;
        dVar39 = local_3a8 * dVar31 * 1.0 +
                 dStack_390 * dVar28 + dVar25 * local_398 * -1.0 + dVar35 * dStack_3a0;
        auVar46._0_8_ =
             dStack_390 * dVar31 * 1.0 +
             ((dVar25 * dStack_3a0 * 1.0 + dVar35 * local_398) - dVar28 * local_3a8);
        auVar46._8_8_ =
             local_398 * dVar31 * -1.0 +
             ((dVar25 * local_3a8 * -1.0 + dVar35 * dStack_390) - dVar28 * dStack_3a0);
        local_378 = local_378 * 1.0;
        dStack_370 = dStack_370 * 0.0;
        dVar44 = dStack_380 * dVar25 - dVar28 * local_388;
        dVar40 = local_378 * dVar28 - dVar31 * dStack_380;
        dVar33 = local_388 * dVar31 - dVar25 * local_378;
        dVar34 = dStack_370 * dVar35 - dVar35 * dStack_370;
        dVar40 = dVar40 + dVar40;
        dVar33 = dVar33 + dVar33;
        dVar44 = dVar44 + dVar44;
        dVar34 = dVar34 + dVar34;
        dVar38 = dVar38 + (dVar44 * dVar28 - dVar31 * dVar33) + dVar35 * dVar40 + local_388;
        dVar7 = dVar7 + (dVar40 * dVar31 - dVar44 * dVar25) + dVar35 * dVar33 + dStack_380;
        dVar37 = dVar37 + (dVar33 * dVar25 - dVar28 * dVar40) + dVar35 * dVar44 + local_378;
        dStack_310 = (dVar34 * dVar35 - dVar34 * dVar35) + dVar35 * dVar34 + dStack_370 + 0.0;
        local_328._8_4_ = SUB84(dVar7,0);
        local_328._0_8_ = dVar38;
        local_328._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        auVar32._8_8_ = local_358._8_8_ * 0.0;
        auVar32._0_8_ = dVar42 * 1.0;
        uVar12 = 0;
      }
      else {
        dVar33 = dVar28 + dVar28;
        dVar36 = dVar31 + dVar31;
        dVar34 = dVar25 * (dVar25 + dVar25);
        local_178 = 1.0 - (dVar31 * dVar36 + dVar28 * dVar33);
        dStack_150 = 1.0 - (dVar31 * dVar36 + dVar34);
        local_128 = 1.0 - (dVar34 + dVar28 * dVar33);
        dStack_130 = (dVar25 + dVar25) * dVar35;
        dStack_170 = dVar33 * dVar25 + dVar36 * dVar35;
        local_148 = dVar36 * dVar28 + dStack_130;
        local_158 = dVar33 * dVar25 - dVar36 * dVar35;
        dStack_130 = dVar36 * dVar28 - dStack_130;
        local_138 = dVar33 * dVar35 + dVar25 * dVar36;
        local_168 = dVar25 * dVar36 - dVar33 * dVar35;
        uStack_160 = 0;
        uStack_140 = 0;
        uStack_120 = 0;
        uStack_100 = 0x3ff0000000000000;
        dVar25 = dStack_3a0 + dStack_3a0;
        dVar28 = local_398 + local_398;
        dVar35 = local_3a8 * (local_3a8 + local_3a8);
        local_1f8 = (1.0 - (local_398 * dVar28 + dStack_3a0 * dVar25)) * dVar44;
        dStack_1d0 = (1.0 - (local_398 * dVar28 + dVar35)) * dVar40;
        dVar31 = (local_3a8 + local_3a8) * dStack_390;
        local_1d8 = (dVar25 * local_3a8 - dVar28 * dStack_390) * dVar40;
        dStack_1b0 = (dVar28 * dStack_3a0 - dVar31) * dVar42;
        local_1b8 = (dVar25 * dStack_390 + local_3a8 * dVar28) * dVar42;
        dStack_1f0 = (dVar25 * local_3a8 + dVar28 * dStack_390) * dVar44;
        local_1c8 = (dVar28 * dStack_3a0 + dVar31) * dVar40;
        local_1e8 = (local_3a8 * dVar28 - dVar25 * dStack_390) * dVar44;
        uStack_1e0 = 0;
        uStack_1c0 = 0;
        local_1a8 = (1.0 - (dVar35 + dStack_3a0 * dVar25)) * dVar42;
        uStack_1a0 = 0;
        local_198 = local_388;
        dStack_190 = dStack_380;
        local_188 = local_378;
        uStack_180 = 0x3ff0000000000000;
        auVar32._0_8_ = dVar42 * 1.0;
        auVar32._8_8_ = local_358._8_8_ * 0.0;
        local_118 = dVar38;
        dStack_110 = dVar7;
        local_108 = dVar37;
        FUN_1447fea8d(local_2c8);
        local_3d0 = local_2c8[2];
        dVar37 = local_2c8[2] * local_2c8[2] +
                 local_2c8[0] * local_2c8[0] + local_2c8[1] * local_2c8[1];
        local_3d8 = local_2c8[6];
        dVar44 = local_2c8[6] * local_2c8[6] +
                 local_2c8[4] * local_2c8[4] + local_2c8[5] * local_2c8[5];
        dVar42 = (double)local_278._0_8_ * (double)local_278._0_8_ +
                 (double)local_288._0_8_ * (double)local_288._0_8_ +
                 (double)local_288._8_8_ * (double)local_288._8_8_;
        uVar22 = -(ulonglong)(0.0 <= dVar37 + -9.99999993922529e-09);
        dVar37 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar37)) & uVar22);
        uVar22 = -(ulonglong)(0.0 <= dVar44 + -9.99999993922529e-09);
        dVar44 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar44)) & uVar22);
        uVar22 = -(ulonglong)(0.0 <= dVar42 + -9.99999993922529e-09);
        dVar42 = (double)(~uVar22 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar42)) & uVar22);
        auVar4._8_4_ = (int)-(ulonglong)(0.0 <= (double)local_3b8._8_8_);
        auVar4._0_8_ = -(ulonglong)(0.0 <= (double)local_3b8._0_8_);
        auVar4._12_4_ = (int)(-(ulonglong)(0.0 <= (double)local_3b8._8_8_) >> 0x20);
        auVar29 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar4);
        dVar38 = (double)(~-(ulonglong)(0.0 <= auVar32._0_8_) & 0xbff0000000000000 |
                         (ulonglong)
                         ((uint)(-(ulonglong)(0.0 <= auVar32._0_8_) >> 0x20) & 0x3ff00000) << 0x20);
        dVar40 = auVar29._0_8_;
        local_2c8[0] = local_2c8[0] * dVar37 * dVar40;
        local_2c8[1] = local_2c8[1] * dVar37 * dVar40;
        local_2c8[2] = dVar37 * local_2c8[2] * dVar40;
        dVar37 = auVar29._8_8_;
        local_2c8[6] = dVar44 * local_2c8[6] * dVar37;
        local_2c8[5] = local_2c8[5] * dVar44 * dVar37;
        local_2c8[4] = dVar37 * local_2c8[4] * dVar44;
        local_288._8_8_ = (double)local_288._8_8_ * dVar42 * dVar38;
        local_288._0_8_ = dVar38 * (double)local_288._0_8_ * dVar42;
        local_278._0_8_ = dVar42 * (double)local_278._0_8_ * dVar38;
        pdVar16 = &local_2e8;
        iVar10 = FUN_14481fd10(pdVar16,local_2c8);
        uVar12 = SUB84(pdVar16,0);
        dVar37 = local_2d8 * local_2d8 + local_2e8 * local_2e8;
        dVar44 = dStack_2d0 * dStack_2d0 + dStack_2e0 * dStack_2e0;
        auVar26._0_8_ = dVar37 + dVar44;
        auVar26._8_8_ = dVar37 + dVar44;
        uVar22 = -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_);
        auVar29 = sqrtpd(auVar26,auVar26);
        auVar29 = divpd(_DAT_149934d80,auVar29);
        auVar30._0_8_ = auVar29._0_8_ * local_2d8;
        auVar30._8_8_ = auVar29._8_8_ * dStack_2d0;
        dVar36 = (double)((ulonglong)(local_2e8 * auVar29._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_));
        dVar39 = (double)((ulonglong)(dStack_2e0 * auVar29._8_8_) & uVar22);
        auVar5._8_4_ = (int)uVar22;
        auVar5._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_);
        auVar5._12_4_ = (int)(uVar22 >> 0x20);
        auVar46 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar30,auVar5);
        dVar7 = (double)CONCAT44(uStack_25c,uStack_260);
        local_328._8_4_ = uStack_260;
        local_328._0_8_ = local_268;
        local_328._12_4_ = uStack_25c;
        dStack_310 = 0.0;
        dVar38 = local_268;
        dVar37 = local_258;
      }
      pdVar16 = local_3c0;
      auVar29 = _DAT_149934d80;
      local_308 = local_3b8;
      local_2c8[0] = 0.0;
      local_2c8[1] = 0.0;
      local_2c8[2] = 0.0;
      local_2c8[3] = 1.0;
      local_2c8[4] = 0.0;
      local_2c8[5] = 0.0;
      local_2c8[6] = 0.0;
      local_2c8[7] = 0.0;
      local_288 = _DAT_149934d80;
      local_278 = ZEXT816(0x3ff0000000000000);
      dVar44 = local_3c0[2] * local_3c0[2] + *local_3c0 * *local_3c0;
      dVar42 = local_3c0[3] * local_3c0[3] + local_3c0[1] * local_3c0[1];
      auVar27._8_8_ =
           -(ulonglong)(0.009999999776482582 < ABS(DAT_149934d80._8_8_ - (dVar44 + dVar42)));
      auVar27._0_8_ =
           -(ulonglong)(0.009999999776482582 < ABS((double)DAT_149934d80 - (dVar44 + dVar42)));
      iVar10 = movmskpd(iVar10,auVar27);
      local_348 = dVar36;
      dStack_340 = dVar39;
      local_338 = auVar46;
      local_318 = dVar37;
      local_2f8 = auVar32;
      if (iVar10 == 0) {
        auVar23 = minpd(local_3b8,*(undefined1 (*) [16])(local_3c0 + 8));
        auVar32 = minpd(auVar32,*(undefined1 (*) [16])(local_3c0 + 10));
        auVar24._8_8_ = -(ulonglong)(auVar23._8_8_ < 0.0);
        auVar24._0_8_ = -(ulonglong)(auVar23._0_8_ < 0.0);
        iVar10 = movmskpd(0,auVar24);
        auVar43._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
        auVar43._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
        uVar11 = movmskpd(uVar12,auVar43);
        if ((uVar11 & 0x3fffffff) == 0 && iVar10 == 0) {
          if (*(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110) <
              DAT_14c8460b0) {
            FUN_144b3d300(&DAT_14c8460b0);
            if (DAT_14c8460b0 == -1) {
              DAT_14c8460a0._0_4_ = 1e-08;
              DAT_14c8460a0._4_4_ = 1e-08;
              DAT_14c8460a8._0_4_ = 1e-08;
              DAT_14c8460a8._4_4_ = 0x322bcc77;
              _Init_thread_footer(&DAT_14c8460b0);
            }
          }
          auVar23 = *(undefined1 (*) [16])(pdVar16 + 8);
          auVar29 = divpd(auVar29,auVar23);
          auVar32 = divpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(pdVar16 + 10));
          dVar38 = dVar38 - pdVar16[4];
          dVar7 = dVar7 - pdVar16[5];
          dVar37 = dVar37 - pdVar16[6];
          dVar35 = -*pdVar16;
          dVar33 = -pdVar16[1];
          dVar34 = pdVar16[2] * -1.0;
          dVar41 = pdVar16[3] * 1.0;
          dVar40 = dVar7 * dVar35 - dVar38 * dVar33;
          dVar28 = dVar37 * dVar33 - dVar7 * dVar34;
          dVar31 = dVar38 * dVar34 - dVar37 * dVar35;
          dVar28 = dVar28 + dVar28;
          dVar31 = dVar31 + dVar31;
          dVar40 = dVar40 + dVar40;
          dVar45 = auVar46._0_8_;
          dVar47 = auVar46._8_8_;
          dVar42 = pdVar16[1];
          dVar44 = pdVar16[1];
          local_2c8[0] = dVar39 * dVar34 * -1.0 +
                         ((dVar36 * dVar41 - *pdVar16 * dVar47 * 1.0) - dVar45 * dVar42);
          local_2c8[1] = dVar36 * dVar34 * 1.0 +
                         ((dVar39 * dVar41 - *pdVar16 * dVar45 * -1.0) - dVar47 * dVar44);
          dVar25 = ((dVar31 * dVar35 - dVar33 * dVar28) + dVar41 * dVar40 + dVar37) *
                   (double)(-(ulonglong)
                             ((double)(float)DAT_14c8460a8 <
                             ABS(SUB168(*(undefined1 (*) [16])(pdVar16 + 10),0))) & auVar32._0_8_);
          dVar38 = ((dVar40 * dVar33 - dVar34 * dVar31) + dVar41 * dVar28 + dVar38) *
                   (double)(-(ulonglong)((double)(float)DAT_14c8460a0 < ABS(auVar23._0_8_)) &
                           auVar29._0_8_);
          dVar7 = ((dVar28 * dVar34 - dVar40 * dVar35) + dVar41 * dVar31 + dVar7) *
                  (double)(-(ulonglong)((double)DAT_14c8460a0._4_4_ < ABS(auVar23._8_8_)) &
                          auVar29._8_8_);
          dVar37 = dVar47 * dVar34 * 1.0 +
                   dVar42 * dVar36 + (dVar41 * dVar45 - *pdVar16 * dVar39 * 1.0);
          dVar44 = dVar45 * dVar34 * -1.0 +
                   dVar44 * dVar39 + (dVar41 * dVar47 - *pdVar16 * dVar36 * -1.0);
        }
        else {
          FUN_1402db8fa(pdVar19,&local_348,local_3c0);
          dVar25 = local_2c8[6];
          dVar38 = local_2c8[4];
          dVar7 = local_2c8[5];
          dVar37 = local_2c8[2];
          dVar44 = local_2c8[3];
        }
      }
      else {
        pdVar19 = (double *)&DAT_14c846480;
        dVar25 = DAT_14c8464b0;
        dVar38 = DAT_14c8464a0;
        dVar7 = DAT_14c8464a8;
        dVar37 = DAT_14c846490;
        dVar44 = DAT_14c846498;
      }
      dVar42 = *pdVar19;
      dVar40 = pdVar19[1];
      lVar14 = *param_1;
      auVar6._8_4_ = SUB84(dVar7,0);
      auVar6._0_8_ = dVar38;
      auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      *(undefined1 (*) [16])(lVar14 + uVar21 * 0x18) = auVar6;
      *(double *)(lVar14 + 0x10 + uVar21 * 0x18) = dVar25;
      goto LAB_142b72426;
    }
    FUN_14481f014(local_2c8,puVar20,*(undefined8 *)(param_2 + 0x230 + (ulonglong)param_4 * 8),
                  *(undefined1 *)param_1[3]);
    memcpy((void *)(param_3 + (ulonglong)param_4 * 0xd0),local_2c8,0xd0);
  }
  uVar21 = (ulonglong)param_4;
  lVar14 = *param_1;
  lVar15 = uVar21 * 0x60;
  puVar2 = (undefined4 *)(param_1[2] + 0x20 + lVar15);
  uVar12 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  uVar3 = *(undefined8 *)(param_1[2] + 0x30 + lVar15);
  puVar1 = (undefined4 *)(lVar14 + uVar21 * 0x18);
  *puVar1 = *puVar2;
  puVar1[1] = uVar12;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  *(undefined8 *)(lVar14 + 0x10 + uVar21 * 0x18) = uVar3;
  pdVar16 = (double *)(param_1[2] + lVar15);
  dVar42 = *pdVar16;
  dVar40 = pdVar16[1];
  pdVar16 = (double *)(param_1[2] + 0x10 + lVar15);
  dVar37 = *pdVar16;
  dVar44 = pdVar16[1];
LAB_142b72426:
  lVar14 = param_1[1];
  pdVar16 = (double *)(lVar14 + (ulonglong)param_4 * 0x20);
  *pdVar16 = dVar42;
  pdVar16[1] = dVar40;
  pdVar16 = (double *)(lVar14 + 0x10 + (ulonglong)param_4 * 0x20);
  *pdVar16 = dVar37;
  pdVar16[1] = dVar44;
  if ((local_f0 ^ (ulonglong)auStack_3f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b73114 FUN_142b73114 body=196 status=ok
// SIG undefined FUN_142b73114(void)

void FUN_142b73114(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_2;
  local_3a = 0x101;
  FUN_140ac0f92(lVar2,&local_3a,1);
  local_3b = 0;
  FUN_14710175c(lVar2,&local_3c,1);
  iVar1 = *(int *)(lVar2 + 0x2d0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(lVar2 + 0x2c8);
    lVar7 = 0;
    do {
      puVar3 = (undefined8 *)*param_1;
      local_48 = *(undefined8 *)(lVar2 + lVar7);
      pcVar4 = (code *)*puVar3;
      plVar6 = puVar3 + 4;
      if ((longlong *)puVar3[2] != (longlong *)0x0) {
        plVar6 = (longlong *)puVar3[2];
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      (*pcVar4)(uVar5,&local_48);
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b731f8 FUN_142b731f8 body=12 status=ok
// SIG undefined FUN_142b731f8(void)

void FUN_142b731f8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142b73201. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142b73204 FUN_142b73204 body=29 status=ok
// SIG undefined FUN_142b73204(void)

undefined8 FUN_142b73204(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b73222 FUN_142b73222 body=1155 status=ok
// SIG undefined FUN_142b73222(void)

void FUN_142b73222(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  longlong param_5)

{
  double dVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  double *pdVar14;
  longlong lVar15;
  undefined8 *puVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined8 *)*param_2;
  if (puVar3 == (undefined8 *)0x0) {
    puVar16 = (undefined8 *)0x0;
  }
  else {
    iVar13 = (**(code **)*puVar3)(puVar3);
    puVar16 = (undefined8 *)0x0;
    if (iVar13 == 1) {
      puVar16 = puVar3;
    }
  }
  if (((((puVar2 == (undefined8 *)0x0) ||
        (iVar13 = (**(code **)*puVar2)(puVar2), puVar16 == (undefined8 *)0x0)) || (iVar13 != 1)) ||
      (puVar16[0x56] != puVar2[0x56])) && (iVar13 = *(int *)(param_5 + 0x4f8), 0 < iVar13)) {
    pdVar14 = (double *)(param_5 + 0x18);
    lVar15 = 0;
    do {
      dVar22 = pdVar14[0x13];
      if (dVar22 == 0.0) {
        dVar17 = pdVar14[0xc];
        dVar18 = pdVar14[0xd];
        dVar19 = pdVar14[0xe];
        dVar24 = *pdVar14;
        dVar25 = pdVar14[1];
        dVar22 = pdVar14[2];
      }
      else {
        dVar11 = *(double *)((longlong)dVar22 + 0x130);
        dVar12 = *(double *)((longlong)dVar22 + 0x138);
        dVar23 = *(double *)((longlong)dVar22 + 0x140);
        dVar17 = pdVar14[0xc];
        dVar18 = pdVar14[0xd];
        dVar19 = pdVar14[0xe];
        dVar24 = *(double *)((longlong)dVar22 + 0x138);
        dVar20 = dVar24 * dVar19 - dVar18 * dVar23;
        dVar20 = dVar20 + dVar20;
        dVar1 = *(double *)((longlong)dVar22 + 0x148);
        dVar5 = dVar11 * dVar18 - dVar17 * dVar24;
        dVar5 = dVar5 + dVar5;
        dVar25 = dVar23 * dVar17 - dVar19 * dVar11;
        dVar25 = dVar25 + dVar25;
        dVar19 = (dVar11 * dVar25 - dVar20 * dVar24) + dVar1 * dVar5 + dVar19;
        dVar7 = *pdVar14 * *(double *)((longlong)dVar22 + 0x170);
        dVar8 = pdVar14[1] * *(double *)((longlong)dVar22 + 0x178);
        dVar6 = pdVar14[2] * *(double *)((longlong)dVar22 + 0x180);
        dVar21 = dVar8 * dVar11 - dVar12 * dVar7;
        dVar9 = dVar6 * dVar12 - dVar23 * dVar8;
        dVar10 = dVar7 * dVar23 - dVar11 * dVar6;
        dVar9 = dVar9 + dVar9;
        dVar10 = dVar10 + dVar10;
        dVar21 = dVar21 + dVar21;
        dVar18 = (dVar23 * dVar20 - dVar5 * dVar11) + dVar1 * dVar25 + dVar18;
        dVar17 = (dVar24 * dVar5 - dVar25 * dVar23) + dVar1 * dVar20 + dVar17;
        dVar24 = (dVar21 * dVar12 - dVar10 * dVar23) + dVar1 * dVar9 + dVar7 +
                 *(double *)((longlong)dVar22 + 0x150);
        dVar25 = (dVar23 * dVar9 - dVar11 * dVar21) +
                 *(double *)((longlong)dVar22 + 0x148) * dVar10 + dVar8 +
                 *(double *)((longlong)dVar22 + 0x158);
        dVar22 = dVar21 * dVar1 + dVar6 + (dVar10 * dVar11 - dVar9 * dVar12) +
                 *(double *)((longlong)dVar22 + 0x160);
      }
      dVar1 = pdVar14[0x14];
      if (dVar1 == 0.0) {
        dVar5 = pdVar14[3];
        dVar6 = pdVar14[4];
        dVar1 = pdVar14[5];
      }
      else {
        dVar5 = pdVar14[3] * *(double *)((longlong)dVar1 + 0x170);
        dVar6 = pdVar14[4] * *(double *)((longlong)dVar1 + 0x178);
        dVar23 = pdVar14[5] * *(double *)((longlong)dVar1 + 0x180);
        dVar10 = *(double *)((longlong)dVar1 + 0x130);
        dVar11 = *(double *)((longlong)dVar1 + 0x138);
        dVar12 = *(double *)((longlong)dVar1 + 0x140);
        dVar7 = *(double *)((longlong)dVar1 + 0x148);
        dVar8 = dVar6 * dVar10 - dVar5 * dVar11;
        dVar21 = dVar23 * dVar11 - dVar6 * dVar12;
        dVar9 = dVar5 * dVar12 - dVar10 * dVar23;
        dVar21 = dVar21 + dVar21;
        dVar9 = dVar9 + dVar9;
        dVar8 = dVar8 + dVar8;
        dVar5 = (dVar8 * dVar11 - dVar9 * dVar12) + dVar7 * dVar21 + dVar5 +
                *(double *)((longlong)dVar1 + 0x150);
        dVar6 = (dVar12 * dVar21 - dVar10 * dVar8) +
                *(double *)((longlong)dVar1 + 0x148) * dVar9 + dVar6 +
                *(double *)((longlong)dVar1 + 0x158);
        dVar1 = dVar8 * dVar7 + dVar23 + (dVar9 * dVar10 - dVar21 * dVar11) +
                *(double *)((longlong)dVar1 + 0x160);
      }
      dVar22 = (dVar24 - dVar5) * dVar17 + dVar18 * (dVar25 - dVar6) + (dVar22 - dVar1) * dVar19;
      pdVar4 = (double *)*param_1;
      if (*pdVar4 <= dVar22 && dVar22 != *pdVar4) {
        *pdVar4 = dVar22;
        *(double **)param_1[1] = pdVar14;
        iVar13 = *(int *)(param_5 + 0x4f8);
      }
      lVar15 = lVar15 + 1;
      pdVar14 = pdVar14 + 0x27;
    } while (lVar15 < iVar13);
  }
  return;
}



// FUNCTION 142b736a6 FUN_142b736a6 body=12 status=ok
// SIG undefined FUN_142b736a6(void)

void FUN_142b736a6(undefined8 *param_1,longlong param_2)

{
  *(int *)*param_1 = *(int *)(param_2 + 0x30) - *(int *)(param_2 + 0x20);
  return;
}



// FUNCTION 142b736ca FUN_142b736ca body=5 status=ok
// SIG undefined FUN_142b736ca(void)

longlong FUN_142b736ca(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 142b736d0 FUN_142b736d0 body=12 status=ok
// SIG undefined FUN_142b736d0(void)

void FUN_142b736d0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142b736d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142b736dc FUN_142b736dc body=29 status=ok
// SIG undefined FUN_142b736dc(void)

undefined8 FUN_142b736dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b73724 FUN_142b73724 body=29 status=ok
// SIG undefined FUN_142b73724(void)

undefined8 FUN_142b73724(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b7376c FUN_142b7376c body=29 status=ok
// SIG undefined FUN_142b7376c(void)

undefined8 FUN_142b7376c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b7378a FUN_142b7378a body=228 status=ok
// SIG undefined FUN_142b7378a(void)

void FUN_142b7378a(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *param_2;
  if (lVar3 != 0) {
    lVar9 = *param_1;
    uVar1 = *(undefined4 *)(lVar3 + 0xc);
    iVar2 = *(int *)(lVar9 + 0x78);
    *(uint *)(lVar9 + 0x78) = iVar2 + 1U;
    if (*(uint *)(lVar9 + 0x7c) < iVar2 + 1U) {
      FUN_1447de67e(lVar9 + 0x60,iVar2);
    }
    lVar8 = lVar9 + 0x60;
    if (*(longlong *)(lVar9 + 0x70) != 0) {
      lVar8 = *(longlong *)(lVar9 + 0x70);
    }
    *(undefined4 *)(lVar8 + (longlong)iVar2 * 4) = uVar1;
    iVar2 = *(int *)(lVar3 + 0x1c0);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(lVar3 + 0x1b8);
      lVar9 = 0;
      do {
        local_48 = *(undefined8 *)(lVar3 + lVar9);
        puVar4 = (undefined8 *)param_1[1];
        pcVar5 = (code *)*puVar4;
        plVar7 = puVar4 + 4;
        if ((longlong *)puVar4[2] != (longlong *)0x0) {
          plVar7 = (longlong *)puVar4[2];
        }
        uVar6 = (**(code **)(*plVar7 + 8))();
        (*pcVar5)(uVar6,&local_48);
        lVar9 = lVar9 + 8;
      } while ((longlong)iVar2 * 8 != lVar9);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b73888 FUN_142b73888 body=5 status=ok
// SIG undefined FUN_142b73888(void)

longlong FUN_142b73888(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 142b7388e FUN_142b7388e body=12 status=ok
// SIG undefined FUN_142b7388e(void)

void FUN_142b7388e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142b73897. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142b7389a FUN_142b7389a body=29 status=ok
// SIG undefined FUN_142b7389a(void)

undefined8 FUN_142b7389a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b738fc FUN_142b738fc body=9 status=ok
// SIG undefined FUN_142b738fc(void)

void FUN_142b738fc(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    return;
  }
  if (param_1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
    return;
  }
  return;
}



// FUNCTION 142b73936 FUN_142b73936 body=29 status=ok
// SIG undefined FUN_142b73936(void)

undefined8 FUN_142b73936(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b73976 FUN_142b73976 body=12 status=ok
// SIG undefined FUN_142b73976(void)

void FUN_142b73976(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142b7397f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142b73982 FUN_142b73982 body=29 status=ok
// SIG undefined FUN_142b73982(void)

undefined8 FUN_142b73982(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b739dc FUN_142b739dc body=768 status=ok
// SIG undefined FUN_142b739dc(void)

void FUN_142b739dc(longlong param_1,int *param_2)

{
  longlong lVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  double dVar5;
  int iVar6;
  double *pdVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  longlong lVar14;
  int *piVar15;
  longlong *plVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  pdVar7 = *(double **)(param_1 + 8);
  lVar17 = *(longlong *)(param_1 + 0x10);
  lVar14 = *(longlong *)(lVar17 + 0x28);
  lVar19 = (longlong)*param_2 * 200;
  dVar5 = *(double *)(lVar14 + 0x90 + lVar19);
  if (((((pdVar7[3] <= dVar5 && dVar5 != pdVar7[3]) ||
        (lVar1 = lVar14 + lVar19,
        *(double *)(lVar1 + 0xa8) <= *pdVar7 && *pdVar7 != *(double *)(lVar1 + 0xa8))) ||
       (pdVar7[4] <= *(double *)(lVar1 + 0x98) && *(double *)(lVar1 + 0x98) != pdVar7[4])) ||
      ((*(double *)(lVar1 + 0xb0) <= pdVar7[1] && pdVar7[1] != *(double *)(lVar1 + 0xb0) ||
       (pdVar7[5] <= *(double *)(lVar1 + 0xa0) && *(double *)(lVar1 + 0xa0) != pdVar7[5])))) ||
     (*(double *)(lVar1 + 0xb8) <= pdVar7[2] && pdVar7[2] != *(double *)(lVar1 + 0xb8)))
  goto LAB_142b73c73;
  if (*(int *)(lVar14 + 0x84 + lVar19) != -1) {
    local_60 = *(undefined4 *)(lVar14 + 0x80 + lVar19);
    plVar16 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x38);
    if (plVar16 != (longlong *)0x0) {
      (**(code **)(*plVar16 + 0x10))(plVar16,&local_60);
      local_60 = *(undefined4 *)(*(longlong *)(lVar17 + 0x28) + 0x84 + lVar19);
      plVar16 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x38);
      if (plVar16 != (longlong *)0x0) {
        (**(code **)(*plVar16 + 0x10))(plVar16,&local_60);
        goto LAB_142b73c73;
      }
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_function_call();
  }
  plVar16 = *(longlong **)(param_1 + 0x18);
  lVar17 = *(longlong *)(*plVar16 + 0x28);
  FUN_1449d7dd2(lVar17 + lVar19 + 0x10,&local_60,&DAT_14c846480);
  pdVar7 = (double *)plVar16[1];
  if (((pdVar7[3] <= (double)CONCAT44(uStack_5c,local_60) &&
        (double)CONCAT44(uStack_5c,local_60) != pdVar7[3]) || (local_48 < *pdVar7)) ||
     ((pdVar7[4] <= local_58 && local_58 != pdVar7[4] ||
      (((local_40 < pdVar7[1] || (pdVar7[5] <= local_50 && local_50 != pdVar7[5])) ||
       (local_38 < pdVar7[2])))))) goto LAB_142b73c73;
  piVar15 = (int *)(lVar17 + lVar19);
  lVar17 = plVar16[2];
  iVar6 = *(int *)(lVar17 + 0x18);
  *(uint *)(lVar17 + 0x18) = iVar6 + 1U;
  if (*(uint *)(lVar17 + 0x1c) < iVar6 + 1U) {
    FUN_141745f20((longlong *)(lVar17 + 0x10),iVar6);
  }
  lVar17 = *(longlong *)(lVar17 + 0x10);
  lVar14 = (longlong)iVar6 * 0x38;
  puVar2 = (uint *)(lVar17 + lVar14);
  *(undefined8 *)(lVar17 + lVar14) = 0;
  *(undefined8 *)(lVar17 + 0x18 + lVar14) = DAT_14c8464f0;
  uVar9 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  puVar3 = (undefined8 *)(lVar17 + 8 + lVar14);
  *puVar3 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  puVar3[1] = uVar9;
  *(undefined8 *)(lVar17 + 0x30 + lVar14) = DAT_14c8464f0;
  uVar12 = DAT_14c8464e8._4_4_;
  uVar11 = (undefined4)DAT_14c8464e8;
  uVar10 = DAT_14c8464e0._4_4_;
  puVar4 = (undefined4 *)(lVar17 + 0x20 + lVar14);
  *puVar4 = (undefined4)DAT_14c8464e0;
  puVar4[1] = uVar10;
  puVar4[2] = uVar11;
  puVar4[3] = uVar12;
  if (*piVar15 == 3) {
    uVar8 = *(ulonglong *)(piVar15 + 2);
    if ((((uVar8 >> 0x20 != 0) && (uVar13 = (uint)uVar8, -1 < (int)uVar13)) &&
        (((int)uVar13 < DAT_14c9647dc &&
         ((plVar16 = (longlong *)
                     ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0xd & 0x3fff8))),
          plVar16 != (longlong *)0x0 && ((int)plVar16[2] == (int)(uVar8 >> 0x20))))))) &&
       ((*(uint *)(plVar16 + 1) & 0x10200000) == 0)) goto LAB_142b73c3c;
LAB_142b73bf7:
    *puVar2 = 0;
    uVar13 = 0;
  }
  else {
    if (*piVar15 != 2) goto LAB_142b73bf7;
    plVar16 = (longlong *)(piVar15 + 2);
LAB_142b73c3c:
    if (*plVar16 == 0) goto LAB_142b73bf7;
    uVar13 = *(uint *)(*plVar16 + 0xc);
    *puVar2 = uVar13;
    if ((int)uVar13 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    uVar13 = *(uint *)(lVar17 + 0x10);
    if (*(uint *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      uVar18 = DAT_14c964868 + 1;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar20) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar18);
      }
      LOCK();
      uVar13 = *(uint *)(lVar17 + 0x10);
      bVar20 = uVar13 == 0;
      if (bVar20) {
        *(uint *)(lVar17 + 0x10) = uVar18;
        uVar13 = 0;
      }
      UNLOCK();
      if (bVar20) {
        uVar13 = uVar18;
      }
    }
  }
  puVar2[1] = uVar13;
LAB_142b73c73:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b73ce6 FUN_142b73ce6 body=9 status=ok
// SIG undefined FUN_142b73ce6(void)

void FUN_142b73ce6(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    return;
  }
  if (param_1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,param_1);
    return;
  }
  return;
}



// FUNCTION 142b73cf6 FUN_142b73cf6 body=239 status=ok
// SIG undefined FUN_142b73cf6(void)

void FUN_142b73cf6(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x2008);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x100;
    if (0x100 < uVar1) {
      uVar3 = (ulonglong)(int)uVar1;
      if (0x100 < *(uint *)(param_1 + 0x200c)) {
        uVar3 = uVar3 + (uVar3 * 3 >> 3) + 0x10;
      }
      uVar4 = uVar3 * 0x20;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar4 < 0x7ff1) {
            uVar4 = (ulonglong)
                    (ushort)(&DAT_14c841d90)
                            [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
          }
          else {
            uVar3 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar3 = (ulonglong)DAT_14c841df8;
            }
            uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
          }
        }
        else {
          uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
        }
      }
      iVar2 = (int)(uVar4 >> 5);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x200c) = iVar5;
    FUN_142b6cb40(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 142b73de5 FUN_142b73de5 body=2056 status=ok
// SIG undefined FUN_142b73de5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b73de5(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  char *local_38;
  int local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400b22c2(&local_38,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_38,&DAT_14c9abc08);
  if (cVar1 == '\0') {
    _DAT_14c9abc08 = 0;
    uRam000000014c9abc10 = 0;
  }
  if (local_38 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_38 = (char *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *(undefined ***)local_38 = &PTR_LAB_14a1e1a40;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  *(longlong *)(local_38 + 0x10) = lVar4;
  *(undefined ***)local_38 = &PTR_FUN_14a1e19d0;
  *(code **)(local_38 + 0x18) = FUN_142b62a7c;
  local_48 = 1;
  FUN_14156bb80(&DAT_14c9abc18,L"ToggleORDARCollisionDebugRender",
                L"Toggle debug rendering for ORDAR collision.",&local_38);
  if (local_30 == 0) {
LAB_142b73f0e:
    if (local_38 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_38 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
    goto LAB_142b73f0e;
  }
  atexit(FUN_142b62a91);
  local_38 = (char *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *(undefined ***)local_38 = &PTR_LAB_14a1e1a40;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  *(longlong *)(local_38 + 0x10) = lVar4;
  *(undefined ***)local_38 = &PTR_FUN_14a1e19d0;
  *(code **)(local_38 + 0x18) = FUN_142b62ad6;
  local_48 = 1;
  FUN_14156bb80(&DAT_14c9abc28,L"ToggleORDARCollisionLoadingAroundPlayer",
                L"Toggle debug drawing the chunks around the player and forcing their load.",
                &local_38);
  if (local_30 == 0) {
LAB_142b73fec:
    if (local_38 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_38 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
    goto LAB_142b73fec;
  }
  atexit(FUN_142b62aeb);
  local_38 = (char *)((ulonglong)local_38 & 0xffffffff00000000);
  local_48 = 0x40;
  FUN_14078dbce(&DAT_14c9abc38,L"gbx.ORDAR.CollisionStreaming",&local_38,
                L"Used to determine how world collision is handled. 0 disables collision streaming. 1 generates chunks at runtime as needed. 2 generates all chunk before play begins. 3 uses the exiting dchunk file."
               );
  atexit(FUN_142b62b30);
  local_38 = (char *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *(undefined ***)local_38 = &PTR_LAB_14a1e1a40;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  *(longlong *)(local_38 + 0x10) = lVar4;
  *(undefined ***)local_38 = &PTR_FUN_14a1e19d0;
  *(code **)(local_38 + 0x18) = FUN_142b62b75;
  local_48 = 1;
  FUN_14156bb80(&DAT_14c9abc50,L"BuildWorldCollisionChunks",
                L"Manually triggers a refresh of the world collision chunking for use with collision streaming."
                ,&local_38);
  if (local_30 != 0) {
    if (local_38 == (char *)0x0) goto LAB_142b7410e;
    (*(code *)**(undefined8 **)local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_142b7410e:
  atexit(FUN_142b63379);
  local_38 = "SMInstance";
  local_30 = 10;
  local_2c = 0;
  uVar2 = FUN_14001a6c0(&local_38,1);
  _DAT_14c9abc68 = (ulonglong)uVar2;
  local_38 = "bone";
  local_30 = 4;
  local_2c = 0;
  FUN_14001a6c0(&local_38,1);
  local_48 = 0;
  FUN_141471170(&DAT_14c9abc70,L"p.gbx.ORDAR.Solver.PropagationConstraintType",&DAT_14c75f910,
                L"The type of constraint propagation to use. 0: Off. 1: Naive articulated constraint propagation. 2: Depth first sort. 3: Shock propagation."
               );
  atexit(FUN_142b633be);
  local_48 = 0;
  FUN_14153156c(&DAT_14c9abc80,L"p.gbx.ORDAR.Solver.bUseJointPropagationIterationReduction",
                &DAT_14c75f914,
                L"Reduce the number of iterations dynamic to take into account the extra joint propagation constraints and limit the impact on performance."
               );
  atexit(FUN_142b63403);
  local_48 = 0;
  FUN_141471170(&DAT_14c9abc90,L"p.gbx.ORDAR.Solver.MinForwardDynamicIterations",&DAT_14c75f918,
                L"The minimum number of forward dynamic iterations that will be done.");
  atexit(FUN_142b63448);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c9abca8,L"p.gbx.ORDAR.MinimumHeightfieldThickness",&DAT_14c75f920,
                L"The minimum thickness a heightfield triangle can be. It is possible for the thickness to increase for fast moving objects."
               );
  atexit(FUN_142b6b2bb);
  puVar5 = &DAT_14c846480;
  puVar6 = &DAT_14c9abcc0;
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  _DAT_14c9abd30 = DAT_14c8464f0;
  _DAT_14c9abd20 = (undefined4)DAT_14c8464e0;
  uRam000000014c9abd24 = DAT_14c8464e0._4_4_;
  uRam000000014c9abd28 = (undefined4)DAT_14c8464e8;
  uRam000000014c9abd2c = DAT_14c8464e8._4_4_;
  local_48 = 0;
  FUN_1415c789c(&DAT_14c9abd38,L"p.gbx.ORDAR.Solver.SlopSkin",&DAT_14c75f91c,
                L"The slop distance used for Baumgarte stabilization for collisions.");
  atexit(FUN_142b6c414);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c9abd48,L"p.gbx.ORDAR.Solver.SelfCollisionSlopSkin",&DAT_14c75f924,
                L"The slop distance used for Baumgarte stabilization for articulation self collisions."
               );
  atexit(FUN_142b6c459);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c9abd58,L"p.gbx.ORDAR.Solver.LinearSlopSkin",&DAT_14c75f928,
                L"The slop distance used for Baumgarte stabilization for linear constraints.");
  atexit(FUN_142b6c49e);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c9abd68,
                L"p.gbx.ORDAR.Solver.LinearBaumgarteMaxCorrectionProjectionMultiplier",
                &DAT_14c9abc60,
                L"A multiplier used for projection for linear constraints based on the max error correction Baumgarte can use."
               );
  atexit(FUN_142b6c4e3);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c9abd78,L"p.gbx.ORDAR.Solver.AngularSlopSkin",&DAT_14c75f92c,
                L"The slop angle used for Baumgarte stabilization for angular constraints.");
  atexit(FUN_142b6c528);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c9abd88,
                L"p.gbx.ORDAR.Solver.AngularBaumgarteMaxCorrectionProjectionMultiplier",
                &DAT_14c75f908,
                L"A multiplier used for projection for angular constraints based on the max error correction Baumgarte can use."
               );
  atexit(FUN_142b6c56d);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c9abd98,L"p.gbx.ORDAR.Solver.Friction.NoMotionThreshold",&DAT_14c75f930,
                L"The constraint velocity threshold to consider there to be no motion for the purposes of friction."
               );
  atexit(FUN_142b6c5b2);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c9abda8,L"p.gbx.ORDAR.Solver.BaumgarteStabilizationFactor",&DAT_14c75f934,
                L"Baumgarte stabilization factor to use for collisions.");
  atexit(FUN_142b6c5f7);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c9abdb8,L"p.gbx.ORDAR.Solver.BaumgarteConstraintAngularStabilizationFactor",
                &DAT_14c75f938,L"Baumgarte stabilization factor to use for angular constraints.");
  atexit(FUN_142b6c63c);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c9abdc8,L"p.gbx.ORDAR.Solver.BaumgarteConstraintLinearStabilizationFactor",
                &DAT_14c75f93c,L"Baumgarte stabilization factor to use for linear constraints.");
  atexit(FUN_142b6c681);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c9abdd8,L"p.gbx.ORDAR.Solver.BaumgarteSelfCollisionStabilizationFactor",
                &DAT_14c75f940,
                L"Baumgarte stabilization factor to use for self collision Typical value is .002.");
  atexit(FUN_142b6c6c6);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c9abde8,L"p.gbx.ORDAR.Solver.MaxBaumgarteCorrectionDepth",&DAT_14c760090,
                L"The max correction depth that baumgarte stabilization can act on. A value less than 2 effectively disables baumgarte."
               );
  atexit(FUN_142b6c70b);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c9abdf8,L"p.gbx.ORDAR.Solver.MaxBaumgarteCorrectionAngularError",
                &DAT_14c75f904,L"The max constraint angle that baumgarte stabilization can act on.")
  ;
  atexit(FUN_142b6c750);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c9abe08,L"p.gbx.ORDAR.Solver.MaxBaumgarteCorrectionLinearError",
                &DAT_14c75f90c,
                L"The max constraint distance that baumgarte stabilization can act on.");
  atexit(FUN_142b6c795);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c9abe18,L"p.gbx.ORDAR.Solver.RigidNLGSCorrectionFactor",&DAT_14c9abca0,
                L"The correction factor used in Rigidified Non-Linear Gauss Siedel solving of position constraints for articulations."
               );
  atexit(FUN_142b6c7da);
  local_48 = 0;
  FUN_14153156c(&DAT_14c9abe28,L"p.gbx.ORDAR.Solver.UseCollisionLambdaClamping",&DAT_14c75f944,
                L"Use the rigidified mass/inertia of articulations to clamp the total force that can be applied due to collisions."
               );
  atexit(FUN_142b6c81f);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b745fc FUN_142b745fc body=70 status=ok
// SIG undefined FUN_142b745fc(void)

void FUN_142b745fc(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a1e4950;
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
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



// FUNCTION 142b74643 FUN_142b74643 body=102 status=ok
// SIG undefined FUN_142b74643(void)

void FUN_142b74643(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014a1e4b00;
  local_14 = 7;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1462b4358(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b746ac FUN_142b746ac body=36 status=ok
// SIG undefined FUN_142b746ac(void)

ulonglong FUN_142b746ac(longlong param_1,longlong param_2)

{
  undefined8 in_RAX;
  ulonglong uVar1;
  
  uVar1 = CONCAT71((int7)((ulonglong)in_RAX >> 8),*(undefined1 *)(param_1 + 6)) & 0xffffffffffffff07
  ;
  if ((char)uVar1 == '\x01') {
    uVar1 = CONCAT71((int7)(uVar1 >> 8),1);
    if (*(byte *)(param_2 + 0x32) < 5) {
      uVar1 = 0x202010201 >> ((*(byte *)(param_2 + 0x32) & 7) << 3);
    }
  }
  return uVar1;
}



// FUNCTION 142b746d0 FUN_142b746d0 body=69 status=ok
// SIG undefined FUN_142b746d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b746d0(void)

{
  _DAT_14c9abe68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b74712. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abe70,1);
  return;
}



// FUNCTION 142b74715 FUN_142b74715 body=69 status=ok
// SIG undefined FUN_142b74715(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b74715(void)

{
  _DAT_14c9abe80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b74757. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abe88,1);
  return;
}



// FUNCTION 142b7475a FUN_142b7475a body=69 status=ok
// SIG undefined FUN_142b7475a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b7475a(void)

{
  _DAT_14c9abe98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b7479c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abea0,1);
  return;
}



// FUNCTION 142b7479f FUN_142b7479f body=69 status=ok
// SIG undefined FUN_142b7479f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b7479f(void)

{
  _DAT_14c9abeb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b747e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abeb8,1);
  return;
}



// FUNCTION 142b747e4 FUN_142b747e4 body=69 status=ok
// SIG undefined FUN_142b747e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b747e4(void)

{
  _DAT_14c9abec8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b74826. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abed0,1);
  return;
}



// FUNCTION 142b74829 FUN_142b74829 body=69 status=ok
// SIG undefined FUN_142b74829(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b74829(void)

{
  _DAT_14c9abee0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b7486b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abee8,1);
  return;
}



// FUNCTION 142b7486e FUN_142b7486e body=69 status=ok
// SIG undefined FUN_142b7486e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b7486e(void)

{
  _DAT_14c9abef8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b748b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abf00,1);
  return;
}



// FUNCTION 142b748b3 FUN_142b748b3 body=69 status=ok
// SIG undefined FUN_142b748b3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b748b3(void)

{
  _DAT_14c9abf10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b748f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abf18,1);
  return;
}



// FUNCTION 142b748f8 FUN_142b748f8 body=69 status=ok
// SIG undefined FUN_142b748f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b748f8(void)

{
  _DAT_14c9abf28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b7493a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abf30,1);
  return;
}



// FUNCTION 142b7493d FUN_142b7493d body=69 status=ok
// SIG undefined FUN_142b7493d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b7493d(void)

{
  _DAT_14c9abf40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b7497f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abf48,1);
  return;
}



// FUNCTION 142b74982 FUN_142b74982 body=69 status=ok
// SIG undefined FUN_142b74982(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b74982(void)

{
  _DAT_14c9abf58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b749c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9abf60,1);
  return;
}



// FUNCTION 142b74a24 FUN_142b74a24 body=1292 status=ok
// SIG undefined FUN_142b74a24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b74a24(longlong *param_1)

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
  int iVar16;
  longlong lVar17;
  char cVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  undefined2 *puVar22;
  int iVar23;
  undefined1 auStack_d8 [32];
  code *local_b8;
  code *local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined8 local_90;
  undefined2 *local_88;
  int iStack_80;
  int iStack_7c;
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
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((((DAT_14ca83900 == (longlong *)0x0) ||
       (iVar19 = (**(code **)(*DAT_14ca83900 + 0x28))(), iVar19 != 2)) &&
      (cVar18 = FUN_1462b4477(), cVar18 != '\0')) &&
     (cVar18 = FUN_1459320ef(DAT_14c9abe70,L"nvaftermath"), cVar18 != '\0')) {
    FUN_140d6ac5a();
    FUN_140056680(&local_98);
    iVar19 = (int)local_90;
    iVar20 = ((int)local_90 == 0) + 0x2e;
    local_88 = local_98;
    local_98 = (undefined2 *)0x0;
    iStack_80 = (int)local_90;
    iVar16 = local_90._4_4_;
    iStack_7c = local_90._4_4_;
    local_90 = 0;
    iVar23 = iVar20 + iVar19;
    if (iVar23 < iVar19) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar20);
    }
    if (iVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar23);
    }
    if (iVar16 < iVar23) {
      FUN_1446f8c06(&local_88);
    }
    FUN_1401aebe8(&local_88,L"Binaries/ThirdParty/NVIDIA/NVaftermath/Win64/",0x2d);
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    puVar22 = &DAT_149dfb77a;
    if (iStack_80 != 0) {
      puVar22 = local_88;
    }
    FUN_1458f4f8e(puVar22);
    DAT_14c9ac118 = FUN_14155261e(L"GFSDK_Aftermath_Lib.x64.dll");
    puVar22 = &DAT_149dfb77a;
    if (iStack_80 != 0) {
      puVar22 = local_88;
    }
    FUN_145be8130(puVar22);
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar13 = DAT_14c9abfa0_4;
  uVar14 = (undefined4)lRam000000014c9abfa8;
  uVar15 = lRam000000014c9abfa8._4_4_;
  local_58 = _DAT_14c9abfa0;
  uStack_54 = DAT_14c9abfa0_4;
  uStack_50 = (undefined4)lRam000000014c9abfa8;
  uStack_4c = lRam000000014c9abfa8._4_4_;
  uVar9 = (undefined4)DAT_14c9abf90;
  uVar10 = DAT_14c9abf90._4_4_;
  uVar11 = (undefined4)lRam000000014c9abf98;
  uVar12 = lRam000000014c9abf98._4_4_;
  local_68 = (undefined4)DAT_14c9abf90;
  uStack_64 = DAT_14c9abf90._4_4_;
  uStack_60 = (undefined4)lRam000000014c9abf98;
  uStack_5c = lRam000000014c9abf98._4_4_;
  uVar5 = (undefined4)DAT_14c9abf80;
  uVar6 = DAT_14c9abf80._4_4_;
  uVar7 = (undefined4)lRam000000014c9abf88;
  uVar8 = lRam000000014c9abf88._4_4_;
  local_78 = (undefined4)DAT_14c9abf80;
  uStack_74 = DAT_14c9abf80._4_4_;
  uStack_70 = (undefined4)lRam000000014c9abf88;
  uStack_6c = lRam000000014c9abf88._4_4_;
  uVar1 = DAT_14c9abf70._0_4_;
  uVar2 = DAT_14c9abf70._4_4_;
  uVar3 = (undefined4)lRam000000014c9abf78;
  uVar4 = lRam000000014c9abf78._4_4_;
  local_88 = DAT_14c9abf70;
  iStack_80 = (undefined4)lRam000000014c9abf78;
  iStack_7c = lRam000000014c9abf78._4_4_;
  DAT_14c9abf70 = (undefined2 *)*param_1;
  lRam000000014c9abf78 = param_1[1];
  DAT_14c9abf80 = param_1[2];
  lRam000000014c9abf88 = param_1[3];
  DAT_14c9abf90 = param_1[4];
  lRam000000014c9abf98 = param_1[5];
  lRam000000014c9abfa8 = param_1[7];
  lVar17 = param_1[6];
  *(undefined4 *)(param_1 + 6) = _DAT_14c9abfa0;
  _DAT_14c9abfa0 = lVar17;
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
  if (DAT_14c9ac118 != 0) {
    DAT_14c9ac114 = 0;
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar18 = FUN_14054d46e(&DAT_14c846b20,L"nvaftermathmarkers");
    uVar21 = 1;
    if (cVar18 == '\0') {
      iVar19 = (**(code **)(*DAT_14c9abe88 + 0xb0))();
      uVar21 = (uint)(iVar19 != 0);
    }
    DAT_14c9ac114 = DAT_14c9ac114 | uVar21;
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar18 = FUN_14054d46e(&DAT_14c846b20,L"nvaftermathresources");
    uVar21 = 2;
    if (cVar18 == '\0') {
      iVar19 = (**(code **)(*DAT_14c9abeb8 + 0xb0))();
      uVar21 = (uint)(iVar19 != 0) * 2;
    }
    DAT_14c9ac114 = DAT_14c9ac114 | uVar21;
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar18 = FUN_14054d46e(&DAT_14c846b20,L"nvaftermathcallstack");
    uVar21 = 0x40000000;
    if (cVar18 == '\0') {
      iVar19 = (**(code **)(*DAT_14c9abea0 + 0xb0))();
      uVar21 = (uint)(iVar19 != 0) << 0x1e;
    }
    DAT_14c9ac114 = DAT_14c9ac114 | uVar21;
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar18 = FUN_14054d46e(&DAT_14c846b20,L"nvAftermathDumpShaderDebugInfo");
    uVar21 = 8;
    if (cVar18 == '\0') {
      iVar19 = (**(code **)(*DAT_14c9abf00 + 0xb0))();
      uVar21 = (uint)(iVar19 != 0) << 3;
    }
    DAT_14c9ac114 = DAT_14c9ac114 | uVar21;
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar18 = FUN_14054d46e(&DAT_14c846b20,L"nvaftermathall");
    uVar21 = 0x4000000b;
    if (cVar18 == '\0') {
      iVar19 = (**(code **)(*DAT_14c9abed0 + 0xb0))();
      uVar21 = 0x4000000b;
      if (iVar19 == 0) {
        uVar21 = 0;
      }
    }
    DAT_14c9ac114 = DAT_14c9ac114 | uVar21;
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar18 = FUN_14054d46e(&DAT_14c846b20,L"nvAftermathDumpShaderDebugInfo");
    uVar21 = 8;
    if (cVar18 == '\0') {
      iVar19 = (**(code **)(*DAT_14c9abf00 + 0xb0))();
      uVar21 = (uint)(iVar19 != 0) << 3;
    }
    local_b8 = (code *)0x0;
    if (uVar21 != 0 || (DAT_14c9ac114 & 8) != 0) {
      local_b8 = FUN_142b75741;
    }
    local_a8 = FUN_142b74f55;
    local_b0 = FUN_142b75034;
    local_a0 = 0;
    DAT_14c9ac114 = uVar21 | DAT_14c9ac114;
    iVar19 = GFSDK_Aftermath_EnableGpuCrashDumps(0x21a,3,1,FUN_142b75991);
    if (iVar19 == 1) {
      DAT_14c9ac110 = 1;
    }
  }
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b74f55 FUN_142b74f55 body=222 status=ok
// SIG undefined FUN_142b74f55(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b74f55(undefined8 param_1,undefined4 param_2,undefined8 param_3,code *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  pcVar1 = DAT_14c9abf70;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c9abf70 == (code *)0x0) {
    _DAT_00000000 = 0x100000036;
  }
  else {
    local_48 = 0;
    local_50 = 0;
    plVar3 = &DAT_14c9abf90;
    if (DAT_14c9abf80 != (longlong *)0x0) {
      plVar3 = DAT_14c9abf80;
    }
    local_68 = param_1;
    local_5c = param_2;
    local_58 = param_3;
    uVar2 = (**(code **)(*plVar3 + 8))();
    local_78 = &local_50;
    local_70 = &local_48;
    (*pcVar1)(uVar2,&local_68,&local_5c,&local_58);
  }
  if ((int)_DAT_00000000 != 0) {
    (*param_4)(_DAT_00000000,_DAT_00000000 & 0xffffffff);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b75034 FUN_142b75034 body=1804 status=ok
// SIG undefined FUN_142b75034(void)

void FUN_142b75034(code *param_1)

{
  ushort uVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  undefined **ppuVar4;
  int iVar5;
  char cVar6;
  wchar_t *pwVar7;
  size_t sVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  undefined **_Str;
  undefined **ppuVar13;
  wchar_t *pwVar14;
  undefined1 auStack_1a8 [40];
  undefined **local_180;
  int local_178;
  wchar_t *local_128;
  int local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined **local_f0;
  uint local_e4;
  undefined *local_e0 [16];
  undefined **local_60;
  undefined **local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_140056680(&local_180,&DAT_14c83c038);
  _Str = local_180;
  if (local_178 == 0) {
    _Str = (undefined **)&DAT_149dfb77a;
  }
  local_60 = (undefined **)0x0;
  if (_Str == (undefined **)0x0) {
    local_58 = (undefined **)0x0;
    local_50 = 0;
  }
  else {
    sVar8 = wcslen((wchar_t *)_Str);
    local_e4 = 0;
    local_f0 = (undefined **)CONCAT44(local_f0._4_4_,0x7fffffff);
    uVar10 = sVar8 & 0xffffffff;
    ppuVar13 = _Str;
    do {
      iVar11 = (int)uVar10;
      if (iVar11 < 1) {
LAB_142b75181:
        local_50 = local_e4;
        uVar9 = local_e4 + 1;
        if (uVar9 < 0x81) goto LAB_142b751a1;
        FUN_1446efa72(&local_60,0,uVar9,1);
        local_f0 = local_60;
        goto LAB_142b751a3;
      }
      uVar1 = *(ushort *)ppuVar13;
      uVar9 = (uint)uVar1;
      ppuVar4 = (undefined **)((longlong)ppuVar13 + 2);
      uVar12 = iVar11 - 1;
      if ((uVar1 & 0xfc00) == 0xd800) {
        if (iVar11 == 1) {
          cVar6 = FUN_140024707(uVar9,&local_e4,&local_f0);
          if (cVar6 != '\0') goto LAB_142b75181;
          break;
        }
        if ((*(ushort *)ppuVar4 & 0xfc00) == 0xdc00) {
          uVar9 = (uint)uVar1 * 0x400 + (uint)*(ushort *)ppuVar4 + 0xfca02400;
          uVar12 = iVar11 - 2;
          ppuVar4 = (undefined **)((longlong)ppuVar13 + 4);
        }
      }
      ppuVar13 = ppuVar4;
      cVar6 = FUN_140024707(uVar9,&local_e4,&local_f0);
      uVar10 = (ulonglong)uVar12;
    } while (cVar6 != '\0');
    local_50 = 0xffffffff;
    uVar9 = 0;
LAB_142b751a1:
    local_f0 = (undefined **)0x0;
LAB_142b751a3:
    if (local_f0 == (undefined **)0x0) {
      local_f0 = local_e0;
    }
    iVar11 = (int)sVar8 + 1;
    local_e4 = uVar9;
    local_58 = local_f0;
    do {
      if (iVar11 < 1) break;
      uVar1 = *(ushort *)_Str;
      uVar9 = (uint)uVar1;
      ppuVar13 = (undefined **)((longlong)_Str + 2);
      iVar5 = iVar11 + -1;
      if ((uVar1 & 0xfc00) == 0xd800) {
        if (iVar11 == 1) {
          FUN_1400247af(uVar9,&local_f0,&local_e4);
          break;
        }
        if ((*(ushort *)ppuVar13 & 0xfc00) == 0xdc00) {
          uVar9 = (uint)uVar1 * 0x400 + (uint)*(ushort *)ppuVar13 + 0xfca02400;
          ppuVar13 = (undefined **)((longlong)_Str + 4);
          iVar5 = iVar11 + -2;
        }
      }
      iVar11 = iVar5;
      _Str = ppuVar13;
      cVar6 = FUN_1400247af(uVar9,&local_f0,&local_e4);
    } while (cVar6 != '\0');
  }
  (*param_1)(1,local_58);
  if (local_60 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if (local_180 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  pwVar7 = (wchar_t *)FUN_145c581c1();
  local_60 = (undefined **)0x0;
  if (pwVar7 == (wchar_t *)0x0) {
    local_58 = (undefined **)0x0;
    local_50 = 0;
  }
  else {
    sVar8 = wcslen(pwVar7);
    local_f0 = (undefined **)((ulonglong)local_f0 & 0xffffffff00000000);
    local_180 = (undefined **)CONCAT44(local_180._4_4_,0x7fffffff);
    uVar10 = sVar8 & 0xffffffff;
    pwVar14 = pwVar7;
    do {
      iVar11 = (int)uVar10;
      if (iVar11 < 1) {
LAB_142b753a0:
        local_50 = (int)local_f0;
        uVar9 = (int)local_f0 + 1;
        if (uVar9 < 0x81) goto LAB_142b753c0;
        FUN_1446efa72(&local_60,0,uVar9,1);
        local_180 = local_60;
        goto LAB_142b753c2;
      }
      wVar2 = *pwVar14;
      uVar9 = (uint)(ushort)wVar2;
      pwVar3 = pwVar14 + 1;
      uVar12 = iVar11 - 1;
      if ((wVar2 & 0xfc00U) == 0xd800) {
        if (iVar11 == 1) {
          cVar6 = FUN_140024707(uVar9,&local_f0,&local_180);
          if (cVar6 != '\0') goto LAB_142b753a0;
          break;
        }
        if (((ushort)*pwVar3 & 0xfc00) == 0xdc00) {
          uVar9 = (uint)(ushort)wVar2 * 0x400 + (uint)(ushort)*pwVar3 + 0xfca02400;
          uVar12 = iVar11 - 2;
          pwVar3 = pwVar14 + 2;
        }
      }
      pwVar14 = pwVar3;
      cVar6 = FUN_140024707(uVar9,&local_f0,&local_180);
      uVar10 = (ulonglong)uVar12;
    } while (cVar6 != '\0');
    local_50 = -1;
    uVar9 = 0;
LAB_142b753c0:
    local_180 = (undefined **)0x0;
LAB_142b753c2:
    if (local_180 == (undefined **)0x0) {
      local_180 = local_e0;
    }
    iVar11 = (int)sVar8 + 1;
    local_f0 = (undefined **)CONCAT44(local_f0._4_4_,uVar9);
    local_58 = local_180;
    do {
      if (iVar11 < 1) break;
      wVar2 = *pwVar7;
      uVar9 = (uint)(ushort)wVar2;
      pwVar14 = pwVar7 + 1;
      iVar5 = iVar11 + -1;
      if ((wVar2 & 0xfc00U) == 0xd800) {
        if (iVar11 == 1) {
          FUN_1400247af(uVar9,&local_180,&local_f0);
          break;
        }
        if (((ushort)*pwVar14 & 0xfc00) == 0xdc00) {
          uVar9 = (uint)(ushort)wVar2 * 0x400 + (uint)(ushort)*pwVar14 + 0xfca02400;
          pwVar14 = pwVar7 + 2;
          iVar5 = iVar11 + -2;
        }
      }
      iVar11 = iVar5;
      pwVar7 = pwVar14;
      cVar6 = FUN_1400247af(uVar9,&local_180,&local_f0);
    } while (cVar6 != '\0');
  }
  (*param_1)(2,local_58);
  if (local_60 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  FUN_1467b3f80(&local_180,4,L"Aftermath crash dump");
  local_180 = &PTR_FUN_149e401d0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  FUN_1467b533e(&local_180);
  pwVar7 = local_128;
  if (local_120 == 0) {
    pwVar7 = L"";
  }
  local_60 = (undefined **)0x0;
  if (pwVar7 == (wchar_t *)0x0) {
    local_58 = (undefined **)0x0;
    local_50 = 0;
  }
  else {
    sVar8 = wcslen(pwVar7);
    local_e4 = 0;
    local_f0 = (undefined **)CONCAT44(local_f0._4_4_,0x7fffffff);
    uVar10 = sVar8 & 0xffffffff;
    pwVar14 = pwVar7;
    do {
      iVar11 = (int)uVar10;
      if (iVar11 < 1) {
LAB_142b755f8:
        local_50 = local_e4;
        uVar9 = local_e4 + 1;
        if (uVar9 < 0x81) goto LAB_142b75618;
        FUN_1446efa72(&local_60,0,uVar9,1);
        local_f0 = local_60;
        goto LAB_142b7561a;
      }
      wVar2 = *pwVar14;
      uVar9 = (uint)(ushort)wVar2;
      pwVar3 = pwVar14 + 1;
      uVar12 = iVar11 - 1;
      if ((wVar2 & 0xfc00U) == 0xd800) {
        if (iVar11 == 1) {
          cVar6 = FUN_140024707(uVar9,&local_e4,&local_f0);
          if (cVar6 != '\0') goto LAB_142b755f8;
          break;
        }
        if (((ushort)*pwVar3 & 0xfc00) == 0xdc00) {
          uVar9 = (uint)(ushort)wVar2 * 0x400 + (uint)(ushort)*pwVar3 + 0xfca02400;
          uVar12 = iVar11 - 2;
          pwVar3 = pwVar14 + 2;
        }
      }
      pwVar14 = pwVar3;
      cVar6 = FUN_140024707(uVar9,&local_e4,&local_f0);
      uVar10 = (ulonglong)uVar12;
    } while (cVar6 != '\0');
    local_50 = 0xffffffff;
    uVar9 = 0;
LAB_142b75618:
    local_f0 = (undefined **)0x0;
LAB_142b7561a:
    if (local_f0 == (undefined **)0x0) {
      local_f0 = local_e0;
    }
    iVar11 = (int)sVar8 + 1;
    local_e4 = uVar9;
    local_58 = local_f0;
    do {
      if (iVar11 < 1) break;
      wVar2 = *pwVar7;
      uVar9 = (uint)(ushort)wVar2;
      pwVar14 = pwVar7 + 1;
      iVar5 = iVar11 + -1;
      if ((wVar2 & 0xfc00U) == 0xd800) {
        if (iVar11 == 1) {
          FUN_1400247af(uVar9,&local_f0,&local_e4);
          break;
        }
        if (((ushort)*pwVar14 & 0xfc00) == 0xdc00) {
          uVar9 = (uint)(ushort)wVar2 * 0x400 + (uint)(ushort)*pwVar14 + 0xfca02400;
          pwVar14 = pwVar7 + 2;
          iVar5 = iVar11 + -2;
        }
      }
      iVar11 = iVar5;
      pwVar7 = pwVar14;
      cVar6 = FUN_1400247af(uVar9,&local_f0,&local_e4);
    } while (cVar6 != '\0');
  }
  (*param_1)(0x10000,local_58);
  if (local_60 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  FUN_14682ec20(&local_180);
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b75741 FUN_142b75741 body=590 status=ok
// SIG undefined FUN_142b75741(void)

void FUN_142b75741(void *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  size_t sVar5;
  longlong *plVar6;
  int iVar7;
  undefined2 *puVar8;
  wchar_t *_Str;
  undefined1 auStack_a8 [40];
  undefined2 *local_80;
  undefined8 local_78;
  undefined2 *local_70;
  int local_68;
  int local_64;
  wchar_t *local_60;
  undefined2 **local_58;
  undefined1 local_4c [4];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  uStack_40 = 0;
  iVar2 = GFSDK_Aftermath_GetShaderDebugInfoIdentifier(0x21a,param_1,param_2,&local_48);
  if (iVar2 == 1) {
    FUN_140002266(&local_60,L"%016llX-%016llX.nvdbg",local_48,uStack_40);
    _Str = local_60;
    if ((int)local_58 == 0) {
      _Str = L"";
    }
    uVar4 = FUN_14047ac8c();
    FUN_1449b8608(&local_80,uVar4,L"Logs/");
    sVar5 = wcslen(_Str);
    iVar2 = (int)local_78;
    iVar3 = (uint)((int)sVar5 != -1 && (int)local_78 == 0) + (int)sVar5 + 1;
    local_70 = local_80;
    local_80 = (undefined2 *)0x0;
    local_68 = (int)local_78;
    iVar1 = local_78._4_4_;
    local_64 = local_78._4_4_;
    local_78 = 0;
    iVar7 = iVar3 + iVar2;
    if (iVar7 < iVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar3);
    }
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    if (iVar1 < iVar7) {
      FUN_1446f8c06(&local_70);
    }
    FUN_1401aebe8(&local_70,_Str,sVar5 & 0xffffffff);
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_60 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    plVar6 = (longlong *)FUN_14054d1d4();
    puVar8 = local_70;
    if (local_68 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6,puVar8,0);
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x170))(plVar6,param_1,param_2);
      (**(code **)(*plVar6 + 0x1f8))(plVar6);
    }
    FUN_1467b67f2(&local_70);
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9ac0a0);
    local_80 = (undefined2 *)0x0;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    local_78 = CONCAT44(local_78._4_4_,param_2);
    if (param_2 == 0) {
      local_78 = 0;
    }
    else {
      FUN_1447a127e(&local_80,param_2,0);
      memcpy(local_80,param_1,(ulonglong)param_2);
    }
    local_60 = (wchar_t *)&local_48;
    local_58 = &local_80;
    FUN_14712605e(local_4c);
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9ac0a0);
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b75991 FUN_142b75991 body=6779 status=ok
// SIG undefined FUN_142b75991(void)

void FUN_142b75991(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  code *pcVar8;
  wchar_t *pwVar9;
  undefined *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined2 *puVar13;
  wchar_t *pwVar14;
  uint uVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined1 auStack_1f8 [32];
  code *local_1d8;
  code *local_1d0;
  code *pcStack_1c8;
  code **local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a0;
  wchar_t *local_198;
  wchar_t *local_190;
  wchar_t *local_188;
  wchar_t *local_180;
  wchar_t *local_178;
  undefined4 local_170;
  int local_15c;
  longlong local_158;
  int local_150;
  longlong local_148;
  int local_140;
  code *local_138;
  ulonglong uStack_130;
  code *local_128;
  ulonglong uStack_120;
  code *local_118;
  ulonglong uStack_110;
  undefined8 local_100;
  undefined8 local_f8;
  ulonglong uStack_f0;
  undefined2 *local_e8;
  int local_e0;
  code *local_d8;
  int local_d0;
  code *local_c8;
  ulonglong uStack_c0;
  longlong local_b8;
  int local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  int iStack_9c;
  code *local_98;
  char local_90;
  code *local_88;
  ulonglong uStack_80;
  code *local_78;
  uint local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  DAT_14ca778e9 = 1;
  uStack_a8 = 0;
  uStack_a4 = 0;
  iStack_a0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  uStack_ac = 0;
  iStack_9c = 0xffffffff;
  local_90 = '\0';
  FUN_1402160b8(&local_88);
  FUN_14047ad2e(&local_88,&local_d8,L"%Y.%m.%d-%H.%M.%S");
  iVar1 = DAT_14c9ac108;
  local_1d8 = local_d8;
  if (local_d0 == 0) {
    local_1d8 = (code *)&DAT_149dfb77a;
  }
  LOCK();
  DAT_14c9ac108 = DAT_14c9ac108 + 1;
  UNLOCK();
  plVar4 = (longlong *)(**(code **)(*DAT_14ca83900 + 0x30))();
  uVar5 = (**(code **)(*plVar4 + 0x20))(plVar4);
  FUN_140002266(&local_e8,L"%s.%u.%s.nv-gpudmp",uVar5,iVar1);
  uVar5 = FUN_14047ac8c();
  FUN_1449b8608(&local_f8,uVar5,L"Logs/");
  local_88 = local_f8;
  iVar1 = (int)uStack_f0 + -1;
  if ((int)uStack_f0 == 0) {
    iVar1 = 0;
  }
  uStack_80 = CONCAT44(uStack_80._4_4_,iVar1);
  local_78 = (code *)local_e8;
  local_70 = local_e0 + -1;
  if (local_e0 == 0) {
    local_70 = 0;
  }
  FUN_140bee87a(&local_c8,&local_88,2);
  if (CONCAT44(uStack_a4,uStack_a8) != 0) {
    FUN_1400020a8();
  }
  uStack_a8 = SUB84(local_c8,0);
  uStack_a4 = (undefined4)((ulonglong)local_c8 >> 0x20);
  iStack_a0 = (int)uStack_c0;
  iStack_9c = (int)(uStack_c0 >> 0x20);
  local_c8 = (code *)0x0;
  uStack_c0 = 0;
  if (local_f8 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1467b67f2(&uStack_a8);
  iVar1 = DAT_14c9ac108;
  pcVar8 = local_d8;
  if (local_d0 == 0) {
    pcVar8 = (code *)&DAT_149dfb77a;
  }
  LOCK();
  DAT_14c9ac108 = DAT_14c9ac108 + 1;
  UNLOCK();
  plVar4 = (longlong *)(**(code **)(*DAT_14ca83900 + 0x30))();
  uVar5 = (**(code **)(*plVar4 + 0x20))(plVar4);
  local_1d8 = pcVar8;
  FUN_140002266(&local_c8,L"AftermathOutput_%s.%u.%s.log",uVar5,iVar1);
  uVar5 = FUN_14047ac8c();
  FUN_1449b8608(&local_f8,uVar5,L"Logs/");
  local_88 = local_f8;
  iVar1 = (int)uStack_f0 + -1;
  if ((int)uStack_f0 == 0) {
    iVar1 = 0;
  }
  uStack_80 = CONCAT44(uStack_80._4_4_,iVar1);
  local_78 = local_c8;
  local_70 = (int)uStack_c0 - 1;
  if ((int)uStack_c0 == 0) {
    local_70 = 0;
  }
  FUN_140bee87a(&local_e8,&local_88,2);
  if (local_f8 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (iStack_a0 == 0) {
    puVar13 = &DAT_149dfb77a;
  }
  else {
    puVar13 = (undefined2 *)CONCAT44(uStack_a4,uStack_a8);
  }
  FUN_140002266(&local_88,L"\n\nWriting Aftermath dump to: %s",puVar13);
  iVar1 = (int)uStack_80 + -1;
  if ((int)uStack_80 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_b8,local_88,iVar1);
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)FUN_14054d1d4();
  if (iStack_a0 == 0) {
    puVar13 = &DAT_149dfb77a;
  }
  else {
    puVar13 = (undefined2 *)CONCAT44(uStack_a4,uStack_a8);
  }
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,puVar13,0);
  if (plVar4 == (longlong *)0x0) {
    if (iStack_a0 == 0) {
      puVar13 = &DAT_149dfb77a;
    }
    else {
      puVar13 = (undefined2 *)CONCAT44(uStack_a4,uStack_a8);
    }
    FUN_140002266(&local_88,L"\n\tFailed to create dump file: %s",puVar13);
    iVar1 = (int)uStack_80 + -1;
    if ((int)uStack_80 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_b8,local_88,iVar1);
    if (local_88 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (iStack_9c != -1) {
      if (CONCAT44(uStack_a4,uStack_a8) != 0) {
        FUN_1400020a8();
      }
      uStack_a8 = 0;
      uStack_a4 = 0;
      iStack_a0 = 0;
      iStack_9c = -1;
    }
  }
  else {
    (**(code **)(*plVar4 + 0x170))(plVar4,param_1,param_2);
    (**(code **)(*plVar4 + 0x1f8))(plVar4);
    FUN_1400020e8(&local_b8,L"\n\tSucceeded in writing Aftermath dump file.",0x2b);
  }
  FUN_1400020e8(&local_b8,L"\n\nDecoding Aftermath GPU Crash:",0x1f);
  iVar1 = GFSDK_Aftermath_GpuCrashDump_CreateDecoder(0x21a,param_1,param_2,&local_100);
  if (iVar1 != 1) {
    FUN_140002266(&local_88,
                  L"\n\n\tFailed to create a GPU crash dump decoder object: 0x%08x. No further GPU crash dump information available."
                  ,iVar1);
    iVar1 = (int)uStack_80 + -1;
    if ((int)uStack_80 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_b8,local_88,iVar1);
    if (local_88 != (code *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_142b75dff;
  }
  FUN_1400020e8(&local_b8,L"\n\n\tDevice Info:",0xf);
  uStack_f0 = uStack_f0 & 0xffffffff00000000;
  local_f8 = (code *)0x0;
  iVar1 = GFSDK_Aftermath_GpuCrashDump_GetDeviceInfo(local_100);
  if (iVar1 == 1) {
    local_88 = (code *)0x0;
    uStack_80 = 0;
    switch((ulonglong)local_f8 & 0xffffffff) {
    case 0:
      pwVar6 = L"Active";
      break;
    case 1:
      pwVar6 = L"Timeout";
      break;
    case 2:
      pwVar6 = L"OutOfMemory";
      break;
    case 3:
      pwVar6 = L"PageFault";
      break;
    case 4:
      pwVar6 = L"Stopped";
      break;
    case 5:
      pwVar6 = L"Reset";
      break;
    case 6:
      pwVar6 = L"Unknown";
      break;
    case 7:
      pwVar6 = L"DmaFault";
      break;
    default:
      FUN_140002266(&local_c8,L"Unknown (0x%08x)");
      if (local_88 != (code *)0x0) {
        FUN_1400020a8();
      }
      local_88 = local_c8;
      uStack_80 = uStack_c0;
      goto LAB_142b75fc0;
    }
    FUN_14020fad6(&local_88,pwVar6);
LAB_142b75fc0:
    pwVar14 = L"False";
    pwVar6 = L"False";
    if ((char)uStack_f0 != '\0') {
      pwVar6 = &DAT_149e0617a;
    }
    if (local_f8._4_1_ != '\0') {
      pwVar14 = L"True";
    }
    pcVar8 = local_88;
    if ((int)uStack_80 == 0) {
      pcVar8 = (code *)&DAT_149dfb77a;
    }
    local_1d8 = (code *)pwVar6;
    FUN_140002266(&local_c8,L"\n\t\tStatus       : %s\n\t\tAdapter Reset: %s\n\t\tEngine Reset : %s"
                  ,pcVar8,pwVar14);
    iVar1 = (int)uStack_c0 + -1;
    if ((int)uStack_c0 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_b8,local_c8,iVar1);
    if (local_c8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_140002266(&local_88,L"\n\t\tFailed to retrieve device info: 0x%08x",iVar1);
    iVar1 = (int)uStack_80 + -1;
    if ((int)uStack_80 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_b8,local_88,iVar1);
  }
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_1400020e8(&local_b8,L"\n\n\t Page Fault Info:",0x14);
  iVar1 = GFSDK_Aftermath_GpuCrashDump_GetPageFaultInfo(local_100,&local_88);
  if (iVar1 == 1) {
    local_c8 = (code *)0x0;
    uStack_c0 = 0;
    if ((int)uStack_80 == 2) {
      pwVar6 = L"IllegalAccessError";
LAB_142b76124:
      FUN_14020fad6(&local_c8,pwVar6);
    }
    else {
      if ((int)uStack_80 == 1) {
        pwVar6 = L"AddressTranslationError";
        goto LAB_142b76124;
      }
      FUN_140002266(&local_f8,L"Unknown (0x%08x)");
      if (local_c8 != (code *)0x0) {
        FUN_1400020a8();
      }
      local_c8 = local_f8;
      uStack_c0 = uStack_f0;
    }
    local_f8 = (code *)0x0;
    uStack_f0 = 0;
    switch(uStack_80 >> 0x20) {
    case 0:
      pwVar6 = L"Unknown";
      break;
    case 1:
      pwVar6 = L"Read";
      break;
    case 2:
      pwVar6 = L"Write";
      break;
    case 3:
      pwVar6 = L"Atomic";
      break;
    default:
      FUN_140002266(&local_118,L"Unknown (0x%08x)");
      if (local_f8 != (code *)0x0) {
        FUN_1400020a8();
      }
      local_f8 = local_118;
      uStack_f0 = uStack_110;
      goto LAB_142b761c1;
    }
    FUN_14020fad6(&local_f8,pwVar6);
LAB_142b761c1:
    local_118 = (code *)0x0;
    uStack_110 = 0;
    switch((ulonglong)local_78 & 0xffffffff) {
    case 0:
      pwVar6 = L"Unknown";
      break;
    case 1:
      pwVar6 = L"Graphics";
      break;
    case 2:
      pwVar6 = L"GraphicsCompute";
      break;
    case 3:
      pwVar6 = L"Display";
      break;
    case 4:
      pwVar6 = L"CopyEngine";
      break;
    case 5:
      pwVar6 = L"VideoDecoder";
      break;
    case 6:
      pwVar6 = L"VideoEncoder";
      break;
    case 7:
      pwVar6 = L"Other";
      break;
    default:
      FUN_140002266(&local_128,L"Unknown (0x%08x)");
      if (local_118 != (code *)0x0) {
        FUN_1400020a8();
      }
      local_118 = local_128;
      uStack_110 = uStack_120;
      goto LAB_142b762b7;
    }
    FUN_14020fad6(&local_118,pwVar6);
LAB_142b762b7:
    local_128 = (code *)0x0;
    uStack_120 = 0;
    switch((ulonglong)local_78 >> 0x20) {
    case 0:
      pwVar6 = L"Unknown";
      break;
    case 1:
      pwVar6 = L"HostInterface";
      break;
    case 2:
      pwVar6 = L"FrontEnd";
      break;
    case 3:
      pwVar6 = L"PrimitiveDistributor";
      break;
    case 4:
      pwVar6 = L"GraphicsProcessingCluster";
      break;
    case 5:
      pwVar6 = L"PolymorphEngine";
      break;
    case 6:
      pwVar6 = L"RasterEngine";
      break;
    case 7:
      pwVar6 = L"Rasterizer2D";
      break;
    case 8:
      pwVar6 = L"RenderOutputUnit";
      break;
    case 9:
      pwVar6 = L"TextureProcessingCluster";
      break;
    case 10:
      pwVar6 = L"CopyEngine";
      break;
    case 0xb:
      pwVar6 = L"VideoDecoder";
      break;
    case 0xc:
      pwVar6 = L"VideoEncoder";
      break;
    case 0xd:
      pwVar6 = L"Other";
      break;
    default:
      FUN_140002266(&local_138,L"Unknown (0x%08x)");
      if (local_128 != (code *)0x0) {
        FUN_1400020a8();
      }
      local_128 = local_138;
      uStack_120 = uStack_130;
      goto LAB_142b763a8;
    }
    FUN_14020fad6(&local_128,pwVar6);
LAB_142b763a8:
    pcStack_1c8 = (code *)&DAT_149dfb77a;
    if ((int)uStack_120 != 0) {
      pcStack_1c8 = local_128;
    }
    local_1d0 = (code *)&DAT_149dfb77a;
    if ((int)uStack_110 != 0) {
      local_1d0 = local_118;
    }
    local_1d8 = (code *)&DAT_149dfb77a;
    if ((int)uStack_f0 != 0) {
      local_1d8 = local_f8;
    }
    pcVar8 = (code *)&DAT_149dfb77a;
    if ((int)uStack_c0 != 0) {
      pcVar8 = local_c8;
    }
    FUN_140002266(&local_138,
                  L"\n\t\tGPU VA  : 0x%016llx\n\t\tType    : %s\n\t\tAccess  : %s\n\t\tEngine  : %s\n\t\tClient  : %s"
                  ,local_88,pcVar8);
    iVar1 = (int)uStack_130 + -1;
    if ((int)uStack_130 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_b8,local_138,iVar1);
    if (local_138 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_70 == 0) {
      FUN_1400020e8(&local_b8,L"\n\tResource: <no info>",0x15);
    }
    else {
      local_138 = (code *)0x0;
      uStack_130 = 0;
      FUN_147125602(&local_138);
      GFSDK_Aftermath_GpuCrashDump_GetPageFaultResourceInfo(local_100,local_70,local_138);
      if (local_70 != 0) {
        uVar15 = 0;
        do {
          pcVar8 = local_138 + (longlong)(int)uVar15 * 0xd0;
          local_1d8 = pcVar8 + 0x30;
          local_198 = L"False";
          local_178 = L"False";
          if (pcVar8[0xc0] != (code)0x0) {
            local_178 = L"True";
          }
          local_180 = L"False";
          if (pcVar8[0xbc] != (code)0x0) {
            local_180 = L"True";
          }
          local_188 = L"False";
          if (pcVar8[0xb8] != (code)0x0) {
            local_188 = L"True";
          }
          local_190 = L"False";
          if (pcVar8[0xb4] != (code)0x0) {
            local_190 = L"True";
          }
          local_170 = *(undefined4 *)(pcVar8 + 200);
          if (pcVar8[0xb0] != (code)0x0) {
            local_198 = L"True";
          }
          local_1a0 = *(undefined4 *)(pcVar8 + 0x20);
          local_1a8 = *(undefined4 *)(pcVar8 + 0x1c);
          local_1b0 = *(undefined4 *)(pcVar8 + 0x18);
          local_1b8 = *(undefined4 *)(pcVar8 + 0x14);
          local_1d0 = *(code **)pcVar8;
          pcStack_1c8 = *(code **)(pcVar8 + 8);
          local_1c0 = (code **)CONCAT44(local_1c0._4_4_,*(undefined4 *)(pcVar8 + 0x10));
          FUN_140002266(&local_148,
                        L"\n\t\tResource %d/%d:\n\t\t\tName                : \'%s\'\n\t\t\tGPU VA              : 0x%016llx\n\t\t\tSize                : 0x%016llx\n\t\t\tWidth               : %d\n\t\t\tHeight              : %d\n\t\t\tDepth               : %d\n\t\t\tMipLevels           : %d\n\t\t\tFormat              : %d\n\t\t\tIs Buffer           : %s\n\t\t\tIs Texture Heap     : %s\n\t\t\tIs RTV/DSV Heap     : %s\n\t\t\tPlaced Resource     : %s\n\t\t\tWas Destroyed       : %s\n\t\t\tCreate/Destroy Count: %d"
                       );
          iVar1 = local_140 + -1;
          if (local_140 == 0) {
            iVar1 = 0;
          }
          FUN_1400020e8(&local_b8,local_148,iVar1);
          if (local_148 != 0) {
            FUN_1400020a8();
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < local_70);
      }
      if (local_138 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_88 != (code *)0x0) {
      local_98 = local_88;
      local_90 = '\x01';
    }
    if (local_128 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_118 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_f8 != (code *)0x0) {
      FUN_1400020a8();
    }
LAB_142b7665d:
    if (local_c8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (iVar1 != 2) {
      FUN_140002266(&local_c8,L"\n\t\tFailed to retrieve page fault info (Result: 0x%08x)",iVar1);
      iVar1 = (int)uStack_c0 + -1;
      if ((int)uStack_c0 == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(&local_b8,local_c8,iVar1);
      goto LAB_142b7665d;
    }
    FUN_1400020e8(&local_b8,L"\n\t\tNo information on faulting address.",0x26);
  }
  FUN_1400020e8(&local_b8,L"\n\n\tMarker Data:",0xf);
  iVar1 = GFSDK_Aftermath_GpuCrashDump_GetEventMarkersInfoCount(local_100,&local_118);
  if ((uint)local_118 == 0 || iVar1 != 1) {
    FUN_1400020e8(&local_b8,L"\n\t\tNo marker info.",0x12);
  }
  else {
    local_88 = (code *)0x0;
    uStack_80 = (ulonglong)local_118 & 0xffffffff;
    FUN_1471257e0(&local_88);
    iVar1 = GFSDK_Aftermath_GpuCrashDump_GetEventMarkersInfo
                      (local_100,uStack_80 & 0xffffffff,local_88);
    pcVar8 = local_88;
    if (iVar1 == 1) {
      lVar12 = (longlong)(int)uStack_80;
      if (lVar12 != 0) {
        lVar7 = 0;
        do {
          pwVar6 = L"Unknown    ";
          if ((ulonglong)*(uint *)(pcVar8 + lVar7 + 8) < 4) {
            pwVar6 = (wchar_t *)
                     (&DAT_14a1e7fe0 +
                     *(int *)(&DAT_14a1e7fe0 + (ulonglong)*(uint *)(pcVar8 + lVar7 + 8) * 4));
          }
          pwVar14 = L"Unknown     ";
          if ((ulonglong)*(uint *)(pcVar8 + lVar7 + 0xc) < 5) {
            pwVar14 = (wchar_t *)
                      (&DAT_14a1e7ff0 +
                      *(int *)(&DAT_14a1e7ff0 + (ulonglong)*(uint *)(pcVar8 + lVar7 + 0xc) * 4));
          }
          local_c8 = (code *)0x0;
          uStack_c0 = 0;
          if (*(int *)(pcVar8 + lVar7 + 0x18) == 1) {
            pwVar9 = *(wchar_t **)(pcVar8 + lVar7 + 0x10);
LAB_142b767af:
            FUN_14020fad6(&local_c8,pwVar9);
          }
          else if (*(int *)(pcVar8 + lVar7 + 0x18) == 0) {
            pwVar9 = L"<RHI breadcrumbs disabled>";
            goto LAB_142b767af;
          }
          local_1d0 = (code *)&DAT_149dfb77a;
          if ((int)uStack_c0 != 0) {
            local_1d0 = local_c8;
          }
          local_1d8 = (code *)pwVar6;
          FUN_140002266(&local_f8,L"\n\t\t[0x%016llx, %s]: [%s] %s",*(undefined8 *)(pcVar8 + lVar7),
                        pwVar14);
          iVar1 = (int)uStack_f0 + -1;
          if ((int)uStack_f0 == 0) {
            iVar1 = 0;
          }
          FUN_1400020e8(&local_b8,local_f8,iVar1);
          if (local_f8 != (code *)0x0) {
            FUN_1400020a8();
          }
          if (local_c8 != (code *)0x0) {
            FUN_1400020a8();
          }
          lVar7 = lVar7 + 0x20;
        } while (lVar12 * 0x20 != lVar7);
      }
    }
    else {
      FUN_140002266(&local_c8,L"\n\t\tFailed to retrieve marker info array (0x%08x).",iVar1);
      iVar1 = (int)uStack_c0 + -1;
      if ((int)uStack_c0 == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(&local_b8,local_c8,iVar1);
      if (local_c8 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_88 != (code *)0x0) {
      FUN_1400020a8(local_88);
    }
  }
  FUN_1400020e8(&local_b8,L"\n\n\tActive Shaders:",0x12);
  if (DAT_14c9abfb0 != (code *)0x0) {
    uVar2 = (**(code **)(*DAT_14c9abf30 + 0xb0))();
    uVar17 = (**(code **)(*DAT_14c9abf18 + 0xb8))();
    pcVar8 = DAT_14c9abfb0;
    local_88 = (code *)CONCAT44(local_88._4_4_,uVar2);
    local_c8 = (code *)CONCAT44(local_c8._4_4_,uVar17);
    plVar4 = &DAT_14c9abfd0;
    if (DAT_14c9abfc0 != (longlong *)0x0) {
      plVar4 = DAT_14c9abfc0;
    }
    uVar5 = (**(code **)(*plVar4 + 8))();
    (*pcVar8)(uVar5,&local_c8,&local_88);
  }
  uVar5 = local_100;
  local_118 = (code *)((ulonglong)local_118 & 0xffffffff00000000);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9abff0);
  iVar1 = GFSDK_Aftermath_GpuCrashDump_GetActiveShadersInfoCount(uVar5,&local_118);
  if (iVar1 == 1) {
    if ((uint)local_118 != 0) {
      local_c8 = (code *)0x0;
      uStack_c0 = 0;
      FUN_14712585e(&local_c8);
      iVar1 = GFSDK_Aftermath_GpuCrashDump_GetActiveShadersInfo
                        (uVar5,(ulonglong)local_118 & 0xffffffff,local_c8);
      if (iVar1 == 1) {
        FUN_140002266(&local_88,L"\n\t\t%u total.",(ulonglong)local_118 & 0xffffffff);
        iVar1 = (int)uStack_80 + -1;
        if ((int)uStack_80 == 0) {
          iVar1 = 0;
        }
        FUN_1400020e8(&local_b8,local_88,iVar1);
        if (local_88 != (code *)0x0) {
          FUN_1400020a8();
        }
        pcVar8 = local_c8;
        if ((uint)local_118 != 0) {
          iVar1 = 0;
          uVar15 = 0;
          do {
            FUN_140002266(&local_88,L"\n\t\t[%u]:",uVar15);
            iVar3 = (int)uStack_80 + -1;
            if ((int)uStack_80 == 0) {
              iVar3 = iVar1;
            }
            FUN_1400020e8(&local_b8,local_88,iVar3);
            if (local_88 != (code *)0x0) {
              FUN_1400020a8();
            }
            pcVar8 = local_c8;
            if (local_c8[((longlong)(int)uVar15 * 3 + 2) * 8] == (code)0x1) {
              FUN_1400020e8(&local_b8,L"\n\t\t\t! Internal",0xe);
            }
            pcVar8 = pcVar8 + (longlong)(int)uVar15 * 0x18;
            pwVar6 = L"Unknown";
            if (*(int *)(pcVar8 + 0x14) - 1U < 0xf) {
              pwVar6 = (wchar_t *)(&PTR_u_Vertex_14a1e8008)[*(int *)(pcVar8 + 0x14) - 1U];
            }
            FUN_140002266(&local_88,L"\n\t\t\tType = %s",pwVar6);
            iVar3 = (int)uStack_80 + -1;
            if ((int)uStack_80 == 0) {
              iVar3 = iVar1;
            }
            FUN_1400020e8(&local_b8,local_88,iVar3);
            if (local_88 != (code *)0x0) {
              FUN_1400020a8();
            }
            FUN_140002266(&local_88,L"\n\t\t\tHash = %llu",*(undefined8 *)pcVar8);
            iVar3 = (int)uStack_80 + -1;
            if ((int)uStack_80 == 0) {
              iVar3 = iVar1;
            }
            FUN_1400020e8(&local_b8,local_88,iVar3);
            if (local_88 != (code *)0x0) {
              FUN_1400020a8();
            }
            iVar3 = GFSDK_Aftermath_GetShaderHashForShaderInfo(uVar5,pcVar8,&local_f8);
            if (iVar3 == 1) {
              FUN_140002266(&local_88,L"\n\t\t\tBinary Hash = %llu",local_f8);
              iVar3 = (int)uStack_80 + -1;
              if ((int)uStack_80 == 0) {
                iVar3 = iVar1;
              }
              FUN_1400020e8(&local_b8,local_88,iVar3);
              if (local_88 != (code *)0x0) {
                FUN_1400020a8();
              }
              if (DAT_14c9ac020 != DAT_14c9ac04c) {
                puVar10 = DAT_14c9ac058;
                if (DAT_14c9ac058 == (undefined *)0x0) {
                  puVar10 = &DAT_14c9ac050;
                }
                iVar3 = *(int *)(puVar10 +
                                (ulonglong)
                                (DAT_14c9ac060 - 1U &
                                (int)local_f8 + (int)((ulonglong)local_f8 >> 0x20) * 0x17) * 4);
                while (iVar3 != -1) {
                  lVar12 = DAT_14c9ac018 + (longlong)iVar3 * 0x60;
                  if (*(code **)(DAT_14c9ac018 + (longlong)iVar3 * 0x60) == local_f8) {
                    if ((undefined8 *)(lVar12 + 8) != (undefined8 *)0x0 && lVar12 != 0) {
                      if (1 < *(int *)(lVar12 + 0x10)) {
                        FUN_140002266(&local_88,L"\n\t\t\tDebugName = \'%s\'",
                                      *(undefined8 *)(lVar12 + 8));
                        iVar3 = (int)uStack_80 + -1;
                        if ((int)uStack_80 == 0) {
                          iVar3 = iVar1;
                        }
                        FUN_1400020e8(&local_b8,local_88,iVar3);
                        if (local_88 != (code *)0x0) {
                          FUN_1400020a8();
                        }
                      }
                      if (1 < *(int *)(lVar12 + 0x20)) {
                        FUN_140002266(&local_88,L"\n\t\t\tFunction = %s",
                                      *(undefined8 *)(lVar12 + 0x18));
                        iVar3 = (int)uStack_80 + -1;
                        if ((int)uStack_80 == 0) {
                          iVar3 = iVar1;
                        }
                        FUN_1400020e8(&local_b8,local_88,iVar3);
                        if (local_88 != (code *)0x0) {
                          FUN_1400020a8();
                        }
                      }
                      if (1 < *(int *)(lVar12 + 0x30)) {
                        FUN_140002266(&local_88,L"\n\t\t\tShader PDB = %s",
                                      *(undefined8 *)(lVar12 + 0x28));
                        iVar3 = (int)uStack_80 + -1;
                        if ((int)uStack_80 == 0) {
                          iVar3 = iVar1;
                        }
                        FUN_1400020e8(&local_b8,local_88,iVar3);
                        if (local_88 != (code *)0x0) {
                          FUN_1400020a8();
                        }
                      }
                      if (*(int *)(lVar12 + 0x40) < 2) goto LAB_142b76cd2;
                      FUN_140002266(&local_88,L"\n\t\t\tShader Hash = %s",
                                    *(undefined8 *)(lVar12 + 0x38));
                      goto LAB_142b76c72;
                    }
                    break;
                  }
                  iVar3 = *(int *)(lVar12 + 0x58);
                }
              }
              FUN_1400020e8(&local_b8,L"\n\t\t\t! Failed to associate Aftermath hash",0x28);
            }
            else {
              FUN_140002266(&local_88,L"\n\t\t\t! Failed to get binary hash (%u)",iVar3);
LAB_142b76c72:
              iVar3 = (int)uStack_80 + -1;
              if ((int)uStack_80 == 0) {
                iVar3 = iVar1;
              }
              FUN_1400020e8(&local_b8,local_88,iVar3);
              if (local_88 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
LAB_142b76cd2:
            uVar15 = uVar15 + 1;
            pcVar8 = local_c8;
          } while (uVar15 < (uint)local_118);
        }
      }
      else {
        FUN_140002266(&local_88,L"\n\t\tFailed to get shaders (%u).",iVar1);
        iVar1 = (int)uStack_80 + -1;
        if ((int)uStack_80 == 0) {
          iVar1 = 0;
        }
        FUN_1400020e8(&local_b8,local_88,iVar1);
        pcVar8 = local_c8;
        if (local_88 != (code *)0x0) {
          FUN_1400020a8();
          pcVar8 = local_c8;
        }
      }
      goto LAB_142b76e37;
    }
    FUN_1400020e8(&local_b8,L"\n\t\tNo Shaders.",0xe);
  }
  else {
    FUN_140002266(&local_88,L"\n\t\tFailed to get shader count (%u).",iVar1);
    iVar1 = (int)uStack_80 + -1;
    if ((int)uStack_80 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_b8,local_88,iVar1);
    pcVar8 = local_88;
LAB_142b76e37:
    if (pcVar8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9abff0);
  FUN_1400020e8(&local_b8,L"\n\n\tJSON Data:",0xd);
  local_1c0 = &local_128;
  local_128 = (code *)((ulonglong)local_128 & 0xffffffff00000000);
  local_1d0 = (code *)0x0;
  pcStack_1c8 = (code *)0x0;
  local_1d8 = FUN_142b78a6e;
  local_15c = GFSDK_Aftermath_GpuCrashDump_GenerateJSON(local_100,0x3fff,2);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9ac068);
  lVar12 = DAT_14c9ac090;
  lVar7 = (longlong)DAT_14c9ac098;
  if (lVar7 != 0) {
    lVar16 = 0;
    do {
      puVar13 = &DAT_149dfb77a;
      if (*(int *)(lVar12 + 0x38 + lVar16) != 0) {
        puVar13 = *(undefined2 **)(lVar12 + 0x30 + lVar16);
      }
      FUN_140002266(&local_f8,L"%s.cso",puVar13);
      uVar5 = FUN_14047ac8c();
      FUN_1449b8608(&local_118,uVar5,L"Logs/");
      local_88 = local_118;
      iVar1 = (int)uStack_110 + -1;
      if ((int)uStack_110 == 0) {
        iVar1 = 0;
      }
      uStack_80 = CONCAT44(uStack_80._4_4_,iVar1);
      local_78 = local_f8;
      local_70 = (int)uStack_f0 - 1;
      if ((int)uStack_f0 == 0) {
        local_70 = 0;
      }
      FUN_140bee87a(&local_c8,&local_88,2);
      if (local_118 != (code *)0x0) {
        FUN_1400020a8();
      }
      if (local_f8 != (code *)0x0) {
        FUN_1400020a8();
      }
      plVar4 = (longlong *)FUN_14054d1d4();
      pcVar8 = (code *)&DAT_149dfb77a;
      if ((int)uStack_c0 != 0) {
        pcVar8 = local_c8;
      }
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,pcVar8,0);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x170))
                  (plVar4,*(undefined8 *)(lVar12 + 0x40 + lVar16),
                   (longlong)*(int *)(lVar12 + 0x48 + lVar16));
        (**(code **)(*plVar4 + 0x1f8))(plVar4);
      }
      pcVar8 = (code *)&DAT_149dfb77a;
      if ((int)uStack_c0 != 0) {
        pcVar8 = local_c8;
      }
      FUN_140056680(&local_88,pcVar8);
      FUN_1467b67f2(&local_88);
      if (local_88 != (code *)0x0) {
        FUN_1400020a8();
      }
      if (local_c8 != (code *)0x0) {
        FUN_1400020a8();
      }
      lVar16 = lVar16 + 0x50;
    } while (lVar7 * 0x50 != lVar16);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9ac068);
  FUN_140002266(&local_88,L"\n\n\tGbxShaderOutput.OutputShaders Num: %d",DAT_14c9ac098);
  iVar1 = (int)uStack_80 + -1;
  if ((int)uStack_80 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_b8,local_88,iVar1);
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_88,L"\n\n\tCrashIntermediates.ShaderDebugLookup Num: %d",
                DAT_14c9ac0c0 - DAT_14c9ac0ec);
  iVar1 = (int)uStack_80 + -1;
  if ((int)uStack_80 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(&local_b8,local_88,iVar1);
  if (local_88 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_147125c28();
  if (local_15c == 1) {
    local_88 = (code *)0x0;
    uStack_80 = (ulonglong)local_128 & 0xffffffff;
    if ((int)local_128 == 0) {
      uVar11 = 0;
    }
    else {
      FUN_140067470(&local_88,0);
      uVar11 = (ulonglong)local_128 & 0xffffffff;
    }
    iVar1 = GFSDK_Aftermath_GpuCrashDump_GetJSON(local_100,uVar11,local_88);
    if (iVar1 == 1) {
      FUN_140002266(&local_c8,L"\n\n%hs\n\n",local_88);
    }
    else {
      FUN_140002266(&local_c8,L"\n\t\tFailed to get JSON string from GPU crash decoder: 0x%08x",
                    iVar1);
    }
    iVar1 = (int)uStack_c0 + -1;
    if ((int)uStack_c0 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_b8,local_c8,iVar1);
    if (local_c8 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != (code *)0x0) {
      FUN_1400020a8();
    }
    uVar5 = FUN_14054d1d4();
    puVar13 = &DAT_149dfb77a;
    if (local_e0 != 0) {
      puVar13 = local_e8;
    }
    local_158 = local_b8;
    local_150 = local_b0 + -1;
    if (local_b0 == 0) {
      local_150 = 0;
    }
    local_1d8 = (code *)((ulonglong)local_1d8 & 0xffffffff00000000);
    FUN_1415d54ec(&local_158,puVar13,0,uVar5);
    puVar13 = &DAT_149dfb77a;
    if (local_e0 != 0) {
      puVar13 = local_e8;
    }
    FUN_140056680(&local_88,puVar13);
    FUN_1467b67f2(&local_88);
    if (local_88 != (code *)0x0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9ac0a0);
    uVar15 = DAT_14c9ac0b0;
    lVar12 = (longlong)(int)DAT_14c9ac0b0;
    DAT_14c9ac0b0 = DAT_14c9ac0b0 + 1;
    if (DAT_14c9ac0b4 < DAT_14c9ac0b0) {
      FUN_147125fbe(uVar15);
    }
    lVar16 = DAT_14c9ac0a8;
    lVar12 = lVar12 * 0x30;
    lVar7 = DAT_14c9ac0a8 + lVar12;
    *(undefined8 *)(DAT_14c9ac0a8 + lVar12) = 0;
    *(longlong *)(lVar16 + lVar12) = local_b8;
    local_b8 = 0;
    *(int *)(lVar16 + 8 + lVar12) = local_b0;
    *(undefined4 *)(lVar16 + 0xc + lVar12) = uStack_ac;
    local_b0 = 0;
    uStack_ac = 0;
    *(undefined8 *)(lVar16 + 0x10 + lVar12) = 0;
    if (iStack_9c == -1) {
      *(undefined8 *)(lVar7 + 0x18) = 0xffffffff00000000;
    }
    else {
      *(ulonglong *)(lVar7 + 0x10) = CONCAT44(uStack_a4,uStack_a8);
      uStack_a8 = 0;
      uStack_a4 = 0;
      *(int *)(lVar7 + 0x18) = iStack_a0;
      *(int *)(lVar7 + 0x1c) = iStack_9c;
      iStack_a0 = 0;
      iStack_9c = 0;
    }
    *(char *)(lVar7 + 0x28) = local_90;
    if (local_90 == '\x01') {
      *(code **)(lVar7 + 0x20) = local_98;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9ac0a0);
  }
  else {
    FUN_140002266(&local_88,L"\n\t\tFailed to generate JSON from GPU crash dump: 0x%08x");
    iVar1 = (int)uStack_80 + -1;
    if ((int)uStack_80 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_b8,local_88,iVar1);
    if (local_88 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  GFSDK_Aftermath_GpuCrashDump_DestroyDecoder(local_100);
LAB_142b75dff:
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_90 == '\x01') {
    local_90 = '\0';
  }
  if (iStack_9c != -1) {
    if (CONCAT44(uStack_a4,uStack_a8) != 0) {
      FUN_1400020a8();
    }
    uStack_a8 = 0;
    uStack_a4 = 0;
    iStack_a0 = 0;
    iStack_9c = -1;
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  DAT_14ca778e9 = 0;
  if ((local_60 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b7740d FUN_142b7740d body=962 status=ok
// SIG undefined FUN_142b7740d(void)

undefined8 FUN_142b7740d(int *param_1,uint param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *_Size;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  int *local_d8;
  longlong *plStack_d0;
  int *local_c8;
  longlong *plStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar9 = 0xffffffffffffffff;
  if (param_2 < 4) goto LAB_142b77446;
  _Size = (longlong *)(ulonglong)param_2;
  local_a8 = (void *)0x0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = (int *)0x0;
  plStack_c0 = (longlong *)0x0;
  local_d8 = (int *)0x0;
  plStack_d0 = (longlong *)0x0;
  local_e8 = 0;
  uStack_e0 = 0;
  iVar10 = 0;
  iVar2 = 0;
  if (*(int *)(param_3 + 1) != 0) {
    FUN_1402980a2(&local_e8,*param_3,*(int *)(param_3 + 1));
    iVar10 = (int)uStack_a0;
    iVar2 = uStack_a0._4_4_;
  }
  uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar10 + param_2);
  if ((uint)(iVar2 - iVar10) < param_2) {
    FUN_1447403be(&local_a8);
  }
  memcpy(local_a8,param_1,(size_t)_Size);
  local_f0 = 0;
  uVar9 = 0xffffffffffffffff;
  if (*param_1 == 0x7230203) {
    uStack_70 = (longlong *)CONCAT44(uStack_70._4_4_,param_2);
    local_78 = param_1;
    iVar2 = GFSDK_Aftermath_GetShaderHashSpirv(0x21a,&local_78,&local_f0);
joined_r0x000142b775d9:
    if (iVar2 == 1) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9abff0);
      local_78 = (int *)&local_f0;
      uStack_70 = &local_e8;
      FUN_147126f5a(&local_88);
      uVar9 = local_f0;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9abff0);
    }
  }
  else if (*param_1 == 0x43425844) {
    if ((0x1f < param_2) && (iVar2 = param_1[7], iVar2 != 0)) {
      plVar8 = (longlong *)&DAT_00000020;
      do {
        uVar3 = 0;
        if ((longlong *)((longlong)plVar8 + 4) <= _Size) {
          uVar3 = *(uint *)((longlong)param_1 + (longlong)plVar8);
          plVar8 = (longlong *)((longlong)plVar8 + 4);
        }
        uVar6 = (ulonglong)uVar3;
        plVar1 = (longlong *)(uVar6 + 8);
        if (plVar1 <= _Size) {
          iVar10 = *(int *)((longlong)param_1 + uVar6);
          if (iVar10 == 0x30565350) {
            plVar7 = (longlong *)(uVar6 + 0xc);
            if ((plVar7 <= _Size) &&
               (uVar11 = (ulonglong)*(uint *)((longlong)param_1 + (longlong)plVar1), 0x33 < uVar11))
            {
              uVar4 = 0;
              if ((longlong *)(uVar6 + 0x40) <= _Size) {
                uVar4 = (ulonglong)*(uint *)((longlong)(param_1 + 0xc) + (longlong)plVar7);
              }
              plVar1 = (longlong *)((longlong)plVar7 + uVar11);
              plVar7 = (longlong *)((longlong)plVar7 + uVar11 + 4);
              plVar5 = plVar1;
              if ((plVar7 <= _Size) &&
                 (plVar5 = plVar7, *(int *)((longlong)param_1 + (longlong)plVar1) != 0)) {
                iVar10 = 0;
                if (plVar1 + 1 <= _Size) {
                  iVar10 = *(int *)((longlong)param_1 + (longlong)plVar7);
                  plVar7 = plVar1 + 1;
                }
                plVar5 = (longlong *)
                         ((longlong)plVar7 +
                         (ulonglong)(uint)(iVar10 * *(int *)((longlong)param_1 + (longlong)plVar1)))
                ;
              }
              if (((longlong *)((longlong)plVar5 + 4) <= _Size) &&
                 ((uint)uVar4 < *(uint *)((longlong)param_1 + (longlong)plVar5))) {
                FUN_1400b22c2(&local_78,
                              (undefined1 *)((longlong)plVar5 + 4 + (longlong)param_1) + uVar4);
                if (local_d8 != (int *)0x0) {
                  FUN_1400020a8();
                }
                local_d8 = local_78;
                plStack_d0 = uStack_70;
              }
            }
          }
          else if (iVar10 == 0x48534148) {
            if (_Size < (longlong *)(uVar6 + 0x1c)) {
              local_78 = (int *)0x0;
              uStack_70 = (longlong *)0x0;
              local_68 = 0;
            }
            else {
              local_68 = *(undefined4 *)((longlong)(param_1 + 4) + (longlong)plVar1);
              local_78 = *(int **)((longlong)param_1 + (longlong)plVar1);
              uStack_70 = (longlong *)((longlong *)((longlong)param_1 + (longlong)plVar1))[1];
            }
            local_88 = local_78._4_4_;
            uStack_84 = (undefined4)uStack_70;
            uStack_80 = uStack_70._4_4_;
            uStack_7c = local_68;
            local_98 = 0;
            uStack_90 = 0;
            FUN_1407c8a86(&local_88,0x10,&local_98);
            if (local_b8 != 0) {
              FUN_1400020a8();
            }
            local_b8 = local_98;
            uStack_b0 = uStack_90;
          }
          else if (iVar10 == 0x4e444c49) {
            plVar7 = (longlong *)(uVar6 + 0xc);
            if ((plVar7 <= _Size) &&
               (0x23 < (ulonglong)((longlong)_Size - (longlong)plVar7) &&
                *(short *)((longlong)param_1 + 2 + (longlong)plVar1) == 0x24)) {
              FUN_142746720(&local_78,(undefined1 *)((longlong)plVar7 + (longlong)param_1),0x24);
              if (local_c8 != (int *)0x0) {
                FUN_1400020a8();
              }
              local_c8 = local_78;
              plStack_c0 = uStack_70;
            }
          }
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_78 = param_1;
    uStack_70 = _Size;
    iVar2 = GFSDK_Aftermath_GetShaderHash(0x21a,&local_78,&local_f0);
    goto joined_r0x000142b775d9;
  }
  FUN_1471263f0(&local_d8);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
LAB_142b77446:
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b777d0 FUN_142b777d0 body=594 status=ok
// SIG undefined FUN_142b777d0(void)

undefined8 FUN_142b777d0(longlong *param_1)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_b8 [32];
  longlong local_98 [2];
  LARGE_INTEGER local_88 [2];
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14c9ac110 == '\x01') {
    QueryPerformanceCounter(local_88);
    dVar1 = (double)local_88[0].QuadPart * DAT_14c83f420;
    fVar7 = (float)(**(code **)(*DAT_14c9abf48 + 0xb8))();
    fVar8 = (float)(**(code **)(*DAT_14c9abf60 + 0xb8))();
    iVar2 = GFSDK_Aftermath_GetCrashDumpStatus(&local_74);
    if (iVar2 == 1) {
      dVar1 = dVar1 + 16777216.0;
      do {
        uVar4 = 0;
        switch(local_74) {
        case 0:
          QueryPerformanceCounter(local_88);
          if ((double)fVar8 + dVar1 <= (double)local_88[0].QuadPart * DAT_14c83f420 + 16777216.0)
          goto LAB_142b7792d;
          break;
        case 1:
        case 3:
          QueryPerformanceCounter(local_88);
          if ((double)fVar7 + dVar1 <= (double)local_88[0].QuadPart * DAT_14c83f420 + 16777216.0)
          goto LAB_142b7792d;
          break;
        default:
          goto switchD_142b778cd_caseD_2;
        case 4:
          AcquireSRWLockShared((PSRWLOCK)&DAT_14c9ac0a0);
          FUN_147123e9c(param_1);
          if ((longlong)(int)param_1[1] != 0) {
            lVar3 = *param_1;
            lVar5 = (longlong)(int)param_1[1] * 0x30;
            goto LAB_142b77997;
          }
          pwVar6 = L"false";
          goto LAB_142b779c7;
        }
        FUN_14000f986(0x3c23d70a);
        iVar2 = GFSDK_Aftermath_GetCrashDumpStatus(&local_74);
      } while (iVar2 == 1);
    }
  }
LAB_142b7792d:
  uVar4 = 0;
  goto switchD_142b778cd_caseD_2;
  while( true ) {
    lVar3 = lVar3 + 0x30;
    lVar5 = lVar5 + -0x30;
    if (lVar5 == 0) break;
LAB_142b77997:
    if (*(int *)(lVar3 + 0x1c) != -1) goto LAB_142b779a9;
  }
  lVar3 = 0;
LAB_142b779a9:
  pwVar6 = L"true";
  if (lVar3 == 0) {
    pwVar6 = L"false";
  }
LAB_142b779c7:
  FUN_140056680(local_88,pwVar6);
  FUN_140056680(local_98,L"RHI.HasAftermathCrashDump");
  FUN_14152eab6(local_98,local_88);
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88[0].QuadPart != 0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9ac0a0);
  uVar4 = 1;
switchD_142b778cd_caseD_2:
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b77a23 FUN_142b77a23 body=1 status=ok
// SIG undefined FUN_142b77a23(void)

void FUN_142b77a23(void)

{
  return;
}



// FUNCTION 142b77a24 FUN_142b77a24 body=49 status=ok
// SIG undefined FUN_142b77a24(void)

void FUN_142b77a24(void)

{
  FUN_147126694(DAT_14c9ac120,DAT_14c9ac128);
  if (DAT_14c9ac120 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142b77a55 FUN_142b77a55 body=69 status=ok
// SIG undefined FUN_142b77a55(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b77a55(void)

{
  _DAT_14c9ac130 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b77a97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ac138,1);
  return;
}



// FUNCTION 142b77a9a FUN_142b77a9a body=69 status=ok
// SIG undefined FUN_142b77a9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b77a9a(void)

{
  _DAT_14c9ac148 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b77adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ac150,1);
  return;
}



// FUNCTION 142b77adf FUN_142b77adf body=69 status=ok
// SIG undefined FUN_142b77adf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b77adf(void)

{
  _DAT_14c9ac158 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b77b21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ac160,1);
  return;
}



// FUNCTION 142b77b24 FUN_142b77b24 body=69 status=ok
// SIG undefined FUN_142b77b24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b77b24(void)

{
  _DAT_14c9ac168 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b77b66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ac170,1);
  return;
}



// FUNCTION 142b77b69 FUN_142b77b69 body=69 status=ok
// SIG undefined FUN_142b77b69(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b77b69(void)

{
  _DAT_14c9ac178 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b77bab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ac180,1);
  return;
}



// FUNCTION 142b77bae FUN_142b77bae body=69 status=ok
// SIG undefined FUN_142b77bae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b77bae(void)

{
  _DAT_14c9ac188 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b77bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ac190,1);
  return;
}



// FUNCTION 142b77bf4 FUN_142b77bf4 body=178 status=ok
// SIG undefined FUN_142b77bf4(void)

void FUN_142b77bf4(longlong param_1,longlong param_2)

{
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined1 *local_a0;
  longlong local_98;
  longlong *local_90;
  undefined1 *local_88;
  undefined1 local_7c [4];
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  undefined1 local_60 [48];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = *(longlong *)(param_2 + 0x58);
  local_70 = *(longlong *)(param_2 + 0x50) + local_78;
  local_68 = *(undefined4 *)(param_1 + 8);
  local_a8 = &local_78;
  local_a0 = local_60;
  local_98 = param_2;
  FUN_147126842(local_60);
  local_90 = &local_98;
  local_88 = local_60;
  FUN_1471268b4(param_1 + 0x10,local_7c);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b77cc2 FUN_142b77cc2 body=514 status=ok
// SIG undefined FUN_142b77cc2(void)

void FUN_142b77cc2(longlong *param_1,uint param_2,int param_3)

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



// FUNCTION 142b77ec4 FUN_142b77ec4 body=69 status=ok
// SIG undefined FUN_142b77ec4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b77ec4(void)

{
  _DAT_14c9ac198 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b77f06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ac1a0,1);
  return;
}



// FUNCTION 142b77f09 FUN_142b77f09 body=69 status=ok
// SIG undefined FUN_142b77f09(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b77f09(void)

{
  _DAT_14c9ac1a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b77f4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ac1b0,1);
  return;
}



// FUNCTION 142b77f4e FUN_142b77f4e body=69 status=ok
// SIG undefined FUN_142b77f4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b77f4e(void)

{
  _DAT_14c9ac1b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b77f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ac1c0,1);
  return;
}



// FUNCTION 142b77f96 FUN_142b77f96 body=338 status=ok
// SIG undefined FUN_142b77f96(void)

void FUN_142b77f96(longlong param_1,undefined8 param_2,longlong *param_3,uint param_4,uint *param_5,
                  longlong *param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  longlong lVar10;
  undefined1 auStack_b8 [36];
  uint local_94;
  int *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  piVar8 = (int *)(param_1 + 0x40);
  uVar7 = *param_5;
  local_88 = param_2;
  local_80 = param_3;
  if (uVar7 < param_4 && *(int **)(param_1 + 0x50) != piVar8) {
    piVar9 = *(int **)(param_1 + 0x50);
    local_94 = param_4;
    local_90 = piVar8;
    do {
      piVar3 = *(int **)(piVar9 + 4);
      if ((((piVar9[3] & 0x1f0000U) == 0x20000) && (*(longlong *)(piVar9 + 10) != 0)) &&
         (lVar5 = param_6[1], (longlong)(int)lVar5 != 0)) {
        iVar1 = *piVar9;
        iVar2 = piVar9[1];
        lVar4 = *param_6;
        lVar10 = 0;
        do {
          cVar6 = FUN_1447ef22c(*(undefined8 *)(lVar4 + lVar10),iVar1,iVar2,local_78);
          if (cVar6 != '\0') {
            (**(code **)(*local_80 + 0x10))(local_80,local_88,piVar9,local_78);
            uVar7 = *param_5 + *piVar9;
            *param_5 = uVar7;
            piVar8 = local_90;
            param_4 = local_94;
            goto LAB_142b780b0;
          }
          lVar10 = lVar10 + 8;
        } while ((longlong)(int)lVar5 * 8 != lVar10);
        uVar7 = *param_5;
        piVar8 = local_90;
        param_4 = local_94;
      }
LAB_142b780b0:
    } while ((piVar3 != piVar8) && (piVar9 = piVar3, uVar7 < param_4));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b780ea FUN_142b780ea body=387 status=ok
// SIG undefined FUN_142b780ea(void)

ulonglong FUN_142b780ea(longlong *param_1,ulonglong param_2,undefined4 param_3,uint param_4,
                       undefined8 param_5)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  param_2 = param_2 & 0xffffffff;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  lVar6 = param_1[0xe];
  if ((longlong)(int)lVar6 != 0) {
    lVar4 = param_1[0xd];
    lVar11 = 0;
    do {
      lVar5 = *(longlong *)(param_1[10] + (longlong)*(int *)(lVar4 + lVar11) * 8);
      if ((((lVar5 != 0) && ((*(uint *)(lVar5 + 0x1c) & param_4) != 0)) &&
          (*(longlong *)(lVar5 + 0x28) != 0)) &&
         (cVar7 = FUN_1447ef22c(lVar5,param_2,param_3,param_5), cVar7 != '\0')) {
        uVar10 = CONCAT71((int7)(param_2 >> 8),1);
        goto LAB_142b7823d;
      }
      lVar11 = lVar11 + 4;
    } while ((longlong)(int)lVar6 * 4 != lVar11);
  }
  plVar1 = param_1 + 10;
  iVar2 = (int)param_1[0xb];
  uVar10 = (ulonglong)iVar2;
  if (0 < (longlong)uVar10) {
    uVar12 = 0;
    do {
      if (*(longlong *)(*plVar1 + uVar12 * 8) == 0) {
        if (-1 < (short)uVar12) {
          uVar9 = (**(code **)(*param_1 + 8))(param_1,uVar12 & 0xffffffff,param_2,param_4);
          *(undefined8 *)(param_1[10] + (ulonglong)((uint)uVar12 & 0x7fff) * 8) = uVar9;
          uVar10 = uVar12 & 0xffffffff;
          goto LAB_142b78218;
        }
        break;
      }
      uVar12 = uVar12 + 1;
    } while (uVar10 != uVar12);
  }
  uVar9 = (**(code **)(*param_1 + 8))(param_1,iVar2,param_2,param_4);
  iVar3 = (int)param_1[0xb];
  *(uint *)(param_1 + 0xb) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0x5c) < iVar3 + 1U) {
    FUN_1462b45cc(plVar1,iVar3);
  }
  *(undefined8 *)(param_1[10] + (longlong)iVar3 * 8) = uVar9;
  iVar3 = (int)param_1[0xe];
  *(uint *)(param_1 + 0xe) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0x74) < iVar3 + 1U) {
    FUN_1447808da(param_1 + 0xd,iVar3);
  }
  *(int *)(param_1[0xd] + (longlong)iVar3 * 4) = (int)(short)iVar2;
LAB_142b78218:
  uVar8 = FUN_1447ef22c(*(undefined8 *)(*plVar1 + (longlong)(short)uVar10 * 8),param_2,param_3,
                        param_5);
  uVar10 = (ulonglong)uVar8;
LAB_142b7823d:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  return uVar10;
}



// FUNCTION 142b7826e FUN_142b7826e body=2046 status=ok
// SIG undefined FUN_142b7826e(void)

void FUN_142b7826e(longlong param_1,undefined8 param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  longlong *plVar21;
  uint uVar22;
  longlong *plVar23;
  longlong lVar24;
  longlong lVar25;
  bool bVar26;
  float fVar27;
  undefined1 auStack_3d8 [32];
  uint *local_3b8;
  longlong *local_3b0;
  longlong local_3a0;
  uint local_394;
  LPCRITICAL_SECTION local_390;
  undefined8 local_388;
  uint *local_380;
  longlong local_378;
  undefined8 uStack_370;
  longlong local_368;
  undefined8 uStack_360;
  undefined4 local_358 [190];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  if (*(char *)(param_1 + 0x24) == '\x01') {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x28);
    EnterCriticalSection(lpCriticalSection);
    local_378 = 0;
    uStack_370 = 0;
    uVar12 = (ulonglong)*(uint *)(param_1 + 0x58);
    if ((int)*(uint *)(param_1 + 0x58) < 0) {
LAB_142b78a65:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar12);
    }
    if (uVar12 != 0) {
      local_394 = param_3;
      local_388 = param_2;
      local_380 = param_4;
      FUN_14129c748(&local_378);
      iVar17 = *(int *)(param_1 + 0x58);
      if ((longlong)iVar17 != 0) {
        lVar9 = *(longlong *)(param_1 + 0x50);
        lVar24 = 0;
        iVar8 = 0;
        local_3a0 = param_1;
        local_390 = lpCriticalSection;
        do {
          uVar12 = uStack_370;
          lVar7 = *(longlong *)(lVar9 + lVar24);
          fVar27 = 1.0;
          if (lVar7 != 0) {
            if (*(longlong *)(lVar7 + 0x28) == 0) {
              lVar25 = 0;
            }
            else {
              lVar25 = (longlong)(int)uStack_370;
              uVar3 = (int)uStack_370 + 1;
              uStack_370 = CONCAT44(uStack_370._4_4_,uVar3);
              if (uStack_370._4_4_ < uVar3) {
                FUN_1462b45cc(&local_378,uVar12 & 0xffffffff);
              }
              *(longlong *)(local_378 + lVar25 * 8) = lVar7;
              lVar25 = *(longlong *)(lVar7 + 0x28);
            }
            fVar27 = (float)(*(ulonglong *)(lVar7 + 0x10) - lVar25) /
                     (float)*(ulonglong *)(lVar7 + 0x10);
          }
          lVar7 = local_378;
          iVar8 = iVar8 + (uint)(fVar27 < DAT_14c760114);
          lVar24 = lVar24 + 8;
        } while ((longlong)iVar17 * 8 != lVar24);
        lpCriticalSection = local_390;
        if (iVar8 != 0) {
          iVar17 = (int)uStack_370;
          lVar9 = (longlong)(int)uStack_370;
          if (1 < lVar9) {
            memset(local_358,0,0x2f0);
            local_368 = lVar7;
            uStack_360 = lVar7 + lVar9 * 8 + -8;
            fVar27 = logf((float)iVar17);
            puVar1 = local_380;
            uVar3 = local_394;
            local_358[0] = (int)(longlong)(fVar27 + fVar27);
            plVar4 = &local_368;
            do {
              plVar6 = (longlong *)*plVar4;
              plVar15 = (longlong *)plVar4[1];
              iVar17 = (int)plVar4[2];
              iVar8 = (int)((ulonglong)((longlong)plVar15 - (longlong)plVar6) >> 3);
              uVar12 = (ulonglong)(iVar8 + 1);
              plVar13 = plVar6;
              plVar21 = plVar15;
              if (iVar17 != 0) {
LAB_142b7847f:
                if (8 < (int)(uint)uVar12) {
                  uVar22 = (uint)uVar12 >> 1;
                  lVar9 = plVar13[uVar22];
                  plVar13[uVar22] = *plVar13;
                  *plVar13 = lVar9;
                  plVar23 = plVar15 + 1;
                  plVar5 = plVar13;
                  do {
                    plVar2 = plVar5 + 1;
                    plVar16 = plVar5 + 1;
                    do {
                      plVar10 = plVar16;
                      plVar5 = plVar2;
                      if (plVar15 < plVar5) break;
                      plVar2 = plVar5 + 1;
                      plVar16 = plVar10 + 1;
                    } while ((ulonglong)
                             (*(longlong *)(*plVar5 + 0x10) - *(longlong *)(*plVar5 + 0x28)) <=
                             (ulonglong)
                             (*(longlong *)(*plVar13 + 0x10) - *(longlong *)(*plVar13 + 0x28)));
                    plVar2 = plVar23 + -2;
                    do {
                      plVar16 = plVar23;
                      plVar11 = plVar2;
                      plVar23 = plVar16 + -1;
                      if (plVar23 <= plVar13) break;
                      plVar2 = plVar11 + -1;
                    } while ((ulonglong)
                             (*(longlong *)(*plVar13 + 0x10) - *(longlong *)(*plVar13 + 0x28)) <=
                             (ulonglong)
                             (*(longlong *)(*plVar23 + 0x10) - *(longlong *)(*plVar23 + 0x28)));
                    if (plVar23 < plVar5) goto LAB_142b78529;
                    lVar9 = *plVar5;
                    *plVar5 = *plVar23;
                    *plVar23 = lVar9;
                  } while( true );
                }
                if (plVar13 < plVar15) {
                  do {
                    plVar6 = plVar13;
                    if (plVar13 + 1 <= plVar15) {
                      lVar9 = *plVar13;
                      plVar21 = plVar13 + 1;
                      do {
                        lVar24 = *plVar21;
                        plVar23 = plVar21;
                        if ((ulonglong)(*(longlong *)(lVar24 + 0x10) - *(longlong *)(lVar24 + 0x28))
                            <= (ulonglong)
                               (*(longlong *)(lVar9 + 0x10) - *(longlong *)(lVar9 + 0x28))) {
                          plVar23 = plVar6;
                          lVar24 = lVar9;
                        }
                        lVar9 = lVar24;
                        plVar6 = plVar23;
                        plVar21 = plVar21 + 1;
                      } while (plVar21 <= plVar15);
                    }
                    lVar9 = *plVar6;
                    *plVar6 = *plVar15;
                    *plVar15 = lVar9;
                    plVar15 = plVar15 + -1;
                  } while (plVar13 < plVar15);
                }
                goto LAB_142b78795;
              }
LAB_142b785bc:
              iVar17 = (int)uVar12;
              if (iVar17 != 0) {
                iVar8 = (iVar8 - (iVar8 + -1 >> 0x1f)) + -1 >> 1;
                iVar20 = iVar8;
joined_r0x000142b785e3:
                do {
                  iVar19 = iVar8 * 2 + 1;
                  if (iVar19 < iVar17) {
                    iVar18 = iVar8 * 2 + 2;
                    if ((iVar18 < iVar17) &&
                       ((ulonglong)
                        (*(longlong *)(plVar13[iVar19] + 0x10) -
                        *(longlong *)(plVar13[iVar19] + 0x28)) <=
                        (ulonglong)
                        (*(longlong *)(plVar13[iVar18] + 0x10) -
                        *(longlong *)(plVar13[iVar18] + 0x28)))) {
                      iVar19 = iVar18;
                    }
                    lVar9 = plVar13[iVar19];
                    lVar24 = plVar13[iVar8];
                    if ((ulonglong)(*(longlong *)(lVar24 + 0x10) - *(longlong *)(lVar24 + 0x28)) <
                        (ulonglong)(*(longlong *)(lVar9 + 0x10) - *(longlong *)(lVar9 + 0x28))) {
                      plVar13[iVar8] = lVar9;
                      plVar13[iVar19] = lVar24;
                      iVar8 = iVar19;
                      goto joined_r0x000142b785e3;
                    }
                  }
                  bVar26 = iVar20 != 0;
                  iVar8 = iVar20 + -1;
                  iVar20 = iVar8;
                } while (bVar26);
                if (1 < iVar17) {
                  lVar9 = *plVar13;
                  *plVar13 = plVar13[uVar12 - 1];
                  plVar13[uVar12 - 1] = lVar9;
                  if (iVar17 != 2) {
                    do {
                      uVar14 = uVar12 - 1;
                      iVar17 = 0;
                      iVar20 = 1;
                      iVar8 = 0;
                      do {
                        iVar17 = iVar17 + 2;
                        iVar19 = iVar20;
                        if (((longlong)iVar17 < (longlong)uVar14) &&
                           ((ulonglong)
                            (*(longlong *)(plVar13[iVar20] + 0x10) -
                            *(longlong *)(plVar13[iVar20] + 0x28)) <=
                            (ulonglong)
                            (*(longlong *)(plVar13[iVar17] + 0x10) -
                            *(longlong *)(plVar13[iVar17] + 0x28)))) {
                          iVar19 = iVar17;
                        }
                        lVar9 = plVar13[iVar19];
                        lVar24 = plVar13[iVar8];
                        if ((ulonglong)(*(longlong *)(lVar9 + 0x10) - *(longlong *)(lVar9 + 0x28))
                            <= (ulonglong)
                               (*(longlong *)(lVar24 + 0x10) - *(longlong *)(lVar24 + 0x28))) break;
                        plVar13[iVar8] = lVar9;
                        plVar13[iVar19] = lVar24;
                        iVar17 = iVar19 * 2;
                        iVar20 = iVar19 * 2 + 1;
                        iVar8 = iVar19;
                      } while ((longlong)iVar20 < (longlong)uVar14);
                      lVar9 = *plVar13;
                      *plVar13 = plVar13[uVar12 - 2];
                      plVar13[uVar12 - 2] = lVar9;
                      uVar12 = uVar14;
                    } while (2 < uVar14);
                  }
                }
              }
LAB_142b78795:
              plVar4 = plVar4 + -3;
            } while (&local_368 <= plVar4);
            local_368 = 0;
            uStack_360 = 0;
            if (DAT_14c760118 < 0) {
              uVar12 = uStack_370 & 0xffffffff;
              if ((int)uStack_370 < 0) goto LAB_142b78a65;
              if (uVar12 != 0) {
                FUN_14129c748(&local_368);
                if (1 < (longlong)(int)uStack_370) {
                  uVar12 = (longlong)(int)uStack_370 + 1;
                  do {
                    uVar14 = uStack_360;
                    lVar9 = local_378;
                    lVar24 = (longlong)(int)uStack_360;
                    uVar22 = (int)uStack_360 + 1;
                    uStack_360 = CONCAT44(uStack_360._4_4_,uVar22);
                    if (uStack_360._4_4_ < uVar22) {
                      FUN_1462b45cc(&local_368,uVar14 & 0xffffffff);
                    }
                    lVar7 = local_3a0;
                    *(undefined8 *)(local_368 + lVar24 * 8) =
                         *(undefined8 *)(lVar9 + -0x10 + uVar12 * 8);
                    uVar12 = uVar12 - 1;
                  } while (2 < uVar12);
                  if (1 < (int)uStack_370) {
                    lVar9 = 0;
                    do {
                      local_3b8 = puVar1;
                      local_3b0 = &local_368;
                      FUN_142b77f96(*(undefined8 *)(local_378 + lVar9 * 8),local_388,lVar7,uVar3);
                      uStack_360 = CONCAT44(uStack_360._4_4_,(int)uStack_360 + -1);
                      FUN_1471278c0(&local_368);
                      if (uVar3 <= *puVar1) break;
                      lVar9 = lVar9 + 1;
                    } while (lVar9 < (longlong)(int)uStack_370 + -1);
                  }
                }
              }
            }
            else {
              iVar17 = *(int *)(local_3a0 + 0x60);
              if (*(int *)(local_3a0 + 0x58) <= iVar17) {
                *(undefined4 *)(local_3a0 + 0x60) = 0;
                iVar17 = 0;
              }
              if (iVar17 < *(int *)(local_3a0 + 0x58)) {
                iVar8 = 0;
                lVar9 = local_3a0;
                do {
                  lVar24 = *(longlong *)(*(longlong *)(lVar9 + 0x50) + (longlong)iVar17 * 8);
                  fVar27 = 1.0;
                  if (lVar24 != 0) {
                    fVar27 = (float)(*(ulonglong *)(lVar24 + 0x10) - *(longlong *)(lVar24 + 0x28)) /
                             (float)*(ulonglong *)(lVar24 + 0x10);
                  }
                  lVar9 = local_3a0;
                  if (fVar27 < DAT_14c760114) {
                    uVar12 = uStack_370 & 0xffffffff;
                    if ((int)uStack_370 < 0) goto LAB_142b78a65;
                    uVar14 = uStack_360 >> 0x20;
                    uStack_360 = uStack_360 & 0xffffffff00000000;
                    if ((int)uVar14 != (int)uStack_370) {
                      FUN_14129c748(&local_368);
                      uVar12 = uStack_370 & 0xffffffff;
                    }
                    if (0 < (int)uVar12) {
                      uVar12 = uVar12 + 1;
                      do {
                        uVar14 = uStack_360;
                        lVar9 = *(longlong *)(local_378 + -0x10 + uVar12 * 8);
                        if (lVar24 == lVar9) break;
                        lVar7 = (longlong)(int)uStack_360;
                        uVar22 = (int)uStack_360 + 1;
                        uStack_360 = CONCAT44(uStack_360._4_4_,uVar22);
                        if (uStack_360._4_4_ < uVar22) {
                          FUN_1462b45cc(&local_368,uVar14 & 0xffffffff);
                        }
                        *(longlong *)(local_368 + lVar7 * 8) = lVar9;
                        uVar12 = uVar12 - 1;
                      } while (1 < uVar12);
                    }
                    lVar9 = local_3a0;
                    if ((int)uStack_360 != 0) {
                      local_3b8 = puVar1;
                      local_3b0 = &local_368;
                      FUN_142b77f96(lVar24,local_388,local_3a0,uVar3);
                      if ((uVar3 <= *puVar1) || (iVar8 = iVar8 + 1, DAT_14c760118 <= iVar8)) break;
                    }
                  }
                  iVar17 = *(int *)(lVar9 + 0x60) + 1;
                  *(int *)(lVar9 + 0x60) = iVar17;
                } while (iVar17 < *(int *)(lVar9 + 0x58));
              }
            }
            lpCriticalSection = local_390;
            if (local_368 != 0) {
              FUN_1400020a8();
              lpCriticalSection = local_390;
            }
          }
        }
      }
      if (local_378 != 0) {
        FUN_1400020a8();
      }
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  if ((local_60 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_142b78529:
  lVar9 = *plVar13;
  *plVar13 = *plVar23;
  *plVar23 = lVar9;
  iVar17 = iVar17 + -1;
  plVar16 = plVar16 + -2;
  if ((longlong)plVar11 - (longlong)plVar6 < (longlong)plVar21 - (longlong)plVar10) {
    if (plVar5 < plVar15) {
      *plVar4 = (longlong)plVar5;
      plVar4[1] = (longlong)plVar15;
      *(int *)(plVar4 + 2) = iVar17;
      plVar4 = plVar4 + 3;
    }
    plVar6 = plVar13;
    if (plVar23 <= plVar13 + 1) goto LAB_142b78795;
  }
  else {
    if (plVar13 + 1 < plVar23) {
      *plVar4 = (longlong)plVar13;
      plVar4[1] = (longlong)plVar16;
      *(int *)(plVar4 + 2) = iVar17;
      plVar4 = plVar4 + 3;
    }
    plVar11 = plVar15;
    plVar13 = plVar5;
    plVar16 = plVar15;
    plVar6 = plVar10;
    if (plVar15 <= plVar5) goto LAB_142b78795;
  }
  iVar8 = (int)((ulonglong)((longlong)plVar11 - (longlong)plVar6) >> 3);
  uVar12 = (ulonglong)(iVar8 + 1);
  plVar15 = plVar16;
  plVar21 = plVar11;
  if (iVar17 == 0) goto LAB_142b785bc;
  goto LAB_142b7847f;
}



// FUNCTION 142b78a6e FUN_142b78a6e body=276 status=ok
// SIG undefined FUN_142b78a6e(void)

void FUN_142b78a6e(longlong *param_1,code *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined *puVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9abff0);
  if (DAT_14c9ac020 != DAT_14c9ac04c) {
    lVar4 = *param_1;
    puVar5 = &DAT_14c9ac050;
    if (DAT_14c9ac058 != (undefined *)0x0) {
      puVar5 = DAT_14c9ac058;
    }
    iVar2 = *(int *)(puVar5 + (ulonglong)
                              (DAT_14c9ac060 - 1U &
                              (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    while (iVar2 != -1) {
      lVar1 = DAT_14c9ac018 + (longlong)iVar2 * 0x60;
      if (*(longlong *)(DAT_14c9ac018 + (longlong)iVar2 * 0x60) == lVar4) {
        if (lVar1 + 8 != 0 && lVar1 != 0) {
          (*param_2)(*(undefined8 *)(lVar1 + 0x48),*(undefined4 *)(lVar1 + 0x50));
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9ac068);
          uVar3 = DAT_14c9ac098;
          lVar4 = (longlong)(int)DAT_14c9ac098;
          DAT_14c9ac098 = DAT_14c9ac098 + 1;
          if (DAT_14c9ac09c < DAT_14c9ac098) {
            FUN_147125a52(uVar3);
          }
          FUN_1471259e8(lVar4 * 0x50 + DAT_14c9ac090,lVar1 + 8);
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9ac068);
        }
        break;
      }
      iVar2 = *(int *)(lVar1 + 0x58);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142b78b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9abff0);
  return;
}



// FUNCTION 142b78b82 FUN_142b78b82 body=177 status=ok
// SIG undefined FUN_142b78b82(void)

void FUN_142b78b82(longlong *param_1,code *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9ac0a0);
  if (DAT_14c9ac0c0 != DAT_14c9ac0ec) {
    lVar3 = *param_1;
    puVar4 = &DAT_14c9ac0f0;
    if (DAT_14c9ac0f8 != (undefined *)0x0) {
      puVar4 = DAT_14c9ac0f8;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (DAT_14c9ac100 - 1U &
                              (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17) * 4);
    while (iVar2 != -1) {
      lVar1 = DAT_14c9ac0b8 + (longlong)iVar2 * 0x20;
      if (*(longlong *)(DAT_14c9ac0b8 + (longlong)iVar2 * 0x20) == lVar3) {
        if ((lVar1 + 8U & 0xfffffffffffffff7) != 0) {
          (*param_2)(*(undefined8 *)(lVar1 + 8),*(undefined4 *)(lVar1 + 0x10));
        }
        break;
      }
      iVar2 = *(int *)(lVar1 + 0x18);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142b78c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9ac0a0);
  return;
}



// FUNCTION 142b78c34 FUN_142b78c34 body=275 status=ok
// SIG undefined FUN_142b78c34(void)

void FUN_142b78c34(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = *(longlong **)(param_2 + 0x40);
  local_58 = *(undefined8 *)(param_1 + 0x48);
  uStack_50 = *(undefined8 *)(param_1 + 0x50);
  local_68 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = *(undefined8 *)(param_1 + 0x40);
  local_78 = *(undefined8 *)(param_1 + 0x28);
  uStack_70 = *(undefined8 *)(param_1 + 0x30);
  local_88 = *(undefined4 *)(param_1 + 0x18);
  uStack_84 = *(undefined4 *)(param_1 + 0x1c);
  uStack_80 = *(undefined4 *)(param_1 + 0x20);
  uStack_7c = *(undefined4 *)(param_1 + 0x24);
  if (*(code **)(*plVar1 + 0x90) == FUN_144ac897a) {
    local_18 = *(undefined8 *)(param_1 + 0x48);
    uStack_10 = *(undefined8 *)(param_1 + 0x50);
    local_98 = &local_18;
    local_28 = *(undefined8 *)(param_1 + 0x38);
    uStack_20 = *(undefined8 *)(param_1 + 0x40);
    local_a0 = &local_28;
    local_38 = *(undefined8 *)(param_1 + 0x28);
    uStack_30 = *(undefined8 *)(param_1 + 0x30);
    local_a8 = &local_38;
    local_48 = *(undefined4 *)(param_1 + 0x18);
    uStack_44 = *(undefined4 *)(param_1 + 0x1c);
    uStack_40 = *(undefined4 *)(param_1 + 0x20);
    uStack_3c = *(undefined4 *)(param_1 + 0x24);
    FUN_140020562(plVar1 + -0x39,*(undefined8 *)(param_1 + 0x10),
                  CONCAT71((int7)((ulonglong)local_98 >> 8),5));
  }
  else {
    local_a0 = &local_58;
    local_a8 = &local_68;
    (**(code **)(*plVar1 + 0x90))(plVar1,*(undefined8 *)(param_1 + 0x10),&local_88,&local_78);
  }
  if ((local_8 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b78de2 FUN_142b78de2 body=286 status=ok
// SIG undefined FUN_142b78de2(void)

void FUN_142b78de2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = *(longlong **)(param_2 + 0x38);
  local_68 = *(undefined8 *)(param_1 + 0x48);
  uStack_60 = *(undefined8 *)(param_1 + 0x50);
  local_78 = *(undefined8 *)(param_1 + 0x38);
  uStack_70 = *(undefined8 *)(param_1 + 0x40);
  local_88 = *(undefined8 *)(param_1 + 0x28);
  uStack_80 = *(undefined8 *)(param_1 + 0x30);
  local_98 = *(undefined4 *)(param_1 + 0x18);
  uStack_94 = *(undefined4 *)(param_1 + 0x1c);
  uStack_90 = *(undefined4 *)(param_1 + 0x20);
  uStack_8c = *(undefined4 *)(param_1 + 0x24);
  if (*(code **)(*plVar1 + 0x1a0) == FUN_144ac88d0) {
    if (*(byte *)(*(longlong *)(param_1 + 0x10) + 0x9c) < 5) {
      local_28 = *(undefined8 *)(param_1 + 0x48);
      uStack_20 = *(undefined8 *)(param_1 + 0x50);
      local_a8 = &local_28;
      local_38 = *(undefined8 *)(param_1 + 0x38);
      uStack_30 = *(undefined8 *)(param_1 + 0x40);
      local_b0 = &local_38;
      local_48 = *(undefined8 *)(param_1 + 0x28);
      uStack_40 = *(undefined8 *)(param_1 + 0x30);
      local_b8 = &local_48;
      local_58 = *(undefined4 *)(param_1 + 0x18);
      uStack_54 = *(undefined4 *)(param_1 + 0x1c);
      uStack_50 = *(undefined4 *)(param_1 + 0x20);
      uStack_4c = *(undefined4 *)(param_1 + 0x24);
      FUN_140020562(plVar1 + -0x39);
    }
  }
  else {
    local_b0 = &local_68;
    local_b8 = &local_78;
    (**(code **)(*plVar1 + 0x1a0))(plVar1,*(longlong *)(param_1 + 0x10),&local_98,&local_88);
  }
  if ((local_10 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b78f98 FUN_142b78f98 body=1426 status=ok
// SIG undefined FUN_142b78f98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b78f98(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_54 = 1;
  local_68 = 4;
  FUN_14078dbce(&DAT_14c9abe68,L"r.GPUCrashDebugging.Aftermath",&local_54,
                L"Enables or disables Nvidia Aftermath.");
  atexit(FUN_142b746d0);
  local_54 = 0;
  local_68 = 4;
  FUN_14078dbce(&DAT_14c9abe80,L"r.GPUCrashDebugging.Aftermath.Markers",&local_54,
                L"Enable draw event markers in Aftermath dumps");
  atexit(FUN_142b74715);
  local_54 = 0;
  local_68 = 4;
  FUN_14078dbce(&DAT_14c9abe98,L"r.GPUCrashDebugging.Aftermath.Callstack",&local_54,
                L"Enable callstack capture in Aftermath dumps");
  atexit(FUN_142b7475a);
  local_54 = 1;
  local_68 = 4;
  FUN_14078dbce(&DAT_14c9abeb0,L"r.GPUCrashDebugging.Aftermath.ResourceTracking",&local_54,
                L"Enable resource tracking for Aftermath dumps");
  atexit(FUN_142b7479f);
  local_54 = 0;
  local_68 = 4;
  FUN_14078dbce(&DAT_14c9abec8,L"r.GPUCrashDebugging.Aftermath.TrackAll",&local_54,
                L"Enable maximum tracking for Aftermath dumps");
  atexit(FUN_142b747e4);
  local_54 = 1;
  local_68 = 4;
  FUN_14078dbce(&DAT_14c9abee0,L"r.GPUCrashDebugging.Aftermath.ShaderRegistration",&local_54,
                L"Enable registration of shaders and pipelines in Aftermath.");
  atexit(FUN_142b74829);
  local_54 = 0;
  local_68 = 4;
  FUN_140a6b41e(&DAT_14c9abef8,L"r.GPUCrashDebugging.Aftermath.DumpShaderDebugInfo",&local_54,
                L"Dump shader debug info (.nvdbg) alongside the crash dump.");
  atexit(FUN_142b7486e);
  local_54 = 0x40f00000;
  local_68 = 0;
  FUN_140a6b41e(&DAT_14c9abf10,L"r.GPUCrashDebugging.Aftermath.LateShaderAssociations.TimeLimit",
                &local_54,L"Time limit (s) before the late associations are stopped\n");
  atexit(FUN_142b748b3);
  local_54 = 10;
  local_68 = 0;
  FUN_14078dbce(&DAT_14c9abf28,L"r.GPUCrashDebugging.Aftermath.LateShaderAssociations.FrameLimit",
                &local_54,
                L"Max last since used number of frames to consider when collecting pipelines\n");
  atexit(FUN_142b748f8);
  local_54 = 0x41200000;
  local_68 = 0;
  FUN_140a6b41e(&DAT_14c9abf40,L"r.GPUCrashDebugging.Aftermath.DumpProcessWaitTime",&local_54,
                L"Amount of time (in seconds) to wait for Aftermath to finish processing GPU crash dumps."
               );
  atexit(FUN_142b7493d);
  local_54 = 0x40400000;
  local_68 = 0;
  FUN_140a6b41e(&DAT_14c9abf58,L"r.GPUCrashDebugging.Aftermath.DumpStartWaitTime",&local_54,
                L"Amount of time (in seconds) to wait for Aftermath to start processing GPU crash dumps."
               );
  atexit(FUN_142b74982);
  DAT_14c9abf70 = 0;
  DAT_14c9abf80 = 0;
  atexit((_func_5014 *)&LAB_142b749c7);
  DAT_14c9abfb0 = 0;
  DAT_14c9abfc0 = 0;
  atexit((_func_5014 *)&LAB_142b749ee);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c9abff0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c9abff0,4000);
  DAT_14c9ac038 = 0;
  DAT_14c9ac040 = 0;
  DAT_14c9ac018 = 0;
  _DAT_14c9ac020 = 0;
  _DAT_14c9ac044 = 0xffffffff00000080;
  DAT_14c9ac04c = 0;
  DAT_14c9ac058 = 0;
  DAT_14c9ac060 = 0;
  atexit((_func_5014 *)&LAB_142b74a15);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c9ac068);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c9ac068,4000);
  DAT_14c9ac090 = 0;
  _DAT_14c9ac098 = 0;
  atexit((_func_5014 *)&LAB_142b74a1a);
  InitializeSRWLock((PSRWLOCK)&DAT_14c9ac0a0);
  DAT_14c9ac0d8 = 0;
  DAT_14c9ac0e0 = 0;
  DAT_14c9ac0a8 = 0;
  _DAT_14c9ac0b0 = 0;
  DAT_14c9ac0b8 = 0;
  _DAT_14c9ac0c0 = 0;
  _DAT_14c9ac0e4 = 0xffffffff00000080;
  DAT_14c9ac0ec = 0;
  DAT_14c9ac0f8 = 0;
  DAT_14c9ac100 = 0;
  DAT_14c9ac108 = 0;
  atexit((_func_5014 *)&LAB_142b74a1f);
  DAT_14c9ac120 = 0;
  _DAT_14c9ac128 = 0;
  atexit(FUN_142b77a24);
  local_68 = 0x20;
  FUN_14153156c(&DAT_14c9ac130,L"RHI.TransientAllocator.SeparateAsyncComputeHeap",&DAT_14c9ac140,
                L"If enabled, async compute only allocations are put in their own separate heap.");
  atexit(FUN_142b77a55);
  local_68 = 0x20;
  FUN_14153156c(&DAT_14c9ac148,L"RHI.TransientAllocator.ParallelResourceCreation",&DAT_14c760100,
                L"If enabled, a task is launched for each placed resource that is created.");
  atexit(FUN_142b77a9a);
  local_68 = 4;
  FUN_141471170(&DAT_14c9ac158,L"RHI.TransientAllocator.MinimumHeapSize",&DAT_14c760104,
                L"Minimum size of an RHI transient heap in MB. Heaps will default to this size and grow to the maximum based on the first allocation (Default 128)."
               );
  atexit(FUN_142b77adf);
  local_68 = 4;
  FUN_141471170(&DAT_14c9ac168,L"RHI.TransientAllocator.BufferCacheSize",&DAT_14c760108,
                L"The maximum number of RHI buffers to cache on each heap before garbage collecting."
               );
  atexit(FUN_142b77b24);
  local_68 = 4;
  FUN_141471170(&DAT_14c9ac178,L"RHI.TransientAllocator.TextureCacheSize",&DAT_14c76010c,
                L"The maximum number of RHI textures to cache on each heap before garbage collecting."
               );
  atexit(FUN_142b77b69);
  local_68 = 4;
  FUN_141471170(&DAT_14c9ac188,L"RHI.TransientAllocator.GarbageCollectLatency",&DAT_14c760110,
                L"Amount of update cycles before memory is reclaimed.");
  atexit(FUN_142b77bae);
  local_68 = 0;
  FUN_1415c789c(&DAT_14c9ac198,L"RHIPoolAllocator.DefragSizeFraction",&DAT_14c760114,
                L"Skip defrag of pool if usage is more than given fraction (default: 0.9f).");
  atexit(FUN_142b77ec4);
  local_68 = 0;
  FUN_141471170(&DAT_14c9ac1a8,L"RHIPoolAllocator.DefragMaxPoolsToClear",&DAT_14c760118,
                L"Maximum amount of pools to try and clear during a single alloctor defrag call (default: 1 - negative then all pools will be tried and no timeslicing)"
               );
  atexit(FUN_142b77f09);
  local_68 = 0;
  FUN_141471170(&DAT_14c9ac1b8,L"RHIPoolAllocator.ValidateLinkedList",&DAT_14c9ac1c8,
                L"Validate all the internal linked list data of all the RHIPoolAllocators during every operation."
               );
  atexit(FUN_142b77f4e);
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b7952c FUN_142b7952c body=57 status=ok
// SIG undefined FUN_142b7952c(void)

void FUN_142b7952c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9ac1f0 == 0) {
    uVar1 = FUN_145c5aca7();
    DAT_14c9ac1f0 = FUN_14171c317(FUN_1462b4680,uVar1,L"EDesiredImageFormat");
  }
  return;
}



// FUNCTION 142b79566 FUN_142b79566 body=1996 status=ok
// SIG undefined FUN_142b79566(void)

ulonglong FUN_142b79566(longlong *param_1,undefined1 **param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  DWORD DVar6;
  longlong lVar7;
  byte *pbVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined1 *puVar12;
  wchar_t *pwVar13;
  longlong *plVar14;
  undefined1 **ppuVar15;
  ulonglong uVar16;
  int iVar17;
  undefined1 auStack_128 [32];
  undefined1 **local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  undefined1 *local_c8;
  code *local_c0;
  code *local_b8 [2];
  undefined1 *local_a8;
  longlong *local_98 [2];
  longlong local_88 [4];
  undefined1 *local_68 [2];
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_1 == (longlong *)0x0) {
    pwVar13 = L"Invalid texture supplied.";
  }
  else {
    if (DAT_14cb0b9a0 == 0) {
      local_d0 = local_b8;
      local_b8[0] = FUN_1449e2820;
      local_c0 = FUN_14081d0ea;
      local_c8 = &LAB_146408884;
      local_d8 = &LAB_147d719e1;
      local_e0 = &LAB_140fb41fe;
      local_e8 = L"Engine";
      local_f0 = 0;
      local_f8 = 0x10000000;
      local_100 = 8;
      local_108 = (undefined1 **)CONCAT44(local_108._4_4_,0x168);
      FUN_14081cfa3(L"/Script/Engine",L"TextureRenderTarget2D",&DAT_14cb0b9a0,&DAT_147d719e0);
    }
    lVar7 = param_1[2];
    iVar17 = *(int *)(lVar7 + 0x38);
    if ((iVar17 < *(int *)(DAT_14cb0b9a0 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cb0b9a0 + 0x38) * 8) !=
        DAT_14cb0b9a0 + 0x30)) {
      if (DAT_14cb0b4f0 == 0) {
        local_d0 = local_b8;
        local_b8[0] = FUN_1449e2820;
        local_c0 = FUN_14081d0ea;
        local_c8 = &LAB_14580b774;
        local_d8 = &LAB_147d6e27b;
        local_e0 = &LAB_140307be8;
        local_e8 = L"Engine";
        local_f0 = 0;
        local_f8 = 0x10000000;
        local_100 = 8;
        local_108 = (undefined1 **)CONCAT44(local_108._4_4_,0x158);
        FUN_14081cfa3(L"/Script/Engine",L"Texture2D",&DAT_14cb0b4f0,FUN_1464082aa);
        lVar7 = param_1[2];
        iVar17 = *(int *)(lVar7 + 0x38);
      }
      if (((*(int *)(DAT_14cb0b4f0 + 0x38) <= iVar17) &&
          (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cb0b4f0 + 0x38) * 8)
           == DAT_14cb0b4f0 + 0x30)) && (lVar7 = param_1[0x29], lVar7 != 0)) {
        pbVar8 = (byte *)(lVar7 + 0xc);
        if (*(longlong *)(lVar7 + 0x28) != 0) {
          pbVar8 = (byte *)(*(longlong *)(lVar7 + 0x28) + 0x20);
        }
        bVar4 = *pbVar8;
        goto LAB_142b79654;
      }
    }
    else {
      bVar4 = (**(code **)(*param_1 + 0x3b8))(param_1);
LAB_142b79654:
      if ((bVar4 < 0x26) && ((0x2000000406U >> ((ulonglong)bVar4 & 0x3f) & 1) != 0)) {
        local_b8[0] = (code *)FUN_1447b4020(param_1);
        local_a8 = *param_2;
        local_98[0] = (longlong *)0x0;
        if (local_a8 != (undefined1 *)0x0) {
          ppuVar15 = param_2 + 2;
          param_2 = param_2 + 4;
          if ((undefined1 **)*ppuVar15 != (undefined1 **)0x0) {
            param_2 = (undefined1 **)*ppuVar15;
          }
          (**(code **)*param_2)(param_2,local_98);
        }
        lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        iVar17 = *(int *)(lVar7 + 0xc60);
        if (DAT_14c86a9fc == 0) {
          if (iVar17 != 2) {
            if (iVar17 != 1) goto LAB_142b796d9;
            uVar5 = FUN_140ad26c0();
            param_2 = (undefined1 **)(ulonglong)uVar5;
            DVar6 = GetCurrentThreadId();
            if (uVar5 == DVar6) goto LAB_142b796de;
            goto LAB_142b7970f;
          }
LAB_142b796de:
          FUN_142b7a5e6(local_b8,&DAT_14ca85100);
        }
        else {
LAB_142b796d9:
          if (iVar17 == 0x10) goto LAB_142b796de;
LAB_142b7970f:
          if (DAT_14ca9a438 == '\0') {
            if ((DAT_14c86a9f8 != '\x01') || (iVar17 = *(int *)(lVar7 + 0xc60), iVar17 == 2))
            goto LAB_142b796de;
            if (iVar17 == 1) {
              uVar5 = FUN_140ad26c0();
              param_2 = (undefined1 **)(ulonglong)uVar5;
              DVar6 = GetCurrentThreadId();
              if (uVar5 == DVar6) goto LAB_142b796de;
            }
          }
          if (DAT_14ca9a43c == 0) {
            puVar1 = (undefined8 *)
                     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x308);
            puVar11 = (uint *)*puVar1;
            if (puVar11 != (uint *)0x0) goto LAB_142b798d8;
            while( true ) {
              uVar5 = *(uint *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x318);
              if ((uVar5 & 1) == 0) {
                *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         ) = uVar5 | 1;
                __tlregdtor(&LAB_142b7ac79);
              }
              lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
              ;
              puVar10 = *(undefined4 **)(lVar7 + 0x310);
              *(undefined8 *)(lVar7 + 0x310) = 0;
              if (puVar10 == (undefined4 *)0x0) {
                puVar10 = _aligned_malloc(0x10000,0x10000);
              }
              *puVar10 = 0xffffffff;
              *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
              puVar10[0x12] = 0;
              *puVar1 = puVar10;
              FUN_140217a48(puVar1);
              puVar11 = (uint *)*puVar1;
LAB_142b798d8:
              param_2 = (undefined1 **)(*(longlong *)(puVar11 + 0x10) + 0xfU & 0xfffffffffffffff0);
              ppuVar15 = param_2 + 0x20;
              uVar5 = puVar11[0x12];
              if (ppuVar15 <= puVar11 + 0x4000) break;
              while( true ) {
                *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
                LOCK();
                uVar2 = *puVar11;
                *puVar11 = *puVar11 + uVar5 + 1;
                UNLOCK();
                if ((uVar2 ^ uVar5) != 0xffffffff) break;
                puVar11 = (uint *)*puVar1;
                *puVar11 = 0xffffffff;
                *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
                puVar11[0x12] = 0;
                *puVar1 = puVar11;
                param_2 = (undefined1 **)((longlong)puVar11 + 0x67U & 0xfffffffffffffff0);
                ppuVar15 = param_2 + 0x20;
                uVar5 = 0;
                if (ppuVar15 <= puVar11 + 0x4000) {
                  uVar5 = 1;
                  goto LAB_142b79958;
                }
              }
            }
            uVar5 = uVar5 + 1;
LAB_142b79958:
            *(undefined1 ***)(puVar11 + 0x10) = ppuVar15;
            puVar11[0x12] = uVar5;
            FUN_1447247dc(param_2,0);
            *param_2 = (undefined1 *)&PTR_FUN_14a1e92c8;
            param_2[0x16] = local_b8[0];
            param_2[0x18] = local_a8;
            param_2[0x1a] = (undefined1 *)0x0;
            if (local_a8 != (undefined1 *)0x0) {
              plVar9 = local_98[0];
              if (local_98[0] == (longlong *)0x0) {
                plVar9 = local_88;
              }
              (**(code **)*plVar9)(plVar9,param_2 + 0x1a);
            }
            if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
              uVar5 = DAT_14c7585c8 >> 10 & 3;
              iVar17 = 0;
              if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar5 < 2) {
                uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar5];
                iVar17 = 0;
              }
              else {
                uVar16 = 2;
              }
            }
            else {
              iVar17 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                       *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
              uVar16 = 5;
            }
            if (*(code **)(param_2[0xe] + 0x18) != FUN_144713626) {
              (**(code **)(param_2[0xe] + 0x18))(param_2 + 0xe,param_2 + 9);
            }
            param_2[0xe] = (undefined1 *)
                           LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                           ::vftable;
            param_2[9] = (undefined1 *)param_2;
            param_2[10] = (undefined1 *)param_2;
            lVar7 = *(longlong *)
                     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x2b8);
            if (lVar7 == 0) {
              uVar3 = 1;
              if ((char)uVar16 != '\x06') {
                uVar3 = uVar16;
              }
              uVar16 = uVar3;
              puVar12 = (undefined1 *)0x0;
            }
            else {
              if ((char)uVar16 == '\x06') {
                uVar16 = *(ulonglong *)(lVar7 + 0x38) >> 0x3b;
              }
              puVar12 = *(undefined1 **)(lVar7 + 0x30);
            }
            param_2[0xf] = puVar12;
            param_2[0x10] = (undefined1 *)(uVar16 << 0x3b | 0xc00000527800b400);
            *(int *)((longlong)param_2 + 0x1c) = iVar17;
            if (param_2 == (undefined1 **)0x0) {
              local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
              FUN_1447439e4(0);
            }
            else {
              LOCK();
              *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
              UNLOCK();
              local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
              FUN_1447439e4(param_2);
              LOCK();
              ppuVar15 = param_2 + 1;
              *(int *)ppuVar15 = *(int *)ppuVar15 + -1;
              UNLOCK();
              if (*(int *)ppuVar15 == 0) {
                (**(code **)*param_2)(param_2,1);
              }
            }
          }
          else {
            local_68[0] = (undefined1 *)0x0;
            plVar9 = (longlong *)FUN_14001cc68(0x60,0x10);
            local_58 = plVar9;
            *plVar9 = (longlong)&PTR_LAB_14a1e9280;
            plVar9[2] = (longlong)local_b8[0];
            plVar9[4] = (longlong)local_a8;
            plVar9[6] = 0;
            if (local_a8 != (undefined1 *)0x0) {
              plVar14 = local_98[0];
              if (local_98[0] == (longlong *)0x0) {
                plVar14 = local_88;
              }
              (**(code **)*plVar14)(plVar14,plVar9 + 6);
            }
            if (plVar9 != (longlong *)&DAT_fffffffffffffff0) {
              local_68[0] = &LAB_142b7ac04;
            }
            param_2 = local_68;
            local_108 = param_2;
            FUN_14005a792(&DAT_14ca9a440,L"ResolvePixelData",&DAT_14c9ac284);
            if (local_68[0] != (undefined1 *)0x0) {
              plVar9 = local_58;
              if (local_58 == (longlong *)0x0) {
                plVar9 = local_48;
              }
              (**(code **)(*plVar9 + 0x10))();
            }
          }
        }
        if (local_a8 != (undefined1 *)0x0) {
          plVar9 = local_98[0];
          if (local_98[0] == (longlong *)0x0) {
            plVar9 = local_88;
          }
          (**(code **)(*plVar9 + 0x10))();
        }
        uVar16 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
        goto LAB_142b795fe;
      }
    }
    pwVar13 = L"Unsupported texture format.";
  }
  uVar16 = 0;
  FUN_1415b7ec4(pwVar13,2,0);
LAB_142b795fe:
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar16 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b79d34 FUN_142b79d34 body=183 status=ok
// SIG undefined FUN_142b79d34(void)

undefined8 * FUN_142b79d34(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 *puVar3;
  
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
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  param_1[2] = param_2[2];
  lVar2 = param_2[4];
  param_1[4] = lVar2;
  param_1[6] = 0;
  if (lVar2 != 0) {
    puVar3 = param_2 + 8;
    if ((undefined8 *)param_2[6] != (undefined8 *)0x0) {
      puVar3 = (undefined8 *)param_2[6];
    }
    (**(code **)*puVar3)(puVar3,param_1 + 6);
  }
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  lVar2 = param_2[0xe];
  param_1[0xe] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 142b79dec FUN_142b79dec body=102 status=ok
// SIG undefined FUN_142b79dec(void)

void FUN_142b79dec(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[0xe];
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
  if (param_1[4] != 0) {
    plVar3 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142b79e52 FUN_142b79e52 body=69 status=ok
// SIG undefined FUN_142b79e52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b79e52(void)

{
  _DAT_14c9ac240 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b79e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ac248,1);
  return;
}



// FUNCTION 142b79e97 FUN_142b79e97 body=69 status=ok
// SIG undefined FUN_142b79e97(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b79e97(void)

{
  _DAT_14c9ac258 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b79ed9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ac260,1);
  return;
}



// FUNCTION 142b79edc FUN_142b79edc body=404 status=ok
// SIG undefined FUN_142b79edc(void)

undefined8 * FUN_142b79edc(longlong param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x98) == 0) {
    if (param_4 == '\0') {
      if (*(int *)(param_1 + 0xc) <= *(int *)(param_1 + 8)) goto LAB_142b79f17;
    }
    else {
      while (*(int *)(param_1 + 0xc) <= *(int *)(param_1 + 8)) {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))
                  (*(longlong **)(param_1 + 0x10),0xffffffff,0);
      }
    }
    FUN_147129da6(&local_48);
    local_38 = 1;
    *param_2 = local_48;
    param_2[1] = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plStack_40 + 8) = *(int *)((longlong)plStack_40 + 8) + 1;
      UNLOCK();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
    uVar3 = *(undefined4 *)(param_1 + 0x88);
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x50));
    puVar5 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    puVar5[1] = 0;
    *puVar5 = &PTR_LAB_14a1e91d0;
    *(undefined4 *)(puVar5 + 2) = uVar3;
    puVar5[3] = param_1;
    puVar5[4] = *param_3;
    *param_3 = 0;
    puVar5[5] = local_48;
    puVar5[6] = plStack_40;
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    *(undefined1 *)(puVar5 + 7) = local_38;
    if (*(longlong *)(param_1 + 0x48) == 0) {
      FUN_147128724(puVar5);
    }
    else {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))(*(longlong **)(param_1 + 0x48),puVar5,3)
      ;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    plVar4 = plStack_40;
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
LAB_142b79f17:
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 142b7a072 FUN_142b7a072 body=1379 status=ok
// SIG undefined FUN_142b7a072(void)

ulonglong FUN_142b7a072(longlong param_1)

{
  char **ppcVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  DWORD DVar9;
  uint uVar10;
  longlong *plVar11;
  wchar_t *_Str;
  size_t sVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 uVar16;
  int iVar17;
  char *pcVar18;
  byte bVar19;
  ulonglong uVar20;
  undefined7 uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined1 auStack_8b8 [32];
  undefined4 local_898;
  ulonglong local_888;
  undefined1 local_880 [8];
  char *local_878;
  undefined8 uStack_870;
  undefined8 local_868;
  char *local_860;
  undefined8 uStack_858;
  longlong local_850;
  char *local_848;
  undefined8 uStack_840;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_8b8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9ac280) && (FUN_144b3d300(&DAT_14c9ac280), DAT_14c9ac280 == -1)) {
    local_848 = "ImageWrapper";
    uStack_840 = CONCAT35(uStack_840._5_3_,0xc);
    uVar10 = FUN_14001a6c0(&local_848,1);
    DAT_14c9ac278 = (ulonglong)uVar10;
    _Init_thread_footer(&DAT_14c9ac280);
  }
  uVar20 = DAT_14c9ac278;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
    FUN_145762954(&DAT_14c874628);
    DAT_14c874a18 = 1;
    atexit(FUN_14278de47);
    _Init_thread_footer(&DAT_14c874a20);
  }
  plVar11 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar20,&local_848,1);
  ppcVar1 = (char **)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) == 0) {
    pcVar18 = "";
  }
  else {
    pcVar18 = *ppcVar1;
  }
  cVar6 = (**(code **)(*plVar11 + 0x68))(plVar11,pcVar18);
  if (cVar6 != *(char *)(param_1 + 0x18)) {
    _Str = (wchar_t *)(**(code **)(*plVar11 + 0x70))(plVar11);
    FUN_140c50e9c(&local_878,ppcVar1,0);
    iVar4 = (int)uStack_870;
    iVar8 = ((int)uStack_870 == 0) + 1;
    local_860 = local_878;
    local_878 = (char *)0x0;
    iVar5 = uStack_870._4_4_;
    uStack_858 = uStack_870;
    uStack_870 = 0;
    iVar17 = iVar8 + iVar4;
    if (iVar17 < iVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar8);
    }
    if (iVar17 < 0) {
LAB_142b7a5c0:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar17);
    }
    if (iVar5 < iVar17) {
      FUN_1446f8c06(&local_860);
    }
    FUN_140002184(&local_860);
    if (_Str == (wchar_t *)0x0) {
LAB_142b7a5a9:
      local_848 = local_860;
      uStack_840 = uStack_858;
      local_860 = (char *)0x0;
      uStack_858 = 0;
    }
    else {
      sVar12 = wcslen(_Str);
      if ((int)sVar12 == 0) goto LAB_142b7a5a9;
      iVar4 = (int)uStack_858;
      iVar8 = (int)sVar12 + (uint)((int)uStack_858 == 0);
      local_848 = local_860;
      local_860 = (char *)0x0;
      iVar5 = uStack_858._4_4_;
      uStack_840 = uStack_858;
      uStack_858 = 0;
      iVar17 = iVar8 + iVar4;
      if (iVar17 < iVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4((longlong)iVar8);
      }
      if (iVar17 < 0) goto LAB_142b7a5c0;
      if (iVar5 < iVar17) {
        FUN_1446f8c06(&local_848);
      }
      FUN_1400020e8(&local_848,_Str,sVar12 & 0xffffffff);
    }
    if (ppcVar1 == &local_848) {
      if (local_848 != (char *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 8) != 0) {
        FUN_1400020a8();
      }
      *(char **)(param_1 + 8) = local_848;
      local_848 = (char *)0x0;
      *(int *)(param_1 + 0x10) = (int)uStack_840;
      *(undefined4 *)(param_1 + 0x14) = uStack_840._4_4_;
      uStack_840 = 0;
    }
    if (local_860 != (char *)0x0) {
      FUN_1400020a8();
    }
    if (local_878 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_140bee914(&local_848,ppcVar1);
  plVar13 = (longlong *)FUN_14054d1d4();
  pcVar18 = local_848;
  if ((int)uStack_840 == 0) {
    pcVar18 = "";
  }
  cVar6 = (**(code **)(*plVar13 + 0x50))(plVar13,pcVar18);
  if (cVar6 == '\0') {
    plVar13 = (longlong *)FUN_14054d1d4();
    pcVar18 = local_848;
    if ((int)uStack_840 == 0) {
      pcVar18 = "";
    }
    (**(code **)(*plVar13 + 0x58))(plVar13,pcVar18,1);
  }
  plVar13 = (longlong *)FUN_14054d1d4();
  if (*(int *)(param_1 + 0x10) == 0) {
    pcVar18 = "";
  }
  else {
    pcVar18 = *ppcVar1;
  }
  lVar14 = (**(code **)(*plVar13 + 0x108))(plVar13,pcVar18);
  bVar3 = true;
  if (lVar14 != -1) {
    if (*(char *)(param_1 + 0x20) == '\x01') {
      plVar15 = (longlong *)FUN_1400dbadc();
      plVar13 = (longlong *)*plVar15;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = (longlong *)FUN_140e92164();
        *plVar15 = (longlong)plVar13;
      }
      if (*(int *)(param_1 + 0x10) == 0) {
        pcVar18 = "";
      }
      else {
        pcVar18 = *ppcVar1;
      }
      cVar6 = (**(code **)(*plVar13 + 0x88))(plVar13,pcVar18);
      if (cVar6 != '\0') goto LAB_142b7a365;
    }
    bVar3 = false;
  }
LAB_142b7a365:
  if (local_848 != (char *)0x0) {
    FUN_1400020a8();
  }
  if (bVar3) {
    if ((longlong)*(int *)(param_1 + 0x80) != 0) {
      puVar22 = *(undefined8 **)(param_1 + 0x78);
      puVar23 = puVar22 + (longlong)*(int *)(param_1 + 0x80) * 8;
      do {
        local_848 = *(char **)(param_1 + 0x70);
        pcVar2 = (code *)*puVar22;
        plVar13 = puVar22 + 4;
        if ((longlong *)puVar22[2] != (longlong *)0x0) {
          plVar13 = (longlong *)puVar22[2];
        }
        uVar16 = (**(code **)(*plVar13 + 8))();
        (*pcVar2)(uVar16,&local_848);
        puVar22 = puVar22 + 8;
      } while (puVar22 != puVar23);
    }
    FUN_147128b38(*(undefined8 *)(param_1 + 0x70),&local_860);
    if (local_850 != 0) {
      local_878 = (char *)0x0;
      uStack_870 = 0;
      local_868 = 0;
      local_898 = *(undefined4 *)(param_1 + 0x1c);
      cVar6 = (**(code **)(*plVar11 + 0x40))
                        (plVar11,&local_878,*(undefined1 *)(param_1 + 0x18),&local_860);
      if (cVar6 == '\0') {
LAB_142b7a44a:
        bVar7 = 1;
        bVar19 = 0;
        uVar21 = 0;
      }
      else {
        FUN_140bee914(&local_848,ppcVar1);
        cVar6 = FUN_145b0052c(&local_848,local_880,&local_888);
        if (local_848 != (char *)0x0) {
          FUN_1400020a8();
        }
        if (cVar6 == '\0') {
          DVar9 = GetLastError();
          FUN_14682f6b8(&local_848,0x400,DVar9);
        }
        else if (local_888 < uStack_870 + 0x100000U) goto LAB_142b7a44a;
        uVar16 = FUN_14054d1d4();
        if (*(int *)(param_1 + 0x10) == 0) {
          pcVar18 = "";
        }
        else {
          pcVar18 = *ppcVar1;
        }
        bVar7 = FUN_146810dee(&local_878,pcVar18,uVar16,0);
        uVar21 = (undefined7)((ulonglong)param_1 >> 8);
        bVar19 = 1;
      }
      if (local_878 != (char *)0x0) {
        FUN_1400020a8();
      }
      uVar20 = CONCAT71(uVar21,bVar19 & bVar7);
      goto LAB_142b7a37b;
    }
  }
  uVar20 = 0;
LAB_142b7a37b:
  if ((local_48 ^ (ulonglong)auStack_8b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar20 & 0xffffffff;
}



// FUNCTION 142b7a5e6 FUN_142b7a5e6 body=1565 status=ok
// SIG undefined FUN_142b7a5e6(void)

void FUN_142b7a5e6(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  longlong *plVar14;
  uint *puVar15;
  bool bVar16;
  undefined1 auStack_108 [32];
  undefined8 **local_e8;
  undefined4 local_e0;
  undefined8 **local_d8;
  undefined4 local_d0;
  uint *local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined2 local_78;
  undefined8 local_74;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar14 = *(longlong **)(*param_1 + 0x10);
  if ((plVar14 == (longlong *)0x0) || (*(char *)((longlong)plVar14 + 0x52) != '\0')) {
    local_88 = (undefined8 *)0x0;
    pcVar6 = (code *)param_1[2];
    plVar14 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[4];
    }
    uVar8 = (**(code **)(*plVar14 + 8))(plVar14);
    (*pcVar6)(uVar8,&local_88);
    if (local_88 != (undefined8 *)0x0) {
      (**(code **)*local_88)(local_88,1);
    }
    goto LAB_142b7a66d;
  }
  puVar15 = (uint *)(plVar14 + 1);
  LOCK();
  *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
  UNLOCK();
  lVar9 = (**(code **)(*plVar14 + 8))(plVar14);
  iVar3 = *(int *)(lVar9 + 0x28);
  lVar9 = (**(code **)(*plVar14 + 8))(plVar14);
  iVar4 = *(int *)(lVar9 + 0x24);
  uVar8 = CONCAT44(iVar3,iVar4);
  lVar9 = (**(code **)(*plVar14 + 8))(plVar14);
  bVar2 = *(byte *)(lVar9 + 0x33);
  if (bVar2 < 10) {
    if (bVar2 != 1) {
      if (bVar2 == 2) goto LAB_142b7a7af;
      goto LAB_142b7a708;
    }
    local_a8 = 0;
    uStack_a0 = 0;
    local_c0 = puVar15;
    FUN_140a4b95e(&local_a8,iVar4 * iVar3,1);
    local_88 = (undefined8 *)0x0;
    uStack_80 = uStack_80 & 0xffffffff00000000;
    FUN_14007658c(&DAT_14ca850c8,&local_88,5);
    local_88 = (undefined8 *)0x300000006;
    uStack_80._0_4_ = (uint)uStack_80 & 0xffffff00;
    uStack_80 = CONCAT44(0x467a0000,(uint)uStack_80);
    local_78 = 0;
    local_74 = 0;
    local_98 = 0;
    local_e8 = &local_88;
    uStack_90 = uVar8;
    (**(code **)(*DAT_14ca83900 + 0x250))(DAT_14ca83900,plVar14,&local_98,&local_a8);
    local_b0 = local_a8;
    local_a8 = 0;
    iVar5 = (int)uStack_a0;
    local_b8 = (longlong)uStack_a0._4_4_;
    uStack_a0 = 0;
    local_98 = CONCAT44(iVar3,iVar4);
    puVar12 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    local_e0 = CONCAT31(local_e0._1_3_,4);
    local_e8 = (undefined8 **)CONCAT71(local_e8._1_7_,0x20);
    local_d8 = &local_88;
    FUN_147129202(puVar12,&local_98,2,3);
    ppuVar13 = &PTR_FUN_14a1e9240;
LAB_142b7a9af:
    *puVar12 = ppuVar13;
    puVar12[5] = local_b0;
    puVar12[6] = (longlong)iVar5;
    puVar12[7] = local_b8;
    local_88 = (undefined8 *)0x0;
    local_98 = 0;
    cVar7 = FUN_147129038(puVar12,&local_88,&local_98);
    if (cVar7 == '\0') {
      lVar9 = local_a8;
      if (puVar12 != (undefined8 *)0x0) {
        (**(code **)*puVar12)(puVar12,1);
        lVar9 = local_a8;
      }
      goto LAB_142b7abd2;
    }
    pcVar6 = (code *)param_1[2];
    plVar11 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[4];
    }
    local_88 = puVar12;
    uVar8 = (**(code **)(*plVar11 + 8))(plVar11);
    (*pcVar6)(uVar8,&local_88);
    lVar9 = local_a8;
    if (local_88 != (undefined8 *)0x0) {
      (**(code **)*local_88)(local_88,1);
      lVar9 = local_a8;
    }
LAB_142b7aba3:
    puVar15 = local_c0;
    if (lVar9 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (bVar2 == 0x25) {
LAB_142b7a7af:
      local_a8 = 0;
      uStack_a0 = 0;
      local_c0 = puVar15;
      FUN_1469886f0(&local_a8,iVar4 * iVar3,1);
      local_88 = (undefined8 *)0x0;
      uStack_80 = uStack_80 & 0xffffffff00000000;
      FUN_14007658c(&DAT_14ca850c8,&local_88,5);
      local_88 = (undefined8 *)0x6;
      uStack_80._0_4_ = (uint)uStack_80 & 0xffffff00;
      uStack_80 = CONCAT44(0x467a0000,(uint)uStack_80);
      local_78 = 0;
      local_74 = 0;
      local_98 = 0;
      local_e8 = &local_88;
      uStack_90 = uVar8;
      (**(code **)(*DAT_14ca83900 + 600))(DAT_14ca83900,plVar14,&local_98,&local_a8);
      local_b0 = local_a8;
      local_a8 = 0;
      iVar5 = (int)uStack_a0;
      local_b8 = (longlong)uStack_a0._4_4_;
      uStack_a0 = 0;
      local_98 = CONCAT44(iVar3,iVar4);
      puVar12 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      local_88 = (undefined8 *)0x0;
      uStack_80 = 0;
      local_e0 = CONCAT31(local_e0._1_3_,4);
      local_e8 = (undefined8 **)CONCAT71(local_e8._1_7_,8);
      local_d8 = &local_88;
      FUN_147129202(puVar12,&local_98,0,1);
      ppuVar13 = &PTR_FUN_14a1e9260;
      goto LAB_142b7a9af;
    }
    if (bVar2 != 10) goto LAB_142b7a708;
    local_98 = 0;
    uStack_90 = 0;
    local_c0 = puVar15;
    FUN_1471290d8(&local_98,iVar4 * iVar3,1);
    local_88 = (undefined8 *)0x0;
    local_d0 = 0;
    local_d8 = (undefined8 **)((ulonglong)local_d8 & 0xffffffff00000000);
    local_e0 = 0;
    local_e8 = (undefined8 **)&local_98;
    uStack_80 = uVar8;
    (**(code **)(*DAT_14ca83900 + 0x498))(DAT_14ca83900,param_2,plVar14,&local_88);
    local_b0 = local_98;
    local_98 = 0;
    lVar9 = (longlong)(int)uStack_90;
    local_b8 = (longlong)uStack_90._4_4_;
    uStack_90 = 0;
    local_a8 = CONCAT44(iVar3,iVar4);
    puVar12 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    local_d8 = &local_88;
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    local_e0 = CONCAT31(local_e0._1_3_,4);
    local_e8 = (undefined8 **)CONCAT71(local_e8._1_7_,0x10);
    FUN_147129202(puVar12,&local_a8,1,3);
    *puVar12 = &PTR_FUN_14a1e9200;
    puVar12[5] = local_b0;
    puVar12[6] = lVar9;
    puVar12[7] = local_b8;
    local_88 = (undefined8 *)0x0;
    local_a8 = 0;
    cVar7 = FUN_147129038(puVar12,&local_88,&local_a8);
    if (cVar7 != '\0') {
      pcVar6 = (code *)param_1[2];
      plVar11 = param_1 + 6;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        plVar11 = (longlong *)param_1[4];
      }
      local_88 = puVar12;
      uVar8 = (**(code **)(*plVar11 + 8))(plVar11);
      (*pcVar6)(uVar8,&local_88);
      lVar9 = local_98;
      if (local_88 != (undefined8 *)0x0) {
        (**(code **)*local_88)(local_88,1);
        lVar9 = local_98;
      }
      goto LAB_142b7aba3;
    }
    lVar9 = local_98;
    if (puVar12 != (undefined8 *)0x0) {
      (**(code **)*puVar12)(puVar12,1);
      lVar9 = local_98;
    }
LAB_142b7abd2:
    puVar15 = local_c0;
    if (lVar9 != 0) {
      FUN_1400020a8();
    }
LAB_142b7a708:
    local_88 = (undefined8 *)0x0;
    pcVar6 = (code *)param_1[2];
    plVar11 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[4];
    }
    uVar8 = (**(code **)(*plVar11 + 8))(plVar11);
    (*pcVar6)(uVar8,&local_88);
    if (local_88 != (undefined8 *)0x0) {
      (**(code **)*local_88)(local_88,1);
    }
  }
  LOCK();
  uVar1 = *puVar15;
  *puVar15 = *puVar15 - 1;
  UNLOCK();
  if ((uVar1 & 0x3fffffff) == 1) {
    LOCK();
    uVar1 = *puVar15;
    *puVar15 = *puVar15 | 0x40000000;
    UNLOCK();
    if ((uVar1 >> 0x1e & 1) == 0) {
      bVar2 = *(byte *)((longlong)plVar14 + 0xd);
      plVar10 = (longlong *)FUN_14001cc68(0x10,8);
      plVar10[1] = (longlong)plVar14;
      plVar14 = DAT_14ca843c0;
      plVar11 = DAT_14ca843c8;
      if ((bVar2 & 2) == 0) {
        do {
          *plVar10 = (longlong)plVar14;
          LOCK();
          bVar16 = plVar14 != DAT_14ca843c0;
          plVar11 = plVar10;
          if (bVar16) {
            plVar14 = DAT_14ca843c0;
            plVar11 = DAT_14ca843c0;
          }
          DAT_14ca843c0 = plVar11;
          UNLOCK();
        } while (bVar16);
      }
      else {
        do {
          *plVar10 = (longlong)plVar11;
          LOCK();
          bVar16 = plVar11 != DAT_14ca843c8;
          plVar14 = plVar10;
          if (bVar16) {
            plVar11 = DAT_14ca843c8;
            plVar14 = DAT_14ca843c8;
          }
          DAT_14ca843c8 = plVar14;
          UNLOCK();
        } while (bVar16);
      }
    }
  }
LAB_142b7a66d:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b7ac14 FUN_142b7ac14 body=29 status=ok
// SIG undefined FUN_142b7ac14(void)

void FUN_142b7ac14(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142b7ac32 FUN_142b7ac32 body=71 status=ok
// SIG undefined FUN_142b7ac32(void)

undefined8 * FUN_142b7ac32(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14a1e9280;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b7aca0 FUN_142b7aca0 body=282 status=ok
// SIG undefined FUN_142b7aca0(void)

undefined8 * FUN_142b7aca0(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_142b7ac79);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 142b7adba FUN_142b7adba body=119 status=ok
// SIG undefined FUN_142b7adba(void)

void FUN_142b7adba(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_142b7a5e6(param_1 + 0x16,&DAT_14ca85100);
  if (param_1[0x18] != 0) {
    plVar2 = param_1 + 0x1c;
    if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0x1a];
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142b7ae27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 142b7ae32 FUN_142b7ae32 body=120 status=ok
// SIG undefined FUN_142b7ae32(void)

void FUN_142b7ae32(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 unaff_RBX;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_2;
  pcVar2 = (code *)*param_1;
  if (pcVar2 != (code *)0x0) {
    plVar4 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[2];
    }
    local_29 = uVar1;
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,&local_29);
  }
  FUN_1471299d8(param_1 + 8,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b7aeac FUN_142b7aeac body=123 status=ok
// SIG undefined FUN_142b7aeac(void)

undefined8 * FUN_142b7aeac(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a1e92e0;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  puVar2[4] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 4);
  }
  puVar2[10] = *(undefined8 *)(param_1 + 0x50);
  puVar2[0xb] = *(undefined8 *)(param_1 + 0x58);
  return puVar2 + 2;
}



// FUNCTION 142b7af2e FUN_142b7af2e body=29 status=ok
// SIG undefined FUN_142b7af2e(void)

void FUN_142b7af2e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142b7af4c FUN_142b7af4c body=71 status=ok
// SIG undefined FUN_142b7af4c(void)

undefined8 * FUN_142b7af4c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a1e92e0;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b7af94 FUN_142b7af94 body=90 status=ok
// SIG undefined FUN_142b7af94(void)

void FUN_142b7af94(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  pcVar1 = (code *)*param_1;
  plVar3 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[2];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b7affa FUN_142b7affa body=29 status=ok
// SIG undefined FUN_142b7affa(void)

void FUN_142b7affa(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142b7b018 FUN_142b7b018 body=71 status=ok
// SIG undefined FUN_142b7b018(void)

undefined8 * FUN_142b7b018(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14a1e9300;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b7b060 FUN_142b7b060 body=90 status=ok
// SIG undefined FUN_142b7b060(void)

void FUN_142b7b060(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  pcVar1 = (code *)*param_1;
  plVar3 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[2];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b7b0c6 FUN_142b7b0c6 body=29 status=ok
// SIG undefined FUN_142b7b0c6(void)

void FUN_142b7b0c6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142b7b0e4 FUN_142b7b0e4 body=71 status=ok
// SIG undefined FUN_142b7b0e4(void)

undefined8 * FUN_142b7b0e4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14a1e9320;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b7b12c FUN_142b7b12c body=90 status=ok
// SIG undefined FUN_142b7b12c(void)

void FUN_142b7b12c(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  pcVar1 = (code *)*param_1;
  plVar3 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[2];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b7b192 FUN_142b7b192 body=29 status=ok
// SIG undefined FUN_142b7b192(void)

void FUN_142b7b192(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142b7b1b0 FUN_142b7b1b0 body=71 status=ok
// SIG undefined FUN_142b7b1b0(void)

undefined8 * FUN_142b7b1b0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14a1e9340;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b7b1f8 FUN_142b7b1f8 body=90 status=ok
// SIG undefined FUN_142b7b1f8(void)

void FUN_142b7b1f8(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  pcVar1 = (code *)*param_1;
  plVar3 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[2];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b7b25e FUN_142b7b25e body=29 status=ok
// SIG undefined FUN_142b7b25e(void)

void FUN_142b7b25e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142b7b27c FUN_142b7b27c body=71 status=ok
// SIG undefined FUN_142b7b27c(void)

undefined8 * FUN_142b7b27c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14a1e9360;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b7b2c4 FUN_142b7b2c4 body=541 status=ok
// SIG undefined FUN_142b7b2c4(void)

void FUN_142b7b2c4(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  void *_Src;
  char cVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 uVar10;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  lVar5 = *param_2;
  if (lVar5 != 0) {
    puVar9 = (undefined8 *)FUN_14001cc68(0x90);
    *puVar9 = &PTR_FUN_14a1e93c0;
    puVar3 = puVar9 + 1;
    puVar9[1] = 0;
    puVar9[2] = 0;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = 0;
    *(undefined1 *)(puVar9 + 4) = 1;
    puVar9[6] = 0;
    puVar9[8] = 0;
    puVar9[0xe] = 0;
    puVar9[0xf] = 0;
    puVar9[0x10] = 0;
    if (puVar9 + 0xe != param_2) {
      puVar9[0xe] = lVar5;
      *param_2 = 0;
    }
    uVar10 = 3;
    if ((byte)*(int *)(param_1 + 2) < 4) {
      uVar10 = (undefined1)(0x5030100 >> ((byte)(*(int *)(param_1 + 2) << 3) & 0x1f));
    }
    *(undefined1 *)(puVar9 + 3) = uVar10;
    FUN_147128e0a(puVar9 + 6,param_1 + 4);
    if (puVar3 != param_1) {
      iVar4 = *(int *)(param_1 + 1);
      _Src = (void *)*param_1;
      *(int *)(puVar9 + 2) = iVar4;
      if (iVar4 == 0 && *(int *)((longlong)puVar9 + 0x14) == 0) {
        *(undefined4 *)((longlong)puVar9 + 0x14) = 0;
      }
      else {
        FUN_1446dd670(puVar3,iVar4);
        if (iVar4 != 0) {
          memcpy((void *)*puVar3,_Src,(longlong)iVar4 * 2);
        }
      }
    }
    *(undefined1 *)(puVar9 + 4) = *(undefined1 *)(param_1 + 3);
    *(undefined4 *)((longlong)puVar9 + 0x1c) = *(undefined4 *)((longlong)param_1 + 0x14);
    local_70 = puVar9;
    (**(code **)(*(longlong *)param_1[0xc] + 8))((longlong *)param_1[0xc],local_68,&local_70,1);
    FUN_1405d88fe(&local_58,local_68);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_60 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_60 + 0x10))(local_60);
        }
      }
    }
    if (local_70 != (undefined8 *)0x0) {
      (**(code **)*local_70)(local_70,1);
    }
  }
  if (*(char *)((longlong)param_1 + 0x19) == '\0') {
    lVar5 = local_58;
    if (local_58 != 0) {
      do {
        do {
          lVar8 = lVar5;
          lVar5 = 0;
        } while (lVar8 == 0);
        plVar6 = *(longlong **)(lVar8 + 0x70);
        cVar7 = (**(code **)(*plVar6 + 0x20))(plVar6,0xffffffff,0);
        lVar5 = local_58;
      } while (cVar7 == '\0');
    }
    *(undefined4 *)(*(longlong *)param_1[0xd] + 0x80) = 0;
    FUN_140b576f0();
  }
  plVar6 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b7b4e2 FUN_142b7b4e2 body=235 status=ok
// SIG undefined FUN_142b7b4e2(void)

undefined8 * FUN_142b7b4e2(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14a1e93a0;
  puVar1 = puVar4 + 2;
  puVar4[2] = 0;
  iVar2 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(puVar4 + 3) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
  *(undefined2 *)(puVar4 + 5) = *(undefined2 *)(param_1 + 0x28);
  puVar4[4] = *(undefined8 *)(param_1 + 0x20);
  lVar3 = *(longlong *)(param_1 + 0x30);
  puVar4[6] = lVar3;
  puVar4[8] = 0;
  if (lVar3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x50);
    if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)(param_1 + 0x40);
    }
    (**(code **)*puVar5)(puVar5,puVar4 + 8);
  }
  puVar4[0xe] = *(undefined8 *)(param_1 + 0x70);
  puVar4[0xf] = *(undefined8 *)(param_1 + 0x78);
  lVar3 = *(longlong *)(param_1 + 0x80);
  puVar4[0x10] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return puVar1;
}



// FUNCTION 142b7b5d4 FUN_142b7b5d4 body=29 status=ok
// SIG undefined FUN_142b7b5d4(void)

void FUN_142b7b5d4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142b7b5f2 FUN_142b7b5f2 body=128 status=ok
// SIG undefined FUN_142b7b5f2(void)

undefined8 * FUN_142b7b5f2(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a1e93a0;
  plVar3 = (longlong *)param_1[0x10];
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
  if (param_1[6] != 0) {
    plVar3 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b7b680 FUN_142b7b680 body=43 status=ok
// SIG undefined FUN_142b7b680(void)

void FUN_142b7b680(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000142b7b6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 142b7b6b6 FUN_142b7b6b6 body=29 status=ok
// SIG undefined FUN_142b7b6b6(void)

void FUN_142b7b6b6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142b7b6d4 FUN_142b7b6d4 body=71 status=ok
// SIG undefined FUN_142b7b6d4(void)

undefined8 * FUN_142b7b6d4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14a1e9450;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b7b71c FUN_142b7b71c body=43 status=ok
// SIG undefined FUN_142b7b71c(void)

void FUN_142b7b71c(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000142b7b744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 142b7b752 FUN_142b7b752 body=29 status=ok
// SIG undefined FUN_142b7b752(void)

void FUN_142b7b752(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142b7b770 FUN_142b7b770 body=71 status=ok
// SIG undefined FUN_142b7b770(void)

undefined8 * FUN_142b7b770(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14a1e9470;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b7b7b8 FUN_142b7b7b8 body=71 status=ok
// SIG undefined FUN_142b7b7b8(void)

undefined8 * FUN_142b7b7b8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a1e9548;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b7b800 FUN_142b7b800 body=52 status=ok
// SIG undefined FUN_142b7b800(void)

void FUN_142b7b800(longlong param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x10);
  plVar2 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x20);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000142b7b831. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 142b7b834 FUN_142b7b834 body=92 status=ok
// SIG undefined FUN_142b7b834(void)

void FUN_142b7b834(undefined1 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = *param_1;
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar3 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x20);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b7b89c FUN_142b7b89c body=29 status=ok
// SIG undefined FUN_142b7b89c(void)

void FUN_142b7b89c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142b7b8ba FUN_142b7b8ba body=71 status=ok
// SIG undefined FUN_142b7b8ba(void)

undefined8 * FUN_142b7b8ba(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14a1e9560;
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b7b902 FUN_142b7b902 body=90 status=ok
// SIG undefined FUN_142b7b902(void)

void FUN_142b7b902(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  pcVar1 = (code *)*param_1;
  plVar3 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[2];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_19);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b7b968 FUN_142b7b968 body=29 status=ok
// SIG undefined FUN_142b7b968(void)

void FUN_142b7b968(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142b7b986 FUN_142b7b986 body=71 status=ok
// SIG undefined FUN_142b7b986(void)

undefined8 * FUN_142b7b986(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14a1e9580;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b7b9ce FUN_142b7b9ce body=72 status=ok
// SIG undefined FUN_142b7b9ce(void)

void FUN_142b7b9ce(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147128b38(*param_2,local_28);
  FUN_146987ebb(local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b7ba2e FUN_142b7ba2e body=29 status=ok
// SIG undefined FUN_142b7ba2e(void)

undefined8 FUN_142b7ba2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142b7ba4b FUN_142b7ba4b body=295 status=ok
// SIG undefined FUN_142b7ba4b(void)

void FUN_142b7ba4b(void)

{
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14098d3d2(FUN_142b7952c,L"/Script/ImageWriteQueue",L"EDesiredImageFormat",&DAT_14c9ac1e8);
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/ImageWriteQueue",&PTR_FUN_14a1e8af0,1,&PTR_FUN_14a1e8ac0);
  local_38._0_4_ = 0xffffffff;
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14c9ac240,L"ImageWriteQueue.MaxConcurrency",&local_38,
                L"The maximum number of async image writes allowable at any given time.Default is to use the number of cores available."
               );
  atexit(FUN_142b79e52);
  local_38 = CONCAT44(local_38._4_4_,0xffffffff);
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14c9ac258,L"ImageWriteQueue.MaxQueueSize",&local_38,
                L"The maximum number of queued image write tasks allowable before the queue will block when adding more.Default is to use 4 times the number of cores available or 16 when multithreading is disabled on the command line."
               );
  atexit(FUN_142b79e97);
  local_38 = 0x800000014a1e8fa2;
  local_24 = 0xf;
  local_30 = FUN_14577453c();
  local_2c = 1;
  FUN_1462b47b2(&local_38);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b7bb74 FUN_142b7bb74 body=57 status=ok
// SIG undefined FUN_142b7bb74(void)

void FUN_142b7bb74(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9ac2a8 == 0) {
    uVar1 = FUN_145c5ad0f();
    DAT_14c9ac2a8 = FUN_14171c317(FUN_1462b49b6,uVar1,L"EMobileShadowQuality");
  }
  return;
}



// FUNCTION 142b7bbbc FUN_142b7bbbc body=212 status=ok
// SIG undefined FUN_142b7bbbc(void)

void FUN_142b7bbbc(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined **ppuStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 1;
  ppuStack_40 = &PTR_FUN_14a1e9e90;
  local_48 = 1;
  FUN_14282b410(L"/Script/MaterialShaderQualitySettings",&PTR_FUN_14a1e9ee0,1,&PTR_FUN_14a1e9eb0);
  local_48 = 0;
  ppuStack_40 = (undefined **)0x0;
  local_38 = 0;
  FUN_14282b410(L"/Script/MaterialShaderQualitySettings",&PTR_FUN_14a1ea340,1,0);
  local_28 = 0x800000014a1ea3ce;
  local_14 = 0x1d;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14171c728(&DAT_14c9ac320,&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b7bc94 FUN_142b7bc94 body=57 status=ok
// SIG undefined FUN_142b7bc94(void)

void FUN_142b7bc94(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9ac3c0 == 0) {
    uVar1 = FUN_145a24af7();
    DAT_14c9ac3c0 = FUN_14171c317(FUN_1462b4eb3,uVar1,L"EEyeTrackerStatus");
  }
  return;
}



// FUNCTION 142b7bcea FUN_142b7bcea body=202 status=ok
// SIG undefined FUN_142b7bcea(void)

void FUN_142b7bcea(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined **ppuStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  ppuStack_40 = (undefined **)0x0;
  local_38 = 0;
  FUN_14282b410(L"/Script/EyeTracker",&PTR_FUN_14a1eae30,1,0);
  local_30 = 0x800000014a1eb918;
  local_1c = 10;
  local_28 = FUN_14577453c();
  local_24 = 1;
  FUN_1462b4d62(&local_30);
  ppuStack_40 = &PTR_FUN_14a1eb490;
  local_38 = 1;
  local_48 = 2;
  FUN_14282b410(L"/Script/EyeTracker",0,0,&PTR_FUN_14a1eb4b0);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b7bdb8 FUN_142b7bdb8 body=57 status=ok
// SIG undefined FUN_142b7bdb8(void)

void FUN_142b7bdb8(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9ac400 == 0) {
    uVar1 = FUN_1462b4fab();
    DAT_14c9ac400 = FUN_14171c317(FUN_1462b4fdc,uVar1,L"ESparseVolumeTexturePreviewAttribute");
  }
  return;
}



// FUNCTION 142b7bdf1 FUN_142b7bdf1 body=69 status=ok
// SIG undefined FUN_142b7bdf1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b7bdf1(void)

{
  _DAT_14c9ac450 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b7be33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ac458,1);
  return;
}



// FUNCTION 142b7bedb FUN_142b7bedb body=69 status=ok
// SIG undefined FUN_142b7bedb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b7bedb(void)

{
  _DAT_14c9ac778 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b7bf1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ac780,1);
  return;
}



// FUNCTION 142b7bf20 FUN_142b7bf20 body=69 status=ok
// SIG undefined FUN_142b7bf20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b7bf20(void)

{
  _DAT_14c9ac790 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b7bf62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ac798,1);
  return;
}



// FUNCTION 142b7bf65 FUN_142b7bf65 body=69 status=ok
// SIG undefined FUN_142b7bf65(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b7bf65(void)

{
  _DAT_14c9ac7a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b7bfa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ac7b0,1);
  return;
}



// FUNCTION 142b7bfaa FUN_142b7bfaa body=69 status=ok
// SIG undefined FUN_142b7bfaa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b7bfaa(void)

{
  _DAT_14c9ac7c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b7bfec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ac7c8,1);
  return;
}



// FUNCTION 142b7bfef FUN_142b7bfef body=69 status=ok
// SIG undefined FUN_142b7bfef(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b7bfef(void)

{
  _DAT_14c9ac7d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b7c031. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ac7e0,1);
  return;
}



// FUNCTION 142b7c034 FUN_142b7c034 body=69 status=ok
// SIG undefined FUN_142b7c034(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b7c034(void)

{
  _DAT_14c9ac7f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b7c076. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ac7f8,1);
  return;
}



// FUNCTION 142b7c079 FUN_142b7c079 body=69 status=ok
// SIG undefined FUN_142b7c079(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b7c079(void)

{
  _DAT_14c9ac808 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b7c0bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ac810,1);
  return;
}



// FUNCTION 142b7c0be FUN_142b7c0be body=69 status=ok
// SIG undefined FUN_142b7c0be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b7c0be(void)

{
  _DAT_14c9ac820 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b7c100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ac828,1);
  return;
}



// FUNCTION 142b7c103 FUN_142b7c103 body=69 status=ok
// SIG undefined FUN_142b7c103(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b7c103(void)

{
  _DAT_14c9ac838 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b7c145. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ac840,1);
  return;
}



// FUNCTION 142b7c148 FUN_142b7c148 body=69 status=ok
// SIG undefined FUN_142b7c148(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b7c148(void)

{
  _DAT_14c9ac850 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b7c18a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ac858,1);
  return;
}



// FUNCTION 142b7c18d FUN_142b7c18d body=69 status=ok
// SIG undefined FUN_142b7c18d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b7c18d(void)

{
  _DAT_14c9ac868 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b7c1cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ac870,1);
  return;
}



// FUNCTION 142b7c1d2 FUN_142b7c1d2 body=69 status=ok
// SIG undefined FUN_142b7c1d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b7c1d2(void)

{
  _DAT_14c9ac880 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b7c214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9ac888,1);
  return;
}



// FUNCTION 142b7c488 FUN_142b7c488 body=284 status=ok
// SIG undefined FUN_142b7c488(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142b7c488(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b0418) {
    FUN_144b3d300(&DAT_14c9b0418);
    if (DAT_14c9b0418 == -1) {
      FUN_145783aa6();
      FUN_140db5666(&DAT_14c9b0370,2,&DAT_14c9b0308,L"TBasePassCSFNoLightMapPolicy",
                    L"/Engine/Private/BasePassPixelShader.usf",L"MainCS",5,1,FUN_14712d460,
                    FUN_14712d438,FUN_14174f7ca,&LAB_14712d434,&LAB_14712ac0c,&LAB_14712ac08,0x128,0
                   );
      _DAT_14c9b0370 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142b7c5a4);
      _Init_thread_footer(&DAT_14c9b0418);
    }
  }
  return &DAT_14c9b0370;
}



// FUNCTION 142b7c994 FUN_142b7c994 body=13997 status=ok
// SIG undefined FUN_142b7c994(void)

void FUN_142b7c994(longlong *param_1,longlong param_2,ulonglong *param_3,longlong param_4,
                  longlong **param_5,uint param_6,undefined8 param_7,undefined8 param_8,byte param_9
                  ,undefined8 param_10,longlong *param_11)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ushort uVar3;
  undefined2 uVar4;
  ulonglong *puVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  char cVar8;
  uint uVar9;
  undefined4 uVar10;
  DWORD DVar11;
  int iVar12;
  longlong lVar13;
  undefined2 *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  uint *puVar19;
  undefined4 *puVar20;
  char *pcVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  longlong *plVar26;
  ulonglong uVar27;
  longlong lVar28;
  int iVar29;
  uint uVar30;
  undefined8 *puVar31;
  ulonglong uVar33;
  longlong *plVar34;
  undefined8 *puVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auStack_3e8 [32];
  longlong **local_3c8;
  undefined1 local_3c0 [8];
  longlong lStack_3b8;
  char *local_3b0;
  undefined4 local_3a8;
  longlong local_3a0;
  longlong **local_398;
  undefined1 local_390;
  undefined8 local_388;
  undefined1 local_380;
  undefined8 local_370;
  byte local_361;
  ulonglong *local_360;
  ulonglong *local_358;
  longlong *local_350;
  longlong *local_348;
  longlong local_340;
  longlong *local_338;
  longlong *local_330;
  undefined4 local_328;
  undefined4 local_324;
  longlong *local_320;
  longlong local_318;
  longlong local_310;
  ulonglong local_308;
  undefined4 local_2fc;
  ulonglong local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  longlong *local_2d8;
  int *local_2d0;
  undefined1 local_2c8 [16];
  longlong local_2b8;
  byte local_2b0;
  longlong *local_2a0;
  undefined4 local_298;
  longlong *local_290;
  undefined4 local_288;
  uint local_280;
  undefined1 local_279;
  longlong *local_278;
  undefined1 auStack_270 [8];
  undefined1 local_268 [8];
  undefined4 uStack_260;
  undefined1 auStack_25c [4];
  longlong *local_258;
  ulonglong local_250;
  undefined8 local_248;
  undefined1 local_198 [16];
  undefined2 local_188;
  uint local_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined2 local_16c;
  undefined1 local_168 [14];
  undefined2 uStack_15a;
  longlong local_158;
  undefined2 local_150;
  char local_14e [118];
  undefined8 local_d8;
  ulonglong uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  ulonglong local_90;
  ulonglong uVar32;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  local_2f0 = *(longlong *)(*param_3 + 8);
  local_358 = param_3;
  cVar8 = FUN_1447e0190();
  if ((cVar8 == '\0') || ((DAT_14ca84e0d == '\0' && ((DAT_14c842750 & 1) != 0)))) {
    local_324 = 0;
  }
  else {
    local_324 = (undefined4)
                CONCAT71((int7)((ulonglong)DAT_14c9ac818 >> 8),*(int *)(DAT_14c9ac818 + 4) != 0);
  }
  local_350 = param_1;
  local_340 = param_4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b61f0) && (FUN_144b3d300(&DAT_14c9b61f0), DAT_14c9b61f0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar34 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.ClearSceneMethod",1)
    ;
    if (plVar34 == (longlong *)0x0) {
      DAT_14c9b61e8 = 0;
    }
    else {
      DAT_14c9b61e8 = (**(code **)(*plVar34 + 0x68))(plVar34);
    }
    _Init_thread_footer(&DAT_14c9b61f0);
    param_4 = local_340;
  }
  bVar6 = true;
  if (DAT_14c9b61e8 == 0) {
LAB_142b7caaa:
    local_328 = 0;
  }
  else {
    uVar36 = (ulonglong)*(uint *)(DAT_14c9b61e8 + 4);
    if (*(uint *)(DAT_14c9b61e8 + 4) == 0) {
      uVar36 = (ulonglong)((*(byte *)(local_2f0 + 0x59) & 2) == 0);
    }
    if ((int)uVar36 == 2) {
      local_328 = (undefined4)CONCAT71((int7)(uVar36 >> 8),1);
    }
    else {
      if ((int)uVar36 != 0) goto LAB_142b7caaa;
      local_328 = 0;
    }
    bVar6 = false;
  }
  lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar29 = *(int *)(lVar13 + 0xc60);
  if (((iVar29 != 0x40000002) && (iVar29 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  uVar3 = *(ushort *)(param_4 + 0x1c);
  puVar20 = DAT_14ca96af8;
  if (DAT_14ca96af8 == (undefined4 *)0x0) {
    puVar20 = &DAT_14ca96aa8;
  }
  if (((uint)puVar20[uVar3 >> 5] >> (uVar3 & 0x1f) & 1) == 0) {
    local_370 = (ulonglong)local_370._4_4_ << 0x20;
  }
  else {
    local_370 = CONCAT44(local_370._4_4_,
                         (int)CONCAT71((int7)((ulonglong)uVar3 * 0x3c >> 8),
                                       2 < (int)(&DAT_14ca814b8)[(ulonglong)uVar3 * 0xf]));
  }
  local_361 = param_9;
  local_2d0 = (int *)(lVar13 + 0xc60);
  lVar13 = 10;
  do {
    *(undefined8 *)(local_168 + lVar13 + 6) = 0;
    *(undefined2 *)((longlong)&uStack_15a + lVar13) = 0xffff;
    *(undefined1 *)((longlong)&local_158 + lVar13) = 0;
    lVar13 = lVar13 + 0x10;
  } while (lVar13 != 0x8a);
  local_288 = 8;
  local_290 = &local_158;
  local_280 = FUN_144b16ab8(param_4,&local_290,0);
  local_298 = 8;
  local_2a0 = &local_158;
  FUN_14308f2f3();
  uVar30 = local_280;
  uVar36 = (ulonglong)local_280;
  plVar34 = *(longlong **)(param_4 + 0x1c0);
  fVar38 = 0.0;
  fVar40 = 0.0;
  fVar39 = 0.0;
  if (bVar6) {
    uVar27 = *local_358;
    fVar39 = *(float *)(uVar27 + 0x1da8);
    fVar38 = *(float *)(uVar27 + 0x1da0);
    fVar40 = *(float *)(uVar27 + 0x1da4);
    lVar13 = *(longlong *)(local_340 + 0x1b0);
    bVar6 = false;
    if (((*(float *)(lVar13 + 0x6c) != fVar38) || (NAN(*(float *)(lVar13 + 0x6c)) || NAN(fVar38)))
       || ((*(float *)(lVar13 + 0x70) != fVar40 || (NAN(*(float *)(lVar13 + 0x70)) || NAN(fVar40))))
       ) {
      cVar8 = '\0';
    }
    else {
      cVar8 = '\0';
      bVar6 = false;
      if ((*(float *)(lVar13 + 0x74) == fVar39) && (!NAN(*(float *)(lVar13 + 0x74)) && !NAN(fVar39))
         ) {
        bVar6 = *(float *)(lVar13 + 0x78) == 1.0;
        cVar8 = bVar6 * '\x02';
      }
    }
    puVar1 = (ulonglong *)(param_2 + 0x70);
    puVar31 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar18 = puVar31 + 0x22;
    local_338 = plVar34;
    if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
      FUN_140023dd8(puVar1);
      puVar31 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar18 = puVar31 + 0x22;
    }
    *puVar1 = (ulonglong)puVar18;
    *puVar31 = &PTR_FUN_14a1fbd30;
    local_348 = puVar31 + 2;
    lVar13 = 0x22;
    do {
      puVar18 = (undefined8 *)((longlong)puVar31 + lVar13 + -0x12);
      *puVar18 = 0;
      puVar18[1] = 0;
      *(undefined4 *)((longlong)puVar31 + lVar13 + -2) = 0xffff0000;
      lVar13 = lVar13 + 0x18;
    } while (lVar13 != 0xe2);
    *(undefined4 *)((longlong)puVar31 + 0xe4) = 0;
    puVar31[0x1a] = 0;
    puVar31[0x1b] = 0;
    *(undefined2 *)(puVar31 + 0x1c) = 0;
    *(undefined4 *)(puVar31 + 0x1d) = 0xffffffff;
    *(undefined4 *)((longlong)puVar31 + 0xec) = 0xffffffff;
    *(undefined4 *)(puVar31 + 0x1e) = 0xffffffff;
    *(undefined4 *)((longlong)puVar31 + 0xf4) = 0xffffffff;
    *(undefined4 *)(puVar31 + 0x1f) = 0;
    *(undefined2 *)((longlong)puVar31 + 0xfc) = 0;
    puVar31[0x20] = 0;
    iVar29 = *(int *)(param_2 + 0xa0);
    uVar9 = iVar29 + 1;
    *(uint *)(param_2 + 0xa0) = uVar9;
    if (*(uint *)(param_2 + 0xa4) < uVar9) {
      FUN_1448cfae8((longlong *)(param_2 + 0x98));
    }
    plVar26 = local_348;
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar29 * 8) = puVar31;
    lVar13 = 0x12;
    do {
      *(undefined8 *)(auStack_270 + lVar13 + 6) = 0;
      *(undefined8 *)(local_268 + lVar13 + 6) = 0;
      *(undefined4 *)(auStack_25c + lVar13 + 2) = 0xffff0000;
      lVar13 = lVar13 + 0x18;
    } while (lVar13 != 0xd2);
    local_184 = 0;
    local_198 = (undefined1  [16])0x0;
    local_188 = 0;
    local_180 = 0xffffffff;
    uStack_17c = 0xffffffff;
    uStack_178 = 0xffffffff;
    uStack_174 = 0xffffffff;
    local_170 = 0;
    local_16c = 0;
    local_168._0_8_ = 0;
    if (0 < (int)uVar30) {
      pcVar21 = local_14e;
      lVar13 = 0;
      do {
        uVar4 = *(undefined2 *)(pcVar21 + -2);
        *(undefined8 *)((longlong)&local_258 + lVar13) = *(undefined8 *)(pcVar21 + -10);
        *(undefined8 *)((longlong)&local_250 + lVar13) = 0;
        *(char *)((longlong)&local_248 + lVar13) = cVar8;
        *(undefined1 *)((longlong)&local_248 + lVar13 + 1) = 0;
        *(undefined2 *)((longlong)&local_248 + lVar13 + 2) = uVar4;
        if ((bVar6) && (*pcVar21 == '\x01')) {
          *(undefined1 *)((longlong)&local_248 + lVar13) = 1;
        }
        lVar13 = lVar13 + 0x18;
        pcVar21 = pcVar21 + 0x10;
      } while (uVar36 * 0x18 != lVar13);
    }
    memcpy(local_348,&local_258,0xf8);
    if ((*(int *)(DAT_14c9ac830 + 4) == 0) &&
       (uVar9 = *(uint *)(local_340 + 0xd8), (int)uVar9 < (int)uVar30 && 0 < (int)uVar9)) {
      *(undefined1 *)(plVar26 + (ulonglong)uVar9 * 3 + 2) = 0;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9c1080) && (FUN_144b3d300(&DAT_14c9c1080), DAT_14c9c1080 == -1)) {
      FUN_145fddb1e(&local_258);
      local_380 = 0;
      local_390 = 0;
      local_3b0 = "Unknown";
      _local_3c0 = (undefined1  [16])0x0;
      local_3c8 = (longlong **)0x14a1fb988;
      local_388 = 0;
      local_3a0 = CONCAT44(local_3a0._4_4_,0x100);
      local_3a8 = 0x7af;
      local_398 = &local_258;
      FUN_140b49562(&DAT_14c9c1000,0,1);
      if (local_258 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8ea23);
      _Init_thread_footer(&DAT_14c9c1080);
      plVar26 = local_348;
    }
    FUN_140069376(param_2);
    puVar31 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar18 = puVar31 + 0x3b;
    if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
      FUN_140023dd8(puVar1,0x1e0);
      puVar31 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar31 + 0x3b;
    }
    *puVar1 = (ulonglong)puVar18;
    local_250 = DAT_14c9c1048;
    if (DAT_14c9c1048 != 0) {
      LOCK();
      *(int *)(DAT_14c9c1048 + 8) = *(int *)(DAT_14c9c1048 + 8) + 1;
      UNLOCK();
    }
    local_248 = &DAT_14c9c1000;
    local_3c8 = (longlong **)CONCAT71(local_3c8._1_7_,2);
    local_258 = plVar26;
    FUN_140068f1a(puVar31,&local_278,&local_258,1);
    plVar34 = local_338;
    *puVar31 = &PTR_FUN_14a1f6190;
    puVar31[0x37] = plVar26;
    *(char *)(puVar31 + 0x38) = cVar8;
    *(undefined2 *)((longlong)puVar31 + 0x1c1) = (undefined2)local_d8;
    *(undefined1 *)((longlong)puVar31 + 0x1c3) = local_d8._2_1_;
    *(float *)((longlong)puVar31 + 0x1c4) = fVar38;
    *(float *)(puVar31 + 0x39) = fVar40;
    *(float *)((longlong)puVar31 + 0x1cc) = fVar39;
    *(undefined4 *)(puVar31 + 0x3a) = 0x3f800000;
    iVar29 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar29 + 1U;
    if (*(uint *)(param_2 + 0x174) < iVar29 + 1U) {
      FUN_14470e57a(param_2 + 0x168,iVar29);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar29 * 8) = puVar31;
    *(int *)((longlong)puVar31 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
    FUN_140069100(param_2,puVar31);
  }
  plVar26 = local_350;
  lVar13 = 0x12;
  do {
    *(undefined1 (*) [16])(auStack_270 + lVar13 + 6) = (undefined1  [16])0x0;
    *(undefined4 *)(auStack_25c + lVar13 + 2) = 0xffff0000;
    lVar13 = lVar13 + 0x18;
  } while (lVar13 != 0xd2);
  local_180 = 0xffffffff;
  uStack_17c = 0xffffffff;
  uStack_178 = 0xffffffff;
  uStack_174 = 0xffffffff;
  local_170 = 0;
  local_16c = 0;
  local_168._0_8_ = 0;
  if (0 < (int)uVar30) {
    puVar14 = (undefined2 *)((longlong)&local_248 + 2);
    lVar13 = 0;
    do {
      uVar4 = *(undefined2 *)((longlong)&local_150 + lVar13);
      *(undefined8 *)(puVar14 + -9) = *(undefined8 *)((longlong)&local_158 + lVar13);
      *(undefined8 *)(puVar14 + -5) = 0;
      puVar14[-1] = 1;
      *puVar14 = uVar4;
      lVar13 = lVar13 + 0x10;
      puVar14 = puVar14 + 0xc;
    } while (uVar36 << 4 != lVar13);
  }
  local_198._8_8_ = 0;
  local_198._0_8_ = plVar34;
  local_188 = 0x101;
  local_184 = param_6;
  local_2b8 = 0;
  local_2c8 = (undefined1  [16])0x0;
  if ((char)local_370 == '\0') {
    local_2b0 = 1;
    if ((param_6 & 0xf) == 2) goto LAB_142b7d174;
    local_2b8 = *(longlong *)(local_340 + 0x1c8);
  }
  else {
    local_2b8 = 0;
    if (*(longlong *)(local_340 + 0x1c0) != *(longlong *)(local_340 + 0x1c8)) {
      local_2b8 = *(longlong *)(local_340 + 0x1c8);
    }
    local_2c8._8_8_ = param_7;
    local_2c8._0_8_ = *(undefined8 *)(local_340 + 0x308);
  }
  if (local_2b8 == 0) {
    local_2b0 = 1;
  }
  else {
    local_2b0 = (byte)(&DAT_14c873438)[(uint)*(byte *)(local_2b8 + 0x93) * 0x30] >> 1 & 1;
  }
LAB_142b7d174:
  uVar36 = *local_358;
  plVar34 = (longlong *)(longlong)(int)local_358[1];
  local_2e8 = (**(code **)(**(longlong **)(*(longlong *)(uVar36 + 8) + 0x40) + 0x3e0))();
  local_338 = plVar34;
  if ((longlong)plVar34 < 2) {
    local_2fc = 0;
  }
  else {
    local_2fc = FUN_141772717(uVar36);
  }
  local_308 = uVar36;
  if ((char)local_324 == '\0') {
    if (0 < (int)local_338) {
      local_2d8 = plVar26 + 0x1c7;
      local_360 = (ulonglong *)(param_2 + 0x70);
      local_330 = (longlong *)(param_2 + 0x98);
      local_310 = local_2e8 + 0x3f08;
      local_318 = param_2 + 0x168;
      local_361 = local_361 ^ 1;
      plVar34 = (longlong *)0x0;
      do {
        puVar1 = *(ulonglong **)(param_2 + 0x18);
        iVar29 = *(int *)(uVar36 + 0x1de0 + (longlong)plVar34 * 0x13c10);
        local_320 = (longlong *)CONCAT44(local_320._4_4_,*(int *)((longlong)puVar1 + 0x17c));
        if (*(int *)((longlong)puVar1 + 0x17c) != iVar29) {
          *(int *)((longlong)puVar1 + 0x17c) = iVar29;
          puVar31 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar18 = puVar31 + 3;
          if ((undefined8 *)puVar1[1] < puVar18) {
            FUN_140023dd8(puVar1,0x20);
            puVar31 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
            puVar18 = puVar31 + 3;
          }
          *puVar1 = (ulonglong)puVar18;
          *(int *)(puVar1 + 0xc) = (int)puVar1[0xc] + 1;
          *(undefined8 **)puVar1[6] = puVar31;
          puVar1[6] = (ulonglong)(puVar31 + 1);
          uVar10 = *(undefined4 *)((longlong)puVar1 + 0x17c);
          puVar31[1] = 0;
          *puVar31 = &PTR_FUN_14a1fb2c0;
          *(undefined4 *)(puVar31 + 2) = uVar10;
        }
        iVar29 = DAT_14ca44da0;
        pcVar21 = (char *)((longlong)plVar34 * 0x13c10 + uVar36);
        local_348 = plVar34;
        if (DAT_14ca44da0 != 0) {
          puVar19 = DAT_14ca44d98;
          if (DAT_14ca44d98 == (uint *)0x0) {
            puVar19 = &DAT_14ca44d88;
          }
          uVar30 = *puVar19;
          if (uVar30 == 0) {
            iVar12 = DAT_14ca44da0 + 0x1e;
            if (-1 < DAT_14ca44da0 + -1) {
              iVar12 = DAT_14ca44da0 + -1;
            }
            uVar36 = 0;
            uVar27 = (ulonglong)(uint)(iVar12 >> 5);
            if (iVar12 >> 5 < 1) {
              uVar27 = uVar36;
            }
            iVar12 = 0;
            do {
              if (uVar27 == uVar36) goto LAB_142b7e1ce;
              iVar12 = iVar12 + 0x20;
              uVar30 = puVar19[uVar36 + 1];
              uVar36 = uVar36 + 1;
            } while (uVar30 == 0);
          }
          else {
            uVar36 = 0;
            iVar12 = 0;
          }
          uVar37 = (ulonglong)(-uVar30 & uVar30);
          uVar27 = uVar37 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar27 != 0) {
            for (; uVar27 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar25 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if (iVar25 < DAT_14ca44da0) {
            uVar30 = 0xffffffff;
            do {
              plVar34 = *(longlong **)(DAT_14ca44d78 + (longlong)iVar25 * 0x10);
              (**(code **)(*plVar34 + 0x10))(plVar34,pcVar21,1);
              uVar30 = ~(uint)uVar37 & uVar30;
              puVar19 = DAT_14ca44d98;
              if (DAT_14ca44d98 == (uint *)0x0) {
                puVar19 = &DAT_14ca44d88;
              }
              iVar25 = (int)uVar36;
              lVar13 = (longlong)iVar25;
              uVar9 = puVar19[lVar13] & uVar30;
              if (uVar9 == 0) {
                iVar23 = DAT_14ca44da0 + 0x1e;
                if (-1 < DAT_14ca44da0 + -1) {
                  iVar23 = DAT_14ca44da0 + -1;
                }
                iVar23 = iVar23 >> 5;
                iVar12 = iVar12 + 0x20;
                iVar24 = iVar23;
                if (iVar23 < iVar25) {
                  iVar24 = iVar25;
                }
                if (iVar25 < iVar23) {
                  lVar28 = 0;
                  do {
                    uVar9 = puVar19[lVar13 + lVar28 + 1];
                    if (uVar9 != 0) {
                      uVar36 = (ulonglong)(iVar25 + (int)lVar28 + 1);
                      uVar30 = 0xffffffff;
                      goto LAB_142b7ee32;
                    }
                    iVar12 = iVar12 + 0x20;
                    lVar28 = lVar28 + 1;
                  } while (iVar24 - lVar13 != lVar28);
                  uVar30 = 0xffffffff;
                  iVar25 = iVar24;
                }
                uVar36 = (ulonglong)(iVar25 + 1);
                iVar25 = DAT_14ca44da0;
              }
              else {
LAB_142b7ee32:
                uVar37 = (ulonglong)(-uVar9 & uVar9);
                uVar27 = uVar37 * 2 + 1;
                lVar13 = 0x3f;
                if (uVar27 != 0) {
                  for (; uVar27 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                  }
                }
                iVar25 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
                if (DAT_14ca44da0 <= iVar25) {
                  iVar25 = DAT_14ca44da0;
                }
              }
            } while (iVar25 != iVar29);
          }
        }
LAB_142b7e1ce:
        plVar26 = local_350;
        lVar13 = -1;
        if (0 < (longlong)(int)local_350[0x82]) {
          lVar28 = 0;
          do {
            lVar13 = lVar28;
            if (*(char **)(local_350[0x81] + lVar28 * 8) == pcVar21) break;
            lVar28 = lVar28 + 1;
            lVar13 = -1;
          } while ((int)local_350[0x82] != lVar28);
        }
        plVar34 = (longlong *)local_350[0x1cb];
        if ((longlong *)local_350[0x1cb] == (longlong *)0x0) {
          plVar34 = local_2d8;
        }
        local_2f8 = CONCAT44(local_2f8._4_4_,(int)plVar34[(longlong)(int)lVar13 * 4]);
        local_b0 = 0;
        uStack_a8 = 0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        local_c8 = (undefined *)CONCAT44(local_c8._4_4_,param_6);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9b61e0) &&
           (FUN_144b3d300(&DAT_14c9b61e0), DAT_14c9b61e0 == -1)) {
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          plVar34 = (longlong *)
                    (**(code **)(*DAT_14c8407a8 + 200))
                              (DAT_14c8407a8,L"r.BasePassOutputsVelocityDebug",1);
          if (plVar34 == (longlong *)0x0) {
            DAT_14c9b61d8 = 0;
          }
          else {
            DAT_14c9b61d8 = (**(code **)(*plVar34 + 0x68))(plVar34);
          }
          _Init_thread_footer(&DAT_14c9b61e0);
          plVar26 = local_350;
        }
        puVar5 = local_360;
        if ((DAT_14c9b61d8 == 0) || (local_d8 = &DAT_14c9b7ad0, *(int *)(DAT_14c9b61d8 + 4) != 2)) {
          local_d8 = &DAT_14c9c0d50;
        }
        local_d8 = (longlong *)*local_d8;
        puVar15 = &DAT_14c9c0e90;
        if ((param_6 & 2) == 0) {
          puVar15 = &DAT_14c9c07b0;
        }
        uStack_d0 = *(ulonglong *)(puVar15 + 0x10);
        local_a0 = 0;
        if ((((pcVar21[0x125b0] & 2U) == 0) && (pcVar21[0x30c8] == '\0')) &&
           (((pcVar21[0x23f2] == '\0' && (pcVar21[0x23f5] != '\x01')) ||
            (*(int *)(pcVar21 + 0x1dd0) != 2)))) {
          local_370 = CONCAT44(local_370._4_4_,(int)CONCAT71((int7)(uStack_d0 >> 8),1));
          if (0 < *(int *)(pcVar21 + 0xe51c)) {
            puVar31 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar18 = puVar31 + 0x36;
            if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
              FUN_140023dd8(local_360,0x1c0);
              puVar31 = (undefined8 *)(*puVar5 + 0xf & 0xfffffffffffffff0);
              puVar18 = puVar31 + 0x36;
            }
            *(undefined8 **)(param_2 + 0x70) = puVar18;
            *puVar31 = &PTR_FUN_14a1f61a8;
            plVar34 = puVar31 + 2;
            FUN_144b0e7cc(plVar34);
            iVar29 = *(int *)(param_2 + 0xa0);
            *(uint *)(param_2 + 0xa0) = iVar29 + 1U;
            if (*(uint *)(param_2 + 0xa4) < iVar29 + 1U) {
              FUN_1448cfae8(local_330,iVar29);
            }
            *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar29 * 8) = puVar31;
            FUN_1448c58dc(pcVar21,&local_278);
            *(undefined4 *)(puVar31 + 4) = local_268._0_4_;
            *(undefined4 *)((longlong)puVar31 + 0x24) = local_268._4_4_;
            *(undefined4 *)(puVar31 + 5) = uStack_260;
            *(undefined1 (*) [4])((longlong)puVar31 + 0x2c) = auStack_25c;
            *plVar34 = (longlong)local_278;
            puVar31[3] = auStack_270;
            lVar13 = FUN_144a888ee();
            cVar8 = *(char *)(lVar13 + 0x41);
            if (cVar8 == '\x03') {
              cVar8 = '\x02';
            }
            puVar31[6] = *(undefined8 *)(pcVar21 + 0x13710);
            *(char *)(puVar31 + 7) = cVar8;
            local_3c8 = param_5;
            auVar7[0xf] = 0;
            auVar7._0_15_ = stack0xfffffffffffffc41;
            _local_3c0 = auVar7 << 8;
            uVar16 = FUN_14017f66e(param_2,pcVar21);
            FUN_144886e74();
            cVar8 = DAT_14c9ac971;
            if (DAT_14c9ac971 == '\x03') {
              cVar8 = '\x02';
            }
            puVar31[8] = uVar16;
            *(char *)(puVar31 + 9) = cVar8;
            memcpy(puVar31 + 0x16,&local_258,0xf8);
            if (pcVar21[0xe410] == '\x01') {
              if (*(int *)(DAT_14ca09490 + 4) == 0) {
                FUN_144b112d8(pcVar21 + 0xe3d0);
              }
              local_3c8 = (longlong **)(puVar31 + 10);
              FUN_1401b6588(pcVar21 + 0xe3d0,param_2,local_310,0);
              pcVar21[0xe518] = '\x01';
            }
            else {
              puVar31[10] = 0;
              *(undefined4 *)(puVar31 + 0xb) = 4;
              puVar31[0xc] = 0;
              *(undefined4 *)(puVar31 + 0xd) = 8;
              puVar31[0xe] = 0;
            }
            FUN_14156fa72();
            FUN_140069376(param_2);
            plVar26 = local_350;
            puVar5 = local_360;
            puVar31 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar18 = puVar31 + 0x39;
            if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
              FUN_140023dd8(local_360,0x1d0);
              puVar31 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
              puVar18 = puVar31 + 0x39;
            }
            *local_360 = (ulonglong)puVar18;
            auStack_270 = (undefined1  [8])DAT_14c9b7ff8;
            if (DAT_14c9b7ff8 != 0) {
              LOCK();
              *(int *)(DAT_14c9b7ff8 + 8) = *(int *)(DAT_14c9b7ff8 + 8) + 1;
              UNLOCK();
            }
            local_268 = (undefined1  [8])&DAT_14c9b7fb0;
            local_3c8 = (longlong **)CONCAT71(local_3c8._1_7_,2);
            local_278 = plVar34;
            FUN_140068f1a(puVar31,&local_279,&local_278,1);
            *puVar31 = &PTR_FUN_14a1f6210;
            puVar31[0x37] = pcVar21;
            puVar31[0x38] = plVar34;
            iVar29 = *(int *)(param_2 + 0x170);
            *(uint *)(param_2 + 0x170) = iVar29 + 1U;
            if (*(uint *)(param_2 + 0x174) < iVar29 + 1U) {
              FUN_14470e57a(local_318,iVar29);
            }
            *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar29 * 8) = puVar31;
            *(int *)((longlong)puVar31 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
            FUN_140069100(param_2,puVar31);
          }
        }
        else {
          local_370 = (ulonglong)local_370._4_4_ << 0x20;
        }
        puVar5 = local_360;
        puVar31 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar18 = puVar31 + 0x36;
        if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
          FUN_140023dd8(local_360,0x1c0);
          puVar31 = (undefined8 *)(*puVar5 + 0xf & 0xfffffffffffffff0);
          puVar18 = puVar31 + 0x36;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar18;
        *puVar31 = &PTR_FUN_14a1f61a8;
        plVar2 = puVar31 + 2;
        FUN_144b0e7cc(plVar2);
        iVar29 = *(int *)(param_2 + 0xa0);
        *(uint *)(param_2 + 0xa0) = iVar29 + 1U;
        if (*(uint *)(param_2 + 0xa4) < iVar29 + 1U) {
          FUN_1448cfae8(local_330,iVar29);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar29 * 8) = puVar31;
        FUN_1448c58dc(pcVar21,&local_278);
        *(undefined4 *)(puVar31 + 4) = local_268._0_4_;
        *(undefined4 *)((longlong)puVar31 + 0x24) = local_268._4_4_;
        *(undefined4 *)(puVar31 + 5) = uStack_260;
        *(undefined1 (*) [4])((longlong)puVar31 + 0x2c) = auStack_25c;
        *plVar2 = (longlong)local_278;
        puVar31[3] = auStack_270;
        lVar13 = FUN_144a888ee();
        cVar8 = *(char *)(lVar13 + 0x41);
        if (cVar8 == '\x03') {
          cVar8 = '\x02';
        }
        puVar31[6] = *(undefined8 *)(pcVar21 + 0x13710);
        *(char *)(puVar31 + 7) = cVar8;
        local_3c0[0] = (int)local_2f8 == 2;
        local_3c8 = param_5;
        uVar16 = FUN_14017f66e(param_2,pcVar21);
        FUN_144886e74();
        cVar8 = DAT_14c9ac971;
        if (DAT_14c9ac971 == '\x03') {
          cVar8 = '\x02';
        }
        puVar31[8] = uVar16;
        *(char *)(puVar31 + 9) = cVar8;
        memcpy(puVar31 + 0x16,&local_258,0xf8);
        local_3c8 = (longlong **)((ulonglong)local_3c8 & 0xffffffffffffff00);
        uVar16 = FUN_1401c8e48(&DAT_14ca63c98,param_2,pcVar21,0);
        puVar31[0x34] = uVar16;
        if ((char)local_370 != '\0') {
          if (pcVar21[0x5200] == '\x01') {
            if (*(int *)(DAT_14ca09490 + 4) == 0) {
              FUN_144b112d8(pcVar21 + 0x51c0);
            }
            local_3c8 = (longlong **)(puVar31 + 10);
            FUN_1401b6588(pcVar21 + 0x51c0,param_2,local_310,0);
            pcVar21[0x5308] = '\x01';
          }
          else {
            puVar31[10] = 0;
            *(undefined4 *)(puVar31 + 0xb) = 4;
            puVar31[0xc] = 0;
            *(undefined4 *)(puVar31 + 0xd) = 8;
            puVar31[0xe] = 0;
          }
          FUN_14156fa72();
          FUN_140069376(param_2);
          puVar5 = local_360;
          puVar35 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar18 = puVar35 + 0x39;
          if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
            FUN_140023dd8(local_360,0x1d0);
            puVar35 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
            puVar18 = puVar35 + 0x39;
          }
          *local_360 = (ulonglong)puVar18;
          auStack_270 = (undefined1  [8])DAT_14c9b7ff8;
          if (DAT_14c9b7ff8 != 0) {
            LOCK();
            *(int *)(DAT_14c9b7ff8 + 8) = *(int *)(DAT_14c9b7ff8 + 8) + 1;
            UNLOCK();
          }
          local_268 = (undefined1  [8])&DAT_14c9b7fb0;
          local_3c8 = (longlong **)CONCAT71(local_3c8._1_7_,2);
          local_278 = plVar2;
          FUN_140068f1a(puVar35,&local_279,&local_278,1);
          *puVar35 = &PTR_FUN_14a1f6230;
          puVar35[0x37] = pcVar21;
          puVar35[0x38] = plVar2;
          iVar29 = *(int *)(param_2 + 0x170);
          *(uint *)(param_2 + 0x170) = iVar29 + 1U;
          if (*(uint *)(param_2 + 0x174) < iVar29 + 1U) {
            FUN_14470e57a(local_318,iVar29);
          }
          *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar29 * 8) = puVar35;
          *(int *)((longlong)puVar35 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
          FUN_140069100(param_2,puVar35);
        }
        plVar34 = local_348;
        if ((local_348 != (longlong *)0x0 & (byte)local_2fc) == 0 && local_361 == 0) {
          local_3a0 = (longlong)local_348 * 0x390 + *param_11;
          local_3a8 = SUB84(local_348,0);
          lStack_3b8 = local_2e8;
          local_3c0 = (undefined1  [8])param_5;
          local_3c8 = &local_258;
          local_3b0 = pcVar21;
          FUN_142e4ea30(param_2,param_10,plVar26,local_340);
        }
        FUN_142b80042(param_2,plVar2,pcVar21,&local_d8);
        puVar5 = local_360;
        if (((char)local_370 != '\0') && ((*(byte *)(*(longlong *)(pcVar21 + 8) + 0x5a) & 2) != 0))
        {
          puVar35 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar18 = puVar35 + 0x36;
          if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
            FUN_140023dd8(local_360,0x1c0);
            puVar35 = (undefined8 *)(*puVar5 + 0xf & 0xfffffffffffffff0);
            puVar18 = puVar35 + 0x36;
          }
          *(undefined8 **)(param_2 + 0x70) = puVar18;
          *puVar35 = &PTR_FUN_14a1f61a8;
          plVar34 = puVar35 + 2;
          FUN_144b0e7cc(plVar34);
          iVar29 = *(int *)(param_2 + 0xa0);
          *(uint *)(param_2 + 0xa0) = iVar29 + 1U;
          if (*(uint *)(param_2 + 0xa4) < iVar29 + 1U) {
            FUN_1448cfae8(local_330,iVar29);
          }
          *(undefined8 **)(*local_330 + (longlong)iVar29 * 8) = puVar35;
          uVar16 = puVar31[9];
          puVar35[8] = puVar31[8];
          puVar35[9] = uVar16;
          memcpy(puVar35 + 0x16,&local_258,0xf8);
          FUN_1448c58dc(pcVar21,&local_278);
          *(undefined4 *)(puVar35 + 4) = local_268._0_4_;
          *(undefined4 *)((longlong)puVar35 + 0x24) = local_268._4_4_;
          *(undefined4 *)(puVar35 + 5) = uStack_260;
          *(undefined1 (*) [4])((longlong)puVar35 + 0x2c) = auStack_25c;
          *plVar34 = (longlong)local_278;
          puVar35[3] = auStack_270;
          lVar13 = FUN_144a888ee();
          cVar8 = *(char *)(lVar13 + 0x41);
          if (*(char *)(lVar13 + 0x41) == '\x03') {
            cVar8 = '\x02';
          }
          puVar35[6] = *(undefined8 *)(pcVar21 + 0x13710);
          *(char *)(puVar35 + 7) = cVar8;
          lVar13 = 0;
          do {
            puVar18 = (undefined8 *)((longlong)puVar35 + lVar13 + 200);
            *puVar18 = 0;
            puVar18[1] = 0;
            *(undefined8 *)((longlong)puVar35 + lVar13 + 0xd8) = 0xffff0000;
            lVar13 = lVar13 + 0x18;
          } while (lVar13 != 0xa8);
          if (pcVar21[0x5920] == '\x01') {
            if (*(int *)(DAT_14ca09490 + 4) == 0) {
              FUN_144b112d8(pcVar21 + 0x58e0);
            }
            local_3c8 = (longlong **)(puVar35 + 10);
            FUN_1401b6588(pcVar21 + 0x58e0,param_2,local_310,0);
            pcVar21[0x5a28] = '\x01';
          }
          else {
            puVar35[10] = 0;
            *(undefined4 *)(puVar35 + 0xb) = 4;
            puVar35[0xc] = 0;
            *(undefined4 *)(puVar35 + 0xd) = 8;
            puVar35[0xe] = 0;
          }
          FUN_14156fa72();
          FUN_140069376(param_2);
          puVar5 = local_360;
          puVar31 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar18 = puVar31 + 0x39;
          if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
            FUN_140023dd8(local_360,0x1d0);
            puVar31 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
            puVar18 = puVar31 + 0x39;
          }
          *local_360 = (ulonglong)puVar18;
          auStack_270 = (undefined1  [8])DAT_14c9b7ff8;
          if (DAT_14c9b7ff8 != 0) {
            LOCK();
            *(int *)(DAT_14c9b7ff8 + 8) = *(int *)(DAT_14c9b7ff8 + 8) + 1;
            UNLOCK();
          }
          local_268 = (undefined1  [8])&DAT_14c9b7fb0;
          local_3c8 = (longlong **)CONCAT71(local_3c8._1_7_,2);
          local_278 = plVar34;
          FUN_140068f1a(puVar31,&local_279,&local_278,1);
          *puVar31 = &PTR_FUN_14a1f6250;
          puVar31[0x37] = pcVar21;
          puVar31[0x38] = plVar34;
          iVar29 = *(int *)(param_2 + 0x170);
          *(uint *)(param_2 + 0x170) = iVar29 + 1U;
          if (*(uint *)(param_2 + 0x174) < iVar29 + 1U) {
            FUN_14470e57a(local_318,iVar29);
          }
          *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar29 * 8) = puVar31;
          *(int *)((longlong)puVar31 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
          FUN_140069100(param_2,puVar31);
          plVar34 = local_348;
        }
        uVar36 = local_308;
        if (*(int *)((longlong)puVar1 + 0x17c) != (int)local_320) {
          *(int *)((longlong)puVar1 + 0x17c) = (int)local_320;
          puVar31 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar18 = puVar31 + 3;
          if ((undefined8 *)puVar1[1] < puVar18) {
            FUN_140023dd8(puVar1,0x20);
            puVar31 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
            puVar18 = puVar31 + 3;
          }
          *puVar1 = (ulonglong)puVar18;
          *(int *)(puVar1 + 0xc) = (int)puVar1[0xc] + 1;
          *(undefined8 **)puVar1[6] = puVar31;
          puVar1[6] = (ulonglong)(puVar31 + 1);
          uVar10 = *(undefined4 *)((longlong)puVar1 + 0x17c);
          puVar31[1] = 0;
          *puVar31 = &PTR_FUN_14a1fb2c0;
          *(undefined4 *)(puVar31 + 2) = uVar10;
        }
        plVar34 = (longlong *)((longlong)plVar34 + 1);
      } while (plVar34 != local_338);
    }
  }
  else if (0 < (int)local_338) {
    local_2d8 = plVar26 + 0x1c7;
    local_360 = (ulonglong *)(param_2 + 0x70);
    local_330 = (longlong *)(param_2 + 0x98);
    local_310 = local_2e8 + 0x3f08;
    local_318 = param_2 + 0x168;
    local_2e0 = param_2 + 0x158;
    plVar34 = (longlong *)0x0;
    do {
      puVar1 = *(ulonglong **)(param_2 + 0x18);
      iVar29 = *(int *)(uVar36 + 0x1de0 + (longlong)plVar34 * 0x13c10);
      local_2f8 = CONCAT44(local_2f8._4_4_,*(int *)((longlong)puVar1 + 0x17c));
      if (*(int *)((longlong)puVar1 + 0x17c) != iVar29) {
        *(int *)((longlong)puVar1 + 0x17c) = iVar29;
        puVar31 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar31 + 3;
        if ((undefined8 *)puVar1[1] < puVar18) {
          FUN_140023dd8(puVar1,0x20);
          puVar31 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar18 = puVar31 + 3;
        }
        *puVar1 = (ulonglong)puVar18;
        *(int *)(puVar1 + 0xc) = (int)puVar1[0xc] + 1;
        *(undefined8 **)puVar1[6] = puVar31;
        puVar1[6] = (ulonglong)(puVar31 + 1);
        uVar10 = *(undefined4 *)((longlong)puVar1 + 0x17c);
        puVar31[1] = 0;
        *puVar31 = &PTR_FUN_14a1fb2c0;
        *(undefined4 *)(puVar31 + 2) = uVar10;
      }
      iVar29 = DAT_14ca44da0;
      pcVar21 = (char *)((longlong)plVar34 * 0x13c10 + uVar36);
      local_348 = plVar34;
      if (DAT_14ca44da0 != 0) {
        puVar19 = DAT_14ca44d98;
        if (DAT_14ca44d98 == (uint *)0x0) {
          puVar19 = &DAT_14ca44d88;
        }
        uVar30 = *puVar19;
        if (uVar30 == 0) {
          iVar12 = DAT_14ca44da0 + 0x1e;
          if (-1 < DAT_14ca44da0 + -1) {
            iVar12 = DAT_14ca44da0 + -1;
          }
          uVar36 = 0;
          uVar27 = (ulonglong)(uint)(iVar12 >> 5);
          if (iVar12 >> 5 < 1) {
            uVar27 = uVar36;
          }
          iVar12 = 0;
          do {
            if (uVar27 == uVar36) goto LAB_142b7d300;
            iVar12 = iVar12 + 0x20;
            uVar30 = puVar19[uVar36 + 1];
            uVar36 = uVar36 + 1;
          } while (uVar30 == 0);
        }
        else {
          iVar12 = 0;
          uVar36 = 0;
        }
        uVar37 = (ulonglong)(-uVar30 & uVar30);
        uVar27 = uVar37 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar27 != 0) {
          for (; uVar27 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar25 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar25 < DAT_14ca44da0) {
          uVar30 = 0xffffffff;
          do {
            plVar34 = *(longlong **)(DAT_14ca44d78 + (longlong)iVar25 * 0x10);
            (**(code **)(*plVar34 + 0x10))(plVar34,pcVar21,1);
            uVar30 = ~(uint)uVar37 & uVar30;
            puVar19 = DAT_14ca44d98;
            if (DAT_14ca44d98 == (uint *)0x0) {
              puVar19 = &DAT_14ca44d88;
            }
            iVar25 = (int)uVar36;
            lVar13 = (longlong)iVar25;
            uVar9 = puVar19[lVar13] & uVar30;
            if (uVar9 == 0) {
              iVar23 = DAT_14ca44da0 + 0x1e;
              if (-1 < DAT_14ca44da0 + -1) {
                iVar23 = DAT_14ca44da0 + -1;
              }
              iVar23 = iVar23 >> 5;
              iVar12 = iVar12 + 0x20;
              iVar24 = iVar23;
              if (iVar23 < iVar25) {
                iVar24 = iVar25;
              }
              if (iVar25 < iVar23) {
                lVar28 = 0;
                do {
                  uVar9 = puVar19[lVar13 + lVar28 + 1];
                  if (uVar9 != 0) {
                    uVar36 = (ulonglong)(iVar25 + (int)lVar28 + 1);
                    uVar30 = 0xffffffff;
                    goto LAB_142b7e009;
                  }
                  iVar12 = iVar12 + 0x20;
                  lVar28 = lVar28 + 1;
                } while (iVar24 - lVar13 != lVar28);
                uVar30 = 0xffffffff;
                iVar25 = iVar24;
              }
              uVar36 = (ulonglong)(iVar25 + 1);
              iVar25 = DAT_14ca44da0;
            }
            else {
LAB_142b7e009:
              uVar37 = (ulonglong)(-uVar9 & uVar9);
              uVar27 = uVar37 * 2 + 1;
              lVar13 = 0x3f;
              if (uVar27 != 0) {
                for (; uVar27 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                }
              }
              iVar25 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
              if (DAT_14ca44da0 <= iVar25) {
                iVar25 = DAT_14ca44da0;
              }
            }
          } while (iVar25 != iVar29);
        }
      }
LAB_142b7d300:
      plVar26 = local_350;
      lVar13 = -1;
      if (0 < (longlong)(int)local_350[0x82]) {
        lVar28 = 0;
        do {
          lVar13 = lVar28;
          if (*(char **)(local_350[0x81] + lVar28 * 8) == pcVar21) break;
          lVar28 = lVar28 + 1;
          lVar13 = -1;
        } while ((int)local_350[0x82] != lVar28);
      }
      plVar34 = (longlong *)local_350[0x1cb];
      if ((longlong *)local_350[0x1cb] == (longlong *)0x0) {
        plVar34 = local_2d8;
      }
      iVar29 = (int)plVar34[(longlong)(int)lVar13 * 4];
      local_b0 = 0;
      uStack_a8 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,param_6);
      local_320 = (longlong *)CONCAT44(local_320._4_4_,iVar29);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9b61e0) && (FUN_144b3d300(&DAT_14c9b61e0), DAT_14c9b61e0 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar34 = (longlong *)
                  (**(code **)(*DAT_14c8407a8 + 200))
                            (DAT_14c8407a8,L"r.BasePassOutputsVelocityDebug",1);
        if (plVar34 == (longlong *)0x0) {
          DAT_14c9b61d8 = 0;
        }
        else {
          DAT_14c9b61d8 = (**(code **)(*plVar34 + 0x68))(plVar34);
        }
        _Init_thread_footer(&DAT_14c9b61e0);
        plVar26 = local_350;
        iVar29 = (int)local_320;
      }
      puVar5 = local_360;
      if ((DAT_14c9b61d8 == 0) || (local_d8 = &DAT_14c9b7ad0, *(int *)(DAT_14c9b61d8 + 4) != 2)) {
        local_d8 = &DAT_14c9c0d50;
      }
      local_d8 = (longlong *)*local_d8;
      puVar15 = &DAT_14c9c0e90;
      if ((param_6 & 2) == 0) {
        puVar15 = &DAT_14c9c07b0;
      }
      uStack_d0 = *(ulonglong *)(puVar15 + 0x10);
      local_a0 = 0;
      if ((((pcVar21[0x125b0] & 2U) == 0) && (pcVar21[0x30c8] == '\0')) &&
         (((pcVar21[0x23f2] == '\0' && (pcVar21[0x23f5] != '\x01')) ||
          (*(int *)(pcVar21 + 0x1dd0) != 2)))) {
        local_370 = CONCAT44(local_370._4_4_,(int)CONCAT71((int7)(uStack_d0 >> 8),1));
        if (0 < *(int *)(pcVar21 + 0xe51c)) {
          puVar31 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
          puVar18 = puVar31 + 0x36;
          if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
            FUN_140023dd8(local_360,0x1c0);
            puVar31 = (undefined8 *)(*puVar5 + 0xf & 0xfffffffffffffff0);
            puVar18 = puVar31 + 0x36;
          }
          *(undefined8 **)(param_2 + 0x70) = puVar18;
          *puVar31 = &PTR_FUN_14a1f61a8;
          plVar34 = puVar31 + 2;
          FUN_144b0e7cc(plVar34);
          iVar12 = *(int *)(param_2 + 0xa0);
          *(uint *)(param_2 + 0xa0) = iVar12 + 1U;
          if (*(uint *)(param_2 + 0xa4) < iVar12 + 1U) {
            FUN_1448cfae8(local_330,iVar12);
          }
          *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar12 * 8) = puVar31;
          FUN_1448c58dc(pcVar21,&local_278);
          *(undefined4 *)(puVar31 + 4) = local_268._0_4_;
          *(undefined4 *)((longlong)puVar31 + 0x24) = local_268._4_4_;
          *(undefined4 *)(puVar31 + 5) = uStack_260;
          *(undefined1 (*) [4])((longlong)puVar31 + 0x2c) = auStack_25c;
          *plVar34 = (longlong)local_278;
          puVar31[3] = auStack_270;
          lVar13 = FUN_144a888ee();
          cVar8 = *(char *)(lVar13 + 0x41);
          if (cVar8 == '\x03') {
            cVar8 = '\x02';
          }
          puVar31[6] = *(undefined8 *)(pcVar21 + 0x13710);
          *(char *)(puVar31 + 7) = cVar8;
          local_3c0[0] = iVar29 == 2;
          local_3c8 = param_5;
          uVar16 = FUN_14017f66e(param_2,pcVar21);
          FUN_144886e74();
          cVar8 = DAT_14c9ac971;
          if (DAT_14c9ac971 == '\x03') {
            cVar8 = '\x02';
          }
          puVar31[8] = uVar16;
          *(char *)(puVar31 + 9) = cVar8;
          memcpy(puVar31 + 0x16,&local_258,0xf8);
          if (pcVar21[0xe410] == '\x01') {
            if (*(int *)(DAT_14ca09490 + 4) == 0) {
              FUN_144b112d8(pcVar21 + 0xe3d0);
            }
            local_3c8 = (longlong **)(puVar31 + 10);
            FUN_1401b6588(pcVar21 + 0xe3d0,param_2,local_310,0);
            pcVar21[0xe518] = '\x01';
          }
          else {
            puVar31[10] = 0;
            *(undefined4 *)(puVar31 + 0xb) = 4;
            puVar31[0xc] = 0;
            *(undefined4 *)(puVar31 + 0xd) = 8;
            puVar31[0xe] = 0;
          }
          FUN_14156fa72();
          FUN_140069376(param_2);
          plVar26 = local_350;
          puVar5 = local_360;
          puVar31 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar18 = puVar31 + 0x3c;
          if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
            FUN_140023dd8(local_360,0x1e8);
            puVar31 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
            puVar18 = puVar31 + 0x3c;
          }
          *local_360 = (ulonglong)puVar18;
          auStack_270 = (undefined1  [8])DAT_14c9b7ff8;
          if (DAT_14c9b7ff8 != 0) {
            LOCK();
            *(int *)(DAT_14c9b7ff8 + 8) = *(int *)(DAT_14c9b7ff8 + 8) + 1;
            UNLOCK();
          }
          local_268 = (undefined1  [8])&DAT_14c9b7fb0;
          local_278 = plVar34;
          FUN_144aaa2f0(puVar31,&local_279,&local_278,0x21);
          *puVar31 = &PTR_FUN_14a1f61b0;
          puVar31[0x3a] = pcVar21;
          puVar31[0x3b] = plVar34;
          iVar29 = *(int *)(param_2 + 0x170);
          *(uint *)(param_2 + 0x170) = iVar29 + 1U;
          if (*(uint *)(param_2 + 0x174) < iVar29 + 1U) {
            FUN_14470e57a(local_318,iVar29);
          }
          *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar29 * 8) = puVar31;
          *(int *)((longlong)puVar31 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
          iVar29 = *(int *)(param_2 + 0x160);
          *(uint *)(param_2 + 0x160) = iVar29 + 1U;
          if (*(uint *)(param_2 + 0x164) < iVar29 + 1U) {
            FUN_1401641e0(local_2e0,iVar29);
          }
          *(undefined8 **)(*(longlong *)(param_2 + 0x158) + (longlong)iVar29 * 8) = puVar31;
          FUN_140069100(param_2,puVar31);
        }
      }
      else {
        local_370 = (ulonglong)local_370._4_4_ << 0x20;
      }
      puVar5 = local_360;
      puVar31 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar18 = puVar31 + 0x36;
      if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
        FUN_140023dd8(local_360,0x1c0);
        puVar31 = (undefined8 *)(*puVar5 + 0xf & 0xfffffffffffffff0);
        puVar18 = puVar31 + 0x36;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar18;
      *puVar31 = &PTR_FUN_14a1f61a8;
      plVar2 = puVar31 + 2;
      FUN_144b0e7cc(plVar2);
      iVar29 = *(int *)(param_2 + 0xa0);
      *(uint *)(param_2 + 0xa0) = iVar29 + 1U;
      if (*(uint *)(param_2 + 0xa4) < iVar29 + 1U) {
        FUN_1448cfae8(local_330,iVar29);
      }
      *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar29 * 8) = puVar31;
      FUN_1448c58dc(pcVar21,&local_278);
      *(undefined4 *)(puVar31 + 4) = local_268._0_4_;
      *(undefined4 *)((longlong)puVar31 + 0x24) = local_268._4_4_;
      *(undefined4 *)(puVar31 + 5) = uStack_260;
      *(undefined1 (*) [4])((longlong)puVar31 + 0x2c) = auStack_25c;
      *plVar2 = (longlong)local_278;
      puVar31[3] = auStack_270;
      lVar13 = FUN_144a888ee();
      cVar8 = *(char *)(lVar13 + 0x41);
      if (cVar8 == '\x03') {
        cVar8 = '\x02';
      }
      puVar31[6] = *(undefined8 *)(pcVar21 + 0x13710);
      *(char *)(puVar31 + 7) = cVar8;
      local_3c0[0] = (int)local_320 == 2;
      local_3c8 = param_5;
      uVar16 = FUN_14017f66e(param_2,pcVar21);
      FUN_144886e74();
      cVar8 = DAT_14c9ac971;
      if (DAT_14c9ac971 == '\x03') {
        cVar8 = '\x02';
      }
      puVar31[8] = uVar16;
      *(char *)(puVar31 + 9) = cVar8;
      memcpy(puVar31 + 0x16,&local_258,0xf8);
      local_3c8 = (longlong **)((ulonglong)local_3c8 & 0xffffffffffffff00);
      uVar16 = FUN_1401c8e48(&DAT_14ca63c98,param_2,pcVar21,0);
      puVar31[0x34] = uVar16;
      if ((char)local_370 != '\0') {
        if (pcVar21[0x5200] == '\x01') {
          if (*(int *)(DAT_14ca09490 + 4) == 0) {
            FUN_144b112d8(pcVar21 + 0x51c0);
          }
          local_3c8 = (longlong **)(puVar31 + 10);
          FUN_1401b6588(pcVar21 + 0x51c0,param_2,local_310,0);
          pcVar21[0x5308] = '\x01';
        }
        else {
          puVar31[10] = 0;
          *(undefined4 *)(puVar31 + 0xb) = 4;
          puVar31[0xc] = 0;
          *(undefined4 *)(puVar31 + 0xd) = 8;
          puVar31[0xe] = 0;
        }
        FUN_14156fa72();
        FUN_140069376(param_2);
        puVar5 = local_360;
        puVar35 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar18 = puVar35 + 0x3c;
        if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
          FUN_140023dd8(local_360,0x1e8);
          puVar35 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
          puVar18 = puVar35 + 0x3c;
        }
        *local_360 = (ulonglong)puVar18;
        auStack_270 = (undefined1  [8])DAT_14c9b7ff8;
        if (DAT_14c9b7ff8 != 0) {
          LOCK();
          *(int *)(DAT_14c9b7ff8 + 8) = *(int *)(DAT_14c9b7ff8 + 8) + 1;
          UNLOCK();
        }
        local_268 = (undefined1  [8])&DAT_14c9b7fb0;
        local_278 = plVar2;
        FUN_144aaa2f0(puVar35,&local_279,&local_278,0x21);
        *puVar35 = &PTR_FUN_14a1f61d0;
        puVar35[0x3a] = pcVar21;
        puVar35[0x3b] = plVar2;
        iVar29 = *(int *)(param_2 + 0x170);
        *(uint *)(param_2 + 0x170) = iVar29 + 1U;
        if (*(uint *)(param_2 + 0x174) < iVar29 + 1U) {
          FUN_14470e57a(local_318,iVar29);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar29 * 8) = puVar35;
        *(int *)((longlong)puVar35 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
        iVar29 = *(int *)(param_2 + 0x160);
        *(uint *)(param_2 + 0x160) = iVar29 + 1U;
        if (*(uint *)(param_2 + 0x164) < iVar29 + 1U) {
          FUN_1401641e0(local_2e0,iVar29);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x158) + (longlong)iVar29 * 8) = puVar35;
        FUN_140069100(param_2,puVar35);
      }
      plVar34 = local_348;
      if (((param_9 != 0) && (((byte)local_2fc & local_348 != (longlong *)0x0) == 0)) &&
         ((*(uint *)(pcVar21 + 0x125b0) & 2) == 0)) {
        local_3a0 = (longlong)local_348 * 0x390 + *param_11;
        local_3a8 = SUB84(local_348,0);
        lStack_3b8 = local_2e8;
        local_3c0 = (undefined1  [8])param_5;
        local_3c8 = &local_258;
        local_3b0 = pcVar21;
        FUN_142e4ea30(param_2,param_10,plVar26,local_340);
      }
      FUN_142b80042(param_2,plVar2,pcVar21,&local_d8);
      puVar5 = local_360;
      if (((char)local_370 != '\0') && ((*(byte *)(*(longlong *)(pcVar21 + 8) + 0x5a) & 2) != 0)) {
        puVar35 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar18 = puVar35 + 0x36;
        if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
          FUN_140023dd8(local_360,0x1c0);
          puVar35 = (undefined8 *)(*puVar5 + 0xf & 0xfffffffffffffff0);
          puVar18 = puVar35 + 0x36;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar18;
        *puVar35 = &PTR_FUN_14a1f61a8;
        plVar34 = puVar35 + 2;
        FUN_144b0e7cc(plVar34);
        iVar29 = *(int *)(param_2 + 0xa0);
        *(uint *)(param_2 + 0xa0) = iVar29 + 1U;
        if (*(uint *)(param_2 + 0xa4) < iVar29 + 1U) {
          FUN_1448cfae8(local_330,iVar29);
        }
        *(undefined8 **)(*local_330 + (longlong)iVar29 * 8) = puVar35;
        uVar16 = puVar31[9];
        puVar35[8] = puVar31[8];
        puVar35[9] = uVar16;
        memcpy(puVar35 + 0x16,&local_258,0xf8);
        FUN_1448c58dc(pcVar21,&local_278);
        *(undefined4 *)(puVar35 + 4) = local_268._0_4_;
        *(undefined4 *)((longlong)puVar35 + 0x24) = local_268._4_4_;
        *(undefined4 *)(puVar35 + 5) = uStack_260;
        *(undefined1 (*) [4])((longlong)puVar35 + 0x2c) = auStack_25c;
        *plVar34 = (longlong)local_278;
        puVar35[3] = auStack_270;
        lVar13 = FUN_144a888ee();
        cVar8 = *(char *)(lVar13 + 0x41);
        if (*(char *)(lVar13 + 0x41) == '\x03') {
          cVar8 = '\x02';
        }
        puVar35[6] = *(undefined8 *)(pcVar21 + 0x13710);
        *(char *)(puVar35 + 7) = cVar8;
        lVar13 = 0;
        do {
          puVar18 = (undefined8 *)((longlong)puVar35 + lVar13 + 200);
          *puVar18 = 0;
          puVar18[1] = 0;
          *(undefined8 *)((longlong)puVar35 + lVar13 + 0xd8) = 0xffff0000;
          lVar13 = lVar13 + 0x18;
        } while (lVar13 != 0xa8);
        if (pcVar21[0x5920] == '\x01') {
          if (*(int *)(DAT_14ca09490 + 4) == 0) {
            FUN_144b112d8(pcVar21 + 0x58e0);
          }
          local_3c8 = (longlong **)(puVar35 + 10);
          FUN_1401b6588(pcVar21 + 0x58e0,param_2,local_310,0);
          pcVar21[0x5a28] = '\x01';
        }
        else {
          puVar35[10] = 0;
          *(undefined4 *)(puVar35 + 0xb) = 4;
          puVar35[0xc] = 0;
          *(undefined4 *)(puVar35 + 0xd) = 8;
          puVar35[0xe] = 0;
        }
        FUN_14156fa72();
        FUN_140069376(param_2);
        puVar5 = local_360;
        puVar31 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar18 = puVar31 + 0x3c;
        if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
          FUN_140023dd8(local_360,0x1e8);
          puVar31 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
          puVar18 = puVar31 + 0x3c;
        }
        *local_360 = (ulonglong)puVar18;
        auStack_270 = (undefined1  [8])DAT_14c9b7ff8;
        if (DAT_14c9b7ff8 != 0) {
          LOCK();
          *(int *)(DAT_14c9b7ff8 + 8) = *(int *)(DAT_14c9b7ff8 + 8) + 1;
          UNLOCK();
        }
        local_268 = (undefined1  [8])&DAT_14c9b7fb0;
        local_278 = plVar34;
        FUN_144aaa2f0(puVar31,&local_279,&local_278,0x21);
        *puVar31 = &PTR_FUN_14a1f61f0;
        puVar31[0x3a] = pcVar21;
        puVar31[0x3b] = plVar34;
        iVar29 = *(int *)(param_2 + 0x170);
        *(uint *)(param_2 + 0x170) = iVar29 + 1U;
        if (*(uint *)(param_2 + 0x174) < iVar29 + 1U) {
          FUN_14470e57a(local_318,iVar29);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar29 * 8) = puVar31;
        *(int *)((longlong)puVar31 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
        iVar29 = *(int *)(param_2 + 0x160);
        *(uint *)(param_2 + 0x160) = iVar29 + 1U;
        if (*(uint *)(param_2 + 0x164) < iVar29 + 1U) {
          FUN_1401641e0(local_2e0,iVar29);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x158) + (longlong)iVar29 * 8) = puVar31;
        FUN_140069100(param_2,puVar31);
        plVar34 = local_348;
      }
      uVar36 = local_308;
      if (*(int *)((longlong)puVar1 + 0x17c) != (int)local_2f8) {
        *(int *)((longlong)puVar1 + 0x17c) = (int)local_2f8;
        puVar31 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar31 + 3;
        if ((undefined8 *)puVar1[1] < puVar18) {
          FUN_140023dd8(puVar1,0x20);
          puVar31 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar18 = puVar31 + 3;
        }
        *puVar1 = (ulonglong)puVar18;
        *(int *)(puVar1 + 0xc) = (int)puVar1[0xc] + 1;
        *(undefined8 **)puVar1[6] = puVar31;
        puVar1[6] = (ulonglong)(puVar31 + 1);
        uVar10 = *(undefined4 *)((longlong)puVar1 + 0x17c);
        puVar31[1] = 0;
        *puVar31 = &PTR_FUN_14a1fb2c0;
        *(undefined4 *)(puVar31 + 2) = uVar10;
      }
      plVar34 = (longlong *)((longlong)plVar34 + 1);
    } while (plVar34 != local_338);
  }
  lVar13 = local_340;
  if ((longlong)*(int *)(local_2f0 + 0x100) != 0) {
    puVar18 = *(undefined8 **)(local_2f0 + 0xf8);
    puVar31 = puVar18 + (longlong)*(int *)(local_2f0 + 0x100) * 2;
    do {
      if ((longlong)(int)local_358[1] != 0) {
        uVar36 = *local_358;
        lVar28 = (longlong)(int)local_358[1] * 0x13c10;
        do {
          local_3c8 = *(longlong ***)(lVar13 + 0x198);
          (**(code **)(*(longlong *)*puVar18 + 0x68))
                    ((longlong *)*puVar18,param_2,uVar36,&local_258);
          uVar36 = uVar36 + 0x13c10;
          lVar28 = lVar28 + -0x13c10;
        } while (lVar28 != 0);
      }
      puVar18 = puVar18 + 2;
    } while (puVar18 != puVar31);
  }
  if ((char)local_328 != '\0') {
    uVar36 = *local_358;
    uVar27 = local_358[1];
    uVar37 = (ulonglong)(uint)uVar27;
    uVar33 = 0xffffffff;
    do {
      uVar32 = uVar33;
      uVar30 = (int)uVar32 + 1;
      uVar33 = (ulonglong)uVar30;
    } while ((&local_258)[(ulonglong)uVar30 * 3] != (longlong *)0x0);
    uVar16 = *(undefined8 *)(uVar36 + 0x13818);
    uVar17 = FUN_1415e141e();
    FUN_1448e935e(uVar16,&local_d8,uVar17,0);
    FUN_1415e141e();
    local_338 = local_d8;
    local_308 = uStack_d0;
    uVar17 = FUN_1415d5bd2();
    FUN_1448e935e(uVar16,&local_d8,uVar17,uVar32);
    FUN_1415d5bd2();
    local_320 = local_d8;
    local_2f8 = uStack_d0;
    puVar1 = (ulonglong *)(param_2 + 0x70);
    puVar31 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar18 = puVar31 + 0x22;
    if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
      FUN_140023dd8(puVar1,0x120);
      puVar31 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar18 = puVar31 + 0x22;
    }
    *puVar1 = (ulonglong)puVar18;
    *puVar31 = &PTR_FUN_14a1fbd30;
    local_348 = puVar31 + 2;
    lVar13 = 0x22;
    do {
      *(undefined1 (*) [16])((longlong)puVar31 + lVar13 + -0x12) = (undefined1  [16])0x0;
      *(undefined4 *)((longlong)puVar31 + lVar13 + -2) = 0xffff0000;
      lVar13 = lVar13 + 0x18;
    } while (lVar13 != 0xe2);
    *(undefined4 *)((longlong)puVar31 + 0xe4) = 0;
    *(undefined1 (*) [16])(puVar31 + 0x1a) = (undefined1  [16])0x0;
    *(undefined2 *)(puVar31 + 0x1c) = 0;
    *(undefined4 *)(puVar31 + 0x1d) = 0xffffffff;
    *(undefined4 *)((longlong)puVar31 + 0xec) = 0xffffffff;
    *(undefined4 *)(puVar31 + 0x1e) = 0xffffffff;
    *(undefined4 *)((longlong)puVar31 + 0xf4) = 0xffffffff;
    *(undefined4 *)(puVar31 + 0x1f) = 0;
    *(undefined2 *)((longlong)puVar31 + 0xfc) = 0;
    puVar31[0x20] = 0;
    iVar29 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar29 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar29 + 1U) {
      FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar29);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar29 * 8) = puVar31;
    memcpy(local_348,&local_258,0xf8);
    if (0 < (int)(uint)uVar27) {
      local_360 = (ulonglong *)(param_2 + 0x168);
      do {
        puVar5 = *(ulonglong **)(param_2 + 0x18);
        iVar29 = *(int *)((longlong)puVar5 + 0x17c);
        if (iVar29 != *(int *)(uVar36 + 0x1de0)) {
          *(int *)((longlong)puVar5 + 0x17c) = *(int *)(uVar36 + 0x1de0);
          puVar31 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
          puVar18 = puVar31 + 3;
          if ((undefined8 *)puVar5[1] < puVar18) {
            FUN_140023dd8(puVar5,0x20);
            puVar31 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
            puVar18 = puVar31 + 3;
          }
          *puVar5 = (ulonglong)puVar18;
          *(int *)(puVar5 + 0xc) = (int)puVar5[0xc] + 1;
          *(undefined8 **)puVar5[6] = puVar31;
          puVar5[6] = (ulonglong)(puVar31 + 1);
          uVar10 = *(undefined4 *)((longlong)puVar5 + 0x17c);
          puVar31[1] = 0;
          *puVar31 = &PTR_FUN_14a1fb2c0;
          *(undefined4 *)(puVar31 + 2) = uVar10;
        }
        local_370 = uVar37;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9c1080) &&
           (FUN_144b3d300(&DAT_14c9c1080), DAT_14c9c1080 == -1)) {
          FUN_145fddb1e(&local_d8);
          local_380 = 0;
          local_390 = 0;
          local_3b0 = "Unknown";
          _local_3c0 = ZEXT816(0);
          local_3c8 = (longlong **)0x14a1fb988;
          local_388 = 0;
          local_3a0 = CONCAT44(local_3a0._4_4_,0x100);
          local_3a8 = 0x7af;
          local_398 = (longlong **)&local_d8;
          FUN_140b49562(&DAT_14c9c1000,0,1);
          if (local_d8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          atexit((_func_5014 *)&LAB_142b8ea23);
          _Init_thread_footer(&DAT_14c9c1080);
        }
        FUN_140069376(param_2);
        puVar31 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar18 = puVar31 + 0x3f;
        if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
          FUN_140023dd8(puVar1,0x200);
          puVar31 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar18 = puVar31 + 0x3f;
        }
        *puVar1 = (ulonglong)puVar18;
        local_d8 = local_348;
        uStack_d0 = DAT_14c9c1048;
        if (DAT_14c9c1048 != 0) {
          LOCK();
          *(int *)(DAT_14c9c1048 + 8) = *(int *)(DAT_14c9c1048 + 8) + 1;
          UNLOCK();
        }
        local_c8 = &DAT_14c9c1000;
        local_3c8 = (longlong **)CONCAT71(local_3c8._1_7_,2);
        FUN_140068f1a(puVar31,&local_278,&local_d8,1);
        *puVar31 = &PTR_FUN_14a1f50a0;
        puVar31[0x37] = uVar36;
        puVar31[0x38] = local_338;
        puVar31[0x39] = local_308;
        puVar31[0x3a] = local_320;
        puVar31[0x3b] = local_2f8;
        *(uint *)(puVar31 + 0x3c) = uVar30;
        *(float *)((longlong)puVar31 + 0x1e4) = fVar38;
        *(float *)(puVar31 + 0x3d) = fVar40;
        *(float *)((longlong)puVar31 + 0x1ec) = fVar39;
        *(undefined4 *)(puVar31 + 0x3e) = 0x3f800000;
        iVar12 = *(int *)(param_2 + 0x170);
        *(uint *)(param_2 + 0x170) = iVar12 + 1U;
        if (*(uint *)(param_2 + 0x174) < iVar12 + 1U) {
          FUN_14470e57a(local_360,iVar12);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar12 * 8) = puVar31;
        *(int *)((longlong)puVar31 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
        FUN_140069100(param_2,puVar31);
        uVar37 = local_370;
        if (*(int *)((longlong)puVar5 + 0x17c) != iVar29) {
          *(int *)((longlong)puVar5 + 0x17c) = iVar29;
          puVar31 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
          puVar18 = puVar31 + 3;
          if ((undefined8 *)puVar5[1] < puVar18) {
            FUN_140023dd8(puVar5,0x20);
            puVar31 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
            puVar18 = puVar31 + 3;
          }
          *puVar5 = (ulonglong)puVar18;
          *(int *)(puVar5 + 0xc) = (int)puVar5[0xc] + 1;
          *(undefined8 **)puVar5[6] = puVar31;
          puVar5[6] = (ulonglong)(puVar31 + 1);
          uVar10 = *(undefined4 *)((longlong)puVar5 + 0x17c);
          puVar31[1] = 0;
          *puVar31 = &PTR_FUN_14a1fb2c0;
          *(undefined4 *)(puVar31 + 2) = uVar10;
        }
        uVar36 = uVar36 + 0x13c10;
        uVar37 = uVar37 - 1;
      } while (uVar37 != 0);
    }
  }
  uVar36 = local_358[1];
  if ((longlong)(int)uVar36 != 0) {
    uVar27 = *local_358;
    lVar13 = 0;
    iVar29 = DAT_14c9ac460;
    do {
      lVar28 = DAT_14ca97170;
      lVar22 = (longlong)*(int *)(uVar27 + 0x3090 + lVar13);
      if (((2 < lVar22) && (iVar29 != 0)) &&
         ((*(byte *)((longlong)&DAT_14ca814d0 +
                    (ulonglong)*(ushort *)(&DAT_14ca85070 + lVar22 * 2) * 0x3c) & 4) != 0)) {
        iVar12 = *local_2d0;
        if (((iVar12 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar12 == 2)) {
          uVar37 = 0;
        }
        else if (iVar12 == 1) {
          uVar10 = FUN_140ad26c0();
          local_370 = CONCAT44(local_370._4_4_,uVar10);
          DVar11 = GetCurrentThreadId();
          uVar37 = (ulonglong)((DWORD)local_370 != DVar11);
          iVar29 = DAT_14c9ac460;
        }
        else {
          uVar37 = 1;
        }
        if (*(int *)(lVar28 + uVar37 * 4) < 1) {
          uVar3 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(uVar27 + 0x3090 + lVar13) * 2);
          puVar20 = DAT_14ca96af8;
          if (DAT_14ca96af8 == (undefined4 *)0x0) {
            puVar20 = &DAT_14ca96aa8;
          }
          if (((uint)puVar20[uVar3 >> 5] >> (uVar3 & 0x1f) & 1) == 0) {
            bVar6 = false;
          }
          else {
            bVar6 = 2 < (int)(&DAT_14ca814b8)[(ulonglong)uVar3 * 0xf];
          }
          if ((((!bVar6) && (*(longlong *)(uVar27 + 0x23e0 + lVar13) == 0)) &&
              (((*(byte *)(uVar27 + 0x125b0 + lVar13) & 2) == 0 &&
               (*(char *)(uVar27 + 0x30c8 + lVar13) == '\0')))) &&
             ((((*(char *)(uVar27 + 0x23f2 + lVar13) == '\0' &&
                (*(char *)(uVar27 + 0x23f5 + lVar13) != '\x01')) ||
               (*(int *)(uVar27 + 0x1dd0 + lVar13) != 2)) &&
              (0 < *(int *)(uVar27 + 0x569c + lVar13))))) {
            if (*(char *)(local_350[0x7d] + 0x23e8) == '\x01') {
              iVar29 = *(int *)((longlong)local_350 + 0x16c);
              if (iVar29 == 4) {
                if (DAT_14ca46038 != 0) break;
              }
              else {
                if ((iVar29 == 5) && (DAT_14ca46038 != 0)) break;
                if (((iVar29 == 7) || (iVar29 == 6)) && (DAT_14ca46050 != 0)) {
                  uVar3 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(local_350[1] + 8) * 2);
                  if (((((uint)puVar20[uVar3 >> 5] >> (uVar3 & 0x1f) & 1) == 0) ||
                      ((int)(&DAT_14ca814b8)[(ulonglong)uVar3 * 0xf] < 3)) &&
                     ((*(byte *)(local_350 + 0x1f) & 2) == 0)) break;
                }
              }
            }
            lVar13 = (**(code **)(**(longlong **)(local_2f0 + 0x40) + 0x3e0))();
            plVar34 = (longlong *)(longlong)(int)local_358[1];
            if (0 < (longlong)plVar34) {
              uVar36 = *local_358;
              local_358 = (ulonglong *)(param_2 + 0x70);
              local_350 = (longlong *)(param_2 + 0x98);
              local_338 = (longlong *)(lVar13 + 0x3f08);
              local_308 = param_2 + 0x168;
              local_320 = (longlong *)(param_2 + 0x158);
              plVar26 = (longlong *)0x0;
              local_348 = plVar34;
              do {
                iVar29 = DAT_14ca44da0;
                if ((((*(byte *)(uVar36 + 0x125b0 + (longlong)plVar26 * 0x13c10) & 2) == 0) &&
                    (lVar13 = (longlong)plVar26 * 0x13c10 + uVar36,
                    *(char *)(lVar13 + 0x30c8) == '\0')) &&
                   ((((*(char *)(lVar13 + 0x23f2) == '\0' && (*(char *)(lVar13 + 0x23f5) != '\x01'))
                     || (*(int *)(lVar13 + 0x1dd0) != 2)) && (0 < *(int *)(lVar13 + 0x569c))))) {
                  if (DAT_14ca44da0 != 0) {
                    puVar19 = DAT_14ca44d98;
                    if (DAT_14ca44d98 == (uint *)0x0) {
                      puVar19 = &DAT_14ca44d88;
                    }
                    uVar30 = *puVar19;
                    if (uVar30 == 0) {
                      iVar12 = DAT_14ca44da0 + 0x1e;
                      if (-1 < DAT_14ca44da0 + -1) {
                        iVar12 = DAT_14ca44da0 + -1;
                      }
                      uVar27 = 0;
                      uVar37 = (ulonglong)(uint)(iVar12 >> 5);
                      if (iVar12 >> 5 < 1) {
                        uVar37 = uVar27;
                      }
                      local_370 = (ulonglong)local_370._4_4_ << 0x20;
                      do {
                        if (uVar37 == uVar27) goto LAB_142b7f73f;
                        local_370 = CONCAT44(local_370._4_4_,(DWORD)local_370 + 0x20);
                        uVar30 = puVar19[uVar27 + 1];
                        uVar27 = uVar27 + 1;
                      } while (uVar30 == 0);
                    }
                    else {
                      uVar27 = 0;
                      local_370 = (ulonglong)local_370._4_4_ << 0x20;
                    }
                    uVar33 = (ulonglong)(-uVar30 & uVar30);
                    uVar37 = uVar33 * 2 + 1;
                    lVar28 = 0x3f;
                    if (uVar37 != 0) {
                      for (; uVar37 >> lVar28 == 0; lVar28 = lVar28 + -1) {
                      }
                    }
                    iVar12 = ((DWORD)local_370 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
                    if (iVar12 < DAT_14ca44da0) {
                      uVar30 = 0xffffffff;
                      do {
                        plVar34 = *(longlong **)(DAT_14ca44d78 + (longlong)iVar12 * 0x10);
                        (**(code **)(*plVar34 + 0x10))(plVar34,lVar13,1);
                        uVar30 = ~(uint)uVar33 & uVar30;
                        puVar19 = DAT_14ca44d98;
                        if (DAT_14ca44d98 == (uint *)0x0) {
                          puVar19 = &DAT_14ca44d88;
                        }
                        iVar12 = (int)uVar27;
                        lVar28 = (longlong)iVar12;
                        uVar9 = puVar19[lVar28] & uVar30;
                        if (uVar9 == 0) {
                          iVar25 = DAT_14ca44da0 + 0x1e;
                          if (-1 < DAT_14ca44da0 + -1) {
                            iVar25 = DAT_14ca44da0 + -1;
                          }
                          iVar25 = iVar25 >> 5;
                          local_370 = CONCAT44(local_370._4_4_,(DWORD)local_370 + 0x20);
                          iVar23 = iVar25;
                          if (iVar25 < iVar12) {
                            iVar23 = iVar12;
                          }
                          if (iVar12 < iVar25) {
                            lVar22 = 0;
                            do {
                              uVar9 = puVar19[lVar28 + lVar22 + 1];
                              if (uVar9 != 0) {
                                uVar27 = (ulonglong)(iVar12 + (int)lVar22 + 1);
                                uVar30 = 0xffffffff;
                                goto LAB_142b7fd86;
                              }
                              local_370 = CONCAT44(local_370._4_4_,(DWORD)local_370 + 0x20);
                              lVar22 = lVar22 + 1;
                            } while (iVar23 - lVar28 != lVar22);
                            uVar30 = 0xffffffff;
                            iVar12 = iVar23;
                          }
                          uVar27 = (ulonglong)(iVar12 + 1);
                          iVar12 = DAT_14ca44da0;
                        }
                        else {
LAB_142b7fd86:
                          uVar33 = (ulonglong)(-uVar9 & uVar9);
                          uVar37 = uVar33 * 2 + 1;
                          lVar28 = 0x3f;
                          if (uVar37 != 0) {
                            for (; uVar37 >> lVar28 == 0; lVar28 = lVar28 + -1) {
                            }
                          }
                          iVar12 = ((DWORD)local_370 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
                          if (DAT_14ca44da0 <= iVar12) {
                            iVar12 = DAT_14ca44da0;
                          }
                        }
                      } while (iVar12 != iVar29);
                    }
                  }
LAB_142b7f73f:
                  puVar1 = local_358;
                  puVar31 = (undefined8 *)
                            (*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
                  puVar18 = puVar31 + 0x32;
                  if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
                    FUN_140023dd8(local_358,0x1a0);
                    puVar31 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
                    puVar18 = puVar31 + 0x32;
                  }
                  local_370 = lVar13 + 0x5310;
                  *local_358 = (ulonglong)puVar18;
                  *puVar31 = &PTR_FUN_14a1f5df8;
                  plVar34 = puVar31 + 2;
                  puVar31[2] = 0;
                  *(undefined1 *)(puVar31 + 3) = 1;
                  puVar31[4] = 0;
                  *(undefined1 *)(puVar31 + 5) = 1;
                  puVar31[6] = 0;
                  *(undefined4 *)(puVar31 + 7) = 4;
                  puVar31[8] = 0;
                  *(undefined4 *)(puVar31 + 9) = 8;
                  puVar31[0xc] = 0;
                  *(undefined1 *)(puVar31 + 0xd) = 1;
                  puVar31[0xe] = 0;
                  *(undefined1 *)(puVar31 + 0xf) = 1;
                  puVar31[0x10] = 0;
                  *(undefined1 *)(puVar31 + 0x11) = 1;
                  lVar28 = 0xa2;
                  do {
                    puVar18 = (undefined8 *)((longlong)puVar31 + lVar28 + -0x12);
                    *puVar18 = 0;
                    puVar18[1] = 0;
                    *(undefined4 *)((longlong)puVar31 + lVar28 + -2) = 0xffff0000;
                    lVar28 = lVar28 + 0x18;
                  } while (lVar28 != 0x162);
                  *(undefined4 *)((longlong)puVar31 + 0x164) = 0;
                  puVar31[0x2a] = 0;
                  puVar31[0x2b] = 0;
                  *(undefined2 *)(puVar31 + 0x2c) = 0;
                  *(undefined4 *)(puVar31 + 0x2d) = 0xffffffff;
                  *(undefined4 *)((longlong)puVar31 + 0x16c) = 0xffffffff;
                  *(undefined4 *)(puVar31 + 0x2e) = 0xffffffff;
                  *(undefined4 *)((longlong)puVar31 + 0x174) = 0xffffffff;
                  *(undefined4 *)(puVar31 + 0x2f) = 0;
                  *(undefined2 *)((longlong)puVar31 + 0x17c) = 0;
                  puVar31[0x30] = 0;
                  iVar29 = *(int *)(param_2 + 0xa0);
                  *(uint *)(param_2 + 0xa0) = iVar29 + 1U;
                  if (*(uint *)(param_2 + 0xa4) < iVar29 + 1U) {
                    FUN_1448cfae8(local_350,iVar29);
                  }
                  *(undefined8 **)(*local_350 + (longlong)iVar29 * 8) = puVar31;
                  FUN_1448c58dc(lVar13,&local_d8);
                  *(undefined4 *)(puVar31 + 4) = (undefined4)local_c8;
                  *(undefined4 *)((longlong)puVar31 + 0x24) = local_c8._4_4_;
                  *(undefined4 *)(puVar31 + 5) = (undefined4)uStack_c0;
                  *(undefined4 *)((longlong)puVar31 + 0x2c) = uStack_c0._4_4_;
                  *plVar34 = (longlong)local_d8;
                  puVar31[3] = uStack_d0;
                  puVar31[0x2a] = *(undefined8 *)(local_340 + 0x1c0);
                  puVar31[0x2b] = 0;
                  *(undefined2 *)(puVar31 + 0x2c) = 1;
                  *(undefined4 *)((longlong)puVar31 + 0x164) = 1;
                  if (*(char *)(lVar13 + 0x5590) == '\x01') {
                    if (*(int *)(DAT_14ca09490 + 4) == 0) {
                      FUN_144b112d8(lVar13 + 0x5550);
                    }
                    local_3c8 = (longlong **)(puVar31 + 6);
                    FUN_1401b6588(lVar13 + 0x5550,param_2,local_338,0);
                    *(undefined1 *)(lVar13 + 0x5698) = 1;
                  }
                  else {
                    puVar31[6] = 0;
                    *(undefined4 *)(puVar31 + 7) = 4;
                    puVar31[8] = 0;
                    *(undefined4 *)(puVar31 + 9) = 8;
                    puVar31[10] = 0;
                  }
                  lVar28 = local_340;
                  if ((char)local_324 == '\0') {
                    puVar31[0x12] = *(undefined8 *)(local_340 + 0x2d0);
                    puVar31[0x13] = 0;
                    *(undefined4 *)(puVar31 + 0x14) = 0xffff0002;
                    FUN_14156d120();
                    FUN_140069376(param_2);
                    puVar1 = local_358;
                    puVar31 = (undefined8 *)
                              (*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
                    puVar18 = puVar31 + 0x3a;
                    if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
                      FUN_140023dd8(local_358,0x1d8);
                      puVar31 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                      puVar18 = puVar31 + 0x3a;
                    }
                    *local_358 = (ulonglong)puVar18;
                    uStack_d0 = DAT_14c9b8b78;
                    if (DAT_14c9b8b78 != 0) {
                      LOCK();
                      *(int *)(DAT_14c9b8b78 + 8) = *(int *)(DAT_14c9b8b78 + 8) + 1;
                      UNLOCK();
                    }
                    local_c8 = &DAT_14c9b8b30;
                    local_3c8 = (longlong **)CONCAT71(local_3c8._1_7_,2);
                    local_d8 = plVar34;
                    FUN_140068f1a(puVar31,&local_278,&local_d8);
                    *puVar31 = &PTR_FUN_14a1f5e60;
                    puVar31[0x37] = lVar13;
                    puVar31[0x38] = local_370;
                    puVar31[0x39] = plVar34;
                    iVar29 = *(int *)(param_2 + 0x170);
                    *(uint *)(param_2 + 0x170) = iVar29 + 1U;
                    if (*(uint *)(param_2 + 0x174) < iVar29 + 1U) {
                      FUN_14470e57a(local_308,iVar29);
                    }
                    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar29 * 8) =
                         puVar31;
                    *(int *)((longlong)puVar31 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
                  }
                  else {
                    local_c8 = (undefined *)0x0;
                    uStack_c0 = 0;
                    local_d8 = (longlong *)0x0;
                    uStack_d0 = 0;
                    uStack_b8 = 0;
                    local_b0 = 1;
                    uStack_a8 = CONCAT44(uStack_a8._4_4_,1);
                    FUN_1401a4871(param_2,*(undefined8 *)(local_340 + 0x2d0),&local_d8);
                    puVar31[0x12] = *(undefined8 *)(lVar28 + 0x2d0);
                    puVar31[0x13] = 0;
                    *(undefined4 *)(puVar31 + 0x14) = 0xffff0001;
                    FUN_14156d120();
                    FUN_140069376(param_2);
                    puVar1 = local_358;
                    puVar31 = (undefined8 *)
                              (*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
                    puVar18 = puVar31 + 0x3d;
                    if (*(undefined8 **)(param_2 + 0x78) < puVar18) {
                      FUN_140023dd8(local_358,0x1f0);
                      puVar31 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                      puVar18 = puVar31 + 0x3d;
                    }
                    *local_358 = (ulonglong)puVar18;
                    uStack_d0 = DAT_14c9b8b78;
                    if (DAT_14c9b8b78 != 0) {
                      LOCK();
                      *(int *)(DAT_14c9b8b78 + 8) = *(int *)(DAT_14c9b8b78 + 8) + 1;
                      UNLOCK();
                    }
                    local_c8 = &DAT_14c9b8b30;
                    local_d8 = plVar34;
                    FUN_144aaa2f0(puVar31,&local_278,&local_d8);
                    *puVar31 = &PTR_FUN_14a1f5e40;
                    puVar31[0x3a] = lVar13;
                    puVar31[0x3b] = local_370;
                    puVar31[0x3c] = plVar34;
                    iVar29 = *(int *)(param_2 + 0x170);
                    *(uint *)(param_2 + 0x170) = iVar29 + 1U;
                    if (*(uint *)(param_2 + 0x174) < iVar29 + 1U) {
                      FUN_14470e57a(local_308,iVar29);
                    }
                    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar29 * 8) =
                         puVar31;
                    *(int *)((longlong)puVar31 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
                    iVar29 = *(int *)(param_2 + 0x160);
                    *(uint *)(param_2 + 0x160) = iVar29 + 1U;
                    if (*(uint *)(param_2 + 0x164) < iVar29 + 1U) {
                      FUN_1401641e0(local_320,iVar29);
                    }
                    *(undefined8 **)(*(longlong *)(param_2 + 0x158) + (longlong)iVar29 * 8) =
                         puVar31;
                  }
                  FUN_140069100(param_2,puVar31);
                  plVar34 = local_348;
                }
                plVar26 = (longlong *)((longlong)plVar26 + 1);
              } while (plVar26 != plVar34);
            }
            break;
          }
        }
      }
      lVar13 = lVar13 + 0x13c10;
    } while ((longlong)(int)uVar36 * 0x13c10 - lVar13 != 0);
  }
  if ((local_90 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b80042 FUN_142b80042 body=534 status=ok
// SIG undefined FUN_142b80042(void)

void FUN_142b80042(longlong param_1,void *param_2,longlong param_3,undefined4 *param_4)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
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
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_3 + 0x30c8) == '\0') {
    local_98 = 0;
    FUN_142b8ea70(param_1,param_3,param_2);
    bVar2 = true;
    if ((((*(int *)(param_3 + 0x4038) == 0) && (*(int *)(param_3 + 0x4048) == 0)) &&
        (*(int *)(param_3 + 0x4098) == 0)) &&
       ((*(int *)(param_3 + 0x41a0) == 0 && (*(int *)(param_3 + 0x4088) == 0)))) {
      bVar2 = 0 < *(int *)(param_3 + 0x4058);
    }
    if ((((*(int *)(param_3 + 0x3a48) != 0) || (*(int *)(param_3 + 0x3a58) != 0)) ||
        ((*(int *)(param_3 + 0x3aa8) != 0 ||
         (((*(int *)(param_3 + 0x3bb0) != 0 || (*(int *)(param_3 + 15000) != 0)) ||
          ((bool)(bVar2 | 0 < *(int *)(param_3 + 0x3cf8)))))))) || (0 < *(int *)(param_3 + 0x3a68)))
    {
      puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar3 = puVar4 + 0x36;
      if (*(undefined8 **)(param_1 + 0x78) < puVar3) {
        FUN_140023dd8((longlong *)(param_1 + 0x70),0x1c0);
        puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar3 = puVar4 + 0x36;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar3;
      *puVar4 = &PTR_FUN_14a1f61a8;
      puVar3 = puVar4 + 2;
      FUN_144b0e7cc(puVar3);
      iVar1 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar1 + 1U) {
        FUN_1448cfae8(param_1 + 0x98,iVar1);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar1 * 8) = puVar4;
      memcpy(puVar3,param_2,0x1a0);
      *(undefined4 *)((longlong)puVar4 + 0x184) = 0x22;
      local_88 = *param_4;
      uStack_84 = param_4[1];
      uStack_74 = param_4[5];
      uStack_70 = param_4[6];
      uStack_6c = param_4[7];
      local_68 = param_4[8];
      uStack_64 = param_4[9];
      uStack_60 = param_4[10];
      uStack_5c = param_4[0xb];
      local_58 = param_4[0xc];
      uStack_54 = param_4[0xd];
      uStack_4c = param_4[0xf];
      uStack_80 = DAT_14c9c0c60;
      uStack_50 = 0;
      local_78 = 0x22;
      local_98 = 1;
      FUN_142b8ea70(param_1,param_3,puVar3);
      local_98 = 1;
      FUN_142b8ea70(param_1,param_3,param_2,param_4);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b80b63 FUN_142b80b63 body=69 status=ok
// SIG undefined FUN_142b80b63(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b80b63(void)

{
  _DAT_14c9b6400 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b80ba5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9b6408,1);
  return;
}



// FUNCTION 142b80ba8 FUN_142b80ba8 body=69 status=ok
// SIG undefined FUN_142b80ba8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b80ba8(void)

{
  _DAT_14c9b6410 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b80bea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9b6418,1);
  return;
}



// FUNCTION 142b80bed FUN_142b80bed body=69 status=ok
// SIG undefined FUN_142b80bed(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b80bed(void)

{
  _DAT_14c9b6420 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b80c2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9b6428,1);
  return;
}



// FUNCTION 142b80c32 FUN_142b80c32 body=69 status=ok
// SIG undefined FUN_142b80c32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b80c32(void)

{
  _DAT_14c9b6438 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b80c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9b6440,1);
  return;
}



// FUNCTION 142b80c77 FUN_142b80c77 body=69 status=ok
// SIG undefined FUN_142b80c77(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b80c77(void)

{
  _DAT_14c9b6448 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b80cb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9b6450,1);
  return;
}



// FUNCTION 142b80cbc FUN_142b80cbc body=69 status=ok
// SIG undefined FUN_142b80cbc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b80cbc(void)

{
  _DAT_14c9b6458 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b80cfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9b6460,1);
  return;
}



// FUNCTION 142b80d01 FUN_142b80d01 body=69 status=ok
// SIG undefined FUN_142b80d01(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b80d01(void)

{
  _DAT_14c9b6468 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b80d43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9b6470,1);
  return;
}



// FUNCTION 142b80d46 FUN_142b80d46 body=69 status=ok
// SIG undefined FUN_142b80d46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b80d46(void)

{
  _DAT_14c9b6478 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b80d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9b6480,1);
  return;
}



// FUNCTION 142b80d8b FUN_142b80d8b body=69 status=ok
// SIG undefined FUN_142b80d8b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b80d8b(void)

{
  _DAT_14c9b6488 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b80dcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9b6490,1);
  return;
}



// FUNCTION 142b80dd0 FUN_142b80dd0 body=69 status=ok
// SIG undefined FUN_142b80dd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b80dd0(void)

{
  _DAT_14c9b6498 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b80e12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9b64a0,1);
  return;
}



// FUNCTION 142b80e4e FUN_142b80e4e body=5599 status=ok
// SIG undefined FUN_142b80e4e(void)

ulonglong FUN_142b80e4e(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                       longlong *param_5,undefined1 param_6)

{
  undefined4 *puVar1;
  ushort uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  byte bVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 uVar25;
  undefined8 uVar26;
  undefined4 uVar27;
  longlong lVar28;
  ulonglong *puVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_308 [32];
  undefined4 *local_2e8;
  ulonglong local_2e0;
  double *local_2d8;
  longlong local_2d0;
  undefined8 *local_2c8;
  int local_2c0;
  undefined4 local_2b8;
  undefined8 local_2b0;
  longlong local_2a8;
  undefined4 local_2a0;
  undefined4 local_298;
  undefined8 *local_290;
  undefined4 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 *local_270;
  undefined1 local_259;
  ulonglong *local_258;
  undefined8 *local_250;
  undefined4 local_244;
  undefined8 *local_240;
  ulonglong local_238;
  undefined8 *local_230;
  longlong local_228;
  ulonglong local_220;
  longlong local_218;
  longlong local_210;
  ulonglong *local_208;
  longlong local_200;
  undefined8 local_1f8;
  ulonglong local_1f0;
  ulonglong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 *local_1b0;
  ulonglong local_1a8;
  undefined1 local_199;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  double local_168;
  double local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined *local_128;
  ulonglong uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined4 local_d8;
  int local_d4;
  int local_d0;
  undefined4 local_cc;
  undefined2 local_c8;
  undefined1 local_c6;
  undefined2 local_c5;
  undefined1 local_c3;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  if ((longlong)*(int *)(param_1 + 0x3f0) < 1) {
    bVar16 = 1;
  }
  else {
    bVar16 = 1;
    lVar23 = 0;
    do {
      bVar16 = bVar16 & *(longlong *)(*(longlong *)(param_1 + 1000) + 0x3108 + lVar23) != 0;
      lVar23 = lVar23 + 0x13c10;
    } while ((longlong)*(int *)(param_1 + 0x3f0) * 0x13c10 - lVar23 != 0);
  }
  uVar10 = 0;
  if ((DAT_14c760138 != 0) && (local_210 = param_2, DAT_14c76013c != 0)) {
    uVar2 = *(ushort *)(param_1 + 0x8a8);
    uVar10 = (ulonglong)uVar2;
    local_1d8 = param_1;
    if ((((&DAT_14ca814b8)[uVar10 * 0xf] == 1) &&
        ((cVar6 = FUN_147430715(uVar10), param_1 = local_1d8, cVar6 == '\0' ||
         (((&DAT_14ca814b8)[uVar10 * 0xf] == 1 && (cVar6 = FUN_1474307ba(uVar2), cVar6 == '\0'))))))
       || (lVar23 = local_210, (int)param_5[1] == 0)) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      if (((*(byte *)(param_1 + 0xe9) & 2) >> 1 & bVar16) == 1) {
        iVar21 = (DAT_14c9b6430 == 0) + 1;
        lVar24 = *(longlong *)(*(longlong *)(param_1 + 1000) + 8);
        puVar14 = &DAT_14cb05410;
        if (*(char *)(lVar24 + 0xd0) != '\0') {
          puVar14 = (undefined *)(lVar24 + 0x1b8);
        }
        uVar10 = *(ulonglong *)(puVar14 + 0x10);
        uStack_e0 = DAT_14ca85098;
        uStack_f0 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
        uStack_e8 = (undefined *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
        uStack_dc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
        local_c6 = 0;
        local_f8 = (undefined8 *)&DAT_00020008;
        local_c5 = 0xf;
        local_cc = 0x10001;
        local_c8 = 0x101;
        local_d8 = 0;
        local_d4 = (int)((longlong)
                         ((ulonglong)(uint)((int)uVar10 >> 0x1f) << 0x20 | uVar10 & 0xffffffff) /
                        (longlong)iVar21);
        if (DAT_14ca84e40 <= local_d4) {
          local_d4 = DAT_14ca84e40;
        }
        local_c3 = 0xff;
        if (local_d4 < 2) {
          local_d4 = 1;
        }
        iVar21 = (int)((longlong)
                       ((ulonglong)(uint)((longlong)uVar10 >> 0x3f) << 0x20 | uVar10 >> 0x20) /
                      (longlong)iVar21);
        local_d0 = DAT_14ca84e40;
        if (iVar21 < DAT_14ca84e40) {
          local_d0 = iVar21;
        }
        if (local_d0 < 2) {
          local_d0 = 1;
        }
        puVar29 = (ulonglong *)(local_210 + 0x70);
        uVar17 = *(longlong *)(local_210 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar10 = uVar17 + 0x120;
        local_258 = puVar29;
        if (*(ulonglong *)(local_210 + 0x78) < uVar10) {
          FUN_140023dd8(puVar29,0x128);
          uVar17 = *puVar29 + 7 & 0xfffffffffffffff8;
          uVar10 = uVar17 + 0x120;
        }
        *(ulonglong *)(lVar23 + 0x70) = uVar10;
        lVar24 = 0;
        FUN_1456bbb8c(uVar17,L"CapsuleShadows.ShadowFactors",&local_f8,0);
        iVar21 = *(int *)(lVar23 + 0x180);
        *(uint *)(lVar23 + 0x180) = iVar21 + 1U;
        if (*(uint *)(lVar23 + 0x184) < iVar21 + 1U) {
          FUN_14472c0f6(lVar23 + 0x178,iVar21);
        }
        *(ulonglong *)(*(longlong *)(lVar23 + 0x178) + (longlong)iVar21 * 8) = uVar17;
        *(int *)(uVar17 + 0x9c) = *(int *)(lVar23 + 0x180) + -1;
        if (0 < *(int *)(param_1 + 0x3f0)) {
          local_1c8 = lVar23 + 0x188;
          local_228 = lVar23 + 0x198;
          local_1d0 = lVar23 + 0x98;
          local_1c0 = lVar23 + 0x168;
          lVar28 = 0;
          local_220 = uVar17;
          local_1e0 = param_3;
          local_1b8 = param_4;
          do {
            lVar24 = *(longlong *)(param_1 + 1000);
            lVar18 = lVar28 * 0x13c10;
            local_108 = *(undefined8 *)(lVar24 + 0x1040 + lVar18);
            puVar1 = (undefined4 *)(lVar24 + 0x1030 + lVar18);
            local_118 = *puVar1;
            uStack_114 = puVar1[1];
            uStack_110 = puVar1[2];
            uStack_10c = puVar1[3];
            puVar29 = *(ulonglong **)(lVar23 + 0x18);
            iVar21 = *(int *)(lVar24 + 0x1de0 + lVar18);
            iVar12 = *(int *)((longlong)puVar29 + 0x17c);
            if (iVar12 != iVar21) {
              *(int *)((longlong)puVar29 + 0x17c) = iVar21;
              puVar9 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
              puVar11 = puVar9 + 3;
              if ((undefined8 *)puVar29[1] < puVar11) {
                local_208 = puVar29;
                FUN_140023dd8(puVar29,0x20);
                puVar9 = (undefined8 *)(*local_208 + 7 & 0xfffffffffffffff8);
                puVar11 = puVar9 + 3;
                puVar29 = local_208;
              }
              *puVar29 = (ulonglong)puVar11;
              *(int *)(puVar29 + 0xc) = (int)puVar29[0xc] + 1;
              *(undefined8 **)puVar29[6] = puVar9;
              puVar29[6] = (ulonglong)(puVar9 + 1);
              uVar8 = *(undefined4 *)((longlong)puVar29 + 0x17c);
              puVar9[1] = 0;
              *puVar9 = &PTR_FUN_14a1fb2c0;
              *(undefined4 *)(puVar9 + 2) = uVar8;
            }
            local_128 = (undefined *)0x0;
            uStack_120 = 0;
            if (0 < (int)param_5[1]) {
              local_208 = (ulonglong *)CONCAT44(local_208._4_4_,iVar12);
              lVar24 = lVar24 + lVar18;
              lVar23 = 0;
              local_218 = lVar24;
              do {
                lVar18 = *(longlong *)(*param_5 + lVar23 * 8);
                iVar21 = (int)uStack_120;
                lVar19 = (longlong)(int)uStack_120;
                local_f8 = (undefined8 *)0x0;
                uStack_f0 = 0;
                FUN_1472ab3b2(*(undefined8 *)(lVar18 + 0xbb0),&local_f8);
                if (0 < (int)uStack_f0) {
                  lVar20 = 0;
                  iVar12 = (int)uStack_f0;
                  do {
                    plVar3 = *(longlong **)(local_f8[lVar20] + 8);
                    if ((*(byte *)(plVar3 + 0xe) & 1) != 0) {
                      local_138 = local_108;
                      local_148 = local_118;
                      uStack_144 = uStack_114;
                      uStack_140 = uStack_110;
                      uStack_13c = uStack_10c;
                      (**(code **)(*plVar3 + 0x48))(plVar3,&local_148,&local_128);
                      iVar12 = (int)uStack_f0;
                    }
                    lVar20 = lVar20 + 1;
                  } while (lVar20 < iVar12);
                }
                lVar20 = lVar18 + 0x978;
                if (*(longlong *)(lVar18 + 0x980) != 0) {
                  lVar20 = *(longlong *)(lVar18 + 0x980);
                }
                if (iVar21 < (int)uStack_120) {
                  fVar32 = *(float *)(lVar20 + lVar28 * 4);
                  uVar10 = lVar19 << 5 | 0xc;
                  do {
                    *(float *)(local_128 + uVar10) = *(float *)(local_128 + uVar10) * fVar32;
                    lVar19 = lVar19 + 1;
                    uVar10 = uVar10 + 0x20;
                  } while (lVar19 < (int)uStack_120);
                }
                FUN_140046324(&local_f8);
                lVar19 = local_210;
                lVar18 = local_218;
                lVar23 = lVar23 + 1;
              } while (lVar23 < (int)param_5[1]);
              lVar23 = local_210;
              iVar12 = (int)local_208;
              if (0 < (int)uStack_120) {
                plVar3 = *(longlong **)(local_1e0 + 0x28);
                lVar23 = plVar3[0x3d];
                local_158 = 0;
                uStack_150 = 0;
                cVar6 = (**(code **)(*plVar3 + 0xe0))
                                  (plVar3,&local_158,local_218,local_218 + 0x30f8);
                puVar5 = local_258;
                local_240 = (undefined8 *)CONCAT71(local_240._1_7_,(char)lVar23);
                if (cVar6 == '\0') {
                  uVar10 = *(ulonglong *)(lVar18 + 0x30f8);
                  uVar17 = *(ulonglong *)(lVar18 + 0x3100);
                  iVar21 = (int)(uVar17 >> 0x20);
                  iVar12 = (int)(uVar10 >> 0x20);
                  local_158 = uVar10;
                  uStack_150 = uVar17;
                }
                else {
                  uVar10 = local_158 & 0xffffffff;
                  uVar17 = uStack_150 & 0xffffffff;
                  iVar21 = uStack_150._4_4_;
                  iVar12 = local_158._4_4_;
                }
                iVar22 = (DAT_14c9b6430 == 0) + 1;
                uVar4 = (longlong)(iVar21 - iVar12) / (longlong)iVar22;
                local_1e8 = uVar4 & 0xffffffff;
                uVar10 = (longlong)((int)uVar17 - (int)uVar10) / (longlong)iVar22;
                local_1a8 = uVar10 & 0xffffffff;
                iVar21 = (int)uVar4;
                iVar12 = iVar21 + 7;
                iVar21 = iVar21 + 0xe;
                if (-1 < iVar12) {
                  iVar21 = iVar12;
                }
                iVar12 = (int)uVar10;
                iVar22 = iVar12 + 7;
                iVar12 = iVar12 + 0xe;
                if (-1 < iVar22) {
                  iVar12 = iVar22;
                }
                iVar12 = iVar12 >> 3;
                local_250 = (undefined8 *)(ulonglong)(uint)(iVar21 >> 3);
                if (iVar21 >> 3 < 2) {
                  local_250 = (undefined8 *)0x1;
                }
                if (iVar12 < 2) {
                  iVar12 = 1;
                }
                local_238 = CONCAT44(local_238._4_4_,iVar12);
                uVar7 = iVar12 * (int)local_250;
                uVar13 = 4;
                if (DAT_14ca84e48 < 4) {
                  uVar13 = DAT_14ca84e48;
                }
                uStack_f0 = CONCAT44(uStack_f0._4_4_,0x10109);
                if (DAT_14ca84e48 <= uVar7) {
                  uVar7 = DAT_14ca84e48;
                }
                uStack_e8 = (undefined *)0x0;
                local_f8 = (undefined8 *)CONCAT44(uVar7 + (uVar7 == 0),uVar13 + (uVar13 == 0));
                uVar17 = *(longlong *)(lVar19 + 0x70) + 0xfU & 0xfffffffffffffff0;
                uVar10 = uVar17 + 0x150;
                if (*(ulonglong *)(lVar19 + 0x78) < uVar10) {
                  FUN_140023dd8(local_258,0x160);
                  uVar17 = *puVar5 + 0xf & 0xfffffffffffffff0;
                  uVar10 = uVar17 + 0x150;
                }
                *(ulonglong *)(lVar19 + 0x70) = uVar10;
                FUN_1456bd266(uVar17,L"CapsuleTileIntersectionCountsBuffer",&local_f8,0);
                iVar21 = *(int *)(lVar19 + 400);
                *(uint *)(lVar19 + 400) = iVar21 + 1U;
                if (*(uint *)(lVar19 + 0x194) < iVar21 + 1U) {
                  FUN_144737178(local_1c8,iVar21);
                }
                puVar5 = local_258;
                *(ulonglong *)(*(longlong *)(lVar19 + 0x188) + (longlong)iVar21 * 8) = uVar17;
                *(int *)(uVar17 + 0x7c) = *(int *)(lVar19 + 400) + -1;
                cVar6 = *(char *)(uVar17 + 0x68);
                puVar9 = (undefined8 *)(*(longlong *)(lVar19 + 0x70) + 7U & 0xfffffffffffffff8);
                puVar11 = puVar9 + 8;
                if (*(undefined8 **)(lVar19 + 0x78) < puVar11) {
                  FUN_140023dd8(local_258,0x48);
                  puVar9 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
                  puVar11 = puVar9 + 8;
                }
                *(undefined8 **)(lVar19 + 0x70) = puVar11;
                puVar9[1] = *(undefined8 *)(uVar17 + 8);
                puVar9[2] = 0;
                *(undefined1 *)(puVar9 + 3) = 2;
                *(undefined8 *)((longlong)puVar9 + 0x1c) = 0xffffffffffffffff;
                *(undefined1 *)(puVar9 + 5) = 0;
                *puVar9 = &PTR_FUN_14a1fb3e8;
                *(byte *)(puVar9 + 6) = cVar6 >> 7 & 0x1c;
                *(undefined2 *)((longlong)puVar9 + 0x31) = 0;
                puVar9[7] = uVar17;
                iVar21 = *(int *)(lVar19 + 0x1a0);
                *(uint *)(lVar19 + 0x1a0) = iVar21 + 1U;
                if (*(uint *)(lVar19 + 0x1a4) < iVar21 + 1U) {
                  FUN_1447568fc(local_228,iVar21);
                }
                puVar5 = local_258;
                *(undefined8 **)(*(longlong *)(lVar19 + 0x198) + (longlong)iVar21 * 8) = puVar9;
                *(int *)((longlong)puVar9 + 0x1c) = *(int *)(lVar19 + 0x1a0) + -1;
                cVar6 = *(char *)(uVar17 + 0x68);
                puVar15 = (undefined8 *)(*(longlong *)(lVar19 + 0x70) + 7U & 0xfffffffffffffff8);
                puVar11 = puVar15 + 9;
                local_230 = puVar9;
                if (*(undefined8 **)(lVar19 + 0x78) < puVar11) {
                  FUN_140023dd8(local_258,0x50);
                  puVar15 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
                  puVar11 = puVar15 + 9;
                }
                puVar9 = local_230;
                *(undefined8 **)(lVar19 + 0x70) = puVar11;
                puVar15[1] = *(undefined8 *)(uVar17 + 8);
                puVar15[2] = 0;
                *(undefined1 *)(puVar15 + 3) = 3;
                *(undefined8 *)((longlong)puVar15 + 0x1c) = 0xffffffffffffffff;
                *puVar15 = &PTR_FUN_14a1fb168;
                *(byte *)(puVar15 + 5) = cVar6 >> 7 & 0x1c;
                *(undefined8 *)((longlong)puVar15 + 0x2c) = 0xffffffff00000000;
                puVar15[7] = 0;
                puVar15[8] = uVar17;
                iVar21 = *(int *)(lVar19 + 0x1a0);
                *(uint *)(lVar19 + 0x1a0) = iVar21 + 1U;
                if (*(uint *)(lVar19 + 0x1a4) < iVar21 + 1U) {
                  FUN_1447568fc(local_228,iVar21);
                }
                *(undefined8 **)(*(longlong *)(lVar19 + 0x198) + (longlong)iVar21 * 8) = puVar15;
                *(int *)((longlong)puVar15 + 0x1c) = *(int *)(lVar19 + 0x1a0) + -1;
                local_1b0 = puVar15;
                FUN_1405bfba3(lVar19,puVar9,0,2);
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c9bff90) &&
                   (FUN_144b3d300(&DAT_14c9bff90), DAT_14c9bff90 == -1)) {
                  _Init_thread_footer(&DAT_14c9bff90);
                }
                uVar10 = uStack_120 & 0xffffffff;
                if ((int)uStack_120 == 0) {
                  local_2e8 = (undefined4 *)&DAT_14c9bff70;
                  local_2d8 = (double *)CONCAT71(local_2d8._1_7_,1);
                  local_2e0 = 0x20;
                  uVar10 = 1;
                }
                else {
                  local_2e0 = (ulonglong)(uint)((int)uStack_120 << 5);
                  local_2e8 = (undefined4 *)local_128;
                  local_2d8 = (double *)((ulonglong)local_2d8._1_7_ << 8);
                }
                lVar23 = FUN_144942e63(lVar19,L"ShadowCapsuleShapesBuffer",0x20,uVar10);
                puVar5 = local_258;
                local_1f0 = CONCAT71(local_1f0._1_7_,(char)local_240 != '\0');
                puVar9 = (undefined8 *)(*(longlong *)(lVar19 + 0x70) + 0xfU & 0xfffffffffffffff0);
                puVar11 = puVar9 + 0x40;
                if (*(undefined8 **)(lVar19 + 0x78) < puVar11) {
                  FUN_140023dd8(local_258,0x210);
                  puVar9 = (undefined8 *)(*puVar5 + 0xf & 0xfffffffffffffff0);
                  puVar11 = puVar9 + 0x40;
                }
                *(undefined8 **)(lVar19 + 0x70) = puVar11;
                *puVar9 = &PTR_FUN_14a1f63f0;
                local_240 = puVar9 + 2;
                FUN_147140cc2();
                iVar21 = *(int *)(lVar19 + 0xa0);
                *(uint *)(lVar19 + 0xa0) = iVar21 + 1U;
                if (*(uint *)(lVar19 + 0xa4) < iVar21 + 1U) {
                  FUN_1448cfae8(local_1d0,iVar21);
                }
                puVar5 = local_258;
                *(undefined8 **)(*(longlong *)(lVar19 + 0x98) + (longlong)iVar21 * 8) = puVar9;
                cVar6 = *(char *)(lVar23 + 0x68);
                puVar9 = (undefined8 *)(*(longlong *)(lVar19 + 0x70) + 7U & 0xfffffffffffffff8);
                puVar11 = puVar9 + 9;
                if (*(undefined8 **)(lVar19 + 0x78) < puVar11) {
                  FUN_140023dd8(local_258,0x50);
                  puVar9 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
                  puVar11 = puVar9 + 9;
                }
                *(undefined8 **)(lVar19 + 0x70) = puVar11;
                puVar9[1] = *(undefined8 *)(lVar23 + 8);
                puVar9[2] = 0;
                *(undefined1 *)(puVar9 + 3) = 3;
                *(undefined8 *)((longlong)puVar9 + 0x1c) = 0xffffffffffffffff;
                *puVar9 = &PTR_FUN_14a1fb168;
                *(byte *)(puVar9 + 5) = cVar6 >> 7 & 0x1c;
                *(undefined8 *)((longlong)puVar9 + 0x2c) = 0xffffffff00000000;
                puVar9[7] = 0;
                puVar9[8] = lVar23;
                iVar21 = *(int *)(lVar19 + 0x1a0);
                *(uint *)(lVar19 + 0x1a0) = iVar21 + 1U;
                if (*(uint *)(lVar19 + 0x1a4) < iVar21 + 1U) {
                  FUN_1447568fc(local_228,iVar21);
                }
                uVar10 = local_220;
                puVar5 = local_258;
                *(undefined8 **)(*(longlong *)(lVar19 + 0x198) + (longlong)iVar21 * 8) = puVar9;
                *(int *)((longlong)puVar9 + 0x1c) = *(int *)(lVar19 + 0x1a0) + -1;
                uVar8 = DAT_14c760120;
                iVar21 = (DAT_14c9b6430 == 0) + 1;
                local_160 = (double)(int)local_250;
                local_168 = (double)(int)local_238;
                puVar15 = (undefined8 *)(*(longlong *)(lVar19 + 0x70) + 7U & 0xfffffffffffffff8);
                puVar11 = puVar15 + 9;
                uVar26 = *(undefined8 *)(local_1d8 + 8);
                uVar25 = *(undefined1 *)(local_220 + 0x94);
                uVar27 = (int)uStack_120;
                if (*(undefined8 **)(lVar19 + 0x78) < puVar11) {
                  local_200 = CONCAT44(local_200._4_4_,iVar21);
                  local_244 = (int)uStack_120;
                  local_259 = *(undefined1 *)(local_220 + 0x94);
                  local_1f8 = *(undefined8 *)(local_1d8 + 8);
                  FUN_140023dd8(local_258,0x50);
                  puVar15 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
                  puVar11 = puVar15 + 9;
                  uVar26 = local_1f8;
                  uVar25 = local_259;
                  iVar21 = (int)local_200;
                  uVar27 = local_244;
                }
                *(undefined8 **)(lVar19 + 0x70) = puVar11;
                puVar15[1] = *(undefined8 *)(uVar10 + 8);
                puVar15[2] = 0;
                *(undefined1 *)(puVar15 + 3) = 0;
                *(undefined8 *)((longlong)puVar15 + 0x1c) = 0xffffffffffffffff;
                *(undefined1 *)(puVar15 + 5) = 0;
                *puVar15 = &PTR_FUN_14a1fb948;
                *(undefined1 *)(puVar15 + 6) = uVar25;
                *(undefined1 *)(puVar15 + 7) = 0;
                *(undefined4 *)((longlong)puVar15 + 0x31) = 0;
                *(undefined2 *)((longlong)puVar15 + 0x35) = 0;
                puVar15[8] = uVar10;
                iVar12 = *(int *)(lVar19 + 0x1a0);
                *(uint *)(lVar19 + 0x1a0) = iVar12 + 1U;
                lVar23 = (longlong)iVar12;
                if (*(uint *)(lVar19 + 0x1a4) < iVar12 + 1U) {
                  local_244 = uVar27;
                  local_200 = (longlong)iVar12;
                  local_1f8 = uVar26;
                  FUN_1447568fc(local_228);
                  lVar23 = local_200;
                  uVar26 = local_1f8;
                  uVar27 = local_244;
                }
                local_298 = uVar27;
                lVar24 = local_218;
                uVar10 = local_1f0 & 0xff;
                local_2e8 = (undefined4 *)(local_238 & 0xffffffff | (longlong)local_250 << 0x20);
                *(undefined8 **)(*(longlong *)(lVar19 + 0x198) + lVar23 * 8) = puVar15;
                *(int *)((longlong)puVar15 + 0x1c) = *(int *)(lVar19 + 0x1a0) + -1;
                local_270 = local_230;
                local_280 = 0;
                uStack_278 = 0;
                uVar27 = (undefined4)lVar28;
                local_2a8 = local_218;
                local_2b8 = uVar8;
                local_2c8 = &local_158;
                local_2d0 = local_1e0;
                local_2d8 = &local_168;
                local_288 = 0;
                local_2e0 = 0;
                local_2c0 = iVar21;
                local_2b0 = uVar26;
                local_2a0 = uVar27;
                local_290 = puVar9;
                local_230 = (undefined8 *)local_2e8;
                FUN_147134584(lVar19,local_240,uVar10,puVar15);
                uVar26 = *(undefined8 *)(lVar24 + 0x13818);
                FUN_145f3cbce();
                FUN_1448e935e(uVar26,&local_f8,&DAT_14c9b6638,uVar10);
                FUN_145f3cbce();
                local_178 = (undefined4)local_f8;
                uStack_174 = local_f8._4_4_;
                uStack_170 = (int)uStack_f0;
                uStack_16c = uStack_f0._4_4_;
                local_184 = (int)local_238;
                local_180 = SUB84(local_250,0);
                local_17c = 1;
                local_2e8 = &local_184;
                FUN_1471349d5(lVar19,&local_f8,&local_178,local_240);
                local_1f0 = *(undefined8 *)(local_220 + 0x84);
                FUN_147134a88(*(undefined8 *)(lVar24 + 0x13818),&local_178);
                bVar30 = DAT_14c9b6430 == 0;
                uVar26 = *(undefined8 *)(lVar24 + 0x13818);
                FUN_145f701e0();
                FUN_1448e935e(uVar26,&local_f8,&DAT_14c9b6888,bVar30);
                FUN_145f701e0();
                puVar5 = local_258;
                local_238 = (ulonglong)local_f8;
                local_240 = (undefined8 *)uStack_f0;
                puVar9 = (undefined8 *)(*(longlong *)(lVar19 + 0x70) + 0xfU & 0xfffffffffffffff0);
                puVar11 = puVar9 + 0x3a;
                if (*(undefined8 **)(lVar19 + 0x78) < puVar11) {
                  FUN_140023dd8(local_258,0x1e0);
                  puVar9 = (undefined8 *)(*puVar5 + 0xf & 0xfffffffffffffff0);
                  puVar11 = puVar9 + 0x3a;
                }
                *(undefined8 **)(lVar19 + 0x70) = puVar11;
                *puVar9 = &PTR_FUN_14a1f6418;
                local_250 = puVar9 + 2;
                FUN_147141122();
                iVar21 = *(int *)(lVar19 + 0xa0);
                *(uint *)(lVar19 + 0xa0) = iVar21 + 1U;
                if (*(uint *)(lVar19 + 0xa4) < iVar21 + 1U) {
                  FUN_1448cfae8(local_1d0,iVar21);
                }
                lVar23 = local_218;
                iVar12 = (int)local_1f0;
                uVar10 = local_1f0 >> 0x20;
                fVar33 = (float)(int)local_1a8;
                fVar32 = (float)(int)local_1e8;
                *(undefined8 **)(*(longlong *)(lVar19 + 0x98) + (longlong)iVar21 * 8) = puVar9;
                bVar16 = *(byte *)(local_218 + 0x3099);
                uVar8 = uVar27;
                if ((bVar16 & 1) != 0) {
                  uVar8 = 0xffff;
                }
                puVar9[0x1a] = local_1b8;
                puVar9[0x1b] = 0;
                *(undefined2 *)(puVar9 + 0x1c) = 1;
                *(ushort *)((longlong)puVar9 + 0xe2) = -(ushort)((bVar16 & 2) == 0) | (ushort)uVar8;
                FUN_140119f90(*(undefined8 *)(*(longlong *)(local_218 + 8) + 0x348),&local_f8,
                              *(undefined4 *)(local_218 + 0x3090));
                *(undefined4 *)(puVar9 + 0x18) = (undefined4)uStack_e8;
                *(undefined4 *)((longlong)puVar9 + 0xc4) = uStack_e8._4_4_;
                *(undefined4 *)(puVar9 + 0x19) = uStack_e0;
                *(uint *)((longlong)puVar9 + 0xcc) = uStack_dc;
                puVar9[0x16] = local_f8;
                puVar9[0x17] = uStack_f0;
                puVar9[2] = *(undefined8 *)(lVar23 + 0x18);
                *(undefined1 *)(puVar9 + 3) = 1;
                puVar9[4] = local_1b0;
                puVar9[5] = local_230;
                fVar31 = (float)(8 << (DAT_14c9b6430 == 0));
                *(float *)(puVar9 + 6) = fVar31;
                *(float *)((longlong)puVar9 + 0x34) = fVar31;
                puVar9[8] = local_158;
                puVar9[9] = CONCAT44(uStack_150._4_4_ - local_158._4_4_,
                                     (int)uStack_150 - (int)local_158);
                *(undefined4 *)(puVar9 + 10) = uVar27;
                puVar9[0xc] = *(undefined8 *)(lVar23 + 0x18);
                *(undefined1 *)(puVar9 + 0xd) = 1;
                uVar26 = *(undefined8 *)(lVar23 + 0x118d0);
                lVar24 = FUN_144a2c9be();
                lVar23 = local_210;
                cVar6 = *(char *)(lVar24 + 0x41);
                if (*(char *)(lVar24 + 0x41) == '\x03') {
                  cVar6 = '\x02';
                }
                puVar9[0xe] = uVar26;
                *(char *)(puVar9 + 0xf) = cVar6;
                puVar9[0x10] = local_220;
                puVar9[0x11] = DAT_14c9c0de0;
                puVar9[0x12] = local_158;
                puVar9[0x13] = CONCAT44(uStack_150._4_4_ - local_158._4_4_,
                                        (int)uStack_150 - (int)local_158);
                *(float *)(puVar9 + 0x14) = (fVar33 + -0.5) * (1.0 / (float)iVar12);
                *(float *)((longlong)puVar9 + 0xa4) = (fVar32 + -0.5) * (1.0 / (float)(int)uVar10);
                *(undefined4 *)(puVar9 + 0x15) = 0x3f800000;
                *(undefined4 *)((longlong)puVar9 + 0xac) = uVar27;
                FUN_145e7e0ee();
                local_f8 = (undefined8 *)0x0;
                uStack_f0 = 0;
                puVar15 = &local_f8;
                FUN_1448f70da(CONCAT44(uStack_174,local_178),&DAT_14c9b8148,local_250,puVar15);
                FUN_145f7044e();
                local_f8 = (undefined8 *)0x0;
                uStack_f0 = 0;
                FUN_1448f70da(local_238,&DAT_14c9b81d0,puVar9 + 0xc,puVar15);
                uVar17 = uStack_150;
                uVar10 = local_158;
                local_198 = local_178;
                uStack_194 = uStack_174;
                uStack_190 = uStack_170;
                uStack_18c = uStack_16c;
                FUN_1471411ee();
                FUN_140069376(lVar23);
                puVar5 = local_258;
                puVar9 = (undefined8 *)(*(longlong *)(lVar23 + 0x70) + 7U & 0xfffffffffffffff8);
                puVar11 = puVar9 + 0x43;
                if (*(undefined8 **)(lVar23 + 0x78) < puVar11) {
                  local_1e8 = uVar10;
                  FUN_140023dd8(local_258,0x220);
                  puVar9 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
                  puVar11 = puVar9 + 0x43;
                  uVar10 = local_1e8;
                }
                *local_258 = (ulonglong)puVar11;
                local_f8 = local_250;
                uStack_f0 = DAT_14c9bffe0;
                if (DAT_14c9bffe0 != 0) {
                  LOCK();
                  *(int *)(DAT_14c9bffe0 + 8) = *(int *)(DAT_14c9bffe0 + 8) + 1;
                  UNLOCK();
                }
                uStack_e8 = &DAT_14c9bff98;
                local_2e8 = (undefined4 *)CONCAT71(local_2e8._1_7_,2);
                lVar24 = CONCAT62((int6)((ulonglong)puVar15 >> 0x10),1);
                FUN_140068f1a(puVar9,&local_199,&local_f8,lVar24);
                *puVar9 = &PTR_FUN_14a1f6420;
                puVar9[0x37] = local_250;
                *(undefined4 *)(puVar9 + 0x38) = local_198;
                *(undefined4 *)((longlong)puVar9 + 0x1c4) = uStack_194;
                *(undefined4 *)(puVar9 + 0x39) = uStack_190;
                *(undefined4 *)((longlong)puVar9 + 0x1cc) = uStack_18c;
                puVar9[0x3a] = local_238;
                puVar9[0x3b] = local_240;
                puVar9[0x3c] = local_218;
                puVar9[0x3d] = local_1e0;
                puVar9[0x3e] = local_220;
                puVar9[0x3f] = local_230;
                puVar9[0x40] = uVar10;
                puVar9[0x41] = uVar17;
                *(undefined1 *)(puVar9 + 0x42) = param_6;
                iVar21 = *(int *)(lVar23 + 0x170);
                *(uint *)(lVar23 + 0x170) = iVar21 + 1U;
                if (*(uint *)(lVar23 + 0x174) < iVar21 + 1U) {
                  FUN_14470e57a(local_1c0,iVar21);
                }
                lVar23 = local_210;
                *(undefined8 **)(*(longlong *)(local_210 + 0x168) + (longlong)iVar21 * 8) = puVar9;
                *(int *)((longlong)puVar9 + 0x2c) = *(int *)(local_210 + 0x170) + -1;
                FUN_140069100(local_210,puVar9);
                iVar12 = (int)local_208;
              }
              param_1 = local_1d8;
              if (local_128 != (undefined *)0x0) {
                FUN_1400020a8();
              }
            }
            if (*(int *)((longlong)puVar29 + 0x17c) != iVar12) {
              *(int *)((longlong)puVar29 + 0x17c) = iVar12;
              puVar9 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
              puVar11 = puVar9 + 3;
              if ((undefined8 *)puVar29[1] < puVar11) {
                FUN_140023dd8(puVar29,0x20);
                puVar9 = (undefined8 *)(*puVar29 + 7 & 0xfffffffffffffff8);
                puVar11 = puVar9 + 3;
              }
              *puVar29 = (ulonglong)puVar11;
              *(int *)(puVar29 + 0xc) = (int)puVar29[0xc] + 1;
              *(undefined8 **)puVar29[6] = puVar9;
              puVar29[6] = (ulonglong)(puVar9 + 1);
              uVar8 = *(undefined4 *)((longlong)puVar29 + 0x17c);
              puVar9[1] = 0;
              *puVar9 = &PTR_FUN_14a1fb2c0;
              *(undefined4 *)(puVar9 + 2) = uVar8;
            }
            lVar28 = lVar28 + 1;
          } while (lVar28 < *(int *)(param_1 + 0x3f0));
        }
        uVar10 = CONCAT71((int7)((ulonglong)lVar24 >> 8),1);
      }
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 142b8242e FUN_142b8242e body=4893 status=ok
// SIG undefined FUN_142b8242e(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_142b8242e(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined1 uVar3;
  ushort uVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  undefined *puVar17;
  longlong lVar18;
  undefined4 uVar19;
  bool bVar20;
  undefined1 **ppuVar21;
  int iVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  longlong lVar26;
  bool bVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_2f8 [32];
  int *local_2d8;
  int *local_2d0;
  double *local_2c8;
  undefined8 local_2c0;
  undefined8 *local_2b8;
  undefined4 local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  longlong local_298;
  undefined4 local_290;
  int local_288;
  undefined8 local_280;
  int local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 *local_260;
  ulonglong *local_250;
  longlong local_248;
  undefined8 *local_240;
  undefined8 *local_238;
  undefined8 *local_230;
  undefined8 *local_228;
  ulonglong local_220;
  int local_214;
  undefined8 local_210;
  undefined8 local_208;
  longlong local_200;
  undefined8 local_1f8;
  ulonglong local_1f0;
  ulonglong local_1e8;
  ulonglong local_1e0;
  longlong *local_1d8;
  longlong local_1d0;
  int local_1c8;
  int local_1c4;
  longlong local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_199;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  double local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  int local_10c [3];
  undefined1 *local_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  uint local_e4;
  undefined4 local_e0;
  int local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined1 **local_d0;
  int local_c8;
  undefined4 local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  local_1d0 = param_2;
  if (((((DAT_14c76011c != 0) && (DAT_14c76013c != 0)) &&
       ((uVar4 = *(ushort *)(param_1 + 0x8a8), (&DAT_14ca814b8)[(ulonglong)uVar4 * 0xf] != 1 ||
        ((cVar7 = FUN_147430715(), cVar7 != '\0' && ((&DAT_14ca814b8)[(ulonglong)uVar4 * 0xf] != 1))
        )))) && (lVar18 = local_1d0, (~*(uint *)(param_1 + 0xe8) & 0x4000200) == 0)) &&
     (0 < (longlong)*(int *)(param_1 + 0x3f0))) {
    lVar26 = *(longlong *)(param_1 + 1000);
    lVar16 = 0;
    bVar20 = false;
    do {
      bVar20 = (bool)(bVar20 | (*(longlong *)(lVar26 + 0x3108 + lVar16) != 0 &&
                               0 < *(int *)(lVar26 + 0x13848 + lVar16)));
      lVar16 = lVar16 + 0x13c10;
    } while ((longlong)*(int *)(param_1 + 0x3f0) * 0x13c10 - lVar16 != 0);
    if (bVar20) {
      iVar22 = (DAT_14c9b6430 == 0) + 1;
      puVar17 = &DAT_14cb05410;
      if (*(char *)(*(longlong *)(lVar26 + 8) + 0xd0) != '\0') {
        puVar17 = (undefined *)(*(longlong *)(lVar26 + 8) + 0x1b8);
      }
      uVar11 = *(ulonglong *)(puVar17 + 0x10);
      local_e8 = DAT_14ca85098;
      uStack_f8 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
      uStack_f0 = DAT_14ca85090;
      uStack_ec = DAT_14ca85094;
      local_e4 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      local_100 = &DAT_00020008;
      local_d4 = 0x10001;
      local_e0 = 0;
      local_dc = (int)((longlong)
                       ((ulonglong)(uint)((int)uVar11 >> 0x1f) << 0x20 | uVar11 & 0xffffffff) /
                      (longlong)iVar22);
      if (DAT_14ca84e40 <= local_dc) {
        local_dc = DAT_14ca84e40;
      }
      local_d0 = (undefined1 **)CONCAT26(local_d0._6_2_,0xff000f000101);
      if (local_dc < 2) {
        local_dc = 1;
      }
      iVar22 = (int)((longlong)
                     ((ulonglong)(uint)((longlong)uVar11 >> 0x3f) << 0x20 | uVar11 >> 0x20) /
                    (longlong)iVar22);
      local_d8 = DAT_14ca84e40;
      if (iVar22 < DAT_14ca84e40) {
        local_d8 = iVar22;
      }
      if (local_d8 < 2) {
        local_d8 = 1;
      }
      puVar1 = (ulonglong *)(local_1d0 + 0x70);
      uVar25 = *(longlong *)(local_1d0 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar11 = uVar25 + 0x120;
      local_250 = puVar1;
      if (*(ulonglong *)(local_1d0 + 0x78) < uVar11) {
        FUN_140023dd8(puVar1,0x128);
        uVar25 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar11 = uVar25 + 0x120;
      }
      *(ulonglong *)(lVar18 + 0x70) = uVar11;
      FUN_1456bbb8c(uVar25,L"CapsuleShadows.ShadowFactors",&local_100,0);
      iVar22 = *(int *)(lVar18 + 0x180);
      *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
      if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(lVar18 + 0x178,iVar22);
      }
      *(ulonglong *)(*(longlong *)(lVar18 + 0x178) + (longlong)iVar22 * 8) = uVar25;
      *(int *)(uVar25 + 0x9c) = *(int *)(lVar18 + 0x180) + -1;
      local_d0 = (undefined1 **)0x0;
      local_c4 = 2;
      uVar8 = 0;
      if ((*(undefined1 **)(param_3 + 0x1b0) != (undefined1 *)0x0) &&
         (uVar8 = 0, *(longlong *)(param_3 + 0x1b8) != 0)) {
        uStack_f8 = 0;
        uStack_f0 = 0xffff0001;
        uVar8 = 1;
        local_100 = *(undefined1 **)(param_3 + 0x1b0);
      }
      bVar2 = (*(undefined1 **)(param_3 + 0x308))[0x24];
      local_c8 = uVar8 + 1;
      uVar11 = (ulonglong)uVar8;
      (&local_100)[uVar11 * 3] = *(undefined1 **)(param_3 + 0x308);
      (&uStack_f8)[uVar11 * 3] = 0;
      *(char *)(&uStack_f0 + uVar11 * 6) = ((bVar2 & 4) == 0) + '\x01';
      *(undefined1 *)((longlong)&uStack_f0 + uVar11 * 0x18 + 1) = 0;
      *(undefined2 *)((longlong)&uStack_f0 + uVar11 * 0x18 + 2) = 0xffff;
      if (0 < *(int *)(param_1 + 0x3f0)) {
        local_1c0 = lVar18 + 0x188;
        local_200 = lVar18 + 0x198;
        local_1d8 = (longlong *)(lVar18 + 0x98);
        local_1b8 = lVar18 + 0x168;
        lVar26 = 0;
        local_220 = uVar25;
        do {
          lVar16 = *(longlong *)(param_1 + 1000);
          lVar9 = lVar26 * 0x13c10;
          if ((0 < *(int *)(lVar16 + 0x13848 + lVar9)) &&
             (*(longlong *)(lVar16 + 0x3108 + lVar9) != 0)) {
            lVar16 = lVar16 + lVar9;
            puVar1 = *(ulonglong **)(lVar18 + 0x18);
            local_214 = *(int *)((longlong)puVar1 + 0x17c);
            if (local_214 != *(int *)(lVar16 + 0x1de0)) {
              *(int *)((longlong)puVar1 + 0x17c) = *(int *)(lVar16 + 0x1de0);
              puVar10 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
              puVar12 = puVar10 + 3;
              if ((undefined8 *)puVar1[1] < puVar12) {
                FUN_140023dd8(puVar1,0x20);
                puVar10 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                puVar12 = puVar10 + 3;
              }
              *puVar1 = (ulonglong)puVar12;
              *(int *)(puVar1 + 0xc) = (int)puVar1[0xc] + 1;
              *(undefined8 **)puVar1[6] = puVar10;
              puVar1[6] = (ulonglong)(puVar10 + 1);
              uVar19 = *(undefined4 *)((longlong)puVar1 + 0x17c);
              puVar10[1] = 0;
              *puVar10 = &PTR_FUN_14a1fb2c0;
              *(undefined4 *)(puVar10 + 2) = uVar19;
            }
            local_10c[2] = 0;
            local_10c[1] = 0;
            local_10c[0] = 0;
            local_2d0 = local_10c + 1;
            local_2d8 = local_10c + 2;
            local_2c8 = (double *)local_10c;
            FUN_142b8374c(&local_128,lVar18,*(undefined8 *)(param_1 + 8),lVar16);
            puVar5 = local_250;
            if (local_10c[0] == 0 && local_10c[2] == 0) {
              if (*(int *)((longlong)puVar1 + 0x17c) != local_214) {
LAB_142b828ff:
                *(int *)((longlong)puVar1 + 0x17c) = local_214;
                puVar10 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                puVar12 = puVar10 + 3;
                if ((undefined8 *)puVar1[1] < puVar12) {
                  FUN_140023dd8(puVar1,0x20);
                  puVar10 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
                  puVar12 = puVar10 + 3;
                }
                *puVar1 = (ulonglong)puVar12;
                *(int *)(puVar1 + 0xc) = (int)puVar1[0xc] + 1;
                *(undefined8 **)puVar1[6] = puVar10;
                puVar1[6] = (ulonglong)(puVar10 + 1);
                uVar19 = *(undefined4 *)((longlong)puVar1 + 0x17c);
                puVar10[1] = 0;
                *puVar10 = &PTR_FUN_14a1fb2c0;
                *(undefined4 *)(puVar10 + 2) = uVar19;
              }
            }
            else {
              local_138 = *(undefined8 *)(lVar16 + 0x30f8);
              local_130 = *(undefined8 *)(lVar16 + 0x3100);
              iVar22 = (DAT_14c9b6430 == 0) + 1;
              uVar11 = (longlong)
                       ((int)((ulonglong)local_130 >> 0x20) - (int)((ulonglong)local_138 >> 0x20)) /
                       (longlong)iVar22;
              local_1e8 = uVar11 & 0xffffffff;
              uVar25 = (longlong)((int)local_130 - (int)local_138) / (longlong)iVar22;
              local_1f0 = uVar25 & 0xffffffff;
              iVar22 = (int)uVar11;
              iVar13 = iVar22 + 7;
              iVar22 = iVar22 + 0xe;
              if (-1 < iVar13) {
                iVar22 = iVar13;
              }
              local_240 = (undefined8 *)(ulonglong)(uint)(iVar22 >> 3);
              iVar13 = (int)uVar25;
              iVar14 = iVar13 + 7;
              iVar13 = iVar13 + 0xe;
              if (-1 < iVar14) {
                iVar13 = iVar14;
              }
              local_248 = CONCAT44(local_248._4_4_,iVar13 >> 3);
              uVar8 = (iVar13 >> 3) * (iVar22 >> 3);
              uVar15 = 4;
              if (DAT_14ca84e48 < 4) {
                uVar15 = DAT_14ca84e48;
              }
              uStack_180 = CONCAT44(uStack_180._4_4_,0x10109);
              if (DAT_14ca84e48 <= uVar8) {
                uVar8 = DAT_14ca84e48;
              }
              local_178 = (undefined *)0x0;
              local_188 = (undefined8 *)CONCAT44(uVar8 + (uVar8 == 0),uVar15 + (uVar15 == 0));
              uVar25 = *(longlong *)(lVar18 + 0x70) + 0xfU & 0xfffffffffffffff0;
              uVar11 = uVar25 + 0x150;
              if (*(ulonglong *)(lVar18 + 0x78) < uVar11) {
                FUN_140023dd8(local_250,0x160);
                uVar25 = *puVar5 + 0xf & 0xfffffffffffffff0;
                uVar11 = uVar25 + 0x150;
              }
              *(ulonglong *)(lVar18 + 0x70) = uVar11;
              FUN_1456bd266(uVar25,L"CapsuleTileIntersectionCountsBuffer",&local_188,0);
              iVar22 = *(int *)(lVar18 + 400);
              *(uint *)(lVar18 + 400) = iVar22 + 1U;
              if (*(uint *)(lVar18 + 0x194) < iVar22 + 1U) {
                FUN_144737178(local_1c0,iVar22);
              }
              *(ulonglong *)(*(longlong *)(lVar18 + 0x188) + (longlong)iVar22 * 8) = uVar25;
              *(int *)(uVar25 + 0x7c) = *(int *)(lVar18 + 400) + -1;
              cVar7 = *(char *)(uVar25 + 0x68);
              puVar10 = (undefined8 *)(*(longlong *)(lVar18 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar12 = puVar10 + 8;
              if (*(undefined8 **)(lVar18 + 0x78) < puVar12) {
                FUN_140023dd8(local_250,0x48);
                puVar10 = (undefined8 *)(*local_250 + 7 & 0xfffffffffffffff8);
                puVar12 = puVar10 + 8;
              }
              *(undefined8 **)(lVar18 + 0x70) = puVar12;
              puVar10[1] = *(undefined8 *)(uVar25 + 8);
              puVar10[2] = 0;
              *(undefined1 *)(puVar10 + 3) = 2;
              *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
              *(undefined1 *)(puVar10 + 5) = 0;
              *puVar10 = &PTR_FUN_14a1fb3e8;
              *(byte *)(puVar10 + 6) = cVar7 >> 7 & 0x1c;
              *(undefined2 *)((longlong)puVar10 + 0x31) = 0;
              puVar10[7] = uVar25;
              iVar22 = *(int *)(lVar18 + 0x1a0);
              *(uint *)(lVar18 + 0x1a0) = iVar22 + 1U;
              local_230 = puVar10;
              if (*(uint *)(lVar18 + 0x1a4) < iVar22 + 1U) {
                FUN_1447568fc(local_200,iVar22);
              }
              *(undefined8 **)(*(longlong *)(lVar18 + 0x198) + (longlong)iVar22 * 8) = local_230;
              *(int *)((longlong)local_230 + 0x1c) = *(int *)(lVar18 + 0x1a0) + -1;
              cVar7 = *(char *)(uVar25 + 0x68);
              puVar10 = (undefined8 *)(*(longlong *)(lVar18 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar12 = puVar10 + 9;
              if (*(undefined8 **)(lVar18 + 0x78) < puVar12) {
                FUN_140023dd8(local_250,0x50);
                puVar10 = (undefined8 *)(*local_250 + 7 & 0xfffffffffffffff8);
                puVar12 = puVar10 + 9;
              }
              puVar6 = local_230;
              *(undefined8 **)(lVar18 + 0x70) = puVar12;
              puVar10[1] = *(undefined8 *)(uVar25 + 8);
              puVar10[2] = 0;
              *(undefined1 *)(puVar10 + 3) = 3;
              *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
              *puVar10 = &PTR_FUN_14a1fb168;
              *(byte *)(puVar10 + 5) = cVar7 >> 7 & 0x1c;
              *(undefined8 *)((longlong)puVar10 + 0x2c) = 0xffffffff00000000;
              puVar10[7] = 0;
              puVar10[8] = uVar25;
              iVar22 = *(int *)(lVar18 + 0x1a0);
              *(uint *)(lVar18 + 0x1a0) = iVar22 + 1U;
              local_238 = puVar10;
              if (*(uint *)(lVar18 + 0x1a4) < iVar22 + 1U) {
                FUN_1447568fc(local_200,iVar22);
              }
              *(undefined8 **)(*(longlong *)(lVar18 + 0x198) + (longlong)iVar22 * 8) = local_238;
              *(int *)((longlong)local_238 + 0x1c) = *(int *)(lVar18 + 0x1a0) + -1;
              FUN_1405bfba3(lVar18,puVar6,0,2);
              puVar5 = local_250;
              puVar10 = (undefined8 *)(*(longlong *)(lVar18 + 0x70) + 0xfU & 0xfffffffffffffff0);
              puVar12 = puVar10 + 0x40;
              if (*(undefined8 **)(lVar18 + 0x78) < puVar12) {
                FUN_140023dd8(local_250,0x210);
                puVar10 = (undefined8 *)(*puVar5 + 0xf & 0xfffffffffffffff0);
                puVar12 = puVar10 + 0x40;
              }
              *(undefined8 **)(lVar18 + 0x70) = puVar12;
              *puVar10 = &PTR_FUN_14a1f63f0;
              local_228 = puVar10 + 2;
              FUN_147140cc2();
              iVar22 = *(int *)(lVar18 + 0xa0);
              *(uint *)(lVar18 + 0xa0) = iVar22 + 1U;
              if (*(uint *)(lVar18 + 0xa4) < iVar22 + 1U) {
                FUN_1448cfae8(local_1d8,iVar22);
              }
              puVar5 = local_250;
              *(undefined8 **)(*(longlong *)(lVar18 + 0x98) + (longlong)iVar22 * 8) = puVar10;
              uVar19 = DAT_14c760124;
              local_1a8 = local_118;
              local_1b0 = local_120;
              local_1c8 = local_10c[0];
              local_1c4 = local_10c[2];
              local_1f8 = CONCAT44(local_1f8._4_4_,(DAT_14c9b6430 == 0) + 1);
              local_140 = (double)(int)local_240;
              local_148 = (double)(int)(uint)local_248;
              uVar3 = *(undefined1 *)(local_220 + 0x94);
              puVar10 = (undefined8 *)(*(longlong *)(lVar18 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar12 = puVar10 + 9;
              uVar23 = local_128;
              uVar24 = *(undefined8 *)(param_1 + 8);
              if (*(undefined8 **)(lVar18 + 0x78) < puVar12) {
                local_208 = local_128;
                local_210 = *(undefined8 *)(param_1 + 8);
                FUN_140023dd8(local_250,0x50);
                puVar10 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
                puVar12 = puVar10 + 9;
                uVar23 = local_208;
                uVar24 = local_210;
              }
              local_1e0 = (ulonglong)(uint)local_248 | (longlong)local_240 << 0x20;
              *(undefined8 **)(lVar18 + 0x70) = puVar12;
              puVar10[1] = *(undefined8 *)(local_220 + 8);
              puVar10[2] = 0;
              *(undefined1 *)(puVar10 + 3) = 0;
              *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
              *(undefined1 *)(puVar10 + 5) = 0;
              *puVar10 = &PTR_FUN_14a1fb948;
              *(undefined1 *)(puVar10 + 6) = uVar3;
              *(undefined1 *)(puVar10 + 7) = 0;
              *(undefined4 *)((longlong)puVar10 + 0x31) = 0;
              *(undefined2 *)((longlong)puVar10 + 0x35) = 0;
              puVar10[8] = local_220;
              iVar22 = *(int *)(lVar18 + 0x1a0);
              *(uint *)(lVar18 + 0x1a0) = iVar22 + 1U;
              if (*(uint *)(lVar18 + 0x1a4) < iVar22 + 1U) {
                local_210 = uVar24;
                local_208 = uVar23;
                FUN_1447568fc(local_200,iVar22);
                uVar23 = local_208;
                uVar24 = local_210;
              }
              *(undefined8 **)(*(longlong *)(lVar18 + 0x198) + (longlong)iVar22 * 8) = puVar10;
              *(int *)((longlong)puVar10 + 0x1c) = *(int *)(lVar18 + 0x1a0) + -1;
              local_260 = local_230;
              local_268 = local_1a8;
              local_270 = local_1b0;
              local_278 = local_1c8;
              local_288 = local_1c4;
              local_290 = (undefined4)lVar26;
              local_2a8 = uVar19;
              local_2b0 = (undefined4)local_1f8;
              local_2b8 = &local_138;
              local_2c0 = 0;
              local_2c8 = &local_148;
              local_2d0 = (int *)0x0;
              local_2d8 = (int *)local_1e0;
              local_2a0 = uVar24;
              local_298 = lVar16;
              local_280 = uVar23;
              FUN_147134584(lVar18,local_228,2,puVar10);
              uVar19 = 2;
              if (0 < local_10c[0]) {
                uVar19 = 0xc;
              }
              uVar23 = *(undefined8 *)(lVar16 + 0x13818);
              if (local_10c[2] < 1) {
                uVar19 = 7;
              }
              FUN_145f3cbce();
              FUN_1448e935e(uVar23,&local_188,&DAT_14c9b6638,uVar19);
              FUN_145f3cbce();
              local_158 = (undefined4)local_188;
              uStack_154 = local_188._4_4_;
              uStack_150 = (undefined4)uStack_180;
              uStack_14c = uStack_180._4_4_;
              local_164 = (uint)local_248;
              local_160 = SUB84(local_240,0);
              local_15c = 1;
              local_2d8 = &local_164;
              FUN_1471349d5(lVar18,&local_188,&local_158,local_228);
              local_1f8 = *(undefined8 *)(local_220 + 0x84);
              local_248 = (longlong)local_c8;
              bVar20 = 1 < local_248;
              FUN_147134a88(*(undefined8 *)(lVar16 + 0x13818),&local_158);
              lVar18 = local_1d0;
              bVar27 = DAT_14c9b6430 == 0;
              uVar23 = *(undefined8 *)(lVar16 + 0x13818);
              FUN_145f701e0();
              FUN_1448e935e(uVar23,&local_188,&DAT_14c9b6888,bVar27 + bVar20 * '\x02');
              FUN_145f701e0();
              puVar5 = local_250;
              local_228 = local_188;
              local_230 = (undefined8 *)uStack_180;
              puVar10 = (undefined8 *)(*(longlong *)(lVar18 + 0x70) + 0xfU & 0xfffffffffffffff0);
              puVar12 = puVar10 + 0x3a;
              if (*(undefined8 **)(lVar18 + 0x78) < puVar12) {
                FUN_140023dd8(local_250);
                puVar10 = (undefined8 *)(*puVar5 + 0xf & 0xfffffffffffffff0);
                puVar12 = puVar10 + 0x3a;
              }
              *(undefined8 **)(lVar18 + 0x70) = puVar12;
              *puVar10 = &PTR_FUN_14a1f6418;
              local_240 = puVar10 + 2;
              FUN_147141122();
              iVar22 = *(int *)(lVar18 + 0xa0);
              uVar8 = iVar22 + 1;
              *(uint *)(lVar18 + 0xa0) = uVar8;
              if (*(uint *)(lVar18 + 0xa4) < uVar8) {
                FUN_1448cfae8(local_1d8);
              }
              *(undefined8 **)(*local_1d8 + (longlong)iVar22 * 8) = puVar10;
              if (0 < (int)(uint)local_248) {
                lVar18 = 0;
                do {
                  ppuVar21 = local_d0;
                  if (local_d0 == (undefined1 **)0x0) {
                    ppuVar21 = &local_100;
                  }
                  *(undefined8 *)((longlong)puVar10 + lVar18 + 0xe0) =
                       *(undefined8 *)((longlong)ppuVar21 + lVar18 + 0x10);
                  uVar23 = ((undefined8 *)((longlong)ppuVar21 + lVar18))[1];
                  puVar12 = (undefined8 *)((longlong)puVar10 + lVar18 + 0xd0);
                  *puVar12 = *(undefined8 *)((longlong)ppuVar21 + lVar18);
                  puVar12[1] = uVar23;
                  *(undefined1 *)((longlong)ppuVar21 + lVar18 + 0x10) = 1;
                  lVar18 = lVar18 + 0x18;
                } while (local_248 * 0x18 != lVar18);
              }
              iVar13 = (int)local_1f8;
              uVar11 = (ulonglong)local_1f8 >> 0x20;
              fVar29 = (float)(int)local_1f0;
              fVar30 = (float)(int)local_1e8;
              FUN_140119f90(*(undefined8 *)(*(longlong *)(lVar16 + 8) + 0x348),&local_188,
                            *(undefined4 *)(lVar16 + 0x3090));
              *(undefined4 *)(puVar10 + 0x18) = (undefined4)local_178;
              *(undefined4 *)((longlong)puVar10 + 0xc4) = local_178._4_4_;
              *(undefined4 *)(puVar10 + 0x19) = uStack_170;
              *(undefined4 *)((longlong)puVar10 + 0xcc) = uStack_16c;
              puVar10[0x16] = local_188;
              puVar10[0x17] = uStack_180;
              puVar10[2] = *(undefined8 *)(lVar16 + 0x18);
              *(undefined1 *)(puVar10 + 3) = 1;
              puVar10[4] = local_238;
              puVar10[5] = local_1e0;
              fVar28 = (float)(8 << (DAT_14c9b6430 == 0));
              *(float *)(puVar10 + 6) = fVar28;
              *(float *)((longlong)puVar10 + 0x34) = fVar28;
              iVar14 = local_130._4_4_ - local_138._4_4_;
              iVar22 = (int)local_130;
              local_1e8 = local_138;
              puVar10[8] = local_138;
              puVar10[9] = CONCAT44(iVar14,(int)local_130 - (int)local_138);
              local_238 = puVar10 + 0xc;
              puVar10[0xc] = *(undefined8 *)(lVar16 + 0x18);
              *(undefined1 *)(puVar10 + 0xd) = 1;
              local_1f0 = *(undefined8 *)(lVar16 + 0x118d0);
              lVar18 = FUN_144a2c9be();
              cVar7 = *(char *)(lVar18 + 0x41);
              if (*(char *)(lVar18 + 0x41) == '\x03') {
                cVar7 = '\x02';
              }
              puVar10[0xe] = local_1f0;
              *(char *)(puVar10 + 0xf) = cVar7;
              puVar10[0x10] = local_220;
              puVar10[0x11] = DAT_14c9c0de0;
              puVar10[0x12] = local_1e8;
              puVar10[0x13] = CONCAT44(iVar14,iVar22 - (int)local_1e8);
              *(float *)(puVar10 + 0x14) = (fVar29 + -0.5) * (1.0 / (float)iVar13);
              *(float *)((longlong)puVar10 + 0xa4) = (fVar30 + -0.5) * (1.0 / (float)(int)uVar11);
              *(undefined4 *)(puVar10 + 0x15) = 0;
              FUN_145e7e0ee();
              local_188 = (undefined8 *)0x0;
              uStack_180 = 0;
              FUN_1448f70da(CONCAT44(uStack_154,local_158),&DAT_14c9b8148,local_240,&local_188);
              FUN_145f7044e();
              local_188 = (undefined8 *)0x0;
              uStack_180 = 0;
              FUN_1448f70da(local_228,&DAT_14c9b81d0,local_238,&local_188);
              uVar23 = local_138;
              local_198 = local_158;
              uStack_194 = uStack_154;
              uStack_190 = uStack_150;
              uStack_18c = uStack_14c;
              local_238 = (undefined8 *)local_130;
              FUN_1471411ee();
              lVar18 = local_1d0;
              FUN_140069376(local_1d0);
              puVar5 = local_250;
              puVar10 = (undefined8 *)(*(longlong *)(lVar18 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar12 = puVar10 + 0x42;
              if (*(undefined8 **)(lVar18 + 0x78) < puVar12) {
                FUN_140023dd8(local_250,0x218);
                puVar10 = (undefined8 *)(*puVar5 + 7 & 0xfffffffffffffff8);
                puVar12 = puVar10 + 0x42;
              }
              *local_250 = (ulonglong)puVar12;
              local_188 = local_240;
              uStack_180 = DAT_14c9bffe0;
              if (DAT_14c9bffe0 != 0) {
                LOCK();
                *(int *)(DAT_14c9bffe0 + 8) = *(int *)(DAT_14c9bffe0 + 8) + 1;
                UNLOCK();
              }
              local_178 = &DAT_14c9bff98;
              local_2d8 = (int *)CONCAT71(local_2d8._1_7_,2);
              FUN_140068f1a(puVar10,&local_199,&local_188,1);
              *puVar10 = &PTR_FUN_14a1f6550;
              puVar10[0x37] = local_240;
              *(undefined4 *)(puVar10 + 0x38) = local_198;
              *(undefined4 *)((longlong)puVar10 + 0x1c4) = uStack_194;
              *(undefined4 *)(puVar10 + 0x39) = uStack_190;
              *(undefined4 *)((longlong)puVar10 + 0x1cc) = uStack_18c;
              puVar10[0x3a] = local_228;
              puVar10[0x3b] = local_230;
              puVar10[0x3c] = lVar16;
              puVar10[0x3d] = local_220;
              *(int *)(puVar10 + 0x3e) = (int)local_248;
              *(ulonglong *)((longlong)puVar10 + 500) = local_1e0;
              *(undefined8 *)((longlong)puVar10 + 0x1fc) = uVar23;
              *(undefined8 **)((longlong)puVar10 + 0x204) = local_238;
              iVar22 = *(int *)(lVar18 + 0x170);
              *(uint *)(lVar18 + 0x170) = iVar22 + 1U;
              if (*(uint *)(lVar18 + 0x174) < iVar22 + 1U) {
                FUN_14470e57a(local_1b8,iVar22);
              }
              *(undefined8 **)(*(longlong *)(lVar18 + 0x168) + (longlong)iVar22 * 8) = puVar10;
              *(int *)((longlong)puVar10 + 0x2c) = *(int *)(lVar18 + 0x170) + -1;
              FUN_140069100(lVar18,puVar10);
              if (*(int *)((longlong)puVar1 + 0x17c) != local_214) goto LAB_142b828ff;
            }
          }
          lVar26 = lVar26 + 1;
        } while (lVar26 < *(int *)(param_1 + 0x3f0));
        if (local_d0 != (undefined1 **)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b8374c FUN_142b8374c body=4926 status=ok
// SIG undefined FUN_142b8374c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_142b8374c(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,int *param_5,
             int *param_6,int *param_7)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  void *pvVar4;
  char cVar5;
  int *piVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  float fVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  undefined8 *puVar22;
  longlong lVar23;
  int *_Dst;
  float fVar24;
  uint uVar25;
  ulonglong unaff_R15;
  undefined7 uVar26;
  bool bVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auStack_208 [32];
  int *local_1e8;
  ulonglong local_1e0;
  undefined1 local_1d8;
  longlong *local_1c8;
  longlong local_1c0;
  undefined8 *local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  int local_184;
  undefined1 *local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_138;
  longlong lStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [4];
  float local_104;
  float local_100;
  float local_fc;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_148 = *(undefined8 *)(param_4 + 0x1040);
  local_158 = *(undefined8 *)(param_4 + 0x1030);
  uStack_150 = *(undefined8 *)(param_4 + 0x1038);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_1b8 = param_1;
  fVar28 = cosf(DAT_14c760128);
  if (param_3 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = *(longlong *)(param_3 + 0x3608);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b8268) && (FUN_144b3d300(&DAT_14c9b8268), DAT_14c9b8268 == -1)) {
    DAT_14c9b8258 = (int *)0x0;
    _DAT_14c9b8260 = 0;
    atexit((_func_5014 *)&LAB_142b8f6eb);
    _Init_thread_footer(&DAT_14c9b8268);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b8280) && (FUN_144b3d300(&DAT_14c9b8280), DAT_14c9b8280 == -1)) {
    DAT_14c9b8270 = (void *)0x0;
    _DAT_14c9b8278 = 0;
    atexit((_func_5014 *)&LAB_142b8f6fc);
    _Init_thread_footer(&DAT_14c9b8280);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b82a0) && (FUN_144b3d300(&DAT_14c9b82a0), DAT_14c9b82a0 == -1)) {
    DAT_14c9b8290 = (int *)0x0;
    _DAT_14c9b8298 = 0x100000000;
    atexit((_func_5014 *)&LAB_142b8f70d);
    _Init_thread_footer(&DAT_14c9b82a0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9b82b8) && (FUN_144b3d300(&DAT_14c9b82b8), DAT_14c9b82b8 == -1)) {
    DAT_14c9b82a8 = (void *)0x0;
    _DAT_14c9b82b0 = 0;
    atexit((_func_5014 *)&LAB_142b8f71e);
    _Init_thread_footer(&DAT_14c9b82b8);
  }
  bVar27 = (longlong)_DAT_14c9b8260 < 0;
  _DAT_14c9b8260 = _DAT_14c9b8260 & 0xffffffff00000000;
  if (bVar27) {
    FUN_147139a70();
  }
  bVar27 = (longlong)_DAT_14c9b8298 < 0;
  _DAT_14c9b8298 = _DAT_14c9b8298 & 0xffffffff00000000;
  if (bVar27) {
    FUN_1448aa092(&DAT_14c9b8288,0);
  }
  bVar27 = (longlong)_DAT_14c9b8278 < 0;
  _DAT_14c9b8278 = _DAT_14c9b8278 & 0xffffffff00000000;
  if (bVar27) {
    FUN_14499148c(&DAT_14c9b8270,0);
  }
  bVar27 = (longlong)_DAT_14c9b82b0 < 0;
  _DAT_14c9b82b0 = _DAT_14c9b82b0 & 0xffffffff00000000;
  if (bVar27) {
    FUN_14499148c(&DAT_14c9b82a8,0);
  }
  if (param_3 != 0) {
    if (0 < *(int *)(param_3 + 0x3f00)) {
      uVar26 = (undefined7)(unaff_R15 >> 8);
      if (*(int *)(*(longlong *)(param_3 + 0x3eb8) + 8) < 3) {
        unaff_R15 = CONCAT71(uVar26,1);
        if (0 < *(int *)(param_3 + 0x3bf0)) goto LAB_142b8396d;
      }
      else {
        unaff_R15 = CONCAT71(uVar26,1);
        if (*(longlong *)(param_3 + 0x3c00) != 0) goto LAB_142b8396d;
      }
    }
    if (*(longlong *)(param_3 + 0x3608) != 0) {
      unaff_R15 = CONCAT71((int7)(unaff_R15 >> 8),
                           *(undefined1 *)(*(longlong *)(param_3 + 0x3608) + 0xf8));
      goto LAB_142b8396d;
    }
  }
  unaff_R15 = 0;
LAB_142b8396d:
  uVar7 = unaff_R15;
  local_1c0 = param_2;
  local_1b0 = param_4;
  local_1a8 = param_3;
  if (0 < *(int *)(param_4 + 0x13848)) {
    local_1c8 = (longlong *)(lVar15 + 0x30);
    local_190 = (undefined8 *)(lVar15 + 0x60);
    local_198 = (undefined8 *)(lVar15 + 0x90);
    lVar14 = 0;
    local_1a0 = (undefined8 *)CONCAT44(local_1a0._4_4_,(int)unaff_R15);
    do {
      lVar23 = *(longlong *)(*(longlong *)(param_4 + 0x13840) + lVar14 * 8);
      if ((char)uVar7 == '\0') {
        lVar13 = *(longlong *)(lVar23 + 0xb8);
        if (lVar15 == 0) {
LAB_142b83a7d:
          fVar29 = 0.0;
          fVar40 = 0.0;
          fVar38 = 1.0;
          fVar39 = 0.19634955;
          if (lVar13 != 0) {
            local_138 = *(longlong *)(lVar13 + 0x140);
            lStack_130 = *(longlong *)(lVar13 + 0x148);
            local_128 = *(undefined8 *)(lVar13 + 0x150);
            uStack_120 = *(undefined8 *)(lVar13 + 0x158);
            local_118 = *(undefined8 *)(lVar13 + 0x160);
            uStack_110 = *(undefined8 *)(lVar13 + 0x168);
LAB_142b83c42:
            FUN_1471398a2(&local_138,local_108);
            dVar31 = (double)local_100;
            dVar33 = (double)-local_104;
            dVar35 = (double)-local_fc;
            dVar37 = dVar31 * dVar31 + dVar35 * dVar35 + dVar33 * dVar33;
            if (((dVar37 != 1.0) || (dVar36 = dVar35, dVar32 = dVar31, dVar34 = dVar33, NAN(dVar37))
                ) && (dVar36 = DAT_14c8464e0, dVar32 = DAT_14c8464f0, dVar34 = DAT_14c8464e8,
                     9.99999993922529e-09 <= dVar37)) {
              dVar37 = 1.0 / SQRT(dVar37);
              dVar36 = dVar35 * dVar37;
              dVar32 = dVar31 * dVar37;
              dVar34 = dVar33 * dVar37;
            }
            fVar38 = (float)dVar32;
            fVar40 = (float)dVar34;
            fVar29 = (float)dVar36;
            fVar39 = DAT_14c76012c;
          }
        }
        else {
          if ((*(byte *)(lVar15 + 0x20) & 6) == 0) {
            if ((*(byte *)(*(longlong *)(param_4 + 8) + 0x5b) & 0x20) == 0) goto LAB_142b83a7d;
            local_138 = *local_1c8;
            lStack_130 = local_1c8[1];
            local_128 = *local_190;
            uStack_120 = local_190[1];
            local_118 = *local_198;
            uStack_110 = local_198[1];
            goto LAB_142b83c42;
          }
          if ((((*(byte *)(lVar15 + 0x20) & 6) != 2) ||
              ((*(byte *)(*(longlong *)(param_4 + 8) + 0x5b) & 0x20) == 0)) || (lVar13 == 0))
          goto LAB_142b83a7d;
          fVar29 = (DAT_14c760134 * 3.1415927) / 180.0;
          fVar39 = *(float *)(lVar13 + 0x1cc) * DAT_14c760130 * 0.5 * 3.1415927;
          if (fVar39 <= fVar29) {
            fVar39 = fVar29;
          }
          fVar29 = *(float *)(lVar13 + 0x1c0);
          fVar40 = *(float *)(lVar13 + 0x1c4);
          fVar38 = *(float *)(lVar13 + 0x1c8);
        }
        if (1.0 <= fVar28 || (unaff_R15 & 1) != 0) goto LAB_142b83b05;
        fVar30 = ((-fVar38 - fVar28) + (-fVar38 - fVar28)) / (1.0 - fVar28);
        if (1.0 <= fVar30) {
          fVar30 = 1.0;
        }
        if (fVar30 <= 0.0) {
          fVar30 = 0.0;
        }
        if (fVar30 < 1.0) goto LAB_142b83b05;
      }
      else {
        lVar13 = *(longlong *)(lVar23 + 8);
        fVar38 = (float)*(double *)(lVar13 + 400);
        fVar40 = (float)*(double *)(lVar13 + 0x188);
        fVar29 = (float)*(double *)(lVar13 + 0x180);
        fVar39 = 0.0;
LAB_142b83b05:
        iVar20 = DAT_14c9b8260;
        iVar17 = DAT_14c9b8298;
        local_138 = 0;
        lStack_130 = 0;
        puVar8 = &local_138;
        FUN_1472ab3b2(lVar23);
        uVar10 = SUB84(puVar8,0);
        if (0 < (int)lStack_130) {
          lVar13 = 0;
          do {
            lVar1 = *(longlong *)(local_138 + lVar13 * 8);
            plVar2 = *(longlong **)(lVar1 + 8);
            if ((*(byte *)(plVar2 + 0xe) & 1) != 0) {
              local_168 = local_148;
              local_178 = local_158;
              uStack_170 = uStack_150;
              puVar8 = &local_178;
              (**(code **)(*plVar2 + 0x48))(plVar2,puVar8,&DAT_14c9b8258);
              cVar5 = (**(code **)(**(longlong **)(lVar1 + 8) + 0x198))();
              if (cVar5 != '\0') {
                FUN_147139940(lVar1 + 0xd8);
              }
            }
            uVar10 = SUB84(puVar8,0);
            lVar13 = lVar13 + 1;
          } while (lVar13 < (int)lStack_130);
        }
        fVar30 = ABS(fVar39);
        if ((uint)fVar30 < 0x47800000) {
          if ((uint)fVar30 < 0x38800000) {
            fVar30 = fVar30 + 0.5;
          }
          else {
            fVar30 = (float)((int)fVar30 + 0x8000fff + (uint)(((uint)fVar30 >> 0xd & 1) != 0) >> 0xd
                            );
          }
        }
        else {
          fVar30 = (float)((0x7f800000 < (uint)fVar30 | 0x3e) << 9);
        }
        uVar25 = *(uint *)(*(longlong *)(lVar23 + 8) + 0xb0);
        fVar9 = (float)(uVar25 & DAT_1499319a0);
        if ((uint)fVar9 < 0x47800000) {
          if ((uint)fVar9 < 0x38800000) {
            fVar24 = fVar9 + 0.5;
          }
          else {
            fVar9 = (float)((int)fVar9 + 0x8000fff + (uint)(((uint)fVar9 >> 0xd & 1) != 0) >> 0xd);
            fVar24 = fVar9;
          }
        }
        else {
          fVar24 = (float)((0x7f800000 < (uint)fVar9 | 0x3e) << 9);
        }
        uVar18 = movmskps(fVar9,ZEXT416((uint)fVar39));
        iVar11 = movmskps(uVar10,ZEXT416(uVar25));
        uVar25 = (int)fVar24 << 0x10 | (uint)fVar30 & 0xffff | (uVar18 & 1) << 0xf | iVar11 << 0x1f;
        for (; uVar7 = _DAT_14c9b8278, iVar20 < DAT_14c9b8260; iVar20 = iVar20 + 1) {
          lVar23 = (longlong)DAT_14c9b8278;
          uVar18 = DAT_14c9b8278 + 1;
          _DAT_14c9b8278 = CONCAT44(DAT_14c9b827c,uVar18);
          if (DAT_14c9b827c < uVar18) {
            FUN_1449e2712(&DAT_14c9b8270,uVar7 & 0xffffffff);
          }
          pvVar4 = DAT_14c9b8270;
          lVar23 = lVar23 * 0x10;
          *(float *)((longlong)DAT_14c9b8270 + lVar23) = fVar29;
          *(float *)((longlong)pvVar4 + lVar23 + 4) = fVar40;
          *(float *)((longlong)pvVar4 + lVar23 + 8) = fVar38;
          *(uint *)((longlong)pvVar4 + lVar23 + 0xc) = uVar25;
        }
        if (iVar17 < DAT_14c9b8298) {
          do {
            uVar7 = _DAT_14c9b82b0;
            lVar23 = (longlong)DAT_14c9b82b0;
            uVar18 = DAT_14c9b82b0 + 1;
            _DAT_14c9b82b0 = CONCAT44(DAT_14c9b82b4,uVar18);
            if (DAT_14c9b82b4 < uVar18) {
              FUN_1449e2712(&DAT_14c9b82a8,uVar7 & 0xffffffff);
            }
            pvVar4 = DAT_14c9b82a8;
            lVar23 = lVar23 * 0x10;
            *(float *)((longlong)DAT_14c9b82a8 + lVar23) = fVar29;
            *(float *)((longlong)pvVar4 + lVar23 + 4) = fVar40;
            *(float *)((longlong)pvVar4 + lVar23 + 8) = fVar38;
            *(uint *)((longlong)pvVar4 + lVar23 + 0xc) = uVar25;
            iVar17 = iVar17 + 1;
          } while (iVar17 < DAT_14c9b8298);
        }
        *param_6 = *param_6 + 1;
        FUN_140046324(&local_138);
        uVar7 = (ulonglong)local_1a0 & 0xffffffff;
        param_4 = local_1b0;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < *(int *)(param_4 + 0x13848));
  }
  lVar15 = local_1c0;
  if (0 < DAT_14c9b8298 || 0 < DAT_14c9b8260) {
    if (0 < DAT_14c9b8260) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9bff90) && (FUN_144b3d300(&DAT_14c9bff90), DAT_14c9bff90 == -1))
      {
        _Init_thread_footer(&DAT_14c9bff90);
      }
      uVar19 = _DAT_14c9b8260 & 0xffffffff;
      local_1d8 = DAT_14c9b8260 == 0;
      if ((bool)local_1d8) {
        local_1e8 = (int *)&DAT_14c9bff70;
        local_1e0 = 0x20;
        uVar19 = 1;
      }
      else {
        local_1e0 = (ulonglong)(uint)(DAT_14c9b8260 << 5);
        local_1e8 = DAT_14c9b8258;
      }
      lVar14 = FUN_144942e63(lVar15,L"IndirectShadowCapsuleShapesVertexBuffer",0x20,uVar19);
      cVar5 = *(char *)(lVar14 + 0x68);
      puVar16 = (undefined8 *)(*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar16 + 9;
      if (*(undefined8 **)(lVar15 + 0x78) < puVar8) {
        FUN_140023dd8((longlong *)(lVar15 + 0x70),0x50);
        puVar16 = (undefined8 *)(*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar16 + 9;
      }
      *(undefined8 **)(lVar15 + 0x70) = puVar8;
      puVar16[1] = *(undefined8 *)(lVar14 + 8);
      puVar16[2] = 0;
      *(undefined1 *)(puVar16 + 3) = 3;
      *(undefined8 *)((longlong)puVar16 + 0x1c) = 0xffffffffffffffff;
      *puVar16 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar16 + 5) = cVar5 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar16 + 0x2c) = 0xffffffff00000000;
      puVar16[7] = 0;
      puVar16[8] = lVar14;
      iVar20 = *(int *)(lVar15 + 0x1a0);
      *(uint *)(lVar15 + 0x1a0) = iVar20 + 1U;
      if (*(uint *)(lVar15 + 0x1a4) < iVar20 + 1U) {
        FUN_1447568fc(lVar15 + 0x198,iVar20);
      }
      *(undefined8 **)(*(longlong *)(lVar15 + 0x198) + (longlong)iVar20 * 8) = puVar16;
      *(int *)((longlong)puVar16 + 0x1c) = *(int *)(lVar15 + 0x1a0) + -1;
      *local_1b8 = puVar16;
    }
    if (0 < DAT_14c9b8298) {
      local_1e0 = (ulonglong)(uint)(DAT_14c9b8298 * 4);
      local_1e8 = (int *)&DAT_14c9b8288;
      if (DAT_14c9b8290 != (int *)0x0) {
        local_1e8 = DAT_14c9b8290;
      }
      local_1d8 = 0;
      lVar14 = FUN_144942e63(lVar15,L"IndirectShadowMeshDistanceFieldCasterIndicesVertexBuffer",4);
      cVar5 = *(char *)(lVar14 + 0x68);
      puVar16 = (undefined8 *)(*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar16 + 9;
      if (*(undefined8 **)(lVar15 + 0x78) < puVar8) {
        FUN_140023dd8((longlong *)(lVar15 + 0x70),0x50);
        puVar16 = (undefined8 *)(*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar16 + 9;
      }
      *(undefined8 **)(lVar15 + 0x70) = puVar8;
      puVar16[1] = *(undefined8 *)(lVar14 + 8);
      puVar16[2] = 0;
      *(undefined1 *)(puVar16 + 3) = 3;
      *(undefined8 *)((longlong)puVar16 + 0x1c) = 0xffffffffffffffff;
      *puVar16 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar16 + 5) = cVar5 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar16 + 0x2c) = 0xffffffff00000000;
      puVar16[7] = 0;
      puVar16[8] = lVar14;
      iVar20 = *(int *)(lVar15 + 0x1a0);
      *(uint *)(lVar15 + 0x1a0) = iVar20 + 1U;
      if (*(uint *)(lVar15 + 0x1a4) < iVar20 + 1U) {
        FUN_1447568fc(lVar15 + 0x198,iVar20);
      }
      *(undefined8 **)(*(longlong *)(lVar15 + 0x198) + (longlong)iVar20 * 8) = puVar16;
      *(int *)((longlong)puVar16 + 0x1c) = *(int *)(lVar15 + 0x1a0) + -1;
      local_1b8[1] = puVar16;
    }
    uVar25 = DAT_14c9b82b0 + DAT_14c9b8278;
    uVar19 = (ulonglong)uVar25;
    uVar21 = DAT_14c9b8278 << 4;
    uVar18 = DAT_14c9b82b0 << 4;
    local_1c8 = (longlong *)(lVar15 + 0x70);
    _Dst = (int *)(*(longlong *)(lVar15 + 0x70) + 0xfU & 0xfffffffffffffff0);
    piVar6 = _Dst + uVar19 * 4;
    if (*(int **)(lVar15 + 0x78) < piVar6) {
      FUN_140023dd8(local_1c8,uVar25 * 0x10 + 0x10);
      _Dst = (int *)(*local_1c8 + 0xfU & 0xfffffffffffffff0);
      piVar6 = _Dst + uVar19 * 4;
    }
    *local_1c8 = (longlong)piVar6;
    memcpy(_Dst,DAT_14c9b8270,(ulonglong)uVar21);
    memcpy((undefined *)((ulonglong)uVar21 + (longlong)_Dst),DAT_14c9b82a8,(ulonglong)uVar18);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9b82d0) && (FUN_144b3d300(&DAT_14c9b82d0), DAT_14c9b82d0 == -1)) {
      _DAT_14c9b82c0 = 0;
      uRam000000014c9b82c8 = 0x3f80000000000000;
      _Init_thread_footer(&DAT_14c9b82d0);
    }
    if (uVar25 == 0) {
      local_1e8 = (int *)&DAT_14c9b82c0;
      local_1e0 = 0x10;
      uVar19 = 1;
    }
    else {
      local_1e0 = (ulonglong)(int)(uVar25 * 0x10);
      local_1e8 = _Dst;
    }
    local_1d8 = 1;
    lVar14 = FUN_144942e63(lVar15,L"IndirectShadowLightDirectionVertexBuffer",0x10,uVar19);
    plVar2 = local_1c8;
    cVar5 = *(char *)(lVar14 + 0x68);
    puVar16 = (undefined8 *)(*(longlong *)(lVar15 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar16 + 9;
    if (*(undefined8 **)(lVar15 + 0x78) < puVar8) {
      FUN_140023dd8(local_1c8,0x50);
      puVar16 = (undefined8 *)(*plVar2 + 7U & 0xfffffffffffffff8);
      puVar8 = puVar16 + 9;
    }
    lVar23 = lVar15 + 0x198;
    *(undefined8 **)(lVar15 + 0x70) = puVar8;
    puVar16[1] = *(undefined8 *)(lVar14 + 8);
    puVar16[2] = 0;
    *(undefined1 *)(puVar16 + 3) = 3;
    *(undefined8 *)((longlong)puVar16 + 0x1c) = 0xffffffffffffffff;
    *puVar16 = &PTR_FUN_14a1fb168;
    *(byte *)(puVar16 + 5) = cVar5 >> 7 & 0x1c;
    *(undefined8 *)((longlong)puVar16 + 0x2c) = 0xffffffff00000000;
    puVar16[7] = 0;
    puVar16[8] = lVar14;
    iVar20 = *(int *)(lVar15 + 0x1a0);
    *(uint *)(lVar15 + 0x1a0) = iVar20 + 1U;
    if (*(uint *)(lVar15 + 0x1a4) < iVar20 + 1U) {
      FUN_1447568fc(lVar23,iVar20);
    }
    lVar14 = local_1c0;
    plVar2 = local_1c8;
    *(undefined8 **)(*(longlong *)(lVar15 + 0x198) + (longlong)iVar20 * 8) = puVar16;
    *(int *)((longlong)puVar16 + 0x1c) = *(int *)(lVar15 + 0x1a0) + -1;
    local_1b8[2] = puVar16;
    if ((char)uVar7 != '\0') {
      uVar18 = 0x10;
      if (DAT_14ca84e48 < 0x10) {
        uVar18 = DAT_14ca84e48;
      }
      lStack_130 = CONCAT44(lStack_130._4_4_,0x10109);
      uVar21 = DAT_14ca84e48;
      if (uVar25 < DAT_14ca84e48) {
        uVar21 = uVar25;
      }
      local_128 = 0;
      local_138 = CONCAT44(uVar21 + (uVar21 == 0),uVar18 + (uVar18 == 0));
      uVar19 = *(longlong *)(local_1c0 + 0x70) + 0xfU & 0xfffffffffffffff0;
      uVar7 = uVar19 + 0x150;
      if (*(ulonglong *)(local_1c0 + 0x78) < uVar7) {
        FUN_140023dd8(local_1c8,0x160);
        uVar19 = *plVar2 + 0xfU & 0xfffffffffffffff0;
        uVar7 = uVar19 + 0x150;
      }
      *(ulonglong *)(lVar14 + 0x70) = uVar7;
      FUN_1456bd266(uVar19,L"IndirectShadowVolumetricLightmapDerivedLightDirection",&local_138,0);
      iVar20 = *(int *)(lVar14 + 400);
      *(uint *)(lVar14 + 400) = iVar20 + 1U;
      if (*(uint *)(lVar14 + 0x194) < iVar20 + 1U) {
        FUN_144737178(lVar14 + 0x188,iVar20);
      }
      plVar2 = local_1c8;
      *(ulonglong *)(*(longlong *)(lVar14 + 0x188) + (longlong)iVar20 * 8) = uVar19;
      *(int *)(uVar19 + 0x7c) = *(int *)(lVar14 + 400) + -1;
      cVar5 = *(char *)(uVar19 + 0x68);
      puVar12 = (undefined8 *)(*(longlong *)(lVar14 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar12 + 8;
      if (*(undefined8 **)(lVar14 + 0x78) < puVar8) {
        FUN_140023dd8(local_1c8,0x48);
        puVar12 = (undefined8 *)(*plVar2 + 7U & 0xfffffffffffffff8);
        puVar8 = puVar12 + 8;
      }
      *(undefined8 **)(lVar14 + 0x70) = puVar8;
      puVar12[1] = *(undefined8 *)(uVar19 + 8);
      puVar12[2] = 0;
      *(undefined1 *)(puVar12 + 3) = 2;
      *(undefined8 *)((longlong)puVar12 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar12 + 5) = 0;
      *puVar12 = &PTR_FUN_14a1fb3e8;
      *(byte *)(puVar12 + 6) = cVar5 >> 7 & 0x1c;
      *(undefined2 *)((longlong)puVar12 + 0x31) = 0;
      puVar12[7] = uVar19;
      iVar20 = *(int *)(lVar14 + 0x1a0);
      *(uint *)(lVar14 + 0x1a0) = iVar20 + 1U;
      if (*(uint *)(lVar14 + 0x1a4) < iVar20 + 1U) {
        FUN_1447568fc(lVar23,iVar20);
      }
      plVar2 = local_1c8;
      *(undefined8 **)(*(longlong *)(lVar14 + 0x198) + (longlong)iVar20 * 8) = puVar12;
      *(int *)((longlong)puVar12 + 0x1c) = *(int *)(lVar14 + 0x1a0) + -1;
      cVar5 = *(char *)(uVar19 + 0x68);
      puVar22 = (undefined8 *)(*(longlong *)(lVar14 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar8 = puVar22 + 9;
      local_1a0 = puVar12;
      if (*(undefined8 **)(lVar14 + 0x78) < puVar8) {
        FUN_140023dd8(local_1c8,0x50);
        puVar22 = (undefined8 *)(*plVar2 + 7U & 0xfffffffffffffff8);
        puVar8 = puVar22 + 9;
      }
      *(undefined8 **)(lVar14 + 0x70) = puVar8;
      puVar22[1] = *(undefined8 *)(uVar19 + 8);
      puVar22[2] = 0;
      *(undefined1 *)(puVar22 + 3) = 3;
      *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
      *puVar22 = &PTR_FUN_14a1fb168;
      *(byte *)(puVar22 + 5) = cVar5 >> 7 & 0x1c;
      *(undefined8 *)((longlong)puVar22 + 0x2c) = 0xffffffff00000000;
      puVar22[7] = 0;
      puVar22[8] = uVar19;
      iVar20 = *(int *)(lVar14 + 0x1a0);
      *(uint *)(lVar14 + 0x1a0) = iVar20 + 1U;
      if (*(uint *)(lVar14 + 0x1a4) < iVar20 + 1U) {
        FUN_1447568fc(lVar23,iVar20);
      }
      *(undefined8 **)(*(longlong *)(lVar14 + 0x198) + (longlong)iVar20 * 8) = puVar22;
      *(int *)((longlong)puVar22 + 0x1c) = *(int *)(lVar14 + 0x1a0) + -1;
      local_1b8[2] = puVar22;
      uVar3 = *(undefined8 *)(local_1b0 + 0x13818);
      FUN_145e7d910();
      FUN_1448e935e(uVar3,&local_138,&DAT_14c9b6510,0);
      FUN_145e7d910();
      plVar2 = local_1c8;
      lVar15 = *(longlong *)(local_1a8 + 0x3608);
      uVar18 = 0;
      if (lVar15 != 0) {
        uVar18 = 2;
        if (*(char *)(lVar15 + 0xf8) == '\0') {
          uVar18 = *(uint *)(lVar15 + 0x20) >> 1 & 1;
        }
      }
      iVar20 = uVar25 + 0x7e;
      if (-1 < (int)(uVar25 + 0x3f)) {
        iVar20 = uVar25 + 0x3f;
      }
      puVar12 = (undefined8 *)(*(longlong *)(local_1c0 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar8 = puVar12 + 10;
      if (*(undefined8 **)(local_1c0 + 0x78) < puVar8) {
        FUN_140023dd8(local_1c8,0x60);
        puVar12 = (undefined8 *)(*plVar2 + 0xfU & 0xfffffffffffffff0);
        puVar8 = puVar12 + 10;
      }
      lVar15 = local_1c0;
      *(undefined8 **)(local_1c0 + 0x70) = puVar8;
      *puVar12 = &PTR_FUN_14a1f5690;
      puVar12[2] = 0;
      *(undefined1 *)(puVar12 + 3) = 1;
      puVar12[7] = 0;
      puVar12[8] = 0;
      iVar17 = *(int *)(local_1c0 + 0xa0);
      *(uint *)(local_1c0 + 0xa0) = iVar17 + 1U;
      if (*(uint *)(local_1c0 + 0xa4) < iVar17 + 1U) {
        FUN_1448cfae8(local_1c0 + 0x98,iVar17);
      }
      *(undefined8 **)(*(longlong *)(lVar15 + 0x98) + (longlong)iVar17 * 8) = puVar12;
      lVar14 = FUN_1447e4f80();
      cVar5 = '\x02';
      if (*(char *)(lVar14 + 0x41) != '\x03') {
        cVar5 = *(char *)(lVar14 + 0x41);
      }
      puVar12[2] = *(undefined8 *)(local_1b0 + 0x18);
      *(char *)(puVar12 + 3) = cVar5;
      *(uint *)(puVar12 + 4) = uVar25;
      *(uint *)((longlong)puVar12 + 0x24) = uVar18;
      *(float *)(puVar12 + 5) = DAT_14c76012c;
      *(float *)((longlong)puVar12 + 0x2c) = DAT_14c760130;
      *(float *)(puVar12 + 6) = DAT_14c760134;
      puVar12[8] = local_1a0;
      puVar12[7] = puVar16;
      local_1e8 = &local_184;
      local_180 = &DAT_100000001;
      local_184 = iVar20 >> 6;
      FUN_1471399bd(lVar15,local_108,&local_138,puVar12 + 2);
    }
  }
  *param_5 = DAT_14c9b8260;
  *param_7 = DAT_14c9b8298;
  if ((local_f0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_1b8;
}



// FUNCTION 142b84a8c FUN_142b84a8c body=99 status=ok
// SIG undefined FUN_142b84a8c(void)

int * FUN_142b84a8c(longlong param_1)

{
  ushort uVar1;
  char cVar2;
  ulonglong uVar3;
  int *piVar4;
  
  piVar4 = (int *)0x0;
  if ((DAT_14c76011c != 0) && (DAT_14c76013c != 0)) {
    uVar1 = *(ushort *)(param_1 + 0x8a8);
    if (((&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] == 1) &&
       ((cVar2 = FUN_147430715(), cVar2 == '\0' ||
        (piVar4 = &DAT_14ca814b8 + (ulonglong)uVar1 * 0xf, *piVar4 == 1)))) {
      return (int *)0x0;
    }
    uVar3 = CONCAT71((int7)((ulonglong)piVar4 >> 8),*(undefined1 *)(param_1 + 0xe9)) &
            0xffffffffffffff02;
    piVar4 = (int *)CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 1);
  }
  return piVar4;
}



// FUNCTION 142b84af0 FUN_142b84af0 body=1698 status=ok
// SIG undefined FUN_142b84af0(void)

void FUN_142b84af0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  char cVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStack_1d8 [32];
  int *local_1b8;
  undefined4 *local_1b0;
  double *local_1a8;
  undefined8 local_1a0;
  undefined8 *local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 local_180;
  longlong local_178;
  undefined4 local_170;
  int local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined1 local_129;
  undefined4 local_128;
  int local_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong *local_108;
  ulonglong local_100;
  undefined4 *local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  int local_dc;
  uint local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  double local_c0;
  double local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (((((DAT_14c76011c != 0) && (DAT_14c76013c != 0)) &&
       ((uVar2 = *(ushort *)(param_1 + 0x8a8), (&DAT_14ca814b8)[(ulonglong)uVar2 * 0xf] != 1 ||
        ((cVar10 = FUN_147430715(), cVar10 != '\0' &&
         ((&DAT_14ca814b8)[(ulonglong)uVar2 * 0xf] != 1)))))) &&
      ((*(byte *)(param_1 + 0xe9) & 2) != 0)) &&
     ((0 < *(int *)(param_3 + 0x13848) && (*(longlong *)(param_3 + 0x3108) != 0)))) {
    puVar6 = *(ulonglong **)(param_2 + 0x18);
    iVar3 = *(int *)((longlong)puVar6 + 0x17c);
    if (iVar3 != *(int *)(param_3 + 0x1de0)) {
      *(int *)((longlong)puVar6 + 0x17c) = *(int *)(param_3 + 0x1de0);
      puVar11 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar11 + 3;
      if ((undefined8 *)puVar6[1] < puVar12) {
        FUN_140023dd8(puVar6,0x20);
        puVar11 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar11 + 3;
      }
      *puVar6 = (ulonglong)puVar12;
      *(int *)(puVar6 + 0xc) = (int)puVar6[0xc] + 1;
      *(undefined8 **)puVar6[6] = puVar11;
      puVar6[6] = (ulonglong)(puVar11 + 1);
      uVar4 = *(undefined4 *)((longlong)puVar6 + 0x17c);
      puVar11[1] = 0;
      *puVar11 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar11 + 2) = uVar4;
    }
    local_78 = 0;
    local_1b0 = (undefined4 *)0x0;
    local_1b8 = (int *)CONCAT71(local_1b8._1_7_,10);
    FUN_1417608dc(param_2,param_3,&local_78,L"CapsuleBentNormal");
    local_1b8 = &local_7c;
    local_7c = 0;
    local_1b0 = &local_80;
    local_80 = 0;
    local_1a8 = (double *)&local_84;
    FUN_142b8374c(&local_a0,param_2,*(undefined8 *)(param_1 + 8),param_3);
    local_84 = 0;
    if (0 < local_7c) {
      local_b0 = *(undefined8 *)(param_3 + 0x30f8);
      local_a8 = *(undefined8 *)(param_3 + 0x3100);
      iVar13 = ((int)local_a8 - (int)local_b0) / 2;
      iVar5 = iVar13 + 7;
      iVar13 = iVar13 + 0xe;
      if (-1 < iVar5) {
        iVar13 = iVar5;
      }
      iVar14 = ((int)((ulonglong)local_a8 >> 0x20) - (int)((ulonglong)local_b0 >> 0x20)) / 2;
      iVar5 = iVar14 + 7;
      iVar14 = iVar14 + 0xe;
      if (-1 < iVar5) {
        iVar14 = iVar5;
      }
      plVar1 = (longlong *)(param_2 + 0x70);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar12 = puVar11 + 0x40;
      local_108 = plVar1;
      if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
        FUN_140023dd8(plVar1,0x210);
        puVar11 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
        puVar12 = puVar11 + 0x40;
      }
      local_100 = (ulonglong)(uint)(iVar13 >> 3);
      uVar15 = iVar14 >> 3;
      *(undefined8 **)(param_2 + 0x70) = puVar12;
      *puVar11 = &PTR_FUN_14a1f63f0;
      local_e8 = puVar11 + 2;
      FUN_147140cc2();
      iVar5 = *(int *)(param_2 + 0xa0);
      *(uint *)(param_2 + 0xa0) = iVar5 + 1U;
      if (*(uint *)(param_2 + 0xa4) < iVar5 + 1U) {
        FUN_1448cfae8(param_2 + 0x98,iVar5);
      }
      lVar9 = local_78;
      plVar1 = local_108;
      *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar5 * 8) = puVar11;
      uVar4 = DAT_14c760124;
      local_b8 = (double)uVar15;
      local_f0 = *(undefined8 *)(param_1 + 8);
      uVar8 = (undefined4)local_100;
      local_c0 = (double)(local_100 & 0xffffffff);
      local_f8 = (undefined4 *)*param_5;
      local_129 = *(undefined1 *)(local_78 + 0x94);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar12 = puVar11 + 9;
      local_158 = local_84;
      local_168 = local_7c;
      if (*(undefined8 **)(param_2 + 0x78) < puVar12) {
        local_110 = local_a0;
        local_118 = local_90;
        local_124 = local_7c;
        local_120 = local_98;
        local_128 = local_84;
        FUN_140023dd8(local_108,0x50);
        puVar11 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
        puVar12 = puVar11 + 9;
        local_a0 = local_110;
        local_90 = local_118;
        local_98 = local_120;
        local_158 = local_128;
        local_168 = local_124;
      }
      *(undefined8 **)(param_2 + 0x70) = puVar12;
      puVar11[1] = *(undefined8 *)(lVar9 + 8);
      puVar11[2] = 0;
      *(undefined1 *)(puVar11 + 3) = 0;
      *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar11 + 5) = 0;
      *puVar11 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(puVar11 + 6) = local_129;
      *(undefined1 *)(puVar11 + 7) = 0;
      *(undefined4 *)((longlong)puVar11 + 0x31) = 0;
      *(undefined2 *)((longlong)puVar11 + 0x35) = 0;
      puVar11[8] = lVar9;
      iVar5 = *(int *)(param_2 + 0x1a0);
      *(uint *)(param_2 + 0x1a0) = iVar5 + 1U;
      local_160 = local_a0;
      local_148 = local_90;
      local_150 = local_98;
      if (*(uint *)(param_2 + 0x1a4) < iVar5 + 1U) {
        local_128 = local_158;
        local_124 = local_168;
        local_120 = local_98;
        local_118 = local_90;
        local_110 = local_a0;
        FUN_1447568fc(param_2 + 0x198,iVar5);
        local_160 = local_110;
        local_148 = local_118;
        local_150 = local_120;
        local_158 = local_128;
        local_168 = local_124;
      }
      puVar12 = local_e8;
      *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar5 * 8) = puVar11;
      *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
      local_1b8 = (int *)CONCAT44(uVar15,uVar8);
      local_140 = 0;
      local_180 = local_f0;
      local_188 = uVar4;
      local_198 = &local_b0;
      local_1a0 = 0;
      local_1a8 = &local_c0;
      local_1b0 = local_f8;
      local_170 = 0;
      local_190 = 2;
      local_178 = param_3;
      FUN_147134584(param_2,local_e8,3,puVar11);
      uVar7 = *(undefined8 *)(param_3 + 0x13818);
      FUN_145f3cbce();
      FUN_1448e935e(uVar7,&local_70,&DAT_14c9b6638,3);
      FUN_145f3cbce();
      local_d0 = local_70;
      uStack_cc = uStack_6c;
      uStack_c8 = uStack_68;
      uStack_c4 = uStack_64;
      local_1b8 = &local_dc;
      local_dc = (int)local_100;
      local_d4 = 1;
      local_d8 = uVar15;
      FUN_1471349d5(param_2,&local_70,&local_d0,puVar12);
      *param_5 = local_78;
    }
    if (*(int *)((longlong)puVar6 + 0x17c) != iVar3) {
      *(int *)((longlong)puVar6 + 0x17c) = iVar3;
      puVar11 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
      puVar12 = puVar11 + 3;
      if ((undefined8 *)puVar6[1] < puVar12) {
        FUN_140023dd8(puVar6,0x20);
        puVar11 = (undefined8 *)(*puVar6 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar11 + 3;
      }
      *puVar6 = (ulonglong)puVar12;
      *(int *)(puVar6 + 0xc) = (int)puVar6[0xc] + 1;
      *(undefined8 **)puVar6[6] = puVar11;
      puVar6[6] = (ulonglong)(puVar11 + 1);
      uVar4 = *(undefined4 *)((longlong)puVar6 + 0x17c);
      puVar11[1] = 0;
      *puVar11 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar11 + 2) = uVar4;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b85193 FUN_142b85193 body=69 status=ok
// SIG undefined FUN_142b85193(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b85193(void)

{
  _DAT_14c9b6950 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b851d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9b6958,1);
  return;
}



// FUNCTION 142b851e4 FUN_142b851e4 body=293 status=ok
// SIG undefined FUN_142b851e4(void)

undefined8 FUN_142b851e4(ushort *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  ulonglong uVar8;
  int iVar9;
  
  lVar4 = DAT_14ca97170;
  iVar1 = *(int *)(param_1 + 2);
  iVar9 = iVar1 + 3;
  if (-1 < iVar1) {
    iVar9 = iVar1;
  }
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar2 = *(int *)(lVar3 + 0xc60);
  if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
    uVar8 = 0;
  }
  else if (iVar2 == 1) {
    DVar6 = FUN_140ad26c0();
    DVar7 = GetCurrentThreadId();
    uVar8 = (ulonglong)(DVar6 != DVar7);
  }
  else {
    uVar8 = 1;
  }
  lVar5 = DAT_14ca97170;
  if ((0 < *(int *)(lVar4 + uVar8 * 4)) || ((iVar9 >> 2 & 3U) == 0)) {
    iVar9 = iVar1 + 0x3f;
    if (-1 < iVar1) {
      iVar9 = iVar1;
    }
    iVar1 = *(int *)(lVar3 + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar8 = 0;
    }
    else if (iVar1 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar8 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar8 = 1;
    }
    if ((*(int *)(lVar5 + uVar8 * 4) < 1) || ((iVar9 >> 6 & 0x80000001U) != 1)) {
      return CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                      2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]);
    }
  }
  return 0;
}



// FUNCTION 142b85316 FUN_142b85316 body=1137 status=ok
// SIG undefined FUN_142b85316(void)

void FUN_142b85316(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  
  if ((0 < *(int *)(param_4 + 4)) && (iVar3 = *(int *)(param_1 + 0x3f0), 0 < (longlong)iVar3)) {
    lVar1 = param_1 + 0x5b0;
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    lVar14 = 0;
    uVar11 = 0;
    do {
      lVar13 = DAT_14ca97170;
      lVar8 = *(longlong *)(param_1 + 1000);
      iVar4 = *(int *)(lVar5 + 0xc60);
      if (((iVar4 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar4 == 2)) {
        uVar10 = 0;
      }
      else if (iVar4 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        uVar10 = (ulonglong)(DVar6 != DVar7);
      }
      else {
        uVar10 = 1;
      }
      lVar2 = lVar8 + lVar14;
      if (*(int *)(lVar13 + uVar10 * 4) < 1) {
        FUN_142b85787(param_2,uVar11 & 0xffffffff,lVar2,param_3,param_4,0,9,param_7,param_5,lVar1,0,
                      0);
        lVar13 = 0;
      }
      else {
        lVar13 = *(longlong *)(param_1 + 8) + 0x5168;
        FUN_142b85787(param_2,uVar11 & 0xffffffff,lVar2,param_3,param_4,1,3,param_7,param_5,lVar1,0,
                      lVar13);
        FUN_142b85787(param_2,uVar11 & 0xffffffff,lVar2,param_3,param_4,1,2,param_7,param_5,lVar1,0,
                      lVar13);
        FUN_142b85787(param_2,uVar11 & 0xffffffff,lVar2,param_3,param_4,1,1,param_7,param_5,lVar1,0,
                      lVar13);
        FUN_142b85787(param_2,uVar11 & 0xffffffff,lVar2,param_3,param_4,1,0,param_7,param_5,lVar1,0,
                      lVar13);
      }
      if (*(char *)(lVar8 + 0x11a08 + lVar14) == '\x01') {
        lVar8 = FUN_142c60d6d(param_2,lVar2,uVar11 & 0xffffffff,param_6,lVar1);
        puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar12 + 9;
        if (*(undefined8 **)(param_2 + 0x78) < puVar9) {
          FUN_140023dd8((longlong *)(param_2 + 0x70),0x50);
          puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar9 = puVar12 + 9;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar9;
        puVar12[1] = *(undefined8 *)(lVar8 + 8);
        puVar12[2] = 0;
        *(undefined1 *)(puVar12 + 3) = 3;
        *(undefined8 *)((longlong)puVar12 + 0x1c) = 0xffffffffffffffff;
        *puVar12 = &PTR_FUN_14a1fb168;
        *(undefined1 *)(puVar12 + 5) = 0x1c;
        *(undefined8 *)((longlong)puVar12 + 0x2c) = 0xffffffff00000000;
        puVar12[7] = 0;
        puVar12[8] = lVar8;
        iVar4 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar4 + 1U;
        if (*(uint *)(param_2 + 0x1a4) < iVar4 + 1U) {
          FUN_1447568fc(param_2 + 0x198,iVar4);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar4 * 8) = puVar12;
        *(int *)((longlong)puVar12 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        FUN_142b85787(param_2,uVar11 & 0xffffffff,lVar2,param_3,param_4,2,9,param_7,param_6,lVar1,
                      puVar12,lVar13);
      }
      uVar11 = uVar11 + 1;
      lVar14 = lVar14 + 0x13c10;
    } while ((longlong)iVar3 != uVar11);
  }
  return;
}



// FUNCTION 142b85787 FUN_142b85787 body=2328 status=ok
// SIG undefined FUN_142b85787(void)

void FUN_142b85787(longlong param_1,undefined4 param_2,longlong param_3,longlong param_4,
                  longlong param_5,char param_6,undefined4 param_7,longlong param_8,longlong param_9
                  ,undefined8 param_10,undefined8 param_11,longlong param_12)

{
  ulonglong *puVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  char cVar9;
  undefined4 uVar10;
  DWORD DVar11;
  DWORD DVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  undefined1 auStack_178 [32];
  undefined4 *local_158;
  undefined1 local_149;
  ulonglong *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  int *local_138;
  undefined4 local_12c;
  uint local_128;
  int local_124;
  longlong local_120;
  longlong local_118;
  undefined8 *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e1;
  undefined4 local_e0;
  undefined2 local_db;
  undefined1 local_d9;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  ulonglong local_48;
  
  lVar6 = DAT_14ca97170;
  local_118 = param_12;
  local_f8 = param_10;
  local_108 = param_9;
  local_100 = param_8;
  local_13c = param_7;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_f0 = *(undefined8 *)(param_4 + 0x20);
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar3 = *(int *)(lVar14 + 0xc60);
  local_12c = param_2;
  local_120 = param_4;
  if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
    uVar17 = 0;
  }
  else if (iVar3 == 1) {
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    uVar17 = (ulonglong)(DVar11 != DVar12);
  }
  else {
    uVar17 = 1;
  }
  lVar7 = DAT_14ca97170;
  lVar4 = *(longlong *)(param_3 + 0x11f90);
  if (lVar4 == 0) {
    local_140 = 0;
  }
  else {
    uVar13 = CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar4 + 0xc)) &
             0xffffffffffffff02;
    local_140 = (undefined4)CONCAT71((int7)(uVar13 >> 8),(byte)uVar13 >> 1);
  }
  local_138 = (int *)(lVar14 + 0xc60);
  local_124 = *(int *)(lVar6 + uVar17 * 4);
  local_149 = *(undefined1 *)(param_5 + 0x10);
  local_128 = 0;
  if ((2 < (longlong)*(int *)(param_3 + 0x3090)) && (DAT_14c9ac460 != 0)) {
    if ((*(byte *)((longlong)&DAT_14ca814d0 +
                  (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2)
                  * 0x3c) & 4) != 0) {
      iVar3 = *local_138;
      if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
        uVar17 = 0;
      }
      else if (iVar3 == 1) {
        uVar10 = FUN_140ad26c0();
        local_148 = (ulonglong *)CONCAT44(local_148._4_4_,uVar10);
        DVar11 = GetCurrentThreadId();
        uVar17 = (ulonglong)((DWORD)local_148 != DVar11);
      }
      else {
        uVar17 = 1;
      }
      lVar14 = DAT_14ca97170;
      if (*(int *)(lVar7 + uVar17 * 4) < 1) {
        uVar2 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2);
        puVar18 = &DAT_14ca96aa8;
        if (DAT_14ca96af8 != (undefined4 *)0x0) {
          puVar18 = DAT_14ca96af8;
        }
        if (((uint)puVar18[uVar2 >> 5] >> (uVar2 & 0x1f) & 1) == 0) {
          bVar5 = false;
        }
        else {
          bVar5 = 2 < (int)(&DAT_14ca814b8)[(ulonglong)uVar2 * 0xf];
        }
        local_128 = 0;
        if ((!bVar5) && (*(longlong *)(param_3 + 0x23e0) == 0)) {
          if ((((*(byte *)(param_3 + 0x125b0) & 2) == 0) && (*(char *)(param_3 + 0x30c8) == '\0'))
             && ((((*(char *)(param_3 + 0x23f2) == '\0' && (*(char *)(param_3 + 0x23f5) != '\x01'))
                  || (*(int *)(param_3 + 0x1dd0) != 2)) && (0 < *(int *)(param_3 + 0x569c))))) {
            iVar3 = *local_138;
            if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
              uVar17 = 0;
            }
            else if (iVar3 == 1) {
              DVar11 = FUN_140ad26c0();
              DVar12 = GetCurrentThreadId();
              uVar17 = (ulonglong)(DVar11 != DVar12);
            }
            else {
              uVar17 = 1;
            }
            local_128 = (uint)(*(int *)(lVar14 + uVar17 * 4) < 1);
          }
          else {
            local_128 = 0;
          }
        }
        goto LAB_142b85a05;
      }
    }
    local_128 = 0;
  }
LAB_142b85a05:
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar16 = puVar19 + 0x4c;
  local_148 = puVar1;
  if (*(undefined8 **)(param_1 + 0x78) < puVar16) {
    FUN_140023dd8(puVar1,0x270);
    puVar19 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar16 = puVar19 + 0x4c;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar16;
  *puVar19 = &PTR_FUN_14a1f56e0;
  local_110 = puVar19 + 2;
  FUN_14713a2b2();
  iVar3 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar19;
  *(uint *)(puVar19 + 2) = (uint)*(byte *)(param_5 + 0x12);
  lVar14 = FUN_1447e4f80();
  cVar9 = *(char *)(lVar14 + 0x41);
  if (*(char *)(lVar14 + 0x41) == '\x03') {
    cVar9 = '\x02';
  }
  puVar19[6] = *(undefined8 *)(param_3 + 0x18);
  *(char *)(puVar19 + 7) = cVar9;
  uVar15 = *(undefined8 *)(param_3 + 0x11a00);
  lVar14 = FUN_144a81af4();
  cVar9 = *(char *)(lVar14 + 0x41);
  if (cVar9 == '\x03') {
    cVar9 = '\x02';
  }
  puVar19[0xc] = uVar15;
  *(char *)(puVar19 + 0xd) = cVar9;
  uVar15 = *(undefined8 *)(param_3 + 0x13780);
  lVar14 = FUN_144a12b9e();
  cVar9 = *(char *)(lVar14 + 0x41);
  if (cVar9 == '\x03') {
    cVar9 = '\x02';
  }
  puVar19[4] = uVar15;
  *(char *)(puVar19 + 5) = cVar9;
  uVar15 = *(undefined8 *)(local_120 + 0x198);
  lVar14 = FUN_14482e3b2();
  cVar9 = *(char *)(lVar14 + 0x41);
  if (cVar9 == '\x03') {
    cVar9 = '\x02';
  }
  puVar19[0x10] = uVar15;
  *(char *)(puVar19 + 0x11) = cVar9;
  lVar14 = local_108;
  if (local_108 == 0) {
    lVar14 = FUN_14476842e(param_1,&DAT_14ca63c00,L"ZeroUIntDummy",2);
  }
  puVar19[0x14] = lVar14;
  lVar14 = local_100;
  if (local_100 == 0) {
    lVar14 = FUN_14476842e(param_1,&DAT_14ca63c00,L"ZeroUIntDummy",2);
  }
  puVar19[0x15] = lVar14;
  FUN_144abaa06(local_f8,&local_d8,param_1,local_12c);
  *(undefined4 *)(puVar19 + 0x16) = (undefined4)local_d8;
  *(undefined4 *)((longlong)puVar19 + 0xb4) = local_d8._4_4_;
  *(undefined4 *)(puVar19 + 0x17) = (undefined4)uStack_d0;
  *(undefined4 *)((longlong)puVar19 + 0xbc) = uStack_d0._4_4_;
  puVar19[0x2a] = param_11;
  uVar15 = *(undefined8 *)(param_3 + 0x118d0);
  lVar14 = FUN_144a2c9be();
  cVar9 = *(char *)(lVar14 + 0x41);
  if (*(char *)(lVar14 + 0x41) == '\x03') {
    cVar9 = '\x02';
  }
  puVar19[0xe] = uVar15;
  *(char *)(puVar19 + 0xf) = cVar9;
  uVar15 = FUN_1403e6082(param_1,param_3);
  lVar14 = FUN_1449863e6();
  cVar9 = *(char *)(lVar14 + 0x41);
  if (cVar9 == '\x03') {
    cVar9 = '\x02';
  }
  puVar19[0x12] = uVar15;
  *(char *)(puVar19 + 0x13) = cVar9;
  FUN_1472ea582(param_1,param_3 + 0x13870,puVar19 + 8);
  puVar19[0x2c] = *(undefined8 *)(local_120 + 0x1b0);
  puVar19[0x2d] = 0;
  *(undefined4 *)(puVar19 + 0x2e) = 0xffff0001;
  if (param_6 == '\x02') {
    puVar19[0x2c] = *(undefined8 *)(param_3 + 0x11b60);
    puVar19[0x2d] = 0;
    *(undefined4 *)(puVar19 + 0x2e) = 0xffff0001;
  }
  lVar14 = DAT_14ca97170;
  iVar3 = *local_138;
  if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
    uVar17 = 0;
  }
  else if (iVar3 == 1) {
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    uVar17 = (ulonglong)(DVar11 != DVar12);
  }
  else {
    uVar17 = 1;
  }
  lVar6 = DAT_14ca971d0;
  if (0 < *(int *)(lVar14 + uVar17 * 4)) {
    iVar3 = *local_138;
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar17 = 0;
    }
    else if (iVar3 == 1) {
      DVar11 = FUN_140ad26c0();
      DVar12 = GetCurrentThreadId();
      uVar17 = (ulonglong)(DVar11 != DVar12);
    }
    else {
      uVar17 = 1;
    }
    if (0 < *(int *)(lVar6 + uVar17 * 4)) {
      puVar19[0x2f] = *(undefined8 *)(local_118 + 0x88);
      puVar19[0x30] = 0;
      *(undefined4 *)(puVar19 + 0x31) = 0xffff0001;
      puVar19[0x32] = *(undefined8 *)(local_118 + 0x80);
      puVar19[0x33] = 0;
      *(undefined4 *)(puVar19 + 0x34) = 0xffff0001;
    }
  }
  lVar14 = DAT_14ca97170;
  local_e0 = 0;
  iVar3 = *local_138;
  if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
    uVar17 = 0;
  }
  else if (iVar3 == 1) {
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    uVar17 = (ulonglong)(DVar11 != DVar12);
  }
  else {
    uVar17 = 1;
  }
  uVar10 = 0;
  if (0 < *(int *)(lVar14 + uVar17 * 4)) {
    local_158 = &local_e0;
    FUN_14731799c(&local_d8,param_1,param_3,local_13c);
    memcpy(puVar19 + 0x18,&local_d8,0x90);
    uVar10 = local_e0;
  }
  bVar5 = 0 < local_124;
  FUN_145cf3cce();
  FUN_140069376(param_1);
  puVar1 = local_148;
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar16 = puVar19 + 0x3c;
  if (*(undefined8 **)(param_1 + 0x78) < puVar16) {
    FUN_140023dd8(local_148,0x1e8);
    puVar19 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar16 = puVar19 + 0x3c;
  }
  puVar8 = local_110;
  *local_148 = (ulonglong)puVar16;
  local_d8 = local_110;
  uStack_d0 = DAT_14c9b83a8;
  if (DAT_14c9b83a8 != 0) {
    LOCK();
    *(int *)(DAT_14c9b83a8 + 8) = *(int *)(DAT_14c9b83a8 + 8) + 1;
    UNLOCK();
  }
  local_c8 = &DAT_14c9b8360;
  local_158 = (undefined4 *)CONCAT71(local_158._1_7_,2);
  FUN_140068f1a(puVar19,&local_e1,&local_d8,1);
  *puVar19 = &PTR_FUN_14a1f56f0;
  puVar19[0x37] = puVar8;
  puVar19[0x38] = param_3;
  puVar19[0x39] = local_f0;
  *(undefined1 *)(puVar19 + 0x3a) = local_149;
  *(char *)((longlong)puVar19 + 0x1d1) = (char)local_140;
  *(bool *)((longlong)puVar19 + 0x1d2) = param_6 == '\x02';
  *(bool *)((longlong)puVar19 + 0x1d3) = bVar5 && param_6 != '\x02';
  *(char *)((longlong)puVar19 + 0x1d4) = (char)local_128;
  *(undefined2 *)((longlong)puVar19 + 0x1d5) = local_db;
  *(undefined1 *)((longlong)puVar19 + 0x1d7) = local_d9;
  *(undefined4 *)(puVar19 + 0x3b) = local_13c;
  *(undefined4 *)((longlong)puVar19 + 0x1dc) = uVar10;
  iVar3 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar3 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar3 * 8) = puVar19;
  *(int *)((longlong)puVar19 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_140069100(param_1,puVar19);
  return;
}



// FUNCTION 142b860a0 FUN_142b860a0 body=69 status=ok
// SIG undefined FUN_142b860a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b860a0(void)

{
  _DAT_14c9b6bb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b860e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9b6bb8,1);
  return;
}



// FUNCTION 142b860e5 FUN_142b860e5 body=69 status=ok
// SIG undefined FUN_142b860e5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b860e5(void)

{
  _DAT_14c9b6bc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b86127. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9b6bd0,1);
  return;
}



// FUNCTION 142b8612a FUN_142b8612a body=69 status=ok
// SIG undefined FUN_142b8612a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b8612a(void)

{
  _DAT_14c9b6be0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b8616c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9b6be8,1);
  return;
}



// FUNCTION 142b8616f FUN_142b8616f body=69 status=ok
// SIG undefined FUN_142b8616f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b8616f(void)

{
  _DAT_14c9b6bf8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b861b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9b6c00,1);
  return;
}



// FUNCTION 142b861b4 FUN_142b861b4 body=69 status=ok
// SIG undefined FUN_142b861b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b861b4(void)

{
  _DAT_14c9b6c10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b861f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9b6c18,1);
  return;
}



// FUNCTION 142b861f9 FUN_142b861f9 body=116 status=ok
// SIG undefined FUN_142b861f9(void)

undefined2 FUN_142b861f9(longlong param_1)

{
  ushort uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x2e98) == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x3090) * 2);
    uVar2 = (undefined1)(uVar1 >> 8);
    if ((&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] == 1) {
      uVar3 = CONCAT11(uVar2,DAT_14c760e14 & DAT_14ca964f0);
    }
    else {
      puVar4 = &DAT_14ca96aa8;
      if (DAT_14ca96af8 != (undefined4 *)0x0) {
        puVar4 = DAT_14ca96af8;
      }
      uVar3 = CONCAT11(uVar2,(int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3 ||
                             ((uint)puVar4[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0);
    }
  }
  return uVar3;
}



// FUNCTION 142b8626d FUN_142b8626d body=446 status=ok
// SIG undefined FUN_142b8626d(void)

undefined8 *
FUN_142b8626d(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined4 param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  float fVar10;
  undefined1 auStack_a8 [32];
  longlong local_88 [11];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1448e94e7(local_88,param_2,param_4);
  *param_1 = param_4;
  uVar1 = *(ulonglong *)(param_3 + 0x30f8);
  uVar2 = *(undefined8 *)(param_3 + 0x3100);
  param_1[1] = *(undefined8 *)(local_88[0] + 0x84);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  lVar3 = *(longlong *)(param_3 + 0x136f0);
  if (lVar3 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar3 + 0x84);
  }
  param_1[4] = lVar3;
  param_1[5] = 0;
  param_1[6] = uVar8;
  param_1[7] = local_88[0];
  param_1[8] = uVar1;
  param_1[9] = uVar2;
  param_1[10] = local_30;
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar2;
  fVar10 = *(float *)(DAT_14c9b6c50 + 4);
  if (0.0 <= fVar10) {
    if (*(float *)(param_3 + 0x2b14) <= fVar10) {
      fVar10 = *(float *)(param_3 + 0x2b14);
    }
  }
  else {
    fVar10 = -fVar10;
    if (100.0 <= fVar10) {
      fVar10 = 100.0;
    }
  }
  *(uint *)(param_1 + 0xf) =
       (uint)(5.0 < fVar10) + (uint)(25.0 < fVar10) + (uint)(55.0 < fVar10) + (uint)(75.0 < fVar10);
  uVar7 = (uint)(*(int *)(DAT_14c9b6bd8 + 4) < 1);
  iVar6 = 2 - uVar7;
  *(int *)((longlong)param_1 + 0x7c) = iVar6;
  *(undefined4 *)(param_1 + 0x10) = param_5;
  uVar7 = uVar7 ^ 1;
  uVar9 = (int)((int)((ulonglong)uVar2 >> 0x20) + uVar7) / iVar6;
  lVar3 = (longlong)(int)(uVar7 + (int)uVar2);
  uVar5 = lVar3 / (longlong)iVar6;
  uVar4 = uVar5 & 0xffffffff;
  if ((int)uVar5 < 2) {
    uVar4 = 1;
  }
  uVar5 = 1;
  if (1 < (int)uVar9) {
    uVar5 = (ulonglong)uVar9;
  }
  param_1[0xd] = (longlong)((ulonglong)(uint)((int)uVar1 >> 0x1f) << 0x20 | uVar1 & 0xffffffff) /
                 (longlong)iVar6 & 0xffffffffU |
                 (longlong)((ulonglong)(uint)((longlong)uVar1 >> 0x3f) << 0x20 | uVar1 >> 0x20) /
                 (longlong)iVar6 << 0x20;
  param_1[0xe] = uVar4 | uVar5 << 0x20;
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8,lVar3 % (longlong)iVar6 & 0xffffffff);
  }
  return param_1;
}



// FUNCTION 142b8642c FUN_142b8642c body=869 status=ok
// SIG undefined FUN_142b8642c(void)

longlong * FUN_142b8642c(longlong *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  byte bVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  int *piVar16;
  longlong lVar17;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar5 = *(undefined4 *)((longlong)param_2 + 4);
  lVar13 = param_2[1];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(int *)param_1 = (int)*param_2;
  *(undefined4 *)((longlong)param_1 + 4) = uVar5;
  *(int *)(param_1 + 1) = (int)lVar13;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
  lVar13 = *(longlong *)(*param_2 + 8);
  param_1[2] = lVar13;
  param_1[3] = param_3;
  puVar12 = &DAT_14ca96b08;
  if (DAT_14ca96b58 != (undefined4 *)0x0) {
    puVar12 = DAT_14ca96b58;
  }
  *(byte *)(param_1 + 4) =
       (byte)((uint)*(undefined4 *)(lVar13 + 0x48) >> 0x18) & 1 &
       ((uint)puVar12[*(ushort *)(param_3 + 0x1c) >> 5] >> (*(ushort *)(param_3 + 0x1c) & 0x1f) & 1)
       != 0;
  bVar11 = *(byte *)(lVar13 + 0x4b) & 1;
  *(byte *)((longlong)param_1 + 0x21) = bVar11;
  plVar15 = param_1 + 5;
  param_1[0x15] = 0;
  param_1[0x16] = 0x800000000;
  param_1[0x27] = 0;
  param_1[0x28] = 0x800000000;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  local_78 = *(longlong *)(lVar13 + 0x40);
  uVar1 = *(uint *)(param_1 + 1);
  if ((int)uVar1 < 1) {
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar1);
    }
  }
  else {
    *(uint *)(param_1 + 0x16) = uVar1;
    if (uVar1 < 9) {
      plVar8 = (longlong *)0x0;
    }
    else {
      FUN_1471416bc(plVar15,0);
      plVar8 = (longlong *)param_1[0x15];
    }
    if (plVar8 == (longlong *)0x0) {
      plVar8 = plVar15;
    }
    FUN_142b9b036(plVar8);
    bVar11 = *(byte *)((longlong)param_1 + 0x21);
  }
  plVar8 = param_1 + 0x17;
  local_88 = plVar8;
  if ((bVar11 & 1) != 0) {
    iVar2 = (int)param_1[1];
    iVar3 = (int)param_1[0x28];
    if (iVar3 < iVar2) {
      *(int *)(param_1 + 0x28) = iVar2;
      if ((uint)(*(int *)((longlong)param_1 + 0x144) - iVar3) < (uint)(iVar2 - iVar3)) {
        FUN_1471417c2(plVar8);
      }
      plVar8 = (longlong *)param_1[0x27];
      if ((longlong *)param_1[0x27] == (longlong *)0x0) {
        plVar8 = local_88;
      }
      memset(plVar8 + (longlong)iVar3 * 2,0,(longlong)(iVar2 - iVar3) << 4);
    }
    else {
      if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar2);
      }
      if (iVar2 < iVar3) {
        FUN_1471418c8(plVar8,iVar2,iVar3 - iVar2);
        FUN_147141938(plVar8);
      }
    }
  }
  if (0 < (int)param_1[1]) {
    local_70 = param_4 + 4;
    lVar17 = 0;
    lVar14 = 0;
    lVar13 = 0;
    local_80 = param_4;
    do {
      local_58 = CONCAT44(local_58._4_4_,(int)lVar13);
      pcVar4 = (code *)*param_4;
      plVar8 = (longlong *)param_4[2];
      if ((longlong *)param_4[2] == (longlong *)0x0) {
        plVar8 = local_70;
      }
      uVar9 = (**(code **)(*plVar8 + 8))();
      uVar7 = (*pcVar4)(uVar9,&local_58);
      plVar8 = (longlong *)param_1[0x15];
      if ((longlong *)param_1[0x15] == (longlong *)0x0) {
        plVar8 = plVar15;
      }
      *(undefined1 *)((longlong)plVar8 + lVar14 + 0xd) = uVar7;
      if (*(char *)((longlong)param_1 + 0x21) == '\x01') {
        local_68 = *(undefined8 *)(local_78 + 0x36f8);
        local_60 = *(undefined4 *)(local_78 + 0x3700);
        FUN_142ba98c7(&local_58,&local_68,*param_1 + lVar17);
        plVar8 = (longlong *)param_1[0x27];
        if ((longlong *)param_1[0x27] == (longlong *)0x0) {
          plVar8 = local_88;
        }
        if ((undefined8 *)((longlong)plVar8 + lVar14) != &local_58) {
          lVar10 = *(longlong *)((longlong)plVar8 + lVar14);
          if (lVar10 != 0) {
            piVar16 = (int *)((lVar10 + -8) - (ulonglong)*(uint *)(lVar10 + -8));
            LOCK();
            *piVar16 = *piVar16 + -1;
            UNLOCK();
            if (*piVar16 == 0) {
              if (*(longlong *)(piVar16 + 0x10) - (longlong)piVar16 == 0x10000) {
                lVar10 = DAT_14c872d30;
                if (DAT_14c872d30 == 0) {
                  lVar10 = FUN_145bdc178();
                }
                FUN_140028df4(lVar10,piVar16);
              }
              else {
                FUN_144705e74();
              }
            }
          }
          *(undefined8 *)((longlong)plVar8 + lVar14) = local_58;
          local_58 = 0;
          *(undefined4 *)((longlong)plVar8 + lVar14 + 8) = (undefined4)local_50;
          *(undefined4 *)((longlong)plVar8 + lVar14 + 0xc) = local_50._4_4_;
          local_50 = 0;
          param_4 = local_80;
        }
        FUN_1400b5938(&local_58);
      }
      lVar13 = lVar13 + 1;
      lVar14 = lVar14 + 0x10;
      lVar17 = lVar17 + 0x13c10;
    } while (lVar13 < (int)param_1[1]);
  }
  if (*param_4 != 0) {
    plVar15 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar15 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142b86794 FUN_142b86794 body=1320 status=ok
// SIG undefined FUN_142b86794(void)

void FUN_142b86794(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  ulonglong *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint *puVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  ulonglong local_180;
  undefined1 local_178;
  int local_164;
  ulonglong local_160;
  uint local_158;
  int local_154;
  longlong *local_150;
  ulonglong local_148;
  longlong local_140;
  int local_134;
  ulonglong local_130;
  longlong *local_128;
  undefined8 local_120;
  undefined8 *local_118;
  undefined1 local_110 [24];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 local_e0;
  undefined1 local_d8 [128];
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_140 = param_2;
  local_120 = param_3;
  local_118 = param_4;
  if (((*(byte *)(param_1[2] + 0x60) & 2) == 0) && (FUN_140de54fe(), 0 < (int)param_1[1])) {
    plVar12 = param_1 + 5;
    local_128 = param_1 + 0x17;
    lVar11 = 0;
    local_150 = plVar12;
    do {
      lVar16 = lVar11 * 0x13c10 + *param_1;
      plVar15 = (longlong *)param_1[0x15];
      if ((longlong *)param_1[0x15] == (longlong *)0x0) {
        plVar15 = plVar12;
      }
      iVar10 = (int)plVar15[lVar11 * 2 + 1];
      if (((char)param_1[4] != '\0') || (iVar10 == 1)) {
        puVar2 = *(ulonglong **)(local_140 + 0x18);
        local_134 = *(int *)((longlong)puVar2 + 0x17c);
        if (local_134 != *(int *)(lVar16 + 0x1de0)) {
          *(int *)((longlong)puVar2 + 0x17c) = *(int *)(lVar16 + 0x1de0);
          puVar4 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
          puVar9 = puVar4 + 3;
          if ((undefined8 *)puVar2[1] < puVar9) {
            FUN_140023dd8(puVar2,0x20);
            puVar4 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
            puVar9 = puVar4 + 3;
          }
          *puVar2 = (ulonglong)puVar9;
          *(int *)(puVar2 + 0xc) = (int)puVar2[0xc] + 1;
          *(undefined8 **)puVar2[6] = puVar4;
          puVar2[6] = (ulonglong)(puVar4 + 1);
          uVar1 = *(undefined4 *)((longlong)puVar2 + 0x17c);
          puVar4[1] = 0;
          *puVar4 = &PTR_FUN_14a1fb2c0;
          *(undefined4 *)(puVar4 + 2) = uVar1;
        }
        uVar5 = (ulonglong)DAT_14ca44da0;
        if (DAT_14ca44da0 != 0) {
          puVar7 = DAT_14ca44d98;
          if (DAT_14ca44d98 == (uint *)0x0) {
            puVar7 = &DAT_14ca44d88;
          }
          uVar3 = *puVar7;
          plVar12 = local_150;
          local_154 = iVar10;
          local_148 = uVar5;
          if (uVar3 == 0) {
            iVar8 = DAT_14ca44da0 + 0x1e;
            if (-1 < (int)(DAT_14ca44da0 - 1)) {
              iVar8 = DAT_14ca44da0 - 1;
            }
            local_160 = 0;
            uVar5 = (ulonglong)(uint)(iVar8 >> 5);
            if (iVar8 >> 5 < 1) {
              uVar5 = 0;
            }
            local_164 = 0;
            do {
              if (uVar5 == local_160) goto LAB_142b868d4;
              local_164 = local_164 + 0x20;
              uVar3 = puVar7[local_160 + 1];
              local_160 = local_160 + 1;
            } while (uVar3 == 0);
          }
          else {
            local_160 = 0;
            local_164 = 0;
          }
          local_130 = (ulonglong)(-uVar3 & uVar3);
          uVar5 = local_130 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          uVar3 = (local_164 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if ((int)uVar3 < (int)DAT_14ca44da0) {
            local_158 = 0xffffffff;
            do {
              plVar12 = *(longlong **)(DAT_14ca44d78 + (longlong)(int)uVar3 * 0x10);
              (**(code **)(*plVar12 + 0x10))(plVar12,lVar16,1);
              local_158 = ~(uint)local_130 & local_158;
              puVar7 = DAT_14ca44d98;
              if (DAT_14ca44d98 == (uint *)0x0) {
                puVar7 = &DAT_14ca44d88;
              }
              lVar14 = (longlong)(int)local_160;
              uVar3 = puVar7[lVar14] & local_158;
              if (uVar3 == 0) {
                iVar10 = DAT_14ca44da0 + 0x1e;
                if (-1 < (int)(DAT_14ca44da0 - 1)) {
                  iVar10 = DAT_14ca44da0 - 1;
                }
                iVar10 = iVar10 >> 5;
                local_164 = local_164 + 0x20;
                iVar8 = iVar10;
                if (iVar10 < (int)local_160) {
                  iVar8 = (int)local_160;
                }
                if ((int)local_160 < iVar10) {
                  lVar13 = 0;
                  do {
                    uVar3 = puVar7[lVar14 + lVar13 + 1];
                    if (uVar3 != 0) {
                      local_160 = (ulonglong)((int)local_160 + (int)lVar13 + 1);
                      local_158 = 0xffffffff;
                      goto LAB_142b86c1a;
                    }
                    local_164 = local_164 + 0x20;
                    lVar13 = lVar13 + 1;
                  } while (iVar8 - lVar14 != lVar13);
                  local_158 = 0xffffffff;
                  lVar14 = (longlong)iVar8;
                }
                local_160 = lVar14 + 1;
                uVar3 = DAT_14ca44da0;
              }
              else {
LAB_142b86c1a:
                local_130 = (ulonglong)(-uVar3 & uVar3);
                uVar5 = local_130 * 2 + 1;
                lVar14 = 0x3f;
                if (uVar5 != 0) {
                  for (; uVar5 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                  }
                }
                uVar3 = (local_164 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
                if ((int)DAT_14ca44da0 <= (int)uVar3) {
                  uVar3 = DAT_14ca44da0;
                }
              }
              plVar12 = local_150;
              iVar10 = local_154;
            } while (uVar3 != (uint)local_148);
          }
        }
LAB_142b868d4:
        lVar14 = local_140;
        if ((char)param_1[4] == '\x01') {
          local_188 = (undefined8 *)param_1[3];
          local_178 = 1;
          local_180 = local_120;
          FUN_14025015e(local_d8,local_140,lVar16,param_5);
          plVar12 = local_150;
          plVar6 = (longlong *)param_1[0x27];
          if ((longlong *)param_1[0x27] == (longlong *)0x0) {
            plVar6 = local_128;
          }
          local_58 = plVar6[lVar11 * 2];
          local_50 = (undefined4)plVar6[lVar11 * 2 + 1];
          local_180 = CONCAT71(local_180._1_7_,1);
          local_188 = local_118;
          FUN_142b86cbd(lVar14,lVar16,&local_58,local_d8);
        }
        lVar14 = local_140;
        if (iVar10 == 1) {
          local_180 = local_180 & 0xffffffffffffff00;
          local_188 = (undefined8 *)CONCAT44(local_188._4_4_,(int)plVar15[lVar11 * 2]);
          FUN_142b87158(local_d8,local_140,lVar16,*(undefined8 *)(param_1[3] + 0x198));
          plVar12 = local_150;
          local_f0 = *(undefined4 *)(lVar16 + 0x30f8);
          uStack_ec = *(undefined4 *)(lVar16 + 0x30fc);
          uStack_e8 = *(undefined4 *)(lVar16 + 0x3100);
          uStack_e4 = *(undefined4 *)(lVar16 + 0x3104);
          local_f8 = *(undefined8 *)(param_1[3] + 0x308);
          local_e0 = 0;
          local_188 = &local_f8;
          FUN_142b873fd(local_110,lVar14,lVar16,local_d8);
        }
        if (*(int *)((longlong)puVar2 + 0x17c) != local_134) {
          *(int *)((longlong)puVar2 + 0x17c) = local_134;
          puVar4 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
          puVar9 = puVar4 + 3;
          if ((undefined8 *)puVar2[1] < puVar9) {
            FUN_140023dd8(puVar2,0x20);
            puVar4 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
            puVar9 = puVar4 + 3;
          }
          *puVar2 = (ulonglong)puVar9;
          *(int *)(puVar2 + 0xc) = (int)puVar2[0xc] + 1;
          *(undefined8 **)puVar2[6] = puVar4;
          puVar2[6] = (ulonglong)(puVar4 + 1);
          uVar1 = *(undefined4 *)((longlong)puVar2 + 0x17c);
          puVar4[1] = 0;
          *puVar4 = &PTR_FUN_14a1fb2c0;
          *(undefined4 *)(puVar4 + 2) = uVar1;
        }
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_1[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b86cbd FUN_142b86cbd body=1178 status=ok
// SIG undefined FUN_142b86cbd(void)

void FUN_142b86cbd(longlong param_1,longlong param_2,undefined4 *param_3,longlong param_4,
                  undefined8 param_5,byte param_6)

{
  uint uVar1;
  longlong lVar2;
  ushort uVar3;
  byte bVar4;
  char cVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 **ppuVar10;
  byte bVar11;
  int iVar12;
  undefined8 unaff_R14;
  ulonglong uVar13;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  wchar_t *local_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined8 *local_e8;
  undefined4 local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined1 *local_c0;
  int *local_b8;
  ushort *local_b0;
  longlong **local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 local_8a;
  undefined1 local_89;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  int local_70;
  ushort local_6a;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  undefined7 uVar14;
  
  uVar14 = (undefined7)((ulonglong)unaff_R14 >> 8);
  uVar13 = CONCAT71(uVar14,param_6);
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(byte *)(*(longlong *)(param_2 + 8) + 0x4b) & 1) == 0) goto LAB_142b86cf4;
  local_108 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x40);
  local_70 = *(int *)(param_2 + 0x3090);
  local_6a = *(ushort *)(&DAT_14ca85070 + (longlong)local_70 * 2);
  local_78 = (longlong *)0x0;
  if (param_3[2] == 0) {
    iVar9 = 0;
  }
  else {
    puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar6 = puVar8 + 3;
    local_100 = param_4;
    if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
      FUN_140023dd8((longlong *)(param_1 + 0x70),0x28);
      puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar6 = puVar8 + 3;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar6;
    *puVar8 = &PTR_FUN_14a1f6a40;
    puVar8[1] = 0;
    puVar8[2] = 0;
    iVar9 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar9 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar9 + 1U) {
      FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar9);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar9 * 8) = puVar8;
    local_88 = *param_3;
    uStack_84 = param_3[1];
    uStack_80 = param_3[2];
    uStack_7c = param_3[3];
    local_78 = puVar8 + 1;
    FUN_142baaa75(&local_88,uVar13 & 0xffffffff,puVar8 + 1);
    iVar9 = (int)local_78[1];
    uVar13 = CONCAT71(uVar14,param_6);
    param_4 = local_100;
  }
  uVar3 = local_6a;
  bVar4 = FUN_142ba676b(uVar13 & 0xffffffff,param_2);
  local_98 = &local_89;
  local_89 = 0;
  local_8a = 0.0 <= *(float *)(DAT_14c9b7930 + 4);
  local_a0 = &local_8a;
  uVar1 = (&DAT_14ca814c8)[(ulonglong)uVar3 * 0xf];
  local_c0 = &param_6;
  local_b8 = &local_70;
  local_b0 = &local_6a;
  local_a8 = &local_78;
  local_d8 = param_1;
  local_d0 = param_2;
  local_c8 = param_4;
  if ((iVar9 == 0 & (bVar4 ^ 1)) == 0) {
    if ((bVar4 != 0) && ((byte)(((byte)uVar13 & 0xfb) - 1) < 2)) {
      local_110 = (wchar_t *)CONCAT71(local_110._1_7_,(byte)uVar13);
      local_118 = param_5;
      FUN_142ba67c5(param_1,local_108,param_2,param_4);
    }
    if (iVar9 != 0) {
      if (param_6 == 2) {
        bVar4 = (*(byte *)(*local_78 + 0x12) & 2) == 0 | 2;
      }
      else {
        bVar4 = param_6;
        switch(param_6) {
        case 1:
          break;
        default:
          bVar4 = 0;
          break;
        case 3:
        case 5:
          bVar4 = 4;
          break;
        case 4:
          bVar4 = 2;
          break;
        case 6:
          bVar4 = 5;
        }
      }
      iVar7 = 0;
      if (iVar9 != 1) {
        iVar7 = 0;
        iVar12 = 1;
        do {
          if (param_6 == 2) {
            bVar11 = (*(byte *)(*local_78 + 0x12 + (longlong)iVar12 * 0x30) & 2) == 0 | 2;
          }
          else {
            bVar11 = param_6;
            switch(param_6) {
            case 1:
              break;
            default:
              bVar11 = 0;
              break;
            case 3:
            case 5:
              bVar11 = 4;
              break;
            case 4:
              bVar11 = 2;
              break;
            case 6:
              bVar11 = 5;
            }
          }
          if (bVar4 != bVar11) {
            FUN_142b8d7de(&local_d8,iVar7,iVar12);
            bVar4 = bVar11;
            iVar7 = iVar12;
          }
          iVar12 = iVar12 + 1;
        } while (iVar9 != iVar12);
        if (iVar7 == iVar9) goto LAB_142b87011;
      }
      FUN_142b8d7de(&local_d8,iVar7,iVar9);
    }
  }
LAB_142b87011:
  if (((uVar1 >> 0x15 & 1) != 0) && (param_6 == 1)) {
    lVar2 = **(longlong **)(param_4 + 0x50);
    if ((((lVar2 != 0) && ((*(byte *)(lVar2 + 0x24) & 4) != 0)) ||
        ((lVar2 = (*(longlong **)(param_4 + 0x50))[4], lVar2 != 0 &&
         ((*(byte *)(lVar2 + 0x24) & 4) != 0)))) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 8) + 8) +
         (longlong)(*(int *)(*(longlong *)(param_2 + 8) + 0x10) + -1) * 8) == param_2)) {
      cVar5 = FUN_1401c8c05();
      if (cVar5 == '\0') {
        puVar6 = *(undefined8 **)(param_4 + 0x50);
        local_68 = *puVar6;
        local_f8 = &local_68;
        local_60 = puVar6[1];
        local_58 = puVar6[2];
        ppuVar10 = &local_f8;
        local_f0 = 3;
      }
      else {
        puVar6 = *(undefined8 **)(param_4 + 0x50);
        local_68 = *puVar6;
        local_e8 = &local_68;
        local_60 = puVar6[1];
        local_58 = puVar6[2];
        local_50 = puVar6[3];
        ppuVar10 = &local_e8;
        local_e0 = 4;
      }
      local_110 = L"DBufferMaskCombine";
      local_118 = DAT_14ca4af60;
      FUN_142fd112a(param_1,*(undefined8 *)(param_2 + 0x13818),ppuVar10,puVar6 + 7);
    }
  }
LAB_142b86cf4:
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b87158 FUN_142b87158 body=676 status=ok
// SIG undefined FUN_142b87158(void)

undefined8 *
FUN_142b87158(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined4 param_5,char param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  float fVar14;
  undefined1 auStack_b8 [32];
  longlong local_98 [5];
  undefined8 local_70;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1448e94e7(local_98,param_2,param_4);
  *(undefined8 *)((longlong)param_1 + 0x6c) = 4;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  *param_1 = param_4;
  uVar2 = *(undefined8 *)(param_3 + 0x30f8);
  uVar3 = *(undefined8 *)(param_3 + 0x3100);
  param_1[1] = *(undefined8 *)(local_98[0] + 0x84);
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  lVar8 = *(longlong *)(param_3 + 0x136f0);
  if (lVar8 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar8 + 0x84);
  }
  param_1[4] = lVar8;
  param_1[5] = 0;
  param_1[6] = uVar10;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  if (param_6 != '\0') {
    uVar10 = local_70;
    uVar11 = uVar2;
    uVar12 = uVar3;
  }
  param_1[7] = uVar10;
  param_1[8] = uVar11;
  param_1[9] = uVar12;
  param_1[10] = local_98[0];
  param_1[0xb] = uVar2;
  param_1[0xc] = uVar3;
  *(undefined4 *)(param_1 + 0xd) = param_5;
  fVar14 = *(float *)(DAT_14c9b6c50 + 4);
  if (0.0 <= fVar14) {
    if (*(float *)(param_3 + 0x2b14) <= fVar14) {
      fVar14 = *(float *)(param_3 + 0x2b14);
    }
  }
  else {
    fVar14 = -fVar14;
    if (100.0 <= fVar14) {
      fVar14 = 100.0;
    }
  }
  *(uint *)((longlong)param_1 + 0x6c) =
       (uint)(5.0 < fVar14) + (uint)(25.0 < fVar14) + (uint)(55.0 < fVar14) + (uint)(75.0 < fVar14);
  lVar8 = DAT_14c9b6c38;
  if (*(int *)(param_3 + 0x3090) < 3) {
    *(undefined4 *)(param_1 + 0xe) = 0;
  }
  else {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar1 = *(int *)(lVar4 + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      lVar8 = 0;
LAB_142b872fc:
      *(uint *)(param_1 + 0xe) = (uint)(0 < *(int *)(DAT_14c9b6c38 + lVar8 * 4));
    }
    else {
      if (iVar1 != 1) {
        lVar8 = 1;
        goto LAB_142b872fc;
      }
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      iVar1 = *(int *)(param_3 + 0x3090);
      *(uint *)(param_1 + 0xe) = (uint)(0 < *(int *)(lVar8 + (ulonglong)(DVar6 != DVar7) * 4));
      if (iVar1 < 3) goto LAB_142b873ab;
    }
    lVar8 = DAT_14c9b6c38;
    iVar1 = *(int *)(lVar4 + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar9 = 0;
    }
    else if (iVar1 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    if (0 < *(int *)(lVar8 + uVar9 * 4)) {
      bVar5 = FUN_140de5836(param_3,param_5);
      *(uint *)((longlong)param_1 + 0x74) = bVar5 + 1;
      bVar13 = false;
      if ((*(int *)(param_3 + 0x3020) != 2) && (*(int *)(param_3 + 0x3020) != 4)) {
        bVar13 = *(int *)(DAT_14c9b6bc0 + 4) != 0;
      }
      goto LAB_142b873b4;
    }
  }
LAB_142b873ab:
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  bVar13 = false;
LAB_142b873b4:
  *(bool *)(param_1 + 0xf) = bVar13;
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142b873fd FUN_142b873fd body=2088 status=ok
// SIG undefined FUN_142b873fd(void)

ulonglong *
FUN_142b873fd(ulonglong *param_1,longlong param_2,longlong param_3,longlong param_4,
             ulonglong *param_5)

{
  longlong *plVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  DWORD DVar8;
  DWORD DVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined1 auStack_2c8 [32];
  ulonglong *local_2a8;
  ulonglong *local_2a0;
  ulonglong *local_298;
  ulonglong *local_290;
  undefined4 local_288;
  undefined1 local_280;
  longlong local_278;
  undefined8 *local_270;
  int local_264;
  longlong *local_260;
  ulonglong *local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  ulonglong local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  ulonglong local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  ulonglong local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  ulonglong local_1c8;
  ulonglong local_1c0;
  ulonglong uStack_1b8;
  undefined1 local_1b0;
  undefined1 local_1a5;
  int local_1a4;
  int local_1a0;
  undefined4 local_19c;
  ulonglong local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  ulonglong uStack_100;
  ulonglong local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  int local_b4;
  int local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined2 local_a4;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_1d8 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1f8 = 0;
  local_208 = 0;
  uStack_200 = 0;
  if (1 < *(uint *)(param_4 + 0x68)) {
    local_220 = *(undefined8 *)(param_4 + 0x50);
    local_2a8 = &local_220;
    local_218 = *(undefined8 *)(param_4 + 0x58);
    local_210 = *(undefined8 *)(param_4 + 0x60);
    FUN_142b8a938(&local_d8,param_2,param_3,param_4);
    uVar6 = local_c8;
    uVar5 = uStack_d0;
    uVar13 = local_d8;
    local_1e8 = local_d8;
    uStack_1e0 = uStack_d0;
    local_1d8 = local_c8;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    if (2 < *(uint *)(param_4 + 0x68)) {
      local_2a8 = &local_238;
      local_238 = uVar13;
      local_230 = uVar5;
      local_228 = uVar6;
      FUN_142b8a938(&local_198,param_2,param_3,param_4);
      local_290 = (ulonglong *)(param_4 + 0x20);
      local_298 = &local_108;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      local_2a8 = &local_198;
      local_2a0 = &local_198;
      FUN_1410f3791(&local_1c8,param_2,param_3,param_4);
      local_d8 = local_1c8;
      uStack_d0 = local_1c0;
      local_c8 = uStack_1b8;
    }
    local_290 = (ulonglong *)(param_4 + 0x20);
    local_2a8 = &local_1e8;
    local_2a0 = local_2a8;
    local_298 = &local_d8;
    FUN_1410f3791(&local_198,param_2,param_3,param_4);
    local_208 = local_198;
    uStack_200 = CONCAT44(uStack_18c,local_190);
    local_1f8 = CONCAT44(uStack_184,uStack_188);
  }
  lVar14 = DAT_14ca97170;
  local_250 = *(undefined8 *)(param_4 + 0x38);
  local_248 = *(undefined8 *)(param_4 + 0x40);
  local_240 = *(undefined8 *)(param_4 + 0x48);
  iVar12 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  local_278 = param_2;
  if (((iVar12 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar12 == 2)) {
    uVar13 = 0;
  }
  else if (iVar12 == 1) {
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    uVar13 = (ulonglong)(DVar8 != DVar9);
  }
  else {
    uVar13 = 1;
  }
  if (0 < *(int *)(lVar14 + uVar13 * 4)) {
    local_250 = 0;
  }
  uVar13 = *param_5;
  uVar3 = param_5[1];
  uVar4 = param_5[2];
  if (*(char *)(param_4 + 0x78) == '\x01') {
    local_a6 = *(undefined1 *)(uVar13 + 0x92);
    local_a4 = *(undefined2 *)(uVar13 + 0x94);
    local_bc = *(undefined8 *)(uVar13 + 0x7c);
    local_ac = *(undefined4 *)(uVar13 + 0x8c);
    local_a8 = *(undefined1 *)(uVar13 + 0x90);
    local_d8 = (*(ulonglong *)(uVar13 + 0x60) & 0xfffffffff7fdeff8) +
               (ulonglong)(*(int *)(param_4 + 0x74) - 1U < 2) * 0x20000 + 1;
    local_a5 = 3;
    local_a7 = 1;
    uStack_d0 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
    local_c8 = CONCAT44(DAT_14ca85094,DAT_14ca85090);
    local_c0 = DAT_14ca85098;
    iVar12 = (int)*(undefined8 *)(uVar13 + 0x84);
    local_b4 = DAT_14ca84e40;
    if (iVar12 < DAT_14ca84e40) {
      local_b4 = iVar12;
    }
    if (local_b4 < 2) {
      local_b4 = 1;
    }
    iVar12 = (int)((ulonglong)*(undefined8 *)(uVar13 + 0x84) >> 0x20);
    local_b0 = DAT_14ca84e40;
    if (iVar12 < DAT_14ca84e40) {
      local_b0 = iVar12;
    }
    if (local_b0 < 2) {
      local_b0 = 1;
    }
    uVar18 = *(longlong *)(local_278 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar10 = uVar18 + 0x120;
    if (*(ulonglong *)(local_278 + 0x78) < uVar10) {
      plVar1 = (longlong *)(local_278 + 0x70);
      FUN_140023dd8(plVar1,0x128);
      uVar18 = *plVar1 + 7U & 0xfffffffffffffff8;
      uVar10 = uVar18 + 0x120;
    }
    *(ulonglong *)(local_278 + 0x70) = uVar10;
    FUN_1456bbb8c(uVar18,L"AmbientOcclusion",&local_d8,0);
    local_270 = (undefined8 *)(longlong)*(int *)(local_278 + 0x180);
    uVar7 = *(int *)(local_278 + 0x180) + 1;
    *(uint *)(local_278 + 0x180) = uVar7;
    if (*(uint *)(local_278 + 0x184) < uVar7) {
      FUN_14472c0f6(local_278 + 0x178,local_270);
    }
    *(ulonglong *)(*(longlong *)(local_278 + 0x178) + (longlong)local_270 * 8) = uVar18;
    *(int *)(uVar18 + 0x9c) = *(int *)(local_278 + 0x180) + -1;
    local_1b0 = 0;
  }
  else {
    local_1b0 = (undefined1)param_5[3];
    uVar18 = uVar13;
  }
  lVar14 = local_278;
  local_288 = *(undefined4 *)(param_4 + 0x74);
  local_290 = &local_1c8;
  local_2a0 = &local_208;
  local_2a8 = &local_1e8;
  local_280 = 0;
  local_298 = (ulonglong *)(param_4 + 0x20);
  local_1c8 = uVar18;
  local_1c0 = uVar3;
  uStack_1b8 = uVar4;
  FUN_1410f3a14(local_278,param_3,param_4,&local_250);
  if (*(char *)(param_4 + 0x78) == '\x01') {
    local_264 = *(int *)(param_4 + 0x74);
    local_108 = *(undefined8 *)(uVar18 + 0x84);
    local_120 = *(undefined8 *)(uVar13 + 0x84);
    local_118 = uVar3;
    local_110 = uVar4;
    uStack_100 = uVar3;
    local_f8 = uVar4;
    FUN_144a2c7c2(&local_d8);
    FUN_144a2c7c2(&local_198,&local_120);
    plVar1 = (longlong *)(lVar14 + 0x70);
    local_270 = (undefined8 *)(*(longlong *)(lVar14 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar11 = local_270 + 0x16;
    local_260 = plVar1;
    if (*(undefined8 **)(lVar14 + 0x78) < puVar11) {
      FUN_140023dd8(plVar1,0xc0);
      local_270 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
      puVar11 = local_270 + 0x16;
    }
    *(undefined8 **)(local_278 + 0x70) = puVar11;
    *local_270 = &PTR_FUN_14a1f6588;
    local_270[0x12] = 0;
    local_270[0x13] = 0;
    local_270[0x14] = 0;
    iVar12 = *(int *)(local_278 + 0xa0);
    *(uint *)(local_278 + 0xa0) = iVar12 + 1U;
    if (*(uint *)(local_278 + 0xa4) < iVar12 + 1U) {
      FUN_1448cfae8(local_278 + 0x98,iVar12);
    }
    *(undefined8 **)(*(longlong *)(local_278 + 0x98) + (longlong)iVar12 * 8) = local_270;
    local_258 = local_270 + 2;
    puVar15 = &local_198;
    puVar16 = local_258;
    for (lVar14 = 0xe; lVar14 != 0; lVar14 = lVar14 + -1) {
      *puVar16 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar16 = puVar16 + 1;
    }
    FUN_14177f7dc(&local_e8,&local_120,&local_108);
    plVar1 = local_260;
    *(undefined4 *)(local_270 + 0x10) = local_e8;
    *(undefined4 *)((longlong)local_270 + 0x84) = uStack_e4;
    *(undefined4 *)(local_270 + 0x11) = uStack_e0;
    *(undefined4 *)((longlong)local_270 + 0x8c) = uStack_dc;
    local_270[0x12] = uVar18;
    local_270[0x13] = DAT_14c9c0de0;
    uVar2 = *(undefined1 *)(uVar13 + 0x94);
    puVar17 = (undefined8 *)(*(longlong *)(local_278 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar17 + 9;
    if (*(undefined8 **)(local_278 + 0x78) < puVar11) {
      FUN_140023dd8(local_260,0x50);
      puVar17 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar17 + 9;
    }
    *(undefined8 **)(local_278 + 0x70) = puVar11;
    puVar17[1] = *(undefined8 *)(uVar13 + 8);
    puVar17[2] = 0;
    *(undefined1 *)(puVar17 + 3) = 0;
    *(undefined8 *)((longlong)puVar17 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar17 + 5) = 0;
    *puVar17 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar17 + 6) = uVar2;
    *(undefined1 *)(puVar17 + 7) = 0;
    *(undefined4 *)((longlong)puVar17 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar17 + 0x35) = 0;
    puVar17[8] = uVar13;
    iVar12 = *(int *)(local_278 + 0x1a0);
    *(uint *)(local_278 + 0x1a0) = iVar12 + 1U;
    if (*(uint *)(local_278 + 0x1a4) < iVar12 + 1U) {
      FUN_1447568fc(local_278 + 0x198,iVar12);
    }
    lVar14 = local_278;
    *(undefined8 **)(*(longlong *)(local_278 + 0x198) + (longlong)iVar12 * 8) = puVar17;
    *(int *)((longlong)puVar17 + 0x1c) = *(int *)(local_278 + 0x1a0) + -1;
    local_270[0x14] = puVar17;
    uVar5 = *(undefined8 *)(param_3 + 0x13818);
    FUN_145f27708();
    FUN_1448e935e(uVar5,&local_e8,&DAT_14c9b6f20,0);
    FUN_145f27708();
    iVar12 = (local_110._4_4_ - local_118._4_4_) + 7;
    local_1a0 = (local_110._4_4_ - local_118._4_4_) + 0xe;
    if (-1 < iVar12) {
      local_1a0 = iVar12;
    }
    local_1a0 = local_1a0 >> 3;
    iVar12 = ((int)local_110 - (int)local_118) + 7;
    local_1a4 = ((int)local_110 - (int)local_118) + 0xe;
    if (-1 < iVar12) {
      local_1a4 = iVar12;
    }
    local_1a4 = local_1a4 >> 3;
    local_2a0 = (ulonglong *)&local_1a4;
    local_19c = 1;
    local_2a8 = local_258;
    FUN_147134f1e(lVar14,&local_1a5,(local_264 == 2) * '\x02' + '\x02',&local_e8);
    uVar18 = uVar13;
  }
  *param_1 = uVar18;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  if ((local_60 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142b87c26 FUN_142b87c26 body=7443 status=ok
// SIG undefined FUN_142b87c26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b87c26(longlong *param_1,longlong param_2,longlong **param_3,int param_4,
                  undefined8 param_5)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  bool bVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong **pplVar22;
  longlong *plVar23;
  longlong *plVar24;
  byte bVar25;
  uint uVar26;
  undefined4 *puVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  undefined1 uVar31;
  undefined1 auStack_528 [32];
  longlong **local_508;
  longlong **local_500;
  longlong **local_4f8;
  longlong **local_4f0;
  longlong **local_4e8;
  code *local_4e0;
  undefined1 *local_4d8;
  undefined1 *local_4d0;
  undefined1 *local_4c8;
  undefined1 *local_4c0;
  undefined4 local_4b8;
  undefined8 local_4b0;
  longlong local_4a0;
  uint local_498;
  undefined1 local_492;
  char local_491;
  longlong *local_490;
  int local_484;
  longlong *local_480;
  undefined8 local_478;
  undefined8 local_470;
  longlong *local_468;
  longlong *local_460;
  char *local_458;
  longlong *local_450;
  longlong *local_448;
  longlong *local_440;
  uint local_434;
  longlong *local_430;
  longlong *local_428;
  longlong *local_420;
  longlong **local_418;
  undefined4 local_410;
  undefined4 local_40c;
  int local_408;
  int local_404;
  longlong *local_400;
  longlong *local_3f8;
  undefined8 local_3f0;
  longlong local_3e8;
  undefined8 *local_3e0;
  longlong local_3d8;
  longlong *local_3d0;
  longlong local_3c8;
  undefined4 local_3c0;
  longlong *local_3b8;
  longlong *local_3b0;
  longlong *local_3a8;
  undefined1 local_3a0;
  longlong *local_398;
  longlong *local_390;
  longlong *local_388;
  undefined1 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 local_368;
  longlong *local_360;
  int local_358;
  int iStack_354;
  int iStack_350;
  int iStack_34c;
  longlong *local_348;
  longlong *local_340;
  longlong *plStack_338;
  longlong *local_330;
  longlong *local_328;
  int local_31c;
  int local_318;
  longlong local_310;
  undefined4 local_308;
  longlong local_300;
  undefined4 local_2f8;
  longlong *local_2f0;
  longlong *local_2e8;
  longlong *local_2e0;
  undefined1 local_2d8 [24];
  longlong *local_2c0;
  longlong *local_2b8;
  longlong *local_2b0;
  longlong *local_2a8;
  longlong *local_2a0;
  longlong *plStack_298;
  longlong *local_290;
  longlong *local_288;
  undefined8 uStack_280;
  longlong *local_278;
  longlong *local_270;
  longlong *local_268;
  longlong *local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  longlong *local_248;
  longlong *local_240;
  longlong *plStack_238;
  longlong *local_230;
  longlong *local_228;
  longlong *plStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  longlong *local_208;
  undefined8 uStack_200;
  longlong *local_1f0;
  longlong *local_1e8;
  longlong *plStack_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong *plStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  longlong *local_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  int iStack_184;
  uint local_180;
  undefined4 uStack_17c;
  undefined1 uStack_178;
  undefined1 uStack_177;
  undefined1 uStack_176;
  undefined1 uStack_175;
  undefined2 uStack_174;
  undefined2 uStack_172;
  longlong *local_170;
  longlong *local_168;
  longlong *plStack_160;
  longlong *local_158;
  longlong *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_130;
  longlong *local_128;
  longlong *local_120;
  undefined8 *local_118;
  undefined1 local_110;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_528;
  local_418 = param_3;
  if (((*(byte *)(param_1[2] + 0x60) & 2) == 0) && (0 < (int)param_1[1])) {
    local_3d0 = param_1 + 5;
    local_420 = param_1 + 0x17;
    local_491 = param_4 == 0;
    local_428 = (longlong *)(param_2 + 0x1b8);
    local_458 = (char *)(param_2 + 0x4a8);
    local_430 = (longlong *)(param_2 + 0x4b0);
    local_3d8 = param_2 + 0x178;
    local_400 = (longlong *)(param_2 + 0x70);
    local_3f8 = (longlong *)(param_2 + 0x98);
    lVar21 = 0;
    local_4a0 = param_2;
    local_484 = param_4;
    local_460 = param_1;
    do {
      lVar30 = *param_1;
      plVar16 = (longlong *)param_1[0x15];
      if ((longlong *)param_1[0x15] == (longlong *)0x0) {
        plVar16 = local_3d0;
      }
      puVar4 = *(ulonglong **)(param_2 + 0x18);
      iVar2 = *(int *)(lVar30 + 0x1de0 + lVar21 * 0x13c10);
      local_404 = *(int *)((longlong)puVar4 + 0x17c);
      if (local_404 != iVar2) {
        *(int *)((longlong)puVar4 + 0x17c) = iVar2;
        puVar10 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar10 + 3;
        if ((undefined8 *)puVar4[1] < puVar14) {
          FUN_140023dd8(puVar4,0x20);
          puVar10 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
          puVar14 = puVar10 + 3;
          param_2 = local_4a0;
        }
        *puVar4 = (ulonglong)puVar14;
        *(int *)(puVar4 + 0xc) = (int)puVar4[0xc] + 1;
        *(undefined8 **)puVar4[6] = puVar10;
        puVar4[6] = (ulonglong)(puVar10 + 1);
        uVar3 = *(undefined4 *)((longlong)puVar4 + 0x17c);
        puVar10[1] = 0;
        *puVar10 = &PTR_FUN_14a1fb2c0;
        *(undefined4 *)(puVar10 + 2) = uVar3;
      }
      iVar2 = DAT_14ca44da0;
      lVar30 = lVar30 + lVar21 * 0x13c10;
      if (DAT_14ca44da0 != 0) {
        puVar17 = DAT_14ca44d98;
        if (DAT_14ca44d98 == (uint *)0x0) {
          puVar17 = &DAT_14ca44d88;
        }
        uVar26 = *puVar17;
        param_4 = local_484;
        param_1 = local_460;
        param_2 = local_4a0;
        if (uVar26 == 0) {
          iVar9 = DAT_14ca44da0 + 0x1e;
          if (-1 < DAT_14ca44da0 + -1) {
            iVar9 = DAT_14ca44da0 + -1;
          }
          uVar20 = 0;
          uVar28 = (ulonglong)(uint)(iVar9 >> 5);
          if (iVar9 >> 5 < 1) {
            uVar28 = 0;
          }
          local_470 = (longlong *)((ulonglong)local_470._4_4_ << 0x20);
          do {
            if (uVar28 == uVar20) goto LAB_142b87de0;
            local_470 = (longlong *)CONCAT44(local_470._4_4_,(int)local_470 + 0x20);
            uVar26 = puVar17[uVar20 + 1];
            uVar20 = uVar20 + 1;
          } while (uVar26 == 0);
        }
        else {
          uVar20 = 0;
          local_470 = (longlong *)((ulonglong)local_470._4_4_ << 0x20);
        }
        local_448 = (longlong *)(ulonglong)(-uVar26 & uVar26);
        uVar28 = (longlong)local_448 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar28 != 0) {
          for (; uVar28 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar9 = ((int)local_470 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar9 < DAT_14ca44da0) {
          local_498 = 0xffffffff;
          do {
            plVar11 = *(longlong **)(DAT_14ca44d78 + (longlong)iVar9 * 0x10);
            (**(code **)(*plVar11 + 0x10))(plVar11,lVar30,1);
            local_498 = ~(uint)local_448 & local_498;
            puVar17 = DAT_14ca44d98;
            if (DAT_14ca44d98 == (uint *)0x0) {
              puVar17 = &DAT_14ca44d88;
            }
            iVar9 = (int)uVar20;
            lVar15 = (longlong)iVar9;
            uVar26 = puVar17[lVar15] & local_498;
            if (uVar26 == 0) {
              iVar18 = DAT_14ca44da0 + 0x1e;
              if (-1 < DAT_14ca44da0 + -1) {
                iVar18 = DAT_14ca44da0 + -1;
              }
              iVar18 = iVar18 >> 5;
              local_470 = (longlong *)CONCAT44(local_470._4_4_,(int)local_470 + 0x20);
              iVar19 = iVar18;
              if (iVar18 < iVar9) {
                iVar19 = iVar9;
              }
              if (iVar9 < iVar18) {
                lVar29 = 0;
                do {
                  uVar26 = puVar17[lVar15 + lVar29 + 1];
                  if (uVar26 != 0) {
                    uVar20 = (ulonglong)(iVar9 + (int)lVar29 + 1);
                    local_498 = 0xffffffff;
                    goto LAB_142b8984a;
                  }
                  local_470 = (longlong *)CONCAT44(local_470._4_4_,(int)local_470 + 0x20);
                  lVar29 = lVar29 + 1;
                } while (iVar19 - lVar15 != lVar29);
                local_498 = 0xffffffff;
                iVar9 = iVar19;
              }
              uVar20 = (ulonglong)(iVar9 + 1);
              iVar9 = DAT_14ca44da0;
            }
            else {
LAB_142b8984a:
              local_448 = (longlong *)(ulonglong)(-uVar26 & uVar26);
              uVar28 = (longlong)local_448 * 2 + 1;
              lVar15 = 0x3f;
              if (uVar28 != 0) {
                for (; uVar28 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                }
              }
              iVar9 = ((int)local_470 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
              if (DAT_14ca44da0 <= iVar9) {
                iVar9 = DAT_14ca44da0;
              }
            }
            param_2 = local_4a0;
            param_1 = local_460;
            param_4 = local_484;
          } while (iVar9 != iVar2);
        }
      }
LAB_142b87de0:
      bVar7 = *(byte *)((longlong)param_1 + 0x21);
      if ((bVar7 == 1) && ((char)param_1[4] == '\0')) {
        uVar1 = *(ushort *)(param_1[3] + 0x1c);
        if ((&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] == 1) {
          bVar25 = DAT_14c760e14 & DAT_14ca964f0;
        }
        else {
          puVar27 = DAT_14ca96af8;
          if (DAT_14ca96af8 == (undefined4 *)0x0) {
            puVar27 = &DAT_14ca96aa8;
          }
          bVar25 = (int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf] < 3 ||
                   ((uint)puVar27[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0;
        }
        if ((param_4 != 1) && (bVar25 != 0)) {
          local_4f8 = (longlong **)CONCAT71(local_4f8._1_7_,2);
          local_500 = (longlong **)0x0;
          local_508 = (longlong **)param_1[3];
          FUN_14025015e(&local_1a8,param_2,lVar30,param_5);
          param_1 = local_460;
          plVar11 = (longlong *)local_460[0x27];
          if ((longlong *)local_460[0x27] == (longlong *)0x0) {
            plVar11 = local_420;
          }
          local_300 = plVar11[lVar21 * 2];
          local_2f8 = (undefined4)plVar11[lVar21 * 2 + 1];
          local_500 = (longlong **)CONCAT71(local_500._1_7_,2);
          local_508 = local_418;
          FUN_142b86cbd(local_4a0,lVar30,&local_300,&local_1a8);
          bVar7 = *(byte *)((longlong)param_1 + 0x21);
          param_2 = local_4a0;
        }
      }
      if ((param_4 != 0) && ((bVar7 & 1) != 0)) {
        local_508 = (longlong **)param_1[3];
        local_4f8 = (longlong **)CONCAT71(local_4f8._1_7_,5);
        local_500 = (longlong **)0x0;
        FUN_14025015e(&local_1a8,param_2,lVar30,param_5);
        param_1 = local_460;
        plVar11 = (longlong *)local_460[0x27];
        if ((longlong *)local_460[0x27] == (longlong *)0x0) {
          plVar11 = local_420;
        }
        local_310 = plVar11[lVar21 * 2];
        local_308 = (undefined4)plVar11[lVar21 * 2 + 1];
        local_500 = (longlong **)CONCAT71(local_500._1_7_,5);
        local_508 = local_418;
        FUN_142b86cbd(local_4a0,lVar30,&local_310,&local_1a8);
        param_2 = local_4a0;
      }
      if (((param_4 != 1) && ((*(uint *)(param_1[2] + 100) & 2) != 0)) &&
         (*(longlong *)(lVar30 + 0x2db8) != 0)) {
        FUN_142eb176c(param_2,lVar30,param_1[3]);
        param_2 = local_4a0;
      }
      uVar1 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar30 + 0x3090) * 2);
      puVar27 = DAT_14ca96af8;
      if (DAT_14ca96af8 == (undefined4 *)0x0) {
        puVar27 = &DAT_14ca96aa8;
      }
      if (((uint)puVar27[uVar1 >> 5] >> (uVar1 & 0x1f) & 1) == 0) {
        bVar6 = false;
      }
      else {
        bVar6 = 2 < (int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf];
      }
      if (!bVar6 && local_491 == '\0') {
        plVar16 = plVar16 + lVar21 * 2;
        if ((int)*plVar16 != 0) {
          lVar15 = param_1[3];
          plVar11 = *(longlong **)(lVar15 + 0x308);
          uVar31 = (undefined1)(((ulonglong)*(byte *)((longlong)plVar11 + 0x24) & 0xffffff04) >> 2);
          local_448 = *(longlong **)(lVar30 + 0x30f8);
          local_470 = *(longlong **)(lVar30 + 0x3100);
          iVar2 = *(int *)((longlong)plVar16 + 4);
          if (iVar2 - 1U < 2) {
            local_508 = (longlong **)CONCAT44(local_508._4_4_,iVar2);
            FUN_142b8626d(&local_398,param_2,lVar30,*(undefined8 *)(lVar15 + 0x198));
            plVar16 = local_400;
            lVar15 = *(longlong *)(lVar30 + 0x3108);
            if (lVar15 == 0) {
              uVar20 = 0;
            }
            else {
              uVar20 = CONCAT71((int7)((ulonglong)DAT_14c9b6bf0 >> 8),
                                *(int *)(DAT_14c9b6bf0 + 4) == 1);
            }
            plVar23 = (longlong *)param_1[0x29];
            plVar13 = local_330;
            plVar24 = local_328;
            if (local_318 == 2) {
              local_434 = (uint)uVar20;
              local_498 = CONCAT31(local_498._1_3_,uVar31);
              local_408 = *(int *)(DAT_14c9b6c08 + 4);
              uStack_210 = CONCAT44(iStack_354,local_358);
              local_208 = (longlong *)CONCAT44(iStack_34c,iStack_350);
              local_218 = *(longlong **)((longlong)local_360 + 0x84);
              uVar20 = (longlong)(local_31c + iStack_34c + -1) / (longlong)local_31c;
              uVar28 = (longlong)(local_31c + iStack_350 + -1) / (longlong)local_31c;
              uVar12 = uVar28 & 0xffffffff;
              if ((int)uVar28 < 2) {
                uVar12 = 1;
              }
              uVar28 = uVar20 & 0xffffffff;
              if ((int)uVar20 < 2) {
                uVar28 = 1;
              }
              local_480 = (longlong *)(uVar12 | uVar28 << 0x20);
              local_490 = (longlong *)
                          ((longlong)local_358 / (longlong)local_31c & 0xffffffffU |
                          (longlong)iStack_354 / (longlong)local_31c << 0x20);
              uVar20 = (longlong)(local_31c + (int)((ulonglong)local_218 >> 0x20) + -1) /
                       (longlong)local_31c;
              uVar28 = (longlong)(local_31c + (int)local_218 + -1) / (longlong)local_31c;
              uVar12 = uVar28 & 0xffffffff;
              if ((int)uVar28 < 2) {
                uVar12 = 1;
              }
              uVar28 = uVar20 & 0xffffffff;
              if ((int)uVar20 < 2) {
                uVar28 = 1;
              }
              local_180 = (uint)uVar28;
              local_1d8 = (longlong *)((uVar28 << 0x20) + uVar12);
              uStack_176 = *(undefined1 *)((longlong)local_360 + 0x92);
              uStack_174 = *(undefined2 *)((longlong)local_360 + 0x94);
              uStack_17c = *(undefined4 *)((longlong)local_360 + 0x8c);
              uStack_178 = (undefined1)local_360[0x12];
              local_1a8 = (longlong *)(local_360[0xc] & 0xfffffffff7fdeff0U | 0x20009);
              uStack_175 = 3;
              uStack_177 = 1;
              if ((int)DAT_14ca84e40 <= (int)uVar12) {
                uVar12 = (ulonglong)DAT_14ca84e40;
              }
              iStack_184 = (int)uVar12;
              if (iStack_184 < 2) {
                iStack_184 = 1;
              }
              uStack_1a0 = (longlong *)CONCAT44(DAT_14ca8508c,DAT_14ca85088);
              uStack_198 = (longlong *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
              uStack_190 = DAT_14ca85098;
              if ((int)DAT_14ca84e40 <= (int)local_180) {
                local_180 = DAT_14ca84e40;
              }
              uStack_18c = (undefined4)*(undefined8 *)((longlong)local_360 + 0x7c);
              uStack_188 = (undefined4)
                           ((ulonglong)*(undefined8 *)((longlong)local_360 + 0x7c) >> 0x20);
              if ((int)local_180 < 2) {
                local_180 = 1;
              }
              plVar24 = (longlong *)(*(longlong *)(local_4a0 + 0x70) + 7U & 0xfffffffffffffff8);
              plVar13 = plVar24 + 0x24;
              local_478 = lVar15;
              local_468 = plVar23;
              local_450 = plVar11;
              local_1d0 = local_490;
              plStack_1c8 = local_480;
              if (*(longlong **)(local_4a0 + 0x78) < plVar13) {
                FUN_140023dd8(local_400,0x128);
                plVar24 = (longlong *)(*plVar16 + 7U & 0xfffffffffffffff8);
                plVar13 = plVar24 + 0x24;
              }
              *(longlong **)(local_4a0 + 0x70) = plVar13;
              FUN_1456bbb8c(plVar24,L"GTAOInnerIntegrate",&local_1a8,0);
              iVar2 = *(int *)(local_4a0 + 0x180);
              *(uint *)(local_4a0 + 0x180) = iVar2 + 1U;
              if (*(uint *)(local_4a0 + 0x184) < iVar2 + 1U) {
                FUN_14472c0f6(local_3d8,iVar2);
              }
              plVar16 = local_400;
              *(longlong **)(*(longlong *)(local_4a0 + 0x178) + (longlong)iVar2 * 8) = plVar24;
              *(int *)((longlong)plVar24 + 0x9c) = *(int *)(local_4a0 + 0x180) + -1;
              puVar10 = (undefined8 *)(*(longlong *)(local_4a0 + 0x70) + 0xfU & 0xfffffffffffffff0);
              puVar14 = puVar10 + 0x5a;
              uVar31 = (undefined1)local_498;
              local_440 = plVar24;
              if (*(undefined8 **)(local_4a0 + 0x78) < puVar14) {
                FUN_140023dd8(local_400,0x2e0);
                puVar10 = (undefined8 *)(*plVar16 + 0xfU & 0xfffffffffffffff0);
                puVar14 = puVar10 + 0x5a;
              }
              lVar15 = local_4a0;
              *(undefined8 **)(local_4a0 + 0x70) = puVar14;
              *puVar10 = &PTR_FUN_14a1f66d8;
              local_3e0 = puVar10 + 2;
              FUN_147142cde();
              iVar2 = *(int *)(lVar15 + 0xa0);
              *(uint *)(lVar15 + 0xa0) = iVar2 + 1U;
              if (*(uint *)(lVar15 + 0xa4) < iVar2 + 1U) {
                FUN_1448cfae8(local_3f8,iVar2);
              }
              *(undefined8 **)(*local_3f8 + (longlong)iVar2 * 8) = puVar10;
              lVar15 = FUN_1447e4f80();
              plVar16 = local_398;
              cVar8 = *(char *)(lVar15 + 0x41);
              if (*(char *)(lVar15 + 0x41) == '\x03') {
                cVar8 = '\x02';
              }
              puVar10[2] = *(undefined8 *)(lVar30 + 0x18);
              *(char *)(puVar10 + 3) = cVar8;
              lVar15 = FUN_14482e3b2();
              cVar8 = *(char *)(lVar15 + 0x41);
              if (cVar8 == '\x03') {
                cVar8 = '\x02';
              }
              puVar10[4] = plVar16;
              *(char *)(puVar10 + 5) = cVar8;
              uVar5 = *(undefined8 *)(lVar30 + 0x118d0);
              lVar15 = FUN_144a2c9be();
              cVar8 = *(char *)(lVar15 + 0x41);
              if (cVar8 == '\x03') {
                cVar8 = '\x02';
              }
              puVar10[6] = uVar5;
              *(char *)(puVar10 + 7) = cVar8;
              local_508 = &local_390;
              FUN_142b8b4a0(&local_1a8,lVar30,&local_218,&local_1d8);
              memcpy(puVar10 + 8,&local_1a8,0x130);
              FUN_142b8bf85(&local_1a8,lVar30,local_1d8);
              pplVar22 = &local_1a8;
              puVar14 = puVar10 + 0x2e;
              for (lVar15 = 10; lVar15 != 0; lVar15 = lVar15 + -1) {
                *puVar14 = *pplVar22;
                pplVar22 = pplVar22 + 1;
                puVar14 = puVar14 + 1;
              }
              puVar10[0x38] = local_468;
              puVar10[0x39] = DAT_14c9c0eb8;
              puVar10[0x3a] = local_440;
              puVar10[0x3b] = 0;
              *(undefined4 *)(puVar10 + 0x3c) = 0xffff0000;
              uVar5 = *(undefined8 *)(lVar30 + 0x13818);
              FUN_145f7d828();
              FUN_1448e935e(uVar5,&local_1a8,&DAT_14c9b73c0,0);
              FUN_145f7d828();
              plVar16 = local_1a8;
              local_468 = uStack_1a0;
              local_3e8 = (longlong)*(int *)(lVar30 + 0x3090);
              local_40c = *(undefined4 *)(lVar30 + 0x1dd4);
              local_410 = *(undefined4 *)(lVar30 + 0x3094);
              local_492 = (&DAT_00001de6)[lVar30];
              uVar5 = *(undefined8 *)
                       (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + local_3e8 * 2) * 8)
              ;
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14ca4b780) &&
                 (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
                FUN_145e1a792();
                local_4c0 = &LAB_14712ac08;
                local_4c8 = &LAB_14712ac0c;
                local_4d0 = &LAB_1472e3912;
                local_4d8 = &LAB_1472e3916;
                local_4e0 = FUN_1472e391a;
                local_4e8 = (longlong **)FUN_1472e3942;
                local_500 = (longlong **)0x14a2f5d42;
                local_508 = (longlong **)0x14a2f9d44;
                local_4b0 = 0;
                local_4b8 = 0xe0;
                local_4f0 = (longlong **)CONCAT44(local_4f0._4_4_,1);
                local_4f8 = (longlong **)((ulonglong)local_4f8 & 0xffffffff00000000);
                FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
                _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
                atexit((_func_5014 *)&LAB_1430179ee);
                _Init_thread_footer(&DAT_14ca4b780);
              }
              FUN_1448e935e(uVar5,&local_1a8,&DAT_14ca4b6d8,0);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14ca4b780) &&
                 (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
                FUN_145e1a792();
                local_4c0 = &LAB_14712ac08;
                local_4c8 = &LAB_14712ac0c;
                local_4d0 = &LAB_1472e3912;
                local_4d8 = &LAB_1472e3916;
                local_4e0 = FUN_1472e391a;
                local_4e8 = (longlong **)FUN_1472e3942;
                local_500 = (longlong **)0x14a2f5d42;
                local_508 = (longlong **)0x14a2f9d44;
                local_4b0 = 0;
                local_4b8 = 0xe0;
                local_4f0 = (longlong **)CONCAT44(local_4f0._4_4_,1);
                local_4f8 = (longlong **)((ulonglong)local_4f8 & 0xffffffff00000000);
                FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
                _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
                atexit((_func_5014 *)&LAB_1430179ee);
                _Init_thread_footer(&DAT_14ca4b780);
              }
              plVar23 = uStack_1a0;
              plVar11 = local_1a8;
              uVar5 = DAT_14c9c0d98;
              local_3f0 = DAT_14c9c0d50;
              FUN_145f7da96();
              puVar14 = local_3e0;
              local_1a8 = (longlong *)0x0;
              uStack_1a0 = (longlong *)0x0;
              FUN_1448f70da(plVar16,&DAT_14c9b8828,local_3e0,&local_1a8);
              local_1a8 = (longlong *)CONCAT44(local_40c,(int)local_3e8);
              uStack_1a0 = (longlong *)
                           CONCAT17(local_1c0._2_1_,
                                    CONCAT25((undefined2)local_1c0,CONCAT14(local_492,local_410)));
              uStack_198 = local_1d8;
              uStack_190 = SUB84(local_1d0,0);
              uStack_18c = (undefined4)((ulonglong)local_1d0 >> 0x20);
              uStack_188 = SUB84(plStack_1c8,0);
              iStack_184 = (int)((ulonglong)plStack_1c8 >> 0x20);
              local_180 = (undefined4)local_218;
              uStack_17c = local_218._4_4_;
              uStack_178 = (undefined1)uStack_210;
              uStack_177 = (undefined1)((ulonglong)uStack_210 >> 8);
              uStack_176 = (undefined1)((ulonglong)uStack_210 >> 0x10);
              uStack_175 = (undefined1)((ulonglong)uStack_210 >> 0x18);
              uStack_174 = (undefined2)((ulonglong)uStack_210 >> 0x20);
              uStack_172 = (undefined2)((ulonglong)uStack_210 >> 0x30);
              local_170 = local_208;
              local_168 = plVar11;
              plStack_160 = plVar23;
              local_158 = plVar16;
              local_150 = local_468;
              uStack_148 = local_3f0;
              local_140 = uVar5;
              local_138 = DAT_14ca94df8;
              local_130 = 0;
              local_128 = plVar16;
              local_120 = local_468;
              local_118 = puVar14;
              local_110 = 0;
              FUN_145f7da96();
              lVar15 = local_4a0;
              FUN_147142dba(local_4a0,&local_1f0,puVar14,&local_1a8);
              plVar13 = local_490;
              plVar24 = local_480;
              plVar23 = local_440;
              if (local_408 == 1) {
                local_218 = (longlong *)0x0;
                uStack_210 = 0;
                local_208 = (longlong *)0x0;
                uStack_200 = 0;
                local_1d8 = local_440;
                local_1d0 = local_490;
                plStack_1c8 = local_480;
                local_1c0 = local_360;
                local_1b8 = CONCAT44(iStack_354,local_358);
                uStack_1b0 = CONCAT44(iStack_34c,iStack_350);
                local_4f8 = (longlong **)&local_218;
                local_500 = &local_1d8;
                local_508 = (longlong **)&local_1c0;
                FUN_142b8cb1a(&local_1a8,lVar15,lVar30,&local_398);
                plVar13 = uStack_1a0;
                plVar24 = uStack_198;
                plVar23 = local_1a8;
              }
              uVar20 = (ulonglong)local_434;
              plVar11 = local_450;
              lVar15 = local_478;
            }
            if ((char)uVar20 != '\0') {
              local_498 = CONCAT31(local_498._1_3_,uVar31);
              local_490 = plVar13;
              local_480 = plVar24;
              local_468 = plVar23;
              local_450 = plVar11;
              if (*(longlong *)(lVar30 + 79000) == 0) {
                local_230 = (longlong *)
                            FUN_14476842e(local_4a0,&DAT_14ca63b20,L"GTAODummyTexture",0);
                if (local_230 == (longlong *)0x0) {
                  local_230 = (longlong *)0x0;
                  plVar16 = (longlong *)0x0;
                  plVar11 = (longlong *)0x0;
                  local_1f0 = _DAT_00000084;
                }
                else {
                  plVar11 = *(longlong **)((longlong)local_230 + 0x84);
                  plVar16 = (longlong *)0x0;
                  local_1f0 = plVar11;
                }
              }
              else {
                plVar23 = *(longlong **)(lVar30 + 0x134a0);
                plVar16 = *(longlong **)(lVar30 + 0x134a8);
                plVar11 = *(longlong **)(lVar30 + 0x134b0);
                local_230 = (longlong *)
                            FUN_14476842e(local_4a0,lVar30 + 79000,L"GTAOHistoryColor",0);
                local_1f0 = plVar23;
              }
              plVar23 = (longlong *)(lVar15 + 0x15c8);
              local_248 = local_348;
              local_240 = local_340;
              plStack_238 = plStack_338;
              local_260 = local_360;
              local_258 = (longlong *)CONCAT44(iStack_354,local_358);
              uStack_250 = (longlong *)CONCAT44(iStack_34c,iStack_350);
              local_278 = local_468;
              local_270 = local_490;
              local_268 = local_480;
              local_4e8 = &local_1f0;
              local_4f0 = &local_230;
              local_4f8 = &local_248;
              local_500 = &local_260;
              local_508 = &local_278;
              local_478 = lVar15;
              local_228 = plVar16;
              plStack_220 = plVar11;
              local_1e8 = plVar16;
              plStack_1e0 = plVar11;
              FUN_142b8c389(&local_1a8,local_4a0,lVar30,&local_398);
              plVar16 = (longlong *)*plVar23;
              plVar11 = local_1a8;
              if (plVar16 != (longlong *)0x0) {
                *plVar23 = 0;
                (**(code **)(*plVar16 + 0x38))();
                plVar11 = local_1a8;
                plVar16 = (longlong *)*plVar23;
                if (plVar16 != (longlong *)0x0) {
                  *plVar23 = 0;
                  (**(code **)(*plVar16 + 0x38))();
                }
              }
              bVar7 = *(byte *)((longlong)plVar11 + 0x24);
              *(byte *)((longlong)plVar11 + 0x24) = bVar7 | 2;
              *(undefined1 *)((longlong)plVar11 + 0x26) = 1;
              iVar2 = *(int *)(local_4a0 + 0x1c0);
              *(uint *)(local_4a0 + 0x1c0) = iVar2 + 1U;
              if (*(uint *)(local_4a0 + 0x1c4) < iVar2 + 1U) {
                FUN_14017e38e(local_428,iVar2);
              }
              lVar29 = local_478;
              lVar15 = *local_428;
              *(longlong **)(lVar15 + (longlong)iVar2 * 0x10) = plVar11;
              *(longlong **)(lVar15 + 8 + (longlong)iVar2 * 0x10) = plVar23;
              uVar31 = (undefined1)local_498;
              if ((bVar7 & 2) == 0) {
                LOCK();
                cVar8 = *local_458;
                if (cVar8 == '\0') {
                  *local_458 = '\x01';
                }
                UNLOCK();
                if (cVar8 != '\0') {
                  FUN_1447d2058(local_458);
                }
                iVar2 = *(int *)(local_4a0 + 0x4b8);
                *(uint *)(local_4a0 + 0x4b8) = iVar2 + 1U;
                if (*(uint *)(local_4a0 + 0x4bc) < iVar2 + 1U) {
                  FUN_1447f2dbc(local_430,iVar2);
                }
                lVar15 = *local_430;
                *(undefined8 *)(lVar15 + (longlong)iVar2 * 0x10) = 2;
                *(longlong **)(lVar15 + 8 + (longlong)iVar2 * 0x10) = plVar11;
                LOCK();
                cVar8 = *local_458;
                if (cVar8 == '\x01') {
                  *local_458 = '\0';
                }
                UNLOCK();
                if (cVar8 != '\x01') {
                  FUN_14008cdb0(local_458,local_4a0);
                }
              }
              *(ulonglong *)(lVar29 + 0x15d0) = CONCAT44(iStack_184,uStack_188);
              *(ulonglong *)(lVar29 + 0x15d8) = CONCAT44(uStack_17c,local_180);
              *(ulonglong *)(lVar29 + 0x15e0) =
                   CONCAT26(uStack_172,
                            CONCAT24(uStack_174,
                                     CONCAT13(uStack_175,
                                              CONCAT12(uStack_176,CONCAT11(uStack_177,uStack_178))))
                           );
              plVar13 = uStack_1a0;
              plVar11 = local_450;
              plVar24 = uStack_198;
              plVar23 = local_1a8;
            }
            uStack_1a0 = local_448;
            uStack_198 = local_470;
            uStack_190 = CONCAT31(uStack_190._1_3_,uVar31);
            local_508 = &local_1a8;
            local_2a8 = plVar23;
            local_2a0 = plVar13;
            plStack_298 = plVar24;
            local_1a8 = plVar11;
            FUN_142b8d0c4(&local_290,local_4a0,lVar30,&local_2a8);
            param_2 = local_4a0;
            param_4 = local_484;
          }
          else {
            local_498 = CONCAT31(local_498._1_3_,uVar31);
            if (iVar2 == 3) {
              local_508 = (longlong **)CONCAT44(local_508._4_4_,3);
              FUN_142b8626d(&local_1a8,param_2,lVar30,*(undefined8 *)(lVar15 + 0x198));
              lVar15 = local_4a0;
              if (*(longlong *)(lVar30 + 0x3108) == 0) {
                local_478 = (ulonglong)local_478._4_4_ << 0x20;
              }
              else {
                local_478 = CONCAT44(local_478._4_4_,
                                     (int)CONCAT71((int7)((ulonglong)DAT_14c9b6bf0 >> 8),
                                                   *(int *)(DAT_14c9b6bf0 + 4) == 1));
              }
              iVar2 = *(int *)(DAT_14c9b6c08 + 4);
              local_1c0 = (longlong *)CONCAT44(iStack_184,uStack_188);
              local_1b8 = CONCAT44(uStack_17c,local_180);
              uStack_1b0 = CONCAT26(uStack_172,
                                    CONCAT24(uStack_174,
                                             CONCAT13(uStack_175,
                                                      CONCAT12(uStack_176,
                                                               CONCAT11(uStack_177,uStack_178)))));
              local_1f0 = local_170;
              local_1e8 = local_168;
              plStack_1e0 = plStack_160;
              local_500 = (longlong **)&local_1c0;
              local_508 = &local_1f0;
              local_450 = plVar11;
              FUN_142b8b955(&local_1d8,local_4a0,lVar30,&local_1a8);
              plVar16 = local_1d8;
              plVar11 = local_1d0;
              plVar13 = plStack_1c8;
              if (iVar2 == 1) {
                local_218 = (longlong *)0x0;
                uStack_210 = 0;
                local_208 = (longlong *)0x0;
                uStack_200 = 0;
                local_230 = local_170;
                local_228 = local_168;
                plStack_220 = plStack_160;
                local_248 = local_1d8;
                local_240 = local_1d0;
                plStack_238 = plStack_1c8;
                local_4f8 = (longlong **)&local_218;
                local_500 = &local_230;
                local_508 = &local_248;
                FUN_142b8cb1a(&local_398,lVar15,lVar30);
                plVar16 = local_398;
                plVar11 = local_390;
                plVar13 = local_388;
              }
              if ((char)local_478 != '\0') {
                local_478 = *(longlong *)(lVar30 + 0x3108);
                local_490 = plVar11;
                local_480 = plVar16;
                if (*(longlong *)(lVar30 + 79000) == 0) {
                  local_278 = (longlong *)
                              FUN_14476842e(local_4a0,&DAT_14ca63b20,L"GTAODummyTexture");
                  if (local_278 == (longlong *)0x0) {
                    local_278 = (longlong *)0x0;
                    local_270 = (longlong *)0x0;
                    plVar16 = (longlong *)0x0;
                    local_260 = _DAT_00000084;
                  }
                  else {
                    plVar16 = *(longlong **)((longlong)local_278 + 0x84);
                    local_270 = (longlong *)0x0;
                    local_260 = plVar16;
                  }
                }
                else {
                  local_468 = *(longlong **)(lVar30 + 0x134a0);
                  local_440 = *(longlong **)(lVar30 + 0x134a8);
                  plVar16 = *(longlong **)(lVar30 + 0x134b0);
                  local_278 = (longlong *)
                              FUN_14476842e(local_4a0,lVar30 + 79000,L"GTAOHistoryColor",0);
                  local_270 = local_440;
                  local_260 = local_468;
                }
                plVar23 = (longlong *)(local_478 + 0x15c8);
                local_290 = local_158;
                local_288 = local_150;
                uStack_280 = uStack_148;
                local_2a8 = local_170;
                local_2a0 = local_168;
                plStack_298 = plStack_160;
                local_2c0 = local_480;
                local_2b8 = local_490;
                local_4e8 = &local_260;
                local_4f0 = &local_278;
                local_4f8 = &local_290;
                local_500 = &local_2a8;
                local_508 = &local_2c0;
                local_2b0 = plVar13;
                local_268 = plVar16;
                local_258 = local_270;
                uStack_250 = plVar16;
                FUN_142b8c389(&local_398,local_4a0,lVar30,&local_1a8);
                plVar16 = (longlong *)*plVar23;
                plVar11 = local_398;
                local_490 = plVar23;
                if (plVar16 != (longlong *)0x0) {
                  *plVar23 = 0;
                  (**(code **)(*plVar16 + 0x38))();
                  plVar11 = local_398;
                  plVar16 = (longlong *)*plVar23;
                  if (plVar16 != (longlong *)0x0) {
                    *plVar23 = 0;
                    (**(code **)(*plVar16 + 0x38))();
                  }
                }
                bVar7 = *(byte *)((longlong)plVar11 + 0x24);
                *(byte *)((longlong)plVar11 + 0x24) = bVar7 | 2;
                *(undefined1 *)((longlong)plVar11 + 0x26) = 1;
                iVar2 = *(int *)(local_4a0 + 0x1c0);
                *(uint *)(local_4a0 + 0x1c0) = iVar2 + 1U;
                if (*(uint *)(local_4a0 + 0x1c4) < iVar2 + 1U) {
                  FUN_14017e38e(local_428,iVar2);
                }
                lVar15 = *local_428;
                *(longlong **)(lVar15 + (longlong)iVar2 * 0x10) = plVar11;
                *(longlong **)(lVar15 + 8 + (longlong)iVar2 * 0x10) = local_490;
                if ((bVar7 & 2) == 0) {
                  LOCK();
                  cVar8 = *local_458;
                  if (cVar8 == '\0') {
                    *local_458 = '\x01';
                  }
                  UNLOCK();
                  if (cVar8 != '\0') {
                    FUN_1447d2058(local_458);
                  }
                  iVar2 = *(int *)(local_4a0 + 0x4b8);
                  *(uint *)(local_4a0 + 0x4b8) = iVar2 + 1U;
                  if (*(uint *)(local_4a0 + 0x4bc) < iVar2 + 1U) {
                    FUN_1447f2dbc(local_430,iVar2);
                  }
                  lVar15 = *local_430;
                  *(undefined8 *)(lVar15 + (longlong)iVar2 * 0x10) = 2;
                  *(longlong **)(lVar15 + 8 + (longlong)iVar2 * 0x10) = plVar11;
                  LOCK();
                  cVar8 = *local_458;
                  if (cVar8 == '\x01') {
                    *local_458 = '\0';
                  }
                  UNLOCK();
                  if (cVar8 != '\x01') {
                    FUN_14008cdb0(local_458,local_4a0);
                  }
                }
                *(undefined8 *)(local_478 + 0x15d0) = local_378;
                *(undefined8 *)(local_478 + 0x15d8) = local_370;
                *(undefined8 *)(local_478 + 0x15e0) = local_368;
                plVar16 = local_398;
                plVar11 = local_390;
                plVar13 = local_388;
              }
              plVar23 = local_450;
              local_398 = local_450;
              local_390 = local_448;
              local_388 = local_470;
              local_380 = (undefined1)local_498;
              local_508 = &local_398;
              local_2f0 = plVar16;
              local_2e8 = plVar11;
              local_2e0 = plVar13;
              FUN_142b8d0c4(local_2d8,local_4a0,lVar30,&local_2f0);
              param_2 = local_4a0;
            }
            else {
              plVar23 = plVar11;
              if ((*(byte *)((longlong)plVar11 + 0x24) & 4) == 0) {
                plVar23 = (longlong *)0x0;
              }
              if ((int)plVar16[1] == 2) {
                local_508 = (longlong **)CONCAT44(local_508._4_4_,(int)*plVar16);
                local_500 = (longlong **)CONCAT71(local_500._1_7_,1);
                FUN_142b87158(&local_1a8,param_2,lVar30,*(undefined8 *)(lVar15 + 0x198));
                local_3b0 = local_448;
                local_3a8 = local_470;
                local_3a0 = (undefined1)local_498;
                local_508 = &local_3b8;
                local_3b8 = plVar11;
                FUN_142b873fd(&local_398,local_4a0,lVar30,&local_1a8);
                param_2 = local_4a0;
                plVar23 = local_398;
              }
            }
            param_4 = local_484;
            if (*(char *)((longlong)param_1 + 0x21) == '\x01') {
              local_508 = (longlong **)param_1[3];
              local_4f8 = (longlong **)CONCAT71(local_4f8._1_7_,6);
              local_500 = (longlong **)0x0;
              FUN_14025015e(&local_1a8,param_2,lVar30,param_5);
              param_1 = local_460;
              uStack_188 = SUB84(plVar23,0);
              iStack_184 = (int)((ulonglong)plVar23 >> 0x20);
              plVar16 = (longlong *)local_460[0x27];
              if ((longlong *)local_460[0x27] == (longlong *)0x0) {
                plVar16 = local_420;
              }
              local_3c8 = plVar16[lVar21 * 2];
              local_3c0 = (undefined4)plVar16[lVar21 * 2 + 1];
              local_500 = (longlong **)CONCAT71(local_500._1_7_,6);
              local_508 = local_418;
              FUN_142b86cbd(local_4a0,lVar30,&local_3c8,&local_1a8);
              param_2 = local_4a0;
            }
          }
        }
      }
      if (*(int *)((longlong)puVar4 + 0x17c) != local_404) {
        *(int *)((longlong)puVar4 + 0x17c) = local_404;
        puVar10 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar10 + 3;
        if ((undefined8 *)puVar4[1] < puVar14) {
          FUN_140023dd8(puVar4,0x20);
          puVar10 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
          puVar14 = puVar10 + 3;
          param_2 = local_4a0;
        }
        *puVar4 = (ulonglong)puVar14;
        *(int *)(puVar4 + 0xc) = (int)puVar4[0xc] + 1;
        *(undefined8 **)puVar4[6] = puVar10;
        puVar4[6] = (ulonglong)(puVar10 + 1);
        uVar3 = *(undefined4 *)((longlong)puVar4 + 0x17c);
        puVar10[1] = 0;
        *puVar10 = &PTR_FUN_14a1fb2c0;
        *(undefined4 *)(puVar10 + 2) = uVar3;
      }
      lVar21 = lVar21 + 1;
    } while (lVar21 < (int)param_1[1]);
  }
  if ((local_70 ^ (ulonglong)auStack_528) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b8993a FUN_142b8993a body=2526 status=ok
// SIG undefined FUN_142b8993a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b8993a(longlong *param_1,longlong param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined8 *puVar23;
  undefined1 auStack_328 [32];
  ulonglong *local_308;
  ulonglong *local_300;
  ulonglong *local_2f8;
  longlong *local_2f0;
  undefined8 *local_2e8;
  ulonglong local_2e0;
  longlong *local_2d8;
  longlong local_2d0;
  undefined4 local_2c8;
  int local_2c4;
  longlong local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  ulonglong local_2a0;
  ulonglong local_298;
  undefined8 *local_290;
  ulonglong *local_288;
  longlong *local_280;
  undefined8 local_278;
  undefined1 local_270 [24];
  ulonglong local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  ulonglong local_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 local_200;
  int local_1fc;
  int local_1f8;
  ulonglong local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  ulonglong local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  int local_1c0;
  int local_1bc;
  undefined4 local_1b8;
  ulonglong local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  ulonglong local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  ulonglong local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 local_160;
  uint local_15c;
  undefined4 local_158;
  int local_154;
  int local_150;
  undefined4 local_14c;
  undefined2 local_148;
  undefined1 local_146;
  undefined2 local_145;
  undefined1 local_143;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_328;
  local_2f0 = param_1;
  if ((*(byte *)(param_1[2] + 0x60) & 2) == 0) {
    FUN_140de54fe(param_1);
    iVar19 = 4;
    if (*(int *)(DAT_14c9b6c98 + 4) < 4) {
      iVar19 = *(int *)(DAT_14c9b6c98 + 4);
    }
    iVar2 = 0;
    if (0 < iVar19) {
      iVar2 = iVar19;
    }
    local_2c8 = *(undefined4 *)(param_2 + 0x660);
    *(int *)(param_2 + 0x660) = iVar2;
    if (0 < (int)param_1[1]) {
      local_280 = local_2f0 + 5;
      local_2b0 = param_2 + 0x178;
      local_2d8 = (longlong *)(param_2 + 0x70);
      local_2a8 = param_2 + 0x98;
      local_2b8 = param_2 + 0x198;
      lVar20 = 4;
      lVar22 = 0;
      lVar15 = 0;
      do {
        plVar16 = (longlong *)local_2f0[0x15];
        if ((longlong *)local_2f0[0x15] == (longlong *)0x0) {
          plVar16 = local_280;
        }
        iVar19 = *(int *)((longlong)plVar16 + lVar20);
        if (iVar19 - 1U < 2) {
          local_2d0 = *local_2f0;
          puVar17 = *(ulonglong **)(param_2 + 0x18);
          iVar2 = *(int *)(local_2d0 + 0x1de0 + lVar22);
          local_2c4 = *(int *)((longlong)puVar17 + 0x17c);
          if (local_2c4 != iVar2) {
            *(int *)((longlong)puVar17 + 0x17c) = iVar2;
            puVar9 = (undefined8 *)(*puVar17 + 7 & 0xfffffffffffffff8);
            puVar13 = puVar9 + 3;
            if ((undefined8 *)puVar17[1] < puVar13) {
              FUN_140023dd8(puVar17,0x20);
              puVar9 = (undefined8 *)(*puVar17 + 7 & 0xfffffffffffffff8);
              puVar13 = puVar9 + 3;
            }
            *puVar17 = (ulonglong)puVar13;
            *(int *)(puVar17 + 0xc) = (int)puVar17[0xc] + 1;
            *(undefined8 **)puVar17[6] = puVar9;
            puVar17[6] = (ulonglong)(puVar9 + 1);
            uVar14 = *(undefined4 *)((longlong)puVar17 + 0x17c);
            puVar9[1] = 0;
            *puVar9 = &PTR_FUN_14a1fb2c0;
            *(undefined4 *)(puVar9 + 2) = uVar14;
            iVar19 = *(int *)((longlong)plVar16 + lVar20);
          }
          lVar12 = local_2d0;
          puVar13 = (undefined8 *)(local_2d0 + lVar22);
          local_308 = (ulonglong *)CONCAT44(local_308._4_4_,iVar19);
          FUN_142b8626d(&local_278,param_2,puVar13,*(undefined8 *)(local_2f0[3] + 0x198));
          plVar4 = local_2d8;
          lVar12 = *(longlong *)(lVar12 + 8 + lVar22);
          plVar16 = *(longlong **)(lVar12 + 8);
          if ((puVar13 == (undefined8 *)*plVar16) ||
             (uVar14 = (undefined4)CONCAT71((int7)((ulonglong)plVar16 >> 8),1),
             *(char *)(lVar12 + 0xcc) == '\x01')) {
            uVar14 = 0;
          }
          local_2e0 = CONCAT44(local_2e0._4_4_,uVar14);
          uVar21 = local_2f0[0x29];
          local_2c0 = lVar22;
          if (uVar21 == 0) {
            iVar19 = ((int)((ulonglong)*(undefined8 *)(local_2f0[3] + 0x20) >> 0x20) + local_1fc +
                     -1) / local_1fc;
            local_154 = (local_1fc + (int)*(undefined8 *)(local_2f0[3] + 0x20) + -1) / local_1fc;
            local_160 = DAT_14ca84d40;
            uStack_170 = CONCAT44(_DAT_14ca84d34,DAT_14ca84d30);
            uStack_168 = CONCAT44(uRam000000014ca84d3c,uRam000000014ca84d38);
            local_15c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
            local_146 = 0;
            local_178 = 0x20001;
            local_145 = 0x28;
            local_14c = 0x10001;
            local_148 = 0x101;
            if (DAT_14ca84e40 <= local_154) {
              local_154 = DAT_14ca84e40;
            }
            local_158 = 0;
            if (local_154 < 2) {
              local_154 = 1;
            }
            local_143 = 0xff;
            local_150 = DAT_14ca84e40;
            if (iVar19 < DAT_14ca84e40) {
              local_150 = iVar19;
            }
            if (local_150 < 2) {
              local_150 = 1;
            }
            uVar21 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
            uVar10 = uVar21 + 0x120;
            local_2e8 = puVar13;
            if (*(ulonglong *)(param_2 + 0x78) < uVar10) {
              FUN_140023dd8(local_2d8,0x128);
              uVar21 = *plVar4 + 7U & 0xfffffffffffffff8;
              uVar10 = uVar21 + 0x120;
            }
            *(ulonglong *)(param_2 + 0x70) = uVar10;
            FUN_1456bbb8c(uVar21,L"ScreenSpaceGTAOHorizons",&local_178,0);
            iVar19 = *(int *)(param_2 + 0x180);
            *(uint *)(param_2 + 0x180) = iVar19 + 1U;
            if (*(uint *)(param_2 + 0x184) < iVar19 + 1U) {
              FUN_14472c0f6(local_2b0,iVar19);
            }
            *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar19 * 8) = uVar21;
            *(int *)(uVar21 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
            local_2f0[0x29] = uVar21;
            puVar13 = local_2e8;
          }
          uVar5 = local_208;
          uVar3 = local_210;
          plVar16 = local_2d8;
          local_288 = puVar17;
          if (local_1f8 == 2) {
            local_298 = local_258;
            local_2a0 = *(ulonglong *)(local_240 + 0x84);
            local_188 = CONCAT44(uStack_234,local_238);
            uStack_180 = CONCAT44(uStack_22c,uStack_230);
            local_1a8 = *(ulonglong *)(uVar21 + 0x84);
            local_1a0 = local_210;
            uStack_198 = local_208;
            puVar23 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar9 = puVar23 + 0x3e;
            local_2e8 = puVar13;
            local_2e0 = uVar21;
            local_190 = local_2a0;
            if (*(undefined8 **)(param_2 + 0x78) < puVar9) {
              FUN_140023dd8(local_2d8,0x200);
              puVar23 = (undefined8 *)(*plVar16 + 0xfU & 0xfffffffffffffff0);
              puVar9 = puVar23 + 0x3e;
            }
            *(undefined8 **)(param_2 + 0x70) = puVar9;
            *puVar23 = &PTR_FUN_14a1f66f8;
            local_290 = puVar23 + 2;
            FUN_14714309a();
            lVar22 = local_2c0;
            iVar19 = *(int *)(param_2 + 0xa0);
            *(uint *)(param_2 + 0xa0) = iVar19 + 1U;
            if (*(uint *)(param_2 + 0xa4) < iVar19 + 1U) {
              FUN_1448cfae8(local_2a8,iVar19);
            }
            *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar19 * 8) = puVar23;
            lVar11 = FUN_1447e4f80();
            uVar3 = local_278;
            lVar12 = local_2d0;
            cVar8 = *(char *)(lVar11 + 0x41);
            if (*(char *)(lVar11 + 0x41) == '\x03') {
              cVar8 = '\x02';
            }
            puVar23[2] = *(undefined8 *)(local_2d0 + 0x18 + lVar22);
            *(char *)(puVar23 + 3) = cVar8;
            lVar11 = FUN_14482e3b2();
            cVar8 = *(char *)(lVar11 + 0x41);
            if (*(char *)(lVar11 + 0x41) == '\x03') {
              cVar8 = '\x02';
            }
            puVar23[4] = uVar3;
            *(char *)(puVar23 + 5) = cVar8;
            uVar3 = DAT_14c9c0d80;
            iVar19 = *(int *)(lVar12 + 0x137c8 + lVar22);
            iVar2 = *(int *)(lVar12 + 0x137cc + lVar22);
            puVar23[6] = local_298;
            puVar23[7] = uVar3;
            *(float *)(puVar23 + 8) = (float)(int)local_2a0 / (float)(iVar19 * 2);
            *(float *)((longlong)puVar23 + 0x44) =
                 (float)(int)(local_2a0 >> 0x20) / (float)(iVar2 * 2);
            puVar23[9] = 0;
            uVar3 = *(undefined8 *)(lVar12 + 0x118d0 + lVar22);
            lVar12 = FUN_144a2c9be();
            puVar13 = local_2e8;
            cVar8 = *(char *)(lVar12 + 0x41);
            if (*(char *)(lVar12 + 0x41) == '\x03') {
              cVar8 = '\x02';
            }
            puVar23[10] = uVar3;
            *(char *)(puVar23 + 0xb) = cVar8;
            local_308 = (ulonglong *)local_270;
            FUN_142b8b4a0(&local_178,local_2e8,&local_190,&local_1a8);
            memcpy(puVar23 + 0xc,&local_178,0x130);
            FUN_142b8bf85(&local_178,puVar13,local_1a8);
            plVar16 = local_2d8;
            puVar17 = &local_178;
            puVar18 = puVar23 + 0x32;
            for (lVar12 = 10; lVar12 != 0; lVar12 = lVar12 + -1) {
              *puVar18 = *puVar17;
              puVar17 = puVar17 + 1;
              puVar18 = puVar18 + 1;
            }
            uVar1 = *(undefined1 *)(local_2e0 + 0x94);
            puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar13 = puVar9 + 9;
            local_2e8 = puVar23;
            if (*(undefined8 **)(param_2 + 0x78) < puVar13) {
              FUN_140023dd8(local_2d8,0x50);
              puVar9 = (undefined8 *)(*plVar16 + 7U & 0xfffffffffffffff8);
              puVar13 = puVar9 + 9;
            }
            *(undefined8 **)(param_2 + 0x70) = puVar13;
            puVar9[1] = *(undefined8 *)(local_2e0 + 8);
            puVar9[2] = 0;
            *(undefined1 *)(puVar9 + 3) = 0;
            *(undefined8 *)((longlong)puVar9 + 0x1c) = 0xffffffffffffffff;
            *(undefined1 *)(puVar9 + 5) = 0;
            *puVar9 = &PTR_FUN_14a1fb948;
            *(undefined1 *)(puVar9 + 6) = uVar1;
            *(undefined1 *)(puVar9 + 7) = 0;
            *(undefined4 *)((longlong)puVar9 + 0x31) = 0;
            *(undefined2 *)((longlong)puVar9 + 0x35) = 0;
            puVar9[8] = local_2e0;
            iVar19 = *(int *)(param_2 + 0x1a0);
            *(uint *)(param_2 + 0x1a0) = iVar19 + 1U;
            if (*(uint *)(param_2 + 0x1a4) < iVar19 + 1U) {
              FUN_1447568fc(local_2b8,iVar19);
            }
            uVar14 = local_200;
            *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar19 * 8) = puVar9;
            *(int *)((longlong)puVar9 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
            local_2e8[0x3c] = puVar9;
            uVar3 = *(undefined8 *)(local_2d0 + 0x13818 + lVar22);
            FUN_145e9f1f6();
            FUN_1448e935e(uVar3,&local_178,&DAT_14c9b74e8,uVar14);
            FUN_145e9f1f6();
            iVar19 = (uStack_198._4_4_ - local_1a0._4_4_) + 7;
            local_1bc = (uStack_198._4_4_ - local_1a0._4_4_) + 0xe;
            if (-1 < iVar19) {
              local_1bc = iVar19;
            }
            local_1bc = local_1bc >> 3;
            iVar19 = ((int)uStack_198 - (int)local_1a0) + 7;
            local_1c0 = ((int)uStack_198 - (int)local_1a0) + 0xe;
            if (-1 < iVar19) {
              local_1c0 = iVar19;
            }
            local_1c0 = local_1c0 >> 3;
            local_1b8 = 1;
            local_308 = (ulonglong *)&local_1c0;
            FUN_147135582(param_2,&local_1d8,&local_178,local_290);
          }
          else {
            iVar19 = *(int *)(DAT_14c9b6c08 + 4);
            local_190 = local_258;
            local_188 = local_250;
            uStack_180 = uStack_248;
            local_1a8 = local_240;
            local_1a0 = CONCAT44(uStack_234,local_238);
            uStack_198 = CONCAT44(uStack_22c,uStack_230);
            local_300 = &local_190;
            local_308 = &local_1a8;
            FUN_142b8b955(&local_178,param_2,puVar13,&local_278);
            uVar7 = uStack_168;
            uVar6 = uStack_170;
            if (iVar19 == 1) {
              uStack_170 = uVar3;
              uStack_168 = uVar5;
              local_160 = CONCAT31(local_160._1_3_,(char)local_2e0);
              local_1d8 = local_240;
              local_1d0 = local_238;
              uStack_1cc = uStack_234;
              uStack_1c8 = uStack_230;
              uStack_1c4 = uStack_22c;
              local_1f0 = local_178;
              local_1e8 = uVar6;
              local_1e0 = uVar7;
              local_2f8 = &local_178;
              local_300 = &local_1d8;
              local_308 = &local_1f0;
              local_178 = uVar21;
              FUN_142b8cb1a(&local_1c0,param_2,puVar13,&local_278);
            }
          }
          puVar17 = local_288;
          lVar22 = local_2c0;
          if (*(int *)((longlong)local_288 + 0x17c) != local_2c4) {
            *(int *)((longlong)local_288 + 0x17c) = local_2c4;
            puVar9 = (undefined8 *)(*local_288 + 7 & 0xfffffffffffffff8);
            puVar13 = puVar9 + 3;
            if ((undefined8 *)local_288[1] < puVar13) {
              FUN_140023dd8(local_288,0x20);
              puVar9 = (undefined8 *)(*puVar17 + 7 & 0xfffffffffffffff8);
              puVar13 = puVar9 + 3;
            }
            *puVar17 = (ulonglong)puVar13;
            *(int *)(puVar17 + 0xc) = (int)puVar17[0xc] + 1;
            *(undefined8 **)puVar17[6] = puVar9;
            puVar17[6] = (ulonglong)(puVar9 + 1);
            uVar14 = *(undefined4 *)((longlong)puVar17 + 0x17c);
            puVar9[1] = 0;
            *puVar9 = &PTR_FUN_14a1fb2c0;
            *(undefined4 *)(puVar9 + 2) = uVar14;
          }
        }
        lVar15 = lVar15 + 1;
        lVar20 = lVar20 + 0x10;
        lVar22 = lVar22 + 0x13c10;
      } while (lVar15 < (int)local_2f0[1]);
    }
    *(undefined4 *)(param_2 + 0x660) = local_2c8;
  }
  if ((local_48 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142b8a31a FUN_142b8a31a body=518 status=ok
// SIG undefined FUN_142b8a31a(void)

void FUN_142b8a31a(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  uint uVar1;
  void *_Src;
  undefined1 auStack_3e8 [32];
  undefined8 *local_3c8;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined1 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined1 local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined1 local_360;
  longlong local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  undefined1 auStack_d8 [160];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  uVar1 = *(uint *)(*(longlong *)(param_3 + 8) + 0x48);
  if ((uVar1 & 1) != 0) {
    local_390 = *(undefined8 *)(param_3 + 0x30f8);
    uStack_388 = *(undefined8 *)(param_3 + 0x3100);
    local_398 = *param_4;
    local_380 = 1;
    if (((uVar1 & 0x40) != 0) && ((*(byte *)(param_3 + 0x2cdc) & 1) != 0)) {
      if (*(char *)(param_3 + 0x2c20) == '\0') {
        FUN_142ba1a18(param_2,param_3,param_4);
        FUN_142ba225c(&local_378,param_2,param_3,param_4);
      }
      else {
        FUN_142ba428e(&local_378,param_2,param_3,param_4);
      }
      local_398 = local_378;
      local_390 = local_370;
      uStack_388 = uStack_368;
      local_380 = local_360;
    }
    _Src = *(void **)(*(longlong *)(param_3 + 8) + 0x348);
    memcpy(&local_378,_Src,0x250);
    local_108 = 0;
    local_100 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_fc = 0xffffffff00000080;
    local_f4 = 0;
    local_e8 = 0;
    local_e0 = 0;
    FUN_1401e8b98(&local_128,(longlong)_Src + 0x250);
    memcpy(auStack_d8,(void *)((longlong)_Src + 0x2a0),0xa0);
    if (((((*(byte *)(param_3 + 0x2d1c) & 1) != 0) &&
         ((*(byte *)(*(longlong *)(param_3 + 8) + 0x49) & 4) != 0)) && (local_138 != 0)) &&
       ((*(byte *)(local_138 + 0x24) & 4) != 0)) {
      local_3c8 = &local_398;
      FUN_142ba68d0(&local_3b8,param_2,&local_378,param_3);
      local_398 = local_3b8;
      local_390 = local_3b0;
      uStack_388 = uStack_3a8;
      local_380 = local_3a0;
    }
    local_e0 = 0;
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
    FUN_144b0e552(&local_128);
  }
  if ((local_38 ^ (ulonglong)auStack_3e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142b8a521 FUN_142b8a521 body=69 status=ok
// SIG undefined FUN_142b8a521(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b8a521(void)

{
  _DAT_14c9b6c28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b8a563. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9b6c30,1);
  return;
}



// FUNCTION 142b8a566 FUN_142b8a566 body=69 status=ok
// SIG undefined FUN_142b8a566(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b8a566(void)

{
  _DAT_14c9b6c40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b8a5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9b6c48,1);
  return;
}



// FUNCTION 142b8a5ab FUN_142b8a5ab body=69 status=ok
// SIG undefined FUN_142b8a5ab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b8a5ab(void)

{
  _DAT_14c9b6c58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b8a5ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9b6c60,1);
  return;
}



// FUNCTION 142b8a5f0 FUN_142b8a5f0 body=69 status=ok
// SIG undefined FUN_142b8a5f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b8a5f0(void)

{
  _DAT_14c9b6c70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b8a632. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9b6c78,1);
  return;
}



// FUNCTION 142b8a635 FUN_142b8a635 body=69 status=ok
// SIG undefined FUN_142b8a635(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b8a635(void)

{
  _DAT_14c9b6c88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b8a677. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9b6c90,1);
  return;
}



// FUNCTION 142b8a67a FUN_142b8a67a body=69 status=ok
// SIG undefined FUN_142b8a67a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b8a67a(void)

{
  _DAT_14c9b6ca0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b8a6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9b6ca8,1);
  return;
}



// FUNCTION 142b8a6bf FUN_142b8a6bf body=69 status=ok
// SIG undefined FUN_142b8a6bf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b8a6bf(void)

{
  _DAT_14c9b6cb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b8a701. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9b6cc0,1);
  return;
}



// FUNCTION 142b8a704 FUN_142b8a704 body=69 status=ok
// SIG undefined FUN_142b8a704(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b8a704(void)

{
  _DAT_14c9b6cd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b8a746. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9b6cd8,1);
  return;
}



// FUNCTION 142b8a749 FUN_142b8a749 body=69 status=ok
// SIG undefined FUN_142b8a749(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b8a749(void)

{
  _DAT_14c9b6ce8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b8a78b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9b6cf0,1);
  return;
}



// FUNCTION 142b8a78e FUN_142b8a78e body=69 status=ok
// SIG undefined FUN_142b8a78e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b8a78e(void)

{
  _DAT_14c9b6d00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b8a7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9b6d08,1);
  return;
}



// FUNCTION 142b8a7d3 FUN_142b8a7d3 body=69 status=ok
// SIG undefined FUN_142b8a7d3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b8a7d3(void)

{
  _DAT_14c9b6d18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b8a815. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9b6d20,1);
  return;
}



// FUNCTION 142b8a818 FUN_142b8a818 body=69 status=ok
// SIG undefined FUN_142b8a818(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b8a818(void)

{
  _DAT_14c9b6d30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b8a85a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9b6d38,1);
  return;
}



// FUNCTION 142b8a85d FUN_142b8a85d body=69 status=ok
// SIG undefined FUN_142b8a85d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b8a85d(void)

{
  _DAT_14c9b6d48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b8a89f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9b6d50,1);
  return;
}



// FUNCTION 142b8a8a2 FUN_142b8a8a2 body=69 status=ok
// SIG undefined FUN_142b8a8a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142b8a8a2(void)

{
  _DAT_14c9b6d60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142b8a8e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9b6d68,1);
  return;
}


